#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCLGVariableBlurHostView : UIView
@property (nonatomic, strong, nullable) CALayer *backdropLayer;
@property (nonatomic, strong, nullable) UIImage *gradientImage;
@property (nonatomic, assign) CGSize lastSize;
@property (nonatomic, assign) double lastConstantHeight;
@property (nonatomic, assign) BOOL lastInverted;
@property (nonatomic, assign) double lastGradientHeight;
@end

@interface WCLGEdgeEffectView : UIView
@property (nonatomic, assign, getter=isBlurEnabled) BOOL blurEnabled;
@property (nonatomic, strong) UIView *contentView;
@property (nonatomic, strong) UIView *contentMaskView;
@property (nonatomic, strong) WCLGVariableBlurHostView *blurHostView;
@property (nonatomic, strong) UIVisualEffectView *fallbackBlurView;
@property (nonatomic, strong, nullable) UIColor *lastContentColor;
@property (nonatomic, assign) BOOL lastBlur;
@property (nonatomic, assign) double lastAlpha;
@property (nonatomic, assign) CGRect lastRect;
@property (nonatomic, assign) NSInteger lastEdge;
@property (nonatomic, assign) double lastEdgeSize;
@property (nonatomic, assign) double lastBlurRadius;

- (void)updateWithContentColor:(UIColor *)contentColor
                          blur:(BOOL)blur
                         alpha:(double)alpha
                          rect:(CGRect)rect
                          edge:(NSInteger)edge
                      edgeSize:(double)edgeSize
                    blurRadius:(double)blurRadius;
@end

@interface WCLGTabBarVisualHostView : UIView
@end

BOOL WCLGSearchTabBarIsActive(void);
void WCLGApplyTabBarCompatibilityToView(UIView *view);
void WCLGApplyNativeTabBarBackgroundCleanup(UITabBar *tabBar);
void WCLGRestoreNativeTabBarBackgroundCleanup(UITabBar *tabBar);
void WCLGApplyTabBarItemLayoutToTabBar(UITabBar *tabBar);
void WCLGRestoreTabBarItemLayoutForTabBar(UITabBar *tabBar);
void WCLGApplyGlassSizeModeToTabBar(UITabBar *tabBar);
void WCLGRestoreGlassSizeModeForTabBar(UITabBar *tabBar);
void WCLGApplyRecoveredTabBarToTabBar(UITabBar *tabBar);
void WCLGRestoreRecoveredTabBarFromTabBar(UITabBar *tabBar);
void WCLGScheduleTabBarItemLayoutForTabBar(UITabBar *tabBar);

NS_ASSUME_NONNULL_END
