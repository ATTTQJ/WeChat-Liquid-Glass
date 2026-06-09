#import "WCLGTopGlassOverlayView.h"
#import <QuartzCore/QuartzCore.h>

static CGFloat WCLGScreenScale(void) {
    CGFloat scale = UIScreen.mainScreen.scale;
    return scale > 0.0 ? scale : 2.0;
}

static CGFloat WCLGPixel(void) {
    return 1.0 / WCLGScreenScale();
}

@interface WCLGGlassCapsuleView : UIView
@property (nonatomic, strong) UIVisualEffectView *effectView;
@property (nonatomic, strong) UIView *tintView;
@property (nonatomic, strong) CAGradientLayer *highlightLayer;
@property (nonatomic, assign) BOOL forceDarkTint;
- (void)refreshAppearance;
@end

@implementation WCLGGlassCapsuleView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.clipsToBounds = NO;
        self.layer.shadowOffset = CGSizeMake(0.0, 2.0);
        self.layer.shadowRadius = 8.0;
        self.layer.shadowOpacity = 0.08;

        UIBlurEffect *effect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterial];
        _effectView = [[UIVisualEffectView alloc] initWithEffect:effect];
        _effectView.userInteractionEnabled = NO;
        _effectView.clipsToBounds = YES;
        [self addSubview:_effectView];

        _tintView = [[UIView alloc] initWithFrame:CGRectZero];
        _tintView.userInteractionEnabled = NO;
        [_effectView.contentView addSubview:_tintView];

        _highlightLayer = [CAGradientLayer layer];
        _highlightLayer.startPoint = CGPointMake(0.5, 0.0);
        _highlightLayer.endPoint = CGPointMake(0.5, 1.0);
        [_effectView.layer addSublayer:_highlightLayer];

        [self refreshAppearance];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];

    CGFloat radius = CGRectGetHeight(self.bounds) * 0.5;
    self.effectView.frame = self.bounds;
    self.effectView.layer.cornerRadius = radius;
    self.tintView.frame = self.effectView.contentView.bounds;
    self.highlightLayer.frame = self.effectView.bounds;

    self.layer.shadowPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds cornerRadius:radius].CGPath;
    self.effectView.layer.borderWidth = WCLGPixel() * 0.5;
}

- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    [super traitCollectionDidChange:previousTraitCollection];
    [self refreshAppearance];
}

- (void)setForceDarkTint:(BOOL)forceDarkTint {
    _forceDarkTint = forceDarkTint;
    [self refreshAppearance];
}

- (void)refreshAppearance {
    BOOL dark = self.forceDarkTint || self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;

    UIColor *tint = dark
        ? [UIColor colorWithWhite:0.0 alpha:0.18]
        : [UIColor colorWithWhite:1.0 alpha:0.16];
    UIColor *border = dark
        ? [UIColor colorWithWhite:1.0 alpha:0.13]
        : [UIColor colorWithWhite:1.0 alpha:0.42];

    self.tintView.backgroundColor = tint;
    self.effectView.layer.borderColor = border.CGColor;
    self.layer.shadowColor = (dark ? UIColor.blackColor : UIColor.grayColor).CGColor;

    self.highlightLayer.colors = @[
        (__bridge id)[UIColor colorWithWhite:1.0 alpha:(dark ? 0.12 : 0.28)].CGColor,
        (__bridge id)[UIColor colorWithWhite:1.0 alpha:0.03].CGColor,
        (__bridge id)[UIColor colorWithWhite:0.0 alpha:(dark ? 0.08 : 0.03)].CGColor
    ];
    self.highlightLayer.locations = @[@0.0, @0.42, @1.0];
}

@end

@interface WCLGTopGlassOverlayView ()
@property (nonatomic, strong) UIVisualEffectView *fadeBlurView;
@property (nonatomic, strong) UIView *fadeTintView;
@property (nonatomic, strong) CAGradientLayer *fadeMaskLayer;
@property (nonatomic, strong) WCLGGlassCapsuleView *backCapsule;
@property (nonatomic, strong) WCLGGlassCapsuleView *titleCapsule;
@property (nonatomic, strong) WCLGGlassCapsuleView *rightCapsule;
@end

@implementation WCLGTopGlassOverlayView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled = NO;
        self.backgroundColor = UIColor.clearColor;
        self.clipsToBounds = NO;

        UIBlurEffect *fadeEffect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterial];
        _fadeBlurView = [[UIVisualEffectView alloc] initWithEffect:fadeEffect];
        _fadeBlurView.userInteractionEnabled = NO;
        [self addSubview:_fadeBlurView];

        _fadeTintView = [[UIView alloc] initWithFrame:CGRectZero];
        _fadeTintView.userInteractionEnabled = NO;
        [_fadeBlurView.contentView addSubview:_fadeTintView];

        _fadeMaskLayer = [CAGradientLayer layer];
        _fadeMaskLayer.startPoint = CGPointMake(0.5, 0.0);
        _fadeMaskLayer.endPoint = CGPointMake(0.5, 1.0);
        _fadeMaskLayer.colors = @[
            (__bridge id)UIColor.blackColor.CGColor,
            (__bridge id)[UIColor colorWithWhite:0.0 alpha:0.72].CGColor,
            (__bridge id)UIColor.clearColor.CGColor
        ];
        _fadeMaskLayer.locations = @[@0.0, @0.62, @1.0];
        _fadeBlurView.layer.mask = _fadeMaskLayer;

        _backCapsule = [[WCLGGlassCapsuleView alloc] initWithFrame:CGRectZero];
        _titleCapsule = [[WCLGGlassCapsuleView alloc] initWithFrame:CGRectZero];
        _rightCapsule = [[WCLGGlassCapsuleView alloc] initWithFrame:CGRectZero];

        [self addSubview:_backCapsule];
        [self addSubview:_titleCapsule];
        [self addSubview:_rightCapsule];

        [self refreshAppearance];
    }
    return self;
}

- (void)setForceDarkTint:(BOOL)forceDarkTint {
    _forceDarkTint = forceDarkTint;
    self.backCapsule.forceDarkTint = forceDarkTint;
    self.titleCapsule.forceDarkTint = forceDarkTint;
    self.rightCapsule.forceDarkTint = forceDarkTint;
    [self refreshAppearance];
}

- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    [super traitCollectionDidChange:previousTraitCollection];
    [self refreshAppearance];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    self.fadeBlurView.frame = self.bounds;
    self.fadeTintView.frame = self.fadeBlurView.contentView.bounds;
    self.fadeMaskLayer.frame = self.fadeBlurView.bounds;
}

- (void)refreshAppearance {
    BOOL dark = self.forceDarkTint || self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    self.fadeTintView.backgroundColor = dark
        ? [UIColor colorWithWhite:0.0 alpha:0.08]
        : [UIColor colorWithWhite:1.0 alpha:0.08];
}

- (void)updateForNavigationBar:(UINavigationBar *)navigationBar
                       topItem:(UINavigationItem *)topItem
                    transition:(BOOL)animated {
    if (!navigationBar.superview) {
        self.hidden = YES;
        return;
    }

    UIView *host = self.superview ?: navigationBar.superview;
    CGRect navFrame = [navigationBar.superview convertRect:navigationBar.frame toView:host];
    CGFloat safeTop = 0.0;
    if (@available(iOS 11.0, *)) {
        safeTop = host.safeAreaInsets.top;
    }

    CGFloat overlayHeight = MAX(CGRectGetMaxY(navFrame) + 22.0, safeTop + 76.0);
    CGRect targetFrame = CGRectMake(0.0, 0.0, CGRectGetWidth(host.bounds), overlayHeight);

    BOOL hasBack = topItem.backBarButtonItem != nil || navigationBar.items.count > 1;
    BOOL hasLeft = topItem.leftBarButtonItem != nil || topItem.leftBarButtonItems.count > 0;
    BOOL hasRight = topItem.rightBarButtonItem != nil || topItem.rightBarButtonItems.count > 0;
    NSString *title = topItem.title ?: @"";

    CGFloat capsuleHeight = 36.0;
    CGFloat capsuleY = CGRectGetMinY(navFrame) + floor((CGRectGetHeight(navFrame) - capsuleHeight) * 0.5);
    if (capsuleY < safeTop + 4.0) {
        capsuleY = safeTop + 4.0;
    }

    CGFloat sideWidth = 52.0;
    if (hasLeft && !hasBack) {
        sideWidth = 74.0;
    }

    CGRect backFrame = CGRectMake(8.0, capsuleY, sideWidth, capsuleHeight);
    CGFloat titleWidth = [self widthForTitle:title available:CGRectGetWidth(targetFrame) - 176.0];
    CGRect titleFrame = CGRectMake(floor((CGRectGetWidth(targetFrame) - titleWidth) * 0.5), capsuleY, titleWidth, capsuleHeight);
    CGRect rightFrame = CGRectMake(CGRectGetWidth(targetFrame) - 8.0 - 52.0, capsuleY, 52.0, capsuleHeight);

    void (^apply)(void) = ^{
        self.frame = targetFrame;
        self.backCapsule.frame = backFrame;
        self.titleCapsule.frame = titleFrame;
        self.rightCapsule.frame = rightFrame;
        self.backCapsule.hidden = !(hasBack || hasLeft);
        self.titleCapsule.hidden = title.length == 0 && topItem.titleView == nil;
        self.rightCapsule.hidden = !hasRight;
        [self setNeedsLayout];
    };

    self.hidden = navigationBar.hidden || navigationBar.alpha < 0.05;
    if (animated) {
        [UIView animateWithDuration:0.18 delay:0.0 options:UIViewAnimationOptionBeginFromCurrentState | UIViewAnimationOptionCurveEaseOut animations:apply completion:nil];
    } else {
        apply();
    }
}

- (CGFloat)widthForTitle:(NSString *)title available:(CGFloat)available {
    CGFloat minWidth = 86.0;
    CGFloat maxWidth = MAX(minWidth, MIN(available, 220.0));
    if (title.length == 0) {
        return minWidth;
    }

    UIFont *font = [UIFont systemFontOfSize:17.0 weight:UIFontWeightSemibold];
    CGSize size = [title boundingRectWithSize:CGSizeMake(maxWidth, 30.0)
                                      options:NSStringDrawingUsesLineFragmentOrigin
                                   attributes:@{ NSFontAttributeName: font }
                                      context:nil].size;
    return MIN(maxWidth, MAX(minWidth, ceil(size.width) + 42.0));
}

@end
