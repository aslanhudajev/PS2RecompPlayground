#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBResetFontData
// Address: 0x2c4710 - 0x2c4788
void MBResetFontData_0x2c4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4710u;

    // 0x2c4710: 0x3c03003d
    ctx->pc = 0x2c4710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c4714: 0x3c02003d
    ctx->pc = 0x2c4714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4718: 0xac401f70
    ctx->pc = 0x2c4718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8048), GPR_U32(ctx, 0));
    // 0x2c471c: 0xac60c958
    ctx->pc = 0x2c471cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953304), GPR_U32(ctx, 0));
    // 0x2c4720: 0x3c02003d
    ctx->pc = 0x2c4720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c4724: 0x2404ffff
    ctx->pc = 0x2c4724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4728: 0xac44b8a0
    ctx->pc = 0x2c4728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949024), GPR_U32(ctx, 4));
    // 0x2c472c: 0x3c030038
    ctx->pc = 0x2c472cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c4730: 0x3c020038
    ctx->pc = 0x2c4730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4734: 0x3c013f80
    ctx->pc = 0x2c4734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c4738: 0x44810000
    ctx->pc = 0x2c4738u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c473c: 0xe440b160
    ctx->pc = 0x2c473cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947168), bits); }
    // 0x2c4740: 0xe460b15c
    ctx->pc = 0x2c4740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947164), bits); }
    // 0x2c4744: 0x3c030038
    ctx->pc = 0x2c4744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c4748: 0x3c020038
    ctx->pc = 0x2c4748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c474c: 0xe440b168
    ctx->pc = 0x2c474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947176), bits); }
    // 0x2c4750: 0xe460b164
    ctx->pc = 0x2c4750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947172), bits); }
    // 0x2c4754: 0x3c020038
    ctx->pc = 0x2c4754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4758: 0xac40b170
    ctx->pc = 0x2c4758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947184), GPR_U32(ctx, 0));
    // 0x2c475c: 0x3c020038
    ctx->pc = 0x2c475cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4760: 0x3c013e80
    ctx->pc = 0x2c4760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2c4764: 0x44810000
    ctx->pc = 0x2c4764u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c4768: 0xe440b174
    ctx->pc = 0x2c4768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947188), bits); }
    // 0x2c476c: 0x3c030038
    ctx->pc = 0x2c476cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c4770: 0x3c028080
    ctx->pc = 0x2c4770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32896 << 16));
    // 0x2c4774: 0x34428080
    ctx->pc = 0x2c4774u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32896));
    // 0x2c4778: 0xac62b16c
    ctx->pc = 0x2c4778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947180), GPR_U32(ctx, 2));
    // 0x2c477c: 0x3c020038
    ctx->pc = 0x2c477cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c4780: 0x3e00008
    ctx->pc = 0x2C4780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4784u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947120), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4788u;
}
