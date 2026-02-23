#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PowerOnInitComm__Fv
// Address: 0x1e27e0 - 0x1e2920
void PowerOnInitComm__Fv_0x1e27e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PowerOnInitComm__Fv");


    ctx->pc = 0x1e27e0u;

    // 0x1e27e0: 0x27bdfff0
    ctx->pc = 0x1e27e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e27e4: 0x7fbf0000
    ctx->pc = 0x1e27e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e27e8: 0x3c010050
    ctx->pc = 0x1e27e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e27ec: 0x8022fec0
    ctx->pc = 0x1e27ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966976)));
    // 0x1e27f0: 0xc084e98
    ctx->pc = 0x1E27F0u;
    SET_GPR_U32(ctx, 31, 0x1E27F8u);
    ctx->pc = 0x1E27F4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937528), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x213A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerWorkInit__Fv_0x213a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27F8u; }
        else if (ctx->pc != 0x1E27F8u) { ctx->pc = 0x1E27F8u; }
    }
    if (ctx->pc != 0x1E27F8u) { return; }
    ctx->pc = 0x1E27F8u;
    // 0x1e27f8: 0x3c024270
    ctx->pc = 0x1e27f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17008 << 16));
    // 0x1e27fc: 0x3c010050
    ctx->pc = 0x1e27fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2800: 0xac22fb00
    ctx->pc = 0x1e2800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966016), GPR_U32(ctx, 2));
    // 0x1e2804: 0x3c010050
    ctx->pc = 0x1e2804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2808: 0xac22fb04
    ctx->pc = 0x1e2808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966020), GPR_U32(ctx, 2));
    // 0x1e280c: 0x3c010050
    ctx->pc = 0x1e280cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2810: 0xac22fb08
    ctx->pc = 0x1e2810u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966024), GPR_U32(ctx, 2));
    // 0x1e2814: 0x3c010050
    ctx->pc = 0x1e2814u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2818: 0xac22fb0c
    ctx->pc = 0x1e2818u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966028), GPR_U32(ctx, 2));
    // 0x1e281c: 0x3c020051
    ctx->pc = 0x1e281cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e2820: 0x244434f0
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1e2824: 0xaf808c48
    ctx->pc = 0x1e2824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
    // 0x1e2828: 0xaf808cd8
    ctx->pc = 0x1e2828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937816), GPR_U32(ctx, 0));
    // 0x1e282c: 0xc085e98
    ctx->pc = 0x1E282Cu;
    SET_GPR_U32(ctx, 31, 0x1E2834u);
    ctx->pc = 0x1E2830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938024), GPR_U32(ctx, 0));
    ctx->pc = 0x217A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13SoundMgrClassFv_0x217a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2834u; }
        else if (ctx->pc != 0x1E2834u) { ctx->pc = 0x1E2834u; }
    }
    if (ctx->pc != 0x1E2834u) { return; }
    ctx->pc = 0x1E2834u;
    // 0x1e2834: 0xc072fb8
    ctx->pc = 0x1E2834u;
    SET_GPR_U32(ctx, 31, 0x1E283Cu);
    ctx->pc = 0x1E2838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    ctx->pc = 0x1CBEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__15CamPathMgrClassFv_0x1cbee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E283Cu; }
        else if (ctx->pc != 0x1E283Cu) { ctx->pc = 0x1E283Cu; }
    }
    if (ctx->pc != 0x1E283Cu) { return; }
    ctx->pc = 0x1E283Cu;
    // 0x1e283c: 0xc07efc0
    ctx->pc = 0x1E283Cu;
    SET_GPR_U32(ctx, 31, 0x1E2844u);
    ctx->pc = 0x1E2840u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FBF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__11MotMgrClassFv_0x1fbf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2844u; }
        else if (ctx->pc != 0x1E2844u) { ctx->pc = 0x1E2844u; }
    }
    if (ctx->pc != 0x1E2844u) { return; }
    ctx->pc = 0x1E2844u;
    // 0x1e2844: 0x3c020051
    ctx->pc = 0x1e2844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e2848: 0xc07f368
    ctx->pc = 0x1E2848u;
    SET_GPR_U32(ctx, 31, 0x1E2850u);
    ctx->pc = 0x1E284Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FCDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__15OneSkinMgrClassFv_0x1fcda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2850u; }
        else if (ctx->pc != 0x1E2850u) { ctx->pc = 0x1E2850u; }
    }
    if (ctx->pc != 0x1E2850u) { return; }
    ctx->pc = 0x1E2850u;
    // 0x1e2850: 0xc07961c
    ctx->pc = 0x1E2850u;
    SET_GPR_U32(ctx, 31, 0x1E2858u);
    ctx->pc = 0x1E2854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    ctx->pc = 0x1E5870u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__16FaceAnimMgrClassFv_0x1e5870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2858u; }
        else if (ctx->pc != 0x1E2858u) { ctx->pc = 0x1E2858u; }
    }
    if (ctx->pc != 0x1E2858u) { return; }
    ctx->pc = 0x1E2858u;
    // 0x1e2858: 0xc078758
    ctx->pc = 0x1E2858u;
    SET_GPR_U32(ctx, 31, 0x1E2860u);
    ctx->pc = 0x1E285Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937820));
    ctx->pc = 0x1E1D60u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13EnVtxMgrClassFv_0x1e1d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2860u; }
        else if (ctx->pc != 0x1E2860u) { ctx->pc = 0x1E2860u; }
    }
    if (ctx->pc != 0x1E2860u) { return; }
    ctx->pc = 0x1E2860u;
    // 0x1e2860: 0xc074b80
    ctx->pc = 0x1E2860u;
    SET_GPR_U32(ctx, 31, 0x1E2868u);
    ctx->pc = 0x1E2864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
    ctx->pc = 0x1D2E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13ClVtxMgrClassFv_0x1d2e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2868u; }
        else if (ctx->pc != 0x1E2868u) { ctx->pc = 0x1E2868u; }
    }
    if (ctx->pc != 0x1E2868u) { return; }
    ctx->pc = 0x1E2868u;
    // 0x1e2868: 0xc074c90
    ctx->pc = 0x1E2868u;
    SET_GPR_U32(ctx, 31, 0x1E2870u);
    ctx->pc = 0x1E286Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937756));
    ctx->pc = 0x1D3240u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13ColliMgrClassFv_0x1d3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2870u; }
        else if (ctx->pc != 0x1E2870u) { ctx->pc = 0x1E2870u; }
    }
    if (ctx->pc != 0x1E2870u) { return; }
    ctx->pc = 0x1E2870u;
    // 0x1e2870: 0xc086bc4
    ctx->pc = 0x1E2870u;
    SET_GPR_U32(ctx, 31, 0x1E2878u);
    ctx->pc = 0x1E2874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938016));
    ctx->pc = 0x21AF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__14VibrationClassFv_0x21af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2878u; }
        else if (ctx->pc != 0x1E2878u) { ctx->pc = 0x1E2878u; }
    }
    if (ctx->pc != 0x1E2878u) { return; }
    ctx->pc = 0x1E2878u;
    // 0x1e2878: 0xc07aaa4
    ctx->pc = 0x1E2878u;
    SET_GPR_U32(ctx, 31, 0x1E2880u);
    ctx->pc = 0x1EAA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff__Fv_0x1eaa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2880u; }
        else if (ctx->pc != 0x1E2880u) { ctx->pc = 0x1E2880u; }
    }
    if (ctx->pc != 0x1E2880u) { return; }
    ctx->pc = 0x1E2880u;
    // 0x1e2880: 0x3c020050
    ctx->pc = 0x1e2880u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2884: 0x2444e510
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1e2888: 0xc07cdf8
    ctx->pc = 0x1E2888u;
    SET_GPR_U32(ctx, 31, 0x1E2890u);
    ctx->pc = 0x1E288Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F37E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13PauseMgrClassFi_0x1f37e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2890u; }
        else if (ctx->pc != 0x1E2890u) { ctx->pc = 0x1E2890u; }
    }
    if (ctx->pc != 0x1E2890u) { return; }
    ctx->pc = 0x1E2890u;
    // 0x1e2890: 0xc085560
    ctx->pc = 0x1E2890u;
    SET_GPR_U32(ctx, 31, 0x1E2898u);
    ctx->pc = 0x1E2894u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937988));
    ctx->pc = 0x215580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__16PostMainMgrClassFv_0x215580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2898u; }
        else if (ctx->pc != 0x1E2898u) { ctx->pc = 0x1E2898u; }
    }
    if (ctx->pc != 0x1E2898u) { return; }
    ctx->pc = 0x1E2898u;
    // 0x1e2898: 0x3c020051
    ctx->pc = 0x1e2898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e289c: 0xc085580
    ctx->pc = 0x1E289Cu;
    SET_GPR_U32(ctx, 31, 0x1E28A4u);
    ctx->pc = 0x1E28A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13504));
    ctx->pc = 0x215600u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__16PostRendMgrClassFv_0x215600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28A4u; }
        else if (ctx->pc != 0x1E28A4u) { ctx->pc = 0x1E28A4u; }
    }
    if (ctx->pc != 0x1E28A4u) { return; }
    ctx->pc = 0x1E28A4u;
    // 0x1e28a4: 0xc07bd24
    ctx->pc = 0x1E28A4u;
    SET_GPR_U32(ctx, 31, 0x1E28ACu);
    ctx->pc = 0x1EF490u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitPadAct__Fv_0x1ef490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28ACu; }
        else if (ctx->pc != 0x1E28ACu) { ctx->pc = 0x1E28ACu; }
    }
    if (ctx->pc != 0x1E28ACu) { return; }
    ctx->pc = 0x1E28ACu;
    // 0x1e28ac: 0x3c010050
    ctx->pc = 0x1e28acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e28b0: 0xa020dac9
    ctx->pc = 0x1e28b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957769), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e28b4: 0x3c010050
    ctx->pc = 0x1e28b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e28b8: 0xa420e3ec
    ctx->pc = 0x1e28b8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960108), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e28bc: 0x3c010050
    ctx->pc = 0x1e28bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e28c0: 0xa420e3e8
    ctx->pc = 0x1e28c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960104), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e28c4: 0x3c010050
    ctx->pc = 0x1e28c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e28c8: 0xa420e3ee
    ctx->pc = 0x1e28c8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960110), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e28cc: 0x3c010050
    ctx->pc = 0x1e28ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e28d0: 0xa3808b90
    ctx->pc = 0x1e28d0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937488), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e28d4: 0xc07cb28
    ctx->pc = 0x1E28D4u;
    SET_GPR_U32(ctx, 31, 0x1E28DCu);
    ctx->pc = 0x1E28D8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960106), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1F2CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_TrialDemo__Fv_0x1f2ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28DCu; }
        else if (ctx->pc != 0x1E28DCu) { ctx->pc = 0x1E28DCu; }
    }
    if (ctx->pc != 0x1E28DCu) { return; }
    ctx->pc = 0x1E28DCu;
    // 0x1e28dc: 0x10400006
    ctx->pc = 0x1E28DCu;
    {
        const bool branch_taken_0x1e28dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e28dc) {
            ctx->pc = 0x1E28F8u;
            goto label_1e28f8;
        }
    }
    ctx->pc = 0x1E28E4u;
    // 0x1e28e4: 0x8f848cb0
    ctx->pc = 0x1e28e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1e28e8: 0x2403fffd
    ctx->pc = 0x1e28e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1e28ec: 0x831824
    ctx->pc = 0x1e28ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e28f0: 0x10000004
    ctx->pc = 0x1E28F0u;
    {
        const bool branch_taken_0x1e28f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E28F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
        if (branch_taken_0x1e28f0) {
            ctx->pc = 0x1E2904u;
            goto label_1e2904;
        }
    }
    ctx->pc = 0x1E28F8u;
label_1e28f8:
    // 0x1e28f8: 0x8f838cb0
    ctx->pc = 0x1e28f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1e28fc: 0x34630002
    ctx->pc = 0x1e28fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1e2900: 0xaf838cb0
    ctx->pc = 0x1e2900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
label_1e2904:
    // 0x1e2904: 0x8f848cb0
    ctx->pc = 0x1e2904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x1e2908: 0x2403ffe3
    ctx->pc = 0x1e2908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x1e290c: 0x831824
    ctx->pc = 0x1e290cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e2910: 0xaf838cb0
    ctx->pc = 0x1e2910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 3));
    // 0x1e2914: 0x7bbf0000
    ctx->pc = 0x1e2914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2918: 0x3e00008
    ctx->pc = 0x1E2918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E291Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E28F8u: goto label_1e28f8;
            case 0x1E2904u: goto label_1e2904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2920u;
}
