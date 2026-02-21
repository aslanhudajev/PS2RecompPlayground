#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecBeginPut
// Address: 0x2deb68 - 0x2debd8
void audioDecBeginPut_0x2deb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2deb68u;

    // 0x2deb68: 0x8c82003c
    ctx->pc = 0x2deb68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2deb6c: 0x8c830038
    ctx->pc = 0x2deb6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2deb70: 0x434823
    ctx->pc = 0x2deb70u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2deb74: 0x8c830034
    ctx->pc = 0x2deb74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2deb78: 0x431023
    ctx->pc = 0x2deb78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2deb7c: 0x49102a
    ctx->pc = 0x2deb7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 9)));
    // 0x2deb80: 0x14400007
    ctx->pc = 0x2DEB80u;
    {
        const bool branch_taken_0x2deb80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DEB84u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x2deb80) {
            ctx->pc = 0x2DEBA0u;
            goto label_2deba0;
        }
    }
    ctx->pc = 0x2DEB88u;
    // 0x2deb88: 0x431021
    ctx->pc = 0x2deb88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2deb8c: 0xaca20000
    ctx->pc = 0x2deb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2deb90: 0xacc90000
    ctx->pc = 0x2deb90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2deb94: 0xace00000
    ctx->pc = 0x2deb94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2deb98: 0x3e00008
    ctx->pc = 0x2DEB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DEBA0u: goto label_2deba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DEBA0u;
label_2deba0:
    // 0x2deba0: 0x431021
    ctx->pc = 0x2deba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2deba4: 0xaca20000
    ctx->pc = 0x2deba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2deba8: 0x8c82003c
    ctx->pc = 0x2deba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2debac: 0x8c830034
    ctx->pc = 0x2debacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2debb0: 0x431023
    ctx->pc = 0x2debb0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2debb4: 0xacc20000
    ctx->pc = 0x2debb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2debb8: 0x8c820030
    ctx->pc = 0x2debb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2debbc: 0xace20000
    ctx->pc = 0x2debbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2debc0: 0x8c82003c
    ctx->pc = 0x2debc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2debc4: 0x8c830034
    ctx->pc = 0x2debc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2debc8: 0x431023
    ctx->pc = 0x2debc8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2debcc: 0x1221023
    ctx->pc = 0x2debccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2debd0: 0x3e00008
    ctx->pc = 0x2DEBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEBD4u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DEBA0u: goto label_2deba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DEBD8u;
}
