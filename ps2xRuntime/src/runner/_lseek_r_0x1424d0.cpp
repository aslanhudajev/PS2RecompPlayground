#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lseek_r
// Address: 0x1424d0 - 0x142530
void _lseek_r_0x1424d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lseek_r");


    ctx->pc = 0x1424d0u;

    // 0x1424d0: 0x27bdffd0
    ctx->pc = 0x1424d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1424d4: 0xffb00000
    ctx->pc = 0x1424d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1424d8: 0x80802d
    ctx->pc = 0x1424d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424dc: 0xffb10010
    ctx->pc = 0x1424dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1424e0: 0xa0202d
    ctx->pc = 0x1424e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424e4: 0x3c110093
    ctx->pc = 0x1424e4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)147 << 16));
    // 0x1424e8: 0xc0282d
    ctx->pc = 0x1424e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1424ec: 0xffbf0020
    ctx->pc = 0x1424ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1424f0: 0xae208084
    ctx->pc = 0x1424f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294934660), GPR_U32(ctx, 0));
    // 0x1424f4: 0xc0553cc
    ctx->pc = 0x1424F4u;
    SET_GPR_U32(ctx, 31, 0x1424FCu);
    ctx->pc = 0x1424F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        lseek_0x154f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1424FCu; }
        else if (ctx->pc != 0x1424FCu) { ctx->pc = 0x1424FCu; }
    }
    if (ctx->pc != 0x1424FCu) { return; }
    ctx->pc = 0x1424FCu;
    // 0x1424fc: 0x40182d
    ctx->pc = 0x1424fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142500: 0x2402ffff
    ctx->pc = 0x142500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142504: 0x14620005
    ctx->pc = 0x142504u;
    {
        const bool branch_taken_0x142504 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x142508u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x142504) {
            ctx->pc = 0x14251Cu;
            goto label_14251c;
        }
    }
    ctx->pc = 0x14250Cu;
    // 0x14250c: 0x8e228084
    ctx->pc = 0x14250cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294934660)));
    // 0x142510: 0x54400002
    ctx->pc = 0x142510u;
    {
        const bool branch_taken_0x142510 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x142510) {
            ctx->pc = 0x142514u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x14251Cu;
            goto label_14251c;
        }
    }
    ctx->pc = 0x142518u;
    // 0x142518: 0xdfbf0020
    ctx->pc = 0x142518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14251c:
    // 0x14251c: 0x60102d
    ctx->pc = 0x14251cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142520: 0xdfb10010
    ctx->pc = 0x142520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142524: 0xdfb00000
    ctx->pc = 0x142524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142528: 0x3e00008
    ctx->pc = 0x142528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14252Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14251Cu: goto label_14251c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142530u;
}
