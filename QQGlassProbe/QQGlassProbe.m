#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <os/log.h>

// QQ 9.3.35 diagnostic probe. It only observes the custom tab bar and never
// changes a return value, hierarchy, frame, colour, or layer property.

static __weak UIView *QQGPTrackedTabBar;
static dispatch_queue_t QQGPLogQueue;
static NSTimeInterval QQGPLastSnapshotTime;

static void (*QQGPOriginalSetTabBarView)(id, SEL, UIView *);
static void (*QQGPOriginalUpdateBackground)(id, SEL, BOOL);
static void (*QQGPOriginalChangeStyle)(id, SEL, BOOL, id);
static void (*QQGPOriginalSetSelectedIndex)(id, SEL, NSUInteger);
static BOOL (*QQGPOriginalUseBlurEffectBackground)(id, SEL);
static void (*QQGPOriginalSetTabBarHidden)(id, SEL, BOOL, BOOL);

static NSString *QQGPLogPath(void) {
    static NSString *path;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSURL *documentsURL = [[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory
                                                                      inDomains:NSUserDomainMask].firstObject;
        NSURL *directoryURL = [documentsURL URLByAppendingPathComponent:@"QQGlassProbe" isDirectory:YES];
        [[NSFileManager defaultManager] createDirectoryAtURL:directoryURL
                                 withIntermediateDirectories:YES
                                                  attributes:nil
                                                       error:nil];
        path = [[directoryURL URLByAppendingPathComponent:@"probe.log"] path];
    });
    return path;
}

static void QQGPLog(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);
static void QQGPLog(NSString *format, ...) {
    va_list arguments;
    va_start(arguments, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:arguments];
    va_end(arguments);

    NSString *line = [NSString stringWithFormat:@"[%@] %@\n",
                      [[NSDate date] descriptionWithLocale:nil], message];
    NSLog(@"[QQGlassProbe] %@", message);
    os_log(OS_LOG_DEFAULT, "QQGlassProbe: %{public}s", message.UTF8String);

    dispatch_async(QQGPLogQueue, ^{
        NSData *data = [line dataUsingEncoding:NSUTF8StringEncoding];
        if (![[NSFileManager defaultManager] fileExistsAtPath:QQGPLogPath()]) {
            [data writeToFile:QQGPLogPath() atomically:YES];
            return;
        }
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:QQGPLogPath()];
        [handle seekToEndOfFile];
        [handle writeData:data];
        [handle closeFile];
    });
}

static NSString *QQGPFrameString(CGRect frame) {
    return [NSString stringWithFormat:@"{x=%.1f,y=%.1f,w=%.1f,h=%.1f}",
            frame.origin.x, frame.origin.y, frame.size.width, frame.size.height];
}

static NSString *QQGPColorString(UIColor *color) {
    if (!color) {
        return @"nil";
    }
    CGFloat red = 0, green = 0, blue = 0, alpha = 0;
    if ([color getRed:&red green:&green blue:&blue alpha:&alpha]) {
        return [NSString stringWithFormat:@"rgba(%.2f,%.2f,%.2f,%.2f)", red, green, blue, alpha];
    }
    return NSStringFromClass(color.class);
}

static void QQGPSnapshot(NSString *reason);

static UIView *QQGPFindSkinTabBar(UIView *root, Class skinTabBarClass, NSUInteger *budget) {
    if (!root || *budget == 0) {
        return nil;
    }
    (*budget)--;
    if ([root isKindOfClass:skinTabBarClass]) {
        return root;
    }
    for (UIView *child in root.subviews) {
        UIView *result = QQGPFindSkinTabBar(child, skinTabBarClass, budget);
        if (result) {
            return result;
        }
    }
    return nil;
}

static void QQGPDiscoverExistingTabBar(Class skinTabBarClass) {
    dispatch_async(dispatch_get_main_queue(), ^{
        for (UIWindow *window in UIApplication.sharedApplication.windows) {
            NSUInteger budget = 800;
            UIView *tabBar = QQGPFindSkinTabBar(window, skinTabBarClass, &budget);
            if (tabBar) {
                QQGPTrackedTabBar = tabBar;
                QQGPLog(@"discovered existing tab bar instance=%@", NSStringFromClass(tabBar.class));
                QQGPSnapshot(@"initial discovery");
                return;
            }
        }
        QQGPLog(@"initial discovery found no QQSkinTabBar");
    });
}

static void QQGPDumpView(UIView *view, NSUInteger depth, NSUInteger *count) {
    if (!view || depth > 7 || *count >= 500) {
        return;
    }
    (*count)++;
    NSString *indent = [@"" stringByPaddingToLength:depth * 2 withString:@" " startingAtIndex:0];
    QQGPLog(@"%@%@ frame=%@ alpha=%.2f hidden=%d clips=%d bg=%@ subviews=%lu",
            indent,
            NSStringFromClass(view.class),
            QQGPFrameString(view.frame),
            view.alpha,
            view.hidden,
            view.clipsToBounds,
            QQGPColorString(view.backgroundColor),
            (unsigned long)view.subviews.count);
    for (UIView *child in view.subviews) {
        QQGPDumpView(child, depth + 1, count);
    }
}

static void QQGPSnapshot(NSString *reason) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIView *tabBar = QQGPTrackedTabBar;
        if (!tabBar || !tabBar.window) {
            QQGPLog(@"snapshot skipped (%@): no live tab bar", reason);
            return;
        }
        NSTimeInterval now = NSDate.date.timeIntervalSince1970;
        if (now - QQGPLastSnapshotTime < 0.75) {
            return;
        }
        QQGPLastSnapshotTime = now;

        NSMutableArray<NSString *> *ancestors = [NSMutableArray array];
        for (UIView *cursor = tabBar; cursor && ancestors.count < 10; cursor = cursor.superview) {
            [ancestors addObject:NSStringFromClass(cursor.class)];
        }
        QQGPLog(@"===== snapshot: %@ | tabBar=%@ | ancestors=%@ =====",
                reason, NSStringFromClass(tabBar.class), [ancestors componentsJoinedByString:@" -> "]);
        NSUInteger nodeCount = 0;
        QQGPDumpView(tabBar, 0, &nodeCount);
        QQGPLog(@"===== snapshot end: %lu nodes =====", (unsigned long)nodeCount);
    });
}

static BOOL QQGPClassHasMethod(Class cls, SEL selector) {
    return cls && class_getInstanceMethod(cls, selector) != NULL;
}

static BOOL QQGPSwizzle(Class cls, SEL selector, IMP replacement, IMP *original) {
    Method inheritedOrOwnMethod = class_getInstanceMethod(cls, selector);
    if (!inheritedOrOwnMethod) {
        QQGPLog(@"skip hook %@ %@: method not found", NSStringFromClass(cls), NSStringFromSelector(selector));
        return NO;
    }
    const char *types = method_getTypeEncoding(inheritedOrOwnMethod);
    IMP current = method_getImplementation(inheritedOrOwnMethod);
    if (class_addMethod(cls, selector, replacement, types)) {
        *original = current;
    } else {
        *original = current;
        method_setImplementation(inheritedOrOwnMethod, replacement);
    }
    QQGPLog(@"hooked %@ %@", NSStringFromClass(cls), NSStringFromSelector(selector));
    return YES;
}

static void QQGPSetTabBarView(id self, SEL _cmd, UIView *view) {
    QQGPOriginalSetTabBarView(self, _cmd, view);
    QQGPTrackedTabBar = view;
    QQGPLog(@"setTabBarView: instance=%@ frame=%@", NSStringFromClass(view.class), QQGPFrameString(view.frame));
    QQGPSnapshot(@"setTabBarView:");
}

static void QQGPUpdateBackground(id self, SEL _cmd, BOOL needChangeStyle) {
    QQGPOriginalUpdateBackground(self, _cmd, needChangeStyle);
    QQGPLog(@"QQSkinTabBar updateBackgroundViewNeedChangeStyle:%d", needChangeStyle);
    QQGPSnapshot(@"updateBackgroundViewNeedChangeStyle:");
}

static void QQGPChangeStyle(id self, SEL _cmd, BOOL isDarkTabBar, id item) {
    QQGPOriginalChangeStyle(self, _cmd, isDarkTabBar, item);
    QQGPLog(@"QQSkinTabBar changeStyleOfTabBar:tabbarItem: dark=%d item=%@",
            isDarkTabBar, NSStringFromClass([item class]));
    QQGPSnapshot(@"changeStyleOfTabBar:tabbarItem:");
}

static void QQGPSetSelectedIndex(id self, SEL _cmd, NSUInteger index) {
    QQGPOriginalSetSelectedIndex(self, _cmd, index);
    QQGPLog(@"QQSkinTabBar setTabBarSelectedAtIndex:%lu", (unsigned long)index);
    QQGPSnapshot(@"setTabBarSelectedAtIndex:");
}

static BOOL QQGPUseBlurEffectBackground(id self, SEL _cmd) {
    BOOL result = QQGPOriginalUseBlurEffectBackground(self, _cmd);
    QQGPLog(@"QQSkinTabBar useBlurEffectBackground -> %d", result);
    return result;
}

static void QQGPSetTabBarHidden(id self, SEL _cmd, BOOL hidden, BOOL animation) {
    QQGPOriginalSetTabBarHidden(self, _cmd, hidden, animation);
    QQGPLog(@"QQTabBarController setTabBarHidden:%d animation:%d", hidden, animation);
    QQGPSnapshot(@"setTabBarHidden:animation:");
}

static void QQGPInstallHooks(void) {
    static BOOL installed;
    if (installed) {
        return;
    }

    Class controllerClass = NSClassFromString(@"QQTabBarController");
    Class skinTabBarClass = NSClassFromString(@"QQSkinTabBar");
    if (!controllerClass || !skinTabBarClass) {
        QQGPLog(@"QQ classes are not ready yet (controller=%@ skinTabBar=%@)",
                controllerClass ? @"yes" : @"no", skinTabBarClass ? @"yes" : @"no");
        return;
    }

    BOOL controllerOK = YES;
    controllerOK &= QQGPSwizzle(controllerClass, @selector(setTabBarView:), (IMP)QQGPSetTabBarView, (IMP *)&QQGPOriginalSetTabBarView);
    controllerOK &= QQGPSwizzle(controllerClass, @selector(setTabBarHidden:animation:), (IMP)QQGPSetTabBarHidden, (IMP *)&QQGPOriginalSetTabBarHidden);
    BOOL skinOK = YES;
    skinOK &= QQGPSwizzle(skinTabBarClass, @selector(updateBackgroundViewNeedChangeStyle:), (IMP)QQGPUpdateBackground, (IMP *)&QQGPOriginalUpdateBackground);
    skinOK &= QQGPSwizzle(skinTabBarClass, @selector(changeStyleOfTabBar:tabbarItem:), (IMP)QQGPChangeStyle, (IMP *)&QQGPOriginalChangeStyle);
    skinOK &= QQGPSwizzle(skinTabBarClass, @selector(setTabBarSelectedAtIndex:), (IMP)QQGPSetSelectedIndex, (IMP *)&QQGPOriginalSetSelectedIndex);
    skinOK &= QQGPSwizzle(skinTabBarClass, @selector(useBlurEffectBackground), (IMP)QQGPUseBlurEffectBackground, (IMP *)&QQGPOriginalUseBlurEffectBackground);
    installed = controllerOK && skinOK;
    QQGPLog(@"install complete: controller=%d skinTabBar=%d", controllerOK, skinOK);
    QQGPDiscoverExistingTabBar(skinTabBarClass);
}

static void QQGPApplicationDidBecomeActive(NSNotification *notification) {
    QQGPLog(@"application became active");
    QQGPInstallHooks();
    QQGPSnapshot(@"applicationDidBecomeActive");
}

__attribute__((constructor))
static void QQGPBootstrap(void) {
    QQGPLogQueue = dispatch_queue_create("com.qqglass.probe.log", DISPATCH_QUEUE_SERIAL);
    dispatch_async(dispatch_get_main_queue(), ^{
        QQGPLog(@"QQGlassProbe loaded; target QQ version: 9.3.35");
        [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidBecomeActiveNotification
                                                          object:nil
                                                           queue:NSOperationQueue.mainQueue
                                                      usingBlock:^(NSNotification *notification) {
            QQGPApplicationDidBecomeActive(notification);
        }];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            QQGPInstallHooks();
        });
    });
}
