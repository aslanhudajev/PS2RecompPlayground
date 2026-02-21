#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDelAnimInst
// Address: 0x292a58 - 0x292aa4
void CritterDelAnimInst_0x292a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292a58u;

    // 0x292a58: 0x27bdffe0
    ctx->pc = 0x292a58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292a5c: 0xffbf0010
    ctx->pc = 0x292a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292a60: 0xffb00000
    ctx->pc = 0x292a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292a64: 0x80802d
    ctx->pc = 0x292a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292a68: 0x8e020000
    ctx->pc = 0x292a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x292a6c: 0x50400004
    ctx->pc = 0x292A6Cu;
    {
        const bool branch_taken_0x292a6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x292a6c) {
            ctx->pc = 0x292A70u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->pc = 0x292A80u;
            goto label_292a80;
        }
    }
    ctx->pc = 0x292A74u;
    // 0x292a74: 0xc08496c
    ctx->pc = 0x292A74u;
    SET_GPR_U32(ctx, 31, 0x292A7Cu);
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A7Cu; }
    }
    if (ctx->pc != 0x292A7Cu) { return; }
    ctx->pc = 0x292A7Cu;
    // 0x292a7c: 0x8e040048
    ctx->pc = 0x292a7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_292a80:
    // 0x292a80: 0x50800004
    ctx->pc = 0x292A80u;
    {
        const bool branch_taken_0x292a80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x292a80) {
            ctx->pc = 0x292A84u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
            ctx->pc = 0x292A94u;
            goto label_292a94;
        }
    }
    ctx->pc = 0x292A88u;
    // 0x292a88: 0xc0b3f1a
    ctx->pc = 0x292A88u;
    SET_GPR_U32(ctx, 31, 0x292A90u);
    ctx->pc = 0x292A8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A90u; }
    }
    if (ctx->pc != 0x292A90u) { return; }
    ctx->pc = 0x292A90u;
    // 0x292a90: 0xae000048
    ctx->pc = 0x292a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_292a94:
    // 0x292a94: 0xdfbf0010
    ctx->pc = 0x292a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292a98: 0xdfb00000
    ctx->pc = 0x292a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292a9c: 0x3e00008
    ctx->pc = 0x292A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292AA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292A80u: goto label_292a80;
            case 0x292A94u: goto label_292a94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292AA4u;
}
