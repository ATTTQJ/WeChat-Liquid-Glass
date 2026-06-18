#import "WCLGVisual.h"
#import "WCLGAccess.h"
#import "WCLGConfig.h"
#import "WCLGConstants.h"
#import <QuartzCore/QuartzCore.h>
#import <objc/runtime.h>

static NSString * const WCLGTabBarHostIdentifier = @"WCLGTabBarVisualHostView";
static NSString * const WCLGTabBarSearchIdentifier = @"WCLGTabBarRightSearchCapsule";
static char WCLGSearchTargetAssociationKey;
static char WCLGOriginalTabBarBackgroundAlphaKey;
static char WCLGOriginalTabBarBackgroundImageKey;
static char WCLGOriginalTabBarShadowImageKey;
static char WCLGOriginalTabBarStandardAppearanceKey;
static char WCLGOriginalTabBarScrollEdgeAppearanceKey;

static void WCLGStoreOriginalObject(id owner, char *key, id value) {
    if (!objc_getAssociatedObject(owner, key)) {
        objc_setAssociatedObject(owner, key, value ?: NSNull.null, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

static id WCLGOriginalObject(id owner, char *key) {
    id value = objc_getAssociatedObject(owner, key);
    return value == NSNull.null ? nil : value;
}

static BOOL WCLGVisualAccessEnabled(NSString *feature) {
    if (![[WCLGConfig sharedConfig] boolForKey:WCLGKeyLiquidGlassEnabled defaultValue:YES]) {
        return NO;
    }
    return feature.length == 0 || WCLGAccessFastCookieForFeature(feature);
}

static NSArray<UIView *> *WCLGSubviewsMatching(UIView *view, BOOL (^predicate)(UIView *subview)) {
    NSMutableArray<UIView *> *matches = [NSMutableArray array];
    for (UIView *subview in view.subviews) {
        if (predicate(subview)) {
            [matches addObject:subview];
        }
        [matches addObjectsFromArray:WCLGSubviewsMatching(subview, predicate)];
    }
    return matches;
}

static NSArray<UIView *> *WCLGTabBarItemViews(UITabBar *tabBar) {
    NSMutableArray<UIView *> *items = [NSMutableArray array];
    for (UIView *subview in tabBar.subviews) {
        NSString *className = NSStringFromClass(subview.class);
        if ([className containsString:@"UITabBarButton"] && !subview.hidden && subview.alpha > 0.01) {
            [items addObject:subview];
        }
    }
    [items sortUsingComparator:^NSComparisonResult(UIView *left, UIView *right) {
        CGFloat lx = CGRectGetMidX(left.frame);
        CGFloat rx = CGRectGetMidX(right.frame);
        if (lx < rx) {
            return NSOrderedAscending;
        }
        if (lx > rx) {
            return NSOrderedDescending;
        }
        return NSOrderedSame;
    }];
    return items;
}

static CGRect WCLGTabBarContentRect(UITabBar *tabBar) {
    CGRect bounds = tabBar.bounds;
    CGFloat bottomInset = tabBar.safeAreaInsets.bottom;
    if (bottomInset > 0 && CGRectGetHeight(bounds) - bottomInset >= 44.0) {
        bounds.size.height -= bottomInset;
    }
    return bounds;
}

static CGFloat WCLGTabBarHorizontalInsetForSizeMode(NSInteger sizeMode) {
    switch (sizeMode) {
        case 1:
            return 18.0;
        case 2:
            return 8.0;
        default:
            return 12.0;
    }
}

static CGFloat WCLGTabBarHeightForSizeMode(NSInteger sizeMode, CGFloat availableHeight) {
    CGFloat target = 56.0;
    if (sizeMode == 1) {
        target = 50.0;
    } else if (sizeMode == 2) {
        target = 62.0;
    }
    return MIN(MAX(44.0, target), MAX(44.0, availableHeight - 4.0));
}

static CGRect WCLGTabBarPlatterRect(UITabBar *tabBar) {
    NSInteger sizeMode = [[WCLGConfig sharedConfig] integerForKey:WCLGKeyGlassSizeMode defaultValue:0];
    CGRect content = WCLGTabBarContentRect(tabBar);
    CGFloat inset = WCLGTabBarHorizontalInsetForSizeMode(sizeMode);
    CGFloat height = WCLGTabBarHeightForSizeMode(sizeMode, CGRectGetHeight(content));
    CGFloat y = CGRectGetMinY(content) + floor((CGRectGetHeight(content) - height) * 0.5);
    return CGRectIntegral(CGRectMake(inset, y, MAX(1.0, CGRectGetWidth(content) - inset * 2.0), height));
}

static CGRect WCLGTabBarRightSearchRect(UITabBar *tabBar) {
    NSInteger sizeMode = [[WCLGConfig sharedConfig] integerForKey:WCLGKeyTabBarRightSearchSizeMode defaultValue:0];
    CGRect platter = WCLGTabBarPlatterRect(tabBar);
    CGFloat height = MIN(CGRectGetHeight(platter) - 8.0, sizeMode == 1 ? 38.0 : (sizeMode == 2 ? 48.0 : 42.0));
    CGFloat width = sizeMode == 2 ? 64.0 : (sizeMode == 1 ? 48.0 : 56.0);
    CGFloat x = CGRectGetMaxX(platter) - width - 6.0;
    CGFloat y = CGRectGetMidY(platter) - height * 0.5;
    return CGRectIntegral(CGRectMake(x, y, width, height));
}

static BOOL WCLGTabBarRightSearchEnabled(void) {
    WCLGConfig *config = [WCLGConfig sharedConfig];
    return [config boolForKey:WCLGKeyTabBarRightSearch defaultValue:NO] && WCLGVisualAccessEnabled(WCLGFeatureTabBarSearchCapsule);
}

static UIView *WCLGFindViewWithIdentifier(UIView *root, NSString *identifier) {
    for (UIView *subview in root.subviews) {
        if ([subview.accessibilityIdentifier isEqualToString:identifier]) {
            return subview;
        }
    }
    return nil;
}

static void WCLGApplyHiddenTitleState(UIView *itemView, BOOL hidden) {
    for (UIView *label in WCLGSubviewsMatching(itemView, ^BOOL(UIView *subview) {
        return [subview isKindOfClass:UILabel.class];
    })) {
        label.hidden = hidden;
        label.alpha = hidden ? 0.0 : 1.0;
    }
}

static void WCLGStyleSearchCapsule(UIButton *button) {
    button.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.22];
    button.tintColor = UIColor.labelColor;
    button.layer.cornerCurve = kCACornerCurveContinuous;
    button.layer.cornerRadius = CGRectGetHeight(button.bounds) * 0.5;
    button.layer.borderWidth = 0.5;
    button.layer.borderColor = [UIColor colorWithWhite:1.0 alpha:0.24].CGColor;
    button.clipsToBounds = YES;
    if (@available(iOS 13.0, *)) {
        [button setImage:[UIImage systemImageNamed:@"magnifyingglass"] forState:UIControlStateNormal];
    }
}

@implementation WCLGVariableBlurHostView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.backgroundColor = UIColor.clearColor;
        _backdropLayer = [CALayer layer];
        _backdropLayer.masksToBounds = YES;
        _backdropLayer.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.12].CGColor;
        [self.layer addSublayer:_backdropLayer];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.backdropLayer.frame = self.bounds;
    self.lastSize = self.bounds.size;
}

@end

@implementation WCLGEdgeEffectView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.clipsToBounds = YES;
        _blurEnabled = YES;
        _fallbackBlurView = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemMaterial]];
        _fallbackBlurView.userInteractionEnabled = NO;
        _blurHostView = [[WCLGVariableBlurHostView alloc] initWithFrame:CGRectZero];
        _contentView = [[UIView alloc] initWithFrame:CGRectZero];
        _contentView.userInteractionEnabled = NO;
        _contentMaskView = [[UIView alloc] initWithFrame:CGRectZero];
        [self addSubview:_fallbackBlurView];
        [self addSubview:_blurHostView];
        [self addSubview:_contentView];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.fallbackBlurView.frame = self.bounds;
    self.blurHostView.frame = self.bounds;
    self.contentView.frame = self.bounds;
}

- (void)updateWithContentColor:(UIColor *)contentColor
                          blur:(BOOL)blur
                         alpha:(double)alpha
                          rect:(CGRect)rect
                          edge:(NSInteger)edge
                      edgeSize:(double)edgeSize
                    blurRadius:(double)blurRadius {
    self.lastContentColor = contentColor;
    self.lastBlur = blur;
    self.lastAlpha = alpha;
    self.lastRect = rect;
    self.lastEdge = edge;
    self.lastEdgeSize = edgeSize;
    self.lastBlurRadius = blurRadius;

    self.frame = rect;
    self.alpha = alpha;
    self.blurEnabled = blur;
    self.fallbackBlurView.hidden = !blur;
    self.blurHostView.hidden = !blur;
    self.contentView.backgroundColor = contentColor ?: [UIColor colorWithWhite:1.0 alpha:0.18];

    CAGradientLayer *mask = [CAGradientLayer layer];
    mask.frame = self.bounds;
    if (edge == UIRectEdgeBottom) {
        mask.startPoint = CGPointMake(0.5, 1.0);
        mask.endPoint = CGPointMake(0.5, 0.0);
    } else if (edge == UIRectEdgeLeft) {
        mask.startPoint = CGPointMake(0.0, 0.5);
        mask.endPoint = CGPointMake(1.0, 0.5);
    } else if (edge == UIRectEdgeRight) {
        mask.startPoint = CGPointMake(1.0, 0.5);
        mask.endPoint = CGPointMake(0.0, 0.5);
    } else {
        mask.startPoint = CGPointMake(0.5, 0.0);
        mask.endPoint = CGPointMake(0.5, 1.0);
    }
    CGFloat stop = edgeSize > 1.0 ? MIN(1.0, edgeSize / MAX(1.0, MAX(CGRectGetWidth(self.bounds), CGRectGetHeight(self.bounds)))) : 1.0;
    mask.colors = @[
        (__bridge id)[UIColor colorWithWhite:1.0 alpha:1.0].CGColor,
        (__bridge id)[UIColor colorWithWhite:1.0 alpha:0.0].CGColor,
    ];
    mask.locations = @[@0.0, @(stop)];
    self.layer.mask = mask;
}

@end

@interface WCLGTabBarVisualHostView ()
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) UIView *tintView;
@end

@implementation WCLGTabBarVisualHostView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.accessibilityIdentifier = WCLGTabBarHostIdentifier;
        self.clipsToBounds = YES;
        self.layer.cornerCurve = kCACornerCurveContinuous;
        _blurView = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemMaterial]];
        _tintView = [[UIView alloc] initWithFrame:CGRectZero];
        _tintView.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.18];
        [self addSubview:_blurView];
        [self addSubview:_tintView];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.blurView.frame = self.bounds;
    self.tintView.frame = self.bounds;
    self.layer.cornerRadius = CGRectGetHeight(self.bounds) * 0.5;
    BOOL extraClear = [[WCLGConfig sharedConfig] boolForKey:WCLGKeyTabBarExtraClear defaultValue:NO];
    self.tintView.alpha = extraClear ? 0.35 : 1.0;
}

@end

@interface WCLGSearchActionTarget : NSObject
@property (nonatomic, weak) UITabBar *tabBar;
@end

@implementation WCLGSearchActionTarget

- (void)searchTapped:(id)sender {
    UIImpactFeedbackGenerator *feedback = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
    [feedback impactOccurred];
    NSURL *url = [NSURL URLWithString:@"weixin://dl/search?keyword="];
    if (url) {
        [[UIApplication sharedApplication] openURL:url options:@{} completionHandler:nil];
    }
}

@end

BOOL WCLGSearchTabBarIsActive(void) {
    return [[WCLGConfig sharedConfig] boolForKey:WCLGKeySearchTabBar defaultValue:NO] && WCLGVisualAccessEnabled(WCLGFeatureSearchTabBar);
}

void WCLGApplyTabBarCompatibilityToView(UIView *view) {
    if (!view) {
        return;
    }
    view.clipsToBounds = NO;
    view.opaque = NO;
}

void WCLGApplyNativeTabBarBackgroundCleanup(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    WCLGStoreOriginalObject(tabBar, &WCLGOriginalTabBarBackgroundImageKey, tabBar.backgroundImage);
    WCLGStoreOriginalObject(tabBar, &WCLGOriginalTabBarShadowImageKey, tabBar.shadowImage);
    if (@available(iOS 13.0, *)) {
        WCLGStoreOriginalObject(tabBar, &WCLGOriginalTabBarStandardAppearanceKey, tabBar.standardAppearance);
        if (@available(iOS 15.0, *)) {
            WCLGStoreOriginalObject(tabBar, &WCLGOriginalTabBarScrollEdgeAppearanceKey, tabBar.scrollEdgeAppearance);
        }
    }

    tabBar.translucent = YES;
    tabBar.backgroundImage = [UIImage new];
    tabBar.shadowImage = [UIImage new];
    if (@available(iOS 13.0, *)) {
        UITabBarAppearance *appearance = [[UITabBarAppearance alloc] init];
        [appearance configureWithTransparentBackground];
        appearance.backgroundColor = UIColor.clearColor;
        appearance.shadowColor = UIColor.clearColor;
        tabBar.standardAppearance = appearance;
        if (@available(iOS 15.0, *)) {
            tabBar.scrollEdgeAppearance = appearance;
        }
    }

    for (UIView *subview in tabBar.subviews) {
        NSString *className = NSStringFromClass(subview.class);
        BOOL nativeBackground = [className containsString:@"UIBarBackground"] || [className containsString:@"UITabBarBackground"];
        if (nativeBackground) {
            if (!objc_getAssociatedObject(subview, &WCLGOriginalTabBarBackgroundAlphaKey)) {
                objc_setAssociatedObject(subview, &WCLGOriginalTabBarBackgroundAlphaKey, @(subview.alpha), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            subview.alpha = 0.0;
            subview.hidden = YES;
        }
    }
}

void WCLGRestoreNativeTabBarBackgroundCleanup(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    tabBar.backgroundImage = WCLGOriginalObject(tabBar, &WCLGOriginalTabBarBackgroundImageKey);
    tabBar.shadowImage = WCLGOriginalObject(tabBar, &WCLGOriginalTabBarShadowImageKey);
    if (@available(iOS 13.0, *)) {
        UITabBarAppearance *appearance = WCLGOriginalObject(tabBar, &WCLGOriginalTabBarStandardAppearanceKey);
        if (appearance) {
            tabBar.standardAppearance = appearance;
        }
        if (@available(iOS 15.0, *)) {
            UITabBarAppearance *scrollAppearance = WCLGOriginalObject(tabBar, &WCLGOriginalTabBarScrollEdgeAppearanceKey);
            tabBar.scrollEdgeAppearance = scrollAppearance;
        }
    }

    for (UIView *subview in tabBar.subviews) {
        NSNumber *originalAlpha = objc_getAssociatedObject(subview, &WCLGOriginalTabBarBackgroundAlphaKey);
        if (originalAlpha) {
            subview.alpha = originalAlpha.doubleValue;
            subview.hidden = NO;
        }
    }
}

void WCLGApplyTabBarItemLayoutToTabBar(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    NSArray<UIView *> *items = WCLGTabBarItemViews(tabBar);
    if (items.count == 0) {
        return;
    }

    BOOL hideTitles = [[WCLGConfig sharedConfig] boolForKey:WCLGKeyHideTitles defaultValue:NO];
    BOOL reserveSearch = WCLGTabBarRightSearchEnabled();
    CGRect content = WCLGTabBarContentRect(tabBar);
    CGFloat left = 0.0;
    CGFloat right = reserveSearch ? CGRectGetWidth(tabBar.bounds) - CGRectGetMinX(WCLGTabBarRightSearchRect(tabBar)) + 2.0 : 0.0;
    CGFloat width = MAX(1.0, CGRectGetWidth(content) - left - right);
    CGFloat itemWidth = floor(width / items.count);
    for (NSUInteger index = 0; index < items.count; index++) {
        UIView *item = items[index];
        CGRect frame = item.frame;
        frame.origin.x = left + itemWidth * index;
        frame.origin.y = CGRectGetMinY(content);
        frame.size.width = index == items.count - 1 ? CGRectGetMaxX(content) - right - frame.origin.x : itemWidth;
        frame.size.height = CGRectGetHeight(content);
        item.frame = CGRectIntegral(frame);
        WCLGApplyHiddenTitleState(item, hideTitles);
    }
}

void WCLGRestoreTabBarItemLayoutForTabBar(UITabBar *tabBar) {
    for (UIView *item in WCLGTabBarItemViews(tabBar)) {
        WCLGApplyHiddenTitleState(item, NO);
    }
}

void WCLGApplyGlassSizeModeToTabBar(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    WCLGTabBarVisualHostView *host = (WCLGTabBarVisualHostView *)WCLGFindViewWithIdentifier(tabBar, WCLGTabBarHostIdentifier);
    if (![host isKindOfClass:WCLGTabBarVisualHostView.class]) {
        host = [[WCLGTabBarVisualHostView alloc] initWithFrame:CGRectZero];
        [tabBar insertSubview:host atIndex:0];
    }
    host.frame = WCLGTabBarPlatterRect(tabBar);
    [host setNeedsLayout];
}

void WCLGRestoreGlassSizeModeForTabBar(UITabBar *tabBar) {
    UIView *host = WCLGFindViewWithIdentifier(tabBar, WCLGTabBarHostIdentifier);
    [host removeFromSuperview];
}

static void WCLGApplyTabBarSearchCapsule(UITabBar *tabBar) {
    UIButton *capsule = (UIButton *)WCLGFindViewWithIdentifier(tabBar, WCLGTabBarSearchIdentifier);
    BOOL enabled = WCLGTabBarRightSearchEnabled();
    if (!enabled) {
        [capsule removeFromSuperview];
        return;
    }

    if (![capsule isKindOfClass:UIButton.class]) {
        capsule = [UIButton buttonWithType:UIButtonTypeSystem];
        capsule.accessibilityIdentifier = WCLGTabBarSearchIdentifier;
        capsule.accessibilityLabel = @"搜索";
        WCLGSearchActionTarget *target = [WCLGSearchActionTarget new];
        target.tabBar = tabBar;
        objc_setAssociatedObject(capsule, &WCLGSearchTargetAssociationKey, target, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [capsule addTarget:target action:@selector(searchTapped:) forControlEvents:UIControlEventTouchUpInside];
        [tabBar addSubview:capsule];
    }

    capsule.frame = WCLGTabBarRightSearchRect(tabBar);
    [tabBar bringSubviewToFront:capsule];
    WCLGStyleSearchCapsule(capsule);
}

void WCLGApplyRecoveredTabBarToTabBar(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    if (!WCLGVisualAccessEnabled(WCLGFeatureLiquidGlass)) {
        WCLGRestoreRecoveredTabBarFromTabBar(tabBar);
        return;
    }
    WCLGApplyTabBarCompatibilityToView(tabBar);
    WCLGApplyNativeTabBarBackgroundCleanup(tabBar);
    WCLGApplyGlassSizeModeToTabBar(tabBar);
    WCLGApplyTabBarSearchCapsule(tabBar);
    WCLGApplyTabBarItemLayoutToTabBar(tabBar);
}

void WCLGRestoreRecoveredTabBarFromTabBar(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    WCLGRestoreGlassSizeModeForTabBar(tabBar);
    WCLGRestoreTabBarItemLayoutForTabBar(tabBar);
    WCLGRestoreNativeTabBarBackgroundCleanup(tabBar);
    UIView *capsule = WCLGFindViewWithIdentifier(tabBar, WCLGTabBarSearchIdentifier);
    [capsule removeFromSuperview];
}

void WCLGScheduleTabBarItemLayoutForTabBar(UITabBar *tabBar) {
    if (!tabBar) {
        return;
    }
    __weak UITabBar *weakTabBar = tabBar;
    dispatch_async(dispatch_get_main_queue(), ^{
        WCLGApplyRecoveredTabBarToTabBar(weakTabBar);
    });
}
