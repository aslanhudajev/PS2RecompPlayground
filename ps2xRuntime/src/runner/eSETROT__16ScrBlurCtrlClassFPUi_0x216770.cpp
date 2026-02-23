#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETROT__16ScrBlurCtrlClassFPUi
// Address: 0x216770 - 0x21679c
void eSETROT__16ScrBlurCtrlClassFPUi_0x216770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETROT__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216770u;

    // 0x216770: 0x27bdffe0
    ctx->pc = 0x216770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216774: 0x7fbf0010
    ctx->pc = 0x216774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216778: 0x7fb00000
    ctx->pc = 0x216778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21677c: 0x8ca40008
    ctx->pc = 0x21677cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x216780: 0xc06c444
    ctx->pc = 0x216780u;
    SET_GPR_U32(ctx, 31, 0x216788u);
    ctx->pc = 0x216784u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetRot_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216788u; }
        else if (ctx->pc != 0x216788u) { ctx->pc = 0x216788u; }
    }
    if (ctx->pc != 0x216788u) { return; }
    ctx->pc = 0x216788u;
    // 0x216788: 0x2602000c
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x21678c: 0x7bbf0010
    ctx->pc = 0x21678cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216790: 0x7bb00000
    ctx->pc = 0x216790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216794: 0x3e00008
    ctx->pc = 0x216794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21679Cu;
}
