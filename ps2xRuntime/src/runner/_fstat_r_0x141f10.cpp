#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _fstat_r
// Address: 0x141f10 - 0x141f6c
void _fstat_r_0x141f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_fstat_r");


    ctx->pc = 0x141f10u;

    // 0x141f10: 0x27bdffd0
    ctx->pc = 0x141f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141f14: 0xffb00000
    ctx->pc = 0x141f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141f18: 0xffb10010
    ctx->pc = 0x141f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x141f1c: 0x80802d
    ctx->pc = 0x141f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f20: 0xa0202d
    ctx->pc = 0x141f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f24: 0x3c110093
    ctx->pc = 0x141f24u;
    SET_GPR_U32(ctx, 17, ((uint32_t)147 << 16));
    // 0x141f28: 0xffbf0020
    ctx->pc = 0x141f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141f2c: 0xc0282d
    ctx->pc = 0x141f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f30: 0xc0553fc
    ctx->pc = 0x141F30u;
    SET_GPR_U32(ctx, 31, 0x141F38u);
    ctx->pc = 0x141F34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934660), GPR_U32(ctx, 0));
    ctx->pc = 0x154FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fstat_0x154ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141F38u; }
        else if (ctx->pc != 0x141F38u) { ctx->pc = 0x141F38u; }
    }
    if (ctx->pc != 0x141F38u) { return; }
    ctx->pc = 0x141F38u;
    // 0x141f38: 0x40182d
    ctx->pc = 0x141f38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f3c: 0x2402ffff
    ctx->pc = 0x141f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x141f40: 0x14620005
    ctx->pc = 0x141F40u;
    {
        const bool branch_taken_0x141f40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x141F44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x141f40) {
            ctx->pc = 0x141F58u;
            goto label_141f58;
        }
    }
    ctx->pc = 0x141F48u;
    // 0x141f48: 0x8e228084
    ctx->pc = 0x141f48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294934660)));
    // 0x141f4c: 0x54400002
    ctx->pc = 0x141F4Cu;
    {
        const bool branch_taken_0x141f4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x141f4c) {
            ctx->pc = 0x141F50u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x141F58u;
            goto label_141f58;
        }
    }
    ctx->pc = 0x141F54u;
    // 0x141f54: 0xdfbf0020
    ctx->pc = 0x141f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_141f58:
    // 0x141f58: 0x60102d
    ctx->pc = 0x141f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f5c: 0xdfb10010
    ctx->pc = 0x141f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141f60: 0xdfb00000
    ctx->pc = 0x141f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141f64: 0x3e00008
    ctx->pc = 0x141F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141F58u: goto label_141f58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141F6Cu;
}
