#import "WCLGRuntime.h"
#import "WCLGSettingsViewController.h"

static UIViewController *WCLGVisibleViewControllerFrom(UIViewController *controller) {
    if (!controller) {
        return nil;
    }
    UIViewController *presented = controller.presentedViewController;
    if (presented) {
        return WCLGVisibleViewControllerFrom(presented);
    }
    if ([controller isKindOfClass:UINavigationController.class]) {
        return WCLGVisibleViewControllerFrom(((UINavigationController *)controller).visibleViewController);
    }
    if ([controller isKindOfClass:UITabBarController.class]) {
        return WCLGVisibleViewControllerFrom(((UITabBarController *)controller).selectedViewController);
    }
    return controller;
}

UIViewController *WCLGTopViewController(void) {
    UIWindow *candidate = nil;
    for (UIWindow *window in UIApplication.sharedApplication.windows) {
        if (window.isKeyWindow && !window.hidden && window.alpha > 0.01) {
            candidate = window;
            break;
        }
        if (!candidate && !window.hidden && window.alpha > 0.01) {
            candidate = window;
        }
    }
    return WCLGVisibleViewControllerFrom(candidate.rootViewController);
}

void WCLGPresentSettings(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *top = WCLGTopViewController();
        if (!top || [top isKindOfClass:UINavigationController.class] || [top isKindOfClass:WCLGSettingsViewController.class]) {
            return;
        }
        WCLGSettingsViewController *settings = [[WCLGSettingsViewController alloc] initWithPanel:0];
        UINavigationController *navigation = [[UINavigationController alloc] initWithRootViewController:settings];
        navigation.modalPresentationStyle = UIModalPresentationFullScreen;
        [top presentViewController:navigation animated:YES completion:nil];
    });
}

void WCLGRefreshVisibleWindows(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        for (UIWindow *window in UIApplication.sharedApplication.windows) {
            [window setNeedsLayout];
            [window layoutIfNeeded];
        }
    });
}
