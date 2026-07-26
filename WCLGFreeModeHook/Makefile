ARCHS = arm64 arm64e
TARGET := iphone:clang:latest:14.0

INSTALL_TARGET_PROCESSES = WeChat

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = 000WCLGFreeModeHook

000WCLGFreeModeHook_FILES = Tweak.m
000WCLGFreeModeHook_CFLAGS = -fobjc-arc -Wall -Wextra -Wno-unused-parameter
000WCLGFreeModeHook_FRAMEWORKS = Foundation UIKit

include $(THEOS_MAKE_PATH)/tweak.mk
