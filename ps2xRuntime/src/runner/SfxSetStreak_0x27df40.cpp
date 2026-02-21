#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetStreak
// Address: 0x27df40 - 0x27e008
void SfxSetStreak_0x27df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27df40u;

    // 0x27df40: 0x27bdffb0
    ctx->pc = 0x27df40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27df44: 0xffbf0030
    ctx->pc = 0x27df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27df48: 0xffb20020
    ctx->pc = 0x27df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27df4c: 0xffb10010
    ctx->pc = 0x27df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27df50: 0xffb00000
    ctx->pc = 0x27df50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27df54: 0xe7b50048
    ctx->pc = 0x27df54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27df58: 0xe7b40040
    ctx->pc = 0x27df58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27df5c: 0xa0402d
    ctx->pc = 0x27df5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df60: 0xc0882d
    ctx->pc = 0x27df60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df64: 0xe0902d
    ctx->pc = 0x27df64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df68: 0x46006506
    ctx->pc = 0x27df68u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27df6c: 0x480001e
    ctx->pc = 0x27DF6Cu;
    {
        const bool branch_taken_0x27df6c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DF70u;
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x27df6c) {
            ctx->pc = 0x27DFE8u;
            goto label_27dfe8;
        }
    }
    ctx->pc = 0x27DF74u;
    // 0x27df74: 0x240300f0
    ctx->pc = 0x27df74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27df78: 0x831818
    ctx->pc = 0x27df78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27df7c: 0x3c020034
    ctx->pc = 0x27df7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27df80: 0x24420eb0
    ctx->pc = 0x27df80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27df84: 0x628021
    ctx->pc = 0x27df84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27df88: 0x8e020064
    ctx->pc = 0x27df88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x27df8c: 0x3c030004
    ctx->pc = 0x27df8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x27df90: 0x431025
    ctx->pc = 0x27df90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27df94: 0xae020064
    ctx->pc = 0x27df94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x27df98: 0x202d
    ctx->pc = 0x27df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df9c: 0x24050004
    ctx->pc = 0x27df9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27dfa0: 0x100302d
    ctx->pc = 0x27dfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfa4: 0xc0b3c16
    ctx->pc = 0x27DFA4u;
    SET_GPR_U32(ctx, 31, 0x27DFACu);
    ctx->pc = 0x27DFA8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF058u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewPoly_0x2cf058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFACu; }
    }
    if (ctx->pc != 0x27DFACu) { return; }
    ctx->pc = 0x27DFACu;
    // 0x27dfac: 0x10400005
    ctx->pc = 0x27DFACu;
    {
        const bool branch_taken_0x27dfac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DFB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        if (branch_taken_0x27dfac) {
            ctx->pc = 0x27DFC4u;
            goto label_27dfc4;
        }
    }
    ctx->pc = 0x27DFB4u;
    // 0x27dfb4: 0x40202d
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfb8: 0x220282d
    ctx->pc = 0x27dfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfbc: 0xc0b3bf0
    ctx->pc = 0x27DFBCu;
    SET_GPR_U32(ctx, 31, 0x27DFC4u);
    ctx->pc = 0x27DFC0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CEFC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPolyInstSetColorAlpha_0x2cefc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DFC4u; }
    }
    if (ctx->pc != 0x27DFC4u) { return; }
    ctx->pc = 0x27DFC4u;
label_27dfc4:
    // 0x27dfc4: 0x44800000
    ctx->pc = 0x27dfc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27dfc8: 0x46140034
    ctx->pc = 0x27dfc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27dfcc: 0x0
    ctx->pc = 0x27dfccu;
    // NOP
    // 0x27dfd0: 0x45000003
    ctx->pc = 0x27DFD0u;
    {
        const bool branch_taken_0x27dfd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27DFD4u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        if (branch_taken_0x27dfd0) {
            ctx->pc = 0x27DFE0u;
            goto label_27dfe0;
        }
    }
    ctx->pc = 0x27DFD8u;
    // 0x27dfd8: 0x10000003
    ctx->pc = 0x27DFD8u;
    {
        const bool branch_taken_0x27dfd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DFDCu;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        if (branch_taken_0x27dfd8) {
            ctx->pc = 0x27DFE8u;
            goto label_27dfe8;
        }
    }
    ctx->pc = 0x27DFE0u;
label_27dfe0:
    // 0x27dfe0: 0xc6000098
    ctx->pc = 0x27dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dfe4: 0xe60000dc
    ctx->pc = 0x27dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_27dfe8:
    // 0x27dfe8: 0xdfbf0030
    ctx->pc = 0x27dfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27dfec: 0xdfb20020
    ctx->pc = 0x27dfecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27dff0: 0xdfb10010
    ctx->pc = 0x27dff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dff4: 0xdfb00000
    ctx->pc = 0x27dff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dff8: 0xc7b50048
    ctx->pc = 0x27dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27dffc: 0xc7b40040
    ctx->pc = 0x27dffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27e000: 0x3e00008
    ctx->pc = 0x27E000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E004u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DFC4u: goto label_27dfc4;
            case 0x27DFE0u: goto label_27dfe0;
            case 0x27DFE8u: goto label_27dfe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E008u;
}
