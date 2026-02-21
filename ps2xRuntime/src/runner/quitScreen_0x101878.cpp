#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: quitScreen
// Address: 0x101878 - 0x101cf8
void quitScreen_0x101878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101878u;

    // 0x101878: 0x27bdff80
    ctx->pc = 0x101878u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10187c: 0x24040003
    ctx->pc = 0x10187cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x101880: 0xffb60060
    ctx->pc = 0x101880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x101884: 0xffb50050
    ctx->pc = 0x101884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x101888: 0x3c160017
    ctx->pc = 0x101888u;
    SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
    // 0x10188c: 0xffb40040
    ctx->pc = 0x10188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x101890: 0x3c150017
    ctx->pc = 0x101890u;
    SET_GPR_U32(ctx, 21, ((uint32_t)23 << 16));
    // 0x101894: 0xffb30030
    ctx->pc = 0x101894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x101898: 0x3c140017
    ctx->pc = 0x101898u;
    SET_GPR_U32(ctx, 20, ((uint32_t)23 << 16));
    // 0x10189c: 0xffb20020
    ctx->pc = 0x10189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1018a0: 0x3c130017
    ctx->pc = 0x1018a0u;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
    // 0x1018a4: 0xffb10010
    ctx->pc = 0x1018a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1018a8: 0x3c120017
    ctx->pc = 0x1018a8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
    // 0x1018ac: 0xffb00000
    ctx->pc = 0x1018acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1018b0: 0x3c110017
    ctx->pc = 0x1018b0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x1018b4: 0xffbf0070
    ctx->pc = 0x1018b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1018b8: 0xc042c6e
    ctx->pc = 0x1018B8u;
    SET_GPR_U32(ctx, 31, 0x1018C0u);
    ctx->pc = 0x1018BCu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10B1B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StopSound_0x10b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1018C0u; }
    }
    if (ctx->pc != 0x1018C0u) { return; }
    ctx->pc = 0x1018C0u;
    // 0x1018c0: 0xc04292e
    ctx->pc = 0x1018C0u;
    SET_GPR_U32(ctx, 31, 0x1018C8u);
    ctx->pc = 0x10A4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memInit_0x10a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1018C8u; }
    }
    if (ctx->pc != 0x1018C8u) { return; }
    ctx->pc = 0x1018C8u;
    // 0x1018c8: 0x3c013f80
    ctx->pc = 0x1018c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1018cc: 0x44816000
    ctx->pc = 0x1018ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x1018d0: 0x3c057f7f
    ctx->pc = 0x1018d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32639 << 16));
    // 0x1018d4: 0x202d
    ctx->pc = 0x1018d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018d8: 0x34a57f7f
    ctx->pc = 0x1018d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 32639));
    // 0x1018dc: 0xc04003a
    ctx->pc = 0x1018DCu;
    SET_GPR_U32(ctx, 31, 0x1018E4u);
    ctx->pc = 0x1018E0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1000E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1018E4u; }
    }
    if (ctx->pc != 0x1018E4u) { return; }
    ctx->pc = 0x1018E4u;
    // 0x1018e4: 0xaf80814c
    ctx->pc = 0x1018e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
label_1018e8:
    // 0x1018e8: 0xc040c38
    ctx->pc = 0x1018E8u;
    SET_GPR_U32(ctx, 31, 0x1018F0u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1018F0u; }
    }
    if (ctx->pc != 0x1018F0u) { return; }
    ctx->pc = 0x1018F0u;
    // 0x1018f0: 0xc04297c
    ctx->pc = 0x1018F0u;
    SET_GPR_U32(ctx, 31, 0x1018F8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1018F8u; }
    }
    if (ctx->pc != 0x1018F8u) { return; }
    ctx->pc = 0x1018F8u;
    // 0x1018f8: 0x40202d
    ctx->pc = 0x1018f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1018fc: 0x282d
    ctx->pc = 0x1018fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101900: 0x24060078
    ctx->pc = 0x101900u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 120));
    // 0x101904: 0x24070280
    ctx->pc = 0x101904u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101908: 0x24080200
    ctx->pc = 0x101908u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x10190c: 0x24090043
    ctx->pc = 0x10190cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101910: 0xc0426c4
    ctx->pc = 0x101910u;
    SET_GPR_U32(ctx, 31, 0x101918u);
    ctx->pc = 0x101914u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 22), 11016));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101918u; }
    }
    if (ctx->pc != 0x101918u) { return; }
    ctx->pc = 0x101918u;
    // 0x101918: 0xc04295e
    ctx->pc = 0x101918u;
    SET_GPR_U32(ctx, 31, 0x101920u);
    ctx->pc = 0x10191Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101920u; }
    }
    if (ctx->pc != 0x101920u) { return; }
    ctx->pc = 0x101920u;
    // 0x101920: 0xc04297c
    ctx->pc = 0x101920u;
    SET_GPR_U32(ctx, 31, 0x101928u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101928u; }
    }
    if (ctx->pc != 0x101928u) { return; }
    ctx->pc = 0x101928u;
    // 0x101928: 0x40202d
    ctx->pc = 0x101928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10192c: 0x282d
    ctx->pc = 0x10192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101930: 0x2406008c
    ctx->pc = 0x101930u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 140));
    // 0x101934: 0x24070280
    ctx->pc = 0x101934u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101938: 0x24080200
    ctx->pc = 0x101938u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x10193c: 0x24090043
    ctx->pc = 0x10193cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101940: 0xc0426c4
    ctx->pc = 0x101940u;
    SET_GPR_U32(ctx, 31, 0x101948u);
    ctx->pc = 0x101944u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 21), 11032));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101948u; }
    }
    if (ctx->pc != 0x101948u) { return; }
    ctx->pc = 0x101948u;
    // 0x101948: 0xc04295e
    ctx->pc = 0x101948u;
    SET_GPR_U32(ctx, 31, 0x101950u);
    ctx->pc = 0x10194Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101950u; }
    }
    if (ctx->pc != 0x101950u) { return; }
    ctx->pc = 0x101950u;
    // 0x101950: 0xc04297c
    ctx->pc = 0x101950u;
    SET_GPR_U32(ctx, 31, 0x101958u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101958u; }
    }
    if (ctx->pc != 0x101958u) { return; }
    ctx->pc = 0x101958u;
    // 0x101958: 0x40202d
    ctx->pc = 0x101958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10195c: 0x282d
    ctx->pc = 0x10195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101960: 0x240600dc
    ctx->pc = 0x101960u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 220));
    // 0x101964: 0x24070280
    ctx->pc = 0x101964u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101968: 0x24080200
    ctx->pc = 0x101968u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x10196c: 0x24090043
    ctx->pc = 0x10196cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101970: 0xc0426c4
    ctx->pc = 0x101970u;
    SET_GPR_U32(ctx, 31, 0x101978u);
    ctx->pc = 0x101974u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 20), 11048));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101978u; }
    }
    if (ctx->pc != 0x101978u) { return; }
    ctx->pc = 0x101978u;
    // 0x101978: 0xc04295e
    ctx->pc = 0x101978u;
    SET_GPR_U32(ctx, 31, 0x101980u);
    ctx->pc = 0x10197Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101980u; }
    }
    if (ctx->pc != 0x101980u) { return; }
    ctx->pc = 0x101980u;
    // 0x101980: 0xc04297c
    ctx->pc = 0x101980u;
    SET_GPR_U32(ctx, 31, 0x101988u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101988u; }
    }
    if (ctx->pc != 0x101988u) { return; }
    ctx->pc = 0x101988u;
    // 0x101988: 0x40202d
    ctx->pc = 0x101988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10198c: 0x282d
    ctx->pc = 0x10198cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101990: 0x240600f0
    ctx->pc = 0x101990u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    // 0x101994: 0x24070280
    ctx->pc = 0x101994u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101998: 0x24080200
    ctx->pc = 0x101998u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x10199c: 0x24090043
    ctx->pc = 0x10199cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1019a0: 0xc0426c4
    ctx->pc = 0x1019A0u;
    SET_GPR_U32(ctx, 31, 0x1019A8u);
    ctx->pc = 0x1019A4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 11072));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019A8u; }
    }
    if (ctx->pc != 0x1019A8u) { return; }
    ctx->pc = 0x1019A8u;
    // 0x1019a8: 0xc04295e
    ctx->pc = 0x1019A8u;
    SET_GPR_U32(ctx, 31, 0x1019B0u);
    ctx->pc = 0x1019ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019B0u; }
    }
    if (ctx->pc != 0x1019B0u) { return; }
    ctx->pc = 0x1019B0u;
    // 0x1019b0: 0xc04297c
    ctx->pc = 0x1019B0u;
    SET_GPR_U32(ctx, 31, 0x1019B8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019B8u; }
    }
    if (ctx->pc != 0x1019B8u) { return; }
    ctx->pc = 0x1019B8u;
    // 0x1019b8: 0x40202d
    ctx->pc = 0x1019b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019bc: 0x282d
    ctx->pc = 0x1019bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019c0: 0x24060140
    ctx->pc = 0x1019c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1019c4: 0x24070280
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1019c8: 0x24080200
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1019cc: 0x24090043
    ctx->pc = 0x1019ccu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1019d0: 0xc0426c4
    ctx->pc = 0x1019D0u;
    SET_GPR_U32(ctx, 31, 0x1019D8u);
    ctx->pc = 0x1019D4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 11088));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019D8u; }
    }
    if (ctx->pc != 0x1019D8u) { return; }
    ctx->pc = 0x1019D8u;
    // 0x1019d8: 0xc04295e
    ctx->pc = 0x1019D8u;
    SET_GPR_U32(ctx, 31, 0x1019E0u);
    ctx->pc = 0x1019DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019E0u; }
    }
    if (ctx->pc != 0x1019E0u) { return; }
    ctx->pc = 0x1019E0u;
    // 0x1019e0: 0xc04297c
    ctx->pc = 0x1019E0u;
    SET_GPR_U32(ctx, 31, 0x1019E8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1019E8u; }
    }
    if (ctx->pc != 0x1019E8u) { return; }
    ctx->pc = 0x1019E8u;
    // 0x1019e8: 0x40202d
    ctx->pc = 0x1019e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019ec: 0x282d
    ctx->pc = 0x1019ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019f0: 0x24060154
    ctx->pc = 0x1019f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 340));
    // 0x1019f4: 0x24070280
    ctx->pc = 0x1019f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1019f8: 0x24080200
    ctx->pc = 0x1019f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1019fc: 0x24090043
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101a00: 0xc0426c4
    ctx->pc = 0x101A00u;
    SET_GPR_U32(ctx, 31, 0x101A08u);
    ctx->pc = 0x101A04u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 11104));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A08u; }
    }
    if (ctx->pc != 0x101A08u) { return; }
    ctx->pc = 0x101A08u;
    // 0x101a08: 0xc04295e
    ctx->pc = 0x101A08u;
    SET_GPR_U32(ctx, 31, 0x101A10u);
    ctx->pc = 0x101A0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A10u; }
    }
    if (ctx->pc != 0x101A10u) { return; }
    ctx->pc = 0x101A10u;
    // 0x101a10: 0xc042970
    ctx->pc = 0x101A10u;
    SET_GPR_U32(ctx, 31, 0x101A18u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A18u; }
    }
    if (ctx->pc != 0x101A18u) { return; }
    ctx->pc = 0x101A18u;
    // 0x101a18: 0xc042378
    ctx->pc = 0x101A18u;
    SET_GPR_U32(ctx, 31, 0x101A20u);
    ctx->pc = 0x101A1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A20u; }
    }
    if (ctx->pc != 0x101A20u) { return; }
    ctx->pc = 0x101A20u;
    // 0x101a20: 0xc0414e2
    ctx->pc = 0x101A20u;
    SET_GPR_U32(ctx, 31, 0x101A28u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A28u; }
    }
    if (ctx->pc != 0x101A28u) { return; }
    ctx->pc = 0x101A28u;
    // 0x101a28: 0x8f82814c
    ctx->pc = 0x101a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101a2c: 0x2842007f
    ctx->pc = 0x101a2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 127));
    // 0x101a30: 0x1440ffad
    ctx->pc = 0x101A30u;
    {
        const bool branch_taken_0x101a30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x101a30) {
            ctx->pc = 0x1018E8u;
            goto label_1018e8;
        }
    }
    ctx->pc = 0x101A38u;
label_101a38:
    // 0x101a38: 0xc040c38
    ctx->pc = 0x101A38u;
    SET_GPR_U32(ctx, 31, 0x101A40u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A40u; }
    }
    if (ctx->pc != 0x101A40u) { return; }
    ctx->pc = 0x101A40u;
    // 0x101a40: 0xc04297c
    ctx->pc = 0x101A40u;
    SET_GPR_U32(ctx, 31, 0x101A48u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A48u; }
    }
    if (ctx->pc != 0x101A48u) { return; }
    ctx->pc = 0x101A48u;
    // 0x101a48: 0x40202d
    ctx->pc = 0x101a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a4c: 0x282d
    ctx->pc = 0x101a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a50: 0x24060078
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 120));
    // 0x101a54: 0x24070280
    ctx->pc = 0x101a54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101a58: 0x24080200
    ctx->pc = 0x101a58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101a5c: 0x24090043
    ctx->pc = 0x101a5cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101a60: 0xc0426c4
    ctx->pc = 0x101A60u;
    SET_GPR_U32(ctx, 31, 0x101A68u);
    ctx->pc = 0x101A64u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 22), 11016));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A68u; }
    }
    if (ctx->pc != 0x101A68u) { return; }
    ctx->pc = 0x101A68u;
    // 0x101a68: 0xc04295e
    ctx->pc = 0x101A68u;
    SET_GPR_U32(ctx, 31, 0x101A70u);
    ctx->pc = 0x101A6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A70u; }
    }
    if (ctx->pc != 0x101A70u) { return; }
    ctx->pc = 0x101A70u;
    // 0x101a70: 0xc04297c
    ctx->pc = 0x101A70u;
    SET_GPR_U32(ctx, 31, 0x101A78u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A78u; }
    }
    if (ctx->pc != 0x101A78u) { return; }
    ctx->pc = 0x101A78u;
    // 0x101a78: 0x40202d
    ctx->pc = 0x101a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a7c: 0x282d
    ctx->pc = 0x101a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a80: 0x2406008c
    ctx->pc = 0x101a80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 140));
    // 0x101a84: 0x24070280
    ctx->pc = 0x101a84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101a88: 0x24080200
    ctx->pc = 0x101a88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101a8c: 0x24090043
    ctx->pc = 0x101a8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101a90: 0xc0426c4
    ctx->pc = 0x101A90u;
    SET_GPR_U32(ctx, 31, 0x101A98u);
    ctx->pc = 0x101A94u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 21), 11032));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101A98u; }
    }
    if (ctx->pc != 0x101A98u) { return; }
    ctx->pc = 0x101A98u;
    // 0x101a98: 0xc04295e
    ctx->pc = 0x101A98u;
    SET_GPR_U32(ctx, 31, 0x101AA0u);
    ctx->pc = 0x101A9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AA0u; }
    }
    if (ctx->pc != 0x101AA0u) { return; }
    ctx->pc = 0x101AA0u;
    // 0x101aa0: 0xc04297c
    ctx->pc = 0x101AA0u;
    SET_GPR_U32(ctx, 31, 0x101AA8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AA8u; }
    }
    if (ctx->pc != 0x101AA8u) { return; }
    ctx->pc = 0x101AA8u;
    // 0x101aa8: 0x40202d
    ctx->pc = 0x101aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101aac: 0x282d
    ctx->pc = 0x101aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ab0: 0x240600dc
    ctx->pc = 0x101ab0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 220));
    // 0x101ab4: 0x24070280
    ctx->pc = 0x101ab4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101ab8: 0x24080200
    ctx->pc = 0x101ab8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101abc: 0x24090043
    ctx->pc = 0x101abcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101ac0: 0xc0426c4
    ctx->pc = 0x101AC0u;
    SET_GPR_U32(ctx, 31, 0x101AC8u);
    ctx->pc = 0x101AC4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 20), 11048));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AC8u; }
    }
    if (ctx->pc != 0x101AC8u) { return; }
    ctx->pc = 0x101AC8u;
    // 0x101ac8: 0xc04295e
    ctx->pc = 0x101AC8u;
    SET_GPR_U32(ctx, 31, 0x101AD0u);
    ctx->pc = 0x101ACCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AD0u; }
    }
    if (ctx->pc != 0x101AD0u) { return; }
    ctx->pc = 0x101AD0u;
    // 0x101ad0: 0xc04297c
    ctx->pc = 0x101AD0u;
    SET_GPR_U32(ctx, 31, 0x101AD8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AD8u; }
    }
    if (ctx->pc != 0x101AD8u) { return; }
    ctx->pc = 0x101AD8u;
    // 0x101ad8: 0x40202d
    ctx->pc = 0x101ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101adc: 0x282d
    ctx->pc = 0x101adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ae0: 0x240600f0
    ctx->pc = 0x101ae0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    // 0x101ae4: 0x24070280
    ctx->pc = 0x101ae4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101ae8: 0x24080200
    ctx->pc = 0x101ae8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101aec: 0x24090043
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101af0: 0xc0426c4
    ctx->pc = 0x101AF0u;
    SET_GPR_U32(ctx, 31, 0x101AF8u);
    ctx->pc = 0x101AF4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 11072));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101AF8u; }
    }
    if (ctx->pc != 0x101AF8u) { return; }
    ctx->pc = 0x101AF8u;
    // 0x101af8: 0xc04295e
    ctx->pc = 0x101AF8u;
    SET_GPR_U32(ctx, 31, 0x101B00u);
    ctx->pc = 0x101AFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B00u; }
    }
    if (ctx->pc != 0x101B00u) { return; }
    ctx->pc = 0x101B00u;
    // 0x101b00: 0xc04297c
    ctx->pc = 0x101B00u;
    SET_GPR_U32(ctx, 31, 0x101B08u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B08u; }
    }
    if (ctx->pc != 0x101B08u) { return; }
    ctx->pc = 0x101B08u;
    // 0x101b08: 0x40202d
    ctx->pc = 0x101b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b0c: 0x282d
    ctx->pc = 0x101b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b10: 0x24060140
    ctx->pc = 0x101b10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 320));
    // 0x101b14: 0x24070280
    ctx->pc = 0x101b14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101b18: 0x24080200
    ctx->pc = 0x101b18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101b1c: 0x24090043
    ctx->pc = 0x101b1cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101b20: 0xc0426c4
    ctx->pc = 0x101B20u;
    SET_GPR_U32(ctx, 31, 0x101B28u);
    ctx->pc = 0x101B24u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 11088));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B28u; }
    }
    if (ctx->pc != 0x101B28u) { return; }
    ctx->pc = 0x101B28u;
    // 0x101b28: 0xc04295e
    ctx->pc = 0x101B28u;
    SET_GPR_U32(ctx, 31, 0x101B30u);
    ctx->pc = 0x101B2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B30u; }
    }
    if (ctx->pc != 0x101B30u) { return; }
    ctx->pc = 0x101B30u;
    // 0x101b30: 0xc04297c
    ctx->pc = 0x101B30u;
    SET_GPR_U32(ctx, 31, 0x101B38u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B38u; }
    }
    if (ctx->pc != 0x101B38u) { return; }
    ctx->pc = 0x101B38u;
    // 0x101b38: 0x40202d
    ctx->pc = 0x101b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b3c: 0x282d
    ctx->pc = 0x101b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b40: 0x24060154
    ctx->pc = 0x101b40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 340));
    // 0x101b44: 0x24070280
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101b48: 0x24080200
    ctx->pc = 0x101b48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101b4c: 0x24090043
    ctx->pc = 0x101b4cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101b50: 0xc0426c4
    ctx->pc = 0x101B50u;
    SET_GPR_U32(ctx, 31, 0x101B58u);
    ctx->pc = 0x101B54u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 11104));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B58u; }
    }
    if (ctx->pc != 0x101B58u) { return; }
    ctx->pc = 0x101B58u;
    // 0x101b58: 0xc04295e
    ctx->pc = 0x101B58u;
    SET_GPR_U32(ctx, 31, 0x101B60u);
    ctx->pc = 0x101B5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B60u; }
    }
    if (ctx->pc != 0x101B60u) { return; }
    ctx->pc = 0x101B60u;
    // 0x101b60: 0xc042970
    ctx->pc = 0x101B60u;
    SET_GPR_U32(ctx, 31, 0x101B68u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B68u; }
    }
    if (ctx->pc != 0x101B68u) { return; }
    ctx->pc = 0x101B68u;
    // 0x101b68: 0xc0414e2
    ctx->pc = 0x101B68u;
    SET_GPR_U32(ctx, 31, 0x101B70u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B70u; }
    }
    if (ctx->pc != 0x101B70u) { return; }
    ctx->pc = 0x101B70u;
    // 0x101b70: 0x200182d
    ctx->pc = 0x101b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b74: 0x286200fa
    ctx->pc = 0x101b74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 250));
    // 0x101b78: 0x1440ffaf
    ctx->pc = 0x101B78u;
    {
        const bool branch_taken_0x101b78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101B7Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x101b78) {
            ctx->pc = 0x101A38u;
            goto label_101a38;
        }
    }
    ctx->pc = 0x101B80u;
    // 0x101b80: 0x2402007f
    ctx->pc = 0x101b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x101b84: 0xaf82814c
    ctx->pc = 0x101b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
label_101b88:
    // 0x101b88: 0xc040c38
    ctx->pc = 0x101B88u;
    SET_GPR_U32(ctx, 31, 0x101B90u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B90u; }
    }
    if (ctx->pc != 0x101B90u) { return; }
    ctx->pc = 0x101B90u;
    // 0x101b90: 0xc04297c
    ctx->pc = 0x101B90u;
    SET_GPR_U32(ctx, 31, 0x101B98u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101B98u; }
    }
    if (ctx->pc != 0x101B98u) { return; }
    ctx->pc = 0x101B98u;
    // 0x101b98: 0x40202d
    ctx->pc = 0x101b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b9c: 0x282d
    ctx->pc = 0x101b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ba0: 0x24060078
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 120));
    // 0x101ba4: 0x24070280
    ctx->pc = 0x101ba4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101ba8: 0x24080200
    ctx->pc = 0x101ba8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101bac: 0x24090043
    ctx->pc = 0x101bacu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101bb0: 0xc0426c4
    ctx->pc = 0x101BB0u;
    SET_GPR_U32(ctx, 31, 0x101BB8u);
    ctx->pc = 0x101BB4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 22), 11016));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BB8u; }
    }
    if (ctx->pc != 0x101BB8u) { return; }
    ctx->pc = 0x101BB8u;
    // 0x101bb8: 0xc04295e
    ctx->pc = 0x101BB8u;
    SET_GPR_U32(ctx, 31, 0x101BC0u);
    ctx->pc = 0x101BBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BC0u; }
    }
    if (ctx->pc != 0x101BC0u) { return; }
    ctx->pc = 0x101BC0u;
    // 0x101bc0: 0xc04297c
    ctx->pc = 0x101BC0u;
    SET_GPR_U32(ctx, 31, 0x101BC8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BC8u; }
    }
    if (ctx->pc != 0x101BC8u) { return; }
    ctx->pc = 0x101BC8u;
    // 0x101bc8: 0x40202d
    ctx->pc = 0x101bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bcc: 0x282d
    ctx->pc = 0x101bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bd0: 0x2406008c
    ctx->pc = 0x101bd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 140));
    // 0x101bd4: 0x24070280
    ctx->pc = 0x101bd4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101bd8: 0x24080200
    ctx->pc = 0x101bd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101bdc: 0x24090043
    ctx->pc = 0x101bdcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101be0: 0xc0426c4
    ctx->pc = 0x101BE0u;
    SET_GPR_U32(ctx, 31, 0x101BE8u);
    ctx->pc = 0x101BE4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 21), 11032));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BE8u; }
    }
    if (ctx->pc != 0x101BE8u) { return; }
    ctx->pc = 0x101BE8u;
    // 0x101be8: 0xc04295e
    ctx->pc = 0x101BE8u;
    SET_GPR_U32(ctx, 31, 0x101BF0u);
    ctx->pc = 0x101BECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BF0u; }
    }
    if (ctx->pc != 0x101BF0u) { return; }
    ctx->pc = 0x101BF0u;
    // 0x101bf0: 0xc04297c
    ctx->pc = 0x101BF0u;
    SET_GPR_U32(ctx, 31, 0x101BF8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101BF8u; }
    }
    if (ctx->pc != 0x101BF8u) { return; }
    ctx->pc = 0x101BF8u;
    // 0x101bf8: 0x40202d
    ctx->pc = 0x101bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bfc: 0x282d
    ctx->pc = 0x101bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c00: 0x240600dc
    ctx->pc = 0x101c00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 220));
    // 0x101c04: 0x24070280
    ctx->pc = 0x101c04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101c08: 0x24080200
    ctx->pc = 0x101c08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101c0c: 0x24090043
    ctx->pc = 0x101c0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101c10: 0xc0426c4
    ctx->pc = 0x101C10u;
    SET_GPR_U32(ctx, 31, 0x101C18u);
    ctx->pc = 0x101C14u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 20), 11048));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C18u; }
    }
    if (ctx->pc != 0x101C18u) { return; }
    ctx->pc = 0x101C18u;
    // 0x101c18: 0xc04295e
    ctx->pc = 0x101C18u;
    SET_GPR_U32(ctx, 31, 0x101C20u);
    ctx->pc = 0x101C1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C20u; }
    }
    if (ctx->pc != 0x101C20u) { return; }
    ctx->pc = 0x101C20u;
    // 0x101c20: 0xc04297c
    ctx->pc = 0x101C20u;
    SET_GPR_U32(ctx, 31, 0x101C28u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C28u; }
    }
    if (ctx->pc != 0x101C28u) { return; }
    ctx->pc = 0x101C28u;
    // 0x101c28: 0x40202d
    ctx->pc = 0x101c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c2c: 0x282d
    ctx->pc = 0x101c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c30: 0x240600f0
    ctx->pc = 0x101c30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 240));
    // 0x101c34: 0x24070280
    ctx->pc = 0x101c34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101c38: 0x24080200
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101c3c: 0x24090043
    ctx->pc = 0x101c3cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101c40: 0xc0426c4
    ctx->pc = 0x101C40u;
    SET_GPR_U32(ctx, 31, 0x101C48u);
    ctx->pc = 0x101C44u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 19), 11072));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C48u; }
    }
    if (ctx->pc != 0x101C48u) { return; }
    ctx->pc = 0x101C48u;
    // 0x101c48: 0xc04295e
    ctx->pc = 0x101C48u;
    SET_GPR_U32(ctx, 31, 0x101C50u);
    ctx->pc = 0x101C4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C50u; }
    }
    if (ctx->pc != 0x101C50u) { return; }
    ctx->pc = 0x101C50u;
    // 0x101c50: 0xc04297c
    ctx->pc = 0x101C50u;
    SET_GPR_U32(ctx, 31, 0x101C58u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C58u; }
    }
    if (ctx->pc != 0x101C58u) { return; }
    ctx->pc = 0x101C58u;
    // 0x101c58: 0x40202d
    ctx->pc = 0x101c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c5c: 0x282d
    ctx->pc = 0x101c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c60: 0x24060140
    ctx->pc = 0x101c60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 320));
    // 0x101c64: 0x24070280
    ctx->pc = 0x101c64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101c68: 0x24080200
    ctx->pc = 0x101c68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101c6c: 0x24090043
    ctx->pc = 0x101c6cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101c70: 0xc0426c4
    ctx->pc = 0x101C70u;
    SET_GPR_U32(ctx, 31, 0x101C78u);
    ctx->pc = 0x101C74u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 18), 11088));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C78u; }
    }
    if (ctx->pc != 0x101C78u) { return; }
    ctx->pc = 0x101C78u;
    // 0x101c78: 0xc04295e
    ctx->pc = 0x101C78u;
    SET_GPR_U32(ctx, 31, 0x101C80u);
    ctx->pc = 0x101C7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C80u; }
    }
    if (ctx->pc != 0x101C80u) { return; }
    ctx->pc = 0x101C80u;
    // 0x101c80: 0xc04297c
    ctx->pc = 0x101C80u;
    SET_GPR_U32(ctx, 31, 0x101C88u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101C88u; }
    }
    if (ctx->pc != 0x101C88u) { return; }
    ctx->pc = 0x101C88u;
    // 0x101c88: 0x40202d
    ctx->pc = 0x101c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c8c: 0x282d
    ctx->pc = 0x101c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c90: 0x24060154
    ctx->pc = 0x101c90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 340));
    // 0x101c94: 0x24070280
    ctx->pc = 0x101c94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101c98: 0x24080200
    ctx->pc = 0x101c98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101c9c: 0x24090043
    ctx->pc = 0x101c9cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101ca0: 0xc0426c4
    ctx->pc = 0x101CA0u;
    SET_GPR_U32(ctx, 31, 0x101CA8u);
    ctx->pc = 0x101CA4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 11104));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CA8u; }
    }
    if (ctx->pc != 0x101CA8u) { return; }
    ctx->pc = 0x101CA8u;
    // 0x101ca8: 0xc04295e
    ctx->pc = 0x101CA8u;
    SET_GPR_U32(ctx, 31, 0x101CB0u);
    ctx->pc = 0x101CACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CB0u; }
    }
    if (ctx->pc != 0x101CB0u) { return; }
    ctx->pc = 0x101CB0u;
    // 0x101cb0: 0xc042970
    ctx->pc = 0x101CB0u;
    SET_GPR_U32(ctx, 31, 0x101CB8u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CB8u; }
    }
    if (ctx->pc != 0x101CB8u) { return; }
    ctx->pc = 0x101CB8u;
    // 0x101cb8: 0xc04238e
    ctx->pc = 0x101CB8u;
    SET_GPR_U32(ctx, 31, 0x101CC0u);
    ctx->pc = 0x101CBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CC0u; }
    }
    if (ctx->pc != 0x101CC0u) { return; }
    ctx->pc = 0x101CC0u;
    // 0x101cc0: 0xc0414e2
    ctx->pc = 0x101CC0u;
    SET_GPR_U32(ctx, 31, 0x101CC8u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CC8u; }
    }
    if (ctx->pc != 0x101CC8u) { return; }
    ctx->pc = 0x101CC8u;
    // 0x101cc8: 0x8f82814c
    ctx->pc = 0x101cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101ccc: 0x1c40ffae
    ctx->pc = 0x101CCCu;
    {
        const bool branch_taken_0x101ccc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x101CD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x101ccc) {
            ctx->pc = 0x101B88u;
            goto label_101b88;
        }
    }
    ctx->pc = 0x101CD4u;
    // 0x101cd4: 0xdfb60060
    ctx->pc = 0x101cd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101cd8: 0xdfb50050
    ctx->pc = 0x101cd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101cdc: 0xdfb40040
    ctx->pc = 0x101cdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101ce0: 0xdfb30030
    ctx->pc = 0x101ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101ce4: 0xdfb20020
    ctx->pc = 0x101ce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101ce8: 0xdfb10010
    ctx->pc = 0x101ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101cec: 0xdfb00000
    ctx->pc = 0x101cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101cf0: 0x8042c86
    ctx->pc = 0x101CF0u;
    ctx->pc = 0x101CF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x10B218u;
    StopAllSounds_0x10b218(rdram, ctx, runtime); return;
    ctx->pc = 0x101CF8u;
}
