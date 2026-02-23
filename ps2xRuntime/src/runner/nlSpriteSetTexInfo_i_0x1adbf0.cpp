#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSpriteSetTexInfo_i
// Address: 0x1adbf0 - 0x1add00
void nlSpriteSetTexInfo_i_0x1adbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSpriteSetTexInfo_i");


    ctx->pc = 0x1adbf0u;

    // 0x1adbf0: 0x27bdff80
    ctx->pc = 0x1adbf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1adbf4: 0x7fbf0070
    ctx->pc = 0x1adbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1adbf8: 0x7fb60060
    ctx->pc = 0x1adbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1adbfc: 0x7fb50050
    ctx->pc = 0x1adbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1adc00: 0x7fb40040
    ctx->pc = 0x1adc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1adc04: 0x7fb30030
    ctx->pc = 0x1adc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1adc08: 0x7fb20020
    ctx->pc = 0x1adc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1adc0c: 0x7fb10010
    ctx->pc = 0x1adc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1adc10: 0x7fb00000
    ctx->pc = 0x1adc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1adc14: 0x7080b628
    ctx->pc = 0x1adc14u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1adc18: 0x70a0ae28
    ctx->pc = 0x1adc18u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1adc1c: 0x7120a628
    ctx->pc = 0x1adc1cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1adc20: 0x70c08e28
    ctx->pc = 0x1adc20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1adc24: 0x70e09628
    ctx->pc = 0x1adc24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1adc28: 0x15000003
    ctx->pc = 0x1ADC28u;
    {
        const bool branch_taken_0x1adc28 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC2Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1adc28) {
            ctx->pc = 0x1ADC38u;
            goto label_1adc38;
        }
    }
    ctx->pc = 0x1ADC30u;
    // 0x1adc30: 0x10000025
    ctx->pc = 0x1ADC30u;
    {
        const bool branch_taken_0x1adc30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC34u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1adc30) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADC38u;
label_1adc38:
    // 0x1adc38: 0x10000023
    ctx->pc = 0x1ADC38u;
    {
        const bool branch_taken_0x1adc38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC3Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 8), 16));
        if (branch_taken_0x1adc38) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADC40u;
label_1adc40:
    // 0x1adc40: 0x16400003
    ctx->pc = 0x1ADC40u;
    {
        const bool branch_taken_0x1adc40 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC44u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1adc40) {
            ctx->pc = 0x1ADC50u;
            goto label_1adc50;
        }
    }
    ctx->pc = 0x1ADC48u;
    // 0x1adc48: 0x10000003
    ctx->pc = 0x1ADC48u;
    {
        const bool branch_taken_0x1adc48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1adc48) {
            ctx->pc = 0x1ADC58u;
            goto label_1adc58;
        }
    }
    ctx->pc = 0x1ADC50u;
label_1adc50:
    // 0x1adc50: 0x8e470000
    ctx->pc = 0x1adc50u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1adc54: 0x0
    ctx->pc = 0x1adc54u;
    // NOP
label_1adc58:
    // 0x1adc58: 0x12800008
    ctx->pc = 0x1ADC58u;
    {
        const bool branch_taken_0x1adc58 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADC5Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1adc58) {
            ctx->pc = 0x1ADC7Cu;
            goto label_1adc7c;
        }
    }
    ctx->pc = 0x1ADC60u;
    // 0x1adc60: 0x8e230014
    ctx->pc = 0x1adc60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1adc64: 0x31080
    ctx->pc = 0x1adc64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1adc68: 0x431021
    ctx->pc = 0x1adc68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1adc6c: 0x21100
    ctx->pc = 0x1adc6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1adc70: 0x2c28021
    ctx->pc = 0x1adc70u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1adc74: 0x0
    ctx->pc = 0x1adc74u;
    // NOP
    // 0x1adc78: 0x72002628
    ctx->pc = 0x1adc78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1adc7c:
    // 0x1adc7c: 0x72a02e28
    ctx->pc = 0x1adc7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1adc80: 0x72203628
    ctx->pc = 0x1adc80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1adc84: 0xc06b68c
    ctx->pc = 0x1ADC84u;
    SET_GPR_U32(ctx, 31, 0x1ADC8Cu);
    ctx->pc = 0x1ADC88u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ADA30u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSpriteSetTexInfoOnce_0x1ada30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADC8Cu; }
        else if (ctx->pc != 0x1ADC8Cu) { ctx->pc = 0x1ADC8Cu; }
    }
    if (ctx->pc != 0x1ADC8Cu) { return; }
    ctx->pc = 0x1ADC8Cu;
    // 0x1adc8c: 0x8e240018
    ctx->pc = 0x1adc8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1adc90: 0x24030001
    ctx->pc = 0x1adc90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1adc94: 0x54830005
    ctx->pc = 0x1ADC94u;
    {
        const bool branch_taken_0x1adc94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1adc94) {
            ctx->pc = 0x1ADC98u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
            ctx->pc = 0x1ADCACu;
            goto label_1adcac;
        }
    }
    ctx->pc = 0x1ADC9Cu;
    // 0x1adc9c: 0x12600002
    ctx->pc = 0x1ADC9Cu;
    {
        const bool branch_taken_0x1adc9c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ADCA0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
        if (branch_taken_0x1adc9c) {
            ctx->pc = 0x1ADCA8u;
            goto label_1adca8;
        }
    }
    ctx->pc = 0x1ADCA4u;
    // 0x1adca4: 0x26730080
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 128));
label_1adca8:
    // 0x1adca8: 0x26310020
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
label_1adcac:
    // 0x1adcac: 0x52600003
    ctx->pc = 0x1ADCACu;
    {
        const bool branch_taken_0x1adcac = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1adcac) {
            ctx->pc = 0x1ADCB0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
            ctx->pc = 0x1ADCBCu;
            goto label_1adcbc;
        }
    }
    ctx->pc = 0x1ADCB4u;
    // 0x1adcb4: 0x26730080
    ctx->pc = 0x1adcb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 128));
    // 0x1adcb8: 0x26100050
    ctx->pc = 0x1adcb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
label_1adcbc:
    // 0x1adcbc: 0x12400002
    ctx->pc = 0x1ADCBCu;
    {
        const bool branch_taken_0x1adcbc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1adcbc) {
            ctx->pc = 0x1ADCC8u;
            goto label_1adcc8;
        }
    }
    ctx->pc = 0x1ADCC4u;
    // 0x1adcc4: 0x26520004
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
label_1adcc8:
    // 0x1adcc8: 0x86240002
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1adccc: 0x2403ffff
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1adcd0: 0x1483ffdb
    ctx->pc = 0x1ADCD0u;
    {
        const bool branch_taken_0x1adcd0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1adcd0) {
            ctx->pc = 0x1ADC40u;
            goto label_1adc40;
        }
    }
    ctx->pc = 0x1ADCD8u;
    // 0x1adcd8: 0x7bbf0070
    ctx->pc = 0x1adcd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1adcdc: 0x7bb60060
    ctx->pc = 0x1adcdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1adce0: 0x7bb50050
    ctx->pc = 0x1adce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adce4: 0x7bb40040
    ctx->pc = 0x1adce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adce8: 0x7bb30030
    ctx->pc = 0x1adce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adcec: 0x7bb20020
    ctx->pc = 0x1adcecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adcf0: 0x7bb10010
    ctx->pc = 0x1adcf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adcf4: 0x7bb00000
    ctx->pc = 0x1adcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adcf8: 0x3e00008
    ctx->pc = 0x1ADCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADCFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ADC38u: goto label_1adc38;
            case 0x1ADC40u: goto label_1adc40;
            case 0x1ADC50u: goto label_1adc50;
            case 0x1ADC58u: goto label_1adc58;
            case 0x1ADC7Cu: goto label_1adc7c;
            case 0x1ADCA8u: goto label_1adca8;
            case 0x1ADCACu: goto label_1adcac;
            case 0x1ADCBCu: goto label_1adcbc;
            case 0x1ADCC8u: goto label_1adcc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ADD00u;
}
