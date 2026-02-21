#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterSetDifficulty
// Address: 0x29c338 - 0x29c3a0
void CritterSetDifficulty_0x29c338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29c338u;

    // 0x29c338: 0x3c013f00
    ctx->pc = 0x29c338u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29c33c: 0x44811800
    ctx->pc = 0x29c33cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x29c340: 0x8c830004
    ctx->pc = 0x29c340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29c344: 0x3c020034
    ctx->pc = 0x29c344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29c348: 0x8c42e7c8
    ctx->pc = 0x29c348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29c34c: 0xc46100e4
    ctx->pc = 0x29c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c350: 0xc44000ac
    ctx->pc = 0x29c350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c354: 0x46000842
    ctx->pc = 0x29c354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c358: 0x3c013f80
    ctx->pc = 0x29c358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29c35c: 0x44811000
    ctx->pc = 0x29c35cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x29c360: 0x46020840
    ctx->pc = 0x29c360u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x29c364: 0xc48004f4
    ctx->pc = 0x29c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c368: 0x0
    ctx->pc = 0x29c368u;
    // NOP
    // 0x29c36c: 0x0
    ctx->pc = 0x29c36cu;
    // NOP
    // 0x29c370: 0x46010003
    ctx->pc = 0x29c370u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x29c374: 0x46001001
    ctx->pc = 0x29c374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29c378: 0x3c014090
    ctx->pc = 0x29c378u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16528 << 16));
    // 0x29c37c: 0x44810800
    ctx->pc = 0x29c37cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29c380: 0x46010002
    ctx->pc = 0x29c380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c384: 0x46030000
    ctx->pc = 0x29c384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29c388: 0x0
    ctx->pc = 0x29c388u;
    // NOP
    // 0x29c38c: 0x0
    ctx->pc = 0x29c38cu;
    // NOP
    // 0x29c390: 0x46001083
    ctx->pc = 0x29c390u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x29c394: 0xe4820120
    ctx->pc = 0x29c394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x29c398: 0x3e00008
    ctx->pc = 0x29C398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C39Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 284), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C3A0u;
}
