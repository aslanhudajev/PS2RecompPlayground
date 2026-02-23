#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_TrnKomono2Task__FP11ENEMY_TABLE
// Address: 0x223b70 - 0x223c60
void new_TrnKomono2Task__FP11ENEMY_TABLE_0x223b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_TrnKomono2Task__FP11ENEMY_TABLE");


    ctx->pc = 0x223b70u;

    // 0x223b70: 0x27bdffc0
    ctx->pc = 0x223b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x223b74: 0x7fbf0030
    ctx->pc = 0x223b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x223b78: 0x7fb20020
    ctx->pc = 0x223b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x223b7c: 0x7fb10010
    ctx->pc = 0x223b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223b80: 0x7fb00000
    ctx->pc = 0x223b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223b84: 0x3c010050
    ctx->pc = 0x223b84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x223b88: 0x8423e504
    ctx->pc = 0x223b88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x223b8c: 0x2402000a
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x223b90: 0x1462001c
    ctx->pc = 0x223B90u;
    {
        const bool branch_taken_0x223b90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x223B94u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223b90) {
            ctx->pc = 0x223C04u;
            goto label_223c04;
        }
    }
    ctx->pc = 0x223B98u;
    // 0x223b98: 0x8f838bcc
    ctx->pc = 0x223b98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x223b9c: 0x24020002
    ctx->pc = 0x223b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x223ba0: 0x14620018
    ctx->pc = 0x223BA0u;
    {
        const bool branch_taken_0x223ba0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x223ba0) {
            ctx->pc = 0x223C04u;
            goto label_223c04;
        }
    }
    ctx->pc = 0x223BA8u;
    // 0x223ba8: 0x8f928ccc
    ctx->pc = 0x223ba8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x223bac: 0x12400003
    ctx->pc = 0x223BACu;
    {
        const bool branch_taken_0x223bac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x223bac) {
            ctx->pc = 0x223BBCu;
            goto label_223bbc;
        }
    }
    ctx->pc = 0x223BB4u;
    // 0x223bb4: 0x8e520000
    ctx->pc = 0x223bb4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x223bb8: 0x0
    ctx->pc = 0x223bb8u;
    // NOP
label_223bbc:
    // 0x223bbc: 0xc06903c
    ctx->pc = 0x223BBCu;
    SET_GPR_U32(ctx, 31, 0x223BC4u);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BC4u; }
        else if (ctx->pc != 0x223BC4u) { ctx->pc = 0x223BC4u; }
    }
    if (ctx->pc != 0x223BC4u) { return; }
    ctx->pc = 0x223BC4u;
    // 0x223bc4: 0xc06903c
    ctx->pc = 0x223BC4u;
    SET_GPR_U32(ctx, 31, 0x223BCCu);
    ctx->pc = 0x223BC8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BCCu; }
        else if (ctx->pc != 0x223BCCu) { ctx->pc = 0x223BCCu; }
    }
    if (ctx->pc != 0x223BCCu) { return; }
    ctx->pc = 0x223BCCu;
    // 0x223bcc: 0x8c420010
    ctx->pc = 0x223bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x223bd0: 0x8e260010
    ctx->pc = 0x223bd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x223bd4: 0x72404628
    ctx->pc = 0x223bd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x223bd8: 0x240401c0
    ctx->pc = 0x223bd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x223bdc: 0x8c470014
    ctx->pc = 0x223bdcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x223be0: 0xc069040
    ctx->pc = 0x223BE0u;
    SET_GPR_U32(ctx, 31, 0x223BE8u);
    ctx->pc = 0x223BE4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BE8u; }
        else if (ctx->pc != 0x223BE8u) { ctx->pc = 0x223BE8u; }
    }
    if (ctx->pc != 0x223BE8u) { return; }
    ctx->pc = 0x223BE8u;
    // 0x223be8: 0x70402628
    ctx->pc = 0x223be8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223bec: 0x10800016
    ctx->pc = 0x223BECu;
    {
        const bool branch_taken_0x223bec = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x223BF0u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223bec) {
            ctx->pc = 0x223C48u;
            goto label_223c48;
        }
    }
    ctx->pc = 0x223BF4u;
    // 0x223bf4: 0xc088314
    ctx->pc = 0x223BF4u;
    SET_GPR_U32(ctx, 31, 0x223BFCu);
    ctx->pc = 0x223BF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14TrnKomono2TaskFP11ENEMY_TABLE_0x220c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BFCu; }
        else if (ctx->pc != 0x223BFCu) { ctx->pc = 0x223BFCu; }
    }
    if (ctx->pc != 0x223BFCu) { return; }
    ctx->pc = 0x223BFCu;
    // 0x223bfc: 0x10000013
    ctx->pc = 0x223BFCu;
    {
        const bool branch_taken_0x223bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223C00u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x223bfc) {
            ctx->pc = 0x223C4Cu;
            goto label_223c4c;
        }
    }
    ctx->pc = 0x223C04u;
label_223c04:
    // 0x223c04: 0xc06903c
    ctx->pc = 0x223C04u;
    SET_GPR_U32(ctx, 31, 0x223C0Cu);
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C0Cu; }
        else if (ctx->pc != 0x223C0Cu) { ctx->pc = 0x223C0Cu; }
    }
    if (ctx->pc != 0x223C0Cu) { return; }
    ctx->pc = 0x223C0Cu;
    // 0x223c0c: 0xc06903c
    ctx->pc = 0x223C0Cu;
    SET_GPR_U32(ctx, 31, 0x223C14u);
    ctx->pc = 0x223C10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C14u; }
        else if (ctx->pc != 0x223C14u) { ctx->pc = 0x223C14u; }
    }
    if (ctx->pc != 0x223C14u) { return; }
    ctx->pc = 0x223C14u;
    // 0x223c14: 0xc06903c
    ctx->pc = 0x223C14u;
    SET_GPR_U32(ctx, 31, 0x223C1Cu);
    ctx->pc = 0x223C18u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C1Cu; }
        else if (ctx->pc != 0x223C1Cu) { ctx->pc = 0x223C1Cu; }
    }
    if (ctx->pc != 0x223C1Cu) { return; }
    ctx->pc = 0x223C1Cu;
    // 0x223c1c: 0x8e460010
    ctx->pc = 0x223c1cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x223c20: 0x8e270014
    ctx->pc = 0x223c20u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x223c24: 0x240401c0
    ctx->pc = 0x223c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x223c28: 0x70002e28
    ctx->pc = 0x223c28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x223c2c: 0xc069040
    ctx->pc = 0x223C2Cu;
    SET_GPR_U32(ctx, 31, 0x223C34u);
    ctx->pc = 0x223C30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C34u; }
        else if (ctx->pc != 0x223C34u) { ctx->pc = 0x223C34u; }
    }
    if (ctx->pc != 0x223C34u) { return; }
    ctx->pc = 0x223C34u;
    // 0x223c34: 0x70402628
    ctx->pc = 0x223c34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223c38: 0x10800003
    ctx->pc = 0x223C38u;
    {
        const bool branch_taken_0x223c38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x223C3Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x223c38) {
            ctx->pc = 0x223C48u;
            goto label_223c48;
        }
    }
    ctx->pc = 0x223C40u;
    // 0x223c40: 0xc088314
    ctx->pc = 0x223C40u;
    SET_GPR_U32(ctx, 31, 0x223C48u);
    ctx->pc = 0x223C44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14TrnKomono2TaskFP11ENEMY_TABLE_0x220c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C48u; }
        else if (ctx->pc != 0x223C48u) { ctx->pc = 0x223C48u; }
    }
    if (ctx->pc != 0x223C48u) { return; }
    ctx->pc = 0x223C48u;
label_223c48:
    // 0x223c48: 0x7bbf0030
    ctx->pc = 0x223c48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_223c4c:
    // 0x223c4c: 0x7bb20020
    ctx->pc = 0x223c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223c50: 0x7bb10010
    ctx->pc = 0x223c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223c54: 0x7bb00000
    ctx->pc = 0x223c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c58: 0x3e00008
    ctx->pc = 0x223C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223BBCu: goto label_223bbc;
            case 0x223C04u: goto label_223c04;
            case 0x223C48u: goto label_223c48;
            case 0x223C4Cu: goto label_223c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223C60u;
}
