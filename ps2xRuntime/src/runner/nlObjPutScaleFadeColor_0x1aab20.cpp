#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutScaleFadeColor
// Address: 0x1aab20 - 0x1aabd8
void nlObjPutScaleFadeColor_0x1aab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutScaleFadeColor");


    ctx->pc = 0x1aab20u;

    // 0x1aab20: 0x3c010030
    ctx->pc = 0x1aab20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab24: 0xc4203970
    ctx->pc = 0x1aab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab28: 0x3c034040
    ctx->pc = 0x1aab28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16448 << 16));
    // 0x1aab2c: 0x44830800
    ctx->pc = 0x1aab2cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1aab30: 0x0
    ctx->pc = 0x1aab30u;
    // NOP
    // 0x1aab34: 0x460c0002
    ctx->pc = 0x1aab34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1aab38: 0x3c010030
    ctx->pc = 0x1aab38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab3c: 0xe4203970
    ctx->pc = 0x1aab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14704), bits); }
    // 0x1aab40: 0x3c010030
    ctx->pc = 0x1aab40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab44: 0xc4203974
    ctx->pc = 0x1aab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab48: 0x460d0002
    ctx->pc = 0x1aab48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1aab4c: 0x3c010030
    ctx->pc = 0x1aab4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab50: 0xe4203974
    ctx->pc = 0x1aab50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14708), bits); }
    // 0x1aab54: 0x3c010030
    ctx->pc = 0x1aab54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab58: 0xc4203978
    ctx->pc = 0x1aab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab5c: 0x460e0002
    ctx->pc = 0x1aab5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x1aab60: 0x3c010030
    ctx->pc = 0x1aab60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab64: 0xe4203978
    ctx->pc = 0x1aab64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14712), bits); }
    // 0x1aab68: 0x3c010030
    ctx->pc = 0x1aab68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab6c: 0xc4203980
    ctx->pc = 0x1aab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab70: 0x460f0002
    ctx->pc = 0x1aab70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x1aab74: 0x3c010030
    ctx->pc = 0x1aab74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab78: 0xe4203980
    ctx->pc = 0x1aab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14720), bits); }
    // 0x1aab7c: 0x3c010030
    ctx->pc = 0x1aab7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab80: 0xc4203984
    ctx->pc = 0x1aab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab84: 0x46100002
    ctx->pc = 0x1aab84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x1aab88: 0x3c010030
    ctx->pc = 0x1aab88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab8c: 0xe4203984
    ctx->pc = 0x1aab8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14724), bits); }
    // 0x1aab90: 0x3c010030
    ctx->pc = 0x1aab90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aab94: 0xc4203988
    ctx->pc = 0x1aab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab98: 0x46110102
    ctx->pc = 0x1aab98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x1aab9c: 0x3c010030
    ctx->pc = 0x1aab9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaba0: 0xe4243988
    ctx->pc = 0x1aaba0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14728), bits); }
    // 0x1aaba4: 0x3c010030
    ctx->pc = 0x1aaba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aaba8: 0xc4233980
    ctx->pc = 0x1aaba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aabac: 0x3c010030
    ctx->pc = 0x1aabacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aabb0: 0xc4223984
    ctx->pc = 0x1aabb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aabb4: 0x46021880
    ctx->pc = 0x1aabb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1aabb8: 0x3c010030
    ctx->pc = 0x1aabb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aabbc: 0xc420398c
    ctx->pc = 0x1aabbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aabc0: 0x46022080
    ctx->pc = 0x1aabc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1aabc4: 0x46011043
    ctx->pc = 0x1aabc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1aabc8: 0x3c010030
    ctx->pc = 0x1aabc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aabcc: 0x46010002
    ctx->pc = 0x1aabccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aabd0: 0x3e00008
    ctx->pc = 0x1AABD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AABD4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14732), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AABD8u;
}
