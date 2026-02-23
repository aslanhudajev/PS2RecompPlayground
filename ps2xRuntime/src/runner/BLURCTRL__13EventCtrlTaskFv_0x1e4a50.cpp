#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BLURCTRL__13EventCtrlTaskFv
// Address: 0x1e4a50 - 0x1e4a84
void BLURCTRL__13EventCtrlTaskFv_0x1e4a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BLURCTRL__13EventCtrlTaskFv");


    ctx->pc = 0x1e4a50u;

    // 0x1e4a50: 0x27bdffe0
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4a54: 0x7fbf0010
    ctx->pc = 0x1e4a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4a58: 0x7fb00000
    ctx->pc = 0x1e4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4a5c: 0x70808628
    ctx->pc = 0x1e4a5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4a60: 0x8e05000c
    ctx->pc = 0x1e4a60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4a64: 0x3c020051
    ctx->pc = 0x1e4a64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4a68: 0xc0855b4
    ctx->pc = 0x1E4A68u;
    SET_GPR_U32(ctx, 31, 0x1E4A70u);
    ctx->pc = 0x1E4A6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13504));
    ctx->pc = 0x2156D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__16PostRendMgrClassFPUi_0x2156d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A70u; }
        else if (ctx->pc != 0x1E4A70u) { ctx->pc = 0x1E4A70u; }
    }
    if (ctx->pc != 0x1E4A70u) { return; }
    ctx->pc = 0x1E4A70u;
    // 0x1e4a70: 0xae02000c
    ctx->pc = 0x1e4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e4a74: 0x7bbf0010
    ctx->pc = 0x1e4a74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4a78: 0x7bb00000
    ctx->pc = 0x1e4a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4a7c: 0x3e00008
    ctx->pc = 0x1E4A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4A84u;
}
