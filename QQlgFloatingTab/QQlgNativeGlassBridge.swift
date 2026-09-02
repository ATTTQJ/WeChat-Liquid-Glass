import UIKit

// UIKit's cornerConfiguration is a Swift value type introduced with iOS 26.
// This bridge keeps the Objective-C hook binary compatible with older SDKs
// while letting the actual native glass views declare their intended capsule
// geometry on iOS 26 and later.
@objc(QQlgNativeGlassBridge)
public final class QQlgNativeGlassBridge: NSObject {
    @objc(applyCapsuleToView:)
    public static func applyCapsule(to view: UIView) {
        guard #available(iOS 26.0, *) else { return }
        view.cornerConfiguration = .capsule()
    }
}
