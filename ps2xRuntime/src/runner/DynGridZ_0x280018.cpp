#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DynGridZ
// Address: 0x280018 - 0x280054
void DynGridZ_0x280018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280018u;

    // 0x280018: 0x3c020035
    ctx->pc = 0x280018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28001c: 0xc44096b0
    ctx->pc = 0x28001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280020: 0x46006301
    ctx->pc = 0x280020u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x280024: 0x3c020035
    ctx->pc = 0x280024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280028: 0xc44096a8
    ctx->pc = 0x280028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28002c: 0x46006302
    ctx->pc = 0x28002cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x280030: 0x46006024
    ctx->pc = 0x280030u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x280034: 0x44020000
    ctx->pc = 0x280034u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x280038: 0x2403ffff
    ctx->pc = 0x280038u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28003c: 0x62182a
    ctx->pc = 0x28003cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x280040: 0x3100a
    ctx->pc = 0x280040u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x280044: 0x28440040
    ctx->pc = 0x280044u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 64));
    // 0x280048: 0x2403003f
    ctx->pc = 0x280048u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x28004c: 0x3e00008
    ctx->pc = 0x28004Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280050u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280054u;
}
