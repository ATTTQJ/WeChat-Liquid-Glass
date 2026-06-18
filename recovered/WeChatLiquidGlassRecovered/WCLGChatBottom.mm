#import "WCLGChatBottom.h"
#import "WCLGAccess.h"
#import "WCLGConfig.h"
#import "WCLGConstants.h"
#import "WCLGVisual.h"
#import <QuartzCore/QuartzCore.h>
#import <objc/runtime.h>

static NSString * const WCLGChatBottomHostIdentifier = @"WCLGChatBottomFadeOverlayHost";
static char WCLGChatBottomOriginalBackgroundColorKey;
static char WCLGChatBottomWasAppliedKey;

static BOOL WCLGChatBottomConfigured(void) {
    WCLGConfig *config = [WCLGConfig sharedConfig];
    if (![config boolForKey:WCLGKeyLiquidGlassEnabled defaultValue:YES]) {
        return NO;
    }
    if (![config boolForKey:WCLGKeyChatBottomGlass defaultValue:NO]) {
        return NO;
    }
    return YES;
}

static BOOL WCLGChatBottomAccessEnabled(void) {
    if (!WCLGChatBottomConfigured()) {
        return NO;
    }
    return WCLGAccessFastCookieForFeature(WCLGFeatureLiquidGlass);
}

static NSArray<UIView *> *WCLGChatBottomSubviews(UIView *view, NSUInteger depth) {
    if (!view || depth == 0) {
        return @[];
    }
    NSMutableArray<UIView *> *subviews = [NSMutableArray array];
    for (UIView *subview in view.subviews) {
        [subviews addObject:subview];
        [subviews addObjectsFromArray:WCLGChatBottomSubviews(subview, depth - 1)];
    }
    return subviews;
}

static BOOL WCLGViewContainsTextInput(UIView *view) {
    if ([view isKindOfClass:UITextView.class] || [view isKindOfClass:UITextField.class]) {
        return YES;
    }
    for (UIView *subview in WCLGChatBottomSubviews(view, 3)) {
        if ([subview isKindOfClass:UITextView.class] || [subview isKindOfClass:UITextField.class]) {
            return YES;
        }
    }
    return NO;
}

static BOOL WCLGClassNameSuggestsInputToolView(NSString *className) {
    static NSArray<NSString *> *needles;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        needles = @[
            @"InputTool",
            @"InputToolbar",
            @"InputToolBar",
            @"ChatInput",
            @"MessageInput",
            @"MMInput",
            @"MMGrowText",
            @"GrowingText",
            @"TextInputBar",
            @"ComposeTool",
            @"SessionInput",
        ];
    });
    for (NSString *needle in needles) {
        if ([className rangeOfString:needle options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL WCLGLooksLikeChatBottomInputToolView(UIView *view) {
    if (!view || !view.window || view.hidden || view.alpha < 0.01) {
        return NO;
    }

    NSString *className = NSStringFromClass(view.class);
    if ([className hasPrefix:@"WCLG"] || [className hasPrefix:@"UITransition"] || [view isKindOfClass:UITabBar.class]) {
        return NO;
    }
    if (!WCLGClassNameSuggestsInputToolView(className)) {
        return NO;
    }

    CGRect windowRect = [view convertRect:view.bounds toView:view.window];
    CGFloat windowHeight = CGRectGetHeight(view.window.bounds);
    CGFloat height = CGRectGetHeight(windowRect);
    if (height < 34.0 || height > 180.0) {
        return NO;
    }
    if (CGRectGetMinY(windowRect) < windowHeight * 0.45) {
        return NO;
    }
    return WCLGViewContainsTextInput(view);
}

static UIView *WCLGFindChatBottomHost(UIView *view) {
    for (UIView *subview in view.subviews) {
        if ([subview.accessibilityIdentifier isEqualToString:WCLGChatBottomHostIdentifier]) {
            return subview;
        }
    }
    return nil;
}

static CGRect WCLGChatBottomGlassRectForView(UIView *view) {
    NSInteger mode = [[WCLGConfig sharedConfig] integerForKey:WCLGKeyChatBottomGlassMode defaultValue:0];
    CGRect bounds = view.bounds;
    CGFloat horizontalInset = 8.0;
    CGFloat verticalInset = 4.0;
    if (mode == 1) {
        horizontalInset = 6.0;
        verticalInset = 3.0;
    } else if (mode == 2) {
        horizontalInset = 10.0;
        verticalInset = 7.0;
    }
    CGRect rect = CGRectInset(bounds, horizontalInset, verticalInset);
    if (CGRectGetHeight(rect) < 36.0) {
        rect = CGRectInset(bounds, horizontalInset, 2.0);
    }
    return CGRectIntegral(rect);
}

static UIColor *WCLGChatBottomTintColor(void) {
    BOOL gradient = [[WCLGConfig sharedConfig] boolForKey:WCLGKeyChatBottomGradientBackground defaultValue:NO];
    if (gradient) {
        return [UIColor colorWithRed:0.72 green:0.90 blue:1.0 alpha:0.26];
    }
    return [UIColor colorWithWhite:1.0 alpha:0.20];
}

static void WCLGStoreOriginalBackgroundIfNeeded(UIView *view) {
    if (!objc_getAssociatedObject(view, &WCLGChatBottomOriginalBackgroundColorKey)) {
        UIColor *backgroundColor = view.backgroundColor ?: UIColor.clearColor;
        objc_setAssociatedObject(view, &WCLGChatBottomOriginalBackgroundColorKey, backgroundColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

static void WCLGRestoreOriginalBackgroundIfNeeded(UIView *view) {
    UIColor *backgroundColor = objc_getAssociatedObject(view, &WCLGChatBottomOriginalBackgroundColorKey);
    if (backgroundColor) {
        view.backgroundColor = backgroundColor;
    }
}

@interface WCLGChatBottomFadeOverlayHost ()
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIView *tintView;
@property (nonatomic, strong) CAGradientLayer *gradientLayer;
@end

@implementation WCLGChatBottomFadeOverlayHost

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.accessibilityIdentifier = WCLGChatBottomHostIdentifier;
        self.isAccessibilityElement = NO;
        self.clipsToBounds = YES;
        self.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        self.layer.cornerCurve = kCACornerCurveContinuous;
        _configuredBlurRadius = 24.0;
        _edgeView = [[UIView alloc] initWithFrame:CGRectZero];
        _blurView = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemThinMaterial]];
        _tintView = [[UIView alloc] initWithFrame:CGRectZero];
        _gradientLayer = [CAGradientLayer layer];
        _gradientLayer.hidden = YES;
        [self addSubview:_blurView];
        [self addSubview:_tintView];
        [self.layer insertSublayer:_gradientLayer above:_tintView.layer];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.layer.cornerRadius = MAX(18.0, CGRectGetHeight(self.bounds) * 0.5);
    self.blurView.frame = self.bounds;
    self.tintView.frame = self.bounds;
    self.gradientLayer.frame = self.bounds;

    BOOL gradient = [[WCLGConfig sharedConfig] boolForKey:WCLGKeyChatBottomGradientBackground defaultValue:NO];
    self.gradientLayer.hidden = !gradient;
    self.tintView.backgroundColor = WCLGChatBottomTintColor();
    self.gradientLayer.colors = @[
        (__bridge id)[UIColor colorWithRed:0.60 green:0.86 blue:1.0 alpha:0.25].CGColor,
        (__bridge id)[UIColor colorWithRed:1.0 green:1.0 blue:1.0 alpha:0.10].CGColor,
    ];
    self.gradientLayer.startPoint = CGPointMake(0.0, 0.0);
    self.gradientLayer.endPoint = CGPointMake(1.0, 1.0);
    self.layer.borderWidth = 0.5;
    self.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.20].CGColor;
}

@end

void WCLGPrimeChatBottomGlassForInputToolView(UIView *inputToolView) {
    if (!inputToolView) {
        return;
    }
    WCLGChatBottomFadeOverlayHost *host = (WCLGChatBottomFadeOverlayHost *)WCLGFindChatBottomHost(inputToolView);
    if (![host isKindOfClass:WCLGChatBottomFadeOverlayHost.class]) {
        host = [[WCLGChatBottomFadeOverlayHost alloc] initWithFrame:CGRectZero];
        [inputToolView insertSubview:host atIndex:0];
    }
    host.frame = WCLGChatBottomGlassRectForView(inputToolView);
    host.configuredBlurRadius = 24.0;
    [inputToolView sendSubviewToBack:host];
    [host setNeedsLayout];
}

void WCLGRemoveChatBottomGlassFromInputToolView(UIView *inputToolView) {
    if (!inputToolView) {
        return;
    }
    [WCLGFindChatBottomHost(inputToolView) removeFromSuperview];
    WCLGRestoreOriginalBackgroundIfNeeded(inputToolView);
    objc_setAssociatedObject(inputToolView, &WCLGChatBottomWasAppliedKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

void WCLGRestoreChatBottomControlShiftsForInputToolView(UIView *inputToolView) {
    if (!inputToolView) {
        return;
    }
    for (UIView *subview in WCLGChatBottomSubviews(inputToolView, 2)) {
        subview.transform = CGAffineTransformIdentity;
    }
}

void WCLGApplyChatBottomVoiceButtonCleanup(UIView *inputToolView) {
    if (![[WCLGConfig sharedConfig] boolForKey:WCLGKeyHideVoiceTranscribeIcon defaultValue:NO]) {
        return;
    }
    WCLGApplyVoiceTranscribeIconHideFallbackInView(inputToolView);
}

void WCLGApplyVoiceTranscribeIconHideFallbackInView(UIView *view) {
    if (!view) {
        return;
    }
    for (UIView *subview in WCLGChatBottomSubviews(view, 4)) {
        NSString *className = NSStringFromClass(subview.class);
        NSString *label = subview.accessibilityLabel ?: @"";
        NSString *identifier = subview.accessibilityIdentifier ?: @"";
        BOOL looksLikeTranscribe = [className rangeOfString:@"Transcribe" options:NSCaseInsensitiveSearch].location != NSNotFound
            || [label containsString:@"转文字"]
            || [label rangeOfString:@"transcribe" options:NSCaseInsensitiveSearch].location != NSNotFound
            || [identifier rangeOfString:@"transcribe" options:NSCaseInsensitiveSearch].location != NSNotFound;
        if (looksLikeTranscribe) {
            subview.hidden = YES;
            subview.alpha = 0.0;
        }
    }
}

void WCLGApplyChatBottomGlassToInputToolView(UIView *inputToolView) {
    if (!inputToolView) {
        return;
    }
    if (!WCLGChatBottomAccessEnabled()) {
        WCLGRemoveChatBottomGlassFromInputToolView(inputToolView);
        return;
    }

    WCLGStoreOriginalBackgroundIfNeeded(inputToolView);
    inputToolView.backgroundColor = UIColor.clearColor;
    inputToolView.opaque = NO;
    WCLGPrimeChatBottomGlassForInputToolView(inputToolView);
    WCLGApplyChatBottomVoiceButtonCleanup(inputToolView);
    objc_setAssociatedObject(inputToolView, &WCLGChatBottomWasAppliedKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

void WCLGApplyChatBottomGlassToInputToolBar(UIView *inputToolBar) {
    WCLGApplyChatBottomGlassToInputToolView(inputToolBar);
}

void WCLGRefreshChatBottomGlassForKeyboardState(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        for (UIWindow *window in UIApplication.sharedApplication.windows) {
            for (UIView *view in WCLGChatBottomSubviews(window, 6)) {
                WCLGMaybeApplyChatBottomGlassToView(view);
            }
        }
    });
}

void WCLGMaybeApplyChatBottomGlassToView(UIView *view) {
    if (!view || [NSStringFromClass(view.class) hasPrefix:@"WCLG"]) {
        return;
    }
    BOOL wasApplied = [objc_getAssociatedObject(view, &WCLGChatBottomWasAppliedKey) boolValue];
    if (!WCLGChatBottomConfigured()) {
        if (wasApplied) {
            WCLGRemoveChatBottomGlassFromInputToolView(view);
        }
        return;
    }
    if (!WCLGLooksLikeChatBottomInputToolView(view)) {
        if (wasApplied) {
            WCLGRemoveChatBottomGlassFromInputToolView(view);
        }
        return;
    }
    WCLGApplyChatBottomGlassToInputToolView(view);
}
