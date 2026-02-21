#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevLookout
// Address: 0x26b618 - 0x26b680
void PrevLookout_0x26b618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b618u;

    // 0x26b618: 0x80382d
    ctx->pc = 0x26b618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b61c: 0x3c020034
    ctx->pc = 0x26b61cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b620: 0x8c44cd90
    ctx->pc = 0x26b620u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954384)));
    // 0x26b624: 0x3c030034
    ctx->pc = 0x26b624u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b628: 0x2463eb60
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b62c: 0x240201a0
    ctx->pc = 0x26b62cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b630: 0xe21018
    ctx->pc = 0x26b630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b634: 0x431021
    ctx->pc = 0x26b634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b638: 0x8c46011c
    ctx->pc = 0x26b638u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x26b63c: 0x4c20001
    ctx->pc = 0x26B63Cu;
    {
        const bool branch_taken_0x26b63c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x26b63c) {
            ctx->pc = 0x26B640u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->pc = 0x26B644u;
            goto label_26b644;
        }
    }
    ctx->pc = 0x26B644u;
label_26b644:
    // 0x26b644: 0x1880000c
    ctx->pc = 0x26B644u;
    {
        const bool branch_taken_0x26b644 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26B648u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 7));
        if (branch_taken_0x26b644) {
            ctx->pc = 0x26B678u;
            goto label_26b678;
        }
    }
    ctx->pc = 0x26B64Cu;
    // 0x26b64c: 0x3c020034
    ctx->pc = 0x26b64cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b650: 0x2442c390
    ctx->pc = 0x26b650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x26b654: 0x3c040034
    ctx->pc = 0x26b654u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x26b658: 0x2484eb60
    ctx->pc = 0x26b658u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962016));
    // 0x26b65c: 0x240301a0
    ctx->pc = 0x26b65cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b660: 0xe31818
    ctx->pc = 0x26b660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b664: 0x641821
    ctx->pc = 0x26b664u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b668: 0xac66011c
    ctx->pc = 0x26b668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 6));
    // 0x26b66c: 0x3e00008
    ctx->pc = 0x26B66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B670u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B644u: goto label_26b644;
            case 0x26B678u: goto label_26b678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B674u;
    // 0x26b674: 0x0
    ctx->pc = 0x26b674u;
    // NOP
label_26b678:
    // 0x26b678: 0x3e00008
    ctx->pc = 0x26B678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B67Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B644u: goto label_26b644;
            case 0x26B678u: goto label_26b678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B680u;
}
