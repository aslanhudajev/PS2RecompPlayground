#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpadd
// Address: 0x2f99c0 - 0x2f9a18
void fpadd_0x2f99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f99c0u;

    // 0x2f99c0: 0x27bdffa0
    ctx->pc = 0x2f99c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f99c4: 0xffb00040
    ctx->pc = 0x2f99c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2f99c8: 0x27a40030
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f99cc: 0xffbf0050
    ctx->pc = 0x2f99ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f99d0: 0x3a0282d
    ctx->pc = 0x2f99d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99d4: 0xe7ac0030
    ctx->pc = 0x2f99d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f99d8: 0xc0be5be
    ctx->pc = 0x2F99D8u;
    SET_GPR_U32(ctx, 31, 0x2F99E0u);
    ctx->pc = 0x2F99DCu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99E0u; }
    }
    if (ctx->pc != 0x2F99E0u) { return; }
    ctx->pc = 0x2F99E0u;
    // 0x2f99e0: 0x27b00010
    ctx->pc = 0x2f99e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f99e4: 0x27a40034
    ctx->pc = 0x2f99e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x2f99e8: 0xc0be5be
    ctx->pc = 0x2F99E8u;
    SET_GPR_U32(ctx, 31, 0x2F99F0u);
    ctx->pc = 0x2F99ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F99F0u; }
    }
    if (ctx->pc != 0x2F99F0u) { return; }
    ctx->pc = 0x2F99F0u;
    // 0x2f99f0: 0x200282d
    ctx->pc = 0x2f99f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f99f4: 0x27a60020
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f99f8: 0xc0be5e2
    ctx->pc = 0x2F99F8u;
    SET_GPR_U32(ctx, 31, 0x2F9A00u);
    ctx->pc = 0x2F99FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9788u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x2f9788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A00u; }
    }
    if (ctx->pc != 0x2F9A00u) { return; }
    ctx->pc = 0x2F9A00u;
    // 0x2f9a00: 0xc0be57a
    ctx->pc = 0x2F9A00u;
    SET_GPR_U32(ctx, 31, 0x2F9A08u);
    ctx->pc = 0x2F9A04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F95E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x2f95e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9A08u; }
    }
    if (ctx->pc != 0x2F9A08u) { return; }
    ctx->pc = 0x2F9A08u;
    // 0x2f9a08: 0xdfbf0050
    ctx->pc = 0x2f9a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9a0c: 0xdfb00040
    ctx->pc = 0x2f9a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9a10: 0x3e00008
    ctx->pc = 0x2F9A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9A14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9A18u;
}
