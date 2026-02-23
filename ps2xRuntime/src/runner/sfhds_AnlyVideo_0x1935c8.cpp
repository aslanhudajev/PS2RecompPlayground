#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_AnlyVideo
// Address: 0x1935c8 - 0x193740
void sfhds_AnlyVideo_0x1935c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_AnlyVideo");


    ctx->pc = 0x1935c8u;

    // 0x1935c8: 0x27bdffa0
    ctx->pc = 0x1935c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1935cc: 0xffb00010
    ctx->pc = 0x1935ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1935d0: 0xc0802d
    ctx->pc = 0x1935d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935d4: 0xffb20030
    ctx->pc = 0x1935d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1935d8: 0xffb10020
    ctx->pc = 0x1935d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1935dc: 0xa0902d
    ctx->pc = 0x1935dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935e0: 0x80882d
    ctx->pc = 0x1935e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935e4: 0x3c06001a
    ctx->pc = 0x1935e4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x1935e8: 0xffb30040
    ctx->pc = 0x1935e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1935ec: 0x24c60938
    ctx->pc = 0x1935ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2360));
    // 0x1935f0: 0xffbf0050
    ctx->pc = 0x1935f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1935f4: 0xc064ddc
    ctx->pc = 0x1935F4u;
    SET_GPR_U32(ctx, 31, 0x1935FCu);
    ctx->pc = 0x1935F8u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 18), 255));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935FCu; }
        else if (ctx->pc != 0x1935FCu) { ctx->pc = 0x1935FCu; }
    }
    if (ctx->pc != 0x1935FCu) { return; }
    ctx->pc = 0x1935FCu;
    // 0x1935fc: 0x3c06001a
    ctx->pc = 0x1935fcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x193600: 0xae020000
    ctx->pc = 0x193600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x193604: 0x24c609a0
    ctx->pc = 0x193604u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2464));
    // 0x193608: 0x220202d
    ctx->pc = 0x193608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19360c: 0xc064ddc
    ctx->pc = 0x19360Cu;
    SET_GPR_U32(ctx, 31, 0x193614u);
    ctx->pc = 0x193610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193614u; }
        else if (ctx->pc != 0x193614u) { ctx->pc = 0x193614u; }
    }
    if (ctx->pc != 0x193614u) { return; }
    ctx->pc = 0x193614u;
    // 0x193614: 0xae020004
    ctx->pc = 0x193614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x193618: 0x220202d
    ctx->pc = 0x193618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19361c: 0x260282d
    ctx->pc = 0x19361cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193620: 0x26060008
    ctx->pc = 0x193620u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 8));
    // 0x193624: 0xc068284
    ctx->pc = 0x193624u;
    SET_GPR_U32(ctx, 31, 0x19362Cu);
    ctx->pc = 0x193628u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1A0A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_AnlyElemPicSz_0x1a0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19362Cu; }
        else if (ctx->pc != 0x19362Cu) { ctx->pc = 0x19362Cu; }
    }
    if (ctx->pc != 0x19362Cu) { return; }
    ctx->pc = 0x19362Cu;
    // 0x19362c: 0x14400004
    ctx->pc = 0x19362Cu;
    {
        const bool branch_taken_0x19362c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193630u;
        SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
        if (branch_taken_0x19362c) {
            ctx->pc = 0x193640u;
            goto label_193640;
        }
    }
    ctx->pc = 0x193634u;
    // 0x193634: 0x2402ffff
    ctx->pc = 0x193634u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193638: 0xae02000c
    ctx->pc = 0x193638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x19363c: 0xae020008
    ctx->pc = 0x19363cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_193640:
    // 0x193640: 0x220202d
    ctx->pc = 0x193640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193644: 0x24c60ab8
    ctx->pc = 0x193644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2744));
    // 0x193648: 0xc064ddc
    ctx->pc = 0x193648u;
    SET_GPR_U32(ctx, 31, 0x193650u);
    ctx->pc = 0x19364Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193650u; }
        else if (ctx->pc != 0x193650u) { ctx->pc = 0x193650u; }
    }
    if (ctx->pc != 0x193650u) { return; }
    ctx->pc = 0x193650u;
    // 0x193650: 0xae020010
    ctx->pc = 0x193650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x193654: 0x260282d
    ctx->pc = 0x193654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193658: 0x220202d
    ctx->pc = 0x193658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19365c: 0xc067f84
    ctx->pc = 0x19365Cu;
    SET_GPR_U32(ctx, 31, 0x193664u);
    ctx->pc = 0x193660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_IsEffFtrInf_0x19fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193664u; }
        else if (ctx->pc != 0x193664u) { ctx->pc = 0x193664u; }
    }
    if (ctx->pc != 0x193664u) { return; }
    ctx->pc = 0x193664u;
    // 0x193664: 0x50400001
    ctx->pc = 0x193664u;
    {
        const bool branch_taken_0x193664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x193664) {
            ctx->pc = 0x193668u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x19366Cu;
            goto label_19366c;
        }
    }
    ctx->pc = 0x19366Cu;
label_19366c:
    // 0x19366c: 0x8fa30000
    ctx->pc = 0x19366cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193670: 0x3102b
    ctx->pc = 0x193670u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x193674: 0x1060002b
    ctx->pc = 0x193674u;
    {
        const bool branch_taken_0x193674 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x193678u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x193674) {
            ctx->pc = 0x193724u;
            goto label_193724;
        }
    }
    ctx->pc = 0x19367Cu;
    // 0x19367c: 0x3c06001a
    ctx->pc = 0x19367cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x193680: 0x220202d
    ctx->pc = 0x193680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193684: 0x24c60b28
    ctx->pc = 0x193684u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2856));
    // 0x193688: 0xc064ddc
    ctx->pc = 0x193688u;
    SET_GPR_U32(ctx, 31, 0x193690u);
    ctx->pc = 0x19368Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193690u; }
        else if (ctx->pc != 0x193690u) { ctx->pc = 0x193690u; }
    }
    if (ctx->pc != 0x193690u) { return; }
    ctx->pc = 0x193690u;
    // 0x193690: 0x3c06001a
    ctx->pc = 0x193690u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x193694: 0xae020018
    ctx->pc = 0x193694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x193698: 0x24c60b90
    ctx->pc = 0x193698u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2960));
    // 0x19369c: 0x220202d
    ctx->pc = 0x19369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936a0: 0xc064ddc
    ctx->pc = 0x1936A0u;
    SET_GPR_U32(ctx, 31, 0x1936A8u);
    ctx->pc = 0x1936A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936A8u; }
        else if (ctx->pc != 0x1936A8u) { ctx->pc = 0x1936A8u; }
    }
    if (ctx->pc != 0x1936A8u) { return; }
    ctx->pc = 0x1936A8u;
    // 0x1936a8: 0x3c06001a
    ctx->pc = 0x1936a8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x1936ac: 0xae02001c
    ctx->pc = 0x1936acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1936b0: 0x24c60bf8
    ctx->pc = 0x1936b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3064));
    // 0x1936b4: 0x220202d
    ctx->pc = 0x1936b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936b8: 0xc064ddc
    ctx->pc = 0x1936B8u;
    SET_GPR_U32(ctx, 31, 0x1936C0u);
    ctx->pc = 0x1936BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936C0u; }
        else if (ctx->pc != 0x1936C0u) { ctx->pc = 0x1936C0u; }
    }
    if (ctx->pc != 0x1936C0u) { return; }
    ctx->pc = 0x1936C0u;
    // 0x1936c0: 0x3c06001a
    ctx->pc = 0x1936c0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x1936c4: 0xae020020
    ctx->pc = 0x1936c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1936c8: 0x24c60c68
    ctx->pc = 0x1936c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3176));
    // 0x1936cc: 0x220202d
    ctx->pc = 0x1936ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936d0: 0xc064ddc
    ctx->pc = 0x1936D0u;
    SET_GPR_U32(ctx, 31, 0x1936D8u);
    ctx->pc = 0x1936D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936D8u; }
        else if (ctx->pc != 0x1936D8u) { ctx->pc = 0x1936D8u; }
    }
    if (ctx->pc != 0x1936D8u) { return; }
    ctx->pc = 0x1936D8u;
    // 0x1936d8: 0x3c06001a
    ctx->pc = 0x1936d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x1936dc: 0xae020024
    ctx->pc = 0x1936dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1936e0: 0x24c60cd8
    ctx->pc = 0x1936e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3288));
    // 0x1936e4: 0x220202d
    ctx->pc = 0x1936e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936e8: 0xc064ddc
    ctx->pc = 0x1936E8u;
    SET_GPR_U32(ctx, 31, 0x1936F0u);
    ctx->pc = 0x1936ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936F0u; }
        else if (ctx->pc != 0x1936F0u) { ctx->pc = 0x1936F0u; }
    }
    if (ctx->pc != 0x1936F0u) { return; }
    ctx->pc = 0x1936F0u;
    // 0x1936f0: 0x3c06001a
    ctx->pc = 0x1936f0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x1936f4: 0xae020028
    ctx->pc = 0x1936f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1936f8: 0x24c60d40
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3392));
    // 0x1936fc: 0x220202d
    ctx->pc = 0x1936fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193700: 0xc064ddc
    ctx->pc = 0x193700u;
    SET_GPR_U32(ctx, 31, 0x193708u);
    ctx->pc = 0x193704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193708u; }
        else if (ctx->pc != 0x193708u) { ctx->pc = 0x193708u; }
    }
    if (ctx->pc != 0x193708u) { return; }
    ctx->pc = 0x193708u;
    // 0x193708: 0x3c06001a
    ctx->pc = 0x193708u;
    SET_GPR_U32(ctx, 6, ((uint32_t)26 << 16));
    // 0x19370c: 0xae02002c
    ctx->pc = 0x19370cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x193710: 0x220202d
    ctx->pc = 0x193710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193714: 0x240282d
    ctx->pc = 0x193714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193718: 0xc064ddc
    ctx->pc = 0x193718u;
    SET_GPR_U32(ctx, 31, 0x193720u);
    ctx->pc = 0x19371Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3512));
    ctx->pc = 0x193770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallS_0x193770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193720u; }
        else if (ctx->pc != 0x193720u) { ctx->pc = 0x193720u; }
    }
    if (ctx->pc != 0x193720u) { return; }
    ctx->pc = 0x193720u;
    // 0x193720: 0xae020030
    ctx->pc = 0x193720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_193724:
    // 0x193724: 0xdfbf0050
    ctx->pc = 0x193724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193728: 0xdfb30040
    ctx->pc = 0x193728u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19372c: 0xdfb20030
    ctx->pc = 0x19372cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193730: 0xdfb10020
    ctx->pc = 0x193730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193734: 0xdfb00010
    ctx->pc = 0x193734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193738: 0x3e00008
    ctx->pc = 0x193738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19373Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193640u: goto label_193640;
            case 0x19366Cu: goto label_19366c;
            case 0x193724u: goto label_193724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193740u;
}
