#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fpsub
// Address: 0x14bf38 - 0x14bf9c
void fpsub_0x14bf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fpsub");


    ctx->pc = 0x14bf38u;

    // 0x14bf38: 0x27bdffa0
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14bf3c: 0xffb00040
    ctx->pc = 0x14bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x14bf40: 0x27a40030
    ctx->pc = 0x14bf40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x14bf44: 0xffbf0050
    ctx->pc = 0x14bf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14bf48: 0x3a0282d
    ctx->pc = 0x14bf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf4c: 0xe7ac0030
    ctx->pc = 0x14bf4cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14bf50: 0xc052f06
    ctx->pc = 0x14BF50u;
    SET_GPR_U32(ctx, 31, 0x14BF58u);
    ctx->pc = 0x14BF54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF58u; }
        else if (ctx->pc != 0x14BF58u) { ctx->pc = 0x14BF58u; }
    }
    if (ctx->pc != 0x14BF58u) { return; }
    ctx->pc = 0x14BF58u;
    // 0x14bf58: 0x27b00010
    ctx->pc = 0x14bf58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14bf5c: 0x27a40034
    ctx->pc = 0x14bf5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x14bf60: 0xc052f06
    ctx->pc = 0x14BF60u;
    SET_GPR_U32(ctx, 31, 0x14BF68u);
    ctx->pc = 0x14BF64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF68u; }
        else if (ctx->pc != 0x14BF68u) { ctx->pc = 0x14BF68u; }
    }
    if (ctx->pc != 0x14BF68u) { return; }
    ctx->pc = 0x14BF68u;
    // 0x14bf68: 0x8fa20014
    ctx->pc = 0x14bf68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14bf6c: 0x200282d
    ctx->pc = 0x14bf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf70: 0x27a60020
    ctx->pc = 0x14bf70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14bf74: 0x3a0202d
    ctx->pc = 0x14bf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf78: 0x38420001
    ctx->pc = 0x14bf78u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x14bf7c: 0xc052f2a
    ctx->pc = 0x14BF7Cu;
    SET_GPR_U32(ctx, 31, 0x14BF84u);
    ctx->pc = 0x14BF80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x14BCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x14bca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF84u; }
        else if (ctx->pc != 0x14BF84u) { ctx->pc = 0x14BF84u; }
    }
    if (ctx->pc != 0x14BF84u) { return; }
    ctx->pc = 0x14BF84u;
    // 0x14bf84: 0xc052ec2
    ctx->pc = 0x14BF84u;
    SET_GPR_U32(ctx, 31, 0x14BF8Cu);
    ctx->pc = 0x14BF88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x14bb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF8Cu; }
        else if (ctx->pc != 0x14BF8Cu) { ctx->pc = 0x14BF8Cu; }
    }
    if (ctx->pc != 0x14BF8Cu) { return; }
    ctx->pc = 0x14BF8Cu;
    // 0x14bf8c: 0xdfbf0050
    ctx->pc = 0x14bf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14bf90: 0xdfb00040
    ctx->pc = 0x14bf90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bf94: 0x3e00008
    ctx->pc = 0x14BF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BF98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BF9Cu;
}
