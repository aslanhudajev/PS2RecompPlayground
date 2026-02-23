#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sbrk_r
// Address: 0x144858 - 0x1448b4
void _sbrk_r_0x144858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sbrk_r");


    ctx->pc = 0x144858u;

    // 0x144858: 0x27bdffd0
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14485c: 0xffb10010
    ctx->pc = 0x14485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x144860: 0xffb00000
    ctx->pc = 0x144860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144864: 0x3c110093
    ctx->pc = 0x144864u;
    SET_GPR_U32(ctx, 17, ((uint32_t)147 << 16));
    // 0x144868: 0x80802d
    ctx->pc = 0x144868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14486c: 0xffbf0020
    ctx->pc = 0x14486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144870: 0xa0202d
    ctx->pc = 0x144870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144874: 0xc0553ce
    ctx->pc = 0x144874u;
    SET_GPR_U32(ctx, 31, 0x14487Cu);
    ctx->pc = 0x144878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934660), GPR_U32(ctx, 0));
    ctx->pc = 0x154F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sbrk_0x154f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14487Cu; }
        else if (ctx->pc != 0x14487Cu) { ctx->pc = 0x14487Cu; }
    }
    if (ctx->pc != 0x14487Cu) { return; }
    ctx->pc = 0x14487Cu;
    // 0x14487c: 0x40182d
    ctx->pc = 0x14487cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144880: 0x3c02ffff
    ctx->pc = 0x144880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x144884: 0x3442ffff
    ctx->pc = 0x144884u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144888: 0x14620005
    ctx->pc = 0x144888u;
    {
        const bool branch_taken_0x144888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x14488Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x144888) {
            ctx->pc = 0x1448A0u;
            goto label_1448a0;
        }
    }
    ctx->pc = 0x144890u;
    // 0x144890: 0x8e228084
    ctx->pc = 0x144890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294934660)));
    // 0x144894: 0x54400002
    ctx->pc = 0x144894u;
    {
        const bool branch_taken_0x144894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x144894) {
            ctx->pc = 0x144898u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x1448A0u;
            goto label_1448a0;
        }
    }
    ctx->pc = 0x14489Cu;
    // 0x14489c: 0xdfbf0020
    ctx->pc = 0x14489cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1448a0:
    // 0x1448a0: 0x60102d
    ctx->pc = 0x1448a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448a4: 0xdfb10010
    ctx->pc = 0x1448a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1448a8: 0xdfb00000
    ctx->pc = 0x1448a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1448ac: 0x3e00008
    ctx->pc = 0x1448ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1448B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1448A0u: goto label_1448a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1448B4u;
}
