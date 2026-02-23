#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BGTB__13EventCtrlTaskFv
// Address: 0x1e3170 - 0x1e31a0
void BGTB__13EventCtrlTaskFv_0x1e3170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BGTB__13EventCtrlTaskFv");


    ctx->pc = 0x1e3170u;

    // 0x1e3170: 0x27bdffe0
    ctx->pc = 0x1e3170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3174: 0x7fbf0010
    ctx->pc = 0x1e3174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3178: 0x7fb00000
    ctx->pc = 0x1e3178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e317c: 0x70808628
    ctx->pc = 0x1e317cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3180: 0x8e05000c
    ctx->pc = 0x1e3180u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3184: 0xc072318
    ctx->pc = 0x1E3184u;
    SET_GPR_U32(ctx, 31, 0x1E318Cu);
    ctx->pc = 0x1E3188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937408)));
    ctx->pc = 0x1C8C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        appointBG__11BGCtrlClassFPUi_0x1c8c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E318Cu; }
        else if (ctx->pc != 0x1E318Cu) { ctx->pc = 0x1E318Cu; }
    }
    if (ctx->pc != 0x1E318Cu) { return; }
    ctx->pc = 0x1E318Cu;
    // 0x1e318c: 0xae02000c
    ctx->pc = 0x1e318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e3190: 0x7bbf0010
    ctx->pc = 0x1e3190u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3194: 0x7bb00000
    ctx->pc = 0x1e3194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3198: 0x3e00008
    ctx->pc = 0x1E3198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E319Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E31A0u;
}
