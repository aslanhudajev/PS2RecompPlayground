#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_GetExecCount
// Address: 0x17e450 - 0x17e47c
void SVM_GetExecCount_0x17e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_GetExecCount");


    ctx->pc = 0x17e450u;

    // 0x17e450: 0x2c820005
    ctx->pc = 0x17e450u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 5));
    // 0x17e454: 0x14400003
    ctx->pc = 0x17E454u;
    {
        const bool branch_taken_0x17e454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E458u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x17e454) {
            ctx->pc = 0x17E464u;
            goto label_17e464;
        }
    }
    ctx->pc = 0x17E45Cu;
    // 0x17e45c: 0x3e00008
    ctx->pc = 0x17E45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E460u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E464u: goto label_17e464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E464u;
label_17e464:
    // 0x17e464: 0x41880
    ctx->pc = 0x17e464u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e468: 0x24421378
    ctx->pc = 0x17e468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4984));
    // 0x17e46c: 0x621821
    ctx->pc = 0x17e46cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e470: 0x8c620000
    ctx->pc = 0x17e470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e474: 0x3e00008
    ctx->pc = 0x17E474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E464u: goto label_17e464;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E47Cu;
}
