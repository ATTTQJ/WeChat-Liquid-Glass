ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:14.0

INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = WCLGAuthCachePoC

WCLGAuthCachePoC_FILES = WCLGAuthCachePoC.m
WCLGAuthCachePoC_CFLAGS = -fobjc-arc -fblocks
WCLGAuthCachePoC_FRAMEWORKS = Foundation

include $(THEOS_MAKE_PATH)/tweak.mk
