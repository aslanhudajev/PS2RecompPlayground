#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: vblank_servemovies
// Address: 0x2dc4d8 - 0x2dc7b0
void vblank_servemovies_0x2dc4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc4d8u;

    // 0x2dc4d8: 0x27bdffb0
    ctx->pc = 0x2dc4d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dc4dc: 0xffbf0040
    ctx->pc = 0x2dc4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2dc4e0: 0xffb30030
    ctx->pc = 0x2dc4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2dc4e4: 0xffb20020
    ctx->pc = 0x2dc4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dc4e8: 0xffb10010
    ctx->pc = 0x2dc4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dc4ec: 0xffb00000
    ctx->pc = 0x2dc4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc4f0: 0x3c10003a
    ctx->pc = 0x2dc4f0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dc4f4: 0x24020001
    ctx->pc = 0x2dc4f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc4f8: 0xae0229a0
    ctx->pc = 0x2dc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc4fc: 0xc0b86de
    ctx->pc = 0x2DC4FCu;
    SET_GPR_U32(ctx, 31, 0x2DC504u);
    ctx->pc = 0x2DC500u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2E1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x2e1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC504u; }
    }
    if (ctx->pc != 0x2DC504u) { return; }
    ctx->pc = 0x2DC504u;
    // 0x2dc504: 0x40982d
    ctx->pc = 0x2dc504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc508: 0x3c12003a
    ctx->pc = 0x2dc508u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2dc50c: 0x3c021200
    ctx->pc = 0x2dc50cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4608 << 16));
    // 0x2dc510: 0x34421000
    ctx->pc = 0x2dc510u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
    // 0x2dc514: 0xdc420000
    ctx->pc = 0x2dc514u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc518: 0x2137a
    ctx->pc = 0x2dc518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x2dc51c: 0x30420001
    ctx->pc = 0x2dc51cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2dc520: 0x2103c
    ctx->pc = 0x2dc520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2dc524: 0x2103f
    ctx->pc = 0x2dc524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2dc528: 0xae422998
    ctx->pc = 0x2dc528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10648), GPR_U32(ctx, 2));
    // 0x2dc52c: 0x24110002
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc530: 0xae1129a0
    ctx->pc = 0x2dc530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 17));
    // 0x2dc534: 0x3c02003a
    ctx->pc = 0x2dc534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc538: 0x8c42298c
    ctx->pc = 0x2dc538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10636)));
    // 0x2dc53c: 0x10400092
    ctx->pc = 0x2DC53Cu;
    {
        const bool branch_taken_0x2dc53c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC540u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc53c) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC544u;
    // 0x2dc544: 0x8c622990
    ctx->pc = 0x2dc544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10640)));
    // 0x2dc548: 0x24420001
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc54c: 0xac622990
    ctx->pc = 0x2dc54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10640), GPR_U32(ctx, 2));
    // 0x2dc550: 0x24020003
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2dc554: 0xae0229a0
    ctx->pc = 0x2dc554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc558: 0x24040001
    ctx->pc = 0x2dc558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc55c: 0xc0b8338
    ctx->pc = 0x2DC55Cu;
    SET_GPR_U32(ctx, 31, 0x2DC564u);
    ctx->pc = 0x2DC560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC564u; }
    }
    if (ctx->pc != 0x2DC564u) { return; }
    ctx->pc = 0x2DC564u;
    // 0x2dc564: 0x3c03003a
    ctx->pc = 0x2dc564u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dc568: 0xac62299c
    ctx->pc = 0x2dc568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10652), GPR_U32(ctx, 2));
    // 0x2dc56c: 0x8c62299c
    ctx->pc = 0x2dc56cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10652)));
    // 0x2dc570: 0x54400082
    ctx->pc = 0x2DC570u;
    {
        const bool branch_taken_0x2dc570 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dc570) {
            ctx->pc = 0x2DC574u;
            SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
            ctx->pc = 0x2DC77Cu;
            goto label_2dc77c;
        }
    }
    ctx->pc = 0x2DC578u;
    // 0x2dc578: 0x24020004
    ctx->pc = 0x2dc578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dc57c: 0xae0229a0
    ctx->pc = 0x2dc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc580: 0x3c02003a
    ctx->pc = 0x2dc580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc584: 0x8c4229a4
    ctx->pc = 0x2dc584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10660)));
    // 0x2dc588: 0x14510017
    ctx->pc = 0x2DC588u;
    {
        const bool branch_taken_0x2dc588 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x2DC58Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc588) {
            ctx->pc = 0x2DC5E8u;
            goto label_2dc5e8;
        }
    }
    ctx->pc = 0x2DC590u;
    // 0x2dc590: 0x8e422998
    ctx->pc = 0x2dc590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10648)));
    // 0x2dc594: 0x30420001
    ctx->pc = 0x2dc594u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2dc598: 0x10400003
    ctx->pc = 0x2DC598u;
    {
        const bool branch_taken_0x2dc598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC59Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc598) {
            ctx->pc = 0x2DC5A8u;
            goto label_2dc5a8;
        }
    }
    ctx->pc = 0x2DC5A0u;
    // 0x2dc5a0: 0x10000003
    ctx->pc = 0x2DC5A0u;
    {
        const bool branch_taken_0x2dc5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC5A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11440));
        if (branch_taken_0x2dc5a0) {
            ctx->pc = 0x2DC5B0u;
            goto label_2dc5b0;
        }
    }
    ctx->pc = 0x2DC5A8u;
label_2dc5a8:
    // 0x2dc5a8: 0x3c02003a
    ctx->pc = 0x2dc5a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc5ac: 0x24422bc0
    ctx->pc = 0x2dc5acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11200));
label_2dc5b0:
    // 0x2dc5b0: 0x3c030fff
    ctx->pc = 0x2dc5b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4095 << 16));
    // 0x2dc5b4: 0x3463ffff
    ctx->pc = 0x2dc5b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2dc5b8: 0x432024
    ctx->pc = 0x2dc5b8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc5bc: 0x3c022000
    ctx->pc = 0x2dc5bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2dc5c0: 0x822025
    ctx->pc = 0x2dc5c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dc5c4: 0x3c02003a
    ctx->pc = 0x2dc5c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc5c8: 0x8c472998
    ctx->pc = 0x2dc5c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 10648)));
    // 0x2dc5cc: 0x38e70001
    ctx->pc = 0x2dc5ccu;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 7), 1));
    // 0x2dc5d0: 0x73c00
    ctx->pc = 0x2dc5d0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x2dc5d4: 0x24050800
    ctx->pc = 0x2dc5d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2dc5d8: 0x24060800
    ctx->pc = 0x2dc5d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2dc5dc: 0xc0b84e8
    ctx->pc = 0x2DC5DCu;
    SET_GPR_U32(ctx, 31, 0x2DC5E4u);
    ctx->pc = 0x2DC5E0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    ctx->pc = 0x2E13A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetHalfOffset_0x2e13a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5E4u; }
    }
    if (ctx->pc != 0x2DC5E4u) { return; }
    ctx->pc = 0x2DC5E4u;
    // 0x2dc5e4: 0x3c04003a
    ctx->pc = 0x2dc5e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2dc5e8:
    // 0x2dc5e8: 0xc0b7a58
    ctx->pc = 0x2DC5E8u;
    SET_GPR_U32(ctx, 31, 0x2DC5F0u);
    ctx->pc = 0x2DC5ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10736));
    ctx->pc = 0x2DE960u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufGetTag_0x2de960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC5F0u; }
    }
    if (ctx->pc != 0x2DC5F0u) { return; }
    ctx->pc = 0x2DC5F0u;
    // 0x2dc5f0: 0x40882d
    ctx->pc = 0x2dc5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5f4: 0x16200006
    ctx->pc = 0x2DC5F4u;
    {
        const bool branch_taken_0x2dc5f4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DC5F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc5f4) {
            ctx->pc = 0x2DC610u;
            goto label_2dc610;
        }
    }
    ctx->pc = 0x2DC5FCu;
    // 0x2dc5fc: 0x3c03003a
    ctx->pc = 0x2dc5fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dc600: 0x8c622b54
    ctx->pc = 0x2dc600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 11092)));
    // 0x2dc604: 0x24420001
    ctx->pc = 0x2dc604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc608: 0x10000061
    ctx->pc = 0x2DC608u;
    {
        const bool branch_taken_0x2dc608 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC60Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 11092), GPR_U32(ctx, 2));
        if (branch_taken_0x2dc608) {
            ctx->pc = 0x2DC790u;
            goto label_2dc790;
        }
    }
    ctx->pc = 0x2DC610u;
label_2dc610:
    // 0x2dc610: 0x24020005
    ctx->pc = 0x2dc610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc614: 0xac6229a0
    ctx->pc = 0x2dc614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10656), GPR_U32(ctx, 2));
    // 0x2dc618: 0x3c02003a
    ctx->pc = 0x2dc618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc61c: 0x8c4329a4
    ctx->pc = 0x2dc61cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10660)));
    // 0x2dc620: 0x24020001
    ctx->pc = 0x2dc620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc624: 0x14620017
    ctx->pc = 0x2DC624u;
    {
        const bool branch_taken_0x2dc624 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DC628u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc624) {
            ctx->pc = 0x2DC684u;
            goto label_2dc684;
        }
    }
    ctx->pc = 0x2DC62Cu;
    // 0x2dc62c: 0x8c422998
    ctx->pc = 0x2dc62cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10648)));
    // 0x2dc630: 0x30420001
    ctx->pc = 0x2dc630u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2dc634: 0x10400003
    ctx->pc = 0x2DC634u;
    {
        const bool branch_taken_0x2dc634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC638u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc634) {
            ctx->pc = 0x2DC644u;
            goto label_2dc644;
        }
    }
    ctx->pc = 0x2DC63Cu;
    // 0x2dc63c: 0x10000003
    ctx->pc = 0x2DC63Cu;
    {
        const bool branch_taken_0x2dc63c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC640u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11440));
        if (branch_taken_0x2dc63c) {
            ctx->pc = 0x2DC64Cu;
            goto label_2dc64c;
        }
    }
    ctx->pc = 0x2DC644u;
label_2dc644:
    // 0x2dc644: 0x3c02003a
    ctx->pc = 0x2dc644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc648: 0x24422bc0
    ctx->pc = 0x2dc648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11200));
label_2dc64c:
    // 0x2dc64c: 0x3c030fff
    ctx->pc = 0x2dc64cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4095 << 16));
    // 0x2dc650: 0x3463ffff
    ctx->pc = 0x2dc650u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2dc654: 0x432024
    ctx->pc = 0x2dc654u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc658: 0x3c022000
    ctx->pc = 0x2dc658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2dc65c: 0x822025
    ctx->pc = 0x2dc65cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dc660: 0x3c02003a
    ctx->pc = 0x2dc660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc664: 0x8c472998
    ctx->pc = 0x2dc664u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 10648)));
    // 0x2dc668: 0x38e70001
    ctx->pc = 0x2dc668u;
    SET_GPR_U32(ctx, 7, XOR32(GPR_U32(ctx, 7), 1));
    // 0x2dc66c: 0x73c00
    ctx->pc = 0x2dc66cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x2dc670: 0x24050800
    ctx->pc = 0x2dc670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2dc674: 0x24060800
    ctx->pc = 0x2dc674u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2dc678: 0xc0b84e8
    ctx->pc = 0x2DC678u;
    SET_GPR_U32(ctx, 31, 0x2DC680u);
    ctx->pc = 0x2DC67Cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    ctx->pc = 0x2E13A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetHalfOffset_0x2e13a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC680u; }
    }
    if (ctx->pc != 0x2DC680u) { return; }
    ctx->pc = 0x2DC680u;
    // 0x2dc680: 0x3c02003a
    ctx->pc = 0x2dc680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2dc684:
    // 0x2dc684: 0x8c422998
    ctx->pc = 0x2dc684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10648)));
    // 0x2dc688: 0x1440001b
    ctx->pc = 0x2DC688u;
    {
        const bool branch_taken_0x2dc688 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DC68Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc688) {
            ctx->pc = 0x2DC6F8u;
            goto label_2dc6f8;
        }
    }
    ctx->pc = 0x2DC690u;
    // 0x2dc690: 0x8e230000
    ctx->pc = 0x2dc690u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc694: 0x24020002
    ctx->pc = 0x2dc694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dc698: 0x14620017
    ctx->pc = 0x2DC698u;
    {
        const bool branch_taken_0x2dc698 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DC69Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc698) {
            ctx->pc = 0x2DC6F8u;
            goto label_2dc6f8;
        }
    }
    ctx->pc = 0x2DC6A0u;
    // 0x2dc6a0: 0x3c10003a
    ctx->pc = 0x2dc6a0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dc6a4: 0x24020006
    ctx->pc = 0x2dc6a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dc6a8: 0xae0229a0
    ctx->pc = 0x2dc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc6ac: 0x3c04003a
    ctx->pc = 0x2dc6acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dc6b0: 0x24842b60
    ctx->pc = 0x2dc6b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11104));
    // 0x2dc6b4: 0xc0b82fa
    ctx->pc = 0x2DC6B4u;
    SET_GPR_U32(ctx, 31, 0x2DC6BCu);
    ctx->pc = 0x2DC6B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x2e0be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6BCu; }
    }
    if (ctx->pc != 0x2DC6BCu) { return; }
    ctx->pc = 0x2DC6BCu;
    // 0x2dc6bc: 0x24020007
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc6c0: 0xae0229a0
    ctx->pc = 0x2dc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc6c4: 0x202d
    ctx->pc = 0x2dc6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6c8: 0xc0b8338
    ctx->pc = 0x2DC6C8u;
    SET_GPR_U32(ctx, 31, 0x2DC6D0u);
    ctx->pc = 0x2DC6CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6D0u; }
    }
    if (ctx->pc != 0x2DC6D0u) { return; }
    ctx->pc = 0x2DC6D0u;
    // 0x2dc6d0: 0x24020008
    ctx->pc = 0x2dc6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dc6d4: 0xae0229a0
    ctx->pc = 0x2dc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc6d8: 0x260202d
    ctx->pc = 0x2dc6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6dc: 0xc0b87b2
    ctx->pc = 0x2DC6DCu;
    SET_GPR_U32(ctx, 31, 0x2DC6E4u);
    ctx->pc = 0x2DC6E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x2E1EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x2e1ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC6E4u; }
    }
    if (ctx->pc != 0x2DC6E4u) { return; }
    ctx->pc = 0x2DC6E4u;
    // 0x2dc6e4: 0x24020009
    ctx->pc = 0x2dc6e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x2dc6e8: 0xae0229a0
    ctx->pc = 0x2dc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc6ec: 0x24020001
    ctx->pc = 0x2dc6ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc6f0: 0x10000025
    ctx->pc = 0x2DC6F0u;
    {
        const bool branch_taken_0x2dc6f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC6F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2dc6f0) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC6F8u;
label_2dc6f8:
    // 0x2dc6f8: 0x8c432998
    ctx->pc = 0x2dc6f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10648)));
    // 0x2dc6fc: 0x24020001
    ctx->pc = 0x2dc6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc700: 0x14620022
    ctx->pc = 0x2DC700u;
    {
        const bool branch_taken_0x2dc700 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2DC704u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc700) {
            ctx->pc = 0x2DC78Cu;
            goto label_2dc78c;
        }
    }
    ctx->pc = 0x2DC708u;
    // 0x2dc708: 0x8e320000
    ctx->pc = 0x2dc708u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc70c: 0x56430020
    ctx->pc = 0x2DC70Cu;
    {
        const bool branch_taken_0x2dc70c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 3));
        if (branch_taken_0x2dc70c) {
            ctx->pc = 0x2DC710u;
            WRITE32(ADD32(GPR_U32(ctx, 2), 10656), GPR_U32(ctx, 0));
            ctx->pc = 0x2DC790u;
            goto label_2dc790;
        }
    }
    ctx->pc = 0x2DC714u;
    // 0x2dc714: 0x3c10003a
    ctx->pc = 0x2dc714u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2dc718: 0x2402000a
    ctx->pc = 0x2dc718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc71c: 0xae0229a0
    ctx->pc = 0x2dc71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc720: 0x3c04003a
    ctx->pc = 0x2dc720u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2dc724: 0x24842b60
    ctx->pc = 0x2dc724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11104));
    // 0x2dc728: 0xc0b82fa
    ctx->pc = 0x2DC728u;
    SET_GPR_U32(ctx, 31, 0x2DC730u);
    ctx->pc = 0x2DC72Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E0BE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x2e0be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC730u; }
    }
    if (ctx->pc != 0x2DC730u) { return; }
    ctx->pc = 0x2DC730u;
    // 0x2dc730: 0x2402000b
    ctx->pc = 0x2dc730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dc734: 0xae0229a0
    ctx->pc = 0x2dc734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc738: 0x202d
    ctx->pc = 0x2dc738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc73c: 0xc0b8338
    ctx->pc = 0x2DC73Cu;
    SET_GPR_U32(ctx, 31, 0x2DC744u);
    ctx->pc = 0x2DC740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC744u; }
    }
    if (ctx->pc != 0x2DC744u) { return; }
    ctx->pc = 0x2DC744u;
    // 0x2dc744: 0x2402000c
    ctx->pc = 0x2dc744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc748: 0xae0229a0
    ctx->pc = 0x2dc748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc74c: 0x3c050001
    ctx->pc = 0x2dc74cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    // 0x2dc750: 0x34a5c940
    ctx->pc = 0x2dc750u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 51520));
    // 0x2dc754: 0x260202d
    ctx->pc = 0x2dc754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc758: 0xc0b87b2
    ctx->pc = 0x2DC758u;
    SET_GPR_U32(ctx, 31, 0x2DC760u);
    ctx->pc = 0x2DC75Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->pc = 0x2E1EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x2e1ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC760u; }
    }
    if (ctx->pc != 0x2DC760u) { return; }
    ctx->pc = 0x2DC760u;
    // 0x2dc760: 0x2402000d
    ctx->pc = 0x2dc760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2dc764: 0xae0229a0
    ctx->pc = 0x2dc764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10656), GPR_U32(ctx, 2));
    // 0x2dc768: 0xae200000
    ctx->pc = 0x2dc768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2dc76c: 0x3c02003a
    ctx->pc = 0x2dc76cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dc770: 0xac522994
    ctx->pc = 0x2dc770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10644), GPR_U32(ctx, 18));
    // 0x2dc774: 0x10000005
    ctx->pc = 0x2DC774u;
    {
        const bool branch_taken_0x2dc774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC778u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dc774) {
            ctx->pc = 0x2DC78Cu;
            goto label_2dc78c;
        }
    }
    ctx->pc = 0x2DC77Cu;
label_2dc77c:
    // 0x2dc77c: 0x8c622b54
    ctx->pc = 0x2dc77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 11092)));
    // 0x2dc780: 0x2442000a
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10));
    // 0x2dc784: 0xac622b54
    ctx->pc = 0x2dc784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11092), GPR_U32(ctx, 2));
label_2dc788:
    // 0x2dc788: 0x3c02003a
    ctx->pc = 0x2dc788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2dc78c:
    // 0x2dc78c: 0xac4029a0
    ctx->pc = 0x2dc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10656), GPR_U32(ctx, 0));
label_2dc790:
    // 0x2dc790: 0x102d
    ctx->pc = 0x2dc790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc794: 0xdfbf0040
    ctx->pc = 0x2dc794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc798: 0xdfb30030
    ctx->pc = 0x2dc798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc79c: 0xdfb20020
    ctx->pc = 0x2dc79cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc7a0: 0xdfb10010
    ctx->pc = 0x2dc7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc7a4: 0xdfb00000
    ctx->pc = 0x2dc7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc7a8: 0x3e00008
    ctx->pc = 0x2DC7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC7ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DC5A8u: goto label_2dc5a8;
            case 0x2DC5B0u: goto label_2dc5b0;
            case 0x2DC5E8u: goto label_2dc5e8;
            case 0x2DC610u: goto label_2dc610;
            case 0x2DC644u: goto label_2dc644;
            case 0x2DC64Cu: goto label_2dc64c;
            case 0x2DC684u: goto label_2dc684;
            case 0x2DC6F8u: goto label_2dc6f8;
            case 0x2DC77Cu: goto label_2dc77c;
            case 0x2DC788u: goto label_2dc788;
            case 0x2DC78Cu: goto label_2dc78c;
            case 0x2DC790u: goto label_2dc790;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DC7B0u;
}
