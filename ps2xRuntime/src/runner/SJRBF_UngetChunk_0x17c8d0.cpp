#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_UngetChunk
// Address: 0x17c8d0 - 0x17ca30
void SJRBF_UngetChunk_0x17c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_UngetChunk");


    ctx->pc = 0x17c8d0u;

label_17c8d0:
    // 0x17c8d0: 0x27bdffc0
    ctx->pc = 0x17c8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17c8d4:
    // 0x17c8d4: 0xffb20020
    ctx->pc = 0x17c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17c8d8:
    // 0x17c8d8: 0xffb10010
    ctx->pc = 0x17c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17c8dc:
    // 0x17c8dc: 0xa0902d
    ctx->pc = 0x17c8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17c8e0:
    // 0x17c8e0: 0xffb00000
    ctx->pc = 0x17c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17c8e4:
    // 0x17c8e4: 0xc0882d
    ctx->pc = 0x17c8e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17c8e8:
    // 0x17c8e8: 0xffbf0030
    ctx->pc = 0x17c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17c8ec:
    // 0x17c8ec: 0x8e220004
    ctx->pc = 0x17c8ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c8f0:
    // 0x17c8f0: 0x18400049
label_17c8f4:
    if (ctx->pc == 0x17C8F4u) {
        ctx->pc = 0x17C8F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17C8F8u;
        goto label_17c8f8;
    }
    ctx->pc = 0x17C8F0u;
    {
        const bool branch_taken_0x17c8f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17C8F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17c8f0) {
            ctx->pc = 0x17CA18u;
            goto label_17ca18;
        }
    }
    ctx->pc = 0x17C8F8u;
label_17c8f8:
    // 0x17c8f8: 0x8e220000
    ctx->pc = 0x17c8f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17c8fc:
    // 0x17c8fc: 0x10400047
label_17c900:
    if (ctx->pc == 0x17C900u) {
        ctx->pc = 0x17C900u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C904u;
        goto label_17c904;
    }
    ctx->pc = 0x17C8FCu;
    {
        const bool branch_taken_0x17c8fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C900u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c8fc) {
            ctx->pc = 0x17CA1Cu;
            goto label_17ca1c;
        }
    }
    ctx->pc = 0x17C904u;
label_17c904:
    // 0x17c904: 0xc05efbc
label_17c908:
    if (ctx->pc == 0x17C908u) {
        ctx->pc = 0x17C90Cu;
        goto label_17c90c;
    }
    ctx->pc = 0x17C904u;
    SET_GPR_U32(ctx, 31, 0x17C90Cu);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C90Cu; }
        else if (ctx->pc != 0x17C90Cu) { ctx->pc = 0x17C90Cu; }
    }
    if (ctx->pc != 0x17C90Cu) { return; }
    ctx->pc = 0x17C90Cu;
label_17c90c:
    // 0x17c90c: 0x16400017
label_17c910:
    if (ctx->pc == 0x17C910u) {
        ctx->pc = 0x17C910u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17C914u;
        goto label_17c914;
    }
    ctx->pc = 0x17C90Cu;
    {
        const bool branch_taken_0x17c90c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C910u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17c90c) {
            ctx->pc = 0x17C96Cu;
            goto label_17c96c;
        }
    }
    ctx->pc = 0x17C914u;
label_17c914:
    // 0x17c914: 0x8e020020
    ctx->pc = 0x17c914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c918:
    // 0x17c918: 0x8e030014
    ctx->pc = 0x17c918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17c91c:
    // 0x17c91c: 0x50400001
label_17c920:
    if (ctx->pc == 0x17C920u) {
        ctx->pc = 0x17C920u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x17C924u;
        goto label_17c924;
    }
    ctx->pc = 0x17C91Cu;
    {
        const bool branch_taken_0x17c91c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c91c) {
            ctx->pc = 0x17C920u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17C924u;
            goto label_17c924;
        }
    }
    ctx->pc = 0x17C924u;
label_17c924:
    // 0x17c924: 0x8e250004
    ctx->pc = 0x17c924u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c928:
    // 0x17c928: 0x621821
    ctx->pc = 0x17c928u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17c92c:
    // 0x17c92c: 0x8e240000
    ctx->pc = 0x17c92cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17c930:
    // 0x17c930: 0x651823
    ctx->pc = 0x17c930u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17c934:
    // 0x17c934: 0x8e06001c
    ctx->pc = 0x17c934u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17c938:
    // 0x17c938: 0x62001a
    ctx->pc = 0x17c938u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17c93c:
    // 0x17c93c: 0x862023
    ctx->pc = 0x17c93cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17c940:
    // 0x17c940: 0x3810
    ctx->pc = 0x17c940u;
    SET_GPR_U32(ctx, 7, ctx->hi);
label_17c944:
    // 0x17c944: 0x82001a
    ctx->pc = 0x17c944u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17c948:
    // 0x17c948: 0x1810
    ctx->pc = 0x17c948u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_17c94c:
    // 0x17c94c: 0x54e3001f
label_17c950:
    if (ctx->pc == 0x17C950u) {
        ctx->pc = 0x17C950u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x17C954u;
        goto label_17c954;
    }
    ctx->pc = 0x17C94Cu;
    {
        const bool branch_taken_0x17c94c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        if (branch_taken_0x17c94c) {
            ctx->pc = 0x17C950u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x17C9CCu;
            goto label_17c9cc;
        }
    }
    ctx->pc = 0x17C954u;
label_17c954:
    // 0x17c954: 0xae070014
    ctx->pc = 0x17c954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_17c958:
    // 0x17c958: 0x8e020010
    ctx->pc = 0x17c958u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17c95c:
    // 0x17c95c: 0x8e230004
    ctx->pc = 0x17c95cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c960:
    // 0x17c960: 0x431021
    ctx->pc = 0x17c960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c964:
    // 0x17c964: 0x10000026
label_17c968:
    if (ctx->pc == 0x17C968u) {
        ctx->pc = 0x17C968u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x17C96Cu;
        goto label_17c96c;
    }
    ctx->pc = 0x17C964u;
    {
        const bool branch_taken_0x17c964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C968u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x17c964) {
            ctx->pc = 0x17CA00u;
            goto label_17ca00;
        }
    }
    ctx->pc = 0x17C96Cu;
label_17c96c:
    // 0x17c96c: 0x5642001e
label_17c970:
    if (ctx->pc == 0x17C970u) {
        ctx->pc = 0x17C970u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x17C974u;
        goto label_17c974;
    }
    ctx->pc = 0x17C96Cu;
    {
        const bool branch_taken_0x17c96c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x17c96c) {
            ctx->pc = 0x17C970u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x17C9E8u;
            goto label_17c9e8;
        }
    }
    ctx->pc = 0x17C974u;
label_17c974:
    // 0x17c974: 0x8e020020
    ctx->pc = 0x17c974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_17c978:
    // 0x17c978: 0x8e030018
    ctx->pc = 0x17c978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_17c97c:
    // 0x17c97c: 0x50400001
label_17c980:
    if (ctx->pc == 0x17C980u) {
        ctx->pc = 0x17C980u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x17C984u;
        goto label_17c984;
    }
    ctx->pc = 0x17C97Cu;
    {
        const bool branch_taken_0x17c97c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c97c) {
            ctx->pc = 0x17C980u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x17C984u;
            goto label_17c984;
        }
    }
    ctx->pc = 0x17C984u;
label_17c984:
    // 0x17c984: 0x8e250004
    ctx->pc = 0x17c984u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c988:
    // 0x17c988: 0x621821
    ctx->pc = 0x17c988u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17c98c:
    // 0x17c98c: 0x8e240000
    ctx->pc = 0x17c98cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17c990:
    // 0x17c990: 0x651823
    ctx->pc = 0x17c990u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17c994:
    // 0x17c994: 0x8e06001c
    ctx->pc = 0x17c994u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_17c998:
    // 0x17c998: 0x62001a
    ctx->pc = 0x17c998u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17c99c:
    // 0x17c99c: 0x862023
    ctx->pc = 0x17c99cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17c9a0:
    // 0x17c9a0: 0x2810
    ctx->pc = 0x17c9a0u;
    SET_GPR_U32(ctx, 5, ctx->hi);
label_17c9a4:
    // 0x17c9a4: 0x82001a
    ctx->pc = 0x17c9a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_17c9a8:
    // 0x17c9a8: 0x1810
    ctx->pc = 0x17c9a8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_17c9ac:
    // 0x17c9ac: 0x54a30007
label_17c9b0:
    if (ctx->pc == 0x17C9B0u) {
        ctx->pc = 0x17C9B0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x17C9B4u;
        goto label_17c9b4;
    }
    ctx->pc = 0x17C9ACu;
    {
        const bool branch_taken_0x17c9ac = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x17c9ac) {
            ctx->pc = 0x17C9B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->pc = 0x17C9CCu;
            goto label_17c9cc;
        }
    }
    ctx->pc = 0x17C9B4u;
label_17c9b4:
    // 0x17c9b4: 0xae050018
    ctx->pc = 0x17c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_17c9b8:
    // 0x17c9b8: 0x8e02000c
    ctx->pc = 0x17c9b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17c9bc:
    // 0x17c9bc: 0x8e230004
    ctx->pc = 0x17c9bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17c9c0:
    // 0x17c9c0: 0x431021
    ctx->pc = 0x17c9c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17c9c4:
    // 0x17c9c4: 0x1000000e
label_17c9c8:
    if (ctx->pc == 0x17C9C8u) {
        ctx->pc = 0x17C9C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x17C9CCu;
        goto label_17c9cc;
    }
    ctx->pc = 0x17C9C4u;
    {
        const bool branch_taken_0x17c9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C9C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17c9c4) {
            ctx->pc = 0x17CA00u;
            goto label_17ca00;
        }
    }
    ctx->pc = 0x17C9CCu;
label_17c9cc:
    // 0x17c9cc: 0x1040000d
label_17c9d0:
    if (ctx->pc == 0x17C9D0u) {
        ctx->pc = 0x17C9D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C9D4u;
        goto label_17c9d4;
    }
    ctx->pc = 0x17C9CCu;
    {
        const bool branch_taken_0x17c9cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C9D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c9cc) {
            ctx->pc = 0x17CA04u;
            goto label_17ca04;
        }
    }
    ctx->pc = 0x17C9D4u;
label_17c9d4:
    // 0x17c9d4: 0x8e04002c
    ctx->pc = 0x17c9d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17c9d8:
    // 0x17c9d8: 0x40f809
label_17c9dc:
    if (ctx->pc == 0x17C9DCu) {
        ctx->pc = 0x17C9DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17C9E0u;
        goto label_17c9e0;
    }
    ctx->pc = 0x17C9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17C9E0u);
        ctx->pc = 0x17C9DCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C8D0u: goto label_17c8d0;
            case 0x17C8D4u: goto label_17c8d4;
            case 0x17C8D8u: goto label_17c8d8;
            case 0x17C8DCu: goto label_17c8dc;
            case 0x17C8E0u: goto label_17c8e0;
            case 0x17C8E4u: goto label_17c8e4;
            case 0x17C8E8u: goto label_17c8e8;
            case 0x17C8ECu: goto label_17c8ec;
            case 0x17C8F0u: goto label_17c8f0;
            case 0x17C8F4u: goto label_17c8f4;
            case 0x17C8F8u: goto label_17c8f8;
            case 0x17C8FCu: goto label_17c8fc;
            case 0x17C900u: goto label_17c900;
            case 0x17C904u: goto label_17c904;
            case 0x17C908u: goto label_17c908;
            case 0x17C90Cu: goto label_17c90c;
            case 0x17C910u: goto label_17c910;
            case 0x17C914u: goto label_17c914;
            case 0x17C918u: goto label_17c918;
            case 0x17C91Cu: goto label_17c91c;
            case 0x17C920u: goto label_17c920;
            case 0x17C924u: goto label_17c924;
            case 0x17C928u: goto label_17c928;
            case 0x17C92Cu: goto label_17c92c;
            case 0x17C930u: goto label_17c930;
            case 0x17C934u: goto label_17c934;
            case 0x17C938u: goto label_17c938;
            case 0x17C93Cu: goto label_17c93c;
            case 0x17C940u: goto label_17c940;
            case 0x17C944u: goto label_17c944;
            case 0x17C948u: goto label_17c948;
            case 0x17C94Cu: goto label_17c94c;
            case 0x17C950u: goto label_17c950;
            case 0x17C954u: goto label_17c954;
            case 0x17C958u: goto label_17c958;
            case 0x17C95Cu: goto label_17c95c;
            case 0x17C960u: goto label_17c960;
            case 0x17C964u: goto label_17c964;
            case 0x17C968u: goto label_17c968;
            case 0x17C96Cu: goto label_17c96c;
            case 0x17C970u: goto label_17c970;
            case 0x17C974u: goto label_17c974;
            case 0x17C978u: goto label_17c978;
            case 0x17C97Cu: goto label_17c97c;
            case 0x17C980u: goto label_17c980;
            case 0x17C984u: goto label_17c984;
            case 0x17C988u: goto label_17c988;
            case 0x17C98Cu: goto label_17c98c;
            case 0x17C990u: goto label_17c990;
            case 0x17C994u: goto label_17c994;
            case 0x17C998u: goto label_17c998;
            case 0x17C99Cu: goto label_17c99c;
            case 0x17C9A0u: goto label_17c9a0;
            case 0x17C9A4u: goto label_17c9a4;
            case 0x17C9A8u: goto label_17c9a8;
            case 0x17C9ACu: goto label_17c9ac;
            case 0x17C9B0u: goto label_17c9b0;
            case 0x17C9B4u: goto label_17c9b4;
            case 0x17C9B8u: goto label_17c9b8;
            case 0x17C9BCu: goto label_17c9bc;
            case 0x17C9C0u: goto label_17c9c0;
            case 0x17C9C4u: goto label_17c9c4;
            case 0x17C9C8u: goto label_17c9c8;
            case 0x17C9CCu: goto label_17c9cc;
            case 0x17C9D0u: goto label_17c9d0;
            case 0x17C9D4u: goto label_17c9d4;
            case 0x17C9D8u: goto label_17c9d8;
            case 0x17C9DCu: goto label_17c9dc;
            case 0x17C9E0u: goto label_17c9e0;
            case 0x17C9E4u: goto label_17c9e4;
            case 0x17C9E8u: goto label_17c9e8;
            case 0x17C9ECu: goto label_17c9ec;
            case 0x17C9F0u: goto label_17c9f0;
            case 0x17C9F4u: goto label_17c9f4;
            case 0x17C9F8u: goto label_17c9f8;
            case 0x17C9FCu: goto label_17c9fc;
            case 0x17CA00u: goto label_17ca00;
            case 0x17CA04u: goto label_17ca04;
            case 0x17CA08u: goto label_17ca08;
            case 0x17CA0Cu: goto label_17ca0c;
            case 0x17CA10u: goto label_17ca10;
            case 0x17CA14u: goto label_17ca14;
            case 0x17CA18u: goto label_17ca18;
            case 0x17CA1Cu: goto label_17ca1c;
            case 0x17CA20u: goto label_17ca20;
            case 0x17CA24u: goto label_17ca24;
            case 0x17CA28u: goto label_17ca28;
            case 0x17CA2Cu: goto label_17ca2c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17C9E0u; }
            if (ctx->pc != 0x17C9E0u) { return; }
        }
    }
    ctx->pc = 0x17C9E0u;
label_17c9e0:
    // 0x17c9e0: 0x10000008
label_17c9e4:
    if (ctx->pc == 0x17C9E4u) {
        ctx->pc = 0x17C9E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17C9E8u;
        goto label_17c9e8;
    }
    ctx->pc = 0x17C9E0u;
    {
        const bool branch_taken_0x17c9e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C9E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17c9e0) {
            ctx->pc = 0x17CA04u;
            goto label_17ca04;
        }
    }
    ctx->pc = 0x17C9E8u;
label_17c9e8:
    // 0x17c9e8: 0xae200000
    ctx->pc = 0x17c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17c9ec:
    // 0x17c9ec: 0x10400004
label_17c9f0:
    if (ctx->pc == 0x17C9F0u) {
        ctx->pc = 0x17C9F0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x17C9F4u;
        goto label_17c9f4;
    }
    ctx->pc = 0x17C9ECu;
    {
        const bool branch_taken_0x17c9ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17C9F0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x17c9ec) {
            ctx->pc = 0x17CA00u;
            goto label_17ca00;
        }
    }
    ctx->pc = 0x17C9F4u;
label_17c9f4:
    // 0x17c9f4: 0x8e04002c
    ctx->pc = 0x17c9f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17c9f8:
    // 0x17c9f8: 0x40f809
label_17c9fc:
    if (ctx->pc == 0x17C9FCu) {
        ctx->pc = 0x17C9FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17CA00u;
        goto label_17ca00;
    }
    ctx->pc = 0x17C9F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17CA00u);
        ctx->pc = 0x17C9FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C8D0u: goto label_17c8d0;
            case 0x17C8D4u: goto label_17c8d4;
            case 0x17C8D8u: goto label_17c8d8;
            case 0x17C8DCu: goto label_17c8dc;
            case 0x17C8E0u: goto label_17c8e0;
            case 0x17C8E4u: goto label_17c8e4;
            case 0x17C8E8u: goto label_17c8e8;
            case 0x17C8ECu: goto label_17c8ec;
            case 0x17C8F0u: goto label_17c8f0;
            case 0x17C8F4u: goto label_17c8f4;
            case 0x17C8F8u: goto label_17c8f8;
            case 0x17C8FCu: goto label_17c8fc;
            case 0x17C900u: goto label_17c900;
            case 0x17C904u: goto label_17c904;
            case 0x17C908u: goto label_17c908;
            case 0x17C90Cu: goto label_17c90c;
            case 0x17C910u: goto label_17c910;
            case 0x17C914u: goto label_17c914;
            case 0x17C918u: goto label_17c918;
            case 0x17C91Cu: goto label_17c91c;
            case 0x17C920u: goto label_17c920;
            case 0x17C924u: goto label_17c924;
            case 0x17C928u: goto label_17c928;
            case 0x17C92Cu: goto label_17c92c;
            case 0x17C930u: goto label_17c930;
            case 0x17C934u: goto label_17c934;
            case 0x17C938u: goto label_17c938;
            case 0x17C93Cu: goto label_17c93c;
            case 0x17C940u: goto label_17c940;
            case 0x17C944u: goto label_17c944;
            case 0x17C948u: goto label_17c948;
            case 0x17C94Cu: goto label_17c94c;
            case 0x17C950u: goto label_17c950;
            case 0x17C954u: goto label_17c954;
            case 0x17C958u: goto label_17c958;
            case 0x17C95Cu: goto label_17c95c;
            case 0x17C960u: goto label_17c960;
            case 0x17C964u: goto label_17c964;
            case 0x17C968u: goto label_17c968;
            case 0x17C96Cu: goto label_17c96c;
            case 0x17C970u: goto label_17c970;
            case 0x17C974u: goto label_17c974;
            case 0x17C978u: goto label_17c978;
            case 0x17C97Cu: goto label_17c97c;
            case 0x17C980u: goto label_17c980;
            case 0x17C984u: goto label_17c984;
            case 0x17C988u: goto label_17c988;
            case 0x17C98Cu: goto label_17c98c;
            case 0x17C990u: goto label_17c990;
            case 0x17C994u: goto label_17c994;
            case 0x17C998u: goto label_17c998;
            case 0x17C99Cu: goto label_17c99c;
            case 0x17C9A0u: goto label_17c9a0;
            case 0x17C9A4u: goto label_17c9a4;
            case 0x17C9A8u: goto label_17c9a8;
            case 0x17C9ACu: goto label_17c9ac;
            case 0x17C9B0u: goto label_17c9b0;
            case 0x17C9B4u: goto label_17c9b4;
            case 0x17C9B8u: goto label_17c9b8;
            case 0x17C9BCu: goto label_17c9bc;
            case 0x17C9C0u: goto label_17c9c0;
            case 0x17C9C4u: goto label_17c9c4;
            case 0x17C9C8u: goto label_17c9c8;
            case 0x17C9CCu: goto label_17c9cc;
            case 0x17C9D0u: goto label_17c9d0;
            case 0x17C9D4u: goto label_17c9d4;
            case 0x17C9D8u: goto label_17c9d8;
            case 0x17C9DCu: goto label_17c9dc;
            case 0x17C9E0u: goto label_17c9e0;
            case 0x17C9E4u: goto label_17c9e4;
            case 0x17C9E8u: goto label_17c9e8;
            case 0x17C9ECu: goto label_17c9ec;
            case 0x17C9F0u: goto label_17c9f0;
            case 0x17C9F4u: goto label_17c9f4;
            case 0x17C9F8u: goto label_17c9f8;
            case 0x17C9FCu: goto label_17c9fc;
            case 0x17CA00u: goto label_17ca00;
            case 0x17CA04u: goto label_17ca04;
            case 0x17CA08u: goto label_17ca08;
            case 0x17CA0Cu: goto label_17ca0c;
            case 0x17CA10u: goto label_17ca10;
            case 0x17CA14u: goto label_17ca14;
            case 0x17CA18u: goto label_17ca18;
            case 0x17CA1Cu: goto label_17ca1c;
            case 0x17CA20u: goto label_17ca20;
            case 0x17CA24u: goto label_17ca24;
            case 0x17CA28u: goto label_17ca28;
            case 0x17CA2Cu: goto label_17ca2c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17CA00u; }
            if (ctx->pc != 0x17CA00u) { return; }
        }
    }
    ctx->pc = 0x17CA00u;
label_17ca00:
    // 0x17ca00: 0xdfbf0030
    ctx->pc = 0x17ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17ca04:
    // 0x17ca04: 0xdfb20020
    ctx->pc = 0x17ca04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17ca08:
    // 0x17ca08: 0xdfb10010
    ctx->pc = 0x17ca08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17ca0c:
    // 0x17ca0c: 0xdfb00000
    ctx->pc = 0x17ca0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ca10:
    // 0x17ca10: 0x805efc2
label_17ca14:
    if (ctx->pc == 0x17CA14u) {
        ctx->pc = 0x17CA14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17CA18u;
        goto label_17ca18;
    }
    ctx->pc = 0x17CA10u;
    ctx->pc = 0x17CA14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17CA18u;
label_17ca18:
    // 0x17ca18: 0xdfbf0030
    ctx->pc = 0x17ca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17ca1c:
    // 0x17ca1c: 0xdfb20020
    ctx->pc = 0x17ca1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17ca20:
    // 0x17ca20: 0xdfb10010
    ctx->pc = 0x17ca20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17ca24:
    // 0x17ca24: 0xdfb00000
    ctx->pc = 0x17ca24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ca28:
    // 0x17ca28: 0x3e00008
label_17ca2c:
    if (ctx->pc == 0x17CA2Cu) {
        ctx->pc = 0x17CA2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17CA30u;
        goto label_fallthrough_0x17ca28;
    }
    ctx->pc = 0x17CA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C8D0u: goto label_17c8d0;
            case 0x17C8D4u: goto label_17c8d4;
            case 0x17C8D8u: goto label_17c8d8;
            case 0x17C8DCu: goto label_17c8dc;
            case 0x17C8E0u: goto label_17c8e0;
            case 0x17C8E4u: goto label_17c8e4;
            case 0x17C8E8u: goto label_17c8e8;
            case 0x17C8ECu: goto label_17c8ec;
            case 0x17C8F0u: goto label_17c8f0;
            case 0x17C8F4u: goto label_17c8f4;
            case 0x17C8F8u: goto label_17c8f8;
            case 0x17C8FCu: goto label_17c8fc;
            case 0x17C900u: goto label_17c900;
            case 0x17C904u: goto label_17c904;
            case 0x17C908u: goto label_17c908;
            case 0x17C90Cu: goto label_17c90c;
            case 0x17C910u: goto label_17c910;
            case 0x17C914u: goto label_17c914;
            case 0x17C918u: goto label_17c918;
            case 0x17C91Cu: goto label_17c91c;
            case 0x17C920u: goto label_17c920;
            case 0x17C924u: goto label_17c924;
            case 0x17C928u: goto label_17c928;
            case 0x17C92Cu: goto label_17c92c;
            case 0x17C930u: goto label_17c930;
            case 0x17C934u: goto label_17c934;
            case 0x17C938u: goto label_17c938;
            case 0x17C93Cu: goto label_17c93c;
            case 0x17C940u: goto label_17c940;
            case 0x17C944u: goto label_17c944;
            case 0x17C948u: goto label_17c948;
            case 0x17C94Cu: goto label_17c94c;
            case 0x17C950u: goto label_17c950;
            case 0x17C954u: goto label_17c954;
            case 0x17C958u: goto label_17c958;
            case 0x17C95Cu: goto label_17c95c;
            case 0x17C960u: goto label_17c960;
            case 0x17C964u: goto label_17c964;
            case 0x17C968u: goto label_17c968;
            case 0x17C96Cu: goto label_17c96c;
            case 0x17C970u: goto label_17c970;
            case 0x17C974u: goto label_17c974;
            case 0x17C978u: goto label_17c978;
            case 0x17C97Cu: goto label_17c97c;
            case 0x17C980u: goto label_17c980;
            case 0x17C984u: goto label_17c984;
            case 0x17C988u: goto label_17c988;
            case 0x17C98Cu: goto label_17c98c;
            case 0x17C990u: goto label_17c990;
            case 0x17C994u: goto label_17c994;
            case 0x17C998u: goto label_17c998;
            case 0x17C99Cu: goto label_17c99c;
            case 0x17C9A0u: goto label_17c9a0;
            case 0x17C9A4u: goto label_17c9a4;
            case 0x17C9A8u: goto label_17c9a8;
            case 0x17C9ACu: goto label_17c9ac;
            case 0x17C9B0u: goto label_17c9b0;
            case 0x17C9B4u: goto label_17c9b4;
            case 0x17C9B8u: goto label_17c9b8;
            case 0x17C9BCu: goto label_17c9bc;
            case 0x17C9C0u: goto label_17c9c0;
            case 0x17C9C4u: goto label_17c9c4;
            case 0x17C9C8u: goto label_17c9c8;
            case 0x17C9CCu: goto label_17c9cc;
            case 0x17C9D0u: goto label_17c9d0;
            case 0x17C9D4u: goto label_17c9d4;
            case 0x17C9D8u: goto label_17c9d8;
            case 0x17C9DCu: goto label_17c9dc;
            case 0x17C9E0u: goto label_17c9e0;
            case 0x17C9E4u: goto label_17c9e4;
            case 0x17C9E8u: goto label_17c9e8;
            case 0x17C9ECu: goto label_17c9ec;
            case 0x17C9F0u: goto label_17c9f0;
            case 0x17C9F4u: goto label_17c9f4;
            case 0x17C9F8u: goto label_17c9f8;
            case 0x17C9FCu: goto label_17c9fc;
            case 0x17CA00u: goto label_17ca00;
            case 0x17CA04u: goto label_17ca04;
            case 0x17CA08u: goto label_17ca08;
            case 0x17CA0Cu: goto label_17ca0c;
            case 0x17CA10u: goto label_17ca10;
            case 0x17CA14u: goto label_17ca14;
            case 0x17CA18u: goto label_17ca18;
            case 0x17CA1Cu: goto label_17ca1c;
            case 0x17CA20u: goto label_17ca20;
            case 0x17CA24u: goto label_17ca24;
            case 0x17CA28u: goto label_17ca28;
            case 0x17CA2Cu: goto label_17ca2c;
            default: break;
        }
        return;
    }
label_fallthrough_0x17ca28:
    ctx->pc = 0x17CA30u;
}
