#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SNDONSK__13EventCtrlTaskFv
// Address: 0x1e3530 - 0x1e3584
void SNDONSK__13EventCtrlTaskFv_0x1e3530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SNDONSK__13EventCtrlTaskFv");


    ctx->pc = 0x1e3530u;

    // 0x1e3530: 0x27bdffe0
    ctx->pc = 0x1e3530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3534: 0x7fbf0010
    ctx->pc = 0x1e3534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3538: 0x7fb00000
    ctx->pc = 0x1e3538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e353c: 0x8f838ce8
    ctx->pc = 0x1e353cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
    // 0x1e3540: 0x14600009
    ctx->pc = 0x1E3540u;
    {
        const bool branch_taken_0x1e3540 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E3544u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e3540) {
            ctx->pc = 0x1E3568u;
            goto label_1e3568;
        }
    }
    ctx->pc = 0x1E3548u;
    // 0x1e3548: 0x8e03000c
    ctx->pc = 0x1e3548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e354c: 0x3c020051
    ctx->pc = 0x1e354cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3550: 0x8c650004
    ctx->pc = 0x1e3550u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3554: 0x8c660008
    ctx->pc = 0x1e3554u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e3558: 0x8c67000c
    ctx->pc = 0x1e3558u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e355c: 0x8c680010
    ctx->pc = 0x1e355cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e3560: 0xc086018
    ctx->pc = 0x1E3560u;
    SET_GPR_U32(ctx, 31, 0x1E3568u);
    ctx->pc = 0x1E3564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3568u; }
        else if (ctx->pc != 0x1E3568u) { ctx->pc = 0x1E3568u; }
    }
    if (ctx->pc != 0x1E3568u) { return; }
    ctx->pc = 0x1E3568u;
label_1e3568:
    // 0x1e3568: 0x8e03000c
    ctx->pc = 0x1e3568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e356c: 0x24630014
    ctx->pc = 0x1e356cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20));
    // 0x1e3570: 0xae03000c
    ctx->pc = 0x1e3570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3574: 0x7bbf0010
    ctx->pc = 0x1e3574u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3578: 0x7bb00000
    ctx->pc = 0x1e3578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e357c: 0x3e00008
    ctx->pc = 0x1E357Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3568u: goto label_1e3568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3584u;
}
