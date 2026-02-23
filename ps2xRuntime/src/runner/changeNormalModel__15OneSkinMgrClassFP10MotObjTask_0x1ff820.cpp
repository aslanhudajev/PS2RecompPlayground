#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeNormalModel__15OneSkinMgrClassFP10MotObjTask
// Address: 0x1ff820 - 0x1ffd24
void changeNormalModel__15OneSkinMgrClassFP10MotObjTask_0x1ff820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeNormalModel__15OneSkinMgrClassFP10MotObjTask");


    ctx->pc = 0x1ff820u;

    // 0x1ff820: 0x27bdffd0
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff824: 0x7fbf0020
    ctx->pc = 0x1ff824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ff828: 0x7fb10010
    ctx->pc = 0x1ff828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff82c: 0x7fb00000
    ctx->pc = 0x1ff82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff830: 0x70a08628
    ctx->pc = 0x1ff830u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff834: 0x84a5002c
    ctx->pc = 0x1ff834u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1ff838: 0x2403001d
    ctx->pc = 0x1ff838u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ff83c: 0x10a300f7
    ctx->pc = 0x1FF83Cu;
    {
        const bool branch_taken_0x1ff83c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FF840u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ff83c) {
            ctx->pc = 0x1FFC1Cu;
            goto label_1ffc1c;
        }
    }
    ctx->pc = 0x1FF844u;
    // 0x1ff844: 0x24070019
    ctx->pc = 0x1ff844u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ff848: 0x50a700b7
    ctx->pc = 0x1FF848u;
    {
        const bool branch_taken_0x1ff848 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 7));
        if (branch_taken_0x1ff848) {
            ctx->pc = 0x1FF84Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FFB28u;
            goto label_1ffb28;
        }
    }
    ctx->pc = 0x1FF850u;
    // 0x1ff850: 0x24030046
    ctx->pc = 0x1ff850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 70));
    // 0x1ff854: 0x50a30078
    ctx->pc = 0x1FF854u;
    {
        const bool branch_taken_0x1ff854 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ff854) {
            ctx->pc = 0x1FF858u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FFA38u;
            goto label_1ffa38;
        }
    }
    ctx->pc = 0x1FF85Cu;
    // 0x1ff85c: 0x24030043
    ctx->pc = 0x1ff85cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ff860: 0x50a30038
    ctx->pc = 0x1FF860u;
    {
        const bool branch_taken_0x1ff860 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ff860) {
            ctx->pc = 0x1FF864u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
            ctx->pc = 0x1FF944u;
            goto label_1ff944;
        }
    }
    ctx->pc = 0x1FF868u;
    // 0x1ff868: 0x24030047
    ctx->pc = 0x1ff868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ff86c: 0x10a30003
    ctx->pc = 0x1FF86Cu;
    {
        const bool branch_taken_0x1ff86c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FF870u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
        if (branch_taken_0x1ff86c) {
            ctx->pc = 0x1FF87Cu;
            goto label_1ff87c;
        }
    }
    ctx->pc = 0x1FF874u;
    // 0x1ff874: 0x10000127
    ctx->pc = 0x1FF874u;
    {
        const bool branch_taken_0x1ff874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF878u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1ff874) {
            ctx->pc = 0x1FFD14u;
            goto label_1ffd14;
        }
    }
    ctx->pc = 0x1FF87Cu;
label_1ff87c:
    // 0x1ff87c: 0x24060001
    ctx->pc = 0x1ff87cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff880: 0xc07fc64
    ctx->pc = 0x1FF880u;
    SET_GPR_U32(ctx, 31, 0x1FF888u);
    ctx->pc = 0x1FF884u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 591));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF888u; }
        else if (ctx->pc != 0x1FF888u) { ctx->pc = 0x1FF888u; }
    }
    if (ctx->pc != 0x1FF888u) { return; }
    ctx->pc = 0x1FF888u;
    // 0x1ff888: 0x72202628
    ctx->pc = 0x1ff888u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff88c: 0x26050070
    ctx->pc = 0x1ff88cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff890: 0x24060004
    ctx->pc = 0x1ff890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ff894: 0xc07fc64
    ctx->pc = 0x1FF894u;
    SET_GPR_U32(ctx, 31, 0x1FF89Cu);
    ctx->pc = 0x1FF898u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 593));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF89Cu; }
        else if (ctx->pc != 0x1FF89Cu) { ctx->pc = 0x1FF89Cu; }
    }
    if (ctx->pc != 0x1FF89Cu) { return; }
    ctx->pc = 0x1FF89Cu;
    // 0x1ff89c: 0x72202628
    ctx->pc = 0x1ff89cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff8a0: 0x26050070
    ctx->pc = 0x1ff8a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff8a4: 0x24060008
    ctx->pc = 0x1ff8a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff8a8: 0xc07fc64
    ctx->pc = 0x1FF8A8u;
    SET_GPR_U32(ctx, 31, 0x1FF8B0u);
    ctx->pc = 0x1FF8ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 588));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8B0u; }
        else if (ctx->pc != 0x1FF8B0u) { ctx->pc = 0x1FF8B0u; }
    }
    if (ctx->pc != 0x1FF8B0u) { return; }
    ctx->pc = 0x1FF8B0u;
    // 0x1ff8b0: 0x72202628
    ctx->pc = 0x1ff8b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff8b4: 0x26050070
    ctx->pc = 0x1ff8b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff8b8: 0x24060005
    ctx->pc = 0x1ff8b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ff8bc: 0xc07fc64
    ctx->pc = 0x1FF8BCu;
    SET_GPR_U32(ctx, 31, 0x1FF8C4u);
    ctx->pc = 0x1FF8C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 594));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8C4u; }
        else if (ctx->pc != 0x1FF8C4u) { ctx->pc = 0x1FF8C4u; }
    }
    if (ctx->pc != 0x1FF8C4u) { return; }
    ctx->pc = 0x1FF8C4u;
    // 0x1ff8c4: 0x72202628
    ctx->pc = 0x1ff8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff8c8: 0x26050070
    ctx->pc = 0x1ff8c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff8cc: 0x24060009
    ctx->pc = 0x1ff8ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ff8d0: 0xc07fc64
    ctx->pc = 0x1FF8D0u;
    SET_GPR_U32(ctx, 31, 0x1FF8D8u);
    ctx->pc = 0x1FF8D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 589));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8D8u; }
        else if (ctx->pc != 0x1FF8D8u) { ctx->pc = 0x1FF8D8u; }
    }
    if (ctx->pc != 0x1FF8D8u) { return; }
    ctx->pc = 0x1FF8D8u;
    // 0x1ff8d8: 0x72202628
    ctx->pc = 0x1ff8d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff8dc: 0x26050070
    ctx->pc = 0x1ff8dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff8e0: 0x2406000d
    ctx->pc = 0x1ff8e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ff8e4: 0xc07fc64
    ctx->pc = 0x1FF8E4u;
    SET_GPR_U32(ctx, 31, 0x1FF8ECu);
    ctx->pc = 0x1FF8E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 595));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF8ECu; }
        else if (ctx->pc != 0x1FF8ECu) { ctx->pc = 0x1FF8ECu; }
    }
    if (ctx->pc != 0x1FF8ECu) { return; }
    ctx->pc = 0x1FF8ECu;
    // 0x1ff8ec: 0x72202628
    ctx->pc = 0x1ff8ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff8f0: 0x26050070
    ctx->pc = 0x1ff8f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff8f4: 0x24060010
    ctx->pc = 0x1ff8f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff8f8: 0xc07fc64
    ctx->pc = 0x1FF8F8u;
    SET_GPR_U32(ctx, 31, 0x1FF900u);
    ctx->pc = 0x1FF8FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 590));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF900u; }
        else if (ctx->pc != 0x1FF900u) { ctx->pc = 0x1FF900u; }
    }
    if (ctx->pc != 0x1FF900u) { return; }
    ctx->pc = 0x1FF900u;
    // 0x1ff900: 0x72202628
    ctx->pc = 0x1ff900u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff904: 0x26050070
    ctx->pc = 0x1ff904u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff908: 0x2406000e
    ctx->pc = 0x1ff908u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff90c: 0xc07fc64
    ctx->pc = 0x1FF90Cu;
    SET_GPR_U32(ctx, 31, 0x1FF914u);
    ctx->pc = 0x1FF910u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 592));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF914u; }
        else if (ctx->pc != 0x1FF914u) { ctx->pc = 0x1FF914u; }
    }
    if (ctx->pc != 0x1FF914u) { return; }
    ctx->pc = 0x1FF914u;
    // 0x1ff914: 0x72202628
    ctx->pc = 0x1ff914u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff918: 0x26050070
    ctx->pc = 0x1ff918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff91c: 0x24060011
    ctx->pc = 0x1ff91cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ff920: 0xc07fc64
    ctx->pc = 0x1FF920u;
    SET_GPR_U32(ctx, 31, 0x1FF928u);
    ctx->pc = 0x1FF924u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 587));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF928u; }
        else if (ctx->pc != 0x1FF928u) { ctx->pc = 0x1FF928u; }
    }
    if (ctx->pc != 0x1FF928u) { return; }
    ctx->pc = 0x1FF928u;
    // 0x1ff928: 0x3c0400ac
    ctx->pc = 0x1ff928u;
    SET_GPR_U32(ctx, 4, ((uint32_t)172 << 16));
    // 0x1ff92c: 0x3483000d
    ctx->pc = 0x1ff92cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 13));
    // 0x1ff930: 0xae0309d0
    ctx->pc = 0x1ff930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ff934: 0x3483000f
    ctx->pc = 0x1ff934u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 15));
    // 0x1ff938: 0xae030610
    ctx->pc = 0x1ff938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ff93c: 0x100000f4
    ctx->pc = 0x1FF93Cu;
    {
        const bool branch_taken_0x1ff93c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FF940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
        if (branch_taken_0x1ff93c) {
            ctx->pc = 0x1FFD10u;
            goto label_1ffd10;
        }
    }
    ctx->pc = 0x1FF944u;
label_1ff944:
    // 0x1ff944: 0x24060002
    ctx->pc = 0x1ff944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff948: 0xc07fc64
    ctx->pc = 0x1FF948u;
    SET_GPR_U32(ctx, 31, 0x1FF950u);
    ctx->pc = 0x1FF94Cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF950u; }
        else if (ctx->pc != 0x1FF950u) { ctx->pc = 0x1FF950u; }
    }
    if (ctx->pc != 0x1FF950u) { return; }
    ctx->pc = 0x1FF950u;
    // 0x1ff950: 0x72202628
    ctx->pc = 0x1ff950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff954: 0x26050070
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff958: 0x24060006
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ff95c: 0xc07fc64
    ctx->pc = 0x1FF95Cu;
    SET_GPR_U32(ctx, 31, 0x1FF964u);
    ctx->pc = 0x1FF960u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF964u; }
        else if (ctx->pc != 0x1FF964u) { ctx->pc = 0x1FF964u; }
    }
    if (ctx->pc != 0x1FF964u) { return; }
    ctx->pc = 0x1FF964u;
    // 0x1ff964: 0x72202628
    ctx->pc = 0x1ff964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff968: 0x26050070
    ctx->pc = 0x1ff968u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff96c: 0x2406000a
    ctx->pc = 0x1ff96cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ff970: 0xc07fc64
    ctx->pc = 0x1FF970u;
    SET_GPR_U32(ctx, 31, 0x1FF978u);
    ctx->pc = 0x1FF974u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF978u; }
        else if (ctx->pc != 0x1FF978u) { ctx->pc = 0x1FF978u; }
    }
    if (ctx->pc != 0x1FF978u) { return; }
    ctx->pc = 0x1FF978u;
    // 0x1ff978: 0x72202628
    ctx->pc = 0x1ff978u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff97c: 0x26050070
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff980: 0x24060007
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ff984: 0xc07fc64
    ctx->pc = 0x1FF984u;
    SET_GPR_U32(ctx, 31, 0x1FF98Cu);
    ctx->pc = 0x1FF988u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF98Cu; }
        else if (ctx->pc != 0x1FF98Cu) { ctx->pc = 0x1FF98Cu; }
    }
    if (ctx->pc != 0x1FF98Cu) { return; }
    ctx->pc = 0x1FF98Cu;
    // 0x1ff98c: 0x72202628
    ctx->pc = 0x1ff98cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff990: 0x26050070
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff994: 0x2406000b
    ctx->pc = 0x1ff994u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ff998: 0xc07fc64
    ctx->pc = 0x1FF998u;
    SET_GPR_U32(ctx, 31, 0x1FF9A0u);
    ctx->pc = 0x1FF99Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9A0u; }
        else if (ctx->pc != 0x1FF9A0u) { ctx->pc = 0x1FF9A0u; }
    }
    if (ctx->pc != 0x1FF9A0u) { return; }
    ctx->pc = 0x1FF9A0u;
    // 0x1ff9a0: 0x72202628
    ctx->pc = 0x1ff9a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff9a4: 0x26050070
    ctx->pc = 0x1ff9a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff9a8: 0x2406000e
    ctx->pc = 0x1ff9a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ff9ac: 0xc07fc64
    ctx->pc = 0x1FF9ACu;
    SET_GPR_U32(ctx, 31, 0x1FF9B4u);
    ctx->pc = 0x1FF9B0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9B4u; }
        else if (ctx->pc != 0x1FF9B4u) { ctx->pc = 0x1FF9B4u; }
    }
    if (ctx->pc != 0x1FF9B4u) { return; }
    ctx->pc = 0x1FF9B4u;
    // 0x1ff9b4: 0x72202628
    ctx->pc = 0x1ff9b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff9b8: 0x26050070
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff9bc: 0x24060012
    ctx->pc = 0x1ff9bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ff9c0: 0xc07fc64
    ctx->pc = 0x1FF9C0u;
    SET_GPR_U32(ctx, 31, 0x1FF9C8u);
    ctx->pc = 0x1FF9C4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9C8u; }
        else if (ctx->pc != 0x1FF9C8u) { ctx->pc = 0x1FF9C8u; }
    }
    if (ctx->pc != 0x1FF9C8u) { return; }
    ctx->pc = 0x1FF9C8u;
    // 0x1ff9c8: 0x72202628
    ctx->pc = 0x1ff9c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff9cc: 0x26050070
    ctx->pc = 0x1ff9ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff9d0: 0x2406000f
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ff9d4: 0xc07fc64
    ctx->pc = 0x1FF9D4u;
    SET_GPR_U32(ctx, 31, 0x1FF9DCu);
    ctx->pc = 0x1FF9D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9DCu; }
        else if (ctx->pc != 0x1FF9DCu) { ctx->pc = 0x1FF9DCu; }
    }
    if (ctx->pc != 0x1FF9DCu) { return; }
    ctx->pc = 0x1FF9DCu;
    // 0x1ff9dc: 0x72202628
    ctx->pc = 0x1ff9dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff9e0: 0x26050070
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff9e4: 0x24060013
    ctx->pc = 0x1ff9e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ff9e8: 0xc07fc64
    ctx->pc = 0x1FF9E8u;
    SET_GPR_U32(ctx, 31, 0x1FF9F0u);
    ctx->pc = 0x1FF9ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9F0u; }
        else if (ctx->pc != 0x1FF9F0u) { ctx->pc = 0x1FF9F0u; }
    }
    if (ctx->pc != 0x1FF9F0u) { return; }
    ctx->pc = 0x1FF9F0u;
    // 0x1ff9f0: 0x72202628
    ctx->pc = 0x1ff9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ff9f4: 0x26050070
    ctx->pc = 0x1ff9f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ff9f8: 0x24060010
    ctx->pc = 0x1ff9f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff9fc: 0xc07fc64
    ctx->pc = 0x1FF9FCu;
    SET_GPR_U32(ctx, 31, 0x1FFA04u);
    ctx->pc = 0x1FFA00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA04u; }
        else if (ctx->pc != 0x1FFA04u) { ctx->pc = 0x1FFA04u; }
    }
    if (ctx->pc != 0x1FFA04u) { return; }
    ctx->pc = 0x1FFA04u;
    // 0x1ffa04: 0x72202628
    ctx->pc = 0x1ffa04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffa08: 0x26050070
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffa0c: 0x24060014
    ctx->pc = 0x1ffa0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ffa10: 0xc07fc64
    ctx->pc = 0x1FFA10u;
    SET_GPR_U32(ctx, 31, 0x1FFA18u);
    ctx->pc = 0x1FFA14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA18u; }
        else if (ctx->pc != 0x1FFA18u) { ctx->pc = 0x1FFA18u; }
    }
    if (ctx->pc != 0x1FFA18u) { return; }
    ctx->pc = 0x1FFA18u;
    // 0x1ffa18: 0x3c0400a8
    ctx->pc = 0x1ffa18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)168 << 16));
    // 0x1ffa1c: 0x34830005
    ctx->pc = 0x1ffa1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 5));
    // 0x1ffa20: 0xae030bb0
    ctx->pc = 0x1ffa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 3));
    // 0x1ffa24: 0x34830014
    ctx->pc = 0x1ffa24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 20));
    // 0x1ffa28: 0xae0307f0
    ctx->pc = 0x1ffa28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 3));
    // 0x1ffa2c: 0x34830007
    ctx->pc = 0x1ffa2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 7));
    // 0x1ffa30: 0x100000b7
    ctx->pc = 0x1FFA30u;
    {
        const bool branch_taken_0x1ffa30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FFA34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 3));
        if (branch_taken_0x1ffa30) {
            ctx->pc = 0x1FFD10u;
            goto label_1ffd10;
        }
    }
    ctx->pc = 0x1FFA38u;
label_1ffa38:
    // 0x1ffa38: 0xc07fc64
    ctx->pc = 0x1FFA38u;
    SET_GPR_U32(ctx, 31, 0x1FFA40u);
    ctx->pc = 0x1FFA3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA40u; }
        else if (ctx->pc != 0x1FFA40u) { ctx->pc = 0x1FFA40u; }
    }
    if (ctx->pc != 0x1FFA40u) { return; }
    ctx->pc = 0x1FFA40u;
    // 0x1ffa40: 0x72202628
    ctx->pc = 0x1ffa40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffa44: 0x26050070
    ctx->pc = 0x1ffa44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffa48: 0x24060006
    ctx->pc = 0x1ffa48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ffa4c: 0xc07fc64
    ctx->pc = 0x1FFA4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFA54u);
    ctx->pc = 0x1FFA50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA54u; }
        else if (ctx->pc != 0x1FFA54u) { ctx->pc = 0x1FFA54u; }
    }
    if (ctx->pc != 0x1FFA54u) { return; }
    ctx->pc = 0x1FFA54u;
    // 0x1ffa54: 0x72202628
    ctx->pc = 0x1ffa54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffa58: 0x26050070
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffa5c: 0x2406000a
    ctx->pc = 0x1ffa5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffa60: 0xc07fc64
    ctx->pc = 0x1FFA60u;
    SET_GPR_U32(ctx, 31, 0x1FFA68u);
    ctx->pc = 0x1FFA64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA68u; }
        else if (ctx->pc != 0x1FFA68u) { ctx->pc = 0x1FFA68u; }
    }
    if (ctx->pc != 0x1FFA68u) { return; }
    ctx->pc = 0x1FFA68u;
    // 0x1ffa68: 0x72202628
    ctx->pc = 0x1ffa68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffa6c: 0x26050070
    ctx->pc = 0x1ffa6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffa70: 0x24060007
    ctx->pc = 0x1ffa70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ffa74: 0xc07fc64
    ctx->pc = 0x1FFA74u;
    SET_GPR_U32(ctx, 31, 0x1FFA7Cu);
    ctx->pc = 0x1FFA78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 35));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA7Cu; }
        else if (ctx->pc != 0x1FFA7Cu) { ctx->pc = 0x1FFA7Cu; }
    }
    if (ctx->pc != 0x1FFA7Cu) { return; }
    ctx->pc = 0x1FFA7Cu;
    // 0x1ffa7c: 0x72202628
    ctx->pc = 0x1ffa7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffa80: 0x26050070
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffa84: 0x2406000b
    ctx->pc = 0x1ffa84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ffa88: 0xc07fc64
    ctx->pc = 0x1FFA88u;
    SET_GPR_U32(ctx, 31, 0x1FFA90u);
    ctx->pc = 0x1FFA8Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 29));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA90u; }
        else if (ctx->pc != 0x1FFA90u) { ctx->pc = 0x1FFA90u; }
    }
    if (ctx->pc != 0x1FFA90u) { return; }
    ctx->pc = 0x1FFA90u;
    // 0x1ffa90: 0x72202628
    ctx->pc = 0x1ffa90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffa94: 0x26050070
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffa98: 0x2406000e
    ctx->pc = 0x1ffa98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ffa9c: 0xc07fc64
    ctx->pc = 0x1FFA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFAA4u);
    ctx->pc = 0x1FFAA0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAA4u; }
        else if (ctx->pc != 0x1FFAA4u) { ctx->pc = 0x1FFAA4u; }
    }
    if (ctx->pc != 0x1FFAA4u) { return; }
    ctx->pc = 0x1FFAA4u;
    // 0x1ffaa4: 0x72202628
    ctx->pc = 0x1ffaa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffaa8: 0x26050070
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffaac: 0x24060012
    ctx->pc = 0x1ffaacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ffab0: 0xc07fc64
    ctx->pc = 0x1FFAB0u;
    SET_GPR_U32(ctx, 31, 0x1FFAB8u);
    ctx->pc = 0x1FFAB4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAB8u; }
        else if (ctx->pc != 0x1FFAB8u) { ctx->pc = 0x1FFAB8u; }
    }
    if (ctx->pc != 0x1FFAB8u) { return; }
    ctx->pc = 0x1FFAB8u;
    // 0x1ffab8: 0x72202628
    ctx->pc = 0x1ffab8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffabc: 0x26050070
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffac0: 0x2406000f
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ffac4: 0xc07fc64
    ctx->pc = 0x1FFAC4u;
    SET_GPR_U32(ctx, 31, 0x1FFACCu);
    ctx->pc = 0x1FFAC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 38));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFACCu; }
        else if (ctx->pc != 0x1FFACCu) { ctx->pc = 0x1FFACCu; }
    }
    if (ctx->pc != 0x1FFACCu) { return; }
    ctx->pc = 0x1FFACCu;
    // 0x1ffacc: 0x72202628
    ctx->pc = 0x1ffaccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffad0: 0x26050070
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffad4: 0x24060013
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ffad8: 0xc07fc64
    ctx->pc = 0x1FFAD8u;
    SET_GPR_U32(ctx, 31, 0x1FFAE0u);
    ctx->pc = 0x1FFADCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAE0u; }
        else if (ctx->pc != 0x1FFAE0u) { ctx->pc = 0x1FFAE0u; }
    }
    if (ctx->pc != 0x1FFAE0u) { return; }
    ctx->pc = 0x1FFAE0u;
    // 0x1ffae0: 0x72202628
    ctx->pc = 0x1ffae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffae4: 0x26050070
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffae8: 0x24060010
    ctx->pc = 0x1ffae8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffaec: 0xc07fc64
    ctx->pc = 0x1FFAECu;
    SET_GPR_U32(ctx, 31, 0x1FFAF4u);
    ctx->pc = 0x1FFAF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFAF4u; }
        else if (ctx->pc != 0x1FFAF4u) { ctx->pc = 0x1FFAF4u; }
    }
    if (ctx->pc != 0x1FFAF4u) { return; }
    ctx->pc = 0x1FFAF4u;
    // 0x1ffaf4: 0x72202628
    ctx->pc = 0x1ffaf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffaf8: 0x26050070
    ctx->pc = 0x1ffaf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffafc: 0x24060014
    ctx->pc = 0x1ffafcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ffb00: 0xc07fc64
    ctx->pc = 0x1FFB00u;
    SET_GPR_U32(ctx, 31, 0x1FFB08u);
    ctx->pc = 0x1FFB04u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB08u; }
        else if (ctx->pc != 0x1FFB08u) { ctx->pc = 0x1FFB08u; }
    }
    if (ctx->pc != 0x1FFB08u) { return; }
    ctx->pc = 0x1FFB08u;
    // 0x1ffb08: 0x3c0400aa
    ctx->pc = 0x1ffb08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)170 << 16));
    // 0x1ffb0c: 0x3483000a
    ctx->pc = 0x1ffb0cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 10));
    // 0x1ffb10: 0xae030bb0
    ctx->pc = 0x1ffb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 3));
    // 0x1ffb14: 0x34830013
    ctx->pc = 0x1ffb14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 19));
    // 0x1ffb18: 0xae0307f0
    ctx->pc = 0x1ffb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2032), GPR_U32(ctx, 3));
    // 0x1ffb1c: 0x34830002
    ctx->pc = 0x1ffb1cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 2));
    // 0x1ffb20: 0x1000007b
    ctx->pc = 0x1FFB20u;
    {
        const bool branch_taken_0x1ffb20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FFB24u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 3));
        if (branch_taken_0x1ffb20) {
            ctx->pc = 0x1FFD10u;
            goto label_1ffd10;
        }
    }
    ctx->pc = 0x1FFB28u;
label_1ffb28:
    // 0x1ffb28: 0x24060001
    ctx->pc = 0x1ffb28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffb2c: 0xc07fc64
    ctx->pc = 0x1FFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB34u);
    ctx->pc = 0x1FFB30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 439));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB34u; }
        else if (ctx->pc != 0x1FFB34u) { ctx->pc = 0x1FFB34u; }
    }
    if (ctx->pc != 0x1FFB34u) { return; }
    ctx->pc = 0x1FFB34u;
    // 0x1ffb34: 0x72202628
    ctx->pc = 0x1ffb34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffb38: 0x26050070
    ctx->pc = 0x1ffb38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffb3c: 0x24060004
    ctx->pc = 0x1ffb3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ffb40: 0xc07fc64
    ctx->pc = 0x1FFB40u;
    SET_GPR_U32(ctx, 31, 0x1FFB48u);
    ctx->pc = 0x1FFB44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 441));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB48u; }
        else if (ctx->pc != 0x1FFB48u) { ctx->pc = 0x1FFB48u; }
    }
    if (ctx->pc != 0x1FFB48u) { return; }
    ctx->pc = 0x1FFB48u;
    // 0x1ffb48: 0x72202628
    ctx->pc = 0x1ffb48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffb4c: 0x26050070
    ctx->pc = 0x1ffb4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffb50: 0x24060009
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ffb54: 0xc07fc64
    ctx->pc = 0x1FFB54u;
    SET_GPR_U32(ctx, 31, 0x1FFB5Cu);
    ctx->pc = 0x1FFB58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 433));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB5Cu; }
        else if (ctx->pc != 0x1FFB5Cu) { ctx->pc = 0x1FFB5Cu; }
    }
    if (ctx->pc != 0x1FFB5Cu) { return; }
    ctx->pc = 0x1FFB5Cu;
    // 0x1ffb5c: 0x72202628
    ctx->pc = 0x1ffb5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffb60: 0x26050070
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffb64: 0x24060005
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffb68: 0xc07fc64
    ctx->pc = 0x1FFB68u;
    SET_GPR_U32(ctx, 31, 0x1FFB70u);
    ctx->pc = 0x1FFB6Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 442));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB70u; }
        else if (ctx->pc != 0x1FFB70u) { ctx->pc = 0x1FFB70u; }
    }
    if (ctx->pc != 0x1FFB70u) { return; }
    ctx->pc = 0x1FFB70u;
    // 0x1ffb70: 0x72202628
    ctx->pc = 0x1ffb70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffb74: 0x26050070
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffb78: 0x2406000a
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffb7c: 0xc07fc64
    ctx->pc = 0x1FFB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB84u);
    ctx->pc = 0x1FFB80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 434));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB84u; }
        else if (ctx->pc != 0x1FFB84u) { ctx->pc = 0x1FFB84u; }
    }
    if (ctx->pc != 0x1FFB84u) { return; }
    ctx->pc = 0x1FFB84u;
    // 0x1ffb84: 0x72202628
    ctx->pc = 0x1ffb84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffb88: 0x26050070
    ctx->pc = 0x1ffb88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffb8c: 0x2406000d
    ctx->pc = 0x1ffb8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ffb90: 0xc07fc64
    ctx->pc = 0x1FFB90u;
    SET_GPR_U32(ctx, 31, 0x1FFB98u);
    ctx->pc = 0x1FFB94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 443));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB98u; }
        else if (ctx->pc != 0x1FFB98u) { ctx->pc = 0x1FFB98u; }
    }
    if (ctx->pc != 0x1FFB98u) { return; }
    ctx->pc = 0x1FFB98u;
    // 0x1ffb98: 0x72202628
    ctx->pc = 0x1ffb98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffb9c: 0x26050070
    ctx->pc = 0x1ffb9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffba0: 0x24060010
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffba4: 0xc07fc64
    ctx->pc = 0x1FFBA4u;
    SET_GPR_U32(ctx, 31, 0x1FFBACu);
    ctx->pc = 0x1FFBA8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 435));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFBACu; }
        else if (ctx->pc != 0x1FFBACu) { ctx->pc = 0x1FFBACu; }
    }
    if (ctx->pc != 0x1FFBACu) { return; }
    ctx->pc = 0x1FFBACu;
    // 0x1ffbac: 0x72202628
    ctx->pc = 0x1ffbacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffbb0: 0x26050070
    ctx->pc = 0x1ffbb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffbb4: 0x2406000e
    ctx->pc = 0x1ffbb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ffbb8: 0xc07fc64
    ctx->pc = 0x1FFBB8u;
    SET_GPR_U32(ctx, 31, 0x1FFBC0u);
    ctx->pc = 0x1FFBBCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 444));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFBC0u; }
        else if (ctx->pc != 0x1FFBC0u) { ctx->pc = 0x1FFBC0u; }
    }
    if (ctx->pc != 0x1FFBC0u) { return; }
    ctx->pc = 0x1FFBC0u;
    // 0x1ffbc0: 0x72202628
    ctx->pc = 0x1ffbc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffbc4: 0x26050070
    ctx->pc = 0x1ffbc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffbc8: 0x24060011
    ctx->pc = 0x1ffbc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ffbcc: 0xc07fc64
    ctx->pc = 0x1FFBCCu;
    SET_GPR_U32(ctx, 31, 0x1FFBD4u);
    ctx->pc = 0x1FFBD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 436));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFBD4u; }
        else if (ctx->pc != 0x1FFBD4u) { ctx->pc = 0x1FFBD4u; }
    }
    if (ctx->pc != 0x1FFBD4u) { return; }
    ctx->pc = 0x1FFBD4u;
    // 0x1ffbd4: 0x72202628
    ctx->pc = 0x1ffbd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffbd8: 0x26050070
    ctx->pc = 0x1ffbd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffbdc: 0x2406000f
    ctx->pc = 0x1ffbdcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ffbe0: 0xc07fc64
    ctx->pc = 0x1FFBE0u;
    SET_GPR_U32(ctx, 31, 0x1FFBE8u);
    ctx->pc = 0x1FFBE4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 440));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFBE8u; }
        else if (ctx->pc != 0x1FFBE8u) { ctx->pc = 0x1FFBE8u; }
    }
    if (ctx->pc != 0x1FFBE8u) { return; }
    ctx->pc = 0x1FFBE8u;
    // 0x1ffbe8: 0x72202628
    ctx->pc = 0x1ffbe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffbec: 0x26050070
    ctx->pc = 0x1ffbecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffbf0: 0x24060012
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ffbf4: 0xc07fc64
    ctx->pc = 0x1FFBF4u;
    SET_GPR_U32(ctx, 31, 0x1FFBFCu);
    ctx->pc = 0x1FFBF8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 432));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFBFCu; }
        else if (ctx->pc != 0x1FFBFCu) { ctx->pc = 0x1FFBFCu; }
    }
    if (ctx->pc != 0x1FFBFCu) { return; }
    ctx->pc = 0x1FFBFCu;
    // 0x1ffbfc: 0x3c040091
    ctx->pc = 0x1ffbfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)145 << 16));
    // 0x1ffc00: 0x34830022
    ctx->pc = 0x1ffc00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 34));
    // 0x1ffc04: 0xae030ac0
    ctx->pc = 0x1ffc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 3));
    // 0x1ffc08: 0x3483002b
    ctx->pc = 0x1ffc08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 43));
    // 0x1ffc0c: 0xae030610
    ctx->pc = 0x1ffc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ffc10: 0x34830007
    ctx->pc = 0x1ffc10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 7));
    // 0x1ffc14: 0x1000003e
    ctx->pc = 0x1FFC14u;
    {
        const bool branch_taken_0x1ffc14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FFC18u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        if (branch_taken_0x1ffc14) {
            ctx->pc = 0x1FFD10u;
            goto label_1ffd10;
        }
    }
    ctx->pc = 0x1FFC1Cu;
label_1ffc1c:
    // 0x1ffc1c: 0x26050070
    ctx->pc = 0x1ffc1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc20: 0x24060001
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffc24: 0xc07fc64
    ctx->pc = 0x1FFC24u;
    SET_GPR_U32(ctx, 31, 0x1FFC2Cu);
    ctx->pc = 0x1FFC28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 482));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC2Cu; }
        else if (ctx->pc != 0x1FFC2Cu) { ctx->pc = 0x1FFC2Cu; }
    }
    if (ctx->pc != 0x1FFC2Cu) { return; }
    ctx->pc = 0x1FFC2Cu;
    // 0x1ffc2c: 0x72202628
    ctx->pc = 0x1ffc2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffc30: 0x26050070
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc34: 0x24060004
    ctx->pc = 0x1ffc34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ffc38: 0xc07fc64
    ctx->pc = 0x1FFC38u;
    SET_GPR_U32(ctx, 31, 0x1FFC40u);
    ctx->pc = 0x1FFC3Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 484));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC40u; }
        else if (ctx->pc != 0x1FFC40u) { ctx->pc = 0x1FFC40u; }
    }
    if (ctx->pc != 0x1FFC40u) { return; }
    ctx->pc = 0x1FFC40u;
    // 0x1ffc40: 0x72202628
    ctx->pc = 0x1ffc40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffc44: 0x26050070
    ctx->pc = 0x1ffc44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc48: 0x24060008
    ctx->pc = 0x1ffc48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ffc4c: 0xc07fc64
    ctx->pc = 0x1FFC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFC54u);
    ctx->pc = 0x1FFC50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 477));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC54u; }
        else if (ctx->pc != 0x1FFC54u) { ctx->pc = 0x1FFC54u; }
    }
    if (ctx->pc != 0x1FFC54u) { return; }
    ctx->pc = 0x1FFC54u;
    // 0x1ffc54: 0x72202628
    ctx->pc = 0x1ffc54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffc58: 0x26050070
    ctx->pc = 0x1ffc58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc5c: 0x24060005
    ctx->pc = 0x1ffc5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffc60: 0xc07fc64
    ctx->pc = 0x1FFC60u;
    SET_GPR_U32(ctx, 31, 0x1FFC68u);
    ctx->pc = 0x1FFC64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 485));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC68u; }
        else if (ctx->pc != 0x1FFC68u) { ctx->pc = 0x1FFC68u; }
    }
    if (ctx->pc != 0x1FFC68u) { return; }
    ctx->pc = 0x1FFC68u;
    // 0x1ffc68: 0x72202628
    ctx->pc = 0x1ffc68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffc6c: 0x26050070
    ctx->pc = 0x1ffc6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc70: 0x24060009
    ctx->pc = 0x1ffc70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ffc74: 0xc07fc64
    ctx->pc = 0x1FFC74u;
    SET_GPR_U32(ctx, 31, 0x1FFC7Cu);
    ctx->pc = 0x1FFC78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 478));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC7Cu; }
        else if (ctx->pc != 0x1FFC7Cu) { ctx->pc = 0x1FFC7Cu; }
    }
    if (ctx->pc != 0x1FFC7Cu) { return; }
    ctx->pc = 0x1FFC7Cu;
    // 0x1ffc7c: 0x72202628
    ctx->pc = 0x1ffc7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffc80: 0x26050070
    ctx->pc = 0x1ffc80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc84: 0x2406000c
    ctx->pc = 0x1ffc84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ffc88: 0xc07fc64
    ctx->pc = 0x1FFC88u;
    SET_GPR_U32(ctx, 31, 0x1FFC90u);
    ctx->pc = 0x1FFC8Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 486));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC90u; }
        else if (ctx->pc != 0x1FFC90u) { ctx->pc = 0x1FFC90u; }
    }
    if (ctx->pc != 0x1FFC90u) { return; }
    ctx->pc = 0x1FFC90u;
    // 0x1ffc90: 0x72202628
    ctx->pc = 0x1ffc90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffc94: 0x26050070
    ctx->pc = 0x1ffc94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffc98: 0x2406000f
    ctx->pc = 0x1ffc98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ffc9c: 0xc07fc64
    ctx->pc = 0x1FFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFCA4u);
    ctx->pc = 0x1FFCA0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 479));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCA4u; }
        else if (ctx->pc != 0x1FFCA4u) { ctx->pc = 0x1FFCA4u; }
    }
    if (ctx->pc != 0x1FFCA4u) { return; }
    ctx->pc = 0x1FFCA4u;
    // 0x1ffca4: 0x72202628
    ctx->pc = 0x1ffca4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffca8: 0x26050070
    ctx->pc = 0x1ffca8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffcac: 0x2406000d
    ctx->pc = 0x1ffcacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ffcb0: 0xc07fc64
    ctx->pc = 0x1FFCB0u;
    SET_GPR_U32(ctx, 31, 0x1FFCB8u);
    ctx->pc = 0x1FFCB4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 487));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCB8u; }
        else if (ctx->pc != 0x1FFCB8u) { ctx->pc = 0x1FFCB8u; }
    }
    if (ctx->pc != 0x1FFCB8u) { return; }
    ctx->pc = 0x1FFCB8u;
    // 0x1ffcb8: 0x72202628
    ctx->pc = 0x1ffcb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffcbc: 0x26050070
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffcc0: 0x24060010
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffcc4: 0xc07fc64
    ctx->pc = 0x1FFCC4u;
    SET_GPR_U32(ctx, 31, 0x1FFCCCu);
    ctx->pc = 0x1FFCC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 480));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCCCu; }
        else if (ctx->pc != 0x1FFCCCu) { ctx->pc = 0x1FFCCCu; }
    }
    if (ctx->pc != 0x1FFCCCu) { return; }
    ctx->pc = 0x1FFCCCu;
    // 0x1ffccc: 0x72202628
    ctx->pc = 0x1ffcccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffcd0: 0x26050070
    ctx->pc = 0x1ffcd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffcd4: 0x2406000e
    ctx->pc = 0x1ffcd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ffcd8: 0xc07fc64
    ctx->pc = 0x1FFCD8u;
    SET_GPR_U32(ctx, 31, 0x1FFCE0u);
    ctx->pc = 0x1FFCDCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 483));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCE0u; }
        else if (ctx->pc != 0x1FFCE0u) { ctx->pc = 0x1FFCE0u; }
    }
    if (ctx->pc != 0x1FFCE0u) { return; }
    ctx->pc = 0x1FFCE0u;
    // 0x1ffce0: 0x72202628
    ctx->pc = 0x1ffce0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffce4: 0x26050070
    ctx->pc = 0x1ffce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffce8: 0x24060011
    ctx->pc = 0x1ffce8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ffcec: 0xc07fc64
    ctx->pc = 0x1FFCECu;
    SET_GPR_U32(ctx, 31, 0x1FFCF4u);
    ctx->pc = 0x1FFCF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 476));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCF4u; }
        else if (ctx->pc != 0x1FFCF4u) { ctx->pc = 0x1FFCF4u; }
    }
    if (ctx->pc != 0x1FFCF4u) { return; }
    ctx->pc = 0x1FFCF4u;
    // 0x1ffcf4: 0x3c040093
    ctx->pc = 0x1ffcf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)147 << 16));
    // 0x1ffcf8: 0x3483001e
    ctx->pc = 0x1ffcf8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 30));
    // 0x1ffcfc: 0xae0309d0
    ctx->pc = 0x1ffcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ffd00: 0x34830026
    ctx->pc = 0x1ffd00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 38));
    // 0x1ffd04: 0xae030610
    ctx->pc = 0x1ffd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ffd08: 0x34830003
    ctx->pc = 0x1ffd08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 3));
    // 0x1ffd0c: 0xae030250
    ctx->pc = 0x1ffd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_1ffd10:
    // 0x1ffd10: 0x7bbf0020
    ctx->pc = 0x1ffd10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffd14:
    // 0x1ffd14: 0x7bb10010
    ctx->pc = 0x1ffd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffd18: 0x7bb00000
    ctx->pc = 0x1ffd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffd1c: 0x3e00008
    ctx->pc = 0x1FFD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFD20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF87Cu: goto label_1ff87c;
            case 0x1FF944u: goto label_1ff944;
            case 0x1FFA38u: goto label_1ffa38;
            case 0x1FFB28u: goto label_1ffb28;
            case 0x1FFC1Cu: goto label_1ffc1c;
            case 0x1FFD10u: goto label_1ffd10;
            case 0x1FFD14u: goto label_1ffd14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFD24u;
}
