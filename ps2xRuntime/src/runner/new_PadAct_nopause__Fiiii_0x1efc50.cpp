#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_PadAct_nopause__Fiiii
// Address: 0x1efc50 - 0x1efde0
void new_PadAct_nopause__Fiiii_0x1efc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_PadAct_nopause__Fiiii");


    ctx->pc = 0x1efc50u;

    // 0x1efc50: 0x27bdff90
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1efc54: 0x7fbf0060
    ctx->pc = 0x1efc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1efc58: 0x7fb50050
    ctx->pc = 0x1efc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1efc5c: 0x7fb40040
    ctx->pc = 0x1efc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1efc60: 0x7fb30030
    ctx->pc = 0x1efc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efc64: 0x7fb20020
    ctx->pc = 0x1efc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1efc68: 0x7fb10010
    ctx->pc = 0x1efc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efc6c: 0x7fb00000
    ctx->pc = 0x1efc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efc70: 0x24100001
    ctx->pc = 0x1efc70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc74: 0x70809e28
    ctx->pc = 0x1efc74u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1efc78: 0x70a09628
    ctx->pc = 0x1efc78u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1efc7c: 0x14f00003
    ctx->pc = 0x1EFC7Cu;
    {
        const bool branch_taken_0x1efc7c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 16));
        ctx->pc = 0x1EFC80u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1efc7c) {
            ctx->pc = 0x1EFC8Cu;
            goto label_1efc8c;
        }
    }
    ctx->pc = 0x1EFC84u;
    // 0x1efc84: 0x1000000f
    ctx->pc = 0x1EFC84u;
    {
        const bool branch_taken_0x1efc84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1efc84) {
            ctx->pc = 0x1EFCC4u;
            goto label_1efcc4;
        }
    }
    ctx->pc = 0x1EFC8Cu;
label_1efc8c:
    // 0x1efc8c: 0x71080
    ctx->pc = 0x1efc8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1efc90: 0x471821
    ctx->pc = 0x1efc90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1efc94: 0x31080
    ctx->pc = 0x1efc94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1efc98: 0x621021
    ctx->pc = 0x1efc98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1efc9c: 0x22040
    ctx->pc = 0x1efc9cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1efca0: 0x3c028888
    ctx->pc = 0x1efca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34952 << 16));
    // 0x1efca4: 0x34428889
    ctx->pc = 0x1efca4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x1efca8: 0x440018
    ctx->pc = 0x1efca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1efcac: 0x41fc2
    ctx->pc = 0x1efcacu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 31));
    // 0x1efcb0: 0x0
    ctx->pc = 0x1efcb0u;
    // NOP
    // 0x1efcb4: 0x1010
    ctx->pc = 0x1efcb4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1efcb8: 0x441021
    ctx->pc = 0x1efcb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1efcbc: 0x21143
    ctx->pc = 0x1efcbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1efcc0: 0x438021
    ctx->pc = 0x1efcc0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1efcc4:
    // 0x1efcc4: 0x16400005
    ctx->pc = 0x1EFCC4u;
    {
        const bool branch_taken_0x1efcc4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EFCC8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1efcc4) {
            ctx->pc = 0x1EFCDCu;
            goto label_1efcdc;
        }
    }
    ctx->pc = 0x1EFCCCu;
    // 0x1efccc: 0x70001e28
    ctx->pc = 0x1efcccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efcd0: 0x24020001
    ctx->pc = 0x1efcd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efcd4: 0x51180b
    ctx->pc = 0x1efcd4u;
    if (GPR_U32(ctx, 17) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
    // 0x1efcd8: 0x70608e28
    ctx->pc = 0x1efcd8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1efcdc:
    // 0x1efcdc: 0x8423e504
    ctx->pc = 0x1efcdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1efce0: 0x2402000a
    ctx->pc = 0x1efce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efce4: 0x14620020
    ctx->pc = 0x1EFCE4u;
    {
        const bool branch_taken_0x1efce4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1efce4) {
            ctx->pc = 0x1EFD68u;
            goto label_1efd68;
        }
    }
    ctx->pc = 0x1EFCECu;
    // 0x1efcec: 0x8f838bcc
    ctx->pc = 0x1efcecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1efcf0: 0x24020002
    ctx->pc = 0x1efcf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efcf4: 0x1462001c
    ctx->pc = 0x1EFCF4u;
    {
        const bool branch_taken_0x1efcf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1efcf4) {
            ctx->pc = 0x1EFD68u;
            goto label_1efd68;
        }
    }
    ctx->pc = 0x1EFCFCu;
    // 0x1efcfc: 0x8f958ccc
    ctx->pc = 0x1efcfcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x1efd00: 0x12a00003
    ctx->pc = 0x1EFD00u;
    {
        const bool branch_taken_0x1efd00 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x1efd00) {
            ctx->pc = 0x1EFD10u;
            goto label_1efd10;
        }
    }
    ctx->pc = 0x1EFD08u;
    // 0x1efd08: 0x8eb50000
    ctx->pc = 0x1efd08u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1efd0c: 0x0
    ctx->pc = 0x1efd0cu;
    // NOP
label_1efd10:
    // 0x1efd10: 0xc06903c
    ctx->pc = 0x1EFD10u;
    SET_GPR_U32(ctx, 31, 0x1EFD18u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD18u; }
        else if (ctx->pc != 0x1EFD18u) { ctx->pc = 0x1EFD18u; }
    }
    if (ctx->pc != 0x1EFD18u) { return; }
    ctx->pc = 0x1EFD18u;
    // 0x1efd18: 0xc06903c
    ctx->pc = 0x1EFD18u;
    SET_GPR_U32(ctx, 31, 0x1EFD20u);
    ctx->pc = 0x1EFD1Cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD20u; }
        else if (ctx->pc != 0x1EFD20u) { ctx->pc = 0x1EFD20u; }
    }
    if (ctx->pc != 0x1EFD20u) { return; }
    ctx->pc = 0x1EFD20u;
    // 0x1efd20: 0x8c420010
    ctx->pc = 0x1efd20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1efd24: 0x8e860010
    ctx->pc = 0x1efd24u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1efd28: 0x72a04628
    ctx->pc = 0x1efd28u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1efd2c: 0x24040060
    ctx->pc = 0x1efd2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1efd30: 0x8c470014
    ctx->pc = 0x1efd30u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1efd34: 0xc069040
    ctx->pc = 0x1EFD34u;
    SET_GPR_U32(ctx, 31, 0x1EFD3Cu);
    ctx->pc = 0x1EFD38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD3Cu; }
        else if (ctx->pc != 0x1EFD3Cu) { ctx->pc = 0x1EFD3Cu; }
    }
    if (ctx->pc != 0x1EFD3Cu) { return; }
    ctx->pc = 0x1EFD3Cu;
    // 0x1efd3c: 0x70402628
    ctx->pc = 0x1efd3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1efd40: 0x1080001e
    ctx->pc = 0x1EFD40u;
    {
        const bool branch_taken_0x1efd40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFD44u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1efd40) {
            ctx->pc = 0x1EFDBCu;
            goto label_1efdbc;
        }
    }
    ctx->pc = 0x1EFD48u;
    // 0x1efd48: 0x72603e28
    ctx->pc = 0x1efd48u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1efd4c: 0x72404628
    ctx->pc = 0x1efd4cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1efd50: 0x72204e28
    ctx->pc = 0x1efd50u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1efd54: 0x72005628
    ctx->pc = 0x1efd54u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1efd58: 0xc07be24
    ctx->pc = 0x1EFD58u;
    SET_GPR_U32(ctx, 31, 0x1EFD60u);
    ctx->pc = 0x1EFD5Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF890u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PadActTaskFiiiii_0x1ef890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD60u; }
        else if (ctx->pc != 0x1EFD60u) { ctx->pc = 0x1EFD60u; }
    }
    if (ctx->pc != 0x1EFD60u) { return; }
    ctx->pc = 0x1EFD60u;
    // 0x1efd60: 0x10000017
    ctx->pc = 0x1EFD60u;
    {
        const bool branch_taken_0x1efd60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFD64u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1efd60) {
            ctx->pc = 0x1EFDC0u;
            goto label_1efdc0;
        }
    }
    ctx->pc = 0x1EFD68u;
label_1efd68:
    // 0x1efd68: 0xc06903c
    ctx->pc = 0x1EFD68u;
    SET_GPR_U32(ctx, 31, 0x1EFD70u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD70u; }
        else if (ctx->pc != 0x1EFD70u) { ctx->pc = 0x1EFD70u; }
    }
    if (ctx->pc != 0x1EFD70u) { return; }
    ctx->pc = 0x1EFD70u;
    // 0x1efd70: 0xc06903c
    ctx->pc = 0x1EFD70u;
    SET_GPR_U32(ctx, 31, 0x1EFD78u);
    ctx->pc = 0x1EFD74u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD78u; }
        else if (ctx->pc != 0x1EFD78u) { ctx->pc = 0x1EFD78u; }
    }
    if (ctx->pc != 0x1EFD78u) { return; }
    ctx->pc = 0x1EFD78u;
    // 0x1efd78: 0xc06903c
    ctx->pc = 0x1EFD78u;
    SET_GPR_U32(ctx, 31, 0x1EFD80u);
    ctx->pc = 0x1EFD7Cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD80u; }
        else if (ctx->pc != 0x1EFD80u) { ctx->pc = 0x1EFD80u; }
    }
    if (ctx->pc != 0x1EFD80u) { return; }
    ctx->pc = 0x1EFD80u;
    // 0x1efd80: 0x8ea60010
    ctx->pc = 0x1efd80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1efd84: 0x8e870014
    ctx->pc = 0x1efd84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1efd88: 0x24040060
    ctx->pc = 0x1efd88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1efd8c: 0x70002e28
    ctx->pc = 0x1efd8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efd90: 0xc069040
    ctx->pc = 0x1EFD90u;
    SET_GPR_U32(ctx, 31, 0x1EFD98u);
    ctx->pc = 0x1EFD94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFD98u; }
        else if (ctx->pc != 0x1EFD98u) { ctx->pc = 0x1EFD98u; }
    }
    if (ctx->pc != 0x1EFD98u) { return; }
    ctx->pc = 0x1EFD98u;
    // 0x1efd98: 0x70402628
    ctx->pc = 0x1efd98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1efd9c: 0x10800007
    ctx->pc = 0x1EFD9Cu;
    {
        const bool branch_taken_0x1efd9c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFDA0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1efd9c) {
            ctx->pc = 0x1EFDBCu;
            goto label_1efdbc;
        }
    }
    ctx->pc = 0x1EFDA4u;
    // 0x1efda4: 0x72603e28
    ctx->pc = 0x1efda4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1efda8: 0x72404628
    ctx->pc = 0x1efda8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1efdac: 0x72204e28
    ctx->pc = 0x1efdacu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1efdb0: 0x72005628
    ctx->pc = 0x1efdb0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1efdb4: 0xc07be24
    ctx->pc = 0x1EFDB4u;
    SET_GPR_U32(ctx, 31, 0x1EFDBCu);
    ctx->pc = 0x1EFDB8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EF890u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10PadActTaskFiiiii_0x1ef890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDBCu; }
        else if (ctx->pc != 0x1EFDBCu) { ctx->pc = 0x1EFDBCu; }
    }
    if (ctx->pc != 0x1EFDBCu) { return; }
    ctx->pc = 0x1EFDBCu;
label_1efdbc:
    // 0x1efdbc: 0x7bbf0060
    ctx->pc = 0x1efdbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1efdc0:
    // 0x1efdc0: 0x7bb50050
    ctx->pc = 0x1efdc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1efdc4: 0x7bb40040
    ctx->pc = 0x1efdc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1efdc8: 0x7bb30030
    ctx->pc = 0x1efdc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efdcc: 0x7bb20020
    ctx->pc = 0x1efdccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efdd0: 0x7bb10010
    ctx->pc = 0x1efdd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efdd4: 0x7bb00000
    ctx->pc = 0x1efdd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efdd8: 0x3e00008
    ctx->pc = 0x1EFDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFDDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFDE0u;
}
