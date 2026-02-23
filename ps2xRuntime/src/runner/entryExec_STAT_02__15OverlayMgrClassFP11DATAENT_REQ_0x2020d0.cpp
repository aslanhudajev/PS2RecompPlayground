#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_02__15OverlayMgrClassFP11DATAENT_REQ
// Address: 0x2020d0 - 0x202128
void entryExec_STAT_02__15OverlayMgrClassFP11DATAENT_REQ_0x2020d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_02__15OverlayMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x2020d0u;

    // 0x2020d0: 0x27bdffd0
    ctx->pc = 0x2020d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2020d4: 0x7fbf0020
    ctx->pc = 0x2020d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2020d8: 0x7fb10010
    ctx->pc = 0x2020d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2020dc: 0x7fb00000
    ctx->pc = 0x2020dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2020e0: 0x8c820010
    ctx->pc = 0x2020e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2020e4: 0x70808e28
    ctx->pc = 0x2020e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2020e8: 0x8cb00008
    ctx->pc = 0x2020e8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2020ec: 0x8c840014
    ctx->pc = 0x2020ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2020f0: 0xc071b54
    ctx->pc = 0x2020F0u;
    SET_GPR_U32(ctx, 31, 0x2020F8u);
    ctx->pc = 0x2020F4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x1C6D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwOverlayInit_0x1c6d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2020F8u; }
        else if (ctx->pc != 0x2020F8u) { ctx->pc = 0x2020F8u; }
    }
    if (ctx->pc != 0x2020F8u) { return; }
    ctx->pc = 0x2020F8u;
    // 0x2020f8: 0xc0552d8
    ctx->pc = 0x2020F8u;
    SET_GPR_U32(ctx, 31, 0x202100u);
    ctx->pc = 0x2020FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202100u; }
        else if (ctx->pc != 0x202100u) { ctx->pc = 0x202100u; }
    }
    if (ctx->pc != 0x202100u) { return; }
    ctx->pc = 0x202100u;
    // 0x202100: 0x72202628
    ctx->pc = 0x202100u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x202104: 0x72002e28
    ctx->pc = 0x202104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x202108: 0xc080868
    ctx->pc = 0x202108u;
    SET_GPR_U32(ctx, 31, 0x202110u);
    ctx->pc = 0x20210Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2021A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateEntryStat__15OverlayMgrClassFii_0x2021a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202110u; }
        else if (ctx->pc != 0x202110u) { ctx->pc = 0x202110u; }
    }
    if (ctx->pc != 0x202110u) { return; }
    ctx->pc = 0x202110u;
    // 0x202110: 0x7bbf0020
    ctx->pc = 0x202110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202114: 0x7bb10010
    ctx->pc = 0x202114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202118: 0x7bb00000
    ctx->pc = 0x202118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20211c: 0x2402ffff
    ctx->pc = 0x20211cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202120: 0x3e00008
    ctx->pc = 0x202120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202128u;
}
