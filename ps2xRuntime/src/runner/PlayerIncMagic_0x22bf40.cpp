#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerIncMagic
// Address: 0x22bf40 - 0x22bf78
void PlayerIncMagic_0x22bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22bf40u;

    // 0x22bf40: 0x80302d
    ctx->pc = 0x22bf40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf44: 0x8cc2000c
    ctx->pc = 0x22bf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bf48: 0x24030018
    ctx->pc = 0x22bf48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22bf4c: 0x431018
    ctx->pc = 0x22bf4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22bf50: 0x24c309bc
    ctx->pc = 0x22bf50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 2492));
    // 0x22bf54: 0x621821
    ctx->pc = 0x22bf54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bf58: 0x44850000
    ctx->pc = 0x22bf58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x22bf5c: 0x46800020
    ctx->pc = 0x22bf5cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22bf60: 0xc4610000
    ctx->pc = 0x22bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf64: 0x46010000
    ctx->pc = 0x22bf64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bf68: 0xe4600000
    ctx->pc = 0x22bf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22bf6c: 0x8cc5000c
    ctx->pc = 0x22bf6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bf70: 0x808af08
    ctx->pc = 0x22BF70u;
    ctx->pc = 0x22BF74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime); return;
    ctx->pc = 0x22BF78u;
}
