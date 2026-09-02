#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <os/log.h>

// Read-only chat-page probe for QQ 9.3.35.  It never changes a view, layer,
// event handler, responder, or return value.  The output is intentionally
// structural: no text, contact, image, or message content is logged.

static dispatch_queue_t QQlgLogQueue;
static NSMapTable<UIViewController *, NSNumber *> *QQlgLastSnapshots;
static __weak UIViewController *QQlgLastCandidate;

static void (*QQlgOriginalViewDidAppear)(UIViewController *, SEL, BOOL);
static void (*QQlgOriginalViewDidLayoutSubviews)(UIViewController *, SEL);
static void (*QQlgOriginalTraitCollectionDidChange)(UIViewController *, SEL, UITraitCollection *);

static NSString *QQlgLogPath(void) {
    static NSString *path;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSURL *documents = [[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory
                                                                    inDomains:NSUserDomainMask].firstObject;
        NSURL *directory = [documents URLByAppendingPathComponent:@"QQlg" isDirectory:YES];
        [[NSFileManager defaultManager] createDirectoryAtURL:directory
                                  withIntermediateDirectories:YES attributes:nil error:nil];
        path = [[directory URLByAppendingPathComponent:@"QQlg.log"] path];
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
    NSLog(@"[QQlg] %@", message);
    os_log(OS_LOG_DEFAULT, "QQlg: %{public}s", message.UTF8String);
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

static NSString *QQlgFrame(CGRect frame) {
    return [NSString stringWithFormat:@"{%.1f,%.1f,%.1f,%.1f}", frame.origin.x, frame.origin.y, frame.size.width, frame.size.height];
}

static BOOL QQlgClassNameSuggestsChat(Class cls) {
    NSString *name = NSStringFromClass(cls).lowercaseString;
    for (NSString *token in @[@"chat", @"message", @"conversation", @"session", @"input", @"aiox"]) {
        if ([name containsString:token]) return YES;
    }
    return NO;
}

typedef struct {
    NSUInteger editable;
    NSUInteger buttons;
    NSUInteger lowerEditable;
    UIView *firstEditable;
} QQlgViewStats;

static void QQlgCollectStats(UIView *view, NSUInteger depth, QQlgViewStats *stats) {
    if (!view || depth > 10) return;
    BOOL editable = [view isKindOfClass:UITextView.class] || [view isKindOfClass:UITextField.class];
    if (editable) {
        stats->editable++;
        if (!stats->firstEditable) stats->firstEditable = view;
        CGFloat midpoint = CGRectGetMidY(view.frame);
        CGFloat parentHeight = MAX(view.superview.bounds.size.height, 1.0);
        if (midpoint > parentHeight * 0.55) stats->lowerEditable++;
    }
    if ([view isKindOfClass:UIButton.class] || [view isKindOfClass:UIControl.class]) stats->buttons++;
    for (UIView *child in view.subviews) QQlgCollectStats(child, depth + 1, stats);
}

static void QQlgDumpView(UIView *view, NSUInteger depth, NSUInteger *count) {
    if (!view || depth > 8 || *count >= 450) return;
    (*count)++;
    NSString *indent = [@"" stringByPaddingToLength:depth * 2 withString:@" " startingAtIndex:0];
    QQlgLog(@"%@%@ frame=%@ hidden=%d alpha=%.2f clips=%d subviews=%lu",
            indent, NSStringFromClass(view.class), QQlgFrame(view.frame), view.hidden,
            view.alpha, view.clipsToBounds, (unsigned long)view.subviews.count);
    for (UIView *child in view.subviews) QQlgDumpView(child, depth + 1, count);
}

static void QQlgDumpAncestors(UIView *view) {
    NSMutableArray<NSString *> *chain = [NSMutableArray array];
    for (UIView *current = view; current && chain.count < 12; current = current.superview) {
        [chain addObject:[NSString stringWithFormat:@"%@ %@", NSStringFromClass(current.class), QQlgFrame(current.frame)]];
    }
    QQlgLog(@"editable ancestors: %@", [chain componentsJoinedByString:@" -> "]);
}

static BOOL QQlgShouldSnapshot(UIViewController *controller, NSString **reason) {
    if (!controller.isViewLoaded || !controller.view.window) return NO;
    QQlgViewStats stats = {0};
    QQlgCollectStats(controller.view, 0, &stats);
    if (QQlgClassNameSuggestsChat(controller.class)) {
        *reason = [NSString stringWithFormat:@"controller-name + editable=%lu buttons=%lu", (unsigned long)stats.editable, (unsigned long)stats.buttons];
        return YES;
    }
    if (stats.lowerEditable > 0 && stats.buttons > 1) {
        *reason = [NSString stringWithFormat:@"lower-editable=%lu buttons=%lu", (unsigned long)stats.lowerEditable, (unsigned long)stats.buttons];
        return YES;
    }
    return NO;
}

static void QQlgSnapshot(UIViewController *controller, NSString *event) {
    if (!controller) return;
    NSString *reason = nil;
    if (!QQlgShouldSnapshot(controller, &reason)) return;
    NSTimeInterval now = NSDate.date.timeIntervalSince1970;
    NSNumber *previous = [QQlgLastSnapshots objectForKey:controller];
    if (previous && now - previous.doubleValue < 0.80 && ![event hasPrefix:@"keyboard"]) return;
    [QQlgLastSnapshots setObject:@(now) forKey:controller];
    QQlgLastCandidate = controller;
    QQlgViewStats stats = {0};
    QQlgCollectStats(controller.view, 0, &stats);
    QQlgLog(@"===== chat candidate event=%@ controller=%@ reason=%@ root=%@ editable=%lu buttons=%lu =====",
            event, NSStringFromClass(controller.class), reason, QQlgFrame(controller.view.frame),
            (unsigned long)stats.editable, (unsigned long)stats.buttons);
    if (stats.firstEditable) QQlgDumpAncestors(stats.firstEditable);
    NSUInteger count = 0;
    QQlgDumpView(controller.view, 0, &count);
    QQlgLog(@"===== candidate snapshot end nodes=%lu =====", (unsigned long)count);
}

static void QQlgViewDidAppear(UIViewController *self, SEL _cmd, BOOL animated) {
    QQlgOriginalViewDidAppear(self, _cmd, animated);
    QQlgSnapshot(self, @"viewDidAppear");
}

static void QQlgViewDidLayoutSubviews(UIViewController *self, SEL _cmd) {
    QQlgOriginalViewDidLayoutSubviews(self, _cmd);
    QQlgSnapshot(self, @"viewDidLayoutSubviews");
}

static void QQlgTraitCollectionDidChange(UIViewController *self, SEL _cmd, UITraitCollection *previous) {
    QQlgOriginalTraitCollectionDidChange(self, _cmd, previous);
    QQlgSnapshot(self, @"traitCollectionDidChange");
}

static BOOL QQlgHook(Class cls, SEL selector, IMP replacement, IMP *original) {
    Method method = class_getInstanceMethod(cls, selector);
    if (!method) return NO;
    *original = method_getImplementation(method);
    method_setImplementation(method, replacement);
    return YES;
}

static void QQlgKeyboardChanged(NSNotification *notification) {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSNumber *duration = notification.userInfo[UIKeyboardAnimationDurationUserInfoKey];
        NSValue *frameValue = notification.userInfo[UIKeyboardFrameEndUserInfoKey];
        QQlgLog(@"keyboard event=%@ endFrame=%@ duration=%@", notification.name,
                frameValue ? NSStringFromCGRect(frameValue.CGRectValue) : @"(none)", duration ?: @0);
        QQlgSnapshot(QQlgLastCandidate, @"keyboard");
    });
}

__attribute__((constructor))
static void QQlgBootstrap(void) {
    QQlgLogQueue = dispatch_queue_create("com.qqlg.probe.log", DISPATCH_QUEUE_SERIAL);
    dispatch_async(dispatch_get_main_queue(), ^{
        QQlgLastSnapshots = [NSMapTable weakToStrongObjectsMapTable];
        BOOL hooksOK = YES;
        hooksOK &= QQlgHook(UIViewController.class, @selector(viewDidAppear:), (IMP)QQlgViewDidAppear, (IMP *)&QQlgOriginalViewDidAppear);
        hooksOK &= QQlgHook(UIViewController.class, @selector(viewDidLayoutSubviews), (IMP)QQlgViewDidLayoutSubviews, (IMP *)&QQlgOriginalViewDidLayoutSubviews);
        hooksOK &= QQlgHook(UIViewController.class, @selector(traitCollectionDidChange:), (IMP)QQlgTraitCollectionDidChange, (IMP *)&QQlgOriginalTraitCollectionDidChange);
        NSNotificationCenter *center = NSNotificationCenter.defaultCenter;
        void (^keyboardObserver)(NSNotification *) = ^(NSNotification *notification) {
            QQlgKeyboardChanged(notification);
        };
        [center addObserverForName:UIKeyboardWillShowNotification object:nil queue:NSOperationQueue.mainQueue usingBlock:keyboardObserver];
        [center addObserverForName:UIKeyboardWillHideNotification object:nil queue:NSOperationQueue.mainQueue usingBlock:keyboardObserver];
        [center addObserverForName:UIKeyboardWillChangeFrameNotification object:nil queue:NSOperationQueue.mainQueue usingBlock:keyboardObserver];
        QQlgLog(@"QQlg chat probe loaded; target=QQ 9.3.35 hooks=%d log=%@", hooksOK, QQlgLogPath());
    });
}
