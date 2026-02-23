#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressDir__FiUiUiUiUi
// Address: 0x202660 - 0x20279c
void is_PressDir__FiUiUiUiUi_0x202660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressDir__FiUiUiUiUi");


    ctx->pc = 0x202660u;

    // 0x202660: 0x27bdff90
    ctx->pc = 0x202660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x202664: 0x7fbf0060
    ctx->pc = 0x202664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x202668: 0x7fb50050
    ctx->pc = 0x202668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20266c: 0x7fb40040
    ctx->pc = 0x20266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x202670: 0x7fb30030
    ctx->pc = 0x202670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x202674: 0x7fb20020
    ctx->pc = 0x202674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202678: 0x7fb10010
    ctx->pc = 0x202678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20267c: 0x7080ae28
    ctx->pc = 0x20267cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x202680: 0x7fb00000
    ctx->pc = 0x202680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202684: 0x2aa10002
    ctx->pc = 0x202684u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 21), 2));
    // 0x202688: 0x70a0a628
    ctx->pc = 0x202688u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x20268c: 0x70c09e28
    ctx->pc = 0x20268cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x202690: 0x70e09628
    ctx->pc = 0x202690u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x202694: 0x71008e28
    ctx->pc = 0x202694u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x202698: 0x10200036
    ctx->pc = 0x202698u;
    {
        const bool branch_taken_0x202698 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20269Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x202698) {
            ctx->pc = 0x202774u;
            goto label_202774;
        }
    }
    ctx->pc = 0x2026A0u;
    // 0x2026a0: 0xc07bf9c
    ctx->pc = 0x2026A0u;
    SET_GPR_U32(ctx, 31, 0x2026A8u);
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2026A8u; }
        else if (ctx->pc != 0x2026A8u) { ctx->pc = 0x2026A8u; }
    }
    if (ctx->pc != 0x2026A8u) { return; }
    ctx->pc = 0x2026A8u;
    // 0x2026a8: 0x50400033
    ctx->pc = 0x2026A8u;
    {
        const bool branch_taken_0x2026a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2026a8) {
            ctx->pc = 0x2026ACu;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x202778u;
            goto label_202778;
        }
    }
    ctx->pc = 0x2026B0u;
    // 0x2026b0: 0x24030003
    ctx->pc = 0x2026b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2026b4: 0x50430025
    ctx->pc = 0x2026B4u;
    {
        const bool branch_taken_0x2026b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2026b4) {
            ctx->pc = 0x2026B8u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x20274Cu;
            goto label_20274c;
        }
    }
    ctx->pc = 0x2026BCu;
    // 0x2026bc: 0x24030002
    ctx->pc = 0x2026bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2026c0: 0x50430017
    ctx->pc = 0x2026C0u;
    {
        const bool branch_taken_0x2026c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2026c0) {
            ctx->pc = 0x2026C4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x202720u;
            goto label_202720;
        }
    }
    ctx->pc = 0x2026C8u;
    // 0x2026c8: 0x24030001
    ctx->pc = 0x2026c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2026cc: 0x10430003
    ctx->pc = 0x2026CCu;
    {
        const bool branch_taken_0x2026cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2026D0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x2026cc) {
            ctx->pc = 0x2026DCu;
            goto label_2026dc;
        }
    }
    ctx->pc = 0x2026D4u;
    // 0x2026d4: 0x10000027
    ctx->pc = 0x2026D4u;
    {
        const bool branch_taken_0x2026d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2026d4) {
            ctx->pc = 0x202774u;
            goto label_202774;
        }
    }
    ctx->pc = 0x2026DCu;
label_2026dc:
    // 0x2026dc: 0x551021
    ctx->pc = 0x2026dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2026e0: 0x21080
    ctx->pc = 0x2026e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2026e4: 0x551021
    ctx->pc = 0x2026e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2026e8: 0x22040
    ctx->pc = 0x2026e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2026ec: 0x3c020050
    ctx->pc = 0x2026ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2026f0: 0x2442dc46
    ctx->pc = 0x2026f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958150));
    // 0x2026f4: 0x441021
    ctx->pc = 0x2026f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2026f8: 0x94430000
    ctx->pc = 0x2026f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2026fc: 0x3c020050
    ctx->pc = 0x2026fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202700: 0x2442dc52
    ctx->pc = 0x202700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958162));
    // 0x202704: 0x441021
    ctx->pc = 0x202704u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202708: 0x94420000
    ctx->pc = 0x202708u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20270c: 0x2831824
    ctx->pc = 0x20270cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x202710: 0x2621024
    ctx->pc = 0x202710u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x202714: 0x621025
    ctx->pc = 0x202714u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202718: 0x10000016
    ctx->pc = 0x202718u;
    {
        const bool branch_taken_0x202718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20271Cu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x202718) {
            ctx->pc = 0x202774u;
            goto label_202774;
        }
    }
    ctx->pc = 0x202720u;
label_202720:
    // 0x202720: 0x551021
    ctx->pc = 0x202720u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x202724: 0x21080
    ctx->pc = 0x202724u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202728: 0x551021
    ctx->pc = 0x202728u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20272c: 0x21840
    ctx->pc = 0x20272cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x202730: 0x3c020050
    ctx->pc = 0x202730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202734: 0x2442dc46
    ctx->pc = 0x202734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958150));
    // 0x202738: 0x431021
    ctx->pc = 0x202738u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20273c: 0x94420000
    ctx->pc = 0x20273cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202740: 0x2421024
    ctx->pc = 0x202740u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x202744: 0x1000000b
    ctx->pc = 0x202744u;
    {
        const bool branch_taken_0x202744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202748u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x202744) {
            ctx->pc = 0x202774u;
            goto label_202774;
        }
    }
    ctx->pc = 0x20274Cu;
label_20274c:
    // 0x20274c: 0x551021
    ctx->pc = 0x20274cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x202750: 0x21080
    ctx->pc = 0x202750u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202754: 0x551021
    ctx->pc = 0x202754u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x202758: 0x21840
    ctx->pc = 0x202758u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20275c: 0x3c020050
    ctx->pc = 0x20275cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202760: 0x2442dc7a
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958202));
    // 0x202764: 0x431021
    ctx->pc = 0x202764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202768: 0x94420000
    ctx->pc = 0x202768u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20276c: 0x511024
    ctx->pc = 0x20276cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202770: 0x2028025
    ctx->pc = 0x202770u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_202774:
    // 0x202774: 0x72001628
    ctx->pc = 0x202774u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_202778:
    // 0x202778: 0x7bbf0060
    ctx->pc = 0x202778u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20277c: 0x7bb50050
    ctx->pc = 0x20277cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202780: 0x7bb40040
    ctx->pc = 0x202780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202784: 0x7bb30030
    ctx->pc = 0x202784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202788: 0x7bb20020
    ctx->pc = 0x202788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20278c: 0x7bb10010
    ctx->pc = 0x20278cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202790: 0x7bb00000
    ctx->pc = 0x202790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202794: 0x3e00008
    ctx->pc = 0x202794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2026DCu: goto label_2026dc;
            case 0x202720u: goto label_202720;
            case 0x20274Cu: goto label_20274c;
            case 0x202774u: goto label_202774;
            case 0x202778u: goto label_202778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20279Cu;
}
