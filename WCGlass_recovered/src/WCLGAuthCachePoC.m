/*
 * WCGlass local authorization-cache tamper PoC
 *
 * Purpose:
 *   Reproduce the trust-boundary issue found in the recovered dylib by writing
 *   the same independent values consumed by WCLGConfig. This file is enabled
 *   by default for the requested device test. Remove it from the target, or set
 *   WCLG_AUTH_CACHE_POC_ENABLED=0, after verification.
 *
 * Expected device flow:
 *   1. Build this file into the dylib and launch once.
 *   2. Fully terminate the host process.
 *   3. Launch again. The original cache loader should consume the modified
 *      persisted values even though the existing Token was not changed.
 *
 * Exported rollback entry:
 *   WCLGAuthCachePoCRestore();
 */

#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>
#import <objc/message.h>
#import <objc/runtime.h>

#ifndef WCLG_AUTH_CACHE_POC_ENABLED
#define WCLG_AUTH_CACHE_POC_ENABLED 1
#endif

#if WCLG_AUTH_CACHE_POC_ENABLED

static NSString *const WCLGPoCBackupKey = @"WCGlassAuthCachePoCBackupV1";
static NSString *const WCLGPoCLogPrefix = @"[WCGlass/AuthCachePoC]";

static NSArray<NSString *> *WCLGPoCTargetKeys(void) {
    return @[
        @"FLGUnifiedServerAuthAllowed",
        @"FLGUnifiedServerAuthHardBlocked",
        @"FLGUnifiedServerAuthExpiresAt",
        @"FLGUnifiedServerAuthVerifiedAt",
        @"FLGUnifiedServerAuthFeatures",
        @"denied_features",
        @"WCLGLocalOfficialOK",
        @"WCLGLocalGroupOK",
        @"WCLGLocalAuthScannedAt",
        @"WCLGLocalGroupScannedAt",
    ];
}

static NSDictionary<NSString *, id> *WCLGPoCOverrideValues(void) {
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    NSTimeInterval expires = now + 30.0 * 24.0 * 60.0 * 60.0;
    return @{
        @"FLGUnifiedServerAuthAllowed": @YES,
        @"FLGUnifiedServerAuthHardBlocked": @NO,
        @"FLGUnifiedServerAuthExpiresAt": @(expires),
        @"FLGUnifiedServerAuthVerifiedAt": @(now),
        @"FLGUnifiedServerAuthFeatures": @[
            @"liquid_glass",
            @"home_groups",
        ],
        @"denied_features": @[],
        @"WCLGLocalOfficialOK": @YES,
        @"WCLGLocalGroupOK": @YES,
        @"WCLGLocalAuthScannedAt": @(now),
        @"WCLGLocalGroupScannedAt": @(now),
    };
}

static id WCLGPoCSharedConfig(void) {
    Class configClass = NSClassFromString(@"WCLGConfig");
    SEL sharedSelector = NSSelectorFromString(@"sharedConfig");
    if (configClass == Nil || ![configClass respondsToSelector:sharedSelector]) {
        return nil;
    }
    return ((id (*)(id, SEL))objc_msgSend)(configClass, sharedSelector);
}

static void WCLGPoCCacheObject(id config, NSString *key, id value) {
    SEL selector = NSSelectorFromString(@"setCachedObject:forKey:");
    if (config != nil && [config respondsToSelector:selector]) {
        ((void (*)(id, SEL, id, id))objc_msgSend)(config, selector, value, key);
    }
}

static void WCLGPoCSendVoid(id target, NSString *selectorName) {
    SEL selector = NSSelectorFromString(selectorName);
    if (target != nil && [target respondsToSelector:selector]) {
        ((void (*)(id, SEL))objc_msgSend)(target, selector);
    }
}

static void WCLGPoCCaptureOriginalValues(NSUserDefaults *defaults) {
    if ([[defaults objectForKey:WCLGPoCBackupKey] isKindOfClass:NSDictionary.class]) {
        return;
    }

    NSMutableDictionary<NSString *, id> *values = [NSMutableDictionary dictionary];
    NSMutableArray<NSString *> *missing = [NSMutableArray array];
    for (NSString *key in WCLGPoCTargetKeys()) {
        id value = [defaults objectForKey:key];
        if (value != nil) {
            values[key] = value;
        } else {
            [missing addObject:key];
        }
    }
    [defaults setObject:@{
        @"values": values,
        @"missing": missing,
        @"captured_at": @(NSDate.date.timeIntervalSince1970),
    } forKey:WCLGPoCBackupKey];
    [defaults synchronize];
}

__attribute__((visibility("default")))
void WCLGAuthCachePoCApply(void) {
    @autoreleasepool {
        NSUserDefaults *defaults = NSUserDefaults.standardUserDefaults;
        WCLGPoCCaptureOriginalValues(defaults);

        NSDictionary<NSString *, id> *overrides = WCLGPoCOverrideValues();
        id config = WCLGPoCSharedConfig();

        /*
         * Write both layers:
         * - NSUserDefaults reproduces the persisted-cache weakness.
         * - setCachedObject:forKey: updates WCLGConfig's process cache and its
         *   atomic mirrors, matching the recovered storage path at 0x28bc9c.
         */
        [overrides enumerateKeysAndObjectsUsingBlock:
            ^(NSString *key, id value, BOOL *stop) {
                (void)stop;
                [defaults setObject:value forKey:key];
                WCLGPoCCacheObject(config, key, value);
            }];

        [defaults synchronize];
        WCLGPoCSendVoid(config, @"flush");
        WCLGPoCSendVoid(config, @"refreshAtomicMirrors");

        /*
         * FLGUnifiedServerAuthToken, WCLGLocalWXID and the device identifier
         * are deliberately left untouched. This isolates the finding that the
         * decision accepts independently modified cache fields.
         */
        NSLog(@"%@ applied: allowed=1 hardBlocked=0 expiresAt=%@ tokenChanged=0",
              WCLGPoCLogPrefix,
              overrides[@"FLGUnifiedServerAuthExpiresAt"]);
    }
}

__attribute__((visibility("default")))
void WCLGAuthCachePoCRestore(void) {
    @autoreleasepool {
        NSUserDefaults *defaults = NSUserDefaults.standardUserDefaults;
        NSDictionary *backup = [defaults objectForKey:WCLGPoCBackupKey];
        if (![backup isKindOfClass:NSDictionary.class]) {
            NSLog(@"%@ restore skipped: backup missing", WCLGPoCLogPrefix);
            return;
        }

        NSDictionary *values = backup[@"values"];
        NSArray *missing = backup[@"missing"];
        id config = WCLGPoCSharedConfig();

        if ([values isKindOfClass:NSDictionary.class]) {
            [values enumerateKeysAndObjectsUsingBlock:
                ^(NSString *key, id value, BOOL *stop) {
                    (void)stop;
                    [defaults setObject:value forKey:key];
                    WCLGPoCCacheObject(config, key, value);
                }];
        }
        if ([missing isKindOfClass:NSArray.class]) {
            for (id key in missing) {
                if ([key isKindOfClass:NSString.class]) {
                    [defaults removeObjectForKey:key];
                }
            }
        }

        [defaults removeObjectForKey:WCLGPoCBackupKey];
        [defaults synchronize];
        WCLGPoCSendVoid(config, @"flush");
        WCLGPoCSendVoid(config, @"invalidateCache");
        WCLGPoCSendVoid(config, @"refreshAtomicMirrors");
        NSLog(@"%@ original cache restored", WCLGPoCLogPrefix);
    }
}

__attribute__((visibility("default")))
NSDictionary<NSString *, id> *WCLGAuthCachePoCStatus(void) {
    NSUserDefaults *defaults = NSUserDefaults.standardUserDefaults;
    NSMutableDictionary<NSString *, id> *status = [NSMutableDictionary dictionary];
    for (NSString *key in WCLGPoCTargetKeys()) {
        status[key] = [defaults objectForKey:key] ?: @"<missing>";
    }
    id token = [defaults objectForKey:@"FLGUnifiedServerAuthToken"];
    BOOL tokenPresent =
        [token isKindOfClass:NSString.class] ? [(NSString *)token length] > 0 : token != nil;
    status[@"token_present"] = @(tokenPresent);
    status[@"backup_present"] = @([defaults objectForKey:WCLGPoCBackupKey] != nil);
    return status;
}

__attribute__((constructor))
static void WCLGAuthCachePoCInitialize(void) {
    @autoreleasepool {
        WCLGAuthCachePoCApply();

        /*
         * Repeat after app initialization so a late-created WCLGConfig instance
         * receives the same values. The persisted cache makes the next cold
         * launch the definitive validation step.
         */
        dispatch_async(dispatch_get_main_queue(), ^{
            WCLGAuthCachePoCApply();
            dispatch_after(
                dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)),
                dispatch_get_main_queue(),
                ^{
                    WCLGAuthCachePoCApply();
                }
            );
        });
    }
}

#endif
