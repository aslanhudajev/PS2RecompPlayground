#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCollideFloor
// Address: 0x245290 - 0x245914
void PlayerCollideFloor_0x245290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x245290u;

    // 0x245290: 0x27bdff20
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x245294: 0xffbf00a0
    ctx->pc = 0x245294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x245298: 0xffb60090
    ctx->pc = 0x245298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x24529c: 0xffb50080
    ctx->pc = 0x24529cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2452a0: 0xffb40070
    ctx->pc = 0x2452a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2452a4: 0xffb30060
    ctx->pc = 0x2452a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2452a8: 0xffb20050
    ctx->pc = 0x2452a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2452ac: 0xffb10040
    ctx->pc = 0x2452acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2452b0: 0xffb00030
    ctx->pc = 0x2452b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2452b4: 0xe7b800d0
    ctx->pc = 0x2452b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2452b8: 0xe7b700c8
    ctx->pc = 0x2452b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2452bc: 0xe7b600c0
    ctx->pc = 0x2452bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2452c0: 0xe7b500b8
    ctx->pc = 0x2452c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2452c4: 0xe7b400b0
    ctx->pc = 0x2452c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2452c8: 0x80902d
    ctx->pc = 0x2452c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452cc: 0xa0982d
    ctx->pc = 0x2452ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452d0: 0xc0802d
    ctx->pc = 0x2452d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452d4: 0x46006586
    ctx->pc = 0x2452d4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2452d8: 0xe0b02d
    ctx->pc = 0x2452d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452dc: 0x3c014040
    ctx->pc = 0x2452dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2452e0: 0x44810000
    ctx->pc = 0x2452e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2452e4: 0x46006e00
    ctx->pc = 0x2452e4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x2452e8: 0x4600c607
    ctx->pc = 0x2452e8u;
    ctx->f[24] = FPU_NEG_S(ctx->f[24]);
    // 0x2452ec: 0xc6600000
    ctx->pc = 0x2452ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2452f0: 0xc6010000
    ctx->pc = 0x2452f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452f4: 0x46010000
    ctx->pc = 0x2452f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2452f8: 0xe7a00000
    ctx->pc = 0x2452f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2452fc: 0xc6600004
    ctx->pc = 0x2452fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245300: 0xc6010004
    ctx->pc = 0x245300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245304: 0x46010000
    ctx->pc = 0x245304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245308: 0xe7a00004
    ctx->pc = 0x245308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24530c: 0xc6600008
    ctx->pc = 0x24530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245310: 0xc6010008
    ctx->pc = 0x245310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245314: 0x46010000
    ctx->pc = 0x245314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245318: 0xe7a00008
    ctx->pc = 0x245318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24531c: 0x3a0202d
    ctx->pc = 0x24531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245320: 0x3c050033
    ctx->pc = 0x245320u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x245324: 0x24a54810
    ctx->pc = 0x245324u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18448));
    // 0x245328: 0x44806800
    ctx->pc = 0x245328u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x24532c: 0x4600c386
    ctx->pc = 0x24532cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x245330: 0x24060001
    ctx->pc = 0x245330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x245334: 0xc087b24
    ctx->pc = 0x245334u;
    SET_GPR_U32(ctx, 31, 0x24533Cu);
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24533Cu; }
    }
    if (ctx->pc != 0x24533Cu) { return; }
    ctx->pc = 0x24533Cu;
    // 0x24533c: 0x40882d
    ctx->pc = 0x24533cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245340: 0x3c040033
    ctx->pc = 0x245340u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
    // 0x245344: 0x3c020032
    ctx->pc = 0x245344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x245348: 0x2442fca0
    ctx->pc = 0x245348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966432));
    // 0x24534c: 0x8c430044
    ctx->pc = 0x24534cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x245350: 0xac834860
    ctx->pc = 0x245350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18528), GPR_U32(ctx, 3));
    // 0x245354: 0x3c030033
    ctx->pc = 0x245354u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x245358: 0xc4400034
    ctx->pc = 0x245358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24535c: 0xe4604864
    ctx->pc = 0x24535cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 18532), bits); }
    // 0x245360: 0xc60c0000
    ctx->pc = 0x245360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245364: 0xc0b5c34
    ctx->pc = 0x245364u;
    SET_GPR_U32(ctx, 31, 0x24536Cu);
    ctx->pc = 0x245368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24536Cu; }
    }
    if (ctx->pc != 0x24536Cu) { return; }
    ctx->pc = 0x24536Cu;
    // 0x24536c: 0x46000506
    ctx->pc = 0x24536cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x245370: 0xc086fa0
    ctx->pc = 0x245370u;
    SET_GPR_U32(ctx, 31, 0x245378u);
    ctx->pc = 0x245374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    ctx->pc = 0x21BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjGetAllFlags_0x21be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245378u; }
    }
    if (ctx->pc != 0x245378u) { return; }
    ctx->pc = 0x245378u;
    // 0x245378: 0x3c030c00
    ctx->pc = 0x245378u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3072 << 16));
    // 0x24537c: 0x43a024
    ctx->pc = 0x24537cu;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245380: 0x3c032000
    ctx->pc = 0x245380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x245384: 0x1280000c
    ctx->pc = 0x245384u;
    {
        const bool branch_taken_0x245384 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x245388u;
        SET_GPR_U32(ctx, 21, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x245384) {
            ctx->pc = 0x2453B8u;
            goto label_2453b8;
        }
    }
    ctx->pc = 0x24538Cu;
    // 0x24538c: 0x12a0000a
    ctx->pc = 0x24538Cu;
    {
        const bool branch_taken_0x24538c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x24538c) {
            ctx->pc = 0x2453B8u;
            goto label_2453b8;
        }
    }
    ctx->pc = 0x245394u;
    // 0x245394: 0x8e42089c
    ctx->pc = 0x245394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    // 0x245398: 0x10510007
    ctx->pc = 0x245398u;
    {
        const bool branch_taken_0x245398 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x24539Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x245398) {
            ctx->pc = 0x2453B8u;
            goto label_2453b8;
        }
    }
    ctx->pc = 0x2453A0u;
    // 0x2453a0: 0xae000000
    ctx->pc = 0x2453a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2453a4: 0xae000004
    ctx->pc = 0x2453a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2453a8: 0xae000008
    ctx->pc = 0x2453a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2453ac: 0x2402ffff
    ctx->pc = 0x2453acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2453b0: 0x10000149
    ctx->pc = 0x2453B0u;
    {
        const bool branch_taken_0x2453b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2453B4u;
        if (GPR_U32(ctx, 17) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        if (branch_taken_0x2453b0) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2453B8u;
label_2453b8:
    // 0x2453b8: 0x16200012
    ctx->pc = 0x2453B8u;
    {
        const bool branch_taken_0x2453b8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2453BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2453b8) {
            ctx->pc = 0x245404u;
            goto label_245404;
        }
    }
    ctx->pc = 0x2453C0u;
    // 0x2453c0: 0x3c013a83
    ctx->pc = 0x2453c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2453c4: 0x3421126f
    ctx->pc = 0x2453c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2453c8: 0x44810000
    ctx->pc = 0x2453c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2453cc: 0x4600a034
    ctx->pc = 0x2453ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2453d0: 0x0
    ctx->pc = 0x2453d0u;
    // NOP
    // 0x2453d4: 0x45030001
    ctx->pc = 0x2453D4u;
    {
        const bool branch_taken_0x2453d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2453d4) {
            ctx->pc = 0x2453D8u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 2204), GPR_U32(ctx, 0));
            ctx->pc = 0x2453DCu;
            goto label_2453dc;
        }
    }
    ctx->pc = 0x2453DCu;
label_2453dc:
    // 0x2453dc: 0x8e4208ac
    ctx->pc = 0x2453dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2220)));
    // 0x2453e0: 0x30428000
    ctx->pc = 0x2453e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x2453e4: 0x14400003
    ctx->pc = 0x2453E4u;
    {
        const bool branch_taken_0x2453e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2453E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2453e4) {
            ctx->pc = 0x2453F4u;
            goto label_2453f4;
        }
    }
    ctx->pc = 0x2453ECu;
    // 0x2453ec: 0xae000000
    ctx->pc = 0x2453ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2453f0: 0xae000008
    ctx->pc = 0x2453f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2453f4:
    // 0x2453f4: 0xc440e88c
    ctx->pc = 0x2453f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2453f8: 0xe640088c
    ctx->pc = 0x2453f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2188), bits); }
    // 0x2453fc: 0x10000136
    ctx->pc = 0x2453FCu;
    {
        const bool branch_taken_0x2453fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245400u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2453fc) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x245404u;
label_245404:
    // 0x245404: 0xc4574844
    ctx->pc = 0x245404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x245408: 0xc640088c
    ctx->pc = 0x245408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24540c: 0x4600b881
    ctx->pc = 0x24540cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x245410: 0x8e4208ac
    ctx->pc = 0x245410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2220)));
    // 0x245414: 0x30428000
    ctx->pc = 0x245414u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x245418: 0x1040000f
    ctx->pc = 0x245418u;
    {
        const bool branch_taken_0x245418 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24541Cu;
        ctx->f[2] = FPU_ABS_S(ctx->f[2]);
        if (branch_taken_0x245418) {
            ctx->pc = 0x245458u;
            goto label_245458;
        }
    }
    ctx->pc = 0x245420u;
    // 0x245420: 0xc6400054
    ctx->pc = 0x245420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245424: 0x46170001
    ctx->pc = 0x245424u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x245428: 0x3c013e4c
    ctx->pc = 0x245428u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x24542c: 0x3421cccd
    ctx->pc = 0x24542cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x245430: 0x44810800
    ctx->pc = 0x245430u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x245434: 0x46010034
    ctx->pc = 0x245434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245438: 0x0
    ctx->pc = 0x245438u;
    // NOP
    // 0x24543c: 0x45000126
    ctx->pc = 0x24543Cu;
    {
        const bool branch_taken_0x24543c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245440u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24543c) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x245444u;
    // 0x245444: 0x8e4208ac
    ctx->pc = 0x245444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2220)));
    // 0x245448: 0x3c03ffff
    ctx->pc = 0x245448u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x24544c: 0x34637fff
    ctx->pc = 0x24544cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32767));
    // 0x245450: 0x431024
    ctx->pc = 0x245450u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245454: 0xae4208ac
    ctx->pc = 0x245454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2220), GPR_U32(ctx, 2));
label_245458:
    // 0x245458: 0x3c013a83
    ctx->pc = 0x245458u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x24545c: 0x3421126f
    ctx->pc = 0x24545cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x245460: 0x44810000
    ctx->pc = 0x245460u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x245464: 0x4600a034
    ctx->pc = 0x245464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245468: 0x0
    ctx->pc = 0x245468u;
    // NOP
    // 0x24546c: 0x45000017
    ctx->pc = 0x24546Cu;
    {
        const bool branch_taken_0x24546c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245470u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x24546c) {
            ctx->pc = 0x2454CCu;
            goto label_2454cc;
        }
    }
    ctx->pc = 0x245474u;
    // 0x245474: 0x8e430100
    ctx->pc = 0x245474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x245478: 0x14620014
    ctx->pc = 0x245478u;
    {
        const bool branch_taken_0x245478 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x245478) {
            ctx->pc = 0x2454CCu;
            goto label_2454cc;
        }
    }
    ctx->pc = 0x245480u;
    // 0x245480: 0x3c014040
    ctx->pc = 0x245480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x245484: 0x44810000
    ctx->pc = 0x245484u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x245488: 0x46020034
    ctx->pc = 0x245488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24548c: 0x0
    ctx->pc = 0x24548cu;
    // NOP
    // 0x245490: 0x45030005
    ctx->pc = 0x245490u;
    {
        const bool branch_taken_0x245490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245490) {
            ctx->pc = 0x245494u;
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2188), bits); }
            ctx->pc = 0x2454A8u;
            goto label_2454a8;
        }
    }
    ctx->pc = 0x245498u;
    // 0x245498: 0x8e220010
    ctx->pc = 0x245498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24549c: 0x30421000
    ctx->pc = 0x24549cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2454a0: 0x54400001
    ctx->pc = 0x2454A0u;
    {
        const bool branch_taken_0x2454a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2454a0) {
            ctx->pc = 0x2454A4u;
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2188), bits); }
            ctx->pc = 0x2454A8u;
            goto label_2454a8;
        }
    }
    ctx->pc = 0x2454A8u;
label_2454a8:
    // 0x2454a8: 0x3c013a83
    ctx->pc = 0x2454a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2454ac: 0x3421126f
    ctx->pc = 0x2454acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2454b0: 0x44810000
    ctx->pc = 0x2454b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2454b4: 0x46020034
    ctx->pc = 0x2454b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2454b8: 0x0
    ctx->pc = 0x2454b8u;
    // NOP
    // 0x2454bc: 0x45010106
    ctx->pc = 0x2454BCu;
    {
        const bool branch_taken_0x2454bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2454C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2454bc) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2454C4u;
    // 0x2454c4: 0x10000104
    ctx->pc = 0x2454C4u;
    {
        const bool branch_taken_0x2454c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2454C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2454c4) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2454CCu;
label_2454cc:
    // 0x2454cc: 0x3c014040
    ctx->pc = 0x2454ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2454d0: 0x44810000
    ctx->pc = 0x2454d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2454d4: 0x3c020033
    ctx->pc = 0x2454d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2454d8: 0x8c434854
    ctx->pc = 0x2454d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 18516)));
    // 0x2454dc: 0x8e42089c
    ctx->pc = 0x2454dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    // 0x2454e0: 0x14620003
    ctx->pc = 0x2454E0u;
    {
        const bool branch_taken_0x2454e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2454e0) {
            ctx->pc = 0x2454F0u;
            goto label_2454f0;
        }
    }
    ctx->pc = 0x2454E8u;
    // 0x2454e8: 0x3c014080
    ctx->pc = 0x2454e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2454ec: 0x44810000
    ctx->pc = 0x2454ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2454f0:
    // 0x2454f0: 0x46020034
    ctx->pc = 0x2454f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2454f4: 0x0
    ctx->pc = 0x2454f4u;
    // NOP
    // 0x2454f8: 0x45000004
    ctx->pc = 0x2454F8u;
    {
        const bool branch_taken_0x2454f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2454FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2454f8) {
            ctx->pc = 0x24550Cu;
            goto label_24550c;
        }
    }
    ctx->pc = 0x245500u;
    // 0x245500: 0xc6400054
    ctx->pc = 0x245500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245504: 0x100000f1
    ctx->pc = 0x245504u;
    {
        const bool branch_taken_0x245504 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245508u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2188), bits); }
        if (branch_taken_0x245504) {
            ctx->pc = 0x2458CCu;
            goto label_2458cc;
        }
    }
    ctx->pc = 0x24550Cu;
label_24550c:
    // 0x24550c: 0x16c2002d
    ctx->pc = 0x24550Cu;
    {
        const bool branch_taken_0x24550c = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x245510u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24550c) {
            ctx->pc = 0x2455C4u;
            goto label_2455c4;
        }
    }
    ctx->pc = 0x245514u;
    // 0x245514: 0x3c02003c
    ctx->pc = 0x245514u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x245518: 0x8c421ea4
    ctx->pc = 0x245518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7844)));
    // 0x24551c: 0x12220028
    ctx->pc = 0x24551Cu;
    {
        const bool branch_taken_0x24551c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x245520u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24551c) {
            ctx->pc = 0x2455C0u;
            goto label_2455c0;
        }
    }
    ctx->pc = 0x245524u;
    // 0x245524: 0x200282d
    ctx->pc = 0x245524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245528: 0x3c06003c
    ctx->pc = 0x245528u;
    SET_GPR_U32(ctx, 6, ((uint32_t)60 << 16));
    // 0x24552c: 0x24c61e88
    ctx->pc = 0x24552cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7816));
    // 0x245530: 0x3c070032
    ctx->pc = 0x245530u;
    SET_GPR_U32(ctx, 7, ((uint32_t)50 << 16));
    // 0x245534: 0x24e7fc10
    ctx->pc = 0x245534u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294966288));
    // 0x245538: 0xc087c18
    ctx->pc = 0x245538u;
    SET_GPR_U32(ctx, 31, 0x245540u);
    ctx->pc = 0x24553Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x21F060u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlideAlongWall_0x21f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245540u; }
    }
    if (ctx->pc != 0x245540u) { return; }
    ctx->pc = 0x245540u;
    // 0x245540: 0xc6600000
    ctx->pc = 0x245540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245544: 0xc6010000
    ctx->pc = 0x245544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245548: 0x46010000
    ctx->pc = 0x245548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24554c: 0xe7a00000
    ctx->pc = 0x24554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x245550: 0xc6600004
    ctx->pc = 0x245550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245554: 0xc6010004
    ctx->pc = 0x245554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245558: 0x46010000
    ctx->pc = 0x245558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24555c: 0xe7a00004
    ctx->pc = 0x24555cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x245560: 0xc6600008
    ctx->pc = 0x245560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245564: 0xc6010008
    ctx->pc = 0x245564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245568: 0x46010000
    ctx->pc = 0x245568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24556c: 0xe7a00008
    ctx->pc = 0x24556cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x245570: 0x3a0202d
    ctx->pc = 0x245570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245574: 0x3c050033
    ctx->pc = 0x245574u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x245578: 0x24a54810
    ctx->pc = 0x245578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18448));
    // 0x24557c: 0x4600b306
    ctx->pc = 0x24557cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x245580: 0x44806800
    ctx->pc = 0x245580u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x245584: 0x4600c386
    ctx->pc = 0x245584u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x245588: 0x302d
    ctx->pc = 0x245588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24558c: 0xc087b24
    ctx->pc = 0x24558Cu;
    SET_GPR_U32(ctx, 31, 0x245594u);
    ctx->pc = 0x245590u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245594u; }
    }
    if (ctx->pc != 0x245594u) { return; }
    ctx->pc = 0x245594u;
    // 0x245594: 0x12800006
    ctx->pc = 0x245594u;
    {
        const bool branch_taken_0x245594 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x245598u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x245594) {
            ctx->pc = 0x2455B0u;
            goto label_2455b0;
        }
    }
    ctx->pc = 0x24559Cu;
    // 0x24559c: 0x12a00004
    ctx->pc = 0x24559Cu;
    {
        const bool branch_taken_0x24559c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x24559c) {
            ctx->pc = 0x2455B0u;
            goto label_2455b0;
        }
    }
    ctx->pc = 0x2455A4u;
    // 0x2455a4: 0x8e42089c
    ctx->pc = 0x2455a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    // 0x2455a8: 0x545100be
    ctx->pc = 0x2455A8u;
    {
        const bool branch_taken_0x2455a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x2455a8) {
            ctx->pc = 0x2455ACu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2458A4u;
            goto label_2458a4;
        }
    }
    ctx->pc = 0x2455B0u;
label_2455b0:
    // 0x2455b0: 0x162000c2
    ctx->pc = 0x2455B0u;
    {
        const bool branch_taken_0x2455b0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2455B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2455b0) {
            ctx->pc = 0x2458BCu;
            goto label_2458bc;
        }
    }
    ctx->pc = 0x2455B8u;
    // 0x2455b8: 0x100000c5
    ctx->pc = 0x2455B8u;
    {
        const bool branch_taken_0x2455b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2455BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2455b8) {
            ctx->pc = 0x2458D0u;
            goto label_2458d0;
        }
    }
    ctx->pc = 0x2455C0u;
label_2455c0:
    // 0x2455c0: 0x3c020033
    ctx->pc = 0x2455c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_2455c4:
    // 0x2455c4: 0x24424810
    ctx->pc = 0x2455c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18448));
    // 0x2455c8: 0xc7ac0000
    ctx->pc = 0x2455c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2455cc: 0xc4400030
    ctx->pc = 0x2455ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455d0: 0x46006301
    ctx->pc = 0x2455d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2455d4: 0xe7ac0020
    ctx->pc = 0x2455d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2455d8: 0xc7a10004
    ctx->pc = 0x2455d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2455dc: 0xc4400034
    ctx->pc = 0x2455dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455e0: 0x46000841
    ctx->pc = 0x2455e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2455e4: 0xe7a10024
    ctx->pc = 0x2455e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2455e8: 0xc7ad0008
    ctx->pc = 0x2455e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2455ec: 0xc4400038
    ctx->pc = 0x2455ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455f0: 0x46006b41
    ctx->pc = 0x2455f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2455f4: 0xe7ad0028
    ctx->pc = 0x2455f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2455f8: 0xc6000000
    ctx->pc = 0x2455f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455fc: 0x460c0542
    ctx->pc = 0x2455fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x245600: 0xc6000004
    ctx->pc = 0x245600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245604: 0x46010002
    ctx->pc = 0x245604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x245608: 0x4600ad40
    ctx->pc = 0x245608u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x24560c: 0xc6000008
    ctx->pc = 0x24560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245610: 0x460d0002
    ctx->pc = 0x245610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x245614: 0xc0b5c34
    ctx->pc = 0x245614u;
    SET_GPR_U32(ctx, 31, 0x24561Cu);
    ctx->pc = 0x245618u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24561Cu; }
    }
    if (ctx->pc != 0x24561Cu) { return; }
    ctx->pc = 0x24561Cu;
    // 0x24561c: 0x46000506
    ctx->pc = 0x24561cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x245620: 0x3c013a83
    ctx->pc = 0x245620u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x245624: 0x3421126f
    ctx->pc = 0x245624u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x245628: 0x44810000
    ctx->pc = 0x245628u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24562c: 0x4600a034
    ctx->pc = 0x24562cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245630: 0x45000064
    ctx->pc = 0x245630u;
    {
        const bool branch_taken_0x245630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245630) {
            ctx->pc = 0x2457C4u;
            goto label_2457c4;
        }
    }
    ctx->pc = 0x245638u;
    // 0x245638: 0x16c00062
    ctx->pc = 0x245638u;
    {
        const bool branch_taken_0x245638 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        if (branch_taken_0x245638) {
            ctx->pc = 0x2457C4u;
            goto label_2457c4;
        }
    }
    ctx->pc = 0x245640u;
    // 0x245640: 0xc6000000
    ctx->pc = 0x245640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245644: 0xe7a00010
    ctx->pc = 0x245644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x245648: 0xc6000004
    ctx->pc = 0x245648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24564c: 0xe7a00014
    ctx->pc = 0x24564cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x245650: 0xc6000008
    ctx->pc = 0x245650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245654: 0xe7a00018
    ctx->pc = 0x245654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x245658: 0xc0b58a4
    ctx->pc = 0x245658u;
    SET_GPR_U32(ctx, 31, 0x245660u);
    ctx->pc = 0x24565Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245660u; }
    }
    if (ctx->pc != 0x245660u) { return; }
    ctx->pc = 0x245660u;
    // 0x245660: 0xc7a10010
    ctx->pc = 0x245660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245664: 0x4601b042
    ctx->pc = 0x245664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x245668: 0xe7a10010
    ctx->pc = 0x245668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24566c: 0xc7a20014
    ctx->pc = 0x24566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x245670: 0x4602b082
    ctx->pc = 0x245670u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x245674: 0xe7a20014
    ctx->pc = 0x245674u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x245678: 0xc7a30018
    ctx->pc = 0x245678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24567c: 0x4603b0c2
    ctx->pc = 0x24567cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x245680: 0xe7a30018
    ctx->pc = 0x245680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x245684: 0xc7a00000
    ctx->pc = 0x245684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245688: 0x46010000
    ctx->pc = 0x245688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24568c: 0xe7a00000
    ctx->pc = 0x24568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x245690: 0xc7a00004
    ctx->pc = 0x245690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245694: 0x46020000
    ctx->pc = 0x245694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x245698: 0xe7a00004
    ctx->pc = 0x245698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24569c: 0xc7a00008
    ctx->pc = 0x24569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2456a0: 0x46030000
    ctx->pc = 0x2456a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2456a4: 0xe7a00008
    ctx->pc = 0x2456a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2456a8: 0x3a0202d
    ctx->pc = 0x2456a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456ac: 0x282d
    ctx->pc = 0x2456acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2456b0: 0x4600b306
    ctx->pc = 0x2456b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2456b4: 0x44806800
    ctx->pc = 0x2456b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x2456b8: 0x4600c386
    ctx->pc = 0x2456b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x2456bc: 0x24060001
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2456c0: 0xc087b24
    ctx->pc = 0x2456C0u;
    SET_GPR_U32(ctx, 31, 0x2456C8u);
    ctx->pc = 0x2456C4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2456C8u; }
    }
    if (ctx->pc != 0x2456C8u) { return; }
    ctx->pc = 0x2456C8u;
    // 0x2456c8: 0x12800006
    ctx->pc = 0x2456C8u;
    {
        const bool branch_taken_0x2456c8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2456CCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2456c8) {
            ctx->pc = 0x2456E4u;
            goto label_2456e4;
        }
    }
    ctx->pc = 0x2456D0u;
    // 0x2456d0: 0x12a00004
    ctx->pc = 0x2456D0u;
    {
        const bool branch_taken_0x2456d0 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x2456d0) {
            ctx->pc = 0x2456E4u;
            goto label_2456e4;
        }
    }
    ctx->pc = 0x2456D8u;
    // 0x2456d8: 0x8e42089c
    ctx->pc = 0x2456d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    // 0x2456dc: 0x54510071
    ctx->pc = 0x2456DCu;
    {
        const bool branch_taken_0x2456dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x2456dc) {
            ctx->pc = 0x2456E0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2458A4u;
            goto label_2458a4;
        }
    }
    ctx->pc = 0x2456E4u;
label_2456e4:
    // 0x2456e4: 0x1220002b
    ctx->pc = 0x2456E4u;
    {
        const bool branch_taken_0x2456e4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2456E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2456e4) {
            ctx->pc = 0x245794u;
            goto label_245794;
        }
    }
    ctx->pc = 0x2456ECu;
    // 0x2456ec: 0x2442fbb0
    ctx->pc = 0x2456ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x2456f0: 0xc4400034
    ctx->pc = 0x2456f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2456f4: 0x46170081
    ctx->pc = 0x2456f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x2456f8: 0x8c420044
    ctx->pc = 0x2456f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2456fc: 0x8c420010
    ctx->pc = 0x2456fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x245700: 0x30420008
    ctx->pc = 0x245700u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x245704: 0x1040000a
    ctx->pc = 0x245704u;
    {
        const bool branch_taken_0x245704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245708u;
        ctx->f[2] = FPU_ABS_S(ctx->f[2]);
        if (branch_taken_0x245704) {
            ctx->pc = 0x245730u;
            goto label_245730;
        }
    }
    ctx->pc = 0x24570Cu;
    // 0x24570c: 0x3c014080
    ctx->pc = 0x24570cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x245710: 0x44810000
    ctx->pc = 0x245710u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x245714: 0x46001034
    ctx->pc = 0x245714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245718: 0x0
    ctx->pc = 0x245718u;
    // NOP
    // 0x24571c: 0x45000005
    ctx->pc = 0x24571Cu;
    {
        const bool branch_taken_0x24571c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245720u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x24571c) {
            ctx->pc = 0x245734u;
            goto label_245734;
        }
    }
    ctx->pc = 0x245724u;
    // 0x245724: 0x4480a000
    ctx->pc = 0x245724u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x245728: 0x10000022
    ctx->pc = 0x245728u;
    {
        const bool branch_taken_0x245728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x245728) {
            ctx->pc = 0x2457B4u;
            goto label_2457b4;
        }
    }
    ctx->pc = 0x245730u;
label_245730:
    // 0x245730: 0x3c020032
    ctx->pc = 0x245730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_245734:
    // 0x245734: 0x2442fbb0
    ctx->pc = 0x245734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x245738: 0xc7ac0000
    ctx->pc = 0x245738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24573c: 0xc4400030
    ctx->pc = 0x24573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245740: 0x46006301
    ctx->pc = 0x245740u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x245744: 0xe7ac0020
    ctx->pc = 0x245744u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x245748: 0xc7a10004
    ctx->pc = 0x245748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24574c: 0xc4400034
    ctx->pc = 0x24574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245750: 0x46000841
    ctx->pc = 0x245750u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245754: 0xe7a10024
    ctx->pc = 0x245754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x245758: 0xc7ad0008
    ctx->pc = 0x245758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24575c: 0xc4400038
    ctx->pc = 0x24575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245760: 0x46006b41
    ctx->pc = 0x245760u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x245764: 0xe7ad0028
    ctx->pc = 0x245764u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x245768: 0xc6000000
    ctx->pc = 0x245768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24576c: 0x460c0542
    ctx->pc = 0x24576cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x245770: 0xc6000004
    ctx->pc = 0x245770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245774: 0x46010002
    ctx->pc = 0x245774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x245778: 0x4600ad40
    ctx->pc = 0x245778u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x24577c: 0xc6000008
    ctx->pc = 0x24577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245780: 0x460d0002
    ctx->pc = 0x245780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x245784: 0xc0b5c34
    ctx->pc = 0x245784u;
    SET_GPR_U32(ctx, 31, 0x24578Cu);
    ctx->pc = 0x245788u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24578Cu; }
    }
    if (ctx->pc != 0x24578Cu) { return; }
    ctx->pc = 0x24578Cu;
    // 0x24578c: 0x10000009
    ctx->pc = 0x24578Cu;
    {
        const bool branch_taken_0x24578c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245790u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x24578c) {
            ctx->pc = 0x2457B4u;
            goto label_2457b4;
        }
    }
    ctx->pc = 0x245794u;
label_245794:
    // 0x245794: 0xc7a00010
    ctx->pc = 0x245794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245798: 0xe7a00020
    ctx->pc = 0x245798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24579c: 0xc7a00014
    ctx->pc = 0x24579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2457a0: 0xe7a00024
    ctx->pc = 0x2457a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2457a4: 0xc7a00018
    ctx->pc = 0x2457a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2457a8: 0xe7a00028
    ctx->pc = 0x2457a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2457ac: 0x4480a800
    ctx->pc = 0x2457acu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x2457b0: 0x4600b506
    ctx->pc = 0x2457b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_2457b4:
    // 0x2457b4: 0x3c013a83
    ctx->pc = 0x2457b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2457b8: 0x3421126f
    ctx->pc = 0x2457b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2457bc: 0x44810000
    ctx->pc = 0x2457bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2457c0: 0x4600a034
    ctx->pc = 0x2457c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2457c4:
    // 0x2457c4: 0x45010006
    ctx->pc = 0x2457C4u;
    {
        const bool branch_taken_0x2457c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2457c4) {
            ctx->pc = 0x2457E0u;
            goto label_2457e0;
        }
    }
    ctx->pc = 0x2457CCu;
    // 0x2457cc: 0x44800000
    ctx->pc = 0x2457ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2457d0: 0x4600a834
    ctx->pc = 0x2457d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2457d4: 0x0
    ctx->pc = 0x2457d4u;
    // NOP
    // 0x2457d8: 0x45020010
    ctx->pc = 0x2457D8u;
    {
        const bool branch_taken_0x2457d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2457d8) {
            ctx->pc = 0x2457DCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x24581Cu;
            goto label_24581c;
        }
    }
    ctx->pc = 0x2457E0u;
label_2457e0:
    // 0x2457e0: 0x3c013a83
    ctx->pc = 0x2457e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2457e4: 0x3421126f
    ctx->pc = 0x2457e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2457e8: 0x44810000
    ctx->pc = 0x2457e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2457ec: 0x4600a034
    ctx->pc = 0x2457ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2457f0: 0x0
    ctx->pc = 0x2457f0u;
    // NOP
    // 0x2457f4: 0x45010007
    ctx->pc = 0x2457F4u;
    {
        const bool branch_taken_0x2457f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2457F8u;
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2188), bits); }
        if (branch_taken_0x2457f4) {
            ctx->pc = 0x245814u;
            goto label_245814;
        }
    }
    ctx->pc = 0x2457FCu;
    // 0x2457fc: 0x3c01be80
    ctx->pc = 0x2457fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48768 << 16));
    // 0x245800: 0x44810000
    ctx->pc = 0x245800u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x245804: 0x4600a834
    ctx->pc = 0x245804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245808: 0x0
    ctx->pc = 0x245808u;
    // NOP
    // 0x24580c: 0x45000032
    ctx->pc = 0x24580Cu;
    {
        const bool branch_taken_0x24580c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245810u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24580c) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x245814u;
label_245814:
    // 0x245814: 0x10000030
    ctx->pc = 0x245814u;
    {
        const bool branch_taken_0x245814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245818u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x245814) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x24581Cu;
label_24581c:
    // 0x24581c: 0xc7a00020
    ctx->pc = 0x24581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245820: 0x46000841
    ctx->pc = 0x245820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245824: 0xe6010000
    ctx->pc = 0x245824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x245828: 0xc6020008
    ctx->pc = 0x245828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24582c: 0xc7a00028
    ctx->pc = 0x24582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245830: 0x46001081
    ctx->pc = 0x245830u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x245834: 0xe6020008
    ctx->pc = 0x245834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x245838: 0xc6600000
    ctx->pc = 0x245838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24583c: 0x46010000
    ctx->pc = 0x24583cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245840: 0xe7a00000
    ctx->pc = 0x245840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x245844: 0xc6600004
    ctx->pc = 0x245844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245848: 0xc6010004
    ctx->pc = 0x245848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24584c: 0x46010000
    ctx->pc = 0x24584cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x245850: 0xe7a00004
    ctx->pc = 0x245850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x245854: 0xc6600008
    ctx->pc = 0x245854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245858: 0x46020000
    ctx->pc = 0x245858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24585c: 0xe7a00008
    ctx->pc = 0x24585cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x245860: 0x3a0202d
    ctx->pc = 0x245860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245864: 0x3c050033
    ctx->pc = 0x245864u;
    SET_GPR_U32(ctx, 5, ((uint32_t)51 << 16));
    // 0x245868: 0x24a54810
    ctx->pc = 0x245868u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18448));
    // 0x24586c: 0x4600b306
    ctx->pc = 0x24586cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x245870: 0x44806800
    ctx->pc = 0x245870u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x245874: 0x4600c386
    ctx->pc = 0x245874u;
    ctx->f[14] = FPU_MOV_S(ctx->f[24]);
    // 0x245878: 0x302d
    ctx->pc = 0x245878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24587c: 0xc087b24
    ctx->pc = 0x24587Cu;
    SET_GPR_U32(ctx, 31, 0x245884u);
    ctx->pc = 0x245880u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245884u; }
    }
    if (ctx->pc != 0x245884u) { return; }
    ctx->pc = 0x245884u;
    // 0x245884: 0x1280000b
    ctx->pc = 0x245884u;
    {
        const bool branch_taken_0x245884 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x245888u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x245884) {
            ctx->pc = 0x2458B4u;
            goto label_2458b4;
        }
    }
    ctx->pc = 0x24588Cu;
    // 0x24588c: 0x12a00009
    ctx->pc = 0x24588Cu;
    {
        const bool branch_taken_0x24588c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x24588c) {
            ctx->pc = 0x2458B4u;
            goto label_2458b4;
        }
    }
    ctx->pc = 0x245894u;
    // 0x245894: 0x8e42089c
    ctx->pc = 0x245894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2204)));
    // 0x245898: 0x10510006
    ctx->pc = 0x245898u;
    {
        const bool branch_taken_0x245898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x245898) {
            ctx->pc = 0x2458B4u;
            goto label_2458b4;
        }
    }
    ctx->pc = 0x2458A0u;
    // 0x2458a0: 0xae000000
    ctx->pc = 0x2458a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2458a4:
    // 0x2458a4: 0xae000004
    ctx->pc = 0x2458a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2458a8: 0xae000008
    ctx->pc = 0x2458a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2458ac: 0x1000000a
    ctx->pc = 0x2458ACu;
    {
        const bool branch_taken_0x2458ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2458B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2458ac) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2458B4u;
label_2458b4:
    // 0x2458b4: 0x12200005
    ctx->pc = 0x2458B4u;
    {
        const bool branch_taken_0x2458b4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2458B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x2458b4) {
            ctx->pc = 0x2458CCu;
            goto label_2458cc;
        }
    }
    ctx->pc = 0x2458BCu;
label_2458bc:
    // 0x2458bc: 0xc4404844
    ctx->pc = 0x2458bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2458c0: 0xe640088c
    ctx->pc = 0x2458c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2188), bits); }
    // 0x2458c4: 0x10000004
    ctx->pc = 0x2458C4u;
    {
        const bool branch_taken_0x2458c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2458C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2458c4) {
            ctx->pc = 0x2458D8u;
            goto label_2458d8;
        }
    }
    ctx->pc = 0x2458CCu;
label_2458cc:
    // 0x2458cc: 0xae000000
    ctx->pc = 0x2458ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2458d0:
    // 0x2458d0: 0xae000008
    ctx->pc = 0x2458d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2458d4: 0x102d
    ctx->pc = 0x2458d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2458d8:
    // 0x2458d8: 0xdfbf00a0
    ctx->pc = 0x2458d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2458dc: 0xdfb60090
    ctx->pc = 0x2458dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2458e0: 0xdfb50080
    ctx->pc = 0x2458e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2458e4: 0xdfb40070
    ctx->pc = 0x2458e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2458e8: 0xdfb30060
    ctx->pc = 0x2458e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2458ec: 0xdfb20050
    ctx->pc = 0x2458ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2458f0: 0xdfb10040
    ctx->pc = 0x2458f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2458f4: 0xdfb00030
    ctx->pc = 0x2458f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2458f8: 0xc7b800d0
    ctx->pc = 0x2458f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2458fc: 0xc7b700c8
    ctx->pc = 0x2458fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x245900: 0xc7b600c0
    ctx->pc = 0x245900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x245904: 0xc7b500b8
    ctx->pc = 0x245904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x245908: 0xc7b400b0
    ctx->pc = 0x245908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24590c: 0x3e00008
    ctx->pc = 0x24590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2453B8u: goto label_2453b8;
            case 0x2453DCu: goto label_2453dc;
            case 0x2453F4u: goto label_2453f4;
            case 0x245404u: goto label_245404;
            case 0x245458u: goto label_245458;
            case 0x2454A8u: goto label_2454a8;
            case 0x2454CCu: goto label_2454cc;
            case 0x2454F0u: goto label_2454f0;
            case 0x24550Cu: goto label_24550c;
            case 0x2455B0u: goto label_2455b0;
            case 0x2455C0u: goto label_2455c0;
            case 0x2455C4u: goto label_2455c4;
            case 0x2456E4u: goto label_2456e4;
            case 0x245730u: goto label_245730;
            case 0x245734u: goto label_245734;
            case 0x245794u: goto label_245794;
            case 0x2457B4u: goto label_2457b4;
            case 0x2457C4u: goto label_2457c4;
            case 0x2457E0u: goto label_2457e0;
            case 0x245814u: goto label_245814;
            case 0x24581Cu: goto label_24581c;
            case 0x2458A4u: goto label_2458a4;
            case 0x2458B4u: goto label_2458b4;
            case 0x2458BCu: goto label_2458bc;
            case 0x2458CCu: goto label_2458cc;
            case 0x2458D0u: goto label_2458d0;
            case 0x2458D8u: goto label_2458d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245914u;
}
