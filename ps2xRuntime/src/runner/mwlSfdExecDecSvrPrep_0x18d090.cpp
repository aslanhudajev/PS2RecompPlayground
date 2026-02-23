#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwlSfdExecDecSvrPrep
// Address: 0x18d090 - 0x18d0d8
void mwlSfdExecDecSvrPrep_0x18d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwlSfdExecDecSvrPrep");


    ctx->pc = 0x18d090u;

    // 0x18d090: 0x27bdffe0
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d094: 0xffb00000
    ctx->pc = 0x18d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d098: 0xffbf0010
    ctx->pc = 0x18d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d09c: 0x80802d
    ctx->pc = 0x18d09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0a0: 0xc06740e
    ctx->pc = 0x18D0A0u;
    SET_GPR_U32(ctx, 31, 0x18D0A8u);
    ctx->pc = 0x18D0A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->pc = 0x19D038u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetHnStat_0x19d038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0A8u; }
        else if (ctx->pc != 0x18D0A8u) { ctx->pc = 0x18D0A8u; }
    }
    if (ctx->pc != 0x18D0A8u) { return; }
    ctx->pc = 0x18D0A8u;
    // 0x18d0a8: 0x40182d
    ctx->pc = 0x18d0a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0ac: 0x24020004
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d0b0: 0x10620003
    ctx->pc = 0x18D0B0u;
    {
        const bool branch_taken_0x18d0b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x18D0B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x18d0b0) {
            ctx->pc = 0x18D0C0u;
            goto label_18d0c0;
        }
    }
    ctx->pc = 0x18D0B8u;
    // 0x18d0b8: 0x14620004
    ctx->pc = 0x18D0B8u;
    {
        const bool branch_taken_0x18d0b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18D0BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x18d0b8) {
            ctx->pc = 0x18D0CCu;
            goto label_18d0cc;
        }
    }
    ctx->pc = 0x18D0C0u;
label_18d0c0:
    // 0x18d0c0: 0x24020002
    ctx->pc = 0x18d0c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d0c4: 0xae020008
    ctx->pc = 0x18d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x18d0c8: 0xdfbf0010
    ctx->pc = 0x18d0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d0cc:
    // 0x18d0cc: 0xdfb00000
    ctx->pc = 0x18d0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d0d0: 0x3e00008
    ctx->pc = 0x18D0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D0D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D0C0u: goto label_18d0c0;
            case 0x18D0CCu: goto label_18d0cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D0D8u;
}
