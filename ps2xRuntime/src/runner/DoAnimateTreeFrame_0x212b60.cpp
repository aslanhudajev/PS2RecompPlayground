#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAnimateTreeFrame
// Address: 0x212b60 - 0x212bcc
void DoAnimateTreeFrame_0x212b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212b60u;

    // 0x212b60: 0x27bdffb0
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212b64: 0xffbf0040
    ctx->pc = 0x212b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x212b68: 0xffb30030
    ctx->pc = 0x212b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212b6c: 0xffb20020
    ctx->pc = 0x212b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212b70: 0xffb10010
    ctx->pc = 0x212b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212b74: 0xffb00000
    ctx->pc = 0x212b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212b78: 0x80902d
    ctx->pc = 0x212b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b7c: 0xa0982d
    ctx->pc = 0x212b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b80: 0x100802d
    ctx->pc = 0x212b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b84: 0xc0282d
    ctx->pc = 0x212b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b88: 0x44806000
    ctx->pc = 0x212b88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x212b8c: 0xc083fbc
    ctx->pc = 0x212B8Cu;
    SET_GPR_U32(ctx, 31, 0x212B94u);
    ctx->pc = 0x212B90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTreeFrameInterp_0x20fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B94u; }
    }
    if (ctx->pc != 0x212B94u) { return; }
    ctx->pc = 0x212B94u;
    // 0x212b94: 0x1a000005
    ctx->pc = 0x212B94u;
    {
        const bool branch_taken_0x212b94 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x212B98u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212b94) {
            ctx->pc = 0x212BACu;
            goto label_212bac;
        }
    }
    ctx->pc = 0x212B9Cu;
    // 0x212b9c: 0x260202d
    ctx->pc = 0x212b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ba0: 0x240282d
    ctx->pc = 0x212ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212ba4: 0xc0849d6
    ctx->pc = 0x212BA4u;
    SET_GPR_U32(ctx, 31, 0x212BACu);
    ctx->pc = 0x212BA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212758u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateNode_0x212758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212BACu; }
    }
    if (ctx->pc != 0x212BACu) { return; }
    ctx->pc = 0x212BACu;
label_212bac:
    // 0x212bac: 0x220102d
    ctx->pc = 0x212bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bb0: 0xdfbf0040
    ctx->pc = 0x212bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212bb4: 0xdfb30030
    ctx->pc = 0x212bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212bb8: 0xdfb20020
    ctx->pc = 0x212bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212bbc: 0xdfb10010
    ctx->pc = 0x212bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212bc0: 0xdfb00000
    ctx->pc = 0x212bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212bc4: 0x3e00008
    ctx->pc = 0x212BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212BC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212BACu: goto label_212bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212BCCu;
}
