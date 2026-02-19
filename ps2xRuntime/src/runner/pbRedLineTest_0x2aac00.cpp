#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbRedLineTest
// Address: 0x2aac00 - 0x2aad5c
void pbRedLineTest_0x2aac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aac00u;

    // 0x2aac00: 0x27bdff30
    ctx->pc = 0x2aac00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2aac04: 0xffbf00c0
    ctx->pc = 0x2aac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2aac08: 0x3c020036
    ctx->pc = 0x2aac08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aac0c: 0x8c42dee0
    ctx->pc = 0x2aac0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aac10: 0x8c440008
    ctx->pc = 0x2aac10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2aac14: 0x3c020037
    ctx->pc = 0x2aac14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aac18: 0x8c428330
    ctx->pc = 0x2aac18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aac1c: 0x8c42000c
    ctx->pc = 0x2aac1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2aac20: 0x1040004b
    ctx->pc = 0x2AAC20u;
    {
        const bool branch_taken_0x2aac20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AAC24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2aac20) {
            ctx->pc = 0x2AAD50u;
            goto label_2aad50;
        }
    }
    ctx->pc = 0x2AAC28u;
    // 0x2aac28: 0x3c027000
    ctx->pc = 0x2aac28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2aac2c: 0x3442000b
    ctx->pc = 0x2aac2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x2aac30: 0xafa20000
    ctx->pc = 0x2aac30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2aac34: 0xafa00004
    ctx->pc = 0x2aac34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2aac38: 0xafa00008
    ctx->pc = 0x2aac38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2aac3c: 0x24a2ffff
    ctx->pc = 0x2aac3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2aac40: 0x3c035000
    ctx->pc = 0x2aac40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20480 << 16));
    // 0x2aac44: 0x431025
    ctx->pc = 0x2aac44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aac48: 0xafa2000c
    ctx->pc = 0x2aac48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2aac4c: 0x24a2fffe
    ctx->pc = 0x2aac4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x2aac50: 0x34428000
    ctx->pc = 0x2aac50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2aac54: 0xafa20010
    ctx->pc = 0x2aac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2aac58: 0x3c021000
    ctx->pc = 0x2aac58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aac5c: 0xafa20014
    ctx->pc = 0x2aac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2aac60: 0x2402000e
    ctx->pc = 0x2aac60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2aac64: 0xafa20018
    ctx->pc = 0x2aac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2aac68: 0xafa0001c
    ctx->pc = 0x2aac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2aac6c: 0xffa00020
    ctx->pc = 0x2aac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x2aac70: 0x8c820020
    ctx->pc = 0x2aac70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2aac74: 0xafa20030
    ctx->pc = 0x2aac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2aac78: 0x3c02ffff
    ctx->pc = 0x2aac78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2aac7c: 0x3442ff00
    ctx->pc = 0x2aac7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65280));
    // 0x2aac80: 0xafa20034
    ctx->pc = 0x2aac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x2aac84: 0x8c820030
    ctx->pc = 0x2aac84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2aac88: 0xafa20040
    ctx->pc = 0x2aac88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2aac8c: 0x24020001
    ctx->pc = 0x2aac8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aac90: 0xafa20044
    ctx->pc = 0x2aac90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2aac94: 0x3c020037
    ctx->pc = 0x2aac94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aac98: 0x8c428330
    ctx->pc = 0x2aac98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aac9c: 0xdc4200a8
    ctx->pc = 0x2aac9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2aaca0: 0xffa20050
    ctx->pc = 0x2aaca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x2aaca4: 0x24020006
    ctx->pc = 0x2aaca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aaca8: 0xffa20060
    ctx->pc = 0x2aaca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x2aacac: 0x240200ff
    ctx->pc = 0x2aacacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x2aacb0: 0xafa20070
    ctx->pc = 0x2aacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x2aacb4: 0x3c023f80
    ctx->pc = 0x2aacb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2aacb8: 0xafa20074
    ctx->pc = 0x2aacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2aacbc: 0x3c027200
    ctx->pc = 0x2aacbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)29184 << 16));
    // 0x2aacc0: 0x34426c00
    ctx->pc = 0x2aacc0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27648));
    // 0x2aacc4: 0xffa20080
    ctx->pc = 0x2aacc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x2aacc8: 0x34028e00
    ctx->pc = 0x2aacc8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 36352));
    // 0x2aaccc: 0x21438
    ctx->pc = 0x2aacccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2aacd0: 0x34429400
    ctx->pc = 0x2aacd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37888));
    // 0x2aacd4: 0xffa20090
    ctx->pc = 0x2aacd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
    // 0x2aacd8: 0xdc820020
    ctx->pc = 0x2aacd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2aacdc: 0xffa200a0
    ctx->pc = 0x2aacdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 2));
    // 0x2aace0: 0xdc820030
    ctx->pc = 0x2aace0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2aace4: 0xffa200b0
    ctx->pc = 0x2aace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x2aace8: 0x2402004a
    ctx->pc = 0x2aace8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 74));
    // 0x2aacec: 0xffa20028
    ctx->pc = 0x2aacecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x2aacf0: 0x2404004c
    ctx->pc = 0x2aacf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 76));
    // 0x2aacf4: 0xffa40038
    ctx->pc = 0x2aacf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
    // 0x2aacf8: 0x2403004e
    ctx->pc = 0x2aacf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 78));
    // 0x2aacfc: 0xffa30048
    ctx->pc = 0x2aacfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x2aad00: 0x24020047
    ctx->pc = 0x2aad00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x2aad04: 0xffa20058
    ctx->pc = 0x2aad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x2aad08: 0xffa00068
    ctx->pc = 0x2aad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x2aad0c: 0x24020001
    ctx->pc = 0x2aad0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aad10: 0xffa20078
    ctx->pc = 0x2aad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
    // 0x2aad14: 0x24020005
    ctx->pc = 0x2aad14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aad18: 0xffa20088
    ctx->pc = 0x2aad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
    // 0x2aad1c: 0xffa20098
    ctx->pc = 0x2aad1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
    // 0x2aad20: 0xffa400a8
    ctx->pc = 0x2aad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 4));
    // 0x2aad24: 0xffa300b8
    ctx->pc = 0x2aad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
    // 0x2aad28: 0xc0c0e18
    ctx->pc = 0x2AAD28u;
    SET_GPR_U32(ctx, 31, 0x2AAD30u);
    ctx->pc = 0x2AAD2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD30u; }
    }
    if (ctx->pc != 0x2AAD30u) { return; }
    ctx->pc = 0x2AAD30u;
    // 0x2aad30: 0x240401c0
    ctx->pc = 0x2aad30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x2aad34: 0x3c05003b
    ctx->pc = 0x2aad34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2aad38: 0xc0a9fe2
    ctx->pc = 0x2AAD38u;
    SET_GPR_U32(ctx, 31, 0x2AAD40u);
    ctx->pc = 0x2AAD3Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964432));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD40u; }
    }
    if (ctx->pc != 0x2AAD40u) { return; }
    ctx->pc = 0x2AAD40u;
    // 0x2aad40: 0x24041145
    ctx->pc = 0x2aad40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
    // 0x2aad44: 0x3a0282d
    ctx->pc = 0x2aad44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad48: 0xc0a9a32
    ctx->pc = 0x2AAD48u;
    SET_GPR_U32(ctx, 31, 0x2AAD50u);
    ctx->pc = 0x2AAD4Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A68C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaScheduleWait_0x2a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD50u; }
    }
    if (ctx->pc != 0x2AAD50u) { return; }
    ctx->pc = 0x2AAD50u;
label_2aad50:
    // 0x2aad50: 0xdfbf00c0
    ctx->pc = 0x2aad50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2aad54: 0x3e00008
    ctx->pc = 0x2AAD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAD58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AAD50u: goto label_2aad50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AAD5Cu;
}
