#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

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

void sceeDemoStart_0x1c6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("sceeDemoStart");

    const uint32_t argc = getRegU32(ctx, 4);   // a0 param_1
    const uint32_t argv = getRegU32(ctx, 5);   // a1 param_2
    const uint32_t out1 = getRegU32(ctx, 6);   // a2 param_3
    const uint32_t out2 = getRegU32(ctx, 7);   // a3 param_4
    const uint32_t sp = getRegU32(ctx, 29);
    const uint32_t out3 = READ32(sp + 16u);   // param_5
    const uint32_t out4 = READ32(sp + 20u);   // param_6
    const uint32_t out5 = READ32(sp + 24u);   // param_7

    if (argc > 5u) {
        const uint32_t a1 = READ32(argv + 4u);
        const uint32_t a2 = READ32(argv + 8u);
        const uint32_t a3 = READ32(argv + 12u);
        const uint32_t a4 = READ32(argv + 16u);
        const uint32_t a5 = READ32(argv + 20u);
        simpleAtoiToShort(rdram, ctx, runtime, a1, out1);
        simpleAtoiToShort(rdram, ctx, runtime, a2, out2);
        simpleAtoiToShort(rdram, ctx, runtime, a3, out3);
        simpleAtoiToShort(rdram, ctx, runtime, a4, out4);
        simpleAtoiToShort(rdram, ctx, runtime, a5, out5);
    }

    ctx->pc = getRegU32(ctx, 31);
}

