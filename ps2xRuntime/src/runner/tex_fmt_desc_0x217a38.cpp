#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: tex_fmt_desc
// Address: 0x217a38 - 0x217b34
void tex_fmt_desc_0x217a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x217a38u;

label_217a38:
    // 0x217a38: 0x2c820094
    ctx->pc = 0x217a38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 148));
label_217a3c:
    // 0x217a3c: 0x1040003a
label_217a40:
    if (ctx->pc == 0x217A40u) {
        ctx->pc = 0x217A40u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x217A44u;
        goto label_217a44;
    }
    ctx->pc = 0x217A3Cu;
    {
        const bool branch_taken_0x217a3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217A40u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x217a3c) {
            ctx->pc = 0x217B28u;
            goto label_217b28;
        }
    }
    ctx->pc = 0x217A44u;
label_217a44:
    // 0x217a44: 0x3c02003a
    ctx->pc = 0x217a44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a48:
    // 0x217a48: 0x24425db0
    ctx->pc = 0x217a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23984));
label_217a4c:
    // 0x217a4c: 0x621821
    ctx->pc = 0x217a4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_217a50:
    // 0x217a50: 0x8c620000
    ctx->pc = 0x217a50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_217a54:
    // 0x217a54: 0x400008
label_217a58:
    if (ctx->pc == 0x217A58u) {
        ctx->pc = 0x217A5Cu;
        goto label_217a5c;
    }
    ctx->pc = 0x217A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A5Cu;
label_217a5c:
    // 0x217a5c: 0x3c02003a
    ctx->pc = 0x217a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a60:
    // 0x217a60: 0x3e00008
label_217a64:
    if (ctx->pc == 0x217A64u) {
        ctx->pc = 0x217A64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23704));
        ctx->pc = 0x217A68u;
        goto label_217a68;
    }
    ctx->pc = 0x217A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23704));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A68u;
label_217a68:
    // 0x217a68: 0x3c02003a
    ctx->pc = 0x217a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a6c:
    // 0x217a6c: 0x3e00008
label_217a70:
    if (ctx->pc == 0x217A70u) {
        ctx->pc = 0x217A70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23720));
        ctx->pc = 0x217A74u;
        goto label_217a74;
    }
    ctx->pc = 0x217A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23720));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A74u;
label_217a74:
    // 0x217a74: 0x3c02003a
    ctx->pc = 0x217a74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a78:
    // 0x217a78: 0x3e00008
label_217a7c:
    if (ctx->pc == 0x217A7Cu) {
        ctx->pc = 0x217A7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23736));
        ctx->pc = 0x217A80u;
        goto label_217a80;
    }
    ctx->pc = 0x217A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A7Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23736));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A80u;
label_217a80:
    // 0x217a80: 0x3c02003a
    ctx->pc = 0x217a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a84:
    // 0x217a84: 0x3e00008
label_217a88:
    if (ctx->pc == 0x217A88u) {
        ctx->pc = 0x217A88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23752));
        ctx->pc = 0x217A8Cu;
        goto label_217a8c;
    }
    ctx->pc = 0x217A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23752));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A8Cu;
label_217a8c:
    // 0x217a8c: 0x3c02003a
    ctx->pc = 0x217a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a90:
    // 0x217a90: 0x3e00008
label_217a94:
    if (ctx->pc == 0x217A94u) {
        ctx->pc = 0x217A94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23768));
        ctx->pc = 0x217A98u;
        goto label_217a98;
    }
    ctx->pc = 0x217A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23768));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217A98u;
label_217a98:
    // 0x217a98: 0x3c02003a
    ctx->pc = 0x217a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217a9c:
    // 0x217a9c: 0x3e00008
label_217aa0:
    if (ctx->pc == 0x217AA0u) {
        ctx->pc = 0x217AA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23784));
        ctx->pc = 0x217AA4u;
        goto label_217aa4;
    }
    ctx->pc = 0x217A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23784));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AA4u;
label_217aa4:
    // 0x217aa4: 0x3c02003a
    ctx->pc = 0x217aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217aa8:
    // 0x217aa8: 0x3e00008
label_217aac:
    if (ctx->pc == 0x217AACu) {
        ctx->pc = 0x217AACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23800));
        ctx->pc = 0x217AB0u;
        goto label_217ab0;
    }
    ctx->pc = 0x217AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23800));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AB0u;
label_217ab0:
    // 0x217ab0: 0x3c02003a
    ctx->pc = 0x217ab0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217ab4:
    // 0x217ab4: 0x3e00008
label_217ab8:
    if (ctx->pc == 0x217AB8u) {
        ctx->pc = 0x217AB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23816));
        ctx->pc = 0x217ABCu;
        goto label_217abc;
    }
    ctx->pc = 0x217AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23816));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217ABCu;
label_217abc:
    // 0x217abc: 0x3c02003a
    ctx->pc = 0x217abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217ac0:
    // 0x217ac0: 0x3e00008
label_217ac4:
    if (ctx->pc == 0x217AC4u) {
        ctx->pc = 0x217AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23832));
        ctx->pc = 0x217AC8u;
        goto label_217ac8;
    }
    ctx->pc = 0x217AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23832));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AC8u;
label_217ac8:
    // 0x217ac8: 0x3c02003a
    ctx->pc = 0x217ac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217acc:
    // 0x217acc: 0x3e00008
label_217ad0:
    if (ctx->pc == 0x217AD0u) {
        ctx->pc = 0x217AD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23848));
        ctx->pc = 0x217AD4u;
        goto label_217ad4;
    }
    ctx->pc = 0x217ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23848));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AD4u;
label_217ad4:
    // 0x217ad4: 0x3c02003a
    ctx->pc = 0x217ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217ad8:
    // 0x217ad8: 0x3e00008
label_217adc:
    if (ctx->pc == 0x217ADCu) {
        ctx->pc = 0x217ADCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23864));
        ctx->pc = 0x217AE0u;
        goto label_217ae0;
    }
    ctx->pc = 0x217AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217ADCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23864));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AE0u;
label_217ae0:
    // 0x217ae0: 0x3c02003a
    ctx->pc = 0x217ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217ae4:
    // 0x217ae4: 0x3e00008
label_217ae8:
    if (ctx->pc == 0x217AE8u) {
        ctx->pc = 0x217AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23880));
        ctx->pc = 0x217AECu;
        goto label_217aec;
    }
    ctx->pc = 0x217AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23880));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AECu;
label_217aec:
    // 0x217aec: 0x3c02003a
    ctx->pc = 0x217aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217af0:
    // 0x217af0: 0x3e00008
label_217af4:
    if (ctx->pc == 0x217AF4u) {
        ctx->pc = 0x217AF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23896));
        ctx->pc = 0x217AF8u;
        goto label_217af8;
    }
    ctx->pc = 0x217AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23896));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217AF8u;
label_217af8:
    // 0x217af8: 0x3c02003a
    ctx->pc = 0x217af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217afc:
    // 0x217afc: 0x3e00008
label_217b00:
    if (ctx->pc == 0x217B00u) {
        ctx->pc = 0x217B00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23912));
        ctx->pc = 0x217B04u;
        goto label_217b04;
    }
    ctx->pc = 0x217AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23912));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217B04u;
label_217b04:
    // 0x217b04: 0x3c02003a
    ctx->pc = 0x217b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217b08:
    // 0x217b08: 0x3e00008
label_217b0c:
    if (ctx->pc == 0x217B0Cu) {
        ctx->pc = 0x217B0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23928));
        ctx->pc = 0x217B10u;
        goto label_217b10;
    }
    ctx->pc = 0x217B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23928));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217B10u;
label_217b10:
    // 0x217b10: 0x3c02003a
    ctx->pc = 0x217b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217b14:
    // 0x217b14: 0x3e00008
label_217b18:
    if (ctx->pc == 0x217B18u) {
        ctx->pc = 0x217B18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23944));
        ctx->pc = 0x217B1Cu;
        goto label_217b1c;
    }
    ctx->pc = 0x217B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23944));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217B1Cu;
label_217b1c:
    // 0x217b1c: 0x3c02003a
    ctx->pc = 0x217b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217b20:
    // 0x217b20: 0x3e00008
label_217b24:
    if (ctx->pc == 0x217B24u) {
        ctx->pc = 0x217B24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23960));
        ctx->pc = 0x217B28u;
        goto label_217b28;
    }
    ctx->pc = 0x217B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23960));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217B28u;
label_217b28:
    // 0x217b28: 0x3c02003a
    ctx->pc = 0x217b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_217b2c:
    // 0x217b2c: 0x3e00008
label_217b30:
    if (ctx->pc == 0x217B30u) {
        ctx->pc = 0x217B30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23968));
        ctx->pc = 0x217B34u;
        goto label_fallthrough_0x217b2c;
    }
    ctx->pc = 0x217B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23968));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A38u: goto label_217a38;
            case 0x217A3Cu: goto label_217a3c;
            case 0x217A40u: goto label_217a40;
            case 0x217A44u: goto label_217a44;
            case 0x217A48u: goto label_217a48;
            case 0x217A4Cu: goto label_217a4c;
            case 0x217A50u: goto label_217a50;
            case 0x217A54u: goto label_217a54;
            case 0x217A58u: goto label_217a58;
            case 0x217A5Cu: goto label_217a5c;
            case 0x217A60u: goto label_217a60;
            case 0x217A64u: goto label_217a64;
            case 0x217A68u: goto label_217a68;
            case 0x217A6Cu: goto label_217a6c;
            case 0x217A70u: goto label_217a70;
            case 0x217A74u: goto label_217a74;
            case 0x217A78u: goto label_217a78;
            case 0x217A7Cu: goto label_217a7c;
            case 0x217A80u: goto label_217a80;
            case 0x217A84u: goto label_217a84;
            case 0x217A88u: goto label_217a88;
            case 0x217A8Cu: goto label_217a8c;
            case 0x217A90u: goto label_217a90;
            case 0x217A94u: goto label_217a94;
            case 0x217A98u: goto label_217a98;
            case 0x217A9Cu: goto label_217a9c;
            case 0x217AA0u: goto label_217aa0;
            case 0x217AA4u: goto label_217aa4;
            case 0x217AA8u: goto label_217aa8;
            case 0x217AACu: goto label_217aac;
            case 0x217AB0u: goto label_217ab0;
            case 0x217AB4u: goto label_217ab4;
            case 0x217AB8u: goto label_217ab8;
            case 0x217ABCu: goto label_217abc;
            case 0x217AC0u: goto label_217ac0;
            case 0x217AC4u: goto label_217ac4;
            case 0x217AC8u: goto label_217ac8;
            case 0x217ACCu: goto label_217acc;
            case 0x217AD0u: goto label_217ad0;
            case 0x217AD4u: goto label_217ad4;
            case 0x217AD8u: goto label_217ad8;
            case 0x217ADCu: goto label_217adc;
            case 0x217AE0u: goto label_217ae0;
            case 0x217AE4u: goto label_217ae4;
            case 0x217AE8u: goto label_217ae8;
            case 0x217AECu: goto label_217aec;
            case 0x217AF0u: goto label_217af0;
            case 0x217AF4u: goto label_217af4;
            case 0x217AF8u: goto label_217af8;
            case 0x217AFCu: goto label_217afc;
            case 0x217B00u: goto label_217b00;
            case 0x217B04u: goto label_217b04;
            case 0x217B08u: goto label_217b08;
            case 0x217B0Cu: goto label_217b0c;
            case 0x217B10u: goto label_217b10;
            case 0x217B14u: goto label_217b14;
            case 0x217B18u: goto label_217b18;
            case 0x217B1Cu: goto label_217b1c;
            case 0x217B20u: goto label_217b20;
            case 0x217B24u: goto label_217b24;
            case 0x217B28u: goto label_217b28;
            case 0x217B2Cu: goto label_217b2c;
            case 0x217B30u: goto label_217b30;
            default: break;
        }
        return;
    }
label_fallthrough_0x217b2c:
    ctx->pc = 0x217B34u;
}
