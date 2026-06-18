#import "WCLGChatBubble.h"
#import "WCLGAccess.h"
#import "WCLGConfig.h"
#import "WCLGConstants.h"
#import <QuartzCore/QuartzCore.h>
#import <objc/runtime.h>

static NSString * const WCLGChatBubbleHostIdentifier = @"WCLGChatBubbleGlassHostView";
static char WCLGChatBubbleWasAppliedKey;
static char WCLGChatBubbleOriginalBackgroundColorKey;
static char WCLGChatBubbleOriginalImageAlphaKey;

static BOOL WCLGChatBubbleConfigured(void) {
    WCLGConfig *config = [WCLGConfig sharedConfig];
    if (![config boolForKey:WCLGKeyLiquidGlassEnabled defaultValue:YES]) {
        return NO;
    }
    return [config boolForKey:WCLGKeyChatBubbleGlass defaultValue:NO];
}

static BOOL WCLGChatBubbleAccessEnabled(void) {
    return WCLGChatBubbleConfigured() && WCLGAccessFastCookieForFeature(WCLGFeatureChatBubble);
}

static NSArray<UIView *> *WCLGChatBubbleSubviews(UIView *view, NSUInteger depth) {
    if (!view || depth == 0) {
        return @[];
    }
    NSMutableArray<UIView *> *subviews = [NSMutableArray array];
    for (UIView *subview in view.subviews) {
        [subviews addObject:subview];
        [subviews addObjectsFromArray:WCLGChatBubbleSubviews(subview, depth - 1)];
    }
    return subviews;
}

static BOOL WCLGClassNameSuggestsBubble(NSString *className) {
    static NSArray<NSString *> *needles;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        needles = @[
            @"Bubble",
            @"MessageContent",
            @"TextMessage",
            @"AppMessage",
            @"RichMessage",
            @"ImageMessage",
            @"VoiceMessage",
            @"VideoMessage",
            @"EmoticonMessage",
            @"ChatMessage",
            @"MsgContent",
            @"MsgWrap",
        ];
    });
    for (NSString *needle in needles) {
        if ([className rangeOfString:needle options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL WCLGClassNameSuggestsMessageContainer(NSString *className) {
    static NSArray<NSString *> *needles;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        needles = @[
            @"MessageCell",
            @"MessageNode",
            @"MessageView",
            @"ChatTableViewCell",
            @"ChatCell",
            @"BaseMsg",
            @"MMMessage",
        ];
    });
    for (NSString *needle in needles) {
        if ([className rangeOfString:needle options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL WCLGViewContainsMessageText(UIView *view) {
    for (UIView *subview in WCLGChatBubbleSubviews(view, 3)) {
        if ([subview isKindOfClass:UILabel.class] || [subview isKindOfClass:UITextView.class]) {
            CGRect rect = [subview convertRect:subview.bounds toView:view];
            if (CGRectGetWidth(rect) > 12.0 && CGRectGetHeight(rect) > 10.0) {
                return YES;
            }
        }
    }
    return NO;
}

static BOOL WCLGLooksLikeChatBubbleView(UIView *view) {
    if (!view || !view.window || view.hidden || view.alpha < 0.01) {
        return NO;
    }
    if ([view isKindOfClass:UITableView.class] || [view isKindOfClass:UITableViewCell.class] || [view isKindOfClass:UIScrollView.class]) {
        return NO;
    }
    NSString *className = NSStringFromClass(view.class);
    if ([className hasPrefix:@"WCLG"] || [className hasPrefix:@"UITransition"] || [className containsString:@"Input"]) {
        return NO;
    }

    CGRect windowRect = [view convertRect:view.bounds toView:view.window];
    CGFloat width = CGRectGetWidth(windowRect);
    CGFloat height = CGRectGetHeight(windowRect);
    CGFloat windowWidth = CGRectGetWidth(view.window.bounds);
    if (width < 36.0 || width > windowWidth * 0.82 || height < 24.0 || height > 360.0) {
        return NO;
    }

    if (WCLGClassNameSuggestsBubble(className)) {
        return YES;
    }
    if (WCLGClassNameSuggestsMessageContainer(className) && WCLGViewContainsMessageText(view)) {
        return YES;
    }
    return NO;
}

static UIView *WCLGFindChatBubbleHost(UIView *view) {
    for (UIView *subview in view.subviews) {
        if ([subview.accessibilityIdentifier isEqualToString:WCLGChatBubbleHostIdentifier]) {
            return subview;
        }
    }
    return nil;
}

static BOOL WCLGChatBubbleLooksOutgoing(UIView *view) {
    NSString *className = NSStringFromClass(view.class);
    static NSArray<NSString *> *outgoingNames;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        outgoingNames = @[@"Outgoing", @"Sender", @"Send", @"Self", @"Mine", @"Right"];
    });
    for (NSString *name in outgoingNames) {
        if ([className rangeOfString:name options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    CGRect rect = [view convertRect:view.bounds toView:view.superview ?: view.window];
    CGFloat containerWidth = CGRectGetWidth((view.superview ?: view.window).bounds);
    return CGRectGetMidX(rect) > containerWidth * 0.56;
}

static CGRect WCLGChatBubbleGlassRectForView(UIView *view) {
    CGRect bounds = view.bounds;
    CGRect rect = CGRectInset(bounds, -1.0, -1.0);
    if (CGRectGetWidth(rect) > 80.0 && CGRectGetHeight(rect) > 32.0) {
        rect = CGRectInset(bounds, 0.0, 0.0);
    }
    return CGRectIntegral(rect);
}

static UIColor *WCLGChatBubbleTintColor(BOOL outgoing) {
    if (outgoing) {
        return [UIColor colorWithRed:0.33 green:0.86 blue:0.62 alpha:0.20];
    }
    return [UIColor colorWithWhite:1.0 alpha:0.22];
}

static void WCLGStoreOriginalBackgroundIfNeeded(UIView *view) {
    if (!objc_getAssociatedObject(view, &WCLGChatBubbleOriginalBackgroundColorKey)) {
        objc_setAssociatedObject(view, &WCLGChatBubbleOriginalBackgroundColorKey, view.backgroundColor ?: UIColor.clearColor, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

static void WCLGRestoreOriginalBackgroundIfNeeded(UIView *view) {
    UIColor *backgroundColor = objc_getAssociatedObject(view, &WCLGChatBubbleOriginalBackgroundColorKey);
    if (backgroundColor) {
        view.backgroundColor = backgroundColor;
    }
}

@interface WCLGChatBubbleGlassHostView ()
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIView *tintView;
@property (nonatomic, strong) CAGradientLayer *flowLayer;
@end

@implementation WCLGChatBubbleGlassHostView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.isAccessibilityElement = NO;
        self.accessibilityIdentifier = WCLGChatBubbleHostIdentifier;
        self.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        self.clipsToBounds = YES;
        self.layer.cornerCurve = kCACornerCurveContinuous;
        _blurView = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemThinMaterial]];
        _tintView = [[UIView alloc] initWithFrame:CGRectZero];
        _flowLayer = [CAGradientLayer layer];
        [self addSubview:_blurView];
        [self addSubview:_tintView];
        [self.layer insertSublayer:_flowLayer above:_tintView.layer];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.layer.cornerRadius = MIN(22.0, MAX(14.0, CGRectGetHeight(self.bounds) * 0.32));
    self.blurView.frame = self.bounds;
    self.tintView.frame = self.bounds;
    self.flowLayer.frame = self.bounds;
    self.tintView.backgroundColor = WCLGChatBubbleTintColor(self.outgoing);
    self.flowLayer.hidden = !self.flowEnabled;
    self.flowLayer.startPoint = CGPointMake(0.0, 0.0);
    self.flowLayer.endPoint = CGPointMake(1.0, 1.0);
    self.flowLayer.colors = self.outgoing ? @[
        (__bridge id)[UIColor colorWithRed:0.40 green:0.96 blue:0.70 alpha:0.30].CGColor,
        (__bridge id)[UIColor colorWithRed:0.72 green:0.95 blue:1.0 alpha:0.18].CGColor,
    ] : @[
        (__bridge id)[UIColor colorWithWhite:1.0 alpha:0.28].CGColor,
        (__bridge id)[UIColor colorWithRed:0.72 green:0.86 blue:1.0 alpha:0.16].CGColor,
    ];
    BOOL border = self.borderEnabled || [[WCLGConfig sharedConfig] boolForKey:WCLGKeyChatBubbleFlowBorder defaultValue:NO];
    self.layer.borderWidth = border ? 0.7 : 0.0;
    self.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.22].CGColor;
}

@end

void WCLGRegisterMessageBubbleBackgrounds(void) {
}

BOOL WCLGBubbleImageViewShouldSuppressOriginalImage(UIImageView *imageView) {
    if (!imageView || !WCLGChatBubbleAccessEnabled()) {
        return NO;
    }
    NSString *className = NSStringFromClass(imageView.class);
    NSString *superClassName = NSStringFromClass(imageView.superview.class);
    if ([className rangeOfString:@"Bubble" options:NSCaseInsensitiveSearch].location != NSNotFound) {
        return YES;
    }
    return [superClassName rangeOfString:@"Bubble" options:NSCaseInsensitiveSearch].location != NSNotFound
        && CGRectGetWidth(imageView.bounds) > 24.0
        && CGRectGetHeight(imageView.bounds) > 20.0;
}

void WCLGBubbleSuppressOriginalImageView(UIImageView *imageView) {
    if (!WCLGBubbleImageViewShouldSuppressOriginalImage(imageView)) {
        return;
    }
    if (!objc_getAssociatedObject(imageView, &WCLGChatBubbleOriginalImageAlphaKey)) {
        objc_setAssociatedObject(imageView, &WCLGChatBubbleOriginalImageAlphaKey, @(imageView.alpha), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    imageView.alpha = 0.0;
}

void WCLGEnsureChatBubbleZOrder(UIView *messageView) {
    UIView *host = WCLGFindChatBubbleHost(messageView);
    if (host) {
        [messageView sendSubviewToBack:host];
    }
}

BOOL WCLGMessageViewHasNativeFlowApplied(UIView *messageView) {
    WCLGChatBubbleGlassHostView *host = (WCLGChatBubbleGlassHostView *)WCLGFindChatBubbleHost(messageView);
    return [host isKindOfClass:WCLGChatBubbleGlassHostView.class] && host.flowEnabled;
}

BOOL WCLGChatBubbleNeedsFullApplyForMessageIdentity(UIView *messageView) {
    return ![objc_getAssociatedObject(messageView, &WCLGChatBubbleWasAppliedKey) boolValue];
}

BOOL WCLGChatBubbleNeedsDeferredApply(UIView *messageView) {
    return CGRectIsEmpty(messageView.bounds) || !messageView.window;
}

void WCLGApplyChatBubbleGlassToMessageView(UIView *messageView) {
    if (!messageView) {
        return;
    }
    if (!WCLGChatBubbleAccessEnabled()) {
        WCLGRemoveChatBubbleGlassFromMessageView(messageView);
        return;
    }

    WCLGStoreOriginalBackgroundIfNeeded(messageView);
    messageView.backgroundColor = UIColor.clearColor;
    messageView.opaque = NO;

    WCLGChatBubbleGlassHostView *host = (WCLGChatBubbleGlassHostView *)WCLGFindChatBubbleHost(messageView);
    if (![host isKindOfClass:WCLGChatBubbleGlassHostView.class]) {
        host = [[WCLGChatBubbleGlassHostView alloc] initWithFrame:CGRectZero];
        [messageView insertSubview:host atIndex:0];
    }
    host.frame = WCLGChatBubbleGlassRectForView(messageView);
    host.outgoing = WCLGChatBubbleLooksOutgoing(messageView);
    host.flowEnabled = [[WCLGConfig sharedConfig] boolForKey:WCLGKeyChatBubbleFlowGradient defaultValue:NO]
        && WCLGAccessFastCookieForFeature(WCLGFeatureFlowBubble);
    host.borderEnabled = [[WCLGConfig sharedConfig] boolForKey:WCLGKeyChatBubbleFlowBorder defaultValue:NO];
    [host setNeedsLayout];
    WCLGEnsureChatBubbleZOrder(messageView);

    for (UIView *subview in WCLGChatBubbleSubviews(messageView, 2)) {
        if ([subview isKindOfClass:UIImageView.class]) {
            WCLGBubbleSuppressOriginalImageView((UIImageView *)subview);
        }
    }
    objc_setAssociatedObject(messageView, &WCLGChatBubbleWasAppliedKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

void WCLGRemoveChatBubbleGlassFromMessageView(UIView *messageView) {
    if (!messageView) {
        return;
    }
    [WCLGFindChatBubbleHost(messageView) removeFromSuperview];
    WCLGRestoreOriginalBackgroundIfNeeded(messageView);
    for (UIView *subview in WCLGChatBubbleSubviews(messageView, 2)) {
        if ([subview isKindOfClass:UIImageView.class]) {
            NSNumber *alpha = objc_getAssociatedObject(subview, &WCLGChatBubbleOriginalImageAlphaKey);
            if (alpha) {
                subview.alpha = alpha.doubleValue;
            }
        }
    }
    objc_setAssociatedObject(messageView, &WCLGChatBubbleWasAppliedKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

void WCLGScheduleApplyChatBubbleGlass(UIView *messageView) {
    __weak UIView *weakView = messageView;
    dispatch_async(dispatch_get_main_queue(), ^{
        WCLGApplyChatBubbleGlassToMessageView(weakView);
    });
}

void WCLGUpdateVisibleChatBubbleFlowGradientsFromView(UIView *view) {
    for (UIView *subview in WCLGChatBubbleSubviews(view, 8)) {
        if ([subview isKindOfClass:WCLGChatBubbleGlassHostView.class]) {
            [(WCLGChatBubbleGlassHostView *)subview setFlowEnabled:[[WCLGConfig sharedConfig] boolForKey:WCLGKeyChatBubbleFlowGradient defaultValue:NO]];
            [subview setNeedsLayout];
        }
    }
}

void WCLGRunChatBubbleDiagnosticsAfterDelay(void) {
}

void WCLGMaybeApplyChatBubbleGlassToView(UIView *view) {
    if (!view) {
        return;
    }
    BOOL wasApplied = [objc_getAssociatedObject(view, &WCLGChatBubbleWasAppliedKey) boolValue];
    if (!WCLGChatBubbleConfigured()) {
        if (wasApplied) {
            WCLGRemoveChatBubbleGlassFromMessageView(view);
        }
        return;
    }
    if ([NSStringFromClass(view.class) hasPrefix:@"WCLG"]) {
        return;
    }
    if (!WCLGLooksLikeChatBubbleView(view)) {
        if (wasApplied) {
            WCLGRemoveChatBubbleGlassFromMessageView(view);
        }
        return;
    }
    if (WCLGChatBubbleNeedsDeferredApply(view)) {
        WCLGScheduleApplyChatBubbleGlass(view);
        return;
    }
    WCLGApplyChatBubbleGlassToMessageView(view);
}
