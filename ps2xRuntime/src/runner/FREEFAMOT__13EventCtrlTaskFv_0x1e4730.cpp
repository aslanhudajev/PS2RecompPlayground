#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEFAMOT__13EventCtrlTaskFv
// Address: 0x1e4730 - 0x1e47a8
void FREEFAMOT__13EventCtrlTaskFv_0x1e4730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEFAMOT__13EventCtrlTaskFv");


    ctx->pc = 0x1e4730u;

    // 0x1e4730: 0x27bdffc0
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e4734: 0x7fbf0030
    ctx->pc = 0x1e4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e4738: 0x7fb20020
    ctx->pc = 0x1e4738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e473c: 0x7fb10010
    ctx->pc = 0x1e473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4740: 0x7fb00000
    ctx->pc = 0x1e4740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4744: 0x70808628
    ctx->pc = 0x1e4744u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4748: 0x70008e28
    ctx->pc = 0x1e4748u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e474c: 0x10000006
    ctx->pc = 0x1E474Cu;
    {
        const bool branch_taken_0x1e474c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4750u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e474c) {
            ctx->pc = 0x1E4768u;
            goto label_1e4768;
        }
    }
    ctx->pc = 0x1E4754u;
label_1e4754:
    // 0x1e4754: 0xc086680
    ctx->pc = 0x1E4754u;
    SET_GPR_U32(ctx, 31, 0x1E475Cu);
    ctx->pc = 0x1E4758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeFaMotData__13EntryDatClassFi_0x219a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E475Cu; }
        else if (ctx->pc != 0x1E475Cu) { ctx->pc = 0x1E475Cu; }
    }
    if (ctx->pc != 0x1E475Cu) { return; }
    ctx->pc = 0x1E475Cu;
    // 0x1e475c: 0x26520004
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e4760: 0x26310001
    ctx->pc = 0x1e4760u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e4764: 0x0
    ctx->pc = 0x1e4764u;
    // NOP
label_1e4768:
    // 0x1e4768: 0x8e06000c
    ctx->pc = 0x1e4768u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e476c: 0x2403ffff
    ctx->pc = 0x1e476cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4770: 0xd22021
    ctx->pc = 0x1e4770u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1e4774: 0x8c850004
    ctx->pc = 0x1e4774u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4778: 0x54a3fff6
    ctx->pc = 0x1E4778u;
    {
        const bool branch_taken_0x1e4778 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4778) {
            ctx->pc = 0x1E477Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
            ctx->pc = 0x1E4754u;
            goto label_1e4754;
        }
    }
    ctx->pc = 0x1E4780u;
    // 0x1e4780: 0x26230002
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1e4784: 0x31880
    ctx->pc = 0x1e4784u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4788: 0xc31821
    ctx->pc = 0x1e4788u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e478c: 0xae03000c
    ctx->pc = 0x1e478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4790: 0x7bbf0030
    ctx->pc = 0x1e4790u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4794: 0x7bb20020
    ctx->pc = 0x1e4794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4798: 0x7bb10010
    ctx->pc = 0x1e4798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e479c: 0x7bb00000
    ctx->pc = 0x1e479cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e47a0: 0x3e00008
    ctx->pc = 0x1E47A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E47A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4754u: goto label_1e4754;
            case 0x1E4768u: goto label_1e4768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E47A8u;
}
