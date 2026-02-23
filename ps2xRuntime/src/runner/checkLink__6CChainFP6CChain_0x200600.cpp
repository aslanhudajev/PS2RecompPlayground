#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkLink__6CChainFP6CChain
// Address: 0x200600 - 0x20063c
void checkLink__6CChainFP6CChain_0x200600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkLink__6CChainFP6CChain");


    ctx->pc = 0x200600u;

    // 0x200600: 0x84860024
    ctx->pc = 0x200600u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x200604: 0x10000008
    ctx->pc = 0x200604u;
    {
        const bool branch_taken_0x200604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x200608u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x200604) {
            ctx->pc = 0x200628u;
            goto label_200628;
        }
    }
    ctx->pc = 0x20060Cu;
label_20060c:
    // 0x20060c: 0x8c820048
    ctx->pc = 0x20060cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x200610: 0x54450003
    ctx->pc = 0x200610u;
    {
        const bool branch_taken_0x200610 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x200610) {
            ctx->pc = 0x200614u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
            ctx->pc = 0x200620u;
            goto label_200620;
        }
    }
    ctx->pc = 0x200618u;
    // 0x200618: 0x10000006
    ctx->pc = 0x200618u;
    {
        const bool branch_taken_0x200618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20061Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x200618) {
            ctx->pc = 0x200634u;
            goto label_200634;
        }
    }
    ctx->pc = 0x200620u;
label_200620:
    // 0x200620: 0x24630001
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x200624: 0x0
    ctx->pc = 0x200624u;
    // NOP
label_200628:
    // 0x200628: 0x66102a
    ctx->pc = 0x200628u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x20062c: 0x1440fff7
    ctx->pc = 0x20062Cu;
    {
        const bool branch_taken_0x20062c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200630u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20062c) {
            ctx->pc = 0x20060Cu;
            goto label_20060c;
        }
    }
    ctx->pc = 0x200634u;
label_200634:
    // 0x200634: 0x3e00008
    ctx->pc = 0x200634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20060Cu: goto label_20060c;
            case 0x200620u: goto label_200620;
            case 0x200628u: goto label_200628;
            case 0x200634u: goto label_200634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20063Cu;
}
