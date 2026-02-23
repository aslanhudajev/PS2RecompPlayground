#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyMaxPlyLenAud
// Address: 0x1a0560 - 0x1a05ac
void SFH_AnlyMaxPlyLenAud_0x1a0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyMaxPlyLenAud");


    ctx->pc = 0x1a0560u;

    // 0x1a0560: 0x27bdffd0
    ctx->pc = 0x1a0560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0564: 0xffb10010
    ctx->pc = 0x1a0564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0568: 0xffb00000
    ctx->pc = 0x1a0568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a056c: 0xa0882d
    ctx->pc = 0x1a056cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0570: 0xffbf0020
    ctx->pc = 0x1a0570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0574: 0x8c820004
    ctx->pc = 0x1a0574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0578: 0xc067f18
    ctx->pc = 0x1A0578u;
    SET_GPR_U32(ctx, 31, 0x1A0580u);
    ctx->pc = 0x1A057Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0580u; }
        else if (ctx->pc != 0x1A0580u) { ctx->pc = 0x1A0580u; }
    }
    if (ctx->pc != 0x1A0580u) { return; }
    ctx->pc = 0x1A0580u;
    // 0x1a0580: 0x54400003
    ctx->pc = 0x1A0580u;
    {
        const bool branch_taken_0x1a0580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0580) {
            ctx->pc = 0x1A0584u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1A0590u;
            goto label_1a0590;
        }
    }
    ctx->pc = 0x1A0588u;
    // 0x1a0588: 0x10000003
    ctx->pc = 0x1A0588u;
    {
        const bool branch_taken_0x1a0588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A058Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0588) {
            ctx->pc = 0x1A0598u;
            goto label_1a0598;
        }
    }
    ctx->pc = 0x1A0590u;
label_1a0590:
    // 0x1a0590: 0x24020001
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0594: 0xae230000
    ctx->pc = 0x1a0594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a0598:
    // 0x1a0598: 0xdfbf0020
    ctx->pc = 0x1a0598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a059c: 0xdfb10010
    ctx->pc = 0x1a059cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a05a0: 0xdfb00000
    ctx->pc = 0x1a05a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05a4: 0x3e00008
    ctx->pc = 0x1A05A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A05A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0590u: goto label_1a0590;
            case 0x1A0598u: goto label_1a0598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A05ACu;
}
