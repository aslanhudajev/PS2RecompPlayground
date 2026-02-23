#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initDrumcanSmoke__9FcvEffectFv
// Address: 0x1dc8d0 - 0x1dc9cc
void initDrumcanSmoke__9FcvEffectFv_0x1dc8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initDrumcanSmoke__9FcvEffectFv");


    ctx->pc = 0x1dc8d0u;

    // 0x1dc8d0: 0x27bdffb0
    ctx->pc = 0x1dc8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dc8d4: 0x7fbf0040
    ctx->pc = 0x1dc8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dc8d8: 0x7fb30030
    ctx->pc = 0x1dc8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc8dc: 0x7fb20020
    ctx->pc = 0x1dc8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc8e0: 0x7fb10010
    ctx->pc = 0x1dc8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc8e4: 0x70809628
    ctx->pc = 0x1dc8e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc8e8: 0x24050012
    ctx->pc = 0x1dc8e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1dc8ec: 0xc0761c4
    ctx->pc = 0x1DC8ECu;
    SET_GPR_U32(ctx, 31, 0x1DC8F4u);
    ctx->pc = 0x1DC8F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8F4u; }
        else if (ctx->pc != 0x1DC8F4u) { ctx->pc = 0x1DC8F4u; }
    }
    if (ctx->pc != 0x1DC8F4u) { return; }
    ctx->pc = 0x1DC8F4u;
    // 0x1dc8f4: 0xae420054
    ctx->pc = 0x1dc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1dc8f8: 0x3c034248
    ctx->pc = 0x1dc8f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16968 << 16));
    // 0x1dc8fc: 0xae430028
    ctx->pc = 0x1dc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1dc900: 0x70008628
    ctx->pc = 0x1dc900u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc904: 0x1000001e
    ctx->pc = 0x1DC904u;
    {
        const bool branch_taken_0x1dc904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC908u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc904) {
            ctx->pc = 0x1DC980u;
            goto label_1dc980;
        }
    }
    ctx->pc = 0x1DC90Cu;
label_1dc90c:
    // 0x1dc90c: 0xc07f208
    ctx->pc = 0x1DC90Cu;
    SET_GPR_U32(ctx, 31, 0x1DC914u);
    ctx->pc = 0x1DC910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC914u; }
        else if (ctx->pc != 0x1DC914u) { ctx->pc = 0x1DC914u; }
    }
    if (ctx->pc != 0x1DC914u) { return; }
    ctx->pc = 0x1DC914u;
    // 0x1dc914: 0x1600000d
    ctx->pc = 0x1DC914u;
    {
        const bool branch_taken_0x1dc914 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC918u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc914) {
            ctx->pc = 0x1DC94Cu;
            goto label_1dc94c;
        }
    }
    ctx->pc = 0x1DC91Cu;
    // 0x1dc91c: 0x27848d4c
    ctx->pc = 0x1dc91cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc920: 0xc07f208
    ctx->pc = 0x1DC920u;
    SET_GPR_U32(ctx, 31, 0x1DC928u);
    ctx->pc = 0x1DC924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5578));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC928u; }
        else if (ctx->pc != 0x1DC928u) { ctx->pc = 0x1DC928u; }
    }
    if (ctx->pc != 0x1DC928u) { return; }
    ctx->pc = 0x1DC928u;
    // 0x1dc928: 0x8e440054
    ctx->pc = 0x1dc928u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dc92c: 0x3c030040
    ctx->pc = 0x1dc92cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x1dc930: 0x72603628
    ctx->pc = 0x1dc930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dc934: 0x34650014
    ctx->pc = 0x1dc934u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
    // 0x1dc938: 0x70403e28
    ctx->pc = 0x1dc938u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc93c: 0xc079e80
    ctx->pc = 0x1DC93Cu;
    SET_GPR_U32(ctx, 31, 0x1DC944u);
    ctx->pc = 0x1DC940u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC944u; }
        else if (ctx->pc != 0x1DC944u) { ctx->pc = 0x1DC944u; }
    }
    if (ctx->pc != 0x1DC944u) { return; }
    ctx->pc = 0x1DC944u;
    // 0x1dc944: 0x1000000d
    ctx->pc = 0x1DC944u;
    {
        const bool branch_taken_0x1dc944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC948u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1dc944) {
            ctx->pc = 0x1DC97Cu;
            goto label_1dc97c;
        }
    }
    ctx->pc = 0x1DC94Cu;
label_1dc94c:
    // 0x1dc94c: 0x27848d4c
    ctx->pc = 0x1dc94cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc950: 0xc07f208
    ctx->pc = 0x1DC950u;
    SET_GPR_U32(ctx, 31, 0x1DC958u);
    ctx->pc = 0x1DC954u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5577));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC958u; }
        else if (ctx->pc != 0x1DC958u) { ctx->pc = 0x1DC958u; }
    }
    if (ctx->pc != 0x1DC958u) { return; }
    ctx->pc = 0x1DC958u;
    // 0x1dc958: 0x8e440054
    ctx->pc = 0x1dc958u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dc95c: 0x3c03001b
    ctx->pc = 0x1dc95cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1dc960: 0x72603628
    ctx->pc = 0x1dc960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1dc964: 0x346500b3
    ctx->pc = 0x1dc964u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1dc968: 0x70403e28
    ctx->pc = 0x1dc968u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc96c: 0xc079e80
    ctx->pc = 0x1DC96Cu;
    SET_GPR_U32(ctx, 31, 0x1DC974u);
    ctx->pc = 0x1DC970u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC974u; }
        else if (ctx->pc != 0x1DC974u) { ctx->pc = 0x1DC974u; }
    }
    if (ctx->pc != 0x1DC974u) { return; }
    ctx->pc = 0x1DC974u;
    // 0x1dc974: 0x0
    ctx->pc = 0x1dc974u;
    // NOP
    // 0x1dc978: 0x263100f0
    ctx->pc = 0x1dc978u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1dc97c:
    // 0x1dc97c: 0x26100001
    ctx->pc = 0x1dc97cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dc980:
    // 0x1dc980: 0x8e430000
    ctx->pc = 0x1dc980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dc984: 0x203182a
    ctx->pc = 0x1dc984u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dc988: 0x1460ffe0
    ctx->pc = 0x1DC988u;
    {
        const bool branch_taken_0x1dc988 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC98Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5559));
        if (branch_taken_0x1dc988) {
            ctx->pc = 0x1DC90Cu;
            goto label_1dc90c;
        }
    }
    ctx->pc = 0x1DC990u;
    // 0x1dc990: 0x3c030027
    ctx->pc = 0x1dc990u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc994: 0x24638d78
    ctx->pc = 0x1dc994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937976));
    // 0x1dc998: 0xc4620000
    ctx->pc = 0x1dc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc99c: 0xc4610004
    ctx->pc = 0x1dc99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc9a0: 0xc4600008
    ctx->pc = 0x1dc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc9a4: 0xe6420114
    ctx->pc = 0x1dc9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dc9a8: 0xe6410118
    ctx->pc = 0x1dc9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dc9ac: 0xe640011c
    ctx->pc = 0x1dc9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dc9b0: 0x7bbf0040
    ctx->pc = 0x1dc9b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc9b4: 0x7bb30030
    ctx->pc = 0x1dc9b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc9b8: 0x7bb20020
    ctx->pc = 0x1dc9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc9bc: 0x7bb10010
    ctx->pc = 0x1dc9bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc9c0: 0x7bb00000
    ctx->pc = 0x1dc9c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc9c4: 0x3e00008
    ctx->pc = 0x1DC9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC90Cu: goto label_1dc90c;
            case 0x1DC94Cu: goto label_1dc94c;
            case 0x1DC97Cu: goto label_1dc97c;
            case 0x1DC980u: goto label_1dc980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC9CCu;
}
