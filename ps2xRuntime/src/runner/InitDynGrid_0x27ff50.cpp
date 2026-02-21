#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitDynGrid
// Address: 0x27ff50 - 0x27ffd4
void InitDynGrid_0x27ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ff50u;

    // 0x27ff50: 0x3c030035
    ctx->pc = 0x27ff50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x27ff54: 0x3c020032
    ctx->pc = 0x27ff54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27ff58: 0x2442f9f8
    ctx->pc = 0x27ff58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x27ff5c: 0xc4420018
    ctx->pc = 0x27ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ff60: 0xe46296ac
    ctx->pc = 0x27ff60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294940332), bits); }
    // 0x27ff64: 0x3c030035
    ctx->pc = 0x27ff64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x27ff68: 0xc4410020
    ctx->pc = 0x27ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ff6c: 0xe46196b0
    ctx->pc = 0x27ff6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294940336), bits); }
    // 0x27ff70: 0xc4400024
    ctx->pc = 0x27ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ff74: 0x46020081
    ctx->pc = 0x27ff74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27ff78: 0xc440002c
    ctx->pc = 0x27ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ff7c: 0x46010001
    ctx->pc = 0x27ff7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27ff80: 0x46020034
    ctx->pc = 0x27ff80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ff84: 0x0
    ctx->pc = 0x27ff84u;
    // NOP
    // 0x27ff88: 0x45030001
    ctx->pc = 0x27FF88u;
    {
        const bool branch_taken_0x27ff88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ff88) {
            ctx->pc = 0x27FF8Cu;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x27FF90u;
            goto label_27ff90;
        }
    }
    ctx->pc = 0x27FF90u;
label_27ff90:
    // 0x27ff90: 0x3c020034
    ctx->pc = 0x27ff90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ff94: 0x3c013c80
    ctx->pc = 0x27ff94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15488 << 16));
    // 0x27ff98: 0x44810800
    ctx->pc = 0x27ff98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27ff9c: 0x46010042
    ctx->pc = 0x27ff9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27ffa0: 0xe44156a0
    ctx->pc = 0x27ffa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22176), bits); }
    // 0x27ffa4: 0x3c020035
    ctx->pc = 0x27ffa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x27ffa8: 0x3c013f80
    ctx->pc = 0x27ffa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27ffac: 0x44810000
    ctx->pc = 0x27ffacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ffb0: 0x0
    ctx->pc = 0x27ffb0u;
    // NOP
    // 0x27ffb4: 0x0
    ctx->pc = 0x27ffb4u;
    // NOP
    // 0x27ffb8: 0x46010003
    ctx->pc = 0x27ffb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x27ffbc: 0xe44096a8
    ctx->pc = 0x27ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940328), bits); }
    // 0x27ffc0: 0x3c020035
    ctx->pc = 0x27ffc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x27ffc4: 0xe44c96b4
    ctx->pc = 0x27ffc4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940340), bits); }
    // 0x27ffc8: 0x3c020035
    ctx->pc = 0x27ffc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x27ffcc: 0x3e00008
    ctx->pc = 0x27FFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FFD0u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294940344), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FF90u: goto label_27ff90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27FFD4u;
}
