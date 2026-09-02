#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <objc/runtime.h>
#import <os/log.h>

// QQ 9.3.35 floating home-tab treatment.  The target hierarchy was confirmed
// by QQGlassProbe: QQSkinTabBar owns four QQToolBar* item roots.  QQ keeps the
// item views, badges, and event handlers; this module changes their placement
// and supplies a non-interactive glass surface beneath them.

static const void *QQlgFloatingHostKey = &QQlgFloatingHostKey;
static void (*QQlgOriginalLayoutSubviews)(UIView *, SEL);
static void (*QQlgOriginalUpdateBackground)(id, SEL, BOOL);
static void (*QQlgOriginalChangeStyle)(id, SEL, BOOL, id);
static void (*QQlgOriginalSetSelectedIndex)(id, SEL, NSUInteger);
static dispatch_queue_t QQlgLogQueue;
static BOOL QQlgHooksInstalled;

static NSString *QQlgLogPath(void) {
    static NSString *path;
    static dispatch_once_t token;
    dispatch_once(&token, ^{
        NSURL *documents = [[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory
                                                                    inDomains:NSUserDomainMask].firstObject;
        NSURL *directory = [documents URLByAppendingPathComponent:@"QQlg" isDirectory:YES];
        [[NSFileManager defaultManager] createDirectoryAtURL:directory
                                  withIntermediateDirectories:YES attributes:nil error:nil];
        path = [[directory URLByAppendingPathComponent:@"QQlgFloatingTab.log"] path];
    });
    return path;
}

static void QQlgLog(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);
static void QQlgLog(NSString *format, ...) {
    va_list arguments;
    va_start(arguments, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:arguments];
    va_end(arguments);
    NSString *line = [NSString stringWithFormat:@"[%@] %@\n", NSDate.date, message];
    NSLog(@"[QQlgFloatingTab] %@", message);
    os_log(OS_LOG_DEFAULT, "QQlgFloatingTab: %{public}s", message.UTF8String);
    dispatch_async(QQlgLogQueue, ^{
        NSData *data = [line dataUsingEncoding:NSUTF8StringEncoding];
        NSFileManager *files = NSFileManager.defaultManager;
        if (![files fileExistsAtPath:QQlgLogPath()]) {
            [data writeToFile:QQlgLogPath() atomically:YES];
            return;
        }
        NSFileHandle *file = [NSFileHandle fileHandleForWritingAtPath:QQlgLogPath()];
        [file seekToEndOfFile];
        [file writeData:data];
        [file closeFile];
    });
}

static BOOL QQlgHasPrefix(UIView *view, NSString *prefix) {
    return [NSStringFromClass(view.class) hasPrefix:prefix];
}

static NSArray<UIView *> *QQlgTabItems(UIView *tabBar) {
    NSMutableArray<UIView *> *items = [NSMutableArray array];
    for (UIView *view in tabBar.subviews) {
        if (QQlgHasPrefix(view, @"QQToolBar") && view.bounds.size.width > 40.0 && view.bounds.size.height > 40.0) {
            [items addObject:view];
        }
    }
    [items sortUsingComparator:^NSComparisonResult(UIView *left, UIView *right) {
        CGFloat leftX = CGRectGetMinX(left.frame);
        CGFloat rightX = CGRectGetMinX(right.frame);
        return leftX < rightX ? NSOrderedAscending : (leftX > rightX ? NSOrderedDescending : NSOrderedSame);
    }];
    return items;
}

static UIView *QQlgOriginalBackground(UIView *tabBar, UIView *host) {
    for (UIView *view in tabBar.subviews) {
        if (view == host || QQlgHasPrefix(view, @"QQToolBar")) continue;
        if (CGRectGetWidth(view.bounds) < CGRectGetWidth(tabBar.bounds) * 0.9 ||
            CGRectGetHeight(view.bounds) < CGRectGetHeight(tabBar.bounds) * 0.75) continue;
        for (UIView *child in view.subviews) {
            if ([child isKindOfClass:UIVisualEffectView.class]) return view;
        }
    }
    return nil;
}

static UIControl *QQlgSelectedControl(NSArray<UIView *> *items) {
    for (UIView *item in items) {
        for (UIView *child in item.subviews) {
            if ([child isKindOfClass:UIControl.class] && ((UIControl *)child).selected) return (UIControl *)child;
        }
    }
    return nil;
}

static UIBlurEffectStyle QQlgMaterialStyle(void) {
    if (@available(iOS 13.0, *)) return UIBlurEffectStyleSystemChromeMaterial;
    return UIBlurEffectStyleLight;
}

static UIView *QQlgMakeHost(void) {
    UIView *host = [[UIView alloc] initWithFrame:CGRectZero];
    host.userInteractionEnabled = NO;
    host.accessibilityElementsHidden = YES;
    host.backgroundColor = UIColor.clearColor;
    host.clipsToBounds = YES;

    UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:QQlgMaterialStyle()]];
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    blur.userInteractionEnabled = NO;
    [host addSubview:blur];

    UIView *tint = [[UIView alloc] initWithFrame:CGRectZero];
    tint.tag = 9201;
    tint.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tint.userInteractionEnabled = NO;
    [blur.contentView addSubview:tint];

    UIVisualEffectView *selection = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemThinMaterial]];
    selection.tag = 9202;
    selection.userInteractionEnabled = NO;
    selection.alpha = 0.0;
    selection.clipsToBounds = YES;
    [host addSubview:selection];

    CAGradientLayer *topGlow = [CAGradientLayer layer];
    topGlow.name = @"QQlgFloatingTopGlow";
    topGlow.startPoint = CGPointMake(0.5, 0.0);
    topGlow.endPoint = CGPointMake(0.5, 1.0);
    [host.layer addSublayer:topGlow];

    CAShapeLayer *border = [CAShapeLayer layer];
    border.name = @"QQlgFloatingBorder";
    border.fillColor = UIColor.clearColor.CGColor;
    border.lineWidth = 1.0 / UIScreen.mainScreen.scale;
    [host.layer addSublayer:border];

    objc_setAssociatedObject(host, @selector(QQlgMakeHost), @{ @"blur": blur, @"selection": selection, @"glow": topGlow, @"border": border }, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return host;
}

static void QQlgUpdateFloatingTab(UIView *tabBar) {
    if (!tabBar.window || tabBar.bounds.size.width < 100.0) return;
    NSArray<UIView *> *items = QQlgTabItems(tabBar);
    if (items.count < 3) return;

    UIView *host = objc_getAssociatedObject(tabBar, QQlgFloatingHostKey);
    if (!host) {
        host = QQlgMakeHost();
        objc_setAssociatedObject(tabBar, QQlgFloatingHostKey, host, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [tabBar insertSubview:host belowSubview:items.firstObject];
        QQlgLog(@"floating host created class=%@ items=%lu", NSStringFromClass(tabBar.class), (unsigned long)items.count);
    } else if (host.superview != tabBar) {
        [tabBar insertSubview:host belowSubview:items.firstObject];
    } else {
        [tabBar insertSubview:host belowSubview:items.firstObject];
    }

    // QQ's stock background is retained by QQ, but made transparent while this
    // module is active. The controls are neither removed nor re-parented.
    UIView *originalBackground = QQlgOriginalBackground(tabBar, host);
    originalBackground.alpha = 0.0;
    tabBar.opaque = NO;

    CGFloat safeBottom = MAX(0.0, tabBar.safeAreaInsets.bottom);
    CGFloat contentHeight = MAX(48.0, CGRectGetHeight(tabBar.bounds) - safeBottom);
    CGFloat islandHeight = MIN(64.0, MAX(44.0, contentHeight - 4.0));
    CGFloat islandY = MAX(2.0, (contentHeight - islandHeight) * 0.5);
    CGFloat sideInset = MIN(16.0, MAX(10.0, CGRectGetWidth(tabBar.bounds) * 0.028));
    host.frame = CGRectMake(sideInset, islandY, CGRectGetWidth(tabBar.bounds) - sideInset * 2.0, islandHeight);
    host.layer.cornerRadius = islandHeight * 0.5;

    BOOL dark = tabBar.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    NSDictionary *parts = objc_getAssociatedObject(host, @selector(QQlgMakeHost));
    UIVisualEffectView *blur = parts[@"blur"];
    UIVisualEffectView *selection = parts[@"selection"];
    blur.frame = host.bounds;
    blur.effect = [UIBlurEffect effectWithStyle:QQlgMaterialStyle()];
    UIView *tint = [blur.contentView viewWithTag:9201];
    tint.frame = blur.contentView.bounds;
    tint.backgroundColor = dark ? UIColor.blackColor : UIColor.whiteColor;
    tint.alpha = dark ? 0.18 : 0.14;

    CAGradientLayer *glow = parts[@"glow"];
    glow.frame = CGRectMake(0.0, 0.0, CGRectGetWidth(host.bounds), MIN(18.0, islandHeight * 0.38));
    glow.colors = @[(id)(dark ? [UIColor colorWithWhite:1.0 alpha:0.16] : [UIColor colorWithWhite:1.0 alpha:0.52]).CGColor,
                    (id)UIColor.clearColor.CGColor];

    CAShapeLayer *border = parts[@"border"];
    UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect:host.bounds cornerRadius:islandHeight * 0.5];
    border.frame = host.bounds;
    border.path = path.CGPath;
    border.strokeColor = (dark ? [UIColor colorWithWhite:1.0 alpha:0.26] : [UIColor colorWithWhite:1.0 alpha:0.72]).CGColor;

    CGFloat slotWidth = CGRectGetWidth(host.bounds) / items.count;
    for (NSUInteger index = 0; index < items.count; index++) {
        UIView *item = items[index];
        item.frame = CGRectMake(CGRectGetMinX(host.frame) + slotWidth * index, islandY, slotWidth, islandHeight);
    }

    UIControl *selected = QQlgSelectedControl(items);
    if (selected) {
        NSUInteger selectedIndex = NSNotFound;
        for (NSUInteger index = 0; index < items.count; index++) {
            if ([selected isDescendantOfView:items[index]]) {
                selectedIndex = index;
                break;
            }
        }
        if (selectedIndex != NSNotFound) {
            CGFloat pillInsetX = MAX(3.0, slotWidth * 0.08);
            selection.frame = CGRectMake(slotWidth * selectedIndex + pillInsetX, 4.0, slotWidth - pillInsetX * 2.0, islandHeight - 8.0);
            selection.layer.cornerRadius = CGRectGetHeight(selection.bounds) * 0.5;
            selection.alpha = dark ? 0.56 : 0.48;
        }
    } else {
        selection.alpha = 0.0;
    }
}

static void QQlgLayoutSubviews(UIView *self, SEL _cmd) {
    QQlgOriginalLayoutSubviews(self, _cmd);
    QQlgUpdateFloatingTab(self);
}

static void QQlgUpdateBackground(id self, SEL _cmd, BOOL needsStyleChange) {
    QQlgOriginalUpdateBackground(self, _cmd, needsStyleChange);
    QQlgUpdateFloatingTab((UIView *)self);
}

static void QQlgChangeStyle(id self, SEL _cmd, BOOL dark, id item) {
    QQlgOriginalChangeStyle(self, _cmd, dark, item);
    QQlgUpdateFloatingTab((UIView *)self);
}

static void QQlgSetSelectedIndex(id self, SEL _cmd, NSUInteger index) {
    QQlgOriginalSetSelectedIndex(self, _cmd, index);
    QQlgUpdateFloatingTab((UIView *)self);
}

static BOOL QQlgHook(Class cls, SEL selector, IMP replacement, IMP *original) {
    Method method = class_getInstanceMethod(cls, selector);
    if (!method) return NO;
    const char *types = method_getTypeEncoding(method);
    IMP inherited = method_getImplementation(method);
    if (class_addMethod(cls, selector, replacement, types)) {
        *original = inherited;
    } else {
        *original = method_getImplementation(method);
        method_setImplementation(method, replacement);
    }
    return YES;
}

static UIView *QQlgFindTabBar(UIView *view, NSUInteger *budget) {
    if (!view || *budget == 0) return nil;
    (*budget)--;
    if ([NSStringFromClass(view.class) isEqualToString:@"QQSkinTabBar"]) return view;
    for (UIView *child in view.subviews) {
        UIView *found = QQlgFindTabBar(child, budget);
        if (found) return found;
    }
    return nil;
}

static NSArray<UIWindow *> *QQlgActiveWindows(void) {
    NSMutableArray<UIWindow *> *windows = [NSMutableArray array];
    for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) {
        if (![scene isKindOfClass:UIWindowScene.class]) continue;
        if (scene.activationState == UISceneActivationStateUnattached) continue;
        [windows addObjectsFromArray:((UIWindowScene *)scene).windows];
    }
    return windows;
}

static BOOL QQlgInstall(void) {
    if (QQlgHooksInstalled) return YES;
    Class tabBar = NSClassFromString(@"QQSkinTabBar");
    if (!tabBar) return NO;
    BOOL result = YES;
    result &= QQlgHook(tabBar, @selector(layoutSubviews), (IMP)QQlgLayoutSubviews, (IMP *)&QQlgOriginalLayoutSubviews);
    result &= QQlgHook(tabBar, @selector(updateBackgroundViewNeedChangeStyle:), (IMP)QQlgUpdateBackground, (IMP *)&QQlgOriginalUpdateBackground);
    result &= QQlgHook(tabBar, @selector(changeStyleOfTabBar:tabbarItem:), (IMP)QQlgChangeStyle, (IMP *)&QQlgOriginalChangeStyle);
    result &= QQlgHook(tabBar, @selector(setTabBarSelectedAtIndex:), (IMP)QQlgSetSelectedIndex, (IMP *)&QQlgOriginalSetSelectedIndex);
    QQlgHooksInstalled = result;
    if (result) {
        for (UIWindow *window in QQlgActiveWindows()) {
            NSUInteger budget = 1000;
            UIView *existing = QQlgFindTabBar(window, &budget);
            if (existing) { QQlgUpdateFloatingTab(existing); break; }
        }
    }
    return result;
}

static void QQlgAttemptInstall(NSUInteger attempts) {
    if (QQlgInstall()) {
        QQlgLog(@"QQlg floating tab loaded; target=QQ 9.3.35 log=%@", QQlgLogPath());
    } else if (attempts < 19) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            QQlgAttemptInstall(attempts + 1);
        });
    } else {
        QQlgLog(@"QQSkinTabBar was unavailable after %lu attempts", (unsigned long)(attempts + 1));
    }
}

__attribute__((constructor))
static void QQlgBootstrap(void) {
    QQlgLogQueue = dispatch_queue_create("com.qqlg.floating-tab.log", DISPATCH_QUEUE_SERIAL);
    dispatch_async(dispatch_get_main_queue(), ^{
        QQlgAttemptInstall(0);
    });
}
