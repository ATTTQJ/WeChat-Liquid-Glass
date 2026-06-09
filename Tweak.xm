#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>
#import "WCLGTopGlassOverlayView.h"

static const void *WCLGTopGlassOverlayKey = &WCLGTopGlassOverlayKey;

static BOOL WCLGIsTargetProcess(void) {
    NSString *bundleIdentifier = NSBundle.mainBundle.bundleIdentifier ?: @"";
    return [bundleIdentifier isEqualToString:@"com.tencent.xin"];
}

static BOOL WCLGShouldSkipController(UIViewController *controller) {
    if (!controller) {
        return YES;
    }

    NSString *className = NSStringFromClass(controller.class);
    NSArray<NSString *> *blockedFragments = @[
        @"UIAlertController",
        @"UIImagePickerController",
        @"UIActivityViewController",
        @"SFSafariViewController"
    ];

    for (NSString *fragment in blockedFragments) {
        if ([className containsString:fragment]) {
            return YES;
        }
    }
    return NO;
}

static id WCLGSoftScrollEdgeEffectStyle(void) {
    Class styleClass = NSClassFromString(@"UIScrollEdgeEffectStyle");
    if (!styleClass) {
        styleClass = NSClassFromString(@"UIScrollEdgeEffect.Style");
    }

    SEL softStyleSelector = NSSelectorFromString(@"softStyle");
    if (styleClass && [styleClass respondsToSelector:softStyleSelector]) {
        return ((id (*)(id, SEL))objc_msgSend)(styleClass, softStyleSelector);
    }

    SEL softSelector = NSSelectorFromString(@"soft");
    if (styleClass && [styleClass respondsToSelector:softSelector]) {
        return ((id (*)(id, SEL))objc_msgSend)(styleClass, softSelector);
    }

    return nil;
}

static void WCLGApplySoftEdgeEffect(UIScrollView *scrollView) {
    if (!WCLGIsTargetProcess() || !scrollView) {
        return;
    }

    id softStyle = WCLGSoftScrollEdgeEffectStyle();
    if (!softStyle) {
        return;
    }

    SEL topEdgeEffectSelector = NSSelectorFromString(@"topEdgeEffect");
    if (![scrollView respondsToSelector:topEdgeEffectSelector]) {
        return;
    }

    id topEdgeEffect = ((id (*)(id, SEL))objc_msgSend)(scrollView, topEdgeEffectSelector);
    if (!topEdgeEffect) {
        return;
    }

    SEL setStyleSelector = NSSelectorFromString(@"setStyle:");
    if ([topEdgeEffect respondsToSelector:setStyleSelector]) {
        ((void (*)(id, SEL, id))objc_msgSend)(topEdgeEffect, setStyleSelector, softStyle);
    }

    SEL setHiddenSelector = NSSelectorFromString(@"setHidden:");
    if ([topEdgeEffect respondsToSelector:setHiddenSelector]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(topEdgeEffect, setHiddenSelector, NO);
    }
}

static void WCLGMakeNavigationBarTransparent(UINavigationBar *navigationBar) {
    if (!navigationBar) {
        return;
    }

    [navigationBar setBackgroundImage:[UIImage new] forBarMetrics:UIBarMetricsDefault];
    navigationBar.shadowImage = [UIImage new];
    navigationBar.translucent = YES;
    navigationBar.barTintColor = UIColor.clearColor;
    navigationBar.backgroundColor = UIColor.clearColor;

    if (@available(iOS 13.0, *)) {
        UINavigationBarAppearance *appearance = [[UINavigationBarAppearance alloc] init];
        [appearance configureWithTransparentBackground];
        appearance.backgroundColor = UIColor.clearColor;
        appearance.shadowColor = UIColor.clearColor;
        navigationBar.standardAppearance = appearance;
        navigationBar.scrollEdgeAppearance = appearance;
        navigationBar.compactAppearance = appearance;
        if (@available(iOS 15.0, *)) {
            navigationBar.compactScrollEdgeAppearance = appearance;
        }
    }
}

static WCLGTopGlassOverlayView *WCLGEnsureOverlay(UINavigationController *navigationController) {
    UIView *host = navigationController.view;
    WCLGTopGlassOverlayView *overlay = objc_getAssociatedObject(host, WCLGTopGlassOverlayKey);
    if (!overlay) {
        overlay = [[WCLGTopGlassOverlayView alloc] initWithFrame:CGRectZero];
        overlay.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleBottomMargin;
        overlay.tag = 0x57434C47;
        objc_setAssociatedObject(host, WCLGTopGlassOverlayKey, overlay, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [host insertSubview:overlay belowSubview:navigationController.navigationBar];
    } else if (overlay.superview == host) {
        [host insertSubview:overlay belowSubview:navigationController.navigationBar];
    }
    return overlay;
}

static void WCLGUpdateOverlay(UINavigationController *navigationController, BOOL animated) {
    if (!WCLGIsTargetProcess() || !navigationController.isViewLoaded) {
        return;
    }

    UIViewController *topViewController = navigationController.topViewController;
    if (WCLGShouldSkipController(topViewController)) {
        WCLGTopGlassOverlayView *existing = objc_getAssociatedObject(navigationController.view, WCLGTopGlassOverlayKey);
        existing.hidden = YES;
        return;
    }

    UINavigationBar *navigationBar = navigationController.navigationBar;
    WCLGMakeNavigationBarTransparent(navigationBar);

    WCLGTopGlassOverlayView *overlay = WCLGEnsureOverlay(navigationController);
    [overlay updateForNavigationBar:navigationBar topItem:navigationBar.topItem transition:animated];
}

%hook UINavigationController

- (void)viewDidLayoutSubviews {
    %orig;
    WCLGUpdateOverlay(self, NO);
}

- (void)viewDidAppear:(BOOL)animated {
    %orig;
    WCLGUpdateOverlay(self, animated);
}

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated {
    %orig;
    WCLGUpdateOverlay(self, animated);
}

- (UIViewController *)popViewControllerAnimated:(BOOL)animated {
    UIViewController *result = %orig;
    WCLGUpdateOverlay(self, animated);
    return result;
}

%end

%hook UIScrollView

- (void)didMoveToWindow {
    %orig;
    WCLGApplySoftEdgeEffect(self);
}

- (void)layoutSubviews {
    %orig;
    WCLGApplySoftEdgeEffect(self);
}

%end

%ctor {
    if (!WCLGIsTargetProcess()) {
        return;
    }
}
