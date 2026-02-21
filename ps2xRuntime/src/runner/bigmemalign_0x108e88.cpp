#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: bigmemalign
// Address: 0x108e88 - 0x108ec0
void bigmemalign_0x108e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108e88u;

    // 0x108e88: 0x8f82817c
    ctx->pc = 0x108e88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x108e8c: 0x27bdfff0
    ctx->pc = 0x108e8cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108e90: 0x45102a
    ctx->pc = 0x108e90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x108e94: 0x10400006
    ctx->pc = 0x108E94u;
    {
        const bool branch_taken_0x108e94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108E98u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x108e94) {
            ctx->pc = 0x108EB0u;
            goto label_108eb0;
        }
    }
    ctx->pc = 0x108E9Cu;
    // 0x108e9c: 0x3c040017
    ctx->pc = 0x108e9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108ea0: 0xc043ef8
    ctx->pc = 0x108EA0u;
    SET_GPR_U32(ctx, 31, 0x108EA8u);
    ctx->pc = 0x108EA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13208));
    ctx->pc = 0x10FBE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x10fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108EA8u; }
    }
    if (ctx->pc != 0x108EA8u) { return; }
    ctx->pc = 0x108EA8u;
    // 0x108ea8: 0x10000002
    ctx->pc = 0x108EA8u;
    {
        const bool branch_taken_0x108ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108EACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108ea8) {
            ctx->pc = 0x108EB4u;
            goto label_108eb4;
        }
    }
    ctx->pc = 0x108EB0u;
label_108eb0:
    // 0x108eb0: 0x8f828178
    ctx->pc = 0x108eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_108eb4:
    // 0x108eb4: 0xdfbf0000
    ctx->pc = 0x108eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108eb8: 0x3e00008
    ctx->pc = 0x108EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108EB0u: goto label_108eb0;
            case 0x108EB4u: goto label_108eb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108EC0u;
}
