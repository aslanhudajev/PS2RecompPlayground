#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_SetupThrd
// Address: 0x16d6f8 - 0x16d750
void ADXPS2_SetupThrd_0x16d6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_SetupThrd");


    ctx->pc = 0x16d6f8u;

    // 0x16d6f8: 0x27bdffd0
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d6fc: 0x80182d
    ctx->pc = 0x16d6fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d700: 0x1060000d
    ctx->pc = 0x16D700u;
    {
        const bool branch_taken_0x16d700 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D704u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x16d700) {
            ctx->pc = 0x16D738u;
            goto label_16d738;
        }
    }
    ctx->pc = 0x16D708u;
    // 0x16d708: 0x8c650008
    ctx->pc = 0x16d708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16d70c: 0x24060019
    ctx->pc = 0x16d70cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 25));
    // 0x16d710: 0x8c64000c
    ctx->pc = 0x16d710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16d714: 0x3a0382d
    ctx->pc = 0x16d714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d718: 0x8c620000
    ctx->pc = 0x16d718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d71c: 0x8c630004
    ctx->pc = 0x16d71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16d720: 0xafa4000c
    ctx->pc = 0x16d720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x16d724: 0xafa20000
    ctx->pc = 0x16d724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16d728: 0xafa30004
    ctx->pc = 0x16d728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x16d72c: 0xafa50008
    ctx->pc = 0x16d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x16d730: 0x10000002
    ctx->pc = 0x16D730u;
    {
        const bool branch_taken_0x16d730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D734u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        if (branch_taken_0x16d730) {
            ctx->pc = 0x16D73Cu;
            goto label_16d73c;
        }
    }
    ctx->pc = 0x16D738u;
label_16d738:
    // 0x16d738: 0x382d
    ctx->pc = 0x16d738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d73c:
    // 0x16d73c: 0xc05b456
    ctx->pc = 0x16D73Cu;
    SET_GPR_U32(ctx, 31, 0x16D744u);
    ctx->pc = 0x16D740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16D158u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_SetupThrd_0x16d158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D744u; }
        else if (ctx->pc != 0x16D744u) { ctx->pc = 0x16D744u; }
    }
    if (ctx->pc != 0x16D744u) { return; }
    ctx->pc = 0x16D744u;
    // 0x16d744: 0xdfbf0020
    ctx->pc = 0x16d744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d748: 0x3e00008
    ctx->pc = 0x16D748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D74Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D738u: goto label_16d738;
            case 0x16D73Cu: goto label_16d73c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D750u;
}
