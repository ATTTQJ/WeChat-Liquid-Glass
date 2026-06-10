ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:14.0

INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WCLGTabBarGlassFix

WCLGTabBarGlassFix_FILES = Tweak.xm
WCLGTabBarGlassFix_CFLAGS = -fobjc-arc
WCLGTabBarGlassFix_FRAMEWORKS = UIKit QuartzCore

include $(THEOS_MAKE_PATH)/tweak.mk
