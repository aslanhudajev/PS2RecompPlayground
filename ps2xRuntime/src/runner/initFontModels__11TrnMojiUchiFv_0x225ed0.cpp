#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initFontModels__11TrnMojiUchiFv
// Address: 0x225ed0 - 0x226050
void initFontModels__11TrnMojiUchiFv_0x225ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initFontModels__11TrnMojiUchiFv");


    ctx->pc = 0x225ed0u;

    // 0x225ed0: 0x27bdffa0
    ctx->pc = 0x225ed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x225ed4: 0x7fbf0050
    ctx->pc = 0x225ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x225ed8: 0x7fb40040
    ctx->pc = 0x225ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x225edc: 0x7fb30030
    ctx->pc = 0x225edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x225ee0: 0x7fb20020
    ctx->pc = 0x225ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x225ee4: 0x7fb10010
    ctx->pc = 0x225ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x225ee8: 0x7fb00000
    ctx->pc = 0x225ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225eec: 0x70809e28
    ctx->pc = 0x225eecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x225ef0: 0x3c03002b
    ctx->pc = 0x225ef0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)43 << 16));
    // 0x225ef4: 0x70008628
    ctx->pc = 0x225ef4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225ef8: 0x24718da0
    ctx->pc = 0x225ef8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294938016));
    // 0x225efc: 0x10000048
    ctx->pc = 0x225EFCu;
    {
        const bool branch_taken_0x225efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225F00u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x225efc) {
            ctx->pc = 0x226020u;
            goto label_226020;
        }
    }
    ctx->pc = 0x225F04u;
label_225f04:
    // 0x225f04: 0x8e240004
    ctx->pc = 0x225f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x225f08: 0x3c020050
    ctx->pc = 0x225f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x225f0c: 0x2442ea20
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x225f10: 0x41c03
    ctx->pc = 0x225f10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x225f14: 0x3063ffff
    ctx->pc = 0x225f14u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x225f18: 0x31900
    ctx->pc = 0x225f18u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x225f1c: 0x431021
    ctx->pc = 0x225f1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225f20: 0x8c420004
    ctx->pc = 0x225f20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x225f24: 0x3084ffff
    ctx->pc = 0x225f24u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x225f28: 0x41840
    ctx->pc = 0x225f28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x225f2c: 0x641821
    ctx->pc = 0x225f2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x225f30: 0x31880
    ctx->pc = 0x225f30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x225f34: 0x431021
    ctx->pc = 0x225f34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225f38: 0x8c540000
    ctx->pc = 0x225f38u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225f3c: 0xc06ab94
    ctx->pc = 0x225F3Cu;
    SET_GPR_U32(ctx, 31, 0x225F44u);
    ctx->pc = 0x225F40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AAE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjSize_0x1aae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F44u; }
        else if (ctx->pc != 0x225F44u) { ctx->pc = 0x225F44u; }
    }
    if (ctx->pc != 0x225F44u) { return; }
    ctx->pc = 0x225F44u;
    // 0x225f44: 0xc06878c
    ctx->pc = 0x225F44u;
    SET_GPR_U32(ctx, 31, 0x225F4Cu);
    ctx->pc = 0x225F48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F4Cu; }
        else if (ctx->pc != 0x225F4Cu) { ctx->pc = 0x225F4Cu; }
    }
    if (ctx->pc != 0x225F4Cu) { return; }
    ctx->pc = 0x225F4Cu;
    // 0x225f4c: 0xae420014
    ctx->pc = 0x225f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x225f50: 0x8e440014
    ctx->pc = 0x225f50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x225f54: 0xc06ab98
    ctx->pc = 0x225F54u;
    SET_GPR_U32(ctx, 31, 0x225F5Cu);
    ctx->pc = 0x225F58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AAE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjCopy_0x1aae60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F5Cu; }
        else if (ctx->pc != 0x225F5Cu) { ctx->pc = 0x225F5Cu; }
    }
    if (ctx->pc != 0x225F5Cu) { return; }
    ctx->pc = 0x225F5Cu;
    // 0x225f5c: 0x8e240000
    ctx->pc = 0x225f5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225f60: 0x2403000a
    ctx->pc = 0x225f60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x225f64: 0x3c023dcc
    ctx->pc = 0x225f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x225f68: 0x3442cccd
    ctx->pc = 0x225f68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x225f6c: 0x44820000
    ctx->pc = 0x225f6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x225f70: 0x3c010050
    ctx->pc = 0x225f70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x225f74: 0x83001a
    ctx->pc = 0x225f74u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x225f78: 0x8022fec5
    ctx->pc = 0x225f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x225f7c: 0x0
    ctx->pc = 0x225f7cu;
    // NOP
    // 0x225f80: 0x1810
    ctx->pc = 0x225f80u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x225f84: 0x44830800
    ctx->pc = 0x225f84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x225f88: 0x0
    ctx->pc = 0x225f88u;
    // NOP
    // 0x225f8c: 0x46800860
    ctx->pc = 0x225f8cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x225f90: 0x14400010
    ctx->pc = 0x225F90u;
    {
        const bool branch_taken_0x225f90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225F94u;
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x225f90) {
            ctx->pc = 0x225FD4u;
            goto label_225fd4;
        }
    }
    ctx->pc = 0x225F98u;
    // 0x225f98: 0x3c026666
    ctx->pc = 0x225f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26214 << 16));
    // 0x225f9c: 0x34426667
    ctx->pc = 0x225f9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26215));
    // 0x225fa0: 0x440018
    ctx->pc = 0x225fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x225fa4: 0x41fc2
    ctx->pc = 0x225fa4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x225fa8: 0x3c02be4c
    ctx->pc = 0x225fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48716 << 16));
    // 0x225fac: 0x3442cccd
    ctx->pc = 0x225facu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x225fb0: 0x44820000
    ctx->pc = 0x225fb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x225fb4: 0x1010
    ctx->pc = 0x225fb4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x225fb8: 0x21083
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x225fbc: 0x431021
    ctx->pc = 0x225fbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225fc0: 0x44820800
    ctx->pc = 0x225fc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x225fc4: 0x0
    ctx->pc = 0x225fc4u;
    // NOP
    // 0x225fc8: 0x46800860
    ctx->pc = 0x225fc8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x225fcc: 0x1000000f
    ctx->pc = 0x225FCCu;
    {
        const bool branch_taken_0x225fcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225FD0u;
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x225fcc) {
            ctx->pc = 0x22600Cu;
            goto label_22600c;
        }
    }
    ctx->pc = 0x225FD4u;
label_225fd4:
    // 0x225fd4: 0x3c026666
    ctx->pc = 0x225fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26214 << 16));
    // 0x225fd8: 0x34426667
    ctx->pc = 0x225fd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26215));
    // 0x225fdc: 0x440018
    ctx->pc = 0x225fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x225fe0: 0x41fc2
    ctx->pc = 0x225fe0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x225fe4: 0x3c02be4c
    ctx->pc = 0x225fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48716 << 16));
    // 0x225fe8: 0x3442cccd
    ctx->pc = 0x225fe8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x225fec: 0x44820000
    ctx->pc = 0x225fecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x225ff0: 0x1010
    ctx->pc = 0x225ff0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x225ff4: 0x21083
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x225ff8: 0x431021
    ctx->pc = 0x225ff8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225ffc: 0x44820800
    ctx->pc = 0x225ffcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x226000: 0x0
    ctx->pc = 0x226000u;
    // NOP
    // 0x226004: 0x46800860
    ctx->pc = 0x226004u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x226008: 0x46010342
    ctx->pc = 0x226008u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22600c:
    // 0x22600c: 0xc24af54
    ctx->pc = 0x22600Cu;
    SET_GPR_U32(ctx, 31, 0x226014u);
    ctx->pc = 0x226010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->pc = 0x92BD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV2__FPiff_0x92bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226014u; }
        else if (ctx->pc != 0x226014u) { ctx->pc = 0x226014u; }
    }
    if (ctx->pc != 0x226014u) { return; }
    ctx->pc = 0x226014u;
    // 0x226014: 0x26310008
    ctx->pc = 0x226014u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
    // 0x226018: 0x26520004
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x22601c: 0x26100001
    ctx->pc = 0x22601cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_226020:
    // 0x226020: 0x8e631020
    ctx->pc = 0x226020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4128)));
    // 0x226024: 0x203182a
    ctx->pc = 0x226024u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x226028: 0x1460ffb6
    ctx->pc = 0x226028u;
    {
        const bool branch_taken_0x226028 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x226028) {
            ctx->pc = 0x225F04u;
            goto label_225f04;
        }
    }
    ctx->pc = 0x226030u;
    // 0x226030: 0x7bbf0050
    ctx->pc = 0x226030u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226034: 0x7bb40040
    ctx->pc = 0x226034u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226038: 0x7bb30030
    ctx->pc = 0x226038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22603c: 0x7bb20020
    ctx->pc = 0x22603cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226040: 0x7bb10010
    ctx->pc = 0x226040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226044: 0x7bb00000
    ctx->pc = 0x226044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226048: 0x3e00008
    ctx->pc = 0x226048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22604Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225F04u: goto label_225f04;
            case 0x225FD4u: goto label_225fd4;
            case 0x22600Cu: goto label_22600c;
            case 0x226020u: goto label_226020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226050u;
}
