#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyNumElemPrv
// Address: 0x1a04a8 - 0x1a04f4
void SFH_AnlyNumElemPrv_0x1a04a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyNumElemPrv");


    ctx->pc = 0x1a04a8u;

    // 0x1a04a8: 0x27bdffd0
    ctx->pc = 0x1a04a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a04ac: 0xffb10010
    ctx->pc = 0x1a04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a04b0: 0xffb00000
    ctx->pc = 0x1a04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a04b4: 0xa0882d
    ctx->pc = 0x1a04b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a04b8: 0xffbf0020
    ctx->pc = 0x1a04b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a04bc: 0x8c820004
    ctx->pc = 0x1a04bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a04c0: 0xc067f18
    ctx->pc = 0x1A04C0u;
    SET_GPR_U32(ctx, 31, 0x1A04C8u);
    ctx->pc = 0x1A04C4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A04C8u; }
        else if (ctx->pc != 0x1A04C8u) { ctx->pc = 0x1A04C8u; }
    }
    if (ctx->pc != 0x1A04C8u) { return; }
    ctx->pc = 0x1A04C8u;
    // 0x1a04c8: 0x54400003
    ctx->pc = 0x1A04C8u;
    {
        const bool branch_taken_0x1a04c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a04c8) {
            ctx->pc = 0x1A04CCu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->pc = 0x1A04D8u;
            goto label_1a04d8;
        }
    }
    ctx->pc = 0x1A04D0u;
    // 0x1a04d0: 0x10000003
    ctx->pc = 0x1A04D0u;
    {
        const bool branch_taken_0x1a04d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A04D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a04d0) {
            ctx->pc = 0x1A04E0u;
            goto label_1a04e0;
        }
    }
    ctx->pc = 0x1A04D8u;
label_1a04d8:
    // 0x1a04d8: 0x24020001
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a04dc: 0xae230000
    ctx->pc = 0x1a04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a04e0:
    // 0x1a04e0: 0xdfbf0020
    ctx->pc = 0x1a04e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a04e4: 0xdfb10010
    ctx->pc = 0x1a04e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a04e8: 0xdfb00000
    ctx->pc = 0x1a04e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a04ec: 0x3e00008
    ctx->pc = 0x1A04ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A04F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A04D8u: goto label_1a04d8;
            case 0x1A04E0u: goto label_1a04e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A04F4u;
}
