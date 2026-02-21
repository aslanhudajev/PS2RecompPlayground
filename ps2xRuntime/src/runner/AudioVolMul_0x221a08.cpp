#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioVolMul
// Address: 0x221a08 - 0x221ab8
void AudioVolMul_0x221a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221a08u;

    // 0x221a08: 0x27bdffe0
    ctx->pc = 0x221a08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x221a0c: 0x14800005
    ctx->pc = 0x221A0Cu;
    {
        const bool branch_taken_0x221a0c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x221A10u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x221a0c) {
            ctx->pc = 0x221A24u;
            goto label_221a24;
        }
    }
    ctx->pc = 0x221A14u;
    // 0x221a14: 0x3c013f80
    ctx->pc = 0x221a14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x221a18: 0x44810000
    ctx->pc = 0x221a18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x221a1c: 0x10000024
    ctx->pc = 0x221A1Cu;
    {
        const bool branch_taken_0x221a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221A20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x221a1c) {
            ctx->pc = 0x221AB0u;
            goto label_221ab0;
        }
    }
    ctx->pc = 0x221A24u;
label_221a24:
    // 0x221a24: 0x3c020034
    ctx->pc = 0x221a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x221a28: 0x2442eb60
    ctx->pc = 0x221a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x221a2c: 0xc4800000
    ctx->pc = 0x221a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221a30: 0xc4410140
    ctx->pc = 0x221a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221a34: 0x46010001
    ctx->pc = 0x221a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x221a38: 0xe7a00000
    ctx->pc = 0x221a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x221a3c: 0xc4800008
    ctx->pc = 0x221a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221a40: 0xc4410148
    ctx->pc = 0x221a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221a44: 0x46010001
    ctx->pc = 0x221a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x221a48: 0xe7a00008
    ctx->pc = 0x221a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x221a4c: 0xafa00004
    ctx->pc = 0x221a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x221a50: 0xc0b58a4
    ctx->pc = 0x221A50u;
    SET_GPR_U32(ctx, 31, 0x221A58u);
    ctx->pc = 0x221A54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A58u; }
    }
    if (ctx->pc != 0x221A58u) { return; }
    ctx->pc = 0x221A58u;
    // 0x221a58: 0x3c014248
    ctx->pc = 0x221a58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x221a5c: 0x44810800
    ctx->pc = 0x221a5cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x221a60: 0x0
    ctx->pc = 0x221a60u;
    // NOP
    // 0x221a64: 0x0
    ctx->pc = 0x221a64u;
    // NOP
    // 0x221a68: 0x46010003
    ctx->pc = 0x221a68u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x221a6c: 0x3c013fb3
    ctx->pc = 0x221a6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16307 << 16));
    // 0x221a70: 0x34213333
    ctx->pc = 0x221a70u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x221a74: 0x44810800
    ctx->pc = 0x221a74u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x221a78: 0x46000801
    ctx->pc = 0x221a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x221a7c: 0x44800800
    ctx->pc = 0x221a7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x221a80: 0x46010034
    ctx->pc = 0x221a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221a84: 0x0
    ctx->pc = 0x221a84u;
    // NOP
    // 0x221a88: 0x45030008
    ctx->pc = 0x221A88u;
    {
        const bool branch_taken_0x221a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221a88) {
            ctx->pc = 0x221A8Cu;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x221AACu;
            goto label_221aac;
        }
    }
    ctx->pc = 0x221A90u;
    // 0x221a90: 0x3c013f80
    ctx->pc = 0x221a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x221a94: 0x44810800
    ctx->pc = 0x221a94u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x221a98: 0x46000834
    ctx->pc = 0x221a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221a9c: 0x0
    ctx->pc = 0x221a9cu;
    // NOP
    // 0x221aa0: 0x45000003
    ctx->pc = 0x221AA0u;
    {
        const bool branch_taken_0x221aa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221AA4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x221aa0) {
            ctx->pc = 0x221AB0u;
            goto label_221ab0;
        }
    }
    ctx->pc = 0x221AA8u;
    // 0x221aa8: 0x46000806
    ctx->pc = 0x221aa8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_221aac:
    // 0x221aac: 0xdfbf0010
    ctx->pc = 0x221aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_221ab0:
    // 0x221ab0: 0x3e00008
    ctx->pc = 0x221AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221A24u: goto label_221a24;
            case 0x221AACu: goto label_221aac;
            case 0x221AB0u: goto label_221ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221AB8u;
}
