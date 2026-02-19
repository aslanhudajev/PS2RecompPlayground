#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ModifyPlayerDpos
// Address: 0x247bc0 - 0x247d14
void ModifyPlayerDpos_0x247bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x247bc0u;

    // 0x247bc0: 0xc5010000
    ctx->pc = 0x247bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247bc4: 0xc4e00000
    ctx->pc = 0x247bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bc8: 0x46000881
    ctx->pc = 0x247bc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x247bcc: 0xc5010008
    ctx->pc = 0x247bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247bd0: 0xc4e00008
    ctx->pc = 0x247bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bd4: 0x460008c1
    ctx->pc = 0x247bd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x247bd8: 0x44800800
    ctx->pc = 0x247bd8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x247bdc: 0x46020834
    ctx->pc = 0x247bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247be0: 0x0
    ctx->pc = 0x247be0u;
    // NOP
    // 0x247be4: 0x45000009
    ctx->pc = 0x247BE4u;
    {
        const bool branch_taken_0x247be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247BE8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x247be4) {
            ctx->pc = 0x247C0Cu;
            goto label_247c0c;
        }
    }
    ctx->pc = 0x247BECu;
    // 0x247bec: 0xc4c00000
    ctx->pc = 0x247becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247bf0: 0x46010034
    ctx->pc = 0x247bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247bf4: 0x45000005
    ctx->pc = 0x247BF4u;
    {
        const bool branch_taken_0x247bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247bf4) {
            ctx->pc = 0x247C0Cu;
            goto label_247c0c;
        }
    }
    ctx->pc = 0x247BFCu;
    // 0x247bfc: 0x46001000
    ctx->pc = 0x247bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x247c00: 0x46000834
    ctx->pc = 0x247c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c04: 0x1000000e
    ctx->pc = 0x247C04u;
    {
        const bool branch_taken_0x247c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247C08u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        if (branch_taken_0x247c04) {
            ctx->pc = 0x247C40u;
            goto label_247c40;
        }
    }
    ctx->pc = 0x247C0Cu;
label_247c0c:
    // 0x247c0c: 0x46011034
    ctx->pc = 0x247c0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c10: 0x0
    ctx->pc = 0x247c10u;
    // NOP
    // 0x247c14: 0x4502000e
    ctx->pc = 0x247C14u;
    {
        const bool branch_taken_0x247c14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c14) {
            ctx->pc = 0x247C18u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247C50u;
            goto label_247c50;
        }
    }
    ctx->pc = 0x247C1Cu;
    // 0x247c1c: 0xc4c00000
    ctx->pc = 0x247c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c20: 0x46000834
    ctx->pc = 0x247c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c24: 0x0
    ctx->pc = 0x247c24u;
    // NOP
    // 0x247c28: 0x45020009
    ctx->pc = 0x247C28u;
    {
        const bool branch_taken_0x247c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c28) {
            ctx->pc = 0x247C2Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247C50u;
            goto label_247c50;
        }
    }
    ctx->pc = 0x247C30u;
    // 0x247c30: 0x46001000
    ctx->pc = 0x247c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x247c34: 0xe4c00000
    ctx->pc = 0x247c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x247c38: 0x46010034
    ctx->pc = 0x247c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c3c: 0x0
    ctx->pc = 0x247c3cu;
    // NOP
label_247c40:
    // 0x247c40: 0x45030001
    ctx->pc = 0x247C40u;
    {
        const bool branch_taken_0x247c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c40) {
            ctx->pc = 0x247C44u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
            ctx->pc = 0x247C48u;
            goto label_247c48;
        }
    }
    ctx->pc = 0x247C48u;
label_247c48:
    // 0x247c48: 0x1000000a
    ctx->pc = 0x247C48u;
    {
        const bool branch_taken_0x247c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247C4Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x247c48) {
            ctx->pc = 0x247C74u;
            goto label_247c74;
        }
    }
    ctx->pc = 0x247C50u;
label_247c50:
    // 0x247c50: 0xc4e10000
    ctx->pc = 0x247c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c54: 0x46010001
    ctx->pc = 0x247c54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247c58: 0x3c020031
    ctx->pc = 0x247c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x247c5c: 0xc441ffac
    ctx->pc = 0x247c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c60: 0x46010002
    ctx->pc = 0x247c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x247c64: 0xc481083c
    ctx->pc = 0x247c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c68: 0x46010000
    ctx->pc = 0x247c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247c6c: 0xe480083c
    ctx->pc = 0x247c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2108), bits); }
    // 0x247c70: 0xacc00000
    ctx->pc = 0x247c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_247c74:
    // 0x247c74: 0x44800800
    ctx->pc = 0x247c74u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x247c78: 0x46030834
    ctx->pc = 0x247c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c7c: 0x45000009
    ctx->pc = 0x247C7Cu;
    {
        const bool branch_taken_0x247c7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c7c) {
            ctx->pc = 0x247CA4u;
            goto label_247ca4;
        }
    }
    ctx->pc = 0x247C84u;
    // 0x247c84: 0xc4c00008
    ctx->pc = 0x247c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c88: 0x46010034
    ctx->pc = 0x247c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c8c: 0x45000005
    ctx->pc = 0x247C8Cu;
    {
        const bool branch_taken_0x247c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c8c) {
            ctx->pc = 0x247CA4u;
            goto label_247ca4;
        }
    }
    ctx->pc = 0x247C94u;
    // 0x247c94: 0x46001800
    ctx->pc = 0x247c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x247c98: 0x46000834
    ctx->pc = 0x247c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c9c: 0x1000000e
    ctx->pc = 0x247C9Cu;
    {
        const bool branch_taken_0x247c9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247CA0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        if (branch_taken_0x247c9c) {
            ctx->pc = 0x247CD8u;
            goto label_247cd8;
        }
    }
    ctx->pc = 0x247CA4u;
label_247ca4:
    // 0x247ca4: 0x46011834
    ctx->pc = 0x247ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247ca8: 0x0
    ctx->pc = 0x247ca8u;
    // NOP
    // 0x247cac: 0x4502000e
    ctx->pc = 0x247CACu;
    {
        const bool branch_taken_0x247cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cac) {
            ctx->pc = 0x247CB0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247CE8u;
            goto label_247ce8;
        }
    }
    ctx->pc = 0x247CB4u;
    // 0x247cb4: 0xc4c00008
    ctx->pc = 0x247cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247cb8: 0x46000834
    ctx->pc = 0x247cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247cbc: 0x0
    ctx->pc = 0x247cbcu;
    // NOP
    // 0x247cc0: 0x45020009
    ctx->pc = 0x247CC0u;
    {
        const bool branch_taken_0x247cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cc0) {
            ctx->pc = 0x247CC4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x247CE8u;
            goto label_247ce8;
        }
    }
    ctx->pc = 0x247CC8u;
    // 0x247cc8: 0x46001800
    ctx->pc = 0x247cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x247ccc: 0xe4c00008
    ctx->pc = 0x247cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x247cd0: 0x46010034
    ctx->pc = 0x247cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247cd4: 0x0
    ctx->pc = 0x247cd4u;
    // NOP
label_247cd8:
    // 0x247cd8: 0x45030001
    ctx->pc = 0x247CD8u;
    {
        const bool branch_taken_0x247cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cd8) {
            ctx->pc = 0x247CDCu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
            ctx->pc = 0x247CE0u;
            goto label_247ce0;
        }
    }
    ctx->pc = 0x247CE0u;
label_247ce0:
    // 0x247ce0: 0x1000000a
    ctx->pc = 0x247CE0u;
    {
        const bool branch_taken_0x247ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x247CE4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x247ce0) {
            ctx->pc = 0x247D0Cu;
            goto label_247d0c;
        }
    }
    ctx->pc = 0x247CE8u;
label_247ce8:
    // 0x247ce8: 0xc4e10008
    ctx->pc = 0x247ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247cec: 0x46010001
    ctx->pc = 0x247cecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247cf0: 0x3c020031
    ctx->pc = 0x247cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x247cf4: 0xc441ffac
    ctx->pc = 0x247cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247cf8: 0x46010002
    ctx->pc = 0x247cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x247cfc: 0xc4810844
    ctx->pc = 0x247cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d00: 0x46010000
    ctx->pc = 0x247d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247d04: 0xe4800844
    ctx->pc = 0x247d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2116), bits); }
    // 0x247d08: 0xacc00008
    ctx->pc = 0x247d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_247d0c:
    // 0x247d0c: 0x3e00008
    ctx->pc = 0x247D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x247C0Cu: goto label_247c0c;
            case 0x247C40u: goto label_247c40;
            case 0x247C48u: goto label_247c48;
            case 0x247C50u: goto label_247c50;
            case 0x247C74u: goto label_247c74;
            case 0x247CA4u: goto label_247ca4;
            case 0x247CD8u: goto label_247cd8;
            case 0x247CE0u: goto label_247ce0;
            case 0x247CE8u: goto label_247ce8;
            case 0x247D0Cu: goto label_247d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x247D14u;
}
