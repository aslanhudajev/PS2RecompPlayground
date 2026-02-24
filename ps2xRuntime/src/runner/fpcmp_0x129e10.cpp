#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpcmp
// Address: 0x129e10 - 0x129e5c
void fpcmp_0x129e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129e10u;

    // 0x129e10: 0x27bdffb0
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x129e14: 0xffb00030
    ctx->pc = 0x129e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x129e18: 0x27a40020
    ctx->pc = 0x129e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x129e1c: 0xffbf0040
    ctx->pc = 0x129e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x129e20: 0x3a0282d
    ctx->pc = 0x129e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e24: 0xe7ac0020
    ctx->pc = 0x129e24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x129e28: 0xc04a586
    ctx->pc = 0x129E28u;
    SET_GPR_U32(ctx, 31, 0x129E30u);
    ctx->pc = 0x129E2Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E30u; }
    }
    if (ctx->pc != 0x129E30u) { return; }
    ctx->pc = 0x129E30u;
    // 0x129e30: 0x27b00010
    ctx->pc = 0x129e30u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x129e34: 0x27a40024
    ctx->pc = 0x129e34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 36));
    // 0x129e38: 0xc04a586
    ctx->pc = 0x129E38u;
    SET_GPR_U32(ctx, 31, 0x129E40u);
    ctx->pc = 0x129E3Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129618u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E40u; }
    }
    if (ctx->pc != 0x129E40u) { return; }
    ctx->pc = 0x129E40u;
    // 0x129e40: 0x200282d
    ctx->pc = 0x129e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e44: 0xc04a73e
    ctx->pc = 0x129E44u;
    SET_GPR_U32(ctx, 31, 0x129E4Cu);
    ctx->pc = 0x129E48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_f_0x129cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E4Cu; }
    }
    if (ctx->pc != 0x129E4Cu) { return; }
    ctx->pc = 0x129E4Cu;
    // 0x129e4c: 0xdfbf0040
    ctx->pc = 0x129e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129e50: 0xdfb00030
    ctx->pc = 0x129e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129e54: 0x3e00008
    ctx->pc = 0x129E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129E58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129E5Cu;
}
