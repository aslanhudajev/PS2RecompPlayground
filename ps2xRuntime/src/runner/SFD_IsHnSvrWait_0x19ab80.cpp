#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_IsHnSvrWait
// Address: 0x19ab80 - 0x19aba8
void SFD_IsHnSvrWait_0x19ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_IsHnSvrWait");


    ctx->pc = 0x19ab80u;

    // 0x19ab80: 0x8c820040
    ctx->pc = 0x19ab80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19ab84: 0x2442ffff
    ctx->pc = 0x19ab84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ab88: 0x2c420004
    ctx->pc = 0x19ab88u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x19ab8c: 0x14400003
    ctx->pc = 0x19AB8Cu;
    {
        const bool branch_taken_0x19ab8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19ab8c) {
            ctx->pc = 0x19AB9Cu;
            goto label_19ab9c;
        }
    }
    ctx->pc = 0x19AB94u;
    // 0x19ab94: 0x3e00008
    ctx->pc = 0x19AB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AB9Cu: goto label_19ab9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AB9Cu;
label_19ab9c:
    // 0x19ab9c: 0x8c82003c
    ctx->pc = 0x19ab9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x19aba0: 0x3e00008
    ctx->pc = 0x19ABA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABA4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AB9Cu: goto label_19ab9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19ABA8u;
}
