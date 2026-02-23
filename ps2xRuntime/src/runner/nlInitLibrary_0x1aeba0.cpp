#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInitLibrary
// Address: 0x1aeba0 - 0x1aee34
void nlInitLibrary_0x1aeba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInitLibrary");


    ctx->pc = 0x1aeba0u;

    // 0x1aeba0: 0x27bdffb0
    ctx->pc = 0x1aeba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aeba4: 0x7fbf0040
    ctx->pc = 0x1aeba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1aeba8: 0x7fb30030
    ctx->pc = 0x1aeba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aebac: 0x7fb20020
    ctx->pc = 0x1aebacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aebb0: 0x7fb10010
    ctx->pc = 0x1aebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aebb4: 0x7fb00000
    ctx->pc = 0x1aebb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aebb8: 0x71209628
    ctx->pc = 0x1aebb8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1aebbc: 0x8fa90058
    ctx->pc = 0x1aebbcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aebc0: 0x71408e28
    ctx->pc = 0x1aebc0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1aebc4: 0xc06ba28
    ctx->pc = 0x1AEBC4u;
    SET_GPR_U32(ctx, 31, 0x1AEBCCu);
    ctx->pc = 0x1AEBC8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AE8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetTvMode_0x1ae8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBCCu; }
        else if (ctx->pc != 0x1AEBCCu) { ctx->pc = 0x1AEBCCu; }
    }
    if (ctx->pc != 0x1AEBCCu) { return; }
    ctx->pc = 0x1AEBCCu;
    // 0x1aebcc: 0x24130001
    ctx->pc = 0x1aebccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aebd0: 0xc0547e4
    ctx->pc = 0x1AEBD0u;
    SET_GPR_U32(ctx, 31, 0x1AEBD8u);
    ctx->pc = 0x1AEBD4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x151F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x151f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEBD8u; }
        else if (ctx->pc != 0x1AEBD8u) { ctx->pc = 0x1AEBD8u; }
    }
    if (ctx->pc != 0x1AEBD8u) { return; }
    ctx->pc = 0x1AEBD8u;
    // 0x1aebd8: 0x90490000
    ctx->pc = 0x1aebd8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aebdc: 0x32630001
    ctx->pc = 0x1aebdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 1));
    // 0x1aebe0: 0x34180
    ctx->pc = 0x1aebe0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1aebe4: 0x3c030026
    ctx->pc = 0x1aebe4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1aebe8: 0x2407ffbf
    ctx->pc = 0x1aebe8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1aebec: 0x2465f890
    ctx->pc = 0x1aebecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965392));
    // 0x1aebf0: 0x1271824
    ctx->pc = 0x1aebf0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1aebf4: 0x681825
    ctx->pc = 0x1aebf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1aebf8: 0x24043f00
    ctx->pc = 0x1aebf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16128));
    // 0x1aebfc: 0x24060010
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1aec00: 0xc069490
    ctx->pc = 0x1AEC00u;
    SET_GPR_U32(ctx, 31, 0x1AEC08u);
    ctx->pc = 0x1AEC04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1A5240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToVu1Mem_0x1a5240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC08u; }
        else if (ctx->pc != 0x1AEC08u) { ctx->pc = 0x1AEC08u; }
    }
    if (ctx->pc != 0x1AEC08u) { return; }
    ctx->pc = 0x1AEC08u;
    // 0x1aec08: 0x3c020026
    ctx->pc = 0x1aec08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1aec0c: 0x2442f850
    ctx->pc = 0x1aec0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965328));
    // 0x1aec10: 0xd8570000
    ctx->pc = 0x1aec10u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aec14: 0xd8560010
    ctx->pc = 0x1aec14u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aec18: 0xd8550020
    ctx->pc = 0x1aec18u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1aec1c: 0xd8540030
    ctx->pc = 0x1aec1cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1aec20: 0x72402628
    ctx->pc = 0x1aec20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1aec24: 0x72202e28
    ctx->pc = 0x1aec24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1aec28: 0x8fa70050
    ctx->pc = 0x1aec28u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aec2c: 0xc0694b0
    ctx->pc = 0x1AEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC34u);
    ctx->pc = 0x1AEC30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A52C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaInitMFifo_0x1a52c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC34u; }
        else if (ctx->pc != 0x1AEC34u) { ctx->pc = 0x1AEC34u; }
    }
    if (ctx->pc != 0x1AEC34u) { return; }
    ctx->pc = 0x1AEC34u;
    // 0x1aec34: 0xc0694bc
    ctx->pc = 0x1AEC34u;
    SET_GPR_U32(ctx, 31, 0x1AEC3Cu);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC3Cu; }
        else if (ctx->pc != 0x1AEC3Cu) { ctx->pc = 0x1AEC3Cu; }
    }
    if (ctx->pc != 0x1AEC3Cu) { return; }
    ctx->pc = 0x1AEC3Cu;
    // 0x1aec3c: 0xc06bd68
    ctx->pc = 0x1AEC3Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC44u);
    ctx->pc = 0x1AF5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPowOnInitSet_0x1af5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC44u; }
        else if (ctx->pc != 0x1AEC44u) { ctx->pc = 0x1AEC44u; }
    }
    if (ctx->pc != 0x1AEC44u) { return; }
    ctx->pc = 0x1AEC44u;
    // 0x1aec44: 0xc06ac08
    ctx->pc = 0x1AEC44u;
    SET_GPR_U32(ctx, 31, 0x1AEC4Cu);
    ctx->pc = 0x1AEC48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB020u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLoadModule_0x1ab020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC4Cu; }
        else if (ctx->pc != 0x1AEC4Cu) { ctx->pc = 0x1AEC4Cu; }
    }
    if (ctx->pc != 0x1AEC4Cu) { return; }
    ctx->pc = 0x1AEC4Cu;
    // 0x1aec4c: 0x3c010030
    ctx->pc = 0x1aec4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aec50: 0x84245836
    ctx->pc = 0x1aec50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1aec54: 0x3c023f00
    ctx->pc = 0x1aec54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16128 << 16));
    // 0x1aec58: 0x44821000
    ctx->pc = 0x1aec58u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1aec5c: 0x3c024500
    ctx->pc = 0x1aec5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17664 << 16));
    // 0x1aec60: 0x44821800
    ctx->pc = 0x1aec60u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1aec64: 0x3c010030
    ctx->pc = 0x1aec64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aec68: 0x84235834
    ctx->pc = 0x1aec68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1aec6c: 0x44840000
    ctx->pc = 0x1aec6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1aec70: 0x0
    ctx->pc = 0x1aec70u;
    // NOP
    // 0x1aec74: 0x468003e0
    ctx->pc = 0x1aec74u;
    ctx->f[15] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1aec78: 0x3c010030
    ctx->pc = 0x1aec78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aec7c: 0x84225838
    ctx->pc = 0x1aec7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1aec80: 0x44830800
    ctx->pc = 0x1aec80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1aec84: 0x0
    ctx->pc = 0x1aec84u;
    // NOP
    // 0x1aec88: 0x46800ba0
    ctx->pc = 0x1aec88u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1aec8c: 0x44820000
    ctx->pc = 0x1aec8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1aec90: 0x460e1042
    ctx->pc = 0x1aec90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x1aec94: 0x46800020
    ctx->pc = 0x1aec94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1aec98: 0x4600181a
    ctx->pc = 0x1aec98u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1aec9c: 0x46011b01
    ctx->pc = 0x1aec9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1aeca0: 0xc06b158
    ctx->pc = 0x1AECA0u;
    SET_GPR_U32(ctx, 31, 0x1AECA8u);
    ctx->pc = 0x1AECA4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[15]));
    ctx->pc = 0x1AC560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetWindowSize_0x1ac560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECA8u; }
        else if (ctx->pc != 0x1AECA8u) { ctx->pc = 0x1AECA8u; }
    }
    if (ctx->pc != 0x1AECA8u) { return; }
    ctx->pc = 0x1AECA8u;
    // 0x1aeca8: 0x70002628
    ctx->pc = 0x1aeca8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aecac: 0xc06c608
    ctx->pc = 0x1AECACu;
    SET_GPR_U32(ctx, 31, 0x1AECB4u);
    ctx->pc = 0x1AECB0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECB4u; }
        else if (ctx->pc != 0x1AECB4u) { ctx->pc = 0x1AECB4u; }
    }
    if (ctx->pc != 0x1AECB4u) { return; }
    ctx->pc = 0x1AECB4u;
    // 0x1aecb4: 0x24040200
    ctx->pc = 0x1aecb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x1aecb8: 0xc06c608
    ctx->pc = 0x1AECB8u;
    SET_GPR_U32(ctx, 31, 0x1AECC0u);
    ctx->pc = 0x1AECBCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1820u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetFBA_0x1b1820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECC0u; }
        else if (ctx->pc != 0x1AECC0u) { ctx->pc = 0x1AECC0u; }
    }
    if (ctx->pc != 0x1AECC0u) { return; }
    ctx->pc = 0x1AECC0u;
    // 0x1aecc0: 0x70002628
    ctx->pc = 0x1aecc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aecc4: 0xc0694e8
    ctx->pc = 0x1AECC4u;
    SET_GPR_U32(ctx, 31, 0x1AECCCu);
    ctx->pc = 0x1AECC8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECCCu; }
        else if (ctx->pc != 0x1AECCCu) { ctx->pc = 0x1AECCCu; }
    }
    if (ctx->pc != 0x1AECCCu) { return; }
    ctx->pc = 0x1AECCCu;
    // 0x1aeccc: 0x3c023e99
    ctx->pc = 0x1aecccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16025 << 16));
    // 0x1aecd0: 0x3442999a
    ctx->pc = 0x1aecd0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1aecd4: 0x44826000
    ctx->pc = 0x1aecd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1aecd8: 0x3c024396
    ctx->pc = 0x1aecd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17302 << 16));
    // 0x1aecdc: 0x44826800
    ctx->pc = 0x1aecdcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1aece0: 0xc06b21c
    ctx->pc = 0x1AECE0u;
    SET_GPR_U32(ctx, 31, 0x1AECE8u);
    ctx->pc = 0x1AC870u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetZBound_0x1ac870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECE8u; }
        else if (ctx->pc != 0x1AECE8u) { ctx->pc = 0x1AECE8u; }
    }
    if (ctx->pc != 0x1AECE8u) { return; }
    ctx->pc = 0x1AECE8u;
    // 0x1aece8: 0xc06be00
    ctx->pc = 0x1AECE8u;
    SET_GPR_U32(ctx, 31, 0x1AECF0u);
    ctx->pc = 0x1AF800u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlTmrInit_0x1af800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AECF0u; }
        else if (ctx->pc != 0x1AECF0u) { ctx->pc = 0x1AECF0u; }
    }
    if (ctx->pc != 0x1AECF0u) { return; }
    ctx->pc = 0x1AECF0u;
    // 0x1aecf0: 0x3c031000
    ctx->pc = 0x1aecf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1aecf4: 0x34670810
    ctx->pc = 0x1aecf4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 3), 2064));
    // 0x1aecf8: 0x8ce60000
    ctx->pc = 0x1aecf8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aecfc: 0x2405ff7f
    ctx->pc = 0x1aecfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1aed00: 0x3c03a5a5
    ctx->pc = 0x1aed00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)42405 << 16));
    // 0x1aed04: 0x3c011000
    ctx->pc = 0x1aed04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed08: 0x2404fffc
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1aed0c: 0x3463a5a5
    ctx->pc = 0x1aed0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 42405));
    // 0x1aed10: 0xc52824
    ctx->pc = 0x1aed10u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aed14: 0xace50000
    ctx->pc = 0x1aed14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1aed18: 0x8c250810
    ctx->pc = 0x1aed18u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064))); // MMIO: 0x10000810
    // 0x1aed1c: 0xa42024
    ctx->pc = 0x1aed1cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1aed20: 0x3c011000
    ctx->pc = 0x1aed20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed24: 0xac240810
    ctx->pc = 0x1aed24u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x1aed28: 0x3c011000
    ctx->pc = 0x1aed28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed2c: 0x8c240810
    ctx->pc = 0x1aed2cu;
    SET_GPR_U32(ctx, 4, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064))); // MMIO: 0x10000810
    // 0x1aed30: 0x34840002
    ctx->pc = 0x1aed30u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 2));
    // 0x1aed34: 0x3c011000
    ctx->pc = 0x1aed34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed38: 0xac240810
    ctx->pc = 0x1aed38u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x1aed3c: 0x3c011000
    ctx->pc = 0x1aed3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed40: 0xac200800
    ctx->pc = 0x1aed40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2048), GPR_U32(ctx, 0)); // MMIO: 0x10000800
    // 0x1aed44: 0x3c011000
    ctx->pc = 0x1aed44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed48: 0x8c240810
    ctx->pc = 0x1aed48u;
    SET_GPR_U32(ctx, 4, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064))); // MMIO: 0x10000810
    // 0x1aed4c: 0x34840080
    ctx->pc = 0x1aed4cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 128));
    // 0x1aed50: 0x3c011000
    ctx->pc = 0x1aed50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
    // 0x1aed54: 0xac240810
    ctx->pc = 0x1aed54u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 4)); // MMIO: 0x10000810
    // 0x1aed58: 0x3c011101
    ctx->pc = 0x1aed58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed5c: 0xac23cff0
    ctx->pc = 0x1aed5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294954992), GPR_U32(ctx, 3)); // MMIO: 0x1100cff0
    // 0x1aed60: 0x3c011101
    ctx->pc = 0x1aed60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed64: 0xac23cff4
    ctx->pc = 0x1aed64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294954996), GPR_U32(ctx, 3)); // MMIO: 0x1100cff4
    // 0x1aed68: 0x3c011101
    ctx->pc = 0x1aed68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed6c: 0xac23cff8
    ctx->pc = 0x1aed6cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955000), GPR_U32(ctx, 3)); // MMIO: 0x1100cff8
    // 0x1aed70: 0x3c011101
    ctx->pc = 0x1aed70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed74: 0xac23cffc
    ctx->pc = 0x1aed74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955004), GPR_U32(ctx, 3)); // MMIO: 0x1100cffc
    // 0x1aed78: 0x3c011101
    ctx->pc = 0x1aed78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed7c: 0xac23d3f0
    ctx->pc = 0x1aed7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294956016), GPR_U32(ctx, 3)); // MMIO: 0x1100d3f0
    // 0x1aed80: 0x3c011101
    ctx->pc = 0x1aed80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed84: 0xac23d3f4
    ctx->pc = 0x1aed84u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294956020), GPR_U32(ctx, 3)); // MMIO: 0x1100d3f4
    // 0x1aed88: 0x3c011101
    ctx->pc = 0x1aed88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed8c: 0xac23d3f8
    ctx->pc = 0x1aed8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294956024), GPR_U32(ctx, 3)); // MMIO: 0x1100d3f8
    // 0x1aed90: 0x3c011101
    ctx->pc = 0x1aed90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed94: 0xac23d3fc
    ctx->pc = 0x1aed94u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294956028), GPR_U32(ctx, 3)); // MMIO: 0x1100d3fc
    // 0x1aed98: 0x3c011101
    ctx->pc = 0x1aed98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aed9c: 0xac23dbf0
    ctx->pc = 0x1aed9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294958064), GPR_U32(ctx, 3)); // MMIO: 0x1100dbf0
    // 0x1aeda0: 0x3c011101
    ctx->pc = 0x1aeda0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aeda4: 0xac23dbf4
    ctx->pc = 0x1aeda4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294958068), GPR_U32(ctx, 3)); // MMIO: 0x1100dbf4
    // 0x1aeda8: 0x3c011101
    ctx->pc = 0x1aeda8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedac: 0xac23dbf8
    ctx->pc = 0x1aedacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294958072), GPR_U32(ctx, 3)); // MMIO: 0x1100dbf8
    // 0x1aedb0: 0x3c011101
    ctx->pc = 0x1aedb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedb4: 0xac23dbfc
    ctx->pc = 0x1aedb4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294958076), GPR_U32(ctx, 3)); // MMIO: 0x1100dbfc
    // 0x1aedb8: 0x3c011101
    ctx->pc = 0x1aedb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedbc: 0xac23dff0
    ctx->pc = 0x1aedbcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959088), GPR_U32(ctx, 3)); // MMIO: 0x1100dff0
    // 0x1aedc0: 0x3c011101
    ctx->pc = 0x1aedc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedc4: 0xac23dff4
    ctx->pc = 0x1aedc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959092), GPR_U32(ctx, 3)); // MMIO: 0x1100dff4
    // 0x1aedc8: 0x3c011101
    ctx->pc = 0x1aedc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedcc: 0xac23dff8
    ctx->pc = 0x1aedccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959096), GPR_U32(ctx, 3)); // MMIO: 0x1100dff8
    // 0x1aedd0: 0x3c011101
    ctx->pc = 0x1aedd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedd4: 0xac23dffc
    ctx->pc = 0x1aedd4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959100), GPR_U32(ctx, 3)); // MMIO: 0x1100dffc
    // 0x1aedd8: 0x3c011101
    ctx->pc = 0x1aedd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aeddc: 0xac23ebf0
    ctx->pc = 0x1aeddcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294962160), GPR_U32(ctx, 3)); // MMIO: 0x1100ebf0
    // 0x1aede0: 0x3c011101
    ctx->pc = 0x1aede0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aede4: 0xac23ebf4
    ctx->pc = 0x1aede4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294962164), GPR_U32(ctx, 3)); // MMIO: 0x1100ebf4
    // 0x1aede8: 0x3c011101
    ctx->pc = 0x1aede8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedec: 0xac23ebf8
    ctx->pc = 0x1aedecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294962168), GPR_U32(ctx, 3)); // MMIO: 0x1100ebf8
    // 0x1aedf0: 0x3c011101
    ctx->pc = 0x1aedf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedf4: 0xac23ebfc
    ctx->pc = 0x1aedf4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294962172), GPR_U32(ctx, 3)); // MMIO: 0x1100ebfc
    // 0x1aedf8: 0x3c011101
    ctx->pc = 0x1aedf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aedfc: 0xac23f7f0
    ctx->pc = 0x1aedfcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294965232), GPR_U32(ctx, 3)); // MMIO: 0x1100f7f0
    // 0x1aee00: 0x3c011101
    ctx->pc = 0x1aee00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aee04: 0xac23f7f4
    ctx->pc = 0x1aee04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294965236), GPR_U32(ctx, 3)); // MMIO: 0x1100f7f4
    // 0x1aee08: 0x3c011101
    ctx->pc = 0x1aee08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aee0c: 0xac23f7f8
    ctx->pc = 0x1aee0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294965240), GPR_U32(ctx, 3)); // MMIO: 0x1100f7f8
    // 0x1aee10: 0x3c011101
    ctx->pc = 0x1aee10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4353 << 16));
    // 0x1aee14: 0xac23f7fc
    ctx->pc = 0x1aee14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294965244), GPR_U32(ctx, 3)); // MMIO: 0x1100f7fc
    // 0x1aee18: 0x7bbf0040
    ctx->pc = 0x1aee18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aee1c: 0x7bb30030
    ctx->pc = 0x1aee1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aee20: 0x7bb20020
    ctx->pc = 0x1aee20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aee24: 0x7bb10010
    ctx->pc = 0x1aee24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee28: 0x7bb00000
    ctx->pc = 0x1aee28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aee2c: 0x3e00008
    ctx->pc = 0x1AEE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEE34u;
}
