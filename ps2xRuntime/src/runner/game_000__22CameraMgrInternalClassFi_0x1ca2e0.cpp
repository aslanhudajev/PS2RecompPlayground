#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: game_000__22CameraMgrInternalClassFi
// Address: 0x1ca2e0 - 0x1ca810
void game_000__22CameraMgrInternalClassFi_0x1ca2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("game_000__22CameraMgrInternalClassFi");


    ctx->pc = 0x1ca2e0u;

    // 0x1ca2e0: 0x27bdff40
    ctx->pc = 0x1ca2e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ca2e4: 0x7fbf00a0
    ctx->pc = 0x1ca2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1ca2e8: 0x7fb60090
    ctx->pc = 0x1ca2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1ca2ec: 0x7fb50080
    ctx->pc = 0x1ca2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1ca2f0: 0x7fb40070
    ctx->pc = 0x1ca2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1ca2f4: 0x7fb30060
    ctx->pc = 0x1ca2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1ca2f8: 0x7fb20050
    ctx->pc = 0x1ca2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1ca2fc: 0x7fb10040
    ctx->pc = 0x1ca2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1ca300: 0x7fb00030
    ctx->pc = 0x1ca300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ca304: 0x51040
    ctx->pc = 0x1ca304u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ca308: 0x451021
    ctx->pc = 0x1ca308u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca30c: 0xe7bc0020
    ctx->pc = 0x1ca30cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ca310: 0x21080
    ctx->pc = 0x1ca310u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca314: 0xe7bb001c
    ctx->pc = 0x1ca314u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ca318: 0x451021
    ctx->pc = 0x1ca318u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca31c: 0xe7ba0018
    ctx->pc = 0x1ca31cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ca320: 0x23900
    ctx->pc = 0x1ca320u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ca324: 0xe7b90014
    ctx->pc = 0x1ca324u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ca328: 0x510c0
    ctx->pc = 0x1ca328u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ca32c: 0xe7b80010
    ctx->pc = 0x1ca32cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ca330: 0x451021
    ctx->pc = 0x1ca330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ca334: 0xe7b7000c
    ctx->pc = 0x1ca334u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ca338: 0x21980
    ctx->pc = 0x1ca338u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ca33c: 0xe7b60008
    ctx->pc = 0x1ca33cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ca340: 0x3c020030
    ctx->pc = 0x1ca340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ca344: 0xe7b50004
    ctx->pc = 0x1ca344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ca348: 0x24425c30
    ctx->pc = 0x1ca348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23600));
    // 0x1ca34c: 0xe7b40000
    ctx->pc = 0x1ca34cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ca350: 0x439021
    ctx->pc = 0x1ca350u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca354: 0x83838bb4
    ctx->pc = 0x1ca354u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x1ca358: 0x8f868c48
    ctx->pc = 0x1ca358u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ca35c: 0x70808628
    ctx->pc = 0x1ca35cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ca360: 0x70a0b628
    ctx->pc = 0x1ca360u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ca364: 0x31100
    ctx->pc = 0x1ca364u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ca368: 0x431023
    ctx->pc = 0x1ca368u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca36c: 0x21080
    ctx->pc = 0x1ca36cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca370: 0xc73021
    ctx->pc = 0x1ca370u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ca374: 0x2421021
    ctx->pc = 0x1ca374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ca378: 0x24d10010
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 6), 16));
    // 0x1ca37c: 0xc072a04
    ctx->pc = 0x1CA37Cu;
    SET_GPR_U32(ctx, 31, 0x1CA384u);
    ctx->pc = 0x1CA380u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 396));
    ctx->pc = 0x1CA810u;
    {
        const uint32_t __entryPc = ctx->pc;
        game_calcGameCam__22CameraMgrInternalClassFi_0x1ca810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA384u; }
        else if (ctx->pc != 0x1CA384u) { ctx->pc = 0x1CA384u; }
    }
    if (ctx->pc != 0x1CA384u) { return; }
    ctx->pc = 0x1CA384u;
    // 0x1ca384: 0x72002628
    ctx->pc = 0x1ca384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ca388: 0xc072a94
    ctx->pc = 0x1CA388u;
    SET_GPR_U32(ctx, 31, 0x1CA390u);
    ctx->pc = 0x1CA38Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CAA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        game_calcGameInt__22CameraMgrInternalClassFi_0x1caa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA390u; }
        else if (ctx->pc != 0x1CA390u) { ctx->pc = 0x1CA390u; }
    }
    if (ctx->pc != 0x1CA390u) { return; }
    ctx->pc = 0x1CA390u;
    // 0x1ca390: 0x822200c3
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 195)));
    // 0x1ca394: 0x24040001
    ctx->pc = 0x1ca394u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca398: 0x14440016
    ctx->pc = 0x1CA398u;
    {
        const bool branch_taken_0x1ca398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ca398) {
            ctx->pc = 0x1CA3F4u;
            goto label_1ca3f4;
        }
    }
    ctx->pc = 0x1CA3A0u;
    // 0x1ca3a0: 0x86630008
    ctx->pc = 0x1ca3a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ca3a4: 0x2402ffff
    ctx->pc = 0x1ca3a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca3a8: 0x14620012
    ctx->pc = 0x1CA3A8u;
    {
        const bool branch_taken_0x1ca3a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1ca3a8) {
            ctx->pc = 0x1CA3F4u;
            goto label_1ca3f4;
        }
    }
    ctx->pc = 0x1CA3B0u;
    // 0x1ca3b0: 0xc62c0080
    ctx->pc = 0x1ca3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca3b4: 0xc66d000c
    ctx->pc = 0x1ca3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca3b8: 0xc0725bc
    ctx->pc = 0x1CA3B8u;
    SET_GPR_U32(ctx, 31, 0x1CA3C0u);
    ctx->pc = 0x1CA3BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3C0u; }
        else if (ctx->pc != 0x1CA3C0u) { ctx->pc = 0x1CA3C0u; }
    }
    if (ctx->pc != 0x1CA3C0u) { return; }
    ctx->pc = 0x1CA3C0u;
    // 0x1ca3c0: 0xe6200080
    ctx->pc = 0x1ca3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x1ca3c4: 0xc62c0084
    ctx->pc = 0x1ca3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca3c8: 0xc66d0010
    ctx->pc = 0x1ca3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca3cc: 0x24040001
    ctx->pc = 0x1ca3ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca3d0: 0xc0725bc
    ctx->pc = 0x1CA3D0u;
    SET_GPR_U32(ctx, 31, 0x1CA3D8u);
    ctx->pc = 0x1CA3D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3D8u; }
        else if (ctx->pc != 0x1CA3D8u) { ctx->pc = 0x1CA3D8u; }
    }
    if (ctx->pc != 0x1CA3D8u) { return; }
    ctx->pc = 0x1CA3D8u;
    // 0x1ca3d8: 0xe6200084
    ctx->pc = 0x1ca3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    // 0x1ca3dc: 0xc66d0014
    ctx->pc = 0x1ca3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca3e0: 0xc62c0088
    ctx->pc = 0x1ca3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca3e4: 0x24040001
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca3e8: 0xc0725bc
    ctx->pc = 0x1CA3E8u;
    SET_GPR_U32(ctx, 31, 0x1CA3F0u);
    ctx->pc = 0x1CA3ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3F0u; }
        else if (ctx->pc != 0x1CA3F0u) { ctx->pc = 0x1CA3F0u; }
    }
    if (ctx->pc != 0x1CA3F0u) { return; }
    ctx->pc = 0x1CA3F0u;
    // 0x1ca3f0: 0xe6200088
    ctx->pc = 0x1ca3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_1ca3f4:
    // 0x1ca3f4: 0xc6250080
    ctx->pc = 0x1ca3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ca3f8: 0xc644002c
    ctx->pc = 0x1ca3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ca3fc: 0xc6230084
    ctx->pc = 0x1ca3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca400: 0xc6420030
    ctx->pc = 0x1ca400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca404: 0xc6210088
    ctx->pc = 0x1ca404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca408: 0xc6400034
    ctx->pc = 0x1ca408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca40c: 0x46042901
    ctx->pc = 0x1ca40cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x1ca410: 0x46021881
    ctx->pc = 0x1ca410u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1ca414: 0x46042102
    ctx->pc = 0x1ca414u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1ca418: 0x46021082
    ctx->pc = 0x1ca418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ca41c: 0x46000801
    ctx->pc = 0x1ca41cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca420: 0x46022018
    ctx->pc = 0x1ca420u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1ca424: 0xc06c2a8
    ctx->pc = 0x1CA424u;
    SET_GPR_U32(ctx, 31, 0x1CA42Cu);
    ctx->pc = 0x1CA428u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA42Cu; }
        else if (ctx->pc != 0x1CA42Cu) { ctx->pc = 0x1CA42Cu; }
    }
    if (ctx->pc != 0x1CA42Cu) { return; }
    ctx->pc = 0x1CA42Cu;
    // 0x1ca42c: 0x3c023dcc
    ctx->pc = 0x1ca42cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1ca430: 0x3442cccd
    ctx->pc = 0x1ca430u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1ca434: 0x44820800
    ctx->pc = 0x1ca434u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1ca438: 0x0
    ctx->pc = 0x1ca438u;
    // NOP
    // 0x1ca43c: 0x46010036
    ctx->pc = 0x1ca43cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca440: 0x0
    ctx->pc = 0x1ca440u;
    // NOP
    // 0x1ca444: 0x45010099
    ctx->pc = 0x1CA444u;
    {
        const bool branch_taken_0x1ca444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca444) {
            ctx->pc = 0x1CA6ACu;
            goto label_1ca6ac;
        }
    }
    ctx->pc = 0x1CA44Cu;
    // 0x1ca44c: 0xc6230098
    ctx->pc = 0x1ca44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca450: 0xc6220080
    ctx->pc = 0x1ca450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca454: 0xc641002c
    ctx->pc = 0x1ca454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca458: 0x27a200b4
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 180));
    // 0x1ca45c: 0x27b300b8
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 184));
    // 0x1ca460: 0x44800000
    ctx->pc = 0x1ca460u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1ca464: 0x46021880
    ctx->pc = 0x1ca464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca468: 0x46011041
    ctx->pc = 0x1ca468u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ca46c: 0xe7a100b0
    ctx->pc = 0x1ca46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ca470: 0xc623009c
    ctx->pc = 0x1ca470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca474: 0xc6220084
    ctx->pc = 0x1ca474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca478: 0xc6410030
    ctx->pc = 0x1ca478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca47c: 0x46021880
    ctx->pc = 0x1ca47cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca480: 0x46011041
    ctx->pc = 0x1ca480u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ca484: 0xe4410000
    ctx->pc = 0x1ca484u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ca488: 0xc62300a0
    ctx->pc = 0x1ca488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca48c: 0xc6220088
    ctx->pc = 0x1ca48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca490: 0xc6410034
    ctx->pc = 0x1ca490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca494: 0x46021880
    ctx->pc = 0x1ca494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ca498: 0x46011041
    ctx->pc = 0x1ca498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1ca49c: 0xe6610000
    ctx->pc = 0x1ca49cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1ca4a0: 0xc6220098
    ctx->pc = 0x1ca4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca4a4: 0xc6280080
    ctx->pc = 0x1ca4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1ca4a8: 0xc621009c
    ctx->pc = 0x1ca4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca4ac: 0xc6290084
    ctx->pc = 0x1ca4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1ca4b0: 0xc7a600b0
    ctx->pc = 0x1ca4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ca4b4: 0xc4450000
    ctx->pc = 0x1ca4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ca4b8: 0xc62a0088
    ctx->pc = 0x1ca4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1ca4bc: 0x46081501
    ctx->pc = 0x1ca4bcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x1ca4c0: 0xc6640000
    ctx->pc = 0x1ca4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ca4c4: 0xc62700a0
    ctx->pc = 0x1ca4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1ca4c8: 0xc6430014
    ctx->pc = 0x1ca4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca4cc: 0xc6420018
    ctx->pc = 0x1ca4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca4d0: 0x46090d41
    ctx->pc = 0x1ca4d0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x1ca4d4: 0xc641001c
    ctx->pc = 0x1ca4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca4d8: 0x460a2641
    ctx->pc = 0x1ca4d8u;
    ctx->f[25] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x1ca4dc: 0x460a3d81
    ctx->pc = 0x1ca4dcu;
    ctx->f[22] = FPU_SUB_S(ctx->f[7], ctx->f[10]);
    // 0x1ca4e0: 0x460835c1
    ctx->pc = 0x1ca4e0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x1ca4e4: 0x460916c1
    ctx->pc = 0x1ca4e4u;
    ctx->f[27] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x1ca4e8: 0x4619a01a
    ctx->pc = 0x1ca4e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x1ca4ec: 0x4617b09d
    ctx->pc = 0x1ca4ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[23]));
    // 0x1ca4f0: 0x46081e81
    ctx->pc = 0x1ca4f0u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x1ca4f4: 0x46092e01
    ctx->pc = 0x1ca4f4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x1ca4f8: 0x46001036
    ctx->pc = 0x1ca4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca4fc: 0x0
    ctx->pc = 0x1ca4fcu;
    // NOP
    // 0x1ca500: 0x45010007
    ctx->pc = 0x1CA500u;
    {
        const bool branch_taken_0x1ca500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA504u;
        ctx->f[28] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
        if (branch_taken_0x1ca500) {
            ctx->pc = 0x1CA520u;
            goto label_1ca520;
        }
    }
    ctx->pc = 0x1CA508u;
    // 0x1ca508: 0x461ca01a
    ctx->pc = 0x1ca508u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x1ca50c: 0x461ab05d
    ctx->pc = 0x1ca50cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[26]));
    // 0x1ca510: 0x46000836
    ctx->pc = 0x1ca510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca514: 0x0
    ctx->pc = 0x1ca514u;
    // NOP
    // 0x1ca518: 0x4500000d
    ctx->pc = 0x1CA518u;
    {
        const bool branch_taken_0x1ca518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca518) {
            ctx->pc = 0x1CA550u;
            goto label_1ca550;
        }
    }
    ctx->pc = 0x1CA520u;
label_1ca520:
    // 0x1ca520: 0x44800800
    ctx->pc = 0x1ca520u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1ca524: 0x0
    ctx->pc = 0x1ca524u;
    // NOP
    // 0x1ca528: 0x46011034
    ctx->pc = 0x1ca528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca52c: 0x0
    ctx->pc = 0x1ca52cu;
    // NOP
    // 0x1ca530: 0x45020025
    ctx->pc = 0x1CA530u;
    {
        const bool branch_taken_0x1ca530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca530) {
            ctx->pc = 0x1CA534u;
            ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
            ctx->pc = 0x1CA5C8u;
            goto label_1ca5c8;
        }
    }
    ctx->pc = 0x1CA538u;
    // 0x1ca538: 0x461ca01a
    ctx->pc = 0x1ca538u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x1ca53c: 0x461ab01d
    ctx->pc = 0x1ca53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[26]));
    // 0x1ca540: 0x46010034
    ctx->pc = 0x1ca540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca544: 0x0
    ctx->pc = 0x1ca544u;
    // NOP
    // 0x1ca548: 0x4500001e
    ctx->pc = 0x1CA548u;
    {
        const bool branch_taken_0x1ca548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca548) {
            ctx->pc = 0x1CA5C4u;
            goto label_1ca5c4;
        }
    }
    ctx->pc = 0x1CA550u;
label_1ca550:
    // 0x1ca550: 0x44806800
    ctx->pc = 0x1ca550u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1ca554: 0x4600a306
    ctx->pc = 0x1ca554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ca558: 0x46006c06
    ctx->pc = 0x1ca558u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca55c: 0x4600b386
    ctx->pc = 0x1ca55cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ca560: 0x4600bbc6
    ctx->pc = 0x1ca560u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x1ca564: 0xc072578
    ctx->pc = 0x1CA564u;
    SET_GPR_U32(ctx, 31, 0x1CA56Cu);
    ctx->pc = 0x1CA568u;
    ctx->f[17] = FPU_MOV_S(ctx->f[25]);
    ctx->pc = 0x1C95E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        VecAng__Fffffff_0x1c95e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA56Cu; }
        else if (ctx->pc != 0x1CA56Cu) { ctx->pc = 0x1CA56Cu; }
    }
    if (ctx->pc != 0x1CA56Cu) { return; }
    ctx->pc = 0x1CA56Cu;
    // 0x1ca56c: 0x44806800
    ctx->pc = 0x1ca56cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x1ca570: 0x7040a628
    ctx->pc = 0x1ca570u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ca574: 0x4600a306
    ctx->pc = 0x1ca574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ca578: 0x46006c06
    ctx->pc = 0x1ca578u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x1ca57c: 0x4600b386
    ctx->pc = 0x1ca57cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ca580: 0x4600d3c6
    ctx->pc = 0x1ca580u;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x1ca584: 0xc072578
    ctx->pc = 0x1CA584u;
    SET_GPR_U32(ctx, 31, 0x1CA58Cu);
    ctx->pc = 0x1CA588u;
    ctx->f[17] = FPU_MOV_S(ctx->f[28]);
    ctx->pc = 0x1C95E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        VecAng__Fffffff_0x1c95e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA58Cu; }
        else if (ctx->pc != 0x1CA58Cu) { ctx->pc = 0x1CA58Cu; }
    }
    if (ctx->pc != 0x1CA58Cu) { return; }
    ctx->pc = 0x1CA58Cu;
    // 0x1ca58c: 0x282082a
    ctx->pc = 0x1ca58cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
    // 0x1ca590: 0x50200006
    ctx->pc = 0x1CA590u;
    {
        const bool branch_taken_0x1ca590 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ca590) {
            ctx->pc = 0x1CA594u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 2)));
            ctx->pc = 0x1CA5ACu;
            goto label_1ca5ac;
        }
    }
    ctx->pc = 0x1CA598u;
    // 0x1ca598: 0xc7a000b0
    ctx->pc = 0x1ca598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca59c: 0xe6200098
    ctx->pc = 0x1ca59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1ca5a0: 0xc6600000
    ctx->pc = 0x1ca5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca5a4: 0x10000007
    ctx->pc = 0x1CA5A4u;
    {
        const bool branch_taken_0x1ca5a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA5A8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        if (branch_taken_0x1ca5a4) {
            ctx->pc = 0x1CA5C4u;
            goto label_1ca5c4;
        }
    }
    ctx->pc = 0x1CA5ACu;
label_1ca5ac:
    // 0x1ca5ac: 0x14400005
    ctx->pc = 0x1CA5ACu;
    {
        const bool branch_taken_0x1ca5ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ca5ac) {
            ctx->pc = 0x1CA5C4u;
            goto label_1ca5c4;
        }
    }
    ctx->pc = 0x1CA5B4u;
    // 0x1ca5b4: 0xc6400014
    ctx->pc = 0x1ca5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca5b8: 0xe6200098
    ctx->pc = 0x1ca5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1ca5bc: 0xc640001c
    ctx->pc = 0x1ca5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca5c0: 0xe62000a0
    ctx->pc = 0x1ca5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_1ca5c4:
    // 0x1ca5c4: 0x4614a01a
    ctx->pc = 0x1ca5c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1ca5c8:
    // 0x1ca5c8: 0xc06c2a8
    ctx->pc = 0x1CA5C8u;
    SET_GPR_U32(ctx, 31, 0x1CA5D0u);
    ctx->pc = 0x1CA5CCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5D0u; }
        else if (ctx->pc != 0x1CA5D0u) { ctx->pc = 0x1CA5D0u; }
    }
    if (ctx->pc != 0x1CA5D0u) { return; }
    ctx->pc = 0x1CA5D0u;
    // 0x1ca5d0: 0x4600ab06
    ctx->pc = 0x1ca5d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ca5d4: 0xc069e68
    ctx->pc = 0x1CA5D4u;
    SET_GPR_U32(ctx, 31, 0x1CA5DCu);
    ctx->pc = 0x1CA5D8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5DCu; }
        else if (ctx->pc != 0x1CA5DCu) { ctx->pc = 0x1CA5DCu; }
    }
    if (ctx->pc != 0x1CA5DCu) { return; }
    ctx->pc = 0x1CA5DCu;
    // 0x1ca5dc: 0x4617b81a
    ctx->pc = 0x1ca5dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x1ca5e0: 0x29c3c
    ctx->pc = 0x1ca5e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca5e4: 0x4619cb1c
    ctx->pc = 0x1ca5e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[25], ctx->f[25]));
    // 0x1ca5e8: 0xc06c2a8
    ctx->pc = 0x1CA5E8u;
    SET_GPR_U32(ctx, 31, 0x1CA5F0u);
    ctx->pc = 0x1CA5ECu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5F0u; }
        else if (ctx->pc != 0x1CA5F0u) { ctx->pc = 0x1CA5F0u; }
    }
    if (ctx->pc != 0x1CA5F0u) { return; }
    ctx->pc = 0x1CA5F0u;
    // 0x1ca5f0: 0x4600c306
    ctx->pc = 0x1ca5f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1ca5f4: 0xc069e68
    ctx->pc = 0x1CA5F4u;
    SET_GPR_U32(ctx, 31, 0x1CA5FCu);
    ctx->pc = 0x1CA5F8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA5FCu; }
        else if (ctx->pc != 0x1CA5FCu) { ctx->pc = 0x1CA5FCu; }
    }
    if (ctx->pc != 0x1CA5FCu) { return; }
    ctx->pc = 0x1CA5FCu;
    // 0x1ca5fc: 0x461ad01a
    ctx->pc = 0x1ca5fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x1ca600: 0x2ac3c
    ctx->pc = 0x1ca600u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca604: 0x461ce31c
    ctx->pc = 0x1ca604u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[28], ctx->f[28]));
    // 0x1ca608: 0xc06c2a8
    ctx->pc = 0x1CA608u;
    SET_GPR_U32(ctx, 31, 0x1CA610u);
    ctx->pc = 0x1CA60Cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA610u; }
        else if (ctx->pc != 0x1CA610u) { ctx->pc = 0x1CA610u; }
    }
    if (ctx->pc != 0x1CA610u) { return; }
    ctx->pc = 0x1CA610u;
    // 0x1ca610: 0x4600db06
    ctx->pc = 0x1ca610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x1ca614: 0xc069e68
    ctx->pc = 0x1CA614u;
    SET_GPR_U32(ctx, 31, 0x1CA61Cu);
    ctx->pc = 0x1CA618u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A79A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan2_0x1a79a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA61Cu; }
        else if (ctx->pc != 0x1CA61Cu) { ctx->pc = 0x1CA61Cu; }
    }
    if (ctx->pc != 0x1CA61Cu) { return; }
    ctx->pc = 0x1CA61Cu;
    // 0x1ca61c: 0x21c3c
    ctx->pc = 0x1ca61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca620: 0x31c3f
    ctx->pc = 0x1ca620u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ca624: 0x75102a
    ctx->pc = 0x1ca624u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 21)));
    // 0x1ca628: 0x14400009
    ctx->pc = 0x1CA628u;
    {
        const bool branch_taken_0x1ca628 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA62Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ca628) {
            ctx->pc = 0x1CA650u;
            goto label_1ca650;
        }
    }
    ctx->pc = 0x1CA630u;
    // 0x1ca630: 0x263082a
    ctx->pc = 0x1ca630u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 3)));
    // 0x1ca634: 0x14200002
    ctx->pc = 0x1CA634u;
    {
        const bool branch_taken_0x1ca634 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA638u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 19)));
        if (branch_taken_0x1ca634) {
            ctx->pc = 0x1CA640u;
            goto label_1ca640;
        }
    }
    ctx->pc = 0x1CA63Cu;
    // 0x1ca63c: 0x7060a628
    ctx->pc = 0x1ca63cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1ca640:
    // 0x1ca640: 0x1440000a
    ctx->pc = 0x1CA640u;
    {
        const bool branch_taken_0x1ca640 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ca640) {
            ctx->pc = 0x1CA66Cu;
            goto label_1ca66c;
        }
    }
    ctx->pc = 0x1CA648u;
    // 0x1ca648: 0x10000008
    ctx->pc = 0x1CA648u;
    {
        const bool branch_taken_0x1ca648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA64Cu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ca648) {
            ctx->pc = 0x1CA66Cu;
            goto label_1ca66c;
        }
    }
    ctx->pc = 0x1CA650u;
label_1ca650:
    // 0x1ca650: 0x73102a
    ctx->pc = 0x1ca650u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x1ca654: 0x14400002
    ctx->pc = 0x1CA654u;
    {
        const bool branch_taken_0x1ca654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA658u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 21)));
        if (branch_taken_0x1ca654) {
            ctx->pc = 0x1CA660u;
            goto label_1ca660;
        }
    }
    ctx->pc = 0x1CA65Cu;
    // 0x1ca65c: 0x7060a628
    ctx->pc = 0x1ca65cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1ca660:
    // 0x1ca660: 0x14200002
    ctx->pc = 0x1CA660u;
    {
        const bool branch_taken_0x1ca660 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ca660) {
            ctx->pc = 0x1CA66Cu;
            goto label_1ca66c;
        }
    }
    ctx->pc = 0x1CA668u;
    // 0x1ca668: 0x72a0a628
    ctx->pc = 0x1ca668u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
label_1ca66c:
    // 0x1ca66c: 0xc6230098
    ctx->pc = 0x1ca66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca670: 0xc6220080
    ctx->pc = 0x1ca670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca674: 0xc62100a0
    ctx->pc = 0x1ca674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca678: 0xc6200088
    ctx->pc = 0x1ca678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca67c: 0x46021881
    ctx->pc = 0x1ca67cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1ca680: 0x46000801
    ctx->pc = 0x1ca680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca684: 0x4602101a
    ctx->pc = 0x1ca684u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ca688: 0xc06c2a8
    ctx->pc = 0x1CA688u;
    SET_GPR_U32(ctx, 31, 0x1CA690u);
    ctx->pc = 0x1CA68Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA690u; }
        else if (ctx->pc != 0x1CA690u) { ctx->pc = 0x1CA690u; }
    }
    if (ctx->pc != 0x1CA690u) { return; }
    ctx->pc = 0x1CA690u;
    // 0x1ca690: 0x72802628
    ctx->pc = 0x1ca690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ca694: 0xc06a030
    ctx->pc = 0x1CA694u;
    SET_GPR_U32(ctx, 31, 0x1CA69Cu);
    ctx->pc = 0x1CA698u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1A80C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTan_0x1a80c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA69Cu; }
        else if (ctx->pc != 0x1CA69Cu) { ctx->pc = 0x1CA69Cu; }
    }
    if (ctx->pc != 0x1CA69Cu) { return; }
    ctx->pc = 0x1CA69Cu;
    // 0x1ca69c: 0x4600a042
    ctx->pc = 0x1ca69cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ca6a0: 0xc6200084
    ctx->pc = 0x1ca6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca6a4: 0x46010000
    ctx->pc = 0x1ca6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca6a8: 0xe620009c
    ctx->pc = 0x1ca6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_1ca6ac:
    // 0x1ca6ac: 0x86490044
    ctx->pc = 0x1ca6acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ca6b0: 0x26240080
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    // 0x1ca6b4: 0x26450014
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 20));
    // 0x1ca6b8: 0x26260098
    ctx->pc = 0x1ca6b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 152));
    // 0x1ca6bc: 0x27a700b0
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ca6c0: 0xc072d84
    ctx->pc = 0x1CA6C0u;
    SET_GPR_U32(ctx, 31, 0x1CA6C8u);
    ctx->pc = 0x1CA6C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1CB610u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivCamAng3D__FP11tagNLpoint3P11tagNLpoint3P11tagNLpoint3P11tagNLpoint3ii_0x1cb610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6C8u; }
        else if (ctx->pc != 0x1CA6C8u) { ctx->pc = 0x1CA6C8u; }
    }
    if (ctx->pc != 0x1CA6C8u) { return; }
    ctx->pc = 0x1CA6C8u;
    // 0x1ca6c8: 0xc7a000b0
    ctx->pc = 0x1ca6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca6cc: 0x72002628
    ctx->pc = 0x1ca6ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ca6d0: 0x26250080
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 128));
    // 0x1ca6d4: 0xe6200098
    ctx->pc = 0x1ca6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x1ca6d8: 0xc7a000b4
    ctx->pc = 0x1ca6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca6dc: 0xe620009c
    ctx->pc = 0x1ca6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x1ca6e0: 0xc7a000b8
    ctx->pc = 0x1ca6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca6e4: 0xe62000a0
    ctx->pc = 0x1ca6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x1ca6e8: 0x8e270094
    ctx->pc = 0x1ca6e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1ca6ec: 0xc0727a0
    ctx->pc = 0x1CA6ECu;
    SET_GPR_U32(ctx, 31, 0x1CA6F4u);
    ctx->pc = 0x1CA6F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 152));
    ctx->pc = 0x1C9E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcLookAt__22CameraMgrInternalClassFP4ANPOP4ANPOi_0x1c9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA6F4u; }
        else if (ctx->pc != 0x1CA6F4u) { ctx->pc = 0x1CA6F4u; }
    }
    if (ctx->pc != 0x1CA6F4u) { return; }
    ctx->pc = 0x1CA6F4u;
    // 0x1ca6f4: 0xc6260088
    ctx->pc = 0x1ca6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1ca6f8: 0xc643001c
    ctx->pc = 0x1ca6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ca6fc: 0xc62000a0
    ctx->pc = 0x1ca6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca700: 0xc6270084
    ctx->pc = 0x1ca700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1ca704: 0xc6440018
    ctx->pc = 0x1ca704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ca708: 0xc621009c
    ctx->pc = 0x1ca708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca70c: 0xc6280080
    ctx->pc = 0x1ca70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1ca710: 0xc6450014
    ctx->pc = 0x1ca710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ca714: 0xc6220098
    ctx->pc = 0x1ca714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ca718: 0x46061b81
    ctx->pc = 0x1ca718u;
    ctx->f[14] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1ca71c: 0x46082b01
    ctx->pc = 0x1ca71cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x1ca720: 0x460813c1
    ctx->pc = 0x1ca720u;
    ctx->f[15] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x1ca724: 0x46072341
    ctx->pc = 0x1ca724u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x1ca728: 0x46070c01
    ctx->pc = 0x1ca728u;
    ctx->f[16] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x1ca72c: 0xc072594
    ctx->pc = 0x1CA72Cu;
    SET_GPR_U32(ctx, 31, 0x1CA734u);
    ctx->pc = 0x1CA730u;
    ctx->f[17] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    ctx->pc = 0x1C9650u;
    {
        const uint32_t __entryPc = ctx->pc;
        VecCos__Fffffff_0x1c9650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA734u; }
        else if (ctx->pc != 0x1CA734u) { ctx->pc = 0x1CA734u; }
    }
    if (ctx->pc != 0x1CA734u) { return; }
    ctx->pc = 0x1CA734u;
    // 0x1ca734: 0x3c023f7f
    ctx->pc = 0x1ca734u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16255 << 16));
    // 0x1ca738: 0x46000045
    ctx->pc = 0x1ca738u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x1ca73c: 0x3442ff58
    ctx->pc = 0x1ca73cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65368));
    // 0x1ca740: 0x44820000
    ctx->pc = 0x1ca740u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ca744: 0x0
    ctx->pc = 0x1ca744u;
    // NOP
    // 0x1ca748: 0x46000836
    ctx->pc = 0x1ca748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca74c: 0x0
    ctx->pc = 0x1ca74cu;
    // NOP
    // 0x1ca750: 0x45010003
    ctx->pc = 0x1CA750u;
    {
        const bool branch_taken_0x1ca750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA754u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ca750) {
            ctx->pc = 0x1CA760u;
            goto label_1ca760;
        }
    }
    ctx->pc = 0x1CA758u;
    // 0x1ca758: 0x10000002
    ctx->pc = 0x1CA758u;
    {
        const bool branch_taken_0x1ca758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA75Cu;
        WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1ca758) {
            ctx->pc = 0x1CA764u;
            goto label_1ca764;
        }
    }
    ctx->pc = 0x1CA760u;
label_1ca760:
    // 0x1ca760: 0xa22000c4
    ctx->pc = 0x1ca760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 0));
label_1ca764:
    // 0x1ca764: 0x822300c4
    ctx->pc = 0x1ca764u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1ca768: 0x24020001
    ctx->pc = 0x1ca768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca76c: 0x10620004
    ctx->pc = 0x1CA76Cu;
    {
        const bool branch_taken_0x1ca76c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ca76c) {
            ctx->pc = 0x1CA780u;
            goto label_1ca780;
        }
    }
    ctx->pc = 0x1CA774u;
    // 0x1ca774: 0x82420047
    ctx->pc = 0x1ca774u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x1ca778: 0x14400010
    ctx->pc = 0x1CA778u;
    {
        const bool branch_taken_0x1ca778 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA77Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ca778) {
            ctx->pc = 0x1CA7BCu;
            goto label_1ca7bc;
        }
    }
    ctx->pc = 0x1CA780u;
label_1ca780:
    // 0x1ca780: 0x822300c3
    ctx->pc = 0x1ca780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 195)));
    // 0x1ca784: 0x24020001
    ctx->pc = 0x1ca784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca788: 0x1462000b
    ctx->pc = 0x1CA788u;
    {
        const bool branch_taken_0x1ca788 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1ca788) {
            ctx->pc = 0x1CA7B8u;
            goto label_1ca7b8;
        }
    }
    ctx->pc = 0x1CA790u;
    // 0x1ca790: 0xa22200c5
    ctx->pc = 0x1ca790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 197), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca794: 0xae2000bc
    ctx->pc = 0x1ca794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x1ca798: 0xa2420048
    ctx->pc = 0x1ca798u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca79c: 0x72002628
    ctx->pc = 0x1ca79cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ca7a0: 0xc072cd8
    ctx->pc = 0x1CA7A0u;
    SET_GPR_U32(ctx, 31, 0x1CA7A8u);
    ctx->pc = 0x1CA7A4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA7A8u; }
        else if (ctx->pc != 0x1CA7A8u) { ctx->pc = 0x1CA7A8u; }
    }
    if (ctx->pc != 0x1CA7A8u) { return; }
    ctx->pc = 0x1CA7A8u;
    // 0x1ca7a8: 0x2402fffe
    ctx->pc = 0x1ca7a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ca7ac: 0xa6420194
    ctx->pc = 0x1ca7acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 404), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca7b0: 0xa64201d0
    ctx->pc = 0x1ca7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 464), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca7b4: 0xa642020c
    ctx->pc = 0x1ca7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 524), (uint16_t)GPR_U32(ctx, 2));
label_1ca7b8:
    // 0x1ca7b8: 0x72002628
    ctx->pc = 0x1ca7b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ca7bc:
    // 0x1ca7bc: 0xc072d30
    ctx->pc = 0x1CA7BCu;
    SET_GPR_U32(ctx, 31, 0x1CA7C4u);
    ctx->pc = 0x1CA7C0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CB4C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAfterSpeed__22CameraMgrInternalClassFi_0x1cb4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA7C4u; }
        else if (ctx->pc != 0x1CA7C4u) { ctx->pc = 0x1CA7C4u; }
    }
    if (ctx->pc != 0x1CA7C4u) { return; }
    ctx->pc = 0x1CA7C4u;
    // 0x1ca7c4: 0x7bbf00a0
    ctx->pc = 0x1ca7c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ca7c8: 0x7bb60090
    ctx->pc = 0x1ca7c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca7cc: 0x7bb50080
    ctx->pc = 0x1ca7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ca7d0: 0x7bb40070
    ctx->pc = 0x1ca7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ca7d4: 0x7bb30060
    ctx->pc = 0x1ca7d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca7d8: 0x7bb20050
    ctx->pc = 0x1ca7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca7dc: 0x7bb10040
    ctx->pc = 0x1ca7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca7e0: 0x7bb00030
    ctx->pc = 0x1ca7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca7e4: 0xc7bc0020
    ctx->pc = 0x1ca7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1ca7e8: 0xc7bb001c
    ctx->pc = 0x1ca7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1ca7ec: 0xc7ba0018
    ctx->pc = 0x1ca7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1ca7f0: 0xc7b90014
    ctx->pc = 0x1ca7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ca7f4: 0xc7b80010
    ctx->pc = 0x1ca7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ca7f8: 0xc7b7000c
    ctx->pc = 0x1ca7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ca7fc: 0xc7b60008
    ctx->pc = 0x1ca7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ca800: 0xc7b50004
    ctx->pc = 0x1ca800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ca804: 0xc7b40000
    ctx->pc = 0x1ca804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca808: 0x3e00008
    ctx->pc = 0x1CA808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA80Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA3F4u: goto label_1ca3f4;
            case 0x1CA520u: goto label_1ca520;
            case 0x1CA550u: goto label_1ca550;
            case 0x1CA5ACu: goto label_1ca5ac;
            case 0x1CA5C4u: goto label_1ca5c4;
            case 0x1CA5C8u: goto label_1ca5c8;
            case 0x1CA640u: goto label_1ca640;
            case 0x1CA650u: goto label_1ca650;
            case 0x1CA660u: goto label_1ca660;
            case 0x1CA66Cu: goto label_1ca66c;
            case 0x1CA6ACu: goto label_1ca6ac;
            case 0x1CA760u: goto label_1ca760;
            case 0x1CA764u: goto label_1ca764;
            case 0x1CA780u: goto label_1ca780;
            case 0x1CA7B8u: goto label_1ca7b8;
            case 0x1CA7BCu: goto label_1ca7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CA810u;
}
