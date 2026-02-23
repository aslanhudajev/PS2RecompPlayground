#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYOSKNAME__13EventCtrlTaskFv
// Address: 0x1e43b0 - 0x1e4428
void ENTRYOSKNAME__13EventCtrlTaskFv_0x1e43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYOSKNAME__13EventCtrlTaskFv");


    ctx->pc = 0x1e43b0u;

    // 0x1e43b0: 0x27bdffc0
    ctx->pc = 0x1e43b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e43b4: 0x7fbf0030
    ctx->pc = 0x1e43b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e43b8: 0x7fb20020
    ctx->pc = 0x1e43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e43bc: 0x7fb10010
    ctx->pc = 0x1e43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e43c0: 0x7fb00000
    ctx->pc = 0x1e43c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e43c4: 0x70808628
    ctx->pc = 0x1e43c4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e43c8: 0x70008e28
    ctx->pc = 0x1e43c8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e43cc: 0x10000006
    ctx->pc = 0x1E43CCu;
    {
        const bool branch_taken_0x1e43cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E43D0u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e43cc) {
            ctx->pc = 0x1E43E8u;
            goto label_1e43e8;
        }
    }
    ctx->pc = 0x1E43D4u;
label_1e43d4:
    // 0x1e43d4: 0xc086610
    ctx->pc = 0x1E43D4u;
    SET_GPR_U32(ctx, 31, 0x1E43DCu);
    ctx->pc = 0x1E43D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219840u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName__13EntryDatClassFi_0x219840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43DCu; }
        else if (ctx->pc != 0x1E43DCu) { ctx->pc = 0x1E43DCu; }
    }
    if (ctx->pc != 0x1E43DCu) { return; }
    ctx->pc = 0x1E43DCu;
    // 0x1e43dc: 0x26520004
    ctx->pc = 0x1e43dcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e43e0: 0x26310001
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e43e4: 0x0
    ctx->pc = 0x1e43e4u;
    // NOP
label_1e43e8:
    // 0x1e43e8: 0x8e06000c
    ctx->pc = 0x1e43e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e43ec: 0x2403ffff
    ctx->pc = 0x1e43ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e43f0: 0xd22021
    ctx->pc = 0x1e43f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1e43f4: 0x8c850004
    ctx->pc = 0x1e43f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e43f8: 0x54a3fff6
    ctx->pc = 0x1E43F8u;
    {
        const bool branch_taken_0x1e43f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e43f8) {
            ctx->pc = 0x1E43FCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
            ctx->pc = 0x1E43D4u;
            goto label_1e43d4;
        }
    }
    ctx->pc = 0x1E4400u;
    // 0x1e4400: 0x26230002
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e4404: 0x31880
    ctx->pc = 0x1e4404u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4408: 0xc31821
    ctx->pc = 0x1e4408u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e440c: 0xae03000c
    ctx->pc = 0x1e440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4410: 0x7bbf0030
    ctx->pc = 0x1e4410u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4414: 0x7bb20020
    ctx->pc = 0x1e4414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4418: 0x7bb10010
    ctx->pc = 0x1e4418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e441c: 0x7bb00000
    ctx->pc = 0x1e441cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4420: 0x3e00008
    ctx->pc = 0x1E4420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4424u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E43D4u: goto label_1e43d4;
            case 0x1E43E8u: goto label_1e43e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4428u;
}
