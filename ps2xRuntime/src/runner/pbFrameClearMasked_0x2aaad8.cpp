#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFrameClearMasked
// Address: 0x2aaad8 - 0x2aac00
void pbFrameClearMasked_0x2aaad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aaad8u;

    // 0x2aaad8: 0x27bdff30
    ctx->pc = 0x2aaad8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2aaadc: 0xffbf00c0
    ctx->pc = 0x2aaadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2aaae0: 0x3c020036
    ctx->pc = 0x2aaae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aaae4: 0x8c42dee0
    ctx->pc = 0x2aaae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aaae8: 0x8c430008
    ctx->pc = 0x2aaae8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aaaec: 0x3c027000
    ctx->pc = 0x2aaaecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2aaaf0: 0x3442000b
    ctx->pc = 0x2aaaf0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x2aaaf4: 0xafa20000
    ctx->pc = 0x2aaaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2aaaf8: 0xafa00004
    ctx->pc = 0x2aaaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2aaafc: 0xafa00008
    ctx->pc = 0x2aaafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2aab00: 0x3c025000
    ctx->pc = 0x2aab00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2aab04: 0x3442000b
    ctx->pc = 0x2aab04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x2aab08: 0xafa2000c
    ctx->pc = 0x2aab08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2aab0c: 0x3402800a
    ctx->pc = 0x2aab0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32778));
    // 0x2aab10: 0xafa20010
    ctx->pc = 0x2aab10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2aab14: 0x3c021000
    ctx->pc = 0x2aab14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aab18: 0xafa20014
    ctx->pc = 0x2aab18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2aab1c: 0x2402000e
    ctx->pc = 0x2aab1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2aab20: 0xafa20018
    ctx->pc = 0x2aab20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2aab24: 0xafa0001c
    ctx->pc = 0x2aab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2aab28: 0xffa00020
    ctx->pc = 0x2aab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x2aab2c: 0x8c620020
    ctx->pc = 0x2aab2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2aab30: 0xafa20030
    ctx->pc = 0x2aab30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2aab34: 0xafa50034
    ctx->pc = 0x2aab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x2aab38: 0x8c620030
    ctx->pc = 0x2aab38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2aab3c: 0xafa20040
    ctx->pc = 0x2aab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2aab40: 0xafa60044
    ctx->pc = 0x2aab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x2aab44: 0x3c020003
    ctx->pc = 0x2aab44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x2aab48: 0xffa20050
    ctx->pc = 0x2aab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x2aab4c: 0x24020006
    ctx->pc = 0x2aab4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aab50: 0xffa20060
    ctx->pc = 0x2aab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x2aab54: 0xafa40070
    ctx->pc = 0x2aab54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2aab58: 0x3c023f80
    ctx->pc = 0x2aab58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2aab5c: 0xafa20074
    ctx->pc = 0x2aab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2aab60: 0x3c027200
    ctx->pc = 0x2aab60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)29184 << 16));
    // 0x2aab64: 0x34426c00
    ctx->pc = 0x2aab64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27648));
    // 0x2aab68: 0xffa20080
    ctx->pc = 0x2aab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x2aab6c: 0x34028e00
    ctx->pc = 0x2aab6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 36352));
    // 0x2aab70: 0x21438
    ctx->pc = 0x2aab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2aab74: 0x34429400
    ctx->pc = 0x2aab74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37888));
    // 0x2aab78: 0xffa20090
    ctx->pc = 0x2aab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    // 0x2aab7c: 0xdc620020
    ctx->pc = 0x2aab7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2aab80: 0xffa200a0
    ctx->pc = 0x2aab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    // 0x2aab84: 0xdc620030
    ctx->pc = 0x2aab84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2aab88: 0xffa200b0
    ctx->pc = 0x2aab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x2aab8c: 0x2402004a
    ctx->pc = 0x2aab8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 74));
    // 0x2aab90: 0xffa20028
    ctx->pc = 0x2aab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x2aab94: 0x2404004c
    ctx->pc = 0x2aab94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 76));
    // 0x2aab98: 0xffa40038
    ctx->pc = 0x2aab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x2aab9c: 0x2403004e
    ctx->pc = 0x2aab9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 78));
    // 0x2aaba0: 0xffa30048
    ctx->pc = 0x2aaba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x2aaba4: 0x24020047
    ctx->pc = 0x2aaba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x2aaba8: 0xffa20058
    ctx->pc = 0x2aaba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x2aabac: 0xffa00068
    ctx->pc = 0x2aabacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x2aabb0: 0x24020001
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aabb4: 0xffa20078
    ctx->pc = 0x2aabb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
    // 0x2aabb8: 0x24020005
    ctx->pc = 0x2aabb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aabbc: 0xffa20088
    ctx->pc = 0x2aabbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
    // 0x2aabc0: 0xffa20098
    ctx->pc = 0x2aabc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
    // 0x2aabc4: 0xffa400a8
    ctx->pc = 0x2aabc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 4));
    // 0x2aabc8: 0xffa300b8
    ctx->pc = 0x2aabc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
    // 0x2aabcc: 0xc0c0e18
    ctx->pc = 0x2AABCCu;
    SET_GPR_U32(ctx, 31, 0x2AABD4u);
    ctx->pc = 0x2AABD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABD4u; }
    }
    if (ctx->pc != 0x2AABD4u) { return; }
    ctx->pc = 0x2AABD4u;
    // 0x2aabd4: 0x240401c0
    ctx->pc = 0x2aabd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x2aabd8: 0x3c05003b
    ctx->pc = 0x2aabd8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2aabdc: 0xc0a9fe2
    ctx->pc = 0x2AABDCu;
    SET_GPR_U32(ctx, 31, 0x2AABE4u);
    ctx->pc = 0x2AABE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964432));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABE4u; }
    }
    if (ctx->pc != 0x2AABE4u) { return; }
    ctx->pc = 0x2AABE4u;
    // 0x2aabe4: 0x24041145
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
    // 0x2aabe8: 0x3a0282d
    ctx->pc = 0x2aabe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aabec: 0xc0a9a32
    ctx->pc = 0x2AABECu;
    SET_GPR_U32(ctx, 31, 0x2AABF4u);
    ctx->pc = 0x2AABF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A68C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaScheduleWait_0x2a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AABF4u; }
    }
    if (ctx->pc != 0x2AABF4u) { return; }
    ctx->pc = 0x2AABF4u;
    // 0x2aabf4: 0xdfbf00c0
    ctx->pc = 0x2aabf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2aabf8: 0x3e00008
    ctx->pc = 0x2AABF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AABFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAC00u;
}
