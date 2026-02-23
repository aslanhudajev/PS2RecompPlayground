#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Spr2Cam__13NoGameHitTaskF11tagNLpoint3
// Address: 0x2038a0 - 0x203928
void Spr2Cam__13NoGameHitTaskF11tagNLpoint3_0x2038a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Spr2Cam__13NoGameHitTaskF11tagNLpoint3");


    ctx->pc = 0x2038a0u;

    // 0x2038a0: 0xc4a40000
    ctx->pc = 0x2038a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2038a4: 0xc4a30004
    ctx->pc = 0x2038a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2038a8: 0xc4a20008
    ctx->pc = 0x2038a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2038ac: 0x27bdfff0
    ctx->pc = 0x2038acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2038b0: 0x27a60000
    ctx->pc = 0x2038b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 0));
    // 0x2038b4: 0x3c0343a0
    ctx->pc = 0x2038b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17312 << 16));
    // 0x2038b8: 0x44830800
    ctx->pc = 0x2038b8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2038bc: 0xe4c40000
    ctx->pc = 0x2038bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2038c0: 0xe4c30004
    ctx->pc = 0x2038c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2038c4: 0xe4c20008
    ctx->pc = 0x2038c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2038c8: 0xc7a20000
    ctx->pc = 0x2038c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2038cc: 0xc7858c50
    ctx->pc = 0x2038ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2038d0: 0x3c034360
    ctx->pc = 0x2038d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17248 << 16));
    // 0x2038d4: 0xc7a40008
    ctx->pc = 0x2038d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2038d8: 0x44830000
    ctx->pc = 0x2038d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2038dc: 0x0
    ctx->pc = 0x2038dcu;
    // NOP
    // 0x2038e0: 0x46011041
    ctx->pc = 0x2038e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2038e4: 0x46012842
    ctx->pc = 0x2038e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2038e8: 0x460028c7
    ctx->pc = 0x2038e8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x2038ec: 0x46030843
    ctx->pc = 0x2038ecu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2038f0: 0x46050843
    ctx->pc = 0x2038f0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x2038f4: 0x46012042
    ctx->pc = 0x2038f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2038f8: 0xe481000c
    ctx->pc = 0x2038f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2038fc: 0xc7a10004
    ctx->pc = 0x2038fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203900: 0x46000801
    ctx->pc = 0x203900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x203904: 0x46000007
    ctx->pc = 0x203904u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x203908: 0x46002802
    ctx->pc = 0x203908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20390c: 0x46030003
    ctx->pc = 0x20390cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x203910: 0x46050003
    ctx->pc = 0x203910u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x203914: 0x46002002
    ctx->pc = 0x203914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x203918: 0xe4800010
    ctx->pc = 0x203918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x20391c: 0xe4840014
    ctx->pc = 0x20391cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x203920: 0x3e00008
    ctx->pc = 0x203920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203928u;
}
