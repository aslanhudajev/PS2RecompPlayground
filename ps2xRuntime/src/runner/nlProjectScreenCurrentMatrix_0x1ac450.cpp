#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlProjectScreenCurrentMatrix
// Address: 0x1ac450 - 0x1ac4c4
void nlProjectScreenCurrentMatrix_0x1ac450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlProjectScreenCurrentMatrix");


    ctx->pc = 0x1ac450u;

    // 0x1ac450: 0x27bdffd0
    ctx->pc = 0x1ac450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ac454: 0x7fbf0010
    ctx->pc = 0x1ac454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ac458: 0x7fb00000
    ctx->pc = 0x1ac458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac45c: 0x70a08628
    ctx->pc = 0x1ac45cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ac460: 0xc06bece
    ctx->pc = 0x1AC460u;
    SET_GPR_U32(ctx, 31, 0x1AC468u);
    ctx->pc = 0x1AC464u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AFB38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFB38_0x1afb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC468u; }
        else if (ctx->pc != 0x1AC468u) { ctx->pc = 0x1AC468u; }
    }
    if (ctx->pc != 0x1AC468u) { return; }
    ctx->pc = 0x1AC468u;
    // 0x1ac468: 0xc7a1002c
    ctx->pc = 0x1ac468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac46c: 0x3c033f80
    ctx->pc = 0x1ac46cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1ac470: 0x44831000
    ctx->pc = 0x1ac470u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1ac474: 0xc7a00020
    ctx->pc = 0x1ac474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac478: 0x27a30024
    ctx->pc = 0x1ac478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 36));
    // 0x1ac47c: 0x46011043
    ctx->pc = 0x1ac47cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1ac480: 0x46010002
    ctx->pc = 0x1ac480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ac484: 0xe7a00020
    ctx->pc = 0x1ac484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ac488: 0xc4600000
    ctx->pc = 0x1ac488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac48c: 0x46010002
    ctx->pc = 0x1ac48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ac490: 0xe4600000
    ctx->pc = 0x1ac490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ac494: 0xc7a10020
    ctx->pc = 0x1ac494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac498: 0xc7808a94
    ctx->pc = 0x1ac498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac49c: 0x46000801
    ctx->pc = 0x1ac49cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac4a0: 0xe6000000
    ctx->pc = 0x1ac4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ac4a4: 0xc4610000
    ctx->pc = 0x1ac4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac4a8: 0xc7808a98
    ctx->pc = 0x1ac4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac4ac: 0x46000801
    ctx->pc = 0x1ac4acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac4b0: 0xe6000004
    ctx->pc = 0x1ac4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1ac4b4: 0x7bbf0010
    ctx->pc = 0x1ac4b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac4b8: 0x7bb00000
    ctx->pc = 0x1ac4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac4bc: 0x3e00008
    ctx->pc = 0x1AC4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC4C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC4C4u;
}
