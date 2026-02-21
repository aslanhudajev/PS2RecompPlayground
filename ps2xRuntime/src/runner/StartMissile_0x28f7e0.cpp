#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartMissile
// Address: 0x28f7e0 - 0x28fb04
void StartMissile_0x28f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28f7e0u;

    // 0x28f7e0: 0x27bdff60
    ctx->pc = 0x28f7e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28f7e4: 0xffbf0080
    ctx->pc = 0x28f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28f7e8: 0xffb60070
    ctx->pc = 0x28f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28f7ec: 0xffb50060
    ctx->pc = 0x28f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x28f7f0: 0xffb40050
    ctx->pc = 0x28f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28f7f4: 0xffb30040
    ctx->pc = 0x28f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28f7f8: 0xffb20030
    ctx->pc = 0x28f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28f7fc: 0xffb10020
    ctx->pc = 0x28f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28f800: 0xffb00010
    ctx->pc = 0x28f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28f804: 0xe7b50098
    ctx->pc = 0x28f804u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x28f808: 0xe7b40090
    ctx->pc = 0x28f808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x28f80c: 0x80a02d
    ctx->pc = 0x28f80cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f810: 0xa0b02d
    ctx->pc = 0x28f810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f814: 0x46006d46
    ctx->pc = 0x28f814u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x28f818: 0xe0902d
    ctx->pc = 0x28f818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f81c: 0x100882d
    ctx->pc = 0x28f81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f820: 0x120a82d
    ctx->pc = 0x28f820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f824: 0x160802d
    ctx->pc = 0x28f824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f828: 0x3c014040
    ctx->pc = 0x28f828u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x28f82c: 0x4481a000
    ctx->pc = 0x28f82cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x28f830: 0x3c020048
    ctx->pc = 0x28f830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)72 << 16));
    // 0x28f834: 0x2421024
    ctx->pc = 0x28f834u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28f838: 0x1040000d
    ctx->pc = 0x28F838u;
    {
        const bool branch_taken_0x28f838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F83Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        if (branch_taken_0x28f838) {
            ctx->pc = 0x28F870u;
            goto label_28f870;
        }
    }
    ctx->pc = 0x28F840u;
    // 0x28f840: 0x3c014000
    ctx->pc = 0x28f840u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x28f844: 0x4481a000
    ctx->pc = 0x28f844u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x28f848: 0x24020005
    ctx->pc = 0x28f848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x28f84c: 0x56620009
    ctx->pc = 0x28F84Cu;
    {
        const bool branch_taken_0x28f84c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x28f84c) {
            ctx->pc = 0x28F850u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x28F874u;
            goto label_28f874;
        }
    }
    ctx->pc = 0x28F854u;
    // 0x28f854: 0x55400006
    ctx->pc = 0x28F854u;
    {
        const bool branch_taken_0x28f854 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x28f854) {
            ctx->pc = 0x28F858u;
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x28F870u;
            goto label_28f870;
        }
    }
    ctx->pc = 0x28F85Cu;
    // 0x28f85c: 0x3c020040
    ctx->pc = 0x28f85cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x28f860: 0x2421024
    ctx->pc = 0x28f860u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28f864: 0x24130006
    ctx->pc = 0x28f864u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28f868: 0x24030007
    ctx->pc = 0x28f868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x28f86c: 0x62980b
    ctx->pc = 0x28f86cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_28f870:
    // 0x28f870: 0xc4c20000
    ctx->pc = 0x28f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28f874:
    // 0x28f874: 0x46026082
    ctx->pc = 0x28f874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x28f878: 0xe7a20000
    ctx->pc = 0x28f878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28f87c: 0xc4c10004
    ctx->pc = 0x28f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f880: 0x46016042
    ctx->pc = 0x28f880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x28f884: 0xe7a10004
    ctx->pc = 0x28f884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28f888: 0xc4c00008
    ctx->pc = 0x28f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f88c: 0x46006002
    ctx->pc = 0x28f88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28f890: 0xe7a00008
    ctx->pc = 0x28f890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28f894: 0x46021082
    ctx->pc = 0x28f894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x28f898: 0x46010842
    ctx->pc = 0x28f898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28f89c: 0x46011080
    ctx->pc = 0x28f89cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x28f8a0: 0x46000002
    ctx->pc = 0x28f8a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x28f8a4: 0x46001080
    ctx->pc = 0x28f8a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28f8a8: 0x3c013a83
    ctx->pc = 0x28f8a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x28f8ac: 0x3421126f
    ctx->pc = 0x28f8acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x28f8b0: 0x44810000
    ctx->pc = 0x28f8b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28f8b4: 0x46001034
    ctx->pc = 0x28f8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f8b8: 0x0
    ctx->pc = 0x28f8b8u;
    // NOP
    // 0x28f8bc: 0x45000004
    ctx->pc = 0x28F8BCu;
    {
        const bool branch_taken_0x28f8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F8C0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x28f8bc) {
            ctx->pc = 0x28F8D0u;
            goto label_28f8d0;
        }
    }
    ctx->pc = 0x28F8C4u;
    // 0x28f8c4: 0x2484df60
    ctx->pc = 0x28f8c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958944));
    // 0x28f8c8: 0xc0b49a6
    ctx->pc = 0x28F8C8u;
    SET_GPR_U32(ctx, 31, 0x28F8D0u);
    ctx->pc = 0x28F8CCu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8D0u; }
    }
    if (ctx->pc != 0x28F8D0u) { return; }
    ctx->pc = 0x28F8D0u;
label_28f8d0:
    // 0x28f8d0: 0x1a800012
    ctx->pc = 0x28F8D0u;
    {
        const bool branch_taken_0x28f8d0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x28F8D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28f8d0) {
            ctx->pc = 0x28F91Cu;
            goto label_28f91c;
        }
    }
    ctx->pc = 0x28F8D8u;
    // 0x28f8d8: 0x8c43f474
    ctx->pc = 0x28f8d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964340)));
    // 0x28f8dc: 0x24020001
    ctx->pc = 0x28f8dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f8e0: 0x14620003
    ctx->pc = 0x28F8E0u;
    {
        const bool branch_taken_0x28f8e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x28F8E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28f8e0) {
            ctx->pc = 0x28F8F0u;
            goto label_28f8f0;
        }
    }
    ctx->pc = 0x28F8E8u;
    // 0x28f8e8: 0x10000006
    ctx->pc = 0x28F8E8u;
    {
        const bool branch_taken_0x28f8e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F8ECu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 8207));
        if (branch_taken_0x28f8e8) {
            ctx->pc = 0x28F904u;
            goto label_28f904;
        }
    }
    ctx->pc = 0x28F8F0u;
label_28f8f0:
    // 0x28f8f0: 0x8c43f474
    ctx->pc = 0x28f8f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964340)));
    // 0x28f8f4: 0x24020002
    ctx->pc = 0x28f8f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f8f8: 0x54620002
    ctx->pc = 0x28F8F8u;
    {
        const bool branch_taken_0x28f8f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x28f8f8) {
            ctx->pc = 0x28F8FCu;
            SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 526));
            ctx->pc = 0x28F904u;
            goto label_28f904;
        }
    }
    ctx->pc = 0x28F900u;
    // 0x28f900: 0x3610000f
    ctx->pc = 0x28f900u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 15));
label_28f904:
    // 0x28f904: 0x3c020010
    ctx->pc = 0x28f904u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x28f908: 0x2421024
    ctx->pc = 0x28f908u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28f90c: 0x10400004
    ctx->pc = 0x28F90Cu;
    {
        const bool branch_taken_0x28f90c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F910u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x28f90c) {
            ctx->pc = 0x28F920u;
            goto label_28f920;
        }
    }
    ctx->pc = 0x28F914u;
    // 0x28f914: 0x10000002
    ctx->pc = 0x28F914u;
    {
        const bool branch_taken_0x28f914 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F918u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x28f914) {
            ctx->pc = 0x28F920u;
            goto label_28f920;
        }
    }
    ctx->pc = 0x28F91Cu;
label_28f91c:
    // 0x28f91c: 0x36101107
    ctx->pc = 0x28f91cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 4359));
label_28f920:
    // 0x28f920: 0xc6200014
    ctx->pc = 0x28f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f924: 0x44800800
    ctx->pc = 0x28f924u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x28f928: 0x46010032
    ctx->pc = 0x28f928u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f92c: 0x0
    ctx->pc = 0x28f92cu;
    // NOP
    // 0x28f930: 0x4500000d
    ctx->pc = 0x28F930u;
    {
        const bool branch_taken_0x28f930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F934u;
        SET_GPR_U32(ctx, 6, ((uint32_t)256 << 16));
        if (branch_taken_0x28f930) {
            ctx->pc = 0x28F968u;
            goto label_28f968;
        }
    }
    ctx->pc = 0x28F938u;
    // 0x28f938: 0xc6200018
    ctx->pc = 0x28f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f93c: 0x46010032
    ctx->pc = 0x28f93cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f940: 0x0
    ctx->pc = 0x28f940u;
    // NOP
    // 0x28f944: 0x45000009
    ctx->pc = 0x28F944u;
    {
        const bool branch_taken_0x28f944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F948u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28f944) {
            ctx->pc = 0x28F96Cu;
            goto label_28f96c;
        }
    }
    ctx->pc = 0x28F94Cu;
    // 0x28f94c: 0xc620001c
    ctx->pc = 0x28f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f950: 0x46010032
    ctx->pc = 0x28f950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f954: 0x0
    ctx->pc = 0x28f954u;
    // NOP
    // 0x28f958: 0x45000004
    ctx->pc = 0x28F958u;
    {
        const bool branch_taken_0x28f958 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28F95Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
        if (branch_taken_0x28f958) {
            ctx->pc = 0x28F96Cu;
            goto label_28f96c;
        }
    }
    ctx->pc = 0x28F960u;
    // 0x28f960: 0x2028025
    ctx->pc = 0x28f960u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28f964: 0x3c060100
    ctx->pc = 0x28f964u;
    SET_GPR_U32(ctx, 6, ((uint32_t)256 << 16));
label_28f968:
    // 0x28f968: 0x2a0202d
    ctx->pc = 0x28f968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28f96c:
    // 0x28f96c: 0x2c0282d
    ctx->pc = 0x28f96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f970: 0x4600a306
    ctx->pc = 0x28f970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28f974: 0x2063025
    ctx->pc = 0x28f974u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x28f978: 0xc09f580
    ctx->pc = 0x28F978u;
    SET_GPR_U32(ctx, 31, 0x28F980u);
    ctx->pc = 0x28F97Cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    ctx->pc = 0x27D600u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXTree_0x27d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F980u; }
    }
    if (ctx->pc != 0x28F980u) { return; }
    ctx->pc = 0x28F980u;
    // 0x28f980: 0x40802d
    ctx->pc = 0x28f980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f984: 0x3c020200
    ctx->pc = 0x28f984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x28f988: 0x2421024
    ctx->pc = 0x28f988u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28f98c: 0x10400005
    ctx->pc = 0x28F98Cu;
    {
        const bool branch_taken_0x28f98c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F990u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        if (branch_taken_0x28f98c) {
            ctx->pc = 0x28F9A4u;
            goto label_28f9a4;
        }
    }
    ctx->pc = 0x28F994u;
    // 0x28f994: 0x3c013fe6
    ctx->pc = 0x28f994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16358 << 16));
    // 0x28f998: 0x34216666
    ctx->pc = 0x28f998u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x28f99c: 0x44810000
    ctx->pc = 0x28f99cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28f9a0: 0x46006b42
    ctx->pc = 0x28f9a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_28f9a4:
    // 0x28f9a4: 0x200202d
    ctx->pc = 0x28f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9a8: 0x3a0282d
    ctx->pc = 0x28f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9ac: 0x26260014
    ctx->pc = 0x28f9acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    // 0x28f9b0: 0xc09f794
    ctx->pc = 0x28F9B0u;
    SET_GPR_U32(ctx, 31, 0x28F9B8u);
    ctx->pc = 0x28F9B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27DE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetPhysics_0x27de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F9B8u; }
    }
    if (ctx->pc != 0x28F9B8u) { return; }
    ctx->pc = 0x28F9B8u;
    // 0x28f9b8: 0x200202d
    ctx->pc = 0x28f9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9bc: 0x8e250024
    ctx->pc = 0x28f9bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x28f9c0: 0x8e260028
    ctx->pc = 0x28f9c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x28f9c4: 0xc09f768
    ctx->pc = 0x28F9C4u;
    SET_GPR_U32(ctx, 31, 0x28F9CCu);
    ctx->pc = 0x28F9C8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetHit_0x27dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F9CCu; }
    }
    if (ctx->pc != 0x28F9CCu) { return; }
    ctx->pc = 0x28F9CCu;
    // 0x28f9cc: 0x8e250000
    ctx->pc = 0x28f9ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f9d0: 0x200202d
    ctx->pc = 0x28f9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9d4: 0x4600ab06
    ctx->pc = 0x28f9d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28f9d8: 0x2452825
    ctx->pc = 0x28f9d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x28f9dc: 0xc62d0010
    ctx->pc = 0x28f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28f9e0: 0x44807000
    ctx->pc = 0x28f9e0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x28f9e4: 0xc09f780
    ctx->pc = 0x28F9E4u;
    SET_GPR_U32(ctx, 31, 0x28F9ECu);
    ctx->pc = 0x28F9E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F9ECu; }
    }
    if (ctx->pc != 0x28F9ECu) { return; }
    ctx->pc = 0x28F9ECu;
    // 0x28f9ec: 0x3c020200
    ctx->pc = 0x28f9ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x28f9f0: 0x2421024
    ctx->pc = 0x28f9f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28f9f4: 0x10400007
    ctx->pc = 0x28F9F4u;
    {
        const bool branch_taken_0x28f9f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28F9F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28f9f4) {
            ctx->pc = 0x28FA14u;
            goto label_28fa14;
        }
    }
    ctx->pc = 0x28F9FCu;
    // 0x28f9fc: 0x3c013fe6
    ctx->pc = 0x28f9fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16358 << 16));
    // 0x28fa00: 0x34216666
    ctx->pc = 0x28fa00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x28fa04: 0x44816000
    ctx->pc = 0x28fa04u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28fa08: 0x46006346
    ctx->pc = 0x28fa08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28fa0c: 0xc09f63e
    ctx->pc = 0x28FA0Cu;
    SET_GPR_U32(ctx, 31, 0x28FA14u);
    ctx->pc = 0x28FA10u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FA14u; }
    }
    if (ctx->pc != 0x28FA14u) { return; }
    ctx->pc = 0x28FA14u;
label_28fa14:
    // 0x28fa14: 0x1a80002e
    ctx->pc = 0x28FA14u;
    {
        const bool branch_taken_0x28fa14 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x28FA18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x28fa14) {
            ctx->pc = 0x28FAD0u;
            goto label_28fad0;
        }
    }
    ctx->pc = 0x28FA1Cu;
    // 0x28fa1c: 0x8c48f700
    ctx->pc = 0x28fa1cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 4294964992)));
    // 0x28fa20: 0x3c020210
    ctx->pc = 0x28fa20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)528 << 16));
    // 0x28fa24: 0x2421024
    ctx->pc = 0x28fa24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28fa28: 0x3c030010
    ctx->pc = 0x28fa28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x28fa2c: 0x14430005
    ctx->pc = 0x28FA2Cu;
    {
        const bool branch_taken_0x28fa2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x28FA30u;
        SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
        if (branch_taken_0x28fa2c) {
            ctx->pc = 0x28FA44u;
            goto label_28fa44;
        }
    }
    ctx->pc = 0x28FA34u;
    // 0x28fa34: 0x3c0600ff
    ctx->pc = 0x28fa34u;
    SET_GPR_U32(ctx, 6, ((uint32_t)255 << 16));
    // 0x28fa38: 0x34c6ffff
    ctx->pc = 0x28fa38u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
    // 0x28fa3c: 0x10000019
    ctx->pc = 0x28FA3Cu;
    {
        const bool branch_taken_0x28fa3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FA40u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x28fa3c) {
            ctx->pc = 0x28FAA4u;
            goto label_28faa4;
        }
    }
    ctx->pc = 0x28FA44u;
label_28fa44:
    // 0x28fa44: 0x24a5f540
    ctx->pc = 0x28fa44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964544));
    // 0x28fa48: 0x3c030032
    ctx->pc = 0x28fa48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x28fa4c: 0x24631bc0
    ctx->pc = 0x28fa4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x28fa50: 0x2684ffff
    ctx->pc = 0x28fa50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28fa54: 0x24022b00
    ctx->pc = 0x28fa54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28fa58: 0x822018
    ctx->pc = 0x28fa58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28fa5c: 0x832021
    ctx->pc = 0x28fa5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28fa60: 0x8c820004
    ctx->pc = 0x28fa60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28fa64: 0x21080
    ctx->pc = 0x28fa64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28fa68: 0x451021
    ctx->pc = 0x28fa68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28fa6c: 0x8c460000
    ctx->pc = 0x28fa6cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fa70: 0x3c030035
    ctx->pc = 0x28fa70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28fa74: 0x2463f550
    ctx->pc = 0x28fa74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964560));
    // 0x28fa78: 0x8c820008
    ctx->pc = 0x28fa78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x28fa7c: 0x21080
    ctx->pc = 0x28fa7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28fa80: 0x431021
    ctx->pc = 0x28fa80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28fa84: 0x8c470000
    ctx->pc = 0x28fa84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fa88: 0x3c020200
    ctx->pc = 0x28fa88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x28fa8c: 0x2421024
    ctx->pc = 0x28fa8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x28fa90: 0x10400004
    ctx->pc = 0x28FA90u;
    {
        const bool branch_taken_0x28fa90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28FA94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x28fa90) {
            ctx->pc = 0x28FAA4u;
            goto label_28faa4;
        }
    }
    ctx->pc = 0x28FA98u;
    // 0x28fa98: 0x24e70040
    ctx->pc = 0x28fa98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    // 0x28fa9c: 0x2ce300ff
    ctx->pc = 0x28fa9cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 7), 255));
    // 0x28faa0: 0x43380a
    ctx->pc = 0x28faa0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_28faa4:
    // 0x28faa4: 0x3c020033
    ctx->pc = 0x28faa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x28faa8: 0x24424910
    ctx->pc = 0x28faa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x28faac: 0x2683ffff
    ctx->pc = 0x28faacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28fab0: 0x31880
    ctx->pc = 0x28fab0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28fab4: 0x621821
    ctx->pc = 0x28fab4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fab8: 0x8c620000
    ctx->pc = 0x28fab8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28fabc: 0x200202d
    ctx->pc = 0x28fabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fac0: 0x100282d
    ctx->pc = 0x28fac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fac4: 0x44806000
    ctx->pc = 0x28fac4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x28fac8: 0xc09f7d0
    ctx->pc = 0x28FAC8u;
    SET_GPR_U32(ctx, 31, 0x28FAD0u);
    ctx->pc = 0x28FACCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x27DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetStreak_0x27df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FAD0u; }
    }
    if (ctx->pc != 0x28FAD0u) { return; }
    ctx->pc = 0x28FAD0u;
label_28fad0:
    // 0x28fad0: 0x200102d
    ctx->pc = 0x28fad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fad4: 0xdfbf0080
    ctx->pc = 0x28fad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fad8: 0xdfb60070
    ctx->pc = 0x28fad8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28fadc: 0xdfb50060
    ctx->pc = 0x28fadcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28fae0: 0xdfb40050
    ctx->pc = 0x28fae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fae4: 0xdfb30040
    ctx->pc = 0x28fae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fae8: 0xdfb20030
    ctx->pc = 0x28fae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28faec: 0xdfb10020
    ctx->pc = 0x28faecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28faf0: 0xdfb00010
    ctx->pc = 0x28faf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28faf4: 0xc7b50098
    ctx->pc = 0x28faf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28faf8: 0xc7b40090
    ctx->pc = 0x28faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28fafc: 0x3e00008
    ctx->pc = 0x28FAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FB00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F870u: goto label_28f870;
            case 0x28F874u: goto label_28f874;
            case 0x28F8D0u: goto label_28f8d0;
            case 0x28F8F0u: goto label_28f8f0;
            case 0x28F904u: goto label_28f904;
            case 0x28F91Cu: goto label_28f91c;
            case 0x28F920u: goto label_28f920;
            case 0x28F968u: goto label_28f968;
            case 0x28F96Cu: goto label_28f96c;
            case 0x28F9A4u: goto label_28f9a4;
            case 0x28FA14u: goto label_28fa14;
            case 0x28FA44u: goto label_28fa44;
            case 0x28FAA4u: goto label_28faa4;
            case 0x28FAD0u: goto label_28fad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28FB04u;
}
