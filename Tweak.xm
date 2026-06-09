#import <UIKit/UIKit.h>
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
        [host addSubview:overlay];
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
    [navigationController.view bringSubviewToFront:overlay];
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

%ctor {
    if (!WCLGIsTargetProcess()) {
        return;
    }
}
