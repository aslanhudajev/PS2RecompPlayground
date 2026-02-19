#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerIncFight
// Address: 0x22bed0 - 0x22bf08
void PlayerIncFight_0x22bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22bed0u;

    // 0x22bed0: 0x80302d
    ctx->pc = 0x22bed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bed4: 0x8cc2000c
    ctx->pc = 0x22bed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bed8: 0x24030018
    ctx->pc = 0x22bed8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22bedc: 0x431018
    ctx->pc = 0x22bedcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22bee0: 0x24c309b4
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 2484));
    // 0x22bee4: 0x621821
    ctx->pc = 0x22bee4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bee8: 0x44850000
    ctx->pc = 0x22bee8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x22beec: 0x46800020
    ctx->pc = 0x22beecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22bef0: 0xc4610000
    ctx->pc = 0x22bef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bef4: 0x46010000
    ctx->pc = 0x22bef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bef8: 0xe4600000
    ctx->pc = 0x22bef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22befc: 0x8cc5000c
    ctx->pc = 0x22befcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bf00: 0x808af08
    ctx->pc = 0x22BF00u;
    ctx->pc = 0x22BF04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime); return;
    ctx->pc = 0x22BF08u;
}
