#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutModifyParam
// Address: 0x1aace0 - 0x1aae20
void nlObjPutModifyParam_0x1aace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutModifyParam");


    ctx->pc = 0x1aace0u;

label_1aace0:
    // 0x1aace0: 0x27bdff80
    ctx->pc = 0x1aace0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_1aace4:
    // 0x1aace4: 0x7fbf0070
    ctx->pc = 0x1aace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
label_1aace8:
    // 0x1aace8: 0x7fb60060
    ctx->pc = 0x1aace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1aacec:
    // 0x1aacec: 0x7fb50050
    ctx->pc = 0x1aacecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1aacf0:
    // 0x1aacf0: 0x7fb40040
    ctx->pc = 0x1aacf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1aacf4:
    // 0x1aacf4: 0x7fb30030
    ctx->pc = 0x1aacf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aacf8:
    // 0x1aacf8: 0x7fb20020
    ctx->pc = 0x1aacf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1aacfc:
    // 0x1aacfc: 0x7fb10010
    ctx->pc = 0x1aacfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aad00:
    // 0x1aad00: 0x7fb00000
    ctx->pc = 0x1aad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1aad04:
    // 0x1aad04: 0x70a0ae28
    ctx->pc = 0x1aad04u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1aad08:
    // 0x1aad08: 0x8c850000
    ctx->pc = 0x1aad08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aad0c:
    // 0x1aad0c: 0x24031000
    ctx->pc = 0x1aad0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
label_1aad10:
    // 0x1aad10: 0x70c0a628
    ctx->pc = 0x1aad10u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
label_1aad14:
    // 0x1aad14: 0x70e09e28
    ctx->pc = 0x1aad14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1aad18:
    // 0x1aad18: 0x70008628
    ctx->pc = 0x1aad18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1aad1c:
    // 0x1aad1c: 0x14a30036
label_1aad20:
    if (ctx->pc == 0x1AAD20u) {
        ctx->pc = 0x1AAD20u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1AAD24u;
        goto label_1aad24;
    }
    ctx->pc = 0x1AAD1Cu;
    {
        const bool branch_taken_0x1aad1c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AAD20u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aad1c) {
            ctx->pc = 0x1AADF8u;
            goto label_1aadf8;
        }
    }
    ctx->pc = 0x1AAD24u;
label_1aad24:
    // 0x1aad24: 0x8c83002c
    ctx->pc = 0x1aad24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1aad28:
    // 0x1aad28: 0x31880
    ctx->pc = 0x1aad28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1aad2c:
    // 0x1aad2c: 0x2463000c
    ctx->pc = 0x1aad2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
label_1aad30:
    // 0x1aad30: 0x31880
    ctx->pc = 0x1aad30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1aad34:
    // 0x1aad34: 0x831821
    ctx->pc = 0x1aad34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aad38:
    // 0x1aad38: 0x1000002b
label_1aad3c:
    if (ctx->pc == 0x1AAD3Cu) {
        ctx->pc = 0x1AAD3Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 48));
        ctx->pc = 0x1AAD40u;
        goto label_1aad40;
    }
    ctx->pc = 0x1AAD38u;
    {
        const bool branch_taken_0x1aad38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAD3Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x1aad38) {
            ctx->pc = 0x1AADE8u;
            goto label_1aade8;
        }
    }
    ctx->pc = 0x1AAD40u;
label_1aad40:
    // 0x1aad40: 0x8e4300d8
    ctx->pc = 0x1aad40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1aad44:
    // 0x1aad44: 0x7240b628
    ctx->pc = 0x1aad44u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1aad48:
    // 0x1aad48: 0x264400e0
    ctx->pc = 0x1aad48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 224));
label_1aad4c:
    // 0x1aad4c: 0x12a00006
label_1aad50:
    if (ctx->pc == 0x1AAD50u) {
        ctx->pc = 0x1AAD50u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AAD54u;
        goto label_1aad54;
    }
    ctx->pc = 0x1AAD4Cu;
    {
        const bool branch_taken_0x1aad4c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAD50u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x1aad4c) {
            ctx->pc = 0x1AAD68u;
            goto label_1aad68;
        }
    }
    ctx->pc = 0x1AAD54u;
label_1aad54:
    // 0x1aad54: 0x72c02628
    ctx->pc = 0x1aad54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
label_1aad58:
    // 0x1aad58: 0x72002e28
    ctx->pc = 0x1aad58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1aad5c:
    // 0x1aad5c: 0x2a0f809
label_1aad60:
    if (ctx->pc == 0x1AAD60u) {
        ctx->pc = 0x1AAD60u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1AAD64u;
        goto label_1aad64;
    }
    ctx->pc = 0x1AAD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1AAD64u);
        ctx->pc = 0x1AAD60u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            case 0x1AACECu: goto label_1aacec;
            case 0x1AACF0u: goto label_1aacf0;
            case 0x1AACF4u: goto label_1aacf4;
            case 0x1AACF8u: goto label_1aacf8;
            case 0x1AACFCu: goto label_1aacfc;
            case 0x1AAD00u: goto label_1aad00;
            case 0x1AAD04u: goto label_1aad04;
            case 0x1AAD08u: goto label_1aad08;
            case 0x1AAD0Cu: goto label_1aad0c;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD14u: goto label_1aad14;
            case 0x1AAD18u: goto label_1aad18;
            case 0x1AAD1Cu: goto label_1aad1c;
            case 0x1AAD20u: goto label_1aad20;
            case 0x1AAD24u: goto label_1aad24;
            case 0x1AAD28u: goto label_1aad28;
            case 0x1AAD2Cu: goto label_1aad2c;
            case 0x1AAD30u: goto label_1aad30;
            case 0x1AAD34u: goto label_1aad34;
            case 0x1AAD38u: goto label_1aad38;
            case 0x1AAD3Cu: goto label_1aad3c;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD44u: goto label_1aad44;
            case 0x1AAD48u: goto label_1aad48;
            case 0x1AAD4Cu: goto label_1aad4c;
            case 0x1AAD50u: goto label_1aad50;
            case 0x1AAD54u: goto label_1aad54;
            case 0x1AAD58u: goto label_1aad58;
            case 0x1AAD5Cu: goto label_1aad5c;
            case 0x1AAD60u: goto label_1aad60;
            case 0x1AAD64u: goto label_1aad64;
            case 0x1AAD68u: goto label_1aad68;
            case 0x1AAD6Cu: goto label_1aad6c;
            case 0x1AAD70u: goto label_1aad70;
            case 0x1AAD74u: goto label_1aad74;
            case 0x1AAD78u: goto label_1aad78;
            case 0x1AAD7Cu: goto label_1aad7c;
            case 0x1AAD80u: goto label_1aad80;
            case 0x1AAD84u: goto label_1aad84;
            case 0x1AAD88u: goto label_1aad88;
            case 0x1AAD8Cu: goto label_1aad8c;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AAD94u: goto label_1aad94;
            case 0x1AAD98u: goto label_1aad98;
            case 0x1AAD9Cu: goto label_1aad9c;
            case 0x1AADA0u: goto label_1aada0;
            case 0x1AADA4u: goto label_1aada4;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AADACu: goto label_1aadac;
            case 0x1AADB0u: goto label_1aadb0;
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AADB8u: goto label_1aadb8;
            case 0x1AADBCu: goto label_1aadbc;
            case 0x1AADC0u: goto label_1aadc0;
            case 0x1AADC4u: goto label_1aadc4;
            case 0x1AADC8u: goto label_1aadc8;
            case 0x1AADCCu: goto label_1aadcc;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADD4u: goto label_1aadd4;
            case 0x1AADD8u: goto label_1aadd8;
            case 0x1AADDCu: goto label_1aaddc;
            case 0x1AADE0u: goto label_1aade0;
            case 0x1AADE4u: goto label_1aade4;
            case 0x1AADE8u: goto label_1aade8;
            case 0x1AADECu: goto label_1aadec;
            case 0x1AADF0u: goto label_1aadf0;
            case 0x1AADF4u: goto label_1aadf4;
            case 0x1AADF8u: goto label_1aadf8;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE00u: goto label_1aae00;
            case 0x1AAE04u: goto label_1aae04;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE10u: goto label_1aae10;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE18u: goto label_1aae18;
            case 0x1AAE1Cu: goto label_1aae1c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD64u; }
            if (ctx->pc != 0x1AAD64u) { return; }
        }
    }
    ctx->pc = 0x1AAD64u;
label_1aad64:
    // 0x1aad64: 0x0
    ctx->pc = 0x1aad64u;
    // NOP
label_1aad68:
    // 0x1aad68: 0x26d600e0
    ctx->pc = 0x1aad68u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 224));
label_1aad6c:
    // 0x1aad6c: 0x1000001a
label_1aad70:
    if (ctx->pc == 0x1AAD70u) {
        ctx->pc = 0x1AAD70u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1AAD74u;
        goto label_1aad74;
    }
    ctx->pc = 0x1AAD6Cu;
    {
        const bool branch_taken_0x1aad6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAD70u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1aad6c) {
            ctx->pc = 0x1AADD8u;
            goto label_1aadd8;
        }
    }
    ctx->pc = 0x1AAD74u;
label_1aad74:
    // 0x1aad74: 0x8ec30004
    ctx->pc = 0x1aad74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1aad78:
    // 0x1aad78: 0x1c600003
label_1aad7c:
    if (ctx->pc == 0x1AAD7Cu) {
        ctx->pc = 0x1AAD80u;
        goto label_1aad80;
    }
    ctx->pc = 0x1AAD78u;
    {
        const bool branch_taken_0x1aad78 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1aad78) {
            ctx->pc = 0x1AAD88u;
            goto label_1aad88;
        }
    }
    ctx->pc = 0x1AAD80u;
label_1aad80:
    // 0x1aad80: 0x1000ffff
label_1aad84:
    if (ctx->pc == 0x1AAD84u) {
        ctx->pc = 0x1AAD88u;
        goto label_1aad88;
    }
    ctx->pc = 0x1AAD80u;
    {
        const bool branch_taken_0x1aad80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aad80) {
            ctx->pc = 0x1AAD80u;
            goto label_1aad80;
        }
    }
    ctx->pc = 0x1AAD88u;
label_1aad88:
    // 0x1aad88: 0x12800005
label_1aad8c:
    if (ctx->pc == 0x1AAD8Cu) {
        ctx->pc = 0x1AAD8Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1AAD90u;
        goto label_1aad90;
    }
    ctx->pc = 0x1AAD88u;
    {
        const bool branch_taken_0x1aad88 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AAD8Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aad88) {
            ctx->pc = 0x1AADA0u;
            goto label_1aada0;
        }
    }
    ctx->pc = 0x1AAD90u;
label_1aad90:
    // 0x1aad90: 0x72202e28
    ctx->pc = 0x1aad90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1aad94:
    // 0x1aad94: 0x280f809
label_1aad98:
    if (ctx->pc == 0x1AAD98u) {
        ctx->pc = 0x1AAD98u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1AAD9Cu;
        goto label_1aad9c;
    }
    ctx->pc = 0x1AAD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1AAD9Cu);
        ctx->pc = 0x1AAD98u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            case 0x1AACECu: goto label_1aacec;
            case 0x1AACF0u: goto label_1aacf0;
            case 0x1AACF4u: goto label_1aacf4;
            case 0x1AACF8u: goto label_1aacf8;
            case 0x1AACFCu: goto label_1aacfc;
            case 0x1AAD00u: goto label_1aad00;
            case 0x1AAD04u: goto label_1aad04;
            case 0x1AAD08u: goto label_1aad08;
            case 0x1AAD0Cu: goto label_1aad0c;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD14u: goto label_1aad14;
            case 0x1AAD18u: goto label_1aad18;
            case 0x1AAD1Cu: goto label_1aad1c;
            case 0x1AAD20u: goto label_1aad20;
            case 0x1AAD24u: goto label_1aad24;
            case 0x1AAD28u: goto label_1aad28;
            case 0x1AAD2Cu: goto label_1aad2c;
            case 0x1AAD30u: goto label_1aad30;
            case 0x1AAD34u: goto label_1aad34;
            case 0x1AAD38u: goto label_1aad38;
            case 0x1AAD3Cu: goto label_1aad3c;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD44u: goto label_1aad44;
            case 0x1AAD48u: goto label_1aad48;
            case 0x1AAD4Cu: goto label_1aad4c;
            case 0x1AAD50u: goto label_1aad50;
            case 0x1AAD54u: goto label_1aad54;
            case 0x1AAD58u: goto label_1aad58;
            case 0x1AAD5Cu: goto label_1aad5c;
            case 0x1AAD60u: goto label_1aad60;
            case 0x1AAD64u: goto label_1aad64;
            case 0x1AAD68u: goto label_1aad68;
            case 0x1AAD6Cu: goto label_1aad6c;
            case 0x1AAD70u: goto label_1aad70;
            case 0x1AAD74u: goto label_1aad74;
            case 0x1AAD78u: goto label_1aad78;
            case 0x1AAD7Cu: goto label_1aad7c;
            case 0x1AAD80u: goto label_1aad80;
            case 0x1AAD84u: goto label_1aad84;
            case 0x1AAD88u: goto label_1aad88;
            case 0x1AAD8Cu: goto label_1aad8c;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AAD94u: goto label_1aad94;
            case 0x1AAD98u: goto label_1aad98;
            case 0x1AAD9Cu: goto label_1aad9c;
            case 0x1AADA0u: goto label_1aada0;
            case 0x1AADA4u: goto label_1aada4;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AADACu: goto label_1aadac;
            case 0x1AADB0u: goto label_1aadb0;
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AADB8u: goto label_1aadb8;
            case 0x1AADBCu: goto label_1aadbc;
            case 0x1AADC0u: goto label_1aadc0;
            case 0x1AADC4u: goto label_1aadc4;
            case 0x1AADC8u: goto label_1aadc8;
            case 0x1AADCCu: goto label_1aadcc;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADD4u: goto label_1aadd4;
            case 0x1AADD8u: goto label_1aadd8;
            case 0x1AADDCu: goto label_1aaddc;
            case 0x1AADE0u: goto label_1aade0;
            case 0x1AADE4u: goto label_1aade4;
            case 0x1AADE8u: goto label_1aade8;
            case 0x1AADECu: goto label_1aadec;
            case 0x1AADF0u: goto label_1aadf0;
            case 0x1AADF4u: goto label_1aadf4;
            case 0x1AADF8u: goto label_1aadf8;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE00u: goto label_1aae00;
            case 0x1AAE04u: goto label_1aae04;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE10u: goto label_1aae10;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE18u: goto label_1aae18;
            case 0x1AAE1Cu: goto label_1aae1c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD9Cu; }
            if (ctx->pc != 0x1AAD9Cu) { return; }
        }
    }
    ctx->pc = 0x1AAD9Cu;
label_1aad9c:
    // 0x1aad9c: 0x0
    ctx->pc = 0x1aad9cu;
    // NOP
label_1aada0:
    // 0x1aada0: 0x8ec70008
    ctx->pc = 0x1aada0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1aada4:
    // 0x1aada4: 0x8ec40004
    ctx->pc = 0x1aada4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1aada8:
    // 0x1aada8: 0x24060009
    ctx->pc = 0x1aada8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
label_1aadac:
    // 0x1aadac: 0x24050007
    ctx->pc = 0x1aadacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
label_1aadb0:
    // 0x1aadb0: 0x2403fffc
    ctx->pc = 0x1aadb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
label_1aadb4:
    // 0x1aadb4: 0x26310001
    ctx->pc = 0x1aadb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1aadb8:
    // 0x1aadb8: 0x739c2
    ctx->pc = 0x1aadb8u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 7), 7));
label_1aadbc:
    // 0x1aadbc: 0x30e70001
    ctx->pc = 0x1aadbcu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 1));
label_1aadc0:
    // 0x1aadc0: 0xa7300a
    ctx->pc = 0x1aadc0u;
    if (GPR_U32(ctx, 7) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 5));
label_1aadc4:
    // 0x1aadc4: 0x862018
    ctx->pc = 0x1aadc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_1aadc8:
    // 0x1aadc8: 0x24840014
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20));
label_1aadcc:
    // 0x1aadcc: 0x831824
    ctx->pc = 0x1aadccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aadd0:
    // 0x1aadd0: 0x31880
    ctx->pc = 0x1aadd0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1aadd4:
    // 0x1aadd4: 0x2c3b021
    ctx->pc = 0x1aadd4u;
    SET_GPR_U32(ctx, 22, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_1aadd8:
    // 0x1aadd8: 0x2561823
    ctx->pc = 0x1aadd8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
label_1aaddc:
    // 0x1aaddc: 0x28610011
    ctx->pc = 0x1aaddcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 17));
label_1aade0:
    // 0x1aade0: 0x1020ffe4
label_1aade4:
    if (ctx->pc == 0x1AADE4u) {
        ctx->pc = 0x1AADE8u;
        goto label_1aade8;
    }
    ctx->pc = 0x1AADE0u;
    {
        const bool branch_taken_0x1aade0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aade0) {
            ctx->pc = 0x1AAD74u;
            goto label_1aad74;
        }
    }
    ctx->pc = 0x1AADE8u;
label_1aade8:
    // 0x1aade8: 0x8e430000
    ctx->pc = 0x1aade8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1aadec:
    // 0x1aadec: 0x1460ffd4
label_1aadf0:
    if (ctx->pc == 0x1AADF0u) {
        ctx->pc = 0x1AADF4u;
        goto label_1aadf4;
    }
    ctx->pc = 0x1AADECu;
    {
        const bool branch_taken_0x1aadec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1aadec) {
            ctx->pc = 0x1AAD40u;
            goto label_1aad40;
        }
    }
    ctx->pc = 0x1AADF4u;
label_1aadf4:
    // 0x1aadf4: 0x0
    ctx->pc = 0x1aadf4u;
    // NOP
label_1aadf8:
    // 0x1aadf8: 0x7bbf0070
    ctx->pc = 0x1aadf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1aadfc:
    // 0x1aadfc: 0x7bb60060
    ctx->pc = 0x1aadfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aae00:
    // 0x1aae00: 0x7bb50050
    ctx->pc = 0x1aae00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aae04:
    // 0x1aae04: 0x7bb40040
    ctx->pc = 0x1aae04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aae08:
    // 0x1aae08: 0x7bb30030
    ctx->pc = 0x1aae08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aae0c:
    // 0x1aae0c: 0x7bb20020
    ctx->pc = 0x1aae0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aae10:
    // 0x1aae10: 0x7bb10010
    ctx->pc = 0x1aae10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aae14:
    // 0x1aae14: 0x7bb00000
    ctx->pc = 0x1aae14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aae18:
    // 0x1aae18: 0x3e00008
label_1aae1c:
    if (ctx->pc == 0x1AAE1Cu) {
        ctx->pc = 0x1AAE1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1AAE20u;
        goto label_fallthrough_0x1aae18;
    }
    ctx->pc = 0x1AAE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            case 0x1AACECu: goto label_1aacec;
            case 0x1AACF0u: goto label_1aacf0;
            case 0x1AACF4u: goto label_1aacf4;
            case 0x1AACF8u: goto label_1aacf8;
            case 0x1AACFCu: goto label_1aacfc;
            case 0x1AAD00u: goto label_1aad00;
            case 0x1AAD04u: goto label_1aad04;
            case 0x1AAD08u: goto label_1aad08;
            case 0x1AAD0Cu: goto label_1aad0c;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD14u: goto label_1aad14;
            case 0x1AAD18u: goto label_1aad18;
            case 0x1AAD1Cu: goto label_1aad1c;
            case 0x1AAD20u: goto label_1aad20;
            case 0x1AAD24u: goto label_1aad24;
            case 0x1AAD28u: goto label_1aad28;
            case 0x1AAD2Cu: goto label_1aad2c;
            case 0x1AAD30u: goto label_1aad30;
            case 0x1AAD34u: goto label_1aad34;
            case 0x1AAD38u: goto label_1aad38;
            case 0x1AAD3Cu: goto label_1aad3c;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD44u: goto label_1aad44;
            case 0x1AAD48u: goto label_1aad48;
            case 0x1AAD4Cu: goto label_1aad4c;
            case 0x1AAD50u: goto label_1aad50;
            case 0x1AAD54u: goto label_1aad54;
            case 0x1AAD58u: goto label_1aad58;
            case 0x1AAD5Cu: goto label_1aad5c;
            case 0x1AAD60u: goto label_1aad60;
            case 0x1AAD64u: goto label_1aad64;
            case 0x1AAD68u: goto label_1aad68;
            case 0x1AAD6Cu: goto label_1aad6c;
            case 0x1AAD70u: goto label_1aad70;
            case 0x1AAD74u: goto label_1aad74;
            case 0x1AAD78u: goto label_1aad78;
            case 0x1AAD7Cu: goto label_1aad7c;
            case 0x1AAD80u: goto label_1aad80;
            case 0x1AAD84u: goto label_1aad84;
            case 0x1AAD88u: goto label_1aad88;
            case 0x1AAD8Cu: goto label_1aad8c;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AAD94u: goto label_1aad94;
            case 0x1AAD98u: goto label_1aad98;
            case 0x1AAD9Cu: goto label_1aad9c;
            case 0x1AADA0u: goto label_1aada0;
            case 0x1AADA4u: goto label_1aada4;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AADACu: goto label_1aadac;
            case 0x1AADB0u: goto label_1aadb0;
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AADB8u: goto label_1aadb8;
            case 0x1AADBCu: goto label_1aadbc;
            case 0x1AADC0u: goto label_1aadc0;
            case 0x1AADC4u: goto label_1aadc4;
            case 0x1AADC8u: goto label_1aadc8;
            case 0x1AADCCu: goto label_1aadcc;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADD4u: goto label_1aadd4;
            case 0x1AADD8u: goto label_1aadd8;
            case 0x1AADDCu: goto label_1aaddc;
            case 0x1AADE0u: goto label_1aade0;
            case 0x1AADE4u: goto label_1aade4;
            case 0x1AADE8u: goto label_1aade8;
            case 0x1AADECu: goto label_1aadec;
            case 0x1AADF0u: goto label_1aadf0;
            case 0x1AADF4u: goto label_1aadf4;
            case 0x1AADF8u: goto label_1aadf8;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE00u: goto label_1aae00;
            case 0x1AAE04u: goto label_1aae04;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE10u: goto label_1aae10;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE18u: goto label_1aae18;
            case 0x1AAE1Cu: goto label_1aae1c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1aae18:
    ctx->pc = 0x1AAE20u;
}
