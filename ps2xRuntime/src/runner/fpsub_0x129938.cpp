#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpsub
// Address: 0x129938 - 0x12999c
void fpsub_0x129938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129938u;

    // 0x129938: 0x27bdffa0
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12993c: 0xffb00040
    ctx->pc = 0x12993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x129940: 0x27a40030
    ctx->pc = 0x129940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x129944: 0xffbf0050
    ctx->pc = 0x129944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x129948: 0x3a0282d
    ctx->pc = 0x129948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12994c: 0xe7ac0030
    ctx->pc = 0x12994cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x129950: 0xc04a586
    ctx->pc = 0x129950u;
    SET_GPR_U32(ctx, 31, 0x129958u);
    ctx->pc = 0x129954u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129958u; }
    }
    if (ctx->pc != 0x129958u) { return; }
    ctx->pc = 0x129958u;
    // 0x129958: 0x27b00010
    ctx->pc = 0x129958u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x12995c: 0x27a40034
    ctx->pc = 0x12995cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x129960: 0xc04a586
    ctx->pc = 0x129960u;
    SET_GPR_U32(ctx, 31, 0x129968u);
    ctx->pc = 0x129964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129968u; }
    }
    if (ctx->pc != 0x129968u) { return; }
    ctx->pc = 0x129968u;
    // 0x129968: 0x8fa20014
    ctx->pc = 0x129968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12996c: 0x200282d
    ctx->pc = 0x12996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129970: 0x27a60020
    ctx->pc = 0x129970u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x129974: 0x3a0202d
    ctx->pc = 0x129974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129978: 0x38420001
    ctx->pc = 0x129978u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x12997c: 0xc04a5aa
    ctx->pc = 0x12997Cu;
    SET_GPR_U32(ctx, 31, 0x129984u);
    ctx->pc = 0x129980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1296A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x1296a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129984u; }
    }
    if (ctx->pc != 0x129984u) { return; }
    ctx->pc = 0x129984u;
    // 0x129984: 0xc04a542
    ctx->pc = 0x129984u;
    SET_GPR_U32(ctx, 31, 0x12998Cu);
    ctx->pc = 0x129988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129508u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12998Cu; }
    }
    if (ctx->pc != 0x12998Cu) { return; }
    ctx->pc = 0x12998Cu;
    // 0x12998c: 0xdfbf0050
    ctx->pc = 0x12998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129990: 0xdfb00040
    ctx->pc = 0x129990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129994: 0x3e00008
    ctx->pc = 0x129994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12999Cu;
}
