#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCLGChatBottomFadeOverlayHost : UIView
@property (nonatomic, weak, nullable) UIScrollView *scrollView;
@property (nonatomic, strong) UIView *edgeView;
@property (nonatomic, assign) double configuredBlurRadius;
@end

void WCLGPrimeChatBottomGlassForInputToolView(UIView *inputToolView);
void WCLGRemoveChatBottomGlassFromInputToolView(UIView *inputToolView);
void WCLGApplyChatBottomGlassToInputToolView(UIView *inputToolView);
void WCLGApplyChatBottomGlassToInputToolBar(UIView *inputToolBar);
void WCLGRestoreChatBottomControlShiftsForInputToolView(UIView *inputToolView);
void WCLGRefreshChatBottomGlassForKeyboardState(void);
void WCLGApplyChatBottomVoiceButtonCleanup(UIView *inputToolView);
void WCLGApplyVoiceTranscribeIconHideFallbackInView(UIView *view);
void WCLGMaybeApplyChatBottomGlassToView(UIView *view);

NS_ASSUME_NONNULL_END
