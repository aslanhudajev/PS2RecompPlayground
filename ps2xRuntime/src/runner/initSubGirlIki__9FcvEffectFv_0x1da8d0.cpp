#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initSubGirlIki__9FcvEffectFv
// Address: 0x1da8d0 - 0x1da9c4
void initSubGirlIki__9FcvEffectFv_0x1da8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initSubGirlIki__9FcvEffectFv");


    ctx->pc = 0x1da8d0u;

    // 0x1da8d0: 0x27bdffb0
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da8d4: 0x7fbf0040
    ctx->pc = 0x1da8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da8d8: 0x7fb30030
    ctx->pc = 0x1da8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da8dc: 0x7fb20020
    ctx->pc = 0x1da8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da8e0: 0x7fb10010
    ctx->pc = 0x1da8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da8e4: 0x70809628
    ctx->pc = 0x1da8e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da8e8: 0x24050015
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 21));
    // 0x1da8ec: 0xc0761c4
    ctx->pc = 0x1DA8ECu;
    SET_GPR_U32(ctx, 31, 0x1DA8F4u);
    ctx->pc = 0x1DA8F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8F4u; }
        else if (ctx->pc != 0x1DA8F4u) { ctx->pc = 0x1DA8F4u; }
    }
    if (ctx->pc != 0x1DA8F4u) { return; }
    ctx->pc = 0x1DA8F4u;
    // 0x1da8f4: 0xae420054
    ctx->pc = 0x1da8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1da8f8: 0x3c034382
    ctx->pc = 0x1da8f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17282 << 16));
    // 0x1da8fc: 0xae430028
    ctx->pc = 0x1da8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x1da900: 0x70008628
    ctx->pc = 0x1da900u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da904: 0x1000001c
    ctx->pc = 0x1DA904u;
    {
        const bool branch_taken_0x1da904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA908u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da904) {
            ctx->pc = 0x1DA978u;
            goto label_1da978;
        }
    }
    ctx->pc = 0x1DA90Cu;
label_1da90c:
    // 0x1da90c: 0xc07f208
    ctx->pc = 0x1DA90Cu;
    SET_GPR_U32(ctx, 31, 0x1DA914u);
    ctx->pc = 0x1DA910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA914u; }
        else if (ctx->pc != 0x1DA914u) { ctx->pc = 0x1DA914u; }
    }
    if (ctx->pc != 0x1DA914u) { return; }
    ctx->pc = 0x1DA914u;
    // 0x1da914: 0x70409e28
    ctx->pc = 0x1da914u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da918: 0x26051717
    ctx->pc = 0x1da918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5911));
    // 0x1da91c: 0xc07f208
    ctx->pc = 0x1DA91Cu;
    SET_GPR_U32(ctx, 31, 0x1DA924u);
    ctx->pc = 0x1DA920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA924u; }
        else if (ctx->pc != 0x1DA924u) { ctx->pc = 0x1DA924u; }
    }
    if (ctx->pc != 0x1DA924u) { return; }
    ctx->pc = 0x1DA924u;
    // 0x1da924: 0x8e440054
    ctx->pc = 0x1da924u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1da928: 0x3c03001b
    ctx->pc = 0x1da928u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da92c: 0x72603628
    ctx->pc = 0x1da92cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1da930: 0x346500b3
    ctx->pc = 0x1da930u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da934: 0x70403e28
    ctx->pc = 0x1da934u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da938: 0xc079e80
    ctx->pc = 0x1DA938u;
    SET_GPR_U32(ctx, 31, 0x1DA940u);
    ctx->pc = 0x1DA93Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA940u; }
        else if (ctx->pc != 0x1DA940u) { ctx->pc = 0x1DA940u; }
    }
    if (ctx->pc != 0x1DA940u) { return; }
    ctx->pc = 0x1DA940u;
    // 0x1da940: 0xc64c002c
    ctx->pc = 0x1da940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da944: 0x3c033f80
    ctx->pc = 0x1da944u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da948: 0x44830000
    ctx->pc = 0x1da948u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da94c: 0x0
    ctx->pc = 0x1da94cu;
    // NOP
    // 0x1da950: 0x460c0032
    ctx->pc = 0x1da950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da954: 0x0
    ctx->pc = 0x1da954u;
    // NOP
    // 0x1da958: 0x45030006
    ctx->pc = 0x1DA958u;
    {
        const bool branch_taken_0x1da958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da958) {
            ctx->pc = 0x1DA95Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
            ctx->pc = 0x1DA974u;
            goto label_1da974;
        }
    }
    ctx->pc = 0x1DA960u;
    // 0x1da960: 0x8e420054
    ctx->pc = 0x1da960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1da964: 0xc079ecc
    ctx->pc = 0x1DA964u;
    SET_GPR_U32(ctx, 31, 0x1DA96Cu);
    ctx->pc = 0x1DA968u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA96Cu; }
        else if (ctx->pc != 0x1DA96Cu) { ctx->pc = 0x1DA96Cu; }
    }
    if (ctx->pc != 0x1DA96Cu) { return; }
    ctx->pc = 0x1DA96Cu;
    // 0x1da96c: 0x0
    ctx->pc = 0x1da96cu;
    // NOP
    // 0x1da970: 0x263100f0
    ctx->pc = 0x1da970u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
label_1da974:
    // 0x1da974: 0x26100001
    ctx->pc = 0x1da974u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1da978:
    // 0x1da978: 0x8e430000
    ctx->pc = 0x1da978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da97c: 0x203182a
    ctx->pc = 0x1da97cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1da980: 0x1460ffe2
    ctx->pc = 0x1DA980u;
    {
        const bool branch_taken_0x1da980 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA984u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 5890));
        if (branch_taken_0x1da980) {
            ctx->pc = 0x1DA90Cu;
            goto label_1da90c;
        }
    }
    ctx->pc = 0x1DA988u;
    // 0x1da988: 0x3c030027
    ctx->pc = 0x1da988u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da98c: 0x24638bc8
    ctx->pc = 0x1da98cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937544));
    // 0x1da990: 0xc4620000
    ctx->pc = 0x1da990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da994: 0xc4610004
    ctx->pc = 0x1da994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da998: 0xc4600008
    ctx->pc = 0x1da998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da99c: 0xe6420114
    ctx->pc = 0x1da99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1da9a0: 0xe6410118
    ctx->pc = 0x1da9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1da9a4: 0xe640011c
    ctx->pc = 0x1da9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1da9a8: 0x7bbf0040
    ctx->pc = 0x1da9a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da9ac: 0x7bb30030
    ctx->pc = 0x1da9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da9b0: 0x7bb20020
    ctx->pc = 0x1da9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da9b4: 0x7bb10010
    ctx->pc = 0x1da9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da9b8: 0x7bb00000
    ctx->pc = 0x1da9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9bc: 0x3e00008
    ctx->pc = 0x1DA9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA90Cu: goto label_1da90c;
            case 0x1DA974u: goto label_1da974;
            case 0x1DA978u: goto label_1da978;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA9C4u;
}
