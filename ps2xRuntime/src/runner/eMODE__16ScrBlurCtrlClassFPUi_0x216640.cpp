#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eMODE__16ScrBlurCtrlClassFPUi
// Address: 0x216640 - 0x216674
void eMODE__16ScrBlurCtrlClassFPUi_0x216640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eMODE__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x216640u;

    // 0x216640: 0x27bdffe0
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216644: 0x7fbf0010
    ctx->pc = 0x216644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216648: 0x7fb00000
    ctx->pc = 0x216648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21664c: 0x8ca20008
    ctx->pc = 0x21664cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x216650: 0xac820004
    ctx->pc = 0x216650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x216654: 0x8c840004
    ctx->pc = 0x216654u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216658: 0xc06c43c
    ctx->pc = 0x216658u;
    SET_GPR_U32(ctx, 31, 0x216660u);
    ctx->pc = 0x21665Cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B10F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetBlendMode_0x1b10f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216660u; }
        else if (ctx->pc != 0x216660u) { ctx->pc = 0x216660u; }
    }
    if (ctx->pc != 0x216660u) { return; }
    ctx->pc = 0x216660u;
    // 0x216660: 0x2602000c
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 12));
    // 0x216664: 0x7bbf0010
    ctx->pc = 0x216664u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216668: 0x7bb00000
    ctx->pc = 0x216668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21666c: 0x3e00008
    ctx->pc = 0x21666Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216674u;
}
