#import <UIKit/UIKit.h>
#import <objc/message.h>
#import <objc/runtime.h>

static const void *WCLGSoftEdgeAppliedKey = &WCLGSoftEdgeAppliedKey;

static BOOL WCLGIsTargetProcess(void) {
    NSString *bundleIdentifier = NSBundle.mainBundle.bundleIdentifier ?: @"";
    return [bundleIdentifier isEqualToString:@"com.tencent.xin"];
}

static id WCLGSoftStyle(void) {
    Class styleClass = NSClassFromString(@"UIScrollEdgeEffectStyle");
    SEL softStyleSelector = NSSelectorFromString(@"softStyle");

    if (styleClass && [styleClass respondsToSelector:softStyleSelector]) {
        return ((id (*)(id, SEL))objc_msgSend)(styleClass, softStyleSelector);
    }

    return nil;
}

static id WCLGEdgeEffect(UIScrollView *scrollView, NSString *selectorName) {
    SEL selector = NSSelectorFromString(selectorName);
    if (![scrollView respondsToSelector:selector]) {
        return nil;
    }

    return ((id (*)(id, SEL))objc_msgSend)(scrollView, selector);
}

static void WCLGSetEdgeEffectSoft(id edgeEffect, id softStyle) {
    if (!edgeEffect || !softStyle) {
        return;
    }

    SEL setStyleSelector = NSSelectorFromString(@"setStyle:");
    if ([edgeEffect respondsToSelector:setStyleSelector]) {
        ((void (*)(id, SEL, id))objc_msgSend)(edgeEffect, setStyleSelector, softStyle);
    }

    SEL setHiddenSelector = NSSelectorFromString(@"setHidden:");
    if ([edgeEffect respondsToSelector:setHiddenSelector]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(edgeEffect, setHiddenSelector, NO);
    }
}

static void WCLGApplySoftScrollEdge(UIScrollView *scrollView) {
    if (!WCLGIsTargetProcess() || !scrollView.window) {
        return;
    }

    id softStyle = WCLGSoftStyle();
    if (!softStyle) {
        return;
    }

    WCLGSetEdgeEffectSoft(WCLGEdgeEffect(scrollView, @"topEdgeEffect"), softStyle);
    WCLGSetEdgeEffectSoft(WCLGEdgeEffect(scrollView, @"bottomEdgeEffect"), softStyle);

    objc_setAssociatedObject(scrollView, WCLGSoftEdgeAppliedKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

%hook UIScrollView

- (void)didMoveToWindow {
    %orig;
    WCLGApplySoftScrollEdge(self);
}

- (void)didMoveToSuperview {
    %orig;
    WCLGApplySoftScrollEdge(self);
}

- (void)layoutSubviews {
    %orig;
    WCLGApplySoftScrollEdge(self);
}

- (void)setContentInset:(UIEdgeInsets)contentInset {
    %orig;
    WCLGApplySoftScrollEdge(self);
}

%end

%ctor {
    if (!WCLGIsTargetProcess()) {
        return;
    }
}
