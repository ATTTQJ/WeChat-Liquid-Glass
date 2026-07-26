#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>
#import <objc/message.h>

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
    return @{
        @"FLGUnifiedServerAuthAllowed": @YES,
        @"FLGUnifiedServerAuthHardBlocked": @NO,
        @"FLGUnifiedServerAuthExpiresAt": @(now + 30.0 * 24.0 * 60.0 * 60.0),
        @"FLGUnifiedServerAuthVerifiedAt": @(now),
        @"FLGUnifiedServerAuthFeatures": @[@"liquid_glass", @"home_groups"],
        @"denied_features": @[],
        @"WCLGLocalOfficialOK": @YES,
        @"WCLGLocalGroupOK": @YES,
        @"WCLGLocalAuthScannedAt": @(now),
        @"WCLGLocalGroupScannedAt": @(now),
    };
}

static id WCLGPoCSharedConfig(void) {
    Class configClass = NSClassFromString(@"WCLGConfig");
    SEL selector = NSSelectorFromString(@"sharedConfig");
    if (configClass == Nil || ![configClass respondsToSelector:selector]) {
        return nil;
    }
    return ((id (*)(id, SEL))objc_msgSend)(configClass, selector);
}

static void WCLGPoCSendVoid(id target, NSString *selectorName) {
    SEL selector = NSSelectorFromString(selectorName);
    if (target != nil && [target respondsToSelector:selector]) {
        ((void (*)(id, SEL))objc_msgSend)(target, selector);
    }
}

static void WCLGPoCSetCachedObject(id config, id value, NSString *key) {
    SEL selector = NSSelectorFromString(@"setCachedObject:forKey:");
    if (config != nil && [config respondsToSelector:selector]) {
        ((void (*)(id, SEL, id, id))objc_msgSend)(config, selector, value, key);
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
        [overrides enumerateKeysAndObjectsUsingBlock:
            ^(NSString *key, id value, BOOL *stop) {
                (void)stop;
                [defaults setObject:value forKey:key];
                WCLGPoCSetCachedObject(config, value, key);
            }];

        [defaults synchronize];
        WCLGPoCSendVoid(config, @"flush");
        WCLGPoCSendVoid(config, @"refreshAtomicMirrors");
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
                    WCLGPoCSetCachedObject(config, value, key);
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
