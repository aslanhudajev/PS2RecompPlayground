#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateTreeFrameInterp
// Address: 0x20fef0 - 0x20ffd8
void AnimateTreeFrameInterp_0x20fef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fef0u;

    // 0x20fef0: 0x27bdfff0
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20fef4: 0xffbf0000
    ctx->pc = 0x20fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fef8: 0x8482000c
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20fefc: 0xa2102a
    ctx->pc = 0x20fefcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x20ff00: 0x54400003
    ctx->pc = 0x20FF00u;
    {
        const bool branch_taken_0x20ff00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ff00) {
            ctx->pc = 0x20FF04u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
            ctx->pc = 0x20FF10u;
            goto label_20ff10;
        }
    }
    ctx->pc = 0x20FF08u;
    // 0x20ff08: 0x10000030
    ctx->pc = 0x20FF08u;
    {
        const bool branch_taken_0x20ff08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FF0Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ff08) {
            ctx->pc = 0x20FFCCu;
            goto label_20ffcc;
        }
    }
    ctx->pc = 0x20FF10u;
label_20ff10:
    // 0x20ff10: 0x50a20005
    ctx->pc = 0x20FF10u;
    {
        const bool branch_taken_0x20ff10 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x20ff10) {
            ctx->pc = 0x20FF14u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
            ctx->pc = 0x20FF28u;
            goto label_20ff28;
        }
    }
    ctx->pc = 0x20FF18u;
    // 0x20ff18: 0xc4800030
    ctx->pc = 0x20ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ff1c: 0xe4800020
    ctx->pc = 0x20ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x20ff20: 0xa485000e
    ctx->pc = 0x20ff20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x20ff24: 0x8482000e
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_20ff28:
    // 0x20ff28: 0x24030030
    ctx->pc = 0x20ff28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x20ff2c: 0x431018
    ctx->pc = 0x20ff2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ff30: 0x8c830000
    ctx->pc = 0x20ff30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ff34: 0x431021
    ctx->pc = 0x20ff34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ff38: 0x94420020
    ctx->pc = 0x20ff38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x20ff3c: 0xa4820010
    ctx->pc = 0x20ff3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x20ff40: 0xc7102a
    ctx->pc = 0x20ff40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x20ff44: 0x1040000a
    ctx->pc = 0x20FF44u;
    {
        const bool branch_taken_0x20ff44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FF48u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x20ff44) {
            ctx->pc = 0x20FF70u;
            goto label_20ff70;
        }
    }
    ctx->pc = 0x20FF4Cu;
    // 0x20ff4c: 0x44860800
    ctx->pc = 0x20ff4cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 6);
    // 0x20ff50: 0x46800860
    ctx->pc = 0x20ff50u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x20ff54: 0xe61023
    ctx->pc = 0x20ff54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x20ff58: 0x44820000
    ctx->pc = 0x20ff58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20ff5c: 0x46800020
    ctx->pc = 0x20ff5cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20ff60: 0x460c0002
    ctx->pc = 0x20ff60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x20ff64: 0x46000840
    ctx->pc = 0x20ff64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20ff68: 0x10000004
    ctx->pc = 0x20FF68u;
    {
        const bool branch_taken_0x20ff68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FF6Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        if (branch_taken_0x20ff68) {
            ctx->pc = 0x20FF7Cu;
            goto label_20ff7c;
        }
    }
    ctx->pc = 0x20FF70u;
label_20ff70:
    // 0x20ff70: 0x44860000
    ctx->pc = 0x20ff70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x20ff74: 0x46800020
    ctx->pc = 0x20ff74u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20ff78: 0xe4800018
    ctx->pc = 0x20ff78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_20ff7c:
    // 0x20ff7c: 0x84820010
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20ff80: 0x2442ffff
    ctx->pc = 0x20ff80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20ff84: 0x44820800
    ctx->pc = 0x20ff84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20ff88: 0x46800860
    ctx->pc = 0x20ff88u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x20ff8c: 0xc4800018
    ctx->pc = 0x20ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ff90: 0x46000834
    ctx->pc = 0x20ff90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ff94: 0x0
    ctx->pc = 0x20ff94u;
    // NOP
    // 0x20ff98: 0x45030001
    ctx->pc = 0x20FF98u;
    {
        const bool branch_taken_0x20ff98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ff98) {
            ctx->pc = 0x20FF9Cu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
            ctx->pc = 0x20FFA0u;
            goto label_20ffa0;
        }
    }
    ctx->pc = 0x20FFA0u;
label_20ffa0:
    // 0x20ffa0: 0xc4800018
    ctx->pc = 0x20ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ffa4: 0x44800800
    ctx->pc = 0x20ffa4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20ffa8: 0x46010034
    ctx->pc = 0x20ffa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ffac: 0x0
    ctx->pc = 0x20ffacu;
    // NOP
    // 0x20ffb0: 0x45030001
    ctx->pc = 0x20FFB0u;
    {
        const bool branch_taken_0x20ffb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ffb0) {
            ctx->pc = 0x20FFB4u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
            ctx->pc = 0x20FFB8u;
            goto label_20ffb8;
        }
    }
    ctx->pc = 0x20FFB8u;
label_20ffb8:
    // 0x20ffb8: 0xac800024
    ctx->pc = 0x20ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x20ffbc: 0x24020001
    ctx->pc = 0x20ffbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ffc0: 0xc083ee2
    ctx->pc = 0x20FFC0u;
    SET_GPR_U32(ctx, 31, 0x20FFC8u);
    ctx->pc = 0x20FFC4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20FB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimCompressSetup_0x20fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FFC8u; }
    }
    if (ctx->pc != 0x20FFC8u) { return; }
    ctx->pc = 0x20FFC8u;
    // 0x20ffc8: 0x24020001
    ctx->pc = 0x20ffc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20ffcc:
    // 0x20ffcc: 0xdfbf0000
    ctx->pc = 0x20ffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ffd0: 0x3e00008
    ctx->pc = 0x20FFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FFD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FF10u: goto label_20ff10;
            case 0x20FF28u: goto label_20ff28;
            case 0x20FF70u: goto label_20ff70;
            case 0x20FF7Cu: goto label_20ff7c;
            case 0x20FFA0u: goto label_20ffa0;
            case 0x20FFB8u: goto label_20ffb8;
            case 0x20FFCCu: goto label_20ffcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FFD8u;
}
