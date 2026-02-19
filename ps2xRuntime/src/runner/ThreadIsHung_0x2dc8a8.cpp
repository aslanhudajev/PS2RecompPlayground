#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ThreadIsHung
// Address: 0x2dc8a8 - 0x2dc924
void ThreadIsHung_0x2dc8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc8a8u;

    // 0x2dc8a8: 0x27bdffe0
    ctx->pc = 0x2dc8a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc8ac: 0xffbf0010
    ctx->pc = 0x2dc8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc8b0: 0xffb00000
    ctx->pc = 0x2dc8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc8b4: 0x3c02003a
    ctx->pc = 0x2dc8b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc8b8: 0x8c422d9c
    ctx->pc = 0x2dc8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 11676)));
    // 0x2dc8bc: 0x30420002
    ctx->pc = 0x2dc8bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2dc8c0: 0x10400003
    ctx->pc = 0x2DC8C0u;
    {
        const bool branch_taken_0x2dc8c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC8C4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8c0) {
            ctx->pc = 0x2DC8D0u;
            goto label_2dc8d0;
        }
    }
    ctx->pc = 0x2DC8C8u;
    // 0x2dc8c8: 0x10000011
    ctx->pc = 0x2DC8C8u;
    {
        const bool branch_taken_0x2dc8c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC8CCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2dc8c8) {
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC8D0u;
label_2dc8d0:
    // 0x2dc8d0: 0x3c02003a
    ctx->pc = 0x2dc8d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc8d4: 0x3c03003a
    ctx->pc = 0x2dc8d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dc8d8: 0x8c4222f8
    ctx->pc = 0x2dc8d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x2dc8dc: 0x8c6329e0
    ctx->pc = 0x2dc8dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x2dc8e0: 0x431023
    ctx->pc = 0x2dc8e0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc8e4: 0x2c421771
    ctx->pc = 0x2dc8e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 6001));
    // 0x2dc8e8: 0x1440000a
    ctx->pc = 0x2DC8E8u;
    {
        const bool branch_taken_0x2dc8e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DC8ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8e8) {
            ctx->pc = 0x2DC914u;
            goto label_2dc914;
        }
    }
    ctx->pc = 0x2DC8F0u;
    // 0x2dc8f0: 0x24100001
    ctx->pc = 0x2dc8f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc8f4: 0x3c02003a
    ctx->pc = 0x2dc8f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc8f8: 0x8c432d9c
    ctx->pc = 0x2dc8f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 11676)));
    // 0x2dc8fc: 0x34630002
    ctx->pc = 0x2dc8fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x2dc900: 0xac432d9c
    ctx->pc = 0x2dc900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11676), GPR_U32(ctx, 3));
    // 0x2dc904: 0x3c04003c
    ctx->pc = 0x2dc904u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dc908: 0xc0b492e
    ctx->pc = 0x2DC908u;
    SET_GPR_U32(ctx, 31, 0x2DC910u);
    ctx->pc = 0x2DC90Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935344));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC910u; }
    }
    if (ctx->pc != 0x2DC910u) { return; }
    ctx->pc = 0x2DC910u;
label_2dc910:
    // 0x2dc910: 0x200102d
    ctx->pc = 0x2dc910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dc914:
    // 0x2dc914: 0xdfbf0010
    ctx->pc = 0x2dc914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc918: 0xdfb00000
    ctx->pc = 0x2dc918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc91c: 0x3e00008
    ctx->pc = 0x2DC91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC920u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DC8D0u: goto label_2dc8d0;
            case 0x2DC910u: goto label_2dc910;
            case 0x2DC914u: goto label_2dc914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DC924u;
}
