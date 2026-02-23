#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyMaxPlyLenVid
// Address: 0x1a05b0 - 0x1a05fc
void SFH_AnlyMaxPlyLenVid_0x1a05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyMaxPlyLenVid");


    ctx->pc = 0x1a05b0u;

    // 0x1a05b0: 0x27bdffd0
    ctx->pc = 0x1a05b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a05b4: 0xffb10010
    ctx->pc = 0x1a05b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a05b8: 0xffb00000
    ctx->pc = 0x1a05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a05bc: 0xa0882d
    ctx->pc = 0x1a05bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05c0: 0xffbf0020
    ctx->pc = 0x1a05c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a05c4: 0x8c820004
    ctx->pc = 0x1a05c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a05c8: 0xc067f18
    ctx->pc = 0x1A05C8u;
    SET_GPR_U32(ctx, 31, 0x1A05D0u);
    ctx->pc = 0x1A05CCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05D0u; }
        else if (ctx->pc != 0x1A05D0u) { ctx->pc = 0x1A05D0u; }
    }
    if (ctx->pc != 0x1A05D0u) { return; }
    ctx->pc = 0x1A05D0u;
    // 0x1a05d0: 0x54400003
    ctx->pc = 0x1A05D0u;
    {
        const bool branch_taken_0x1a05d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a05d0) {
            ctx->pc = 0x1A05D4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x1A05E0u;
            goto label_1a05e0;
        }
    }
    ctx->pc = 0x1A05D8u;
    // 0x1a05d8: 0x10000003
    ctx->pc = 0x1A05D8u;
    {
        const bool branch_taken_0x1a05d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A05DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a05d8) {
            ctx->pc = 0x1A05E8u;
            goto label_1a05e8;
        }
    }
    ctx->pc = 0x1A05E0u;
label_1a05e0:
    // 0x1a05e0: 0x24020001
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a05e4: 0xae230000
    ctx->pc = 0x1a05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a05e8:
    // 0x1a05e8: 0xdfbf0020
    ctx->pc = 0x1a05e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a05ec: 0xdfb10010
    ctx->pc = 0x1a05ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a05f0: 0xdfb00000
    ctx->pc = 0x1a05f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05f4: 0x3e00008
    ctx->pc = 0x1A05F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A05F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A05E0u: goto label_1a05e0;
            case 0x1A05E8u: goto label_1a05e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A05FCu;
}
