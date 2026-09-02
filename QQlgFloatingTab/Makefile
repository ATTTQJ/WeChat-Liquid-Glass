SDK := $(shell xcrun --sdk iphoneos --show-sdk-path)
CC := xcrun --sdk iphoneos clang
SWIFTC := xcrun --sdk iphoneos swiftc
OUT := build/QQlgFloatingTab.dylib
OBJ := build/QQlgFloatingTab.o

CFLAGS := -arch arm64 -isysroot $(SDK) -miphoneos-version-min=15.0 -fobjc-arc -fvisibility=hidden -Wall -Wextra
SWIFTCFLAGS := -target arm64-apple-ios15.0 -sdk $(SDK)
LDFLAGS := -framework SwiftUI -framework UIKit -framework Foundation -framework QuartzCore -framework CoreGraphics -Xlinker -install_name -Xlinker @rpath/QQlgFloatingTab.dylib

.PHONY: all clean
all: $(OUT)

$(OUT): QQlgFloatingTab.m QQlgNativeGlassOverlay.swift
	mkdir -p build
	$(CC) $(CFLAGS) -c QQlgFloatingTab.m -o $(OBJ)
	$(SWIFTC) $(SWIFTCFLAGS) -emit-library QQlgNativeGlassOverlay.swift $(OBJ) $(LDFLAGS) -o $@

clean:
	rm -rf build
