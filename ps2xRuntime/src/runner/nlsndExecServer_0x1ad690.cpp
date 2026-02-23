#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndExecServer
// Address: 0x1ad690 - 0x1ad950
void nlsndExecServer_0x1ad690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndExecServer");


    ctx->pc = 0x1ad690u;

    // 0x1ad690: 0x27bdffc0
    ctx->pc = 0x1ad690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad694: 0x7fbf0030
    ctx->pc = 0x1ad694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ad698: 0x7fb10020
    ctx->pc = 0x1ad698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ad69c: 0x7fb00010
    ctx->pc = 0x1ad69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ad6a0: 0x8f838ab4
    ctx->pc = 0x1ad6a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x1ad6a4: 0x146000a5
    ctx->pc = 0x1AD6A4u;
    {
        const bool branch_taken_0x1ad6a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad6a4) {
            ctx->pc = 0x1AD93Cu;
            goto label_1ad93c;
        }
    }
    ctx->pc = 0x1AD6ACu;
    // 0x1ad6ac: 0x83838aac
    ctx->pc = 0x1ad6acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937260)));
    // 0x1ad6b0: 0x106000a2
    ctx->pc = 0x1AD6B0u;
    {
        const bool branch_taken_0x1ad6b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad6b0) {
            ctx->pc = 0x1AD93Cu;
            goto label_1ad93c;
        }
    }
    ctx->pc = 0x1AD6B8u;
    // 0x1ad6b8: 0x8f838abc
    ctx->pc = 0x1ad6b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937276)));
    // 0x1ad6bc: 0x8f848ab8
    ctx->pc = 0x1ad6bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad6c0: 0x1064009b
    ctx->pc = 0x1AD6C0u;
    {
        const bool branch_taken_0x1ad6c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1ad6c0) {
            ctx->pc = 0x1AD930u;
            goto label_1ad930;
        }
    }
    ctx->pc = 0x1AD6C8u;
    // 0x1ad6c8: 0x24820040
    ctx->pc = 0x1ad6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 64));
    // 0x1ad6cc: 0x431023
    ctx->pc = 0x1ad6ccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad6d0: 0x3050003f
    ctx->pc = 0x1ad6d0u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 63));
    // 0x1ad6d4: 0x320a0001
    ctx->pc = 0x1ad6d4u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 16), 1));
    // 0x1ad6d8: 0x1140006c
    ctx->pc = 0x1AD6D8u;
    {
        const bool branch_taken_0x1ad6d8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD6DCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x1ad6d8) {
            ctx->pc = 0x1AD88Cu;
            goto label_1ad88c;
        }
    }
    ctx->pc = 0x1AD6E0u;
    // 0x1ad6e0: 0xa082a
    ctx->pc = 0x1ad6e0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 10)));
    // 0x1ad6e4: 0x10200068
    ctx->pc = 0x1AD6E4u;
    {
        const bool branch_taken_0x1ad6e4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD6E8u;
        SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad6e4) {
            ctx->pc = 0x1AD888u;
            goto label_1ad888;
        }
    }
    ctx->pc = 0x1AD6ECu;
    // 0x1ad6ec: 0x29410009
    ctx->pc = 0x1ad6ecu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 10), 9));
    // 0x1ad6f0: 0x14200055
    ctx->pc = 0x1AD6F0u;
    {
        const bool branch_taken_0x1ad6f0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD6F4u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 10), 4294967288));
        if (branch_taken_0x1ad6f0) {
            ctx->pc = 0x1AD848u;
            goto label_1ad848;
        }
    }
    ctx->pc = 0x1AD6F8u;
    // 0x1ad6f8: 0x3c020030
    ctx->pc = 0x1ad6f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad6fc: 0x24485880
    ctx->pc = 0x1ad6fcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad700: 0x3c020030
    ctx->pc = 0x1ad700u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad704: 0x24465880
    ctx->pc = 0x1ad704u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad708: 0x3c020030
    ctx->pc = 0x1ad708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad70c: 0x24455880
    ctx->pc = 0x1ad70cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad710: 0x3c020030
    ctx->pc = 0x1ad710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad714: 0x24445880
    ctx->pc = 0x1ad714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad718: 0x3c020030
    ctx->pc = 0x1ad718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad71c: 0x3c0c0030
    ctx->pc = 0x1ad71cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)48 << 16));
    // 0x1ad720: 0x24435880
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad724: 0x258f5880
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 12), 22656));
    // 0x1ad728: 0x3c020030
    ctx->pc = 0x1ad728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad72c: 0x3c0c0030
    ctx->pc = 0x1ad72cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)48 << 16));
    // 0x1ad730: 0x2407ffff
    ctx->pc = 0x1ad730u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad734: 0x24425880
    ctx->pc = 0x1ad734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22656));
    // 0x1ad738: 0x258e5880
    ctx->pc = 0x1ad738u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 12), 22656));
label_1ad73c:
    // 0x1ad73c: 0x8f8d8ab8
    ctx->pc = 0x1ad73cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad740: 0x25290008
    ctx->pc = 0x1ad740u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x1ad744: 0x12b602a
    ctx->pc = 0x1ad744u;
    SET_GPR_U32(ctx, 12, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 11)));
    // 0x1ad748: 0x26100008
    ctx->pc = 0x1ad748u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ad74c: 0xd68c0
    ctx->pc = 0x1ad74cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad750: 0x10d6821
    ctx->pc = 0x1ad750u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1ad754: 0xa1a70000
    ctx->pc = 0x1ad754u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad758: 0x8f8d8ab8
    ctx->pc = 0x1ad758u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad75c: 0x25ad0001
    ctx->pc = 0x1ad75cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad760: 0x31ad003f
    ctx->pc = 0x1ad760u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad764: 0xaf8d8ab8
    ctx->pc = 0x1ad764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad768: 0x8f8d8ab8
    ctx->pc = 0x1ad768u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad76c: 0xd68c0
    ctx->pc = 0x1ad76cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad770: 0xcd6821
    ctx->pc = 0x1ad770u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1ad774: 0xa1a70000
    ctx->pc = 0x1ad774u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad778: 0x8f8d8ab8
    ctx->pc = 0x1ad778u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad77c: 0x25ad0001
    ctx->pc = 0x1ad77cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad780: 0x31ad003f
    ctx->pc = 0x1ad780u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad784: 0xaf8d8ab8
    ctx->pc = 0x1ad784u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad788: 0x8f8d8ab8
    ctx->pc = 0x1ad788u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad78c: 0xd68c0
    ctx->pc = 0x1ad78cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad790: 0xad6821
    ctx->pc = 0x1ad790u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1ad794: 0xa1a70000
    ctx->pc = 0x1ad794u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad798: 0x8f8d8ab8
    ctx->pc = 0x1ad798u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad79c: 0x25ad0001
    ctx->pc = 0x1ad79cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad7a0: 0x31ad003f
    ctx->pc = 0x1ad7a0u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad7a4: 0xaf8d8ab8
    ctx->pc = 0x1ad7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad7a8: 0x8f8d8ab8
    ctx->pc = 0x1ad7a8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad7ac: 0xd68c0
    ctx->pc = 0x1ad7acu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad7b0: 0x8d6821
    ctx->pc = 0x1ad7b0u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1ad7b4: 0xa1a70000
    ctx->pc = 0x1ad7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad7b8: 0x8f8d8ab8
    ctx->pc = 0x1ad7b8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad7bc: 0x25ad0001
    ctx->pc = 0x1ad7bcu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad7c0: 0x31ad003f
    ctx->pc = 0x1ad7c0u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad7c4: 0xaf8d8ab8
    ctx->pc = 0x1ad7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad7c8: 0x8f8d8ab8
    ctx->pc = 0x1ad7c8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad7cc: 0xd68c0
    ctx->pc = 0x1ad7ccu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad7d0: 0x6d6821
    ctx->pc = 0x1ad7d0u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1ad7d4: 0xa1a70000
    ctx->pc = 0x1ad7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad7d8: 0x8f8d8ab8
    ctx->pc = 0x1ad7d8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad7dc: 0x25ad0001
    ctx->pc = 0x1ad7dcu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad7e0: 0x31ad003f
    ctx->pc = 0x1ad7e0u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad7e4: 0xaf8d8ab8
    ctx->pc = 0x1ad7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad7e8: 0x8f8d8ab8
    ctx->pc = 0x1ad7e8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad7ec: 0xd68c0
    ctx->pc = 0x1ad7ecu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad7f0: 0x4d6821
    ctx->pc = 0x1ad7f0u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1ad7f4: 0xa1a70000
    ctx->pc = 0x1ad7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad7f8: 0x8f8d8ab8
    ctx->pc = 0x1ad7f8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad7fc: 0x25ad0001
    ctx->pc = 0x1ad7fcu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad800: 0x31ad003f
    ctx->pc = 0x1ad800u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad804: 0xaf8d8ab8
    ctx->pc = 0x1ad804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad808: 0x8f8d8ab8
    ctx->pc = 0x1ad808u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad80c: 0xd68c0
    ctx->pc = 0x1ad80cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 3));
    // 0x1ad810: 0x1ed6821
    ctx->pc = 0x1ad810u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1ad814: 0xa1a70000
    ctx->pc = 0x1ad814u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad818: 0x8f8d8ab8
    ctx->pc = 0x1ad818u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad81c: 0x25ad0001
    ctx->pc = 0x1ad81cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1ad820: 0x31ad003f
    ctx->pc = 0x1ad820u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad824: 0xaf8d8ab8
    ctx->pc = 0x1ad824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
    // 0x1ad828: 0x8f918ab8
    ctx->pc = 0x1ad828u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad82c: 0x1168c0
    ctx->pc = 0x1ad82cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 17), 3));
    // 0x1ad830: 0x1cd6821
    ctx->pc = 0x1ad830u;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1ad834: 0xa1a70000
    ctx->pc = 0x1ad834u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ad838: 0x262d0001
    ctx->pc = 0x1ad838u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ad83c: 0x31ad003f
    ctx->pc = 0x1ad83cu;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 63));
    // 0x1ad840: 0x1580ffbe
    ctx->pc = 0x1AD840u;
    {
        const bool branch_taken_0x1ad840 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD844u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 13));
        if (branch_taken_0x1ad840) {
            ctx->pc = 0x1AD73Cu;
            goto label_1ad73c;
        }
    }
    ctx->pc = 0x1AD848u;
label_1ad848:
    // 0x1ad848: 0x12a082a
    ctx->pc = 0x1ad848u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x1ad84c: 0x1020000e
    ctx->pc = 0x1AD84Cu;
    {
        const bool branch_taken_0x1ad84c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD850u;
        SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
        if (branch_taken_0x1ad84c) {
            ctx->pc = 0x1AD888u;
            goto label_1ad888;
        }
    }
    ctx->pc = 0x1AD854u;
    // 0x1ad854: 0x2405ffff
    ctx->pc = 0x1ad854u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad858: 0x24445880
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22656));
label_1ad85c:
    // 0x1ad85c: 0x8f868ab8
    ctx->pc = 0x1ad85cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937272)));
    // 0x1ad860: 0x25290001
    ctx->pc = 0x1ad860u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1ad864: 0x12a102a
    ctx->pc = 0x1ad864u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
    // 0x1ad868: 0x26100001
    ctx->pc = 0x1ad868u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ad86c: 0x618c0
    ctx->pc = 0x1ad86cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ad870: 0x831821
    ctx->pc = 0x1ad870u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ad874: 0xa0650000
    ctx->pc = 0x1ad874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ad878: 0x24c30001
    ctx->pc = 0x1ad878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ad87c: 0x3063003f
    ctx->pc = 0x1ad87cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x1ad880: 0x1440fff6
    ctx->pc = 0x1AD880u;
    {
        const bool branch_taken_0x1ad880 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD884u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937272), GPR_U32(ctx, 3));
        if (branch_taken_0x1ad880) {
            ctx->pc = 0x1AD85Cu;
            goto label_1ad85c;
        }
    }
    ctx->pc = 0x1AD888u;
label_1ad888:
    // 0x1ad888: 0x2e020010
    ctx->pc = 0x1ad888u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 16));
label_1ad88c:
    // 0x1ad88c: 0x14400002
    ctx->pc = 0x1AD88Cu;
    {
        const bool branch_taken_0x1ad88c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD890u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad88c) {
            ctx->pc = 0x1AD898u;
            goto label_1ad898;
        }
    }
    ctx->pc = 0x1AD894u;
    // 0x1ad894: 0x24110010
    ctx->pc = 0x1ad894u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 16));
label_1ad898:
    // 0x1ad898: 0x3c020030
    ctx->pc = 0x1ad898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad89c: 0x11082a
    ctx->pc = 0x1ad89cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x1ad8a0: 0x70003628
    ctx->pc = 0x1ad8a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad8a4: 0x10200012
    ctx->pc = 0x1AD8A4u;
    {
        const bool branch_taken_0x1ad8a4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD8A8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23360));
        if (branch_taken_0x1ad8a4) {
            ctx->pc = 0x1AD8F0u;
            goto label_1ad8f0;
        }
    }
    ctx->pc = 0x1AD8ACu;
    // 0x1ad8ac: 0x0
    ctx->pc = 0x1ad8acu;
    // NOP
    // 0x1ad8b0: 0x3c020030
    ctx->pc = 0x1ad8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad8b4: 0x24445880
    ctx->pc = 0x1ad8b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22656));
label_1ad8b8:
    // 0x1ad8b8: 0x8f838abc
    ctx->pc = 0x1ad8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937276)));
    // 0x1ad8bc: 0x24c60002
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x1ad8c0: 0xd1102a
    ctx->pc = 0x1ad8c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 17)));
    // 0x1ad8c4: 0x318c0
    ctx->pc = 0x1ad8c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ad8c8: 0x831821
    ctx->pc = 0x1ad8c8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ad8cc: 0x78630000
    ctx->pc = 0x1ad8ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad8d0: 0x7ca30000
    ctx->pc = 0x1ad8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1ad8d4: 0x8f838abc
    ctx->pc = 0x1ad8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937276)));
    // 0x1ad8d8: 0x24a50010
    ctx->pc = 0x1ad8d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ad8dc: 0x24630002
    ctx->pc = 0x1ad8dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ad8e0: 0x3063003f
    ctx->pc = 0x1ad8e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 63));
    // 0x1ad8e4: 0x1440fff4
    ctx->pc = 0x1AD8E4u;
    {
        const bool branch_taken_0x1ad8e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD8E8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937276), GPR_U32(ctx, 3));
        if (branch_taken_0x1ad8e4) {
            ctx->pc = 0x1AD8B8u;
            goto label_1ad8b8;
        }
    }
    ctx->pc = 0x1AD8ECu;
    // 0x1ad8ec: 0x0
    ctx->pc = 0x1ad8ecu;
    // NOP
label_1ad8f0:
    // 0x1ad8f0: 0x3c020030
    ctx->pc = 0x1ad8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad8f4: 0x24475b40
    ctx->pc = 0x1ad8f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1ad8f8: 0x3c020030
    ctx->pc = 0x1ad8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad8fc: 0x362502a0
    ctx->pc = 0x1ad8fcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 17), 672));
    // 0x1ad900: 0x1140c0
    ctx->pc = 0x1ad900u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 17), 3));
    // 0x1ad904: 0x24445af0
    ctx->pc = 0x1ad904u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad908: 0x70003628
    ctx->pc = 0x1ad908u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad90c: 0x70004e28
    ctx->pc = 0x1ad90cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad910: 0x70005628
    ctx->pc = 0x1ad910u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad914: 0x70005e28
    ctx->pc = 0x1ad914u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad918: 0xc055e72
    ctx->pc = 0x1AD918u;
    SET_GPR_U32(ctx, 31, 0x1AD920u);
    ctx->pc = 0x1AD91Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD920u; }
        else if (ctx->pc != 0x1AD920u) { ctx->pc = 0x1AD920u; }
    }
    if (ctx->pc != 0x1AD920u) { return; }
    ctx->pc = 0x1AD920u;
    // 0x1ad920: 0x2118023
    ctx->pc = 0x1ad920u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1ad924: 0x1e00ffd8
    ctx->pc = 0x1AD924u;
    {
        const bool branch_taken_0x1ad924 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1ad924) {
            ctx->pc = 0x1AD888u;
            goto label_1ad888;
        }
    }
    ctx->pc = 0x1AD92Cu;
    // 0x1ad92c: 0x0
    ctx->pc = 0x1ad92cu;
    // NOP
label_1ad930:
    // 0x1ad930: 0x8f838ab0
    ctx->pc = 0x1ad930u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x1ad934: 0x24630001
    ctx->pc = 0x1ad934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad938: 0xaf838ab0
    ctx->pc = 0x1ad938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 3));
label_1ad93c:
    // 0x1ad93c: 0x7bbf0030
    ctx->pc = 0x1ad93cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad940: 0x7bb10020
    ctx->pc = 0x1ad940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad944: 0x7bb00010
    ctx->pc = 0x1ad944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad948: 0x3e00008
    ctx->pc = 0x1AD948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD94Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD73Cu: goto label_1ad73c;
            case 0x1AD848u: goto label_1ad848;
            case 0x1AD85Cu: goto label_1ad85c;
            case 0x1AD888u: goto label_1ad888;
            case 0x1AD88Cu: goto label_1ad88c;
            case 0x1AD898u: goto label_1ad898;
            case 0x1AD8B8u: goto label_1ad8b8;
            case 0x1AD8F0u: goto label_1ad8f0;
            case 0x1AD930u: goto label_1ad930;
            case 0x1AD93Cu: goto label_1ad93c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD950u;
}
