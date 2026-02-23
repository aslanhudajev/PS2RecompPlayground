#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: contLoop__10PlayerTaskFv
// Address: 0x20e870 - 0x20eb20
void contLoop__10PlayerTaskFv_0x20e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("contLoop__10PlayerTaskFv");


    ctx->pc = 0x20e870u;

    // 0x20e870: 0x27bdff90
    ctx->pc = 0x20e870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20e874: 0x7fbf0060
    ctx->pc = 0x20e874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x20e878: 0x7fb50050
    ctx->pc = 0x20e878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20e87c: 0x7fb40040
    ctx->pc = 0x20e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20e880: 0x7fb30030
    ctx->pc = 0x20e880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20e884: 0x7fb20020
    ctx->pc = 0x20e884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20e888: 0x7fb10010
    ctx->pc = 0x20e888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20e88c: 0x7080ae28
    ctx->pc = 0x20e88cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20e890: 0x7fb00000
    ctx->pc = 0x20e890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20e894: 0x24110001
    ctx->pc = 0x20e894u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e898: 0x70002628
    ctx->pc = 0x20e898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e89c: 0x70009628
    ctx->pc = 0x20e89cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20e8a0: 0xc0693a0
    ctx->pc = 0x20E8A0u;
    SET_GPR_U32(ctx, 31, 0x20E8A8u);
    ctx->pc = 0x20E8A4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8A8u; }
        else if (ctx->pc != 0x20E8A8u) { ctx->pc = 0x20E8A8u; }
    }
    if (ctx->pc != 0x20E8A8u) { return; }
    ctx->pc = 0x20E8A8u;
    // 0x20e8a8: 0xc06b26c
    ctx->pc = 0x20E8A8u;
    SET_GPR_U32(ctx, 31, 0x20E8B0u);
    ctx->pc = 0x1AC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushPerspective_0x1ac9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8B0u; }
        else if (ctx->pc != 0x20E8B0u) { ctx->pc = 0x20E8B0u; }
    }
    if (ctx->pc != 0x20E8B0u) { return; }
    ctx->pc = 0x20E8B0u;
    // 0x20e8b0: 0x3c023c34
    ctx->pc = 0x20e8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15412 << 16));
    // 0x20e8b4: 0x34423958
    ctx->pc = 0x20e8b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 14680));
    // 0x20e8b8: 0x44826800
    ctx->pc = 0x20e8b8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x20e8bc: 0x24042aab
    ctx->pc = 0x20e8bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10923));
    // 0x20e8c0: 0x3c02477d
    ctx->pc = 0x20e8c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18301 << 16));
    // 0x20e8c4: 0x3442e800
    ctx->pc = 0x20e8c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59392));
    // 0x20e8c8: 0x44827000
    ctx->pc = 0x20e8c8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x20e8cc: 0x3c023fb6
    ctx->pc = 0x20e8ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x20e8d0: 0x3442db6e
    ctx->pc = 0x20e8d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x20e8d4: 0x44826000
    ctx->pc = 0x20e8d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20e8d8: 0xc06b0c8
    ctx->pc = 0x20E8D8u;
    SET_GPR_U32(ctx, 31, 0x20E8E0u);
    ctx->pc = 0x20E8DCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AC320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspectiveI_0x1ac320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8E0u; }
        else if (ctx->pc != 0x20E8E0u) { ctx->pc = 0x20E8E0u; }
    }
    if (ctx->pc != 0x20E8E0u) { return; }
    ctx->pc = 0x20E8E0u;
    // 0x20e8e0: 0xc084ae0
    ctx->pc = 0x20E8E0u;
    SET_GPR_U32(ctx, 31, 0x20E8E8u);
    ctx->pc = 0x20E8E4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 7352)));
    ctx->pc = 0x212B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispPlDamEff__Fi_0x212b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8E8u; }
        else if (ctx->pc != 0x20E8E8u) { ctx->pc = 0x20E8E8u; }
    }
    if (ctx->pc != 0x20E8E8u) { return; }
    ctx->pc = 0x20E8E8u;
    // 0x20e8e8: 0xc06b2d8
    ctx->pc = 0x20E8E8u;
    SET_GPR_U32(ctx, 31, 0x20E8F0u);
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopPerspective_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8F0u; }
        else if (ctx->pc != 0x20E8F0u) { ctx->pc = 0x20E8F0u; }
    }
    if (ctx->pc != 0x20E8F0u) { return; }
    ctx->pc = 0x20E8F0u;
    // 0x20e8f0: 0xc069394
    ctx->pc = 0x20E8F0u;
    SET_GPR_U32(ctx, 31, 0x20E8F8u);
    ctx->pc = 0x20E8F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8F8u; }
        else if (ctx->pc != 0x20E8F8u) { ctx->pc = 0x20E8F8u; }
    }
    if (ctx->pc != 0x20E8F8u) { return; }
    ctx->pc = 0x20E8F8u;
    // 0x20e8f8: 0x3c020050
    ctx->pc = 0x20e8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e8fc: 0x2444dac0
    ctx->pc = 0x20e8fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x20e900: 0xc075278
    ctx->pc = 0x20E900u;
    SET_GPR_U32(ctx, 31, 0x20E908u);
    ctx->pc = 0x20E904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D49E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCreditData__11CreditClassFi_0x1d49e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E908u; }
        else if (ctx->pc != 0x20E908u) { ctx->pc = 0x20E908u; }
    }
    if (ctx->pc != 0x20E908u) { return; }
    ctx->pc = 0x20E908u;
    // 0x20e908: 0x70409e28
    ctx->pc = 0x20e908u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20e90c: 0x3c020050
    ctx->pc = 0x20e90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e910: 0x2444dac0
    ctx->pc = 0x20e910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x20e914: 0xc075278
    ctx->pc = 0x20E914u;
    SET_GPR_U32(ctx, 31, 0x20E91Cu);
    ctx->pc = 0x20E918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D49E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCreditData__11CreditClassFi_0x1d49e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E91Cu; }
        else if (ctx->pc != 0x20E91Cu) { ctx->pc = 0x20E91Cu; }
    }
    if (ctx->pc != 0x20E91Cu) { return; }
    ctx->pc = 0x20E91Cu;
    // 0x20e91c: 0x8ea31cbc
    ctx->pc = 0x20e91cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20e920: 0x7040a628
    ctx->pc = 0x20e920u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20e924: 0x8e640000
    ctx->pc = 0x20e924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20e928: 0x8c620078
    ctx->pc = 0x20e928u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x20e92c: 0x14440005
    ctx->pc = 0x20E92Cu;
    {
        const bool branch_taken_0x20e92c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x20E930u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 120));
        if (branch_taken_0x20e92c) {
            ctx->pc = 0x20E944u;
            goto label_20e944;
        }
    }
    ctx->pc = 0x20E934u;
    // 0x20e934: 0x8c63007c
    ctx->pc = 0x20e934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x20e938: 0x8e820000
    ctx->pc = 0x20e938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20e93c: 0x10620008
    ctx->pc = 0x20E93Cu;
    {
        const bool branch_taken_0x20e93c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20e93c) {
            ctx->pc = 0x20E960u;
            goto label_20e960;
        }
    }
    ctx->pc = 0x20E944u;
label_20e944:
    // 0x20e944: 0xaca40000
    ctx->pc = 0x20e944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x20e948: 0x8e840000
    ctx->pc = 0x20e948u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x20e94c: 0x8ea21cbc
    ctx->pc = 0x20e94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20e950: 0x34039fff
    ctx->pc = 0x20e950u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 40959));
    // 0x20e954: 0xac44007c
    ctx->pc = 0x20e954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 4));
    // 0x20e958: 0x8ea21cbc
    ctx->pc = 0x20e958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20e95c: 0xac4300b4
    ctx->pc = 0x20e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
label_20e960:
    // 0x20e960: 0x83838b90
    ctx->pc = 0x20e960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x20e964: 0x24020004
    ctx->pc = 0x20e964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e968: 0x10620031
    ctx->pc = 0x20E968u;
    {
        const bool branch_taken_0x20e968 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x20e968) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20E970u;
    // 0x20e970: 0x3c020050
    ctx->pc = 0x20e970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20e974: 0xc07ce18
    ctx->pc = 0x20E974u;
    SET_GPR_U32(ctx, 31, 0x20E97Cu);
    ctx->pc = 0x20E978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E97Cu; }
        else if (ctx->pc != 0x20E97Cu) { ctx->pc = 0x20E97Cu; }
    }
    if (ctx->pc != 0x20E97Cu) { return; }
    ctx->pc = 0x20E97Cu;
    // 0x20e97c: 0x1c40002c
    ctx->pc = 0x20E97Cu;
    {
        const bool branch_taken_0x20e97c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20e97c) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20E984u;
    // 0x20e984: 0x8f828cb0
    ctx->pc = 0x20e984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20e988: 0x30420002
    ctx->pc = 0x20e988u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x20e98c: 0x10400028
    ctx->pc = 0x20E98Cu;
    {
        const bool branch_taken_0x20e98c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e98c) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20E994u;
    // 0x20e994: 0xc080978
    ctx->pc = 0x20E994u;
    SET_GPR_U32(ctx, 31, 0x20E99Cu);
    ctx->pc = 0x20E998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 7352)));
    ctx->pc = 0x2025E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTrigger__Fi_0x2025e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E99Cu; }
        else if (ctx->pc != 0x20E99Cu) { ctx->pc = 0x20E99Cu; }
    }
    if (ctx->pc != 0x20E99Cu) { return; }
    ctx->pc = 0x20E99Cu;
    // 0x20e99c: 0x14400005
    ctx->pc = 0x20E99Cu;
    {
        const bool branch_taken_0x20e99c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20e99c) {
            ctx->pc = 0x20E9B4u;
            goto label_20e9b4;
        }
    }
    ctx->pc = 0x20E9A4u;
    // 0x20e9a4: 0xc080948
    ctx->pc = 0x20E9A4u;
    SET_GPR_U32(ctx, 31, 0x20E9ACu);
    ctx->pc = 0x20E9A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 7352)));
    ctx->pc = 0x202520u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressReload__Fi_0x202520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9ACu; }
        else if (ctx->pc != 0x20E9ACu) { ctx->pc = 0x20E9ACu; }
    }
    if (ctx->pc != 0x20E9ACu) { return; }
    ctx->pc = 0x20E9ACu;
    // 0x20e9ac: 0x1040000e
    ctx->pc = 0x20E9ACu;
    {
        const bool branch_taken_0x20e9ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e9ac) {
            ctx->pc = 0x20E9E8u;
            goto label_20e9e8;
        }
    }
    ctx->pc = 0x20E9B4u;
label_20e9b4:
    // 0x20e9b4: 0x8ea21cbc
    ctx->pc = 0x20e9b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20e9b8: 0x34018000
    ctx->pc = 0x20e9b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 32768));
    // 0x20e9bc: 0x8c4300b4
    ctx->pc = 0x20e9bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x20e9c0: 0x61082a
    ctx->pc = 0x20e9c0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 1)));
    // 0x20e9c4: 0x10200008
    ctx->pc = 0x20E9C4u;
    {
        const bool branch_taken_0x20e9c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E9C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 180));
        if (branch_taken_0x20e9c4) {
            ctx->pc = 0x20E9E8u;
            goto label_20e9e8;
        }
    }
    ctx->pc = 0x20E9CCu;
    // 0x20e9cc: 0x2402f000
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x20e9d0: 0x621024
    ctx->pc = 0x20e9d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20e9d4: 0xac820000
    ctx->pc = 0x20e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20e9d8: 0x8ea31cbc
    ctx->pc = 0x20e9d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20e9dc: 0x8c6200b4
    ctx->pc = 0x20e9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x20e9e0: 0x24420001
    ctx->pc = 0x20e9e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20e9e4: 0xac6200b4
    ctx->pc = 0x20e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
label_20e9e8:
    // 0x20e9e8: 0x8ea31cbc
    ctx->pc = 0x20e9e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20e9ec: 0x8c6200b4
    ctx->pc = 0x20e9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x20e9f0: 0x2442ffe2
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x20e9f4: 0x1840000d
    ctx->pc = 0x20E9F4u;
    {
        const bool branch_taken_0x20e9f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20E9F8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
        if (branch_taken_0x20e9f4) {
            ctx->pc = 0x20EA2Cu;
            goto label_20ea2c;
        }
    }
    ctx->pc = 0x20E9FCu;
    // 0x20e9fc: 0x8e620004
    ctx->pc = 0x20e9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20ea00: 0x24030002
    ctx->pc = 0x20ea00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ea04: 0x1043000a
    ctx->pc = 0x20EA04u;
    {
        const bool branch_taken_0x20ea04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ea04) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20EA0Cu;
    // 0x20ea0c: 0x8e820004
    ctx->pc = 0x20ea0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x20ea10: 0x10430007
    ctx->pc = 0x20EA10u;
    {
        const bool branch_taken_0x20ea10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ea10) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20EA18u;
    // 0x20ea18: 0x3c020050
    ctx->pc = 0x20ea18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20ea1c: 0xc0750bc
    ctx->pc = 0x20EA1Cu;
    SET_GPR_U32(ctx, 31, 0x20EA24u);
    ctx->pc = 0x20EA20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D42F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsFreePlay__11CreditClassFv_0x1d42f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA24u; }
        else if (ctx->pc != 0x20EA24u) { ctx->pc = 0x20EA24u; }
    }
    if (ctx->pc != 0x20EA24u) { return; }
    ctx->pc = 0x20EA24u;
    // 0x20ea24: 0x14400002
    ctx->pc = 0x20EA24u;
    {
        const bool branch_taken_0x20ea24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ea24) {
            ctx->pc = 0x20EA30u;
            goto label_20ea30;
        }
    }
    ctx->pc = 0x20EA2Cu;
label_20ea2c:
    // 0x20ea2c: 0x24120001
    ctx->pc = 0x20ea2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_20ea30:
    // 0x20ea30: 0xc083740
    ctx->pc = 0x20EA30u;
    SET_GPR_U32(ctx, 31, 0x20EA38u);
    ctx->pc = 0x20EA34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 7352)));
    ctx->pc = 0x20DD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlScoreDispChk__Fs_0x20dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA38u; }
        else if (ctx->pc != 0x20EA38u) { ctx->pc = 0x20EA38u; }
    }
    if (ctx->pc != 0x20EA38u) { return; }
    ctx->pc = 0x20EA38u;
    // 0x20ea38: 0x72a02628
    ctx->pc = 0x20ea38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x20ea3c: 0xc083cb8
    ctx->pc = 0x20EA3Cu;
    SET_GPR_U32(ctx, 31, 0x20EA44u);
    ctx->pc = 0x20EA40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCredAndStBtn__10PlayerTaskFi_0x20f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA44u; }
        else if (ctx->pc != 0x20EA44u) { ctx->pc = 0x20EA44u; }
    }
    if (ctx->pc != 0x20EA44u) { return; }
    ctx->pc = 0x20EA44u;
    // 0x20ea44: 0x10400004
    ctx->pc = 0x20EA44u;
    {
        const bool branch_taken_0x20ea44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ea44) {
            ctx->pc = 0x20EA58u;
            goto label_20ea58;
        }
    }
    ctx->pc = 0x20EA4Cu;
    // 0x20ea4c: 0x70008628
    ctx->pc = 0x20ea4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ea50: 0x10000010
    ctx->pc = 0x20EA50u;
    {
        const bool branch_taken_0x20ea50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EA54u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ea50) {
            ctx->pc = 0x20EA94u;
            goto label_20ea94;
        }
    }
    ctx->pc = 0x20EA58u;
label_20ea58:
    // 0x20ea58: 0x1240000e
    ctx->pc = 0x20EA58u;
    {
        const bool branch_taken_0x20ea58 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ea58) {
            ctx->pc = 0x20EA94u;
            goto label_20ea94;
        }
    }
    ctx->pc = 0x20EA60u;
    // 0x20ea60: 0x8ea21cbc
    ctx->pc = 0x20ea60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20ea64: 0x3c010050
    ctx->pc = 0x20ea64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20ea68: 0x72a02628
    ctx->pc = 0x20ea68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x20ea6c: 0x24050006
    ctx->pc = 0x20ea6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x20ea70: 0x24060001
    ctx->pc = 0x20ea70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ea74: 0xac4000b4
    ctx->pc = 0x20ea74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x20ea78: 0x8422e3ec
    ctx->pc = 0x20ea78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960108)));
    // 0x20ea7c: 0x2442ffff
    ctx->pc = 0x20ea7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20ea80: 0x3c010050
    ctx->pc = 0x20ea80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20ea84: 0xc083d34
    ctx->pc = 0x20EA84u;
    SET_GPR_U32(ctx, 31, 0x20EA8Cu);
    ctx->pc = 0x20EA88u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960108), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA8Cu; }
        else if (ctx->pc != 0x20EA8Cu) { ctx->pc = 0x20EA8Cu; }
    }
    if (ctx->pc != 0x20EA8Cu) { return; }
    ctx->pc = 0x20EA8Cu;
    // 0x20ea8c: 0x70008628
    ctx->pc = 0x20ea8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ea90: 0x70008e28
    ctx->pc = 0x20ea90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ea94:
    // 0x20ea94: 0x83848b90
    ctx->pc = 0x20ea94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x20ea98: 0x24030004
    ctx->pc = 0x20ea98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ea9c: 0x1083000a
    ctx->pc = 0x20EA9Cu;
    {
        const bool branch_taken_0x20ea9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ea9c) {
            ctx->pc = 0x20EAC8u;
            goto label_20eac8;
        }
    }
    ctx->pc = 0x20EAA4u;
    // 0x20eaa4: 0x8f838cb0
    ctx->pc = 0x20eaa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20eaa8: 0x30630002
    ctx->pc = 0x20eaa8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x20eaac: 0x10600006
    ctx->pc = 0x20EAACu;
    {
        const bool branch_taken_0x20eaac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20eaac) {
            ctx->pc = 0x20EAC8u;
            goto label_20eac8;
        }
    }
    ctx->pc = 0x20EAB4u;
    // 0x20eab4: 0x12000004
    ctx->pc = 0x20EAB4u;
    {
        const bool branch_taken_0x20eab4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x20eab4) {
            ctx->pc = 0x20EAC8u;
            goto label_20eac8;
        }
    }
    ctx->pc = 0x20EABCu;
    // 0x20eabc: 0x8ea327fc
    ctx->pc = 0x20eabcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 10236)));
    // 0x20eac0: 0x34630002
    ctx->pc = 0x20eac0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x20eac4: 0xaea327fc
    ctx->pc = 0x20eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10236), GPR_U32(ctx, 3));
label_20eac8:
    // 0x20eac8: 0x8ea31cbc
    ctx->pc = 0x20eac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20eacc: 0x1220000b
    ctx->pc = 0x20EACCu;
    {
        const bool branch_taken_0x20eacc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EAD0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 201), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20eacc) {
            ctx->pc = 0x20EAFCu;
            goto label_20eafc;
        }
    }
    ctx->pc = 0x20EAD4u;
    // 0x20ead4: 0x8f838cb0
    ctx->pc = 0x20ead4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20ead8: 0x30630002
    ctx->pc = 0x20ead8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x20eadc: 0x10600007
    ctx->pc = 0x20EADCu;
    {
        const bool branch_taken_0x20eadc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20eadc) {
            ctx->pc = 0x20EAFCu;
            goto label_20eafc;
        }
    }
    ctx->pc = 0x20EAE4u;
    // 0x20eae4: 0x8ea31cbc
    ctx->pc = 0x20eae4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 7356)));
    // 0x20eae8: 0x24040001
    ctx->pc = 0x20eae8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eaec: 0xa06400c9
    ctx->pc = 0x20eaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 201), (uint8_t)GPR_U32(ctx, 4));
    // 0x20eaf0: 0x8ea327fc
    ctx->pc = 0x20eaf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 10236)));
    // 0x20eaf4: 0x34630010
    ctx->pc = 0x20eaf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
    // 0x20eaf8: 0xaea327fc
    ctx->pc = 0x20eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10236), GPR_U32(ctx, 3));
label_20eafc:
    // 0x20eafc: 0x7bbf0060
    ctx->pc = 0x20eafcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20eb00: 0x7bb50050
    ctx->pc = 0x20eb00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20eb04: 0x7bb40040
    ctx->pc = 0x20eb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20eb08: 0x7bb30030
    ctx->pc = 0x20eb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20eb0c: 0x7bb20020
    ctx->pc = 0x20eb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20eb10: 0x7bb10010
    ctx->pc = 0x20eb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20eb14: 0x7bb00000
    ctx->pc = 0x20eb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eb18: 0x3e00008
    ctx->pc = 0x20EB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EB1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E944u: goto label_20e944;
            case 0x20E960u: goto label_20e960;
            case 0x20E9B4u: goto label_20e9b4;
            case 0x20E9E8u: goto label_20e9e8;
            case 0x20EA2Cu: goto label_20ea2c;
            case 0x20EA30u: goto label_20ea30;
            case 0x20EA58u: goto label_20ea58;
            case 0x20EA94u: goto label_20ea94;
            case 0x20EAC8u: goto label_20eac8;
            case 0x20EAFCu: goto label_20eafc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EB20u;
}
