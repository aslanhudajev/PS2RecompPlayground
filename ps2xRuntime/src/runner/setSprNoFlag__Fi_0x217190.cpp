#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setSprNoFlag__Fi
// Address: 0x217190 - 0x2171fc
void setSprNoFlag__Fi_0x217190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setSprNoFlag__Fi");


    ctx->pc = 0x217190u;

    // 0x217190: 0x41880
    ctx->pc = 0x217190u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x217194: 0x3c0101fb
    ctx->pc = 0x217194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x217198: 0x610821
    ctx->pc = 0x217198u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x21719c: 0x8c24e064
    ctx->pc = 0x21719cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294959204)));
    // 0x2171a0: 0x3c03004a
    ctx->pc = 0x2171a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x2171a4: 0x2465f738
    ctx->pc = 0x2171a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x2171a8: 0x24070001
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2171ac: 0x2403ffff
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2171b0: 0x1000000d
    ctx->pc = 0x2171B0u;
    {
        const bool branch_taken_0x2171b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2171B4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x2171b0) {
            ctx->pc = 0x2171E8u;
            goto label_2171e8;
        }
    }
    ctx->pc = 0x2171B8u;
label_2171b8:
    // 0x2171b8: 0x8d040018
    ctx->pc = 0x2171b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2171bc: 0x28810002
    ctx->pc = 0x2171bcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 2));
    // 0x2171c0: 0x50200008
    ctx->pc = 0x2171C0u;
    {
        const bool branch_taken_0x2171c0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2171c0) {
            ctx->pc = 0x2171C4u;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
            ctx->pc = 0x2171E4u;
            goto label_2171e4;
        }
    }
    ctx->pc = 0x2171C8u;
    // 0x2171c8: 0x8d060014
    ctx->pc = 0x2171c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2171cc: 0x62080
    ctx->pc = 0x2171ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2171d0: 0x862021
    ctx->pc = 0x2171d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2171d4: 0x42100
    ctx->pc = 0x2171d4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2171d8: 0xa42021
    ctx->pc = 0x2171d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2171dc: 0xac870048
    ctx->pc = 0x2171dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 7));
    // 0x2171e0: 0x25080020
    ctx->pc = 0x2171e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
label_2171e4:
    // 0x2171e4: 0x0
    ctx->pc = 0x2171e4u;
    // NOP
label_2171e8:
    // 0x2171e8: 0x85040002
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2171ec: 0x1483fff2
    ctx->pc = 0x2171ECu;
    {
        const bool branch_taken_0x2171ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2171ec) {
            ctx->pc = 0x2171B8u;
            goto label_2171b8;
        }
    }
    ctx->pc = 0x2171F4u;
    // 0x2171f4: 0x3e00008
    ctx->pc = 0x2171F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2171B8u: goto label_2171b8;
            case 0x2171E4u: goto label_2171e4;
            case 0x2171E8u: goto label_2171e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2171FCu;
}
