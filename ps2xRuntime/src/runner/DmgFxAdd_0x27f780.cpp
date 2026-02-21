#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxAdd
// Address: 0x27f780 - 0x27f9ac
void DmgFxAdd_0x27f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f780u;

    // 0x27f780: 0x27bdffa0
    ctx->pc = 0x27f780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27f784: 0xffbf0040
    ctx->pc = 0x27f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27f788: 0xffb30030
    ctx->pc = 0x27f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27f78c: 0xffb20020
    ctx->pc = 0x27f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27f790: 0xffb10010
    ctx->pc = 0x27f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f794: 0xffb00000
    ctx->pc = 0x27f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f798: 0xe7b50058
    ctx->pc = 0x27f798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27f79c: 0xe7b40050
    ctx->pc = 0x27f79cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27f7a0: 0x240200f0
    ctx->pc = 0x27f7a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f7a4: 0x822018
    ctx->pc = 0x27f7a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f7a8: 0x3c020034
    ctx->pc = 0x27f7a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27f7ac: 0x24420eb0
    ctx->pc = 0x27f7acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27f7b0: 0x828021
    ctx->pc = 0x27f7b0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27f7b4: 0x3c130040
    ctx->pc = 0x27f7b4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)64 << 16));
    // 0x27f7b8: 0x8e020064
    ctx->pc = 0x27f7b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x27f7bc: 0x30420020
    ctx->pc = 0x27f7bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x27f7c0: 0x10400062
    ctx->pc = 0x27F7C0u;
    {
        const bool branch_taken_0x27f7c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F7C4u;
        SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 6152));
        if (branch_taken_0x27f7c0) {
            ctx->pc = 0x27F94Cu;
            goto label_27f94c;
        }
    }
    ctx->pc = 0x27F7C8u;
    // 0x27f7c8: 0xc60c009c
    ctx->pc = 0x27f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27f7cc: 0x3c01bf80
    ctx->pc = 0x27f7ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x27f7d0: 0x44810000
    ctx->pc = 0x27f7d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27f7d4: 0x460c0034
    ctx->pc = 0x27f7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f7d8: 0x0
    ctx->pc = 0x27f7d8u;
    // NOP
    // 0x27f7dc: 0x45020053
    ctx->pc = 0x27F7DCu;
    {
        const bool branch_taken_0x27f7dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f7dc) {
            ctx->pc = 0x27F7E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->pc = 0x27F92Cu;
            goto label_27f92c;
        }
    }
    ctx->pc = 0x27F7E4u;
    // 0x27f7e4: 0xc0ba00a
    ctx->pc = 0x27F7E4u;
    SET_GPR_U32(ctx, 31, 0x27F7ECu);
    ctx->pc = 0x2E8028u;
    {
        const uint32_t __entryPc = ctx->pc;
        acosf_0x2e8028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7ECu; }
    }
    if (ctx->pc != 0x27F7ECu) { return; }
    ctx->pc = 0x27F7ECu;
    // 0x27f7ec: 0x3c014334
    ctx->pc = 0x27f7ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x27f7f0: 0x44810800
    ctx->pc = 0x27f7f0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27f7f4: 0x46010002
    ctx->pc = 0x27f7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f7f8: 0x3c013ea2
    ctx->pc = 0x27f7f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x27f7fc: 0x3421f983
    ctx->pc = 0x27f7fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x27f800: 0x44810800
    ctx->pc = 0x27f800u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27f804: 0x46010002
    ctx->pc = 0x27f804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f808: 0x3c014170
    ctx->pc = 0x27f808u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x27f80c: 0x44816000
    ctx->pc = 0x27f80cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27f810: 0x0
    ctx->pc = 0x27f810u;
    // NOP
    // 0x27f814: 0x0
    ctx->pc = 0x27f814u;
    // NOP
    // 0x27f818: 0x460c0303
    ctx->pc = 0x27f818u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x27f81c: 0xc0b5486
    ctx->pc = 0x27F81Cu;
    SET_GPR_U32(ctx, 31, 0x27F824u);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F824u; }
    }
    if (ctx->pc != 0x27F824u) { return; }
    ctx->pc = 0x27F824u;
    // 0x27f824: 0x28840
    ctx->pc = 0x27f824u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 1));
    // 0x27f828: 0xc6010098
    ctx->pc = 0x27f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f82c: 0x3c013c23
    ctx->pc = 0x27f82cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27f830: 0x3421d70a
    ctx->pc = 0x27f830u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27f834: 0x44810000
    ctx->pc = 0x27f834u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27f838: 0x32220001
    ctx->pc = 0x27f838u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
    // 0x27f83c: 0x1040000e
    ctx->pc = 0x27F83Cu;
    {
        const bool branch_taken_0x27f83c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F840u;
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x27f83c) {
            ctx->pc = 0x27F878u;
            goto label_27f878;
        }
    }
    ctx->pc = 0x27F844u;
    // 0x27f844: 0x3c013e86
    ctx->pc = 0x27f844u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16006 << 16));
    // 0x27f848: 0x34210a92
    ctx->pc = 0x27f848u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x27f84c: 0x4481a800
    ctx->pc = 0x27f84cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x27f850: 0x3c04003b
    ctx->pc = 0x27f850u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27f854: 0x2484bf40
    ctx->pc = 0x27f854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950720));
    // 0x27f858: 0x282d
    ctx->pc = 0x27f858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f85c: 0x8e060014
    ctx->pc = 0x27f85cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27f860: 0x3c070040
    ctx->pc = 0x27f860u;
    SET_GPR_U32(ctx, 7, ((uint32_t)64 << 16));
    // 0x27f864: 0xc0b1b04
    ctx->pc = 0x27F864u;
    SET_GPR_U32(ctx, 31, 0x27F86Cu);
    ctx->pc = 0x27F868u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 6152));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F86Cu; }
    }
    if (ctx->pc != 0x27F86Cu) { return; }
    ctx->pc = 0x27F86Cu;
    // 0x27f86c: 0xae0200e0
    ctx->pc = 0x27f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x27f870: 0x1000000a
    ctx->pc = 0x27F870u;
    {
        const bool branch_taken_0x27f870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F874u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x27f870) {
            ctx->pc = 0x27F89Cu;
            goto label_27f89c;
        }
    }
    ctx->pc = 0x27F878u;
label_27f878:
    // 0x27f878: 0x3c013e06
    ctx->pc = 0x27f878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15878 << 16));
    // 0x27f87c: 0x34210a92
    ctx->pc = 0x27f87cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x27f880: 0x4481a800
    ctx->pc = 0x27f880u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x27f884: 0x202d
    ctx->pc = 0x27f884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f888: 0x282d
    ctx->pc = 0x27f888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f88c: 0x8e060014
    ctx->pc = 0x27f88cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27f890: 0xc0b1b04
    ctx->pc = 0x27F890u;
    SET_GPR_U32(ctx, 31, 0x27F898u);
    ctx->pc = 0x27F894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F898u; }
    }
    if (ctx->pc != 0x27F898u) { return; }
    ctx->pc = 0x27F898u;
    // 0x27f898: 0xae0200e0
    ctx->pc = 0x27f898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_27f89c:
    // 0x27f89c: 0x8e0200e0
    ctx->pc = 0x27f89cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f8a0: 0xe4540040
    ctx->pc = 0x27f8a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27f8a4: 0x8e0200e0
    ctx->pc = 0x27f8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f8a8: 0x3c013f00
    ctx->pc = 0x27f8a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27f8ac: 0x44810000
    ctx->pc = 0x27f8acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27f8b0: 0x4600a002
    ctx->pc = 0x27f8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27f8b4: 0xe4400044
    ctx->pc = 0x27f8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27f8b8: 0x8e0200e0
    ctx->pc = 0x27f8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f8bc: 0x12200032
    ctx->pc = 0x27F8BCu;
    {
        const bool branch_taken_0x27f8bc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F8C0u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
        if (branch_taken_0x27f8bc) {
            ctx->pc = 0x27F988u;
            goto label_27f988;
        }
    }
    ctx->pc = 0x27F8C4u;
    // 0x27f8c4: 0x3c02003b
    ctx->pc = 0x27f8c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x27f8c8: 0x2452bf40
    ctx->pc = 0x27f8c8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294950720));
    // 0x27f8cc: 0x3c013e86
    ctx->pc = 0x27f8ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16006 << 16));
    // 0x27f8d0: 0x34210a92
    ctx->pc = 0x27f8d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
    // 0x27f8d4: 0x4481a000
    ctx->pc = 0x27f8d4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27f8d8:
    // 0x27f8d8: 0x240202d
    ctx->pc = 0x27f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8dc: 0x282d
    ctx->pc = 0x27f8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8e0: 0x8e0600e0
    ctx->pc = 0x27f8e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f8e4: 0xc0b1b04
    ctx->pc = 0x27F8E4u;
    SET_GPR_U32(ctx, 31, 0x27F8ECu);
    ctx->pc = 0x27F8E8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F8ECu; }
    }
    if (ctx->pc != 0x27F8ECu) { return; }
    ctx->pc = 0x27F8ECu;
    // 0x27f8ec: 0x4600ab06
    ctx->pc = 0x27f8ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27f8f0: 0xc0b5632
    ctx->pc = 0x27F8F0u;
    SET_GPR_U32(ctx, 31, 0x27F8F8u);
    ctx->pc = 0x27F8F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F8F8u; }
    }
    if (ctx->pc != 0x27F8F8u) { return; }
    ctx->pc = 0x27F8F8u;
    // 0x27f8f8: 0x240202d
    ctx->pc = 0x27f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8fc: 0x282d
    ctx->pc = 0x27f8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f900: 0x8e0600e0
    ctx->pc = 0x27f900u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27f904: 0xc0b1b04
    ctx->pc = 0x27F904u;
    SET_GPR_U32(ctx, 31, 0x27F90Cu);
    ctx->pc = 0x27F908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F90Cu; }
    }
    if (ctx->pc != 0x27F90Cu) { return; }
    ctx->pc = 0x27F90Cu;
    // 0x27f90c: 0x4600ab07
    ctx->pc = 0x27f90cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
    // 0x27f910: 0xc0b5632
    ctx->pc = 0x27F910u;
    SET_GPR_U32(ctx, 31, 0x27F918u);
    ctx->pc = 0x27F914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F918u; }
    }
    if (ctx->pc != 0x27F918u) { return; }
    ctx->pc = 0x27F918u;
    // 0x27f918: 0x2631fffe
    ctx->pc = 0x27f918u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x27f91c: 0x1620ffee
    ctx->pc = 0x27F91Cu;
    {
        const bool branch_taken_0x27f91c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x27F920u;
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        if (branch_taken_0x27f91c) {
            ctx->pc = 0x27F8D8u;
            goto label_27f8d8;
        }
    }
    ctx->pc = 0x27F924u;
    // 0x27f924: 0x10000019
    ctx->pc = 0x27F924u;
    {
        const bool branch_taken_0x27f924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F928u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x27f924) {
            ctx->pc = 0x27F98Cu;
            goto label_27f98c;
        }
    }
    ctx->pc = 0x27F92Cu;
label_27f92c:
    // 0x27f92c: 0x30420020
    ctx->pc = 0x27f92cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x27f930: 0x10400006
    ctx->pc = 0x27F930u;
    {
        const bool branch_taken_0x27f930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F934u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x27f930) {
            ctx->pc = 0x27F94Cu;
            goto label_27f94c;
        }
    }
    ctx->pc = 0x27F938u;
    // 0x27f938: 0x3c0138d1
    ctx->pc = 0x27f938u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x27f93c: 0x3421b717
    ctx->pc = 0x27f93cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x27f940: 0x4481a000
    ctx->pc = 0x27f940u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x27f944: 0x10000008
    ctx->pc = 0x27F944u;
    {
        const bool branch_taken_0x27f944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27F948u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950728));
        if (branch_taken_0x27f944) {
            ctx->pc = 0x27F968u;
            goto label_27f968;
        }
    }
    ctx->pc = 0x27F94Cu;
label_27f94c:
    // 0x27f94c: 0xc6010098
    ctx->pc = 0x27f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f950: 0x3c013c23
    ctx->pc = 0x27f950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x27f954: 0x3421d70a
    ctx->pc = 0x27f954u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x27f958: 0x44810000
    ctx->pc = 0x27f958u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27f95c: 0x46000d02
    ctx->pc = 0x27f95cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27f960: 0x3c04003b
    ctx->pc = 0x27f960u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x27f964: 0x2484bf48
    ctx->pc = 0x27f964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950728));
label_27f968:
    // 0x27f968: 0x282d
    ctx->pc = 0x27f968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f96c: 0x8e060014
    ctx->pc = 0x27f96cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27f970: 0xc0b1b04
    ctx->pc = 0x27F970u;
    SET_GPR_U32(ctx, 31, 0x27F978u);
    ctx->pc = 0x27F974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F978u; }
    }
    if (ctx->pc != 0x27F978u) { return; }
    ctx->pc = 0x27F978u;
    // 0x27f978: 0xe4540040
    ctx->pc = 0x27f978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x27f97c: 0xe4540044
    ctx->pc = 0x27f97cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x27f980: 0xe4540048
    ctx->pc = 0x27f980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x27f984: 0xae0200e0
    ctx->pc = 0x27f984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_27f988:
    // 0x27f988: 0xdfbf0040
    ctx->pc = 0x27f988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27f98c:
    // 0x27f98c: 0xdfb30030
    ctx->pc = 0x27f98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f990: 0xdfb20020
    ctx->pc = 0x27f990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f994: 0xdfb10010
    ctx->pc = 0x27f994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f998: 0xdfb00000
    ctx->pc = 0x27f998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f99c: 0xc7b50058
    ctx->pc = 0x27f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27f9a0: 0xc7b40050
    ctx->pc = 0x27f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f9a4: 0x3e00008
    ctx->pc = 0x27F9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F9A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F878u: goto label_27f878;
            case 0x27F89Cu: goto label_27f89c;
            case 0x27F8D8u: goto label_27f8d8;
            case 0x27F92Cu: goto label_27f92c;
            case 0x27F94Cu: goto label_27f94c;
            case 0x27F968u: goto label_27f968;
            case 0x27F988u: goto label_27f988;
            case 0x27F98Cu: goto label_27f98c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F9ACu;
}
