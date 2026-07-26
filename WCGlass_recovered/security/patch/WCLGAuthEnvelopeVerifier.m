#import "WCLGAuthEnvelopeVerifier.h"

#import <Security/Security.h>

static NSString *const WCLGAuthErrorDomain = @"com.fixture.WCLGAuth";
static const NSTimeInterval WCLGClockSkew = 300.0;
static const NSTimeInterval WCLGMaximumGrantLifetime = 24.0 * 60.0 * 60.0;

typedef NS_ENUM(NSInteger, WCLGAuthErrorCode) {
    WCLGAuthErrorMalformed = 1,
    WCLGAuthErrorUnknownKey,
    WCLGAuthErrorBadSignature,
    WCLGAuthErrorIdentityMismatch,
    WCLGAuthErrorExpired,
    WCLGAuthErrorDenied,
};

@interface WCLGAuthDecision ()
@property(nonatomic) BOOL allowed;
@property(nonatomic) BOOL hardBlocked;
@property(nonatomic, copy) NSSet<NSString *> *features;
@property(nonatomic) NSTimeInterval issuedAt;
@property(nonatomic) NSTimeInterval expiresAt;
@property(nonatomic, copy) NSString *nonce;
@end

@implementation WCLGAuthDecision
@end

static void WCLGSetError(NSError **outError, WCLGAuthErrorCode code, NSString *message) {
    if (outError != NULL) {
        *outError = [NSError errorWithDomain:WCLGAuthErrorDomain
                                        code:code
                                    userInfo:@{NSLocalizedDescriptionKey: message}];
    }
}

static BOOL WCLGIsJSONBoolean(id value) {
    return [value isKindOfClass:NSNumber.class] &&
           CFGetTypeID((__bridge CFTypeRef)value) == CFBooleanGetTypeID();
}

static SecKeyRef WCLGCopyPublicKeyForID(NSString *keyID) {
    // Replace with the DER bytes of the server's RSA public key. Keep at least
    // two key IDs during rotation; never embed a signing secret in the client.
    NSDictionary<NSString *, NSString *> *keys = @{
        @"auth-2026-01": @"REPLACE_WITH_PKCS1_RSA_PUBLIC_KEY_DER_BASE64"
    };
    NSString *encoded = keys[keyID];
    NSData *der = [[NSData alloc] initWithBase64EncodedString:encoded options:0];
    if (der.length == 0) {
        return NULL;
    }
    NSDictionary *attributes = @{
        (__bridge id)kSecAttrKeyType: (__bridge id)kSecAttrKeyTypeRSA,
        (__bridge id)kSecAttrKeyClass: (__bridge id)kSecAttrKeyClassPublic,
        (__bridge id)kSecAttrKeySizeInBits: @2048,
    };
    CFErrorRef createError = NULL;
    SecKeyRef key = SecKeyCreateWithData((__bridge CFDataRef)der,
                                         (__bridge CFDictionaryRef)attributes,
                                         &createError);
    if (createError != NULL) {
        CFRelease(createError);
    }
    return key;
}

static BOOL WCLGValidateStringArray(id value, NSSet<NSString *> **result) {
    if (![value isKindOfClass:NSArray.class]) {
        return NO;
    }
    NSMutableSet<NSString *> *features = [NSMutableSet set];
    for (id item in (NSArray *)value) {
        if (![item isKindOfClass:NSString.class] || [item length] == 0) {
            return NO;
        }
        [features addObject:item];
    }
    *result = [features copy];
    return YES;
}

@implementation WCLGAuthEnvelopeVerifier

+ (nullable WCLGAuthDecision *)decisionFromEnvelopeData:(NSData *)envelopeData
                                           currentWXID:(NSString *)currentWXID
                                              deviceID:(NSString *)deviceID
                                       serverTimeFloor:(NSTimeInterval)serverTimeFloor
                                                 error:(NSError **)error {
    id rootObject = [NSJSONSerialization JSONObjectWithData:envelopeData options:0 error:error];
    if (![rootObject isKindOfClass:NSDictionary.class]) {
        WCLGSetError(error, WCLGAuthErrorMalformed, @"Envelope root is not a dictionary");
        return nil;
    }
    NSDictionary *root = rootObject;
    NSString *payload64 = root[@"payload"];
    NSString *signature64 = root[@"signature"];
    NSString *keyID = root[@"key_id"];
    if (![payload64 isKindOfClass:NSString.class] ||
        ![signature64 isKindOfClass:NSString.class] ||
        ![keyID isKindOfClass:NSString.class]) {
        WCLGSetError(error, WCLGAuthErrorMalformed, @"Envelope fields have invalid types");
        return nil;
    }

    NSData *payload = [[NSData alloc] initWithBase64EncodedString:payload64 options:0];
    NSData *signature = [[NSData alloc] initWithBase64EncodedString:signature64 options:0];
    if (payload.length == 0 || signature.length == 0) {
        WCLGSetError(error, WCLGAuthErrorMalformed, @"Envelope base64 is invalid");
        return nil;
    }

    SecKeyRef publicKey = WCLGCopyPublicKeyForID(keyID);
    if (publicKey == NULL) {
        WCLGSetError(error, WCLGAuthErrorUnknownKey, @"Unknown signing key");
        return nil;
    }
    CFErrorRef verifyError = NULL;
    BOOL signatureOK = SecKeyVerifySignature(
        publicKey,
        kSecKeyAlgorithmRSASignatureMessagePSSSHA256,
        (__bridge CFDataRef)payload,
        (__bridge CFDataRef)signature,
        &verifyError
    );
    CFRelease(publicKey);
    if (verifyError != NULL) {
        CFRelease(verifyError);
    }
    if (!signatureOK) {
        WCLGSetError(error, WCLGAuthErrorBadSignature, @"Signature verification failed");
        return nil;
    }

    id claimsObject = [NSJSONSerialization JSONObjectWithData:payload options:0 error:error];
    if (![claimsObject isKindOfClass:NSDictionary.class]) {
        WCLGSetError(error, WCLGAuthErrorMalformed, @"Claims are malformed");
        return nil;
    }
    NSDictionary *claims = claimsObject;
    NSNumber *version = claims[@"version"];
    NSString *subject = claims[@"subject"];
    NSString *boundDevice = claims[@"device"];
    NSNumber *allowed = claims[@"allowed"];
    NSNumber *hardBlocked = claims[@"hard_blocked"];
    NSNumber *issuedAt = claims[@"issued_at"];
    NSNumber *expiresAt = claims[@"expires_at"];
    NSString *nonce = claims[@"nonce"];
    NSSet<NSString *> *features = nil;

    BOOL schemaOK =
        [version isKindOfClass:NSNumber.class] &&
        version.integerValue == 1 &&
        [subject isKindOfClass:NSString.class] &&
        [boundDevice isKindOfClass:NSString.class] &&
        WCLGIsJSONBoolean(allowed) &&
        WCLGIsJSONBoolean(hardBlocked) &&
        [issuedAt isKindOfClass:NSNumber.class] &&
        [expiresAt isKindOfClass:NSNumber.class] &&
        [nonce isKindOfClass:NSString.class] &&
        nonce.length > 0 &&
        WCLGValidateStringArray(claims[@"features"], &features);
    if (!schemaOK) {
        WCLGSetError(error, WCLGAuthErrorMalformed, @"Claims failed strict schema validation");
        return nil;
    }

    if (![subject isEqualToString:currentWXID] ||
        ![boundDevice isEqualToString:deviceID]) {
        WCLGSetError(error, WCLGAuthErrorIdentityMismatch, @"Identity or device mismatch");
        return nil;
    }

    NSTimeInterval now = MAX(NSDate.date.timeIntervalSince1970, serverTimeFloor);
    NSTimeInterval iat = issuedAt.doubleValue;
    NSTimeInterval exp = expiresAt.doubleValue;
    if (iat > now + WCLGClockSkew ||
        exp <= now ||
        exp <= iat ||
        exp - iat > WCLGMaximumGrantLifetime) {
        WCLGSetError(error, WCLGAuthErrorExpired, @"Grant time window is invalid");
        return nil;
    }
    if (!allowed.boolValue || hardBlocked.boolValue) {
        WCLGSetError(error, WCLGAuthErrorDenied, @"Grant is denied or hard blocked");
        return nil;
    }

    WCLGAuthDecision *decision = [WCLGAuthDecision new];
    decision.allowed = YES;
    decision.hardBlocked = NO;
    decision.features = features;
    decision.issuedAt = iat;
    decision.expiresAt = exp;
    decision.nonce = nonce;
    return decision;
}

@end
