#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateTreeFrameInterp2
// Address: 0x20ffd8 - 0x2100c4
void AnimateTreeFrameInterp2_0x20ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20ffd8u;

    // 0x20ffd8: 0x27bdfff0
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ffdc: 0xffbf0000
    ctx->pc = 0x20ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ffe0: 0x8482000c
    ctx->pc = 0x20ffe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20ffe4: 0xc2102a
    ctx->pc = 0x20ffe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x20ffe8: 0x10400033
    ctx->pc = 0x20FFE8u;
    {
        const bool branch_taken_0x20ffe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FFECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ffe8) {
            ctx->pc = 0x2100B8u;
            goto label_2100b8;
        }
    }
    ctx->pc = 0x20FFF0u;
    // 0x20fff0: 0x44800000
    ctx->pc = 0x20fff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x20fff4: 0x46006032
    ctx->pc = 0x20fff4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fff8: 0x45010003
    ctx->pc = 0x20FFF8u;
    {
        const bool branch_taken_0x20fff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20fff8) {
            ctx->pc = 0x210008u;
            goto label_210008;
        }
    }
    ctx->pc = 0x210000u;
    // 0x210000: 0x54a60006
    ctx->pc = 0x210000u;
    {
        const bool branch_taken_0x210000 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        if (branch_taken_0x210000) {
            ctx->pc = 0x210004u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
            ctx->pc = 0x21001Cu;
            goto label_21001c;
        }
    }
    ctx->pc = 0x210008u;
label_210008:
    // 0x210008: 0x44806000
    ctx->pc = 0x210008u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x21000c: 0xc083fbc
    ctx->pc = 0x21000Cu;
    SET_GPR_U32(ctx, 31, 0x210014u);
    ctx->pc = 0x210010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTreeFrameInterp_0x20fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210014u; }
    }
    if (ctx->pc != 0x210014u) { return; }
    ctx->pc = 0x210014u;
    // 0x210014: 0x10000029
    ctx->pc = 0x210014u;
    {
        const bool branch_taken_0x210014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210018u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210014) {
            ctx->pc = 0x2100BCu;
            goto label_2100bc;
        }
    }
    ctx->pc = 0x21001Cu;
label_21001c:
    // 0x21001c: 0x44880800
    ctx->pc = 0x21001cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 8);
    // 0x210020: 0x46800860
    ctx->pc = 0x210020u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x210024: 0x50c20005
    ctx->pc = 0x210024u;
    {
        const bool branch_taken_0x210024 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        if (branch_taken_0x210024) {
            ctx->pc = 0x210028u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
            ctx->pc = 0x21003Cu;
            goto label_21003c;
        }
    }
    ctx->pc = 0x21002Cu;
    // 0x21002c: 0xc4800030
    ctx->pc = 0x21002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210030: 0xe4800020
    ctx->pc = 0x210030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x210034: 0xa486000e
    ctx->pc = 0x210034u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x210038: 0x8482000e
    ctx->pc = 0x210038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_21003c:
    // 0x21003c: 0x24030030
    ctx->pc = 0x21003cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x210040: 0x431018
    ctx->pc = 0x210040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x210044: 0x8c830000
    ctx->pc = 0x210044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210048: 0x431021
    ctx->pc = 0x210048u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21004c: 0x94420020
    ctx->pc = 0x21004cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x210050: 0xa4820010
    ctx->pc = 0x210050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x210054: 0xe48c0014
    ctx->pc = 0x210054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x210058: 0x3c013f80
    ctx->pc = 0x210058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21005c: 0x44810000
    ctx->pc = 0x21005cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x210060: 0xe4800024
    ctx->pc = 0x210060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x210064: 0x24030001
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210068: 0xa0830012
    ctx->pc = 0x210068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x21006c: 0x21400
    ctx->pc = 0x21006cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x210070: 0x21403
    ctx->pc = 0x210070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x210074: 0x2442ffff
    ctx->pc = 0x210074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x210078: 0x44820000
    ctx->pc = 0x210078u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21007c: 0x46800020
    ctx->pc = 0x21007cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x210080: 0x46010034
    ctx->pc = 0x210080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210084: 0x0
    ctx->pc = 0x210084u;
    // NOP
    // 0x210088: 0x45000002
    ctx->pc = 0x210088u;
    {
        const bool branch_taken_0x210088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21008Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        if (branch_taken_0x210088) {
            ctx->pc = 0x210094u;
            goto label_210094;
        }
    }
    ctx->pc = 0x210090u;
    // 0x210090: 0xe4800018
    ctx->pc = 0x210090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_210094:
    // 0x210094: 0xc4800018
    ctx->pc = 0x210094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210098: 0x44800800
    ctx->pc = 0x210098u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x21009c: 0x46010034
    ctx->pc = 0x21009cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2100a0: 0x0
    ctx->pc = 0x2100a0u;
    // NOP
    // 0x2100a4: 0x45030001
    ctx->pc = 0x2100A4u;
    {
        const bool branch_taken_0x2100a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2100a4) {
            ctx->pc = 0x2100A8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
            ctx->pc = 0x2100ACu;
            goto label_2100ac;
        }
    }
    ctx->pc = 0x2100ACu;
label_2100ac:
    // 0x2100ac: 0xc083ee2
    ctx->pc = 0x2100ACu;
    SET_GPR_U32(ctx, 31, 0x2100B4u);
    ctx->pc = 0x20FB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimCompressSetup_0x20fb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100B4u; }
    }
    if (ctx->pc != 0x2100B4u) { return; }
    ctx->pc = 0x2100B4u;
    // 0x2100b4: 0x24020001
    ctx->pc = 0x2100b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2100b8:
    // 0x2100b8: 0xdfbf0000
    ctx->pc = 0x2100b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2100bc:
    // 0x2100bc: 0x3e00008
    ctx->pc = 0x2100BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2100C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210008u: goto label_210008;
            case 0x21001Cu: goto label_21001c;
            case 0x21003Cu: goto label_21003c;
            case 0x210094u: goto label_210094;
            case 0x2100ACu: goto label_2100ac;
            case 0x2100B8u: goto label_2100b8;
            case 0x2100BCu: goto label_2100bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2100C4u;
}
