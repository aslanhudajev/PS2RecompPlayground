#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMagic
// Address: 0x22c010 - 0x22c040
void GetMagic_0x22c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c010u;

    // 0x22c010: 0x3c030032
    ctx->pc = 0x22c010u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22c014: 0x246215f0
    ctx->pc = 0x22c014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 5616));
    // 0x22c018: 0x3c013a83
    ctx->pc = 0x22c018u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x22c01c: 0x3421126f
    ctx->pc = 0x22c01cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x22c020: 0x44810000
    ctx->pc = 0x22c020u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22c024: 0x46006302
    ctx->pc = 0x22c024u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22c028: 0xc4410004
    ctx->pc = 0x22c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c02c: 0xc46015f0
    ctx->pc = 0x22c02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c030: 0x46000841
    ctx->pc = 0x22c030u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c034: 0x46016302
    ctx->pc = 0x22c034u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x22c038: 0x3e00008
    ctx->pc = 0x22C038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C03Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C040u;
}
