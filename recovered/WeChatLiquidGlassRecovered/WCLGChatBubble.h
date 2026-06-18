#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCLGChatBubbleGlassHostView : UIView
@property (nonatomic, assign, getter=isOutgoing) BOOL outgoing;
@property (nonatomic, assign, getter=isFlowEnabled) BOOL flowEnabled;
@property (nonatomic, assign, getter=isBorderEnabled) BOOL borderEnabled;
@end

void WCLGRegisterMessageBubbleBackgrounds(void);
BOOL WCLGBubbleImageViewShouldSuppressOriginalImage(UIImageView *imageView);
void WCLGBubbleSuppressOriginalImageView(UIImageView *imageView);
void WCLGApplyChatBubbleGlassToMessageView(UIView *messageView);
void WCLGRemoveChatBubbleGlassFromMessageView(UIView *messageView);
void WCLGEnsureChatBubbleZOrder(UIView *messageView);
BOOL WCLGMessageViewHasNativeFlowApplied(UIView *messageView);
BOOL WCLGChatBubbleNeedsFullApplyForMessageIdentity(UIView *messageView);
BOOL WCLGChatBubbleNeedsDeferredApply(UIView *messageView);
void WCLGScheduleApplyChatBubbleGlass(UIView *messageView);
void WCLGUpdateVisibleChatBubbleFlowGradientsFromView(UIView *view);
void WCLGRunChatBubbleDiagnosticsAfterDelay(void);
void WCLGMaybeApplyChatBubbleGlassToView(UIView *view);

NS_ASSUME_NONNULL_END
