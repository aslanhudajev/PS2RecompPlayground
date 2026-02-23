#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Spr2Cam__11TrnMojiUchiF11tagNLpoint3
// Address: 0x226e40 - 0x226ec8
void Spr2Cam__11TrnMojiUchiF11tagNLpoint3_0x226e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Spr2Cam__11TrnMojiUchiF11tagNLpoint3");


    ctx->pc = 0x226e40u;

    // 0x226e40: 0xc4a40000
    ctx->pc = 0x226e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x226e44: 0xc4a30004
    ctx->pc = 0x226e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226e48: 0xc4a20008
    ctx->pc = 0x226e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226e4c: 0x27bdfff0
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226e50: 0x27a60000
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 0));
    // 0x226e54: 0x3c0343a0
    ctx->pc = 0x226e54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17312 << 16));
    // 0x226e58: 0x44830800
    ctx->pc = 0x226e58u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x226e5c: 0xe4c40000
    ctx->pc = 0x226e5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x226e60: 0xe4c30004
    ctx->pc = 0x226e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x226e64: 0xe4c20008
    ctx->pc = 0x226e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x226e68: 0xc7a20000
    ctx->pc = 0x226e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226e6c: 0xc7858c50
    ctx->pc = 0x226e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x226e70: 0x3c034360
    ctx->pc = 0x226e70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17248 << 16));
    // 0x226e74: 0xc7a40008
    ctx->pc = 0x226e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x226e78: 0x44830000
    ctx->pc = 0x226e78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x226e7c: 0x0
    ctx->pc = 0x226e7cu;
    // NOP
    // 0x226e80: 0x46011041
    ctx->pc = 0x226e80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x226e84: 0x46012842
    ctx->pc = 0x226e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x226e88: 0x460028c7
    ctx->pc = 0x226e88u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x226e8c: 0x46030843
    ctx->pc = 0x226e8cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x226e90: 0x46050843
    ctx->pc = 0x226e90u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[5];
    // 0x226e94: 0x46012042
    ctx->pc = 0x226e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x226e98: 0xe4810000
    ctx->pc = 0x226e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x226e9c: 0xc7a10004
    ctx->pc = 0x226e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226ea0: 0x46000801
    ctx->pc = 0x226ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226ea4: 0x46000007
    ctx->pc = 0x226ea4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x226ea8: 0x46002802
    ctx->pc = 0x226ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x226eac: 0x46030003
    ctx->pc = 0x226eacu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x226eb0: 0x46050003
    ctx->pc = 0x226eb0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x226eb4: 0x46002002
    ctx->pc = 0x226eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x226eb8: 0xe4800004
    ctx->pc = 0x226eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x226ebc: 0xe4840008
    ctx->pc = 0x226ebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x226ec0: 0x3e00008
    ctx->pc = 0x226EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226EC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226EC8u;
}
