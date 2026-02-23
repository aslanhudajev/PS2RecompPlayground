#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutLinkDummyExtStripData
// Address: 0x1aa770 - 0x1aa8b8
void nlObjPutLinkDummyExtStripData_0x1aa770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutLinkDummyExtStripData");


    ctx->pc = 0x1aa770u;

    // 0x1aa770: 0x27bdfff0
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa774: 0x7fbf0000
    ctx->pc = 0x1aa774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1aa778: 0x8c860000
    ctx->pc = 0x1aa778u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa77c: 0x24051000
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1aa780: 0x14c5004a
    ctx->pc = 0x1AA780u;
    {
        const bool branch_taken_0x1aa780 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 5));
        ctx->pc = 0x1AA784u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa780) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA788u;
    // 0x1aa788: 0x8c86001c
    ctx->pc = 0x1aa788u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1aa78c: 0x30c50008
    ctx->pc = 0x1aa78cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), 8));
    // 0x1aa790: 0x10a00046
    ctx->pc = 0x1AA790u;
    {
        const bool branch_taken_0x1aa790 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa790) {
            ctx->pc = 0x1AA8ACu;
            goto label_1aa8ac;
        }
    }
    ctx->pc = 0x1AA798u;
    // 0x1aa798: 0x30c20001
    ctx->pc = 0x1aa798u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
    // 0x1aa79c: 0x10400002
    ctx->pc = 0x1AA79Cu;
    {
        const bool branch_taken_0x1aa79c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa79c) {
            ctx->pc = 0x1AA7A8u;
            goto label_1aa7a8;
        }
    }
    ctx->pc = 0x1AA7A4u;
    // 0x1aa7a4: 0x24030001
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1aa7a8:
    // 0x1aa7a8: 0x8c85002c
    ctx->pc = 0x1aa7a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1aa7ac: 0x24820030
    ctx->pc = 0x1aa7acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 48));
    // 0x1aa7b0: 0x24420020
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa7b4: 0x52880
    ctx->pc = 0x1aa7b4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aa7b8: 0x24a5000c
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 12));
    // 0x1aa7bc: 0x52880
    ctx->pc = 0x1aa7bcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aa7c0: 0x852021
    ctx->pc = 0x1aa7c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aa7c4: 0x10000034
    ctx->pc = 0x1AA7C4u;
    {
        const bool branch_taken_0x1aa7c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA7C8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 48));
        if (branch_taken_0x1aa7c4) {
            ctx->pc = 0x1AA898u;
            goto label_1aa898;
        }
    }
    ctx->pc = 0x1AA7CCu;
label_1aa7cc:
    // 0x1aa7cc: 0x8cc40010
    ctx->pc = 0x1aa7ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1aa7d0: 0x480000d
    ctx->pc = 0x1AA7D0u;
    {
        const bool branch_taken_0x1aa7d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1aa7d0) {
            ctx->pc = 0x1AA808u;
            goto label_1aa808;
        }
    }
    ctx->pc = 0x1AA7D8u;
    // 0x1aa7d8: 0x1060000b
    ctx->pc = 0x1AA7D8u;
    {
        const bool branch_taken_0x1aa7d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa7d8) {
            ctx->pc = 0x1AA808u;
            goto label_1aa808;
        }
    }
    ctx->pc = 0x1AA7E0u;
    // 0x1aa7e0: 0x8cc40004
    ctx->pc = 0x1aa7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1aa7e4: 0x30840002
    ctx->pc = 0x1aa7e4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 2));
    // 0x1aa7e8: 0x10800007
    ctx->pc = 0x1AA7E8u;
    {
        const bool branch_taken_0x1aa7e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa7e8) {
            ctx->pc = 0x1AA808u;
            goto label_1aa808;
        }
    }
    ctx->pc = 0x1AA7F0u;
    // 0x1aa7f0: 0x8cc5000c
    ctx->pc = 0x1aa7f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1aa7f4: 0x2404fffe
    ctx->pc = 0x1aa7f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1aa7f8: 0x14a40003
    ctx->pc = 0x1AA7F8u;
    {
        const bool branch_taken_0x1aa7f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1AA7FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
        if (branch_taken_0x1aa7f8) {
            ctx->pc = 0x1AA808u;
            goto label_1aa808;
        }
    }
    ctx->pc = 0x1AA800u;
    // 0x1aa800: 0x24420020
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa804: 0x0
    ctx->pc = 0x1aa804u;
    // NOP
label_1aa808:
    // 0x1aa808: 0x8cc400d8
    ctx->pc = 0x1aa808u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x1aa80c: 0x24ca00e0
    ctx->pc = 0x1aa80cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 224));
    // 0x1aa810: 0x71406628
    ctx->pc = 0x1aa810u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1aa814: 0x24cb00d8
    ctx->pc = 0x1aa814u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 6), 216));
    // 0x1aa818: 0x10000017
    ctx->pc = 0x1AA818u;
    {
        const bool branch_taken_0x1aa818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA81Cu;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        if (branch_taken_0x1aa818) {
            ctx->pc = 0x1AA878u;
            goto label_1aa878;
        }
    }
    ctx->pc = 0x1AA820u;
    // 0x1aa820: 0x3c041000
    ctx->pc = 0x1aa820u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
label_1aa824:
    // 0x1aa824: 0xac440010
    ctx->pc = 0x1aa824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1aa828: 0xac400014
    ctx->pc = 0x1aa828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1aa82c: 0x3c041400
    ctx->pc = 0x1aa82cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)5120 << 16));
    // 0x1aa830: 0xac400018
    ctx->pc = 0x1aa830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1aa834: 0x34840004
    ctx->pc = 0x1aa834u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 4));
    // 0x1aa838: 0xac44001c
    ctx->pc = 0x1aa838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1aa83c: 0x8d480008
    ctx->pc = 0x1aa83cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1aa840: 0x8d450004
    ctx->pc = 0x1aa840u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1aa844: 0x24070009
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aa848: 0x24060007
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa84c: 0x2404fffc
    ctx->pc = 0x1aa84cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1aa850: 0x24420020
    ctx->pc = 0x1aa850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa854: 0x841c2
    ctx->pc = 0x1aa854u;
    SET_GPR_U32(ctx, 8, SRL32(GPR_U32(ctx, 8), 7));
    // 0x1aa858: 0x31080001
    ctx->pc = 0x1aa858u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 1));
    // 0x1aa85c: 0xc8380a
    ctx->pc = 0x1aa85cu;
    if (GPR_U32(ctx, 8) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 6));
    // 0x1aa860: 0xa72818
    ctx->pc = 0x1aa860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1aa864: 0x24a50014
    ctx->pc = 0x1aa864u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20));
    // 0x1aa868: 0xa42024
    ctx->pc = 0x1aa868u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1aa86c: 0x42080
    ctx->pc = 0x1aa86cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1aa870: 0x1445021
    ctx->pc = 0x1aa870u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1aa874: 0x0
    ctx->pc = 0x1aa874u;
    // NOP
label_1aa878:
    // 0x1aa878: 0x12a2023
    ctx->pc = 0x1aa878u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1aa87c: 0x28810011
    ctx->pc = 0x1aa87cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 17));
    // 0x1aa880: 0x1020ffe8
    ctx->pc = 0x1AA880u;
    {
        const bool branch_taken_0x1aa880 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA884u;
        SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
        if (branch_taken_0x1aa880) {
            ctx->pc = 0x1AA824u;
            goto label_1aa824;
        }
    }
    ctx->pc = 0x1AA888u;
    // 0x1aa888: 0x8d640000
    ctx->pc = 0x1aa888u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1aa88c: 0x24420010
    ctx->pc = 0x1aa88cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1aa890: 0x1843021
    ctx->pc = 0x1aa890u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1aa894: 0x0
    ctx->pc = 0x1aa894u;
    // NOP
label_1aa898:
    // 0x1aa898: 0x8cc40000
    ctx->pc = 0x1aa898u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aa89c: 0x1480ffcb
    ctx->pc = 0x1AA89Cu;
    {
        const bool branch_taken_0x1aa89c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA8A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa89c) {
            ctx->pc = 0x1AA7CCu;
            goto label_1aa7cc;
        }
    }
    ctx->pc = 0x1AA8A4u;
    // 0x1aa8a4: 0xc0552d8
    ctx->pc = 0x1AA8A4u;
    SET_GPR_U32(ctx, 31, 0x1AA8ACu);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8ACu; }
        else if (ctx->pc != 0x1AA8ACu) { ctx->pc = 0x1AA8ACu; }
    }
    if (ctx->pc != 0x1AA8ACu) { return; }
    ctx->pc = 0x1AA8ACu;
label_1aa8ac:
    // 0x1aa8ac: 0x7bbf0000
    ctx->pc = 0x1aa8acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa8b0: 0x3e00008
    ctx->pc = 0x1AA8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA8B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA7A8u: goto label_1aa7a8;
            case 0x1AA7CCu: goto label_1aa7cc;
            case 0x1AA808u: goto label_1aa808;
            case 0x1AA824u: goto label_1aa824;
            case 0x1AA878u: goto label_1aa878;
            case 0x1AA898u: goto label_1aa898;
            case 0x1AA8ACu: goto label_1aa8ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA8B8u;
}
