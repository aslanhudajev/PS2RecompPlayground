#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initBoss5HensinMahoujin__9FcvEffectFv
// Address: 0x1ddc60 - 0x1dde54
void initBoss5HensinMahoujin__9FcvEffectFv_0x1ddc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initBoss5HensinMahoujin__9FcvEffectFv");


    ctx->pc = 0x1ddc60u;

    // 0x1ddc60: 0x27bdffb0
    ctx->pc = 0x1ddc60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ddc64: 0x7fbf0040
    ctx->pc = 0x1ddc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ddc68: 0x7fb30030
    ctx->pc = 0x1ddc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ddc6c: 0x7fb20020
    ctx->pc = 0x1ddc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ddc70: 0x7fb10010
    ctx->pc = 0x1ddc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddc74: 0x70809628
    ctx->pc = 0x1ddc74u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ddc78: 0x24050041
    ctx->pc = 0x1ddc78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ddc7c: 0xc0761c4
    ctx->pc = 0x1DDC7Cu;
    SET_GPR_U32(ctx, 31, 0x1DDC84u);
    ctx->pc = 0x1DDC80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1D8710u;
    {
        const uint32_t __entryPc = ctx->pc;
        newFcvDat__9FcvEffectFi_0x1d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDC84u; }
        else if (ctx->pc != 0x1DDC84u) { ctx->pc = 0x1DDC84u; }
    }
    if (ctx->pc != 0x1DDC84u) { return; }
    ctx->pc = 0x1DDC84u;
    // 0x1ddc84: 0xae420054
    ctx->pc = 0x1ddc84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1ddc88: 0x3c0242fc
    ctx->pc = 0x1ddc88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17148 << 16));
    // 0x1ddc8c: 0xae420028
    ctx->pc = 0x1ddc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1ddc90: 0x70008628
    ctx->pc = 0x1ddc90u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddc94: 0x70008e28
    ctx->pc = 0x1ddc94u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ddc98:
    // 0x1ddc98: 0x26050a41
    ctx->pc = 0x1ddc98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2625));
    // 0x1ddc9c: 0xc07f208
    ctx->pc = 0x1DDC9Cu;
    SET_GPR_U32(ctx, 31, 0x1DDCA4u);
    ctx->pc = 0x1DDCA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCA4u; }
        else if (ctx->pc != 0x1DDCA4u) { ctx->pc = 0x1DDCA4u; }
    }
    if (ctx->pc != 0x1DDCA4u) { return; }
    ctx->pc = 0x1DDCA4u;
    // 0x1ddca4: 0x70409e28
    ctx->pc = 0x1ddca4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddca8: 0x27848d4c
    ctx->pc = 0x1ddca8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddcac: 0xc07f208
    ctx->pc = 0x1DDCACu;
    SET_GPR_U32(ctx, 31, 0x1DDCB4u);
    ctx->pc = 0x1DDCB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2655));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCB4u; }
        else if (ctx->pc != 0x1DDCB4u) { ctx->pc = 0x1DDCB4u; }
    }
    if (ctx->pc != 0x1DDCB4u) { return; }
    ctx->pc = 0x1DDCB4u;
    // 0x1ddcb4: 0x8e430054
    ctx->pc = 0x1ddcb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddcb8: 0x70403e28
    ctx->pc = 0x1ddcb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddcbc: 0x3c020021
    ctx->pc = 0x1ddcbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)33 << 16));
    // 0x1ddcc0: 0x72603628
    ctx->pc = 0x1ddcc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ddcc4: 0x34450014
    ctx->pc = 0x1ddcc4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 20));
    // 0x1ddcc8: 0xc079e80
    ctx->pc = 0x1DDCC8u;
    SET_GPR_U32(ctx, 31, 0x1DDCD0u);
    ctx->pc = 0x1DDCCCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCD0u; }
        else if (ctx->pc != 0x1DDCD0u) { ctx->pc = 0x1DDCD0u; }
    }
    if (ctx->pc != 0x1DDCD0u) { return; }
    ctx->pc = 0x1DDCD0u;
    // 0x1ddcd0: 0x26100001
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ddcd4: 0x2a02001e
    ctx->pc = 0x1ddcd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 30));
    // 0x1ddcd8: 0x1440ffef
    ctx->pc = 0x1DDCD8u;
    {
        const bool branch_taken_0x1ddcd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DDCDCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
        if (branch_taken_0x1ddcd8) {
            ctx->pc = 0x1DDC98u;
            goto label_1ddc98;
        }
    }
    ctx->pc = 0x1DDCE0u;
    // 0x1ddce0: 0x70008628
    ctx->pc = 0x1ddce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ddce4: 0x26050a60
    ctx->pc = 0x1ddce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2656));
label_1ddce8:
    // 0x1ddce8: 0xc07f208
    ctx->pc = 0x1DDCE8u;
    SET_GPR_U32(ctx, 31, 0x1DDCF0u);
    ctx->pc = 0x1DDCECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDCF0u; }
        else if (ctx->pc != 0x1DDCF0u) { ctx->pc = 0x1DDCF0u; }
    }
    if (ctx->pc != 0x1DDCF0u) { return; }
    ctx->pc = 0x1DDCF0u;
    // 0x1ddcf0: 0x2a010003
    ctx->pc = 0x1ddcf0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1ddcf4: 0x10200011
    ctx->pc = 0x1DDCF4u;
    {
        const bool branch_taken_0x1ddcf4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDCF8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ddcf4) {
            ctx->pc = 0x1DDD3Cu;
            goto label_1ddd3c;
        }
    }
    ctx->pc = 0x1DDCFCu;
    // 0x1ddcfc: 0x27848d4c
    ctx->pc = 0x1ddcfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddd00: 0xc07f208
    ctx->pc = 0x1DDD00u;
    SET_GPR_U32(ctx, 31, 0x1DDD08u);
    ctx->pc = 0x1DDD04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2715));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD08u; }
        else if (ctx->pc != 0x1DDD08u) { ctx->pc = 0x1DDD08u; }
    }
    if (ctx->pc != 0x1DDD08u) { return; }
    ctx->pc = 0x1DDD08u;
    // 0x1ddd08: 0x2604001e
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 30));
    // 0x1ddd0c: 0x41900
    ctx->pc = 0x1ddd0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ddd10: 0x641823
    ctx->pc = 0x1ddd10u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddd14: 0x8e440054
    ctx->pc = 0x1ddd14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddd18: 0x34100
    ctx->pc = 0x1ddd18u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ddd1c: 0x3c030021
    ctx->pc = 0x1ddd1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1ddd20: 0x72203628
    ctx->pc = 0x1ddd20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ddd24: 0x3465000a
    ctx->pc = 0x1ddd24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 10));
    // 0x1ddd28: 0x70403e28
    ctx->pc = 0x1ddd28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddd2c: 0xc079e80
    ctx->pc = 0x1DDD2Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD34u);
    ctx->pc = 0x1DDD30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD34u; }
        else if (ctx->pc != 0x1DDD34u) { ctx->pc = 0x1DDD34u; }
    }
    if (ctx->pc != 0x1DDD34u) { return; }
    ctx->pc = 0x1DDD34u;
    // 0x1ddd34: 0x10000035
    ctx->pc = 0x1DDD34u;
    {
        const bool branch_taken_0x1ddd34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDD38u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1ddd34) {
            ctx->pc = 0x1DDE0Cu;
            goto label_1dde0c;
        }
    }
    ctx->pc = 0x1DDD3Cu;
label_1ddd3c:
    // 0x1ddd3c: 0x2a010021
    ctx->pc = 0x1ddd3cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 33));
    // 0x1ddd40: 0x10200012
    ctx->pc = 0x1DDD40u;
    {
        const bool branch_taken_0x1ddd40 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DDD44u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x1ddd40) {
            ctx->pc = 0x1DDD8Cu;
            goto label_1ddd8c;
        }
    }
    ctx->pc = 0x1DDD48u;
    // 0x1ddd48: 0x27848d4c
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddd4c: 0xc07f208
    ctx->pc = 0x1DDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD54u);
    ctx->pc = 0x1DDD50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2716));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD54u; }
        else if (ctx->pc != 0x1DDD54u) { ctx->pc = 0x1DDD54u; }
    }
    if (ctx->pc != 0x1DDD54u) { return; }
    ctx->pc = 0x1DDD54u;
    // 0x1ddd54: 0x2604001e
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 30));
    // 0x1ddd58: 0x41900
    ctx->pc = 0x1ddd58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ddd5c: 0x641823
    ctx->pc = 0x1ddd5cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ddd60: 0x8e440054
    ctx->pc = 0x1ddd60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ddd64: 0x34100
    ctx->pc = 0x1ddd64u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ddd68: 0x3c030021
    ctx->pc = 0x1ddd68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1ddd6c: 0x72203628
    ctx->pc = 0x1ddd6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ddd70: 0x34650014
    ctx->pc = 0x1ddd70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 20));
    // 0x1ddd74: 0x70403e28
    ctx->pc = 0x1ddd74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ddd78: 0xc079e80
    ctx->pc = 0x1DDD78u;
    SET_GPR_U32(ctx, 31, 0x1DDD80u);
    ctx->pc = 0x1DDD7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDD80u; }
        else if (ctx->pc != 0x1DDD80u) { ctx->pc = 0x1DDD80u; }
    }
    if (ctx->pc != 0x1DDD80u) { return; }
    ctx->pc = 0x1DDD80u;
    // 0x1ddd80: 0x10000021
    ctx->pc = 0x1DDD80u;
    {
        const bool branch_taken_0x1ddd80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ddd80) {
            ctx->pc = 0x1DDE08u;
            goto label_1dde08;
        }
    }
    ctx->pc = 0x1DDD88u;
    // 0x1ddd88: 0x24030021
    ctx->pc = 0x1ddd88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
label_1ddd8c:
    // 0x1ddd8c: 0x16030012
    ctx->pc = 0x1DDD8Cu;
    {
        const bool branch_taken_0x1ddd8c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DDD90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 46));
        if (branch_taken_0x1ddd8c) {
            ctx->pc = 0x1DDDD8u;
            goto label_1dddd8;
        }
    }
    ctx->pc = 0x1DDD94u;
    // 0x1ddd94: 0x27848d4c
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ddd98: 0xc07f208
    ctx->pc = 0x1DDD98u;
    SET_GPR_U32(ctx, 31, 0x1DDDA0u);
    ctx->pc = 0x1DDD9Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2717));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDA0u; }
        else if (ctx->pc != 0x1DDDA0u) { ctx->pc = 0x1DDDA0u; }
    }
    if (ctx->pc != 0x1DDDA0u) { return; }
    ctx->pc = 0x1DDDA0u;
    // 0x1ddda0: 0x2604001e
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 30));
    // 0x1ddda4: 0x41900
    ctx->pc = 0x1ddda4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ddda8: 0x641823
    ctx->pc = 0x1ddda8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dddac: 0x8e440054
    ctx->pc = 0x1dddacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dddb0: 0x34100
    ctx->pc = 0x1dddb0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1dddb4: 0x3c030021
    ctx->pc = 0x1dddb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dddb8: 0x72203628
    ctx->pc = 0x1dddb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dddbc: 0x34650015
    ctx->pc = 0x1dddbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
    // 0x1dddc0: 0x70403e28
    ctx->pc = 0x1dddc0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dddc4: 0xc079e80
    ctx->pc = 0x1DDDC4u;
    SET_GPR_U32(ctx, 31, 0x1DDDCCu);
    ctx->pc = 0x1DDDC8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDCCu; }
        else if (ctx->pc != 0x1DDDCCu) { ctx->pc = 0x1DDDCCu; }
    }
    if (ctx->pc != 0x1DDDCCu) { return; }
    ctx->pc = 0x1DDDCCu;
    // 0x1dddcc: 0x1000000e
    ctx->pc = 0x1DDDCCu;
    {
        const bool branch_taken_0x1dddcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1dddcc) {
            ctx->pc = 0x1DDE08u;
            goto label_1dde08;
        }
    }
    ctx->pc = 0x1DDDD4u;
    // 0x1dddd4: 0x2403002e
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 46));
label_1dddd8:
    // 0x1dddd8: 0x1603000b
    ctx->pc = 0x1DDDD8u;
    {
        const bool branch_taken_0x1dddd8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x1DDDDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        if (branch_taken_0x1dddd8) {
            ctx->pc = 0x1DDE08u;
            goto label_1dde08;
        }
    }
    ctx->pc = 0x1DDDE0u;
    // 0x1ddde0: 0xc07f208
    ctx->pc = 0x1DDDE0u;
    SET_GPR_U32(ctx, 31, 0x1DDDE8u);
    ctx->pc = 0x1DDDE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2717));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDDE8u; }
        else if (ctx->pc != 0x1DDDE8u) { ctx->pc = 0x1DDDE8u; }
    }
    if (ctx->pc != 0x1DDDE8u) { return; }
    ctx->pc = 0x1DDDE8u;
    // 0x1ddde8: 0x8e440054
    ctx->pc = 0x1ddde8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dddec: 0x3c030021
    ctx->pc = 0x1dddecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)33 << 16));
    // 0x1dddf0: 0x72203628
    ctx->pc = 0x1dddf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1dddf4: 0x34650015
    ctx->pc = 0x1dddf4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 21));
    // 0x1dddf8: 0x70403e28
    ctx->pc = 0x1dddf8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dddfc: 0xc079e80
    ctx->pc = 0x1DDDFCu;
    SET_GPR_U32(ctx, 31, 0x1DDE04u);
    ctx->pc = 0x1DDE00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15360));
    ctx->pc = 0x1E7A00u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__7CFcvTRSFiPfPf_0x1e7a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDE04u; }
        else if (ctx->pc != 0x1DDE04u) { ctx->pc = 0x1DDE04u; }
    }
    if (ctx->pc != 0x1DDE04u) { return; }
    ctx->pc = 0x1DDE04u;
    // 0x1dde04: 0x0
    ctx->pc = 0x1dde04u;
    // NOP
label_1dde08:
    // 0x1dde08: 0x26100001
    ctx->pc = 0x1dde08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dde0c:
    // 0x1dde0c: 0x2a03002f
    ctx->pc = 0x1dde0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 47));
    // 0x1dde10: 0x1460ffb5
    ctx->pc = 0x1DDE10u;
    {
        const bool branch_taken_0x1dde10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DDE14u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2656));
        if (branch_taken_0x1dde10) {
            ctx->pc = 0x1DDCE8u;
            goto label_1ddce8;
        }
    }
    ctx->pc = 0x1DDE18u;
    // 0x1dde18: 0x3c030027
    ctx->pc = 0x1dde18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
    // 0x1dde1c: 0x24639718
    ctx->pc = 0x1dde1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294940440));
    // 0x1dde20: 0xc4620000
    ctx->pc = 0x1dde20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dde24: 0xc4610004
    ctx->pc = 0x1dde24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde28: 0xc4600008
    ctx->pc = 0x1dde28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde2c: 0xe6420114
    ctx->pc = 0x1dde2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 276), bits); }
    // 0x1dde30: 0xe6410118
    ctx->pc = 0x1dde30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    // 0x1dde34: 0xe640011c
    ctx->pc = 0x1dde34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x1dde38: 0x7bbf0040
    ctx->pc = 0x1dde38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dde3c: 0x7bb30030
    ctx->pc = 0x1dde3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dde40: 0x7bb20020
    ctx->pc = 0x1dde40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dde44: 0x7bb10010
    ctx->pc = 0x1dde44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dde48: 0x7bb00000
    ctx->pc = 0x1dde48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dde4c: 0x3e00008
    ctx->pc = 0x1DDE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DDC98u: goto label_1ddc98;
            case 0x1DDCE8u: goto label_1ddce8;
            case 0x1DDD3Cu: goto label_1ddd3c;
            case 0x1DDD8Cu: goto label_1ddd8c;
            case 0x1DDDD8u: goto label_1dddd8;
            case 0x1DDE08u: goto label_1dde08;
            case 0x1DDE0Cu: goto label_1dde0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DDE54u;
}
