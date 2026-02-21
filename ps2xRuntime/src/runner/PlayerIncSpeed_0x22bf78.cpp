#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerIncSpeed
// Address: 0x22bf78 - 0x22bfb0
void PlayerIncSpeed_0x22bf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22bf78u;

    // 0x22bf78: 0x80302d
    ctx->pc = 0x22bf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf7c: 0x8cc2000c
    ctx->pc = 0x22bf7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bf80: 0x24030018
    ctx->pc = 0x22bf80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22bf84: 0x431018
    ctx->pc = 0x22bf84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22bf88: 0x24c309c0
    ctx->pc = 0x22bf88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 2496));
    // 0x22bf8c: 0x621821
    ctx->pc = 0x22bf8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bf90: 0x44850000
    ctx->pc = 0x22bf90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x22bf94: 0x46800020
    ctx->pc = 0x22bf94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22bf98: 0xc4610000
    ctx->pc = 0x22bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf9c: 0x46010000
    ctx->pc = 0x22bf9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bfa0: 0xe4600000
    ctx->pc = 0x22bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22bfa4: 0x8cc5000c
    ctx->pc = 0x22bfa4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bfa8: 0x808af08
    ctx->pc = 0x22BFA8u;
    ctx->pc = 0x22BFACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime); return;
    ctx->pc = 0x22BFB0u;
}
