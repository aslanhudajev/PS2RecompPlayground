#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dispClear
// Address: 0x11b1d0 - 0x11b2c4
void dispClear_0x11b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b1d0u;

    // 0x11b1d0: 0x27bdffc0
    ctx->pc = 0x11b1d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b1d4: 0x2407ffff
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b1d8: 0xffb10020
    ctx->pc = 0x11b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11b1dc: 0x3c080fff
    ctx->pc = 0x11b1dcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)4095 << 16));
    // 0x11b1e0: 0xffb00010
    ctx->pc = 0x11b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11b1e4: 0x3508ffff
    ctx->pc = 0x11b1e4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x11b1e8: 0xffbf0030
    ctx->pc = 0x11b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b1ec: 0x3c100075
    ctx->pc = 0x11b1ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)117 << 16));
    // 0x11b1f0: 0x2610d980
    ctx->pc = 0x11b1f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294957440));
    // 0x11b1f4: 0xa0882d
    ctx->pc = 0x11b1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1f8: 0x8c860034
    ctx->pc = 0x11b1f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11b1fc: 0x2088024
    ctx->pc = 0x11b1fcu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x11b200: 0x8c890030
    ctx->pc = 0x11b200u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x11b204: 0x2405000e
    ctx->pc = 0x11b204u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x11b208: 0x24c4001f
    ctx->pc = 0x11b208u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 31));
    // 0x11b20c: 0x24c2003e
    ctx->pc = 0x11b20cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 62));
    // 0x11b210: 0xe4382a
    ctx->pc = 0x11b210u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 4)));
    // 0x11b214: 0x61840
    ctx->pc = 0x11b214u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x11b218: 0x87100b
    ctx->pc = 0x11b218u;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x11b21c: 0x661821
    ctx->pc = 0x11b21cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11b220: 0x21143
    ctx->pc = 0x11b220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x11b224: 0x94900
    ctx->pc = 0x11b224u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 4));
    // 0x11b228: 0x21180
    ctx->pc = 0x11b228u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x11b22c: 0xafa90008
    ctx->pc = 0x11b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x11b230: 0x431021
    ctx->pc = 0x11b230u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b234: 0x3c042000
    ctx->pc = 0x11b234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8192 << 16));
    // 0x11b238: 0x21100
    ctx->pc = 0x11b238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x11b23c: 0x2042025
    ctx->pc = 0x11b23cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x11b240: 0xafa2000c
    ctx->pc = 0x11b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x11b244: 0x24060001
    ctx->pc = 0x11b244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b248: 0xafa00000
    ctx->pc = 0x11b248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b24c: 0x382d
    ctx->pc = 0x11b24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b250: 0xafa00004
    ctx->pc = 0x11b250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11b254: 0x402d
    ctx->pc = 0x11b254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b258: 0x482d
    ctx->pc = 0x11b258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b25c: 0x240a0001
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b260: 0xc046d24
    ctx->pc = 0x11B260u;
    SET_GPR_U32(ctx, 31, 0x11B268u);
    ctx->pc = 0x11B264u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x11B490u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B268u; }
    }
    if (ctx->pc != 0x11B268u) { return; }
    ctx->pc = 0x11B268u;
    // 0x11b268: 0x220302d
    ctx->pc = 0x11b268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b26c: 0x40202d
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b270: 0xc046ce2
    ctx->pc = 0x11B270u;
    SET_GPR_U32(ctx, 31, 0x11B278u);
    ctx->pc = 0x11B274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B388u;
    {
        const uint32_t __entryPc = ctx->pc;
        setFlatRect_0x11b388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B278u; }
    }
    if (ctx->pc != 0x11B278u) { return; }
    ctx->pc = 0x11B278u;
    // 0x11b278: 0x3c031000
    ctx->pc = 0x11b278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11b27c: 0x3c041000
    ctx->pc = 0x11b27cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11b280: 0x3463a010
    ctx->pc = 0x11b280u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 40976));
    // 0x11b284: 0x3484a020
    ctx->pc = 0x11b284u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 40992));
    // 0x11b288: 0xac700000
    ctx->pc = 0x11b288u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x11b28c: 0x24050005
    ctx->pc = 0x11b28cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x11b290: 0x3c021000
    ctx->pc = 0x11b290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11b294: 0xac850000
    ctx->pc = 0x11b294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11b298: 0x3442a000
    ctx->pc = 0x11b298u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 40960));
    // 0x11b29c: 0x24030101
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 257));
    // 0x11b2a0: 0xac430000
    ctx->pc = 0x11b2a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x11b2a4: 0x202d
    ctx->pc = 0x11b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2a8: 0xc043322
    ctx->pc = 0x11B2A8u;
    SET_GPR_U32(ctx, 31, 0x11B2B0u);
    ctx->pc = 0x11B2ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B2B0u; }
    }
    if (ctx->pc != 0x11B2B0u) { return; }
    ctx->pc = 0x11B2B0u;
    // 0x11b2b0: 0xdfbf0030
    ctx->pc = 0x11b2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b2b4: 0xdfb10020
    ctx->pc = 0x11b2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b2b8: 0xdfb00010
    ctx->pc = 0x11b2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b2bc: 0x3e00008
    ctx->pc = 0x11B2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B2C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B2C4u;
}
