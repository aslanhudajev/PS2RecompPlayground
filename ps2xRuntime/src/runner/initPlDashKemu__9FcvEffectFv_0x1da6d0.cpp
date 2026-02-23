#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initPlDashKemu__9FcvEffectFv
// Address: 0x1da6d0 - 0x1da7c4
void initPlDashKemu__9FcvEffectFv_0x1da6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initPlDashKemu__9FcvEffectFv");


    ctx->pc = 0x1da6d0u;

    // 0x1da6d0: 0x27bdffb0
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da6d4: 0x7fbf0040
    ctx->pc = 0x1da6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1da6d8: 0x7fb30030
    ctx->pc = 0x1da6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da6dc: 0x7fb20020
    ctx->pc = 0x1da6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da6e0: 0x7fb10010
    ctx->pc = 0x1da6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da6e4: 0x70809e28
    ctx->pc = 0x1da6e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1da6e8: 0x2405003c
    ctx->pc = 0x1da6e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1da6ec: 0xc0761c4
    ctx->pc = 0x1DA6ECu;
    SET_GPR_U32(ctx, 31, 0x1DA6F4u);
    ctx->pc = 0x1DA6F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6F4u; }
        else if (ctx->pc != 0x1DA6F4u) { ctx->pc = 0x1DA6F4u; }
    }
    if (ctx->pc != 0x1DA6F4u) { return; }
    ctx->pc = 0x1DA6F4u;
    // 0x1da6f4: 0xae620054
    ctx->pc = 0x1da6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x1da6f8: 0x3c02428c
    ctx->pc = 0x1da6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17036 << 16));
    // 0x1da6fc: 0xae620028
    ctx->pc = 0x1da6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1da700: 0x27848d4c
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1da704: 0xc07f208
    ctx->pc = 0x1DA704u;
    SET_GPR_U32(ctx, 31, 0x1DA70Cu);
    ctx->pc = 0x1DA708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8019));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA70Cu; }
        else if (ctx->pc != 0x1DA70Cu) { ctx->pc = 0x1DA70Cu; }
    }
    if (ctx->pc != 0x1DA70Cu) { return; }
    ctx->pc = 0x1DA70Cu;
    // 0x1da70c: 0x70408628
    ctx->pc = 0x1da70cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da710: 0x70008e28
    ctx->pc = 0x1da710u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1da714: 0x10000018
    ctx->pc = 0x1DA714u;
    {
        const bool branch_taken_0x1da714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DA718u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1da714) {
            ctx->pc = 0x1DA778u;
            goto label_1da778;
        }
    }
    ctx->pc = 0x1DA71Cu;
label_1da71c:
    // 0x1da71c: 0xc07f208
    ctx->pc = 0x1DA71Cu;
    SET_GPR_U32(ctx, 31, 0x1DA724u);
    ctx->pc = 0x1DA720u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA724u; }
        else if (ctx->pc != 0x1DA724u) { ctx->pc = 0x1DA724u; }
    }
    if (ctx->pc != 0x1DA724u) { return; }
    ctx->pc = 0x1DA724u;
    // 0x1da724: 0x8e640054
    ctx->pc = 0x1da724u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da728: 0x3c03001b
    ctx->pc = 0x1da728u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1da72c: 0x346500b3
    ctx->pc = 0x1da72cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 179));
    // 0x1da730: 0x70403628
    ctx->pc = 0x1da730u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1da734: 0x72003e28
    ctx->pc = 0x1da734u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1da738: 0xc079e80
    ctx->pc = 0x1DA738u;
    SET_GPR_U32(ctx, 31, 0x1DA740u);
    ctx->pc = 0x1DA73Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA740u; }
        else if (ctx->pc != 0x1DA740u) { ctx->pc = 0x1DA740u; }
    }
    if (ctx->pc != 0x1DA740u) { return; }
    ctx->pc = 0x1DA740u;
    // 0x1da740: 0xc66c002c
    ctx->pc = 0x1da740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da744: 0x3c033f80
    ctx->pc = 0x1da744u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1da748: 0x44830000
    ctx->pc = 0x1da748u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1da74c: 0x0
    ctx->pc = 0x1da74cu;
    // NOP
    // 0x1da750: 0x460c0032
    ctx->pc = 0x1da750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da754: 0x0
    ctx->pc = 0x1da754u;
    // NOP
    // 0x1da758: 0x45030006
    ctx->pc = 0x1DA758u;
    {
        const bool branch_taken_0x1da758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da758) {
            ctx->pc = 0x1DA75Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
            ctx->pc = 0x1DA774u;
            goto label_1da774;
        }
    }
    ctx->pc = 0x1DA760u;
    // 0x1da760: 0x8e620054
    ctx->pc = 0x1da760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1da764: 0xc079ecc
    ctx->pc = 0x1DA764u;
    SET_GPR_U32(ctx, 31, 0x1DA76Cu);
    ctx->pc = 0x1DA768u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setObjScale__7CFcvTRSFf_0x1e7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA76Cu; }
        else if (ctx->pc != 0x1DA76Cu) { ctx->pc = 0x1DA76Cu; }
    }
    if (ctx->pc != 0x1DA76Cu) { return; }
    ctx->pc = 0x1DA76Cu;
    // 0x1da76c: 0x0
    ctx->pc = 0x1da76cu;
    // NOP
    // 0x1da770: 0x265200f0
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1da774:
    // 0x1da774: 0x26310001
    ctx->pc = 0x1da774u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1da778:
    // 0x1da778: 0x8e630000
    ctx->pc = 0x1da778u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1da77c: 0x223182a
    ctx->pc = 0x1da77cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1da780: 0x1460ffe6
    ctx->pc = 0x1DA780u;
    {
        const bool branch_taken_0x1da780 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DA784u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 7959));
        if (branch_taken_0x1da780) {
            ctx->pc = 0x1DA71Cu;
            goto label_1da71c;
        }
    }
    ctx->pc = 0x1DA788u;
    // 0x1da788: 0x3c030027
    ctx->pc = 0x1da788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1da78c: 0x24638ba8
    ctx->pc = 0x1da78cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937512));
    // 0x1da790: 0xc4620000
    ctx->pc = 0x1da790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da794: 0xc4610004
    ctx->pc = 0x1da794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da798: 0xc4600008
    ctx->pc = 0x1da798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da79c: 0xe6620114
    ctx->pc = 0x1da79cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 276), bits); }
    // 0x1da7a0: 0xe6610118
    ctx->pc = 0x1da7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 280), bits); }
    // 0x1da7a4: 0xe660011c
    ctx->pc = 0x1da7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 284), bits); }
    // 0x1da7a8: 0x7bbf0040
    ctx->pc = 0x1da7a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da7ac: 0x7bb30030
    ctx->pc = 0x1da7acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da7b0: 0x7bb20020
    ctx->pc = 0x1da7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da7b4: 0x7bb10010
    ctx->pc = 0x1da7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7b8: 0x7bb00000
    ctx->pc = 0x1da7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7bc: 0x3e00008
    ctx->pc = 0x1DA7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA71Cu: goto label_1da71c;
            case 0x1DA774u: goto label_1da774;
            case 0x1DA778u: goto label_1da778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DA7C4u;
}
