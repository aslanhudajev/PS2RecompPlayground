#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_StatStop
// Address: 0x19ae18 - 0x19ae48
void sfply_StatStop_0x19ae18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_StatStop");


    ctx->pc = 0x19ae18u;

    // 0x19ae18: 0x8c830044
    ctx->pc = 0x19ae18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x19ae1c: 0x28620002
    ctx->pc = 0x19ae1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x19ae20: 0x14400007
    ctx->pc = 0x19AE20u;
    {
        const bool branch_taken_0x19ae20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19AE24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
        if (branch_taken_0x19ae20) {
            ctx->pc = 0x19AE40u;
            goto label_19ae40;
        }
    }
    ctx->pc = 0x19AE28u;
    // 0x19ae28: 0x28620005
    ctx->pc = 0x19ae28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5));
    // 0x19ae2c: 0x54400004
    ctx->pc = 0x19AE2Cu;
    {
        const bool branch_taken_0x19ae2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x19ae2c) {
            ctx->pc = 0x19AE30u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x19AE40u;
            goto label_19ae40;
        }
    }
    ctx->pc = 0x19AE34u;
    // 0x19ae34: 0x24020006
    ctx->pc = 0x19ae34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ae38: 0x50620001
    ctx->pc = 0x19AE38u;
    {
        const bool branch_taken_0x19ae38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x19ae38) {
            ctx->pc = 0x19AE3Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x19AE40u;
            goto label_19ae40;
        }
    }
    ctx->pc = 0x19AE40u;
label_19ae40:
    // 0x19ae40: 0x3e00008
    ctx->pc = 0x19AE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AE40u: goto label_19ae40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AE48u;
}
