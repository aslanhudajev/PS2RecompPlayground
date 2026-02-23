#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CHGSM__13EventCtrlTaskFv
// Address: 0x1e3130 - 0x1e316c
void CHGSM__13EventCtrlTaskFv_0x1e3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CHGSM__13EventCtrlTaskFv");


    ctx->pc = 0x1e3130u;

    // 0x1e3130: 0x27bdffe0
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3134: 0x7fbf0010
    ctx->pc = 0x1e3134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3138: 0x7fb00000
    ctx->pc = 0x1e3138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e313c: 0x8c82000c
    ctx->pc = 0x1e313cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3140: 0x70808628
    ctx->pc = 0x1e3140u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3144: 0x8f848d68
    ctx->pc = 0x1e3144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    // 0x1e3148: 0xc080af4
    ctx->pc = 0x1E3148u;
    SET_GPR_U32(ctx, 31, 0x1E3150u);
    ctx->pc = 0x1E314Cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x202BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChgMode__14GameScreenTaskFc_0x202bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3150u; }
        else if (ctx->pc != 0x1E3150u) { ctx->pc = 0x1E3150u; }
    }
    if (ctx->pc != 0x1E3150u) { return; }
    ctx->pc = 0x1E3150u;
    // 0x1e3150: 0x8e03000c
    ctx->pc = 0x1e3150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3154: 0x24630008
    ctx->pc = 0x1e3154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3158: 0xae03000c
    ctx->pc = 0x1e3158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e315c: 0x7bbf0010
    ctx->pc = 0x1e315cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3160: 0x7bb00000
    ctx->pc = 0x1e3160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3164: 0x3e00008
    ctx->pc = 0x1E3164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3168u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E316Cu;
}
