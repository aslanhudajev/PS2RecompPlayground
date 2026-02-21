#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FinishLoadWorldAnim
// Address: 0x21c7f8 - 0x21c848
void FinishLoadWorldAnim_0x21c7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c7f8u;

    // 0x21c7f8: 0x27bdfff0
    ctx->pc = 0x21c7f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c7fc: 0xffbf0000
    ctx->pc = 0x21c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c800: 0x3c02003c
    ctx->pc = 0x21c800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21c804: 0x8c43d590
    ctx->pc = 0x21c804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956432)));
    // 0x21c808: 0x8c620010
    ctx->pc = 0x21c808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21c80c: 0x1040000a
    ctx->pc = 0x21C80Cu;
    {
        const bool branch_taken_0x21c80c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C810u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21c80c) {
            ctx->pc = 0x21C838u;
            goto label_21c838;
        }
    }
    ctx->pc = 0x21C814u;
    // 0x21c814: 0xac620010
    ctx->pc = 0x21c814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x21c818: 0x3c020032
    ctx->pc = 0x21c818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c81c: 0x2442f9f8
    ctx->pc = 0x21c81cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21c820: 0x8c440080
    ctx->pc = 0x21c820u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x21c824: 0x8c450084
    ctx->pc = 0x21c824u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x21c828: 0xc084784
    ctx->pc = 0x21C828u;
    SET_GPR_U32(ctx, 31, 0x21C830u);
    ctx->pc = 0x21C82Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C830u; }
    }
    if (ctx->pc != 0x21C830u) { return; }
    ctx->pc = 0x21C830u;
    // 0x21c830: 0x10000002
    ctx->pc = 0x21C830u;
    {
        const bool branch_taken_0x21c830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21C834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21c830) {
            ctx->pc = 0x21C83Cu;
            goto label_21c83c;
        }
    }
    ctx->pc = 0x21C838u;
label_21c838:
    // 0x21c838: 0x102d
    ctx->pc = 0x21c838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c83c:
    // 0x21c83c: 0xdfbf0000
    ctx->pc = 0x21c83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c840: 0x3e00008
    ctx->pc = 0x21C840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C844u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C838u: goto label_21c838;
            case 0x21C83Cu: goto label_21c83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C848u;
}
