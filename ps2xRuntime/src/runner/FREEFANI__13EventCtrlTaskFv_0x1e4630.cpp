#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEFANI__13EventCtrlTaskFv
// Address: 0x1e4630 - 0x1e46a8
void FREEFANI__13EventCtrlTaskFv_0x1e4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEFANI__13EventCtrlTaskFv");


    ctx->pc = 0x1e4630u;

    // 0x1e4630: 0x27bdffc0
    ctx->pc = 0x1e4630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e4634: 0x7fbf0030
    ctx->pc = 0x1e4634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e4638: 0x7fb20020
    ctx->pc = 0x1e4638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e463c: 0x7fb10010
    ctx->pc = 0x1e463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4640: 0x7fb00000
    ctx->pc = 0x1e4640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4644: 0x70808628
    ctx->pc = 0x1e4644u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4648: 0x70008e28
    ctx->pc = 0x1e4648u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e464c: 0x10000006
    ctx->pc = 0x1E464Cu;
    {
        const bool branch_taken_0x1e464c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4650u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e464c) {
            ctx->pc = 0x1E4668u;
            goto label_1e4668;
        }
    }
    ctx->pc = 0x1E4654u;
label_1e4654:
    // 0x1e4654: 0xc086660
    ctx->pc = 0x1E4654u;
    SET_GPR_U32(ctx, 31, 0x1E465Cu);
    ctx->pc = 0x1E4658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219980u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeFaniData__13EntryDatClassFi_0x219980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E465Cu; }
        else if (ctx->pc != 0x1E465Cu) { ctx->pc = 0x1E465Cu; }
    }
    if (ctx->pc != 0x1E465Cu) { return; }
    ctx->pc = 0x1E465Cu;
    // 0x1e465c: 0x26520004
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e4660: 0x26310001
    ctx->pc = 0x1e4660u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e4664: 0x0
    ctx->pc = 0x1e4664u;
    // NOP
label_1e4668:
    // 0x1e4668: 0x8e06000c
    ctx->pc = 0x1e4668u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e466c: 0x2403ffff
    ctx->pc = 0x1e466cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4670: 0xd22021
    ctx->pc = 0x1e4670u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1e4674: 0x8c850004
    ctx->pc = 0x1e4674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4678: 0x54a3fff6
    ctx->pc = 0x1E4678u;
    {
        const bool branch_taken_0x1e4678 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4678) {
            ctx->pc = 0x1E467Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
            ctx->pc = 0x1E4654u;
            goto label_1e4654;
        }
    }
    ctx->pc = 0x1E4680u;
    // 0x1e4680: 0x26230002
    ctx->pc = 0x1e4680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e4684: 0x31880
    ctx->pc = 0x1e4684u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4688: 0xc31821
    ctx->pc = 0x1e4688u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e468c: 0xae03000c
    ctx->pc = 0x1e468cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4690: 0x7bbf0030
    ctx->pc = 0x1e4690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4694: 0x7bb20020
    ctx->pc = 0x1e4694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4698: 0x7bb10010
    ctx->pc = 0x1e4698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e469c: 0x7bb00000
    ctx->pc = 0x1e469cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e46a0: 0x3e00008
    ctx->pc = 0x1E46A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E46A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4654u: goto label_1e4654;
            case 0x1E4668u: goto label_1e4668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E46A8u;
}
