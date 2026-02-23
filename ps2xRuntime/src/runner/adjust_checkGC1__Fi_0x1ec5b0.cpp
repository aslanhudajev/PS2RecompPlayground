#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjust_checkGC1__Fi
// Address: 0x1ec5b0 - 0x1ec72c
void adjust_checkGC1__Fi_0x1ec5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjust_checkGC1__Fi");


    ctx->pc = 0x1ec5b0u;

    // 0x1ec5b0: 0x41080
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec5b4: 0x441821
    ctx->pc = 0x1ec5b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec5b8: 0x27bdffc0
    ctx->pc = 0x1ec5b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec5bc: 0x31080
    ctx->pc = 0x1ec5bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec5c0: 0x7fbf0030
    ctx->pc = 0x1ec5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1ec5c4: 0x7fb20020
    ctx->pc = 0x1ec5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec5c8: 0x7fb10010
    ctx->pc = 0x1ec5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec5cc: 0x621021
    ctx->pc = 0x1ec5ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec5d0: 0x21880
    ctx->pc = 0x1ec5d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec5d4: 0x3c020050
    ctx->pc = 0x1ec5d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec5d8: 0x70809628
    ctx->pc = 0x1ec5d8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ec5dc: 0x7fb00000
    ctx->pc = 0x1ec5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec5e0: 0x2442db70
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x1ec5e4: 0x438021
    ctx->pc = 0x1ec5e4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec5e8: 0x24040140
    ctx->pc = 0x1ec5e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1ec5ec: 0x240500e0
    ctx->pc = 0x1ec5ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ec5f0: 0xc07b2c8
    ctx->pc = 0x1EC5F0u;
    SET_GPR_U32(ctx, 31, 0x1EC5F8u);
    ctx->pc = 0x1EC5F4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ECB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_adjust_line__Fii_0x1ecb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5F8u; }
        else if (ctx->pc != 0x1EC5F8u) { ctx->pc = 0x1EC5F8u; }
    }
    if (ctx->pc != 0x1EC5F8u) { return; }
    ctx->pc = 0x1EC5F8u;
    // 0x1ec5f8: 0xc07b258
    ctx->pc = 0x1EC5F8u;
    SET_GPR_U32(ctx, 31, 0x1EC600u);
    ctx->pc = 0x1EC5FCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC960u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_gun_sight_adjGC1__Fi_0x1ec960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC600u; }
        else if (ctx->pc != 0x1EC600u) { ctx->pc = 0x1EC600u; }
    }
    if (ctx->pc != 0x1EC600u) { return; }
    ctx->pc = 0x1EC600u;
    // 0x1ec600: 0x8202000e
    ctx->pc = 0x1ec600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec604: 0x10400008
    ctx->pc = 0x1EC604u;
    {
        const bool branch_taken_0x1ec604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC608u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1ec604) {
            ctx->pc = 0x1EC628u;
            goto label_1ec628;
        }
    }
    ctx->pc = 0x1EC60Cu;
    // 0x1ec60c: 0x244434f0
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ec610: 0x3c020002
    ctx->pc = 0x1ec610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ec614: 0x3445000c
    ctx->pc = 0x1ec614u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ec618: 0x70003628
    ctx->pc = 0x1ec618u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec61c: 0x70003e28
    ctx->pc = 0x1ec61cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec620: 0xc086018
    ctx->pc = 0x1EC620u;
    SET_GPR_U32(ctx, 31, 0x1EC628u);
    ctx->pc = 0x1EC624u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC628u; }
        else if (ctx->pc != 0x1EC628u) { ctx->pc = 0x1EC628u; }
    }
    if (ctx->pc != 0x1EC628u) { return; }
    ctx->pc = 0x1EC628u;
label_1ec628:
    // 0x1ec628: 0x8202000e
    ctx->pc = 0x1ec628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1ec62c: 0x10400022
    ctx->pc = 0x1EC62Cu;
    {
        const bool branch_taken_0x1ec62c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec62c) {
            ctx->pc = 0x1EC6B8u;
            goto label_1ec6b8;
        }
    }
    ctx->pc = 0x1EC634u;
    // 0x1ec634: 0x96030000
    ctx->pc = 0x1ec634u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec638: 0x3402ffff
    ctx->pc = 0x1ec638u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x1ec63c: 0x1062001e
    ctx->pc = 0x1EC63Cu;
    {
        const bool branch_taken_0x1ec63c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ec63c) {
            ctx->pc = 0x1EC6B8u;
            goto label_1ec6b8;
        }
    }
    ctx->pc = 0x1EC644u;
    // 0x1ec644: 0x8f828dd0
    ctx->pc = 0x1ec644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
    // 0x1ec648: 0x1440001b
    ctx->pc = 0x1EC648u;
    {
        const bool branch_taken_0x1ec648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC64Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x1ec648) {
            ctx->pc = 0x1EC6B8u;
            goto label_1ec6b8;
        }
    }
    ctx->pc = 0x1EC650u;
    // 0x1ec650: 0x521021
    ctx->pc = 0x1ec650u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec654: 0x21080
    ctx->pc = 0x1ec654u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec658: 0x521021
    ctx->pc = 0x1ec658u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec65c: 0x22040
    ctx->pc = 0x1ec65cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec660: 0x3c020050
    ctx->pc = 0x1ec660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec664: 0x2442dc4a
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958154));
    // 0x1ec668: 0x441021
    ctx->pc = 0x1ec668u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec66c: 0x84430000
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec670: 0x3c020050
    ctx->pc = 0x1ec670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ec674: 0x2442dc4c
    ctx->pc = 0x1ec674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958156));
    // 0x1ec678: 0x441021
    ctx->pc = 0x1ec678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec67c: 0xaf838de4
    ctx->pc = 0x1ec67cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 3));
    // 0x1ec680: 0x84420000
    ctx->pc = 0x1ec680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec684: 0x8f858de4
    ctx->pc = 0x1ec684u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1ec688: 0xaf828de8
    ctx->pc = 0x1ec688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 2));
    // 0x1ec68c: 0x8f868de8
    ctx->pc = 0x1ec68cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec690: 0xc07b1cc
    ctx->pc = 0x1EC690u;
    SET_GPR_U32(ctx, 31, 0x1EC698u);
    ctx->pc = 0x1EC694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC730u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustXGC1__Fiii_0x1ec730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC698u; }
        else if (ctx->pc != 0x1EC698u) { ctx->pc = 0x1EC698u; }
    }
    if (ctx->pc != 0x1EC698u) { return; }
    ctx->pc = 0x1EC698u;
    // 0x1ec698: 0x10400007
    ctx->pc = 0x1EC698u;
    {
        const bool branch_taken_0x1ec698 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec698) {
            ctx->pc = 0x1EC6B8u;
            goto label_1ec6b8;
        }
    }
    ctx->pc = 0x1EC6A0u;
    // 0x1ec6a0: 0x8f858de8
    ctx->pc = 0x1ec6a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ec6a4: 0xc07b1f8
    ctx->pc = 0x1EC6A4u;
    SET_GPR_U32(ctx, 31, 0x1EC6ACu);
    ctx->pc = 0x1EC6A8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustYGC1__Fii_0x1ec7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6ACu; }
        else if (ctx->pc != 0x1EC6ACu) { ctx->pc = 0x1EC6ACu; }
    }
    if (ctx->pc != 0x1EC6ACu) { return; }
    ctx->pc = 0x1EC6ACu;
    // 0x1ec6ac: 0x24020008
    ctx->pc = 0x1ec6acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ec6b0: 0x24110002
    ctx->pc = 0x1ec6b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec6b4: 0xaf828dd0
    ctx->pc = 0x1ec6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 2));
label_1ec6b8:
    // 0x1ec6b8: 0x8f828dd0
    ctx->pc = 0x1ec6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
    // 0x1ec6bc: 0x10400003
    ctx->pc = 0x1EC6BCu;
    {
        const bool branch_taken_0x1ec6bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC6C0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec6bc) {
            ctx->pc = 0x1EC6CCu;
            goto label_1ec6cc;
        }
    }
    ctx->pc = 0x1EC6C4u;
    // 0x1ec6c4: 0x2442ffff
    ctx->pc = 0x1ec6c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec6c8: 0xaf828dd0
    ctx->pc = 0x1ec6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 2));
label_1ec6cc:
    // 0x1ec6cc: 0xc08091c
    ctx->pc = 0x1EC6CCu;
    SET_GPR_U32(ctx, 31, 0x1EC6D4u);
    ctx->pc = 0x202470u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressStart__Fi_0x202470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6D4u; }
        else if (ctx->pc != 0x1EC6D4u) { ctx->pc = 0x1EC6D4u; }
    }
    if (ctx->pc != 0x1EC6D4u) { return; }
    ctx->pc = 0x1EC6D4u;
    // 0x1ec6d4: 0x14400005
    ctx->pc = 0x1EC6D4u;
    {
        const bool branch_taken_0x1ec6d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ec6d4) {
            ctx->pc = 0x1EC6ECu;
            goto label_1ec6ec;
        }
    }
    ctx->pc = 0x1EC6DCu;
    // 0x1ec6dc: 0xc080948
    ctx->pc = 0x1EC6DCu;
    SET_GPR_U32(ctx, 31, 0x1EC6E4u);
    ctx->pc = 0x1EC6E0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202520u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressReload__Fi_0x202520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6E4u; }
        else if (ctx->pc != 0x1EC6E4u) { ctx->pc = 0x1EC6E4u; }
    }
    if (ctx->pc != 0x1EC6E4u) { return; }
    ctx->pc = 0x1EC6E4u;
    // 0x1ec6e4: 0x1040000b
    ctx->pc = 0x1EC6E4u;
    {
        const bool branch_taken_0x1ec6e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC6E8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ec6e4) {
            ctx->pc = 0x1EC714u;
            goto label_1ec714;
        }
    }
    ctx->pc = 0x1EC6ECu;
label_1ec6ec:
    // 0x1ec6ec: 0x3c020051
    ctx->pc = 0x1ec6ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ec6f0: 0x244434f0
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ec6f4: 0x3c020002
    ctx->pc = 0x1ec6f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ec6f8: 0x34450027
    ctx->pc = 0x1ec6f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39));
    // 0x1ec6fc: 0x70003628
    ctx->pc = 0x1ec6fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec700: 0x70003e28
    ctx->pc = 0x1ec700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ec704: 0xc086018
    ctx->pc = 0x1EC704u;
    SET_GPR_U32(ctx, 31, 0x1EC70Cu);
    ctx->pc = 0x1EC708u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC70Cu; }
        else if (ctx->pc != 0x1EC70Cu) { ctx->pc = 0x1EC70Cu; }
    }
    if (ctx->pc != 0x1EC70Cu) { return; }
    ctx->pc = 0x1EC70Cu;
    // 0x1ec70c: 0x24110001
    ctx->pc = 0x1ec70cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec710: 0x72201628
    ctx->pc = 0x1ec710u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1ec714:
    // 0x1ec714: 0x7bbf0030
    ctx->pc = 0x1ec714u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec718: 0x7bb20020
    ctx->pc = 0x1ec718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec71c: 0x7bb10010
    ctx->pc = 0x1ec71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec720: 0x7bb00000
    ctx->pc = 0x1ec720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec724: 0x3e00008
    ctx->pc = 0x1EC724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC728u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC628u: goto label_1ec628;
            case 0x1EC6B8u: goto label_1ec6b8;
            case 0x1EC6CCu: goto label_1ec6cc;
            case 0x1EC6ECu: goto label_1ec6ec;
            case 0x1EC714u: goto label_1ec714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC72Cu;
}
