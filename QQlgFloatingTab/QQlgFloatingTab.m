#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <objc/message.h>
#import <objc/runtime.h>
#import <os/log.h>

// QQ 9.3.35 home tab bar.  On iOS 26 this uses the official UIKit composition:
// UIGlassContainerEffect with sibling UIGlassEffect regular and clear views.
// The symbols are selected at runtime so one dylib can still load on iOS 15-25.

static const void *QQlgFloatingHostKey = &QQlgFloatingHostKey;
static void (*QQlgOriginalLayoutSubviews)(UIView *, SEL);
static void (*QQlgOriginalUpdateBackground)(id, SEL, BOOL);
static void (*QQlgOriginalChangeStyle)(id, SEL, BOOL, id);
static void (*QQlgOriginalSetSelectedIndex)(id, SEL, NSUInteger);
static dispatch_queue_t QQlgLogQueue;
static BOOL QQlgHooksInstalled;

typedef NS_ENUM(NSInteger, QQlgRuntimeGlassStyle) {
    QQlgRuntimeGlassStyleRegular = 0,
    QQlgRuntimeGlassStyleClear = 1,
};

static NSString *QQlgLogPath(void) {
    static NSString *path;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSURL *documents = [[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask].firstObject;
        NSURL *folder = [documents URLByAppendingPathComponent:@"QQlg" isDirectory:YES];
        [[NSFileManager defaultManager] createDirectoryAtURL:folder withIntermediateDirectories:YES attributes:nil error:nil];
        path = [[folder URLByAppendingPathComponent:@"QQlgFloatingTab.log"] path];
    });
    return path;
}

static void QQlgLog(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);
static void QQlgLog(NSString *format, ...) {
    va_list arguments; va_start(arguments, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:arguments];
    va_end(arguments);
    NSString *line = [NSString stringWithFormat:@"[%@] %@\n", NSDate.date, message];
    NSLog(@"[QQlgFloatingTab] %@", message);
    os_log(OS_LOG_DEFAULT, "QQlgFloatingTab: %{public}s", message.UTF8String);
    dispatch_async(QQlgLogQueue, ^{
        NSData *data = [line dataUsingEncoding:NSUTF8StringEncoding];
        if (![[NSFileManager defaultManager] fileExistsAtPath:QQlgLogPath()]) {
            [data writeToFile:QQlgLogPath() atomically:YES]; return;
        }
        NSFileHandle *file = [NSFileHandle fileHandleForWritingAtPath:QQlgLogPath()];
        [file seekToEndOfFile]; [file writeData:data]; [file closeFile];
    });
}

static BOOL QQlgIsToolbarItem(UIView *view) {
    return [NSStringFromClass(view.class) hasPrefix:@"QQToolBar"] &&
           CGRectGetWidth(view.bounds) > 40.0 && CGRectGetHeight(view.bounds) > 40.0;
}

static NSArray<UIView *> *QQlgTabItems(UIView *tabBar) {
    NSMutableArray<UIView *> *items = [NSMutableArray array];
    for (UIView *view in tabBar.subviews) if (QQlgIsToolbarItem(view)) [items addObject:view];
    [items sortUsingComparator:^NSComparisonResult(UIView *a, UIView *b) {
        return CGRectGetMinX(a.frame) < CGRectGetMinX(b.frame) ? NSOrderedAscending :
               (CGRectGetMinX(a.frame) > CGRectGetMinX(b.frame) ? NSOrderedDescending : NSOrderedSame);
    }];
    return items;
}

static UIControl *QQlgSelectedControlInView(UIView *view) {
    if ([view isKindOfClass:UIControl.class] && ((UIControl *)view).selected) return (UIControl *)view;
    for (UIView *child in view.subviews) {
        UIControl *control = QQlgSelectedControlInView(child);
        if (control) return control;
    }
    return nil;
}

static UIControl *QQlgSelectedControl(NSArray<UIView *> *items) {
    for (UIView *view in items) { UIControl *control = QQlgSelectedControlInView(view); if (control) return control; }
    return nil;
}

static UIBlurEffectStyle QQlgFallbackMaterialStyle(void) {
    if (@available(iOS 13.0, *)) return UIBlurEffectStyleSystemUltraThinMaterial;
    return UIBlurEffectStyleLight;
}

static UIVisualEffect *QQlgRuntimeGlassEffect(QQlgRuntimeGlassStyle style) {
    Class cls = NSClassFromString(@"UIGlassEffect");
    SEL factory = NSSelectorFromString(@"effectWithStyle:");
    if (!cls || ![cls respondsToSelector:factory]) return nil;
    id effect = ((id (*)(id, SEL, NSInteger))objc_msgSend)(cls, factory, style);
    SEL interactive = NSSelectorFromString(@"setInteractive:");
    if (effect && [effect respondsToSelector:interactive]) ((void (*)(id, SEL, BOOL))objc_msgSend)(effect, interactive, NO);
    return effect;
}

static UIVisualEffect *QQlgRuntimeGlassContainerEffect(void) {
    Class cls = NSClassFromString(@"UIGlassContainerEffect");
    if (!cls) return nil;
    id effect = [[cls alloc] init];
    SEL spacing = NSSelectorFromString(@"setSpacing:");
    if (effect && [effect respondsToSelector:spacing]) ((void (*)(id, SEL, CGFloat))objc_msgSend)(effect, spacing, 10.0);
    return effect;
}

static void QQlgCorners(UIView *view, CGFloat radius) {
    view.layer.cornerRadius = radius;
    if (@available(iOS 13.0, *)) view.layer.cornerCurve = kCACornerCurveContinuous;
    view.layer.masksToBounds = YES;
    // layer.cornerRadius only clips pixels. Native Liquid Glass reads the
    // iOS 26 UIView corner configuration to determine the material geometry.
    Class bridge = NSClassFromString(@"QQlgNativeGlassBridge");
    SEL applyCapsule = NSSelectorFromString(@"applyCapsuleToView:");
    if (bridge && [bridge respondsToSelector:applyCapsule]) {
        ((void (*)(id, SEL, UIView *))objc_msgSend)(bridge, applyCapsule, view);
    }
}

static UIView *QQlgMakeHost(void) {
    UIView *host = [[UIView alloc] initWithFrame:CGRectZero];
    host.userInteractionEnabled = NO; host.accessibilityElementsHidden = YES;
    host.backgroundColor = UIColor.clearColor; host.clipsToBounds = NO;
    UIVisualEffect *containerEffect = QQlgRuntimeGlassContainerEffect();
    UIVisualEffect *barEffect = QQlgRuntimeGlassEffect(QQlgRuntimeGlassStyleRegular);
    UIVisualEffect *selectedEffect = QQlgRuntimeGlassEffect(QQlgRuntimeGlassStyleClear);
    BOOL nativeGlass = containerEffect && barEffect && selectedEffect;
    UIView *container; UIVisualEffectView *surface; UIVisualEffectView *selection;
    CAGradientLayer *refraction = nil; CAShapeLayer *border = nil;

    if (nativeGlass) {
        UIVisualEffectView *glassContainer = [[UIVisualEffectView alloc] initWithEffect:containerEffect];
        glassContainer.userInteractionEnabled = NO; glassContainer.backgroundColor = UIColor.clearColor;
        [host addSubview:glassContainer]; container = glassContainer;
        surface = [[UIVisualEffectView alloc] initWithEffect:barEffect];
        selection = [[UIVisualEffectView alloc] initWithEffect:selectedEffect];
        [glassContainer.contentView addSubview:surface];
        [glassContainer.contentView addSubview:selection];
    } else {
        surface = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:QQlgFallbackMaterialStyle()]];
        [host addSubview:surface]; container = surface;
        selection = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:QQlgFallbackMaterialStyle()]];
        [host addSubview:selection];
        refraction = [CAGradientLayer layer]; refraction.startPoint = CGPointMake(0.04, 0.0); refraction.endPoint = CGPointMake(0.96, 1.0);
        [surface.layer addSublayer:refraction];
        border = [CAShapeLayer layer]; border.fillColor = UIColor.clearColor.CGColor; border.lineWidth = 1.0 / UIScreen.mainScreen.scale;
        [surface.layer addSublayer:border];
    }
    surface.userInteractionEnabled = NO; surface.backgroundColor = UIColor.clearColor;
    selection.userInteractionEnabled = NO; selection.backgroundColor = UIColor.clearColor; selection.alpha = 0.0;
    objc_setAssociatedObject(host, @selector(QQlgMakeHost), @{
        @"container": container, @"surface": surface, @"selection": selection, @"native": @(nativeGlass),
        @"refraction": refraction ?: (id)NSNull.null, @"border": border ?: (id)NSNull.null
    }, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return host;
}

static void QQlgSuppressRectangle(UIView *tabBar, UIView *host) {
    tabBar.backgroundColor = UIColor.clearColor; tabBar.opaque = NO; tabBar.clipsToBounds = NO;
    for (UIView *child in tabBar.subviews) {
        if (child == host || QQlgIsToolbarItem(child)) continue;
        if (CGRectGetWidth(child.bounds) >= CGRectGetWidth(tabBar.bounds) * 0.85 &&
            CGRectGetHeight(child.bounds) >= CGRectGetHeight(tabBar.bounds) * 0.70) child.alpha = 0.0;
    }
    if (![tabBar.superview isKindOfClass:UITabBar.class]) return;
    UITabBar *bar = (UITabBar *)tabBar.superview;
    bar.backgroundColor = UIColor.clearColor; bar.barTintColor = UIColor.clearColor; bar.translucent = YES; bar.opaque = NO; bar.clipsToBounds = NO;
    if (@available(iOS 13.0, *)) {
        UITabBarAppearance *appearance = [[UITabBarAppearance alloc] init];
        [appearance configureWithTransparentBackground];
        appearance.backgroundColor = UIColor.clearColor; appearance.backgroundEffect = nil; appearance.shadowColor = UIColor.clearColor;
        bar.standardAppearance = appearance;
        if (@available(iOS 15.0, *)) bar.scrollEdgeAppearance = appearance;
    }
    for (UIView *child in bar.subviews) {
        if (child == tabBar || [child isDescendantOfView:tabBar]) continue;
        NSString *name = NSStringFromClass(child.class);
        BOOL background = [name rangeOfString:@"Background" options:NSCaseInsensitiveSearch].location != NSNotFound ||
                          [child isKindOfClass:UIVisualEffectView.class] || [child isKindOfClass:UIImageView.class];
        if (background && CGRectGetWidth(child.bounds) >= CGRectGetWidth(bar.bounds) * 0.80) child.alpha = 0.0;
    }
}

static void QQlgUpdateFallback(NSDictionary *parts, BOOL dark, CGRect bounds, CGFloat radius) {
    id gradient = parts[@"refraction"]; id outline = parts[@"border"];
    if (![gradient isKindOfClass:CAGradientLayer.class] || ![outline isKindOfClass:CAShapeLayer.class]) return;
    CAGradientLayer *refraction = gradient; refraction.frame = bounds;
    refraction.colors = dark ? @[(id)[UIColor colorWithWhite:1 alpha:0.10].CGColor, (id)[UIColor colorWithWhite:1 alpha:0.025].CGColor, (id)[UIColor colorWithWhite:0 alpha:0.045].CGColor] :
                               @[(id)[UIColor colorWithWhite:1 alpha:0.30].CGColor, (id)[UIColor colorWithWhite:1 alpha:0.07].CGColor, (id)[UIColor colorWithWhite:1 alpha:0.015].CGColor];
    refraction.locations = @[@0.0, @0.30, @1.0];
    CAShapeLayer *border = outline; border.frame = bounds;
    border.path = [UIBezierPath bezierPathWithRoundedRect:bounds cornerRadius:radius].CGPath;
    border.strokeColor = (dark ? [UIColor colorWithWhite:1 alpha:0.20] : [UIColor colorWithWhite:1 alpha:0.42]).CGColor;
}

static void QQlgSetSelection(UIVisualEffectView *view, CGRect frame, BOOL visible, BOOL animate) {
    void (^changes)(void) = ^{ view.frame = frame; view.alpha = visible ? 1.0 : 0.0; QQlgCorners(view, CGRectGetHeight(frame) * 0.5); };
    if (animate && visible && view.window) [UIView animateWithDuration:0.32 delay:0 options:UIViewAnimationOptionBeginFromCurrentState | UIViewAnimationOptionCurveEaseInOut animations:changes completion:nil];
    else [UIView performWithoutAnimation:changes];
}

static void QQlgUpdateFloatingTab(UIView *tabBar, BOOL animateSelection) {
    if (!tabBar.window || CGRectGetWidth(tabBar.bounds) < 100.0) return;
    NSArray<UIView *> *items = QQlgTabItems(tabBar); if (items.count < 3) return;
    UIView *host = objc_getAssociatedObject(tabBar, QQlgFloatingHostKey);
    if (!host) {
        host = QQlgMakeHost(); objc_setAssociatedObject(tabBar, QQlgFloatingHostKey, host, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        NSDictionary *parts = objc_getAssociatedObject(host, @selector(QQlgMakeHost));
        QQlgLog(@"floating host created class=%@ items=%lu nativeGlass=%@", NSStringFromClass(tabBar.class), (unsigned long)items.count, [parts[@"native"] boolValue] ? @"yes" : @"no");
    }
    [tabBar insertSubview:host belowSubview:items.firstObject]; QQlgSuppressRectangle(tabBar, host);
    CGFloat safeBottom = MAX(0.0, tabBar.safeAreaInsets.bottom);
    CGFloat contentHeight = MAX(48.0, CGRectGetHeight(tabBar.bounds) - safeBottom);
    CGFloat height = MIN(60.0, MAX(52.0, contentHeight - 2.0));
    CGFloat y = MAX(1.0, (contentHeight - height) * 0.5);
    CGFloat inset = MIN(18.0, MAX(12.0, CGRectGetWidth(tabBar.bounds) * 0.032));
    host.frame = CGRectMake(inset, y, CGRectGetWidth(tabBar.bounds) - inset * 2.0, height);
    host.layer.shadowColor = UIColor.blackColor.CGColor; host.layer.shadowOpacity = tabBar.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark ? 0.25 : 0.12;
    host.layer.shadowRadius = 12.0; host.layer.shadowOffset = CGSizeMake(0, 5);
    host.layer.shadowPath = [UIBezierPath bezierPathWithRoundedRect:host.bounds cornerRadius:height * 0.5].CGPath;
    NSDictionary *parts = objc_getAssociatedObject(host, @selector(QQlgMakeHost));
    UIView *container = parts[@"container"]; UIVisualEffectView *surface = parts[@"surface"]; UIVisualEffectView *selection = parts[@"selection"];
    container.frame = host.bounds; surface.frame = host.bounds; QQlgCorners(surface, height * 0.5);
    if (![parts[@"native"] boolValue]) { surface.effect = [UIBlurEffect effectWithStyle:QQlgFallbackMaterialStyle()]; QQlgUpdateFallback(parts, tabBar.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark, surface.bounds, height * 0.5); }
    CGFloat slot = CGRectGetWidth(host.bounds) / items.count;
    for (NSUInteger i = 0; i < items.count; i++) items[i].frame = CGRectMake(CGRectGetMinX(host.frame) + slot * i, y, slot, height);
    UIControl *selected = QQlgSelectedControl(items); NSUInteger selectedIndex = NSNotFound;
    if (selected) for (NSUInteger i = 0; i < items.count; i++) if ([selected isDescendantOfView:items[i]]) { selectedIndex = i; break; }
    if (selectedIndex == NSNotFound) QQlgSetSelection(selection, selection.frame, NO, NO);
    else { CGFloat side = MAX(5.0, slot * 0.075); QQlgSetSelection(selection, CGRectMake(slot * selectedIndex + side, 5.0, slot - side * 2.0, height - 10.0), YES, animateSelection); }
}

static void QQlgLayoutSubviews(UIView *self, SEL _cmd) { QQlgOriginalLayoutSubviews(self, _cmd); QQlgUpdateFloatingTab(self, NO); }
static void QQlgUpdateBackground(id self, SEL _cmd, BOOL change) { QQlgOriginalUpdateBackground(self, _cmd, change); QQlgUpdateFloatingTab((UIView *)self, NO); }
static void QQlgChangeStyle(id self, SEL _cmd, BOOL dark, id item) { QQlgOriginalChangeStyle(self, _cmd, dark, item); QQlgUpdateFloatingTab((UIView *)self, NO); }
static void QQlgSetSelectedIndex(id self, SEL _cmd, NSUInteger index) { QQlgOriginalSetSelectedIndex(self, _cmd, index); QQlgUpdateFloatingTab((UIView *)self, YES); }

static BOOL QQlgHook(Class cls, SEL selector, IMP replacement, IMP *original) {
    Method method = class_getInstanceMethod(cls, selector); if (!method) return NO;
    const char *types = method_getTypeEncoding(method); IMP inherited = method_getImplementation(method);
    if (class_addMethod(cls, selector, replacement, types)) *original = inherited;
    else { *original = method_getImplementation(method); method_setImplementation(method, replacement); }
    return YES;
}

static UIView *QQlgFindTabBar(UIView *view, NSUInteger *budget) {
    if (!view || *budget == 0) return nil; (*budget)--;
    if ([NSStringFromClass(view.class) isEqualToString:@"QQSkinTabBar"]) return view;
    for (UIView *child in view.subviews) { UIView *found = QQlgFindTabBar(child, budget); if (found) return found; }
    return nil;
}

static BOOL QQlgInstall(void) {
    if (QQlgHooksInstalled) return YES; Class cls = NSClassFromString(@"QQSkinTabBar"); if (!cls) return NO;
    BOOL result = QQlgHook(cls, @selector(layoutSubviews), (IMP)QQlgLayoutSubviews, (IMP *)&QQlgOriginalLayoutSubviews);
    result &= QQlgHook(cls, @selector(updateBackgroundViewNeedChangeStyle:), (IMP)QQlgUpdateBackground, (IMP *)&QQlgOriginalUpdateBackground);
    result &= QQlgHook(cls, @selector(changeStyleOfTabBar:tabbarItem:), (IMP)QQlgChangeStyle, (IMP *)&QQlgOriginalChangeStyle);
    result &= QQlgHook(cls, @selector(setTabBarSelectedAtIndex:), (IMP)QQlgSetSelectedIndex, (IMP *)&QQlgOriginalSetSelectedIndex);
    QQlgHooksInstalled = result;
    if (result) for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) if ([scene isKindOfClass:UIWindowScene.class]) for (UIWindow *window in ((UIWindowScene *)scene).windows) { NSUInteger budget = 1000; UIView *tab = QQlgFindTabBar(window, &budget); if (tab) { QQlgUpdateFloatingTab(tab, NO); return YES; } }
    return result;
}

static void QQlgAttemptInstall(NSUInteger attempts) {
    if (QQlgInstall()) QQlgLog(@"QQlg floating tab loaded; QQ 9.3.35; native iOS 26 glass is runtime-selected; log=%@", QQlgLogPath());
    else if (attempts < 19) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{ QQlgAttemptInstall(attempts + 1); });
    else QQlgLog(@"QQSkinTabBar was unavailable after %lu attempts", (unsigned long)(attempts + 1));
}

__attribute__((constructor))
static void QQlgBootstrap(void) {
    QQlgLogQueue = dispatch_queue_create("com.qqlg.floating-tab.log", DISPATCH_QUEUE_SERIAL);
    dispatch_async(dispatch_get_main_queue(), ^{ QQlgAttemptInstall(0); });
}
