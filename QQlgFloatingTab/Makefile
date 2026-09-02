SDK := $(shell xcrun --sdk iphoneos --show-sdk-path)
CC := xcrun --sdk iphoneos clang
OUT := build/QQlgFloatingTab.dylib

CFLAGS := -arch arm64 -isysroot $(SDK) -miphoneos-version-min=15.0 -fobjc-arc -fvisibility=hidden -Wall -Wextra
LDFLAGS := -dynamiclib -framework UIKit -framework Foundation -framework QuartzCore -framework CoreGraphics -Wl,-install_name,@rpath/QQlgFloatingTab.dylib

.PHONY: all clean
all: $(OUT)

$(OUT): QQlgFloatingTab.m
	mkdir -p build
	$(CC) $(CFLAGS) $< $(LDFLAGS) -o $@

clean:
	rm -rf build
