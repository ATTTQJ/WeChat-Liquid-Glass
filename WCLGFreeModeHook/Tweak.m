#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <mach-o/dyld.h>
#import <mach-o/loader.h>
#import <mach/vm_prot.h>
#import <objc/message.h>
#import <objc/runtime.h>
#import <substrate.h>
#if __has_feature(ptrauth_calls)
#import <ptrauth.h>
#endif

#include <stdatomic.h>
#include <stdbool.h>
#include <string.h>

#import "WCGlass3025Bindings.h"

/*
 * Companion hook for WCGlass 3.0.2-5.  The target image remains unmodified.
 * All WCGlass-specific behavior is inactive until the matching architecture
 * UUID has been observed; this prevents cross-version cache writes or native
 * calls.  Authorization-related originals run first, then a normalized cache
 * snapshot is written through the original setters and its atomic mirrors are
 * refreshed.  No authorization C routine is replaced.
 */
static NSString *const WCLGHookLogPrefix = @"[WCLGFreeModeHook]";
static NSString *const WCLGTargetImageName = @"WCGlass.dylib";

enum {
    WCLGHookStatusRuntime = 1u << 0,
    WCLGHookStatusImage = 1u << 1,
    WCLGHookStatusUUID = 1u << 2,
    WCLGHookStatusConfig = 1u << 3,
    WCLGHookStatusSettings = 1u << 4,
    WCLGHookStatusNormalized = 1u << 5,
    WCLGHookStatusFeatureReplay = 1u << 6,
};

static _Atomic(uint32_t) gHookStatus = 0;
static _Atomic(uintptr_t) gWCGlassHeader = 0;
static _Atomic(intptr_t) gWCGlassSlide = 0;
static _Atomic(bool) gTargetValidated = false;
static _Atomic(bool) gRuntimeHooksInstalled = false;
static _Atomic(bool) gConfigHooksInstalled = false;
static _Atomic(bool) gSettingsHooksInstalled = false;
static _Atomic(bool) gFeatureReplayAttempted = false;
static _Atomic(bool) gFeatureReplaySucceeded = false;
static _Thread_local BOOL gNormalizing = NO;

static void WCLGSetStatus(uint32_t flag) {
    atomic_fetch_or_explicit(&gHookStatus, flag, memory_order_relaxed);
}

static BOOL WCLGTargetIsActive(void) {
    return atomic_load_explicit(&gTargetValidated, memory_order_acquire);
}

static BOOL WCLGKeyEquals(id key, NSString *expected) {
    return [key isKindOfClass:NSString.class] && [(NSString *)key isEqualToString:expected];
}

static BOOL WCLGIsAllowedKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthAllowed") ||
           WCLGKeyEquals(key, @"WCLGLocalOfficialOK") ||
           WCLGKeyEquals(key, @"WCLGLocalGroupOK") ||
           WCLGKeyEquals(key, @"xg_liquid_glass_enabled");
}
static BOOL WCLGIsHardBlockedKey(id key) { return WCLGKeyEquals(key, @"FLGUnifiedServerAuthHardBlocked"); }
static BOOL WCLGIsExpiryKey(id key) { return WCLGKeyEquals(key, @"FLGUnifiedServerAuthExpiresAt"); }
static BOOL WCLGIsVerifiedKey(id key) {
    return WCLGKeyEquals(key, @"FLGUnifiedServerAuthVerifiedAt") ||
           WCLGKeyEquals(key, @"WCLGLocalAuthScannedAt") ||
           WCLGKeyEquals(key, @"WCLGLocalGroupScannedAt");
}
static BOOL WCLGIsFeatureKey(id key) { return WCLGKeyEquals(key, @"FLGUnifiedServerAuthFeatures"); }
static BOOL WCLGIsDeniedFeaturesKey(id key) {
    return WCLGKeyEquals(key, @"denied_features") || WCLGKeyEquals(key, @"FLGUnifiedServerAuthDeniedFeatures");
}
static BOOL WCLGIsLastCodeKey(id key) { return WCLGKeyEquals(key, @"FLGUnifiedServerAuthLastCode"); }
static BOOL WCLGIsLastMessageKey(id key) { return WCLGKeyEquals(key, @"FLGUnifiedServerAuthLastMessage"); }
static BOOL WCLGIsControlledKey(id key) {
    return WCLGIsAllowedKey(key) || WCLGIsHardBlockedKey(key) || WCLGIsExpiryKey(key) ||
           WCLGIsVerifiedKey(key) || WCLGIsFeatureKey(key) || WCLGIsDeniedFeaturesKey(key) ||
           WCLGIsLastCodeKey(key) || WCLGIsLastMessageKey(key);
}

static NSTimeInterval WCLGFarFutureTimestamp(void) { return 4102444800.0; }
static NSArray<NSString *> *WCLGFeatureList(void) {
    static NSArray<NSString *> *features;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        features = @[@"__wclg_all__", @"long_press_menu", @"flow_bubble", @"tabbar_search_capsule",
                     @"search_tab_bar", @"chat_native_profile_title", @"liquid_glass", @"voip_bubble",
                     @"payment_card", @"chat_bubble", @"chat_bottom_tg", @"home_groups", @"message_merge"];
    });
    return features;
}

static id WCLGCanonicalValue(id key) {
    if (WCLGIsAllowedKey(key)) return @YES;
    if (WCLGIsHardBlockedKey(key)) return @NO;
    if (WCLGIsExpiryKey(key)) return @(WCLGFarFutureTimestamp());
    if (WCLGIsVerifiedKey(key)) return @(NSDate.date.timeIntervalSince1970);
    if (WCLGIsFeatureKey(key)) return WCLGFeatureList();
    if (WCLGIsDeniedFeaturesKey(key)) return @[];
    if (WCLGIsLastCodeKey(key)) return @0;
    if (WCLGIsLastMessageKey(key)) return @"";
    return nil;
}

#pragma mark - Original methods
static id (*OrigDefaultsObjectForKey)(NSUserDefaults *, SEL, NSString *);
static BOOL (*OrigDefaultsBoolForKey)(NSUserDefaults *, SEL, NSString *);
static double (*OrigDefaultsDoubleForKey)(NSUserDefaults *, SEL, NSString *);
static void (*OrigDefaultsSetObjectForKey)(NSUserDefaults *, SEL, id, NSString *);
static void (*OrigDefaultsSetBoolForKey)(NSUserDefaults *, SEL, BOOL, NSString *);
static void (*OrigDefaultsSetDoubleForKey)(NSUserDefaults *, SEL, double, NSString *);

static id (*OrigConfigCachedObject)(id, SEL, id);
static void (*OrigConfigSetCachedObject)(id, SEL, id, id);
static BOOL (*OrigConfigBoolDefault)(id, SEL, id, BOOL);
static void (*OrigConfigSetBool)(id, SEL, BOOL, id);
static BOOL (*OrigConfigLiquidGlassEnabled)(id, SEL);
static BOOL (*OrigConfigShouldForceTrue)(id, SEL, id);
static void (*OrigConfigRefreshAtomicMirrors)(id, SEL);

static id (*OrigAuthorizationColor)(id, SEL, BOOL);
static void (*OrigApplyAuthorizationBackground)(id, SEL, id, BOOL);
static BOOL (*OrigOfficialAccountReady)(id, SEL);
static void (*OrigShowOfficialAccountAlert)(id, SEL);
static void (*OrigToggleSwitch)(id, SEL, UISwitch *);

static BOOL WCLGHookInstanceMethod(Class cls, SEL selector, IMP replacement, IMP *original) {
    if (!cls || !class_getInstanceMethod(cls, selector)) return NO;
    MSHookMessageEx(cls, selector, replacement, original);
    return YES;
}

#pragma mark - Default cache hooks (only active for the validated image)
static id HookDefaultsObjectForKey(NSUserDefaults *self, SEL _cmd, NSString *key) {
    id original = OrigDefaultsObjectForKey(self, _cmd, key);
    id canonical = WCLGTargetIsActive() ? WCLGCanonicalValue(key) : nil;
    return canonical ?: original;
}
static BOOL HookDefaultsBoolForKey(NSUserDefaults *self, SEL _cmd, NSString *key) {
    BOOL original = OrigDefaultsBoolForKey(self, _cmd, key);
    if (!WCLGTargetIsActive()) return original;
    if (WCLGIsAllowedKey(key)) return YES;
    if (WCLGIsHardBlockedKey(key)) return NO;
    return original;
}
static double HookDefaultsDoubleForKey(NSUserDefaults *self, SEL _cmd, NSString *key) {
    double original = OrigDefaultsDoubleForKey(self, _cmd, key);
    if (!WCLGTargetIsActive()) return original;
    if (WCLGIsExpiryKey(key)) return WCLGFarFutureTimestamp();
    if (WCLGIsVerifiedKey(key)) return NSDate.date.timeIntervalSince1970;
    return original;
}
static void HookDefaultsSetObjectForKey(NSUserDefaults *self, SEL _cmd, id value, NSString *key) {
    OrigDefaultsSetObjectForKey(self, _cmd, value, key);
    id canonical = WCLGTargetIsActive() && !gNormalizing ? WCLGCanonicalValue(key) : nil;
    if (canonical) OrigDefaultsSetObjectForKey(self, _cmd, canonical, key);
}
static void HookDefaultsSetBoolForKey(NSUserDefaults *self, SEL _cmd, BOOL value, NSString *key) {
    OrigDefaultsSetBoolForKey(self, _cmd, value, key);
    if (WCLGTargetIsActive() && !gNormalizing && (WCLGIsAllowedKey(key) || WCLGIsHardBlockedKey(key)))
        OrigDefaultsSetBoolForKey(self, _cmd, WCLGIsAllowedKey(key), key);
}
static void HookDefaultsSetDoubleForKey(NSUserDefaults *self, SEL _cmd, double value, NSString *key) {
    OrigDefaultsSetDoubleForKey(self, _cmd, value, key);
    if (WCLGTargetIsActive() && !gNormalizing && WCLGIsExpiryKey(key))
        OrigDefaultsSetDoubleForKey(self, _cmd, WCLGFarFutureTimestamp(), key);
}

#pragma mark - WCLGConfig hooks
static void WCLGNormalizeAuthorization(id config) {
    if (!WCLGTargetIsActive() || !config || gNormalizing || !OrigConfigSetCachedObject || !OrigConfigRefreshAtomicMirrors) return;
    gNormalizing = YES;
    NSArray<NSString *> *keys = @[@"FLGUnifiedServerAuthAllowed", @"FLGUnifiedServerAuthHardBlocked",
        @"FLGUnifiedServerAuthExpiresAt", @"FLGUnifiedServerAuthVerifiedAt", @"FLGUnifiedServerAuthFeatures",
        @"denied_features", @"FLGUnifiedServerAuthLastCode", @"FLGUnifiedServerAuthLastMessage",
        @"WCLGLocalOfficialOK", @"WCLGLocalGroupOK", @"WCLGLocalAuthScannedAt",
        @"WCLGLocalGroupScannedAt", @"xg_liquid_glass_enabled"];
    NSUserDefaults *defaults = NSUserDefaults.standardUserDefaults;
    for (NSString *key in keys) {
        id value = WCLGCanonicalValue(key);
        if (OrigDefaultsSetObjectForKey) OrigDefaultsSetObjectForKey(defaults, @selector(setObject:forKey:), value, key);
        OrigConfigSetCachedObject(config, @selector(setCachedObject:forKey:), value, key);
    }
    OrigConfigRefreshAtomicMirrors(config, @selector(refreshAtomicMirrors));
    gNormalizing = NO;
    WCLGSetStatus(WCLGHookStatusNormalized);
}

static id HookConfigCachedObject(id self, SEL _cmd, id key) {
    id original = OrigConfigCachedObject(self, _cmd, key);
    id canonical = WCLGTargetIsActive() ? WCLGCanonicalValue(key) : nil;
    return canonical ?: original;
}
static void HookConfigSetCachedObject(id self, SEL _cmd, id value, id key) {
    OrigConfigSetCachedObject(self, _cmd, value, key);
    if (WCLGTargetIsActive() && WCLGIsControlledKey(key)) WCLGNormalizeAuthorization(self);
}
static BOOL HookConfigBoolDefault(id self, SEL _cmd, id key, BOOL defaultValue) {
    BOOL original = OrigConfigBoolDefault(self, _cmd, key, defaultValue);
    if (!WCLGTargetIsActive()) return original;
    if (WCLGIsAllowedKey(key)) return YES;
    if (WCLGIsHardBlockedKey(key)) return NO;
    return original;
}
static void HookConfigSetBool(id self, SEL _cmd, BOOL value, id key) {
    OrigConfigSetBool(self, _cmd, value, key);
    if (WCLGTargetIsActive() && WCLGIsControlledKey(key)) WCLGNormalizeAuthorization(self);
}
static BOOL HookConfigLiquidGlassEnabled(id self, SEL _cmd) {
    BOOL original = OrigConfigLiquidGlassEnabled(self, _cmd);
    return WCLGTargetIsActive() ? YES : original;
}
static BOOL HookConfigShouldForceTrue(id self, SEL _cmd, id key) {
    BOOL original = OrigConfigShouldForceTrue(self, _cmd, key);
    return (WCLGTargetIsActive() && WCLGIsAllowedKey(key)) ? YES : original;
}
static void HookConfigRefreshAtomicMirrors(id self, SEL _cmd) {
    OrigConfigRefreshAtomicMirrors(self, _cmd);
    WCLGNormalizeAuthorization(self);
}

static BOOL WCLGInstallConfigHooks(void) {
    if (atomic_load_explicit(&gConfigHooksInstalled, memory_order_acquire)) return YES;
    Class cls = NSClassFromString(@"WCLGConfig");
    BOOL ok =
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"cachedObjectForKey:"), (IMP)HookConfigCachedObject, (IMP *)&OrigConfigCachedObject) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"setCachedObject:forKey:"), (IMP)HookConfigSetCachedObject, (IMP *)&OrigConfigSetCachedObject) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"boolForKey:defaultValue:"), (IMP)HookConfigBoolDefault, (IMP *)&OrigConfigBoolDefault) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"setBool:forKey:"), (IMP)HookConfigSetBool, (IMP *)&OrigConfigSetBool) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"liquidGlassEnabled"), (IMP)HookConfigLiquidGlassEnabled, (IMP *)&OrigConfigLiquidGlassEnabled) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"shouldForceTrueForUserDefaultsKey:"), (IMP)HookConfigShouldForceTrue, (IMP *)&OrigConfigShouldForceTrue) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"refreshAtomicMirrors"), (IMP)HookConfigRefreshAtomicMirrors, (IMP *)&OrigConfigRefreshAtomicMirrors);
    if (ok) {
        atomic_store_explicit(&gConfigHooksInstalled, true, memory_order_release);
        WCLGSetStatus(WCLGHookStatusConfig);
        SEL shared = NSSelectorFromString(@"sharedConfig");
        id config = [cls respondsToSelector:shared] ? ((id (*)(id, SEL))objc_msgSend)(cls, shared) : nil;
        WCLGNormalizeAuthorization(config);
    }
    return ok;
}

#pragma mark - Settings hooks
static id HookAuthorizationColor(id self, SEL _cmd, BOOL allowed) { return OrigAuthorizationColor(self, _cmd, YES); }
static void HookApplyAuthorizationBackground(id self, SEL _cmd, id cell, BOOL allowed) { OrigApplyAuthorizationBackground(self, _cmd, cell, YES); }
static BOOL HookOfficialAccountReady(id self, SEL _cmd) { BOOL original = OrigOfficialAccountReady(self, _cmd); return WCLGTargetIsActive() ? YES : original; }
static void HookShowOfficialAccountAlert(id self, SEL _cmd) { if (!WCLGTargetIsActive()) OrigShowOfficialAccountAlert(self, _cmd); }
static void HookToggleSwitch(id self, SEL _cmd, UISwitch *toggle) {
    OrigToggleSwitch(self, _cmd, toggle);
    if (WCLGTargetIsActive()) {
        WCLGNormalizeAuthorization(NSClassFromString(@"WCLGConfig") ? ((id (*)(id, SEL))objc_msgSend)(NSClassFromString(@"WCLGConfig"), NSSelectorFromString(@"sharedConfig")) : nil);
        toggle.enabled = YES;
    }
}
static BOOL WCLGInstallSettingsHooks(void) {
    if (atomic_load_explicit(&gSettingsHooksInstalled, memory_order_acquire)) return YES;
    Class cls = NSClassFromString(@"WCLGSettingsViewController");
    BOOL ok =
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"authorizationCellBackgroundColorForAllowed:"), (IMP)HookAuthorizationColor, (IMP *)&OrigAuthorizationColor) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"applyAuthorizationBackgroundToCell:allowed:"), (IMP)HookApplyAuthorizationBackground, (IMP *)&OrigApplyAuthorizationBackground) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"officialAccountReadyForAction"), (IMP)HookOfficialAccountReady, (IMP *)&OrigOfficialAccountReady) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"showOfficialAccountAlert"), (IMP)HookShowOfficialAccountAlert, (IMP *)&OrigShowOfficialAccountAlert) &&
        WCLGHookInstanceMethod(cls, NSSelectorFromString(@"toggleSwitch:"), (IMP)HookToggleSwitch, (IMP *)&OrigToggleSwitch);
    if (ok) { atomic_store_explicit(&gSettingsHooksInstalled, true, memory_order_release); WCLGSetStatus(WCLGHookStatusSettings); }
    return ok;
}

#pragma mark - UUID-gated native initializer replay
static BOOL WCLGImageUUIDMatches(const struct mach_header *header) {
    if (!header || header->magic != MH_MAGIC_64) return NO;
    const struct mach_header_64 *h = (const struct mach_header_64 *)header;
    const uint8_t *cursor = (const uint8_t *)header + sizeof(*h);
    for (uint32_t i = 0; i < h->ncmds; i++) {
        const struct load_command *cmd = (const struct load_command *)cursor;
        if (cmd->cmdsize < sizeof(*cmd)) return NO;
        if (cmd->cmd == LC_UUID && cmd->cmdsize >= sizeof(struct uuid_command))
            return memcmp(((const struct uuid_command *)cmd)->uuid, kWCLG3025Binding.uuid, 16) == 0;
        cursor += cmd->cmdsize;
    }
    return NO;
}
static BOOL WCLGAddressInSegment(const struct mach_header *header, intptr_t slide, uintptr_t address, size_t size, BOOL requireWritable, const char *requiredName) {
    const struct mach_header_64 *h = (const struct mach_header_64 *)header;
    const uint8_t *cursor = (const uint8_t *)header + sizeof(*h);
    for (uint32_t i = 0; i < h->ncmds; i++) {
        const struct load_command *cmd = (const struct load_command *)cursor;
        if (cmd->cmd == LC_SEGMENT_64 && cmd->cmdsize >= sizeof(struct segment_command_64)) {
            const struct segment_command_64 *seg = (const struct segment_command_64 *)cmd;
            uintptr_t start = (uintptr_t)(slide + (intptr_t)seg->vmaddr), end = start + (uintptr_t)seg->vmsize;
            if ((!requiredName || strncmp(seg->segname, requiredName, 16) == 0) && (!requireWritable || (seg->initprot & VM_PROT_WRITE)) && address >= start && size <= end - address) return YES;
        }
        if (cmd->cmdsize < sizeof(*cmd)) return NO;
        cursor += cmd->cmdsize;
    }
    return NO;
}
typedef void (*WCLGInitializerFunction)(void);
static WCLGInitializerFunction WCLGCallableInitializer(uintptr_t address) {
    void *pointer = (void *)address;
#if defined(__arm64e__) && __has_feature(ptrauth_calls)
    pointer = ptrauth_sign_unauthenticated(pointer, ptrauth_key_function_pointer, 0);
#endif
    return (WCLGInitializerFunction)pointer;
}
static BOOL WCLGReplayMissedFeatureInitializers(void) {
    if (atomic_exchange_explicit(&gFeatureReplayAttempted, true, memory_order_acq_rel)) return atomic_load_explicit(&gFeatureReplaySucceeded, memory_order_acquire);
    const struct mach_header *header = (const struct mach_header *)atomic_load_explicit(&gWCGlassHeader, memory_order_acquire);
    intptr_t slide = atomic_load_explicit(&gWCGlassSlide, memory_order_acquire);
    if (!WCLGTargetIsActive() || !header || !WCLGImageUUIDMatches(header)) return NO;
    NSUInteger replayed = 0, installed = 0;
    for (size_t i = 0; i < kWCLG3025Binding.gatedInitializerCount; i++) {
        WCLGGatedInitializerBinding binding = kWCLG3025Binding.gatedInitializers[i];
        uintptr_t init = (uintptr_t)(slide + (intptr_t)binding.initializerOffset);
        uintptr_t slot = (uintptr_t)(slide + (intptr_t)binding.originalSlotOffset);
        if (!WCLGAddressInSegment(header, slide, init, 4, NO, "__TEXT") || !WCLGAddressInSegment(header, slide, slot, sizeof(uintptr_t), YES, NULL)) return NO;
        if (__atomic_load_n((uintptr_t *)slot, __ATOMIC_ACQUIRE) == 0) { WCLGCallableInitializer(init)(); replayed++; }
        if (__atomic_load_n((uintptr_t *)slot, __ATOMIC_ACQUIRE) != 0) installed++;
    }
    BOOL ok = installed == kWCLG3025Binding.gatedInitializerCount;
    atomic_store_explicit(&gFeatureReplaySucceeded, ok, memory_order_release);
    if (ok) WCLGSetStatus(WCLGHookStatusFeatureReplay);
    NSLog(@"%@ feature initializer replay: mapped=36 gated=23 registrations=%lu replayed=%lu installed=%lu ok=%d", WCLGHookLogPrefix, (unsigned long)kWCLG3025Binding.gatedInitializerCount, (unsigned long)replayed, (unsigned long)installed, ok);
    return ok;
}

#pragma mark - Image lifecycle
static void WCLGInstallRuntimeHooks(void) {
    bool expected = false;
    if (!atomic_compare_exchange_strong(&gRuntimeHooksInstalled, &expected, true)) return;
    Class cls = NSUserDefaults.class;
    BOOL ok = WCLGHookInstanceMethod(cls, @selector(objectForKey:), (IMP)HookDefaultsObjectForKey, (IMP *)&OrigDefaultsObjectForKey) &&
              WCLGHookInstanceMethod(cls, @selector(boolForKey:), (IMP)HookDefaultsBoolForKey, (IMP *)&OrigDefaultsBoolForKey) &&
              WCLGHookInstanceMethod(cls, @selector(doubleForKey:), (IMP)HookDefaultsDoubleForKey, (IMP *)&OrigDefaultsDoubleForKey) &&
              WCLGHookInstanceMethod(cls, @selector(setObject:forKey:), (IMP)HookDefaultsSetObjectForKey, (IMP *)&OrigDefaultsSetObjectForKey) &&
              WCLGHookInstanceMethod(cls, @selector(setBool:forKey:), (IMP)HookDefaultsSetBoolForKey, (IMP *)&OrigDefaultsSetBoolForKey) &&
              WCLGHookInstanceMethod(cls, @selector(setDouble:forKey:), (IMP)HookDefaultsSetDoubleForKey, (IMP *)&OrigDefaultsSetDoubleForKey);
    if (ok) WCLGSetStatus(WCLGHookStatusRuntime);
}
static BOOL WCLGFindImageInfo(const struct mach_header *header, NSString **pathOut, intptr_t *slideOut) {
    for (uint32_t i = 0; i < _dyld_image_count(); i++) if (_dyld_get_image_header(i) == header) {
        const char *name = _dyld_get_image_name(i);
        if (pathOut) *pathOut = name ? [NSString stringWithUTF8String:name] : @"";
        if (slideOut) *slideOut = _dyld_get_image_vmaddr_slide(i);
        return YES;
    }
    return NO;
}
static void WCLGImageAdded(const struct mach_header *header, intptr_t callbackSlide) {
    @autoreleasepool {
        NSString *path = nil; intptr_t slide = callbackSlide;
        if (!WCLGFindImageInfo(header, &path, &slide) || ![[path lastPathComponent] isEqualToString:WCLGTargetImageName]) return;
        WCLGSetStatus(WCLGHookStatusImage);
        if (!WCLGImageUUIDMatches(header)) { NSLog(@"%@ ignored WCGlass image with unmatched UUID: %@", WCLGHookLogPrefix, path); return; }
        uintptr_t empty = 0;
        if (!atomic_compare_exchange_strong(&gWCGlassHeader, &empty, (uintptr_t)header)) return;
        atomic_store_explicit(&gWCGlassSlide, slide, memory_order_release);
        atomic_store_explicit(&gTargetValidated, true, memory_order_release);
        WCLGSetStatus(WCLGHookStatusUUID);
        BOOL config = WCLGInstallConfigHooks(), settings = WCLGInstallSettingsHooks();
        if (config) WCLGReplayMissedFeatureInitializers();
        NSLog(@"%@ 3.0.2-5 accepted %@ config=%d settings=%d", WCLGHookLogPrefix, path, config, settings);
    }
}

__attribute__((visibility("default"))) NSDictionary<NSString *, id> *WCLGFreeModeHookStatus(void) {
    return @{ @"status_bits": @(atomic_load(&gHookStatus)), @"target_validated": @(WCLGTargetIsActive()),
              @"wcglass_header": @((unsigned long long)atomic_load(&gWCGlassHeader)), @"wcglass_slide": @((long long)atomic_load(&gWCGlassSlide)),
              @"c_authorization_functions_replaced": @NO, @"feature_initializer_replay_attempted": @(atomic_load(&gFeatureReplayAttempted)),
              @"feature_initializer_replay_succeeded": @(atomic_load(&gFeatureReplaySucceeded)), @"gated_initializer_registration_count": @(kWCLG3025Binding.gatedInitializerCount) };
}

__attribute__((constructor)) static void WCLGFreeModeHookInitialize(void) {
    @autoreleasepool {
        if (![NSBundle.mainBundle.bundleIdentifier isEqualToString:@"com.tencent.xin"]) return;
        WCLGInstallRuntimeHooks();
        _dyld_register_func_for_add_image(WCLGImageAdded);
    }
}
