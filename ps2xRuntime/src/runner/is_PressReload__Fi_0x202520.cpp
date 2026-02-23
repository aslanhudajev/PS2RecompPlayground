#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressReload__Fi
// Address: 0x202520 - 0x2025dc
void is_PressReload__Fi_0x202520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressReload__Fi");


    ctx->pc = 0x202520u;

    // 0x202520: 0x27bdffd0
    ctx->pc = 0x202520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202524: 0x7fbf0020
    ctx->pc = 0x202524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x202528: 0x7fb10010
    ctx->pc = 0x202528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20252c: 0x7fb00000
    ctx->pc = 0x20252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202530: 0xc07bf9c
    ctx->pc = 0x202530u;
    SET_GPR_U32(ctx, 31, 0x202538u);
    ctx->pc = 0x202534u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202538u; }
        else if (ctx->pc != 0x202538u) { ctx->pc = 0x202538u; }
    }
    if (ctx->pc != 0x202538u) { return; }
    ctx->pc = 0x202538u;
    // 0x202538: 0x24030003
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x20253c: 0x14430020
    ctx->pc = 0x20253Cu;
    {
        const bool branch_taken_0x20253c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x202540u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20253c) {
            ctx->pc = 0x2025C0u;
            goto label_2025c0;
        }
    }
    ctx->pc = 0x202544u;
    // 0x202544: 0xc0809e8
    ctx->pc = 0x202544u;
    SET_GPR_U32(ctx, 31, 0x20254Cu);
    ctx->pc = 0x202548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2027A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressUp__Fi_0x2027a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20254Cu; }
        else if (ctx->pc != 0x20254Cu) { ctx->pc = 0x20254Cu; }
    }
    if (ctx->pc != 0x20254Cu) { return; }
    ctx->pc = 0x20254Cu;
    // 0x20254c: 0x70408e28
    ctx->pc = 0x20254cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x202550: 0xc0809f4
    ctx->pc = 0x202550u;
    SET_GPR_U32(ctx, 31, 0x202558u);
    ctx->pc = 0x202554u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2027D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDown__Fi_0x2027d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202558u; }
        else if (ctx->pc != 0x202558u) { ctx->pc = 0x202558u; }
    }
    if (ctx->pc != 0x202558u) { return; }
    ctx->pc = 0x202558u;
    // 0x202558: 0x2228825
    ctx->pc = 0x202558u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20255c: 0xc080a0c
    ctx->pc = 0x20255Cu;
    SET_GPR_U32(ctx, 31, 0x202564u);
    ctx->pc = 0x202560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202830u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressRight__Fi_0x202830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202564u; }
        else if (ctx->pc != 0x202564u) { ctx->pc = 0x202564u; }
    }
    if (ctx->pc != 0x202564u) { return; }
    ctx->pc = 0x202564u;
    // 0x202564: 0x518825
    ctx->pc = 0x202564u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202568: 0xc080a00
    ctx->pc = 0x202568u;
    SET_GPR_U32(ctx, 31, 0x202570u);
    ctx->pc = 0x20256Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202800u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressLeft__Fi_0x202800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202570u; }
        else if (ctx->pc != 0x202570u) { ctx->pc = 0x202570u; }
    }
    if (ctx->pc != 0x202570u) { return; }
    ctx->pc = 0x202570u;
    // 0x202570: 0x518825
    ctx->pc = 0x202570u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202574: 0xc080930
    ctx->pc = 0x202574u;
    SET_GPR_U32(ctx, 31, 0x20257Cu);
    ctx->pc = 0x202578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2024C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressReload0__Fi_0x2024c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20257Cu; }
        else if (ctx->pc != 0x20257Cu) { ctx->pc = 0x20257Cu; }
    }
    if (ctx->pc != 0x20257Cu) { return; }
    ctx->pc = 0x20257Cu;
    // 0x20257c: 0x512025
    ctx->pc = 0x20257cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202580: 0x101040
    ctx->pc = 0x202580u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x202584: 0x501021
    ctx->pc = 0x202584u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x202588: 0x21080
    ctx->pc = 0x202588u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20258c: 0x501021
    ctx->pc = 0x20258cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x202590: 0x22840
    ctx->pc = 0x202590u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 1));
    // 0x202594: 0x3c020050
    ctx->pc = 0x202594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202598: 0x2442dc46
    ctx->pc = 0x202598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958150));
    // 0x20259c: 0x451021
    ctx->pc = 0x20259cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2025a0: 0x94430000
    ctx->pc = 0x2025a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2025a4: 0x3c020050
    ctx->pc = 0x2025a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2025a8: 0x2442dc52
    ctx->pc = 0x2025a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958162));
    // 0x2025ac: 0x451021
    ctx->pc = 0x2025acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2025b0: 0x94420000
    ctx->pc = 0x2025b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2025b4: 0x621025
    ctx->pc = 0x2025b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2025b8: 0x10000003
    ctx->pc = 0x2025B8u;
    {
        const bool branch_taken_0x2025b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2025BCu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x2025b8) {
            ctx->pc = 0x2025C8u;
            goto label_2025c8;
        }
    }
    ctx->pc = 0x2025C0u;
label_2025c0:
    // 0x2025c0: 0xc080930
    ctx->pc = 0x2025C0u;
    SET_GPR_U32(ctx, 31, 0x2025C8u);
    ctx->pc = 0x2024C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressReload0__Fi_0x2024c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2025C8u; }
        else if (ctx->pc != 0x2025C8u) { ctx->pc = 0x2025C8u; }
    }
    if (ctx->pc != 0x2025C8u) { return; }
    ctx->pc = 0x2025C8u;
label_2025c8:
    // 0x2025c8: 0x7bbf0020
    ctx->pc = 0x2025c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2025cc: 0x7bb10010
    ctx->pc = 0x2025ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2025d0: 0x7bb00000
    ctx->pc = 0x2025d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2025d4: 0x3e00008
    ctx->pc = 0x2025D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2025D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2025C0u: goto label_2025c0;
            case 0x2025C8u: goto label_2025c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2025DCu;
}
