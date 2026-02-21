#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamMinMaxAvgPos
// Address: 0x214740 - 0x214820
void CamMinMaxAvgPos_0x214740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214740u;

    // 0x214740: 0x27bdffc0
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214744: 0xffbf0030
    ctx->pc = 0x214744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x214748: 0xffb10020
    ctx->pc = 0x214748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x21474c: 0xffb00010
    ctx->pc = 0x21474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x214750: 0x80102d
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214754: 0xa0882d
    ctx->pc = 0x214754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214758: 0x30e70001
    ctx->pc = 0x214758u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
    // 0x21475c: 0x10e00006
    ctx->pc = 0x21475Cu;
    {
        const bool branch_taken_0x21475c = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x214760u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21475c) {
            ctx->pc = 0x214778u;
            goto label_214778;
        }
    }
    ctx->pc = 0x214764u;
    // 0x214764: 0x3a0202d
    ctx->pc = 0x214764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214768: 0xc0b109a
    ctx->pc = 0x214768u;
    SET_GPR_U32(ctx, 31, 0x214770u);
    ctx->pc = 0x21476Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4268u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldToScreen_0x2c4268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214770u; }
    }
    if (ctx->pc != 0x214770u) { return; }
    ctx->pc = 0x214770u;
    // 0x214770: 0x10000009
    ctx->pc = 0x214770u;
    {
        const bool branch_taken_0x214770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214774u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214770) {
            ctx->pc = 0x214798u;
            goto label_214798;
        }
    }
    ctx->pc = 0x214778u;
label_214778:
    // 0x214778: 0xc4400000
    ctx->pc = 0x214778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21477c: 0xe7a00000
    ctx->pc = 0x21477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x214780: 0xc4400004
    ctx->pc = 0x214780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214784: 0xe7a00004
    ctx->pc = 0x214784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x214788: 0xc4400008
    ctx->pc = 0x214788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21478c: 0xe7a00008
    ctx->pc = 0x21478cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x214790: 0x202d
    ctx->pc = 0x214790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214794: 0x0
    ctx->pc = 0x214794u;
    // NOP
label_214798:
    // 0x214798: 0x41080
    ctx->pc = 0x214798u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x21479c: 0x511821
    ctx->pc = 0x21479cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2147a0: 0x3a21021
    ctx->pc = 0x2147a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2147a4: 0xc4610000
    ctx->pc = 0x2147a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2147a8: 0xc4400000
    ctx->pc = 0x2147a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2147ac: 0x46000834
    ctx->pc = 0x2147acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2147b0: 0x0
    ctx->pc = 0x2147b0u;
    // NOP
    // 0x2147b4: 0x45010004
    ctx->pc = 0x2147B4u;
    {
        const bool branch_taken_0x2147b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2147B8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x2147b4) {
            ctx->pc = 0x2147C8u;
            goto label_2147c8;
        }
    }
    ctx->pc = 0x2147BCu;
    // 0x2147bc: 0x41080
    ctx->pc = 0x2147bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2147c0: 0x3a21021
    ctx->pc = 0x2147c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2147c4: 0xc4400000
    ctx->pc = 0x2147c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2147c8:
    // 0x2147c8: 0xe4600000
    ctx->pc = 0x2147c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2147cc: 0x41080
    ctx->pc = 0x2147ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2147d0: 0x501821
    ctx->pc = 0x2147d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2147d4: 0x3a21021
    ctx->pc = 0x2147d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2147d8: 0xc4610000
    ctx->pc = 0x2147d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2147dc: 0xc4400000
    ctx->pc = 0x2147dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2147e0: 0x46010034
    ctx->pc = 0x2147e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2147e4: 0x0
    ctx->pc = 0x2147e4u;
    // NOP
    // 0x2147e8: 0x45010004
    ctx->pc = 0x2147E8u;
    {
        const bool branch_taken_0x2147e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2147ECu;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x2147e8) {
            ctx->pc = 0x2147FCu;
            goto label_2147fc;
        }
    }
    ctx->pc = 0x2147F0u;
    // 0x2147f0: 0x41080
    ctx->pc = 0x2147f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2147f4: 0x3a21021
    ctx->pc = 0x2147f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2147f8: 0xc4400000
    ctx->pc = 0x2147f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2147fc:
    // 0x2147fc: 0x24840001
    ctx->pc = 0x2147fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x214800: 0x28820003
    ctx->pc = 0x214800u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x214804: 0x1440ffe4
    ctx->pc = 0x214804u;
    {
        const bool branch_taken_0x214804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214808u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x214804) {
            ctx->pc = 0x214798u;
            goto label_214798;
        }
    }
    ctx->pc = 0x21480Cu;
    // 0x21480c: 0xdfbf0030
    ctx->pc = 0x21480cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214810: 0xdfb10020
    ctx->pc = 0x214810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214814: 0xdfb00010
    ctx->pc = 0x214814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214818: 0x3e00008
    ctx->pc = 0x214818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21481Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214778u: goto label_214778;
            case 0x214798u: goto label_214798;
            case 0x2147C8u: goto label_2147c8;
            case 0x2147FCu: goto label_2147fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214820u;
}
