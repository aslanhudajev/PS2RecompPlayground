#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd310 - 0x1fd4cc
void entryBodyNo_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd310u;

    // 0x1fd310: 0x27bdffd0
    ctx->pc = 0x1fd310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd314: 0x7fbf0020
    ctx->pc = 0x1fd314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fd318: 0x7fb10010
    ctx->pc = 0x1fd318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd31c: 0x7fb00000
    ctx->pc = 0x1fd31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd320: 0x3c010046
    ctx->pc = 0x1fd320u;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x1fd324: 0x84227cf0
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 31984)));
    // 0x1fd328: 0x70808e28
    ctx->pc = 0x1fd328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fd32c: 0x10400010
    ctx->pc = 0x1FD32Cu;
    {
        const bool branch_taken_0x1fd32c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD330u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fd32c) {
            ctx->pc = 0x1FD370u;
            goto label_1fd370;
        }
    }
    ctx->pc = 0x1FD334u;
    // 0x1fd334: 0x70008628
    ctx->pc = 0x1fd334u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fd338:
    // 0x1fd338: 0xc079580
    ctx->pc = 0x1FD338u;
    SET_GPR_U32(ctx, 31, 0x1FD340u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD340u; }
        else if (ctx->pc != 0x1FD340u) { ctx->pc = 0x1FD340u; }
    }
    if (ctx->pc != 0x1FD340u) { return; }
    ctx->pc = 0x1FD340u;
    // 0x1fd340: 0xc079580
    ctx->pc = 0x1FD340u;
    SET_GPR_U32(ctx, 31, 0x1FD348u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD348u; }
        else if (ctx->pc != 0x1FD348u) { ctx->pc = 0x1FD348u; }
    }
    if (ctx->pc != 0x1FD348u) { return; }
    ctx->pc = 0x1FD348u;
    // 0x1fd348: 0xc079580
    ctx->pc = 0x1FD348u;
    SET_GPR_U32(ctx, 31, 0x1FD350u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD350u; }
        else if (ctx->pc != 0x1FD350u) { ctx->pc = 0x1FD350u; }
    }
    if (ctx->pc != 0x1FD350u) { return; }
    ctx->pc = 0x1FD350u;
    // 0x1fd350: 0xc079580
    ctx->pc = 0x1FD350u;
    SET_GPR_U32(ctx, 31, 0x1FD358u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD358u; }
        else if (ctx->pc != 0x1FD358u) { ctx->pc = 0x1FD358u; }
    }
    if (ctx->pc != 0x1FD358u) { return; }
    ctx->pc = 0x1FD358u;
    // 0x1fd358: 0x26100001
    ctx->pc = 0x1fd358u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd35c: 0x2a020100
    ctx->pc = 0x1fd35cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
    // 0x1fd360: 0x1440fff5
    ctx->pc = 0x1FD360u;
    {
        const bool branch_taken_0x1fd360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FD364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd360) {
            ctx->pc = 0x1FD338u;
            goto label_1fd338;
        }
    }
    ctx->pc = 0x1FD368u;
    // 0x1fd368: 0x10000054
    ctx->pc = 0x1FD368u;
    {
        const bool branch_taken_0x1fd368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD36Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1fd368) {
            ctx->pc = 0x1FD4BCu;
            goto label_1fd4bc;
        }
    }
    ctx->pc = 0x1FD370u;
label_1fd370:
    // 0x1fd370: 0x3c010052
    ctx->pc = 0x1fd370u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd374: 0x8c2494b0
    ctx->pc = 0x1fd374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd378: 0x3c020052
    ctx->pc = 0x1fd378u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd37c: 0x244394d0
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd380: 0x2402fffe
    ctx->pc = 0x1fd380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fd384: 0x642021
    ctx->pc = 0x1fd384u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd388: 0x80830000
    ctx->pc = 0x1fd388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd38c: 0x1462000a
    ctx->pc = 0x1FD38Cu;
    {
        const bool branch_taken_0x1fd38c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1FD390u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fd38c) {
            ctx->pc = 0x1FD3B8u;
            goto label_1fd3b8;
        }
    }
    ctx->pc = 0x1FD394u;
    // 0x1fd394: 0xa0800000
    ctx->pc = 0x1fd394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd398: 0x3c010052
    ctx->pc = 0x1fd398u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd39c: 0xc0687c0
    ctx->pc = 0x1FD39Cu;
    SET_GPR_U32(ctx, 31, 0x1FD3A4u);
    ctx->pc = 0x1FD3A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3A4u; }
        else if (ctx->pc != 0x1FD3A4u) { ctx->pc = 0x1FD3A4u; }
    }
    if (ctx->pc != 0x1FD3A4u) { return; }
    ctx->pc = 0x1FD3A4u;
    // 0x1fd3a4: 0x72202628
    ctx->pc = 0x1fd3a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1fd3a8: 0xc07f534
    ctx->pc = 0x1FD3A8u;
    SET_GPR_U32(ctx, 31, 0x1FD3B0u);
    ctx->pc = 0x1FD3ACu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FD4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD3B0u; }
        else if (ctx->pc != 0x1FD3B0u) { ctx->pc = 0x1FD3B0u; }
    }
    if (ctx->pc != 0x1FD3B0u) { return; }
    ctx->pc = 0x1FD3B0u;
    // 0x1fd3b0: 0x10000041
    ctx->pc = 0x1FD3B0u;
    {
        const bool branch_taken_0x1fd3b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fd3b0) {
            ctx->pc = 0x1FD4B8u;
            goto label_1fd4b8;
        }
    }
    ctx->pc = 0x1FD3B8u;
label_1fd3b8:
    // 0x1fd3b8: 0x8c2694b4
    ctx->pc = 0x1fd3b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939828)));
    // 0x1fd3bc: 0x3c020050
    ctx->pc = 0x1fd3bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fd3c0: 0x2444ea24
    ctx->pc = 0x1fd3c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fd3c4: 0x2402ffc0
    ctx->pc = 0x1fd3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fd3c8: 0x3c010052
    ctx->pc = 0x1fd3c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd3cc: 0x8c2394bc
    ctx->pc = 0x1fd3ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fd3d0: 0x62c03
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1fd3d4: 0x30a5ffff
    ctx->pc = 0x1fd3d4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1fd3d8: 0x52900
    ctx->pc = 0x1fd3d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fd3dc: 0x852021
    ctx->pc = 0x1fd3dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fd3e0: 0x8c840000
    ctx->pc = 0x1fd3e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd3e4: 0x2463003f
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fd3e8: 0x30c6ffff
    ctx->pc = 0x1fd3e8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1fd3ec: 0x622824
    ctx->pc = 0x1fd3ecu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd3f0: 0x61040
    ctx->pc = 0x1fd3f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fd3f4: 0x461021
    ctx->pc = 0x1fd3f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fd3f8: 0x21080
    ctx->pc = 0x1fd3f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd3fc: 0x821021
    ctx->pc = 0x1fd3fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fd400: 0xc06a97c
    ctx->pc = 0x1FD400u;
    SET_GPR_U32(ctx, 31, 0x1FD408u);
    ctx->pc = 0x1FD404u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1AA5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLinkOneSkinStripData_0x1aa5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD408u; }
        else if (ctx->pc != 0x1FD408u) { ctx->pc = 0x1FD408u; }
    }
    if (ctx->pc != 0x1FD408u) { return; }
    ctx->pc = 0x1FD408u;
    // 0x1fd408: 0x3c010052
    ctx->pc = 0x1fd408u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd40c: 0x842794b0
    ctx->pc = 0x1fd40cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd410: 0x3c020050
    ctx->pc = 0x1fd410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fd414: 0x2443ea24
    ctx->pc = 0x1fd414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fd418: 0x3c020051
    ctx->pc = 0x1fd418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fd41c: 0x244625f0
    ctx->pc = 0x1fd41cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1fd420: 0x2402ffc0
    ctx->pc = 0x1fd420u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fd424: 0x3c010052
    ctx->pc = 0x1fd424u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd428: 0x8c2894b4
    ctx->pc = 0x1fd428u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294939828)));
    // 0x1fd42c: 0x82403
    ctx->pc = 0x1fd42cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1fd430: 0x3084ffff
    ctx->pc = 0x1fd430u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x1fd434: 0x42100
    ctx->pc = 0x1fd434u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1fd438: 0x641821
    ctx->pc = 0x1fd438u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd43c: 0x8c650000
    ctx->pc = 0x1fd43cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd440: 0x3104ffff
    ctx->pc = 0x1fd440u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 8), 65535));
    // 0x1fd444: 0x3c010052
    ctx->pc = 0x1fd444u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd448: 0x41840
    ctx->pc = 0x1fd448u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fd44c: 0x641821
    ctx->pc = 0x1fd44cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd450: 0x31880
    ctx->pc = 0x1fd450u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd454: 0x651821
    ctx->pc = 0x1fd454u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fd458: 0xa4670004
    ctx->pc = 0x1fd458u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x1fd45c: 0x8c2894bc
    ctx->pc = 0x1fd45cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fd460: 0x3c010052
    ctx->pc = 0x1fd460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd464: 0x8c2794b0
    ctx->pc = 0x1fd464u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd468: 0x2503003f
    ctx->pc = 0x1fd468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 63));
    // 0x1fd46c: 0x622824
    ctx->pc = 0x1fd46cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd470: 0x71080
    ctx->pc = 0x1fd470u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1fd474: 0xc21021
    ctx->pc = 0x1fd474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fd478: 0xac480000
    ctx->pc = 0x1fd478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1fd47c: 0x3c010052
    ctx->pc = 0x1fd47cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd480: 0x8c2294a4
    ctx->pc = 0x1fd480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939812)));
    // 0x1fd484: 0x8c460008
    ctx->pc = 0x1fd484u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd488: 0xc07fc28
    ctx->pc = 0x1FD488u;
    SET_GPR_U32(ctx, 31, 0x1FD490u);
    ctx->pc = 0x1FD48Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FF0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        weight100_cut__15OneSkinMgrClassFPA0_ii_0x1ff0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD490u; }
        else if (ctx->pc != 0x1FD490u) { ctx->pc = 0x1FD490u; }
    }
    if (ctx->pc != 0x1FD490u) { return; }
    ctx->pc = 0x1FD490u;
    // 0x1fd490: 0x3c010052
    ctx->pc = 0x1fd490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd494: 0x8c2394b0
    ctx->pc = 0x1fd494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd498: 0x3c020052
    ctx->pc = 0x1fd498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd49c: 0x244294d0
    ctx->pc = 0x1fd49cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd4a0: 0x24060002
    ctx->pc = 0x1fd4a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd4a4: 0x72202628
    ctx->pc = 0x1fd4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1fd4a8: 0x72002e28
    ctx->pc = 0x1fd4a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1fd4ac: 0x431021
    ctx->pc = 0x1fd4acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd4b0: 0xc07f534
    ctx->pc = 0x1FD4B0u;
    SET_GPR_U32(ctx, 31, 0x1FD4B8u);
    ctx->pc = 0x1FD4B4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1FD4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_Next__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4B8u; }
        else if (ctx->pc != 0x1FD4B8u) { ctx->pc = 0x1FD4B8u; }
    }
    if (ctx->pc != 0x1FD4B8u) { return; }
    ctx->pc = 0x1FD4B8u;
label_1fd4b8:
    // 0x1fd4b8: 0x7bbf0020
    ctx->pc = 0x1fd4b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd4bc:
    // 0x1fd4bc: 0x7bb10010
    ctx->pc = 0x1fd4bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd4c0: 0x7bb00000
    ctx->pc = 0x1fd4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd4c4: 0x3e00008
    ctx->pc = 0x1FD4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD338u: goto label_1fd338;
            case 0x1FD370u: goto label_1fd370;
            case 0x1FD3B8u: goto label_1fd3b8;
            case 0x1FD4B8u: goto label_1fd4b8;
            case 0x1FD4BCu: goto label_1fd4bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD4CCu;
}
