#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LIGHTCTRL__13EventCtrlTaskFv
// Address: 0x1e30c0 - 0x1e30f0
void LIGHTCTRL__13EventCtrlTaskFv_0x1e30c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LIGHTCTRL__13EventCtrlTaskFv");


    ctx->pc = 0x1e30c0u;

    // 0x1e30c0: 0x27bdffe0
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e30c4: 0x7fbf0010
    ctx->pc = 0x1e30c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e30c8: 0x7fb00000
    ctx->pc = 0x1e30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e30cc: 0x70808628
    ctx->pc = 0x1e30ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e30d0: 0x8e05000c
    ctx->pc = 0x1e30d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e30d4: 0xc07c3c8
    ctx->pc = 0x1E30D4u;
    SET_GPR_U32(ctx, 31, 0x1E30DCu);
    ctx->pc = 0x1E30D8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEvent__13LightCtrlTaskFPUi_0x1f0f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E30DCu; }
        else if (ctx->pc != 0x1E30DCu) { ctx->pc = 0x1E30DCu; }
    }
    if (ctx->pc != 0x1E30DCu) { return; }
    ctx->pc = 0x1E30DCu;
    // 0x1e30dc: 0xae02000c
    ctx->pc = 0x1e30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e30e0: 0x7bbf0010
    ctx->pc = 0x1e30e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e30e4: 0x7bb00000
    ctx->pc = 0x1e30e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e30e8: 0x3e00008
    ctx->pc = 0x1E30E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E30ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E30F0u;
}
