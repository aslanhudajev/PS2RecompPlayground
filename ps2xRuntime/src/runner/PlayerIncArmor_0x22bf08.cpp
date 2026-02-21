#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerIncArmor
// Address: 0x22bf08 - 0x22bf40
void PlayerIncArmor_0x22bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22bf08u;

    // 0x22bf08: 0x80302d
    ctx->pc = 0x22bf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf0c: 0x8cc2000c
    ctx->pc = 0x22bf0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bf10: 0x24030018
    ctx->pc = 0x22bf10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22bf14: 0x431018
    ctx->pc = 0x22bf14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22bf18: 0x24c309b8
    ctx->pc = 0x22bf18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 2488));
    // 0x22bf1c: 0x621821
    ctx->pc = 0x22bf1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bf20: 0x44850000
    ctx->pc = 0x22bf20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x22bf24: 0x46800020
    ctx->pc = 0x22bf24u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22bf28: 0xc4610000
    ctx->pc = 0x22bf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bf2c: 0x46010000
    ctx->pc = 0x22bf2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22bf30: 0xe4600000
    ctx->pc = 0x22bf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22bf34: 0x8cc5000c
    ctx->pc = 0x22bf34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22bf38: 0x808af08
    ctx->pc = 0x22BF38u;
    ctx->pc = 0x22BF3Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime); return;
    ctx->pc = 0x22BF40u;
}
