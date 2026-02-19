#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpsub
// Address: 0x2f9a18 - 0x2f9a7c
void fpsub_0x2f9a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9a18u;

    // 0x2f9a18: 0x27bdffa0
    ctx->pc = 0x2f9a18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f9a1c: 0xffb00040
    ctx->pc = 0x2f9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2f9a20: 0x27a40030
    ctx->pc = 0x2f9a20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f9a24: 0xffbf0050
    ctx->pc = 0x2f9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f9a28: 0x3a0282d
    ctx->pc = 0x2f9a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a2c: 0xe7ac0030
    ctx->pc = 0x2f9a2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f9a30: 0xc0be5be
    ctx->pc = 0x2F9A30u;
    SET_GPR_U32(ctx, 31, 0x2F9A38u);
    ctx->pc = 0x2F9A34u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A38u; }
    }
    if (ctx->pc != 0x2F9A38u) { return; }
    ctx->pc = 0x2F9A38u;
    // 0x2f9a38: 0x27b00010
    ctx->pc = 0x2f9a38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f9a3c: 0x27a40034
    ctx->pc = 0x2f9a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x2f9a40: 0xc0be5be
    ctx->pc = 0x2F9A40u;
    SET_GPR_U32(ctx, 31, 0x2F9A48u);
    ctx->pc = 0x2F9A44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A48u; }
    }
    if (ctx->pc != 0x2F9A48u) { return; }
    ctx->pc = 0x2F9A48u;
    // 0x2f9a48: 0x8fa20014
    ctx->pc = 0x2f9a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f9a4c: 0x200282d
    ctx->pc = 0x2f9a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a50: 0x27a60020
    ctx->pc = 0x2f9a50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f9a54: 0x3a0202d
    ctx->pc = 0x2f9a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9a58: 0x38420001
    ctx->pc = 0x2f9a58u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2f9a5c: 0xc0be5e2
    ctx->pc = 0x2F9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9A64u);
    ctx->pc = 0x2F9A60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x2F9788u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x2f9788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A64u; }
    }
    if (ctx->pc != 0x2F9A64u) { return; }
    ctx->pc = 0x2F9A64u;
    // 0x2f9a64: 0xc0be57a
    ctx->pc = 0x2F9A64u;
    SET_GPR_U32(ctx, 31, 0x2F9A6Cu);
    ctx->pc = 0x2F9A68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F95E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x2f95e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A6Cu; }
    }
    if (ctx->pc != 0x2F9A6Cu) { return; }
    ctx->pc = 0x2F9A6Cu;
    // 0x2f9a6c: 0xdfbf0050
    ctx->pc = 0x2f9a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9a70: 0xdfb00040
    ctx->pc = 0x2f9a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9a74: 0x3e00008
    ctx->pc = 0x2F9A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9A7Cu;
}
