#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpsub
// Address: 0x2f8d58 - 0x2f8dbc
void dpsub_0x2f8d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f8d58u;

    // 0x2f8d58: 0x27bdff70
    ctx->pc = 0x2f8d58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f8d5c: 0xffa40060
    ctx->pc = 0x2f8d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2f8d60: 0xffa50068
    ctx->pc = 0x2f8d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2f8d64: 0x27a40060
    ctx->pc = 0x2f8d64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f8d68: 0xffb00070
    ctx->pc = 0x2f8d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2f8d6c: 0xffbf0080
    ctx->pc = 0x2f8d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f8d70: 0xc0be288
    ctx->pc = 0x2F8D70u;
    SET_GPR_U32(ctx, 31, 0x2F8D78u);
    ctx->pc = 0x2F8D74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D78u; }
    }
    if (ctx->pc != 0x2F8D78u) { return; }
    ctx->pc = 0x2F8D78u;
    // 0x2f8d78: 0x27b00020
    ctx->pc = 0x2f8d78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f8d7c: 0x27a40068
    ctx->pc = 0x2f8d7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x2f8d80: 0xc0be288
    ctx->pc = 0x2F8D80u;
    SET_GPR_U32(ctx, 31, 0x2F8D88u);
    ctx->pc = 0x2F8D84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D88u; }
    }
    if (ctx->pc != 0x2F8D88u) { return; }
    ctx->pc = 0x2F8D88u;
    // 0x2f8d88: 0x8fa20024
    ctx->pc = 0x2f8d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f8d8c: 0x200282d
    ctx->pc = 0x2f8d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d90: 0x27a60040
    ctx->pc = 0x2f8d90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f8d94: 0x3a0202d
    ctx->pc = 0x2f8d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d98: 0x38420001
    ctx->pc = 0x2f8d98u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2f8d9c: 0xc0be2b0
    ctx->pc = 0x2F8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2F8DA4u);
    ctx->pc = 0x2F8DA0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x2F8AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x2f8ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DA4u; }
    }
    if (ctx->pc != 0x2F8DA4u) { return; }
    ctx->pc = 0x2F8DA4u;
    // 0x2f8da4: 0xc0be23c
    ctx->pc = 0x2F8DA4u;
    SET_GPR_U32(ctx, 31, 0x2F8DACu);
    ctx->pc = 0x2F8DA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F88F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x2f88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DACu; }
    }
    if (ctx->pc != 0x2F8DACu) { return; }
    ctx->pc = 0x2F8DACu;
    // 0x2f8dac: 0xdfbf0080
    ctx->pc = 0x2f8dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f8db0: 0xdfb00070
    ctx->pc = 0x2f8db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8db4: 0x3e00008
    ctx->pc = 0x2F8DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8DBCu;
}
