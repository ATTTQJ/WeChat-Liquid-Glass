#pragma once

#include <stddef.h>
#include <stdint.h>

/*
 * WCGlass 3.0.2-5 only.  Values originate from the checked recovery maps.
 * The original-slot probes are the first MSHookMessageEx out-pointers in each
 * gated initializer.  A zero probe means that particular initializer returned
 * before installing its hook set.
 */
typedef struct {
    uintptr_t initializerOffset;
    uintptr_t originalSlotOffset;
} WCLGGatedInitializerBinding;

typedef struct {
    const uint8_t *uuid;
    const WCLGGatedInitializerBinding *gatedInitializers;
    size_t gatedInitializerCount;
} WCLGVersionBinding;

#if defined(__arm64e__)
static const uint8_t kWCLG3025UUID[16] = {
    0xEB, 0xA1, 0x83, 0xAA, 0x41, 0x80, 0x38, 0xD3,
    0x87, 0x5A, 0x1B, 0x9D, 0xD3, 0x5C, 0xC8, 0xC3,
};
static const WCLGGatedInitializerBinding kWCLG3025GatedInitializers[] = {
    { 0x4000,   0x86e550 }, { 0x8068,   0x86e5e0 },
    { 0xa540,   0x86e680 }, { 0xd410,   0x86e6e8 },
    { 0x13670,  0x86e800 }, { 0x1c6dc,  0x86e950 },
    { 0x2650c,  0x86ec48 }, { 0x34d68,  0x86f1c0 },
    { 0x36270,  0x86f240 }, { 0x4eef4,  0x86f768 },
    { 0x50470,  0x86f860 }, { 0x7ef20,  0x870570 },
    { 0x80af4,  0x8705c8 }, { 0x8b874,  0x870800 },
    { 0x94780,  0x870ad8 }, { 0x9a170,  0x870b20 },
    { 0xadcac,  0x871028 }, { 0xaf0ac,  0x871070 },
    { 0xb2568,  0x871138 }, { 0xb6490,  0x871170 },
    { 0xb6abc,  0x871280 },
};
#else
static const uint8_t kWCLG3025UUID[16] = {
    0xC7, 0x96, 0x03, 0x67, 0x48, 0x91, 0x37, 0x99,
    0xA1, 0x50, 0x6B, 0x0C, 0xBA, 0x45, 0x4B, 0xF9,
};
static const WCLGGatedInitializerBinding kWCLG3025GatedInitializers[] = {
    { 0x4000,   0x852360 }, { 0x7f54,   0x8523f0 },
    { 0xa2a0,   0x852490 }, { 0xd010,   0x8524f0 },
    { 0x131a4,  0x852608 }, { 0x1bf90,  0x852758 },
    { 0x2557c,  0x852a50 }, { 0x33220,  0x852fc8 },
    { 0x34388,  0x853048 }, { 0x4c470,  0x853570 },
    { 0x4d7dc,  0x853668 }, { 0x7a600,  0x854378 },
    { 0x7c11c,  0x8543d0 }, { 0x868e4,  0x854608 },
    { 0x8f1f0,  0x8548e0 }, { 0x94a74,  0x854928 },
    { 0xa7a64,  0x854e30 }, { 0xa8d88,  0x854e78 },
    { 0xac0e4,  0x854f40 }, { 0xafe80,  0x854f78 },
    { 0xb0408,  0x855088 },
};
#endif

static const WCLGVersionBinding kWCLG3025Binding = {
    kWCLG3025UUID,
    kWCLG3025GatedInitializers,
    sizeof(kWCLG3025GatedInitializers) / sizeof(kWCLG3025GatedInitializers[0]),
};
