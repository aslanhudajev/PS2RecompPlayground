#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SendPadAct__Fv
// Address: 0x1ef530 - 0x1ef72c
void SendPadAct__Fv_0x1ef530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SendPadAct__Fv");


    ctx->pc = 0x1ef530u;

    // 0x1ef530: 0x27bdffa0
    ctx->pc = 0x1ef530u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ef534: 0x7fbf0050
    ctx->pc = 0x1ef534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1ef538: 0x7fb40040
    ctx->pc = 0x1ef538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ef53c: 0x7fb30030
    ctx->pc = 0x1ef53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ef540: 0x7fb20020
    ctx->pc = 0x1ef540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef544: 0x3c020051
    ctx->pc = 0x1ef544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ef548: 0x7fb10010
    ctx->pc = 0x1ef548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef54c: 0x24534f80
    ctx->pc = 0x1ef54cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 20352));
    // 0x1ef550: 0x7fb00000
    ctx->pc = 0x1ef550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef554: 0x3c020050
    ctx->pc = 0x1ef554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef558: 0x70008628
    ctx->pc = 0x1ef558u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef55c: 0x2454fe80
    ctx->pc = 0x1ef55cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294966912));
label_1ef560:
    // 0x1ef560: 0x72002628
    ctx->pc = 0x1ef560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ef564: 0xc05956a
    ctx->pc = 0x1EF564u;
    SET_GPR_U32(ctx, 31, 0x1EF56Cu);
    ctx->pc = 0x1EF568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1655A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x1655a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF56Cu; }
        else if (ctx->pc != 0x1EF56Cu) { ctx->pc = 0x1EF56Cu; }
    }
    if (ctx->pc != 0x1EF56Cu) { return; }
    ctx->pc = 0x1EF56Cu;
    // 0x1ef56c: 0x14400002
    ctx->pc = 0x1EF56Cu;
    {
        const bool branch_taken_0x1ef56c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF570u;
        SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x1ef56c) {
            ctx->pc = 0x1EF578u;
            goto label_1ef578;
        }
    }
    ctx->pc = 0x1EF574u;
    // 0x1ef574: 0xa2600000
    ctx->pc = 0x1ef574u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ef578:
    // 0x1ef578: 0x2c630001
    ctx->pc = 0x1ef578u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 1));
    // 0x1ef57c: 0x14600003
    ctx->pc = 0x1EF57Cu;
    {
        const bool branch_taken_0x1ef57c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ef57c) {
            ctx->pc = 0x1EF58Cu;
            goto label_1ef58c;
        }
    }
    ctx->pc = 0x1EF584u;
    // 0x1ef584: 0x38430006
    ctx->pc = 0x1ef584u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), 6));
    // 0x1ef588: 0x2c630001
    ctx->pc = 0x1ef588u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 1));
label_1ef58c:
    // 0x1ef58c: 0x82840048
    ctx->pc = 0x1ef58cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1ef590: 0x14800005
    ctx->pc = 0x1EF590u;
    {
        const bool branch_taken_0x1ef590 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF594u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), 255));
        if (branch_taken_0x1ef590) {
            ctx->pc = 0x1EF5A8u;
            goto label_1ef5a8;
        }
    }
    ctx->pc = 0x1EF598u;
    // 0x1ef598: 0x92630000
    ctx->pc = 0x1ef598u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ef59c: 0x54600057
    ctx->pc = 0x1EF59Cu;
    {
        const bool branch_taken_0x1ef59c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ef59c) {
            ctx->pc = 0x1EF5A0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1EF6FCu;
            goto label_1ef6fc;
        }
    }
    ctx->pc = 0x1EF5A4u;
    // 0x1ef5a4: 0x0
    ctx->pc = 0x1ef5a4u;
    // NOP
label_1ef5a8:
    // 0x1ef5a8: 0x10800017
    ctx->pc = 0x1EF5A8u;
    {
        const bool branch_taken_0x1ef5a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF5ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef5a8) {
            ctx->pc = 0x1EF608u;
            goto label_1ef608;
        }
    }
    ctx->pc = 0x1EF5B0u;
label_1ef5b0:
    // 0x1ef5b0: 0x3c020050
    ctx->pc = 0x1ef5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef5b4: 0xc07ce18
    ctx->pc = 0x1EF5B4u;
    SET_GPR_U32(ctx, 31, 0x1EF5BCu);
    ctx->pc = 0x1EF5B8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF5BCu; }
        else if (ctx->pc != 0x1EF5BCu) { ctx->pc = 0x1EF5BCu; }
    }
    if (ctx->pc != 0x1EF5BCu) { return; }
    ctx->pc = 0x1EF5BCu;
    // 0x1ef5bc: 0x18400007
    ctx->pc = 0x1EF5BCu;
    {
        const bool branch_taken_0x1ef5bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EF5C0u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        if (branch_taken_0x1ef5bc) {
            ctx->pc = 0x1EF5DCu;
            goto label_1ef5dc;
        }
    }
    ctx->pc = 0x1EF5C4u;
    // 0x1ef5c4: 0x2712021
    ctx->pc = 0x1ef5c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ef5c8: 0x90830001
    ctx->pc = 0x1ef5c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1ef5cc: 0x10600006
    ctx->pc = 0x1EF5CCu;
    {
        const bool branch_taken_0x1ef5cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ef5cc) {
            ctx->pc = 0x1EF5E8u;
            goto label_1ef5e8;
        }
    }
    ctx->pc = 0x1EF5D4u;
    // 0x1ef5d4: 0x0
    ctx->pc = 0x1ef5d4u;
    // NOP
    // 0x1ef5d8: 0x2712021
    ctx->pc = 0x1ef5d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1ef5dc:
    // 0x1ef5dc: 0x90830007
    ctx->pc = 0x1ef5dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1ef5e0: 0x10000003
    ctx->pc = 0x1EF5E0u;
    {
        const bool branch_taken_0x1ef5e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF5E4u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef5e0) {
            ctx->pc = 0x1EF5F0u;
            goto label_1ef5f0;
        }
    }
    ctx->pc = 0x1EF5E8u;
label_1ef5e8:
    // 0x1ef5e8: 0xa080000d
    ctx->pc = 0x1ef5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef5ec: 0x0
    ctx->pc = 0x1ef5ecu;
    // NOP
label_1ef5f0:
    // 0x1ef5f0: 0x2711821
    ctx->pc = 0x1ef5f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ef5f4: 0xa0600001
    ctx->pc = 0x1ef5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef5f8: 0x26310001
    ctx->pc = 0x1ef5f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ef5fc: 0x2a230006
    ctx->pc = 0x1ef5fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 6));
    // 0x1ef600: 0x1460ffeb
    ctx->pc = 0x1EF600u;
    {
        const bool branch_taken_0x1ef600 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ef600) {
            ctx->pc = 0x1EF5B0u;
            goto label_1ef5b0;
        }
    }
    ctx->pc = 0x1EF608u;
label_1ef608:
    // 0x1ef608: 0x92640000
    ctx->pc = 0x1ef608u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ef60c: 0x24030003
    ctx->pc = 0x1ef60cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ef610: 0x5083002b
    ctx->pc = 0x1EF610u;
    {
        const bool branch_taken_0x1ef610 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ef610) {
            ctx->pc = 0x1EF614u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1EF6C0u;
            goto label_1ef6c0;
        }
    }
    ctx->pc = 0x1EF618u;
    // 0x1ef618: 0x24030002
    ctx->pc = 0x1ef618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef61c: 0x10830023
    ctx->pc = 0x1EF61Cu;
    {
        const bool branch_taken_0x1ef61c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1EF620u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ef61c) {
            ctx->pc = 0x1EF6ACu;
            goto label_1ef6ac;
        }
    }
    ctx->pc = 0x1EF624u;
    // 0x1ef624: 0x1083000e
    ctx->pc = 0x1EF624u;
    {
        const bool branch_taken_0x1ef624 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ef624) {
            ctx->pc = 0x1EF660u;
            goto label_1ef660;
        }
    }
    ctx->pc = 0x1EF62Cu;
    // 0x1ef62c: 0x10800003
    ctx->pc = 0x1EF62Cu;
    {
        const bool branch_taken_0x1ef62c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ef62c) {
            ctx->pc = 0x1EF63Cu;
            goto label_1ef63c;
        }
    }
    ctx->pc = 0x1EF634u;
    // 0x1ef634: 0x10000030
    ctx->pc = 0x1EF634u;
    {
        const bool branch_taken_0x1ef634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ef634) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF63Cu;
label_1ef63c:
    // 0x1ef63c: 0x1240002e
    ctx->pc = 0x1EF63Cu;
    {
        const bool branch_taken_0x1ef63c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF640u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef63c) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF644u;
    // 0x1ef644: 0x70002e28
    ctx->pc = 0x1ef644u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef648: 0x24060001
    ctx->pc = 0x1ef648u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef64c: 0xc0596b0
    ctx->pc = 0x1EF64Cu;
    SET_GPR_U32(ctx, 31, 0x1EF654u);
    ctx->pc = 0x1EF650u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x165AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetMainMode_0x165ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF654u; }
        else if (ctx->pc != 0x1EF654u) { ctx->pc = 0x1EF654u; }
    }
    if (ctx->pc != 0x1EF654u) { return; }
    ctx->pc = 0x1EF654u;
    // 0x1ef654: 0x24030001
    ctx->pc = 0x1ef654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef658: 0x10000027
    ctx->pc = 0x1EF658u;
    {
        const bool branch_taken_0x1ef658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF65Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef658) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF660u;
label_1ef660:
    // 0x1ef660: 0x12400025
    ctx->pc = 0x1EF660u;
    {
        const bool branch_taken_0x1ef660 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF664u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef660) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF668u;
    // 0x1ef668: 0x70002e28
    ctx->pc = 0x1ef668u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef66c: 0x2406ffff
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef670: 0xc0595d2
    ctx->pc = 0x1EF670u;
    SET_GPR_U32(ctx, 31, 0x1EF678u);
    ctx->pc = 0x1EF674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x165748u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoAct_0x165748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF678u; }
        else if (ctx->pc != 0x1EF678u) { ctx->pc = 0x1EF678u; }
    }
    if (ctx->pc != 0x1EF678u) { return; }
    ctx->pc = 0x1EF678u;
    // 0x1ef678: 0x14400005
    ctx->pc = 0x1EF678u;
    {
        const bool branch_taken_0x1ef678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF67Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef678) {
            ctx->pc = 0x1EF690u;
            goto label_1ef690;
        }
    }
    ctx->pc = 0x1EF680u;
    // 0x1ef680: 0x24030004
    ctx->pc = 0x1ef680u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef684: 0x1000001c
    ctx->pc = 0x1EF684u;
    {
        const bool branch_taken_0x1ef684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF688u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef684) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF68Cu;
    // 0x1ef68c: 0x72002628
    ctx->pc = 0x1ef68cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ef690:
    // 0x1ef690: 0x70002e28
    ctx->pc = 0x1ef690u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef694: 0xc05970c
    ctx->pc = 0x1EF694u;
    SET_GPR_U32(ctx, 31, 0x1EF69Cu);
    ctx->pc = 0x1EF698u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 19));
    ctx->pc = 0x165C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActAlign_0x165c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF69Cu; }
        else if (ctx->pc != 0x1EF69Cu) { ctx->pc = 0x1EF69Cu; }
    }
    if (ctx->pc != 0x1EF69Cu) { return; }
    ctx->pc = 0x1EF69Cu;
    // 0x1ef69c: 0x10400016
    ctx->pc = 0x1EF69Cu;
    {
        const bool branch_taken_0x1ef69c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF6A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ef69c) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF6A4u;
    // 0x1ef6a4: 0x10000014
    ctx->pc = 0x1EF6A4u;
    {
        const bool branch_taken_0x1ef6a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF6A8u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef6a4) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF6ACu;
label_1ef6ac:
    // 0x1ef6ac: 0x12400012
    ctx->pc = 0x1EF6ACu;
    {
        const bool branch_taken_0x1ef6ac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF6B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1ef6ac) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF6B4u;
    // 0x1ef6b4: 0x10000010
    ctx->pc = 0x1EF6B4u;
    {
        const bool branch_taken_0x1ef6b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF6B8u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef6b4) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF6BCu;
    // 0x1ef6bc: 0x72002628
    ctx->pc = 0x1ef6bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ef6c0:
    // 0x1ef6c0: 0xc07bf9c
    ctx->pc = 0x1EF6C0u;
    SET_GPR_U32(ctx, 31, 0x1EF6C8u);
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6C8u; }
        else if (ctx->pc != 0x1EF6C8u) { ctx->pc = 0x1EF6C8u; }
    }
    if (ctx->pc != 0x1EF6C8u) { return; }
    ctx->pc = 0x1EF6C8u;
    // 0x1ef6c8: 0x24030001
    ctx->pc = 0x1ef6c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef6cc: 0x10430004
    ctx->pc = 0x1EF6CCu;
    {
        const bool branch_taken_0x1ef6cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ef6cc) {
            ctx->pc = 0x1EF6E0u;
            goto label_1ef6e0;
        }
    }
    ctx->pc = 0x1EF6D4u;
    // 0x1ef6d4: 0xa260000d
    ctx->pc = 0x1ef6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef6d8: 0xa260000e
    ctx->pc = 0x1ef6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef6dc: 0x0
    ctx->pc = 0x1ef6dcu;
    // NOP
label_1ef6e0:
    // 0x1ef6e0: 0x12400005
    ctx->pc = 0x1EF6E0u;
    {
        const bool branch_taken_0x1ef6e0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF6E4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ef6e0) {
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF6E8u;
    // 0x1ef6e8: 0x70002e28
    ctx->pc = 0x1ef6e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef6ec: 0xc0596de
    ctx->pc = 0x1EF6ECu;
    SET_GPR_U32(ctx, 31, 0x1EF6F4u);
    ctx->pc = 0x1EF6F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 13));
    ctx->pc = 0x165B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActDirect_0x165b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6F4u; }
        else if (ctx->pc != 0x1EF6F4u) { ctx->pc = 0x1EF6F4u; }
    }
    if (ctx->pc != 0x1EF6F4u) { return; }
    ctx->pc = 0x1EF6F4u;
    // 0x1ef6f4: 0x0
    ctx->pc = 0x1ef6f4u;
    // NOP
label_1ef6f8:
    // 0x1ef6f8: 0x26100001
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ef6fc:
    // 0x1ef6fc: 0x2a030002
    ctx->pc = 0x1ef6fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1ef700: 0x26730019
    ctx->pc = 0x1ef700u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 25));
    // 0x1ef704: 0x1460ff96
    ctx->pc = 0x1EF704u;
    {
        const bool branch_taken_0x1ef704 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF708u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 12));
        if (branch_taken_0x1ef704) {
            ctx->pc = 0x1EF560u;
            goto label_1ef560;
        }
    }
    ctx->pc = 0x1EF70Cu;
    // 0x1ef70c: 0x7bbf0050
    ctx->pc = 0x1ef70cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef710: 0x7bb40040
    ctx->pc = 0x1ef710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef714: 0x7bb30030
    ctx->pc = 0x1ef714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef718: 0x7bb20020
    ctx->pc = 0x1ef718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef71c: 0x7bb10010
    ctx->pc = 0x1ef71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef720: 0x7bb00000
    ctx->pc = 0x1ef720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef724: 0x3e00008
    ctx->pc = 0x1EF724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF560u: goto label_1ef560;
            case 0x1EF578u: goto label_1ef578;
            case 0x1EF58Cu: goto label_1ef58c;
            case 0x1EF5A8u: goto label_1ef5a8;
            case 0x1EF5B0u: goto label_1ef5b0;
            case 0x1EF5DCu: goto label_1ef5dc;
            case 0x1EF5E8u: goto label_1ef5e8;
            case 0x1EF5F0u: goto label_1ef5f0;
            case 0x1EF608u: goto label_1ef608;
            case 0x1EF63Cu: goto label_1ef63c;
            case 0x1EF660u: goto label_1ef660;
            case 0x1EF690u: goto label_1ef690;
            case 0x1EF6ACu: goto label_1ef6ac;
            case 0x1EF6C0u: goto label_1ef6c0;
            case 0x1EF6E0u: goto label_1ef6e0;
            case 0x1EF6F8u: goto label_1ef6f8;
            case 0x1EF6FCu: goto label_1ef6fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF72Cu;
}
