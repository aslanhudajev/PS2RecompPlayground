#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitIO__Fv
// Address: 0x1eed30 - 0x1eee4c
void InitIO__Fv_0x1eed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitIO__Fv");


    ctx->pc = 0x1eed30u;

    // 0x1eed30: 0x27bdffe0
    ctx->pc = 0x1eed30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eed34: 0x3c020027
    ctx->pc = 0x1eed34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eed38: 0x7fbf0010
    ctx->pc = 0x1eed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1eed3c: 0x2444c610
    ctx->pc = 0x1eed3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952464));
    // 0x1eed40: 0x70002e28
    ctx->pc = 0x1eed40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eed44: 0x70003628
    ctx->pc = 0x1eed44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eed48: 0xc0570d8
    ctx->pc = 0x1EED48u;
    SET_GPR_U32(ctx, 31, 0x1EED50u);
    ctx->pc = 0x1EED4Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x15C360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED50u; }
        else if (ctx->pc != 0x1EED50u) { ctx->pc = 0x1EED50u; }
    }
    if (ctx->pc != 0x1EED50u) { return; }
    ctx->pc = 0x1EED50u;
    // 0x1eed50: 0x4410006
    ctx->pc = 0x1EED50u;
    {
        const bool branch_taken_0x1eed50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1eed50) {
            ctx->pc = 0x1EED6Cu;
            goto label_1eed6c;
        }
    }
    ctx->pc = 0x1EED58u;
    // 0x1eed58: 0x3c020027
    ctx->pc = 0x1eed58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eed5c: 0xc05114a
    ctx->pc = 0x1EED5Cu;
    SET_GPR_U32(ctx, 31, 0x1EED64u);
    ctx->pc = 0x1EED60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952496));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED64u; }
        else if (ctx->pc != 0x1EED64u) { ctx->pc = 0x1EED64u; }
    }
    if (ctx->pc != 0x1EED64u) { return; }
    ctx->pc = 0x1EED64u;
    // 0x1eed64: 0xc05058e
    ctx->pc = 0x1EED64u;
    SET_GPR_U32(ctx, 31, 0x1EED6Cu);
    ctx->pc = 0x1EED68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x141638u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x141638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED6Cu; }
        else if (ctx->pc != 0x1EED6Cu) { ctx->pc = 0x1EED6Cu; }
    }
    if (ctx->pc != 0x1EED6Cu) { return; }
    ctx->pc = 0x1EED6Cu;
label_1eed6c:
    // 0x1eed6c: 0x3c020027
    ctx->pc = 0x1eed6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eed70: 0x2444c650
    ctx->pc = 0x1eed70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952528));
    // 0x1eed74: 0x70002e28
    ctx->pc = 0x1eed74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eed78: 0xc0570d8
    ctx->pc = 0x1EED78u;
    SET_GPR_U32(ctx, 31, 0x1EED80u);
    ctx->pc = 0x1EED7Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15C360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED80u; }
        else if (ctx->pc != 0x1EED80u) { ctx->pc = 0x1EED80u; }
    }
    if (ctx->pc != 0x1EED80u) { return; }
    ctx->pc = 0x1EED80u;
    // 0x1eed80: 0x4410006
    ctx->pc = 0x1EED80u;
    {
        const bool branch_taken_0x1eed80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1eed80) {
            ctx->pc = 0x1EED9Cu;
            goto label_1eed9c;
        }
    }
    ctx->pc = 0x1EED88u;
    // 0x1eed88: 0x3c020027
    ctx->pc = 0x1eed88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eed8c: 0xc05114a
    ctx->pc = 0x1EED8Cu;
    SET_GPR_U32(ctx, 31, 0x1EED94u);
    ctx->pc = 0x1EED90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952560));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED94u; }
        else if (ctx->pc != 0x1EED94u) { ctx->pc = 0x1EED94u; }
    }
    if (ctx->pc != 0x1EED94u) { return; }
    ctx->pc = 0x1EED94u;
    // 0x1eed94: 0xc05058e
    ctx->pc = 0x1EED94u;
    SET_GPR_U32(ctx, 31, 0x1EED9Cu);
    ctx->pc = 0x1EED98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x141638u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x141638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED9Cu; }
        else if (ctx->pc != 0x1EED9Cu) { ctx->pc = 0x1EED9Cu; }
    }
    if (ctx->pc != 0x1EED9Cu) { return; }
    ctx->pc = 0x1EED9Cu;
label_1eed9c:
    // 0x1eed9c: 0x3c020027
    ctx->pc = 0x1eed9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eeda0: 0x2444c690
    ctx->pc = 0x1eeda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x1eeda4: 0x70002e28
    ctx->pc = 0x1eeda4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eeda8: 0xc0570d8
    ctx->pc = 0x1EEDA8u;
    SET_GPR_U32(ctx, 31, 0x1EEDB0u);
    ctx->pc = 0x1EEDACu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x15C360u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadModule_0x15c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDB0u; }
        else if (ctx->pc != 0x1EEDB0u) { ctx->pc = 0x1EEDB0u; }
    }
    if (ctx->pc != 0x1EEDB0u) { return; }
    ctx->pc = 0x1EEDB0u;
    // 0x1eedb0: 0x4410007
    ctx->pc = 0x1EEDB0u;
    {
        const bool branch_taken_0x1eedb0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EEDB4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eedb0) {
            ctx->pc = 0x1EEDD0u;
            goto label_1eedd0;
        }
    }
    ctx->pc = 0x1EEDB8u;
    // 0x1eedb8: 0x3c020027
    ctx->pc = 0x1eedb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eedbc: 0xc05114a
    ctx->pc = 0x1EEDBCu;
    SET_GPR_U32(ctx, 31, 0x1EEDC4u);
    ctx->pc = 0x1EEDC0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952624));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDC4u; }
        else if (ctx->pc != 0x1EEDC4u) { ctx->pc = 0x1EEDC4u; }
    }
    if (ctx->pc != 0x1EEDC4u) { return; }
    ctx->pc = 0x1EEDC4u;
    // 0x1eedc4: 0xc05058e
    ctx->pc = 0x1EEDC4u;
    SET_GPR_U32(ctx, 31, 0x1EEDCCu);
    ctx->pc = 0x1EEDC8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x141638u;
    {
        const uint32_t __entryPc = ctx->pc;
        exit_0x141638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDCCu; }
        else if (ctx->pc != 0x1EEDCCu) { ctx->pc = 0x1EEDCCu; }
    }
    if (ctx->pc != 0x1EEDCCu) { return; }
    ctx->pc = 0x1EEDCCu;
    // 0x1eedcc: 0x70002628
    ctx->pc = 0x1eedccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1eedd0:
    // 0x1eedd0: 0xc0593de
    ctx->pc = 0x1EEDD0u;
    SET_GPR_U32(ctx, 31, 0x1EEDD8u);
    ctx->pc = 0x164F78u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadInit_0x164f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDD8u; }
        else if (ctx->pc != 0x1EEDD8u) { ctx->pc = 0x1EEDD8u; }
    }
    if (ctx->pc != 0x1EEDD8u) { return; }
    ctx->pc = 0x1EEDD8u;
    // 0x1eedd8: 0x1000000f
    ctx->pc = 0x1EEDD8u;
    {
        const bool branch_taken_0x1eedd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEDDCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eedd8) {
            ctx->pc = 0x1EEE18u;
            goto label_1eee18;
        }
    }
    ctx->pc = 0x1EEDE0u;
label_1eede0:
    // 0x1eede0: 0x101a00
    ctx->pc = 0x1eede0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 8));
    // 0x1eede4: 0x24424d40
    ctx->pc = 0x1eede4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19776));
    // 0x1eede8: 0x433021
    ctx->pc = 0x1eede8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eedec: 0x72002628
    ctx->pc = 0x1eedecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eedf0: 0xc059476
    ctx->pc = 0x1EEDF0u;
    SET_GPR_U32(ctx, 31, 0x1EEDF8u);
    ctx->pc = 0x1EEDF4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1651D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadPortOpen_0x1651d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEDF8u; }
        else if (ctx->pc != 0x1EEDF8u) { ctx->pc = 0x1EEDF8u; }
    }
    if (ctx->pc != 0x1EEDF8u) { return; }
    ctx->pc = 0x1EEDF8u;
    // 0x1eedf8: 0x54400006
    ctx->pc = 0x1EEDF8u;
    {
        const bool branch_taken_0x1eedf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eedf8) {
            ctx->pc = 0x1EEDFCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1EEE14u;
            goto label_1eee14;
        }
    }
    ctx->pc = 0x1EEE00u;
    // 0x1eee00: 0x3c020027
    ctx->pc = 0x1eee00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1eee04: 0xc05114a
    ctx->pc = 0x1EEE04u;
    SET_GPR_U32(ctx, 31, 0x1EEE0Cu);
    ctx->pc = 0x1EEE08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952656));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE0Cu; }
        else if (ctx->pc != 0x1EEE0Cu) { ctx->pc = 0x1EEE0Cu; }
    }
    if (ctx->pc != 0x1EEE0Cu) { return; }
    ctx->pc = 0x1EEE0Cu;
    // 0x1eee0c: 0xd
    ctx->pc = 0x1eee0cu;
    runtime->handleBreak(rdram, ctx);
    // 0x1eee10: 0x26100001
    ctx->pc = 0x1eee10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1eee14:
    // 0x1eee14: 0x0
    ctx->pc = 0x1eee14u;
    // NOP
label_1eee18:
    // 0x1eee18: 0x2a020002
    ctx->pc = 0x1eee18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1eee1c: 0x1440fff0
    ctx->pc = 0x1EEE1Cu;
    {
        const bool branch_taken_0x1eee1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EEE20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1eee1c) {
            ctx->pc = 0x1EEDE0u;
            goto label_1eede0;
        }
    }
    ctx->pc = 0x1EEE24u;
    // 0x1eee24: 0xc07ab64
    ctx->pc = 0x1EEE24u;
    SET_GPR_U32(ctx, 31, 0x1EEE2Cu);
    ctx->pc = 0x1EAD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGunAdjustPara__Fv_0x1ead90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE2Cu; }
        else if (ctx->pc != 0x1EEE2Cu) { ctx->pc = 0x1EEE2Cu; }
    }
    if (ctx->pc != 0x1EEE2Cu) { return; }
    ctx->pc = 0x1EEE2Cu;
    // 0x1eee2c: 0xc07b4b8
    ctx->pc = 0x1EEE2Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE34u);
    ctx->pc = 0x1ED2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        guncon2_init__Fv_0x1ed2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE34u; }
        else if (ctx->pc != 0x1EEE34u) { ctx->pc = 0x1EEE34u; }
    }
    if (ctx->pc != 0x1EEE34u) { return; }
    ctx->pc = 0x1EEE34u;
    // 0x1eee34: 0xc07bd24
    ctx->pc = 0x1EEE34u;
    SET_GPR_U32(ctx, 31, 0x1EEE3Cu);
    ctx->pc = 0x1EF490u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitPadAct__Fv_0x1ef490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEE3Cu; }
        else if (ctx->pc != 0x1EEE3Cu) { ctx->pc = 0x1EEE3Cu; }
    }
    if (ctx->pc != 0x1EEE3Cu) { return; }
    ctx->pc = 0x1EEE3Cu;
    // 0x1eee3c: 0x7bbf0010
    ctx->pc = 0x1eee3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eee40: 0x7bb00000
    ctx->pc = 0x1eee40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eee44: 0x3e00008
    ctx->pc = 0x1EEE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEE48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EED6Cu: goto label_1eed6c;
            case 0x1EED9Cu: goto label_1eed9c;
            case 0x1EEDD0u: goto label_1eedd0;
            case 0x1EEDE0u: goto label_1eede0;
            case 0x1EEE14u: goto label_1eee14;
            case 0x1EEE18u: goto label_1eee18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EEE4Cu;
}
