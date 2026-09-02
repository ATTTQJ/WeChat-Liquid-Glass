import SwiftUI
import UIKit

@available(iOS 26.0, *)
private struct QQlgGlassBar: View {
    let selectedSlot: Int
    let itemCount: Int

    var body: some View {
        GeometryReader { proxy in
            let slotWidth = proxy.size.width / CGFloat(max(itemCount, 1))
            GlassEffectContainer(spacing: 10.0) {
                Color.clear
                    .glassEffect(.regular, in: Capsule())

                if selectedSlot >= 0 && selectedSlot < itemCount {
                    Color.clear
                        .frame(width: max(1, slotWidth - 10.0), height: max(1, proxy.size.height - 10.0))
                        .glassEffect(.clear, in: Capsule())
                        .position(x: slotWidth * (CGFloat(selectedSlot) + 0.5), y: proxy.size.height * 0.5)
                }
            }
        }
    }
}

// This view is placed below QQ's original tab-item controls. It owns only the
// Liquid Glass pixels; QQ retains hit testing, icons, text, badges, and state.
@available(iOS 26.0, *)
@objc(QQlgNativeGlassOverlay)
public final class QQlgNativeGlassOverlay: UIView {
    private let hostingController: UIHostingController<QQlgGlassBar>

    @objc public override init(frame: CGRect) {
        hostingController = UIHostingController(rootView: QQlgGlassBar(selectedSlot: -1, itemCount: 4))
        super.init(frame: frame)
        isUserInteractionEnabled = false
        backgroundColor = .clear
        hostingController.view.backgroundColor = .clear
        hostingController.view.isOpaque = false
        addSubview(hostingController.view)
    }

    @available(*, unavailable)
    required init?(coder: NSCoder) { fatalError() }

    public override func layoutSubviews() {
        super.layoutSubviews()
        hostingController.view.frame = bounds
    }

    @objc(setSelectedSlot:itemCount:animated:)
    public func setSelectedSlot(_ selectedSlot: Int, itemCount: Int, animated: Bool) {
        let update = {
            self.hostingController.rootView = QQlgGlassBar(selectedSlot: selectedSlot, itemCount: itemCount)
        }
        if animated {
            UIView.animate(withDuration: 0.32, delay: 0.0, options: [.beginFromCurrentState, .curveEaseInOut], animations: update)
        } else {
            UIView.performWithoutAnimation(update)
        }
    }
}
