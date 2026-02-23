#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get_gunposi__FP11Gun_Act_tagP10USBGUN_Tag
// Address: 0x1ed780 - 0x1ed924
void get_gunposi__FP11Gun_Act_tagP10USBGUN_Tag_0x1ed780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get_gunposi__FP11Gun_Act_tagP10USBGUN_Tag");


    ctx->pc = 0x1ed780u;

    // 0x1ed780: 0x27bdffe0
    ctx->pc = 0x1ed780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed784: 0x7fbf0010
    ctx->pc = 0x1ed784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ed788: 0x7fb00000
    ctx->pc = 0x1ed788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed78c: 0x8ca30010
    ctx->pc = 0x1ed78cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1ed790: 0x30630020
    ctx->pc = 0x1ed790u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x1ed794: 0x10600003
    ctx->pc = 0x1ED794u;
    {
        const bool branch_taken_0x1ed794 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED798u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ed794) {
            ctx->pc = 0x1ED7A4u;
            goto label_1ed7a4;
        }
    }
    ctx->pc = 0x1ED79Cu;
    // 0x1ed79c: 0x24030001
    ctx->pc = 0x1ed79cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed7a0: 0xae030014
    ctx->pc = 0x1ed7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1ed7a4:
    // 0x1ed7a4: 0x94a40006
    ctx->pc = 0x1ed7a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1ed7a8: 0x10800004
    ctx->pc = 0x1ED7A8u;
    {
        const bool branch_taken_0x1ed7a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED7ACu;
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
        if (branch_taken_0x1ed7a8) {
            ctx->pc = 0x1ED7BCu;
            goto label_1ed7bc;
        }
    }
    ctx->pc = 0x1ED7B0u;
    // 0x1ed7b0: 0x24030001
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed7b4: 0x14830005
    ctx->pc = 0x1ED7B4u;
    {
        const bool branch_taken_0x1ed7b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1ED7B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
        if (branch_taken_0x1ed7b4) {
            ctx->pc = 0x1ED7CCu;
            goto label_1ed7cc;
        }
    }
    ctx->pc = 0x1ED7BCu;
label_1ed7bc:
    // 0x1ed7bc: 0x2403ffff
    ctx->pc = 0x1ed7bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed7c0: 0xae03001c
    ctx->pc = 0x1ed7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1ed7c4: 0x10000037
    ctx->pc = 0x1ED7C4u;
    {
        const bool branch_taken_0x1ed7c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED7C8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x1ed7c4) {
            ctx->pc = 0x1ED8A4u;
            goto label_1ed8a4;
        }
    }
    ctx->pc = 0x1ED7CCu;
label_1ed7cc:
    // 0x1ed7cc: 0x24650dbc
    ctx->pc = 0x1ed7ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 3516));
    // 0x1ed7d0: 0x8e060000
    ctx->pc = 0x1ed7d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed7d4: 0x2484fe5a
    ctx->pc = 0x1ed7d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966874));
    // 0x1ed7d8: 0x240300eb
    ctx->pc = 0x1ed7d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 235));
    // 0x1ed7dc: 0x832018
    ctx->pc = 0x1ed7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1ed7e0: 0x64140
    ctx->pc = 0x1ed7e0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 5));
    // 0x1ed7e4: 0x3c030050
    ctx->pc = 0x1ed7e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ed7e8: 0x24630db8
    ctx->pc = 0x1ed7e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3512));
    // 0x1ed7ec: 0x681821
    ctx->pc = 0x1ed7ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1ed7f0: 0x8c630000
    ctx->pc = 0x1ed7f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed7f4: 0xa82821
    ctx->pc = 0x1ed7f4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1ed7f8: 0x8ca60000
    ctx->pc = 0x1ed7f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed7fc: 0x14600002
    ctx->pc = 0x1ED7FCu;
    {
        const bool branch_taken_0x1ed7fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED800u;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1ed7fc) {
            ctx->pc = 0x1ED808u;
            goto label_1ed808;
        }
    }
    ctx->pc = 0x1ED804u;
    // 0x1ed804: 0x1cd
    ctx->pc = 0x1ed804u;
    runtime->handleBreak(rdram, ctx);
label_1ed808:
    // 0x1ed808: 0x24e4ff7a
    ctx->pc = 0x1ed808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294967162));
    // 0x1ed80c: 0x41900
    ctx->pc = 0x1ed80cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ed810: 0x2812
    ctx->pc = 0x1ed810u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1ed814: 0x642021
    ctx->pc = 0x1ed814u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed818: 0x24a30140
    ctx->pc = 0x1ed818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 320));
    // 0x1ed81c: 0xae03001c
    ctx->pc = 0x1ed81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1ed820: 0x418c0
    ctx->pc = 0x1ed820u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ed824: 0x641823
    ctx->pc = 0x1ed824u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed828: 0x14c00002
    ctx->pc = 0x1ED828u;
    {
        const bool branch_taken_0x1ed828 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED82Cu;
        { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1ed828) {
            ctx->pc = 0x1ED834u;
            goto label_1ed834;
        }
    }
    ctx->pc = 0x1ED830u;
    // 0x1ed830: 0x1cd
    ctx->pc = 0x1ed830u;
    runtime->handleBreak(rdram, ctx);
label_1ed834:
    // 0x1ed834: 0x8e040000
    ctx->pc = 0x1ed834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed838: 0x3c030050
    ctx->pc = 0x1ed838u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ed83c: 0x24630db4
    ctx->pc = 0x1ed83cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3508));
    // 0x1ed840: 0x2812
    ctx->pc = 0x1ed840u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1ed844: 0x42140
    ctx->pc = 0x1ed844u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ed848: 0x641821
    ctx->pc = 0x1ed848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed84c: 0x8c630000
    ctx->pc = 0x1ed84cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed850: 0xa31823
    ctx->pc = 0x1ed850u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ed854: 0x246300e0
    ctx->pc = 0x1ed854u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 224));
    // 0x1ed858: 0xae030020
    ctx->pc = 0x1ed858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ed85c: 0x8e03001c
    ctx->pc = 0x1ed85cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ed860: 0x4610002
    ctx->pc = 0x1ED860u;
    {
        const bool branch_taken_0x1ed860 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ed860) {
            ctx->pc = 0x1ED86Cu;
            goto label_1ed86c;
        }
    }
    ctx->pc = 0x1ED868u;
    // 0x1ed868: 0xae00001c
    ctx->pc = 0x1ed868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1ed86c:
    // 0x1ed86c: 0x8e03001c
    ctx->pc = 0x1ed86cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ed870: 0x28610280
    ctx->pc = 0x1ed870u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 640));
    // 0x1ed874: 0x14200002
    ctx->pc = 0x1ED874u;
    {
        const bool branch_taken_0x1ed874 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED878u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 639));
        if (branch_taken_0x1ed874) {
            ctx->pc = 0x1ED880u;
            goto label_1ed880;
        }
    }
    ctx->pc = 0x1ED87Cu;
    // 0x1ed87c: 0xae03001c
    ctx->pc = 0x1ed87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1ed880:
    // 0x1ed880: 0x8e030020
    ctx->pc = 0x1ed880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed884: 0x4610002
    ctx->pc = 0x1ED884u;
    {
        const bool branch_taken_0x1ed884 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ed884) {
            ctx->pc = 0x1ED890u;
            goto label_1ed890;
        }
    }
    ctx->pc = 0x1ED88Cu;
    // 0x1ed88c: 0xae000020
    ctx->pc = 0x1ed88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1ed890:
    // 0x1ed890: 0x8e030020
    ctx->pc = 0x1ed890u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed894: 0x286101c0
    ctx->pc = 0x1ed894u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 448));
    // 0x1ed898: 0x14200002
    ctx->pc = 0x1ED898u;
    {
        const bool branch_taken_0x1ed898 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED89Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 447));
        if (branch_taken_0x1ed898) {
            ctx->pc = 0x1ED8A4u;
            goto label_1ed8a4;
        }
    }
    ctx->pc = 0x1ED8A0u;
    // 0x1ed8a0: 0xae030020
    ctx->pc = 0x1ed8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1ed8a4:
    // 0x1ed8a4: 0x8e030010
    ctx->pc = 0x1ed8a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ed8a8: 0x1060000c
    ctx->pc = 0x1ED8A8u;
    {
        const bool branch_taken_0x1ed8a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ed8a8) {
            ctx->pc = 0x1ED8DCu;
            goto label_1ed8dc;
        }
    }
    ctx->pc = 0x1ED8B0u;
    // 0x1ed8b0: 0x2463ffff
    ctx->pc = 0x1ed8b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ed8b4: 0xae030010
    ctx->pc = 0x1ed8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1ed8b8: 0x8e030010
    ctx->pc = 0x1ed8b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ed8bc: 0x14600015
    ctx->pc = 0x1ED8BCu;
    {
        const bool branch_taken_0x1ed8bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ED8C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ed8bc) {
            ctx->pc = 0x1ED914u;
            goto label_1ed914;
        }
    }
    ctx->pc = 0x1ED8C4u;
    // 0x1ed8c4: 0xae03000c
    ctx->pc = 0x1ed8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ed8c8: 0x8e03001c
    ctx->pc = 0x1ed8c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ed8cc: 0xae030004
    ctx->pc = 0x1ed8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ed8d0: 0x8e030020
    ctx->pc = 0x1ed8d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ed8d4: 0x1000000f
    ctx->pc = 0x1ED8D4u;
    {
        const bool branch_taken_0x1ed8d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED8D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1ed8d4) {
            ctx->pc = 0x1ED914u;
            goto label_1ed914;
        }
    }
    ctx->pc = 0x1ED8DCu;
label_1ed8dc:
    // 0x1ed8dc: 0x8e040014
    ctx->pc = 0x1ed8dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ed8e0: 0x24030001
    ctx->pc = 0x1ed8e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed8e4: 0x1483000b
    ctx->pc = 0x1ED8E4u;
    {
        const bool branch_taken_0x1ed8e4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1ed8e4) {
            ctx->pc = 0x1ED914u;
            goto label_1ed914;
        }
    }
    ctx->pc = 0x1ED8ECu;
    // 0x1ed8ec: 0x3c020050
    ctx->pc = 0x1ed8ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ed8f0: 0xc07ce18
    ctx->pc = 0x1ED8F0u;
    SET_GPR_U32(ctx, 31, 0x1ED8F8u);
    ctx->pc = 0x1ED8F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED8F8u; }
        else if (ctx->pc != 0x1ED8F8u) { ctx->pc = 0x1ED8F8u; }
    }
    if (ctx->pc != 0x1ED8F8u) { return; }
    ctx->pc = 0x1ED8F8u;
    // 0x1ed8f8: 0x1c400006
    ctx->pc = 0x1ED8F8u;
    {
        const bool branch_taken_0x1ed8f8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ed8f8) {
            ctx->pc = 0x1ED914u;
            goto label_1ed914;
        }
    }
    ctx->pc = 0x1ED900u;
    // 0x1ed900: 0x8f828d2c
    ctx->pc = 0x1ed900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x1ed904: 0x2442ffff
    ctx->pc = 0x1ed904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ed908: 0xae020010
    ctx->pc = 0x1ed908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ed90c: 0xc07ba88
    ctx->pc = 0x1ED90Cu;
    SET_GPR_U32(ctx, 31, 0x1ED914u);
    ctx->pc = 0x1ED910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1EEA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReqGunFlash__Fi_0x1eea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED914u; }
        else if (ctx->pc != 0x1ED914u) { ctx->pc = 0x1ED914u; }
    }
    if (ctx->pc != 0x1ED914u) { return; }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x7bbf0010
    ctx->pc = 0x1ed914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed918: 0x7bb00000
    ctx->pc = 0x1ed918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed91c: 0x3e00008
    ctx->pc = 0x1ED91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED920u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED7A4u: goto label_1ed7a4;
            case 0x1ED7BCu: goto label_1ed7bc;
            case 0x1ED7CCu: goto label_1ed7cc;
            case 0x1ED808u: goto label_1ed808;
            case 0x1ED834u: goto label_1ed834;
            case 0x1ED86Cu: goto label_1ed86c;
            case 0x1ED880u: goto label_1ed880;
            case 0x1ED890u: goto label_1ed890;
            case 0x1ED8A4u: goto label_1ed8a4;
            case 0x1ED8DCu: goto label_1ed8dc;
            case 0x1ED914u: goto label_1ed914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED924u;
}
