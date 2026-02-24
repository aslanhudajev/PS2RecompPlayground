#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _doMC
// Address: 0x121828 - 0x1219b4
void _doMC_0x121828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x121828u;

label_121828:
    // 0x121828: 0x27bdff90
    ctx->pc = 0x121828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_12182c:
    // 0x12182c: 0x24020140
    ctx->pc = 0x12182cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
label_121830:
    // 0x121830: 0xffb40040
    ctx->pc = 0x121830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_121834:
    // 0x121834: 0x80a02d
    ctx->pc = 0x121834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121838:
    // 0x121838: 0xffb50050
    ctx->pc = 0x121838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_12183c:
    // 0x12183c: 0x2822818
    ctx->pc = 0x12183cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
label_121840:
    // 0x121840: 0x3c150017
    ctx->pc = 0x121840u;
    SET_GPR_S32(ctx, 21, ((uint32_t)23 << 16));
label_121844:
    // 0x121844: 0xffbf0060
    ctx->pc = 0x121844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_121848:
    // 0x121848: 0x26a41df8
    ctx->pc = 0x121848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 7672));
label_12184c:
    // 0x12184c: 0xffb30030
    ctx->pc = 0x12184cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_121850:
    // 0x121850: 0xffb20020
    ctx->pc = 0x121850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_121854:
    // 0x121854: 0xffb10010
    ctx->pc = 0x121854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_121858:
    // 0x121858: 0x851021
    ctx->pc = 0x121858u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_12185c:
    // 0x12185c: 0xffb00000
    ctx->pc = 0x12185cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_121860:
    // 0x121860: 0x8c430138
    ctx->pc = 0x121860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_121864:
    // 0x121864: 0x10600018
label_121868:
    if (ctx->pc == 0x121868u) {
        ctx->pc = 0x121868u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 300));
        ctx->pc = 0x12186Cu;
        goto label_12186c;
    }
    ctx->pc = 0x121864u;
    {
        const bool branch_taken_0x121864 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x121868u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 300));
        if (branch_taken_0x121864) {
            ctx->pc = 0x1218C8u;
            goto label_1218c8;
        }
    }
    ctx->pc = 0x12186Cu;
label_12186c:
    // 0x12186c: 0xa33021
    ctx->pc = 0x12186cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_121870:
    // 0x121870: 0x8cc20000
    ctx->pc = 0x121870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_121874:
    // 0x121874: 0x18400014
label_121878:
    if (ctx->pc == 0x121878u) {
        ctx->pc = 0x121878u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12187Cu;
        goto label_12187c;
    }
    ctx->pc = 0x121874u;
    {
        const bool branch_taken_0x121874 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x121878u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x121874) {
            ctx->pc = 0x1218C8u;
            goto label_1218c8;
        }
    }
    ctx->pc = 0x12187Cu;
label_12187c:
    // 0x12187c: 0x24a20048
    ctx->pc = 0x12187cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 72));
label_121880:
    // 0x121880: 0x24830038
    ctx->pc = 0x121880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 56));
label_121884:
    // 0x121884: 0x448821
    ctx->pc = 0x121884u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_121888:
    // 0x121888: 0xc0982d
    ctx->pc = 0x121888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12188c:
    // 0x12188c: 0xa38021
    ctx->pc = 0x12188cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_121890:
    // 0x121890: 0x8e02fff0
    ctx->pc = 0x121890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_121894:
    // 0x121894: 0x0
    ctx->pc = 0x121894u;
    // NOP
label_121898:
    // 0x121898: 0x220202d
    ctx->pc = 0x121898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12189c:
    // 0x12189c: 0x40f809
label_1218a0:
    if (ctx->pc == 0x1218A0u) {
        ctx->pc = 0x1218A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x1218A4u;
        goto label_1218a4;
    }
    ctx->pc = 0x12189Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1218A4u);
        ctx->pc = 0x1218A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121828u: goto label_121828;
            case 0x12182Cu: goto label_12182c;
            case 0x121830u: goto label_121830;
            case 0x121834u: goto label_121834;
            case 0x121838u: goto label_121838;
            case 0x12183Cu: goto label_12183c;
            case 0x121840u: goto label_121840;
            case 0x121844u: goto label_121844;
            case 0x121848u: goto label_121848;
            case 0x12184Cu: goto label_12184c;
            case 0x121850u: goto label_121850;
            case 0x121854u: goto label_121854;
            case 0x121858u: goto label_121858;
            case 0x12185Cu: goto label_12185c;
            case 0x121860u: goto label_121860;
            case 0x121864u: goto label_121864;
            case 0x121868u: goto label_121868;
            case 0x12186Cu: goto label_12186c;
            case 0x121870u: goto label_121870;
            case 0x121874u: goto label_121874;
            case 0x121878u: goto label_121878;
            case 0x12187Cu: goto label_12187c;
            case 0x121880u: goto label_121880;
            case 0x121884u: goto label_121884;
            case 0x121888u: goto label_121888;
            case 0x12188Cu: goto label_12188c;
            case 0x121890u: goto label_121890;
            case 0x121894u: goto label_121894;
            case 0x121898u: goto label_121898;
            case 0x12189Cu: goto label_12189c;
            case 0x1218A0u: goto label_1218a0;
            case 0x1218A4u: goto label_1218a4;
            case 0x1218A8u: goto label_1218a8;
            case 0x1218ACu: goto label_1218ac;
            case 0x1218B0u: goto label_1218b0;
            case 0x1218B4u: goto label_1218b4;
            case 0x1218B8u: goto label_1218b8;
            case 0x1218BCu: goto label_1218bc;
            case 0x1218C0u: goto label_1218c0;
            case 0x1218C4u: goto label_1218c4;
            case 0x1218C8u: goto label_1218c8;
            case 0x1218CCu: goto label_1218cc;
            case 0x1218D0u: goto label_1218d0;
            case 0x1218D4u: goto label_1218d4;
            case 0x1218D8u: goto label_1218d8;
            case 0x1218DCu: goto label_1218dc;
            case 0x1218E0u: goto label_1218e0;
            case 0x1218E4u: goto label_1218e4;
            case 0x1218E8u: goto label_1218e8;
            case 0x1218ECu: goto label_1218ec;
            case 0x1218F0u: goto label_1218f0;
            case 0x1218F4u: goto label_1218f4;
            case 0x1218F8u: goto label_1218f8;
            case 0x1218FCu: goto label_1218fc;
            case 0x121900u: goto label_121900;
            case 0x121904u: goto label_121904;
            case 0x121908u: goto label_121908;
            case 0x12190Cu: goto label_12190c;
            case 0x121910u: goto label_121910;
            case 0x121914u: goto label_121914;
            case 0x121918u: goto label_121918;
            case 0x12191Cu: goto label_12191c;
            case 0x121920u: goto label_121920;
            case 0x121924u: goto label_121924;
            case 0x121928u: goto label_121928;
            case 0x12192Cu: goto label_12192c;
            case 0x121930u: goto label_121930;
            case 0x121934u: goto label_121934;
            case 0x121938u: goto label_121938;
            case 0x12193Cu: goto label_12193c;
            case 0x121940u: goto label_121940;
            case 0x121944u: goto label_121944;
            case 0x121948u: goto label_121948;
            case 0x12194Cu: goto label_12194c;
            case 0x121950u: goto label_121950;
            case 0x121954u: goto label_121954;
            case 0x121958u: goto label_121958;
            case 0x12195Cu: goto label_12195c;
            case 0x121960u: goto label_121960;
            case 0x121964u: goto label_121964;
            case 0x121968u: goto label_121968;
            case 0x12196Cu: goto label_12196c;
            case 0x121970u: goto label_121970;
            case 0x121974u: goto label_121974;
            case 0x121978u: goto label_121978;
            case 0x12197Cu: goto label_12197c;
            case 0x121980u: goto label_121980;
            case 0x121984u: goto label_121984;
            case 0x121988u: goto label_121988;
            case 0x12198Cu: goto label_12198c;
            case 0x121990u: goto label_121990;
            case 0x121994u: goto label_121994;
            case 0x121998u: goto label_121998;
            case 0x12199Cu: goto label_12199c;
            case 0x1219A0u: goto label_1219a0;
            case 0x1219A4u: goto label_1219a4;
            case 0x1219A8u: goto label_1219a8;
            case 0x1219ACu: goto label_1219ac;
            case 0x1219B0u: goto label_1219b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1218A4u; }
            if (ctx->pc != 0x1218A4u) { return; }
        }
    }
    ctx->pc = 0x1218A4u;
label_1218a4:
    // 0x1218a4: 0x8e030000
    ctx->pc = 0x1218a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1218a8:
    // 0x1218a8: 0x26240070
    ctx->pc = 0x1218a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 112));
label_1218ac:
    // 0x1218ac: 0x26100004
    ctx->pc = 0x1218acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1218b0:
    // 0x1218b0: 0x60f809
label_1218b4:
    if (ctx->pc == 0x1218B4u) {
        ctx->pc = 0x1218B4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x1218B8u;
        goto label_1218b8;
    }
    ctx->pc = 0x1218B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1218B8u);
        ctx->pc = 0x1218B4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121828u: goto label_121828;
            case 0x12182Cu: goto label_12182c;
            case 0x121830u: goto label_121830;
            case 0x121834u: goto label_121834;
            case 0x121838u: goto label_121838;
            case 0x12183Cu: goto label_12183c;
            case 0x121840u: goto label_121840;
            case 0x121844u: goto label_121844;
            case 0x121848u: goto label_121848;
            case 0x12184Cu: goto label_12184c;
            case 0x121850u: goto label_121850;
            case 0x121854u: goto label_121854;
            case 0x121858u: goto label_121858;
            case 0x12185Cu: goto label_12185c;
            case 0x121860u: goto label_121860;
            case 0x121864u: goto label_121864;
            case 0x121868u: goto label_121868;
            case 0x12186Cu: goto label_12186c;
            case 0x121870u: goto label_121870;
            case 0x121874u: goto label_121874;
            case 0x121878u: goto label_121878;
            case 0x12187Cu: goto label_12187c;
            case 0x121880u: goto label_121880;
            case 0x121884u: goto label_121884;
            case 0x121888u: goto label_121888;
            case 0x12188Cu: goto label_12188c;
            case 0x121890u: goto label_121890;
            case 0x121894u: goto label_121894;
            case 0x121898u: goto label_121898;
            case 0x12189Cu: goto label_12189c;
            case 0x1218A0u: goto label_1218a0;
            case 0x1218A4u: goto label_1218a4;
            case 0x1218A8u: goto label_1218a8;
            case 0x1218ACu: goto label_1218ac;
            case 0x1218B0u: goto label_1218b0;
            case 0x1218B4u: goto label_1218b4;
            case 0x1218B8u: goto label_1218b8;
            case 0x1218BCu: goto label_1218bc;
            case 0x1218C0u: goto label_1218c0;
            case 0x1218C4u: goto label_1218c4;
            case 0x1218C8u: goto label_1218c8;
            case 0x1218CCu: goto label_1218cc;
            case 0x1218D0u: goto label_1218d0;
            case 0x1218D4u: goto label_1218d4;
            case 0x1218D8u: goto label_1218d8;
            case 0x1218DCu: goto label_1218dc;
            case 0x1218E0u: goto label_1218e0;
            case 0x1218E4u: goto label_1218e4;
            case 0x1218E8u: goto label_1218e8;
            case 0x1218ECu: goto label_1218ec;
            case 0x1218F0u: goto label_1218f0;
            case 0x1218F4u: goto label_1218f4;
            case 0x1218F8u: goto label_1218f8;
            case 0x1218FCu: goto label_1218fc;
            case 0x121900u: goto label_121900;
            case 0x121904u: goto label_121904;
            case 0x121908u: goto label_121908;
            case 0x12190Cu: goto label_12190c;
            case 0x121910u: goto label_121910;
            case 0x121914u: goto label_121914;
            case 0x121918u: goto label_121918;
            case 0x12191Cu: goto label_12191c;
            case 0x121920u: goto label_121920;
            case 0x121924u: goto label_121924;
            case 0x121928u: goto label_121928;
            case 0x12192Cu: goto label_12192c;
            case 0x121930u: goto label_121930;
            case 0x121934u: goto label_121934;
            case 0x121938u: goto label_121938;
            case 0x12193Cu: goto label_12193c;
            case 0x121940u: goto label_121940;
            case 0x121944u: goto label_121944;
            case 0x121948u: goto label_121948;
            case 0x12194Cu: goto label_12194c;
            case 0x121950u: goto label_121950;
            case 0x121954u: goto label_121954;
            case 0x121958u: goto label_121958;
            case 0x12195Cu: goto label_12195c;
            case 0x121960u: goto label_121960;
            case 0x121964u: goto label_121964;
            case 0x121968u: goto label_121968;
            case 0x12196Cu: goto label_12196c;
            case 0x121970u: goto label_121970;
            case 0x121974u: goto label_121974;
            case 0x121978u: goto label_121978;
            case 0x12197Cu: goto label_12197c;
            case 0x121980u: goto label_121980;
            case 0x121984u: goto label_121984;
            case 0x121988u: goto label_121988;
            case 0x12198Cu: goto label_12198c;
            case 0x121990u: goto label_121990;
            case 0x121994u: goto label_121994;
            case 0x121998u: goto label_121998;
            case 0x12199Cu: goto label_12199c;
            case 0x1219A0u: goto label_1219a0;
            case 0x1219A4u: goto label_1219a4;
            case 0x1219A8u: goto label_1219a8;
            case 0x1219ACu: goto label_1219ac;
            case 0x1219B0u: goto label_1219b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1218B8u; }
            if (ctx->pc != 0x1218B8u) { return; }
        }
    }
    ctx->pc = 0x1218B8u;
label_1218b8:
    // 0x1218b8: 0x8e620000
    ctx->pc = 0x1218b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1218bc:
    // 0x1218bc: 0x242102a
    ctx->pc = 0x1218bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_1218c0:
    // 0x1218c0: 0x5440fff5
label_1218c4:
    if (ctx->pc == 0x1218C4u) {
        ctx->pc = 0x1218C4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->pc = 0x1218C8u;
        goto label_1218c8;
    }
    ctx->pc = 0x1218C0u;
    {
        const bool branch_taken_0x1218c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1218c0) {
            ctx->pc = 0x1218C4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->pc = 0x121898u;
            goto label_121898;
        }
    }
    ctx->pc = 0x1218C8u;
label_1218c8:
    // 0x1218c8: 0x24030140
    ctx->pc = 0x1218c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
label_1218cc:
    // 0x1218cc: 0x26a51df8
    ctx->pc = 0x1218ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 7672));
label_1218d0:
    // 0x1218d0: 0x2832018
    ctx->pc = 0x1218d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_1218d4:
    // 0x1218d4: 0xa41021
    ctx->pc = 0x1218d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1218d8:
    // 0x1218d8: 0x8c430130
    ctx->pc = 0x1218d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_1218dc:
    // 0x1218dc: 0x10600008
label_1218e0:
    if (ctx->pc == 0x1218E0u) {
        ctx->pc = 0x1218E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x1218E4u;
        goto label_1218e4;
    }
    ctx->pc = 0x1218DCu;
    {
        const bool branch_taken_0x1218dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1218E0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x1218dc) {
            ctx->pc = 0x121900u;
            goto label_121900;
        }
    }
    ctx->pc = 0x1218E4u;
label_1218e4:
    // 0x1218e4: 0x8c43013c
    ctx->pc = 0x1218e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_1218e8:
    // 0x1218e8: 0x10600003
label_1218ec:
    if (ctx->pc == 0x1218ECu) {
        ctx->pc = 0x1218ECu;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        ctx->pc = 0x1218F0u;
        goto label_1218f0;
    }
    ctx->pc = 0x1218E8u;
    {
        const bool branch_taken_0x1218e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1218ECu;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x1218e8) {
            ctx->pc = 0x1218F8u;
            goto label_1218f8;
        }
    }
    ctx->pc = 0x1218F0u;
label_1218f0:
    // 0x1218f0: 0xc048006
label_1218f4:
    if (ctx->pc == 0x1218F4u) {
        ctx->pc = 0x1218F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20104));
        ctx->pc = 0x1218F8u;
        goto label_1218f8;
    }
    ctx->pc = 0x1218F0u;
    SET_GPR_U32(ctx, 31, 0x1218F8u);
    ctx->pc = 0x1218F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20104));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1218F8u; }
    }
    if (ctx->pc != 0x1218F8u) { return; }
    ctx->pc = 0x1218F8u;
label_1218f8:
    // 0x1218f8: 0x24030140
    ctx->pc = 0x1218f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
label_1218fc:
    // 0x1218fc: 0x26a51df8
    ctx->pc = 0x1218fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 7672));
label_121900:
    // 0x121900: 0x2832018
    ctx->pc = 0x121900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_121904:
    // 0x121904: 0xa41021
    ctx->pc = 0x121904u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_121908:
    // 0x121908: 0x8c430130
    ctx->pc = 0x121908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_12190c:
    // 0x12190c: 0x5060000d
label_121910:
    if (ctx->pc == 0x121910u) {
        ctx->pc = 0x121910u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->pc = 0x121914u;
        goto label_121914;
    }
    ctx->pc = 0x12190Cu;
    {
        const bool branch_taken_0x12190c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x12190c) {
            ctx->pc = 0x121910u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
            ctx->pc = 0x121944u;
            goto label_121944;
        }
    }
    ctx->pc = 0x121914u;
label_121914:
    // 0x121914: 0x40182d
    ctx->pc = 0x121914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121918:
    // 0x121918: 0x8c440128
    ctx->pc = 0x121918u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_12191c:
    // 0x12191c: 0x8c650004
    ctx->pc = 0x12191cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_121920:
    // 0x121920: 0xdfbf0060
    ctx->pc = 0x121920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_121924:
    // 0x121924: 0xdfb50050
    ctx->pc = 0x121924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_121928:
    // 0x121928: 0xdfb40040
    ctx->pc = 0x121928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12192c:
    // 0x12192c: 0xdfb30030
    ctx->pc = 0x12192cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_121930:
    // 0x121930: 0xdfb20020
    ctx->pc = 0x121930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_121934:
    // 0x121934: 0xdfb10010
    ctx->pc = 0x121934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_121938:
    // 0x121938: 0xdfb00000
    ctx->pc = 0x121938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12193c:
    // 0x12193c: 0x80489ca
label_121940:
    if (ctx->pc == 0x121940u) {
        ctx->pc = 0x121940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x121944u;
        goto label_121944;
    }
    ctx->pc = 0x12193Cu;
    ctx->pc = 0x121940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x122728u;
    _copyRefImage_0x122728(rdram, ctx, runtime); return;
    ctx->pc = 0x121944u;
label_121944:
    // 0x121944: 0x5060000d
label_121948:
    if (ctx->pc == 0x121948u) {
        ctx->pc = 0x121948u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x12194Cu;
        goto label_12194c;
    }
    ctx->pc = 0x121944u;
    {
        const bool branch_taken_0x121944 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x121944) {
            ctx->pc = 0x121948u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->pc = 0x12197Cu;
            goto label_12197c;
        }
    }
    ctx->pc = 0x12194Cu;
label_12194c:
    // 0x12194c: 0x3c030017
    ctx->pc = 0x12194cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_121950:
    // 0x121950: 0x8c440128
    ctx->pc = 0x121950u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_121954:
    // 0x121954: 0x8c6517b8
    ctx->pc = 0x121954u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 6072)));
label_121958:
    // 0x121958: 0xdfbf0060
    ctx->pc = 0x121958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_12195c:
    // 0x12195c: 0xdfb50050
    ctx->pc = 0x12195cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_121960:
    // 0x121960: 0xdfb40040
    ctx->pc = 0x121960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_121964:
    // 0x121964: 0xdfb30030
    ctx->pc = 0x121964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_121968:
    // 0x121968: 0xdfb20020
    ctx->pc = 0x121968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12196c:
    // 0x12196c: 0xdfb10010
    ctx->pc = 0x12196cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_121970:
    // 0x121970: 0xdfb00000
    ctx->pc = 0x121970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121974:
    // 0x121974: 0x80489ca
label_121978:
    if (ctx->pc == 0x121978u) {
        ctx->pc = 0x121978u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x12197Cu;
        goto label_12197c;
    }
    ctx->pc = 0x121974u;
    ctx->pc = 0x121978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x122728u;
    _copyRefImage_0x122728(rdram, ctx, runtime); return;
    ctx->pc = 0x12197Cu;
label_12197c:
    // 0x12197c: 0x3c060017
    ctx->pc = 0x12197cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
label_121980:
    // 0x121980: 0x40182d
    ctx->pc = 0x121980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121984:
    // 0x121984: 0x8cc517b8
    ctx->pc = 0x121984u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 6072)));
label_121988:
    // 0x121988: 0x8c640128
    ctx->pc = 0x121988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 296)));
label_12198c:
    // 0x12198c: 0x8c460004
    ctx->pc = 0x12198cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_121990:
    // 0x121990: 0xdfbf0060
    ctx->pc = 0x121990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_121994:
    // 0x121994: 0xdfb50050
    ctx->pc = 0x121994u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_121998:
    // 0x121998: 0xdfb40040
    ctx->pc = 0x121998u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12199c:
    // 0x12199c: 0xdfb30030
    ctx->pc = 0x12199cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1219a0:
    // 0x1219a0: 0xdfb20020
    ctx->pc = 0x1219a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1219a4:
    // 0x1219a4: 0xdfb10010
    ctx->pc = 0x1219a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1219a8:
    // 0x1219a8: 0xdfb00000
    ctx->pc = 0x1219a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1219ac:
    // 0x1219ac: 0x80489b2
label_1219b0:
    if (ctx->pc == 0x1219B0u) {
        ctx->pc = 0x1219B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1219B4u;
        goto label_fallthrough_0x1219ac;
    }
    ctx->pc = 0x1219ACu;
    ctx->pc = 0x1219B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1226C8u;
    _copyAddRefImage_0x1226c8(rdram, ctx, runtime); return;
label_fallthrough_0x1219ac:
    ctx->pc = 0x1219B4u;
}
