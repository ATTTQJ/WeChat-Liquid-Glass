#import "WCLGAccess.h"
#import "WCLGChatBottom.h"
#import "WCLGChatBubble.h"
#import "WCLGConstants.h"
#import "WCLGRuntime.h"
#import "WCLGVisual.h"
#import <UIKit/UIKit.h>

%hook UIWindow

- (void)motionEnded:(UIEventSubtype)motion withEvent:(UIEvent *)event {
    %orig;
    if (motion == UIEventSubtypeMotionShake) {
        WCLGPresentSettings();
    }
}

%end

%hook UIView

- (void)layoutSubviews {
    %orig;
    WCLGMaybeApplyChatBottomGlassToView(self);
    WCLGMaybeApplyChatBubbleGlassToView(self);
}

%end

%hook UITabBar

- (void)layoutSubviews {
    %orig;
    WCLGApplyRecoveredTabBarToTabBar(self);
}

- (void)didMoveToWindow {
    %orig;
    WCLGScheduleTabBarItemLayoutForTabBar(self);
}

%end

%hook UITabBarController

- (void)viewDidLayoutSubviews {
    %orig;
    WCLGApplyRecoveredTabBarToTabBar(self.tabBar);
}

%end

%ctor {
    @autoreleasepool {
        NSString *process = NSProcessInfo.processInfo.processName;
        if (![process isEqualToString:@"WeChat"]) {
            return;
        }
        WCLGAccessStartServerSync();
    }
}
