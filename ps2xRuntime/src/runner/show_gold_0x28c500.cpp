#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: show_gold
// Address: 0x28c500 - 0x28c724
void show_gold_0x28c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28c500u;

    // 0x28c500: 0x27bdff70
    ctx->pc = 0x28c500u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28c504: 0xffbf0070
    ctx->pc = 0x28c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28c508: 0xffb60060
    ctx->pc = 0x28c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28c50c: 0xffb50050
    ctx->pc = 0x28c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x28c510: 0xffb40040
    ctx->pc = 0x28c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28c514: 0xffb30030
    ctx->pc = 0x28c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c518: 0xffb20020
    ctx->pc = 0x28c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c51c: 0xffb10010
    ctx->pc = 0x28c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c520: 0xffb00000
    ctx->pc = 0x28c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c524: 0xe7b40080
    ctx->pc = 0x28c524u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x28c528: 0x80a02d
    ctx->pc = 0x28c528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c52c: 0x24032b00
    ctx->pc = 0x28c52cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28c530: 0x2831818
    ctx->pc = 0x28c530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c534: 0x3c020032
    ctx->pc = 0x28c534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28c538: 0x24421bc0
    ctx->pc = 0x28c538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28c53c: 0x623021
    ctx->pc = 0x28c53cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c540: 0x3c020031
    ctx->pc = 0x28c540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28c544: 0x8c43ffbc
    ctx->pc = 0x28c544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x28c548: 0x31042
    ctx->pc = 0x28c548u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 1));
    // 0x28c54c: 0x43b021
    ctx->pc = 0x28c54cu;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c550: 0x3c020035
    ctx->pc = 0x28c550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c554: 0x3c030035
    ctx->pc = 0x28c554u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28c558: 0x8c44b454
    ctx->pc = 0x28c558u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947924)));
    // 0x28c55c: 0x8c62b450
    ctx->pc = 0x28c55cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294947920)));
    // 0x28c560: 0x822023
    ctx->pc = 0x28c560u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c564: 0x3c020035
    ctx->pc = 0x28c564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c568: 0x8c42b458
    ctx->pc = 0x28c568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947928)));
    // 0x28c56c: 0x822023
    ctx->pc = 0x28c56cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c570: 0x24150001
    ctx->pc = 0x28c570u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c574: 0x3c03003c
    ctx->pc = 0x28c574u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28c578: 0x24633e80
    ctx->pc = 0x28c578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16000));
    // 0x28c57c: 0x2402000c
    ctx->pc = 0x28c57cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c580: 0x2821018
    ctx->pc = 0x28c580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c584: 0x431021
    ctx->pc = 0x28c584u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c588: 0x8c420000
    ctx->pc = 0x28c588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c58c: 0x1040000e
    ctx->pc = 0x28C58Cu;
    {
        const bool branch_taken_0x28c58c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C590u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28c58c) {
            ctx->pc = 0x28C5C8u;
            goto label_28c5c8;
        }
    }
    ctx->pc = 0x28C594u;
    // 0x28c594: 0x3c02003c
    ctx->pc = 0x28c594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c598: 0x24453e80
    ctx->pc = 0x28c598u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 16000));
    // 0x28c59c: 0x2402000c
    ctx->pc = 0x28c59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c5a0: 0x2821818
    ctx->pc = 0x28c5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c5a4: 0x26730001
    ctx->pc = 0x28c5a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_28c5a8:
    // 0x28c5a8: 0x2a620003
    ctx->pc = 0x28c5a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
    // 0x28c5ac: 0x10400006
    ctx->pc = 0x28C5ACu;
    {
        const bool branch_taken_0x28c5ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C5B0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x28c5ac) {
            ctx->pc = 0x28C5C8u;
            goto label_28c5c8;
        }
    }
    ctx->pc = 0x28C5B4u;
    // 0x28c5b4: 0x431021
    ctx->pc = 0x28c5b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c5b8: 0x451021
    ctx->pc = 0x28c5b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28c5bc: 0x8c420000
    ctx->pc = 0x28c5bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c5c0: 0x5440fff9
    ctx->pc = 0x28C5C0u;
    {
        const bool branch_taken_0x28c5c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28c5c0) {
            ctx->pc = 0x28C5C4u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x28C5A8u;
            goto label_28c5a8;
        }
    }
    ctx->pc = 0x28C5C8u;
label_28c5c8:
    // 0x28c5c8: 0x3c030035
    ctx->pc = 0x28c5c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28c5cc: 0x2463b4c8
    ctx->pc = 0x28c5ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948040));
    // 0x28c5d0: 0x24020018
    ctx->pc = 0x28c5d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28c5d4: 0x2821018
    ctx->pc = 0x28c5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c5d8: 0x431021
    ctx->pc = 0x28c5d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c5dc: 0x8c520000
    ctx->pc = 0x28c5dcu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c5e0: 0x12400044
    ctx->pc = 0x28C5E0u;
    {
        const bool branch_taken_0x28c5e0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C5E4u;
        SET_GPR_U32(ctx, 7, ((uint32_t)53 << 16));
        if (branch_taken_0x28c5e0) {
            ctx->pc = 0x28C6F4u;
            goto label_28c6f4;
        }
    }
    ctx->pc = 0x28C5E8u;
    // 0x28c5e8: 0x8cc61a20
    ctx->pc = 0x28c5e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 6688)));
    // 0x28c5ec: 0x862818
    ctx->pc = 0x28c5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c5f0: 0x3c03003c
    ctx->pc = 0x28c5f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28c5f4: 0x24633df0
    ctx->pc = 0x28c5f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15856));
    // 0x28c5f8: 0x132080
    ctx->pc = 0x28c5f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28c5fc: 0x2402000c
    ctx->pc = 0x28c5fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c600: 0x2821018
    ctx->pc = 0x28c600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c604: 0x822021
    ctx->pc = 0x28c604u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c608: 0x831821
    ctx->pc = 0x28c608u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28c60c: 0x8c620000
    ctx->pc = 0x28c60cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c610: 0x24420001
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x28c614: 0xa2001a
    ctx->pc = 0x28c614u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x28c618: 0x2812
    ctx->pc = 0x28c618u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x28c61c: 0x50400001
    ctx->pc = 0x28C61Cu;
    {
        const bool branch_taken_0x28c61c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28c61c) {
            ctx->pc = 0x28C620u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28C624u;
            goto label_28c624;
        }
    }
    ctx->pc = 0x28C624u;
label_28c624:
    // 0x28c624: 0x8ce2b458
    ctx->pc = 0x28c624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294947928)));
    // 0x28c628: 0xa28821
    ctx->pc = 0x28c628u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28c62c: 0x3c02003c
    ctx->pc = 0x28c62cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c630: 0x24423e20
    ctx->pc = 0x28c630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15904));
    // 0x28c634: 0x822021
    ctx->pc = 0x28c634u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c638: 0x14c00006
    ctx->pc = 0x28C638u;
    {
        const bool branch_taken_0x28c638 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C63Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x28c638) {
            ctx->pc = 0x28C654u;
            goto label_28c654;
        }
    }
    ctx->pc = 0x28C640u;
    // 0x28c640: 0x240202d
    ctx->pc = 0x28c640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c644: 0xc0b0ce8
    ctx->pc = 0x28C644u;
    SET_GPR_U32(ctx, 31, 0x28C64Cu);
    ctx->pc = 0x28C648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C64Cu; }
    }
    if (ctx->pc != 0x28C64Cu) { return; }
    ctx->pc = 0x28C64Cu;
    // 0x28c64c: 0x1000002a
    ctx->pc = 0x28C64Cu;
    {
        const bool branch_taken_0x28c64c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C650u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28c64c) {
            ctx->pc = 0x28C6F8u;
            goto label_28c6f8;
        }
    }
    ctx->pc = 0x28C654u;
label_28c654:
    // 0x28c654: 0x240202d
    ctx->pc = 0x28c654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c658: 0xc0b0ce8
    ctx->pc = 0x28C658u;
    SET_GPR_U32(ctx, 31, 0x28C660u);
    ctx->pc = 0x28C65Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C660u; }
    }
    if (ctx->pc != 0x28C660u) { return; }
    ctx->pc = 0x28C660u;
    // 0x28c660: 0x230102a
    ctx->pc = 0x28c660u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x28c664: 0x10400005
    ctx->pc = 0x28C664u;
    {
        const bool branch_taken_0x28c664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C668u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        if (branch_taken_0x28c664) {
            ctx->pc = 0x28C67Cu;
            goto label_28c67c;
        }
    }
    ctx->pc = 0x28C66Cu;
    // 0x28c66c: 0xa82d
    ctx->pc = 0x28c66cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c670: 0x211102a
    ctx->pc = 0x28c670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x28c674: 0x10000002
    ctx->pc = 0x28C674u;
    {
        const bool branch_taken_0x28c674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C678u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
        if (branch_taken_0x28c674) {
            ctx->pc = 0x28C680u;
            goto label_28c680;
        }
    }
    ctx->pc = 0x28C67Cu;
label_28c67c:
    // 0x28c67c: 0x220802d
    ctx->pc = 0x28c67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c680:
    // 0x28c680: 0x4490a000
    ctx->pc = 0x28c680u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 16);
    // 0x28c684: 0x4680a520
    ctx->pc = 0x28c684u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x28c688: 0x3c013b80
    ctx->pc = 0x28c688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x28c68c: 0x44810000
    ctx->pc = 0x28c68cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28c690: 0x4600a502
    ctx->pc = 0x28c690u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28c694: 0x3c020035
    ctx->pc = 0x28c694u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c698: 0x8c45b454
    ctx->pc = 0x28c698u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294947924)));
    // 0x28c69c: 0x240202d
    ctx->pc = 0x28c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6a0: 0xc0b0dc6
    ctx->pc = 0x28C6A0u;
    SET_GPR_U32(ctx, 31, 0x28C6A8u);
    ctx->pc = 0x28C6A4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6A8u; }
    }
    if (ctx->pc != 0x28C6A8u) { return; }
    ctx->pc = 0x28C6A8u;
    // 0x28c6a8: 0x240202d
    ctx->pc = 0x28c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6ac: 0x282d
    ctx->pc = 0x28c6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6b0: 0xc0b0cf6
    ctx->pc = 0x28C6B0u;
    SET_GPR_U32(ctx, 31, 0x28C6B8u);
    ctx->pc = 0x28C6B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6B8u; }
    }
    if (ctx->pc != 0x28C6B8u) { return; }
    ctx->pc = 0x28C6B8u;
    // 0x28c6b8: 0x240202d
    ctx->pc = 0x28c6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c6bc: 0x44806000
    ctx->pc = 0x28c6bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x28c6c0: 0x3c013f80
    ctx->pc = 0x28c6c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28c6c4: 0x44816800
    ctx->pc = 0x28c6c4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x28c6c8: 0x46006386
    ctx->pc = 0x28c6c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x28c6cc: 0xc0b0e6a
    ctx->pc = 0x28C6CCu;
    SET_GPR_U32(ctx, 31, 0x28C6D4u);
    ctx->pc = 0x28C6D0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C6D4u; }
    }
    if (ctx->pc != 0x28C6D4u) { return; }
    ctx->pc = 0x28C6D4u;
    // 0x28c6d4: 0x3c04003c
    ctx->pc = 0x28c6d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x28c6d8: 0x24843e20
    ctx->pc = 0x28c6d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15904));
    // 0x28c6dc: 0x131880
    ctx->pc = 0x28c6dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28c6e0: 0x2402000c
    ctx->pc = 0x28c6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c6e4: 0x2821018
    ctx->pc = 0x28c6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c6e8: 0x621821
    ctx->pc = 0x28c6e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c6ec: 0x641821
    ctx->pc = 0x28c6ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28c6f0: 0xac700000
    ctx->pc = 0x28c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_28c6f4:
    // 0x28c6f4: 0x2a0102d
    ctx->pc = 0x28c6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28c6f8:
    // 0x28c6f8: 0xdfbf0070
    ctx->pc = 0x28c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c6fc: 0xdfb60060
    ctx->pc = 0x28c6fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c700: 0xdfb50050
    ctx->pc = 0x28c700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c704: 0xdfb40040
    ctx->pc = 0x28c704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c708: 0xdfb30030
    ctx->pc = 0x28c708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c70c: 0xdfb20020
    ctx->pc = 0x28c70cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c710: 0xdfb10010
    ctx->pc = 0x28c710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c714: 0xdfb00000
    ctx->pc = 0x28c714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c718: 0xc7b40080
    ctx->pc = 0x28c718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28c71c: 0x3e00008
    ctx->pc = 0x28C71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C720u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C5A8u: goto label_28c5a8;
            case 0x28C5C8u: goto label_28c5c8;
            case 0x28C624u: goto label_28c624;
            case 0x28C654u: goto label_28c654;
            case 0x28C67Cu: goto label_28c67c;
            case 0x28C680u: goto label_28c680;
            case 0x28C6F4u: goto label_28c6f4;
            case 0x28C6F8u: goto label_28c6f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C724u;
}
