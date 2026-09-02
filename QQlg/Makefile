SDK := $(shell xcrun --sdk iphoneos --show-sdk-path)
CC := xcrun --sdk iphoneos clang
OUT := build/QQlgProbe.dylib

CFLAGS := -arch arm64 -isysroot $(SDK) -miphoneos-version-min=15.0 -fobjc-arc -fvisibility=hidden -Wall -Wextra
LDFLAGS := -dynamiclib -framework UIKit -framework Foundation -framework CoreGraphics -Wl,-install_name,@rpath/QQlgProbe.dylib

.PHONY: all clean
all: $(OUT)

$(OUT): QQlgProbe.m
	mkdir -p build
	$(CC) $(CFLAGS) $< $(LDFLAGS) -o $@

clean:
	rm -rf build
