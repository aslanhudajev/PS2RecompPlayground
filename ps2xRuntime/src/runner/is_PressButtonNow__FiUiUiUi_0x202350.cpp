#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressButtonNow__FiUiUiUi
// Address: 0x202350 - 0x202468
void is_PressButtonNow__FiUiUiUi_0x202350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressButtonNow__FiUiUiUi");


    ctx->pc = 0x202350u;

    // 0x202350: 0x27bdffa0
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x202354: 0x7fbf0050
    ctx->pc = 0x202354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x202358: 0x7fb40040
    ctx->pc = 0x202358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20235c: 0x7fb30030
    ctx->pc = 0x20235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x202360: 0x7fb20020
    ctx->pc = 0x202360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202364: 0x7fb10010
    ctx->pc = 0x202364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202368: 0x7080a628
    ctx->pc = 0x202368u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20236c: 0x7fb00000
    ctx->pc = 0x20236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202370: 0x2a810002
    ctx->pc = 0x202370u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 20), 2));
    // 0x202374: 0x70a09e28
    ctx->pc = 0x202374u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x202378: 0x70c09628
    ctx->pc = 0x202378u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20237c: 0x70e08e28
    ctx->pc = 0x20237cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x202380: 0x10200030
    ctx->pc = 0x202380u;
    {
        const bool branch_taken_0x202380 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x202384u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x202380) {
            ctx->pc = 0x202444u;
            goto label_202444;
        }
    }
    ctx->pc = 0x202388u;
    // 0x202388: 0xc07bf9c
    ctx->pc = 0x202388u;
    SET_GPR_U32(ctx, 31, 0x202390u);
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202390u; }
        else if (ctx->pc != 0x202390u) { ctx->pc = 0x202390u; }
    }
    if (ctx->pc != 0x202390u) { return; }
    ctx->pc = 0x202390u;
    // 0x202390: 0x5040002d
    ctx->pc = 0x202390u;
    {
        const bool branch_taken_0x202390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x202390) {
            ctx->pc = 0x202394u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x202448u;
            goto label_202448;
        }
    }
    ctx->pc = 0x202398u;
    // 0x202398: 0x24030003
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20239c: 0x5043001f
    ctx->pc = 0x20239Cu;
    {
        const bool branch_taken_0x20239c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x20239c) {
            ctx->pc = 0x2023A0u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x20241Cu;
            goto label_20241c;
        }
    }
    ctx->pc = 0x2023A4u;
    // 0x2023a4: 0x24030002
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2023a8: 0x50430011
    ctx->pc = 0x2023A8u;
    {
        const bool branch_taken_0x2023a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2023a8) {
            ctx->pc = 0x2023ACu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
            ctx->pc = 0x2023F0u;
            goto label_2023f0;
        }
    }
    ctx->pc = 0x2023B0u;
    // 0x2023b0: 0x24030001
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2023b4: 0x10430003
    ctx->pc = 0x2023B4u;
    {
        const bool branch_taken_0x2023b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2023B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x2023b4) {
            ctx->pc = 0x2023C4u;
            goto label_2023c4;
        }
    }
    ctx->pc = 0x2023BCu;
    // 0x2023bc: 0x10000021
    ctx->pc = 0x2023BCu;
    {
        const bool branch_taken_0x2023bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2023bc) {
            ctx->pc = 0x202444u;
            goto label_202444;
        }
    }
    ctx->pc = 0x2023C4u;
label_2023c4:
    // 0x2023c4: 0x541021
    ctx->pc = 0x2023c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2023c8: 0x21080
    ctx->pc = 0x2023c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2023cc: 0x541021
    ctx->pc = 0x2023ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2023d0: 0x21840
    ctx->pc = 0x2023d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2023d4: 0x3c020050
    ctx->pc = 0x2023d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2023d8: 0x2442dc42
    ctx->pc = 0x2023d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958146));
    // 0x2023dc: 0x431021
    ctx->pc = 0x2023dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2023e0: 0x94420000
    ctx->pc = 0x2023e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2023e4: 0x2621024
    ctx->pc = 0x2023e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2023e8: 0x10000016
    ctx->pc = 0x2023E8u;
    {
        const bool branch_taken_0x2023e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2023ECu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x2023e8) {
            ctx->pc = 0x202444u;
            goto label_202444;
        }
    }
    ctx->pc = 0x2023F0u;
label_2023f0:
    // 0x2023f0: 0x541021
    ctx->pc = 0x2023f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2023f4: 0x21080
    ctx->pc = 0x2023f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2023f8: 0x541021
    ctx->pc = 0x2023f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2023fc: 0x21840
    ctx->pc = 0x2023fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x202400: 0x3c020050
    ctx->pc = 0x202400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202404: 0x2442dc42
    ctx->pc = 0x202404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958146));
    // 0x202408: 0x431021
    ctx->pc = 0x202408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20240c: 0x94420000
    ctx->pc = 0x20240cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202410: 0x2421024
    ctx->pc = 0x202410u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x202414: 0x1000000b
    ctx->pc = 0x202414u;
    {
        const bool branch_taken_0x202414 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202418u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x202414) {
            ctx->pc = 0x202444u;
            goto label_202444;
        }
    }
    ctx->pc = 0x20241Cu;
label_20241c:
    // 0x20241c: 0x541021
    ctx->pc = 0x20241cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x202420: 0x21080
    ctx->pc = 0x202420u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202424: 0x541021
    ctx->pc = 0x202424u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x202428: 0x21840
    ctx->pc = 0x202428u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20242c: 0x3c020050
    ctx->pc = 0x20242cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202430: 0x2442dc76
    ctx->pc = 0x202430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958198));
    // 0x202434: 0x431021
    ctx->pc = 0x202434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202438: 0x94420000
    ctx->pc = 0x202438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20243c: 0x511024
    ctx->pc = 0x20243cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202440: 0x2028025
    ctx->pc = 0x202440u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_202444:
    // 0x202444: 0x72001628
    ctx->pc = 0x202444u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_202448:
    // 0x202448: 0x7bbf0050
    ctx->pc = 0x202448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20244c: 0x7bb40040
    ctx->pc = 0x20244cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202450: 0x7bb30030
    ctx->pc = 0x202450u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202454: 0x7bb20020
    ctx->pc = 0x202454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202458: 0x7bb10010
    ctx->pc = 0x202458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20245c: 0x7bb00000
    ctx->pc = 0x20245cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202460: 0x3e00008
    ctx->pc = 0x202460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202464u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2023C4u: goto label_2023c4;
            case 0x2023F0u: goto label_2023f0;
            case 0x20241Cu: goto label_20241c;
            case 0x202444u: goto label_202444;
            case 0x202448u: goto label_202448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202468u;
}
