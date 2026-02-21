#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DynGridX
// Address: 0x27ffd8 - 0x280014
void DynGridX_0x27ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ffd8u;

    // 0x27ffd8: 0x3c020035
    ctx->pc = 0x27ffd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x27ffdc: 0xc44096ac
    ctx->pc = 0x27ffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ffe0: 0x46006301
    ctx->pc = 0x27ffe0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x27ffe4: 0x3c020035
    ctx->pc = 0x27ffe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x27ffe8: 0xc44096a8
    ctx->pc = 0x27ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ffec: 0x46006302
    ctx->pc = 0x27ffecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x27fff0: 0x46006024
    ctx->pc = 0x27fff0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x27fff4: 0x44020000
    ctx->pc = 0x27fff4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x27fff8: 0x2403ffff
    ctx->pc = 0x27fff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27fffc: 0x62182a
    ctx->pc = 0x27fffcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x280000: 0x3100a
    ctx->pc = 0x280000u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x280004: 0x28440040
    ctx->pc = 0x280004u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 64));
    // 0x280008: 0x2403003f
    ctx->pc = 0x280008u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x28000c: 0x3e00008
    ctx->pc = 0x28000Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280010u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280014u;
}
