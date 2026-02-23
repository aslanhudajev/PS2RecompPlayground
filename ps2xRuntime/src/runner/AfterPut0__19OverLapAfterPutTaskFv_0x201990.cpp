#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AfterPut0__19OverLapAfterPutTaskFv
// Address: 0x201990 - 0x2019c4
void AfterPut0__19OverLapAfterPutTaskFv_0x201990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AfterPut0__19OverLapAfterPutTaskFv");


    ctx->pc = 0x201990u;

    // 0x201990: 0x27bdfff0
    ctx->pc = 0x201990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201994: 0x3c020027
    ctx->pc = 0x201994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x201998: 0x7fbf0000
    ctx->pc = 0x201998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20199c: 0x70803628
    ctx->pc = 0x20199cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2019a0: 0x24422538
    ctx->pc = 0x2019a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9528));
    // 0x2019a4: 0x8c840000
    ctx->pc = 0x2019a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2019a8: 0xc068fd8
    ctx->pc = 0x2019A8u;
    SET_GPR_U32(ctx, 31, 0x2019B0u);
    ctx->pc = 0x2019ACu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019B0u; }
        else if (ctx->pc != 0x2019B0u) { ctx->pc = 0x2019B0u; }
    }
    if (ctx->pc != 0x2019B0u) { return; }
    ctx->pc = 0x2019B0u;
    // 0x2019b0: 0xc071f24
    ctx->pc = 0x2019B0u;
    SET_GPR_U32(ctx, 31, 0x2019B8u);
    ctx->pc = 0x1C7C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_BGCtrlTask__Fv_0x1c7c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019B8u; }
        else if (ctx->pc != 0x2019B8u) { ctx->pc = 0x2019B8u; }
    }
    if (ctx->pc != 0x2019B8u) { return; }
    ctx->pc = 0x2019B8u;
    // 0x2019b8: 0x7bbf0000
    ctx->pc = 0x2019b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2019bc: 0x3e00008
    ctx->pc = 0x2019BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019C4u;
}
