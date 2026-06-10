ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:14.0

INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WCLGSoftScrollEdge

WCLGSoftScrollEdge_FILES = Tweak.xm
WCLGSoftScrollEdge_CFLAGS = -fobjc-arc
WCLGSoftScrollEdge_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk
