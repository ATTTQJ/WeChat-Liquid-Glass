ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:14.0

INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WCGlassFreeGate
WCGlassFreeGate_FILES = Tweak.xm
WCGlassFreeGate_CFLAGS = -fobjc-arc
WCGlassFreeGate_FRAMEWORKS = Foundation

include $(THEOS_MAKE_PATH)/tweak.mk
