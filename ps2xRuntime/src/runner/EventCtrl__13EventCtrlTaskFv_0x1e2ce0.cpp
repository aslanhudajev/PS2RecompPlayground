#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EventCtrl__13EventCtrlTaskFv
// Address: 0x1e2ce0 - 0x1e2d0c
void EventCtrl__13EventCtrlTaskFv_0x1e2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EventCtrl__13EventCtrlTaskFv");


    ctx->pc = 0x1e2ce0u;

    // 0x1e2ce0: 0x27bdfff0
    ctx->pc = 0x1e2ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2ce4: 0x3c020027
    ctx->pc = 0x1e2ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e2ce8: 0x7fbf0000
    ctx->pc = 0x1e2ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e2cec: 0x70803628
    ctx->pc = 0x1e2cecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e2cf0: 0x2442a8c0
    ctx->pc = 0x1e2cf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x1e2cf4: 0x8c840000
    ctx->pc = 0x1e2cf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e2cf8: 0xc068fd8
    ctx->pc = 0x1E2CF8u;
    SET_GPR_U32(ctx, 31, 0x1E2D00u);
    ctx->pc = 0x1E2CFCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2D00u; }
        else if (ctx->pc != 0x1E2D00u) { ctx->pc = 0x1E2D00u; }
    }
    if (ctx->pc != 0x1E2D00u) { return; }
    ctx->pc = 0x1E2D00u;
    // 0x1e2d00: 0x7bbf0000
    ctx->pc = 0x1e2d00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2d04: 0x3e00008
    ctx->pc = 0x1E2D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2D08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2D0Cu;
}
