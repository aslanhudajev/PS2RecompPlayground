#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _kill_r
// Address: 0x144e40 - 0x144e9c
void _kill_r_0x144e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_kill_r");


    ctx->pc = 0x144e40u;

    // 0x144e40: 0x27bdffd0
    ctx->pc = 0x144e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144e44: 0xffb00000
    ctx->pc = 0x144e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144e48: 0xffb10010
    ctx->pc = 0x144e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x144e4c: 0x80802d
    ctx->pc = 0x144e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e50: 0xa0202d
    ctx->pc = 0x144e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e54: 0x3c110093
    ctx->pc = 0x144e54u;
    SET_GPR_U32(ctx, 17, ((uint32_t)147 << 16));
    // 0x144e58: 0xffbf0020
    ctx->pc = 0x144e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144e5c: 0xc0282d
    ctx->pc = 0x144e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e60: 0xc055404
    ctx->pc = 0x144E60u;
    SET_GPR_U32(ctx, 31, 0x144E68u);
    ctx->pc = 0x144E64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934660), GPR_U32(ctx, 0));
    ctx->pc = 0x155010u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_0x155010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144E68u; }
        else if (ctx->pc != 0x144E68u) { ctx->pc = 0x144E68u; }
    }
    if (ctx->pc != 0x144E68u) { return; }
    ctx->pc = 0x144E68u;
    // 0x144e68: 0x40182d
    ctx->pc = 0x144e68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e6c: 0x2402ffff
    ctx->pc = 0x144e6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144e70: 0x14620005
    ctx->pc = 0x144E70u;
    {
        const bool branch_taken_0x144e70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x144E74u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x144e70) {
            ctx->pc = 0x144E88u;
            goto label_144e88;
        }
    }
    ctx->pc = 0x144E78u;
    // 0x144e78: 0x8e228084
    ctx->pc = 0x144e78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294934660)));
    // 0x144e7c: 0x54400002
    ctx->pc = 0x144E7Cu;
    {
        const bool branch_taken_0x144e7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x144e7c) {
            ctx->pc = 0x144E80u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x144E88u;
            goto label_144e88;
        }
    }
    ctx->pc = 0x144E84u;
    // 0x144e84: 0xdfbf0020
    ctx->pc = 0x144e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_144e88:
    // 0x144e88: 0x60102d
    ctx->pc = 0x144e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e8c: 0xdfb10010
    ctx->pc = 0x144e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144e90: 0xdfb00000
    ctx->pc = 0x144e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e94: 0x3e00008
    ctx->pc = 0x144E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144E88u: goto label_144e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144E9Cu;
}
