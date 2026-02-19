#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DebugCamInit
// Address: 0x2134a8 - 0x2134dc
void DebugCamInit_0x2134a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2134a8u;

    // 0x2134a8: 0x27bdfff0
    ctx->pc = 0x2134a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2134ac: 0xffbf0000
    ctx->pc = 0x2134acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2134b0: 0x3c02003c
    ctx->pc = 0x2134b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2134b4: 0x3c04003c
    ctx->pc = 0x2134b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2134b8: 0x2484cb80
    ctx->pc = 0x2134b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953856));
    // 0x2134bc: 0xc084ce4
    ctx->pc = 0x2134BCu;
    SET_GPR_U32(ctx, 31, 0x2134C4u);
    ctx->pc = 0x2134C0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954288), GPR_U32(ctx, 4));
    ctx->pc = 0x213390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamReset_0x213390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2134C4u; }
    }
    if (ctx->pc != 0x2134C4u) { return; }
    ctx->pc = 0x2134C4u;
    // 0x2134c4: 0x3c030032
    ctx->pc = 0x2134c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2134c8: 0x24020001
    ctx->pc = 0x2134c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2134cc: 0xac62f7cc
    ctx->pc = 0x2134ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965196), GPR_U32(ctx, 2));
    // 0x2134d0: 0xdfbf0000
    ctx->pc = 0x2134d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2134d4: 0x3e00008
    ctx->pc = 0x2134D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2134D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2134DCu;
}
