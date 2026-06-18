#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

BOOL WCLGAccessCookieForFeature(NSString *feature);
BOOL WCLGAccessFastCookieForFeature(NSString *feature);
void WCLGAccessInvalidateCache(void);
void WCLGAccessRefreshLocalAuthorization(void);
void WCLGAccessRequestServerSync(void);
void WCLGAccessStartServerSync(void);
BOOL WCLGAccessOfficialAccountSatisfied(void);
NSString *WCLGAccessRequiredOfficialAccountName(void);
NSString *WCLGAccessRequiredOfficialAccountUserName(void);
NSString *_Nullable WCLGAccessCurrentUserName(void);
NSString *_Nullable WCLGAccessCurrentNickName(void);
void WCLGAccessOpenRequiredOfficialAccount(void);

NS_ASSUME_NONNULL_END
