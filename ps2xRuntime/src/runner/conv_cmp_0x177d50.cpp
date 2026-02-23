#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: conv_cmp
// Address: 0x177d50 - 0x177d84
void conv_cmp_0x177d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("conv_cmp");


    ctx->pc = 0x177d50u;

    // 0x177d50: 0x42600
    ctx->pc = 0x177d50u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x177d54: 0x42603
    ctx->pc = 0x177d54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x177d58: 0x2482ff9f
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x177d5c: 0x2c42001a
    ctx->pc = 0x177d5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x177d60: 0x10400004
    ctx->pc = 0x177D60u;
    {
        const bool branch_taken_0x177d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177D64u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177d60) {
            ctx->pc = 0x177D74u;
            goto label_177d74;
        }
    }
    ctx->pc = 0x177D68u;
    // 0x177d68: 0x2482ffe0
    ctx->pc = 0x177d68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x177d6c: 0x21600
    ctx->pc = 0x177d6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x177d70: 0x22603
    ctx->pc = 0x177d70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_177d74:
    // 0x177d74: 0x3863005c
    ctx->pc = 0x177d74u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 92));
    // 0x177d78: 0x2402002f
    ctx->pc = 0x177d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x177d7c: 0x3e00008
    ctx->pc = 0x177D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177D80u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177D74u: goto label_177d74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177D84u;
}
