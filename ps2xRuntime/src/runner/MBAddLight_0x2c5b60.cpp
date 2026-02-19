#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBAddLight
// Address: 0x2c5b60 - 0x2c5cb4
void MBAddLight_0x2c5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5b60u;

    // 0x2c5b60: 0x27bdffe0
    ctx->pc = 0x2c5b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5b64: 0xffbf0010
    ctx->pc = 0x2c5b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5b68: 0xffb00000
    ctx->pc = 0x2c5b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c5b6c: 0x3c020036
    ctx->pc = 0x2c5b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c5b70: 0x8c46dee0
    ctx->pc = 0x2c5b70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c5b74: 0x8cc2001c
    ctx->pc = 0x2c5b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5b78: 0x8c4200c4
    ctx->pc = 0x2c5b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2c5b7c: 0x28420003
    ctx->pc = 0x2c5b7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2c5b80: 0x54400006
    ctx->pc = 0x2C5B80u;
    {
        const bool branch_taken_0x2c5b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c5b80) {
            ctx->pc = 0x2C5B84u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->pc = 0x2C5B9Cu;
            goto label_2c5b9c;
        }
    }
    ctx->pc = 0x2C5B88u;
    // 0x2c5b88: 0x3c04003b
    ctx->pc = 0x2c5b88u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c5b8c: 0xc0b492e
    ctx->pc = 0x2C5B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B94u);
    ctx->pc = 0x2C5B90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28608));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B94u; }
    }
    if (ctx->pc != 0x2C5B94u) { return; }
    ctx->pc = 0x2C5B94u;
    // 0x2c5b94: 0x10000043
    ctx->pc = 0x2C5B94u;
    {
        const bool branch_taken_0x2c5b94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5B98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2c5b94) {
            ctx->pc = 0x2C5CA4u;
            goto label_2c5ca4;
        }
    }
    ctx->pc = 0x2C5B9Cu;
label_2c5b9c:
    // 0x2c5b9c: 0x8c7000c4
    ctx->pc = 0x2c5b9cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2c5ba0: 0x26020001
    ctx->pc = 0x2c5ba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c5ba4: 0x10a00012
    ctx->pc = 0x2C5BA4u;
    {
        const bool branch_taken_0x2c5ba4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
        if (branch_taken_0x2c5ba4) {
            ctx->pc = 0x2C5BF0u;
            goto label_2c5bf0;
        }
    }
    ctx->pc = 0x2C5BACu;
    // 0x2c5bac: 0x8cc2001c
    ctx->pc = 0x2c5bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5bb0: 0x101940
    ctx->pc = 0x2c5bb0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x2c5bb4: 0x431021
    ctx->pc = 0x2c5bb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5bb8: 0xc4a00000
    ctx->pc = 0x2c5bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bbc: 0x46006002
    ctx->pc = 0x2c5bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c5bc0: 0xe44000f0
    ctx->pc = 0x2c5bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c5bc4: 0x8cc2001c
    ctx->pc = 0x2c5bc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5bc8: 0x431021
    ctx->pc = 0x2c5bc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5bcc: 0xc4a00004
    ctx->pc = 0x2c5bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5bd0: 0x46006002
    ctx->pc = 0x2c5bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c5bd4: 0xe44000f4
    ctx->pc = 0x2c5bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2c5bd8: 0x8cc2001c
    ctx->pc = 0x2c5bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5bdc: 0x431021
    ctx->pc = 0x2c5bdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5be0: 0xc4a00008
    ctx->pc = 0x2c5be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5be4: 0x46006002
    ctx->pc = 0x2c5be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c5be8: 0x1000000b
    ctx->pc = 0x2C5BE8u;
    {
        const bool branch_taken_0x2c5be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5BECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
        if (branch_taken_0x2c5be8) {
            ctx->pc = 0x2C5C18u;
            goto label_2c5c18;
        }
    }
    ctx->pc = 0x2C5BF0u;
label_2c5bf0:
    // 0x2c5bf0: 0x8cc2001c
    ctx->pc = 0x2c5bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5bf4: 0x101940
    ctx->pc = 0x2c5bf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x2c5bf8: 0x431021
    ctx->pc = 0x2c5bf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5bfc: 0xe44c00f0
    ctx->pc = 0x2c5bfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2c5c00: 0x8cc2001c
    ctx->pc = 0x2c5c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c04: 0x431021
    ctx->pc = 0x2c5c04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5c08: 0xe44c00f4
    ctx->pc = 0x2c5c08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2c5c0c: 0x8cc2001c
    ctx->pc = 0x2c5c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c10: 0x431021
    ctx->pc = 0x2c5c10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5c14: 0xe44c00f8
    ctx->pc = 0x2c5c14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
label_2c5c18:
    // 0x2c5c18: 0x1080000d
    ctx->pc = 0x2C5C18u;
    {
        const bool branch_taken_0x2c5c18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5C1Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
        if (branch_taken_0x2c5c18) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C5C20u;
    // 0x2c5c20: 0x8cc2001c
    ctx->pc = 0x2c5c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c24: 0x431021
    ctx->pc = 0x2c5c24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5c28: 0xc4800000
    ctx->pc = 0x2c5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c2c: 0xe4400100
    ctx->pc = 0x2c5c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x2c5c30: 0x8cc2001c
    ctx->pc = 0x2c5c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c34: 0x431021
    ctx->pc = 0x2c5c34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5c38: 0xc4800004
    ctx->pc = 0x2c5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c3c: 0xe4400104
    ctx->pc = 0x2c5c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2c5c40: 0x8cc2001c
    ctx->pc = 0x2c5c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c44: 0x431021
    ctx->pc = 0x2c5c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5c48: 0x1000000f
    ctx->pc = 0x2C5C48u;
    {
        const bool branch_taken_0x2c5c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C5C4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2c5c48) {
            ctx->pc = 0x2C5C88u;
            goto label_2c5c88;
        }
    }
    ctx->pc = 0x2C5C50u;
label_2c5c50:
    // 0x2c5c50: 0x8cc3001c
    ctx->pc = 0x2c5c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c54: 0x102140
    ctx->pc = 0x2c5c54u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 5));
    // 0x2c5c58: 0x641821
    ctx->pc = 0x2c5c58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c5c5c: 0x3c02003b
    ctx->pc = 0x2c5c5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2c5c60: 0x24456fb0
    ctx->pc = 0x2c5c60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 28592));
    // 0x2c5c64: 0xc4406fb0
    ctx->pc = 0x2c5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c68: 0xe4600100
    ctx->pc = 0x2c5c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2c5c6c: 0x8cc2001c
    ctx->pc = 0x2c5c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c70: 0x441021
    ctx->pc = 0x2c5c70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5c74: 0xc4a00004
    ctx->pc = 0x2c5c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c78: 0xe4400104
    ctx->pc = 0x2c5c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2c5c7c: 0x8cc2001c
    ctx->pc = 0x2c5c7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c80: 0x441021
    ctx->pc = 0x2c5c80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c5c84: 0xc4a00008
    ctx->pc = 0x2c5c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5c88:
    // 0x2c5c88: 0xe4400108
    ctx->pc = 0x2c5c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x2c5c8c: 0x102140
    ctx->pc = 0x2c5c8cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 5));
    // 0x2c5c90: 0x8cc2001c
    ctx->pc = 0x2c5c90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2c5c94: 0x822021
    ctx->pc = 0x2c5c94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5c98: 0xc0b58a4
    ctx->pc = 0x2C5C98u;
    SET_GPR_U32(ctx, 31, 0x2C5CA0u);
    ctx->pc = 0x2C5C9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 256));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5CA0u; }
    }
    if (ctx->pc != 0x2C5CA0u) { return; }
    ctx->pc = 0x2C5CA0u;
    // 0x2c5ca0: 0x200102d
    ctx->pc = 0x2c5ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5ca4:
    // 0x2c5ca4: 0xdfbf0010
    ctx->pc = 0x2c5ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5ca8: 0xdfb00000
    ctx->pc = 0x2c5ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5cac: 0x3e00008
    ctx->pc = 0x2C5CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5CB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5B9Cu: goto label_2c5b9c;
            case 0x2C5BF0u: goto label_2c5bf0;
            case 0x2C5C18u: goto label_2c5c18;
            case 0x2C5C50u: goto label_2c5c50;
            case 0x2C5C88u: goto label_2c5c88;
            case 0x2C5CA4u: goto label_2c5ca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5CB4u;
}
