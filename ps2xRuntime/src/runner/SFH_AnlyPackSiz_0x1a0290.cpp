#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyPackSiz
// Address: 0x1a0290 - 0x1a02dc
void SFH_AnlyPackSiz_0x1a0290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyPackSiz");


    ctx->pc = 0x1a0290u;

    // 0x1a0290: 0x27bdffd0
    ctx->pc = 0x1a0290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0294: 0xffb10010
    ctx->pc = 0x1a0294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0298: 0xffb00000
    ctx->pc = 0x1a0298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a029c: 0xa0882d
    ctx->pc = 0x1a029cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a02a0: 0xffbf0020
    ctx->pc = 0x1a02a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a02a4: 0x8c820004
    ctx->pc = 0x1a02a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a02a8: 0xc067f18
    ctx->pc = 0x1A02A8u;
    SET_GPR_U32(ctx, 31, 0x1A02B0u);
    ctx->pc = 0x1A02ACu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 128));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02B0u; }
        else if (ctx->pc != 0x1A02B0u) { ctx->pc = 0x1A02B0u; }
    }
    if (ctx->pc != 0x1A02B0u) { return; }
    ctx->pc = 0x1A02B0u;
    // 0x1a02b0: 0x54400003
    ctx->pc = 0x1A02B0u;
    {
        const bool branch_taken_0x1a02b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a02b0) {
            ctx->pc = 0x1A02B4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x1A02C0u;
            goto label_1a02c0;
        }
    }
    ctx->pc = 0x1A02B8u;
    // 0x1a02b8: 0x10000003
    ctx->pc = 0x1A02B8u;
    {
        const bool branch_taken_0x1a02b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A02BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a02b8) {
            ctx->pc = 0x1A02C8u;
            goto label_1a02c8;
        }
    }
    ctx->pc = 0x1A02C0u;
label_1a02c0:
    // 0x1a02c0: 0x24020001
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a02c4: 0xae230000
    ctx->pc = 0x1a02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a02c8:
    // 0x1a02c8: 0xdfbf0020
    ctx->pc = 0x1a02c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a02cc: 0xdfb10010
    ctx->pc = 0x1a02ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a02d0: 0xdfb00000
    ctx->pc = 0x1a02d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a02d4: 0x3e00008
    ctx->pc = 0x1A02D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A02D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A02C0u: goto label_1a02c0;
            case 0x1A02C8u: goto label_1a02c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A02DCu;
}
