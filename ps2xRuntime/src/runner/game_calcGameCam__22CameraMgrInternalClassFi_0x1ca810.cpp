#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: game_calcGameCam__22CameraMgrInternalClassFi
// Address: 0x1ca810 - 0x1caa4c
void game_calcGameCam__22CameraMgrInternalClassFi_0x1ca810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("game_calcGameCam__22CameraMgrInternalClassFi");


    ctx->pc = 0x1ca810u;

    // 0x1ca810: 0x27bdff70
    ctx->pc = 0x1ca810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ca814: 0x7fbf0040
    ctx->pc = 0x1ca814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ca818: 0x7fb30030
    ctx->pc = 0x1ca818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ca81c: 0x7fb20020
    ctx->pc = 0x1ca81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca820: 0x51840
    ctx->pc = 0x1ca820u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ca824: 0x7fb10010
    ctx->pc = 0x1ca824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca828: 0x651821
    ctx->pc = 0x1ca828u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ca82c: 0x7fb00000
    ctx->pc = 0x1ca82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca830: 0x31880
    ctx->pc = 0x1ca830u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca834: 0x651821
    ctx->pc = 0x1ca834u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ca838: 0x33900
    ctx->pc = 0x1ca838u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ca83c: 0x518c0
    ctx->pc = 0x1ca83cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ca840: 0x651821
    ctx->pc = 0x1ca840u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ca844: 0x31980
    ctx->pc = 0x1ca844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1ca848: 0x839021
    ctx->pc = 0x1ca848u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ca84c: 0x8f868c48
    ctx->pc = 0x1ca84cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ca850: 0x70a09e28
    ctx->pc = 0x1ca850u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ca854: 0xc71821
    ctx->pc = 0x1ca854u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ca858: 0x24700010
    ctx->pc = 0x1ca858u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ca85c: 0x86430158
    ctx->pc = 0x1ca85cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x1ca860: 0x4600073
    ctx->pc = 0x1CA860u;
    {
        const bool branch_taken_0x1ca860 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1CA864u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 336));
        if (branch_taken_0x1ca860) {
            ctx->pc = 0x1CAA30u;
            goto label_1caa30;
        }
    }
    ctx->pc = 0x1CA868u;
    // 0x1ca868: 0xc080a54
    ctx->pc = 0x1CA868u;
    SET_GPR_U32(ctx, 31, 0x1CA870u);
    ctx->pc = 0x202950u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_DemoPlay__Fv_0x202950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA870u; }
        else if (ctx->pc != 0x1CA870u) { ctx->pc = 0x1CA870u; }
    }
    if (ctx->pc != 0x1CA870u) { return; }
    ctx->pc = 0x1CA870u;
    // 0x1ca870: 0x14400004
    ctx->pc = 0x1CA870u;
    {
        const bool branch_taken_0x1ca870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CA874u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1ca870) {
            ctx->pc = 0x1CA884u;
            goto label_1ca884;
        }
    }
    ctx->pc = 0x1CA878u;
    // 0x1ca878: 0x8422e3e8
    ctx->pc = 0x1ca878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x1ca87c: 0x1040000e
    ctx->pc = 0x1CA87Cu;
    {
        const bool branch_taken_0x1ca87c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ca87c) {
            ctx->pc = 0x1CA8B8u;
            goto label_1ca8b8;
        }
    }
    ctx->pc = 0x1CA884u;
label_1ca884:
    // 0x1ca884: 0xc60100b4
    ctx->pc = 0x1ca884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca888: 0xc60000b0
    ctx->pc = 0x1ca888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca88c: 0x46010040
    ctx->pc = 0x1ca88cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca890: 0xe60100b0
    ctx->pc = 0x1ca890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1ca894: 0xc6200004
    ctx->pc = 0x1ca894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca898: 0x46800020
    ctx->pc = 0x1ca898u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ca89c: 0x46000834
    ctx->pc = 0x1ca89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca8a0: 0x0
    ctx->pc = 0x1ca8a0u;
    // NOP
    // 0x1ca8a4: 0x45010004
    ctx->pc = 0x1CA8A4u;
    {
        const bool branch_taken_0x1ca8a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA8A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
        if (branch_taken_0x1ca8a4) {
            ctx->pc = 0x1CA8B8u;
            goto label_1ca8b8;
        }
    }
    ctx->pc = 0x1CA8ACu;
    // 0x1ca8ac: 0xe60000b0
    ctx->pc = 0x1ca8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1ca8b0: 0x3442999a
    ctx->pc = 0x1ca8b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1ca8b4: 0xae0200b4
    ctx->pc = 0x1ca8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_1ca8b8:
    // 0x1ca8b8: 0x8e0200bc
    ctx->pc = 0x1ca8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca8bc: 0x10400034
    ctx->pc = 0x1CA8BCu;
    {
        const bool branch_taken_0x1ca8bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ca8bc) {
            ctx->pc = 0x1CA990u;
            goto label_1ca990;
        }
    }
    ctx->pc = 0x1CA8C4u;
    // 0x1ca8c4: 0x860500c0
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ca8c8: 0xc60c00b0
    ctx->pc = 0x1ca8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca8cc: 0x3c020050
    ctx->pc = 0x1ca8ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ca8d0: 0x131880
    ctx->pc = 0x1ca8d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ca8d4: 0x2442fb00
    ctx->pc = 0x1ca8d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x1ca8d8: 0x434821
    ctx->pc = 0x1ca8d8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca8dc: 0x27848c70
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1ca8e0: 0x27a60050
    ctx->pc = 0x1ca8e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ca8e4: 0x27a70070
    ctx->pc = 0x1ca8e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ca8e8: 0xc0731b8
    ctx->pc = 0x1CA8E8u;
    SET_GPR_U32(ctx, 31, 0x1CA8F0u);
    ctx->pc = 0x1CA8ECu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 148));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA8F0u; }
        else if (ctx->pc != 0x1CA8F0u) { ctx->pc = 0x1CA8F0u; }
    }
    if (ctx->pc != 0x1CA8F0u) { return; }
    ctx->pc = 0x1CA8F0u;
    // 0x1ca8f0: 0xc60c0080
    ctx->pc = 0x1ca8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca8f4: 0xc7ad0050
    ctx->pc = 0x1ca8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca8f8: 0x8e0500bc
    ctx->pc = 0x1ca8f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca8fc: 0xc0725bc
    ctx->pc = 0x1CA8FCu;
    SET_GPR_U32(ctx, 31, 0x1CA904u);
    ctx->pc = 0x1CA900u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA904u; }
        else if (ctx->pc != 0x1CA904u) { ctx->pc = 0x1CA904u; }
    }
    if (ctx->pc != 0x1CA904u) { return; }
    ctx->pc = 0x1CA904u;
    // 0x1ca904: 0xe6000080
    ctx->pc = 0x1ca904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1ca908: 0xc60c0084
    ctx->pc = 0x1ca908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca90c: 0xc7ad0054
    ctx->pc = 0x1ca90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca910: 0x8e0500bc
    ctx->pc = 0x1ca910u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca914: 0xc0725bc
    ctx->pc = 0x1CA914u;
    SET_GPR_U32(ctx, 31, 0x1CA91Cu);
    ctx->pc = 0x1CA918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA91Cu; }
        else if (ctx->pc != 0x1CA91Cu) { ctx->pc = 0x1CA91Cu; }
    }
    if (ctx->pc != 0x1CA91Cu) { return; }
    ctx->pc = 0x1CA91Cu;
    // 0x1ca91c: 0xe6000084
    ctx->pc = 0x1ca91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1ca920: 0xc60c0088
    ctx->pc = 0x1ca920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca924: 0xc7ad0058
    ctx->pc = 0x1ca924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca928: 0x8e0500bc
    ctx->pc = 0x1ca928u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca92c: 0xc0725bc
    ctx->pc = 0x1CA92Cu;
    SET_GPR_U32(ctx, 31, 0x1CA934u);
    ctx->pc = 0x1CA930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA934u; }
        else if (ctx->pc != 0x1CA934u) { ctx->pc = 0x1CA934u; }
    }
    if (ctx->pc != 0x1CA934u) { return; }
    ctx->pc = 0x1CA934u;
    // 0x1ca934: 0xe6000088
    ctx->pc = 0x1ca934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x1ca938: 0xc62c0024
    ctx->pc = 0x1ca938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca93c: 0xc7ad0070
    ctx->pc = 0x1ca93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca940: 0x8e0500bc
    ctx->pc = 0x1ca940u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca944: 0xc0725bc
    ctx->pc = 0x1CA944u;
    SET_GPR_U32(ctx, 31, 0x1CA94Cu);
    ctx->pc = 0x1CA948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA94Cu; }
        else if (ctx->pc != 0x1CA94Cu) { ctx->pc = 0x1CA94Cu; }
    }
    if (ctx->pc != 0x1CA94Cu) { return; }
    ctx->pc = 0x1CA94Cu;
    // 0x1ca94c: 0xe6200024
    ctx->pc = 0x1ca94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1ca950: 0xc62c0028
    ctx->pc = 0x1ca950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca954: 0xc7ad0074
    ctx->pc = 0x1ca954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca958: 0x8e0500bc
    ctx->pc = 0x1ca958u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca95c: 0xc0725bc
    ctx->pc = 0x1CA95Cu;
    SET_GPR_U32(ctx, 31, 0x1CA964u);
    ctx->pc = 0x1CA960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA964u; }
        else if (ctx->pc != 0x1CA964u) { ctx->pc = 0x1CA964u; }
    }
    if (ctx->pc != 0x1CA964u) { return; }
    ctx->pc = 0x1CA964u;
    // 0x1ca964: 0xe6200028
    ctx->pc = 0x1ca964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x1ca968: 0xc62c002c
    ctx->pc = 0x1ca968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca96c: 0xc7ad0078
    ctx->pc = 0x1ca96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca970: 0x8e0500bc
    ctx->pc = 0x1ca970u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca974: 0xc0725bc
    ctx->pc = 0x1CA974u;
    SET_GPR_U32(ctx, 31, 0x1CA97Cu);
    ctx->pc = 0x1CA978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C96F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InterDivPosI__Fffii_0x1c96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA97Cu; }
        else if (ctx->pc != 0x1CA97Cu) { ctx->pc = 0x1CA97Cu; }
    }
    if (ctx->pc != 0x1CA97Cu) { return; }
    ctx->pc = 0x1CA97Cu;
    // 0x1ca97c: 0xe620002c
    ctx->pc = 0x1ca97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1ca980: 0x8e0300bc
    ctx->pc = 0x1ca980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1ca984: 0x2463ffff
    ctx->pc = 0x1ca984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ca988: 0x1000000c
    ctx->pc = 0x1CA988u;
    {
        const bool branch_taken_0x1ca988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CA98Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
        if (branch_taken_0x1ca988) {
            ctx->pc = 0x1CA9BCu;
            goto label_1ca9bc;
        }
    }
    ctx->pc = 0x1CA990u;
label_1ca990:
    // 0x1ca990: 0x860500c0
    ctx->pc = 0x1ca990u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1ca994: 0xc60c00b0
    ctx->pc = 0x1ca994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca998: 0x3c020050
    ctx->pc = 0x1ca998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ca99c: 0x131880
    ctx->pc = 0x1ca99cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ca9a0: 0x2442fb00
    ctx->pc = 0x1ca9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x1ca9a4: 0x434821
    ctx->pc = 0x1ca9a4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca9a8: 0x27848c70
    ctx->pc = 0x1ca9a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    // 0x1ca9ac: 0x26060080
    ctx->pc = 0x1ca9acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 128));
    // 0x1ca9b0: 0x26270024
    ctx->pc = 0x1ca9b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 36));
    // 0x1ca9b4: 0xc0731b8
    ctx->pc = 0x1CA9B4u;
    SET_GPR_U32(ctx, 31, 0x1CA9BCu);
    ctx->pc = 0x1CA9B8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 148));
    ctx->pc = 0x1CC6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCameraPath__15CamPathMgrClassFifP4ANPOP4ANPOPiPf_0x1cc6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA9BCu; }
        else if (ctx->pc != 0x1CA9BCu) { ctx->pc = 0x1CA9BCu; }
    }
    if (ctx->pc != 0x1CA9BCu) { return; }
    ctx->pc = 0x1CA9BCu;
label_1ca9bc:
    // 0x1ca9bc: 0xc6200004
    ctx->pc = 0x1ca9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9c0: 0xc60100b0
    ctx->pc = 0x1ca9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9c4: 0x46800020
    ctx->pc = 0x1ca9c4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ca9c8: 0x46000834
    ctx->pc = 0x1ca9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca9cc: 0x0
    ctx->pc = 0x1ca9ccu;
    // NOP
    // 0x1ca9d0: 0x45010017
    ctx->pc = 0x1CA9D0u;
    {
        const bool branch_taken_0x1ca9d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA9D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1ca9d0) {
            ctx->pc = 0x1CAA30u;
            goto label_1caa30;
        }
    }
    ctx->pc = 0x1CA9D8u;
    // 0x1ca9d8: 0xa6240008
    ctx->pc = 0x1ca9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ca9dc: 0x70002e28
    ctx->pc = 0x1ca9dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ca9e0:
    // 0x1ca9e0: 0x86430194
    ctx->pc = 0x1ca9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x1ca9e4: 0x5464000f
    ctx->pc = 0x1CA9E4u;
    {
        const bool branch_taken_0x1ca9e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x1ca9e4) {
            ctx->pc = 0x1CA9E8u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1CAA24u;
            goto label_1caa24;
        }
    }
    ctx->pc = 0x1CA9ECu;
    // 0x1ca9ec: 0xc6000080
    ctx->pc = 0x1ca9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9f0: 0xe6400198
    ctx->pc = 0x1ca9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 408), bits); }
    // 0x1ca9f4: 0xc6000084
    ctx->pc = 0x1ca9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9f8: 0xe640019c
    ctx->pc = 0x1ca9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 412), bits); }
    // 0x1ca9fc: 0xc6000088
    ctx->pc = 0x1ca9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa00: 0xe64001a0
    ctx->pc = 0x1caa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x1caa04: 0xc6200024
    ctx->pc = 0x1caa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa08: 0xe64001b0
    ctx->pc = 0x1caa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 432), bits); }
    // 0x1caa0c: 0xc6200028
    ctx->pc = 0x1caa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa10: 0xe64001b4
    ctx->pc = 0x1caa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 436), bits); }
    // 0x1caa14: 0xc620002c
    ctx->pc = 0x1caa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caa18: 0xe64001b8
    ctx->pc = 0x1caa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
    // 0x1caa1c: 0x0
    ctx->pc = 0x1caa1cu;
    // NOP
    // 0x1caa20: 0x24a50001
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_1caa24:
    // 0x1caa24: 0x28a30003
    ctx->pc = 0x1caa24u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 3));
    // 0x1caa28: 0x1460ffed
    ctx->pc = 0x1CAA28u;
    {
        const bool branch_taken_0x1caa28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CAA2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 60));
        if (branch_taken_0x1caa28) {
            ctx->pc = 0x1CA9E0u;
            goto label_1ca9e0;
        }
    }
    ctx->pc = 0x1CAA30u;
label_1caa30:
    // 0x1caa30: 0x7bbf0040
    ctx->pc = 0x1caa30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1caa34: 0x7bb30030
    ctx->pc = 0x1caa34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1caa38: 0x7bb20020
    ctx->pc = 0x1caa38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1caa3c: 0x7bb10010
    ctx->pc = 0x1caa3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caa40: 0x7bb00000
    ctx->pc = 0x1caa40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caa44: 0x3e00008
    ctx->pc = 0x1CAA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAA48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA884u: goto label_1ca884;
            case 0x1CA8B8u: goto label_1ca8b8;
            case 0x1CA990u: goto label_1ca990;
            case 0x1CA9BCu: goto label_1ca9bc;
            case 0x1CA9E0u: goto label_1ca9e0;
            case 0x1CAA24u: goto label_1caa24;
            case 0x1CAA30u: goto label_1caa30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CAA4Cu;
}
