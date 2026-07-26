#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <mach-o/dyld.h>
#import <mach-o/loader.h>
#import <mach/vm_prot.h>
#import <objc/message.h>
#import <objc/runtime.h>
#import <substrate.h>

#include <stdatomic.h>
#include <stdbool.h>
#include <string.h>

/*
 * Companion hook for the recovered WCGlass build.
 *
 * The original WCGlass.dylib stays byte-for-byte separate from this tweak.
 * UIKit/NSUserDefaults hooks are installed immediately. WCGlass-specific
 * Objective-C hooks are installed as soon as dyld maps its image.
 *
 * Important: the original authorization response and local-account scan
 * routines are deliberately left intact. They perform initialization and
 * persistence in addition to returning authorization state.
 */

static NSString *const WCLGHookLogPrefix = @"[WCLGFreeModeHook]";
static NSString *const WCLGTargetImageName = @"WCGlass.dylib";

enum {
    WCLGHookStatusDefaults       = 1u << 0,
    WCLGHookStatusAlertGuard     = 1u << 1,
    WCLGHookStatusImageDetected  = 1u << 2,
    WCLGHookStatusScalarGates    = 1u << 3,
    WCLGHookStatusConfigHooks    = 1u << 4,
    WCLGHookStatusSettingsHooks  = 1u << 5,
    WCLGHookStatusSeedApplied    = 1u << 6,
};

static _Atomic(uint32_t) gHookStatus = 0;
static _Atomic(uintptr_t) gWCGlassHeader = 0;
static _Atomic(intptr_t) gWCGlassSlide = 0;
static _Atomic(bool) gConfigHooksInstalled = false;
static _Atomic(bool) gSettingsHooksInstalled = false;
static _Atomic(bool) gRuntimeHooksInstalled = false;

#if defined(__arm64e__)
static const uintptr_t kAuthAllowedGlobalOffset = 0x5971D8;
static const uintptr_t kHardBlockedGlobalOffset = 0x4F46D8;
static const uintptr_t kExpiresGlobalOffset = 0x591D68;
static const uintptr_t kVerifiedGlobalOffset = 0x591D70;
static const uintptr_t kLiquidGlassEnabledGlobalOffset = 0x5970A8;
static const uint8_t kExpectedWCGlassUUID[16] = {
    0x6D, 0xC8, 0x03, 0x1F, 0x9E, 0xA1, 0x36, 0xB5,
    0x87, 0xCC, 0xD7, 0xC3, 0x00, 0x42, 0xDB, 0xF8,
};
#else
static const uintptr_t kAuthAllowedGlobalOffset = 0x5830B8;
static const uintptr_t kHardBlockedGlobalOffset = 0x4E05B8;
static const uintptr_t kExpiresGlobalOffset = 0x57DC48;
static const uintptr_t kVerifiedGlobalOffset = 0x57DC50;
static const uintptr_t kLiquidGlassEnabledGlobalOffset = 0x582F88;
static const uint8_t kExpectedWCGlassUUID[16] = {
    0x49, 0x19, 0x76, 0x97, 0x5E, 0x57, 0x3C, 0xD4,
    0x8A, 0x02, 0x47, 0x5A, 0xB6, 0x8E, 0xD7, 0xAA,
};
#endif

static void WCLGSetStatus(uint32_t flag) {
    atomic_fetch_or_explicit(&gHookStatus, flag, memory_order_relaxed);
}

static BOOL WCLGKeyEquals(id key, NSString *expected) {
    return [key isKindOfClass:NSString.class] && [(NSString *)key isEqualToString:expected];
}

static BOOL WCLGIsForcedTrueKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthAllowed") ||
           WCLGKeyEquals(key, @"WCLGLocalOfficialOK") ||
           WCLGKeyEquals(key, @"WCLGLocalGroupOK") ||
           WCLGKeyEquals(key, @"xg_liquid_glass_enabled");
}

static BOOL WCLGIsForcedFalseKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthHardBlocked");
}

static BOOL WCLGIsExpiryKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthExpiresAt");
}

static BOOL WCLGIsVerifiedKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthVerifiedAt") ||
           WCLGKeyEquals(key, @"WCLGLocalAuthScannedAt") ||
           WCLGKeyEquals(key, @"WCLGLocalGroupScannedAt");
}

static BOOL WCLGIsFeatureKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthFeatures");
}

static BOOL WCLGIsDeniedFeaturesKey(id key) {
    return WCLGKeyEquals(key, @"denied_features") ||
           WCLGKeyEquals(key, @"FLGUnifiedServerAuthDeniedFeatures");
}

static BOOL WCLGIsLastCodeKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthLastCode");
}

static BOOL WCLGIsLastMessageKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthLastMessage");
}

static BOOL WCLGIsControlledKey(id key) {
    return WCLGIsForcedTrueKey(key) ||
           WCLGIsForcedFalseKey(key) ||
           WCLGIsExpiryKey(key) ||
           WCLGIsVerifiedKey(key) ||
           WCLGIsFeatureKey(key) ||
           WCLGIsDeniedFeaturesKey(key) ||
           WCLGIsLastCodeKey(key) ||
           WCLGIsLastMessageKey(key);
}

static NSTimeInterval WCLGFarFutureTimestamp(void) {
    return 4102444800.0; /* 2100-01-01 UTC */
}

static id WCLGFeatureList(void) {
    static NSArray<NSString *> *features;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        features = @[@"__wclg_all__"];
    });
    return features;
}

static BOOL WCLGApplyRuntimeGlobals(void);

static id WCLGOverrideObjectForKey(id key, id originalValue, BOOL *didOverride) {
    if (WCLGIsForcedTrueKey(key)) {
        *didOverride = YES;
        return @YES;
    }
    if (WCLGIsForcedFalseKey(key)) {
        *didOverride = YES;
        return @NO;
    }
    if (WCLGIsExpiryKey(key)) {
        *didOverride = YES;
        return @(WCLGFarFutureTimestamp());
    }
    if (WCLGIsVerifiedKey(key)) {
        *didOverride = YES;
        return @(NSDate.date.timeIntervalSince1970);
    }
    if (WCLGIsFeatureKey(key)) {
        *didOverride = YES;
        return WCLGFeatureList();
    }
    if (WCLGIsDeniedFeaturesKey(key)) {
        *didOverride = YES;
        return @[];
    }
    if (WCLGIsLastCodeKey(key)) {
        *didOverride = YES;
        return @0;
    }
    if (WCLGIsLastMessageKey(key)) {
        *didOverride = YES;
        return @"";
    }

    *didOverride = NO;
    return originalValue;
}

static id WCLGCoerceWriteObject(id key, id requestedValue) {
    BOOL overridden = NO;
    id value = WCLGOverrideObjectForKey(key, requestedValue, &overridden);
    return overridden ? value : requestedValue;
}

#pragma mark - Early NSUserDefaults hooks

static id (*OrigDefaultsObjectForKey)(NSUserDefaults *, SEL, NSString *);
static BOOL (*OrigDefaultsBoolForKey)(NSUserDefaults *, SEL, NSString *);
static double (*OrigDefaultsDoubleForKey)(NSUserDefaults *, SEL, NSString *);
static void (*OrigDefaultsSetObjectForKey)(NSUserDefaults *, SEL, id, NSString *);
static void (*OrigDefaultsSetBoolForKey)(NSUserDefaults *, SEL, BOOL, NSString *);
static void (*OrigDefaultsSetDoubleForKey)(NSUserDefaults *, SEL, double, NSString *);

static id HookDefaultsObjectForKey(NSUserDefaults *self, SEL _cmd, NSString *key) {
    BOOL overridden = NO;
    id forced = WCLGOverrideObjectForKey(key, nil, &overridden);
    return overridden ? forced : OrigDefaultsObjectForKey(self, _cmd, key);
}

static BOOL HookDefaultsBoolForKey(NSUserDefaults *self, SEL _cmd, NSString *key) {
    if (WCLGIsForcedTrueKey(key)) {
        return YES;
    }
    if (WCLGIsForcedFalseKey(key)) {
        return NO;
    }
    return OrigDefaultsBoolForKey(self, _cmd, key);
}

static double HookDefaultsDoubleForKey(NSUserDefaults *self, SEL _cmd, NSString *key) {
    if (WCLGIsExpiryKey(key)) {
        return WCLGFarFutureTimestamp();
    }
    if (WCLGIsVerifiedKey(key)) {
        return NSDate.date.timeIntervalSince1970;
    }
    return OrigDefaultsDoubleForKey(self, _cmd, key);
}

static void HookDefaultsSetObjectForKey(NSUserDefaults *self, SEL _cmd, id value, NSString *key) {
    OrigDefaultsSetObjectForKey(self, _cmd, WCLGCoerceWriteObject(key, value), key);
}

static void HookDefaultsSetBoolForKey(NSUserDefaults *self, SEL _cmd, BOOL value, NSString *key) {
    if (WCLGIsForcedTrueKey(key)) {
        value = YES;
    } else if (WCLGIsForcedFalseKey(key)) {
        value = NO;
    }
    OrigDefaultsSetBoolForKey(self, _cmd, value, key);
}

static void HookDefaultsSetDoubleForKey(NSUserDefaults *self, SEL _cmd, double value, NSString *key) {
    if (WCLGIsExpiryKey(key)) {
        value = WCLGFarFutureTimestamp();
    } else if (WCLGIsVerifiedKey(key)) {
        value = NSDate.date.timeIntervalSince1970;
    }
    OrigDefaultsSetDoubleForKey(self, _cmd, value, key);
}

#pragma mark - Block-dialog guard

static const void *kWCLGBlockedAlertMarker = &kWCLGBlockedAlertMarker;
static id (*OrigAlertCreate)(id, SEL, NSString *, NSString *, UIAlertControllerStyle);
static void (*OrigPresentViewController)(UIViewController *, SEL, UIViewController *, BOOL, void (^)(void));

static BOOL WCLGLooksLikeSuppressedDialog(NSString *title, NSString *message) {
    NSString *text = [NSString stringWithFormat:@"%@\n%@", title ?: @"", message ?: @""];
    return [text containsString:@"封禁"] ||
           [text containsString:@"禁止使用"] ||
           [text containsString:@"需要授权"] ||
           [text containsString:@"授权功能"] ||
           [text containsString:@"关注公众号"] ||
           [text containsString:@"请先关注"] ||
           [text localizedCaseInsensitiveContainsString:@"hard blocked"];
}

static id HookAlertCreate(id self,
                          SEL _cmd,
                          NSString *title,
                          NSString *message,
                          UIAlertControllerStyle style) {
    id alert = OrigAlertCreate(self, _cmd, title, message, style);
    if (alert && WCLGLooksLikeSuppressedDialog(title, message)) {
        objc_setAssociatedObject(alert,
                                 kWCLGBlockedAlertMarker,
                                 @YES,
                                 OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        NSLog(@"%@ marked blocked authorization dialog: %@ / %@",
              WCLGHookLogPrefix,
              title,
              message);
    }
    return alert;
}

static void HookPresentViewController(UIViewController *self,
                                      SEL _cmd,
                                      UIViewController *controller,
                                      BOOL animated,
                                      void (^completion)(void)) {
    NSString *title = nil;
    NSString *message = nil;
    if ([controller isKindOfClass:UIAlertController.class]) {
        UIAlertController *alert = (UIAlertController *)controller;
        title = alert.title;
        message = alert.message;
    }

    BOOL marked = [objc_getAssociatedObject(controller, kWCLGBlockedAlertMarker) boolValue];
    if (marked || WCLGLooksLikeSuppressedDialog(title, message)) {
        NSLog(@"%@ suppressed blocked authorization dialog: %@ / %@",
              WCLGHookLogPrefix,
              title,
              message);
        if (completion) {
            completion();
        }
        return;
    }
    OrigPresentViewController(self, _cmd, controller, animated, completion);
}

static BOOL WCLGHookInstanceMethod(Class cls, SEL selector, IMP replacement, IMP *original) {
    Method method = class_getInstanceMethod(cls, selector);
    if (!method) {
        return NO;
    }
    MSHookMessageEx(cls, selector, replacement, original);
    return YES;
}

static BOOL WCLGHookClassMethod(Class cls, SEL selector, IMP replacement, IMP *original) {
    Class metaClass = object_getClass(cls);
    Method method = class_getClassMethod(cls, selector);
    if (!metaClass || !method) {
        return NO;
    }
    MSHookMessageEx(metaClass, selector, replacement, original);
    return YES;
}

static void WCLGInstallEarlyRuntimeHooks(void) {
    bool expected = false;
    if (!atomic_compare_exchange_strong(&gRuntimeHooksInstalled, &expected, true)) {
        return;
    }

    Class defaultsClass = NSUserDefaults.class;
    BOOL defaultsOK =
        WCLGHookInstanceMethod(defaultsClass,
                               @selector(objectForKey:),
                               (IMP)HookDefaultsObjectForKey,
                               (IMP *)&OrigDefaultsObjectForKey) &&
        WCLGHookInstanceMethod(defaultsClass,
                               @selector(boolForKey:),
                               (IMP)HookDefaultsBoolForKey,
                               (IMP *)&OrigDefaultsBoolForKey) &&
        WCLGHookInstanceMethod(defaultsClass,
                               @selector(doubleForKey:),
                               (IMP)HookDefaultsDoubleForKey,
                               (IMP *)&OrigDefaultsDoubleForKey) &&
        WCLGHookInstanceMethod(defaultsClass,
                               @selector(setObject:forKey:),
                               (IMP)HookDefaultsSetObjectForKey,
                               (IMP *)&OrigDefaultsSetObjectForKey) &&
        WCLGHookInstanceMethod(defaultsClass,
                               @selector(setBool:forKey:),
                               (IMP)HookDefaultsSetBoolForKey,
                               (IMP *)&OrigDefaultsSetBoolForKey) &&
        WCLGHookInstanceMethod(defaultsClass,
                               @selector(setDouble:forKey:),
                               (IMP)HookDefaultsSetDoubleForKey,
                               (IMP *)&OrigDefaultsSetDoubleForKey);

    if (defaultsOK) {
        WCLGSetStatus(WCLGHookStatusDefaults);
    }

    BOOL alertOK =
        WCLGHookClassMethod(UIAlertController.class,
                            @selector(alertControllerWithTitle:message:preferredStyle:),
                            (IMP)HookAlertCreate,
                            (IMP *)&OrigAlertCreate) &&
        WCLGHookInstanceMethod(UIViewController.class,
                               @selector(presentViewController:animated:completion:),
                               (IMP)HookPresentViewController,
                               (IMP *)&OrigPresentViewController);

    if (alertOK) {
        WCLGSetStatus(WCLGHookStatusAlertGuard);
    }

    NSLog(@"%@ early hooks: defaults=%d alertGuard=%d",
          WCLGHookLogPrefix,
          defaultsOK,
          alertOK);
}

#pragma mark - WCLGConfig hooks

static id (*OrigConfigCachedObject)(id, SEL, id);
static id (*OrigConfigObject)(id, SEL, id);
static BOOL (*OrigConfigBool)(id, SEL, id);
static BOOL (*OrigConfigBoolDefault)(id, SEL, id, BOOL);
static NSInteger (*OrigConfigInteger)(id, SEL, id);
static NSInteger (*OrigConfigIntegerDefault)(id, SEL, id, NSInteger);
static double (*OrigConfigDouble)(id, SEL, id);
static BOOL (*OrigConfigHasValue)(id, SEL, id);
static void (*OrigConfigSetCachedObject)(id, SEL, id, id);
static void (*OrigConfigSetObject)(id, SEL, id, id);
static void (*OrigConfigSetBool)(id, SEL, BOOL, id);
static void (*OrigConfigSetInteger)(id, SEL, NSInteger, id);
static void (*OrigConfigSetDouble)(id, SEL, double, id);
static BOOL (*OrigConfigLiquidGlassEnabled)(id, SEL);
static void (*OrigConfigRefreshAtomicMirrors)(id, SEL);
static void (*OrigConfigMaybeUpdateMirror)(id, SEL, id, id);

static id HookConfigCachedObject(id self, SEL _cmd, id key) {
    BOOL overridden = NO;
    id forced = WCLGOverrideObjectForKey(key, nil, &overridden);
    return overridden ? forced : OrigConfigCachedObject(self, _cmd, key);
}

static id HookConfigObject(id self, SEL _cmd, id key) {
    BOOL overridden = NO;
    id forced = WCLGOverrideObjectForKey(key, nil, &overridden);
    return overridden ? forced : OrigConfigObject(self, _cmd, key);
}

static BOOL HookConfigBool(id self, SEL _cmd, id key) {
    if (WCLGIsForcedTrueKey(key)) {
        return YES;
    }
    if (WCLGIsForcedFalseKey(key)) {
        return NO;
    }
    return OrigConfigBool(self, _cmd, key);
}

static BOOL HookConfigBoolDefault(id self, SEL _cmd, id key, BOOL defaultValue) {
    if (WCLGIsForcedTrueKey(key)) {
        return YES;
    }
    if (WCLGIsForcedFalseKey(key)) {
        return NO;
    }
    return OrigConfigBoolDefault(self, _cmd, key, defaultValue);
}

static NSInteger HookConfigInteger(id self, SEL _cmd, id key) {
    if (WCLGIsLastCodeKey(key)) {
        return 0;
    }
    return OrigConfigInteger(self, _cmd, key);
}

static NSInteger HookConfigIntegerDefault(id self, SEL _cmd, id key, NSInteger defaultValue) {
    if (WCLGIsLastCodeKey(key)) {
        return 0;
    }
    return OrigConfigIntegerDefault(self, _cmd, key, defaultValue);
}

static double HookConfigDouble(id self, SEL _cmd, id key) {
    if (WCLGIsExpiryKey(key)) {
        return WCLGFarFutureTimestamp();
    }
    if (WCLGIsVerifiedKey(key)) {
        return NSDate.date.timeIntervalSince1970;
    }
    return OrigConfigDouble(self, _cmd, key);
}

static BOOL HookConfigHasValue(id self, SEL _cmd, id key) {
    if (WCLGIsControlledKey(key)) {
        return YES;
    }
    return OrigConfigHasValue(self, _cmd, key);
}

static void HookConfigSetCachedObject(id self, SEL _cmd, id value, id key) {
    OrigConfigSetCachedObject(self, _cmd, WCLGCoerceWriteObject(key, value), key);
}

static void HookConfigSetObject(id self, SEL _cmd, id value, id key) {
    OrigConfigSetObject(self, _cmd, WCLGCoerceWriteObject(key, value), key);
}

static void HookConfigSetBool(id self, SEL _cmd, BOOL value, id key) {
    if (WCLGIsForcedTrueKey(key)) {
        value = YES;
    } else if (WCLGIsForcedFalseKey(key)) {
        value = NO;
    }
    OrigConfigSetBool(self, _cmd, value, key);
}

static void HookConfigSetInteger(id self, SEL _cmd, NSInteger value, id key) {
    if (WCLGIsLastCodeKey(key)) {
        value = 0;
    }
    OrigConfigSetInteger(self, _cmd, value, key);
}

static void HookConfigSetDouble(id self, SEL _cmd, double value, id key) {
    if (WCLGIsExpiryKey(key)) {
        value = WCLGFarFutureTimestamp();
    } else if (WCLGIsVerifiedKey(key)) {
        value = NSDate.date.timeIntervalSince1970;
    }
    OrigConfigSetDouble(self, _cmd, value, key);
}

static BOOL HookConfigLiquidGlassEnabled(id self, SEL _cmd) {
    return YES;
}

static void HookConfigRefreshAtomicMirrors(id self, SEL _cmd) {
    OrigConfigRefreshAtomicMirrors(self, _cmd);
    WCLGApplyRuntimeGlobals();
}

static void HookConfigMaybeUpdateMirror(id self, SEL _cmd, id key, id value) {
    OrigConfigMaybeUpdateMirror(self, _cmd, key, value);
    if (WCLGIsControlledKey(key)) {
        WCLGApplyRuntimeGlobals();
    }
}

static BOOL WCLGInstallConfigHooks(void) {
    if (atomic_load_explicit(&gConfigHooksInstalled, memory_order_acquire)) {
        return YES;
    }

    Class cls = NSClassFromString(@"WCLGConfig");
    if (!cls) {
        return NO;
    }

    BOOL ok = YES;
#define WCLG_HOOK_CONFIG(selectorName, replacement, original) \
    ok = WCLGHookInstanceMethod(cls, NSSelectorFromString(selectorName), \
                                (IMP)replacement, (IMP *)&original) && ok

    WCLG_HOOK_CONFIG(@"cachedObjectForKey:", HookConfigCachedObject, OrigConfigCachedObject);
    WCLG_HOOK_CONFIG(@"objectForKey:", HookConfigObject, OrigConfigObject);
    WCLG_HOOK_CONFIG(@"boolForKey:", HookConfigBool, OrigConfigBool);
    WCLG_HOOK_CONFIG(@"boolForKey:defaultValue:", HookConfigBoolDefault, OrigConfigBoolDefault);
    WCLG_HOOK_CONFIG(@"integerForKey:", HookConfigInteger, OrigConfigInteger);
    WCLG_HOOK_CONFIG(@"integerForKey:defaultValue:", HookConfigIntegerDefault, OrigConfigIntegerDefault);
    WCLG_HOOK_CONFIG(@"doubleForKey:", HookConfigDouble, OrigConfigDouble);
    WCLG_HOOK_CONFIG(@"hasValueForKey:", HookConfigHasValue, OrigConfigHasValue);
    WCLG_HOOK_CONFIG(@"setCachedObject:forKey:", HookConfigSetCachedObject, OrigConfigSetCachedObject);
    WCLG_HOOK_CONFIG(@"setObject:forKey:", HookConfigSetObject, OrigConfigSetObject);
    WCLG_HOOK_CONFIG(@"setBool:forKey:", HookConfigSetBool, OrigConfigSetBool);
    WCLG_HOOK_CONFIG(@"setInteger:forKey:", HookConfigSetInteger, OrigConfigSetInteger);
    WCLG_HOOK_CONFIG(@"setDouble:forKey:", HookConfigSetDouble, OrigConfigSetDouble);
    WCLG_HOOK_CONFIG(@"liquidGlassEnabled",
                     HookConfigLiquidGlassEnabled,
                     OrigConfigLiquidGlassEnabled);
    WCLG_HOOK_CONFIG(@"refreshAtomicMirrors",
                     HookConfigRefreshAtomicMirrors,
                     OrigConfigRefreshAtomicMirrors);
    WCLG_HOOK_CONFIG(@"maybeUpdateMirrorForKey:value:",
                     HookConfigMaybeUpdateMirror,
                     OrigConfigMaybeUpdateMirror);
#undef WCLG_HOOK_CONFIG

    if (ok) {
        atomic_store_explicit(&gConfigHooksInstalled, true, memory_order_release);
        WCLGSetStatus(WCLGHookStatusConfigHooks);
        NSLog(@"%@ WCLGConfig hooks installed", WCLGHookLogPrefix);
    } else {
        NSLog(@"%@ WCLGConfig class found, one or more selectors missing", WCLGHookLogPrefix);
    }
    return ok;
}

#pragma mark - WCLGSettingsViewController hooks

static id (*OrigAuthorizationColor)(id, SEL, BOOL);
static void (*OrigApplyAuthorizationBackground)(id, SEL, id, BOOL);
static void (*OrigConfigureSwitchCell)(id,
                                       SEL,
                                       id,
                                       UISwitch *,
                                       id,
                                       id,
                                       NSInteger,
                                       BOOL,
                                       BOOL);
static id (*OrigRootCard)(id,
                          SEL,
                          CGRect,
                          id,
                          id,
                          id,
                          NSInteger,
                          BOOL,
                          UISwitch *);
static void (*OrigToggleSwitch)(id, SEL, UISwitch *);

static id HookAuthorizationColor(id self, SEL _cmd, BOOL allowed) {
    return OrigAuthorizationColor(self, _cmd, YES);
}

static void HookApplyAuthorizationBackground(id self, SEL _cmd, id cell, BOOL allowed) {
    OrigApplyAuthorizationBackground(self, _cmd, cell, YES);
}

static BOOL HookOfficialAccountReady(id self, SEL _cmd) {
    return YES;
}

static void HookShowOfficialAccountAlert(id self, SEL _cmd) {
    NSLog(@"%@ ignored official-account authorization alert", WCLGHookLogPrefix);
}

static void HookConfigureSwitchCell(id self,
                                    SEL _cmd,
                                    id cell,
                                    UISwitch *toggle,
                                    id title,
                                    id detail,
                                    NSInteger tag,
                                    BOOL on,
                                    BOOL enabled) {
    OrigConfigureSwitchCell(self,
                            _cmd,
                            cell,
                            toggle,
                            title,
                            detail,
                            tag,
                            on,
                            YES);
    toggle.enabled = YES;
}

static id HookRootCard(id self,
                       SEL _cmd,
                       CGRect frame,
                       id title,
                       id detail,
                       id symbol,
                       NSInteger tag,
                       BOOL enabled,
                       UISwitch *toggle) {
    id card = OrigRootCard(self,
                           _cmd,
                           frame,
                           title,
                           detail,
                           symbol,
                           tag,
                           YES,
                           toggle);
    toggle.enabled = YES;
    return card;
}

static void HookToggleSwitch(id self, SEL _cmd, UISwitch *toggle) {
    BOOL requestedOn = toggle.isOn;
    NSInteger tag = toggle.tag;

    if (requestedOn) {
        WCLGApplyRuntimeGlobals();
    }

    OrigToggleSwitch(self, _cmd, toggle);

    if (requestedOn) {
        WCLGApplyRuntimeGlobals();
        [toggle setEnabled:YES];
        NSLog(@"%@ switch event tag=%ld requested=1 resulting=%d",
              WCLGHookLogPrefix,
              (long)tag,
              toggle.isOn);
    }
}

static BOOL WCLGInstallSettingsHooks(void) {
    if (atomic_load_explicit(&gSettingsHooksInstalled, memory_order_acquire)) {
        return YES;
    }

    Class cls = NSClassFromString(@"WCLGSettingsViewController");
    if (!cls) {
        return NO;
    }

    BOOL ok =
        WCLGHookInstanceMethod(cls,
                               NSSelectorFromString(@"authorizationCellBackgroundColorForAllowed:"),
                               (IMP)HookAuthorizationColor,
                               (IMP *)&OrigAuthorizationColor) &&
        WCLGHookInstanceMethod(cls,
                               NSSelectorFromString(@"applyAuthorizationBackgroundToCell:allowed:"),
                               (IMP)HookApplyAuthorizationBackground,
                               (IMP *)&OrigApplyAuthorizationBackground) &&
        WCLGHookInstanceMethod(cls,
                               NSSelectorFromString(@"officialAccountReadyForAction"),
                               (IMP)HookOfficialAccountReady,
                               NULL) &&
        WCLGHookInstanceMethod(cls,
                               NSSelectorFromString(@"showOfficialAccountAlert"),
                               (IMP)HookShowOfficialAccountAlert,
                               NULL) &&
        WCLGHookInstanceMethod(
            cls,
            NSSelectorFromString(@"configureSwitchCell:switch:title:detail:tag:on:enabled:"),
            (IMP)HookConfigureSwitchCell,
            (IMP *)&OrigConfigureSwitchCell) &&
        WCLGHookInstanceMethod(
            cls,
            NSSelectorFromString(@"rootCardWithFrame:title:detail:symbol:tag:enabled:switchView:"),
            (IMP)HookRootCard,
            (IMP *)&OrigRootCard) &&
        WCLGHookInstanceMethod(cls,
                               NSSelectorFromString(@"toggleSwitch:"),
                               (IMP)HookToggleSwitch,
                               (IMP *)&OrigToggleSwitch);

    if (ok) {
        atomic_store_explicit(&gSettingsHooksInstalled, true, memory_order_release);
        WCLGSetStatus(WCLGHookStatusSettingsHooks);
        NSLog(@"%@ settings authorization hooks installed", WCLGHookLogPrefix);
    } else {
        NSLog(@"%@ settings class found, one or more selectors missing", WCLGHookLogPrefix);
    }
    return ok;
}

static BOOL WCLGImageUUIDMatches(const struct mach_header *header) {
    if (!header || header->magic != MH_MAGIC_64) {
        return NO;
    }

    const uint8_t *cursor = (const uint8_t *)header + sizeof(struct mach_header_64);
    const struct mach_header_64 *header64 = (const struct mach_header_64 *)header;
    for (uint32_t index = 0; index < header64->ncmds; index++) {
        const struct load_command *command = (const struct load_command *)cursor;
        if (command->cmd == LC_UUID && command->cmdsize >= sizeof(struct uuid_command)) {
            const struct uuid_command *uuidCommand = (const struct uuid_command *)cursor;
            return memcmp(uuidCommand->uuid,
                          kExpectedWCGlassUUID,
                          sizeof(kExpectedWCGlassUUID)) == 0;
        }
        cursor += command->cmdsize;
    }
    return NO;
}

static BOOL WCLGAddressInsideWritableData(const struct mach_header *header,
                                          intptr_t slide,
                                          uintptr_t address,
                                          size_t size) {
    if (!header || header->magic != MH_MAGIC_64) {
        return NO;
    }

    const uint8_t *cursor = (const uint8_t *)header + sizeof(struct mach_header_64);
    const struct mach_header_64 *header64 = (const struct mach_header_64 *)header;
    for (uint32_t index = 0; index < header64->ncmds; index++) {
        const struct load_command *command = (const struct load_command *)cursor;
        if (command->cmd == LC_SEGMENT_64) {
            const struct segment_command_64 *segment =
                (const struct segment_command_64 *)cursor;
            uintptr_t start = (uintptr_t)(slide + (intptr_t)segment->vmaddr);
            uintptr_t end = start + (uintptr_t)segment->vmsize;
            BOOL writable = (segment->initprot & VM_PROT_WRITE) != 0;
            if (writable && address >= start && address + size <= end) {
                return YES;
            }
        }
        cursor += command->cmdsize;
    }
    return NO;
}

static BOOL WCLGApplyRuntimeGlobals(void) {
    const struct mach_header *header =
        (const struct mach_header *)atomic_load_explicit(&gWCGlassHeader,
                                                         memory_order_acquire);
    intptr_t slide = atomic_load_explicit(&gWCGlassSlide, memory_order_acquire);
    if (!header || !WCLGImageUUIDMatches(header)) {
        return NO;
    }

    uintptr_t allowedAddress = (uintptr_t)(slide + (intptr_t)kAuthAllowedGlobalOffset);
    uintptr_t blockedAddress = (uintptr_t)(slide + (intptr_t)kHardBlockedGlobalOffset);
    uintptr_t expiresAddress = (uintptr_t)(slide + (intptr_t)kExpiresGlobalOffset);
    uintptr_t verifiedAddress = (uintptr_t)(slide + (intptr_t)kVerifiedGlobalOffset);
    uintptr_t masterAddress =
        (uintptr_t)(slide + (intptr_t)kLiquidGlassEnabledGlobalOffset);

    uintptr_t addresses[] = {
        allowedAddress,
        blockedAddress,
        expiresAddress,
        verifiedAddress,
        masterAddress,
    };
    size_t sizes[] = {
        sizeof(uint8_t),
        sizeof(uint8_t),
        sizeof(uint64_t),
        sizeof(uint64_t),
        sizeof(uint8_t),
    };
    for (NSUInteger index = 0; index < sizeof(addresses) / sizeof(addresses[0]); index++) {
        if (!WCLGAddressInsideWritableData(header, slide, addresses[index], sizes[index])) {
            NSLog(@"%@ writable-global validation failed at %p",
                  WCLGHookLogPrefix,
                  (void *)addresses[index]);
            return NO;
        }
    }

    __atomic_store_n((uint8_t *)allowedAddress, 1, __ATOMIC_RELEASE);
    __atomic_store_n((uint8_t *)blockedAddress, 0, __ATOMIC_RELEASE);
    __atomic_store_n((uint8_t *)masterAddress, 1, __ATOMIC_RELEASE);
    double expires = WCLGFarFutureTimestamp();
    double verified = NSDate.date.timeIntervalSince1970;
    uint64_t expiresBits = 0;
    uint64_t verifiedBits = 0;
    memcpy(&expiresBits, &expires, sizeof(expiresBits));
    memcpy(&verifiedBits, &verified, sizeof(verifiedBits));
    __atomic_store_n((uint64_t *)expiresAddress, expiresBits, __ATOMIC_RELEASE);
    __atomic_store_n((uint64_t *)verifiedAddress, verifiedBits, __ATOMIC_RELEASE);

    WCLGSetStatus(WCLGHookStatusScalarGates);
    return YES;
}

#pragma mark - Cache seed and retry

static void WCLGSeedAuthorizationCache(void) {
    NSUserDefaults *defaults = NSUserDefaults.standardUserDefaults;
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    NSDictionary<NSString *, id> *values = @{
        @"FLGUnifiedServerAuthAllowed": @YES,
        @"FLGUnifiedServerAuthHardBlocked": @NO,
        @"FLGUnifiedServerAuthExpiresAt": @(WCLGFarFutureTimestamp()),
        @"FLGUnifiedServerAuthVerifiedAt": @(now),
        @"FLGUnifiedServerAuthFeatures": WCLGFeatureList(),
        @"denied_features": @[],
        @"FLGUnifiedServerAuthLastCode": @0,
        @"FLGUnifiedServerAuthLastMessage": @"",
        @"WCLGLocalOfficialOK": @YES,
        @"WCLGLocalGroupOK": @YES,
        @"WCLGLocalAuthScannedAt": @(now),
        @"WCLGLocalGroupScannedAt": @(now),
        @"xg_liquid_glass_enabled": @YES,
    };

    [values enumerateKeysAndObjectsUsingBlock:^(NSString *key, id value, BOOL *stop) {
        (void)stop;
        [defaults setObject:value forKey:key];
    }];

    Class configClass = NSClassFromString(@"WCLGConfig");
    SEL sharedSelector = NSSelectorFromString(@"sharedConfig");
    id config = nil;
    if (configClass && [configClass respondsToSelector:sharedSelector]) {
        config = ((id (*)(id, SEL))objc_msgSend)(configClass, sharedSelector);
    }

    SEL cacheSelector = NSSelectorFromString(@"setCachedObject:forKey:");
    if (config && [config respondsToSelector:cacheSelector]) {
        [values enumerateKeysAndObjectsUsingBlock:^(NSString *key, id value, BOOL *stop) {
            (void)stop;
            ((void (*)(id, SEL, id, id))objc_msgSend)(config, cacheSelector, value, key);
        }];
    }

    WCLGSetStatus(WCLGHookStatusSeedApplied);
    WCLGApplyRuntimeGlobals();
    NSLog(@"%@ authorization cache seed applied", WCLGHookLogPrefix);
}

static void WCLGRetryWCGlassHooks(NSUInteger attempt) {
    BOOL configReady = WCLGInstallConfigHooks();
    BOOL settingsReady = WCLGInstallSettingsHooks();

    if (configReady) {
        WCLGSeedAuthorizationCache();
    }

    if ((!configReady || !settingsReady) && attempt < 100) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.1 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            WCLGRetryWCGlassHooks(attempt + 1);
        });
    } else {
        NSLog(@"%@ Objective-C hook pass complete: config=%d settings=%d attempt=%lu",
              WCLGHookLogPrefix,
              configReady,
              settingsReady,
              (unsigned long)attempt);
    }
}

static BOOL WCLGFindImageInfo(const struct mach_header *header,
                              NSString **pathOut,
                              intptr_t *slideOut) {
    uint32_t count = _dyld_image_count();
    for (uint32_t index = 0; index < count; index++) {
        if (_dyld_get_image_header(index) != header) {
            continue;
        }
        const char *imageName = _dyld_get_image_name(index);
        if (pathOut) {
            *pathOut = imageName ? [NSString stringWithUTF8String:imageName] : @"";
        }
        if (slideOut) {
            *slideOut = _dyld_get_image_vmaddr_slide(index);
        }
        return YES;
    }
    return NO;
}

static void WCLGImageAdded(const struct mach_header *header, intptr_t callbackSlide) {
    @autoreleasepool {
        NSString *path = nil;
        intptr_t slide = callbackSlide;
        if (!WCLGFindImageInfo(header, &path, &slide)) {
            return;
        }
        if (![[path lastPathComponent] isEqualToString:WCLGTargetImageName]) {
            return;
        }

        uintptr_t expected = 0;
        if (!atomic_compare_exchange_strong(&gWCGlassHeader,
                                            &expected,
                                            (uintptr_t)header)) {
            return;
        }

        atomic_store_explicit(&gWCGlassSlide, slide, memory_order_release);
        WCLGSetStatus(WCLGHookStatusImageDetected);
        NSLog(@"%@ detected %@ header=%p slide=%p",
              WCLGHookLogPrefix,
              path,
              header,
              (void *)slide);

        WCLGInstallConfigHooks();
        WCLGInstallSettingsHooks();

        dispatch_async(dispatch_get_main_queue(), ^{
            WCLGRetryWCGlassHooks(0);
        });
    }
}

__attribute__((visibility("default")))
NSDictionary<NSString *, id> *WCLGFreeModeHookStatus(void) {
    return @{
        @"status_bits": @(atomic_load_explicit(&gHookStatus, memory_order_relaxed)),
        @"wcglass_header": @((unsigned long long)atomic_load_explicit(&gWCGlassHeader,
                                                                      memory_order_relaxed)),
        @"wcglass_slide": @((long long)atomic_load_explicit(&gWCGlassSlide,
                                                            memory_order_relaxed)),
        @"c_side_effect_functions_preserved": @YES,
        @"config_hooks": @(atomic_load_explicit(&gConfigHooksInstalled,
                                                memory_order_relaxed)),
        @"settings_hooks": @(atomic_load_explicit(&gSettingsHooksInstalled,
                                                  memory_order_relaxed)),
    };
}

__attribute__((constructor))
static void WCLGFreeModeHookInitialize(void) {
    @autoreleasepool {
        NSString *bundleIdentifier = NSBundle.mainBundle.bundleIdentifier ?: @"";
        if (![bundleIdentifier isEqualToString:@"com.tencent.xin"]) {
            return;
        }

        NSLog(@"%@ constructor", WCLGHookLogPrefix);
        WCLGInstallEarlyRuntimeHooks();
        _dyld_register_func_for_add_image(WCLGImageAdded);

        [NSNotificationCenter.defaultCenter
            addObserverForName:UIApplicationDidBecomeActiveNotification
                        object:nil
                         queue:NSOperationQueue.mainQueue
                    usingBlock:^(NSNotification *note) {
            (void)note;
            if (atomic_load_explicit(&gWCGlassHeader, memory_order_acquire)) {
                WCLGApplyRuntimeGlobals();
                WCLGSeedAuthorizationCache();
            }
        }];
    }
}
