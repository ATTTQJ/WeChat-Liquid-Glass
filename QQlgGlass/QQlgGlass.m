#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <objc/runtime.h>
#import <os/log.h>

// QQ 9.3.35: a visual-only treatment for the confirmed chat-input container
// NTAIOChat.NTAIOShortcutBarBaseView.  Existing controls, frames, responders,
// gestures, and event handlers stay owned by QQ.

static const void *QQlgGlassHostKey = &QQlgGlassHostKey;
static void (*QQlgOriginalLayoutSubviews)(UIView *, SEL);
static dispatch_queue_t QQlgGlassLogQueue;

static NSString *QQlgGlassLogPath(void) {
    static NSString *path;
    static dispatch_once_t token;
    dispatch_once(&token, ^{
        NSURL *documents = [[NSFileManager defaultManager] URLsForDirectory:NSDocumentDirectory
                                                                    inDomains:NSUserDomainMask].firstObject;
        NSURL *directory = [documents URLByAppendingPathComponent:@"QQlg" isDirectory:YES];
        [[NSFileManager defaultManager] createDirectoryAtURL:directory
                                  withIntermediateDirectories:YES attributes:nil error:nil];
        path = [[directory URLByAppendingPathComponent:@"QQlgGlass.log"] path];
    });
    return path;
}

static void QQlgGlassLog(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);
static void QQlgGlassLog(NSString *format, ...) {
    va_list arguments;
    va_start(arguments, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:arguments];
    va_end(arguments);
    NSString *line = [NSString stringWithFormat:@"[%@] %@\n", NSDate.date, message];
    NSLog(@"[QQlgGlass] %@", message);
    os_log(OS_LOG_DEFAULT, "QQlgGlass: %{public}s", message.UTF8String);
    dispatch_async(QQlgGlassLogQueue, ^{
        NSData *data = [line dataUsingEncoding:NSUTF8StringEncoding];
        NSFileManager *files = NSFileManager.defaultManager;
        if (![files fileExistsAtPath:QQlgGlassLogPath()]) {
            [data writeToFile:QQlgGlassLogPath() atomically:YES];
            return;
        }
        NSFileHandle *file = [NSFileHandle fileHandleForWritingAtPath:QQlgGlassLogPath()];
        [file seekToEndOfFile];
        [file writeData:data];
        [file closeFile];
    });
}

static UIBlurEffectStyle QQlgBlurStyle(UIView *view) {
    if (@available(iOS 13.0, *)) return UIBlurEffectStyleSystemChromeMaterial;
    return UIBlurEffectStyleLight;
}

static UIView *QQlgGlassMakeHost(UIView *bar) {
    UIView *host = [[UIView alloc] initWithFrame:bar.bounds];
    host.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    host.userInteractionEnabled = NO;
    host.accessibilityElementsHidden = YES;
    host.backgroundColor = UIColor.clearColor;

    UIVisualEffectView *blur = [[UIVisualEffectView alloc] initWithEffect:[UIBlurEffect effectWithStyle:QQlgBlurStyle(bar)]];
    blur.frame = host.bounds;
    blur.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    blur.userInteractionEnabled = NO;
    [host addSubview:blur];

    UIView *tint = [[UIView alloc] initWithFrame:blur.contentView.bounds];
    tint.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tint.userInteractionEnabled = NO;
    tint.tag = 9101;
    [blur.contentView addSubview:tint];

    CAShapeLayer *border = [CAShapeLayer layer];
    border.name = @"QQlgGlassBorder";
    border.fillColor = UIColor.clearColor.CGColor;
    border.lineWidth = 1.0 / UIScreen.mainScreen.scale;
    [host.layer addSublayer:border];
    objc_setAssociatedObject(host, @selector(QQlgGlassMakeHost), blur, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return host;
}

static void QQlgGlassUpdate(UIView *bar) {
    UIView *host = objc_getAssociatedObject(bar, QQlgGlassHostKey);
    if (!host) {
        host = QQlgGlassMakeHost(bar);
        objc_setAssociatedObject(bar, QQlgGlassHostKey, host, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [bar insertSubview:host atIndex:0];
        QQlgGlassLog(@"applied class=%@ frame=%@", NSStringFromClass(bar.class), NSStringFromCGRect(bar.bounds));
    } else if (host.superview != bar) {
        [bar insertSubview:host atIndex:0];
    } else if (bar.subviews.firstObject != host) {
        [bar insertSubview:host atIndex:0];
    }

    host.frame = bar.bounds;
    BOOL dark = bar.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    UIVisualEffectView *blur = objc_getAssociatedObject(host, @selector(QQlgGlassMakeHost));
    if (blur) blur.effect = [UIBlurEffect effectWithStyle:QQlgBlurStyle(bar)];
    UIView *tint = [blur.contentView viewWithTag:9101];
    tint.backgroundColor = (dark ? UIColor.blackColor : UIColor.whiteColor);
    tint.alpha = dark ? 0.18 : 0.12;

    CGFloat radius = MIN(24.0, MAX(16.0, bar.bounds.size.height * 0.20));
    UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect:host.bounds
                                               byRoundingCorners:UIRectCornerTopLeft | UIRectCornerTopRight
                                                     cornerRadii:CGSizeMake(radius, radius)];
    CAShapeLayer *border = nil;
    for (CALayer *layer in host.layer.sublayers) {
        if ([layer.name isEqualToString:@"QQlgGlassBorder"]) { border = (CAShapeLayer *)layer; break; }
    }
    border.path = path.CGPath;
    border.frame = host.bounds;
    border.strokeColor = (dark ? [UIColor colorWithWhite:1.0 alpha:0.22] : [UIColor colorWithWhite:1.0 alpha:0.65]).CGColor;
}

static void QQlgGlassLayoutSubviews(UIView *self, SEL _cmd) {
    QQlgOriginalLayoutSubviews(self, _cmd);
    QQlgGlassUpdate(self);
}

static BOOL QQlgGlassInstallHook(void) {
    Class cls = NSClassFromString(@"NTAIOChat.NTAIOShortcutBarBaseView");
    if (!cls) return NO;
    SEL selector = @selector(layoutSubviews);
    Method inherited = class_getInstanceMethod(cls, selector);
    if (!inherited) return NO;
    const char *types = method_getTypeEncoding(inherited);
    IMP inheritedIMP = method_getImplementation(inherited);
    if (class_addMethod(cls, selector, (IMP)QQlgGlassLayoutSubviews, types)) {
        QQlgOriginalLayoutSubviews = (void (*)(UIView *, SEL))inheritedIMP;
    } else {
        QQlgOriginalLayoutSubviews = (void (*)(UIView *, SEL))method_getImplementation(inherited);
        method_setImplementation(inherited, (IMP)QQlgGlassLayoutSubviews);
    }
    QQlgGlassLog(@"hooked %@ layoutSubviews", NSStringFromClass(cls));
    return YES;
}

__attribute__((constructor))
static void QQlgGlassBootstrap(void) {
    QQlgGlassLogQueue = dispatch_queue_create("com.qqlg.glass.log", DISPATCH_QUEUE_SERIAL);
    dispatch_async(dispatch_get_main_queue(), ^{
        __block NSUInteger attempts = 0;
        __block void (^installWhenReady)(void);
        installWhenReady = ^{
            if (QQlgGlassInstallHook()) {
                QQlgGlassLog(@"QQlg input glass loaded; log=%@", QQlgGlassLogPath());
                return;
            }
            attempts++;
            if (attempts < 20) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), installWhenReady);
            } else {
                QQlgGlassLog(@"target class was not available after %lu attempts", (unsigned long)attempts);
            }
        };
        installWhenReady();
    });
}
