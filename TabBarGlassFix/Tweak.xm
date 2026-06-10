#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

static BOOL WCLGIsTargetProcess(void) {
    NSString *bundleIdentifier = NSBundle.mainBundle.bundleIdentifier ?: @"";
    return [bundleIdentifier isEqualToString:@"com.tencent.xin"];
}

static CGFloat WCLGPixelRound(CGFloat value) {
    CGFloat scale = UIScreen.mainScreen.scale;
    if (scale <= 0.0) {
        scale = 2.0;
    }
    return round(value * scale) / scale;
}

static CGRect WCLGPixelAlignedRect(CGRect rect) {
    rect.origin.x = WCLGPixelRound(rect.origin.x);
    rect.origin.y = WCLGPixelRound(rect.origin.y);
    rect.size.width = WCLGPixelRound(rect.size.width);
    rect.size.height = WCLGPixelRound(rect.size.height);
    return rect;
}

static BOOL WCLGClassNameMatches(UIView *view, NSArray<NSString *> *needles) {
    NSString *className = NSStringFromClass(view.class);
    for (NSString *needle in needles) {
        if ([className rangeOfString:needle options:NSCaseInsensitiveSearch].location != NSNotFound) {
            return YES;
        }
    }
    return NO;
}

static BOOL WCLGIsTabBarButton(UIView *view) {
    return WCLGClassNameMatches(view, @[@"UITabBarButton"]);
}

static BOOL WCLGIsSystemBackgroundView(UIView *view) {
    return WCLGClassNameMatches(view, @[
        @"_UIBarBackground",
        @"UITabBarBackground",
        @"UIVisualEffectBackdropView"
    ]);
}

static BOOL WCLGLooksLikePluginGlassView(UIView *view, UITabBar *tabBar) {
    if (view.hidden || view.alpha < 0.02 || WCLGIsTabBarButton(view) || WCLGIsSystemBackgroundView(view)) {
        return NO;
    }

    NSString *className = NSStringFromClass(view.class);
    BOOL classHint =
        [className rangeOfString:@"WCLG" options:NSCaseInsensitiveSearch].location != NSNotFound ||
        [className rangeOfString:@"Glass" options:NSCaseInsensitiveSearch].location != NSNotFound ||
        [className rangeOfString:@"Platter" options:NSCaseInsensitiveSearch].location != NSNotFound ||
        [className rangeOfString:@"Capsule" options:NSCaseInsensitiveSearch].location != NSNotFound;

    BOOL layerHint = view.layer.cornerRadius >= 12.0 || [view isKindOfClass:UIVisualEffectView.class];
    BOOL wideEnough = CGRectGetWidth(view.bounds) >= 44.0 && CGRectGetHeight(view.bounds) >= 28.0;
    BOOL insideTabBar = CGRectIntersectsRect(tabBar.bounds, view.frame);

    return insideTabBar && wideEnough && (classHint || layerHint);
}

static void WCLGHideDuplicateLabelsInView(UIView *view) {
    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:UILabel.class]) {
            UILabel *label = (UILabel *)subview;
            if (label.text.length > 0) {
                label.hidden = YES;
                label.alpha = 0.0;
            }
        }
        WCLGHideDuplicateLabelsInView(subview);
    }
}

static void WCLGShowLabelsInTabBarButton(UIView *button) {
    for (UIView *subview in button.subviews) {
        if ([subview isKindOfClass:UILabel.class]) {
            subview.hidden = NO;
            subview.alpha = 1.0;
        }
        WCLGShowLabelsInTabBarButton(subview);
    }
}

static NSArray<UIView *> *WCLGTabBarButtons(UITabBar *tabBar) {
    NSMutableArray<UIView *> *buttons = [NSMutableArray array];
    for (UIView *subview in tabBar.subviews) {
        if (WCLGIsTabBarButton(subview)) {
            [buttons addObject:subview];
        }
    }

    [buttons sortUsingComparator:^NSComparisonResult(UIView *left, UIView *right) {
        CGFloat lx = CGRectGetMinX(left.frame);
        CGFloat rx = CGRectGetMinX(right.frame);
        if (lx < rx) {
            return NSOrderedAscending;
        }
        if (lx > rx) {
            return NSOrderedDescending;
        }
        return NSOrderedSame;
    }];

    return buttons;
}

static void WCLGFixTabBarGlassLayering(UITabBar *tabBar) {
    if (!WCLGIsTargetProcess() || !tabBar.window) {
        return;
    }

    NSArray<UIView *> *buttons = WCLGTabBarButtons(tabBar);
    if (buttons.count == 0) {
        return;
    }

    UIView *firstButton = buttons.firstObject;
    NSMutableArray<UIView *> *glassViews = [NSMutableArray array];

    for (UIView *subview in [tabBar.subviews copy]) {
        if (WCLGLooksLikePluginGlassView(subview, tabBar)) {
            [glassViews addObject:subview];
        }
    }

    for (UIView *glassView in glassViews) {
        glassView.frame = WCLGPixelAlignedRect(glassView.frame);
        glassView.userInteractionEnabled = NO;
        WCLGHideDuplicateLabelsInView(glassView);
        [tabBar insertSubview:glassView belowSubview:firstButton];
    }

    for (UIView *button in buttons) {
        button.frame = WCLGPixelAlignedRect(button.frame);
        button.layer.shouldRasterize = NO;
        WCLGShowLabelsInTabBarButton(button);
        [tabBar bringSubviewToFront:button];
    }
}

%hook UITabBar

- (void)didMoveToWindow {
    %orig;
    WCLGFixTabBarGlassLayering(self);
}

- (void)layoutSubviews {
    %orig;
    WCLGFixTabBarGlassLayering(self);
}

- (void)setItems:(NSArray *)items animated:(BOOL)animated {
    %orig;
    WCLGFixTabBarGlassLayering(self);
}

%end

%hook UITabBarController

- (void)viewDidLayoutSubviews {
    %orig;
    WCLGFixTabBarGlassLayering(self.tabBar);
}

- (void)viewDidAppear:(BOOL)animated {
    %orig;
    WCLGFixTabBarGlassLayering(self.tabBar);
}

%end

%ctor {
    if (!WCLGIsTargetProcess()) {
        return;
    }
}
