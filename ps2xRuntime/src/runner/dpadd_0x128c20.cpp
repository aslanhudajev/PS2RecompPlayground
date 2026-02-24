#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpadd
// Address: 0x128c20 - 0x128c78
void dpadd_0x128c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x128c20u;

    // 0x128c20: 0x27bdff70
    ctx->pc = 0x128c20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x128c24: 0xffa40060
    ctx->pc = 0x128c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x128c28: 0xffa50068
    ctx->pc = 0x128c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x128c2c: 0x27a40060
    ctx->pc = 0x128c2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x128c30: 0xffb00070
    ctx->pc = 0x128c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x128c34: 0xffbf0080
    ctx->pc = 0x128c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x128c38: 0xc04a250
    ctx->pc = 0x128C38u;
    SET_GPR_U32(ctx, 31, 0x128C40u);
    ctx->pc = 0x128C3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C40u; }
    }
    if (ctx->pc != 0x128C40u) { return; }
    ctx->pc = 0x128C40u;
    // 0x128c40: 0x27b00020
    ctx->pc = 0x128c40u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x128c44: 0x27a40068
    ctx->pc = 0x128c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x128c48: 0xc04a250
    ctx->pc = 0x128C48u;
    SET_GPR_U32(ctx, 31, 0x128C50u);
    ctx->pc = 0x128C4Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C50u; }
    }
    if (ctx->pc != 0x128C50u) { return; }
    ctx->pc = 0x128C50u;
    // 0x128c50: 0x200282d
    ctx->pc = 0x128c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c54: 0x27a60040
    ctx->pc = 0x128c54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x128c58: 0xc04a278
    ctx->pc = 0x128C58u;
    SET_GPR_U32(ctx, 31, 0x128C60u);
    ctx->pc = 0x128C5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1289E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x1289e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C60u; }
    }
    if (ctx->pc != 0x128C60u) { return; }
    ctx->pc = 0x128C60u;
    // 0x128c60: 0xc04a204
    ctx->pc = 0x128C60u;
    SET_GPR_U32(ctx, 31, 0x128C68u);
    ctx->pc = 0x128C64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x128810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x128810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C68u; }
    }
    if (ctx->pc != 0x128C68u) { return; }
    ctx->pc = 0x128C68u;
    // 0x128c68: 0xdfbf0080
    ctx->pc = 0x128c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x128c6c: 0xdfb00070
    ctx->pc = 0x128c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x128c70: 0x3e00008
    ctx->pc = 0x128C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128C74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128C78u;
}
