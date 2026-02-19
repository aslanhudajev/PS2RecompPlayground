#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadStage
// Address: 0x291800 - 0x2919b0
void LoadStage_0x291800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291800u;

    // 0x291800: 0x27bdffa0
    ctx->pc = 0x291800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291804: 0xffbf0050
    ctx->pc = 0x291804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x291808: 0xffb40040
    ctx->pc = 0x291808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29180c: 0xffb30030
    ctx->pc = 0x29180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x291810: 0xffb20020
    ctx->pc = 0x291810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x291814: 0xffb10010
    ctx->pc = 0x291814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x291818: 0xffb00000
    ctx->pc = 0x291818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29181c: 0x3c020035
    ctx->pc = 0x29181cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291820: 0xc0986b4
    ctx->pc = 0x291820u;
    SET_GPR_U32(ctx, 31, 0x291828u);
    ctx->pc = 0x291824u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965300)));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291828u; }
    }
    if (ctx->pc != 0x291828u) { return; }
    ctx->pc = 0x291828u;
    // 0x291828: 0xc0a44f0
    ctx->pc = 0x291828u;
    SET_GPR_U32(ctx, 31, 0x291830u);
    ctx->pc = 0x29182Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2913C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadAllRecords_0x2913c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291830u; }
    }
    if (ctx->pc != 0x291830u) { return; }
    ctx->pc = 0x291830u;
    // 0x291830: 0x3c020034
    ctx->pc = 0x291830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291834: 0x8c50cd94
    ctx->pc = 0x291834u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x291838: 0x3c020034
    ctx->pc = 0x291838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29183c: 0x8c42cd98
    ctx->pc = 0x29183cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x291840: 0x18400039
    ctx->pc = 0x291840u;
    {
        const bool branch_taken_0x291840 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291844u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x291840) {
            ctx->pc = 0x291928u;
            goto label_291928;
        }
    }
    ctx->pc = 0x291848u;
    // 0x291848: 0x24540438
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1080));
    // 0x29184c: 0x2412ffff
    ctx->pc = 0x29184cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x291850: 0x3c020035
    ctx->pc = 0x291850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291854: 0x2453fc38
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294966328));
label_291858:
    // 0x291858: 0x8e040000
    ctx->pc = 0x291858u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29185c: 0x10800006
    ctx->pc = 0x29185Cu;
    {
        const bool branch_taken_0x29185c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x291860u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x29185c) {
            ctx->pc = 0x291878u;
            goto label_291878;
        }
    }
    ctx->pc = 0x291864u;
    // 0x291864: 0x541021
    ctx->pc = 0x291864u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x291868: 0x8c430000
    ctx->pc = 0x291868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29186c: 0x8c820000
    ctx->pc = 0x29186cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291870: 0x10620009
    ctx->pc = 0x291870u;
    {
        const bool branch_taken_0x291870 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x291874u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x291870) {
            ctx->pc = 0x291898u;
            goto label_291898;
        }
    }
    ctx->pc = 0x291878u;
label_291878:
    // 0x291878: 0xa61200d8
    ctx->pc = 0x291878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 18));
    // 0x29187c: 0x8e040070
    ctx->pc = 0x29187cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x291880: 0x10800023
    ctx->pc = 0x291880u;
    {
        const bool branch_taken_0x291880 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x291884u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x291880) {
            ctx->pc = 0x291910u;
            goto label_291910;
        }
    }
    ctx->pc = 0x291888u;
    // 0x291888: 0xc0b41b8
    ctx->pc = 0x291888u;
    SET_GPR_U32(ctx, 31, 0x291890u);
    ctx->pc = 0x29188Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291890u; }
    }
    if (ctx->pc != 0x291890u) { return; }
    ctx->pc = 0x291890u;
    // 0x291890: 0x10000020
    ctx->pc = 0x291890u;
    {
        const bool branch_taken_0x291890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291894u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x291890) {
            ctx->pc = 0x291914u;
            goto label_291914;
        }
    }
    ctx->pc = 0x291898u;
label_291898:
    // 0x291898: 0x531021
    ctx->pc = 0x291898u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29189c: 0x94420000
    ctx->pc = 0x29189cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2918a0: 0xa60200d8
    ctx->pc = 0x2918a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x2918a4: 0x21400
    ctx->pc = 0x2918a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2918a8: 0x21403
    ctx->pc = 0x2918a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2918ac: 0x2403ffff
    ctx->pc = 0x2918acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2918b0: 0x54430007
    ctx->pc = 0x2918B0u;
    {
        const bool branch_taken_0x2918b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2918b0) {
            ctx->pc = 0x2918B4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2918D0u;
            goto label_2918d0;
        }
    }
    ctx->pc = 0x2918B8u;
    // 0x2918b8: 0x8e040070
    ctx->pc = 0x2918b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2918bc: 0x10800003
    ctx->pc = 0x2918BCu;
    {
        const bool branch_taken_0x2918bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2918C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2918bc) {
            ctx->pc = 0x2918CCu;
            goto label_2918cc;
        }
    }
    ctx->pc = 0x2918C4u;
    // 0x2918c4: 0xc0b41b8
    ctx->pc = 0x2918C4u;
    SET_GPR_U32(ctx, 31, 0x2918CCu);
    ctx->pc = 0x2918C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2918CCu; }
    }
    if (ctx->pc != 0x2918CCu) { return; }
    ctx->pc = 0x2918CCu;
label_2918cc:
    // 0x2918cc: 0x8e020000
    ctx->pc = 0x2918ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2918d0:
    // 0x2918d0: 0x8c430000
    ctx->pc = 0x2918d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2918d4: 0x24020003
    ctx->pc = 0x2918d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2918d8: 0x5462000e
    ctx->pc = 0x2918D8u;
    {
        const bool branch_taken_0x2918d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2918d8) {
            ctx->pc = 0x2918DCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x291914u;
            goto label_291914;
        }
    }
    ctx->pc = 0x2918E0u;
    // 0x2918e0: 0x960200d8
    ctx->pc = 0x2918e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2918e4: 0x30420001
    ctx->pc = 0x2918e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2918e8: 0x5440000a
    ctx->pc = 0x2918E8u;
    {
        const bool branch_taken_0x2918e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2918e8) {
            ctx->pc = 0x2918ECu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x291914u;
            goto label_291914;
        }
    }
    ctx->pc = 0x2918F0u;
    // 0x2918f0: 0xa21200e3
    ctx->pc = 0x2918f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 227), (uint8_t)GPR_U32(ctx, 18));
    // 0x2918f4: 0xa20000f6
    ctx->pc = 0x2918f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 246), (uint8_t)GPR_U32(ctx, 0));
    // 0x2918f8: 0xa61200d8
    ctx->pc = 0x2918f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 18));
    // 0x2918fc: 0x8e040070
    ctx->pc = 0x2918fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x291900: 0x10800003
    ctx->pc = 0x291900u;
    {
        const bool branch_taken_0x291900 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x291904u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x291900) {
            ctx->pc = 0x291910u;
            goto label_291910;
        }
    }
    ctx->pc = 0x291908u;
    // 0x291908: 0xc0b41b8
    ctx->pc = 0x291908u;
    SET_GPR_U32(ctx, 31, 0x291910u);
    ctx->pc = 0x29190Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291910u; }
    }
    if (ctx->pc != 0x291910u) { return; }
    ctx->pc = 0x291910u;
label_291910:
    // 0x291910: 0x26310001
    ctx->pc = 0x291910u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_291914:
    // 0x291914: 0x3c020034
    ctx->pc = 0x291914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291918: 0x8c42cd98
    ctx->pc = 0x291918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x29191c: 0x222102a
    ctx->pc = 0x29191cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x291920: 0x1440ffcd
    ctx->pc = 0x291920u;
    {
        const bool branch_taken_0x291920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291924u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x291920) {
            ctx->pc = 0x291858u;
            goto label_291858;
        }
    }
    ctx->pc = 0x291928u;
label_291928:
    // 0x291928: 0x3c020034
    ctx->pc = 0x291928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29192c: 0x40282d
    ctx->pc = 0x29192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291930: 0x8c42d1b8
    ctx->pc = 0x291930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x291934: 0x18400016
    ctx->pc = 0x291934u;
    {
        const bool branch_taken_0x291934 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291938u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291934) {
            ctx->pc = 0x291990u;
            goto label_291990;
        }
    }
    ctx->pc = 0x29193Cu;
    // 0x29193c: 0x3c020034
    ctx->pc = 0x29193cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291940: 0x2448cf60
    ctx->pc = 0x291940u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x291944: 0x3c020035
    ctx->pc = 0x291944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291948: 0x24471438
    ctx->pc = 0x291948u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 5176));
    // 0x29194c: 0x3c020035
    ctx->pc = 0x29194cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291950: 0x244614d0
    ctx->pc = 0x291950u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 5328));
    // 0x291954: 0x111880
    ctx->pc = 0x291954u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_291958:
    // 0x291958: 0x681821
    ctx->pc = 0x291958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29195c: 0x8c640000
    ctx->pc = 0x29195cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291960: 0x2271021
    ctx->pc = 0x291960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x291964: 0x90420000
    ctx->pc = 0x291964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291968: 0xa0820016
    ctx->pc = 0x291968u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x29196c: 0x8c630000
    ctx->pc = 0x29196cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x291970: 0x2261021
    ctx->pc = 0x291970u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x291974: 0x90420000
    ctx->pc = 0x291974u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291978: 0xa0620017
    ctx->pc = 0x291978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x29197c: 0x26310001
    ctx->pc = 0x29197cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x291980: 0x8ca2d1b8
    ctx->pc = 0x291980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294955448)));
    // 0x291984: 0x222102a
    ctx->pc = 0x291984u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x291988: 0x1440fff3
    ctx->pc = 0x291988u;
    {
        const bool branch_taken_0x291988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29198Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x291988) {
            ctx->pc = 0x291958u;
            goto label_291958;
        }
    }
    ctx->pc = 0x291990u;
label_291990:
    // 0x291990: 0xdfbf0050
    ctx->pc = 0x291990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291994: 0xdfb40040
    ctx->pc = 0x291994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291998: 0xdfb30030
    ctx->pc = 0x291998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29199c: 0xdfb20020
    ctx->pc = 0x29199cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2919a0: 0xdfb10010
    ctx->pc = 0x2919a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2919a4: 0xdfb00000
    ctx->pc = 0x2919a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2919a8: 0x3e00008
    ctx->pc = 0x2919A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2919ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291858u: goto label_291858;
            case 0x291878u: goto label_291878;
            case 0x291898u: goto label_291898;
            case 0x2918CCu: goto label_2918cc;
            case 0x2918D0u: goto label_2918d0;
            case 0x291910u: goto label_291910;
            case 0x291914u: goto label_291914;
            case 0x291928u: goto label_291928;
            case 0x291958u: goto label_291958;
            case 0x291990u: goto label_291990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2919B0u;
}
