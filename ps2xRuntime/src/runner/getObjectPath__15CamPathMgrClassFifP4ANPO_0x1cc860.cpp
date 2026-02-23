#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getObjectPath__15CamPathMgrClassFifP4ANPO
// Address: 0x1cc860 - 0x1cc97c
void getObjectPath__15CamPathMgrClassFifP4ANPO_0x1cc860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getObjectPath__15CamPathMgrClassFifP4ANPO");


    ctx->pc = 0x1cc860u;

    // 0x1cc860: 0x27bdffb0
    ctx->pc = 0x1cc860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cc864: 0x7fbf0040
    ctx->pc = 0x1cc864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1cc868: 0x7fb20030
    ctx->pc = 0x1cc868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cc86c: 0x7fb10020
    ctx->pc = 0x1cc86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cc870: 0x7fb00010
    ctx->pc = 0x1cc870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cc874: 0xe7b40000
    ctx->pc = 0x1cc874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cc878: 0x51040
    ctx->pc = 0x1cc878u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cc87c: 0x3c0101fc
    ctx->pc = 0x1cc87cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cc880: 0x410821
    ctx->pc = 0x1cc880u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1cc884: 0x3c020030
    ctx->pc = 0x1cc884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc888: 0x24446588
    ctx->pc = 0x1cc888u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25992));
    // 0x1cc88c: 0x3c020030
    ctx->pc = 0x1cc88cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc890: 0x70c09628
    ctx->pc = 0x1cc890u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cc894: 0x518c0
    ctx->pc = 0x1cc894u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cc898: 0x244266b4
    ctx->pc = 0x1cc898u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26292));
    // 0x1cc89c: 0x431021
    ctx->pc = 0x1cc89cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc8a0: 0x842605e0
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1504)));
    // 0x1cc8a4: 0x8c510000
    ctx->pc = 0x1cc8a4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc8a8: 0x46006506
    ctx->pc = 0x1cc8a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1cc8ac: 0x61900
    ctx->pc = 0x1cc8acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cc8b0: 0x831821
    ctx->pc = 0x1cc8b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc8b4: 0x8e220000
    ctx->pc = 0x1cc8b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc8b8: 0x8c700000
    ctx->pc = 0x1cc8b8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc8bc: 0x21080
    ctx->pc = 0x1cc8bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc8c0: 0xc073158
    ctx->pc = 0x1CC8C0u;
    SET_GPR_U32(ctx, 31, 0x1CC8C8u);
    ctx->pc = 0x1CC8C4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC8C8u; }
        else if (ctx->pc != 0x1CC8C8u) { ctx->pc = 0x1CC8C8u; }
    }
    if (ctx->pc != 0x1CC8C8u) { return; }
    ctx->pc = 0x1CC8C8u;
    // 0x1cc8c8: 0xe6400000
    ctx->pc = 0x1cc8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1cc8cc: 0x8e220004
    ctx->pc = 0x1cc8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cc8d0: 0x4600a306
    ctx->pc = 0x1cc8d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc8d4: 0x21080
    ctx->pc = 0x1cc8d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc8d8: 0xc073158
    ctx->pc = 0x1CC8D8u;
    SET_GPR_U32(ctx, 31, 0x1CC8E0u);
    ctx->pc = 0x1CC8DCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC8E0u; }
        else if (ctx->pc != 0x1CC8E0u) { ctx->pc = 0x1CC8E0u; }
    }
    if (ctx->pc != 0x1CC8E0u) { return; }
    ctx->pc = 0x1CC8E0u;
    // 0x1cc8e0: 0xe6400004
    ctx->pc = 0x1cc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1cc8e4: 0x8e220008
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc8e8: 0x4600a306
    ctx->pc = 0x1cc8e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc8ec: 0x21080
    ctx->pc = 0x1cc8ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc8f0: 0xc073158
    ctx->pc = 0x1CC8F0u;
    SET_GPR_U32(ctx, 31, 0x1CC8F8u);
    ctx->pc = 0x1CC8F4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC8F8u; }
        else if (ctx->pc != 0x1CC8F8u) { ctx->pc = 0x1CC8F8u; }
    }
    if (ctx->pc != 0x1CC8F8u) { return; }
    ctx->pc = 0x1CC8F8u;
    // 0x1cc8f8: 0xe6400008
    ctx->pc = 0x1cc8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1cc8fc: 0x8e22000c
    ctx->pc = 0x1cc8fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cc900: 0x4600a306
    ctx->pc = 0x1cc900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc904: 0x21080
    ctx->pc = 0x1cc904u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc908: 0xc073158
    ctx->pc = 0x1CC908u;
    SET_GPR_U32(ctx, 31, 0x1CC910u);
    ctx->pc = 0x1CC90Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC910u; }
        else if (ctx->pc != 0x1CC910u) { ctx->pc = 0x1CC910u; }
    }
    if (ctx->pc != 0x1CC910u) { return; }
    ctx->pc = 0x1CC910u;
    // 0x1cc910: 0x46000024
    ctx->pc = 0x1cc910u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1cc914: 0x44020000
    ctx->pc = 0x1cc914u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1cc918: 0x4600a306
    ctx->pc = 0x1cc918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc91c: 0xae42000c
    ctx->pc = 0x1cc91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1cc920: 0x8e220010
    ctx->pc = 0x1cc920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cc924: 0x21080
    ctx->pc = 0x1cc924u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc928: 0xc073158
    ctx->pc = 0x1CC928u;
    SET_GPR_U32(ctx, 31, 0x1CC930u);
    ctx->pc = 0x1CC92Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC930u; }
        else if (ctx->pc != 0x1CC930u) { ctx->pc = 0x1CC930u; }
    }
    if (ctx->pc != 0x1CC930u) { return; }
    ctx->pc = 0x1CC930u;
    // 0x1cc930: 0x46000024
    ctx->pc = 0x1cc930u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1cc934: 0x44020000
    ctx->pc = 0x1cc934u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x1cc938: 0x4600a306
    ctx->pc = 0x1cc938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cc93c: 0xae420010
    ctx->pc = 0x1cc93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1cc940: 0x8e220014
    ctx->pc = 0x1cc940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1cc944: 0x21080
    ctx->pc = 0x1cc944u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc948: 0xc073158
    ctx->pc = 0x1CC948u;
    SET_GPR_U32(ctx, 31, 0x1CC950u);
    ctx->pc = 0x1CC94Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1CC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcFCurve__FP5CPFRMf_0x1cc560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC950u; }
        else if (ctx->pc != 0x1CC950u) { ctx->pc = 0x1CC950u; }
    }
    if (ctx->pc != 0x1CC950u) { return; }
    ctx->pc = 0x1CC950u;
    // 0x1cc950: 0x46000024
    ctx->pc = 0x1cc950u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1cc954: 0x44030000
    ctx->pc = 0x1cc954u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1cc958: 0x0
    ctx->pc = 0x1cc958u;
    // NOP
    // 0x1cc95c: 0xae430014
    ctx->pc = 0x1cc95cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1cc960: 0x7bbf0040
    ctx->pc = 0x1cc960u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc964: 0x7bb20030
    ctx->pc = 0x1cc964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc968: 0x7bb10020
    ctx->pc = 0x1cc968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc96c: 0x7bb00010
    ctx->pc = 0x1cc96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc970: 0xc7b40000
    ctx->pc = 0x1cc970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc974: 0x3e00008
    ctx->pc = 0x1CC974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC978u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC97Cu;
}
