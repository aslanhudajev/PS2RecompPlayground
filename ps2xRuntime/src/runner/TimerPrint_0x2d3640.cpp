#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TimerPrint
// Address: 0x2d3640 - 0x2d36b0
void TimerPrint_0x2d3640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3640u;

    // 0x2d3640: 0x27bdffe0
    ctx->pc = 0x2d3640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3644: 0xffbf0010
    ctx->pc = 0x2d3644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d3648: 0xffb00000
    ctx->pc = 0x2d3648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d364c: 0x3c02003a
    ctx->pc = 0x2d364cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3650: 0x8c422d90
    ctx->pc = 0x2d3650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11664)));
    // 0x2d3654: 0x14400013
    ctx->pc = 0x2D3654u;
    {
        const bool branch_taken_0x2d3654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D3658u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d3654) {
            ctx->pc = 0x2D36A4u;
            goto label_2d36a4;
        }
    }
    ctx->pc = 0x2D365Cu;
    // 0x2d365c: 0xc0b4a86
    ctx->pc = 0x2D365Cu;
    SET_GPR_U32(ctx, 31, 0x2D3664u);
    ctx->pc = 0x2D3660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x2D2A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_timer_funcFYB_0x2d2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3664u; }
    }
    if (ctx->pc != 0x2D3664u) { return; }
    ctx->pc = 0x2D3664u;
    // 0x2d3664: 0x40024800
    ctx->pc = 0x2d3664u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2d3668: 0x3c10003a
    ctx->pc = 0x2d3668u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d366c: 0x26102050
    ctx->pc = 0x2d366cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8272));
    // 0x2d3670: 0xae020178
    ctx->pc = 0x2d3670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x2d3674: 0xc0b4bd0
    ctx->pc = 0x2D3674u;
    SET_GPR_U32(ctx, 31, 0x2D367Cu);
    ctx->pc = 0x2D3678u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2D2F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        timer_print_0x2d2f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D367Cu; }
    }
    if (ctx->pc != 0x2D367Cu) { return; }
    ctx->pc = 0x2D367Cu;
    // 0x2d367c: 0x40024800
    ctx->pc = 0x2d367cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2d3680: 0x8e030178
    ctx->pc = 0x2d3680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x2d3684: 0x431023
    ctx->pc = 0x2d3684u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3688: 0x8e030170
    ctx->pc = 0x2d3688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x2d368c: 0x431021
    ctx->pc = 0x2d368cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3690: 0xae020170
    ctx->pc = 0x2d3690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x2d3694: 0x8e020174
    ctx->pc = 0x2d3694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x2d3698: 0x24420001
    ctx->pc = 0x2d3698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d369c: 0xae020174
    ctx->pc = 0x2d369cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x2d36a0: 0xdfbf0010
    ctx->pc = 0x2d36a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d36a4:
    // 0x2d36a4: 0xdfb00000
    ctx->pc = 0x2d36a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d36a8: 0x3e00008
    ctx->pc = 0x2D36A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D36ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D36A4u: goto label_2d36a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D36B0u;
}
