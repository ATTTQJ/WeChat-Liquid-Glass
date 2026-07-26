#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <mach-o/dyld.h>
#import <mach-o/loader.h>
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
 * Objective-C and offset hooks are installed as soon as dyld maps its image.
 */

static NSString *const WCLGHookLogPrefix = @"[WCLGFreeModeHook]";
static NSString *const WCLGTargetImageName = @"WCGlass.dylib";

enum {
    WCLGHookStatusDefaults       = 1u << 0,
    WCLGHookStatusAlertGuard     = 1u << 1,
    WCLGHookStatusImageDetected  = 1u << 2,
    WCLGHookStatusOffsetHooks    = 1u << 3,
    WCLGHookStatusConfigHooks    = 1u << 4,
    WCLGHookStatusSettingsHooks  = 1u << 5,
    WCLGHookStatusSeedApplied    = 1u << 6,
};

static _Atomic(uint32_t) gHookStatus = 0;
static _Atomic(uintptr_t) gWCGlassHeader = 0;
static _Atomic(intptr_t) gWCGlassSlide = 0;
static _Atomic(bool) gOffsetHooksInstalled = false;
static _Atomic(bool) gConfigHooksInstalled = false;
static _Atomic(bool) gSettingsHooksInstalled = false;
static _Atomic(bool) gRuntimeHooksInstalled = false;

#if defined(__arm64e__)
static const uintptr_t kServerResponseOffset = 0xCF6A0;
static const uintptr_t kGroupGateOffset = 0xDCACC;
static const uintptr_t kOfficialGateOffset = 0xE3AB0;
static const uint8_t kExpectedWCGlassUUID[16] = {
    0x6D, 0xC8, 0x03, 0x1F, 0x9E, 0xA1, 0x36, 0xB5,
    0x87, 0xCC, 0xD7, 0xC3, 0x00, 0x42, 0xDB, 0xF8,
};
#else
static const uintptr_t kServerResponseOffset = 0xC7640;
static const uintptr_t kGroupGateOffset = 0xD30F4;
static const uintptr_t kOfficialGateOffset = 0xDB478;
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
           WCLGKeyEquals(key, @"WCLGLocalGroupOK");
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

@interface WCLGWildcardFeatureList : NSArray
@end

@implementation WCLGWildcardFeatureList

- (NSUInteger)count {
    return 1;
}

- (id)objectAtIndex:(NSUInteger)index {
    if (index == 0) {
        return @"*";
    }
    @throw [NSException exceptionWithName:NSRangeException
                                   reason:@"WCLGWildcardFeatureList index out of range"
                                 userInfo:nil];
}

- (BOOL)containsObject:(id)object {
    return object != nil;
}

- (NSUInteger)indexOfObject:(id)object {
    return object != nil ? 0 : NSNotFound;
}

- (NSString *)description {
    return @"<WCLGWildcardFeatureList: all features>";
}

@end

static id WCLGFeatureList(void) {
    static WCLGWildcardFeatureList *features;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        features = [WCLGWildcardFeatureList new];
    });
    return features;
}

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

static BOOL WCLGLooksLikeBlockDialog(NSString *title, NSString *message) {
    NSString *text = [NSString stringWithFormat:@"%@\n%@", title ?: @"", message ?: @""];
    return [text containsString:@"封禁"] ||
           [text containsString:@"禁止使用"] ||
           [text localizedCaseInsensitiveContainsString:@"hard blocked"];
}

static id HookAlertCreate(id self,
                          SEL _cmd,
                          NSString *title,
                          NSString *message,
                          UIAlertControllerStyle style) {
    id alert = OrigAlertCreate(self, _cmd, title, message, style);
    if (alert && WCLGLooksLikeBlockDialog(title, message)) {
        objc_setAssociatedObject(alert,
                                 kWCLGBlockedAlertMarker,
                                 @YES,
                                 OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        NSLog(@"%@ marked startup block dialog: %@ / %@", WCLGHookLogPrefix, title, message);
    }
    return alert;
}

static void HookPresentViewController(UIViewController *self,
                                      SEL _cmd,
                                      UIViewController *controller,
                                      BOOL animated,
                                      void (^completion)(void)) {
    if ([objc_getAssociatedObject(controller, kWCLGBlockedAlertMarker) boolValue]) {
        NSLog(@"%@ suppressed startup block dialog", WCLGHookLogPrefix);
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
                               NULL);

    if (ok) {
        atomic_store_explicit(&gSettingsHooksInstalled, true, memory_order_release);
        WCLGSetStatus(WCLGHookStatusSettingsHooks);
        NSLog(@"%@ settings authorization hooks installed", WCLGHookLogPrefix);
    } else {
        NSLog(@"%@ settings class found, one or more selectors missing", WCLGHookLogPrefix);
    }
    return ok;
}

#pragma mark - Offset hooks

typedef void (*WCLGServerResponseFunction)(void *);
typedef uintptr_t (*WCLGGateFunction)(uintptr_t);

static WCLGServerResponseFunction OrigServerResponse;
static WCLGGateFunction OrigGroupGate;
static WCLGGateFunction OrigOfficialGate;

static void HookServerResponse(void *context) {
    NSLog(@"%@ ignored server authorization response", WCLGHookLogPrefix);
}

static uintptr_t HookAllowedGate(uintptr_t context) {
    return 1;
}

static BOOL WCLGAddressInsideText(const struct mach_header *header,
                                  intptr_t slide,
                                  uintptr_t address) {
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
            if (strncmp(segment->segname, "__TEXT", sizeof(segment->segname)) == 0) {
                uintptr_t start = (uintptr_t)(slide + (intptr_t)segment->vmaddr);
                uintptr_t end = start + (uintptr_t)segment->vmsize;
                return address >= start && address < end;
            }
        }
        cursor += command->cmdsize;
    }
    return NO;
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

static BOOL WCLGInstallOffsetHooks(const struct mach_header *header, intptr_t slide) {
    bool expected = false;
    if (!atomic_compare_exchange_strong(&gOffsetHooksInstalled, &expected, true)) {
        return YES;
    }

    if (!WCLGImageUUIDMatches(header)) {
        atomic_store_explicit(&gOffsetHooksInstalled, false, memory_order_release);
        NSLog(@"%@ WCGlass UUID mismatch; version-specific C hooks skipped",
              WCLGHookLogPrefix);
        return NO;
    }

    uintptr_t serverAddress = (uintptr_t)(slide + (intptr_t)kServerResponseOffset);
    uintptr_t groupAddress = (uintptr_t)(slide + (intptr_t)kGroupGateOffset);
    uintptr_t officialAddress = (uintptr_t)(slide + (intptr_t)kOfficialGateOffset);

    if (!WCLGAddressInsideText(header, slide, serverAddress) ||
        !WCLGAddressInsideText(header, slide, groupAddress) ||
        !WCLGAddressInsideText(header, slide, officialAddress)) {
        atomic_store_explicit(&gOffsetHooksInstalled, false, memory_order_release);
        NSLog(@"%@ offset validation failed; C hooks skipped", WCLGHookLogPrefix);
        return NO;
    }

    MSHookFunction((void *)serverAddress,
                   (void *)HookServerResponse,
                   (void **)&OrigServerResponse);
    MSHookFunction((void *)groupAddress,
                   (void *)HookAllowedGate,
                   (void **)&OrigGroupGate);
    MSHookFunction((void *)officialAddress,
                   (void *)HookAllowedGate,
                   (void **)&OrigOfficialGate);

    WCLGSetStatus(WCLGHookStatusOffsetHooks);
    NSLog(@"%@ offset hooks installed: slide=%p server=%p group=%p official=%p",
          WCLGHookLogPrefix,
          (void *)slide,
          (void *)serverAddress,
          (void *)groupAddress,
          (void *)officialAddress);
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
        @"denied_features": @[],
        @"FLGUnifiedServerAuthLastCode": @0,
        @"FLGUnifiedServerAuthLastMessage": @"",
        @"WCLGLocalOfficialOK": @YES,
        @"WCLGLocalGroupOK": @YES,
        @"WCLGLocalAuthScannedAt": @(now),
        @"WCLGLocalGroupScannedAt": @(now),
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

        WCLGInstallOffsetHooks(header, slide);
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
        @"offset_hooks": @(atomic_load_explicit(&gOffsetHooksInstalled,
                                                memory_order_relaxed)),
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
    }
}
