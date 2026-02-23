#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _read_r
// Address: 0x144578 - 0x1445d8
void _read_r_0x144578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_read_r");


    ctx->pc = 0x144578u;

    // 0x144578: 0x27bdffd0
    ctx->pc = 0x144578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14457c: 0xffb00000
    ctx->pc = 0x14457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144580: 0x80802d
    ctx->pc = 0x144580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144584: 0xffb10010
    ctx->pc = 0x144584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x144588: 0xa0202d
    ctx->pc = 0x144588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14458c: 0x3c110093
    ctx->pc = 0x14458cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)147 << 16));
    // 0x144590: 0xc0282d
    ctx->pc = 0x144590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144594: 0xffbf0020
    ctx->pc = 0x144594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144598: 0xae208084
    ctx->pc = 0x144598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934660), GPR_U32(ctx, 0));
    // 0x14459c: 0xc0553a0
    ctx->pc = 0x14459Cu;
    SET_GPR_U32(ctx, 31, 0x1445A4u);
    ctx->pc = 0x1445A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_0x154e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1445A4u; }
        else if (ctx->pc != 0x1445A4u) { ctx->pc = 0x1445A4u; }
    }
    if (ctx->pc != 0x1445A4u) { return; }
    ctx->pc = 0x1445A4u;
    // 0x1445a4: 0x40182d
    ctx->pc = 0x1445a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445a8: 0x2402ffff
    ctx->pc = 0x1445a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1445ac: 0x14620005
    ctx->pc = 0x1445ACu;
    {
        const bool branch_taken_0x1445ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1445B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1445ac) {
            ctx->pc = 0x1445C4u;
            goto label_1445c4;
        }
    }
    ctx->pc = 0x1445B4u;
    // 0x1445b4: 0x8e228084
    ctx->pc = 0x1445b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294934660)));
    // 0x1445b8: 0x54400002
    ctx->pc = 0x1445B8u;
    {
        const bool branch_taken_0x1445b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1445b8) {
            ctx->pc = 0x1445BCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x1445C4u;
            goto label_1445c4;
        }
    }
    ctx->pc = 0x1445C0u;
    // 0x1445c0: 0xdfbf0020
    ctx->pc = 0x1445c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1445c4:
    // 0x1445c4: 0x60102d
    ctx->pc = 0x1445c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445c8: 0xdfb10010
    ctx->pc = 0x1445c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1445cc: 0xdfb00000
    ctx->pc = 0x1445ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1445d0: 0x3e00008
    ctx->pc = 0x1445D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1445D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1445C4u: goto label_1445c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1445D8u;
}
