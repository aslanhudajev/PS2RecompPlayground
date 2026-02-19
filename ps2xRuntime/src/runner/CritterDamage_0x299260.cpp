#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDamage
// Address: 0x299260 - 0x2999e4
void CritterDamage_0x299260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x299260u;

    // 0x299260: 0x27bdff30
    ctx->pc = 0x299260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x299264: 0xffbf00b0
    ctx->pc = 0x299264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x299268: 0xffb700a0
    ctx->pc = 0x299268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x29926c: 0xffb60090
    ctx->pc = 0x29926cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x299270: 0xffb50080
    ctx->pc = 0x299270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x299274: 0xffb40070
    ctx->pc = 0x299274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x299278: 0xffb30060
    ctx->pc = 0x299278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x29927c: 0xffb20050
    ctx->pc = 0x29927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x299280: 0xffb10040
    ctx->pc = 0x299280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x299284: 0xffb00030
    ctx->pc = 0x299284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x299288: 0xe7b500c8
    ctx->pc = 0x299288u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x29928c: 0xe7b400c0
    ctx->pc = 0x29928cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x299290: 0x80902d
    ctx->pc = 0x299290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299294: 0xe7ac0020
    ctx->pc = 0x299294u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x299298: 0xa0982d
    ctx->pc = 0x299298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29929c: 0xafa60024
    ctx->pc = 0x29929cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2992a0: 0xe0a82d
    ctx->pc = 0x2992a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992a4: 0x100b02d
    ctx->pc = 0x2992a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992a8: 0x8e420004
    ctx->pc = 0x2992a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2992ac: 0x10400005
    ctx->pc = 0x2992ACu;
    {
        const bool branch_taken_0x2992ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2992B0u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2992ac) {
            ctx->pc = 0x2992C4u;
            goto label_2992c4;
        }
    }
    ctx->pc = 0x2992B4u;
    // 0x2992b4: 0x8e420008
    ctx->pc = 0x2992b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2992b8: 0x2c420002
    ctx->pc = 0x2992b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2992bc: 0x50400003
    ctx->pc = 0x2992BCu;
    {
        const bool branch_taken_0x2992bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2992bc) {
            ctx->pc = 0x2992C0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x2992CCu;
            goto label_2992cc;
        }
    }
    ctx->pc = 0x2992C4u;
label_2992c4:
    // 0x2992c4: 0x100001ba
    ctx->pc = 0x2992C4u;
    {
        const bool branch_taken_0x2992c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2992C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2992c4) {
            ctx->pc = 0x2999B0u;
            goto label_2999b0;
        }
    }
    ctx->pc = 0x2992CCu;
label_2992cc:
    // 0x2992cc: 0x86420124
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x2992d0: 0x24030090
    ctx->pc = 0x2992d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x2992d4: 0x431018
    ctx->pc = 0x2992d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2992d8: 0x8c830124
    ctx->pc = 0x2992d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x2992dc: 0x432821
    ctx->pc = 0x2992dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2992e0: 0x8ca30000
    ctx->pc = 0x2992e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2992e4: 0x24020023
    ctx->pc = 0x2992e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x2992e8: 0x5462001d
    ctx->pc = 0x2992E8u;
    {
        const bool branch_taken_0x2992e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2992e8) {
            ctx->pc = 0x2992ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x2992F0u;
    // 0x2992f0: 0x2403fecf
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966991));
    // 0x2992f4: 0x8fa20024
    ctx->pc = 0x2992f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2992f8: 0x431024
    ctx->pc = 0x2992f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2992fc: 0xafa20024
    ctx->pc = 0x2992fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x299300: 0x3c013e80
    ctx->pc = 0x299300u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x299304: 0x44810800
    ctx->pc = 0x299304u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x299308: 0xc7a00020
    ctx->pc = 0x299308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29930c: 0x46010002
    ctx->pc = 0x29930cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299310: 0xe7a00020
    ctx->pc = 0x299310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x299314: 0x84a2005a
    ctx->pc = 0x299314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 90)));
    // 0x299318: 0x284203e8
    ctx->pc = 0x299318u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1000));
    // 0x29931c: 0x54400010
    ctx->pc = 0x29931Cu;
    {
        const bool branch_taken_0x29931c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29931c) {
            ctx->pc = 0x299320u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x299324u;
    // 0x299324: 0x96430252
    ctx->pc = 0x299324u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 594)));
    // 0x299328: 0x30620001
    ctx->pc = 0x299328u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x29932c: 0x5440000c
    ctx->pc = 0x29932Cu;
    {
        const bool branch_taken_0x29932c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29932c) {
            ctx->pc = 0x299330u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x299334u;
    // 0x299334: 0x84a20058
    ctx->pc = 0x299334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x299338: 0x4400008
    ctx->pc = 0x299338u;
    {
        const bool branch_taken_0x299338 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29933Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x299338) {
            ctx->pc = 0x29935Cu;
            goto label_29935c;
        }
    }
    ctx->pc = 0x299340u;
    // 0x299340: 0xa6420252
    ctx->pc = 0x299340u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 594), (uint16_t)GPR_U32(ctx, 2));
    // 0x299344: 0x240202d
    ctx->pc = 0x299344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299348: 0x84a50058
    ctx->pc = 0x299348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x29934c: 0x302d
    ctx->pc = 0x29934cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299350: 0x24070001
    ctx->pc = 0x299350u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x299354: 0xc0a50f4
    ctx->pc = 0x299354u;
    SET_GPR_U32(ctx, 31, 0x29935Cu);
    ctx->pc = 0x299358u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29935Cu; }
    }
    if (ctx->pc != 0x29935Cu) { return; }
    ctx->pc = 0x29935Cu;
label_29935c:
    // 0x29935c: 0x8e420004
    ctx->pc = 0x29935cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_299360:
    // 0x299360: 0x27a40020
    ctx->pc = 0x299360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x299364: 0x27a50024
    ctx->pc = 0x299364u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 36));
    // 0x299368: 0x8c4600e0
    ctx->pc = 0x299368u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x29936c: 0xc0a433a
    ctx->pc = 0x29936Cu;
    SET_GPR_U32(ctx, 31, 0x299374u);
    ctx->pc = 0x299370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x290CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ModifyDamage_0x290ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299374u; }
    }
    if (ctx->pc != 0x299374u) { return; }
    ctx->pc = 0x299374u;
    // 0x299374: 0x8e420004
    ctx->pc = 0x299374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x299378: 0x8c420120
    ctx->pc = 0x299378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x29937c: 0x84540020
    ctx->pc = 0x29937cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x299380: 0x3c020031
    ctx->pc = 0x299380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x299384: 0x8c43ffe8
    ctx->pc = 0x299384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    // 0x299388: 0x24020003
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x29938c: 0x14620007
    ctx->pc = 0x29938Cu;
    {
        const bool branch_taken_0x29938c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x299390u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x29938c) {
            ctx->pc = 0x2993ACu;
            goto label_2993ac;
        }
    }
    ctx->pc = 0x299394u;
    // 0x299394: 0x6600005
    ctx->pc = 0x299394u;
    {
        const bool branch_taken_0x299394 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x299394) {
            ctx->pc = 0x2993ACu;
            goto label_2993ac;
        }
    }
    ctx->pc = 0x29939Cu;
    // 0x29939c: 0x3c01461c
    ctx->pc = 0x29939cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x2993a0: 0x34214000
    ctx->pc = 0x2993a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2993a4: 0x44810000
    ctx->pc = 0x2993a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2993a8: 0xe7a00020
    ctx->pc = 0x2993a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2993ac:
    // 0x2993ac: 0x1282000a
    ctx->pc = 0x2993ACu;
    {
        const bool branch_taken_0x2993ac = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x2993B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2993ac) {
            ctx->pc = 0x2993D8u;
            goto label_2993d8;
        }
    }
    ctx->pc = 0x2993B4u;
    // 0x2993b4: 0xc44107fc
    ctx->pc = 0x2993b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993b8: 0x3c013f80
    ctx->pc = 0x2993b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2993bc: 0x44810000
    ctx->pc = 0x2993bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2993c0: 0x46000834
    ctx->pc = 0x2993c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2993c4: 0x0
    ctx->pc = 0x2993c4u;
    // NOP
    // 0x2993c8: 0x45000003
    ctx->pc = 0x2993C8u;
    {
        const bool branch_taken_0x2993c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2993CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2993c8) {
            ctx->pc = 0x2993D8u;
            goto label_2993d8;
        }
    }
    ctx->pc = 0x2993D0u;
    // 0x2993d0: 0x46000000
    ctx->pc = 0x2993d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2993d4: 0xe7a00020
    ctx->pc = 0x2993d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2993d8:
    // 0x2993d8: 0xc64004f8
    ctx->pc = 0x2993d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2993dc: 0xc7a10020
    ctx->pc = 0x2993dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993e0: 0x46010000
    ctx->pc = 0x2993e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2993e4: 0x24020004
    ctx->pc = 0x2993e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2993e8: 0x16820010
    ctx->pc = 0x2993E8u;
    {
        const bool branch_taken_0x2993e8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2993ECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1272), bits); }
        if (branch_taken_0x2993e8) {
            ctx->pc = 0x29942Cu;
            goto label_29942c;
        }
    }
    ctx->pc = 0x2993F0u;
    // 0x2993f0: 0x3c020034
    ctx->pc = 0x2993f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2993f4: 0x8c42e880
    ctx->pc = 0x2993f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x2993f8: 0x2442ffff
    ctx->pc = 0x2993f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2993fc: 0x2c420004
    ctx->pc = 0x2993fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x299400: 0x1440000a
    ctx->pc = 0x299400u;
    {
        const bool branch_taken_0x299400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x299404u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x299400) {
            ctx->pc = 0x29942Cu;
            goto label_29942c;
        }
    }
    ctx->pc = 0x299408u;
    // 0x299408: 0x24631da8
    ctx->pc = 0x299408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7592));
    // 0x29940c: 0x3c020036
    ctx->pc = 0x29940cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x299410: 0x8c42d750
    ctx->pc = 0x299410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x299414: 0x21080
    ctx->pc = 0x299414u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x299418: 0x431021
    ctx->pc = 0x299418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29941c: 0xc7a00020
    ctx->pc = 0x29941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299420: 0xc4410000
    ctx->pc = 0x299420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299424: 0x46010002
    ctx->pc = 0x299424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299428: 0xe7a00020
    ctx->pc = 0x299428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_29942c:
    // 0x29942c: 0x6600066
    ctx->pc = 0x29942Cu;
    {
        const bool branch_taken_0x29942c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x299430u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x29942c) {
            ctx->pc = 0x2995C8u;
            goto label_2995c8;
        }
    }
    ctx->pc = 0x299434u;
    // 0x299434: 0x8e430004
    ctx->pc = 0x299434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x299438: 0x8c42e7c8
    ctx->pc = 0x299438u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29943c: 0xc46100e4
    ctx->pc = 0x29943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299440: 0xc44000ac
    ctx->pc = 0x299440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299444: 0x46000842
    ctx->pc = 0x299444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x299448: 0xc7a00020
    ctx->pc = 0x299448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29944c: 0x44806000
    ctx->pc = 0x29944cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x299450: 0x460c0034
    ctx->pc = 0x299450u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299454: 0x0
    ctx->pc = 0x299454u;
    // NOP
    // 0x299458: 0x45010008
    ctx->pc = 0x299458u;
    {
        const bool branch_taken_0x299458 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29945Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x299458) {
            ctx->pc = 0x29947Cu;
            goto label_29947c;
        }
    }
    ctx->pc = 0x299460u;
    // 0x299460: 0xc7a00020
    ctx->pc = 0x299460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299464: 0xc64c04f4
    ctx->pc = 0x299464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299468: 0x46006034
    ctx->pc = 0x299468u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29946c: 0x0
    ctx->pc = 0x29946cu;
    // NOP
    // 0x299470: 0x45010002
    ctx->pc = 0x299470u;
    {
        const bool branch_taken_0x299470 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299474u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x299470) {
            ctx->pc = 0x29947Cu;
            goto label_29947c;
        }
    }
    ctx->pc = 0x299478u;
    // 0x299478: 0xc7b40020
    ctx->pc = 0x299478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29947c:
    // 0x29947c: 0x3c013f80
    ctx->pc = 0x29947cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x299480: 0x44811000
    ctx->pc = 0x299480u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x299484: 0x46020800
    ctx->pc = 0x299484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x299488: 0x0
    ctx->pc = 0x299488u;
    // NOP
    // 0x29948c: 0x0
    ctx->pc = 0x29948cu;
    // NOP
    // 0x299490: 0x4600a043
    ctx->pc = 0x299490u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
    // 0x299494: 0x46011034
    ctx->pc = 0x299494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299498: 0x0
    ctx->pc = 0x299498u;
    // NOP
    // 0x29949c: 0x45030001
    ctx->pc = 0x29949Cu;
    {
        const bool branch_taken_0x29949c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29949c) {
            ctx->pc = 0x2994A0u;
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x2994A4u;
            goto label_2994a4;
        }
    }
    ctx->pc = 0x2994A4u;
label_2994a4:
    // 0x2994a4: 0x8e420004
    ctx->pc = 0x2994a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2994a8: 0xc44000e8
    ctx->pc = 0x2994a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994ac: 0x46000802
    ctx->pc = 0x2994acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2994b0: 0x46000064
    ctx->pc = 0x2994b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2994b4: 0x44030800
    ctx->pc = 0x2994b4u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x2994b8: 0x24020004
    ctx->pc = 0x2994b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2994bc: 0x16820003
    ctx->pc = 0x2994BCu;
    {
        const bool branch_taken_0x2994bc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2994C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2994bc) {
            ctx->pc = 0x2994CCu;
            goto label_2994cc;
        }
    }
    ctx->pc = 0x2994C4u;
    // 0x2994c4: 0x8c42d750
    ctx->pc = 0x2994c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x2994c8: 0x621818
    ctx->pc = 0x2994c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2994cc:
    // 0x2994cc: 0x44836000
    ctx->pc = 0x2994ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x2994d0: 0x46806320
    ctx->pc = 0x2994d0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2994d4: 0xc0a6ee8
    ctx->pc = 0x2994D4u;
    SET_GPR_U32(ctx, 31, 0x2994DCu);
    ctx->pc = 0x2994D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29BBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAwardExp_0x29bba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2994DCu; }
    }
    if (ctx->pc != 0x2994DCu) { return; }
    ctx->pc = 0x2994DCu;
    // 0x2994dc: 0x131900
    ctx->pc = 0x2994dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 4));
    // 0x2994e0: 0x26420208
    ctx->pc = 0x2994e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 520));
    // 0x2994e4: 0x431021
    ctx->pc = 0x2994e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2994e8: 0xc4400000
    ctx->pc = 0x2994e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2994ec: 0x4600a000
    ctx->pc = 0x2994ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2994f0: 0xe4400000
    ctx->pc = 0x2994f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2994f4: 0x2431821
    ctx->pc = 0x2994f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2994f8: 0x3c020031
    ctx->pc = 0x2994f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2994fc: 0xc440ffa4
    ctx->pc = 0x2994fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299500: 0xe460020c
    ctx->pc = 0x299500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 524), bits); }
    // 0x299504: 0x8fa20024
    ctx->pc = 0x299504u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x299508: 0x3c030080
    ctx->pc = 0x299508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x29950c: 0x431024
    ctx->pc = 0x29950cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299510: 0x10400008
    ctx->pc = 0x299510u;
    {
        const bool branch_taken_0x299510 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x299514u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x299510) {
            ctx->pc = 0x299534u;
            goto label_299534;
        }
    }
    ctx->pc = 0x299518u;
    // 0x299518: 0x2621018
    ctx->pc = 0x299518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29951c: 0x3c040032
    ctx->pc = 0x29951cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x299520: 0x24841bc0
    ctx->pc = 0x299520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7104));
    // 0x299524: 0x4600a306
    ctx->pc = 0x299524u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x299528: 0x442021
    ctx->pc = 0x299528u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29952c: 0xc08c9a4
    ctx->pc = 0x29952Cu;
    SET_GPR_U32(ctx, 31, 0x299534u);
    ctx->pc = 0x299530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    ctx->pc = 0x232690u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_heal_players_0x232690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299534u; }
    }
    if (ctx->pc != 0x299534u) { return; }
    ctx->pc = 0x299534u;
label_299534:
    // 0x299534: 0x24020004
    ctx->pc = 0x299534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x299538: 0x12820023
    ctx->pc = 0x299538u;
    {
        const bool branch_taken_0x299538 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x29953Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x299538) {
            ctx->pc = 0x2995C8u;
            goto label_2995c8;
        }
    }
    ctx->pc = 0x299540u;
    // 0x299540: 0x8c42e7c8
    ctx->pc = 0x299540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x299544: 0xc441009c
    ctx->pc = 0x299544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299548: 0x44800000
    ctx->pc = 0x299548u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29954c: 0x46010034
    ctx->pc = 0x29954cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299550: 0x0
    ctx->pc = 0x299550u;
    // NOP
    // 0x299554: 0x4500001c
    ctx->pc = 0x299554u;
    {
        const bool branch_taken_0x299554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299558u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x299554) {
            ctx->pc = 0x2995C8u;
            goto label_2995c8;
        }
    }
    ctx->pc = 0x29955Cu;
    // 0x29955c: 0x3c013f80
    ctx->pc = 0x29955cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x299560: 0x44811000
    ctx->pc = 0x299560u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x299564: 0x24631bc0
    ctx->pc = 0x299564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x299568: 0x24022b00
    ctx->pc = 0x299568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29956c: 0x2621018
    ctx->pc = 0x29956cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x299570: 0x431021
    ctx->pc = 0x299570u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299574: 0xc4402ac0
    ctx->pc = 0x299574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299578: 0x46800020
    ctx->pc = 0x299578u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x29957c: 0x46010034
    ctx->pc = 0x29957cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299580: 0x45000007
    ctx->pc = 0x299580u;
    {
        const bool branch_taken_0x299580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299580) {
            ctx->pc = 0x2995A0u;
            goto label_2995a0;
        }
    }
    ctx->pc = 0x299588u;
    // 0x299588: 0x46000801
    ctx->pc = 0x299588u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29958c: 0x3c013ca3
    ctx->pc = 0x29958cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15523 << 16));
    // 0x299590: 0x3421d70a
    ctx->pc = 0x299590u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x299594: 0x44810800
    ctx->pc = 0x299594u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x299598: 0x46010002
    ctx->pc = 0x299598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29959c: 0x46001081
    ctx->pc = 0x29959cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2995a0:
    // 0x2995a0: 0x3c013dcc
    ctx->pc = 0x2995a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2995a4: 0x3421cccd
    ctx->pc = 0x2995a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2995a8: 0x44810000
    ctx->pc = 0x2995a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2995ac: 0x46001034
    ctx->pc = 0x2995acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2995b0: 0x0
    ctx->pc = 0x2995b0u;
    // NOP
    // 0x2995b4: 0x45030001
    ctx->pc = 0x2995B4u;
    {
        const bool branch_taken_0x2995b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2995b4) {
            ctx->pc = 0x2995B8u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2995BCu;
            goto label_2995bc;
        }
    }
    ctx->pc = 0x2995BCu;
label_2995bc:
    // 0x2995bc: 0xc7a00020
    ctx->pc = 0x2995bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2995c0: 0x46001002
    ctx->pc = 0x2995c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2995c4: 0xe7a00020
    ctx->pc = 0x2995c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2995c8:
    // 0x2995c8: 0x8fa20024
    ctx->pc = 0x2995c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2995cc: 0x3c030010
    ctx->pc = 0x2995ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2995d0: 0x34630320
    ctx->pc = 0x2995d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 800));
    // 0x2995d4: 0x431024
    ctx->pc = 0x2995d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2995d8: 0x14400051
    ctx->pc = 0x2995D8u;
    {
        const bool branch_taken_0x2995d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2995DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2995d8) {
            ctx->pc = 0x299720u;
            goto label_299720;
        }
    }
    ctx->pc = 0x2995E0u;
    // 0x2995e0: 0x86430b40
    ctx->pc = 0x2995e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2880)));
    // 0x2995e4: 0x460004e
    ctx->pc = 0x2995E4u;
    {
        const bool branch_taken_0x2995e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2995E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
        if (branch_taken_0x2995e4) {
            ctx->pc = 0x299720u;
            goto label_299720;
        }
    }
    ctx->pc = 0x2995ECu;
    // 0x2995ec: 0x621018
    ctx->pc = 0x2995ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2995f0: 0x24420540
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x2995f4: 0x2428821
    ctx->pc = 0x2995f4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2995f8: 0xc621005c
    ctx->pc = 0x2995f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2995fc: 0xc6200058
    ctx->pc = 0x2995fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299600: 0x46010036
    ctx->pc = 0x299600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299604: 0x0
    ctx->pc = 0x299604u;
    // NOP
    // 0x299608: 0x45020003
    ctx->pc = 0x299608u;
    {
        const bool branch_taken_0x299608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299608) {
            ctx->pc = 0x29960Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x299618u;
            goto label_299618;
        }
    }
    ctx->pc = 0x299610u;
    // 0x299610: 0x10000042
    ctx->pc = 0x299610u;
    {
        const bool branch_taken_0x299610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299614u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x299610) {
            ctx->pc = 0x29971Cu;
            goto label_29971c;
        }
    }
    ctx->pc = 0x299618u;
label_299618:
    // 0x299618: 0xc7a00020
    ctx->pc = 0x299618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29961c: 0xc4410040
    ctx->pc = 0x29961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299620: 0x46010002
    ctx->pc = 0x299620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x299624: 0xe7a00020
    ctx->pc = 0x299624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x299628: 0xc622005c
    ctx->pc = 0x299628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29962c: 0x46001000
    ctx->pc = 0x29962cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x299630: 0xc6210058
    ctx->pc = 0x299630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299634: 0x46000834
    ctx->pc = 0x299634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299638: 0x0
    ctx->pc = 0x299638u;
    // NOP
    // 0x29963c: 0x45020034
    ctx->pc = 0x29963Cu;
    {
        const bool branch_taken_0x29963c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29963c) {
            ctx->pc = 0x299640u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x299710u;
            goto label_299710;
        }
    }
    ctx->pc = 0x299644u;
    // 0x299644: 0x46020801
    ctx->pc = 0x299644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x299648: 0xe7a00020
    ctx->pc = 0x299648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29964c: 0x8e250000
    ctx->pc = 0x29964cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x299650: 0x94a20010
    ctx->pc = 0x299650u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x299654: 0x30420002
    ctx->pc = 0x299654u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x299658: 0x5040002d
    ctx->pc = 0x299658u;
    {
        const bool branch_taken_0x299658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x299658) {
            ctx->pc = 0x29965Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x299710u;
            goto label_299710;
        }
    }
    ctx->pc = 0x299660u;
    // 0x299660: 0x84a50012
    ctx->pc = 0x299660u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x299664: 0x4a00004
    ctx->pc = 0x299664u;
    {
        const bool branch_taken_0x299664 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x299668u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x299664) {
            ctx->pc = 0x299678u;
            goto label_299678;
        }
    }
    ctx->pc = 0x29966Cu;
    // 0x29966c: 0x302d
    ctx->pc = 0x29966cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299670: 0xc0a520a
    ctx->pc = 0x299670u;
    SET_GPR_U32(ctx, 31, 0x299678u);
    ctx->pc = 0x299674u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x294828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoDamageFX_0x294828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299678u; }
    }
    if (ctx->pc != 0x299678u) { return; }
    ctx->pc = 0x299678u;
label_299678:
    // 0x299678: 0x8e420004
    ctx->pc = 0x299678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29967c: 0x8c460120
    ctx->pc = 0x29967cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x299680: 0x84d00022
    ctx->pc = 0x299680u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x299684: 0x3a0202d
    ctx->pc = 0x299684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299688: 0x3c05003b
    ctx->pc = 0x299688u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x29968c: 0x24a5e428
    ctx->pc = 0x29968cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960168));
    // 0x299690: 0x24c60010
    ctx->pc = 0x299690u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x299694: 0xc0b6252
    ctx->pc = 0x299694u;
    SET_GPR_U32(ctx, 31, 0x29969Cu);
    ctx->pc = 0x299698u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29969Cu; }
    }
    if (ctx->pc != 0x29969Cu) { return; }
    ctx->pc = 0x29969Cu;
    // 0x29969c: 0x3a0202d
    ctx->pc = 0x29969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996a0: 0x200282d
    ctx->pc = 0x2996a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996a4: 0x200302d
    ctx->pc = 0x2996a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2996a8: 0xc0b19fe
    ctx->pc = 0x2996A8u;
    SET_GPR_U32(ctx, 31, 0x2996B0u);
    ctx->pc = 0x2996ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996B0u; }
    }
    if (ctx->pc != 0x2996B0u) { return; }
    ctx->pc = 0x2996B0u;
    // 0x2996b0: 0x8e240004
    ctx->pc = 0x2996b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2996b4: 0x50800010
    ctx->pc = 0x2996B4u;
    {
        const bool branch_taken_0x2996b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2996b4) {
            ctx->pc = 0x2996B8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->pc = 0x2996F8u;
            goto label_2996f8;
        }
    }
    ctx->pc = 0x2996BCu;
    // 0x2996bc: 0x4420004
    ctx->pc = 0x2996BCu;
    {
        const bool branch_taken_0x2996bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2996bc) {
            ctx->pc = 0x2996C0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2996D0u;
            goto label_2996d0;
        }
    }
    ctx->pc = 0x2996C4u;
    // 0x2996c4: 0xc0b220e
    ctx->pc = 0x2996C4u;
    SET_GPR_U32(ctx, 31, 0x2996CCu);
    ctx->pc = 0x2996C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetObject_0x2c8838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996CCu; }
    }
    if (ctx->pc != 0x2996CCu) { return; }
    ctx->pc = 0x2996CCu;
    // 0x2996cc: 0x240202d
    ctx->pc = 0x2996ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2996d0:
    // 0x2996d0: 0xc0a4bb4
    ctx->pc = 0x2996D0u;
    SET_GPR_U32(ctx, 31, 0x2996D8u);
    ctx->pc = 0x2996D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x292ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterColnodeUpdateMoves_0x292ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996D8u; }
    }
    if (ctx->pc != 0x2996D8u) { return; }
    ctx->pc = 0x2996D8u;
    // 0x2996d8: 0x8e220000
    ctx->pc = 0x2996d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2996dc: 0x94420010
    ctx->pc = 0x2996dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2996e0: 0x30420004
    ctx->pc = 0x2996e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2996e4: 0x10400003
    ctx->pc = 0x2996E4u;
    {
        const bool branch_taken_0x2996e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2996E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2996e4) {
            ctx->pc = 0x2996F4u;
            goto label_2996f4;
        }
    }
    ctx->pc = 0x2996ECu;
    // 0x2996ec: 0xc0a4c16
    ctx->pc = 0x2996ECu;
    SET_GPR_U32(ctx, 31, 0x2996F4u);
    ctx->pc = 0x2996F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x293058u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterRemoveColnodeChildren_0x293058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2996F4u; }
    }
    if (ctx->pc != 0x2996F4u) { return; }
    ctx->pc = 0x2996F4u;
label_2996f4:
    // 0x2996f4: 0x8e240050
    ctx->pc = 0x2996f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2996f8:
    // 0x2996f8: 0x50800005
    ctx->pc = 0x2996F8u;
    {
        const bool branch_taken_0x2996f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2996f8) {
            ctx->pc = 0x2996FCu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x299710u;
            goto label_299710;
        }
    }
    ctx->pc = 0x299700u;
    // 0x299700: 0xc0b3f1a
    ctx->pc = 0x299700u;
    SET_GPR_U32(ctx, 31, 0x299708u);
    ctx->pc = 0x299704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299708u; }
    }
    if (ctx->pc != 0x299708u) { return; }
    ctx->pc = 0x299708u;
    // 0x299708: 0xae200050
    ctx->pc = 0x299708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x29970c: 0xc620005c
    ctx->pc = 0x29970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299710:
    // 0x299710: 0xc7a10020
    ctx->pc = 0x299710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299714: 0x46010000
    ctx->pc = 0x299714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299718: 0xe620005c
    ctx->pc = 0x299718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_29971c:
    // 0x29971c: 0xc7a10020
    ctx->pc = 0x29971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299720:
    // 0x299720: 0x44800000
    ctx->pc = 0x299720u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x299724: 0x46000836
    ctx->pc = 0x299724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299728: 0x0
    ctx->pc = 0x299728u;
    // NOP
    // 0x29972c: 0x450100a0
    ctx->pc = 0x29972Cu;
    {
        const bool branch_taken_0x29972c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299730u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29972c) {
            ctx->pc = 0x2999B0u;
            goto label_2999b0;
        }
    }
    ctx->pc = 0x299734u;
    // 0x299734: 0x8e4204fc
    ctx->pc = 0x299734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 1276)));
    // 0x299738: 0x8fa30024
    ctx->pc = 0x299738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x29973c: 0x431025
    ctx->pc = 0x29973cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299740: 0x12c0000d
    ctx->pc = 0x299740u;
    {
        const bool branch_taken_0x299740 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x299744u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 1276), GPR_U32(ctx, 2));
        if (branch_taken_0x299740) {
            ctx->pc = 0x299778u;
            goto label_299778;
        }
    }
    ctx->pc = 0x299748u;
    // 0x299748: 0xc6c00000
    ctx->pc = 0x299748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29974c: 0xc6410500
    ctx->pc = 0x29974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299750: 0x46010000
    ctx->pc = 0x299750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299754: 0xe6400500
    ctx->pc = 0x299754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1280), bits); }
    // 0x299758: 0xc6c00004
    ctx->pc = 0x299758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29975c: 0xc6410504
    ctx->pc = 0x29975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299760: 0x46010000
    ctx->pc = 0x299760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299764: 0xe6400504
    ctx->pc = 0x299764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1284), bits); }
    // 0x299768: 0xc6c00008
    ctx->pc = 0x299768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29976c: 0xc6410508
    ctx->pc = 0x29976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299770: 0x46010000
    ctx->pc = 0x299770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299774: 0xe6400508
    ctx->pc = 0x299774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1288), bits); }
label_299778:
    // 0x299778: 0x3c020031
    ctx->pc = 0x299778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29977c: 0xc440ffa4
    ctx->pc = 0x29977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299780: 0xe6400520
    ctx->pc = 0x299780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1312), bits); }
    // 0x299784: 0x26420050
    ctx->pc = 0x299784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 80));
    // 0x299788: 0x55a80a
    ctx->pc = 0x299788u;
    if (GPR_U32(ctx, 21) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 2));
    // 0x29978c: 0xc64004f4
    ctx->pc = 0x29978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299790: 0xc7a10020
    ctx->pc = 0x299790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299794: 0x46010001
    ctx->pc = 0x299794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299798: 0x44800800
    ctx->pc = 0x299798u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x29979c: 0x46010036
    ctx->pc = 0x29979cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2997a0: 0x0
    ctx->pc = 0x2997a0u;
    // NOP
    // 0x2997a4: 0x45000013
    ctx->pc = 0x2997A4u;
    {
        const bool branch_taken_0x2997a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2997A8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1268), bits); }
        if (branch_taken_0x2997a4) {
            ctx->pc = 0x2997F4u;
            goto label_2997f4;
        }
    }
    ctx->pc = 0x2997ACu;
    // 0x2997ac: 0xc0a5e08
    ctx->pc = 0x2997ACu;
    SET_GPR_U32(ctx, 31, 0x2997B4u);
    ctx->pc = 0x2997B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterKill_0x297820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2997B4u; }
    }
    if (ctx->pc != 0x2997B4u) { return; }
    ctx->pc = 0x2997B4u;
    // 0x2997b4: 0x660001e
    ctx->pc = 0x2997B4u;
    {
        const bool branch_taken_0x2997b4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2997B8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
        if (branch_taken_0x2997b4) {
            ctx->pc = 0x299830u;
            goto label_299830;
        }
    }
    ctx->pc = 0x2997BCu;
    // 0x2997bc: 0x24a51bc0
    ctx->pc = 0x2997bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7104));
    // 0x2997c0: 0x24022b00
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2997c4: 0x2621018
    ctx->pc = 0x2997c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2997c8: 0x451821
    ctx->pc = 0x2997c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2997cc: 0x8c63000c
    ctx->pc = 0x2997ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2997d0: 0x2404001c
    ctx->pc = 0x2997d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2997d4: 0x643018
    ctx->pc = 0x2997d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2997d8: 0xc21821
    ctx->pc = 0x2997d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2997dc: 0x24a50b2c
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2860));
    // 0x2997e0: 0x651821
    ctx->pc = 0x2997e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2997e4: 0x8c620000
    ctx->pc = 0x2997e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2997e8: 0x24420001
    ctx->pc = 0x2997e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2997ec: 0x10000010
    ctx->pc = 0x2997ECu;
    {
        const bool branch_taken_0x2997ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2997F0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2997ec) {
            ctx->pc = 0x299830u;
            goto label_299830;
        }
    }
    ctx->pc = 0x2997F4u;
label_2997f4:
    // 0x2997f4: 0x8e420b64
    ctx->pc = 0x2997f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2916)));
    // 0x2997f8: 0x1040000f
    ctx->pc = 0x2997F8u;
    {
        const bool branch_taken_0x2997f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2997FCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x2997f8) {
            ctx->pc = 0x299838u;
            goto label_299838;
        }
    }
    ctx->pc = 0x299800u;
    // 0x299800: 0xc44004f4
    ctx->pc = 0x299800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299804: 0x46010001
    ctx->pc = 0x299804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x299808: 0xe44004f4
    ctx->pc = 0x299808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1268), bits); }
    // 0x29980c: 0x8e440b64
    ctx->pc = 0x29980cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 2916)));
    // 0x299810: 0xc48104f4
    ctx->pc = 0x299810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299814: 0x44800000
    ctx->pc = 0x299814u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x299818: 0x46000836
    ctx->pc = 0x299818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29981c: 0x0
    ctx->pc = 0x29981cu;
    // NOP
    // 0x299820: 0x45020006
    ctx->pc = 0x299820u;
    {
        const bool branch_taken_0x299820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299820) {
            ctx->pc = 0x299824u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1158)));
            ctx->pc = 0x29983Cu;
            goto label_29983c;
        }
    }
    ctx->pc = 0x299828u;
    // 0x299828: 0xc0a5e08
    ctx->pc = 0x299828u;
    SET_GPR_U32(ctx, 31, 0x299830u);
    ctx->pc = 0x297820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterKill_0x297820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299830u; }
    }
    if (ctx->pc != 0x299830u) { return; }
    ctx->pc = 0x299830u;
label_299830:
    // 0x299830: 0x1000005f
    ctx->pc = 0x299830u;
    {
        const bool branch_taken_0x299830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x299830) {
            ctx->pc = 0x2999B0u;
            goto label_2999b0;
        }
    }
    ctx->pc = 0x299838u;
label_299838:
    // 0x299838: 0x82420486
    ctx->pc = 0x299838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1158)));
label_29983c:
    // 0x29983c: 0x1840002d
    ctx->pc = 0x29983Cu;
    {
        const bool branch_taken_0x29983c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x299840u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x29983c) {
            ctx->pc = 0x2998F4u;
            goto label_2998f4;
        }
    }
    ctx->pc = 0x299844u;
    // 0x299844: 0x44800800
    ctx->pc = 0x299844u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x299848: 0x8e500b60
    ctx->pc = 0x299848u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 2912)));
    // 0x29984c: 0x1200000a
    ctx->pc = 0x29984Cu;
    {
        const bool branch_taken_0x29984c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x29984c) {
            ctx->pc = 0x299878u;
            goto label_299878;
        }
    }
    ctx->pc = 0x299854u;
    // 0x299854: 0x3c013f80
    ctx->pc = 0x299854u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x299858: 0x44810000
    ctx->pc = 0x299858u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29985c: 0x8e020008
    ctx->pc = 0x29985cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_299860:
    // 0x299860: 0x2c420002
    ctx->pc = 0x299860u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x299864: 0x50400001
    ctx->pc = 0x299864u;
    {
        const bool branch_taken_0x299864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x299864) {
            ctx->pc = 0x299868u;
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
            ctx->pc = 0x29986Cu;
            goto label_29986c;
        }
    }
    ctx->pc = 0x29986Cu;
label_29986c:
    // 0x29986c: 0x8e100b60
    ctx->pc = 0x29986cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x299870: 0x5600fffb
    ctx->pc = 0x299870u;
    {
        const bool branch_taken_0x299870 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x299870) {
            ctx->pc = 0x299874u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x299860u;
            goto label_299860;
        }
    }
    ctx->pc = 0x299878u;
label_299878:
    // 0x299878: 0x44800000
    ctx->pc = 0x299878u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29987c: 0x46010034
    ctx->pc = 0x29987cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299880: 0x0
    ctx->pc = 0x299880u;
    // NOP
    // 0x299884: 0x4500001a
    ctx->pc = 0x299884u;
    {
        const bool branch_taken_0x299884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299888u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x299884) {
            ctx->pc = 0x2998F0u;
            goto label_2998f0;
        }
    }
    ctx->pc = 0x29988Cu;
    // 0x29988c: 0x0
    ctx->pc = 0x29988cu;
    // NOP
    // 0x299890: 0x0
    ctx->pc = 0x299890u;
    // NOP
    // 0x299894: 0x46010503
    ctx->pc = 0x299894u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x299898: 0x3c013f00
    ctx->pc = 0x299898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29989c: 0x44810000
    ctx->pc = 0x29989cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2998a0: 0x8e500b60
    ctx->pc = 0x2998a0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 2912)));
    // 0x2998a4: 0x12000012
    ctx->pc = 0x2998A4u;
    {
        const bool branch_taken_0x2998a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2998A8u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2998a4) {
            ctx->pc = 0x2998F0u;
            goto label_2998f0;
        }
    }
    ctx->pc = 0x2998ACu;
    // 0x2998ac: 0x4480a800
    ctx->pc = 0x2998acu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x2998b0: 0x8e020008
    ctx->pc = 0x2998b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2998b4: 0x0
    ctx->pc = 0x2998b4u;
    // NOP
label_2998b8:
    // 0x2998b8: 0x2c420002
    ctx->pc = 0x2998b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2998bc: 0x5440000a
    ctx->pc = 0x2998BCu;
    {
        const bool branch_taken_0x2998bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2998bc) {
            ctx->pc = 0x2998C0u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
            ctx->pc = 0x2998E8u;
            goto label_2998e8;
        }
    }
    ctx->pc = 0x2998C4u;
    // 0x2998c4: 0xc60004f4
    ctx->pc = 0x2998c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2998c8: 0x46140001
    ctx->pc = 0x2998c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2998cc: 0x46150036
    ctx->pc = 0x2998ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2998d0: 0x0
    ctx->pc = 0x2998d0u;
    // NOP
    // 0x2998d4: 0x45000003
    ctx->pc = 0x2998D4u;
    {
        const bool branch_taken_0x2998d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2998D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1268), bits); }
        if (branch_taken_0x2998d4) {
            ctx->pc = 0x2998E4u;
            goto label_2998e4;
        }
    }
    ctx->pc = 0x2998DCu;
    // 0x2998dc: 0xc0a5e08
    ctx->pc = 0x2998DCu;
    SET_GPR_U32(ctx, 31, 0x2998E4u);
    ctx->pc = 0x2998E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterKill_0x297820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2998E4u; }
    }
    if (ctx->pc != 0x2998E4u) { return; }
    ctx->pc = 0x2998E4u;
label_2998e4:
    // 0x2998e4: 0x8e100b60
    ctx->pc = 0x2998e4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_2998e8:
    // 0x2998e8: 0x5600fff3
    ctx->pc = 0x2998E8u;
    {
        const bool branch_taken_0x2998e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2998e8) {
            ctx->pc = 0x2998ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2998B8u;
            goto label_2998b8;
        }
    }
    ctx->pc = 0x2998F0u;
label_2998f0:
    // 0x2998f0: 0x8fa30024
    ctx->pc = 0x2998f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2998f4:
    // 0x2998f4: 0x3c020100
    ctx->pc = 0x2998f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)256 << 16));
    // 0x2998f8: 0x621024
    ctx->pc = 0x2998f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2998fc: 0x54400029
    ctx->pc = 0x2998FCu;
    {
        const bool branch_taken_0x2998fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2998fc) {
            ctx->pc = 0x299900u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2908)));
            ctx->pc = 0x2999A4u;
            goto label_2999a4;
        }
    }
    ctx->pc = 0x299904u;
    // 0x299904: 0x3062000f
    ctx->pc = 0x299904u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
    // 0x299908: 0x1440000f
    ctx->pc = 0x299908u;
    {
        const bool branch_taken_0x299908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29990Cu;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        if (branch_taken_0x299908) {
            ctx->pc = 0x299948u;
            goto label_299948;
        }
    }
    ctx->pc = 0x299910u;
    // 0x299910: 0x24020002
    ctx->pc = 0x299910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x299914: 0x16e20005
    ctx->pc = 0x299914u;
    {
        const bool branch_taken_0x299914 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x299918u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x299914) {
            ctx->pc = 0x29992Cu;
            goto label_29992c;
        }
    }
    ctx->pc = 0x29991Cu;
    // 0x29991c: 0x852500f6
    ctx->pc = 0x29991cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 246)));
    // 0x299920: 0x4a10004
    ctx->pc = 0x299920u;
    {
        const bool branch_taken_0x299920 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x299924u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x299920) {
            ctx->pc = 0x299934u;
            goto label_299934;
        }
    }
    ctx->pc = 0x299928u;
    // 0x299928: 0x240202d
    ctx->pc = 0x299928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29992c:
    // 0x29992c: 0x852500f4
    ctx->pc = 0x29992cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 244)));
    // 0x299930: 0x2a0302d
    ctx->pc = 0x299930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_299934:
    // 0x299934: 0x382d
    ctx->pc = 0x299934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299938: 0xc0a50f4
    ctx->pc = 0x299938u;
    SET_GPR_U32(ctx, 31, 0x299940u);
    ctx->pc = 0x29993Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2943D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoSfx_0x2943d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299940u; }
    }
    if (ctx->pc != 0x299940u) { return; }
    ctx->pc = 0x299940u;
    // 0x299940: 0x10000009
    ctx->pc = 0x299940u;
    {
        const bool branch_taken_0x299940 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299944u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x299940) {
            ctx->pc = 0x299968u;
            goto label_299968;
        }
    }
    ctx->pc = 0x299948u;
label_299948:
    // 0x299948: 0x2a0202d
    ctx->pc = 0x299948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29994c: 0x26450010
    ctx->pc = 0x29994cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    // 0x299950: 0x8fa60024
    ctx->pc = 0x299950u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x299954: 0x382d
    ctx->pc = 0x299954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299958: 0x280402d
    ctx->pc = 0x299958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29995c: 0xc09f65e
    ctx->pc = 0x29995Cu;
    SET_GPR_U32(ctx, 31, 0x299964u);
    ctx->pc = 0x299960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27D978u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddEnemyHitCol_0x27d978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299964u; }
    }
    if (ctx->pc != 0x299964u) { return; }
    ctx->pc = 0x299964u;
    // 0x299964: 0x8fa20024
    ctx->pc = 0x299964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_299968:
    // 0x299968: 0x3c030010
    ctx->pc = 0x299968u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x29996c: 0x34630320
    ctx->pc = 0x29996cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 800));
    // 0x299970: 0x431024
    ctx->pc = 0x299970u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x299974: 0x10400003
    ctx->pc = 0x299974u;
    {
        const bool branch_taken_0x299974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x299978u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x299974) {
            ctx->pc = 0x299984u;
            goto label_299984;
        }
    }
    ctx->pc = 0x29997Cu;
    // 0x29997c: 0x10000008
    ctx->pc = 0x29997Cu;
    {
        const bool branch_taken_0x29997c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x299980u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 2884), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x29997c) {
            ctx->pc = 0x2999A0u;
            goto label_2999a0;
        }
    }
    ctx->pc = 0x299984u;
label_299984:
    // 0x299984: 0x86430b40
    ctx->pc = 0x299984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2880)));
    // 0x299988: 0x4600005
    ctx->pc = 0x299988u;
    {
        const bool branch_taken_0x299988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29998Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
        if (branch_taken_0x299988) {
            ctx->pc = 0x2999A0u;
            goto label_2999a0;
        }
    }
    ctx->pc = 0x299990u;
    // 0x299990: 0x622018
    ctx->pc = 0x299990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x299994: 0x921021
    ctx->pc = 0x299994u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x299998: 0x24030002
    ctx->pc = 0x299998u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x29999c: 0xac430594
    ctx->pc = 0x29999cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1428), GPR_U32(ctx, 3));
label_2999a0:
    // 0x2999a0: 0x8e420b5c
    ctx->pc = 0x2999a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 2908)));
label_2999a4:
    // 0x2999a4: 0x54400001
    ctx->pc = 0x2999A4u;
    {
        const bool branch_taken_0x2999a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2999a4) {
            ctx->pc = 0x2999A8u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 2908), GPR_U32(ctx, 0));
            ctx->pc = 0x2999ACu;
            goto label_2999ac;
        }
    }
    ctx->pc = 0x2999ACu;
label_2999ac:
    // 0x2999ac: 0x102d
    ctx->pc = 0x2999acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2999b0:
    // 0x2999b0: 0xdfbf00b0
    ctx->pc = 0x2999b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2999b4: 0xdfb700a0
    ctx->pc = 0x2999b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2999b8: 0xdfb60090
    ctx->pc = 0x2999b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2999bc: 0xdfb50080
    ctx->pc = 0x2999bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2999c0: 0xdfb40070
    ctx->pc = 0x2999c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2999c4: 0xdfb30060
    ctx->pc = 0x2999c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2999c8: 0xdfb20050
    ctx->pc = 0x2999c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2999cc: 0xdfb10040
    ctx->pc = 0x2999ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2999d0: 0xdfb00030
    ctx->pc = 0x2999d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2999d4: 0xc7b500c8
    ctx->pc = 0x2999d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2999d8: 0xc7b400c0
    ctx->pc = 0x2999d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2999dc: 0x3e00008
    ctx->pc = 0x2999DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2999E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2992C4u: goto label_2992c4;
            case 0x2992CCu: goto label_2992cc;
            case 0x29935Cu: goto label_29935c;
            case 0x299360u: goto label_299360;
            case 0x2993ACu: goto label_2993ac;
            case 0x2993D8u: goto label_2993d8;
            case 0x29942Cu: goto label_29942c;
            case 0x29947Cu: goto label_29947c;
            case 0x2994A4u: goto label_2994a4;
            case 0x2994CCu: goto label_2994cc;
            case 0x299534u: goto label_299534;
            case 0x2995A0u: goto label_2995a0;
            case 0x2995BCu: goto label_2995bc;
            case 0x2995C8u: goto label_2995c8;
            case 0x299618u: goto label_299618;
            case 0x299678u: goto label_299678;
            case 0x2996D0u: goto label_2996d0;
            case 0x2996F4u: goto label_2996f4;
            case 0x2996F8u: goto label_2996f8;
            case 0x299710u: goto label_299710;
            case 0x29971Cu: goto label_29971c;
            case 0x299720u: goto label_299720;
            case 0x299778u: goto label_299778;
            case 0x2997F4u: goto label_2997f4;
            case 0x299830u: goto label_299830;
            case 0x299838u: goto label_299838;
            case 0x29983Cu: goto label_29983c;
            case 0x299860u: goto label_299860;
            case 0x29986Cu: goto label_29986c;
            case 0x299878u: goto label_299878;
            case 0x2998B8u: goto label_2998b8;
            case 0x2998E4u: goto label_2998e4;
            case 0x2998E8u: goto label_2998e8;
            case 0x2998F0u: goto label_2998f0;
            case 0x2998F4u: goto label_2998f4;
            case 0x29992Cu: goto label_29992c;
            case 0x299934u: goto label_299934;
            case 0x299948u: goto label_299948;
            case 0x299968u: goto label_299968;
            case 0x299984u: goto label_299984;
            case 0x2999A0u: goto label_2999a0;
            case 0x2999A4u: goto label_2999a4;
            case 0x2999ACu: goto label_2999ac;
            case 0x2999B0u: goto label_2999b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2999E4u;
}
