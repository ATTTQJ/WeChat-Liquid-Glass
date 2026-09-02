import SwiftUI
import UIKit

@available(iOS 26.0, *)
private final class QQlgGlassState: ObservableObject {
    @Published var selectedSlot = -1
    @Published var itemCount = 4
}

@available(iOS 26.0, *)
private struct QQlgGlassBar: View {
    @ObservedObject var state: QQlgGlassState

    var body: some View {
        GeometryReader { proxy in
            let slotWidth = proxy.size.width / CGFloat(max(state.itemCount, 1))
            GlassEffectContainer(spacing: 10.0) {
                Color.clear
                    .glassEffect(.regular, in: Capsule())

                if state.selectedSlot >= 0 && state.selectedSlot < state.itemCount {
                    Color.clear
                        .frame(width: max(1, slotWidth - 10.0), height: max(1, proxy.size.height - 10.0))
                        .glassEffect(.clear, in: Capsule())
                        .position(x: slotWidth * (CGFloat(state.selectedSlot) + 0.5), y: proxy.size.height * 0.5)
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
    private let state: QQlgGlassState
    private let hostingController: UIHostingController<QQlgGlassBar>

    @objc public override init(frame: CGRect) {
        let glassState = QQlgGlassState()
        state = glassState
        hostingController = UIHostingController(rootView: QQlgGlassBar(state: glassState))
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
        // QQ invokes layoutSubviews frequently. Rebuilding a UIHostingController
        // root for every pass recreates the entire glass graph and causes hitches.
        // Keep one graph alive and publish only a real selection/count change.
        guard state.selectedSlot != selectedSlot || state.itemCount != itemCount else { return }
        let update = {
            self.state.selectedSlot = selectedSlot
            self.state.itemCount = itemCount
        }
        if animated {
            withAnimation(.easeInOut(duration: 0.28), update)
        } else {
            update()
        }
    }
}
