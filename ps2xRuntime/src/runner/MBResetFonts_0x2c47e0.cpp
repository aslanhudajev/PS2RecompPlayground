#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBResetFonts
// Address: 0x2c47e0 - 0x2c4850
void MBResetFonts_0x2c47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c47e0u;

    // 0x2c47e0: 0x3c03003d
    ctx->pc = 0x2c47e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c47e4: 0x3c02003d
    ctx->pc = 0x2c47e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c47e8: 0xac401f70
    ctx->pc = 0x2c47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8048), GPR_U32(ctx, 0));
    // 0x2c47ec: 0xac60c958
    ctx->pc = 0x2c47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953304), GPR_U32(ctx, 0));
    // 0x2c47f0: 0x3c03003d
    ctx->pc = 0x2c47f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c47f4: 0x2402ffff
    ctx->pc = 0x2c47f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c47f8: 0xac62b8a0
    ctx->pc = 0x2c47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949024), GPR_U32(ctx, 2));
    // 0x2c47fc: 0x3c030038
    ctx->pc = 0x2c47fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c4800: 0x3c020038
    ctx->pc = 0x2c4800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4804: 0x3c013f80
    ctx->pc = 0x2c4804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c4808: 0x44810000
    ctx->pc = 0x2c4808u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c480c: 0xe440b160
    ctx->pc = 0x2c480cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947168), bits); }
    // 0x2c4810: 0xe460b15c
    ctx->pc = 0x2c4810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947164), bits); }
    // 0x2c4814: 0x3c030038
    ctx->pc = 0x2c4814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c4818: 0x3c020038
    ctx->pc = 0x2c4818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c481c: 0xe440b168
    ctx->pc = 0x2c481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947176), bits); }
    // 0x2c4820: 0xe460b164
    ctx->pc = 0x2c4820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947172), bits); }
    // 0x2c4824: 0x3c020038
    ctx->pc = 0x2c4824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4828: 0xac40b170
    ctx->pc = 0x2c4828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947184), GPR_U32(ctx, 0));
    // 0x2c482c: 0x3c020038
    ctx->pc = 0x2c482cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4830: 0x3c013e80
    ctx->pc = 0x2c4830u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2c4834: 0x44810000
    ctx->pc = 0x2c4834u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c4838: 0xe440b174
    ctx->pc = 0x2c4838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947188), bits); }
    // 0x2c483c: 0x3c030038
    ctx->pc = 0x2c483cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c4840: 0x3c028080
    ctx->pc = 0x2c4840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
    // 0x2c4844: 0x34428080
    ctx->pc = 0x2c4844u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
    // 0x2c4848: 0x3e00008
    ctx->pc = 0x2C4848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C484Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947180), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4850u;
}
