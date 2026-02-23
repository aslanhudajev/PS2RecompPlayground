#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initNonHit__9FcvEffectFv
// Address: 0x1de250 - 0x1de3e8
void initNonHit__9FcvEffectFv_0x1de250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initNonHit__9FcvEffectFv");


    ctx->pc = 0x1de250u;

    // 0x1de250: 0x27bdffb0
    ctx->pc = 0x1de250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1de254: 0x7fbf0040
    ctx->pc = 0x1de254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1de258: 0x7fb30030
    ctx->pc = 0x1de258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1de25c: 0x7fb20020
    ctx->pc = 0x1de25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de260: 0x7fb10010
    ctx->pc = 0x1de260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de264: 0x70809628
    ctx->pc = 0x1de264u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de268: 0x24050032
    ctx->pc = 0x1de268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 50));
    // 0x1de26c: 0xc0761c4
    ctx->pc = 0x1DE26Cu;
    SET_GPR_U32(ctx, 31, 0x1DE274u);
    ctx->pc = 0x1DE270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE274u; }
        else if (ctx->pc != 0x1DE274u) { ctx->pc = 0x1DE274u; }
    }
    if (ctx->pc != 0x1DE274u) { return; }
    ctx->pc = 0x1DE274u;
    // 0x1de274: 0xae420054
    ctx->pc = 0x1de274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1de278: 0x3c0341b8
    ctx->pc = 0x1de278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16824 << 16));
    // 0x1de27c: 0xae430028
    ctx->pc = 0x1de27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1de280: 0x70008628
    ctx->pc = 0x1de280u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de284: 0x10000046
    ctx->pc = 0x1DE284u;
    {
        const bool branch_taken_0x1de284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE288u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de284) {
            ctx->pc = 0x1DE3A0u;
            goto label_1de3a0;
        }
    }
    ctx->pc = 0x1DE28Cu;
label_1de28c:
    // 0x1de28c: 0x16000017
    ctx->pc = 0x1DE28Cu;
    {
        const bool branch_taken_0x1de28c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE290u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 43));
        if (branch_taken_0x1de28c) {
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE294u;
    // 0x1de294: 0x27848d4c
    ctx->pc = 0x1de294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de298: 0xc07f208
    ctx->pc = 0x1DE298u;
    SET_GPR_U32(ctx, 31, 0x1DE2A0u);
    ctx->pc = 0x1DE29Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4336));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2A0u; }
        else if (ctx->pc != 0x1DE2A0u) { ctx->pc = 0x1DE2A0u; }
    }
    if (ctx->pc != 0x1DE2A0u) { return; }
    ctx->pc = 0x1DE2A0u;
    // 0x1de2a0: 0x70409e28
    ctx->pc = 0x1de2a0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de2a4: 0x27848d4c
    ctx->pc = 0x1de2a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de2a8: 0xc07f208
    ctx->pc = 0x1DE2A8u;
    SET_GPR_U32(ctx, 31, 0x1DE2B0u);
    ctx->pc = 0x1DE2ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4386));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2B0u; }
        else if (ctx->pc != 0x1DE2B0u) { ctx->pc = 0x1DE2B0u; }
    }
    if (ctx->pc != 0x1DE2B0u) { return; }
    ctx->pc = 0x1DE2B0u;
    // 0x1de2b0: 0x8e430054
    ctx->pc = 0x1de2b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de2b4: 0x70403e28
    ctx->pc = 0x1de2b4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de2b8: 0x3c02001b
    ctx->pc = 0x1de2b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de2bc: 0x72603628
    ctx->pc = 0x1de2bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de2c0: 0x34450088
    ctx->pc = 0x1de2c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 136));
    // 0x1de2c4: 0xc079e80
    ctx->pc = 0x1DE2C4u;
    SET_GPR_U32(ctx, 31, 0x1DE2CCu);
    ctx->pc = 0x1DE2C8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2CCu; }
        else if (ctx->pc != 0x1DE2CCu) { ctx->pc = 0x1DE2CCu; }
    }
    if (ctx->pc != 0x1DE2CCu) { return; }
    ctx->pc = 0x1DE2CCu;
    // 0x1de2cc: 0x8e430054
    ctx->pc = 0x1de2ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de2d0: 0x3c023f00
    ctx->pc = 0x1de2d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1de2d4: 0x44826000
    ctx->pc = 0x1de2d4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1de2d8: 0xc079ea4
    ctx->pc = 0x1DE2D8u;
    SET_GPR_U32(ctx, 31, 0x1DE2E0u);
    ctx->pc = 0x1DE2DCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE2E0u; }
        else if (ctx->pc != 0x1DE2E0u) { ctx->pc = 0x1DE2E0u; }
    }
    if (ctx->pc != 0x1DE2E0u) { return; }
    ctx->pc = 0x1DE2E0u;
    // 0x1de2e0: 0x1000002e
    ctx->pc = 0x1DE2E0u;
    {
        const bool branch_taken_0x1de2e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE2E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1de2e0) {
            ctx->pc = 0x1DE39Cu;
            goto label_1de39c;
        }
    }
    ctx->pc = 0x1DE2E8u;
    // 0x1de2e8: 0x2a01002b
    ctx->pc = 0x1de2e8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 43));
label_1de2ec:
    // 0x1de2ec: 0x10200017
    ctx->pc = 0x1DE2ECu;
    {
        const bool branch_taken_0x1de2ec = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE2F0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4336));
        if (branch_taken_0x1de2ec) {
            ctx->pc = 0x1DE34Cu;
            goto label_1de34c;
        }
    }
    ctx->pc = 0x1DE2F4u;
    // 0x1de2f4: 0x260510f0
    ctx->pc = 0x1de2f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4336));
    // 0x1de2f8: 0xc07f208
    ctx->pc = 0x1DE2F8u;
    SET_GPR_U32(ctx, 31, 0x1DE300u);
    ctx->pc = 0x1DE2FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE300u; }
        else if (ctx->pc != 0x1DE300u) { ctx->pc = 0x1DE300u; }
    }
    if (ctx->pc != 0x1DE300u) { return; }
    ctx->pc = 0x1DE300u;
    // 0x1de300: 0x70409e28
    ctx->pc = 0x1de300u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de304: 0x27848d4c
    ctx->pc = 0x1de304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de308: 0xc07f208
    ctx->pc = 0x1DE308u;
    SET_GPR_U32(ctx, 31, 0x1DE310u);
    ctx->pc = 0x1DE30Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4387));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE310u; }
        else if (ctx->pc != 0x1DE310u) { ctx->pc = 0x1DE310u; }
    }
    if (ctx->pc != 0x1DE310u) { return; }
    ctx->pc = 0x1DE310u;
    // 0x1de310: 0x8e430054
    ctx->pc = 0x1de310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de314: 0x70403e28
    ctx->pc = 0x1de314u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de318: 0x3c02001b
    ctx->pc = 0x1de318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de31c: 0x72603628
    ctx->pc = 0x1de31cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de320: 0x344500ae
    ctx->pc = 0x1de320u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 174));
    // 0x1de324: 0xc079e80
    ctx->pc = 0x1DE324u;
    SET_GPR_U32(ctx, 31, 0x1DE32Cu);
    ctx->pc = 0x1DE328u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE32Cu; }
        else if (ctx->pc != 0x1DE32Cu) { ctx->pc = 0x1DE32Cu; }
    }
    if (ctx->pc != 0x1DE32Cu) { return; }
    ctx->pc = 0x1DE32Cu;
    // 0x1de32c: 0x8e430054
    ctx->pc = 0x1de32cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de330: 0x3c023f00
    ctx->pc = 0x1de330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1de334: 0x44826000
    ctx->pc = 0x1de334u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1de338: 0xc079ea4
    ctx->pc = 0x1DE338u;
    SET_GPR_U32(ctx, 31, 0x1DE340u);
    ctx->pc = 0x1DE33Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE340u; }
        else if (ctx->pc != 0x1DE340u) { ctx->pc = 0x1DE340u; }
    }
    if (ctx->pc != 0x1DE340u) { return; }
    ctx->pc = 0x1DE340u;
    // 0x1de340: 0x10000015
    ctx->pc = 0x1DE340u;
    {
        const bool branch_taken_0x1de340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de340) {
            ctx->pc = 0x1DE398u;
            goto label_1de398;
        }
    }
    ctx->pc = 0x1DE348u;
    // 0x1de348: 0x260510f0
    ctx->pc = 0x1de348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4336));
label_1de34c:
    // 0x1de34c: 0xc07f208
    ctx->pc = 0x1DE34Cu;
    SET_GPR_U32(ctx, 31, 0x1DE354u);
    ctx->pc = 0x1DE350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE354u; }
        else if (ctx->pc != 0x1DE354u) { ctx->pc = 0x1DE354u; }
    }
    if (ctx->pc != 0x1DE354u) { return; }
    ctx->pc = 0x1DE354u;
    // 0x1de354: 0x70409e28
    ctx->pc = 0x1de354u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de358: 0x27848d4c
    ctx->pc = 0x1de358u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de35c: 0xc07f208
    ctx->pc = 0x1DE35Cu;
    SET_GPR_U32(ctx, 31, 0x1DE364u);
    ctx->pc = 0x1DE360u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4388));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE364u; }
        else if (ctx->pc != 0x1DE364u) { ctx->pc = 0x1DE364u; }
    }
    if (ctx->pc != 0x1DE364u) { return; }
    ctx->pc = 0x1DE364u;
    // 0x1de364: 0x8e430054
    ctx->pc = 0x1de364u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de368: 0x70403e28
    ctx->pc = 0x1de368u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de36c: 0x3c02001b
    ctx->pc = 0x1de36cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1de370: 0x72603628
    ctx->pc = 0x1de370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de374: 0x3445008b
    ctx->pc = 0x1de374u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 139));
    // 0x1de378: 0xc079e80
    ctx->pc = 0x1DE378u;
    SET_GPR_U32(ctx, 31, 0x1DE380u);
    ctx->pc = 0x1DE37Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE380u; }
        else if (ctx->pc != 0x1DE380u) { ctx->pc = 0x1DE380u; }
    }
    if (ctx->pc != 0x1DE380u) { return; }
    ctx->pc = 0x1DE380u;
    // 0x1de380: 0x8e430054
    ctx->pc = 0x1de380u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de384: 0x3c023f00
    ctx->pc = 0x1de384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1de388: 0x44826000
    ctx->pc = 0x1de388u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1de38c: 0xc079ea4
    ctx->pc = 0x1DE38Cu;
    SET_GPR_U32(ctx, 31, 0x1DE394u);
    ctx->pc = 0x1DE390u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        setAlphaRate__7CFcvTRSFf_0x1e7a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE394u; }
        else if (ctx->pc != 0x1DE394u) { ctx->pc = 0x1DE394u; }
    }
    if (ctx->pc != 0x1DE394u) { return; }
    ctx->pc = 0x1DE394u;
    // 0x1de394: 0x0
    ctx->pc = 0x1de394u;
    // NOP
label_1de398:
    // 0x1de398: 0x263100f0
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1de39c:
    // 0x1de39c: 0x26100001
    ctx->pc = 0x1de39cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1de3a0:
    // 0x1de3a0: 0x8e430000
    ctx->pc = 0x1de3a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1de3a4: 0x203182a
    ctx->pc = 0x1de3a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1de3a8: 0x1460ffb8
    ctx->pc = 0x1DE3A8u;
    {
        const bool branch_taken_0x1de3a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE3ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
        if (branch_taken_0x1de3a8) {
            ctx->pc = 0x1DE28Cu;
            goto label_1de28c;
        }
    }
    ctx->pc = 0x1DE3B0u;
    // 0x1de3b0: 0x24639758
    ctx->pc = 0x1de3b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940504));
    // 0x1de3b4: 0xc4620000
    ctx->pc = 0x1de3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de3b8: 0xc4610004
    ctx->pc = 0x1de3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de3bc: 0xc4600008
    ctx->pc = 0x1de3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de3c0: 0xe6420114
    ctx->pc = 0x1de3c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1de3c4: 0xe6410118
    ctx->pc = 0x1de3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1de3c8: 0xe640011c
    ctx->pc = 0x1de3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1de3cc: 0x7bbf0040
    ctx->pc = 0x1de3ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de3d0: 0x7bb30030
    ctx->pc = 0x1de3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de3d4: 0x7bb20020
    ctx->pc = 0x1de3d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de3d8: 0x7bb10010
    ctx->pc = 0x1de3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de3dc: 0x7bb00000
    ctx->pc = 0x1de3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3e0: 0x3e00008
    ctx->pc = 0x1DE3E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE28Cu: goto label_1de28c;
            case 0x1DE2ECu: goto label_1de2ec;
            case 0x1DE34Cu: goto label_1de34c;
            case 0x1DE398u: goto label_1de398;
            case 0x1DE39Cu: goto label_1de39c;
            case 0x1DE3A0u: goto label_1de3a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE3E8u;
}
