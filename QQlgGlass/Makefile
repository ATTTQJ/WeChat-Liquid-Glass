SDK := $(shell xcrun --sdk iphoneos --show-sdk-path)
CC := xcrun --sdk iphoneos clang
OUT := build/QQlgGlass.dylib

CFLAGS := -arch arm64 -isysroot $(SDK) -miphoneos-version-min=15.0 -fobjc-arc -fvisibility=hidden -Wall -Wextra
LDFLAGS := -dynamiclib -framework UIKit -framework Foundation -framework QuartzCore -Wl,-install_name,@rpath/QQlgGlass.dylib

.PHONY: all clean
all: $(OUT)

$(OUT): QQlgGlass.m
	mkdir -p build
	$(CC) $(CFLAGS) $< $(LDFLAGS) -o $@

clean:
	rm -rf build
