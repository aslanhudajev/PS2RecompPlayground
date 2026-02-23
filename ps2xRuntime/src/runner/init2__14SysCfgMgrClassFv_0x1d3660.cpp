#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init2__14SysCfgMgrClassFv
// Address: 0x1d3660 - 0x1d36a4
void init2__14SysCfgMgrClassFv_0x1d3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init2__14SysCfgMgrClassFv");


    ctx->pc = 0x1d3660u;

    // 0x1d3660: 0x27bdffe0
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3664: 0x7fbf0010
    ctx->pc = 0x1d3664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3668: 0x7fb00000
    ctx->pc = 0x1d3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d366c: 0xc057290
    ctx->pc = 0x1D366Cu;
    SET_GPR_U32(ctx, 31, 0x1D3674u);
    ctx->pc = 0x1D3670u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15CA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcInit_0x15ca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3674u; }
        else if (ctx->pc != 0x1D3674u) { ctx->pc = 0x1D3674u; }
    }
    if (ctx->pc != 0x1D3674u) { return; }
    ctx->pc = 0x1D3674u;
    // 0x1d3674: 0xc074e0c
    ctx->pc = 0x1D3674u;
    SET_GPR_U32(ctx, 31, 0x1D367Cu);
    ctx->pc = 0x1D3678u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D3830u;
    {
        const uint32_t __entryPc = ctx->pc;
        clrAll__14SysCfgMgrClassFv_0x1d3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D367Cu; }
        else if (ctx->pc != 0x1D367Cu) { ctx->pc = 0x1D367Cu; }
    }
    if (ctx->pc != 0x1D367Cu) { return; }
    ctx->pc = 0x1D367Cu;
    // 0x1d367c: 0xae000008
    ctx->pc = 0x1d367cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d3680: 0xae000004
    ctx->pc = 0x1d3680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d3684: 0xae000010
    ctx->pc = 0x1d3684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d3688: 0x72002628
    ctx->pc = 0x1d3688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d368c: 0xc074dac
    ctx->pc = 0x1D368Cu;
    SET_GPR_U32(ctx, 31, 0x1D3694u);
    ctx->pc = 0x1D3690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x1D36B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14SysCfgMgrClassFv_0x1d36b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3694u; }
        else if (ctx->pc != 0x1D3694u) { ctx->pc = 0x1D3694u; }
    }
    if (ctx->pc != 0x1D3694u) { return; }
    ctx->pc = 0x1D3694u;
    // 0x1d3694: 0x7bbf0010
    ctx->pc = 0x1d3694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3698: 0x7bb00000
    ctx->pc = 0x1d3698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d369c: 0x3e00008
    ctx->pc = 0x1D369Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D36A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D36A4u;
}
