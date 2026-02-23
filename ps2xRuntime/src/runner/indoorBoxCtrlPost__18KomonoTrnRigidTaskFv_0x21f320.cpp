#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: indoorBoxCtrlPost__18KomonoTrnRigidTaskFv
// Address: 0x21f320 - 0x21f668
void indoorBoxCtrlPost__18KomonoTrnRigidTaskFv_0x21f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("indoorBoxCtrlPost__18KomonoTrnRigidTaskFv");


    ctx->pc = 0x21f320u;

    // 0x21f320: 0x27bdff60
    ctx->pc = 0x21f320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21f324: 0x7fbf0060
    ctx->pc = 0x21f324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x21f328: 0x7fb40050
    ctx->pc = 0x21f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21f32c: 0x7fb30040
    ctx->pc = 0x21f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21f330: 0x7fb20030
    ctx->pc = 0x21f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21f334: 0x7fb10020
    ctx->pc = 0x21f334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21f338: 0x7fb00010
    ctx->pc = 0x21f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21f33c: 0xe7b60008
    ctx->pc = 0x21f33cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21f340: 0xe7b50004
    ctx->pc = 0x21f340u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21f344: 0xe7b40000
    ctx->pc = 0x21f344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21f348: 0xc4941450
    ctx->pc = 0x21f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21f34c: 0xc4951454
    ctx->pc = 0x21f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21f350: 0xc4961458
    ctx->pc = 0x21f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21f354: 0x70808628
    ctx->pc = 0x21f354u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21f358: 0x2412ffff
    ctx->pc = 0x21f358u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21f35c: 0x70008e28
    ctx->pc = 0x21f35cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f360: 0x7200a628
    ctx->pc = 0x21f360u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_21f364:
    // 0x21f364: 0x8e84145c
    ctx->pc = 0x21f364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 5212)));
    // 0x21f368: 0x50800013
    ctx->pc = 0x21F368u;
    {
        const bool branch_taken_0x21f368 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f368) {
            ctx->pc = 0x21F36Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x21F3B8u;
            goto label_21f3b8;
        }
    }
    ctx->pc = 0x21F370u;
    // 0x21f370: 0xc086e00
    ctx->pc = 0x21F370u;
    SET_GPR_U32(ctx, 31, 0x21F378u);
    ctx->pc = 0x21B800u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkColli__25TrnKomonoTumiageColliTaskFv_0x21b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F378u; }
        else if (ctx->pc != 0x21F378u) { ctx->pc = 0x21F378u; }
    }
    if (ctx->pc != 0x21F378u) { return; }
    ctx->pc = 0x21F378u;
    // 0x21f378: 0x1040000e
    ctx->pc = 0x21F378u;
    {
        const bool branch_taken_0x21f378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f378) {
            ctx->pc = 0x21F3B4u;
            goto label_21f3b4;
        }
    }
    ctx->pc = 0x21F380u;
    // 0x21f380: 0x111080
    ctx->pc = 0x21f380u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x21f384: 0x501021
    ctx->pc = 0x21f384u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21f388: 0x8c44145c
    ctx->pc = 0x21f388u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 5212)));
    // 0x21f38c: 0xc086e0c
    ctx->pc = 0x21F38Cu;
    SET_GPR_U32(ctx, 31, 0x21F394u);
    ctx->pc = 0x21F390u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        getHitPl__25TrnKomonoTumiageColliTaskFv_0x21b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F394u; }
        else if (ctx->pc != 0x21F394u) { ctx->pc = 0x21F394u; }
    }
    if (ctx->pc != 0x21F394u) { return; }
    ctx->pc = 0x21F394u;
    // 0x21f394: 0x70408e28
    ctx->pc = 0x21f394u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21f398: 0x72202628
    ctx->pc = 0x21f398u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21f39c: 0xc084d14
    ctx->pc = 0x21F39Cu;
    SET_GPR_U32(ctx, 31, 0x21F3A4u);
    ctx->pc = 0x21F3A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3A4u; }
        else if (ctx->pc != 0x21F3A4u) { ctx->pc = 0x21F3A4u; }
    }
    if (ctx->pc != 0x21F3A4u) { return; }
    ctx->pc = 0x21F3A4u;
    // 0x21f3a4: 0xc084d48
    ctx->pc = 0x21F3A4u;
    SET_GPR_U32(ctx, 31, 0x21F3ACu);
    ctx->pc = 0x21F3A8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x213520u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitNum__Fi_0x213520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3ACu; }
        else if (ctx->pc != 0x21F3ACu) { ctx->pc = 0x21F3ACu; }
    }
    if (ctx->pc != 0x21F3ACu) { return; }
    ctx->pc = 0x21F3ACu;
    // 0x21f3ac: 0x10000007
    ctx->pc = 0x21F3ACu;
    {
        const bool branch_taken_0x21f3ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F3B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21f3ac) {
            ctx->pc = 0x21F3CCu;
            goto label_21f3cc;
        }
    }
    ctx->pc = 0x21F3B4u;
label_21f3b4:
    // 0x21f3b4: 0x26310001
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_21f3b8:
    // 0x21f3b8: 0x2a230004
    ctx->pc = 0x21f3b8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 4));
    // 0x21f3bc: 0x1460ffe9
    ctx->pc = 0x21F3BCu;
    {
        const bool branch_taken_0x21f3bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F3C0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
        if (branch_taken_0x21f3bc) {
            ctx->pc = 0x21F364u;
            goto label_21f364;
        }
    }
    ctx->pc = 0x21F3C4u;
    // 0x21f3c4: 0x0
    ctx->pc = 0x21f3c4u;
    // NOP
    // 0x21f3c8: 0x2403ffff
    ctx->pc = 0x21f3c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21f3cc:
    // 0x21f3cc: 0x12430096
    ctx->pc = 0x21F3CCu;
    {
        const bool branch_taken_0x21f3cc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 3));
        if (branch_taken_0x21f3cc) {
            ctx->pc = 0x21F628u;
            goto label_21f628;
        }
    }
    ctx->pc = 0x21F3D4u;
    // 0x21f3d4: 0xe7b40070
    ctx->pc = 0x21f3d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x21f3d8: 0xe7b50074
    ctx->pc = 0x21f3d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21f3dc: 0xe7b60078
    ctx->pc = 0x21f3dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x21f3e0: 0x8e030050
    ctx->pc = 0x21f3e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21f3e4: 0x121080
    ctx->pc = 0x21f3e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x21f3e8: 0x501021
    ctx->pc = 0x21f3e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21f3ec: 0xafa3007c
    ctx->pc = 0x21f3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x21f3f0: 0x8e030054
    ctx->pc = 0x21f3f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x21f3f4: 0xafa30080
    ctx->pc = 0x21f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x21f3f8: 0x8e030058
    ctx->pc = 0x21f3f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x21f3fc: 0xafa30084
    ctx->pc = 0x21f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x21f400: 0x8c44145c
    ctx->pc = 0x21f400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 5212)));
    // 0x21f404: 0xc086e44
    ctx->pc = 0x21F404u;
    SET_GPR_U32(ctx, 31, 0x21F40Cu);
    ctx->pc = 0x21F408u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 5212));
    ctx->pc = 0x21B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        close__25TrnKomonoTumiageColliTaskFv_0x21b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F40Cu; }
        else if (ctx->pc != 0x21F40Cu) { ctx->pc = 0x21F40Cu; }
    }
    if (ctx->pc != 0x21F40Cu) { return; }
    ctx->pc = 0x21F40Cu;
    // 0x21f40c: 0xae200000
    ctx->pc = 0x21f40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x21f410: 0x3c010050
    ctx->pc = 0x21f410u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21f414: 0x8423e504
    ctx->pc = 0x21f414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x21f418: 0x2402000a
    ctx->pc = 0x21f418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f41c: 0x1462001a
    ctx->pc = 0x21F41Cu;
    {
        const bool branch_taken_0x21f41c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21f41c) {
            ctx->pc = 0x21F488u;
            goto label_21f488;
        }
    }
    ctx->pc = 0x21F424u;
    // 0x21f424: 0x8f838bcc
    ctx->pc = 0x21f424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x21f428: 0x24020002
    ctx->pc = 0x21f428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21f42c: 0x14620016
    ctx->pc = 0x21F42Cu;
    {
        const bool branch_taken_0x21f42c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21f42c) {
            ctx->pc = 0x21F488u;
            goto label_21f488;
        }
    }
    ctx->pc = 0x21F434u;
    // 0x21f434: 0x8f888ccc
    ctx->pc = 0x21f434u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x21f438: 0x11000003
    ctx->pc = 0x21F438u;
    {
        const bool branch_taken_0x21f438 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f438) {
            ctx->pc = 0x21F448u;
            goto label_21f448;
        }
    }
    ctx->pc = 0x21F440u;
    // 0x21f440: 0x8d080000
    ctx->pc = 0x21f440u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21f444: 0x0
    ctx->pc = 0x21f444u;
    // NOP
label_21f448:
    // 0x21f448: 0x8e020168
    ctx->pc = 0x21f448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21f44c: 0x2404289c
    ctx->pc = 0x21f44cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10396));
    // 0x21f450: 0x8c460010
    ctx->pc = 0x21f450u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21f454: 0x8cc70014
    ctx->pc = 0x21f454u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21f458: 0xc069040
    ctx->pc = 0x21F458u;
    SET_GPR_U32(ctx, 31, 0x21F460u);
    ctx->pc = 0x21F45Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F460u; }
        else if (ctx->pc != 0x21F460u) { ctx->pc = 0x21F460u; }
    }
    if (ctx->pc != 0x21F460u) { return; }
    ctx->pc = 0x21F460u;
    // 0x21f460: 0x10400017
    ctx->pc = 0x21F460u;
    {
        const bool branch_taken_0x21f460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f460) {
            ctx->pc = 0x21F4C0u;
            goto label_21f4c0;
        }
    }
    ctx->pc = 0x21F468u;
    // 0x21f468: 0x8e05016c
    ctx->pc = 0x21f468u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x21f46c: 0xc60c0030
    ctx->pc = 0x21f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f470: 0x70402628
    ctx->pc = 0x21f470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21f474: 0x27a60070
    ctx->pc = 0x21f474u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21f478: 0xc086ea0
    ctx->pc = 0x21F478u;
    SET_GPR_U32(ctx, 31, 0x21F480u);
    ctx->pc = 0x21F47Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__25KomonoTrnCrosetKowareTaskFi4ANPOfi_0x21ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F480u; }
        else if (ctx->pc != 0x21F480u) { ctx->pc = 0x21F480u; }
    }
    if (ctx->pc != 0x21F480u) { return; }
    ctx->pc = 0x21F480u;
    // 0x21f480: 0x1000000f
    ctx->pc = 0x21F480u;
    {
        const bool branch_taken_0x21f480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f480) {
            ctx->pc = 0x21F4C0u;
            goto label_21f4c0;
        }
    }
    ctx->pc = 0x21F488u;
label_21f488:
    // 0x21f488: 0x8e080168
    ctx->pc = 0x21f488u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x21f48c: 0x2404289c
    ctx->pc = 0x21f48cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10396));
    // 0x21f490: 0x8d060010
    ctx->pc = 0x21f490u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x21f494: 0x8cc70014
    ctx->pc = 0x21f494u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21f498: 0xc069040
    ctx->pc = 0x21F498u;
    SET_GPR_U32(ctx, 31, 0x21F4A0u);
    ctx->pc = 0x21F49Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4A0u; }
        else if (ctx->pc != 0x21F4A0u) { ctx->pc = 0x21F4A0u; }
    }
    if (ctx->pc != 0x21F4A0u) { return; }
    ctx->pc = 0x21F4A0u;
    // 0x21f4a0: 0x10400007
    ctx->pc = 0x21F4A0u;
    {
        const bool branch_taken_0x21f4a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21f4a0) {
            ctx->pc = 0x21F4C0u;
            goto label_21f4c0;
        }
    }
    ctx->pc = 0x21F4A8u;
    // 0x21f4a8: 0x8e05016c
    ctx->pc = 0x21f4a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x21f4ac: 0xc60c0030
    ctx->pc = 0x21f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21f4b0: 0x70402628
    ctx->pc = 0x21f4b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21f4b4: 0x27a60070
    ctx->pc = 0x21f4b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21f4b8: 0xc086ea0
    ctx->pc = 0x21F4B8u;
    SET_GPR_U32(ctx, 31, 0x21F4C0u);
    ctx->pc = 0x21F4BCu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21BA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__25KomonoTrnCrosetKowareTaskFi4ANPOfi_0x21ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4C0u; }
        else if (ctx->pc != 0x21F4C0u) { ctx->pc = 0x21F4C0u; }
    }
    if (ctx->pc != 0x21F4C0u) { return; }
    ctx->pc = 0x21F4C0u;
label_21f4c0:
    // 0x21f4c0: 0x3c020051
    ctx->pc = 0x21f4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21f4c4: 0x244434f0
    ctx->pc = 0x21f4c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x21f4c8: 0x3c02000d
    ctx->pc = 0x21f4c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)13 << 16));
    // 0x21f4cc: 0x34450012
    ctx->pc = 0x21f4ccu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 18));
    // 0x21f4d0: 0x70003628
    ctx->pc = 0x21f4d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f4d4: 0x70003e28
    ctx->pc = 0x21f4d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f4d8: 0xc086018
    ctx->pc = 0x21F4D8u;
    SET_GPR_U32(ctx, 31, 0x21F4E0u);
    ctx->pc = 0x21F4DCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4E0u; }
        else if (ctx->pc != 0x21F4E0u) { ctx->pc = 0x21F4E0u; }
    }
    if (ctx->pc != 0x21F4E0u) { return; }
    ctx->pc = 0x21F4E0u;
    // 0x21f4e0: 0x240200b4
    ctx->pc = 0x21f4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x21f4e4: 0xae020174
    ctx->pc = 0x21f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x21f4e8: 0xc069fb8
    ctx->pc = 0x21F4E8u;
    SET_GPR_U32(ctx, 31, 0x21F4F0u);
    ctx->pc = 0x21F4ECu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F4F0u; }
        else if (ctx->pc != 0x21F4F0u) { ctx->pc = 0x21F4F0u; }
    }
    if (ctx->pc != 0x21F4F0u) { return; }
    ctx->pc = 0x21F4F0u;
    // 0x21f4f0: 0x16400002
    ctx->pc = 0x21F4F0u;
    {
        const bool branch_taken_0x21f4f0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x21F4F4u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 255));
        if (branch_taken_0x21f4f0) {
            ctx->pc = 0x21F4FCu;
            goto label_21f4fc;
        }
    }
    ctx->pc = 0x21F4F8u;
    // 0x21f4f8: 0x24137000
    ctx->pc = 0x21f4f8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 28672));
label_21f4fc:
    // 0x21f4fc: 0x24020001
    ctx->pc = 0x21f4fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f500: 0x16420002
    ctx->pc = 0x21F500u;
    {
        const bool branch_taken_0x21f500 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x21F504u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x21f500) {
            ctx->pc = 0x21F50Cu;
            goto label_21f50c;
        }
    }
    ctx->pc = 0x21F508u;
    // 0x21f508: 0x24131000
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4096));
label_21f50c:
    // 0x21f50c: 0x16420002
    ctx->pc = 0x21F50Cu;
    {
        const bool branch_taken_0x21f50c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x21F510u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x21f50c) {
            ctx->pc = 0x21F518u;
            goto label_21f518;
        }
    }
    ctx->pc = 0x21F514u;
    // 0x21f514: 0x24136000
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 24576));
label_21f518:
    // 0x21f518: 0x16420002
    ctx->pc = 0x21F518u;
    {
        const bool branch_taken_0x21f518 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x21f518) {
            ctx->pc = 0x21F524u;
            goto label_21f524;
        }
    }
    ctx->pc = 0x21F520u;
    // 0x21f520: 0x70009e28
    ctx->pc = 0x21f520u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_21f524:
    // 0x21f524: 0xc069fb8
    ctx->pc = 0x21F524u;
    SET_GPR_U32(ctx, 31, 0x21F52Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F52Cu; }
        else if (ctx->pc != 0x21F52Cu) { ctx->pc = 0x21F52Cu; }
    }
    if (ctx->pc != 0x21F52Cu) { return; }
    ctx->pc = 0x21F52Cu;
    // 0x21f52c: 0x30420fff
    ctx->pc = 0x21f52cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x21f530: 0x2629821
    ctx->pc = 0x21f530u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x21f534: 0xc06c26d
    ctx->pc = 0x21F534u;
    SET_GPR_U32(ctx, 31, 0x21F53Cu);
    ctx->pc = 0x21F538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F53Cu; }
        else if (ctx->pc != 0x21F53Cu) { ctx->pc = 0x21F53Cu; }
    }
    if (ctx->pc != 0x21F53Cu) { return; }
    ctx->pc = 0x21F53Cu;
    // 0x21f53c: 0x3c023fc0
    ctx->pc = 0x21f53cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x21f540: 0x44820800
    ctx->pc = 0x21f540u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21f544: 0x72602628
    ctx->pc = 0x21f544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21f548: 0xc06c26d
    ctx->pc = 0x21F548u;
    SET_GPR_U32(ctx, 31, 0x21F550u);
    ctx->pc = 0x21F54Cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F550u; }
        else if (ctx->pc != 0x21F550u) { ctx->pc = 0x21F550u; }
    }
    if (ctx->pc != 0x21F550u) { return; }
    ctx->pc = 0x21F550u;
    // 0x21f550: 0x4600a002
    ctx->pc = 0x21f550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21f554: 0x72202628
    ctx->pc = 0x21f554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21f558: 0xc06c24e
    ctx->pc = 0x21F558u;
    SET_GPR_U32(ctx, 31, 0x21F560u);
    ctx->pc = 0x21F55Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F560u; }
        else if (ctx->pc != 0x21F560u) { ctx->pc = 0x21F560u; }
    }
    if (ctx->pc != 0x21F560u) { return; }
    ctx->pc = 0x21F560u;
    // 0x21f560: 0x3c023fc0
    ctx->pc = 0x21f560u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x21f564: 0x44820800
    ctx->pc = 0x21f564u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21f568: 0x72202628
    ctx->pc = 0x21f568u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21f56c: 0x46000802
    ctx->pc = 0x21f56cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21f570: 0x27b10094
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 148));
    // 0x21f574: 0xc06c26d
    ctx->pc = 0x21F574u;
    SET_GPR_U32(ctx, 31, 0x21F57Cu);
    ctx->pc = 0x21F578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x1B09B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09B4_0x1b09b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F57Cu; }
        else if (ctx->pc != 0x21F57Cu) { ctx->pc = 0x21F57Cu; }
    }
    if (ctx->pc != 0x21F57Cu) { return; }
    ctx->pc = 0x21F57Cu;
    // 0x21f57c: 0x3c023fc0
    ctx->pc = 0x21f57cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16320 << 16));
    // 0x21f580: 0x44820800
    ctx->pc = 0x21f580u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21f584: 0x72602628
    ctx->pc = 0x21f584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x21f588: 0xc06c24e
    ctx->pc = 0x21F588u;
    SET_GPR_U32(ctx, 31, 0x21F590u);
    ctx->pc = 0x21F58Cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0938u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0938_0x1b0938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F590u; }
        else if (ctx->pc != 0x21F590u) { ctx->pc = 0x21F590u; }
    }
    if (ctx->pc != 0x21F590u) { return; }
    ctx->pc = 0x21F590u;
    // 0x21f590: 0x4600a002
    ctx->pc = 0x21f590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21f594: 0x27b20098
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 152));
    // 0x21f598: 0xe6400000
    ctx->pc = 0x21f598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21f59c: 0x4bede37d
    ctx->pc = 0x21f59cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21f5a0: 0x4bedeb7d
    ctx->pc = 0x21f5a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21f5a4: 0x4bedf37d
    ctx->pc = 0x21f5a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21f5a8: 0xc06c20d
    ctx->pc = 0x21F5A8u;
    SET_GPR_U32(ctx, 31, 0x21F5B0u);
    ctx->pc = 0x21F5ACu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5B0u; }
        else if (ctx->pc != 0x21F5B0u) { ctx->pc = 0x21F5B0u; }
    }
    if (ctx->pc != 0x21F5B0u) { return; }
    ctx->pc = 0x21F5B0u;
    // 0x21f5b0: 0xc06c04e
    ctx->pc = 0x21F5B0u;
    SET_GPR_U32(ctx, 31, 0x21F5B8u);
    ctx->pc = 0x21F5B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 400));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5B8u; }
        else if (ctx->pc != 0x21F5B8u) { ctx->pc = 0x21F5B8u; }
    }
    if (ctx->pc != 0x21F5B8u) { return; }
    ctx->pc = 0x21F5B8u;
    // 0x21f5b8: 0x27a40090
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    // 0x21f5bc: 0xc06bf00
    ctx->pc = 0x21F5BCu;
    SET_GPR_U32(ctx, 31, 0x21F5C4u);
    ctx->pc = 0x21F5C0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F5C4u; }
        else if (ctx->pc != 0x21F5C4u) { ctx->pc = 0x21F5C4u; }
    }
    if (ctx->pc != 0x21F5C4u) { return; }
    ctx->pc = 0x21F5C4u;
    // 0x21f5c4: 0x4bff6b7e
    ctx->pc = 0x21f5c4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21f5c8: 0x4bfe6b7e
    ctx->pc = 0x21f5c8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21f5cc: 0x4bfd6b7e
    ctx->pc = 0x21f5ccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21f5d0: 0x4bfc6b7e
    ctx->pc = 0x21f5d0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21f5d4: 0x70002e28
    ctx->pc = 0x21f5d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f5d8: 0x1000000f
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21F5DCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F618u;
            goto label_21f618;
        }
    }
    ctx->pc = 0x21F5E0u;
label_21f5e0:
    // 0x21f5e0: 0xc48101e8
    ctx->pc = 0x21f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f5e4: 0xc7a00090
    ctx->pc = 0x21f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f5e8: 0x24a50001
    ctx->pc = 0x21f5e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x21f5ec: 0x46000800
    ctx->pc = 0x21f5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f5f0: 0xe48001e8
    ctx->pc = 0x21f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
    // 0x21f5f4: 0xc48101ec
    ctx->pc = 0x21f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f5f8: 0xc6200000
    ctx->pc = 0x21f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f5fc: 0x46000800
    ctx->pc = 0x21f5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f600: 0xe48001ec
    ctx->pc = 0x21f600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
    // 0x21f604: 0xc48101f0
    ctx->pc = 0x21f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f608: 0xc6400000
    ctx->pc = 0x21f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f60c: 0x46000800
    ctx->pc = 0x21f60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f610: 0xe48001f0
    ctx->pc = 0x21f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x21f614: 0x24840128
    ctx->pc = 0x21f614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 296));
label_21f618:
    // 0x21f618: 0x8e030178
    ctx->pc = 0x21f618u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x21f61c: 0xa3182a
    ctx->pc = 0x21f61cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x21f620: 0x1460ffef
    ctx->pc = 0x21F620u;
    {
        const bool branch_taken_0x21f620 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21f620) {
            ctx->pc = 0x21F5E0u;
            goto label_21f5e0;
        }
    }
    ctx->pc = 0x21F628u;
label_21f628:
    // 0x21f628: 0x8e030174
    ctx->pc = 0x21f628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x21f62c: 0x18600003
    ctx->pc = 0x21F62Cu;
    {
        const bool branch_taken_0x21f62c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x21f62c) {
            ctx->pc = 0x21F63Cu;
            goto label_21f63c;
        }
    }
    ctx->pc = 0x21F634u;
    // 0x21f634: 0x2463ffff
    ctx->pc = 0x21f634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21f638: 0xae030174
    ctx->pc = 0x21f638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
label_21f63c:
    // 0x21f63c: 0x7bbf0060
    ctx->pc = 0x21f63cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f640: 0x7bb40050
    ctx->pc = 0x21f640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f644: 0x7bb30040
    ctx->pc = 0x21f644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f648: 0x7bb20030
    ctx->pc = 0x21f648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f64c: 0x7bb10020
    ctx->pc = 0x21f64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f650: 0x7bb00010
    ctx->pc = 0x21f650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f654: 0xc7b60008
    ctx->pc = 0x21f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21f658: 0xc7b50004
    ctx->pc = 0x21f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21f65c: 0xc7b40000
    ctx->pc = 0x21f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21f660: 0x3e00008
    ctx->pc = 0x21F660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F664u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21F364u: goto label_21f364;
            case 0x21F3B4u: goto label_21f3b4;
            case 0x21F3B8u: goto label_21f3b8;
            case 0x21F3CCu: goto label_21f3cc;
            case 0x21F448u: goto label_21f448;
            case 0x21F488u: goto label_21f488;
            case 0x21F4C0u: goto label_21f4c0;
            case 0x21F4FCu: goto label_21f4fc;
            case 0x21F50Cu: goto label_21f50c;
            case 0x21F518u: goto label_21f518;
            case 0x21F524u: goto label_21f524;
            case 0x21F5E0u: goto label_21f5e0;
            case 0x21F618u: goto label_21f618;
            case 0x21F628u: goto label_21f628;
            case 0x21F63Cu: goto label_21f63c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21F668u;
}
