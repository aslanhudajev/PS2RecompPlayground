#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CheckGyouNum__11TrnMojiUchiFPcPi
// Address: 0x226190 - 0x226248
void CheckGyouNum__11TrnMojiUchiFPcPi_0x226190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CheckGyouNum__11TrnMojiUchiFPcPi");


    ctx->pc = 0x226190u;

    // 0x226190: 0x27bdffb0
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x226194: 0x7fbf0040
    ctx->pc = 0x226194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x226198: 0x7fb30030
    ctx->pc = 0x226198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22619c: 0x7fb20020
    ctx->pc = 0x22619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2261a0: 0x7fb10010
    ctx->pc = 0x2261a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2261a4: 0x7fb00000
    ctx->pc = 0x2261a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2261a8: 0x70809628
    ctx->pc = 0x2261a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2261ac: 0x70a08e28
    ctx->pc = 0x2261acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2261b0: 0xacc00000
    ctx->pc = 0x2261b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2261b4: 0x1000001a
    ctx->pc = 0x2261B4u;
    {
        const bool branch_taken_0x2261b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2261B8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2261b4) {
            ctx->pc = 0x226220u;
            goto label_226220;
        }
    }
    ctx->pc = 0x2261BCu;
label_2261bc:
    // 0x2261bc: 0xc089814
    ctx->pc = 0x2261BCu;
    SET_GPR_U32(ctx, 31, 0x2261C4u);
    ctx->pc = 0x2261C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x226050u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCodeNo2__11TrnMojiUchiFPCc_0x226050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261C4u; }
        else if (ctx->pc != 0x2261C4u) { ctx->pc = 0x2261C4u; }
    }
    if (ctx->pc != 0x2261C4u) { return; }
    ctx->pc = 0x2261C4u;
    // 0x2261c4: 0x70409e28
    ctx->pc = 0x2261c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2261c8: 0x72402628
    ctx->pc = 0x2261c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2261cc: 0xc089814
    ctx->pc = 0x2261CCu;
    SET_GPR_U32(ctx, 31, 0x2261D4u);
    ctx->pc = 0x2261D0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x226050u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMojiCodeNo2__11TrnMojiUchiFPCc_0x226050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2261D4u; }
        else if (ctx->pc != 0x2261D4u) { ctx->pc = 0x2261D4u; }
    }
    if (ctx->pc != 0x2261D4u) { return; }
    ctx->pc = 0x2261D4u;
    // 0x2261d4: 0x218c0
    ctx->pc = 0x2261d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2261d8: 0x621821
    ctx->pc = 0x2261d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2261dc: 0x31880
    ctx->pc = 0x2261dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2261e0: 0x2632021
    ctx->pc = 0x2261e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2261e4: 0x24030503
    ctx->pc = 0x2261e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2261e8: 0x14830005
    ctx->pc = 0x2261E8u;
    {
        const bool branch_taken_0x2261e8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x2261ECu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 1280));
        if (branch_taken_0x2261e8) {
            ctx->pc = 0x226200u;
            goto label_226200;
        }
    }
    ctx->pc = 0x2261F0u;
    // 0x2261f0: 0x26100004
    ctx->pc = 0x2261f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x2261f4: 0x10000008
    ctx->pc = 0x2261F4u;
    {
        const bool branch_taken_0x2261f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2261F8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2261f4) {
            ctx->pc = 0x226218u;
            goto label_226218;
        }
    }
    ctx->pc = 0x2261FCu;
    // 0x2261fc: 0x28810500
    ctx->pc = 0x2261fcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 1280));
label_226200:
    // 0x226200: 0x50200006
    ctx->pc = 0x226200u;
    {
        const bool branch_taken_0x226200 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x226200) {
            ctx->pc = 0x226204u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
            ctx->pc = 0x22621Cu;
            goto label_22621c;
        }
    }
    ctx->pc = 0x226208u;
    // 0x226208: 0x8e030000
    ctx->pc = 0x226208u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22620c: 0x24630001
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x226210: 0xae030000
    ctx->pc = 0x226210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x226214: 0x0
    ctx->pc = 0x226214u;
    // NOP
label_226218:
    // 0x226218: 0x26310002
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
label_22621c:
    // 0x22621c: 0x0
    ctx->pc = 0x22621cu;
    // NOP
label_226220:
    // 0x226220: 0x82230000
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x226224: 0x1460ffe5
    ctx->pc = 0x226224u;
    {
        const bool branch_taken_0x226224 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x226228u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x226224) {
            ctx->pc = 0x2261BCu;
            goto label_2261bc;
        }
    }
    ctx->pc = 0x22622Cu;
    // 0x22622c: 0x7bbf0040
    ctx->pc = 0x22622cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226230: 0x7bb30030
    ctx->pc = 0x226230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226234: 0x7bb20020
    ctx->pc = 0x226234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226238: 0x7bb10010
    ctx->pc = 0x226238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22623c: 0x7bb00000
    ctx->pc = 0x22623cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226240: 0x3e00008
    ctx->pc = 0x226240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226244u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2261BCu: goto label_2261bc;
            case 0x226200u: goto label_226200;
            case 0x226218u: goto label_226218;
            case 0x22621Cu: goto label_22621c;
            case 0x226220u: goto label_226220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x226248u;
}
