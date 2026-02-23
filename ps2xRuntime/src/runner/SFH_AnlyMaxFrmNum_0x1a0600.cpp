#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyMaxFrmNum
// Address: 0x1a0600 - 0x1a064c
void SFH_AnlyMaxFrmNum_0x1a0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyMaxFrmNum");


    ctx->pc = 0x1a0600u;

    // 0x1a0600: 0x27bdffd0
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0604: 0xffb10010
    ctx->pc = 0x1a0604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0608: 0xffb00000
    ctx->pc = 0x1a0608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a060c: 0xa0882d
    ctx->pc = 0x1a060cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0610: 0xffbf0020
    ctx->pc = 0x1a0610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0614: 0x8c820004
    ctx->pc = 0x1a0614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0618: 0xc067f18
    ctx->pc = 0x1A0618u;
    SET_GPR_U32(ctx, 31, 0x1A0620u);
    ctx->pc = 0x1A061Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0620u; }
        else if (ctx->pc != 0x1A0620u) { ctx->pc = 0x1A0620u; }
    }
    if (ctx->pc != 0x1A0620u) { return; }
    ctx->pc = 0x1A0620u;
    // 0x1a0620: 0x54400003
    ctx->pc = 0x1A0620u;
    {
        const bool branch_taken_0x1a0620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0620) {
            ctx->pc = 0x1A0624u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x1A0630u;
            goto label_1a0630;
        }
    }
    ctx->pc = 0x1A0628u;
    // 0x1a0628: 0x10000003
    ctx->pc = 0x1A0628u;
    {
        const bool branch_taken_0x1a0628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A062Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0628) {
            ctx->pc = 0x1A0638u;
            goto label_1a0638;
        }
    }
    ctx->pc = 0x1A0630u;
label_1a0630:
    // 0x1a0630: 0x24020001
    ctx->pc = 0x1a0630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0634: 0xae230000
    ctx->pc = 0x1a0634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a0638:
    // 0x1a0638: 0xdfbf0020
    ctx->pc = 0x1a0638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a063c: 0xdfb10010
    ctx->pc = 0x1a063cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0640: 0xdfb00000
    ctx->pc = 0x1a0640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0644: 0x3e00008
    ctx->pc = 0x1A0644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0630u: goto label_1a0630;
            case 0x1A0638u: goto label_1a0638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A064Cu;
}
