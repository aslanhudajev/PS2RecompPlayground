#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_RcvrReplay
// Address: 0x173a80 - 0x173b60
void adxt_RcvrReplay_0x173a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_RcvrReplay");


    ctx->pc = 0x173a80u;

label_173a80:
    // 0x173a80: 0x27bdffc0
    ctx->pc = 0x173a80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_173a84:
    // 0x173a84: 0xffb10010
    ctx->pc = 0x173a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_173a88:
    // 0x173a88: 0x80882d
    ctx->pc = 0x173a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173a8c:
    // 0x173a8c: 0xffbf0030
    ctx->pc = 0x173a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_173a90:
    // 0x173a90: 0xffb20020
    ctx->pc = 0x173a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_173a94:
    // 0x173a94: 0xc05a4e4
label_173a98:
    if (ctx->pc == 0x173A98u) {
        ctx->pc = 0x173A98u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x173A9Cu;
        goto label_173a9c;
    }
    ctx->pc = 0x173A94u;
    SET_GPR_U32(ctx, 31, 0x173A9Cu);
    ctx->pc = 0x173A98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173A9Cu; }
        else if (ctx->pc != 0x173A9Cu) { ctx->pc = 0x173A9Cu; }
    }
    if (ctx->pc != 0x173A9Cu) { return; }
    ctx->pc = 0x173A9Cu;
label_173a9c:
    // 0x173a9c: 0x8e24000c
    ctx->pc = 0x173a9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_173aa0:
    // 0x173aa0: 0xc05b690
label_173aa4:
    if (ctx->pc == 0x173AA4u) {
        ctx->pc = 0x173AA4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173AA8u;
        goto label_173aa8;
    }
    ctx->pc = 0x173AA0u;
    SET_GPR_U32(ctx, 31, 0x173AA8u);
    ctx->pc = 0x173AA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTransSw_0x16da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AA8u; }
        else if (ctx->pc != 0x173AA8u) { ctx->pc = 0x173AA8u; }
    }
    if (ctx->pc != 0x173AA8u) { return; }
    ctx->pc = 0x173AA8u;
label_173aa8:
    // 0x173aa8: 0x8e24000c
    ctx->pc = 0x173aa8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_173aac:
    // 0x173aac: 0xc05b692
label_173ab0:
    if (ctx->pc == 0x173AB0u) {
        ctx->pc = 0x173AB0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173AB4u;
        goto label_173ab4;
    }
    ctx->pc = 0x173AACu;
    SET_GPR_U32(ctx, 31, 0x173AB4u);
    ctx->pc = 0x173AB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetPlaySw_0x16da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AB4u; }
        else if (ctx->pc != 0x173AB4u) { ctx->pc = 0x173AB4u; }
    }
    if (ctx->pc != 0x173AB4u) { return; }
    ctx->pc = 0x173AB4u;
label_173ab4:
    // 0x173ab4: 0xc05b7b4
label_173ab8:
    if (ctx->pc == 0x173AB8u) {
        ctx->pc = 0x173AB8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x173ABCu;
        goto label_173abc;
    }
    ctx->pc = 0x173AB4u;
    SET_GPR_U32(ctx, 31, 0x173ABCu);
    ctx->pc = 0x173AB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16DED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Stop_0x16ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173ABCu; }
        else if (ctx->pc != 0x173ABCu) { ctx->pc = 0x173ABCu; }
    }
    if (ctx->pc != 0x173ABCu) { return; }
    ctx->pc = 0x173ABCu;
label_173abc:
    // 0x173abc: 0x8e240008
    ctx->pc = 0x173abcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_173ac0:
    // 0x173ac0: 0x50800009
label_173ac4:
    if (ctx->pc == 0x173AC4u) {
        ctx->pc = 0x173AC4u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x173AC8u;
        goto label_173ac8;
    }
    ctx->pc = 0x173AC0u;
    {
        const bool branch_taken_0x173ac0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x173ac0) {
            ctx->pc = 0x173AC4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->pc = 0x173AE8u;
            goto label_173ae8;
        }
    }
    ctx->pc = 0x173AC8u;
label_173ac8:
    // 0x173ac8: 0xc05c31c
label_173acc:
    if (ctx->pc == 0x173ACCu) {
        ctx->pc = 0x173AD0u;
        goto label_173ad0;
    }
    ctx->pc = 0x173AC8u;
    SET_GPR_U32(ctx, 31, 0x173AD0u);
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173AD0u; }
        else if (ctx->pc != 0x173AD0u) { ctx->pc = 0x173AD0u; }
    }
    if (ctx->pc != 0x173AD0u) { return; }
    ctx->pc = 0x173AD0u;
label_173ad0:
    // 0x173ad0: 0x8e240014
    ctx->pc = 0x173ad0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_173ad4:
    // 0x173ad4: 0x8c830000
    ctx->pc = 0x173ad4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173ad8:
    // 0x173ad8: 0x8c620014
    ctx->pc = 0x173ad8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_173adc:
    // 0x173adc: 0x40f809
label_173ae0:
    if (ctx->pc == 0x173AE0u) {
        ctx->pc = 0x173AE4u;
        goto label_173ae4;
    }
    ctx->pc = 0x173ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173AE4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A80u: goto label_173a80;
            case 0x173A84u: goto label_173a84;
            case 0x173A88u: goto label_173a88;
            case 0x173A8Cu: goto label_173a8c;
            case 0x173A90u: goto label_173a90;
            case 0x173A94u: goto label_173a94;
            case 0x173A98u: goto label_173a98;
            case 0x173A9Cu: goto label_173a9c;
            case 0x173AA0u: goto label_173aa0;
            case 0x173AA4u: goto label_173aa4;
            case 0x173AA8u: goto label_173aa8;
            case 0x173AACu: goto label_173aac;
            case 0x173AB0u: goto label_173ab0;
            case 0x173AB4u: goto label_173ab4;
            case 0x173AB8u: goto label_173ab8;
            case 0x173ABCu: goto label_173abc;
            case 0x173AC0u: goto label_173ac0;
            case 0x173AC4u: goto label_173ac4;
            case 0x173AC8u: goto label_173ac8;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173AD4u: goto label_173ad4;
            case 0x173AD8u: goto label_173ad8;
            case 0x173ADCu: goto label_173adc;
            case 0x173AE0u: goto label_173ae0;
            case 0x173AE4u: goto label_173ae4;
            case 0x173AE8u: goto label_173ae8;
            case 0x173AECu: goto label_173aec;
            case 0x173AF0u: goto label_173af0;
            case 0x173AF4u: goto label_173af4;
            case 0x173AF8u: goto label_173af8;
            case 0x173AFCu: goto label_173afc;
            case 0x173B00u: goto label_173b00;
            case 0x173B04u: goto label_173b04;
            case 0x173B08u: goto label_173b08;
            case 0x173B0Cu: goto label_173b0c;
            case 0x173B10u: goto label_173b10;
            case 0x173B14u: goto label_173b14;
            case 0x173B18u: goto label_173b18;
            case 0x173B1Cu: goto label_173b1c;
            case 0x173B20u: goto label_173b20;
            case 0x173B24u: goto label_173b24;
            case 0x173B28u: goto label_173b28;
            case 0x173B2Cu: goto label_173b2c;
            case 0x173B30u: goto label_173b30;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B3Cu: goto label_173b3c;
            case 0x173B40u: goto label_173b40;
            case 0x173B44u: goto label_173b44;
            case 0x173B48u: goto label_173b48;
            case 0x173B4Cu: goto label_173b4c;
            case 0x173B50u: goto label_173b50;
            case 0x173B54u: goto label_173b54;
            case 0x173B58u: goto label_173b58;
            case 0x173B5Cu: goto label_173b5c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173AE4u; }
            if (ctx->pc != 0x173AE4u) { return; }
        }
    }
    ctx->pc = 0x173AE4u;
label_173ae4:
    // 0x173ae4: 0x82220003
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_173ae8:
    // 0x173ae8: 0x1840000d
label_173aec:
    if (ctx->pc == 0x173AECu) {
        ctx->pc = 0x173AECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173AF0u;
        goto label_173af0;
    }
    ctx->pc = 0x173AE8u;
    {
        const bool branch_taken_0x173ae8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x173AECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173ae8) {
            ctx->pc = 0x173B20u;
            goto label_173b20;
        }
    }
    ctx->pc = 0x173AF0u;
label_173af0:
    // 0x173af0: 0x26320018
    ctx->pc = 0x173af0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 24));
label_173af4:
    // 0x173af4: 0x101080
    ctx->pc = 0x173af4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_173af8:
    // 0x173af8: 0x2421021
    ctx->pc = 0x173af8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_173afc:
    // 0x173afc: 0x8c440000
    ctx->pc = 0x173afcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173b00:
    // 0x173b00: 0x8c850000
    ctx->pc = 0x173b00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173b04:
    // 0x173b04: 0x8ca30014
    ctx->pc = 0x173b04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_173b08:
    // 0x173b08: 0x60f809
label_173b0c:
    if (ctx->pc == 0x173B0Cu) {
        ctx->pc = 0x173B0Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x173B10u;
        goto label_173b10;
    }
    ctx->pc = 0x173B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173B10u);
        ctx->pc = 0x173B0Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173A80u: goto label_173a80;
            case 0x173A84u: goto label_173a84;
            case 0x173A88u: goto label_173a88;
            case 0x173A8Cu: goto label_173a8c;
            case 0x173A90u: goto label_173a90;
            case 0x173A94u: goto label_173a94;
            case 0x173A98u: goto label_173a98;
            case 0x173A9Cu: goto label_173a9c;
            case 0x173AA0u: goto label_173aa0;
            case 0x173AA4u: goto label_173aa4;
            case 0x173AA8u: goto label_173aa8;
            case 0x173AACu: goto label_173aac;
            case 0x173AB0u: goto label_173ab0;
            case 0x173AB4u: goto label_173ab4;
            case 0x173AB8u: goto label_173ab8;
            case 0x173ABCu: goto label_173abc;
            case 0x173AC0u: goto label_173ac0;
            case 0x173AC4u: goto label_173ac4;
            case 0x173AC8u: goto label_173ac8;
            case 0x173ACCu: goto label_173acc;
            case 0x173AD0u: goto label_173ad0;
            case 0x173AD4u: goto label_173ad4;
            case 0x173AD8u: goto label_173ad8;
            case 0x173ADCu: goto label_173adc;
            case 0x173AE0u: goto label_173ae0;
            case 0x173AE4u: goto label_173ae4;
            case 0x173AE8u: goto label_173ae8;
            case 0x173AECu: goto label_173aec;
            case 0x173AF0u: goto label_173af0;
            case 0x173AF4u: goto label_173af4;
            case 0x173AF8u: goto label_173af8;
            case 0x173AFCu: goto label_173afc;
            case 0x173B00u: goto label_173b00;
            case 0x173B04u: goto label_173b04;
            case 0x173B08u: goto label_173b08;
            case 0x173B0Cu: goto label_173b0c;
            case 0x173B10u: goto label_173b10;
            case 0x173B14u: goto label_173b14;
            case 0x173B18u: goto label_173b18;
            case 0x173B1Cu: goto label_173b1c;
            case 0x173B20u: goto label_173b20;
            case 0x173B24u: goto label_173b24;
            case 0x173B28u: goto label_173b28;
            case 0x173B2Cu: goto label_173b2c;
            case 0x173B30u: goto label_173b30;
            case 0x173B34u: goto label_173b34;
            case 0x173B38u: goto label_173b38;
            case 0x173B3Cu: goto label_173b3c;
            case 0x173B40u: goto label_173b40;
            case 0x173B44u: goto label_173b44;
            case 0x173B48u: goto label_173b48;
            case 0x173B4Cu: goto label_173b4c;
            case 0x173B50u: goto label_173b50;
            case 0x173B54u: goto label_173b54;
            case 0x173B58u: goto label_173b58;
            case 0x173B5Cu: goto label_173b5c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173B10u; }
            if (ctx->pc != 0x173B10u) { return; }
        }
    }
    ctx->pc = 0x173B10u;
label_173b10:
    // 0x173b10: 0x82220003
    ctx->pc = 0x173b10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_173b14:
    // 0x173b14: 0x202102a
    ctx->pc = 0x173b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
label_173b18:
    // 0x173b18: 0x1440fff7
label_173b1c:
    if (ctx->pc == 0x173B1Cu) {
        ctx->pc = 0x173B1Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x173B20u;
        goto label_173b20;
    }
    ctx->pc = 0x173B18u;
    {
        const bool branch_taken_0x173b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173B1Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x173b18) {
            ctx->pc = 0x173AF8u;
            goto label_173af8;
        }
    }
    ctx->pc = 0x173B20u;
label_173b20:
    // 0x173b20: 0x8e240008
    ctx->pc = 0x173b20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_173b24:
    // 0x173b24: 0x50800006
label_173b28:
    if (ctx->pc == 0x173B28u) {
        ctx->pc = 0x173B28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173B2Cu;
        goto label_173b2c;
    }
    ctx->pc = 0x173B24u;
    {
        const bool branch_taken_0x173b24 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x173b24) {
            ctx->pc = 0x173B28u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x173B40u;
            goto label_173b40;
        }
    }
    ctx->pc = 0x173B2Cu;
label_173b2c:
    // 0x173b2c: 0xc05c2e2
label_173b30:
    if (ctx->pc == 0x173B30u) {
        ctx->pc = 0x173B30u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173B34u;
        goto label_173b34;
    }
    ctx->pc = 0x173B2Cu;
    SET_GPR_U32(ctx, 31, 0x173B34u);
    ctx->pc = 0x173B30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B34u; }
        else if (ctx->pc != 0x173B34u) { ctx->pc = 0x173B34u; }
    }
    if (ctx->pc != 0x173B34u) { return; }
    ctx->pc = 0x173B34u;
label_173b34:
    // 0x173b34: 0xc05c304
label_173b38:
    if (ctx->pc == 0x173B38u) {
        ctx->pc = 0x173B38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x173B3Cu;
        goto label_173b3c;
    }
    ctx->pc = 0x173B34u;
    SET_GPR_U32(ctx, 31, 0x173B3Cu);
    ctx->pc = 0x173B38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x170C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Start_0x170c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B3Cu; }
        else if (ctx->pc != 0x173B3Cu) { ctx->pc = 0x173B3Cu; }
    }
    if (ctx->pc != 0x173B3Cu) { return; }
    ctx->pc = 0x173B3Cu;
label_173b3c:
    // 0x173b3c: 0x220202d
    ctx->pc = 0x173b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173b40:
    // 0x173b40: 0xc05c660
label_173b44:
    if (ctx->pc == 0x173B44u) {
        ctx->pc = 0x173B44u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x173B48u;
        goto label_173b48;
    }
    ctx->pc = 0x173B40u;
    SET_GPR_U32(ctx, 31, 0x173B48u);
    ctx->pc = 0x173B44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->pc = 0x171980u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_start_sj_0x171980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B48u; }
        else if (ctx->pc != 0x173B48u) { ctx->pc = 0x173B48u; }
    }
    if (ctx->pc != 0x173B48u) { return; }
    ctx->pc = 0x173B48u;
label_173b48:
    // 0x173b48: 0xdfbf0030
    ctx->pc = 0x173b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_173b4c:
    // 0x173b4c: 0xdfb20020
    ctx->pc = 0x173b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173b50:
    // 0x173b50: 0xdfb10010
    ctx->pc = 0x173b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173b54:
    // 0x173b54: 0xdfb00000
    ctx->pc = 0x173b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173b58:
    // 0x173b58: 0x805a4f0
label_173b5c:
    if (ctx->pc == 0x173B5Cu) {
        ctx->pc = 0x173B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x173B60u;
        goto label_fallthrough_0x173b58;
    }
    ctx->pc = 0x173B58u;
    ctx->pc = 0x173B5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
label_fallthrough_0x173b58:
    ctx->pc = 0x173B60u;
}
