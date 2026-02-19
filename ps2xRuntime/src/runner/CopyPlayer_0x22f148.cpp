#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CopyPlayer
// Address: 0x22f148 - 0x22f18c
void CopyPlayer_0x22f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22f148u;

    // 0x22f148: 0x24822b00
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 11008));
label_22f14c:
    // 0x22f14c: 0xdc830000
    ctx->pc = 0x22f14cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f150: 0xdc860008
    ctx->pc = 0x22f150u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22f154: 0xdc870010
    ctx->pc = 0x22f154u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22f158: 0xdc880018
    ctx->pc = 0x22f158u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x22f15c: 0xfca30000
    ctx->pc = 0x22f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x22f160: 0xfca60008
    ctx->pc = 0x22f160u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x22f164: 0xfca70010
    ctx->pc = 0x22f164u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x22f168: 0xfca80018
    ctx->pc = 0x22f168u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x22f16c: 0x24840020
    ctx->pc = 0x22f16cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x22f170: 0x24a50020
    ctx->pc = 0x22f170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x22f174: 0x0
    ctx->pc = 0x22f174u;
    // NOP
    // 0x22f178: 0x0
    ctx->pc = 0x22f178u;
    // NOP
    // 0x22f17c: 0x1482fff3
    ctx->pc = 0x22F17Cu;
    {
        const bool branch_taken_0x22f17c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x22f17c) {
            ctx->pc = 0x22F14Cu;
            goto label_22f14c;
        }
    }
    ctx->pc = 0x22F184u;
    // 0x22f184: 0x3e00008
    ctx->pc = 0x22F184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F14Cu: goto label_22f14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F18Cu;
}
