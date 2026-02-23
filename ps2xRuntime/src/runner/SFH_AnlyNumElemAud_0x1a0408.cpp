#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyNumElemAud
// Address: 0x1a0408 - 0x1a0454
void SFH_AnlyNumElemAud_0x1a0408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyNumElemAud");


    ctx->pc = 0x1a0408u;

    // 0x1a0408: 0x27bdffd0
    ctx->pc = 0x1a0408u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a040c: 0xffb10010
    ctx->pc = 0x1a040cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0410: 0xffb00000
    ctx->pc = 0x1a0410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0414: 0xa0882d
    ctx->pc = 0x1a0414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0418: 0xffbf0020
    ctx->pc = 0x1a0418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a041c: 0x8c820004
    ctx->pc = 0x1a041cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0420: 0xc067f18
    ctx->pc = 0x1A0420u;
    SET_GPR_U32(ctx, 31, 0x1A0428u);
    ctx->pc = 0x1A0424u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0428u; }
        else if (ctx->pc != 0x1A0428u) { ctx->pc = 0x1A0428u; }
    }
    if (ctx->pc != 0x1A0428u) { return; }
    ctx->pc = 0x1A0428u;
    // 0x1a0428: 0x54400003
    ctx->pc = 0x1A0428u;
    {
        const bool branch_taken_0x1a0428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0428) {
            ctx->pc = 0x1A042Cu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x1A0438u;
            goto label_1a0438;
        }
    }
    ctx->pc = 0x1A0430u;
    // 0x1a0430: 0x10000003
    ctx->pc = 0x1A0430u;
    {
        const bool branch_taken_0x1a0430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0434u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0430) {
            ctx->pc = 0x1A0440u;
            goto label_1a0440;
        }
    }
    ctx->pc = 0x1A0438u;
label_1a0438:
    // 0x1a0438: 0x24020001
    ctx->pc = 0x1a0438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a043c: 0xae230000
    ctx->pc = 0x1a043cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a0440:
    // 0x1a0440: 0xdfbf0020
    ctx->pc = 0x1a0440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0444: 0xdfb10010
    ctx->pc = 0x1a0444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0448: 0xdfb00000
    ctx->pc = 0x1a0448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a044c: 0x3e00008
    ctx->pc = 0x1A044Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0450u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0438u: goto label_1a0438;
            case 0x1A0440u: goto label_1a0440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0454u;
}
