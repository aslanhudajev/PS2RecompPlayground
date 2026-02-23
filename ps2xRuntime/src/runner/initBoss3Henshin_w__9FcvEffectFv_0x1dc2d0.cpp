#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss3Henshin_w__9FcvEffectFv
// Address: 0x1dc2d0 - 0x1dc394
void initBoss3Henshin_w__9FcvEffectFv_0x1dc2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss3Henshin_w__9FcvEffectFv");


    ctx->pc = 0x1dc2d0u;

    // 0x1dc2d0: 0x27bdffb0
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dc2d4: 0x7fbf0040
    ctx->pc = 0x1dc2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1dc2d8: 0x7fb30030
    ctx->pc = 0x1dc2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc2dc: 0x7fb20020
    ctx->pc = 0x1dc2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc2e0: 0x7fb10010
    ctx->pc = 0x1dc2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc2e4: 0x70809e28
    ctx->pc = 0x1dc2e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dc2e8: 0x24050064
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
    // 0x1dc2ec: 0xc0761c4
    ctx->pc = 0x1DC2ECu;
    SET_GPR_U32(ctx, 31, 0x1DC2F4u);
    ctx->pc = 0x1DC2F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC2F4u; }
        else if (ctx->pc != 0x1DC2F4u) { ctx->pc = 0x1DC2F4u; }
    }
    if (ctx->pc != 0x1DC2F4u) { return; }
    ctx->pc = 0x1DC2F4u;
    // 0x1dc2f4: 0xae620054
    ctx->pc = 0x1dc2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1dc2f8: 0x3c0243c8
    ctx->pc = 0x1dc2f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17352 << 16));
    // 0x1dc2fc: 0xae620028
    ctx->pc = 0x1dc2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1dc300: 0x27848d4c
    ctx->pc = 0x1dc300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1dc304: 0xc07f208
    ctx->pc = 0x1DC304u;
    SET_GPR_U32(ctx, 31, 0x1DC30Cu);
    ctx->pc = 0x1DC308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2273));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC30Cu; }
        else if (ctx->pc != 0x1DC30Cu) { ctx->pc = 0x1DC30Cu; }
    }
    if (ctx->pc != 0x1DC30Cu) { return; }
    ctx->pc = 0x1DC30Cu;
    // 0x1dc30c: 0x70408628
    ctx->pc = 0x1dc30cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc310: 0x70008e28
    ctx->pc = 0x1dc310u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc314: 0x1000000c
    ctx->pc = 0x1DC314u;
    {
        const bool branch_taken_0x1dc314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DC318u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dc314) {
            ctx->pc = 0x1DC348u;
            goto label_1dc348;
        }
    }
    ctx->pc = 0x1DC31Cu;
label_1dc31c:
    // 0x1dc31c: 0xc07f208
    ctx->pc = 0x1DC31Cu;
    SET_GPR_U32(ctx, 31, 0x1DC324u);
    ctx->pc = 0x1DC320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC324u; }
        else if (ctx->pc != 0x1DC324u) { ctx->pc = 0x1DC324u; }
    }
    if (ctx->pc != 0x1DC324u) { return; }
    ctx->pc = 0x1DC324u;
    // 0x1dc324: 0x8e640054
    ctx->pc = 0x1dc324u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1dc328: 0x3c03001e
    ctx->pc = 0x1dc328u;
    SET_GPR_U32(ctx, 3, ((uint32_t)30 << 16));
    // 0x1dc32c: 0x34650064
    ctx->pc = 0x1dc32cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 100));
    // 0x1dc330: 0x70403628
    ctx->pc = 0x1dc330u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc334: 0x72003e28
    ctx->pc = 0x1dc334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1dc338: 0xc079e80
    ctx->pc = 0x1DC338u;
    SET_GPR_U32(ctx, 31, 0x1DC340u);
    ctx->pc = 0x1DC33Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC340u; }
        else if (ctx->pc != 0x1DC340u) { ctx->pc = 0x1DC340u; }
    }
    if (ctx->pc != 0x1DC340u) { return; }
    ctx->pc = 0x1DC340u;
    // 0x1dc340: 0x265200f0
    ctx->pc = 0x1dc340u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1dc344: 0x26310001
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1dc348:
    // 0x1dc348: 0x8e630000
    ctx->pc = 0x1dc348u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc34c: 0x223182a
    ctx->pc = 0x1dc34cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dc350: 0x1460fff2
    ctx->pc = 0x1DC350u;
    {
        const bool branch_taken_0x1dc350 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DC354u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 2173));
        if (branch_taken_0x1dc350) {
            ctx->pc = 0x1DC31Cu;
            goto label_1dc31c;
        }
    }
    ctx->pc = 0x1DC358u;
    // 0x1dc358: 0x3c030027
    ctx->pc = 0x1dc358u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dc35c: 0x24638d28
    ctx->pc = 0x1dc35cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937896));
    // 0x1dc360: 0xc4620000
    ctx->pc = 0x1dc360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc364: 0xc4610004
    ctx->pc = 0x1dc364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc368: 0xc4600008
    ctx->pc = 0x1dc368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc36c: 0xe6620114
    ctx->pc = 0x1dc36cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1dc370: 0xe6610118
    ctx->pc = 0x1dc370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1dc374: 0xe660011c
    ctx->pc = 0x1dc374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1dc378: 0x7bbf0040
    ctx->pc = 0x1dc378u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc37c: 0x7bb30030
    ctx->pc = 0x1dc37cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc380: 0x7bb20020
    ctx->pc = 0x1dc380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc384: 0x7bb10010
    ctx->pc = 0x1dc384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc388: 0x7bb00000
    ctx->pc = 0x1dc388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc38c: 0x3e00008
    ctx->pc = 0x1DC38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC390u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC31Cu: goto label_1dc31c;
            case 0x1DC348u: goto label_1dc348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DC394u;
}
