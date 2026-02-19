#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fpcmp
// Address: 0x2f9ef0 - 0x2f9f3c
void fpcmp_0x2f9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9ef0u;

    // 0x2f9ef0: 0x27bdffb0
    ctx->pc = 0x2f9ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9ef4: 0xffb00030
    ctx->pc = 0x2f9ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f9ef8: 0x27a40020
    ctx->pc = 0x2f9ef8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f9efc: 0xffbf0040
    ctx->pc = 0x2f9efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f9f00: 0x3a0282d
    ctx->pc = 0x2f9f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f04: 0xe7ac0020
    ctx->pc = 0x2f9f04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2f9f08: 0xc0be5be
    ctx->pc = 0x2F9F08u;
    SET_GPR_U32(ctx, 31, 0x2F9F10u);
    ctx->pc = 0x2F9F0Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F10u; }
    }
    if (ctx->pc != 0x2F9F10u) { return; }
    ctx->pc = 0x2F9F10u;
    // 0x2f9f10: 0x27b00010
    ctx->pc = 0x2f9f10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f9f14: 0x27a40024
    ctx->pc = 0x2f9f14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 36));
    // 0x2f9f18: 0xc0be5be
    ctx->pc = 0x2F9F18u;
    SET_GPR_U32(ctx, 31, 0x2F9F20u);
    ctx->pc = 0x2F9F1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F96F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x2f96f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F20u; }
    }
    if (ctx->pc != 0x2F9F20u) { return; }
    ctx->pc = 0x2F9F20u;
    // 0x2f9f20: 0x200282d
    ctx->pc = 0x2f9f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f24: 0xc0be776
    ctx->pc = 0x2F9F24u;
    SET_GPR_U32(ctx, 31, 0x2F9F2Cu);
    ctx->pc = 0x2F9F28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_f_0x2f9dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F2Cu; }
    }
    if (ctx->pc != 0x2F9F2Cu) { return; }
    ctx->pc = 0x2F9F2Cu;
    // 0x2f9f2c: 0xdfbf0040
    ctx->pc = 0x2f9f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9f30: 0xdfb00030
    ctx->pc = 0x2f9f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9f34: 0x3e00008
    ctx->pc = 0x2F9F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9F38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9F3Cu;
}
