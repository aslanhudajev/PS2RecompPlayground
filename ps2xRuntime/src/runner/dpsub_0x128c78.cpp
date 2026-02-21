#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpsub
// Address: 0x128c78 - 0x128cdc
void dpsub_0x128c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128c78u;

    // 0x128c78: 0x27bdff70
    ctx->pc = 0x128c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x128c7c: 0xffa40060
    ctx->pc = 0x128c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x128c80: 0xffa50068
    ctx->pc = 0x128c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x128c84: 0x27a40060
    ctx->pc = 0x128c84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x128c88: 0xffb00070
    ctx->pc = 0x128c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x128c8c: 0xffbf0080
    ctx->pc = 0x128c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x128c90: 0xc04a250
    ctx->pc = 0x128C90u;
    SET_GPR_U32(ctx, 31, 0x128C98u);
    ctx->pc = 0x128C94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C98u; }
    }
    if (ctx->pc != 0x128C98u) { return; }
    ctx->pc = 0x128C98u;
    // 0x128c98: 0x27b00020
    ctx->pc = 0x128c98u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x128c9c: 0x27a40068
    ctx->pc = 0x128c9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x128ca0: 0xc04a250
    ctx->pc = 0x128CA0u;
    SET_GPR_U32(ctx, 31, 0x128CA8u);
    ctx->pc = 0x128CA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CA8u; }
    }
    if (ctx->pc != 0x128CA8u) { return; }
    ctx->pc = 0x128CA8u;
    // 0x128ca8: 0x8fa20024
    ctx->pc = 0x128ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x128cac: 0x200282d
    ctx->pc = 0x128cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cb0: 0x27a60040
    ctx->pc = 0x128cb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x128cb4: 0x3a0202d
    ctx->pc = 0x128cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cb8: 0x38420001
    ctx->pc = 0x128cb8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x128cbc: 0xc04a278
    ctx->pc = 0x128CBCu;
    SET_GPR_U32(ctx, 31, 0x128CC4u);
    ctx->pc = 0x128CC0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x1289E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x1289e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CC4u; }
    }
    if (ctx->pc != 0x128CC4u) { return; }
    ctx->pc = 0x128CC4u;
    // 0x128cc4: 0xc04a204
    ctx->pc = 0x128CC4u;
    SET_GPR_U32(ctx, 31, 0x128CCCu);
    ctx->pc = 0x128CC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x128810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CCCu; }
    }
    if (ctx->pc != 0x128CCCu) { return; }
    ctx->pc = 0x128CCCu;
    // 0x128ccc: 0xdfbf0080
    ctx->pc = 0x128cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128cd0: 0xdfb00070
    ctx->pc = 0x128cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128cd4: 0x3e00008
    ctx->pc = 0x128CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128CDCu;
}
