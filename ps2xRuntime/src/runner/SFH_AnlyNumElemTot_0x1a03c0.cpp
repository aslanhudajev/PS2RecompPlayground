#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyNumElemTot
// Address: 0x1a03c0 - 0x1a0408
void SFH_AnlyNumElemTot_0x1a03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyNumElemTot");


    ctx->pc = 0x1a03c0u;

    // 0x1a03c0: 0x27bdffd0
    ctx->pc = 0x1a03c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a03c4: 0xffb10010
    ctx->pc = 0x1a03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a03c8: 0xffbf0020
    ctx->pc = 0x1a03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a03cc: 0xa0882d
    ctx->pc = 0x1a03ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03d0: 0xffb00000
    ctx->pc = 0x1a03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a03d4: 0xc067f18
    ctx->pc = 0x1A03D4u;
    SET_GPR_U32(ctx, 31, 0x1A03DCu);
    ctx->pc = 0x1A03D8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03DCu; }
        else if (ctx->pc != 0x1A03DCu) { ctx->pc = 0x1A03DCu; }
    }
    if (ctx->pc != 0x1A03DCu) { return; }
    ctx->pc = 0x1A03DCu;
    // 0x1a03dc: 0x54400003
    ctx->pc = 0x1A03DCu;
    {
        const bool branch_taken_0x1a03dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a03dc) {
            ctx->pc = 0x1A03E0u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->pc = 0x1A03ECu;
            goto label_1a03ec;
        }
    }
    ctx->pc = 0x1A03E4u;
    // 0x1a03e4: 0x10000003
    ctx->pc = 0x1A03E4u;
    {
        const bool branch_taken_0x1a03e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A03E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a03e4) {
            ctx->pc = 0x1A03F4u;
            goto label_1a03f4;
        }
    }
    ctx->pc = 0x1A03ECu;
label_1a03ec:
    // 0x1a03ec: 0x24020001
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a03f0: 0xae230000
    ctx->pc = 0x1a03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a03f4:
    // 0x1a03f4: 0xdfbf0020
    ctx->pc = 0x1a03f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a03f8: 0xdfb10010
    ctx->pc = 0x1a03f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a03fc: 0xdfb00000
    ctx->pc = 0x1a03fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0400: 0x3e00008
    ctx->pc = 0x1A0400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0404u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A03ECu: goto label_1a03ec;
            case 0x1A03F4u: goto label_1a03f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0408u;
}
