#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_GetColType
// Address: 0x1937d8 - 0x193800
void SFHDS_GetColType_0x1937d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_GetColType");


    ctx->pc = 0x1937d8u;

    // 0x1937d8: 0x8c82006c
    ctx->pc = 0x1937d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1937dc: 0x10400004
    ctx->pc = 0x1937DCu;
    {
        const bool branch_taken_0x1937dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1937E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 200));
        if (branch_taken_0x1937dc) {
            ctx->pc = 0x1937F0u;
            goto label_1937f0;
        }
    }
    ctx->pc = 0x1937E4u;
    // 0x1937e4: 0x8c620014
    ctx->pc = 0x1937e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1937e8: 0x14400003
    ctx->pc = 0x1937E8u;
    {
        const bool branch_taken_0x1937e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1937e8) {
            ctx->pc = 0x1937F8u;
            goto label_1937f8;
        }
    }
    ctx->pc = 0x1937F0u;
label_1937f0:
    // 0x1937f0: 0x3e00008
    ctx->pc = 0x1937F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1937F0u: goto label_1937f0;
            case 0x1937F8u: goto label_1937f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1937F8u;
label_1937f8:
    // 0x1937f8: 0x3e00008
    ctx->pc = 0x1937F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1937F0u: goto label_1937f0;
            case 0x1937F8u: goto label_1937f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193800u;
}
