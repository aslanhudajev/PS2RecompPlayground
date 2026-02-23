#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskName_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd780 - 0x1fd958
void entryOskName_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskName_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd780u;

    // 0x1fd780: 0x27bdffd0
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd784: 0x7fbf0020
    ctx->pc = 0x1fd784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fd788: 0x7fb10010
    ctx->pc = 0x1fd788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd78c: 0x7fb00000
    ctx->pc = 0x1fd78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd790: 0x3c010052
    ctx->pc = 0x1fd790u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd794: 0x8c2294cc
    ctx->pc = 0x1fd794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939852)));
    // 0x1fd798: 0x70a08e28
    ctx->pc = 0x1fd798u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fd79c: 0x14400020
    ctx->pc = 0x1FD79Cu;
    {
        const bool branch_taken_0x1fd79c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD7A0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fd79c) {
            ctx->pc = 0x1FD820u;
            goto label_1fd820;
        }
    }
    ctx->pc = 0x1FD7A4u;
    // 0x1fd7a4: 0x3c010050
    ctx->pc = 0x1fd7a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd7a8: 0xc05b018
    ctx->pc = 0x1FD7A8u;
    SET_GPR_U32(ctx, 31, 0x1FD7B0u);
    ctx->pc = 0x1FD7ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7B0u; }
        else if (ctx->pc != 0x1FD7B0u) { ctx->pc = 0x1FD7B0u; }
    }
    if (ctx->pc != 0x1FD7B0u) { return; }
    ctx->pc = 0x1FD7B0u;
    // 0x1fd7b0: 0x24030004
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd7b4: 0x1443000f
    ctx->pc = 0x1FD7B4u;
    {
        const bool branch_taken_0x1fd7b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1FD7B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd7b4) {
            ctx->pc = 0x1FD7F4u;
            goto label_1fd7f4;
        }
    }
    ctx->pc = 0x1FD7BCu;
    // 0x1fd7bc: 0x3c010052
    ctx->pc = 0x1fd7bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd7c0: 0x8c2694c4
    ctx->pc = 0x1fd7c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd7c4: 0x8f828d10
    ctx->pc = 0x1fd7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1fd7c8: 0x3c010050
    ctx->pc = 0x1fd7c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd7cc: 0x8c240c80
    ctx->pc = 0x1fd7ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    // 0x1fd7d0: 0x24420001
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fd7d4: 0x3c010052
    ctx->pc = 0x1fd7d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd7d8: 0x8c2594c0
    ctx->pc = 0x1fd7d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939840)));
    // 0x1fd7dc: 0xc05aeba
    ctx->pc = 0x1FD7DCu;
    SET_GPR_U32(ctx, 31, 0x1FD7E4u);
    ctx->pc = 0x1FD7E0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7E4u; }
        else if (ctx->pc != 0x1FD7E4u) { ctx->pc = 0x1FD7E4u; }
    }
    if (ctx->pc != 0x1FD7E4u) { return; }
    ctx->pc = 0x1FD7E4u;
    // 0x1fd7e4: 0x3c010050
    ctx->pc = 0x1fd7e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd7e8: 0xc05b018
    ctx->pc = 0x1FD7E8u;
    SET_GPR_U32(ctx, 31, 0x1FD7F0u);
    ctx->pc = 0x1FD7ECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7F0u; }
        else if (ctx->pc != 0x1FD7F0u) { ctx->pc = 0x1FD7F0u; }
    }
    if (ctx->pc != 0x1FD7F0u) { return; }
    ctx->pc = 0x1FD7F0u;
    // 0x1fd7f0: 0x24030001
    ctx->pc = 0x1fd7f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1fd7f4:
    // 0x1fd7f4: 0x10430004
    ctx->pc = 0x1FD7F4u;
    {
        const bool branch_taken_0x1fd7f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FD7F8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1fd7f4) {
            ctx->pc = 0x1FD808u;
            goto label_1fd808;
        }
    }
    ctx->pc = 0x1FD7FCu;
    // 0x1fd7fc: 0x24030003
    ctx->pc = 0x1fd7fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd800: 0x1443000b
    ctx->pc = 0x1FD800u;
    {
        const bool branch_taken_0x1fd800 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fd800) {
            ctx->pc = 0x1FD830u;
            goto label_1fd830;
        }
    }
    ctx->pc = 0x1FD808u;
label_1fd808:
    // 0x1fd808: 0xc05ae0c
    ctx->pc = 0x1FD808u;
    SET_GPR_U32(ctx, 31, 0x1FD810u);
    ctx->pc = 0x1FD80Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3200)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD810u; }
        else if (ctx->pc != 0x1FD810u) { ctx->pc = 0x1FD810u; }
    }
    if (ctx->pc != 0x1FD810u) { return; }
    ctx->pc = 0x1FD810u;
    // 0x1fd810: 0x3c010050
    ctx->pc = 0x1fd810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1fd814: 0xac200c80
    ctx->pc = 0x1fd814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3200), GPR_U32(ctx, 0));
    // 0x1fd818: 0x10000005
    ctx->pc = 0x1FD818u;
    {
        const bool branch_taken_0x1fd818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD81Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd818) {
            ctx->pc = 0x1FD830u;
            goto label_1fd830;
        }
    }
    ctx->pc = 0x1FD820u;
label_1fd820:
    // 0x1fd820: 0x8f828b38
    ctx->pc = 0x1fd820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937400)));
    // 0x1fd824: 0x14400002
    ctx->pc = 0x1FD824u;
    {
        const bool branch_taken_0x1fd824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fd824) {
            ctx->pc = 0x1FD830u;
            goto label_1fd830;
        }
    }
    ctx->pc = 0x1FD82Cu;
    // 0x1fd82c: 0x24100001
    ctx->pc = 0x1fd82cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1fd830:
    // 0x1fd830: 0x12000044
    ctx->pc = 0x1FD830u;
    {
        const bool branch_taken_0x1fd830 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD834u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd830) {
            ctx->pc = 0x1FD944u;
            goto label_1fd944;
        }
    }
    ctx->pc = 0x1FD838u;
    // 0x1fd838: 0x3c010052
    ctx->pc = 0x1fd838u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd83c: 0x8c2494b0
    ctx->pc = 0x1fd83cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd840: 0x3c020052
    ctx->pc = 0x1fd840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd844: 0x244394d0
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd848: 0x2402fffe
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fd84c: 0x642021
    ctx->pc = 0x1fd84cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd850: 0x80830000
    ctx->pc = 0x1fd850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd854: 0x1462000e
    ctx->pc = 0x1FD854u;
    {
        const bool branch_taken_0x1fd854 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1fd854) {
            ctx->pc = 0x1FD890u;
            goto label_1fd890;
        }
    }
    ctx->pc = 0x1FD85Cu;
    // 0x1fd85c: 0xa0800000
    ctx->pc = 0x1fd85cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd860: 0x10000038
    ctx->pc = 0x1FD860u;
    {
        const bool branch_taken_0x1fd860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD864u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fd860) {
            ctx->pc = 0x1FD944u;
            goto label_1fd944;
        }
    }
    ctx->pc = 0x1FD868u;
label_1fd868:
    // 0x1fd868: 0x4610003
    ctx->pc = 0x1FD868u;
    {
        const bool branch_taken_0x1fd868 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FD86Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fd868) {
            ctx->pc = 0x1FD878u;
            goto label_1fd878;
        }
    }
    ctx->pc = 0x1FD870u;
    // 0x1fd870: 0x10000035
    ctx->pc = 0x1FD870u;
    {
        const bool branch_taken_0x1fd870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD874u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1fd870) {
            ctx->pc = 0x1FD948u;
            goto label_1fd948;
        }
    }
    ctx->pc = 0x1FD878u;
label_1fd878:
    // 0x1fd878: 0x8c820004
    ctx->pc = 0x1fd878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fd87c: 0x3c010052
    ctx->pc = 0x1fd87cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd880: 0x21080
    ctx->pc = 0x1fd880u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd884: 0x821021
    ctx->pc = 0x1fd884u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fd888: 0x2442000c
    ctx->pc = 0x1fd888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
    // 0x1fd88c: 0xac2294c4
    ctx->pc = 0x1fd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939844), GPR_U32(ctx, 2));
label_1fd890:
    // 0x1fd890: 0x3c010052
    ctx->pc = 0x1fd890u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd894: 0x8c2294b0
    ctx->pc = 0x1fd894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd898: 0x3c010052
    ctx->pc = 0x1fd898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd89c: 0x8c2494c4
    ctx->pc = 0x1fd89cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd8a0: 0x8c830000
    ctx->pc = 0x1fd8a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd8a4: 0x1443fff0
    ctx->pc = 0x1FD8A4u;
    {
        const bool branch_taken_0x1fd8a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1fd8a4) {
            ctx->pc = 0x1FD868u;
            goto label_1fd868;
        }
    }
    ctx->pc = 0x1FD8ACu;
    // 0x1fd8ac: 0x8c820008
    ctx->pc = 0x1fd8acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fd8b0: 0x3c010052
    ctx->pc = 0x1fd8b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd8b4: 0xac2294b8
    ctx->pc = 0x1fd8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939832), GPR_U32(ctx, 2));
    // 0x1fd8b8: 0x3c010052
    ctx->pc = 0x1fd8b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd8bc: 0x8c2294b8
    ctx->pc = 0x1fd8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939832)));
    // 0x1fd8c0: 0xc06878c
    ctx->pc = 0x1FD8C0u;
    SET_GPR_U32(ctx, 31, 0x1FD8C8u);
    ctx->pc = 0x1FD8C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD8C8u; }
        else if (ctx->pc != 0x1FD8C8u) { ctx->pc = 0x1FD8C8u; }
    }
    if (ctx->pc != 0x1FD8C8u) { return; }
    ctx->pc = 0x1FD8C8u;
    // 0x1fd8c8: 0x3c010052
    ctx->pc = 0x1fd8c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd8cc: 0xac2294bc
    ctx->pc = 0x1fd8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939836), GPR_U32(ctx, 2));
    // 0x1fd8d0: 0x3c010052
    ctx->pc = 0x1fd8d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd8d4: 0x842694b0
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd8d8: 0x3c020050
    ctx->pc = 0x1fd8d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fd8dc: 0x2443ea24
    ctx->pc = 0x1fd8dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fd8e0: 0x2402ffc0
    ctx->pc = 0x1fd8e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fd8e4: 0x3c010052
    ctx->pc = 0x1fd8e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd8e8: 0x8c2794b4
    ctx->pc = 0x1fd8e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294939828)));
    // 0x1fd8ec: 0x72403
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1fd8f0: 0x3084ffff
    ctx->pc = 0x1fd8f0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1fd8f4: 0x42100
    ctx->pc = 0x1fd8f4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fd8f8: 0x641821
    ctx->pc = 0x1fd8f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd8fc: 0x8c650000
    ctx->pc = 0x1fd8fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd900: 0x30e4ffff
    ctx->pc = 0x1fd900u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 7), 65535));
    // 0x1fd904: 0x3c010052
    ctx->pc = 0x1fd904u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd908: 0x41840
    ctx->pc = 0x1fd908u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fd90c: 0x641821
    ctx->pc = 0x1fd90cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd910: 0x31880
    ctx->pc = 0x1fd910u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd914: 0x651821
    ctx->pc = 0x1fd914u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fd918: 0xa4660004
    ctx->pc = 0x1fd918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1fd91c: 0x8c2494c4
    ctx->pc = 0x1fd91cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939844)));
    // 0x1fd920: 0x3c010052
    ctx->pc = 0x1fd920u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd924: 0x8c2394bc
    ctx->pc = 0x1fd924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fd928: 0x2484000c
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1fd92c: 0x2463003f
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fd930: 0xc079604
    ctx->pc = 0x1FD930u;
    SET_GPR_U32(ctx, 31, 0x1FD938u);
    ctx->pc = 0x1FD934u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1E5810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpandEntry_0x1e5810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD938u; }
        else if (ctx->pc != 0x1FD938u) { ctx->pc = 0x1FD938u; }
    }
    if (ctx->pc != 0x1FD938u) { return; }
    ctx->pc = 0x1FD938u;
    // 0x1fd938: 0x24020003
    ctx->pc = 0x1fd938u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd93c: 0xae22000c
    ctx->pc = 0x1fd93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1fd940: 0x24020001
    ctx->pc = 0x1fd940u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1fd944:
    // 0x1fd944: 0x7bbf0020
    ctx->pc = 0x1fd944u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd948:
    // 0x1fd948: 0x7bb10010
    ctx->pc = 0x1fd948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd94c: 0x7bb00000
    ctx->pc = 0x1fd94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd950: 0x3e00008
    ctx->pc = 0x1FD950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD954u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD7F4u: goto label_1fd7f4;
            case 0x1FD808u: goto label_1fd808;
            case 0x1FD820u: goto label_1fd820;
            case 0x1FD830u: goto label_1fd830;
            case 0x1FD868u: goto label_1fd868;
            case 0x1FD878u: goto label_1fd878;
            case 0x1FD890u: goto label_1fd890;
            case 0x1FD944u: goto label_1fd944;
            case 0x1FD948u: goto label_1fd948;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD958u;
}
