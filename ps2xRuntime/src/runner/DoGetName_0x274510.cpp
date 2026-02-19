#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoGetName
// Address: 0x274510 - 0x27466c
void DoGetName_0x274510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274510u;

    // 0x274510: 0x27bdffc0
    ctx->pc = 0x274510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274514: 0xffbf0030
    ctx->pc = 0x274514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x274518: 0xffb10020
    ctx->pc = 0x274518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27451c: 0xffb00010
    ctx->pc = 0x27451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x274520: 0x80282d
    ctx->pc = 0x274520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274524: 0x24032b00
    ctx->pc = 0x274524u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x274528: 0xa31818
    ctx->pc = 0x274528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27452c: 0x3c020032
    ctx->pc = 0x27452cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x274530: 0x24421bc0
    ctx->pc = 0x274530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x274534: 0x628821
    ctx->pc = 0x274534u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274538: 0x3c020031
    ctx->pc = 0x274538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27453c: 0x8c420014
    ctx->pc = 0x27453cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x274540: 0x30420001
    ctx->pc = 0x274540u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x274544: 0x1040000d
    ctx->pc = 0x274544u;
    {
        const bool branch_taken_0x274544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274548u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274544) {
            ctx->pc = 0x27457Cu;
            goto label_27457c;
        }
    }
    ctx->pc = 0x27454Cu;
    // 0x27454c: 0x2631099c
    ctx->pc = 0x27454cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2460));
    // 0x274550: 0x3c100034
    ctx->pc = 0x274550u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x274554: 0x2610fa28
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294965800));
    // 0x274558: 0xc0b5c24
    ctx->pc = 0x274558u;
    SET_GPR_U32(ctx, 31, 0x274560u);
    ctx->pc = 0x27455Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274560u; }
    }
    if (ctx->pc != 0x274560u) { return; }
    ctx->pc = 0x274560u;
    // 0x274560: 0x21080
    ctx->pc = 0x274560u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x274564: 0x501021
    ctx->pc = 0x274564u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x274568: 0x220202d
    ctx->pc = 0x274568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27456c: 0xc0bf2c1
    ctx->pc = 0x27456Cu;
    SET_GPR_U32(ctx, 31, 0x274574u);
    ctx->pc = 0x274570u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274574u; }
    }
    if (ctx->pc != 0x274574u) { return; }
    ctx->pc = 0x274574u;
    // 0x274574: 0x10000038
    ctx->pc = 0x274574u;
    {
        const bool branch_taken_0x274574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274578u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x274574) {
            ctx->pc = 0x274658u;
            goto label_274658;
        }
    }
    ctx->pc = 0x27457Cu;
label_27457c:
    // 0x27457c: 0x8e222ac8
    ctx->pc = 0x27457cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 10952)));
    // 0x274580: 0x14400017
    ctx->pc = 0x274580u;
    {
        const bool branch_taken_0x274580 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x274584u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x274580) {
            ctx->pc = 0x2745E0u;
            goto label_2745e0;
        }
    }
    ctx->pc = 0x274588u;
    // 0x274588: 0xc09d05c
    ctx->pc = 0x274588u;
    SET_GPR_U32(ctx, 31, 0x274590u);
    ctx->pc = 0x27458Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x274170u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_initials_0x274170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274590u; }
    }
    if (ctx->pc != 0x274590u) { return; }
    ctx->pc = 0x274590u;
    // 0x274590: 0x40802d
    ctx->pc = 0x274590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274594: 0x1a00002f
    ctx->pc = 0x274594u;
    {
        const bool branch_taken_0x274594 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x274598u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x274594) {
            ctx->pc = 0x274654u;
            goto label_274654;
        }
    }
    ctx->pc = 0x27459Cu;
    // 0x27459c: 0xae222ac8
    ctx->pc = 0x27459cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10952), GPR_U32(ctx, 2));
    // 0x2745a0: 0x2402003c
    ctx->pc = 0x2745a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2745a4: 0xa62201d0
    ctx->pc = 0x2745a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 464), (uint16_t)GPR_U32(ctx, 2));
    // 0x2745a8: 0x8222099c
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2460)));
    // 0x2745ac: 0x14400029
    ctx->pc = 0x2745ACu;
    {
        const bool branch_taken_0x2745ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2745B0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2745ac) {
            ctx->pc = 0x274654u;
            goto label_274654;
        }
    }
    ctx->pc = 0x2745B4u;
    // 0x2745b4: 0xc0b5c24
    ctx->pc = 0x2745B4u;
    SET_GPR_U32(ctx, 31, 0x2745BCu);
    ctx->pc = 0x2745B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2745BCu; }
    }
    if (ctx->pc != 0x2745BCu) { return; }
    ctx->pc = 0x2745BCu;
    // 0x2745bc: 0x3c030034
    ctx->pc = 0x2745bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2745c0: 0x2463fa28
    ctx->pc = 0x2745c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965800));
    // 0x2745c4: 0x21080
    ctx->pc = 0x2745c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2745c8: 0x431021
    ctx->pc = 0x2745c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2745cc: 0x2624099c
    ctx->pc = 0x2745ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2460));
    // 0x2745d0: 0xc0bf2c1
    ctx->pc = 0x2745D0u;
    SET_GPR_U32(ctx, 31, 0x2745D8u);
    ctx->pc = 0x2745D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2745D8u; }
    }
    if (ctx->pc != 0x2745D8u) { return; }
    ctx->pc = 0x2745D8u;
    // 0x2745d8: 0x1000001f
    ctx->pc = 0x2745D8u;
    {
        const bool branch_taken_0x2745d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2745DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2745d8) {
            ctx->pc = 0x274658u;
            goto label_274658;
        }
    }
    ctx->pc = 0x2745E0u;
label_2745e0:
    // 0x2745e0: 0x962301d0
    ctx->pc = 0x2745e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x2745e4: 0x9442ffbc
    ctx->pc = 0x2745e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2745e8: 0x621823
    ctx->pc = 0x2745e8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2745ec: 0xa62301d0
    ctx->pc = 0x2745ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 464), (uint16_t)GPR_U32(ctx, 3));
    // 0x2745f0: 0x31c00
    ctx->pc = 0x2745f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x2745f4: 0x4630004
    ctx->pc = 0x2745F4u;
    {
        const bool branch_taken_0x2745f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2745f4) {
            ctx->pc = 0x2745F8u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 464)));
            ctx->pc = 0x274608u;
            goto label_274608;
        }
    }
    ctx->pc = 0x2745FCu;
    // 0x2745fc: 0xa62001d0
    ctx->pc = 0x2745fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 464), (uint16_t)GPR_U32(ctx, 0));
    // 0x274600: 0x10000014
    ctx->pc = 0x274600u;
    {
        const bool branch_taken_0x274600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274604u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x274600) {
            ctx->pc = 0x274654u;
            goto label_274654;
        }
    }
    ctx->pc = 0x274608u;
label_274608:
    // 0x274608: 0x30420010
    ctx->pc = 0x274608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x27460c: 0x10400011
    ctx->pc = 0x27460Cu;
    {
        const bool branch_taken_0x27460c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274610u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27460c) {
            ctx->pc = 0x274654u;
            goto label_274654;
        }
    }
    ctx->pc = 0x274614u;
    // 0x274614: 0x2463fa70
    ctx->pc = 0x274614u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965872));
    // 0x274618: 0x51040
    ctx->pc = 0x274618u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x27461c: 0x431021
    ctx->pc = 0x27461cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274620: 0x84440000
    ctx->pc = 0x274620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274624: 0x3c020034
    ctx->pc = 0x274624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274628: 0x2442fa78
    ctx->pc = 0x274628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965880));
    // 0x27462c: 0x51880
    ctx->pc = 0x27462cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x274630: 0x621821
    ctx->pc = 0x274630u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274634: 0x42023
    ctx->pc = 0x274634u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x274638: 0x24050154
    ctx->pc = 0x274638u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x27463c: 0x24060007
    ctx->pc = 0x27463cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x274640: 0x8c670000
    ctx->pc = 0x274640u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274644: 0x3c013f40
    ctx->pc = 0x274644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16192 << 16));
    // 0x274648: 0x44816000
    ctx->pc = 0x274648u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27464c: 0xc080510
    ctx->pc = 0x27464Cu;
    SET_GPR_U32(ctx, 31, 0x274654u);
    ctx->pc = 0x274650u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 2460));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274654u; }
    }
    if (ctx->pc != 0x274654u) { return; }
    ctx->pc = 0x274654u;
label_274654:
    // 0x274654: 0x200102d
    ctx->pc = 0x274654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274658:
    // 0x274658: 0xdfbf0030
    ctx->pc = 0x274658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27465c: 0xdfb10020
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274660: 0xdfb00010
    ctx->pc = 0x274660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274664: 0x3e00008
    ctx->pc = 0x274664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274668u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27457Cu: goto label_27457c;
            case 0x2745E0u: goto label_2745e0;
            case 0x274608u: goto label_274608;
            case 0x274654u: goto label_274654;
            case 0x274658u: goto label_274658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27466Cu;
}
