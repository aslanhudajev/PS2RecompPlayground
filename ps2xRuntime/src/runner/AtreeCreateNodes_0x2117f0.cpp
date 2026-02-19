#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeCreateNodes
// Address: 0x2117f0 - 0x2118f8
void AtreeCreateNodes_0x2117f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2117f0u;

    // 0x2117f0: 0x27bdfff0
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2117f4: 0xffbf0000
    ctx->pc = 0x2117f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2117f8: 0x80302d
    ctx->pc = 0x2117f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117fc: 0x18c0003b
    ctx->pc = 0x2117FCu;
    {
        const bool branch_taken_0x2117fc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x211800u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2117fc) {
            ctx->pc = 0x2118ECu;
            goto label_2118ec;
        }
    }
    ctx->pc = 0x211804u;
    // 0x211804: 0x3c020032
    ctx->pc = 0x211804u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211808: 0x8c44f4b4
    ctx->pc = 0x211808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294964404)));
    // 0x21180c: 0x80282d
    ctx->pc = 0x21180cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211810: 0x3c020032
    ctx->pc = 0x211810u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211814: 0x8c43f4b0
    ctx->pc = 0x211814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964400)));
    // 0x211818: 0x3c02003c
    ctx->pc = 0x211818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21181c: 0x8c4acb6c
    ctx->pc = 0x21181cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294953836)));
    // 0x211820: 0x24080028
    ctx->pc = 0x211820u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 40));
    // 0x211824: 0x10000003
    ctx->pc = 0x211824u;
    {
        const bool branch_taken_0x211824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211828u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x211824) {
            ctx->pc = 0x211834u;
            goto label_211834;
        }
    }
    ctx->pc = 0x21182Cu;
    // 0x21182c: 0x0
    ctx->pc = 0x21182cu;
    // NOP
label_211830:
    // 0x211830: 0x24a50001
    ctx->pc = 0x211830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_211834:
    // 0x211834: 0xa3102a
    ctx->pc = 0x211834u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x211838: 0x1040000b
    ctx->pc = 0x211838u;
    {
        const bool branch_taken_0x211838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21183Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x211838) {
            ctx->pc = 0x211868u;
            goto label_211868;
        }
    }
    ctx->pc = 0x211840u;
    // 0x211840: 0x12a1021
    ctx->pc = 0x211840u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x211844: 0x8c420020
    ctx->pc = 0x211844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x211848: 0x10470003
    ctx->pc = 0x211848u;
    {
        const bool branch_taken_0x211848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x21184Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x211848) {
            ctx->pc = 0x211858u;
            goto label_211858;
        }
    }
    ctx->pc = 0x211850u;
    // 0x211850: 0x1000fff7
    ctx->pc = 0x211850u;
    {
        const bool branch_taken_0x211850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211854u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x211850) {
            ctx->pc = 0x211830u;
            goto label_211830;
        }
    }
    ctx->pc = 0x211858u;
label_211858:
    // 0x211858: 0xa21023
    ctx->pc = 0x211858u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21185c: 0x46102a
    ctx->pc = 0x21185cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x211860: 0x5440fff4
    ctx->pc = 0x211860u;
    {
        const bool branch_taken_0x211860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211860) {
            ctx->pc = 0x211864u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x211834u;
            goto label_211834;
        }
    }
    ctx->pc = 0x211868u;
label_211868:
    // 0x211868: 0x861821
    ctx->pc = 0x211868u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21186c: 0x3c020032
    ctx->pc = 0x21186cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x211870: 0x8c42f4b8
    ctx->pc = 0x211870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964408)));
    // 0x211874: 0x43102a
    ctx->pc = 0x211874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x211878: 0x50400007
    ctx->pc = 0x211878u;
    {
        const bool branch_taken_0x211878 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x211878) {
            ctx->pc = 0x21187Cu;
            SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
            ctx->pc = 0x211898u;
            goto label_211898;
        }
    }
    ctx->pc = 0x211880u;
    // 0x211880: 0x3c04003a
    ctx->pc = 0x211880u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x211884: 0x24845920
    ctx->pc = 0x211884u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22816));
    // 0x211888: 0xc0b492e
    ctx->pc = 0x211888u;
    SET_GPR_U32(ctx, 31, 0x211890u);
    ctx->pc = 0x21188Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211890u; }
    }
    if (ctx->pc != 0x211890u) { return; }
    ctx->pc = 0x211890u;
    // 0x211890: 0x10000016
    ctx->pc = 0x211890u;
    {
        const bool branch_taken_0x211890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211894u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x211890) {
            ctx->pc = 0x2118ECu;
            goto label_2118ec;
        }
    }
    ctx->pc = 0x211898u;
label_211898:
    // 0x211898: 0x8ca2f4b0
    ctx->pc = 0x211898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294964400)));
    // 0x21189c: 0x62102a
    ctx->pc = 0x21189cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2118a0: 0x54400008
    ctx->pc = 0x2118A0u;
    {
        const bool branch_taken_0x2118a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2118a0) {
            ctx->pc = 0x2118A4u;
            SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
            ctx->pc = 0x2118C4u;
            goto label_2118c4;
        }
    }
    ctx->pc = 0x2118A8u;
    // 0x2118a8: 0xaca3f4b0
    ctx->pc = 0x2118a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294964400), GPR_U32(ctx, 3));
    // 0x2118ac: 0x3c050032
    ctx->pc = 0x2118acu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x2118b0: 0x8ca2f4c8
    ctx->pc = 0x2118b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294964424)));
    // 0x2118b4: 0x43102a
    ctx->pc = 0x2118b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2118b8: 0x54400001
    ctx->pc = 0x2118B8u;
    {
        const bool branch_taken_0x2118b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2118b8) {
            ctx->pc = 0x2118BCu;
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294964424), GPR_U32(ctx, 3));
            ctx->pc = 0x2118C0u;
            goto label_2118c0;
        }
    }
    ctx->pc = 0x2118C0u;
label_2118c0:
    // 0x2118c0: 0x3c030032
    ctx->pc = 0x2118c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2118c4:
    // 0x2118c4: 0x8c62f4b4
    ctx->pc = 0x2118c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964404)));
    // 0x2118c8: 0x54820004
    ctx->pc = 0x2118C8u;
    {
        const bool branch_taken_0x2118c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x2118c8) {
            ctx->pc = 0x2118CCu;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x2118DCu;
            goto label_2118dc;
        }
    }
    ctx->pc = 0x2118D0u;
    // 0x2118d0: 0xc41021
    ctx->pc = 0x2118d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2118d4: 0xac62f4b4
    ctx->pc = 0x2118d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964404), GPR_U32(ctx, 2));
    // 0x2118d8: 0x3c03003c
    ctx->pc = 0x2118d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2118dc:
    // 0x2118dc: 0x24020028
    ctx->pc = 0x2118dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2118e0: 0x821018
    ctx->pc = 0x2118e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2118e4: 0x8c63cb6c
    ctx->pc = 0x2118e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294953836)));
    // 0x2118e8: 0x431021
    ctx->pc = 0x2118e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2118ec:
    // 0x2118ec: 0xdfbf0000
    ctx->pc = 0x2118ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2118f0: 0x3e00008
    ctx->pc = 0x2118F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2118F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211830u: goto label_211830;
            case 0x211834u: goto label_211834;
            case 0x211858u: goto label_211858;
            case 0x211868u: goto label_211868;
            case 0x211898u: goto label_211898;
            case 0x2118C0u: goto label_2118c0;
            case 0x2118C4u: goto label_2118c4;
            case 0x2118DCu: goto label_2118dc;
            case 0x2118ECu: goto label_2118ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2118F8u;
}
