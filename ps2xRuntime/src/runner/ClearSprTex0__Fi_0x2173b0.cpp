#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ClearSprTex0__Fi
// Address: 0x2173b0 - 0x21741c
void ClearSprTex0__Fi_0x2173b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ClearSprTex0__Fi");


    ctx->pc = 0x2173b0u;

    // 0x2173b0: 0x41880
    ctx->pc = 0x2173b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2173b4: 0x3c0101fb
    ctx->pc = 0x2173b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x2173b8: 0x610821
    ctx->pc = 0x2173b8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2173bc: 0x8c24e064
    ctx->pc = 0x2173bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294959204)));
    // 0x2173c0: 0x3c03004a
    ctx->pc = 0x2173c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x2173c4: 0x2465f738
    ctx->pc = 0x2173c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x2173c8: 0x2403ffff
    ctx->pc = 0x2173c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2173cc: 0x1000000e
    ctx->pc = 0x2173CCu;
    {
        const bool branch_taken_0x2173cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2173D0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x2173cc) {
            ctx->pc = 0x217408u;
            goto label_217408;
        }
    }
    ctx->pc = 0x2173D4u;
label_2173d4:
    // 0x2173d4: 0x8ce40018
    ctx->pc = 0x2173d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2173d8: 0x28810002
    ctx->pc = 0x2173d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 2));
    // 0x2173dc: 0x50200009
    ctx->pc = 0x2173DCu;
    {
        const bool branch_taken_0x2173dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2173dc) {
            ctx->pc = 0x2173E0u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
            ctx->pc = 0x217404u;
            goto label_217404;
        }
    }
    ctx->pc = 0x2173E4u;
    // 0x2173e4: 0x8ce60014
    ctx->pc = 0x2173e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2173e8: 0x62080
    ctx->pc = 0x2173e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 2));
    // 0x2173ec: 0x862021
    ctx->pc = 0x2173ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2173f0: 0x42100
    ctx->pc = 0x2173f0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2173f4: 0xa42021
    ctx->pc = 0x2173f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2173f8: 0xac800044
    ctx->pc = 0x2173f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2173fc: 0xac800048
    ctx->pc = 0x2173fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x217400: 0x24e70020
    ctx->pc = 0x217400u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 32));
label_217404:
    // 0x217404: 0x0
    ctx->pc = 0x217404u;
    // NOP
label_217408:
    // 0x217408: 0x84e40002
    ctx->pc = 0x217408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x21740c: 0x1483fff1
    ctx->pc = 0x21740Cu;
    {
        const bool branch_taken_0x21740c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x21740c) {
            ctx->pc = 0x2173D4u;
            goto label_2173d4;
        }
    }
    ctx->pc = 0x217414u;
    // 0x217414: 0x3e00008
    ctx->pc = 0x217414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2173D4u: goto label_2173d4;
            case 0x217404u: goto label_217404;
            case 0x217408u: goto label_217408;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21741Cu;
}
