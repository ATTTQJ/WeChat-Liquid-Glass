#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCLGConfig : NSObject

+ (instancetype)sharedConfig;

- (BOOL)boolForKey:(NSString *)key;
- (BOOL)boolForKey:(NSString *)key defaultValue:(BOOL)defaultValue;
- (NSInteger)integerForKey:(NSString *)key;
- (NSInteger)integerForKey:(NSString *)key defaultValue:(NSInteger)defaultValue;
- (double)doubleForKey:(NSString *)key;
- (id _Nullable)objectForKey:(NSString *)key;
- (void)setBool:(BOOL)value forKey:(NSString *)key;
- (void)setInteger:(NSInteger)value forKey:(NSString *)key;
- (void)setDouble:(double)value forKey:(NSString *)key;
- (void)setObject:(id _Nullable)value forKey:(NSString *)key;
- (BOOL)hasValueForKey:(NSString *)key;
- (void)flush;

@end

NS_ASSUME_NONNULL_END
