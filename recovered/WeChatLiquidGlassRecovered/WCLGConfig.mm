#import "WCLGConfig.h"
#import "WCLGConstants.h"

@interface WCLGConfig ()
@property (nonatomic, strong) NSUserDefaults *defaults;
@property (nonatomic, strong) NSMutableDictionary<NSString *, id> *cache;
@end

@implementation WCLGConfig

+ (instancetype)sharedConfig {
    static WCLGConfig *config;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [[self alloc] init];
    });
    return config;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _defaults = [NSUserDefaults standardUserDefaults];
        _cache = [NSMutableDictionary dictionary];
        [self primeDefaults];
    }
    return self;
}

- (void)primeDefaults {
    NSDictionary<NSString *, id> *defaults = @{
        WCLGKeyLiquidGlassEnabled: @YES,
        WCLGKeyCompatEnabled: @YES,
        WCLGKeyGlassSizeMode: @0,
        WCLGKeyHideTitles: @NO,
        WCLGKeyChatBottomGlass: @NO,
        WCLGKeyChatBottomGradientBackground: @NO,
        WCLGKeyChatBottomGlassMode: @0,
        WCLGKeyChatBubbleGlass: @NO,
        WCLGKeyChatBubbleFlowGradient: @NO,
        WCLGKeyChatBubbleFlowBorder: @NO,
        WCLGKeySearchTabBar: @NO,
        WCLGKeyLocalDeveloperPreviewMode: @YES,
        WCLGKeyServerAuthAllowed: @NO,
        WCLGKeyServerAuthHardBlocked: @NO,
    };
    [self.defaults registerDefaults:defaults];
}

- (id)cachedObjectForKey:(NSString *)key {
    @synchronized (self.cache) {
        id value = self.cache[key];
        if (value) {
            return value == NSNull.null ? nil : value;
        }
    }
    id value = [self.defaults objectForKey:key];
    @synchronized (self.cache) {
        self.cache[key] = value ?: NSNull.null;
    }
    return value;
}

- (void)setCachedObject:(id)value forKey:(NSString *)key {
    @synchronized (self.cache) {
        self.cache[key] = value ?: NSNull.null;
    }
}

- (BOOL)boolForKey:(NSString *)key {
    return [self boolForKey:key defaultValue:NO];
}

- (BOOL)boolForKey:(NSString *)key defaultValue:(BOOL)defaultValue {
    id value = [self cachedObjectForKey:key];
    return value ? [value boolValue] : defaultValue;
}

- (NSInteger)integerForKey:(NSString *)key {
    return [self integerForKey:key defaultValue:0];
}

- (NSInteger)integerForKey:(NSString *)key defaultValue:(NSInteger)defaultValue {
    id value = [self cachedObjectForKey:key];
    return value ? [value integerValue] : defaultValue;
}

- (double)doubleForKey:(NSString *)key {
    id value = [self cachedObjectForKey:key];
    return value ? [value doubleValue] : 0.0;
}

- (id)objectForKey:(NSString *)key {
    return [self cachedObjectForKey:key];
}

- (void)setBool:(BOOL)value forKey:(NSString *)key {
    [self setObject:@(value) forKey:key];
}

- (void)setInteger:(NSInteger)value forKey:(NSString *)key {
    [self setObject:@(value) forKey:key];
}

- (void)setDouble:(double)value forKey:(NSString *)key {
    [self setObject:@(value) forKey:key];
}

- (void)setObject:(id)value forKey:(NSString *)key {
    [self setCachedObject:value forKey:key];
    if (value) {
        [self.defaults setObject:value forKey:key];
    } else {
        [self.defaults removeObjectForKey:key];
    }
}

- (BOOL)hasValueForKey:(NSString *)key {
    return [self.defaults objectForKey:key] != nil;
}

- (void)flush {
    [self.defaults synchronize];
}

@end
