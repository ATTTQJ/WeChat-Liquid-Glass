#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCLGTopGlassOverlayView : UIView

@property (nonatomic, assign) BOOL forceDarkTint;

- (void)updateForNavigationBar:(UINavigationBar *)navigationBar
                       topItem:(nullable UINavigationItem *)topItem
                    transition:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
