#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayMovie
// Address: 0x2dce70 - 0x2dceb8
void PlayMovie_0x2dce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dce70u;

    // 0x2dce70: 0x27bdfff0
    ctx->pc = 0x2dce70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dce74: 0xffbf0000
    ctx->pc = 0x2dce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dce78: 0xc0b724a
    ctx->pc = 0x2DCE78u;
    SET_GPR_U32(ctx, 31, 0x2DCE80u);
    ctx->pc = 0x2DC928u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitMovie_0x2dc928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE80u; }
    }
    if (ctx->pc != 0x2DCE80u) { return; }
    ctx->pc = 0x2DCE80u;
label_2dce80:
    // 0x2dce80: 0xc0b72fa
    ctx->pc = 0x2DCE80u;
    SET_GPR_U32(ctx, 31, 0x2DCE88u);
    ctx->pc = 0x2DCBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeMovie_0x2dcbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCE88u; }
    }
    if (ctx->pc != 0x2DCE88u) { return; }
    ctx->pc = 0x2DCE88u;
    // 0x2dce88: 0x1440fffd
    ctx->pc = 0x2DCE88u;
    {
        const bool branch_taken_0x2dce88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dce88) {
            ctx->pc = 0x2DCE80u;
            goto label_2dce80;
        }
    }
    ctx->pc = 0x2DCE90u;
    // 0x2dce90: 0x10000003
    ctx->pc = 0x2DCE90u;
    {
        const bool branch_taken_0x2dce90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dce90) {
            ctx->pc = 0x2DCEA0u;
            goto label_2dcea0;
        }
    }
    ctx->pc = 0x2DCE98u;
label_2dce98:
    // 0x2dce98: 0xc0b72fa
    ctx->pc = 0x2DCE98u;
    SET_GPR_U32(ctx, 31, 0x2DCEA0u);
    ctx->pc = 0x2DCBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ServeMovie_0x2dcbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEA0u; }
    }
    if (ctx->pc != 0x2DCEA0u) { return; }
    ctx->pc = 0x2DCEA0u;
label_2dcea0:
    // 0x2dcea0: 0xc0b731e
    ctx->pc = 0x2DCEA0u;
    SET_GPR_U32(ctx, 31, 0x2DCEA8u);
    ctx->pc = 0x2DCC78u;
    {
        const uint32_t __entryPc = ctx->pc;
        KillMovie_0x2dcc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DCEA8u; }
    }
    if (ctx->pc != 0x2DCEA8u) { return; }
    ctx->pc = 0x2DCEA8u;
    // 0x2dcea8: 0x1040fffb
    ctx->pc = 0x2DCEA8u;
    {
        const bool branch_taken_0x2dcea8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DCEACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2dcea8) {
            ctx->pc = 0x2DCE98u;
            goto label_2dce98;
        }
    }
    ctx->pc = 0x2DCEB0u;
    // 0x2dceb0: 0x3e00008
    ctx->pc = 0x2DCEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCEB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DCE80u: goto label_2dce80;
            case 0x2DCE98u: goto label_2dce98;
            case 0x2DCEA0u: goto label_2dcea0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DCEB8u;
}
