#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVLIB_ConvOix
// Address: 0x188010 - 0x18802c
void MPVLIB_ConvOix_0x188010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVLIB_ConvOix");


    ctx->pc = 0x188010u;

    // 0x188010: 0x3c03002e
    ctx->pc = 0x188010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x188014: 0x8c6242b4
    ctx->pc = 0x188014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 17076)));
    // 0x188018: 0x10400002
    ctx->pc = 0x188018u;
    {
        const bool branch_taken_0x188018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18801Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
        if (branch_taken_0x188018) {
            ctx->pc = 0x188024u;
            goto label_188024;
        }
    }
    ctx->pc = 0x188020u;
    // 0x188020: 0x822025
    ctx->pc = 0x188020u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_188024:
    // 0x188024: 0x3e00008
    ctx->pc = 0x188024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188028u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188024u: goto label_188024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18802Cu;
}
