// WCGlassFreeGate.m
// Companion tweak for an owner-authorized free edition of WCGlass.
// Load this alongside WCGlass.dylib; it does not alter the original binary.

#import <Foundation/Foundation.h>
#import <dispatch/dispatch.h>
#import <CydiaSubstrate/CydiaSubstrate.h>

static NSString * const kServerAllowed = @"FLGUnifiedServerAuthAllowed";
static NSString * const kServerHardBlocked = @"FLGUnifiedServerAuthHardBlocked";
static NSString * const kServerFeatures = @"FLGUnifiedServerAuthFeatures";
static NSString * const kServerDeniedFeatures = @"denied_features";
static NSString * const kServerExpiresAt = @"FLGUnifiedServerAuthExpiresAt";
static NSString * const kLocalOfficialOK = @"WCLGLocalOfficialOK";
static NSString * const kLocalGroupOK = @"WCLGLocalGroupOK";
static NSString * const kLocalAuthScannedAt = @"WCLGLocalAuthScannedAt";
static NSString * const kLocalGroupScannedAt = @"WCLGLocalGroupScannedAt";

@interface WCLGAllFeaturesArray : NSArray
@end

@implementation WCLGAllFeaturesArray
- (NSUInteger)count { return 0; }
- (id)objectAtIndex:(NSUInteger)index { return nil; }
- (BOOL)containsObject:(id)object { return object != nil; }
@end

static WCLGAllFeaturesArray *WCLGAllFeatures(void) {
    static WCLGAllFeaturesArray *features;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ features = [WCLGAllFeaturesArray new]; });
    return features;
}

static BOOL WCLGIsTrueKey(NSString *key) {
    return [key isEqualToString:kServerAllowed]
        || [key isEqualToString:kLocalOfficialOK]
        || [key isEqualToString:kLocalGroupOK];
}

static BOOL WCLGIsFalseKey(NSString *key) {
    return [key isEqualToString:kServerHardBlocked];
}

static BOOL (*orig_boolForKey)(NSUserDefaults *, SEL, NSString *);
static id (*orig_objectForKey)(NSUserDefaults *, SEL, NSString *);
static double (*orig_doubleForKey)(NSUserDefaults *, SEL, NSString *);

static BOOL wclg_boolForKey(NSUserDefaults *defaults, SEL cmd, NSString *key) {
    if (WCLGIsTrueKey(key)) return YES;
    if (WCLGIsFalseKey(key)) return NO;
    return orig_boolForKey(defaults, cmd, key);
}

static id wclg_objectForKey(NSUserDefaults *defaults, SEL cmd, NSString *key) {
    if (WCLGIsTrueKey(key)) return @YES;
    if (WCLGIsFalseKey(key)) return @NO;
    if ([key isEqualToString:kServerFeatures]) return WCLGAllFeatures();
    if ([key isEqualToString:kServerDeniedFeatures]) return @[];
    if ([key isEqualToString:kServerExpiresAt]) return @(4102444800.0);
    if ([key isEqualToString:kLocalAuthScannedAt] || [key isEqualToString:kLocalGroupScannedAt]) {
        return @([[NSDate date] timeIntervalSince1970]);
    }
    return orig_objectForKey(defaults, cmd, key);
}

static double wclg_doubleForKey(NSUserDefaults *defaults, SEL cmd, NSString *key) {
    if ([key isEqualToString:kServerExpiresAt]) return 4102444800.0;
    return orig_doubleForKey(defaults, cmd, key);
}

__attribute__((constructor))
static void WCLGInstallFreeEditionGate(void) {
    Class defaultsClass = [NSUserDefaults class];
    MSHookMessageEx(defaultsClass, @selector(boolForKey:), (IMP)wclg_boolForKey, (IMP *)&orig_boolForKey);
    MSHookMessageEx(defaultsClass, @selector(objectForKey:), (IMP)wclg_objectForKey, (IMP *)&orig_objectForKey);
    MSHookMessageEx(defaultsClass, @selector(doubleForKey:), (IMP)wclg_doubleForKey, (IMP *)&orig_doubleForKey);
}
