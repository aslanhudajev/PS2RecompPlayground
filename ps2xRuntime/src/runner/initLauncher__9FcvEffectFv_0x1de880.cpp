#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initLauncher__9FcvEffectFv
// Address: 0x1de880 - 0x1de9b4
void initLauncher__9FcvEffectFv_0x1de880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initLauncher__9FcvEffectFv");


    ctx->pc = 0x1de880u;

    // 0x1de880: 0x27bdffb0
    ctx->pc = 0x1de880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1de884: 0x7fbf0040
    ctx->pc = 0x1de884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1de888: 0x7fb30030
    ctx->pc = 0x1de888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1de88c: 0x7fb20020
    ctx->pc = 0x1de88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1de890: 0x7fb10010
    ctx->pc = 0x1de890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de894: 0x70809628
    ctx->pc = 0x1de894u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1de898: 0x24050039
    ctx->pc = 0x1de898u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
    // 0x1de89c: 0xc0761c4
    ctx->pc = 0x1DE89Cu;
    SET_GPR_U32(ctx, 31, 0x1DE8A4u);
    ctx->pc = 0x1DE8A0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8A4u; }
        else if (ctx->pc != 0x1DE8A4u) { ctx->pc = 0x1DE8A4u; }
    }
    if (ctx->pc != 0x1DE8A4u) { return; }
    ctx->pc = 0x1DE8A4u;
    // 0x1de8a4: 0xae420054
    ctx->pc = 0x1de8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1de8a8: 0x3c0242c8
    ctx->pc = 0x1de8a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1de8ac: 0xae420028
    ctx->pc = 0x1de8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1de8b0: 0x70008628
    ctx->pc = 0x1de8b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de8b4: 0x70008e28
    ctx->pc = 0x1de8b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1de8b8:
    // 0x1de8b8: 0x26050e41
    ctx->pc = 0x1de8b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 3649));
    // 0x1de8bc: 0xc07f208
    ctx->pc = 0x1DE8BCu;
    SET_GPR_U32(ctx, 31, 0x1DE8C4u);
    ctx->pc = 0x1DE8C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8C4u; }
        else if (ctx->pc != 0x1DE8C4u) { ctx->pc = 0x1DE8C4u; }
    }
    if (ctx->pc != 0x1DE8C4u) { return; }
    ctx->pc = 0x1DE8C4u;
    // 0x1de8c4: 0x2a010002
    ctx->pc = 0x1de8c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1de8c8: 0x1020000c
    ctx->pc = 0x1DE8C8u;
    {
        const bool branch_taken_0x1de8c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE8CCu;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1de8c8) {
            ctx->pc = 0x1DE8FCu;
            goto label_1de8fc;
        }
    }
    ctx->pc = 0x1DE8D0u;
    // 0x1de8d0: 0x27848d4c
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1de8d4: 0xc07f208
    ctx->pc = 0x1DE8D4u;
    SET_GPR_U32(ctx, 31, 0x1DE8DCu);
    ctx->pc = 0x1DE8D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3706));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8DCu; }
        else if (ctx->pc != 0x1DE8DCu) { ctx->pc = 0x1DE8DCu; }
    }
    if (ctx->pc != 0x1DE8DCu) { return; }
    ctx->pc = 0x1DE8DCu;
    // 0x1de8dc: 0x8e430054
    ctx->pc = 0x1de8dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de8e0: 0x72603628
    ctx->pc = 0x1de8e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de8e4: 0x3c050025
    ctx->pc = 0x1de8e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)37 << 16));
    // 0x1de8e8: 0x70403e28
    ctx->pc = 0x1de8e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de8ec: 0xc079e80
    ctx->pc = 0x1DE8ECu;
    SET_GPR_U32(ctx, 31, 0x1DE8F4u);
    ctx->pc = 0x1DE8F0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8F4u; }
        else if (ctx->pc != 0x1DE8F4u) { ctx->pc = 0x1DE8F4u; }
    }
    if (ctx->pc != 0x1DE8F4u) { return; }
    ctx->pc = 0x1DE8F4u;
    // 0x1de8f4: 0x1000001d
    ctx->pc = 0x1DE8F4u;
    {
        const bool branch_taken_0x1de8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE8F8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1de8f4) {
            ctx->pc = 0x1DE96Cu;
            goto label_1de96c;
        }
    }
    ctx->pc = 0x1DE8FCu;
label_1de8fc:
    // 0x1de8fc: 0x2a01001b
    ctx->pc = 0x1de8fcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 27));
    // 0x1de900: 0x10200010
    ctx->pc = 0x1DE900u;
    {
        const bool branch_taken_0x1de900 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DE904u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        if (branch_taken_0x1de900) {
            ctx->pc = 0x1DE944u;
            goto label_1de944;
        }
    }
    ctx->pc = 0x1DE908u;
    // 0x1de908: 0x8e430054
    ctx->pc = 0x1de908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de90c: 0x3c020025
    ctx->pc = 0x1de90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)37 << 16));
    // 0x1de910: 0x72603628
    ctx->pc = 0x1de910u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de914: 0x34450002
    ctx->pc = 0x1de914u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 2));
    // 0x1de918: 0x70003e28
    ctx->pc = 0x1de918u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1de91c: 0xc079e80
    ctx->pc = 0x1DE91Cu;
    SET_GPR_U32(ctx, 31, 0x1DE924u);
    ctx->pc = 0x1DE920u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE924u; }
        else if (ctx->pc != 0x1DE924u) { ctx->pc = 0x1DE924u; }
    }
    if (ctx->pc != 0x1DE924u) { return; }
    ctx->pc = 0x1DE924u;
    // 0x1de924: 0x3c023f00
    ctx->pc = 0x1de924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1de928: 0x44826000
    ctx->pc = 0x1de928u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1de92c: 0x8e420054
    ctx->pc = 0x1de92cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de930: 0xc079ecc
    ctx->pc = 0x1DE930u;
    SET_GPR_U32(ctx, 31, 0x1DE938u);
    ctx->pc = 0x1DE934u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE938u; }
        else if (ctx->pc != 0x1DE938u) { ctx->pc = 0x1DE938u; }
    }
    if (ctx->pc != 0x1DE938u) { return; }
    ctx->pc = 0x1DE938u;
    // 0x1de938: 0x1000000b
    ctx->pc = 0x1DE938u;
    {
        const bool branch_taken_0x1de938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1de938) {
            ctx->pc = 0x1DE968u;
            goto label_1de968;
        }
    }
    ctx->pc = 0x1DE940u;
    // 0x1de940: 0x27848d4c
    ctx->pc = 0x1de940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
label_1de944:
    // 0x1de944: 0xc07f208
    ctx->pc = 0x1DE944u;
    SET_GPR_U32(ctx, 31, 0x1DE94Cu);
    ctx->pc = 0x1DE948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3707));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE94Cu; }
        else if (ctx->pc != 0x1DE94Cu) { ctx->pc = 0x1DE94Cu; }
    }
    if (ctx->pc != 0x1DE94Cu) { return; }
    ctx->pc = 0x1DE94Cu;
    // 0x1de94c: 0x8e440054
    ctx->pc = 0x1de94cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1de950: 0x3c030025
    ctx->pc = 0x1de950u;
    SET_GPR_U32(ctx, 3, ((uint32_t)37 << 16));
    // 0x1de954: 0x72603628
    ctx->pc = 0x1de954u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1de958: 0x34650001
    ctx->pc = 0x1de958u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 1));
    // 0x1de95c: 0x70403e28
    ctx->pc = 0x1de95cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de960: 0xc079e80
    ctx->pc = 0x1DE960u;
    SET_GPR_U32(ctx, 31, 0x1DE968u);
    ctx->pc = 0x1DE964u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE968u; }
        else if (ctx->pc != 0x1DE968u) { ctx->pc = 0x1DE968u; }
    }
    if (ctx->pc != 0x1DE968u) { return; }
    ctx->pc = 0x1DE968u;
label_1de968:
    // 0x1de968: 0x26100001
    ctx->pc = 0x1de968u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1de96c:
    // 0x1de96c: 0x2a030039
    ctx->pc = 0x1de96cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 57));
    // 0x1de970: 0x1460ffd1
    ctx->pc = 0x1DE970u;
    {
        const bool branch_taken_0x1de970 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DE974u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1de970) {
            ctx->pc = 0x1DE8B8u;
            goto label_1de8b8;
        }
    }
    ctx->pc = 0x1DE978u;
    // 0x1de978: 0x3c030027
    ctx->pc = 0x1de978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1de97c: 0x24639800
    ctx->pc = 0x1de97cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940672));
    // 0x1de980: 0xc4620000
    ctx->pc = 0x1de980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de984: 0xc4610004
    ctx->pc = 0x1de984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de988: 0xc4600008
    ctx->pc = 0x1de988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de98c: 0xe6420114
    ctx->pc = 0x1de98cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1de990: 0xe6410118
    ctx->pc = 0x1de990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1de994: 0xe640011c
    ctx->pc = 0x1de994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1de998: 0x7bbf0040
    ctx->pc = 0x1de998u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de99c: 0x7bb30030
    ctx->pc = 0x1de99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de9a0: 0x7bb20020
    ctx->pc = 0x1de9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de9a4: 0x7bb10010
    ctx->pc = 0x1de9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de9a8: 0x7bb00000
    ctx->pc = 0x1de9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de9ac: 0x3e00008
    ctx->pc = 0x1DE9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE9B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE8B8u: goto label_1de8b8;
            case 0x1DE8FCu: goto label_1de8fc;
            case 0x1DE944u: goto label_1de944;
            case 0x1DE968u: goto label_1de968;
            case 0x1DE96Cu: goto label_1de96c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DE9B4u;
}
