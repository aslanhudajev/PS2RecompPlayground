#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetVoiceStatus
// Address: 0x10bf40 - 0x10bf78
void GetVoiceStatus_0x10bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10bf40u;

    // 0x10bf40: 0x27bdfff0
    ctx->pc = 0x10bf40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bf44: 0x8f828390
    ctx->pc = 0x10bf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10bf48: 0x14400007
    ctx->pc = 0x10BF48u;
    {
        const bool branch_taken_0x10bf48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10BF4Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x10bf48) {
            ctx->pc = 0x10BF68u;
            goto label_10bf68;
        }
    }
    ctx->pc = 0x10BF50u;
    // 0x10bf50: 0x34861700
    ctx->pc = 0x10bf50u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), 5888));
    // 0x10bf54: 0x34058040
    ctx->pc = 0x10bf54u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32832));
    // 0x10bf58: 0xc045c80
    ctx->pc = 0x10BF58u;
    SET_GPR_U32(ctx, 31, 0x10BF60u);
    ctx->pc = 0x10BF5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF60u; }
    }
    if (ctx->pc != 0x10BF60u) { return; }
    ctx->pc = 0x10BF60u;
    // 0x10bf60: 0x10000003
    ctx->pc = 0x10BF60u;
    {
        const bool branch_taken_0x10bf60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10BF64u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x10bf60) {
            ctx->pc = 0x10BF70u;
            goto label_10bf70;
        }
    }
    ctx->pc = 0x10BF68u;
label_10bf68:
    // 0x10bf68: 0x102d
    ctx->pc = 0x10bf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf6c: 0xdfbf0000
    ctx->pc = 0x10bf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bf70:
    // 0x10bf70: 0x3e00008
    ctx->pc = 0x10BF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BF68u: goto label_10bf68;
            case 0x10BF70u: goto label_10bf70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BF78u;
}
