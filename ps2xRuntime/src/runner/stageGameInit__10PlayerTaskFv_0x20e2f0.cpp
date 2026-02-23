#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: stageGameInit__10PlayerTaskFv
// Address: 0x20e2f0 - 0x20e330
void stageGameInit__10PlayerTaskFv_0x20e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("stageGameInit__10PlayerTaskFv");


    ctx->pc = 0x20e2f0u;

    // 0x20e2f0: 0x27bdffe0
    ctx->pc = 0x20e2f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e2f4: 0x7fbf0010
    ctx->pc = 0x20e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20e2f8: 0x7fb00000
    ctx->pc = 0x20e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e2fc: 0x70808628
    ctx->pc = 0x20e2fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20e300: 0xc083c24
    ctx->pc = 0x20E300u;
    SET_GPR_U32(ctx, 31, 0x20E308u);
    ctx->pc = 0x20E304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x20F090u;
    {
        const uint32_t __entryPc = ctx->pc;
        startInit__10PlayerTaskFi_0x20f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E308u; }
        else if (ctx->pc != 0x20E308u) { ctx->pc = 0x20E308u; }
    }
    if (ctx->pc != 0x20E308u) { return; }
    ctx->pc = 0x20E308u;
    // 0x20e308: 0x3c020027
    ctx->pc = 0x20e308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20e30c: 0x244232e8
    ctx->pc = 0x20e30cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13032));
    // 0x20e310: 0x8c450008
    ctx->pc = 0x20e310u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20e314: 0x8e041cb4
    ctx->pc = 0x20e314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20e318: 0xc068fd8
    ctx->pc = 0x20E318u;
    SET_GPR_U32(ctx, 31, 0x20E320u);
    ctx->pc = 0x20E31Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E320u; }
        else if (ctx->pc != 0x20E320u) { ctx->pc = 0x20E320u; }
    }
    if (ctx->pc != 0x20E320u) { return; }
    ctx->pc = 0x20E320u;
    // 0x20e320: 0x7bbf0010
    ctx->pc = 0x20e320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e324: 0x7bb00000
    ctx->pc = 0x20e324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e328: 0x3e00008
    ctx->pc = 0x20E328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E32Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20E330u;
}
