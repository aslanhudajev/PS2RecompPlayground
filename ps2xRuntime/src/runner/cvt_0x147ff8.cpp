#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvt
// Address: 0x147ff8 - 0x1481a8
void cvt_0x147ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvt");


    ctx->pc = 0x147ff8u;

    // 0x147ff8: 0x27bdff50
    ctx->pc = 0x147ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x147ffc: 0x24020066
    ctx->pc = 0x147ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x148000: 0xffbe0090
    ctx->pc = 0x148000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x148004: 0xffb70080
    ctx->pc = 0x148004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x148008: 0x160f02d
    ctx->pc = 0x148008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14800c: 0xffb60070
    ctx->pc = 0x14800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x148010: 0xe0b82d
    ctx->pc = 0x148010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148014: 0xffb50060
    ctx->pc = 0x148014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x148018: 0x80b02d
    ctx->pc = 0x148018u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14801c: 0xffb40050
    ctx->pc = 0x14801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x148020: 0x120a82d
    ctx->pc = 0x148020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148024: 0xffb20030
    ctx->pc = 0x148024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x148028: 0xc0a02d
    ctx->pc = 0x148028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14802c: 0xffb10020
    ctx->pc = 0x14802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x148030: 0xa0902d
    ctx->pc = 0x148030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148034: 0xffb00010
    ctx->pc = 0x148034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x148038: 0x140882d
    ctx->pc = 0x148038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14803c: 0xffbf00a0
    ctx->pc = 0x14803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x148040: 0x100802d
    ctx->pc = 0x148040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148044: 0x16220003
    ctx->pc = 0x148044u;
    {
        const bool branch_taken_0x148044 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x148048u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        if (branch_taken_0x148044) {
            ctx->pc = 0x148054u;
            goto label_148054;
        }
    }
    ctx->pc = 0x14804Cu;
    // 0x14804c: 0x10000008
    ctx->pc = 0x14804Cu;
    {
        const bool branch_taken_0x14804c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148050u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x14804c) {
            ctx->pc = 0x148070u;
            goto label_148070;
        }
    }
    ctx->pc = 0x148054u;
label_148054:
    // 0x148054: 0x24020065
    ctx->pc = 0x148054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x148058: 0x12220003
    ctx->pc = 0x148058u;
    {
        const bool branch_taken_0x148058 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x14805Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 69));
        if (branch_taken_0x148058) {
            ctx->pc = 0x148068u;
            goto label_148068;
        }
    }
    ctx->pc = 0x148060u;
    // 0x148060: 0x16220003
    ctx->pc = 0x148060u;
    {
        const bool branch_taken_0x148060 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x148064u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x148060) {
            ctx->pc = 0x148070u;
            goto label_148070;
        }
    }
    ctx->pc = 0x148068u;
label_148068:
    // 0x148068: 0x26940001
    ctx->pc = 0x148068u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x14806c: 0x24130002
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
label_148070:
    // 0x148070: 0x240102d
    ctx->pc = 0x148070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148074: 0x2103f
    ctx->pc = 0x148074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x148078: 0x4430007
    ctx->pc = 0x148078u;
    {
        const bool branch_taken_0x148078 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x148078) {
            ctx->pc = 0x14807Cu;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x148098u;
            goto label_148098;
        }
    }
    ctx->pc = 0x148080u;
    // 0x148080: 0x240282d
    ctx->pc = 0x148080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148084: 0xc052c9e
    ctx->pc = 0x148084u;
    SET_GPR_U32(ctx, 31, 0x14808Cu);
    ctx->pc = 0x148088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B278u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x14b278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14808Cu; }
        else if (ctx->pc != 0x14808Cu) { ctx->pc = 0x14808Cu; }
    }
    if (ctx->pc != 0x14808Cu) { return; }
    ctx->pc = 0x14808Cu;
    // 0x14808c: 0x2403002d
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
    // 0x148090: 0x40902d
    ctx->pc = 0x148090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148094: 0xa2030000
    ctx->pc = 0x148094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_148098:
    // 0x148098: 0x260302d
    ctx->pc = 0x148098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14809c: 0x2c0202d
    ctx->pc = 0x14809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480a0: 0x240282d
    ctx->pc = 0x1480a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480a4: 0x280382d
    ctx->pc = 0x1480a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480a8: 0x2a0402d
    ctx->pc = 0x1480a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480ac: 0x3a0482d
    ctx->pc = 0x1480acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480b0: 0xc050116
    ctx->pc = 0x1480B0u;
    SET_GPR_U32(ctx, 31, 0x1480B8u);
    ctx->pc = 0x1480B4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x140458u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dtoa_r_0x140458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1480B8u; }
        else if (ctx->pc != 0x1480B8u) { ctx->pc = 0x1480B8u; }
    }
    if (ctx->pc != 0x1480B8u) { return; }
    ctx->pc = 0x1480B8u;
    // 0x1480b8: 0x40982d
    ctx->pc = 0x1480b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480bc: 0x24020067
    ctx->pc = 0x1480bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
    // 0x1480c0: 0x12220003
    ctx->pc = 0x1480C0u;
    {
        const bool branch_taken_0x1480c0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x1480C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x1480c0) {
            ctx->pc = 0x1480D0u;
            goto label_1480d0;
        }
    }
    ctx->pc = 0x1480C8u;
    // 0x1480c8: 0x16220004
    ctx->pc = 0x1480C8u;
    {
        const bool branch_taken_0x1480c8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1480CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x1480c8) {
            ctx->pc = 0x1480DCu;
            goto label_1480dc;
        }
    }
    ctx->pc = 0x1480D0u;
label_1480d0:
    // 0x1480d0: 0x32e20001
    ctx->pc = 0x1480d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 1));
    // 0x1480d4: 0x10400024
    ctx->pc = 0x1480D4u;
    {
        const bool branch_taken_0x1480d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1480D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x1480d4) {
            ctx->pc = 0x148168u;
            goto label_148168;
        }
    }
    ctx->pc = 0x1480DCu;
label_1480dc:
    // 0x1480dc: 0x1622000e
    ctx->pc = 0x1480DCu;
    {
        const bool branch_taken_0x1480dc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x1480E0u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        if (branch_taken_0x1480dc) {
            ctx->pc = 0x148118u;
            goto label_148118;
        }
    }
    ctx->pc = 0x1480E4u;
    // 0x1480e4: 0x82630000
    ctx->pc = 0x1480e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1480e8: 0x24020030
    ctx->pc = 0x1480e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1480ec: 0x54620009
    ctx->pc = 0x1480ECu;
    {
        const bool branch_taken_0x1480ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1480ec) {
            ctx->pc = 0x1480F0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x148114u;
            goto label_148114;
        }
    }
    ctx->pc = 0x1480F4u;
    // 0x1480f4: 0x240202d
    ctx->pc = 0x1480f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1480f8: 0xc052e02
    ctx->pc = 0x1480F8u;
    SET_GPR_U32(ctx, 31, 0x148100u);
    ctx->pc = 0x1480FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148100u; }
        else if (ctx->pc != 0x148100u) { ctx->pc = 0x148100u; }
    }
    if (ctx->pc != 0x148100u) { return; }
    ctx->pc = 0x148100u;
    // 0x148100: 0x10400003
    ctx->pc = 0x148100u;
    {
        const bool branch_taken_0x148100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148104u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x148100) {
            ctx->pc = 0x148110u;
            goto label_148110;
        }
    }
    ctx->pc = 0x148108u;
    // 0x148108: 0x24420001
    ctx->pc = 0x148108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x14810c: 0xaea20000
    ctx->pc = 0x14810cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_148110:
    // 0x148110: 0x8ea20000
    ctx->pc = 0x148110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_148114:
    // 0x148114: 0x2028021
    ctx->pc = 0x148114u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_148118:
    // 0x148118: 0x240202d
    ctx->pc = 0x148118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14811c: 0xc052e02
    ctx->pc = 0x14811Cu;
    SET_GPR_U32(ctx, 31, 0x148124u);
    ctx->pc = 0x148120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B808u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x14b808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148124u; }
        else if (ctx->pc != 0x148124u) { ctx->pc = 0x148124u; }
    }
    if (ctx->pc != 0x148124u) { return; }
    ctx->pc = 0x148124u;
    // 0x148124: 0x50400001
    ctx->pc = 0x148124u;
    {
        const bool branch_taken_0x148124 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x148124) {
            ctx->pc = 0x148128u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->pc = 0x14812Cu;
            goto label_14812c;
        }
    }
    ctx->pc = 0x14812Cu;
label_14812c:
    // 0x14812c: 0x8fa30004
    ctx->pc = 0x14812cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x148130: 0x70102b
    ctx->pc = 0x148130u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x148134: 0x1040000d
    ctx->pc = 0x148134u;
    {
        const bool branch_taken_0x148134 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148138u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x148134) {
            ctx->pc = 0x14816Cu;
            goto label_14816c;
        }
    }
    ctx->pc = 0x14813Cu;
    // 0x14813c: 0x24050030
    ctx->pc = 0x14813cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
label_148140:
    // 0x148140: 0x24820001
    ctx->pc = 0x148140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x148144: 0xa0850000
    ctx->pc = 0x148144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x148148: 0x40182d
    ctx->pc = 0x148148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14814c: 0xafa20004
    ctx->pc = 0x14814cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x148150: 0x60202d
    ctx->pc = 0x148150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148154: 0x70102b
    ctx->pc = 0x148154u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x148158: 0x1440fff9
    ctx->pc = 0x148158u;
    {
        const bool branch_taken_0x148158 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x148158) {
            ctx->pc = 0x148140u;
            goto label_148140;
        }
    }
    ctx->pc = 0x148160u;
    // 0x148160: 0x10000003
    ctx->pc = 0x148160u;
    {
        const bool branch_taken_0x148160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148164u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x148160) {
            ctx->pc = 0x148170u;
            goto label_148170;
        }
    }
    ctx->pc = 0x148168u;
label_148168:
    // 0x148168: 0x8fa30004
    ctx->pc = 0x148168u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_14816c:
    // 0x14816c: 0x731823
    ctx->pc = 0x14816cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_148170:
    // 0x148170: 0x260102d
    ctx->pc = 0x148170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148174: 0xafc30000
    ctx->pc = 0x148174u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x148178: 0xdfbf00a0
    ctx->pc = 0x148178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14817c: 0xdfbe0090
    ctx->pc = 0x14817cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x148180: 0xdfb70080
    ctx->pc = 0x148180u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148184: 0xdfb60070
    ctx->pc = 0x148184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148188: 0xdfb50060
    ctx->pc = 0x148188u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14818c: 0xdfb40050
    ctx->pc = 0x14818cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148190: 0xdfb30040
    ctx->pc = 0x148190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148194: 0xdfb20030
    ctx->pc = 0x148194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148198: 0xdfb10020
    ctx->pc = 0x148198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14819c: 0xdfb00010
    ctx->pc = 0x14819cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1481a0: 0x3e00008
    ctx->pc = 0x1481A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1481A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148054u: goto label_148054;
            case 0x148068u: goto label_148068;
            case 0x148070u: goto label_148070;
            case 0x148098u: goto label_148098;
            case 0x1480D0u: goto label_1480d0;
            case 0x1480DCu: goto label_1480dc;
            case 0x148110u: goto label_148110;
            case 0x148114u: goto label_148114;
            case 0x148118u: goto label_148118;
            case 0x14812Cu: goto label_14812c;
            case 0x148140u: goto label_148140;
            case 0x148168u: goto label_148168;
            case 0x14816Cu: goto label_14816c;
            case 0x148170u: goto label_148170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1481A8u;
}
