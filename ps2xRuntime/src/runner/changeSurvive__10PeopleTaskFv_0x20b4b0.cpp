#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeSurvive__10PeopleTaskFv
// Address: 0x20b4b0 - 0x20b5f4
void changeSurvive__10PeopleTaskFv_0x20b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeSurvive__10PeopleTaskFv");


    ctx->pc = 0x20b4b0u;

    // 0x20b4b0: 0x27bdffe0
    ctx->pc = 0x20b4b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b4b4: 0x7fbf0010
    ctx->pc = 0x20b4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20b4b8: 0x7fb00000
    ctx->pc = 0x20b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b4bc: 0x70808628
    ctx->pc = 0x20b4bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20b4c0: 0x3c020027
    ctx->pc = 0x20b4c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b4c4: 0x24422f08
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12040));
    // 0x20b4c8: 0x8c450008
    ctx->pc = 0x20b4c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b4cc: 0x8c841d70
    ctx->pc = 0x20b4ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 7536)));
    // 0x20b4d0: 0xc068fd8
    ctx->pc = 0x20B4D0u;
    SET_GPR_U32(ctx, 31, 0x20B4D8u);
    ctx->pc = 0x20B4D4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B4D8u; }
        else if (ctx->pc != 0x20B4D8u) { ctx->pc = 0x20B4D8u; }
    }
    if (ctx->pc != 0x20B4D8u) { return; }
    ctx->pc = 0x20B4D8u;
    // 0x20b4d8: 0x8e06000c
    ctx->pc = 0x20b4d8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20b4dc: 0x3c02efff
    ctx->pc = 0x20b4dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61439 << 16));
    // 0x20b4e0: 0x3445ffff
    ctx->pc = 0x20b4e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 65535));
    // 0x20b4e4: 0x3c040008
    ctx->pc = 0x20b4e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
    // 0x20b4e8: 0x3c030400
    ctx->pc = 0x20b4e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x20b4ec: 0x2402ffff
    ctx->pc = 0x20b4ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b4f0: 0xc52824
    ctx->pc = 0x20b4f0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20b4f4: 0xae05000c
    ctx->pc = 0x20b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x20b4f8: 0x8e06000c
    ctx->pc = 0x20b4f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20b4fc: 0x72002e28
    ctx->pc = 0x20b4fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20b500: 0xc42025
    ctx->pc = 0x20b500u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x20b504: 0xae04000c
    ctx->pc = 0x20b504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x20b508: 0xae001d78
    ctx->pc = 0x20b508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7544), GPR_U32(ctx, 0));
    // 0x20b50c: 0x8e061e6c
    ctx->pc = 0x20b50cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7788)));
    // 0x20b510: 0x8cc4000c
    ctx->pc = 0x20b510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x20b514: 0x831825
    ctx->pc = 0x20b514u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20b518: 0xacc3000c
    ctx->pc = 0x20b518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x20b51c: 0x12000002
    ctx->pc = 0x20B51Cu;
    {
        const bool branch_taken_0x20b51c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B520u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 7632), GPR_U32(ctx, 2));
        if (branch_taken_0x20b51c) {
            ctx->pc = 0x20B528u;
            goto label_20b528;
        }
    }
    ctx->pc = 0x20B524u;
    // 0x20b524: 0x24a50030
    ctx->pc = 0x20b524u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20b528:
    // 0x20b528: 0x8e071db0
    ctx->pc = 0x20b528u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 7600)));
    // 0x20b52c: 0x3c020027
    ctx->pc = 0x20b52cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20b530: 0x24462d00
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 11520));
    // 0x20b534: 0x3c02004a
    ctx->pc = 0x20b534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x20b538: 0x2444e8e0
    ctx->pc = 0x20b538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    // 0x20b53c: 0x82031e02
    ctx->pc = 0x20b53cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7682)));
    // 0x20b540: 0x71080
    ctx->pc = 0x20b540u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x20b544: 0xc21021
    ctx->pc = 0x20b544u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20b548: 0x8c460000
    ctx->pc = 0x20b548u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b54c: 0x24070014
    ctx->pc = 0x20b54cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x20b550: 0x31080
    ctx->pc = 0x20b550u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b554: 0x431021
    ctx->pc = 0x20b554u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b558: 0x21040
    ctx->pc = 0x20b558u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20b55c: 0x431021
    ctx->pc = 0x20b55cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b560: 0x21080
    ctx->pc = 0x20b560u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b564: 0x461021
    ctx->pc = 0x20b564u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20b568: 0x84460028
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x20b56c: 0xc07eabc
    ctx->pc = 0x20B56Cu;
    SET_GPR_U32(ctx, 31, 0x20B574u);
    ctx->pc = 0x20B570u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B574u; }
        else if (ctx->pc != 0x20B574u) { ctx->pc = 0x20B574u; }
    }
    if (ctx->pc != 0x20B574u) { return; }
    ctx->pc = 0x20B574u;
    // 0x20b574: 0x24020001
    ctx->pc = 0x20b574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b578: 0xae021dac
    ctx->pc = 0x20b578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7596), GPR_U32(ctx, 2));
    // 0x20b57c: 0xae001da4
    ctx->pc = 0x20b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7588), GPR_U32(ctx, 0));
    // 0x20b580: 0x8e020028
    ctx->pc = 0x20b580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x20b584: 0x2404ffff
    ctx->pc = 0x20b584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b588: 0x8c420008
    ctx->pc = 0x20b588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b58c: 0xae021da0
    ctx->pc = 0x20b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7584), GPR_U32(ctx, 2));
    // 0x20b590: 0x82021e00
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7680)));
    // 0x20b594: 0x50440007
    ctx->pc = 0x20B594u;
    {
        const bool branch_taken_0x20b594 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x20b594) {
            ctx->pc = 0x20B598u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
            ctx->pc = 0x20B5B4u;
            goto label_20b5b4;
        }
    }
    ctx->pc = 0x20B59Cu;
    // 0x20b59c: 0x21880
    ctx->pc = 0x20b59cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20b5a0: 0x27828b60
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 28), 4294937440));
    // 0x20b5a4: 0x431021
    ctx->pc = 0x20b5a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b5a8: 0xac400000
    ctx->pc = 0x20b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20b5ac: 0xa2041e00
    ctx->pc = 0x20b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7680), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b5b0: 0x3c0241a0
    ctx->pc = 0x20b5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16800 << 16));
label_20b5b4:
    // 0x20b5b4: 0x44826000
    ctx->pc = 0x20b5b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x20b5b8: 0x72002628
    ctx->pc = 0x20b5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20b5bc: 0xc082de0
    ctx->pc = 0x20B5BCu;
    SET_GPR_U32(ctx, 31, 0x20B5C4u);
    ctx->pc = 0x20B5C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 120));
    ctx->pc = 0x20B780u;
    {
        const uint32_t __entryPc = ctx->pc;
        keepAwaySpeed__10PeopleTaskFif_0x20b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B5C4u; }
        else if (ctx->pc != 0x20B5C4u) { ctx->pc = 0x20B5C4u; }
    }
    if (ctx->pc != 0x20B5C4u) { return; }
    ctx->pc = 0x20B5C4u;
    // 0x20b5c4: 0xae001dbc
    ctx->pc = 0x20b5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7612), GPR_U32(ctx, 0));
    // 0x20b5c8: 0x83848ba8
    ctx->pc = 0x20b5c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x20b5cc: 0x24030006
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x20b5d0: 0x14830004
    ctx->pc = 0x20B5D0u;
    {
        const bool branch_taken_0x20b5d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20b5d0) {
            ctx->pc = 0x20B5E4u;
            goto label_20b5e4;
        }
    }
    ctx->pc = 0x20B5D8u;
    // 0x20b5d8: 0x87838d6c
    ctx->pc = 0x20b5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x20b5dc: 0x2463ffff
    ctx->pc = 0x20b5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20b5e0: 0xa7838d6c
    ctx->pc = 0x20b5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937964), (uint16_t)GPR_U32(ctx, 3));
label_20b5e4:
    // 0x20b5e4: 0x7bbf0010
    ctx->pc = 0x20b5e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b5e8: 0x7bb00000
    ctx->pc = 0x20b5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b5ec: 0x3e00008
    ctx->pc = 0x20B5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B5F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B528u: goto label_20b528;
            case 0x20B5B4u: goto label_20b5b4;
            case 0x20B5E4u: goto label_20b5e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B5F4u;
}
