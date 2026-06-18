ARCHS = arm64 arm64e
TARGET = iphone:clang:latest:14.0
INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WeChatLiquidGlassRecovered
WeChatLiquidGlassRecovered_FILES = Tweak.xm WCLGConstants.mm WCLGConfig.mm WCLGAccess.mm WCLGRuntime.mm WCLGSettingsViewController.mm WCLGVisual.mm WCLGChatBottom.mm WCLGChatBubble.mm
WeChatLiquidGlassRecovered_CFLAGS = -fobjc-arc
WeChatLiquidGlassRecovered_FRAMEWORKS = Foundation UIKit CoreGraphics QuartzCore Security SafariServices AudioToolbox AVFoundation
WeChatLiquidGlassRecovered_LIBRARIES = substrate

include $(THEOS_MAKE_PATH)/tweak.mk
