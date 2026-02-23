#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fpadd
// Address: 0x14bee0 - 0x14bf38
void fpadd_0x14bee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fpadd");


    ctx->pc = 0x14bee0u;

    // 0x14bee0: 0x27bdffa0
    ctx->pc = 0x14bee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14bee4: 0xffb00040
    ctx->pc = 0x14bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x14bee8: 0x27a40030
    ctx->pc = 0x14bee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x14beec: 0xffbf0050
    ctx->pc = 0x14beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14bef0: 0x3a0282d
    ctx->pc = 0x14bef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bef4: 0xe7ac0030
    ctx->pc = 0x14bef4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14bef8: 0xc052f06
    ctx->pc = 0x14BEF8u;
    SET_GPR_U32(ctx, 31, 0x14BF00u);
    ctx->pc = 0x14BEFCu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF00u; }
        else if (ctx->pc != 0x14BF00u) { ctx->pc = 0x14BF00u; }
    }
    if (ctx->pc != 0x14BF00u) { return; }
    ctx->pc = 0x14BF00u;
    // 0x14bf00: 0x27b00010
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14bf04: 0x27a40034
    ctx->pc = 0x14bf04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 52));
    // 0x14bf08: 0xc052f06
    ctx->pc = 0x14BF08u;
    SET_GPR_U32(ctx, 31, 0x14BF10u);
    ctx->pc = 0x14BF0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x14bc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF10u; }
        else if (ctx->pc != 0x14BF10u) { ctx->pc = 0x14BF10u; }
    }
    if (ctx->pc != 0x14BF10u) { return; }
    ctx->pc = 0x14BF10u;
    // 0x14bf10: 0x200282d
    ctx->pc = 0x14bf10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bf14: 0x27a60020
    ctx->pc = 0x14bf14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14bf18: 0xc052f2a
    ctx->pc = 0x14BF18u;
    SET_GPR_U32(ctx, 31, 0x14BF20u);
    ctx->pc = 0x14BF1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x14bca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF20u; }
        else if (ctx->pc != 0x14BF20u) { ctx->pc = 0x14BF20u; }
    }
    if (ctx->pc != 0x14BF20u) { return; }
    ctx->pc = 0x14BF20u;
    // 0x14bf20: 0xc052ec2
    ctx->pc = 0x14BF20u;
    SET_GPR_U32(ctx, 31, 0x14BF28u);
    ctx->pc = 0x14BF24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x14bb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BF28u; }
        else if (ctx->pc != 0x14BF28u) { ctx->pc = 0x14BF28u; }
    }
    if (ctx->pc != 0x14BF28u) { return; }
    ctx->pc = 0x14BF28u;
    // 0x14bf28: 0xdfbf0050
    ctx->pc = 0x14bf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14bf2c: 0xdfb00040
    ctx->pc = 0x14bf2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bf30: 0x3e00008
    ctx->pc = 0x14BF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BF34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BF38u;
}
