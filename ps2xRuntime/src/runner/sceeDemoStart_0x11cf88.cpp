#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>

// gp = 0x17daf0: argc_copy at gp-0x7b24, argv_copy at gp-0x7b28
static constexpr uint32_t kArgcCopyAddr = 0x17daf0u - 0x7b24u;  // 0x175fcc
static constexpr uint32_t kArgvCopyAddr = 0x17daf0u - 0x7b28u;  // 0x175fc8

// Parse decimal string in guest memory, write result as short to guest out ptr.
static void simpleAtoiToShort(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime,
                              uint32_t strAddr, uint32_t outAddr) {
    int32_t val = 0;
    const uint8_t* p = getConstMemPtr(rdram, strAddr);
    if (!p) return;
    while (*p >= '0' && *p <= '9')
        val = val * 10 + (*p++ - '0');
    val = (val < -32768) ? -32768 : ((val > 32767) ? 32767 : val);
    WRITE16(outAddr, static_cast<uint16_t>(val & 0xffff));
}

void sceeDemoStart_0x11cf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t argc = getRegU32(ctx, 4);   // a0 param_1
    const uint32_t argv = getRegU32(ctx, 5);   // a1 param_2
    const uint32_t out1 = getRegU32(ctx, 6);   // a2 param_3
    const uint32_t out2 = getRegU32(ctx, 7);   // a3 param_4
    const uint32_t out3 = getRegU32(ctx, 8);   // t0 param_5
    const uint32_t out4 = getRegU32(ctx, 9);   // t1 param_6
    const uint32_t out5 = getRegU32(ctx, 10);  // t2 param_7

    std::fprintf(stderr, "[sceeDemoStart] argc=%u argv=0x%08x out1=0x%08x out2=0x%08x\n",
                 argc, argv, out1, out2);

    WRITE32(kArgcCopyAddr, argc);
    WRITE32(kArgvCopyAddr, argv);

    if (argc > 5u) {
        uint32_t a1 = READ32(argv + 4u);
        uint32_t a2 = READ32(argv + 8u);
        uint32_t a3 = READ32(argv + 12u);
        uint32_t a4 = READ32(argv + 16u);
        uint32_t a5 = READ32(argv + 20u);
        std::fprintf(stderr, "[sceeDemoStart] parsing args: a1=0x%08x a2=0x%08x a3=0x%08x a4=0x%08x a5=0x%08x\n",
                     a1, a2, a3, a4, a5);
        simpleAtoiToShort(rdram, ctx, runtime, a1, out1);
        simpleAtoiToShort(rdram, ctx, runtime, a2, out2);
        simpleAtoiToShort(rdram, ctx, runtime, a3, out3);
        simpleAtoiToShort(rdram, ctx, runtime, a4, out4);
        simpleAtoiToShort(rdram, ctx, runtime, a5, out5);
    }

    ctx->pc = getRegU32(ctx, 31);
}
