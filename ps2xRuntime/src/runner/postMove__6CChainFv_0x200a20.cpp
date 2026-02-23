#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: postMove__6CChainFv
// Address: 0x200a20 - 0x200b48
void postMove__6CChainFv_0x200a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("postMove__6CChainFv");


    ctx->pc = 0x200a20u;

    // 0x200a20: 0xc4820000
    ctx->pc = 0x200a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200a24: 0xc481000c
    ctx->pc = 0x200a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200a28: 0xc480006c
    ctx->pc = 0x200a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a2c: 0x46011041
    ctx->pc = 0x200a2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x200a30: 0x46010002
    ctx->pc = 0x200a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200a34: 0xe4800018
    ctx->pc = 0x200a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x200a38: 0xc4820004
    ctx->pc = 0x200a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200a3c: 0xc4810010
    ctx->pc = 0x200a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200a40: 0xc480006c
    ctx->pc = 0x200a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a44: 0x46011041
    ctx->pc = 0x200a44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x200a48: 0x46010002
    ctx->pc = 0x200a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200a4c: 0xe480001c
    ctx->pc = 0x200a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x200a50: 0xc4820008
    ctx->pc = 0x200a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200a54: 0xc4810014
    ctx->pc = 0x200a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200a58: 0xc480006c
    ctx->pc = 0x200a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a5c: 0x46011041
    ctx->pc = 0x200a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x200a60: 0x46010002
    ctx->pc = 0x200a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x200a64: 0xe4800020
    ctx->pc = 0x200a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x200a68: 0x8c830084
    ctx->pc = 0x200a68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x200a6c: 0x30630001
    ctx->pc = 0x200a6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x200a70: 0x1060002e
    ctx->pc = 0x200A70u;
    {
        const bool branch_taken_0x200a70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x200a70) {
            ctx->pc = 0x200B2Cu;
            goto label_200b2c;
        }
    }
    ctx->pc = 0x200A78u;
    // 0x200a78: 0xc4800070
    ctx->pc = 0x200a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a7c: 0xc4810018
    ctx->pc = 0x200a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200a80: 0x46000007
    ctx->pc = 0x200a80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x200a84: 0x46000834
    ctx->pc = 0x200a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200a88: 0x0
    ctx->pc = 0x200a88u;
    // NOP
    // 0x200a8c: 0x45000002
    ctx->pc = 0x200A8Cu;
    {
        const bool branch_taken_0x200a8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200a8c) {
            ctx->pc = 0x200A98u;
            goto label_200a98;
        }
    }
    ctx->pc = 0x200A94u;
    // 0x200a94: 0xe4800018
    ctx->pc = 0x200a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_200a98:
    // 0x200a98: 0xc4800074
    ctx->pc = 0x200a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a9c: 0xc481001c
    ctx->pc = 0x200a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200aa0: 0x46000007
    ctx->pc = 0x200aa0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x200aa4: 0x46000834
    ctx->pc = 0x200aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200aa8: 0x0
    ctx->pc = 0x200aa8u;
    // NOP
    // 0x200aac: 0x45000002
    ctx->pc = 0x200AACu;
    {
        const bool branch_taken_0x200aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200aac) {
            ctx->pc = 0x200AB8u;
            goto label_200ab8;
        }
    }
    ctx->pc = 0x200AB4u;
    // 0x200ab4: 0xe480001c
    ctx->pc = 0x200ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_200ab8:
    // 0x200ab8: 0xc4800078
    ctx->pc = 0x200ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200abc: 0xc4810020
    ctx->pc = 0x200abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200ac0: 0x46000007
    ctx->pc = 0x200ac0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x200ac4: 0x46000834
    ctx->pc = 0x200ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200ac8: 0x0
    ctx->pc = 0x200ac8u;
    // NOP
    // 0x200acc: 0x45000002
    ctx->pc = 0x200ACCu;
    {
        const bool branch_taken_0x200acc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x200acc) {
            ctx->pc = 0x200AD8u;
            goto label_200ad8;
        }
    }
    ctx->pc = 0x200AD4u;
    // 0x200ad4: 0xe4800020
    ctx->pc = 0x200ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_200ad8:
    // 0x200ad8: 0xc4800018
    ctx->pc = 0x200ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200adc: 0xc4810070
    ctx->pc = 0x200adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200ae0: 0x46010036
    ctx->pc = 0x200ae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200ae4: 0x0
    ctx->pc = 0x200ae4u;
    // NOP
    // 0x200ae8: 0x45010002
    ctx->pc = 0x200AE8u;
    {
        const bool branch_taken_0x200ae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200ae8) {
            ctx->pc = 0x200AF4u;
            goto label_200af4;
        }
    }
    ctx->pc = 0x200AF0u;
    // 0x200af0: 0xe4810018
    ctx->pc = 0x200af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_200af4:
    // 0x200af4: 0xc480001c
    ctx->pc = 0x200af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200af8: 0xc4810074
    ctx->pc = 0x200af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200afc: 0x46010036
    ctx->pc = 0x200afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200b00: 0x0
    ctx->pc = 0x200b00u;
    // NOP
    // 0x200b04: 0x45010002
    ctx->pc = 0x200B04u;
    {
        const bool branch_taken_0x200b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200b04) {
            ctx->pc = 0x200B10u;
            goto label_200b10;
        }
    }
    ctx->pc = 0x200B0Cu;
    // 0x200b0c: 0xe481001c
    ctx->pc = 0x200b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_200b10:
    // 0x200b10: 0xc4800020
    ctx->pc = 0x200b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b14: 0xc4810078
    ctx->pc = 0x200b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200b18: 0x46010036
    ctx->pc = 0x200b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x200b1c: 0x0
    ctx->pc = 0x200b1cu;
    // NOP
    // 0x200b20: 0x45010002
    ctx->pc = 0x200B20u;
    {
        const bool branch_taken_0x200b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x200b20) {
            ctx->pc = 0x200B2Cu;
            goto label_200b2c;
        }
    }
    ctx->pc = 0x200B28u;
    // 0x200b28: 0xe4810020
    ctx->pc = 0x200b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_200b2c:
    // 0x200b2c: 0xc4800000
    ctx->pc = 0x200b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b30: 0xe480000c
    ctx->pc = 0x200b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x200b34: 0xc4800004
    ctx->pc = 0x200b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b38: 0xe4800010
    ctx->pc = 0x200b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x200b3c: 0xc4800008
    ctx->pc = 0x200b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b40: 0x3e00008
    ctx->pc = 0x200B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200A98u: goto label_200a98;
            case 0x200AB8u: goto label_200ab8;
            case 0x200AD8u: goto label_200ad8;
            case 0x200AF4u: goto label_200af4;
            case 0x200B10u: goto label_200b10;
            case 0x200B2Cu: goto label_200b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200B48u;
}
