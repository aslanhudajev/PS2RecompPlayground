#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shape__16FaceAnimMgrClassFiPfPii
// Address: 0x1e6780 - 0x1e6928
void shape__16FaceAnimMgrClassFiPfPii_0x1e6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shape__16FaceAnimMgrClassFiPfPii");


    ctx->pc = 0x1e6780u;

    // 0x1e6780: 0x27bdff80
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e6784: 0x7fbf0070
    ctx->pc = 0x1e6784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1e6788: 0x7fb60060
    ctx->pc = 0x1e6788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e678c: 0x7fb50050
    ctx->pc = 0x1e678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e6790: 0x7fb40040
    ctx->pc = 0x1e6790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e6794: 0x7fb30030
    ctx->pc = 0x1e6794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6798: 0x7fb20020
    ctx->pc = 0x1e6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e679c: 0x7fb10010
    ctx->pc = 0x1e679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e67a0: 0x7fb00000
    ctx->pc = 0x1e67a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e67a4: 0x70a08628
    ctx->pc = 0x1e67a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e67a8: 0x2a010072
    ctx->pc = 0x1e67a8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 114));
    // 0x1e67ac: 0x70c0b628
    ctx->pc = 0x1e67acu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e67b0: 0x70e0ae28
    ctx->pc = 0x1e67b0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e67b4: 0x10200052
    ctx->pc = 0x1E67B4u;
    {
        const bool branch_taken_0x1e67b4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E67B8u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e67b4) {
            ctx->pc = 0x1E6900u;
            goto label_1e6900;
        }
    }
    ctx->pc = 0x1E67BCu;
    // 0x1e67bc: 0xc079708
    ctx->pc = 0x1E67BCu;
    SET_GPR_U32(ctx, 31, 0x1E67C4u);
    ctx->pc = 0x1E5C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        data_set__16FaceAnimMgrClassFi_0x1e5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67C4u; }
        else if (ctx->pc != 0x1E67C4u) { ctx->pc = 0x1E67C4u; }
    }
    if (ctx->pc != 0x1E67C4u) { return; }
    ctx->pc = 0x1E67C4u;
    // 0x1e67c4: 0x3c030050
    ctx->pc = 0x1e67c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e67c8: 0x102080
    ctx->pc = 0x1e67c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e67cc: 0x246308b0
    ctx->pc = 0x1e67ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1e67d0: 0x641821
    ctx->pc = 0x1e67d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e67d4: 0x8c680000
    ctx->pc = 0x1e67d4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e67d8: 0x19000049
    ctx->pc = 0x1E67D8u;
    {
        const bool branch_taken_0x1e67d8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1E67DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
        if (branch_taken_0x1e67d8) {
            ctx->pc = 0x1E6900u;
            goto label_1e6900;
        }
    }
    ctx->pc = 0x1E67E0u;
    // 0x1e67e0: 0x2463a940
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945088));
    // 0x1e67e4: 0x641821
    ctx->pc = 0x1e67e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e67e8: 0x8c670000
    ctx->pc = 0x1e67e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e67ec: 0x3405ffff
    ctx->pc = 0x1e67ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1e67f0: 0x73403
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1e67f4: 0x3c030050
    ctx->pc = 0x1e67f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e67f8: 0xc52824
    ctx->pc = 0x1e67f8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1e67fc: 0x2464ea20
    ctx->pc = 0x1e67fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x1e6800: 0x52900
    ctx->pc = 0x1e6800u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6804: 0x852021
    ctx->pc = 0x1e6804u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e6808: 0x8c840000
    ctx->pc = 0x1e6808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e680c: 0x3c038000
    ctx->pc = 0x1e680cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1e6810: 0x831824
    ctx->pc = 0x1e6810u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e6814: 0x1060003a
    ctx->pc = 0x1E6814u;
    {
        const bool branch_taken_0x1e6814 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6818u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 63));
        if (branch_taken_0x1e6814) {
            ctx->pc = 0x1E6900u;
            goto label_1e6900;
        }
    }
    ctx->pc = 0x1E681Cu;
    // 0x1e681c: 0x2402ffc0
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e6820: 0x16a0000e
    ctx->pc = 0x1E6820u;
    {
        const bool branch_taken_0x1e6820 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6824u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x1e6820) {
            ctx->pc = 0x1E685Cu;
            goto label_1e685c;
        }
    }
    ctx->pc = 0x1E6828u;
    // 0x1e6828: 0x30c2ffff
    ctx->pc = 0x1e6828u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1e682c: 0x21900
    ctx->pc = 0x1e682cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6830: 0x3c020050
    ctx->pc = 0x1e6830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e6834: 0x2442ea24
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1e6838: 0x431021
    ctx->pc = 0x1e6838u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e683c: 0x8c420000
    ctx->pc = 0x1e683cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6840: 0x30e4ffff
    ctx->pc = 0x1e6840u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 65535));
    // 0x1e6844: 0x41840
    ctx->pc = 0x1e6844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e6848: 0x641821
    ctx->pc = 0x1e6848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e684c: 0x31880
    ctx->pc = 0x1e684cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e6850: 0x431021
    ctx->pc = 0x1e6850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6854: 0x8c550000
    ctx->pc = 0x1e6854u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6858: 0x0
    ctx->pc = 0x1e6858u;
    // NOP
label_1e685c:
    // 0x1e685c: 0x8e620004
    ctx->pc = 0x1e685cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e6860: 0x8e630000
    ctx->pc = 0x1e6860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e6864: 0x26720004
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e6868: 0x2628021
    ctx->pc = 0x1e6868u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e686c: 0x31040
    ctx->pc = 0x1e686cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1e6870: 0x431021
    ctx->pc = 0x1e6870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6874: 0xc06878c
    ctx->pc = 0x1E6874u;
    SET_GPR_U32(ctx, 31, 0x1E687Cu);
    ctx->pc = 0x1E6878u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E687Cu; }
        else if (ctx->pc != 0x1E687Cu) { ctx->pc = 0x1E687Cu; }
    }
    if (ctx->pc != 0x1E687Cu) { return; }
    ctx->pc = 0x1E687Cu;
    // 0x1e687c: 0x10000012
    ctx->pc = 0x1E687Cu;
    {
        const bool branch_taken_0x1e687c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6880u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e687c) {
            ctx->pc = 0x1E68C8u;
            goto label_1e68c8;
        }
    }
    ctx->pc = 0x1E6884u;
label_1e6884:
    // 0x1e6884: 0xc6cc0000
    ctx->pc = 0x1e6884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6888: 0x44800000
    ctx->pc = 0x1e6888u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e688c: 0x0
    ctx->pc = 0x1e688cu;
    // NOP
    // 0x1e6890: 0x460c0032
    ctx->pc = 0x1e6890u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6894: 0x0
    ctx->pc = 0x1e6894u;
    // NOP
    // 0x1e6898: 0x4503000a
    ctx->pc = 0x1E6898u;
    {
        const bool branch_taken_0x1e6898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6898) {
            ctx->pc = 0x1E689Cu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4));
            ctx->pc = 0x1E68C4u;
            goto label_1e68c4;
        }
    }
    ctx->pc = 0x1E68A0u;
    // 0x1e68a0: 0x10600007
    ctx->pc = 0x1E68A0u;
    {
        const bool branch_taken_0x1e68a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E68A4u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        if (branch_taken_0x1e68a0) {
            ctx->pc = 0x1E68C0u;
            goto label_1e68c0;
        }
    }
    ctx->pc = 0x1E68A8u;
    // 0x1e68a8: 0x72002628
    ctx->pc = 0x1e68a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e68ac: 0x72203628
    ctx->pc = 0x1e68acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e68b0: 0x72a03e28
    ctx->pc = 0x1e68b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e68b4: 0xc079a4c
    ctx->pc = 0x1E68B4u;
    SET_GPR_U32(ctx, 31, 0x1E68BCu);
    ctx->pc = 0x1E68B8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6930u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii_0x1e6930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68BCu; }
        else if (ctx->pc != 0x1E68BCu) { ctx->pc = 0x1E68BCu; }
    }
    if (ctx->pc != 0x1E68BCu) { return; }
    ctx->pc = 0x1E68BCu;
    // 0x1e68bc: 0x0
    ctx->pc = 0x1e68bcu;
    // NOP
label_1e68c0:
    // 0x1e68c0: 0x26d60004
    ctx->pc = 0x1e68c0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 4));
label_1e68c4:
    // 0x1e68c4: 0x26520004
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_1e68c8:
    // 0x1e68c8: 0x8e430004
    ctx->pc = 0x1e68c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e68cc: 0x2402ffff
    ctx->pc = 0x1e68ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e68d0: 0x1462ffec
    ctx->pc = 0x1E68D0u;
    {
        const bool branch_taken_0x1e68d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e68d0) {
            ctx->pc = 0x1E6884u;
            goto label_1e6884;
        }
    }
    ctx->pc = 0x1E68D8u;
    // 0x1e68d8: 0x8e670000
    ctx->pc = 0x1e68d8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e68dc: 0x72002628
    ctx->pc = 0x1e68dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e68e0: 0x72a03628
    ctx->pc = 0x1e68e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e68e4: 0x72804628
    ctx->pc = 0x1e68e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e68e8: 0xc079af8
    ctx->pc = 0x1E68E8u;
    SET_GPR_U32(ctx, 31, 0x1E68F0u);
    ctx->pc = 0x1E68ECu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E6BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        VertexSet__FP13FACEANIM_BASEP11tagNLpoint3Piii_0x1e6be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68F0u; }
        else if (ctx->pc != 0x1E68F0u) { ctx->pc = 0x1E68F0u; }
    }
    if (ctx->pc != 0x1E68F0u) { return; }
    ctx->pc = 0x1E68F0u;
    // 0x1e68f0: 0xc0552d8
    ctx->pc = 0x1E68F0u;
    SET_GPR_U32(ctx, 31, 0x1E68F8u);
    ctx->pc = 0x1E68F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68F8u; }
        else if (ctx->pc != 0x1E68F8u) { ctx->pc = 0x1E68F8u; }
    }
    if (ctx->pc != 0x1E68F8u) { return; }
    ctx->pc = 0x1E68F8u;
    // 0x1e68f8: 0xc0687c0
    ctx->pc = 0x1E68F8u;
    SET_GPR_U32(ctx, 31, 0x1E6900u);
    ctx->pc = 0x1E68FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6900u; }
        else if (ctx->pc != 0x1E6900u) { ctx->pc = 0x1E6900u; }
    }
    if (ctx->pc != 0x1E6900u) { return; }
    ctx->pc = 0x1E6900u;
label_1e6900:
    // 0x1e6900: 0x7bbf0070
    ctx->pc = 0x1e6900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e6904: 0x7bb60060
    ctx->pc = 0x1e6904u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e6908: 0x7bb50050
    ctx->pc = 0x1e6908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e690c: 0x7bb40040
    ctx->pc = 0x1e690cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6910: 0x7bb30030
    ctx->pc = 0x1e6910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6914: 0x7bb20020
    ctx->pc = 0x1e6914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6918: 0x7bb10010
    ctx->pc = 0x1e6918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e691c: 0x7bb00000
    ctx->pc = 0x1e691cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6920: 0x3e00008
    ctx->pc = 0x1E6920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E685Cu: goto label_1e685c;
            case 0x1E6884u: goto label_1e6884;
            case 0x1E68C0u: goto label_1e68c0;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E68C8u: goto label_1e68c8;
            case 0x1E6900u: goto label_1e6900;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6928u;
}
