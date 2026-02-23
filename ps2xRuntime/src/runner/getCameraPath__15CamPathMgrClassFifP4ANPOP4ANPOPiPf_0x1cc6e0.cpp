#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf
// Address: 0x1cc6e0 - 0x1cc854
void getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf");


    ctx->pc = 0x1cc6e0u;

    // 0x1cc6e0: 0x27bdff80
    ctx->pc = 0x1cc6e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1cc6e4: 0x7fbf0070
    ctx->pc = 0x1cc6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1cc6e8: 0x7fb50060
    ctx->pc = 0x1cc6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1cc6ec: 0x7fb40050
    ctx->pc = 0x1cc6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cc6f0: 0x7fb30040
    ctx->pc = 0x1cc6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cc6f4: 0x7fb20030
    ctx->pc = 0x1cc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cc6f8: 0x7fb10020
    ctx->pc = 0x1cc6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cc6fc: 0x7fb00010
    ctx->pc = 0x1cc6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cc700: 0xe7b40000
    ctx->pc = 0x1cc700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cc704: 0x51040
    ctx->pc = 0x1cc704u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cc708: 0x3c0101fc
    ctx->pc = 0x1cc708u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cc70c: 0x410821
    ctx->pc = 0x1cc70cu;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1cc710: 0x3c020030
    ctx->pc = 0x1cc710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc714: 0x24446588
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25992));
    // 0x1cc718: 0x3c020030
    ctx->pc = 0x1cc718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc71c: 0x70c0ae28
    ctx->pc = 0x1cc71cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cc720: 0x518c0
    ctx->pc = 0x1cc720u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cc724: 0x244266b4
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26292));
    // 0x1cc728: 0x431021
    ctx->pc = 0x1cc728u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc72c: 0x842605e0
    ctx->pc = 0x1cc72cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1504)));
    // 0x1cc730: 0x8c510000
    ctx->pc = 0x1cc730u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc734: 0x70e0a628
    ctx->pc = 0x1cc734u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cc738: 0x71009e28
    ctx->pc = 0x1cc738u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cc73c: 0x71209628
    ctx->pc = 0x1cc73cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1cc740: 0x46006506
    ctx->pc = 0x1cc740u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1cc744: 0x61900
    ctx->pc = 0x1cc744u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cc748: 0x831821
    ctx->pc = 0x1cc748u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc74c: 0x8e220000
    ctx->pc = 0x1cc74cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc750: 0x8c700000
    ctx->pc = 0x1cc750u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc754: 0x21080
    ctx->pc = 0x1cc754u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc758: 0xc073158
    ctx->pc = 0x1CC758u;
    SET_GPR_U32(ctx, 31, 0x1CC760u);
    ctx->pc = 0x1CC75Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC760u; }
        else if (ctx->pc != 0x1CC760u) { ctx->pc = 0x1CC760u; }
    }
    if (ctx->pc != 0x1CC760u) { return; }
    ctx->pc = 0x1CC760u;
    // 0x1cc760: 0xe6a00000
    ctx->pc = 0x1cc760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1cc764: 0x8e220004
    ctx->pc = 0x1cc764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cc768: 0x4600a306
    ctx->pc = 0x1cc768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc76c: 0x21080
    ctx->pc = 0x1cc76cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc770: 0xc073158
    ctx->pc = 0x1CC770u;
    SET_GPR_U32(ctx, 31, 0x1CC778u);
    ctx->pc = 0x1CC774u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC778u; }
        else if (ctx->pc != 0x1CC778u) { ctx->pc = 0x1CC778u; }
    }
    if (ctx->pc != 0x1CC778u) { return; }
    ctx->pc = 0x1CC778u;
    // 0x1cc778: 0xe6a00004
    ctx->pc = 0x1cc778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x1cc77c: 0x8e220008
    ctx->pc = 0x1cc77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc780: 0x4600a306
    ctx->pc = 0x1cc780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc784: 0x21080
    ctx->pc = 0x1cc784u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc788: 0xc073158
    ctx->pc = 0x1CC788u;
    SET_GPR_U32(ctx, 31, 0x1CC790u);
    ctx->pc = 0x1CC78Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC790u; }
        else if (ctx->pc != 0x1CC790u) { ctx->pc = 0x1CC790u; }
    }
    if (ctx->pc != 0x1CC790u) { return; }
    ctx->pc = 0x1CC790u;
    // 0x1cc790: 0xe6a00008
    ctx->pc = 0x1cc790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x1cc794: 0x8e22000c
    ctx->pc = 0x1cc794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cc798: 0x4600a306
    ctx->pc = 0x1cc798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc79c: 0x21080
    ctx->pc = 0x1cc79cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc7a0: 0xc073158
    ctx->pc = 0x1CC7A0u;
    SET_GPR_U32(ctx, 31, 0x1CC7A8u);
    ctx->pc = 0x1CC7A4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7A8u; }
        else if (ctx->pc != 0x1CC7A8u) { ctx->pc = 0x1CC7A8u; }
    }
    if (ctx->pc != 0x1CC7A8u) { return; }
    ctx->pc = 0x1CC7A8u;
    // 0x1cc7a8: 0xe6800000
    ctx->pc = 0x1cc7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1cc7ac: 0x8e220010
    ctx->pc = 0x1cc7acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc7b0: 0x4600a306
    ctx->pc = 0x1cc7b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc7b4: 0x21080
    ctx->pc = 0x1cc7b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc7b8: 0xc073158
    ctx->pc = 0x1CC7B8u;
    SET_GPR_U32(ctx, 31, 0x1CC7C0u);
    ctx->pc = 0x1CC7BCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7C0u; }
        else if (ctx->pc != 0x1CC7C0u) { ctx->pc = 0x1CC7C0u; }
    }
    if (ctx->pc != 0x1CC7C0u) { return; }
    ctx->pc = 0x1CC7C0u;
    // 0x1cc7c0: 0xe6800004
    ctx->pc = 0x1cc7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1cc7c4: 0x8e220014
    ctx->pc = 0x1cc7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1cc7c8: 0x4600a306
    ctx->pc = 0x1cc7c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc7cc: 0x21080
    ctx->pc = 0x1cc7ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc7d0: 0xc073158
    ctx->pc = 0x1CC7D0u;
    SET_GPR_U32(ctx, 31, 0x1CC7D8u);
    ctx->pc = 0x1CC7D4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7D8u; }
        else if (ctx->pc != 0x1CC7D8u) { ctx->pc = 0x1CC7D8u; }
    }
    if (ctx->pc != 0x1CC7D8u) { return; }
    ctx->pc = 0x1CC7D8u;
    // 0x1cc7d8: 0xe6800008
    ctx->pc = 0x1cc7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1cc7dc: 0x8e220018
    ctx->pc = 0x1cc7dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1cc7e0: 0x4600a306
    ctx->pc = 0x1cc7e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc7e4: 0x21080
    ctx->pc = 0x1cc7e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc7e8: 0xc073158
    ctx->pc = 0x1CC7E8u;
    SET_GPR_U32(ctx, 31, 0x1CC7F0u);
    ctx->pc = 0x1CC7ECu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7F0u; }
        else if (ctx->pc != 0x1CC7F0u) { ctx->pc = 0x1CC7F0u; }
    }
    if (ctx->pc != 0x1CC7F0u) { return; }
    ctx->pc = 0x1CC7F0u;
    // 0x1cc7f0: 0xe6400000
    ctx->pc = 0x1cc7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cc7f4: 0x8f838c74
    ctx->pc = 0x1cc7f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937716)));
    // 0x1cc7f8: 0x30630001
    ctx->pc = 0x1cc7f8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1cc7fc: 0x1060000a
    ctx->pc = 0x1CC7FCu;
    {
        const bool branch_taken_0x1cc7fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc7fc) {
            ctx->pc = 0x1CC828u;
            goto label_1cc828;
        }
    }
    ctx->pc = 0x1CC804u;
    // 0x1cc804: 0x8e22001c
    ctx->pc = 0x1cc804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cc808: 0x4600a306
    ctx->pc = 0x1cc808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc80c: 0x21080
    ctx->pc = 0x1cc80cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc810: 0xc073158
    ctx->pc = 0x1CC810u;
    SET_GPR_U32(ctx, 31, 0x1CC818u);
    ctx->pc = 0x1CC814u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC818u; }
        else if (ctx->pc != 0x1CC818u) { ctx->pc = 0x1CC818u; }
    }
    if (ctx->pc != 0x1CC818u) { return; }
    ctx->pc = 0x1CC818u;
    // 0x1cc818: 0x46000024
    ctx->pc = 0x1cc818u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1cc81c: 0x44030000
    ctx->pc = 0x1cc81cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1cc820: 0x10000002
    ctx->pc = 0x1CC820u;
    {
        const bool branch_taken_0x1cc820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC824u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1cc820) {
            ctx->pc = 0x1CC82Cu;
            goto label_1cc82c;
        }
    }
    ctx->pc = 0x1CC828u;
label_1cc828:
    // 0x1cc828: 0xae600000
    ctx->pc = 0x1cc828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1cc82c:
    // 0x1cc82c: 0x7bbf0070
    ctx->pc = 0x1cc82cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cc830: 0x7bb50060
    ctx->pc = 0x1cc830u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cc834: 0x7bb40050
    ctx->pc = 0x1cc834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc838: 0x7bb30040
    ctx->pc = 0x1cc838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc83c: 0x7bb20030
    ctx->pc = 0x1cc83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc840: 0x7bb10020
    ctx->pc = 0x1cc840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc844: 0x7bb00010
    ctx->pc = 0x1cc844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc848: 0xc7b40000
    ctx->pc = 0x1cc848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc84c: 0x3e00008
    ctx->pc = 0x1CC84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC828u: goto label_1cc828;
            case 0x1CC82Cu: goto label_1cc82c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC854u;
}
