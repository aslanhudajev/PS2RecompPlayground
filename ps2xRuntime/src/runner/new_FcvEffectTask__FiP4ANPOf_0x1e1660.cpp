#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_FcvEffectTask__FiP4ANPOf
// Address: 0x1e1660 - 0x1e177c
void new_FcvEffectTask__FiP4ANPOf_0x1e1660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_FcvEffectTask__FiP4ANPOf");


    ctx->pc = 0x1e1660u;

    // 0x1e1660: 0x27bdffa0
    ctx->pc = 0x1e1660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e1664: 0x7fbf0050
    ctx->pc = 0x1e1664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1e1668: 0x7fb30040
    ctx->pc = 0x1e1668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e166c: 0x7fb20030
    ctx->pc = 0x1e166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e1670: 0x7fb10020
    ctx->pc = 0x1e1670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1674: 0x7fb00010
    ctx->pc = 0x1e1674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1678: 0xe7b40000
    ctx->pc = 0x1e1678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e167c: 0x70808e28
    ctx->pc = 0x1e167cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e1680: 0x70a08628
    ctx->pc = 0x1e1680u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e1684: 0xc078540
    ctx->pc = 0x1E1684u;
    SET_GPR_U32(ctx, 31, 0x1E168Cu);
    ctx->pc = 0x1E1688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1E1500u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeFcvEffect__Fi4ANPOf_0x1e1500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E168Cu; }
        else if (ctx->pc != 0x1E168Cu) { ctx->pc = 0x1E168Cu; }
    }
    if (ctx->pc != 0x1E168Cu) { return; }
    ctx->pc = 0x1E168Cu;
    // 0x1e168c: 0x14400033
    ctx->pc = 0x1E168Cu;
    {
        const bool branch_taken_0x1e168c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E1690u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e168c) {
            ctx->pc = 0x1E175Cu;
            goto label_1e175c;
        }
    }
    ctx->pc = 0x1E1694u;
    // 0x1e1694: 0x8423e504
    ctx->pc = 0x1e1694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e1698: 0x2402000a
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e169c: 0x1462001d
    ctx->pc = 0x1E169Cu;
    {
        const bool branch_taken_0x1e169c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e169c) {
            ctx->pc = 0x1E1714u;
            goto label_1e1714;
        }
    }
    ctx->pc = 0x1E16A4u;
    // 0x1e16a4: 0x8f838bcc
    ctx->pc = 0x1e16a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1e16a8: 0x24020002
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e16ac: 0x14620019
    ctx->pc = 0x1E16ACu;
    {
        const bool branch_taken_0x1e16ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e16ac) {
            ctx->pc = 0x1E1714u;
            goto label_1e1714;
        }
    }
    ctx->pc = 0x1E16B4u;
    // 0x1e16b4: 0x8f938ccc
    ctx->pc = 0x1e16b4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1e16b8: 0x12600003
    ctx->pc = 0x1E16B8u;
    {
        const bool branch_taken_0x1e16b8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e16b8) {
            ctx->pc = 0x1E16C8u;
            goto label_1e16c8;
        }
    }
    ctx->pc = 0x1E16C0u;
    // 0x1e16c0: 0x8e730000
    ctx->pc = 0x1e16c0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e16c4: 0x0
    ctx->pc = 0x1e16c4u;
    // NOP
label_1e16c8:
    // 0x1e16c8: 0xc06903c
    ctx->pc = 0x1E16C8u;
    SET_GPR_U32(ctx, 31, 0x1E16D0u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D0u; }
        else if (ctx->pc != 0x1E16D0u) { ctx->pc = 0x1E16D0u; }
    }
    if (ctx->pc != 0x1E16D0u) { return; }
    ctx->pc = 0x1E16D0u;
    // 0x1e16d0: 0xc06903c
    ctx->pc = 0x1E16D0u;
    SET_GPR_U32(ctx, 31, 0x1E16D8u);
    ctx->pc = 0x1E16D4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D8u; }
        else if (ctx->pc != 0x1E16D8u) { ctx->pc = 0x1E16D8u; }
    }
    if (ctx->pc != 0x1E16D8u) { return; }
    ctx->pc = 0x1E16D8u;
    // 0x1e16d8: 0x8c420010
    ctx->pc = 0x1e16d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e16dc: 0x8e460010
    ctx->pc = 0x1e16dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e16e0: 0x72604628
    ctx->pc = 0x1e16e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e16e4: 0x2404016c
    ctx->pc = 0x1e16e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e16e8: 0x8c470014
    ctx->pc = 0x1e16e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1e16ec: 0xc069040
    ctx->pc = 0x1E16ECu;
    SET_GPR_U32(ctx, 31, 0x1E16F4u);
    ctx->pc = 0x1E16F0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16F4u; }
        else if (ctx->pc != 0x1E16F4u) { ctx->pc = 0x1E16F4u; }
    }
    if (ctx->pc != 0x1E16F4u) { return; }
    ctx->pc = 0x1E16F4u;
    // 0x1e16f4: 0x70402628
    ctx->pc = 0x1e16f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e16f8: 0x10800018
    ctx->pc = 0x1E16F8u;
    {
        const bool branch_taken_0x1e16f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E16FCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e16f8) {
            ctx->pc = 0x1E175Cu;
            goto label_1e175c;
        }
    }
    ctx->pc = 0x1E1700u;
    // 0x1e1700: 0x72003628
    ctx->pc = 0x1e1700u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1704: 0xc078468
    ctx->pc = 0x1E1704u;
    SET_GPR_U32(ctx, 31, 0x1E170Cu);
    ctx->pc = 0x1E1708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E11A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFiP4ANPOf_0x1e11a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E170Cu; }
        else if (ctx->pc != 0x1E170Cu) { ctx->pc = 0x1E170Cu; }
    }
    if (ctx->pc != 0x1E170Cu) { return; }
    ctx->pc = 0x1E170Cu;
    // 0x1e170c: 0x10000014
    ctx->pc = 0x1E170Cu;
    {
        const bool branch_taken_0x1e170c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E1710u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x1e170c) {
            ctx->pc = 0x1E1760u;
            goto label_1e1760;
        }
    }
    ctx->pc = 0x1E1714u;
label_1e1714:
    // 0x1e1714: 0xc06903c
    ctx->pc = 0x1E1714u;
    SET_GPR_U32(ctx, 31, 0x1E171Cu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E171Cu; }
        else if (ctx->pc != 0x1E171Cu) { ctx->pc = 0x1E171Cu; }
    }
    if (ctx->pc != 0x1E171Cu) { return; }
    ctx->pc = 0x1E171Cu;
    // 0x1e171c: 0xc06903c
    ctx->pc = 0x1E171Cu;
    SET_GPR_U32(ctx, 31, 0x1E1724u);
    ctx->pc = 0x1E1720u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1724u; }
        else if (ctx->pc != 0x1E1724u) { ctx->pc = 0x1E1724u; }
    }
    if (ctx->pc != 0x1E1724u) { return; }
    ctx->pc = 0x1E1724u;
    // 0x1e1724: 0xc06903c
    ctx->pc = 0x1E1724u;
    SET_GPR_U32(ctx, 31, 0x1E172Cu);
    ctx->pc = 0x1E1728u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E172Cu; }
        else if (ctx->pc != 0x1E172Cu) { ctx->pc = 0x1E172Cu; }
    }
    if (ctx->pc != 0x1E172Cu) { return; }
    ctx->pc = 0x1E172Cu;
    // 0x1e172c: 0x8e660010
    ctx->pc = 0x1e172cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1e1730: 0x8e470014
    ctx->pc = 0x1e1730u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1e1734: 0x2404016c
    ctx->pc = 0x1e1734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 364));
    // 0x1e1738: 0x70002e28
    ctx->pc = 0x1e1738u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e173c: 0xc069040
    ctx->pc = 0x1E173Cu;
    SET_GPR_U32(ctx, 31, 0x1E1744u);
    ctx->pc = 0x1E1740u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1744u; }
        else if (ctx->pc != 0x1E1744u) { ctx->pc = 0x1E1744u; }
    }
    if (ctx->pc != 0x1E1744u) { return; }
    ctx->pc = 0x1E1744u;
    // 0x1e1744: 0x70402628
    ctx->pc = 0x1e1744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e1748: 0x10800004
    ctx->pc = 0x1E1748u;
    {
        const bool branch_taken_0x1e1748 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E174Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e1748) {
            ctx->pc = 0x1E175Cu;
            goto label_1e175c;
        }
    }
    ctx->pc = 0x1E1750u;
    // 0x1e1750: 0x72003628
    ctx->pc = 0x1e1750u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1754: 0xc078468
    ctx->pc = 0x1E1754u;
    SET_GPR_U32(ctx, 31, 0x1E175Cu);
    ctx->pc = 0x1E1758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x1E11A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13FcvEffectTaskFiP4ANPOf_0x1e11a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E175Cu; }
        else if (ctx->pc != 0x1E175Cu) { ctx->pc = 0x1E175Cu; }
    }
    if (ctx->pc != 0x1E175Cu) { return; }
    ctx->pc = 0x1E175Cu;
label_1e175c:
    // 0x1e175c: 0x7bbf0050
    ctx->pc = 0x1e175cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e1760:
    // 0x1e1760: 0x7bb30040
    ctx->pc = 0x1e1760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1764: 0x7bb20030
    ctx->pc = 0x1e1764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1768: 0x7bb10020
    ctx->pc = 0x1e1768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e176c: 0x7bb00010
    ctx->pc = 0x1e176cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1770: 0xc7b40000
    ctx->pc = 0x1e1770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1774: 0x3e00008
    ctx->pc = 0x1E1774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1778u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E16C8u: goto label_1e16c8;
            case 0x1E1714u: goto label_1e1714;
            case 0x1E175Cu: goto label_1e175c;
            case 0x1E1760u: goto label_1e1760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E177Cu;
}
