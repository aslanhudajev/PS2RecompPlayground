#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlyrSfxDoDamageSub
// Address: 0x24e800 - 0x24ee20
void PlyrSfxDoDamageSub_0x24e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24e800u;

label_24e800:
    // 0x24e800: 0x27bdff50
    ctx->pc = 0x24e800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_24e804:
    // 0x24e804: 0xffbf00a0
    ctx->pc = 0x24e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_24e808:
    // 0x24e808: 0xffb60090
    ctx->pc = 0x24e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_24e80c:
    // 0x24e80c: 0xffb50080
    ctx->pc = 0x24e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_24e810:
    // 0x24e810: 0xffb40070
    ctx->pc = 0x24e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_24e814:
    // 0x24e814: 0xffb30060
    ctx->pc = 0x24e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_24e818:
    // 0x24e818: 0xffb20050
    ctx->pc = 0x24e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_24e81c:
    // 0x24e81c: 0xffb10040
    ctx->pc = 0x24e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_24e820:
    // 0x24e820: 0xffb00030
    ctx->pc = 0x24e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_24e824:
    // 0x24e824: 0x80a02d
    ctx->pc = 0x24e824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e828:
    // 0x24e828: 0xa0882d
    ctx->pc = 0x24e828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24e82c:
    // 0x24e82c: 0xc0902d
    ctx->pc = 0x24e82cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24e830:
    // 0x24e830: 0xe0802d
    ctx->pc = 0x24e830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24e834:
    // 0x24e834: 0x1240000e
label_24e838:
    if (ctx->pc == 0x24E838u) {
        ctx->pc = 0x24E838u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x24E83Cu;
        goto label_24e83c;
    }
    ctx->pc = 0x24E834u;
    {
        const bool branch_taken_0x24e834 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E838u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x24e834) {
            ctx->pc = 0x24E870u;
            goto label_24e870;
        }
    }
    ctx->pc = 0x24E83Cu;
label_24e83c:
    // 0x24e83c: 0xc620002c
    ctx->pc = 0x24e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e840:
    // 0x24e840: 0xe7a00000
    ctx->pc = 0x24e840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24e844:
    // 0x24e844: 0xc6200030
    ctx->pc = 0x24e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e848:
    // 0x24e848: 0xe7a00004
    ctx->pc = 0x24e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24e84c:
    // 0x24e84c: 0xc6200034
    ctx->pc = 0x24e84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e850:
    // 0x24e850: 0x1200001c
label_24e854:
    if (ctx->pc == 0x24E854u) {
        ctx->pc = 0x24E854u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x24E858u;
        goto label_24e858;
    }
    ctx->pc = 0x24E850u;
    {
        const bool branch_taken_0x24e850 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E854u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x24e850) {
            ctx->pc = 0x24E8C4u;
            goto label_24e8c4;
        }
    }
    ctx->pc = 0x24E858u;
label_24e858:
    // 0x24e858: 0x200202d
    ctx->pc = 0x24e858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e85c:
    // 0x24e85c: 0x200282d
    ctx->pc = 0x24e85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e860:
    // 0x24e860: 0xc0b587e
label_24e864:
    if (ctx->pc == 0x24E864u) {
        ctx->pc = 0x24E864u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x24E868u;
        goto label_24e868;
    }
    ctx->pc = 0x24E860u;
    SET_GPR_U32(ctx, 31, 0x24E868u);
    ctx->pc = 0x24E864u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 32));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E868u; }
    }
    if (ctx->pc != 0x24E868u) { return; }
    ctx->pc = 0x24E868u;
label_24e868:
    // 0x24e868: 0x10000007
label_24e86c:
    if (ctx->pc == 0x24E86Cu) {
        ctx->pc = 0x24E86Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x24E870u;
        goto label_24e870;
    }
    ctx->pc = 0x24E868u;
    {
        const bool branch_taken_0x24e868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E86Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x24e868) {
            ctx->pc = 0x24E888u;
            goto label_24e888;
        }
    }
    ctx->pc = 0x24E870u;
label_24e870:
    // 0x24e870: 0x12000011
label_24e874:
    if (ctx->pc == 0x24E874u) {
        ctx->pc = 0x24E874u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
        ctx->pc = 0x24E878u;
        goto label_24e878;
    }
    ctx->pc = 0x24E870u;
    {
        const bool branch_taken_0x24e870 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E874u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 44));
        if (branch_taken_0x24e870) {
            ctx->pc = 0x24E8B8u;
            goto label_24e8b8;
        }
    }
    ctx->pc = 0x24E878u;
label_24e878:
    // 0x24e878: 0x3a0282d
    ctx->pc = 0x24e878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24e87c:
    // 0x24e87c: 0xc0b585c
label_24e880:
    if (ctx->pc == 0x24E880u) {
        ctx->pc = 0x24E880u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x24E884u;
        goto label_24e884;
    }
    ctx->pc = 0x24E87Cu;
    SET_GPR_U32(ctx, 31, 0x24E884u);
    ctx->pc = 0x24E880u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 32));
    ctx->pc = 0x2D6170u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat3_0x2d6170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E884u; }
    }
    if (ctx->pc != 0x24E884u) { return; }
    ctx->pc = 0x24E884u;
label_24e884:
    // 0x24e884: 0xc6000000
    ctx->pc = 0x24e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e888:
    // 0x24e888: 0xc7a10000
    ctx->pc = 0x24e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e88c:
    // 0x24e88c: 0x46010000
    ctx->pc = 0x24e88cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24e890:
    // 0x24e890: 0xe7a00000
    ctx->pc = 0x24e890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24e894:
    // 0x24e894: 0xc6000004
    ctx->pc = 0x24e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e898:
    // 0x24e898: 0xc7a10004
    ctx->pc = 0x24e898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e89c:
    // 0x24e89c: 0x46010000
    ctx->pc = 0x24e89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24e8a0:
    // 0x24e8a0: 0xe7a00004
    ctx->pc = 0x24e8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24e8a4:
    // 0x24e8a4: 0xc6000008
    ctx->pc = 0x24e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e8a8:
    // 0x24e8a8: 0xc7a10008
    ctx->pc = 0x24e8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e8ac:
    // 0x24e8ac: 0x46010000
    ctx->pc = 0x24e8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24e8b0:
    // 0x24e8b0: 0x10000004
label_24e8b4:
    if (ctx->pc == 0x24E8B4u) {
        ctx->pc = 0x24E8B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x24E8B8u;
        goto label_24e8b8;
    }
    ctx->pc = 0x24E8B0u;
    {
        const bool branch_taken_0x24e8b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E8B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x24e8b0) {
            ctx->pc = 0x24E8C4u;
            goto label_24e8c4;
        }
    }
    ctx->pc = 0x24E8B8u;
label_24e8b8:
    // 0x24e8b8: 0x3a0282d
    ctx->pc = 0x24e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24e8bc:
    // 0x24e8bc: 0xc0b5836
label_24e8c0:
    if (ctx->pc == 0x24E8C0u) {
        ctx->pc = 0x24E8C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x24E8C4u;
        goto label_24e8c4;
    }
    ctx->pc = 0x24E8BCu;
    SET_GPR_U32(ctx, 31, 0x24E8C4u);
    ctx->pc = 0x24E8C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 32));
    ctx->pc = 0x2D60D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVecMat4_0x2d60d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8C4u; }
    }
    if (ctx->pc != 0x24E8C4u) { return; }
    ctx->pc = 0x24E8C4u;
label_24e8c4:
    // 0x24e8c4: 0x280202d
    ctx->pc = 0x24e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24e8c8:
    // 0x24e8c8: 0x86250048
    ctx->pc = 0x24e8c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
label_24e8cc:
    // 0x24e8cc: 0x3a0302d
    ctx->pc = 0x24e8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24e8d0:
    // 0x24e8d0: 0x240382d
    ctx->pc = 0x24e8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e8d4:
    // 0x24e8d4: 0xc093946
label_24e8d8:
    if (ctx->pc == 0x24E8D8u) {
        ctx->pc = 0x24E8D8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x24E8DCu;
        goto label_24e8dc;
    }
    ctx->pc = 0x24E8D4u;
    SET_GPR_U32(ctx, 31, 0x24E8DCu);
    ctx->pc = 0x24E8D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x24E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlyrSfx_0x24e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E8DCu; }
    }
    if (ctx->pc != 0x24E8DCu) { return; }
    ctx->pc = 0x24E8DCu;
label_24e8dc:
    // 0x24e8dc: 0x40982d
    ctx->pc = 0x24e8dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e8e0:
    // 0x24e8e0: 0x6600144
label_24e8e4:
    if (ctx->pc == 0x24E8E4u) {
        ctx->pc = 0x24E8E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x24E8E8u;
        goto label_24e8e8;
    }
    ctx->pc = 0x24E8E0u;
    {
        const bool branch_taken_0x24e8e0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x24E8E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24e8e0) {
            ctx->pc = 0x24EDF4u;
            goto label_24edf4;
        }
    }
    ctx->pc = 0x24E8E8u;
label_24e8e8:
    // 0x24e8e8: 0x24634910
    ctx->pc = 0x24e8e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
label_24e8ec:
    // 0x24e8ec: 0x151080
    ctx->pc = 0x24e8ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_24e8f0:
    // 0x24e8f0: 0x431021
    ctx->pc = 0x24e8f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24e8f4:
    // 0x24e8f4: 0x8c440000
    ctx->pc = 0x24e8f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e8f8:
    // 0x24e8f8: 0x86220048
    ctx->pc = 0x24e8f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
label_24e8fc:
    // 0x24e8fc: 0x24030050
    ctx->pc = 0x24e8fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
label_24e900:
    // 0x24e900: 0x431018
    ctx->pc = 0x24e900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24e904:
    // 0x24e904: 0x8c830004
    ctx->pc = 0x24e904u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_24e908:
    // 0x24e908: 0x43b021
    ctx->pc = 0x24e908u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24e90c:
    // 0x24e90c: 0x96220000
    ctx->pc = 0x24e90cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_24e910:
    // 0x24e910: 0x2442fffe
    ctx->pc = 0x24e910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_24e914:
    // 0x24e914: 0x21400
    ctx->pc = 0x24e914u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_24e918:
    // 0x24e918: 0x21c03
    ctx->pc = 0x24e918u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
label_24e91c:
    // 0x24e91c: 0x2c620008
    ctx->pc = 0x24e91cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_24e920:
    // 0x24e920: 0x1040000d
label_24e924:
    if (ctx->pc == 0x24E924u) {
        ctx->pc = 0x24E924u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24E928u;
        goto label_24e928;
    }
    ctx->pc = 0x24E920u;
    {
        const bool branch_taken_0x24e920 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E924u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24e920) {
            ctx->pc = 0x24E958u;
            goto label_24e958;
        }
    }
    ctx->pc = 0x24E928u;
label_24e928:
    // 0x24e928: 0x3c02003b
    ctx->pc = 0x24e928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_24e92c:
    // 0x24e92c: 0x24428420
    ctx->pc = 0x24e92cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935584));
label_24e930:
    // 0x24e930: 0x31880
    ctx->pc = 0x24e930u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_24e934:
    // 0x24e934: 0x621821
    ctx->pc = 0x24e934u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24e938:
    // 0x24e938: 0x8c620000
    ctx->pc = 0x24e938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24e93c:
    // 0x24e93c: 0x400008
label_24e940:
    if (ctx->pc == 0x24E940u) {
        ctx->pc = 0x24E944u;
        goto label_24e944;
    }
    ctx->pc = 0x24E93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E800u: goto label_24e800;
            case 0x24E804u: goto label_24e804;
            case 0x24E808u: goto label_24e808;
            case 0x24E80Cu: goto label_24e80c;
            case 0x24E810u: goto label_24e810;
            case 0x24E814u: goto label_24e814;
            case 0x24E818u: goto label_24e818;
            case 0x24E81Cu: goto label_24e81c;
            case 0x24E820u: goto label_24e820;
            case 0x24E824u: goto label_24e824;
            case 0x24E828u: goto label_24e828;
            case 0x24E82Cu: goto label_24e82c;
            case 0x24E830u: goto label_24e830;
            case 0x24E834u: goto label_24e834;
            case 0x24E838u: goto label_24e838;
            case 0x24E83Cu: goto label_24e83c;
            case 0x24E840u: goto label_24e840;
            case 0x24E844u: goto label_24e844;
            case 0x24E848u: goto label_24e848;
            case 0x24E84Cu: goto label_24e84c;
            case 0x24E850u: goto label_24e850;
            case 0x24E854u: goto label_24e854;
            case 0x24E858u: goto label_24e858;
            case 0x24E85Cu: goto label_24e85c;
            case 0x24E860u: goto label_24e860;
            case 0x24E864u: goto label_24e864;
            case 0x24E868u: goto label_24e868;
            case 0x24E86Cu: goto label_24e86c;
            case 0x24E870u: goto label_24e870;
            case 0x24E874u: goto label_24e874;
            case 0x24E878u: goto label_24e878;
            case 0x24E87Cu: goto label_24e87c;
            case 0x24E880u: goto label_24e880;
            case 0x24E884u: goto label_24e884;
            case 0x24E888u: goto label_24e888;
            case 0x24E88Cu: goto label_24e88c;
            case 0x24E890u: goto label_24e890;
            case 0x24E894u: goto label_24e894;
            case 0x24E898u: goto label_24e898;
            case 0x24E89Cu: goto label_24e89c;
            case 0x24E8A0u: goto label_24e8a0;
            case 0x24E8A4u: goto label_24e8a4;
            case 0x24E8A8u: goto label_24e8a8;
            case 0x24E8ACu: goto label_24e8ac;
            case 0x24E8B0u: goto label_24e8b0;
            case 0x24E8B4u: goto label_24e8b4;
            case 0x24E8B8u: goto label_24e8b8;
            case 0x24E8BCu: goto label_24e8bc;
            case 0x24E8C0u: goto label_24e8c0;
            case 0x24E8C4u: goto label_24e8c4;
            case 0x24E8C8u: goto label_24e8c8;
            case 0x24E8CCu: goto label_24e8cc;
            case 0x24E8D0u: goto label_24e8d0;
            case 0x24E8D4u: goto label_24e8d4;
            case 0x24E8D8u: goto label_24e8d8;
            case 0x24E8DCu: goto label_24e8dc;
            case 0x24E8E0u: goto label_24e8e0;
            case 0x24E8E4u: goto label_24e8e4;
            case 0x24E8E8u: goto label_24e8e8;
            case 0x24E8ECu: goto label_24e8ec;
            case 0x24E8F0u: goto label_24e8f0;
            case 0x24E8F4u: goto label_24e8f4;
            case 0x24E8F8u: goto label_24e8f8;
            case 0x24E8FCu: goto label_24e8fc;
            case 0x24E900u: goto label_24e900;
            case 0x24E904u: goto label_24e904;
            case 0x24E908u: goto label_24e908;
            case 0x24E90Cu: goto label_24e90c;
            case 0x24E910u: goto label_24e910;
            case 0x24E914u: goto label_24e914;
            case 0x24E918u: goto label_24e918;
            case 0x24E91Cu: goto label_24e91c;
            case 0x24E920u: goto label_24e920;
            case 0x24E924u: goto label_24e924;
            case 0x24E928u: goto label_24e928;
            case 0x24E92Cu: goto label_24e92c;
            case 0x24E930u: goto label_24e930;
            case 0x24E934u: goto label_24e934;
            case 0x24E938u: goto label_24e938;
            case 0x24E93Cu: goto label_24e93c;
            case 0x24E940u: goto label_24e940;
            case 0x24E944u: goto label_24e944;
            case 0x24E948u: goto label_24e948;
            case 0x24E94Cu: goto label_24e94c;
            case 0x24E950u: goto label_24e950;
            case 0x24E954u: goto label_24e954;
            case 0x24E958u: goto label_24e958;
            case 0x24E95Cu: goto label_24e95c;
            case 0x24E960u: goto label_24e960;
            case 0x24E964u: goto label_24e964;
            case 0x24E968u: goto label_24e968;
            case 0x24E96Cu: goto label_24e96c;
            case 0x24E970u: goto label_24e970;
            case 0x24E974u: goto label_24e974;
            case 0x24E978u: goto label_24e978;
            case 0x24E97Cu: goto label_24e97c;
            case 0x24E980u: goto label_24e980;
            case 0x24E984u: goto label_24e984;
            case 0x24E988u: goto label_24e988;
            case 0x24E98Cu: goto label_24e98c;
            case 0x24E990u: goto label_24e990;
            case 0x24E994u: goto label_24e994;
            case 0x24E998u: goto label_24e998;
            case 0x24E99Cu: goto label_24e99c;
            case 0x24E9A0u: goto label_24e9a0;
            case 0x24E9A4u: goto label_24e9a4;
            case 0x24E9A8u: goto label_24e9a8;
            case 0x24E9ACu: goto label_24e9ac;
            case 0x24E9B0u: goto label_24e9b0;
            case 0x24E9B4u: goto label_24e9b4;
            case 0x24E9B8u: goto label_24e9b8;
            case 0x24E9BCu: goto label_24e9bc;
            case 0x24E9C0u: goto label_24e9c0;
            case 0x24E9C4u: goto label_24e9c4;
            case 0x24E9C8u: goto label_24e9c8;
            case 0x24E9CCu: goto label_24e9cc;
            case 0x24E9D0u: goto label_24e9d0;
            case 0x24E9D4u: goto label_24e9d4;
            case 0x24E9D8u: goto label_24e9d8;
            case 0x24E9DCu: goto label_24e9dc;
            case 0x24E9E0u: goto label_24e9e0;
            case 0x24E9E4u: goto label_24e9e4;
            case 0x24E9E8u: goto label_24e9e8;
            case 0x24E9ECu: goto label_24e9ec;
            case 0x24E9F0u: goto label_24e9f0;
            case 0x24E9F4u: goto label_24e9f4;
            case 0x24E9F8u: goto label_24e9f8;
            case 0x24E9FCu: goto label_24e9fc;
            case 0x24EA00u: goto label_24ea00;
            case 0x24EA04u: goto label_24ea04;
            case 0x24EA08u: goto label_24ea08;
            case 0x24EA0Cu: goto label_24ea0c;
            case 0x24EA10u: goto label_24ea10;
            case 0x24EA14u: goto label_24ea14;
            case 0x24EA18u: goto label_24ea18;
            case 0x24EA1Cu: goto label_24ea1c;
            case 0x24EA20u: goto label_24ea20;
            case 0x24EA24u: goto label_24ea24;
            case 0x24EA28u: goto label_24ea28;
            case 0x24EA2Cu: goto label_24ea2c;
            case 0x24EA30u: goto label_24ea30;
            case 0x24EA34u: goto label_24ea34;
            case 0x24EA38u: goto label_24ea38;
            case 0x24EA3Cu: goto label_24ea3c;
            case 0x24EA40u: goto label_24ea40;
            case 0x24EA44u: goto label_24ea44;
            case 0x24EA48u: goto label_24ea48;
            case 0x24EA4Cu: goto label_24ea4c;
            case 0x24EA50u: goto label_24ea50;
            case 0x24EA54u: goto label_24ea54;
            case 0x24EA58u: goto label_24ea58;
            case 0x24EA5Cu: goto label_24ea5c;
            case 0x24EA60u: goto label_24ea60;
            case 0x24EA64u: goto label_24ea64;
            case 0x24EA68u: goto label_24ea68;
            case 0x24EA6Cu: goto label_24ea6c;
            case 0x24EA70u: goto label_24ea70;
            case 0x24EA74u: goto label_24ea74;
            case 0x24EA78u: goto label_24ea78;
            case 0x24EA7Cu: goto label_24ea7c;
            case 0x24EA80u: goto label_24ea80;
            case 0x24EA84u: goto label_24ea84;
            case 0x24EA88u: goto label_24ea88;
            case 0x24EA8Cu: goto label_24ea8c;
            case 0x24EA90u: goto label_24ea90;
            case 0x24EA94u: goto label_24ea94;
            case 0x24EA98u: goto label_24ea98;
            case 0x24EA9Cu: goto label_24ea9c;
            case 0x24EAA0u: goto label_24eaa0;
            case 0x24EAA4u: goto label_24eaa4;
            case 0x24EAA8u: goto label_24eaa8;
            case 0x24EAACu: goto label_24eaac;
            case 0x24EAB0u: goto label_24eab0;
            case 0x24EAB4u: goto label_24eab4;
            case 0x24EAB8u: goto label_24eab8;
            case 0x24EABCu: goto label_24eabc;
            case 0x24EAC0u: goto label_24eac0;
            case 0x24EAC4u: goto label_24eac4;
            case 0x24EAC8u: goto label_24eac8;
            case 0x24EACCu: goto label_24eacc;
            case 0x24EAD0u: goto label_24ead0;
            case 0x24EAD4u: goto label_24ead4;
            case 0x24EAD8u: goto label_24ead8;
            case 0x24EADCu: goto label_24eadc;
            case 0x24EAE0u: goto label_24eae0;
            case 0x24EAE4u: goto label_24eae4;
            case 0x24EAE8u: goto label_24eae8;
            case 0x24EAECu: goto label_24eaec;
            case 0x24EAF0u: goto label_24eaf0;
            case 0x24EAF4u: goto label_24eaf4;
            case 0x24EAF8u: goto label_24eaf8;
            case 0x24EAFCu: goto label_24eafc;
            case 0x24EB00u: goto label_24eb00;
            case 0x24EB04u: goto label_24eb04;
            case 0x24EB08u: goto label_24eb08;
            case 0x24EB0Cu: goto label_24eb0c;
            case 0x24EB10u: goto label_24eb10;
            case 0x24EB14u: goto label_24eb14;
            case 0x24EB18u: goto label_24eb18;
            case 0x24EB1Cu: goto label_24eb1c;
            case 0x24EB20u: goto label_24eb20;
            case 0x24EB24u: goto label_24eb24;
            case 0x24EB28u: goto label_24eb28;
            case 0x24EB2Cu: goto label_24eb2c;
            case 0x24EB30u: goto label_24eb30;
            case 0x24EB34u: goto label_24eb34;
            case 0x24EB38u: goto label_24eb38;
            case 0x24EB3Cu: goto label_24eb3c;
            case 0x24EB40u: goto label_24eb40;
            case 0x24EB44u: goto label_24eb44;
            case 0x24EB48u: goto label_24eb48;
            case 0x24EB4Cu: goto label_24eb4c;
            case 0x24EB50u: goto label_24eb50;
            case 0x24EB54u: goto label_24eb54;
            case 0x24EB58u: goto label_24eb58;
            case 0x24EB5Cu: goto label_24eb5c;
            case 0x24EB60u: goto label_24eb60;
            case 0x24EB64u: goto label_24eb64;
            case 0x24EB68u: goto label_24eb68;
            case 0x24EB6Cu: goto label_24eb6c;
            case 0x24EB70u: goto label_24eb70;
            case 0x24EB74u: goto label_24eb74;
            case 0x24EB78u: goto label_24eb78;
            case 0x24EB7Cu: goto label_24eb7c;
            case 0x24EB80u: goto label_24eb80;
            case 0x24EB84u: goto label_24eb84;
            case 0x24EB88u: goto label_24eb88;
            case 0x24EB8Cu: goto label_24eb8c;
            case 0x24EB90u: goto label_24eb90;
            case 0x24EB94u: goto label_24eb94;
            case 0x24EB98u: goto label_24eb98;
            case 0x24EB9Cu: goto label_24eb9c;
            case 0x24EBA0u: goto label_24eba0;
            case 0x24EBA4u: goto label_24eba4;
            case 0x24EBA8u: goto label_24eba8;
            case 0x24EBACu: goto label_24ebac;
            case 0x24EBB0u: goto label_24ebb0;
            case 0x24EBB4u: goto label_24ebb4;
            case 0x24EBB8u: goto label_24ebb8;
            case 0x24EBBCu: goto label_24ebbc;
            case 0x24EBC0u: goto label_24ebc0;
            case 0x24EBC4u: goto label_24ebc4;
            case 0x24EBC8u: goto label_24ebc8;
            case 0x24EBCCu: goto label_24ebcc;
            case 0x24EBD0u: goto label_24ebd0;
            case 0x24EBD4u: goto label_24ebd4;
            case 0x24EBD8u: goto label_24ebd8;
            case 0x24EBDCu: goto label_24ebdc;
            case 0x24EBE0u: goto label_24ebe0;
            case 0x24EBE4u: goto label_24ebe4;
            case 0x24EBE8u: goto label_24ebe8;
            case 0x24EBECu: goto label_24ebec;
            case 0x24EBF0u: goto label_24ebf0;
            case 0x24EBF4u: goto label_24ebf4;
            case 0x24EBF8u: goto label_24ebf8;
            case 0x24EBFCu: goto label_24ebfc;
            case 0x24EC00u: goto label_24ec00;
            case 0x24EC04u: goto label_24ec04;
            case 0x24EC08u: goto label_24ec08;
            case 0x24EC0Cu: goto label_24ec0c;
            case 0x24EC10u: goto label_24ec10;
            case 0x24EC14u: goto label_24ec14;
            case 0x24EC18u: goto label_24ec18;
            case 0x24EC1Cu: goto label_24ec1c;
            case 0x24EC20u: goto label_24ec20;
            case 0x24EC24u: goto label_24ec24;
            case 0x24EC28u: goto label_24ec28;
            case 0x24EC2Cu: goto label_24ec2c;
            case 0x24EC30u: goto label_24ec30;
            case 0x24EC34u: goto label_24ec34;
            case 0x24EC38u: goto label_24ec38;
            case 0x24EC3Cu: goto label_24ec3c;
            case 0x24EC40u: goto label_24ec40;
            case 0x24EC44u: goto label_24ec44;
            case 0x24EC48u: goto label_24ec48;
            case 0x24EC4Cu: goto label_24ec4c;
            case 0x24EC50u: goto label_24ec50;
            case 0x24EC54u: goto label_24ec54;
            case 0x24EC58u: goto label_24ec58;
            case 0x24EC5Cu: goto label_24ec5c;
            case 0x24EC60u: goto label_24ec60;
            case 0x24EC64u: goto label_24ec64;
            case 0x24EC68u: goto label_24ec68;
            case 0x24EC6Cu: goto label_24ec6c;
            case 0x24EC70u: goto label_24ec70;
            case 0x24EC74u: goto label_24ec74;
            case 0x24EC78u: goto label_24ec78;
            case 0x24EC7Cu: goto label_24ec7c;
            case 0x24EC80u: goto label_24ec80;
            case 0x24EC84u: goto label_24ec84;
            case 0x24EC88u: goto label_24ec88;
            case 0x24EC8Cu: goto label_24ec8c;
            case 0x24EC90u: goto label_24ec90;
            case 0x24EC94u: goto label_24ec94;
            case 0x24EC98u: goto label_24ec98;
            case 0x24EC9Cu: goto label_24ec9c;
            case 0x24ECA0u: goto label_24eca0;
            case 0x24ECA4u: goto label_24eca4;
            case 0x24ECA8u: goto label_24eca8;
            case 0x24ECACu: goto label_24ecac;
            case 0x24ECB0u: goto label_24ecb0;
            case 0x24ECB4u: goto label_24ecb4;
            case 0x24ECB8u: goto label_24ecb8;
            case 0x24ECBCu: goto label_24ecbc;
            case 0x24ECC0u: goto label_24ecc0;
            case 0x24ECC4u: goto label_24ecc4;
            case 0x24ECC8u: goto label_24ecc8;
            case 0x24ECCCu: goto label_24eccc;
            case 0x24ECD0u: goto label_24ecd0;
            case 0x24ECD4u: goto label_24ecd4;
            case 0x24ECD8u: goto label_24ecd8;
            case 0x24ECDCu: goto label_24ecdc;
            case 0x24ECE0u: goto label_24ece0;
            case 0x24ECE4u: goto label_24ece4;
            case 0x24ECE8u: goto label_24ece8;
            case 0x24ECECu: goto label_24ecec;
            case 0x24ECF0u: goto label_24ecf0;
            case 0x24ECF4u: goto label_24ecf4;
            case 0x24ECF8u: goto label_24ecf8;
            case 0x24ECFCu: goto label_24ecfc;
            case 0x24ED00u: goto label_24ed00;
            case 0x24ED04u: goto label_24ed04;
            case 0x24ED08u: goto label_24ed08;
            case 0x24ED0Cu: goto label_24ed0c;
            case 0x24ED10u: goto label_24ed10;
            case 0x24ED14u: goto label_24ed14;
            case 0x24ED18u: goto label_24ed18;
            case 0x24ED1Cu: goto label_24ed1c;
            case 0x24ED20u: goto label_24ed20;
            case 0x24ED24u: goto label_24ed24;
            case 0x24ED28u: goto label_24ed28;
            case 0x24ED2Cu: goto label_24ed2c;
            case 0x24ED30u: goto label_24ed30;
            case 0x24ED34u: goto label_24ed34;
            case 0x24ED38u: goto label_24ed38;
            case 0x24ED3Cu: goto label_24ed3c;
            case 0x24ED40u: goto label_24ed40;
            case 0x24ED44u: goto label_24ed44;
            case 0x24ED48u: goto label_24ed48;
            case 0x24ED4Cu: goto label_24ed4c;
            case 0x24ED50u: goto label_24ed50;
            case 0x24ED54u: goto label_24ed54;
            case 0x24ED58u: goto label_24ed58;
            case 0x24ED5Cu: goto label_24ed5c;
            case 0x24ED60u: goto label_24ed60;
            case 0x24ED64u: goto label_24ed64;
            case 0x24ED68u: goto label_24ed68;
            case 0x24ED6Cu: goto label_24ed6c;
            case 0x24ED70u: goto label_24ed70;
            case 0x24ED74u: goto label_24ed74;
            case 0x24ED78u: goto label_24ed78;
            case 0x24ED7Cu: goto label_24ed7c;
            case 0x24ED80u: goto label_24ed80;
            case 0x24ED84u: goto label_24ed84;
            case 0x24ED88u: goto label_24ed88;
            case 0x24ED8Cu: goto label_24ed8c;
            case 0x24ED90u: goto label_24ed90;
            case 0x24ED94u: goto label_24ed94;
            case 0x24ED98u: goto label_24ed98;
            case 0x24ED9Cu: goto label_24ed9c;
            case 0x24EDA0u: goto label_24eda0;
            case 0x24EDA4u: goto label_24eda4;
            case 0x24EDA8u: goto label_24eda8;
            case 0x24EDACu: goto label_24edac;
            case 0x24EDB0u: goto label_24edb0;
            case 0x24EDB4u: goto label_24edb4;
            case 0x24EDB8u: goto label_24edb8;
            case 0x24EDBCu: goto label_24edbc;
            case 0x24EDC0u: goto label_24edc0;
            case 0x24EDC4u: goto label_24edc4;
            case 0x24EDC8u: goto label_24edc8;
            case 0x24EDCCu: goto label_24edcc;
            case 0x24EDD0u: goto label_24edd0;
            case 0x24EDD4u: goto label_24edd4;
            case 0x24EDD8u: goto label_24edd8;
            case 0x24EDDCu: goto label_24eddc;
            case 0x24EDE0u: goto label_24ede0;
            case 0x24EDE4u: goto label_24ede4;
            case 0x24EDE8u: goto label_24ede8;
            case 0x24EDECu: goto label_24edec;
            case 0x24EDF0u: goto label_24edf0;
            case 0x24EDF4u: goto label_24edf4;
            case 0x24EDF8u: goto label_24edf8;
            case 0x24EDFCu: goto label_24edfc;
            case 0x24EE00u: goto label_24ee00;
            case 0x24EE04u: goto label_24ee04;
            case 0x24EE08u: goto label_24ee08;
            case 0x24EE0Cu: goto label_24ee0c;
            case 0x24EE10u: goto label_24ee10;
            case 0x24EE14u: goto label_24ee14;
            case 0x24EE18u: goto label_24ee18;
            case 0x24EE1Cu: goto label_24ee1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24E944u;
label_24e944:
    // 0x24e944: 0x10000004
label_24e948:
    if (ctx->pc == 0x24E948u) {
        ctx->pc = 0x24E948u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 14));
        ctx->pc = 0x24E94Cu;
        goto label_24e94c;
    }
    ctx->pc = 0x24E944u;
    {
        const bool branch_taken_0x24e944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E948u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 14));
        if (branch_taken_0x24e944) {
            ctx->pc = 0x24E958u;
            goto label_24e958;
        }
    }
    ctx->pc = 0x24E94Cu;
label_24e94c:
    // 0x24e94c: 0x10000002
label_24e950:
    if (ctx->pc == 0x24E950u) {
        ctx->pc = 0x24E950u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 58));
        ctx->pc = 0x24E954u;
        goto label_24e954;
    }
    ctx->pc = 0x24E94Cu;
    {
        const bool branch_taken_0x24e94c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E950u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 58));
        if (branch_taken_0x24e94c) {
            ctx->pc = 0x24E958u;
            goto label_24e958;
        }
    }
    ctx->pc = 0x24E954u;
label_24e954:
    // 0x24e954: 0x34a5002a
    ctx->pc = 0x24e954u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 42));
label_24e958:
    // 0x24e958: 0x3c020032
    ctx->pc = 0x24e958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_24e95c:
    // 0x24e95c: 0x8c43f474
    ctx->pc = 0x24e95cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964340)));
label_24e960:
    // 0x24e960: 0x24020002
    ctx->pc = 0x24e960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_24e964:
    // 0x24e964: 0x14620003
label_24e968:
    if (ctx->pc == 0x24E968u) {
        ctx->pc = 0x24E968u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 256));
        ctx->pc = 0x24E96Cu;
        goto label_24e96c;
    }
    ctx->pc = 0x24E964u;
    {
        const bool branch_taken_0x24e964 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24E968u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 256));
        if (branch_taken_0x24e964) {
            ctx->pc = 0x24E974u;
            goto label_24e974;
        }
    }
    ctx->pc = 0x24E96Cu;
label_24e96c:
    // 0x24e96c: 0x10000002
label_24e970:
    if (ctx->pc == 0x24E970u) {
        ctx->pc = 0x24E970u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x24E974u;
        goto label_24e974;
    }
    ctx->pc = 0x24E96Cu;
    {
        const bool branch_taken_0x24e96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E970u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x24e96c) {
            ctx->pc = 0x24E978u;
            goto label_24e978;
        }
    }
    ctx->pc = 0x24E974u;
label_24e974:
    // 0x24e974: 0x34a50200
    ctx->pc = 0x24e974u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 512));
label_24e978:
    // 0x24e978: 0x96220002
    ctx->pc = 0x24e978u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_24e97c:
    // 0x24e97c: 0x30420040
    ctx->pc = 0x24e97cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_24e980:
    // 0x24e980: 0x10400002
label_24e984:
    if (ctx->pc == 0x24E984u) {
        ctx->pc = 0x24E984u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x24E988u;
        goto label_24e988;
    }
    ctx->pc = 0x24E980u;
    {
        const bool branch_taken_0x24e980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E984u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x24e980) {
            ctx->pc = 0x24E98Cu;
            goto label_24e98c;
        }
    }
    ctx->pc = 0x24E988u;
label_24e988:
    // 0x24e988: 0xa22824
    ctx->pc = 0x24e988u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24e98c:
    // 0x24e98c: 0x8e220004
    ctx->pc = 0x24e98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24e990:
    // 0x24e990: 0x3c030002
    ctx->pc = 0x24e990u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2 << 16));
label_24e994:
    // 0x24e994: 0xa32025
    ctx->pc = 0x24e994u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_24e998:
    // 0x24e998: 0x431024
    ctx->pc = 0x24e998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24e99c:
    // 0x24e99c: 0x82280b
    ctx->pc = 0x24e99cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 4));
label_24e9a0:
    // 0x24e9a0: 0x3c030034
    ctx->pc = 0x24e9a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_24e9a4:
    // 0x24e9a4: 0x24630eb0
    ctx->pc = 0x24e9a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_24e9a8:
    // 0x24e9a8: 0x240200f0
    ctx->pc = 0x24e9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_24e9ac:
    // 0x24e9ac: 0x2621018
    ctx->pc = 0x24e9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24e9b0:
    // 0x24e9b0: 0x431821
    ctx->pc = 0x24e9b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24e9b4:
    // 0x24e9b4: 0x8c620064
    ctx->pc = 0x24e9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_24e9b8:
    // 0x24e9b8: 0xa21025
    ctx->pc = 0x24e9b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24e9bc:
    // 0x24e9bc: 0xac620064
    ctx->pc = 0x24e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_24e9c0:
    // 0x24e9c0: 0x8ec20000
    ctx->pc = 0x24e9c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24e9c4:
    // 0x24e9c4: 0x30420010
    ctx->pc = 0x24e9c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_24e9c8:
    // 0x24e9c8: 0x50400008
label_24e9cc:
    if (ctx->pc == 0x24E9CCu) {
        ctx->pc = 0x24E9CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24E9D0u;
        goto label_24e9d0;
    }
    ctx->pc = 0x24E9C8u;
    {
        const bool branch_taken_0x24e9c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24e9c8) {
            ctx->pc = 0x24E9CCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x24E9ECu;
            goto label_24e9ec;
        }
    }
    ctx->pc = 0x24E9D0u;
label_24e9d0:
    // 0x24e9d0: 0x8622004a
    ctx->pc = 0x24e9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
label_24e9d4:
    // 0x24e9d4: 0x4430005
label_24e9d8:
    if (ctx->pc == 0x24E9D8u) {
        ctx->pc = 0x24E9D8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24E9DCu;
        goto label_24e9dc;
    }
    ctx->pc = 0x24E9D4u;
    {
        const bool branch_taken_0x24e9d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x24e9d4) {
            ctx->pc = 0x24E9D8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x24E9ECu;
            goto label_24e9ec;
        }
    }
    ctx->pc = 0x24E9DCu;
label_24e9dc:
    // 0x24e9dc: 0x260202d
    ctx->pc = 0x24e9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24e9e0:
    // 0x24e9e0: 0xc09eaa0
label_24e9e4:
    if (ctx->pc == 0x24E9E4u) {
        ctx->pc = 0x24E9E4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->pc = 0x24E9E8u;
        goto label_24e9e8;
    }
    ctx->pc = 0x24E9E0u;
    SET_GPR_U32(ctx, 31, 0x24E9E8u);
    ctx->pc = 0x24E9E4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->pc = 0x27AA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceEffectOnFloor_0x27aa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E9E8u; }
    }
    if (ctx->pc != 0x24E9E8u) { return; }
    ctx->pc = 0x24E9E8u;
label_24e9e8:
    // 0x24e9e8: 0xc62c0020
    ctx->pc = 0x24e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24e9ec:
    // 0x24e9ec: 0x44800000
    ctx->pc = 0x24e9ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24e9f0:
    // 0x24e9f0: 0x46006032
    ctx->pc = 0x24e9f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24e9f4:
    // 0x24e9f4: 0x0
    ctx->pc = 0x24e9f4u;
    // NOP
label_24e9f8:
    // 0x24e9f8: 0x4503000a
label_24e9fc:
    if (ctx->pc == 0x24E9FCu) {
        ctx->pc = 0x24E9FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24EA00u;
        goto label_24ea00;
    }
    ctx->pc = 0x24E9F8u;
    {
        const bool branch_taken_0x24e9f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e9f8) {
            ctx->pc = 0x24E9FCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x24EA24u;
            goto label_24ea24;
        }
    }
    ctx->pc = 0x24EA00u;
label_24ea00:
    // 0x24ea00: 0x3c030034
    ctx->pc = 0x24ea00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_24ea04:
    // 0x24ea04: 0x24630eb0
    ctx->pc = 0x24ea04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_24ea08:
    // 0x24ea08: 0x240200f0
    ctx->pc = 0x24ea08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_24ea0c:
    // 0x24ea0c: 0x2621018
    ctx->pc = 0x24ea0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ea10:
    // 0x24ea10: 0x431021
    ctx->pc = 0x24ea10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ea14:
    // 0x24ea14: 0xc0b5632
label_24ea18:
    if (ctx->pc == 0x24EA18u) {
        ctx->pc = 0x24EA18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x24EA1Cu;
        goto label_24ea1c;
    }
    ctx->pc = 0x24EA14u;
    SET_GPR_U32(ctx, 31, 0x24EA1Cu);
    ctx->pc = 0x24EA18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EA1Cu; }
    }
    if (ctx->pc != 0x24EA1Cu) { return; }
    ctx->pc = 0x24EA1Cu;
label_24ea1c:
    // 0x24ea1c: 0xc62c0028
    ctx->pc = 0x24ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ea20:
    // 0x24ea20: 0x44800000
    ctx->pc = 0x24ea20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ea24:
    // 0x24ea24: 0x46006032
    ctx->pc = 0x24ea24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ea28:
    // 0x24ea28: 0x0
    ctx->pc = 0x24ea28u;
    // NOP
label_24ea2c:
    // 0x24ea2c: 0x45030009
label_24ea30:
    if (ctx->pc == 0x24EA30u) {
        ctx->pc = 0x24EA30u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x24EA34u;
        goto label_24ea34;
    }
    ctx->pc = 0x24EA2Cu;
    {
        const bool branch_taken_0x24ea2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ea2c) {
            ctx->pc = 0x24EA30u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x24EA54u;
            goto label_24ea54;
        }
    }
    ctx->pc = 0x24EA34u;
label_24ea34:
    // 0x24ea34: 0x3c030034
    ctx->pc = 0x24ea34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_24ea38:
    // 0x24ea38: 0x24630eb0
    ctx->pc = 0x24ea38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_24ea3c:
    // 0x24ea3c: 0x240200f0
    ctx->pc = 0x24ea3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_24ea40:
    // 0x24ea40: 0x2621018
    ctx->pc = 0x24ea40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ea44:
    // 0x24ea44: 0x431021
    ctx->pc = 0x24ea44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ea48:
    // 0x24ea48: 0xc0b5660
label_24ea4c:
    if (ctx->pc == 0x24EA4Cu) {
        ctx->pc = 0x24EA4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x24EA50u;
        goto label_24ea50;
    }
    ctx->pc = 0x24EA48u;
    SET_GPR_U32(ctx, 31, 0x24EA50u);
    ctx->pc = 0x24EA4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x2D5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchMat3_0x2d5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EA50u; }
    }
    if (ctx->pc != 0x24EA50u) { return; }
    ctx->pc = 0x24EA50u;
label_24ea50:
    // 0x24ea50: 0xc6210038
    ctx->pc = 0x24ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ea54:
    // 0x24ea54: 0x44800000
    ctx->pc = 0x24ea54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ea58:
    // 0x24ea58: 0x46000834
    ctx->pc = 0x24ea58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ea5c:
    // 0x24ea5c: 0x45000004
label_24ea60:
    if (ctx->pc == 0x24EA60u) {
        ctx->pc = 0x24EA64u;
        goto label_24ea64;
    }
    ctx->pc = 0x24EA5Cu;
    {
        const bool branch_taken_0x24ea5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ea5c) {
            ctx->pc = 0x24EA70u;
            goto label_24ea70;
        }
    }
    ctx->pc = 0x24EA64u;
label_24ea64:
    // 0x24ea64: 0x46000847
    ctx->pc = 0x24ea64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_24ea68:
    // 0x24ea68: 0xc6800118
    ctx->pc = 0x24ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ea6c:
    // 0x24ea6c: 0x46000842
    ctx->pc = 0x24ea6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_24ea70:
    // 0x24ea70: 0x44801000
    ctx->pc = 0x24ea70u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_24ea74:
    // 0x24ea74: 0x46011034
    ctx->pc = 0x24ea74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ea78:
    // 0x24ea78: 0x0
    ctx->pc = 0x24ea78u;
    // NOP
label_24ea7c:
    // 0x24ea7c: 0x450000cd
label_24ea80:
    if (ctx->pc == 0x24EA80u) {
        ctx->pc = 0x24EA80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x24EA84u;
        goto label_24ea84;
    }
    ctx->pc = 0x24EA7Cu;
    {
        const bool branch_taken_0x24ea7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EA80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x24ea7c) {
            ctx->pc = 0x24EDB4u;
            goto label_24edb4;
        }
    }
    ctx->pc = 0x24EA84u;
label_24ea84:
    // 0x24ea84: 0x24630eb0
    ctx->pc = 0x24ea84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_24ea88:
    // 0x24ea88: 0x240200f0
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_24ea8c:
    // 0x24ea8c: 0x2621018
    ctx->pc = 0x24ea8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ea90:
    // 0x24ea90: 0x431821
    ctx->pc = 0x24ea90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ea94:
    // 0x24ea94: 0xe46100ac
    ctx->pc = 0x24ea94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_24ea98:
    // 0x24ea98: 0xc6200024
    ctx->pc = 0x24ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ea9c:
    // 0x24ea9c: 0xe460009c
    ctx->pc = 0x24ea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
label_24eaa0:
    // 0x24eaa0: 0xc620000c
    ctx->pc = 0x24eaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24eaa4:
    // 0x24eaa4: 0xe46000b8
    ctx->pc = 0x24eaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
label_24eaa8:
    // 0x24eaa8: 0x8e220004
    ctx->pc = 0x24eaa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24eaac:
    // 0x24eaac: 0xac6200b4
    ctx->pc = 0x24eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
label_24eab0:
    // 0x24eab0: 0xc6200014
    ctx->pc = 0x24eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24eab4:
    // 0x24eab4: 0xe460007c
    ctx->pc = 0x24eab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
label_24eab8:
    // 0x24eab8: 0xc6210018
    ctx->pc = 0x24eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24eabc:
    // 0x24eabc: 0x46011034
    ctx->pc = 0x24eabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24eac0:
    // 0x24eac0: 0x0
    ctx->pc = 0x24eac0u;
    // NOP
label_24eac4:
    // 0x24eac4: 0x45000004
label_24eac8:
    if (ctx->pc == 0x24EAC8u) {
        ctx->pc = 0x24EAC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x24EACCu;
        goto label_24eacc;
    }
    ctx->pc = 0x24EAC4u;
    {
        const bool branch_taken_0x24eac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EAC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x24eac4) {
            ctx->pc = 0x24EAD8u;
            goto label_24ead8;
        }
    }
    ctx->pc = 0x24EACCu;
label_24eacc:
    // 0x24eacc: 0xc440ffb4
    ctx->pc = 0x24eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ead0:
    // 0x24ead0: 0x46010000
    ctx->pc = 0x24ead0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_24ead4:
    // 0x24ead4: 0xe4600070
    ctx->pc = 0x24ead4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
label_24ead8:
    // 0x24ead8: 0x3c030034
    ctx->pc = 0x24ead8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_24eadc:
    // 0x24eadc: 0x24630eb0
    ctx->pc = 0x24eadcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_24eae0:
    // 0x24eae0: 0x240200f0
    ctx->pc = 0x24eae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_24eae4:
    // 0x24eae4: 0x2621018
    ctx->pc = 0x24eae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24eae8:
    // 0x24eae8: 0x439021
    ctx->pc = 0x24eae8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eaec:
    // 0x24eaec: 0x26a20001
    ctx->pc = 0x24eaecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
label_24eaf0:
    // 0x24eaf0: 0xa64200bc
    ctx->pc = 0x24eaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 188), (uint16_t)GPR_U32(ctx, 2));
label_24eaf4:
    // 0x24eaf4: 0x8624004a
    ctx->pc = 0x24eaf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
label_24eaf8:
    // 0x24eaf8: 0x4800015
label_24eafc:
    if (ctx->pc == 0x24EAFCu) {
        ctx->pc = 0x24EAFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x24EB00u;
        goto label_24eb00;
    }
    ctx->pc = 0x24EAF8u;
    {
        const bool branch_taken_0x24eaf8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24EAFCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24eaf8) {
            ctx->pc = 0x24EB50u;
            goto label_24eb50;
        }
    }
    ctx->pc = 0x24EB00u;
label_24eb00:
    // 0x24eb00: 0x24634910
    ctx->pc = 0x24eb00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
label_24eb04:
    // 0x24eb04: 0x151080
    ctx->pc = 0x24eb04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_24eb08:
    // 0x24eb08: 0x431021
    ctx->pc = 0x24eb08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eb0c:
    // 0x24eb0c: 0x8c430000
    ctx->pc = 0x24eb0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24eb10:
    // 0x24eb10: 0x24020050
    ctx->pc = 0x24eb10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_24eb14:
    // 0x24eb14: 0x821018
    ctx->pc = 0x24eb14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24eb18:
    // 0x24eb18: 0x8c630004
    ctx->pc = 0x24eb18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24eb1c:
    // 0x24eb1c: 0x438021
    ctx->pc = 0x24eb1cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eb20:
    // 0x24eb20: 0x260202d
    ctx->pc = 0x24eb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24eb24:
    // 0x24eb24: 0x8e050008
    ctx->pc = 0x24eb24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24eb28:
    // 0x24eb28: 0x8e06000c
    ctx->pc = 0x24eb28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24eb2c:
    // 0x24eb2c: 0xc09f768
label_24eb30:
    if (ctx->pc == 0x24EB30u) {
        ctx->pc = 0x24EB30u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EB34u;
        goto label_24eb34;
    }
    ctx->pc = 0x24EB2Cu;
    SET_GPR_U32(ctx, 31, 0x24EB34u);
    ctx->pc = 0x24EB30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetHit_0x27dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB34u; }
    }
    if (ctx->pc != 0x24EB34u) { return; }
    ctx->pc = 0x24EB34u;
label_24eb34:
    // 0x24eb34: 0x8e020000
    ctx->pc = 0x24eb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24eb38:
    // 0x24eb38: 0x30420010
    ctx->pc = 0x24eb38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_24eb3c:
    // 0x24eb3c: 0x10400004
label_24eb40:
    if (ctx->pc == 0x24EB40u) {
        ctx->pc = 0x24EB40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        ctx->pc = 0x24EB44u;
        goto label_24eb44;
    }
    ctx->pc = 0x24EB3Cu;
    {
        const bool branch_taken_0x24eb3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EB40u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
        if (branch_taken_0x24eb3c) {
            ctx->pc = 0x24EB50u;
            goto label_24eb50;
        }
    }
    ctx->pc = 0x24EB44u;
label_24eb44:
    // 0x24eb44: 0x8e420064
    ctx->pc = 0x24eb44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_24eb48:
    // 0x24eb48: 0x431025
    ctx->pc = 0x24eb48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eb4c:
    // 0x24eb4c: 0xae420064
    ctx->pc = 0x24eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_24eb50:
    // 0x24eb50: 0x8624004c
    ctx->pc = 0x24eb50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
label_24eb54:
    // 0x24eb54: 0x4800019
label_24eb58:
    if (ctx->pc == 0x24EB58u) {
        ctx->pc = 0x24EB58u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x24EB5Cu;
        goto label_24eb5c;
    }
    ctx->pc = 0x24EB54u;
    {
        const bool branch_taken_0x24eb54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24EB58u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24eb54) {
            ctx->pc = 0x24EBBCu;
            goto label_24ebbc;
        }
    }
    ctx->pc = 0x24EB5Cu;
label_24eb5c:
    // 0x24eb5c: 0x24634910
    ctx->pc = 0x24eb5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
label_24eb60:
    // 0x24eb60: 0x151080
    ctx->pc = 0x24eb60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_24eb64:
    // 0x24eb64: 0x431021
    ctx->pc = 0x24eb64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eb68:
    // 0x24eb68: 0x8c430000
    ctx->pc = 0x24eb68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24eb6c:
    // 0x24eb6c: 0x24020050
    ctx->pc = 0x24eb6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_24eb70:
    // 0x24eb70: 0x821018
    ctx->pc = 0x24eb70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24eb74:
    // 0x24eb74: 0x8c630004
    ctx->pc = 0x24eb74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24eb78:
    // 0x24eb78: 0x431021
    ctx->pc = 0x24eb78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24eb7c:
    // 0x24eb7c: 0x260202d
    ctx->pc = 0x24eb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24eb80:
    // 0x24eb80: 0x8c450008
    ctx->pc = 0x24eb80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24eb84:
    // 0x24eb84: 0x302d
    ctx->pc = 0x24eb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24eb88:
    // 0x24eb88: 0xc09f802
label_24eb8c:
    if (ctx->pc == 0x24EB8Cu) {
        ctx->pc = 0x24EB8Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24EB90u;
        goto label_24eb90;
    }
    ctx->pc = 0x24EB88u;
    SET_GPR_U32(ctx, 31, 0x24EB90u);
    ctx->pc = 0x24EB8Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMorph_0x27e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB90u; }
    }
    if (ctx->pc != 0x24EB90u) { return; }
    ctx->pc = 0x24EB90u;
label_24eb90:
    // 0x24eb90: 0x96220002
    ctx->pc = 0x24eb90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_24eb94:
    // 0x24eb94: 0x30420800
    ctx->pc = 0x24eb94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
label_24eb98:
    // 0x24eb98: 0x10400008
label_24eb9c:
    if (ctx->pc == 0x24EB9Cu) {
        ctx->pc = 0x24EB9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x24EBA0u;
        goto label_24eba0;
    }
    ctx->pc = 0x24EB98u;
    {
        const bool branch_taken_0x24eb98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EB9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24eb98) {
            ctx->pc = 0x24EBBCu;
            goto label_24ebbc;
        }
    }
    ctx->pc = 0x24EBA0u;
label_24eba0:
    // 0x24eba0: 0x24420eb0
    ctx->pc = 0x24eba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
label_24eba4:
    // 0x24eba4: 0x240300f0
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
label_24eba8:
    // 0x24eba8: 0x2631818
    ctx->pc = 0x24eba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ebac:
    // 0x24ebac: 0x621821
    ctx->pc = 0x24ebacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24ebb0:
    // 0x24ebb0: 0x8c620064
    ctx->pc = 0x24ebb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_24ebb4:
    // 0x24ebb4: 0x34428000
    ctx->pc = 0x24ebb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
label_24ebb8:
    // 0x24ebb8: 0xac620064
    ctx->pc = 0x24ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_24ebbc:
    // 0x24ebbc: 0xc62c000c
    ctx->pc = 0x24ebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ebc0:
    // 0x24ebc0: 0x44800000
    ctx->pc = 0x24ebc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ebc4:
    // 0x24ebc4: 0x46006032
    ctx->pc = 0x24ebc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ebc8:
    // 0x24ebc8: 0x0
    ctx->pc = 0x24ebc8u;
    // NOP
label_24ebcc:
    // 0x24ebcc: 0x4503000c
label_24ebd0:
    if (ctx->pc == 0x24EBD0u) {
        ctx->pc = 0x24EBD0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24EBD4u;
        goto label_24ebd4;
    }
    ctx->pc = 0x24EBCCu;
    {
        const bool branch_taken_0x24ebcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ebcc) {
            ctx->pc = 0x24EBD0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x24EC00u;
            goto label_24ec00;
        }
    }
    ctx->pc = 0x24EBD4u;
label_24ebd4:
    // 0x24ebd4: 0x8e830008
    ctx->pc = 0x24ebd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24ebd8:
    // 0x24ebd8: 0x2402000c
    ctx->pc = 0x24ebd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_24ebdc:
    // 0x24ebdc: 0x621818
    ctx->pc = 0x24ebdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ebe0:
    // 0x24ebe0: 0x3c050033
    ctx->pc = 0x24ebe0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
label_24ebe4:
    // 0x24ebe4: 0x24a54868
    ctx->pc = 0x24ebe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18536));
label_24ebe8:
    // 0x24ebe8: 0x260202d
    ctx->pc = 0x24ebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ebec:
    // 0x24ebec: 0x460c6300
    ctx->pc = 0x24ebecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_24ebf0:
    // 0x24ebf0: 0xc09fdc2
label_24ebf4:
    if (ctx->pc == 0x24EBF4u) {
        ctx->pc = 0x24EBF4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x24EBF8u;
        goto label_24ebf8;
    }
    ctx->pc = 0x24EBF0u;
    SET_GPR_U32(ctx, 31, 0x24EBF8u);
    ctx->pc = 0x24EBF4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBF8u; }
    }
    if (ctx->pc != 0x24EBF8u) { return; }
    ctx->pc = 0x24EBF8u;
label_24ebf8:
    // 0x24ebf8: 0x1000000f
label_24ebfc:
    if (ctx->pc == 0x24EBFCu) {
        ctx->pc = 0x24EBFCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24EC00u;
        goto label_24ec00;
    }
    ctx->pc = 0x24EBF8u;
    {
        const bool branch_taken_0x24ebf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EBFCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x24ebf8) {
            ctx->pc = 0x24EC38u;
            goto label_24ec38;
        }
    }
    ctx->pc = 0x24EC00u;
label_24ec00:
    // 0x24ec00: 0x46006032
    ctx->pc = 0x24ec00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ec04:
    // 0x24ec04: 0x0
    ctx->pc = 0x24ec04u;
    // NOP
label_24ec08:
    // 0x24ec08: 0x4503000c
label_24ec0c:
    if (ctx->pc == 0x24EC0Cu) {
        ctx->pc = 0x24EC0Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x24EC10u;
        goto label_24ec10;
    }
    ctx->pc = 0x24EC08u;
    {
        const bool branch_taken_0x24ec08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ec08) {
            ctx->pc = 0x24EC0Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x24EC3Cu;
            goto label_24ec3c;
        }
    }
    ctx->pc = 0x24EC10u;
label_24ec10:
    // 0x24ec10: 0x8e830008
    ctx->pc = 0x24ec10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24ec14:
    // 0x24ec14: 0x2402000c
    ctx->pc = 0x24ec14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_24ec18:
    // 0x24ec18: 0x621818
    ctx->pc = 0x24ec18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24ec1c:
    // 0x24ec1c: 0x3c050033
    ctx->pc = 0x24ec1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
label_24ec20:
    // 0x24ec20: 0x24a54868
    ctx->pc = 0x24ec20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18536));
label_24ec24:
    // 0x24ec24: 0x260202d
    ctx->pc = 0x24ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ec28:
    // 0x24ec28: 0x460c6300
    ctx->pc = 0x24ec28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_24ec2c:
    // 0x24ec2c: 0xc09fdc2
label_24ec30:
    if (ctx->pc == 0x24EC30u) {
        ctx->pc = 0x24EC30u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x24EC34u;
        goto label_24ec34;
    }
    ctx->pc = 0x24EC2Cu;
    SET_GPR_U32(ctx, 31, 0x24EC34u);
    ctx->pc = 0x24EC30u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC34u; }
    }
    if (ctx->pc != 0x24EC34u) { return; }
    ctx->pc = 0x24EC34u;
label_24ec34:
    // 0x24ec34: 0xc62c003c
    ctx->pc = 0x24ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ec38:
    // 0x24ec38: 0x44800000
    ctx->pc = 0x24ec38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ec3c:
    // 0x24ec3c: 0x460c0034
    ctx->pc = 0x24ec3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ec40:
    // 0x24ec40: 0x0
    ctx->pc = 0x24ec40u;
    // NOP
label_24ec44:
    // 0x24ec44: 0x45000049
label_24ec48:
    if (ctx->pc == 0x24EC48u) {
        ctx->pc = 0x24EC48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EC4Cu;
        goto label_24ec4c;
    }
    ctx->pc = 0x24EC44u;
    {
        const bool branch_taken_0x24ec44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EC48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ec44) {
            ctx->pc = 0x24ED6Cu;
            goto label_24ed6c;
        }
    }
    ctx->pc = 0x24EC4Cu;
label_24ec4c:
    // 0x24ec4c: 0x3c013f00
    ctx->pc = 0x24ec4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_24ec50:
    // 0x24ec50: 0x44810000
    ctx->pc = 0x24ec50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_24ec54:
    // 0x24ec54: 0xc6210040
    ctx->pc = 0x24ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24ec58:
    // 0x24ec58: 0x460c0841
    ctx->pc = 0x24ec58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_24ec5c:
    // 0x24ec5c: 0x46000842
    ctx->pc = 0x24ec5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_24ec60:
    // 0x24ec60: 0x96220002
    ctx->pc = 0x24ec60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_24ec64:
    // 0x24ec64: 0x30420004
    ctx->pc = 0x24ec64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_24ec68:
    // 0x24ec68: 0x10400008
label_24ec6c:
    if (ctx->pc == 0x24EC6Cu) {
        ctx->pc = 0x24EC6Cu;
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
        ctx->pc = 0x24EC70u;
        goto label_24ec70;
    }
    ctx->pc = 0x24EC68u;
    {
        const bool branch_taken_0x24ec68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EC6Cu;
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
        if (branch_taken_0x24ec68) {
            ctx->pc = 0x24EC8Cu;
            goto label_24ec8c;
        }
    }
    ctx->pc = 0x24EC70u;
label_24ec70:
    // 0x24ec70: 0xc6800040
    ctx->pc = 0x24ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ec74:
    // 0x24ec74: 0xe7a00010
    ctx->pc = 0x24ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24ec78:
    // 0x24ec78: 0xc6800044
    ctx->pc = 0x24ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ec7c:
    // 0x24ec7c: 0xe7a00014
    ctx->pc = 0x24ec7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_24ec80:
    // 0x24ec80: 0xc6800048
    ctx->pc = 0x24ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24ec84:
    // 0x24ec84: 0x10000004
label_24ec88:
    if (ctx->pc == 0x24EC88u) {
        ctx->pc = 0x24EC88u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->pc = 0x24EC8Cu;
        goto label_24ec8c;
    }
    ctx->pc = 0x24EC84u;
    {
        const bool branch_taken_0x24ec84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EC88u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        if (branch_taken_0x24ec84) {
            ctx->pc = 0x24EC98u;
            goto label_24ec98;
        }
    }
    ctx->pc = 0x24EC8Cu;
label_24ec8c:
    // 0x24ec8c: 0x280202d
    ctx->pc = 0x24ec8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24ec90:
    // 0x24ec90: 0xc0939dc
label_24ec94:
    if (ctx->pc == 0x24EC94u) {
        ctx->pc = 0x24EC94u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24EC98u;
        goto label_24ec98;
    }
    ctx->pc = 0x24EC90u;
    SET_GPR_U32(ctx, 31, 0x24EC98u);
    ctx->pc = 0x24EC94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x24E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcPlayerSfxVel_0x24e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC98u; }
    }
    if (ctx->pc != 0x24EC98u) { return; }
    ctx->pc = 0x24EC98u;
label_24ec98:
    // 0x24ec98: 0x86230000
    ctx->pc = 0x24ec98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_24ec9c:
    // 0x24ec9c: 0x24020002
    ctx->pc = 0x24ec9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_24eca0:
    // 0x24eca0: 0x54620018
label_24eca4:
    if (ctx->pc == 0x24ECA4u) {
        ctx->pc = 0x24ECA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x24ECA8u;
        goto label_24eca8;
    }
    ctx->pc = 0x24ECA0u;
    {
        const bool branch_taken_0x24eca0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x24eca0) {
            ctx->pc = 0x24ECA4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x24ED04u;
            goto label_24ed04;
        }
    }
    ctx->pc = 0x24ECA8u;
label_24eca8:
    // 0x24eca8: 0xc62c0020
    ctx->pc = 0x24eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ecac:
    // 0x24ecac: 0x44800000
    ctx->pc = 0x24ecacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ecb0:
    // 0x24ecb0: 0x46006032
    ctx->pc = 0x24ecb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ecb4:
    // 0x24ecb4: 0x0
    ctx->pc = 0x24ecb4u;
    // NOP
label_24ecb8:
    // 0x24ecb8: 0x45030005
label_24ecbc:
    if (ctx->pc == 0x24ECBCu) {
        ctx->pc = 0x24ECBCu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x24ECC0u;
        goto label_24ecc0;
    }
    ctx->pc = 0x24ECB8u;
    {
        const bool branch_taken_0x24ecb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ecb8) {
            ctx->pc = 0x24ECBCu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->pc = 0x24ECD0u;
            goto label_24ecd0;
        }
    }
    ctx->pc = 0x24ECC0u;
label_24ecc0:
    // 0x24ecc0: 0x27a50010
    ctx->pc = 0x24ecc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_24ecc4:
    // 0x24ecc4: 0xc0b57e6
label_24ecc8:
    if (ctx->pc == 0x24ECC8u) {
        ctx->pc = 0x24ECC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24ECCCu;
        goto label_24eccc;
    }
    ctx->pc = 0x24ECC4u;
    SET_GPR_U32(ctx, 31, 0x24ECCCu);
    ctx->pc = 0x24ECC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECCCu; }
    }
    if (ctx->pc != 0x24ECCCu) { return; }
    ctx->pc = 0x24ECCCu;
label_24eccc:
    // 0x24eccc: 0x96220002
    ctx->pc = 0x24ecccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_24ecd0:
    // 0x24ecd0: 0x30420008
    ctx->pc = 0x24ecd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_24ecd4:
    // 0x24ecd4: 0x5040000b
label_24ecd8:
    if (ctx->pc == 0x24ECD8u) {
        ctx->pc = 0x24ECD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x24ECDCu;
        goto label_24ecdc;
    }
    ctx->pc = 0x24ECD4u;
    {
        const bool branch_taken_0x24ecd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ecd4) {
            ctx->pc = 0x24ECD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x24ED04u;
            goto label_24ed04;
        }
    }
    ctx->pc = 0x24ECDCu;
label_24ecdc:
    // 0x24ecdc: 0xc62c0028
    ctx->pc = 0x24ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ece0:
    // 0x24ece0: 0x44800000
    ctx->pc = 0x24ece0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_24ece4:
    // 0x24ece4: 0x46006032
    ctx->pc = 0x24ece4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24ece8:
    // 0x24ece8: 0x0
    ctx->pc = 0x24ece8u;
    // NOP
label_24ecec:
    // 0x24ecec: 0x45030005
label_24ecf0:
    if (ctx->pc == 0x24ECF0u) {
        ctx->pc = 0x24ECF0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x24ECF4u;
        goto label_24ecf4;
    }
    ctx->pc = 0x24ECECu;
    {
        const bool branch_taken_0x24ecec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ecec) {
            ctx->pc = 0x24ECF0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->pc = 0x24ED04u;
            goto label_24ed04;
        }
    }
    ctx->pc = 0x24ECF4u;
label_24ecf4:
    // 0x24ecf4: 0x27a50010
    ctx->pc = 0x24ecf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_24ecf8:
    // 0x24ecf8: 0xc0b580a
label_24ecfc:
    if (ctx->pc == 0x24ECFCu) {
        ctx->pc = 0x24ECFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24ED00u;
        goto label_24ed00;
    }
    ctx->pc = 0x24ECF8u;
    SET_GPR_U32(ctx, 31, 0x24ED00u);
    ctx->pc = 0x24ECFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED00u; }
    }
    if (ctx->pc != 0x24ED00u) { return; }
    ctx->pc = 0x24ED00u;
label_24ed00:
    // 0x24ed00: 0x8ec20000
    ctx->pc = 0x24ed00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_24ed04:
    // 0x24ed04: 0x30420008
    ctx->pc = 0x24ed04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_24ed08:
    // 0x24ed08: 0x10400011
label_24ed0c:
    if (ctx->pc == 0x24ED0Cu) {
        ctx->pc = 0x24ED0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24ED10u;
        goto label_24ed10;
    }
    ctx->pc = 0x24ED08u;
    {
        const bool branch_taken_0x24ed08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24ED0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ed08) {
            ctx->pc = 0x24ED50u;
            goto label_24ed50;
        }
    }
    ctx->pc = 0x24ED10u;
label_24ed10:
    // 0x24ed10: 0x3c013fc9
    ctx->pc = 0x24ed10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
label_24ed14:
    // 0x24ed14: 0x34210fdb
    ctx->pc = 0x24ed14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_24ed18:
    // 0x24ed18: 0x44816000
    ctx->pc = 0x24ed18u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24ed1c:
    // 0x24ed1c: 0xc0b5c06
label_24ed20:
    if (ctx->pc == 0x24ED20u) {
        ctx->pc = 0x24ED24u;
        goto label_24ed24;
    }
    ctx->pc = 0x24ED1Cu;
    SET_GPR_U32(ctx, 31, 0x24ED24u);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED24u; }
    }
    if (ctx->pc != 0x24ED24u) { return; }
    ctx->pc = 0x24ED24u;
label_24ed24:
    // 0x24ed24: 0xe7a00020
    ctx->pc = 0x24ed24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_24ed28:
    // 0x24ed28: 0x3c013fc9
    ctx->pc = 0x24ed28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
label_24ed2c:
    // 0x24ed2c: 0x34210fdb
    ctx->pc = 0x24ed2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_24ed30:
    // 0x24ed30: 0x44816000
    ctx->pc = 0x24ed30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_24ed34:
    // 0x24ed34: 0xc0b5c06
label_24ed38:
    if (ctx->pc == 0x24ED38u) {
        ctx->pc = 0x24ED38u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x24ED3Cu;
        goto label_24ed3c;
    }
    ctx->pc = 0x24ED34u;
    SET_GPR_U32(ctx, 31, 0x24ED3Cu);
    ctx->pc = 0x24ED38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED3Cu; }
    }
    if (ctx->pc != 0x24ED3Cu) { return; }
    ctx->pc = 0x24ED3Cu;
label_24ed3c:
    // 0x24ed3c: 0xe7a00028
    ctx->pc = 0x24ed3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_24ed40:
    // 0x24ed40: 0x260202d
    ctx->pc = 0x24ed40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ed44:
    // 0x24ed44: 0x27a50010
    ctx->pc = 0x24ed44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_24ed48:
    // 0x24ed48: 0x10000003
label_24ed4c:
    if (ctx->pc == 0x24ED4Cu) {
        ctx->pc = 0x24ED4Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x24ED50u;
        goto label_24ed50;
    }
    ctx->pc = 0x24ED48u;
    {
        const bool branch_taken_0x24ed48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24ED4Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x24ed48) {
            ctx->pc = 0x24ED58u;
            goto label_24ed58;
        }
    }
    ctx->pc = 0x24ED50u;
label_24ed50:
    // 0x24ed50: 0x27a50010
    ctx->pc = 0x24ed50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_24ed54:
    // 0x24ed54: 0x302d
    ctx->pc = 0x24ed54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ed58:
    // 0x24ed58: 0xc62c0044
    ctx->pc = 0x24ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ed5c:
    // 0x24ed5c: 0xc09f794
label_24ed60:
    if (ctx->pc == 0x24ED60u) {
        ctx->pc = 0x24ED60u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x24ED64u;
        goto label_24ed64;
    }
    ctx->pc = 0x24ED5Cu;
    SET_GPR_U32(ctx, 31, 0x24ED64u);
    ctx->pc = 0x24ED60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED64u; }
    }
    if (ctx->pc != 0x24ED64u) { return; }
    ctx->pc = 0x24ED64u;
label_24ed64:
    // 0x24ed64: 0x10000007
label_24ed68:
    if (ctx->pc == 0x24ED68u) {
        ctx->pc = 0x24ED68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x24ED6Cu;
        goto label_24ed6c;
    }
    ctx->pc = 0x24ED64u;
    {
        const bool branch_taken_0x24ed64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24ED68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x24ed64) {
            ctx->pc = 0x24ED84u;
            goto label_24ed84;
        }
    }
    ctx->pc = 0x24ED6Cu;
label_24ed6c:
    // 0x24ed6c: 0x282d
    ctx->pc = 0x24ed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ed70:
    // 0x24ed70: 0x302d
    ctx->pc = 0x24ed70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ed74:
    // 0x24ed74: 0xc62c0044
    ctx->pc = 0x24ed74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_24ed78:
    // 0x24ed78: 0xc09f794
label_24ed7c:
    if (ctx->pc == 0x24ED7Cu) {
        ctx->pc = 0x24ED7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x24ED80u;
        goto label_24ed80;
    }
    ctx->pc = 0x24ED78u;
    SET_GPR_U32(ctx, 31, 0x24ED80u);
    ctx->pc = 0x24ED7Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED80u; }
    }
    if (ctx->pc != 0x24ED80u) { return; }
    ctx->pc = 0x24ED80u;
label_24ed80:
    // 0x24ed80: 0x3c020031
    ctx->pc = 0x24ed80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_24ed84:
    // 0x24ed84: 0xdc430e28
    ctx->pc = 0x24ed84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_24ed88:
    // 0x24ed88: 0x30620010
    ctx->pc = 0x24ed88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_24ed8c:
    // 0x24ed8c: 0x10400019
label_24ed90:
    if (ctx->pc == 0x24ED90u) {
        ctx->pc = 0x24ED90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x24ED94u;
        goto label_24ed94;
    }
    ctx->pc = 0x24ED8Cu;
    {
        const bool branch_taken_0x24ed8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24ED90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x24ed8c) {
            ctx->pc = 0x24EDF4u;
            goto label_24edf4;
        }
    }
    ctx->pc = 0x24ED94u;
label_24ed94:
    // 0x24ed94: 0x2103c
    ctx->pc = 0x24ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_24ed98:
    // 0x24ed98: 0x2103f
    ctx->pc = 0x24ed98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_24ed9c:
    // 0x24ed9c: 0x10400016
label_24eda0:
    if (ctx->pc == 0x24EDA0u) {
        ctx->pc = 0x24EDA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EDA4u;
        goto label_24eda4;
    }
    ctx->pc = 0x24ED9Cu;
    {
        const bool branch_taken_0x24ed9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EDA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ed9c) {
            ctx->pc = 0x24EDF8u;
            goto label_24edf8;
        }
    }
    ctx->pc = 0x24EDA4u;
label_24eda4:
    // 0x24eda4: 0xc09fde0
label_24eda8:
    if (ctx->pc == 0x24EDA8u) {
        ctx->pc = 0x24EDA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EDACu;
        goto label_24edac;
    }
    ctx->pc = 0x24EDA4u;
    SET_GPR_U32(ctx, 31, 0x24EDACu);
    ctx->pc = 0x24EDA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        DmgFxAdd_0x27f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EDACu; }
    }
    if (ctx->pc != 0x24EDACu) { return; }
    ctx->pc = 0x24EDACu;
label_24edac:
    // 0x24edac: 0x10000012
label_24edb0:
    if (ctx->pc == 0x24EDB0u) {
        ctx->pc = 0x24EDB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EDB4u;
        goto label_24edb4;
    }
    ctx->pc = 0x24EDACu;
    {
        const bool branch_taken_0x24edac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24EDB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24edac) {
            ctx->pc = 0x24EDF8u;
            goto label_24edf8;
        }
    }
    ctx->pc = 0x24EDB4u;
label_24edb4:
    // 0x24edb4: 0x8624004a
    ctx->pc = 0x24edb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
label_24edb8:
    // 0x24edb8: 0x480000e
label_24edbc:
    if (ctx->pc == 0x24EDBCu) {
        ctx->pc = 0x24EDBCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x24EDC0u;
        goto label_24edc0;
    }
    ctx->pc = 0x24EDB8u;
    {
        const bool branch_taken_0x24edb8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x24EDBCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x24edb8) {
            ctx->pc = 0x24EDF4u;
            goto label_24edf4;
        }
    }
    ctx->pc = 0x24EDC0u;
label_24edc0:
    // 0x24edc0: 0x24634910
    ctx->pc = 0x24edc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18704));
label_24edc4:
    // 0x24edc4: 0x151080
    ctx->pc = 0x24edc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 2));
label_24edc8:
    // 0x24edc8: 0x431021
    ctx->pc = 0x24edc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24edcc:
    // 0x24edcc: 0x8c430000
    ctx->pc = 0x24edccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24edd0:
    // 0x24edd0: 0x24020050
    ctx->pc = 0x24edd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_24edd4:
    // 0x24edd4: 0x821018
    ctx->pc = 0x24edd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_24edd8:
    // 0x24edd8: 0x8c630004
    ctx->pc = 0x24edd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24eddc:
    // 0x24eddc: 0x438021
    ctx->pc = 0x24eddcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24ede0:
    // 0x24ede0: 0x260202d
    ctx->pc = 0x24ede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ede4:
    // 0x24ede4: 0x8e050008
    ctx->pc = 0x24ede4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24ede8:
    // 0x24ede8: 0x8e06000c
    ctx->pc = 0x24ede8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24edec:
    // 0x24edec: 0xc09f768
label_24edf0:
    if (ctx->pc == 0x24EDF0u) {
        ctx->pc = 0x24EDF0u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24EDF4u;
        goto label_24edf4;
    }
    ctx->pc = 0x24EDECu;
    SET_GPR_U32(ctx, 31, 0x24EDF4u);
    ctx->pc = 0x24EDF0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetHit_0x27dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EDF4u; }
    }
    if (ctx->pc != 0x24EDF4u) { return; }
    ctx->pc = 0x24EDF4u;
label_24edf4:
    // 0x24edf4: 0x260102d
    ctx->pc = 0x24edf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24edf8:
    // 0x24edf8: 0xdfbf00a0
    ctx->pc = 0x24edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24edfc:
    // 0x24edfc: 0xdfb60090
    ctx->pc = 0x24edfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24ee00:
    // 0x24ee00: 0xdfb50080
    ctx->pc = 0x24ee00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24ee04:
    // 0x24ee04: 0xdfb40070
    ctx->pc = 0x24ee04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24ee08:
    // 0x24ee08: 0xdfb30060
    ctx->pc = 0x24ee08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24ee0c:
    // 0x24ee0c: 0xdfb20050
    ctx->pc = 0x24ee0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24ee10:
    // 0x24ee10: 0xdfb10040
    ctx->pc = 0x24ee10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24ee14:
    // 0x24ee14: 0xdfb00030
    ctx->pc = 0x24ee14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24ee18:
    // 0x24ee18: 0x3e00008
label_24ee1c:
    if (ctx->pc == 0x24EE1Cu) {
        ctx->pc = 0x24EE1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x24EE20u;
        goto label_fallthrough_0x24ee18;
    }
    ctx->pc = 0x24EE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EE1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E800u: goto label_24e800;
            case 0x24E804u: goto label_24e804;
            case 0x24E808u: goto label_24e808;
            case 0x24E80Cu: goto label_24e80c;
            case 0x24E810u: goto label_24e810;
            case 0x24E814u: goto label_24e814;
            case 0x24E818u: goto label_24e818;
            case 0x24E81Cu: goto label_24e81c;
            case 0x24E820u: goto label_24e820;
            case 0x24E824u: goto label_24e824;
            case 0x24E828u: goto label_24e828;
            case 0x24E82Cu: goto label_24e82c;
            case 0x24E830u: goto label_24e830;
            case 0x24E834u: goto label_24e834;
            case 0x24E838u: goto label_24e838;
            case 0x24E83Cu: goto label_24e83c;
            case 0x24E840u: goto label_24e840;
            case 0x24E844u: goto label_24e844;
            case 0x24E848u: goto label_24e848;
            case 0x24E84Cu: goto label_24e84c;
            case 0x24E850u: goto label_24e850;
            case 0x24E854u: goto label_24e854;
            case 0x24E858u: goto label_24e858;
            case 0x24E85Cu: goto label_24e85c;
            case 0x24E860u: goto label_24e860;
            case 0x24E864u: goto label_24e864;
            case 0x24E868u: goto label_24e868;
            case 0x24E86Cu: goto label_24e86c;
            case 0x24E870u: goto label_24e870;
            case 0x24E874u: goto label_24e874;
            case 0x24E878u: goto label_24e878;
            case 0x24E87Cu: goto label_24e87c;
            case 0x24E880u: goto label_24e880;
            case 0x24E884u: goto label_24e884;
            case 0x24E888u: goto label_24e888;
            case 0x24E88Cu: goto label_24e88c;
            case 0x24E890u: goto label_24e890;
            case 0x24E894u: goto label_24e894;
            case 0x24E898u: goto label_24e898;
            case 0x24E89Cu: goto label_24e89c;
            case 0x24E8A0u: goto label_24e8a0;
            case 0x24E8A4u: goto label_24e8a4;
            case 0x24E8A8u: goto label_24e8a8;
            case 0x24E8ACu: goto label_24e8ac;
            case 0x24E8B0u: goto label_24e8b0;
            case 0x24E8B4u: goto label_24e8b4;
            case 0x24E8B8u: goto label_24e8b8;
            case 0x24E8BCu: goto label_24e8bc;
            case 0x24E8C0u: goto label_24e8c0;
            case 0x24E8C4u: goto label_24e8c4;
            case 0x24E8C8u: goto label_24e8c8;
            case 0x24E8CCu: goto label_24e8cc;
            case 0x24E8D0u: goto label_24e8d0;
            case 0x24E8D4u: goto label_24e8d4;
            case 0x24E8D8u: goto label_24e8d8;
            case 0x24E8DCu: goto label_24e8dc;
            case 0x24E8E0u: goto label_24e8e0;
            case 0x24E8E4u: goto label_24e8e4;
            case 0x24E8E8u: goto label_24e8e8;
            case 0x24E8ECu: goto label_24e8ec;
            case 0x24E8F0u: goto label_24e8f0;
            case 0x24E8F4u: goto label_24e8f4;
            case 0x24E8F8u: goto label_24e8f8;
            case 0x24E8FCu: goto label_24e8fc;
            case 0x24E900u: goto label_24e900;
            case 0x24E904u: goto label_24e904;
            case 0x24E908u: goto label_24e908;
            case 0x24E90Cu: goto label_24e90c;
            case 0x24E910u: goto label_24e910;
            case 0x24E914u: goto label_24e914;
            case 0x24E918u: goto label_24e918;
            case 0x24E91Cu: goto label_24e91c;
            case 0x24E920u: goto label_24e920;
            case 0x24E924u: goto label_24e924;
            case 0x24E928u: goto label_24e928;
            case 0x24E92Cu: goto label_24e92c;
            case 0x24E930u: goto label_24e930;
            case 0x24E934u: goto label_24e934;
            case 0x24E938u: goto label_24e938;
            case 0x24E93Cu: goto label_24e93c;
            case 0x24E940u: goto label_24e940;
            case 0x24E944u: goto label_24e944;
            case 0x24E948u: goto label_24e948;
            case 0x24E94Cu: goto label_24e94c;
            case 0x24E950u: goto label_24e950;
            case 0x24E954u: goto label_24e954;
            case 0x24E958u: goto label_24e958;
            case 0x24E95Cu: goto label_24e95c;
            case 0x24E960u: goto label_24e960;
            case 0x24E964u: goto label_24e964;
            case 0x24E968u: goto label_24e968;
            case 0x24E96Cu: goto label_24e96c;
            case 0x24E970u: goto label_24e970;
            case 0x24E974u: goto label_24e974;
            case 0x24E978u: goto label_24e978;
            case 0x24E97Cu: goto label_24e97c;
            case 0x24E980u: goto label_24e980;
            case 0x24E984u: goto label_24e984;
            case 0x24E988u: goto label_24e988;
            case 0x24E98Cu: goto label_24e98c;
            case 0x24E990u: goto label_24e990;
            case 0x24E994u: goto label_24e994;
            case 0x24E998u: goto label_24e998;
            case 0x24E99Cu: goto label_24e99c;
            case 0x24E9A0u: goto label_24e9a0;
            case 0x24E9A4u: goto label_24e9a4;
            case 0x24E9A8u: goto label_24e9a8;
            case 0x24E9ACu: goto label_24e9ac;
            case 0x24E9B0u: goto label_24e9b0;
            case 0x24E9B4u: goto label_24e9b4;
            case 0x24E9B8u: goto label_24e9b8;
            case 0x24E9BCu: goto label_24e9bc;
            case 0x24E9C0u: goto label_24e9c0;
            case 0x24E9C4u: goto label_24e9c4;
            case 0x24E9C8u: goto label_24e9c8;
            case 0x24E9CCu: goto label_24e9cc;
            case 0x24E9D0u: goto label_24e9d0;
            case 0x24E9D4u: goto label_24e9d4;
            case 0x24E9D8u: goto label_24e9d8;
            case 0x24E9DCu: goto label_24e9dc;
            case 0x24E9E0u: goto label_24e9e0;
            case 0x24E9E4u: goto label_24e9e4;
            case 0x24E9E8u: goto label_24e9e8;
            case 0x24E9ECu: goto label_24e9ec;
            case 0x24E9F0u: goto label_24e9f0;
            case 0x24E9F4u: goto label_24e9f4;
            case 0x24E9F8u: goto label_24e9f8;
            case 0x24E9FCu: goto label_24e9fc;
            case 0x24EA00u: goto label_24ea00;
            case 0x24EA04u: goto label_24ea04;
            case 0x24EA08u: goto label_24ea08;
            case 0x24EA0Cu: goto label_24ea0c;
            case 0x24EA10u: goto label_24ea10;
            case 0x24EA14u: goto label_24ea14;
            case 0x24EA18u: goto label_24ea18;
            case 0x24EA1Cu: goto label_24ea1c;
            case 0x24EA20u: goto label_24ea20;
            case 0x24EA24u: goto label_24ea24;
            case 0x24EA28u: goto label_24ea28;
            case 0x24EA2Cu: goto label_24ea2c;
            case 0x24EA30u: goto label_24ea30;
            case 0x24EA34u: goto label_24ea34;
            case 0x24EA38u: goto label_24ea38;
            case 0x24EA3Cu: goto label_24ea3c;
            case 0x24EA40u: goto label_24ea40;
            case 0x24EA44u: goto label_24ea44;
            case 0x24EA48u: goto label_24ea48;
            case 0x24EA4Cu: goto label_24ea4c;
            case 0x24EA50u: goto label_24ea50;
            case 0x24EA54u: goto label_24ea54;
            case 0x24EA58u: goto label_24ea58;
            case 0x24EA5Cu: goto label_24ea5c;
            case 0x24EA60u: goto label_24ea60;
            case 0x24EA64u: goto label_24ea64;
            case 0x24EA68u: goto label_24ea68;
            case 0x24EA6Cu: goto label_24ea6c;
            case 0x24EA70u: goto label_24ea70;
            case 0x24EA74u: goto label_24ea74;
            case 0x24EA78u: goto label_24ea78;
            case 0x24EA7Cu: goto label_24ea7c;
            case 0x24EA80u: goto label_24ea80;
            case 0x24EA84u: goto label_24ea84;
            case 0x24EA88u: goto label_24ea88;
            case 0x24EA8Cu: goto label_24ea8c;
            case 0x24EA90u: goto label_24ea90;
            case 0x24EA94u: goto label_24ea94;
            case 0x24EA98u: goto label_24ea98;
            case 0x24EA9Cu: goto label_24ea9c;
            case 0x24EAA0u: goto label_24eaa0;
            case 0x24EAA4u: goto label_24eaa4;
            case 0x24EAA8u: goto label_24eaa8;
            case 0x24EAACu: goto label_24eaac;
            case 0x24EAB0u: goto label_24eab0;
            case 0x24EAB4u: goto label_24eab4;
            case 0x24EAB8u: goto label_24eab8;
            case 0x24EABCu: goto label_24eabc;
            case 0x24EAC0u: goto label_24eac0;
            case 0x24EAC4u: goto label_24eac4;
            case 0x24EAC8u: goto label_24eac8;
            case 0x24EACCu: goto label_24eacc;
            case 0x24EAD0u: goto label_24ead0;
            case 0x24EAD4u: goto label_24ead4;
            case 0x24EAD8u: goto label_24ead8;
            case 0x24EADCu: goto label_24eadc;
            case 0x24EAE0u: goto label_24eae0;
            case 0x24EAE4u: goto label_24eae4;
            case 0x24EAE8u: goto label_24eae8;
            case 0x24EAECu: goto label_24eaec;
            case 0x24EAF0u: goto label_24eaf0;
            case 0x24EAF4u: goto label_24eaf4;
            case 0x24EAF8u: goto label_24eaf8;
            case 0x24EAFCu: goto label_24eafc;
            case 0x24EB00u: goto label_24eb00;
            case 0x24EB04u: goto label_24eb04;
            case 0x24EB08u: goto label_24eb08;
            case 0x24EB0Cu: goto label_24eb0c;
            case 0x24EB10u: goto label_24eb10;
            case 0x24EB14u: goto label_24eb14;
            case 0x24EB18u: goto label_24eb18;
            case 0x24EB1Cu: goto label_24eb1c;
            case 0x24EB20u: goto label_24eb20;
            case 0x24EB24u: goto label_24eb24;
            case 0x24EB28u: goto label_24eb28;
            case 0x24EB2Cu: goto label_24eb2c;
            case 0x24EB30u: goto label_24eb30;
            case 0x24EB34u: goto label_24eb34;
            case 0x24EB38u: goto label_24eb38;
            case 0x24EB3Cu: goto label_24eb3c;
            case 0x24EB40u: goto label_24eb40;
            case 0x24EB44u: goto label_24eb44;
            case 0x24EB48u: goto label_24eb48;
            case 0x24EB4Cu: goto label_24eb4c;
            case 0x24EB50u: goto label_24eb50;
            case 0x24EB54u: goto label_24eb54;
            case 0x24EB58u: goto label_24eb58;
            case 0x24EB5Cu: goto label_24eb5c;
            case 0x24EB60u: goto label_24eb60;
            case 0x24EB64u: goto label_24eb64;
            case 0x24EB68u: goto label_24eb68;
            case 0x24EB6Cu: goto label_24eb6c;
            case 0x24EB70u: goto label_24eb70;
            case 0x24EB74u: goto label_24eb74;
            case 0x24EB78u: goto label_24eb78;
            case 0x24EB7Cu: goto label_24eb7c;
            case 0x24EB80u: goto label_24eb80;
            case 0x24EB84u: goto label_24eb84;
            case 0x24EB88u: goto label_24eb88;
            case 0x24EB8Cu: goto label_24eb8c;
            case 0x24EB90u: goto label_24eb90;
            case 0x24EB94u: goto label_24eb94;
            case 0x24EB98u: goto label_24eb98;
            case 0x24EB9Cu: goto label_24eb9c;
            case 0x24EBA0u: goto label_24eba0;
            case 0x24EBA4u: goto label_24eba4;
            case 0x24EBA8u: goto label_24eba8;
            case 0x24EBACu: goto label_24ebac;
            case 0x24EBB0u: goto label_24ebb0;
            case 0x24EBB4u: goto label_24ebb4;
            case 0x24EBB8u: goto label_24ebb8;
            case 0x24EBBCu: goto label_24ebbc;
            case 0x24EBC0u: goto label_24ebc0;
            case 0x24EBC4u: goto label_24ebc4;
            case 0x24EBC8u: goto label_24ebc8;
            case 0x24EBCCu: goto label_24ebcc;
            case 0x24EBD0u: goto label_24ebd0;
            case 0x24EBD4u: goto label_24ebd4;
            case 0x24EBD8u: goto label_24ebd8;
            case 0x24EBDCu: goto label_24ebdc;
            case 0x24EBE0u: goto label_24ebe0;
            case 0x24EBE4u: goto label_24ebe4;
            case 0x24EBE8u: goto label_24ebe8;
            case 0x24EBECu: goto label_24ebec;
            case 0x24EBF0u: goto label_24ebf0;
            case 0x24EBF4u: goto label_24ebf4;
            case 0x24EBF8u: goto label_24ebf8;
            case 0x24EBFCu: goto label_24ebfc;
            case 0x24EC00u: goto label_24ec00;
            case 0x24EC04u: goto label_24ec04;
            case 0x24EC08u: goto label_24ec08;
            case 0x24EC0Cu: goto label_24ec0c;
            case 0x24EC10u: goto label_24ec10;
            case 0x24EC14u: goto label_24ec14;
            case 0x24EC18u: goto label_24ec18;
            case 0x24EC1Cu: goto label_24ec1c;
            case 0x24EC20u: goto label_24ec20;
            case 0x24EC24u: goto label_24ec24;
            case 0x24EC28u: goto label_24ec28;
            case 0x24EC2Cu: goto label_24ec2c;
            case 0x24EC30u: goto label_24ec30;
            case 0x24EC34u: goto label_24ec34;
            case 0x24EC38u: goto label_24ec38;
            case 0x24EC3Cu: goto label_24ec3c;
            case 0x24EC40u: goto label_24ec40;
            case 0x24EC44u: goto label_24ec44;
            case 0x24EC48u: goto label_24ec48;
            case 0x24EC4Cu: goto label_24ec4c;
            case 0x24EC50u: goto label_24ec50;
            case 0x24EC54u: goto label_24ec54;
            case 0x24EC58u: goto label_24ec58;
            case 0x24EC5Cu: goto label_24ec5c;
            case 0x24EC60u: goto label_24ec60;
            case 0x24EC64u: goto label_24ec64;
            case 0x24EC68u: goto label_24ec68;
            case 0x24EC6Cu: goto label_24ec6c;
            case 0x24EC70u: goto label_24ec70;
            case 0x24EC74u: goto label_24ec74;
            case 0x24EC78u: goto label_24ec78;
            case 0x24EC7Cu: goto label_24ec7c;
            case 0x24EC80u: goto label_24ec80;
            case 0x24EC84u: goto label_24ec84;
            case 0x24EC88u: goto label_24ec88;
            case 0x24EC8Cu: goto label_24ec8c;
            case 0x24EC90u: goto label_24ec90;
            case 0x24EC94u: goto label_24ec94;
            case 0x24EC98u: goto label_24ec98;
            case 0x24EC9Cu: goto label_24ec9c;
            case 0x24ECA0u: goto label_24eca0;
            case 0x24ECA4u: goto label_24eca4;
            case 0x24ECA8u: goto label_24eca8;
            case 0x24ECACu: goto label_24ecac;
            case 0x24ECB0u: goto label_24ecb0;
            case 0x24ECB4u: goto label_24ecb4;
            case 0x24ECB8u: goto label_24ecb8;
            case 0x24ECBCu: goto label_24ecbc;
            case 0x24ECC0u: goto label_24ecc0;
            case 0x24ECC4u: goto label_24ecc4;
            case 0x24ECC8u: goto label_24ecc8;
            case 0x24ECCCu: goto label_24eccc;
            case 0x24ECD0u: goto label_24ecd0;
            case 0x24ECD4u: goto label_24ecd4;
            case 0x24ECD8u: goto label_24ecd8;
            case 0x24ECDCu: goto label_24ecdc;
            case 0x24ECE0u: goto label_24ece0;
            case 0x24ECE4u: goto label_24ece4;
            case 0x24ECE8u: goto label_24ece8;
            case 0x24ECECu: goto label_24ecec;
            case 0x24ECF0u: goto label_24ecf0;
            case 0x24ECF4u: goto label_24ecf4;
            case 0x24ECF8u: goto label_24ecf8;
            case 0x24ECFCu: goto label_24ecfc;
            case 0x24ED00u: goto label_24ed00;
            case 0x24ED04u: goto label_24ed04;
            case 0x24ED08u: goto label_24ed08;
            case 0x24ED0Cu: goto label_24ed0c;
            case 0x24ED10u: goto label_24ed10;
            case 0x24ED14u: goto label_24ed14;
            case 0x24ED18u: goto label_24ed18;
            case 0x24ED1Cu: goto label_24ed1c;
            case 0x24ED20u: goto label_24ed20;
            case 0x24ED24u: goto label_24ed24;
            case 0x24ED28u: goto label_24ed28;
            case 0x24ED2Cu: goto label_24ed2c;
            case 0x24ED30u: goto label_24ed30;
            case 0x24ED34u: goto label_24ed34;
            case 0x24ED38u: goto label_24ed38;
            case 0x24ED3Cu: goto label_24ed3c;
            case 0x24ED40u: goto label_24ed40;
            case 0x24ED44u: goto label_24ed44;
            case 0x24ED48u: goto label_24ed48;
            case 0x24ED4Cu: goto label_24ed4c;
            case 0x24ED50u: goto label_24ed50;
            case 0x24ED54u: goto label_24ed54;
            case 0x24ED58u: goto label_24ed58;
            case 0x24ED5Cu: goto label_24ed5c;
            case 0x24ED60u: goto label_24ed60;
            case 0x24ED64u: goto label_24ed64;
            case 0x24ED68u: goto label_24ed68;
            case 0x24ED6Cu: goto label_24ed6c;
            case 0x24ED70u: goto label_24ed70;
            case 0x24ED74u: goto label_24ed74;
            case 0x24ED78u: goto label_24ed78;
            case 0x24ED7Cu: goto label_24ed7c;
            case 0x24ED80u: goto label_24ed80;
            case 0x24ED84u: goto label_24ed84;
            case 0x24ED88u: goto label_24ed88;
            case 0x24ED8Cu: goto label_24ed8c;
            case 0x24ED90u: goto label_24ed90;
            case 0x24ED94u: goto label_24ed94;
            case 0x24ED98u: goto label_24ed98;
            case 0x24ED9Cu: goto label_24ed9c;
            case 0x24EDA0u: goto label_24eda0;
            case 0x24EDA4u: goto label_24eda4;
            case 0x24EDA8u: goto label_24eda8;
            case 0x24EDACu: goto label_24edac;
            case 0x24EDB0u: goto label_24edb0;
            case 0x24EDB4u: goto label_24edb4;
            case 0x24EDB8u: goto label_24edb8;
            case 0x24EDBCu: goto label_24edbc;
            case 0x24EDC0u: goto label_24edc0;
            case 0x24EDC4u: goto label_24edc4;
            case 0x24EDC8u: goto label_24edc8;
            case 0x24EDCCu: goto label_24edcc;
            case 0x24EDD0u: goto label_24edd0;
            case 0x24EDD4u: goto label_24edd4;
            case 0x24EDD8u: goto label_24edd8;
            case 0x24EDDCu: goto label_24eddc;
            case 0x24EDE0u: goto label_24ede0;
            case 0x24EDE4u: goto label_24ede4;
            case 0x24EDE8u: goto label_24ede8;
            case 0x24EDECu: goto label_24edec;
            case 0x24EDF0u: goto label_24edf0;
            case 0x24EDF4u: goto label_24edf4;
            case 0x24EDF8u: goto label_24edf8;
            case 0x24EDFCu: goto label_24edfc;
            case 0x24EE00u: goto label_24ee00;
            case 0x24EE04u: goto label_24ee04;
            case 0x24EE08u: goto label_24ee08;
            case 0x24EE0Cu: goto label_24ee0c;
            case 0x24EE10u: goto label_24ee10;
            case 0x24EE14u: goto label_24ee14;
            case 0x24EE18u: goto label_24ee18;
            case 0x24EE1Cu: goto label_24ee1c;
            default: break;
        }
        return;
    }
label_fallthrough_0x24ee18:
    ctx->pc = 0x24EE20u;
}
