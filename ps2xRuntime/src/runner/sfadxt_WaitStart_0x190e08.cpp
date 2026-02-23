#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_WaitStart
// Address: 0x190e08 - 0x190e34
void sfadxt_WaitStart_0x190e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_WaitStart");


    ctx->pc = 0x190e08u;

    // 0x190e08: 0x8c863e20
    ctx->pc = 0x190e08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
    // 0x190e0c: 0x14a00005
    ctx->pc = 0x190E0Cu;
    {
        const bool branch_taken_0x190e0c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x190E10u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 15948), GPR_U32(ctx, 5));
        if (branch_taken_0x190e0c) {
            ctx->pc = 0x190E24u;
            goto label_190e24;
        }
    }
    ctx->pc = 0x190E14u;
    // 0x190e14: 0x8c830048
    ctx->pc = 0x190e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x190e18: 0x24020001
    ctx->pc = 0x190e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x190e1c: 0x10620003
    ctx->pc = 0x190E1Cu;
    {
        const bool branch_taken_0x190e1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x190e1c) {
            ctx->pc = 0x190E2Cu;
            goto label_190e2c;
        }
    }
    ctx->pc = 0x190E24u;
label_190e24:
    // 0x190e24: 0x806438e
    ctx->pc = 0x190E24u;
    ctx->pc = 0x190E28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190E38u;
    sfadxt_WtPause_0x190e38(rdram, ctx, runtime); return;
    ctx->pc = 0x190E2Cu;
label_190e2c:
    // 0x190e2c: 0x3e00008
    ctx->pc = 0x190E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190E24u: goto label_190e24;
            case 0x190E2Cu: goto label_190e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x190E34u;
}
