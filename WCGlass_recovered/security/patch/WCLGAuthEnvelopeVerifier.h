#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCLGAuthDecision : NSObject
@property(nonatomic, readonly) BOOL allowed;
@property(nonatomic, readonly) BOOL hardBlocked;
@property(nonatomic, copy, readonly) NSSet<NSString *> *features;
@property(nonatomic, readonly) NSTimeInterval issuedAt;
@property(nonatomic, readonly) NSTimeInterval expiresAt;
@property(nonatomic, copy, readonly) NSString *nonce;
@end

@interface WCLGAuthEnvelopeVerifier : NSObject

/// Verifies a server-signed envelope and binds it to the current identity/device.
/// `serverTimeFloor` is the greatest trusted server time previously observed.
+ (nullable WCLGAuthDecision *)decisionFromEnvelopeData:(NSData *)envelopeData
                                           currentWXID:(NSString *)currentWXID
                                              deviceID:(NSString *)deviceID
                                       serverTimeFloor:(NSTimeInterval)serverTimeFloor
                                                 error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
