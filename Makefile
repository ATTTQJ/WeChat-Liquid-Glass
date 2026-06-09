ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:14.0

INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WCLGCustomTopGlass

WCLGCustomTopGlass_FILES = Tweak.xm WCLGTopGlassOverlayView.m
WCLGCustomTopGlass_CFLAGS = -fobjc-arc
WCLGCustomTopGlass_FRAMEWORKS = UIKit QuartzCore

include $(THEOS_MAKE_PATH)/tweak.mk
