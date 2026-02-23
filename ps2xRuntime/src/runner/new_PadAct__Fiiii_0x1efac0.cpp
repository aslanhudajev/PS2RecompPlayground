#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_PadAct__Fiiii
// Address: 0x1efac0 - 0x1efc48
void new_PadAct__Fiiii_0x1efac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_PadAct__Fiiii");


    ctx->pc = 0x1efac0u;

    // 0x1efac0: 0x27bdff90
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1efac4: 0x7fbf0060
    ctx->pc = 0x1efac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1efac8: 0x7fb50050
    ctx->pc = 0x1efac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1efacc: 0x7fb40040
    ctx->pc = 0x1efaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1efad0: 0x7fb30030
    ctx->pc = 0x1efad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efad4: 0x7fb20020
    ctx->pc = 0x1efad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1efad8: 0x7fb10010
    ctx->pc = 0x1efad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efadc: 0x7fb00000
    ctx->pc = 0x1efadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efae0: 0x24100001
    ctx->pc = 0x1efae0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efae4: 0x70809e28
    ctx->pc = 0x1efae4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1efae8: 0x70a09628
    ctx->pc = 0x1efae8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1efaec: 0x14f00003
    ctx->pc = 0x1EFAECu;
    {
        const bool branch_taken_0x1efaec = (GPR_U32(ctx, 7) != GPR_U32(ctx, 16));
        ctx->pc = 0x1EFAF0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1efaec) {
            ctx->pc = 0x1EFAFCu;
            goto label_1efafc;
        }
    }
    ctx->pc = 0x1EFAF4u;
    // 0x1efaf4: 0x1000000f
    ctx->pc = 0x1EFAF4u;
    {
        const bool branch_taken_0x1efaf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1efaf4) {
            ctx->pc = 0x1EFB34u;
            goto label_1efb34;
        }
    }
    ctx->pc = 0x1EFAFCu;
label_1efafc:
    // 0x1efafc: 0x71080
    ctx->pc = 0x1efafcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1efb00: 0x471821
    ctx->pc = 0x1efb00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1efb04: 0x31080
    ctx->pc = 0x1efb04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1efb08: 0x621021
    ctx->pc = 0x1efb08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1efb0c: 0x22040
    ctx->pc = 0x1efb0cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1efb10: 0x3c028888
    ctx->pc = 0x1efb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
    // 0x1efb14: 0x34428889
    ctx->pc = 0x1efb14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1efb18: 0x440018
    ctx->pc = 0x1efb18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1efb1c: 0x41fc2
    ctx->pc = 0x1efb1cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x1efb20: 0x0
    ctx->pc = 0x1efb20u;
    // NOP
    // 0x1efb24: 0x1010
    ctx->pc = 0x1efb24u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1efb28: 0x441021
    ctx->pc = 0x1efb28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1efb2c: 0x21143
    ctx->pc = 0x1efb2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1efb30: 0x438021
    ctx->pc = 0x1efb30u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efb34:
    // 0x1efb34: 0x16400005
    ctx->pc = 0x1EFB34u;
    {
        const bool branch_taken_0x1efb34 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EFB38u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1efb34) {
            ctx->pc = 0x1EFB4Cu;
            goto label_1efb4c;
        }
    }
    ctx->pc = 0x1EFB3Cu;
    // 0x1efb3c: 0x70001e28
    ctx->pc = 0x1efb3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efb40: 0x24020001
    ctx->pc = 0x1efb40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb44: 0x51180b
    ctx->pc = 0x1efb44u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x1efb48: 0x70608e28
    ctx->pc = 0x1efb48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1efb4c:
    // 0x1efb4c: 0x8423e504
    ctx->pc = 0x1efb4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1efb50: 0x2402000a
    ctx->pc = 0x1efb50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efb54: 0x1462001f
    ctx->pc = 0x1EFB54u;
    {
        const bool branch_taken_0x1efb54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1efb54) {
            ctx->pc = 0x1EFBD4u;
            goto label_1efbd4;
        }
    }
    ctx->pc = 0x1EFB5Cu;
    // 0x1efb5c: 0x8f838bcc
    ctx->pc = 0x1efb5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1efb60: 0x24020002
    ctx->pc = 0x1efb60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efb64: 0x1462001b
    ctx->pc = 0x1EFB64u;
    {
        const bool branch_taken_0x1efb64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1efb64) {
            ctx->pc = 0x1EFBD4u;
            goto label_1efbd4;
        }
    }
    ctx->pc = 0x1EFB6Cu;
    // 0x1efb6c: 0x8f958ccc
    ctx->pc = 0x1efb6cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1efb70: 0x12a00003
    ctx->pc = 0x1EFB70u;
    {
        const bool branch_taken_0x1efb70 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x1efb70) {
            ctx->pc = 0x1EFB80u;
            goto label_1efb80;
        }
    }
    ctx->pc = 0x1EFB78u;
    // 0x1efb78: 0x8eb50000
    ctx->pc = 0x1efb78u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1efb7c: 0x0
    ctx->pc = 0x1efb7cu;
    // NOP
label_1efb80:
    // 0x1efb80: 0xc06903c
    ctx->pc = 0x1EFB80u;
    SET_GPR_U32(ctx, 31, 0x1EFB88u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB88u; }
        else if (ctx->pc != 0x1EFB88u) { ctx->pc = 0x1EFB88u; }
    }
    if (ctx->pc != 0x1EFB88u) { return; }
    ctx->pc = 0x1EFB88u;
    // 0x1efb88: 0xc06903c
    ctx->pc = 0x1EFB88u;
    SET_GPR_U32(ctx, 31, 0x1EFB90u);
    ctx->pc = 0x1EFB8Cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB90u; }
        else if (ctx->pc != 0x1EFB90u) { ctx->pc = 0x1EFB90u; }
    }
    if (ctx->pc != 0x1EFB90u) { return; }
    ctx->pc = 0x1EFB90u;
    // 0x1efb90: 0x8c420010
    ctx->pc = 0x1efb90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1efb94: 0x8e860010
    ctx->pc = 0x1efb94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1efb98: 0x72a04628
    ctx->pc = 0x1efb98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1efb9c: 0x24040060
    ctx->pc = 0x1efb9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1efba0: 0x8c470014
    ctx->pc = 0x1efba0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1efba4: 0xc069040
    ctx->pc = 0x1EFBA4u;
    SET_GPR_U32(ctx, 31, 0x1EFBACu);
    ctx->pc = 0x1EFBA8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBACu; }
        else if (ctx->pc != 0x1EFBACu) { ctx->pc = 0x1EFBACu; }
    }
    if (ctx->pc != 0x1EFBACu) { return; }
    ctx->pc = 0x1EFBACu;
    // 0x1efbac: 0x70402628
    ctx->pc = 0x1efbacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1efbb0: 0x1080001c
    ctx->pc = 0x1EFBB0u;
    {
        const bool branch_taken_0x1efbb0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFBB4u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1efbb0) {
            ctx->pc = 0x1EFC24u;
            goto label_1efc24;
        }
    }
    ctx->pc = 0x1EFBB8u;
    // 0x1efbb8: 0x72403e28
    ctx->pc = 0x1efbb8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1efbbc: 0x72204628
    ctx->pc = 0x1efbbcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1efbc0: 0x72004e28
    ctx->pc = 0x1efbc0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1efbc4: 0xc07bde4
    ctx->pc = 0x1EFBC4u;
    SET_GPR_U32(ctx, 31, 0x1EFBCCu);
    ctx->pc = 0x1EFBC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1EF790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PadActTaskFiiii_0x1ef790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBCCu; }
        else if (ctx->pc != 0x1EFBCCu) { ctx->pc = 0x1EFBCCu; }
    }
    if (ctx->pc != 0x1EFBCCu) { return; }
    ctx->pc = 0x1EFBCCu;
    // 0x1efbcc: 0x10000016
    ctx->pc = 0x1EFBCCu;
    {
        const bool branch_taken_0x1efbcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFBD0u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1efbcc) {
            ctx->pc = 0x1EFC28u;
            goto label_1efc28;
        }
    }
    ctx->pc = 0x1EFBD4u;
label_1efbd4:
    // 0x1efbd4: 0xc06903c
    ctx->pc = 0x1EFBD4u;
    SET_GPR_U32(ctx, 31, 0x1EFBDCu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBDCu; }
        else if (ctx->pc != 0x1EFBDCu) { ctx->pc = 0x1EFBDCu; }
    }
    if (ctx->pc != 0x1EFBDCu) { return; }
    ctx->pc = 0x1EFBDCu;
    // 0x1efbdc: 0xc06903c
    ctx->pc = 0x1EFBDCu;
    SET_GPR_U32(ctx, 31, 0x1EFBE4u);
    ctx->pc = 0x1EFBE0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBE4u; }
        else if (ctx->pc != 0x1EFBE4u) { ctx->pc = 0x1EFBE4u; }
    }
    if (ctx->pc != 0x1EFBE4u) { return; }
    ctx->pc = 0x1EFBE4u;
    // 0x1efbe4: 0xc06903c
    ctx->pc = 0x1EFBE4u;
    SET_GPR_U32(ctx, 31, 0x1EFBECu);
    ctx->pc = 0x1EFBE8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBECu; }
        else if (ctx->pc != 0x1EFBECu) { ctx->pc = 0x1EFBECu; }
    }
    if (ctx->pc != 0x1EFBECu) { return; }
    ctx->pc = 0x1EFBECu;
    // 0x1efbec: 0x8ea60010
    ctx->pc = 0x1efbecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1efbf0: 0x8e870014
    ctx->pc = 0x1efbf0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1efbf4: 0x24040060
    ctx->pc = 0x1efbf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1efbf8: 0x70002e28
    ctx->pc = 0x1efbf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbfc: 0xc069040
    ctx->pc = 0x1EFBFCu;
    SET_GPR_U32(ctx, 31, 0x1EFC04u);
    ctx->pc = 0x1EFC00u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC04u; }
        else if (ctx->pc != 0x1EFC04u) { ctx->pc = 0x1EFC04u; }
    }
    if (ctx->pc != 0x1EFC04u) { return; }
    ctx->pc = 0x1EFC04u;
    // 0x1efc04: 0x70402628
    ctx->pc = 0x1efc04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1efc08: 0x10800006
    ctx->pc = 0x1EFC08u;
    {
        const bool branch_taken_0x1efc08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFC0Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1efc08) {
            ctx->pc = 0x1EFC24u;
            goto label_1efc24;
        }
    }
    ctx->pc = 0x1EFC10u;
    // 0x1efc10: 0x72403e28
    ctx->pc = 0x1efc10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1efc14: 0x72204628
    ctx->pc = 0x1efc14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1efc18: 0x72004e28
    ctx->pc = 0x1efc18u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1efc1c: 0xc07bde4
    ctx->pc = 0x1EFC1Cu;
    SET_GPR_U32(ctx, 31, 0x1EFC24u);
    ctx->pc = 0x1EFC20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1EF790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PadActTaskFiiii_0x1ef790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFC24u; }
        else if (ctx->pc != 0x1EFC24u) { ctx->pc = 0x1EFC24u; }
    }
    if (ctx->pc != 0x1EFC24u) { return; }
    ctx->pc = 0x1EFC24u;
label_1efc24:
    // 0x1efc24: 0x7bbf0060
    ctx->pc = 0x1efc24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1efc28:
    // 0x1efc28: 0x7bb50050
    ctx->pc = 0x1efc28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efc2c: 0x7bb40040
    ctx->pc = 0x1efc2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efc30: 0x7bb30030
    ctx->pc = 0x1efc30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efc34: 0x7bb20020
    ctx->pc = 0x1efc34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efc38: 0x7bb10010
    ctx->pc = 0x1efc38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efc3c: 0x7bb00000
    ctx->pc = 0x1efc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efc40: 0x3e00008
    ctx->pc = 0x1EFC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFC44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFAFCu: goto label_1efafc;
            case 0x1EFB34u: goto label_1efb34;
            case 0x1EFB4Cu: goto label_1efb4c;
            case 0x1EFB80u: goto label_1efb80;
            case 0x1EFBD4u: goto label_1efbd4;
            case 0x1EFC24u: goto label_1efc24;
            case 0x1EFC28u: goto label_1efc28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFC48u;
}
