#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetLineToPoint
// Address: 0x1a3270 - 0x1a32f4
void GetLineToPoint_0x1a3270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetLineToPoint");


    ctx->pc = 0x1a3270u;

    // 0x1a3270: 0x460f6301
    ctx->pc = 0x1a3270u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[15]);
    // 0x1a3274: 0xc7a30000
    ctx->pc = 0x1a3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a3278: 0x46127801
    ctx->pc = 0x1a3278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[18]);
    // 0x1a327c: 0x46006042
    ctx->pc = 0x1a327cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1a3280: 0x46106b41
    ctx->pc = 0x1a3280u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[16]);
    // 0x1a3284: 0x46138001
    ctx->pc = 0x1a3284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x1a3288: 0x46006802
    ctx->pc = 0x1a3288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1a328c: 0x46000818
    ctx->pc = 0x1a328cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a3290: 0x46117381
    ctx->pc = 0x1a3290u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
    // 0x1a3294: 0x46038801
    ctx->pc = 0x1a3294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[3]);
    // 0x1a3298: 0x4600709c
    ctx->pc = 0x1a3298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[0]));
    // 0x1a329c: 0x460c6042
    ctx->pc = 0x1a329cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1a32a0: 0x460d6802
    ctx->pc = 0x1a32a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1a32a4: 0x46000818
    ctx->pc = 0x1a32a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a32a8: 0x460e701c
    ctx->pc = 0x1a32a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1a32ac: 0x46001043
    ctx->pc = 0x1a32acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[0];
    // 0x1a32b0: 0x460c0802
    ctx->pc = 0x1a32b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1a32b4: 0x46007bc1
    ctx->pc = 0x1a32b4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
    // 0x1a32b8: 0x460d0882
    ctx->pc = 0x1a32b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1a32bc: 0xe78f8988
    ctx->pc = 0x1a32bcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), bits); }
    // 0x1a32c0: 0x460e0802
    ctx->pc = 0x1a32c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x1a32c4: 0x46028401
    ctx->pc = 0x1a32c4u;
    ctx->f[16] = FPU_SUB_S(ctx->f[16], ctx->f[2]);
    // 0x1a32c8: 0x46008c41
    ctx->pc = 0x1a32c8u;
    ctx->f[17] = FPU_SUB_S(ctx->f[17], ctx->f[0]);
    // 0x1a32cc: 0xe7908984
    ctx->pc = 0x1a32ccu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936964), bits); }
    // 0x1a32d0: 0x46127841
    ctx->pc = 0x1a32d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[18]);
    // 0x1a32d4: 0xe7918980
    ctx->pc = 0x1a32d4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936960), bits); }
    // 0x1a32d8: 0x46138001
    ctx->pc = 0x1a32d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[19]);
    // 0x1a32dc: 0x46010842
    ctx->pc = 0x1a32dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a32e0: 0x46000002
    ctx->pc = 0x1a32e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a32e4: 0x46000818
    ctx->pc = 0x1a32e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a32e8: 0x46038801
    ctx->pc = 0x1a32e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[3]);
    // 0x1a32ec: 0x3e00008
    ctx->pc = 0x1A32ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A32F0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A32F4u;
}
