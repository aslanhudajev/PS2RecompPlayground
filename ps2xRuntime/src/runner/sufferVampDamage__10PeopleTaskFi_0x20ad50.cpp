#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sufferVampDamage__10PeopleTaskFi
// Address: 0x20ad50 - 0x20b360
void sufferVampDamage__10PeopleTaskFi_0x20ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sufferVampDamage__10PeopleTaskFi");


    ctx->pc = 0x20ad50u;

label_20ad50:
    // 0x20ad50: 0x27bdff30
    ctx->pc = 0x20ad50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_20ad54:
    // 0x20ad54: 0x7fbf0040
    ctx->pc = 0x20ad54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_20ad58:
    // 0x20ad58: 0x7fb20030
    ctx->pc = 0x20ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20ad5c:
    // 0x20ad5c: 0x7fb10020
    ctx->pc = 0x20ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20ad60:
    // 0x20ad60: 0x7fb00010
    ctx->pc = 0x20ad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20ad64:
    // 0x20ad64: 0xe7b40000
    ctx->pc = 0x20ad64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20ad68:
    // 0x20ad68: 0x8c861db0
    ctx->pc = 0x20ad68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7600)));
label_20ad6c:
    // 0x20ad6c: 0x70809628
    ctx->pc = 0x20ad6cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_20ad70:
    // 0x20ad70: 0x3c020027
    ctx->pc = 0x20ad70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_20ad74:
    // 0x20ad74: 0x70a08e28
    ctx->pc = 0x20ad74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_20ad78:
    // 0x20ad78: 0x51840
    ctx->pc = 0x20ad78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_20ad7c:
    // 0x20ad7c: 0x24442a98
    ctx->pc = 0x20ad7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 10904));
label_20ad80:
    // 0x20ad80: 0x3c02009b
    ctx->pc = 0x20ad80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)155 << 16));
label_20ad84:
    // 0x20ad84: 0x62880
    ctx->pc = 0x20ad84u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
label_20ad88:
    // 0x20ad88: 0x2442ab10
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945552));
label_20ad8c:
    // 0x20ad8c: 0x438021
    ctx->pc = 0x20ad8cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ad90:
    // 0x20ad90: 0x852021
    ctx->pc = 0x20ad90u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20ad94:
    // 0x20ad94: 0x8c820000
    ctx->pc = 0x20ad94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ad98:
    // 0x20ad98: 0x96030000
    ctx->pc = 0x20ad98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_20ad9c:
    // 0x20ad9c: 0x431021
    ctx->pc = 0x20ad9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ada0:
    // 0x20ada0: 0x90420000
    ctx->pc = 0x20ada0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20ada4:
    // 0x20ada4: 0x4400004
label_20ada8:
    if (ctx->pc == 0x20ADA8u) {
        ctx->pc = 0x20ADA8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20ADACu;
        goto label_20adac;
    }
    ctx->pc = 0x20ADA4u;
    {
        const bool branch_taken_0x20ada4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20ADA8u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20ada4) {
            ctx->pc = 0x20ADB8u;
            goto label_20adb8;
        }
    }
    ctx->pc = 0x20ADACu;
label_20adac:
    // 0x20adac: 0x44820000
    ctx->pc = 0x20adacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_20adb0:
    // 0x20adb0: 0x10000007
label_20adb4:
    if (ctx->pc == 0x20ADB4u) {
        ctx->pc = 0x20ADB4u;
        ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        ctx->pc = 0x20ADB8u;
        goto label_20adb8;
    }
    ctx->pc = 0x20ADB0u;
    {
        const bool branch_taken_0x20adb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ADB4u;
        ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
        if (branch_taken_0x20adb0) {
            ctx->pc = 0x20ADD0u;
            goto label_20add0;
        }
    }
    ctx->pc = 0x20ADB8u;
label_20adb8:
    // 0x20adb8: 0x30420001
    ctx->pc = 0x20adb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_20adbc:
    // 0x20adbc: 0x621825
    ctx->pc = 0x20adbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20adc0:
    // 0x20adc0: 0x44830000
    ctx->pc = 0x20adc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_20adc4:
    // 0x20adc4: 0x0
    ctx->pc = 0x20adc4u;
    // NOP
label_20adc8:
    // 0x20adc8: 0x46800520
    ctx->pc = 0x20adc8u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_20adcc:
    // 0x20adcc: 0x4614a500
    ctx->pc = 0x20adccu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_20add0:
    // 0x20add0: 0xc2501c0
label_20add4:
    if (ctx->pc == 0x20ADD4u) {
        ctx->pc = 0x20ADD4u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938200)));
        ctx->pc = 0x20ADD8u;
        goto label_20add8;
    }
    ctx->pc = 0x20ADD0u;
    SET_GPR_U32(ctx, 31, 0x20ADD8u);
    ctx->pc = 0x20ADD4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938200)));
    ctx->pc = 0x940700u;
    {
        const uint32_t __entryPc = ctx->pc;
        OrgPlWeaponDamageGet__Fc_0x940700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADD8u; }
        else if (ctx->pc != 0x20ADD8u) { ctx->pc = 0x20ADD8u; }
    }
    if (ctx->pc != 0x20ADD8u) { return; }
    ctx->pc = 0x20ADD8u;
label_20add8:
    // 0x20add8: 0x4600a502
    ctx->pc = 0x20add8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_20addc:
    // 0x20addc: 0xc053146
label_20ade0:
    if (ctx->pc == 0x20ADE0u) {
        ctx->pc = 0x20ADE0u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x20ADE4u;
        goto label_20ade4;
    }
    ctx->pc = 0x20ADDCu;
    SET_GPR_U32(ctx, 31, 0x20ADE4u);
    ctx->pc = 0x20ADE0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADE4u; }
        else if (ctx->pc != 0x20ADE4u) { ctx->pc = 0x20ADE4u; }
    }
    if (ctx->pc != 0x20ADE4u) { return; }
    ctx->pc = 0x20ADE4u;
label_20ade4:
    // 0x20ade4: 0x3c010050
    ctx->pc = 0x20ade4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_20ade8:
    // 0x20ade8: 0x8424e504
    ctx->pc = 0x20ade8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_20adec:
    // 0x20adec: 0x2403000a
    ctx->pc = 0x20adecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_20adf0:
    // 0x20adf0: 0x14830013
label_20adf4:
    if (ctx->pc == 0x20ADF4u) {
        ctx->pc = 0x20ADF8u;
        goto label_20adf8;
    }
    ctx->pc = 0x20ADF0u;
    {
        const bool branch_taken_0x20adf0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20adf0) {
            ctx->pc = 0x20AE40u;
            goto label_20ae40;
        }
    }
    ctx->pc = 0x20ADF8u;
label_20adf8:
    // 0x20adf8: 0x8f848bcc
    ctx->pc = 0x20adf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_20adfc:
    // 0x20adfc: 0x24030001
    ctx->pc = 0x20adfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20ae00:
    // 0x20ae00: 0x1483000f
label_20ae04:
    if (ctx->pc == 0x20AE04u) {
        ctx->pc = 0x20AE08u;
        goto label_20ae08;
    }
    ctx->pc = 0x20AE00u;
    {
        const bool branch_taken_0x20ae00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20ae00) {
            ctx->pc = 0x20AE40u;
            goto label_20ae40;
        }
    }
    ctx->pc = 0x20AE08u;
label_20ae08:
    // 0x20ae08: 0x83858e58
    ctx->pc = 0x20ae08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938200)));
label_20ae0c:
    // 0x20ae0c: 0x3c030050
    ctx->pc = 0x20ae0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
label_20ae10:
    // 0x20ae10: 0x2463e066
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959206));
label_20ae14:
    // 0x20ae14: 0x52100
    ctx->pc = 0x20ae14u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
label_20ae18:
    // 0x20ae18: 0x852823
    ctx->pc = 0x20ae18u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20ae1c:
    // 0x20ae1c: 0x520c0
    ctx->pc = 0x20ae1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
label_20ae20:
    // 0x20ae20: 0x852023
    ctx->pc = 0x20ae20u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20ae24:
    // 0x20ae24: 0x420c0
    ctx->pc = 0x20ae24u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_20ae28:
    // 0x20ae28: 0x641821
    ctx->pc = 0x20ae28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ae2c:
    // 0x20ae2c: 0x80630000
    ctx->pc = 0x20ae2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20ae30:
    // 0x20ae30: 0x10600003
label_20ae34:
    if (ctx->pc == 0x20AE34u) {
        ctx->pc = 0x20AE38u;
        goto label_20ae38;
    }
    ctx->pc = 0x20AE30u;
    {
        const bool branch_taken_0x20ae30 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ae30) {
            ctx->pc = 0x20AE40u;
            goto label_20ae40;
        }
    }
    ctx->pc = 0x20AE38u;
label_20ae38:
    // 0x20ae38: 0x8e420018
    ctx->pc = 0x20ae38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20ae3c:
    // 0x20ae3c: 0x0
    ctx->pc = 0x20ae3cu;
    // NOP
label_20ae40:
    // 0x20ae40: 0x8e430018
    ctx->pc = 0x20ae40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20ae44:
    // 0x20ae44: 0xae430020
    ctx->pc = 0x20ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_20ae48:
    // 0x20ae48: 0x8e430018
    ctx->pc = 0x20ae48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20ae4c:
    // 0x20ae4c: 0x621023
    ctx->pc = 0x20ae4cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ae50:
    // 0x20ae50: 0xae420018
    ctx->pc = 0x20ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_20ae54:
    // 0x20ae54: 0x8e420018
    ctx->pc = 0x20ae54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_20ae58:
    // 0x20ae58: 0x1c400006
label_20ae5c:
    if (ctx->pc == 0x20AE5Cu) {
        ctx->pc = 0x20AE60u;
        goto label_20ae60;
    }
    ctx->pc = 0x20AE58u;
    {
        const bool branch_taken_0x20ae58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20ae58) {
            ctx->pc = 0x20AE74u;
            goto label_20ae74;
        }
    }
    ctx->pc = 0x20AE60u;
label_20ae60:
    // 0x20ae60: 0x8e43000c
    ctx->pc = 0x20ae60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20ae64:
    // 0x20ae64: 0x3c020400
    ctx->pc = 0x20ae64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
label_20ae68:
    // 0x20ae68: 0x621025
    ctx->pc = 0x20ae68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ae6c:
    // 0x20ae6c: 0x10000048
label_20ae70:
    if (ctx->pc == 0x20AE70u) {
        ctx->pc = 0x20AE70u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x20AE74u;
        goto label_20ae74;
    }
    ctx->pc = 0x20AE6Cu;
    {
        const bool branch_taken_0x20ae6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AE70u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x20ae6c) {
            ctx->pc = 0x20AF90u;
            goto label_20af90;
        }
    }
    ctx->pc = 0x20AE74u;
label_20ae74:
    // 0x20ae74: 0x8e46000c
    ctx->pc = 0x20ae74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20ae78:
    // 0x20ae78: 0x30c22000
    ctx->pc = 0x20ae78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8192));
label_20ae7c:
    // 0x20ae7c: 0x14400044
label_20ae80:
    if (ctx->pc == 0x20AE80u) {
        ctx->pc = 0x20AE84u;
        goto label_20ae84;
    }
    ctx->pc = 0x20AE7Cu;
    {
        const bool branch_taken_0x20ae7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ae7c) {
            ctx->pc = 0x20AF90u;
            goto label_20af90;
        }
    }
    ctx->pc = 0x20AE84u;
label_20ae84:
    // 0x20ae84: 0x96020000
    ctx->pc = 0x20ae84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_20ae88:
    // 0x20ae88: 0x8e451db0
    ctx->pc = 0x20ae88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 7600)));
label_20ae8c:
    // 0x20ae8c: 0x3c030027
    ctx->pc = 0x20ae8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)39 << 16));
label_20ae90:
    // 0x20ae90: 0x24642ae0
    ctx->pc = 0x20ae90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 10976));
label_20ae94:
    // 0x20ae94: 0x2a21000b
    ctx->pc = 0x20ae94u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 11));
label_20ae98:
    // 0x20ae98: 0x21840
    ctx->pc = 0x20ae98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
label_20ae9c:
    // 0x20ae9c: 0x51080
    ctx->pc = 0x20ae9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_20aea0:
    // 0x20aea0: 0x821021
    ctx->pc = 0x20aea0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20aea4:
    // 0x20aea4: 0x8c420000
    ctx->pc = 0x20aea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20aea8:
    // 0x20aea8: 0x431021
    ctx->pc = 0x20aea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20aeac:
    // 0x20aeac: 0x10200015
label_20aeb0:
    if (ctx->pc == 0x20AEB0u) {
        ctx->pc = 0x20AEB0u;
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x20AEB4u;
        goto label_20aeb4;
    }
    ctx->pc = 0x20AEACu;
    {
        const bool branch_taken_0x20aeac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AEB0u;
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x20aeac) {
            ctx->pc = 0x20AF04u;
            goto label_20af04;
        }
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0x3c034000
    ctx->pc = 0x20aeb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
label_20aeb8:
    // 0x20aeb8: 0xc31024
    ctx->pc = 0x20aeb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_20aebc:
    // 0x20aebc: 0x14400030
label_20aec0:
    if (ctx->pc == 0x20AEC0u) {
        ctx->pc = 0x20AEC0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x20AEC4u;
        goto label_20aec4;
    }
    ctx->pc = 0x20AEBCu;
    {
        const bool branch_taken_0x20aebc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AEC0u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        if (branch_taken_0x20aebc) {
            ctx->pc = 0x20AF80u;
            goto label_20af80;
        }
    }
    ctx->pc = 0x20AEC4u;
label_20aec4:
    // 0x20aec4: 0xae42000c
    ctx->pc = 0x20aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_20aec8:
    // 0x20aec8: 0x8e421d74
    ctx->pc = 0x20aec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7540)));
label_20aecc:
    // 0x20aecc: 0x72402e28
    ctx->pc = 0x20aeccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_20aed0:
    // 0x20aed0: 0x34420004
    ctx->pc = 0x20aed0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
label_20aed4:
    // 0x20aed4: 0x12400002
label_20aed8:
    if (ctx->pc == 0x20AED8u) {
        ctx->pc = 0x20AED8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7540), GPR_U32(ctx, 2));
        ctx->pc = 0x20AEDCu;
        goto label_20aedc;
    }
    ctx->pc = 0x20AED4u;
    {
        const bool branch_taken_0x20aed4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AED8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 7540), GPR_U32(ctx, 2));
        if (branch_taken_0x20aed4) {
            ctx->pc = 0x20AEE0u;
            goto label_20aee0;
        }
    }
    ctx->pc = 0x20AEDCu;
label_20aedc:
    // 0x20aedc: 0x24a50030
    ctx->pc = 0x20aedcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20aee0:
    // 0x20aee0: 0x3c02004a
    ctx->pc = 0x20aee0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_20aee4:
    // 0x20aee4: 0x24080005
    ctx->pc = 0x20aee4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
label_20aee8:
    // 0x20aee8: 0x2444e8e0
    ctx->pc = 0x20aee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_20aeec:
    // 0x20aeec: 0x24060001
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_20aef0:
    // 0x20aef0: 0x71004e28
    ctx->pc = 0x20aef0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_20aef4:
    // 0x20aef4: 0xc07ebc4
label_20aef8:
    if (ctx->pc == 0x20AEF8u) {
        ctx->pc = 0x20AEF8u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x20AEFCu;
        goto label_20aefc;
    }
    ctx->pc = 0x20AEF4u;
    SET_GPR_U32(ctx, 31, 0x20AEFCu);
    ctx->pc = 0x20AEF8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1FAF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        motDivOnce__12BodyMgrClassFP10MotObjTaskiiiii_0x1faf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AEFCu; }
        else if (ctx->pc != 0x20AEFCu) { ctx->pc = 0x20AEFCu; }
    }
    if (ctx->pc != 0x20AEFCu) { return; }
    ctx->pc = 0x20AEFCu;
label_20aefc:
    // 0x20aefc: 0x10000021
label_20af00:
    if (ctx->pc == 0x20AF00u) {
        ctx->pc = 0x20AF00u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x20AF04u;
        goto label_20af04;
    }
    ctx->pc = 0x20AEFCu;
    {
        const bool branch_taken_0x20aefc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AF00u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x20aefc) {
            ctx->pc = 0x20AF84u;
            goto label_20af84;
        }
    }
    ctx->pc = 0x20AF04u;
label_20af04:
    // 0x20af04: 0x3c021000
    ctx->pc = 0x20af04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_20af08:
    // 0x20af08: 0xc21024
    ctx->pc = 0x20af08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20af0c:
    // 0x20af0c: 0x1440001c
label_20af10:
    if (ctx->pc == 0x20AF10u) {
        ctx->pc = 0x20AF10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        ctx->pc = 0x20AF14u;
        goto label_20af14;
    }
    ctx->pc = 0x20AF0Cu;
    {
        const bool branch_taken_0x20af0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AF10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x20af0c) {
            ctx->pc = 0x20AF80u;
            goto label_20af80;
        }
    }
    ctx->pc = 0x20AF14u;
label_20af14:
    // 0x20af14: 0xc21024
    ctx->pc = 0x20af14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20af18:
    // 0x20af18: 0x10400005
label_20af1c:
    if (ctx->pc == 0x20AF1Cu) {
        ctx->pc = 0x20AF20u;
        goto label_20af20;
    }
    ctx->pc = 0x20AF18u;
    {
        const bool branch_taken_0x20af18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20af18) {
            ctx->pc = 0x20AF30u;
            goto label_20af30;
        }
    }
    ctx->pc = 0x20AF20u;
label_20af20:
    // 0x20af20: 0x8e421d74
    ctx->pc = 0x20af20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7540)));
label_20af24:
    // 0x20af24: 0x30420004
    ctx->pc = 0x20af24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_20af28:
    // 0x20af28: 0x10400015
label_20af2c:
    if (ctx->pc == 0x20AF2Cu) {
        ctx->pc = 0x20AF30u;
        goto label_20af30;
    }
    ctx->pc = 0x20AF28u;
    {
        const bool branch_taken_0x20af28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20af28) {
            ctx->pc = 0x20AF80u;
            goto label_20af80;
        }
    }
    ctx->pc = 0x20AF30u;
label_20af30:
    // 0x20af30: 0x8e43000c
    ctx->pc = 0x20af30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20af34:
    // 0x20af34: 0x3c024000
    ctx->pc = 0x20af34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
label_20af38:
    // 0x20af38: 0x72402e28
    ctx->pc = 0x20af38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_20af3c:
    // 0x20af3c: 0x621025
    ctx->pc = 0x20af3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20af40:
    // 0x20af40: 0x12400002
label_20af44:
    if (ctx->pc == 0x20AF44u) {
        ctx->pc = 0x20AF44u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x20AF48u;
        goto label_20af48;
    }
    ctx->pc = 0x20AF40u;
    {
        const bool branch_taken_0x20af40 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AF44u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x20af40) {
            ctx->pc = 0x20AF4Cu;
            goto label_20af4c;
        }
    }
    ctx->pc = 0x20AF48u;
label_20af48:
    // 0x20af48: 0x24a50030
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20af4c:
    // 0x20af4c: 0x70e03628
    ctx->pc = 0x20af4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_20af50:
    // 0x20af50: 0x3c02004a
    ctx->pc = 0x20af50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_20af54:
    // 0x20af54: 0x2407000a
    ctx->pc = 0x20af54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
label_20af58:
    // 0x20af58: 0x2444e8e0
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_20af5c:
    // 0x20af5c: 0xc07eabc
label_20af60:
    if (ctx->pc == 0x20AF60u) {
        ctx->pc = 0x20AF60u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AF64u;
        goto label_20af64;
    }
    ctx->pc = 0x20AF5Cu;
    SET_GPR_U32(ctx, 31, 0x20AF64u);
    ctx->pc = 0x20AF60u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF64u; }
        else if (ctx->pc != 0x20AF64u) { ctx->pc = 0x20AF64u; }
    }
    if (ctx->pc != 0x20AF64u) { return; }
    ctx->pc = 0x20AF64u;
label_20af64:
    // 0x20af64: 0x24020001
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20af68:
    // 0x20af68: 0xae421dac
    ctx->pc = 0x20af68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7596), GPR_U32(ctx, 2));
label_20af6c:
    // 0x20af6c: 0x8e431d74
    ctx->pc = 0x20af6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7540)));
label_20af70:
    // 0x20af70: 0x2402fffb
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
label_20af74:
    // 0x20af74: 0x621024
    ctx->pc = 0x20af74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20af78:
    // 0x20af78: 0xae421d74
    ctx->pc = 0x20af78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7540), GPR_U32(ctx, 2));
label_20af7c:
    // 0x20af7c: 0xae401dd0
    ctx->pc = 0x20af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7632), GPR_U32(ctx, 0));
label_20af80:
    // 0x20af80: 0x8e43000c
    ctx->pc = 0x20af80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20af84:
    // 0x20af84: 0x3c020008
    ctx->pc = 0x20af84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8 << 16));
label_20af88:
    // 0x20af88: 0x621025
    ctx->pc = 0x20af88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20af8c:
    // 0x20af8c: 0xae42000c
    ctx->pc = 0x20af8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_20af90:
    // 0x20af90: 0x3c010050
    ctx->pc = 0x20af90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_20af94:
    // 0x20af94: 0x8423e504
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_20af98:
    // 0x20af98: 0x2402000a
    ctx->pc = 0x20af98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_20af9c:
    // 0x20af9c: 0x14620044
label_20afa0:
    if (ctx->pc == 0x20AFA0u) {
        ctx->pc = 0x20AFA4u;
        goto label_20afa4;
    }
    ctx->pc = 0x20AF9Cu;
    {
        const bool branch_taken_0x20af9c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20af9c) {
            ctx->pc = 0x20B0B0u;
            goto label_20b0b0;
        }
    }
    ctx->pc = 0x20AFA4u;
label_20afa4:
    // 0x20afa4: 0x8f838bcc
    ctx->pc = 0x20afa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_20afa8:
    // 0x20afa8: 0x24020001
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20afac:
    // 0x20afac: 0x14620040
label_20afb0:
    if (ctx->pc == 0x20AFB0u) {
        ctx->pc = 0x20AFB4u;
        goto label_20afb4;
    }
    ctx->pc = 0x20AFACu;
    {
        const bool branch_taken_0x20afac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20afac) {
            ctx->pc = 0x20B0B0u;
            goto label_20b0b0;
        }
    }
    ctx->pc = 0x20AFB4u;
label_20afb4:
    // 0x20afb4: 0x83848e58
    ctx->pc = 0x20afb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938200)));
label_20afb8:
    // 0x20afb8: 0x3c020050
    ctx->pc = 0x20afb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_20afbc:
    // 0x20afbc: 0x2443fc80
    ctx->pc = 0x20afbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966400));
label_20afc0:
    // 0x20afc0: 0x2402000e
    ctx->pc = 0x20afc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_20afc4:
    // 0x20afc4: 0x42080
    ctx->pc = 0x20afc4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_20afc8:
    // 0x20afc8: 0x641821
    ctx->pc = 0x20afc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20afcc:
    // 0x20afcc: 0x80630000
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_20afd0:
    // 0x20afd0: 0x14620037
label_20afd4:
    if (ctx->pc == 0x20AFD4u) {
        ctx->pc = 0x20AFD4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x20AFD8u;
        goto label_20afd8;
    }
    ctx->pc = 0x20AFD0u;
    {
        const bool branch_taken_0x20afd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20AFD4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x20afd0) {
            ctx->pc = 0x20B0B0u;
            goto label_20b0b0;
        }
    }
    ctx->pc = 0x20AFD8u;
label_20afd8:
    // 0x20afd8: 0x511023
    ctx->pc = 0x20afd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20afdc:
    // 0x20afdc: 0x21100
    ctx->pc = 0x20afdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_20afe0:
    // 0x20afe0: 0x521821
    ctx->pc = 0x20afe0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20afe4:
    // 0x20afe4: 0xc461016c
    ctx->pc = 0x20afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20afe8:
    // 0x20afe8: 0x3c023f80
    ctx->pc = 0x20afe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
label_20afec:
    // 0x20afec: 0x27b10054
    ctx->pc = 0x20afecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 84));
label_20aff0:
    // 0x20aff0: 0x44820000
    ctx->pc = 0x20aff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_20aff4:
    // 0x20aff4: 0x27b00058
    ctx->pc = 0x20aff4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 88));
label_20aff8:
    // 0x20aff8: 0xe7a10050
    ctx->pc = 0x20aff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20affc:
    // 0x20affc: 0xc4610170
    ctx->pc = 0x20affcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b000:
    // 0x20b000: 0xe6210000
    ctx->pc = 0x20b000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b004:
    // 0x20b004: 0xc4610174
    ctx->pc = 0x20b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b008:
    // 0x20b008: 0x46000800
    ctx->pc = 0x20b008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20b00c:
    // 0x20b00c: 0xe6010000
    ctx->pc = 0x20b00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20b010:
    // 0x20b010: 0xe6000000
    ctx->pc = 0x20b010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20b014:
    // 0x20b014: 0x4bede37d
    ctx->pc = 0x20b014u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_20b018:
    // 0x20b018: 0x4bedeb7d
    ctx->pc = 0x20b018u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_20b01c:
    // 0x20b01c: 0x4bedf37d
    ctx->pc = 0x20b01cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_20b020:
    // 0x20b020: 0x4bedfb7d
    ctx->pc = 0x20b020u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_20b024:
    // 0x20b024: 0x8f828c48
    ctx->pc = 0x20b024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_20b028:
    // 0x20b028: 0xc06c038
label_20b02c:
    if (ctx->pc == 0x20B02Cu) {
        ctx->pc = 0x20B02Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x20B030u;
        goto label_20b030;
    }
    ctx->pc = 0x20B028u;
    SET_GPR_U32(ctx, 31, 0x20B030u);
    ctx->pc = 0x20B02Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B030u; }
        else if (ctx->pc != 0x20B030u) { ctx->pc = 0x20B030u; }
    }
    if (ctx->pc != 0x20B030u) { return; }
    ctx->pc = 0x20B030u;
label_20b030:
    // 0x20b030: 0xc7a00050
    ctx->pc = 0x20b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b034:
    // 0x20b034: 0x27a40090
    ctx->pc = 0x20b034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
label_20b038:
    // 0x20b038: 0x27a500a0
    ctx->pc = 0x20b038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
label_20b03c:
    // 0x20b03c: 0xe7a00090
    ctx->pc = 0x20b03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_20b040:
    // 0x20b040: 0xc6200000
    ctx->pc = 0x20b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b044:
    // 0x20b044: 0xe7a00094
    ctx->pc = 0x20b044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_20b048:
    // 0x20b048: 0xc6000000
    ctx->pc = 0x20b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b04c:
    // 0x20b04c: 0xc06bf00
label_20b050:
    if (ctx->pc == 0x20B050u) {
        ctx->pc = 0x20B050u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x20B054u;
        goto label_20b054;
    }
    ctx->pc = 0x20B04Cu;
    SET_GPR_U32(ctx, 31, 0x20B054u);
    ctx->pc = 0x20B050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B054u; }
        else if (ctx->pc != 0x20B054u) { ctx->pc = 0x20B054u; }
    }
    if (ctx->pc != 0x20B054u) { return; }
    ctx->pc = 0x20B054u;
label_20b054:
    // 0x20b054: 0xc7a100a0
    ctx->pc = 0x20b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b058:
    // 0x20b058: 0xc7a000a4
    ctx->pc = 0x20b058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b05c:
    // 0x20b05c: 0xe7a10050
    ctx->pc = 0x20b05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_20b060:
    // 0x20b060: 0xe6200000
    ctx->pc = 0x20b060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b064:
    // 0x20b064: 0xc7a000a8
    ctx->pc = 0x20b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b068:
    // 0x20b068: 0xe6000000
    ctx->pc = 0x20b068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20b06c:
    // 0x20b06c: 0x4bff6b7e
    ctx->pc = 0x20b06cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20b070:
    // 0x20b070: 0x4bfe6b7e
    ctx->pc = 0x20b070u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_20b074:
    // 0x20b074: 0x4bfd6b7e
    ctx->pc = 0x20b074u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_20b078:
    // 0x20b078: 0x4bfc6b7e
    ctx->pc = 0x20b078u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_20b07c:
    // 0x20b07c: 0x3c023f4c
    ctx->pc = 0x20b07cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16204 << 16));
label_20b080:
    // 0x20b080: 0x3442cccd
    ctx->pc = 0x20b080u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
label_20b084:
    // 0x20b084: 0x8f838c48
    ctx->pc = 0x20b084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_20b088:
    // 0x20b088: 0x44826000
    ctx->pc = 0x20b088u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_20b08c:
    // 0x20b08c: 0x27a40050
    ctx->pc = 0x20b08cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
label_20b090:
    // 0x20b090: 0x8c62009c
    ctx->pc = 0x20b090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_20b094:
    // 0x20b094: 0xafa2005c
    ctx->pc = 0x20b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_20b098:
    // 0x20b098: 0x8c6200a0
    ctx->pc = 0x20b098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_20b09c:
    // 0x20b09c: 0xafa20060
    ctx->pc = 0x20b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_20b0a0:
    // 0x20b0a0: 0xc24b3cc
label_20b0a4:
    if (ctx->pc == 0x20B0A4u) {
        ctx->pc = 0x20B0A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x20B0A8u;
        goto label_20b0a8;
    }
    ctx->pc = 0x20B0A0u;
    SET_GPR_U32(ctx, 31, 0x20B0A8u);
    ctx->pc = 0x20B0A4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x92CF30u;
    {
        const uint32_t __entryPc = ctx->pc;
        TyakudanLauncherMgrBorn__F4ANPOf_0x92cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0A8u; }
        else if (ctx->pc != 0x20B0A8u) { ctx->pc = 0x20B0A8u; }
    }
    if (ctx->pc != 0x20B0A8u) { return; }
    ctx->pc = 0x20B0A8u;
label_20b0a8:
    // 0x20b0a8: 0x1000003b
label_20b0ac:
    if (ctx->pc == 0x20B0ACu) {
        ctx->pc = 0x20B0ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x20B0B0u;
        goto label_20b0b0;
    }
    ctx->pc = 0x20B0A8u;
    {
        const bool branch_taken_0x20b0a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B0ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x20b0a8) {
            ctx->pc = 0x20B198u;
            goto label_20b198;
        }
    }
    ctx->pc = 0x20B0B0u;
label_20b0b0:
    // 0x20b0b0: 0x4bede37d
    ctx->pc = 0x20b0b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
label_20b0b4:
    // 0x20b0b4: 0x4bedeb7d
    ctx->pc = 0x20b0b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
label_20b0b8:
    // 0x20b0b8: 0x4bedf37d
    ctx->pc = 0x20b0b8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
label_20b0bc:
    // 0x20b0bc: 0x4bedfb7d
    ctx->pc = 0x20b0bcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
label_20b0c0:
    // 0x20b0c0: 0x8f848c48
    ctx->pc = 0x20b0c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_20b0c4:
    // 0x20b0c4: 0x8c830004
    ctx->pc = 0x20b0c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_20b0c8:
    // 0x20b0c8: 0x31040
    ctx->pc = 0x20b0c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_20b0cc:
    // 0x20b0cc: 0x431021
    ctx->pc = 0x20b0ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b0d0:
    // 0x20b0d0: 0x21080
    ctx->pc = 0x20b0d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20b0d4:
    // 0x20b0d4: 0x431021
    ctx->pc = 0x20b0d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b0d8:
    // 0x20b0d8: 0x21100
    ctx->pc = 0x20b0d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_20b0dc:
    // 0x20b0dc: 0x821021
    ctx->pc = 0x20b0dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20b0e0:
    // 0x20b0e0: 0xc06c038
label_20b0e4:
    if (ctx->pc == 0x20B0E4u) {
        ctx->pc = 0x20B0E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x20B0E8u;
        goto label_20b0e8;
    }
    ctx->pc = 0x20B0E0u;
    SET_GPR_U32(ctx, 31, 0x20B0E8u);
    ctx->pc = 0x20B0E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B0E8u; }
        else if (ctx->pc != 0x20B0E8u) { ctx->pc = 0x20B0E8u; }
    }
    if (ctx->pc != 0x20B0E8u) { return; }
    ctx->pc = 0x20B0E8u;
label_20b0e8:
    // 0x20b0e8: 0x111100
    ctx->pc = 0x20b0e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 4));
label_20b0ec:
    // 0x20b0ec: 0x511023
    ctx->pc = 0x20b0ecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20b0f0:
    // 0x20b0f0: 0x21100
    ctx->pc = 0x20b0f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_20b0f4:
    // 0x20b0f4: 0x521021
    ctx->pc = 0x20b0f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20b0f8:
    // 0x20b0f8: 0xc440016c
    ctx->pc = 0x20b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b0fc:
    // 0x20b0fc: 0x27a400b0
    ctx->pc = 0x20b0fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
label_20b100:
    // 0x20b100: 0x27a500c0
    ctx->pc = 0x20b100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 192));
label_20b104:
    // 0x20b104: 0xe7a000b0
    ctx->pc = 0x20b104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_20b108:
    // 0x20b108: 0xc4400170
    ctx->pc = 0x20b108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b10c:
    // 0x20b10c: 0xe7a000b4
    ctx->pc = 0x20b10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_20b110:
    // 0x20b110: 0xc4400174
    ctx->pc = 0x20b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b114:
    // 0x20b114: 0xc06bf00
label_20b118:
    if (ctx->pc == 0x20B118u) {
        ctx->pc = 0x20B118u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x20B11Cu;
        goto label_20b11c;
    }
    ctx->pc = 0x20B114u;
    SET_GPR_U32(ctx, 31, 0x20B11Cu);
    ctx->pc = 0x20B118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B11Cu; }
        else if (ctx->pc != 0x20B11Cu) { ctx->pc = 0x20B11Cu; }
    }
    if (ctx->pc != 0x20B11Cu) { return; }
    ctx->pc = 0x20B11Cu;
label_20b11c:
    // 0x20b11c: 0xc7a200c0
    ctx->pc = 0x20b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20b120:
    // 0x20b120: 0xc7a100c4
    ctx->pc = 0x20b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b124:
    // 0x20b124: 0xc7a000c8
    ctx->pc = 0x20b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20b128:
    // 0x20b128: 0x8f868c48
    ctx->pc = 0x20b128u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_20b12c:
    // 0x20b12c: 0x3c023f66
    ctx->pc = 0x20b12cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
label_20b130:
    // 0x20b130: 0x34426666
    ctx->pc = 0x20b130u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
label_20b134:
    // 0x20b134: 0xe7a20070
    ctx->pc = 0x20b134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_20b138:
    // 0x20b138: 0xe7a10074
    ctx->pc = 0x20b138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20b13c:
    // 0x20b13c: 0xe7a00078
    ctx->pc = 0x20b13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_20b140:
    // 0x20b140: 0x8cc30004
    ctx->pc = 0x20b140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20b144:
    // 0x20b144: 0x44826000
    ctx->pc = 0x20b144u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
label_20b148:
    // 0x20b148: 0x24040011
    ctx->pc = 0x20b148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17));
label_20b14c:
    // 0x20b14c: 0x27a50070
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 112));
label_20b150:
    // 0x20b150: 0x31040
    ctx->pc = 0x20b150u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_20b154:
    // 0x20b154: 0x431021
    ctx->pc = 0x20b154u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b158:
    // 0x20b158: 0x21080
    ctx->pc = 0x20b158u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_20b15c:
    // 0x20b15c: 0x431021
    ctx->pc = 0x20b15cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b160:
    // 0x20b160: 0x21100
    ctx->pc = 0x20b160u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_20b164:
    // 0x20b164: 0xc21821
    ctx->pc = 0x20b164u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20b168:
    // 0x20b168: 0x8c62009c
    ctx->pc = 0x20b168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_20b16c:
    // 0x20b16c: 0xafa2007c
    ctx->pc = 0x20b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_20b170:
    // 0x20b170: 0x8c6200a0
    ctx->pc = 0x20b170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_20b174:
    // 0x20b174: 0xafa20080
    ctx->pc = 0x20b174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_20b178:
    // 0x20b178: 0x8c6200a4
    ctx->pc = 0x20b178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_20b17c:
    // 0x20b17c: 0xc0785e0
label_20b180:
    if (ctx->pc == 0x20B180u) {
        ctx->pc = 0x20B180u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x20B184u;
        goto label_20b184;
    }
    ctx->pc = 0x20B17Cu;
    SET_GPR_U32(ctx, 31, 0x20B184u);
    ctx->pc = 0x20B180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B184u; }
        else if (ctx->pc != 0x20B184u) { ctx->pc = 0x20B184u; }
    }
    if (ctx->pc != 0x20B184u) { return; }
    ctx->pc = 0x20B184u;
label_20b184:
    // 0x20b184: 0x4bff6b7e
    ctx->pc = 0x20b184u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_20b188:
    // 0x20b188: 0x4bfe6b7e
    ctx->pc = 0x20b188u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
label_20b18c:
    // 0x20b18c: 0x4bfd6b7e
    ctx->pc = 0x20b18cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_20b190:
    // 0x20b190: 0x4bfc6b7e
    ctx->pc = 0x20b190u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_20b194:
    // 0x20b194: 0x8e44000c
    ctx->pc = 0x20b194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20b198:
    // 0x20b198: 0x3c030400
    ctx->pc = 0x20b198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
label_20b19c:
    // 0x20b19c: 0x831824
    ctx->pc = 0x20b19cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20b1a0:
    // 0x20b1a0: 0x1060001a
label_20b1a4:
    if (ctx->pc == 0x20B1A4u) {
        ctx->pc = 0x20B1A4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20B1A8u;
        goto label_20b1a8;
    }
    ctx->pc = 0x20B1A0u;
    {
        const bool branch_taken_0x20b1a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B1A4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20b1a0) {
            ctx->pc = 0x20B20Cu;
            goto label_20b20c;
        }
    }
    ctx->pc = 0x20B1A8u;
label_20b1a8:
    // 0x20b1a8: 0x83838ba8
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_20b1ac:
    // 0x20b1ac: 0x2c610007
    ctx->pc = 0x20b1acu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_20b1b0:
    // 0x20b1b0: 0x1020005b
label_20b1b4:
    if (ctx->pc == 0x20B1B4u) {
        ctx->pc = 0x20B1B4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x20B1B8u;
        goto label_20b1b8;
    }
    ctx->pc = 0x20B1B0u;
    {
        const bool branch_taken_0x20b1b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B1B4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x20b1b0) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B1B8u;
label_20b1b8:
    // 0x20b1b8: 0x31880
    ctx->pc = 0x20b1b8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20b1bc:
    // 0x20b1bc: 0x248404f0
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1264));
label_20b1c0:
    // 0x20b1c0: 0x641821
    ctx->pc = 0x20b1c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b1c4:
    // 0x20b1c4: 0x8c630000
    ctx->pc = 0x20b1c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b1c8:
    // 0x20b1c8: 0x600008
label_20b1cc:
    if (ctx->pc == 0x20B1CCu) {
        ctx->pc = 0x20B1D0u;
        goto label_20b1d0;
    }
    ctx->pc = 0x20B1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AD50u: goto label_20ad50;
            case 0x20AD54u: goto label_20ad54;
            case 0x20AD58u: goto label_20ad58;
            case 0x20AD5Cu: goto label_20ad5c;
            case 0x20AD60u: goto label_20ad60;
            case 0x20AD64u: goto label_20ad64;
            case 0x20AD68u: goto label_20ad68;
            case 0x20AD6Cu: goto label_20ad6c;
            case 0x20AD70u: goto label_20ad70;
            case 0x20AD74u: goto label_20ad74;
            case 0x20AD78u: goto label_20ad78;
            case 0x20AD7Cu: goto label_20ad7c;
            case 0x20AD80u: goto label_20ad80;
            case 0x20AD84u: goto label_20ad84;
            case 0x20AD88u: goto label_20ad88;
            case 0x20AD8Cu: goto label_20ad8c;
            case 0x20AD90u: goto label_20ad90;
            case 0x20AD94u: goto label_20ad94;
            case 0x20AD98u: goto label_20ad98;
            case 0x20AD9Cu: goto label_20ad9c;
            case 0x20ADA0u: goto label_20ada0;
            case 0x20ADA4u: goto label_20ada4;
            case 0x20ADA8u: goto label_20ada8;
            case 0x20ADACu: goto label_20adac;
            case 0x20ADB0u: goto label_20adb0;
            case 0x20ADB4u: goto label_20adb4;
            case 0x20ADB8u: goto label_20adb8;
            case 0x20ADBCu: goto label_20adbc;
            case 0x20ADC0u: goto label_20adc0;
            case 0x20ADC4u: goto label_20adc4;
            case 0x20ADC8u: goto label_20adc8;
            case 0x20ADCCu: goto label_20adcc;
            case 0x20ADD0u: goto label_20add0;
            case 0x20ADD4u: goto label_20add4;
            case 0x20ADD8u: goto label_20add8;
            case 0x20ADDCu: goto label_20addc;
            case 0x20ADE0u: goto label_20ade0;
            case 0x20ADE4u: goto label_20ade4;
            case 0x20ADE8u: goto label_20ade8;
            case 0x20ADECu: goto label_20adec;
            case 0x20ADF0u: goto label_20adf0;
            case 0x20ADF4u: goto label_20adf4;
            case 0x20ADF8u: goto label_20adf8;
            case 0x20ADFCu: goto label_20adfc;
            case 0x20AE00u: goto label_20ae00;
            case 0x20AE04u: goto label_20ae04;
            case 0x20AE08u: goto label_20ae08;
            case 0x20AE0Cu: goto label_20ae0c;
            case 0x20AE10u: goto label_20ae10;
            case 0x20AE14u: goto label_20ae14;
            case 0x20AE18u: goto label_20ae18;
            case 0x20AE1Cu: goto label_20ae1c;
            case 0x20AE20u: goto label_20ae20;
            case 0x20AE24u: goto label_20ae24;
            case 0x20AE28u: goto label_20ae28;
            case 0x20AE2Cu: goto label_20ae2c;
            case 0x20AE30u: goto label_20ae30;
            case 0x20AE34u: goto label_20ae34;
            case 0x20AE38u: goto label_20ae38;
            case 0x20AE3Cu: goto label_20ae3c;
            case 0x20AE40u: goto label_20ae40;
            case 0x20AE44u: goto label_20ae44;
            case 0x20AE48u: goto label_20ae48;
            case 0x20AE4Cu: goto label_20ae4c;
            case 0x20AE50u: goto label_20ae50;
            case 0x20AE54u: goto label_20ae54;
            case 0x20AE58u: goto label_20ae58;
            case 0x20AE5Cu: goto label_20ae5c;
            case 0x20AE60u: goto label_20ae60;
            case 0x20AE64u: goto label_20ae64;
            case 0x20AE68u: goto label_20ae68;
            case 0x20AE6Cu: goto label_20ae6c;
            case 0x20AE70u: goto label_20ae70;
            case 0x20AE74u: goto label_20ae74;
            case 0x20AE78u: goto label_20ae78;
            case 0x20AE7Cu: goto label_20ae7c;
            case 0x20AE80u: goto label_20ae80;
            case 0x20AE84u: goto label_20ae84;
            case 0x20AE88u: goto label_20ae88;
            case 0x20AE8Cu: goto label_20ae8c;
            case 0x20AE90u: goto label_20ae90;
            case 0x20AE94u: goto label_20ae94;
            case 0x20AE98u: goto label_20ae98;
            case 0x20AE9Cu: goto label_20ae9c;
            case 0x20AEA0u: goto label_20aea0;
            case 0x20AEA4u: goto label_20aea4;
            case 0x20AEA8u: goto label_20aea8;
            case 0x20AEACu: goto label_20aeac;
            case 0x20AEB0u: goto label_20aeb0;
            case 0x20AEB4u: goto label_20aeb4;
            case 0x20AEB8u: goto label_20aeb8;
            case 0x20AEBCu: goto label_20aebc;
            case 0x20AEC0u: goto label_20aec0;
            case 0x20AEC4u: goto label_20aec4;
            case 0x20AEC8u: goto label_20aec8;
            case 0x20AECCu: goto label_20aecc;
            case 0x20AED0u: goto label_20aed0;
            case 0x20AED4u: goto label_20aed4;
            case 0x20AED8u: goto label_20aed8;
            case 0x20AEDCu: goto label_20aedc;
            case 0x20AEE0u: goto label_20aee0;
            case 0x20AEE4u: goto label_20aee4;
            case 0x20AEE8u: goto label_20aee8;
            case 0x20AEECu: goto label_20aeec;
            case 0x20AEF0u: goto label_20aef0;
            case 0x20AEF4u: goto label_20aef4;
            case 0x20AEF8u: goto label_20aef8;
            case 0x20AEFCu: goto label_20aefc;
            case 0x20AF00u: goto label_20af00;
            case 0x20AF04u: goto label_20af04;
            case 0x20AF08u: goto label_20af08;
            case 0x20AF0Cu: goto label_20af0c;
            case 0x20AF10u: goto label_20af10;
            case 0x20AF14u: goto label_20af14;
            case 0x20AF18u: goto label_20af18;
            case 0x20AF1Cu: goto label_20af1c;
            case 0x20AF20u: goto label_20af20;
            case 0x20AF24u: goto label_20af24;
            case 0x20AF28u: goto label_20af28;
            case 0x20AF2Cu: goto label_20af2c;
            case 0x20AF30u: goto label_20af30;
            case 0x20AF34u: goto label_20af34;
            case 0x20AF38u: goto label_20af38;
            case 0x20AF3Cu: goto label_20af3c;
            case 0x20AF40u: goto label_20af40;
            case 0x20AF44u: goto label_20af44;
            case 0x20AF48u: goto label_20af48;
            case 0x20AF4Cu: goto label_20af4c;
            case 0x20AF50u: goto label_20af50;
            case 0x20AF54u: goto label_20af54;
            case 0x20AF58u: goto label_20af58;
            case 0x20AF5Cu: goto label_20af5c;
            case 0x20AF60u: goto label_20af60;
            case 0x20AF64u: goto label_20af64;
            case 0x20AF68u: goto label_20af68;
            case 0x20AF6Cu: goto label_20af6c;
            case 0x20AF70u: goto label_20af70;
            case 0x20AF74u: goto label_20af74;
            case 0x20AF78u: goto label_20af78;
            case 0x20AF7Cu: goto label_20af7c;
            case 0x20AF80u: goto label_20af80;
            case 0x20AF84u: goto label_20af84;
            case 0x20AF88u: goto label_20af88;
            case 0x20AF8Cu: goto label_20af8c;
            case 0x20AF90u: goto label_20af90;
            case 0x20AF94u: goto label_20af94;
            case 0x20AF98u: goto label_20af98;
            case 0x20AF9Cu: goto label_20af9c;
            case 0x20AFA0u: goto label_20afa0;
            case 0x20AFA4u: goto label_20afa4;
            case 0x20AFA8u: goto label_20afa8;
            case 0x20AFACu: goto label_20afac;
            case 0x20AFB0u: goto label_20afb0;
            case 0x20AFB4u: goto label_20afb4;
            case 0x20AFB8u: goto label_20afb8;
            case 0x20AFBCu: goto label_20afbc;
            case 0x20AFC0u: goto label_20afc0;
            case 0x20AFC4u: goto label_20afc4;
            case 0x20AFC8u: goto label_20afc8;
            case 0x20AFCCu: goto label_20afcc;
            case 0x20AFD0u: goto label_20afd0;
            case 0x20AFD4u: goto label_20afd4;
            case 0x20AFD8u: goto label_20afd8;
            case 0x20AFDCu: goto label_20afdc;
            case 0x20AFE0u: goto label_20afe0;
            case 0x20AFE4u: goto label_20afe4;
            case 0x20AFE8u: goto label_20afe8;
            case 0x20AFECu: goto label_20afec;
            case 0x20AFF0u: goto label_20aff0;
            case 0x20AFF4u: goto label_20aff4;
            case 0x20AFF8u: goto label_20aff8;
            case 0x20AFFCu: goto label_20affc;
            case 0x20B000u: goto label_20b000;
            case 0x20B004u: goto label_20b004;
            case 0x20B008u: goto label_20b008;
            case 0x20B00Cu: goto label_20b00c;
            case 0x20B010u: goto label_20b010;
            case 0x20B014u: goto label_20b014;
            case 0x20B018u: goto label_20b018;
            case 0x20B01Cu: goto label_20b01c;
            case 0x20B020u: goto label_20b020;
            case 0x20B024u: goto label_20b024;
            case 0x20B028u: goto label_20b028;
            case 0x20B02Cu: goto label_20b02c;
            case 0x20B030u: goto label_20b030;
            case 0x20B034u: goto label_20b034;
            case 0x20B038u: goto label_20b038;
            case 0x20B03Cu: goto label_20b03c;
            case 0x20B040u: goto label_20b040;
            case 0x20B044u: goto label_20b044;
            case 0x20B048u: goto label_20b048;
            case 0x20B04Cu: goto label_20b04c;
            case 0x20B050u: goto label_20b050;
            case 0x20B054u: goto label_20b054;
            case 0x20B058u: goto label_20b058;
            case 0x20B05Cu: goto label_20b05c;
            case 0x20B060u: goto label_20b060;
            case 0x20B064u: goto label_20b064;
            case 0x20B068u: goto label_20b068;
            case 0x20B06Cu: goto label_20b06c;
            case 0x20B070u: goto label_20b070;
            case 0x20B074u: goto label_20b074;
            case 0x20B078u: goto label_20b078;
            case 0x20B07Cu: goto label_20b07c;
            case 0x20B080u: goto label_20b080;
            case 0x20B084u: goto label_20b084;
            case 0x20B088u: goto label_20b088;
            case 0x20B08Cu: goto label_20b08c;
            case 0x20B090u: goto label_20b090;
            case 0x20B094u: goto label_20b094;
            case 0x20B098u: goto label_20b098;
            case 0x20B09Cu: goto label_20b09c;
            case 0x20B0A0u: goto label_20b0a0;
            case 0x20B0A4u: goto label_20b0a4;
            case 0x20B0A8u: goto label_20b0a8;
            case 0x20B0ACu: goto label_20b0ac;
            case 0x20B0B0u: goto label_20b0b0;
            case 0x20B0B4u: goto label_20b0b4;
            case 0x20B0B8u: goto label_20b0b8;
            case 0x20B0BCu: goto label_20b0bc;
            case 0x20B0C0u: goto label_20b0c0;
            case 0x20B0C4u: goto label_20b0c4;
            case 0x20B0C8u: goto label_20b0c8;
            case 0x20B0CCu: goto label_20b0cc;
            case 0x20B0D0u: goto label_20b0d0;
            case 0x20B0D4u: goto label_20b0d4;
            case 0x20B0D8u: goto label_20b0d8;
            case 0x20B0DCu: goto label_20b0dc;
            case 0x20B0E0u: goto label_20b0e0;
            case 0x20B0E4u: goto label_20b0e4;
            case 0x20B0E8u: goto label_20b0e8;
            case 0x20B0ECu: goto label_20b0ec;
            case 0x20B0F0u: goto label_20b0f0;
            case 0x20B0F4u: goto label_20b0f4;
            case 0x20B0F8u: goto label_20b0f8;
            case 0x20B0FCu: goto label_20b0fc;
            case 0x20B100u: goto label_20b100;
            case 0x20B104u: goto label_20b104;
            case 0x20B108u: goto label_20b108;
            case 0x20B10Cu: goto label_20b10c;
            case 0x20B110u: goto label_20b110;
            case 0x20B114u: goto label_20b114;
            case 0x20B118u: goto label_20b118;
            case 0x20B11Cu: goto label_20b11c;
            case 0x20B120u: goto label_20b120;
            case 0x20B124u: goto label_20b124;
            case 0x20B128u: goto label_20b128;
            case 0x20B12Cu: goto label_20b12c;
            case 0x20B130u: goto label_20b130;
            case 0x20B134u: goto label_20b134;
            case 0x20B138u: goto label_20b138;
            case 0x20B13Cu: goto label_20b13c;
            case 0x20B140u: goto label_20b140;
            case 0x20B144u: goto label_20b144;
            case 0x20B148u: goto label_20b148;
            case 0x20B14Cu: goto label_20b14c;
            case 0x20B150u: goto label_20b150;
            case 0x20B154u: goto label_20b154;
            case 0x20B158u: goto label_20b158;
            case 0x20B15Cu: goto label_20b15c;
            case 0x20B160u: goto label_20b160;
            case 0x20B164u: goto label_20b164;
            case 0x20B168u: goto label_20b168;
            case 0x20B16Cu: goto label_20b16c;
            case 0x20B170u: goto label_20b170;
            case 0x20B174u: goto label_20b174;
            case 0x20B178u: goto label_20b178;
            case 0x20B17Cu: goto label_20b17c;
            case 0x20B180u: goto label_20b180;
            case 0x20B184u: goto label_20b184;
            case 0x20B188u: goto label_20b188;
            case 0x20B18Cu: goto label_20b18c;
            case 0x20B190u: goto label_20b190;
            case 0x20B194u: goto label_20b194;
            case 0x20B198u: goto label_20b198;
            case 0x20B19Cu: goto label_20b19c;
            case 0x20B1A0u: goto label_20b1a0;
            case 0x20B1A4u: goto label_20b1a4;
            case 0x20B1A8u: goto label_20b1a8;
            case 0x20B1ACu: goto label_20b1ac;
            case 0x20B1B0u: goto label_20b1b0;
            case 0x20B1B4u: goto label_20b1b4;
            case 0x20B1B8u: goto label_20b1b8;
            case 0x20B1BCu: goto label_20b1bc;
            case 0x20B1C0u: goto label_20b1c0;
            case 0x20B1C4u: goto label_20b1c4;
            case 0x20B1C8u: goto label_20b1c8;
            case 0x20B1CCu: goto label_20b1cc;
            case 0x20B1D0u: goto label_20b1d0;
            case 0x20B1D4u: goto label_20b1d4;
            case 0x20B1D8u: goto label_20b1d8;
            case 0x20B1DCu: goto label_20b1dc;
            case 0x20B1E0u: goto label_20b1e0;
            case 0x20B1E4u: goto label_20b1e4;
            case 0x20B1E8u: goto label_20b1e8;
            case 0x20B1ECu: goto label_20b1ec;
            case 0x20B1F0u: goto label_20b1f0;
            case 0x20B1F4u: goto label_20b1f4;
            case 0x20B1F8u: goto label_20b1f8;
            case 0x20B1FCu: goto label_20b1fc;
            case 0x20B200u: goto label_20b200;
            case 0x20B204u: goto label_20b204;
            case 0x20B208u: goto label_20b208;
            case 0x20B20Cu: goto label_20b20c;
            case 0x20B210u: goto label_20b210;
            case 0x20B214u: goto label_20b214;
            case 0x20B218u: goto label_20b218;
            case 0x20B21Cu: goto label_20b21c;
            case 0x20B220u: goto label_20b220;
            case 0x20B224u: goto label_20b224;
            case 0x20B228u: goto label_20b228;
            case 0x20B22Cu: goto label_20b22c;
            case 0x20B230u: goto label_20b230;
            case 0x20B234u: goto label_20b234;
            case 0x20B238u: goto label_20b238;
            case 0x20B23Cu: goto label_20b23c;
            case 0x20B240u: goto label_20b240;
            case 0x20B244u: goto label_20b244;
            case 0x20B248u: goto label_20b248;
            case 0x20B24Cu: goto label_20b24c;
            case 0x20B250u: goto label_20b250;
            case 0x20B254u: goto label_20b254;
            case 0x20B258u: goto label_20b258;
            case 0x20B25Cu: goto label_20b25c;
            case 0x20B260u: goto label_20b260;
            case 0x20B264u: goto label_20b264;
            case 0x20B268u: goto label_20b268;
            case 0x20B26Cu: goto label_20b26c;
            case 0x20B270u: goto label_20b270;
            case 0x20B274u: goto label_20b274;
            case 0x20B278u: goto label_20b278;
            case 0x20B27Cu: goto label_20b27c;
            case 0x20B280u: goto label_20b280;
            case 0x20B284u: goto label_20b284;
            case 0x20B288u: goto label_20b288;
            case 0x20B28Cu: goto label_20b28c;
            case 0x20B290u: goto label_20b290;
            case 0x20B294u: goto label_20b294;
            case 0x20B298u: goto label_20b298;
            case 0x20B29Cu: goto label_20b29c;
            case 0x20B2A0u: goto label_20b2a0;
            case 0x20B2A4u: goto label_20b2a4;
            case 0x20B2A8u: goto label_20b2a8;
            case 0x20B2ACu: goto label_20b2ac;
            case 0x20B2B0u: goto label_20b2b0;
            case 0x20B2B4u: goto label_20b2b4;
            case 0x20B2B8u: goto label_20b2b8;
            case 0x20B2BCu: goto label_20b2bc;
            case 0x20B2C0u: goto label_20b2c0;
            case 0x20B2C4u: goto label_20b2c4;
            case 0x20B2C8u: goto label_20b2c8;
            case 0x20B2CCu: goto label_20b2cc;
            case 0x20B2D0u: goto label_20b2d0;
            case 0x20B2D4u: goto label_20b2d4;
            case 0x20B2D8u: goto label_20b2d8;
            case 0x20B2DCu: goto label_20b2dc;
            case 0x20B2E0u: goto label_20b2e0;
            case 0x20B2E4u: goto label_20b2e4;
            case 0x20B2E8u: goto label_20b2e8;
            case 0x20B2ECu: goto label_20b2ec;
            case 0x20B2F0u: goto label_20b2f0;
            case 0x20B2F4u: goto label_20b2f4;
            case 0x20B2F8u: goto label_20b2f8;
            case 0x20B2FCu: goto label_20b2fc;
            case 0x20B300u: goto label_20b300;
            case 0x20B304u: goto label_20b304;
            case 0x20B308u: goto label_20b308;
            case 0x20B30Cu: goto label_20b30c;
            case 0x20B310u: goto label_20b310;
            case 0x20B314u: goto label_20b314;
            case 0x20B318u: goto label_20b318;
            case 0x20B31Cu: goto label_20b31c;
            case 0x20B320u: goto label_20b320;
            case 0x20B324u: goto label_20b324;
            case 0x20B328u: goto label_20b328;
            case 0x20B32Cu: goto label_20b32c;
            case 0x20B330u: goto label_20b330;
            case 0x20B334u: goto label_20b334;
            case 0x20B338u: goto label_20b338;
            case 0x20B33Cu: goto label_20b33c;
            case 0x20B340u: goto label_20b340;
            case 0x20B344u: goto label_20b344;
            case 0x20B348u: goto label_20b348;
            case 0x20B34Cu: goto label_20b34c;
            case 0x20B350u: goto label_20b350;
            case 0x20B354u: goto label_20b354;
            case 0x20B358u: goto label_20b358;
            case 0x20B35Cu: goto label_20b35c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B1D0u;
label_20b1d0:
    // 0x20b1d0: 0x3c030015
    ctx->pc = 0x20b1d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
label_20b1d4:
    // 0x20b1d4: 0x10000052
label_20b1d8:
    if (ctx->pc == 0x20B1D8u) {
        ctx->pc = 0x20B1D8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 24));
        ctx->pc = 0x20B1DCu;
        goto label_20b1dc;
    }
    ctx->pc = 0x20B1D4u;
    {
        const bool branch_taken_0x20b1d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B1D8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 24));
        if (branch_taken_0x20b1d4) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B1DCu;
label_20b1dc:
    // 0x20b1dc: 0x3c03000f
    ctx->pc = 0x20b1dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
label_20b1e0:
    // 0x20b1e0: 0x1000004f
label_20b1e4:
    if (ctx->pc == 0x20B1E4u) {
        ctx->pc = 0x20B1E4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x20B1E8u;
        goto label_20b1e8;
    }
    ctx->pc = 0x20B1E0u;
    {
        const bool branch_taken_0x20b1e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B1E4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x20b1e0) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B1E8u;
label_20b1e8:
    // 0x20b1e8: 0x3c030008
    ctx->pc = 0x20b1e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_20b1ec:
    // 0x20b1ec: 0x1000004c
label_20b1f0:
    if (ctx->pc == 0x20B1F0u) {
        ctx->pc = 0x20B1F0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 17));
        ctx->pc = 0x20B1F4u;
        goto label_20b1f4;
    }
    ctx->pc = 0x20B1ECu;
    {
        const bool branch_taken_0x20b1ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B1F0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 17));
        if (branch_taken_0x20b1ec) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B1F4u;
label_20b1f4:
    // 0x20b1f4: 0x3c030009
    ctx->pc = 0x20b1f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)9 << 16));
label_20b1f8:
    // 0x20b1f8: 0x10000049
label_20b1fc:
    if (ctx->pc == 0x20B1FCu) {
        ctx->pc = 0x20B1FCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 17));
        ctx->pc = 0x20B200u;
        goto label_20b200;
    }
    ctx->pc = 0x20B1F8u;
    {
        const bool branch_taken_0x20b1f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B1FCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 17));
        if (branch_taken_0x20b1f8) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B200u;
label_20b200:
    // 0x20b200: 0x3c03000a
    ctx->pc = 0x20b200u;
    SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
label_20b204:
    // 0x20b204: 0x10000046
label_20b208:
    if (ctx->pc == 0x20B208u) {
        ctx->pc = 0x20B208u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 18));
        ctx->pc = 0x20B20Cu;
        goto label_20b20c;
    }
    ctx->pc = 0x20B204u;
    {
        const bool branch_taken_0x20b204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B208u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 18));
        if (branch_taken_0x20b204) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B20Cu;
label_20b20c:
    // 0x20b20c: 0x83838ba8
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_20b210:
    // 0x20b210: 0x2c610007
    ctx->pc = 0x20b210u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_20b214:
    // 0x20b214: 0x10200042
label_20b218:
    if (ctx->pc == 0x20B218u) {
        ctx->pc = 0x20B218u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x20B21Cu;
        goto label_20b21c;
    }
    ctx->pc = 0x20B214u;
    {
        const bool branch_taken_0x20b214 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B218u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x20b214) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B21Cu;
label_20b21c:
    // 0x20b21c: 0x31880
    ctx->pc = 0x20b21cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20b220:
    // 0x20b220: 0x248404d0
    ctx->pc = 0x20b220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1232));
label_20b224:
    // 0x20b224: 0x641821
    ctx->pc = 0x20b224u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b228:
    // 0x20b228: 0x8c630000
    ctx->pc = 0x20b228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20b22c:
    // 0x20b22c: 0x600008
label_20b230:
    if (ctx->pc == 0x20B230u) {
        ctx->pc = 0x20B234u;
        goto label_20b234;
    }
    ctx->pc = 0x20B22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AD50u: goto label_20ad50;
            case 0x20AD54u: goto label_20ad54;
            case 0x20AD58u: goto label_20ad58;
            case 0x20AD5Cu: goto label_20ad5c;
            case 0x20AD60u: goto label_20ad60;
            case 0x20AD64u: goto label_20ad64;
            case 0x20AD68u: goto label_20ad68;
            case 0x20AD6Cu: goto label_20ad6c;
            case 0x20AD70u: goto label_20ad70;
            case 0x20AD74u: goto label_20ad74;
            case 0x20AD78u: goto label_20ad78;
            case 0x20AD7Cu: goto label_20ad7c;
            case 0x20AD80u: goto label_20ad80;
            case 0x20AD84u: goto label_20ad84;
            case 0x20AD88u: goto label_20ad88;
            case 0x20AD8Cu: goto label_20ad8c;
            case 0x20AD90u: goto label_20ad90;
            case 0x20AD94u: goto label_20ad94;
            case 0x20AD98u: goto label_20ad98;
            case 0x20AD9Cu: goto label_20ad9c;
            case 0x20ADA0u: goto label_20ada0;
            case 0x20ADA4u: goto label_20ada4;
            case 0x20ADA8u: goto label_20ada8;
            case 0x20ADACu: goto label_20adac;
            case 0x20ADB0u: goto label_20adb0;
            case 0x20ADB4u: goto label_20adb4;
            case 0x20ADB8u: goto label_20adb8;
            case 0x20ADBCu: goto label_20adbc;
            case 0x20ADC0u: goto label_20adc0;
            case 0x20ADC4u: goto label_20adc4;
            case 0x20ADC8u: goto label_20adc8;
            case 0x20ADCCu: goto label_20adcc;
            case 0x20ADD0u: goto label_20add0;
            case 0x20ADD4u: goto label_20add4;
            case 0x20ADD8u: goto label_20add8;
            case 0x20ADDCu: goto label_20addc;
            case 0x20ADE0u: goto label_20ade0;
            case 0x20ADE4u: goto label_20ade4;
            case 0x20ADE8u: goto label_20ade8;
            case 0x20ADECu: goto label_20adec;
            case 0x20ADF0u: goto label_20adf0;
            case 0x20ADF4u: goto label_20adf4;
            case 0x20ADF8u: goto label_20adf8;
            case 0x20ADFCu: goto label_20adfc;
            case 0x20AE00u: goto label_20ae00;
            case 0x20AE04u: goto label_20ae04;
            case 0x20AE08u: goto label_20ae08;
            case 0x20AE0Cu: goto label_20ae0c;
            case 0x20AE10u: goto label_20ae10;
            case 0x20AE14u: goto label_20ae14;
            case 0x20AE18u: goto label_20ae18;
            case 0x20AE1Cu: goto label_20ae1c;
            case 0x20AE20u: goto label_20ae20;
            case 0x20AE24u: goto label_20ae24;
            case 0x20AE28u: goto label_20ae28;
            case 0x20AE2Cu: goto label_20ae2c;
            case 0x20AE30u: goto label_20ae30;
            case 0x20AE34u: goto label_20ae34;
            case 0x20AE38u: goto label_20ae38;
            case 0x20AE3Cu: goto label_20ae3c;
            case 0x20AE40u: goto label_20ae40;
            case 0x20AE44u: goto label_20ae44;
            case 0x20AE48u: goto label_20ae48;
            case 0x20AE4Cu: goto label_20ae4c;
            case 0x20AE50u: goto label_20ae50;
            case 0x20AE54u: goto label_20ae54;
            case 0x20AE58u: goto label_20ae58;
            case 0x20AE5Cu: goto label_20ae5c;
            case 0x20AE60u: goto label_20ae60;
            case 0x20AE64u: goto label_20ae64;
            case 0x20AE68u: goto label_20ae68;
            case 0x20AE6Cu: goto label_20ae6c;
            case 0x20AE70u: goto label_20ae70;
            case 0x20AE74u: goto label_20ae74;
            case 0x20AE78u: goto label_20ae78;
            case 0x20AE7Cu: goto label_20ae7c;
            case 0x20AE80u: goto label_20ae80;
            case 0x20AE84u: goto label_20ae84;
            case 0x20AE88u: goto label_20ae88;
            case 0x20AE8Cu: goto label_20ae8c;
            case 0x20AE90u: goto label_20ae90;
            case 0x20AE94u: goto label_20ae94;
            case 0x20AE98u: goto label_20ae98;
            case 0x20AE9Cu: goto label_20ae9c;
            case 0x20AEA0u: goto label_20aea0;
            case 0x20AEA4u: goto label_20aea4;
            case 0x20AEA8u: goto label_20aea8;
            case 0x20AEACu: goto label_20aeac;
            case 0x20AEB0u: goto label_20aeb0;
            case 0x20AEB4u: goto label_20aeb4;
            case 0x20AEB8u: goto label_20aeb8;
            case 0x20AEBCu: goto label_20aebc;
            case 0x20AEC0u: goto label_20aec0;
            case 0x20AEC4u: goto label_20aec4;
            case 0x20AEC8u: goto label_20aec8;
            case 0x20AECCu: goto label_20aecc;
            case 0x20AED0u: goto label_20aed0;
            case 0x20AED4u: goto label_20aed4;
            case 0x20AED8u: goto label_20aed8;
            case 0x20AEDCu: goto label_20aedc;
            case 0x20AEE0u: goto label_20aee0;
            case 0x20AEE4u: goto label_20aee4;
            case 0x20AEE8u: goto label_20aee8;
            case 0x20AEECu: goto label_20aeec;
            case 0x20AEF0u: goto label_20aef0;
            case 0x20AEF4u: goto label_20aef4;
            case 0x20AEF8u: goto label_20aef8;
            case 0x20AEFCu: goto label_20aefc;
            case 0x20AF00u: goto label_20af00;
            case 0x20AF04u: goto label_20af04;
            case 0x20AF08u: goto label_20af08;
            case 0x20AF0Cu: goto label_20af0c;
            case 0x20AF10u: goto label_20af10;
            case 0x20AF14u: goto label_20af14;
            case 0x20AF18u: goto label_20af18;
            case 0x20AF1Cu: goto label_20af1c;
            case 0x20AF20u: goto label_20af20;
            case 0x20AF24u: goto label_20af24;
            case 0x20AF28u: goto label_20af28;
            case 0x20AF2Cu: goto label_20af2c;
            case 0x20AF30u: goto label_20af30;
            case 0x20AF34u: goto label_20af34;
            case 0x20AF38u: goto label_20af38;
            case 0x20AF3Cu: goto label_20af3c;
            case 0x20AF40u: goto label_20af40;
            case 0x20AF44u: goto label_20af44;
            case 0x20AF48u: goto label_20af48;
            case 0x20AF4Cu: goto label_20af4c;
            case 0x20AF50u: goto label_20af50;
            case 0x20AF54u: goto label_20af54;
            case 0x20AF58u: goto label_20af58;
            case 0x20AF5Cu: goto label_20af5c;
            case 0x20AF60u: goto label_20af60;
            case 0x20AF64u: goto label_20af64;
            case 0x20AF68u: goto label_20af68;
            case 0x20AF6Cu: goto label_20af6c;
            case 0x20AF70u: goto label_20af70;
            case 0x20AF74u: goto label_20af74;
            case 0x20AF78u: goto label_20af78;
            case 0x20AF7Cu: goto label_20af7c;
            case 0x20AF80u: goto label_20af80;
            case 0x20AF84u: goto label_20af84;
            case 0x20AF88u: goto label_20af88;
            case 0x20AF8Cu: goto label_20af8c;
            case 0x20AF90u: goto label_20af90;
            case 0x20AF94u: goto label_20af94;
            case 0x20AF98u: goto label_20af98;
            case 0x20AF9Cu: goto label_20af9c;
            case 0x20AFA0u: goto label_20afa0;
            case 0x20AFA4u: goto label_20afa4;
            case 0x20AFA8u: goto label_20afa8;
            case 0x20AFACu: goto label_20afac;
            case 0x20AFB0u: goto label_20afb0;
            case 0x20AFB4u: goto label_20afb4;
            case 0x20AFB8u: goto label_20afb8;
            case 0x20AFBCu: goto label_20afbc;
            case 0x20AFC0u: goto label_20afc0;
            case 0x20AFC4u: goto label_20afc4;
            case 0x20AFC8u: goto label_20afc8;
            case 0x20AFCCu: goto label_20afcc;
            case 0x20AFD0u: goto label_20afd0;
            case 0x20AFD4u: goto label_20afd4;
            case 0x20AFD8u: goto label_20afd8;
            case 0x20AFDCu: goto label_20afdc;
            case 0x20AFE0u: goto label_20afe0;
            case 0x20AFE4u: goto label_20afe4;
            case 0x20AFE8u: goto label_20afe8;
            case 0x20AFECu: goto label_20afec;
            case 0x20AFF0u: goto label_20aff0;
            case 0x20AFF4u: goto label_20aff4;
            case 0x20AFF8u: goto label_20aff8;
            case 0x20AFFCu: goto label_20affc;
            case 0x20B000u: goto label_20b000;
            case 0x20B004u: goto label_20b004;
            case 0x20B008u: goto label_20b008;
            case 0x20B00Cu: goto label_20b00c;
            case 0x20B010u: goto label_20b010;
            case 0x20B014u: goto label_20b014;
            case 0x20B018u: goto label_20b018;
            case 0x20B01Cu: goto label_20b01c;
            case 0x20B020u: goto label_20b020;
            case 0x20B024u: goto label_20b024;
            case 0x20B028u: goto label_20b028;
            case 0x20B02Cu: goto label_20b02c;
            case 0x20B030u: goto label_20b030;
            case 0x20B034u: goto label_20b034;
            case 0x20B038u: goto label_20b038;
            case 0x20B03Cu: goto label_20b03c;
            case 0x20B040u: goto label_20b040;
            case 0x20B044u: goto label_20b044;
            case 0x20B048u: goto label_20b048;
            case 0x20B04Cu: goto label_20b04c;
            case 0x20B050u: goto label_20b050;
            case 0x20B054u: goto label_20b054;
            case 0x20B058u: goto label_20b058;
            case 0x20B05Cu: goto label_20b05c;
            case 0x20B060u: goto label_20b060;
            case 0x20B064u: goto label_20b064;
            case 0x20B068u: goto label_20b068;
            case 0x20B06Cu: goto label_20b06c;
            case 0x20B070u: goto label_20b070;
            case 0x20B074u: goto label_20b074;
            case 0x20B078u: goto label_20b078;
            case 0x20B07Cu: goto label_20b07c;
            case 0x20B080u: goto label_20b080;
            case 0x20B084u: goto label_20b084;
            case 0x20B088u: goto label_20b088;
            case 0x20B08Cu: goto label_20b08c;
            case 0x20B090u: goto label_20b090;
            case 0x20B094u: goto label_20b094;
            case 0x20B098u: goto label_20b098;
            case 0x20B09Cu: goto label_20b09c;
            case 0x20B0A0u: goto label_20b0a0;
            case 0x20B0A4u: goto label_20b0a4;
            case 0x20B0A8u: goto label_20b0a8;
            case 0x20B0ACu: goto label_20b0ac;
            case 0x20B0B0u: goto label_20b0b0;
            case 0x20B0B4u: goto label_20b0b4;
            case 0x20B0B8u: goto label_20b0b8;
            case 0x20B0BCu: goto label_20b0bc;
            case 0x20B0C0u: goto label_20b0c0;
            case 0x20B0C4u: goto label_20b0c4;
            case 0x20B0C8u: goto label_20b0c8;
            case 0x20B0CCu: goto label_20b0cc;
            case 0x20B0D0u: goto label_20b0d0;
            case 0x20B0D4u: goto label_20b0d4;
            case 0x20B0D8u: goto label_20b0d8;
            case 0x20B0DCu: goto label_20b0dc;
            case 0x20B0E0u: goto label_20b0e0;
            case 0x20B0E4u: goto label_20b0e4;
            case 0x20B0E8u: goto label_20b0e8;
            case 0x20B0ECu: goto label_20b0ec;
            case 0x20B0F0u: goto label_20b0f0;
            case 0x20B0F4u: goto label_20b0f4;
            case 0x20B0F8u: goto label_20b0f8;
            case 0x20B0FCu: goto label_20b0fc;
            case 0x20B100u: goto label_20b100;
            case 0x20B104u: goto label_20b104;
            case 0x20B108u: goto label_20b108;
            case 0x20B10Cu: goto label_20b10c;
            case 0x20B110u: goto label_20b110;
            case 0x20B114u: goto label_20b114;
            case 0x20B118u: goto label_20b118;
            case 0x20B11Cu: goto label_20b11c;
            case 0x20B120u: goto label_20b120;
            case 0x20B124u: goto label_20b124;
            case 0x20B128u: goto label_20b128;
            case 0x20B12Cu: goto label_20b12c;
            case 0x20B130u: goto label_20b130;
            case 0x20B134u: goto label_20b134;
            case 0x20B138u: goto label_20b138;
            case 0x20B13Cu: goto label_20b13c;
            case 0x20B140u: goto label_20b140;
            case 0x20B144u: goto label_20b144;
            case 0x20B148u: goto label_20b148;
            case 0x20B14Cu: goto label_20b14c;
            case 0x20B150u: goto label_20b150;
            case 0x20B154u: goto label_20b154;
            case 0x20B158u: goto label_20b158;
            case 0x20B15Cu: goto label_20b15c;
            case 0x20B160u: goto label_20b160;
            case 0x20B164u: goto label_20b164;
            case 0x20B168u: goto label_20b168;
            case 0x20B16Cu: goto label_20b16c;
            case 0x20B170u: goto label_20b170;
            case 0x20B174u: goto label_20b174;
            case 0x20B178u: goto label_20b178;
            case 0x20B17Cu: goto label_20b17c;
            case 0x20B180u: goto label_20b180;
            case 0x20B184u: goto label_20b184;
            case 0x20B188u: goto label_20b188;
            case 0x20B18Cu: goto label_20b18c;
            case 0x20B190u: goto label_20b190;
            case 0x20B194u: goto label_20b194;
            case 0x20B198u: goto label_20b198;
            case 0x20B19Cu: goto label_20b19c;
            case 0x20B1A0u: goto label_20b1a0;
            case 0x20B1A4u: goto label_20b1a4;
            case 0x20B1A8u: goto label_20b1a8;
            case 0x20B1ACu: goto label_20b1ac;
            case 0x20B1B0u: goto label_20b1b0;
            case 0x20B1B4u: goto label_20b1b4;
            case 0x20B1B8u: goto label_20b1b8;
            case 0x20B1BCu: goto label_20b1bc;
            case 0x20B1C0u: goto label_20b1c0;
            case 0x20B1C4u: goto label_20b1c4;
            case 0x20B1C8u: goto label_20b1c8;
            case 0x20B1CCu: goto label_20b1cc;
            case 0x20B1D0u: goto label_20b1d0;
            case 0x20B1D4u: goto label_20b1d4;
            case 0x20B1D8u: goto label_20b1d8;
            case 0x20B1DCu: goto label_20b1dc;
            case 0x20B1E0u: goto label_20b1e0;
            case 0x20B1E4u: goto label_20b1e4;
            case 0x20B1E8u: goto label_20b1e8;
            case 0x20B1ECu: goto label_20b1ec;
            case 0x20B1F0u: goto label_20b1f0;
            case 0x20B1F4u: goto label_20b1f4;
            case 0x20B1F8u: goto label_20b1f8;
            case 0x20B1FCu: goto label_20b1fc;
            case 0x20B200u: goto label_20b200;
            case 0x20B204u: goto label_20b204;
            case 0x20B208u: goto label_20b208;
            case 0x20B20Cu: goto label_20b20c;
            case 0x20B210u: goto label_20b210;
            case 0x20B214u: goto label_20b214;
            case 0x20B218u: goto label_20b218;
            case 0x20B21Cu: goto label_20b21c;
            case 0x20B220u: goto label_20b220;
            case 0x20B224u: goto label_20b224;
            case 0x20B228u: goto label_20b228;
            case 0x20B22Cu: goto label_20b22c;
            case 0x20B230u: goto label_20b230;
            case 0x20B234u: goto label_20b234;
            case 0x20B238u: goto label_20b238;
            case 0x20B23Cu: goto label_20b23c;
            case 0x20B240u: goto label_20b240;
            case 0x20B244u: goto label_20b244;
            case 0x20B248u: goto label_20b248;
            case 0x20B24Cu: goto label_20b24c;
            case 0x20B250u: goto label_20b250;
            case 0x20B254u: goto label_20b254;
            case 0x20B258u: goto label_20b258;
            case 0x20B25Cu: goto label_20b25c;
            case 0x20B260u: goto label_20b260;
            case 0x20B264u: goto label_20b264;
            case 0x20B268u: goto label_20b268;
            case 0x20B26Cu: goto label_20b26c;
            case 0x20B270u: goto label_20b270;
            case 0x20B274u: goto label_20b274;
            case 0x20B278u: goto label_20b278;
            case 0x20B27Cu: goto label_20b27c;
            case 0x20B280u: goto label_20b280;
            case 0x20B284u: goto label_20b284;
            case 0x20B288u: goto label_20b288;
            case 0x20B28Cu: goto label_20b28c;
            case 0x20B290u: goto label_20b290;
            case 0x20B294u: goto label_20b294;
            case 0x20B298u: goto label_20b298;
            case 0x20B29Cu: goto label_20b29c;
            case 0x20B2A0u: goto label_20b2a0;
            case 0x20B2A4u: goto label_20b2a4;
            case 0x20B2A8u: goto label_20b2a8;
            case 0x20B2ACu: goto label_20b2ac;
            case 0x20B2B0u: goto label_20b2b0;
            case 0x20B2B4u: goto label_20b2b4;
            case 0x20B2B8u: goto label_20b2b8;
            case 0x20B2BCu: goto label_20b2bc;
            case 0x20B2C0u: goto label_20b2c0;
            case 0x20B2C4u: goto label_20b2c4;
            case 0x20B2C8u: goto label_20b2c8;
            case 0x20B2CCu: goto label_20b2cc;
            case 0x20B2D0u: goto label_20b2d0;
            case 0x20B2D4u: goto label_20b2d4;
            case 0x20B2D8u: goto label_20b2d8;
            case 0x20B2DCu: goto label_20b2dc;
            case 0x20B2E0u: goto label_20b2e0;
            case 0x20B2E4u: goto label_20b2e4;
            case 0x20B2E8u: goto label_20b2e8;
            case 0x20B2ECu: goto label_20b2ec;
            case 0x20B2F0u: goto label_20b2f0;
            case 0x20B2F4u: goto label_20b2f4;
            case 0x20B2F8u: goto label_20b2f8;
            case 0x20B2FCu: goto label_20b2fc;
            case 0x20B300u: goto label_20b300;
            case 0x20B304u: goto label_20b304;
            case 0x20B308u: goto label_20b308;
            case 0x20B30Cu: goto label_20b30c;
            case 0x20B310u: goto label_20b310;
            case 0x20B314u: goto label_20b314;
            case 0x20B318u: goto label_20b318;
            case 0x20B31Cu: goto label_20b31c;
            case 0x20B320u: goto label_20b320;
            case 0x20B324u: goto label_20b324;
            case 0x20B328u: goto label_20b328;
            case 0x20B32Cu: goto label_20b32c;
            case 0x20B330u: goto label_20b330;
            case 0x20B334u: goto label_20b334;
            case 0x20B338u: goto label_20b338;
            case 0x20B33Cu: goto label_20b33c;
            case 0x20B340u: goto label_20b340;
            case 0x20B344u: goto label_20b344;
            case 0x20B348u: goto label_20b348;
            case 0x20B34Cu: goto label_20b34c;
            case 0x20B350u: goto label_20b350;
            case 0x20B354u: goto label_20b354;
            case 0x20B358u: goto label_20b358;
            case 0x20B35Cu: goto label_20b35c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B234u;
label_20b234:
    // 0x20b234: 0xc069fb8
label_20b238:
    if (ctx->pc == 0x20B238u) {
        ctx->pc = 0x20B23Cu;
        goto label_20b23c;
    }
    ctx->pc = 0x20B234u;
    SET_GPR_U32(ctx, 31, 0x20B23Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B23Cu; }
        else if (ctx->pc != 0x20B23Cu) { ctx->pc = 0x20B23Cu; }
    }
    if (ctx->pc != 0x20B23Cu) { return; }
    ctx->pc = 0x20B23Cu;
label_20b23c:
    // 0x20b23c: 0x4410004
label_20b240:
    if (ctx->pc == 0x20B240u) {
        ctx->pc = 0x20B240u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20B244u;
        goto label_20b244;
    }
    ctx->pc = 0x20B23Cu;
    {
        const bool branch_taken_0x20b23c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B240u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20b23c) {
            ctx->pc = 0x20B250u;
            goto label_20b250;
        }
    }
    ctx->pc = 0x20B244u;
label_20b244:
    // 0x20b244: 0x10800003
label_20b248:
    if (ctx->pc == 0x20B248u) {
        ctx->pc = 0x20B248u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        ctx->pc = 0x20B24Cu;
        goto label_20b24c;
    }
    ctx->pc = 0x20B244u;
    {
        const bool branch_taken_0x20b244 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B248u;
        SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
        if (branch_taken_0x20b244) {
            ctx->pc = 0x20B254u;
            goto label_20b254;
        }
    }
    ctx->pc = 0x20B24Cu;
label_20b24c:
    // 0x20b24c: 0x2484fffe
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20b250:
    // 0x20b250: 0x3c030015
    ctx->pc = 0x20b250u;
    SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
label_20b254:
    // 0x20b254: 0x3465000c
    ctx->pc = 0x20b254u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 12));
label_20b258:
    // 0x20b258: 0x3463000d
    ctx->pc = 0x20b258u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 13));
label_20b25c:
    // 0x20b25c: 0x10000030
label_20b260:
    if (ctx->pc == 0x20B260u) {
        ctx->pc = 0x20B260u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20B264u;
        goto label_20b264;
    }
    ctx->pc = 0x20B25Cu;
    {
        const bool branch_taken_0x20b25c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B260u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20b25c) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B264u;
label_20b264:
    // 0x20b264: 0xc069fb8
label_20b268:
    if (ctx->pc == 0x20B268u) {
        ctx->pc = 0x20B26Cu;
        goto label_20b26c;
    }
    ctx->pc = 0x20B264u;
    SET_GPR_U32(ctx, 31, 0x20B26Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B26Cu; }
        else if (ctx->pc != 0x20B26Cu) { ctx->pc = 0x20B26Cu; }
    }
    if (ctx->pc != 0x20B26Cu) { return; }
    ctx->pc = 0x20B26Cu;
label_20b26c:
    // 0x20b26c: 0x4410004
label_20b270:
    if (ctx->pc == 0x20B270u) {
        ctx->pc = 0x20B270u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20B274u;
        goto label_20b274;
    }
    ctx->pc = 0x20B26Cu;
    {
        const bool branch_taken_0x20b26c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B270u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20b26c) {
            ctx->pc = 0x20B280u;
            goto label_20b280;
        }
    }
    ctx->pc = 0x20B274u;
label_20b274:
    // 0x20b274: 0x10800003
label_20b278:
    if (ctx->pc == 0x20B278u) {
        ctx->pc = 0x20B278u;
        SET_GPR_U32(ctx, 3, ((uint32_t)13 << 16));
        ctx->pc = 0x20B27Cu;
        goto label_20b27c;
    }
    ctx->pc = 0x20B274u;
    {
        const bool branch_taken_0x20b274 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B278u;
        SET_GPR_U32(ctx, 3, ((uint32_t)13 << 16));
        if (branch_taken_0x20b274) {
            ctx->pc = 0x20B284u;
            goto label_20b284;
        }
    }
    ctx->pc = 0x20B27Cu;
label_20b27c:
    // 0x20b27c: 0x2484fffe
    ctx->pc = 0x20b27cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20b280:
    // 0x20b280: 0x3c03000d
    ctx->pc = 0x20b280u;
    SET_GPR_U32(ctx, 3, ((uint32_t)13 << 16));
label_20b284:
    // 0x20b284: 0x3465000d
    ctx->pc = 0x20b284u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 13));
label_20b288:
    // 0x20b288: 0x3463000e
    ctx->pc = 0x20b288u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 14));
label_20b28c:
    // 0x20b28c: 0x10000024
label_20b290:
    if (ctx->pc == 0x20B290u) {
        ctx->pc = 0x20B290u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20B294u;
        goto label_20b294;
    }
    ctx->pc = 0x20B28Cu;
    {
        const bool branch_taken_0x20b28c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B290u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20b28c) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B294u;
label_20b294:
    // 0x20b294: 0xc069fb8
label_20b298:
    if (ctx->pc == 0x20B298u) {
        ctx->pc = 0x20B29Cu;
        goto label_20b29c;
    }
    ctx->pc = 0x20B294u;
    SET_GPR_U32(ctx, 31, 0x20B29Cu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B29Cu; }
        else if (ctx->pc != 0x20B29Cu) { ctx->pc = 0x20B29Cu; }
    }
    if (ctx->pc != 0x20B29Cu) { return; }
    ctx->pc = 0x20B29Cu;
label_20b29c:
    // 0x20b29c: 0x4410004
label_20b2a0:
    if (ctx->pc == 0x20B2A0u) {
        ctx->pc = 0x20B2A0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20B2A4u;
        goto label_20b2a4;
    }
    ctx->pc = 0x20B29Cu;
    {
        const bool branch_taken_0x20b29c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B2A0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20b29c) {
            ctx->pc = 0x20B2B0u;
            goto label_20b2b0;
        }
    }
    ctx->pc = 0x20B2A4u;
label_20b2a4:
    // 0x20b2a4: 0x10800003
label_20b2a8:
    if (ctx->pc == 0x20B2A8u) {
        ctx->pc = 0x20B2A8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
        ctx->pc = 0x20B2ACu;
        goto label_20b2ac;
    }
    ctx->pc = 0x20B2A4u;
    {
        const bool branch_taken_0x20b2a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B2A8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
        if (branch_taken_0x20b2a4) {
            ctx->pc = 0x20B2B4u;
            goto label_20b2b4;
        }
    }
    ctx->pc = 0x20B2ACu;
label_20b2ac:
    // 0x20b2ac: 0x2484fffe
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20b2b0:
    // 0x20b2b0: 0x3c030019
    ctx->pc = 0x20b2b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
label_20b2b4:
    // 0x20b2b4: 0x3465000e
    ctx->pc = 0x20b2b4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 14));
label_20b2b8:
    // 0x20b2b8: 0x3463000f
    ctx->pc = 0x20b2b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 15));
label_20b2bc:
    // 0x20b2bc: 0x10000018
label_20b2c0:
    if (ctx->pc == 0x20B2C0u) {
        ctx->pc = 0x20B2C0u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20B2C4u;
        goto label_20b2c4;
    }
    ctx->pc = 0x20B2BCu;
    {
        const bool branch_taken_0x20b2bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B2C0u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20b2bc) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B2C4u;
label_20b2c4:
    // 0x20b2c4: 0xc069fb8
label_20b2c8:
    if (ctx->pc == 0x20B2C8u) {
        ctx->pc = 0x20B2CCu;
        goto label_20b2cc;
    }
    ctx->pc = 0x20B2C4u;
    SET_GPR_U32(ctx, 31, 0x20B2CCu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B2CCu; }
        else if (ctx->pc != 0x20B2CCu) { ctx->pc = 0x20B2CCu; }
    }
    if (ctx->pc != 0x20B2CCu) { return; }
    ctx->pc = 0x20B2CCu;
label_20b2cc:
    // 0x20b2cc: 0x4410004
label_20b2d0:
    if (ctx->pc == 0x20B2D0u) {
        ctx->pc = 0x20B2D0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20B2D4u;
        goto label_20b2d4;
    }
    ctx->pc = 0x20B2CCu;
    {
        const bool branch_taken_0x20b2cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B2D0u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20b2cc) {
            ctx->pc = 0x20B2E0u;
            goto label_20b2e0;
        }
    }
    ctx->pc = 0x20B2D4u;
label_20b2d4:
    // 0x20b2d4: 0x10800003
label_20b2d8:
    if (ctx->pc == 0x20B2D8u) {
        ctx->pc = 0x20B2D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
        ctx->pc = 0x20B2DCu;
        goto label_20b2dc;
    }
    ctx->pc = 0x20B2D4u;
    {
        const bool branch_taken_0x20b2d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B2D8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
        if (branch_taken_0x20b2d4) {
            ctx->pc = 0x20B2E4u;
            goto label_20b2e4;
        }
    }
    ctx->pc = 0x20B2DCu;
label_20b2dc:
    // 0x20b2dc: 0x2484fffe
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20b2e0:
    // 0x20b2e0: 0x3c030011
    ctx->pc = 0x20b2e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
label_20b2e4:
    // 0x20b2e4: 0x3465010e
    ctx->pc = 0x20b2e4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 270));
label_20b2e8:
    // 0x20b2e8: 0x3463010f
    ctx->pc = 0x20b2e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 271));
label_20b2ec:
    // 0x20b2ec: 0x1000000c
label_20b2f0:
    if (ctx->pc == 0x20B2F0u) {
        ctx->pc = 0x20B2F0u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        ctx->pc = 0x20B2F4u;
        goto label_20b2f4;
    }
    ctx->pc = 0x20B2ECu;
    {
        const bool branch_taken_0x20b2ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B2F0u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
        if (branch_taken_0x20b2ec) {
            ctx->pc = 0x20B320u;
            goto label_20b320;
        }
    }
    ctx->pc = 0x20B2F4u;
label_20b2f4:
    // 0x20b2f4: 0xc069fb8
label_20b2f8:
    if (ctx->pc == 0x20B2F8u) {
        ctx->pc = 0x20B2FCu;
        goto label_20b2fc;
    }
    ctx->pc = 0x20B2F4u;
    SET_GPR_U32(ctx, 31, 0x20B2FCu);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B2FCu; }
        else if (ctx->pc != 0x20B2FCu) { ctx->pc = 0x20B2FCu; }
    }
    if (ctx->pc != 0x20B2FCu) { return; }
    ctx->pc = 0x20B2FCu;
label_20b2fc:
    // 0x20b2fc: 0x4410004
label_20b300:
    if (ctx->pc == 0x20B300u) {
        ctx->pc = 0x20B300u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20B304u;
        goto label_20b304;
    }
    ctx->pc = 0x20B2FCu;
    {
        const bool branch_taken_0x20b2fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B300u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20b2fc) {
            ctx->pc = 0x20B310u;
            goto label_20b310;
        }
    }
    ctx->pc = 0x20B304u;
label_20b304:
    // 0x20b304: 0x10800003
label_20b308:
    if (ctx->pc == 0x20B308u) {
        ctx->pc = 0x20B308u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        ctx->pc = 0x20B30Cu;
        goto label_20b30c;
    }
    ctx->pc = 0x20B304u;
    {
        const bool branch_taken_0x20b304 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B308u;
        SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
        if (branch_taken_0x20b304) {
            ctx->pc = 0x20B314u;
            goto label_20b314;
        }
    }
    ctx->pc = 0x20B30Cu;
label_20b30c:
    // 0x20b30c: 0x2484fffe
    ctx->pc = 0x20b30cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967294));
label_20b310:
    // 0x20b310: 0x3c03000a
    ctx->pc = 0x20b310u;
    SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
label_20b314:
    // 0x20b314: 0x34650013
    ctx->pc = 0x20b314u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 19));
label_20b318:
    // 0x20b318: 0x34630014
    ctx->pc = 0x20b318u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 20));
label_20b31c:
    // 0x20b31c: 0x64280a
    ctx->pc = 0x20b31cu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_20b320:
    // 0x20b320: 0x10a00008
label_20b324:
    if (ctx->pc == 0x20B324u) {
        ctx->pc = 0x20B328u;
        goto label_20b328;
    }
    ctx->pc = 0x20B320u;
    {
        const bool branch_taken_0x20b320 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b320) {
            ctx->pc = 0x20B344u;
            goto label_20b344;
        }
    }
    ctx->pc = 0x20B328u;
label_20b328:
    // 0x20b328: 0x82430024
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_20b32c:
    // 0x20b32c: 0x3c020051
    ctx->pc = 0x20b32cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20b330:
    // 0x20b330: 0x244434f0
    ctx->pc = 0x20b330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20b334:
    // 0x20b334: 0x70003e28
    ctx->pc = 0x20b334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20b338:
    // 0x20b338: 0x24080040
    ctx->pc = 0x20b338u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_20b33c:
    // 0x20b33c: 0xc086018
label_20b340:
    if (ctx->pc == 0x20B340u) {
        ctx->pc = 0x20B340u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x20B344u;
        goto label_20b344;
    }
    ctx->pc = 0x20B33Cu;
    SET_GPR_U32(ctx, 31, 0x20B344u);
    ctx->pc = 0x20B340u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B344u; }
        else if (ctx->pc != 0x20B344u) { ctx->pc = 0x20B344u; }
    }
    if (ctx->pc != 0x20B344u) { return; }
    ctx->pc = 0x20B344u;
label_20b344:
    // 0x20b344: 0x7bbf0040
    ctx->pc = 0x20b344u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20b348:
    // 0x20b348: 0x7bb20030
    ctx->pc = 0x20b348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20b34c:
    // 0x20b34c: 0x7bb10020
    ctx->pc = 0x20b34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b350:
    // 0x20b350: 0x7bb00010
    ctx->pc = 0x20b350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b354:
    // 0x20b354: 0xc7b40000
    ctx->pc = 0x20b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20b358:
    // 0x20b358: 0x3e00008
label_20b35c:
    if (ctx->pc == 0x20B35Cu) {
        ctx->pc = 0x20B35Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x20B360u;
        goto label_fallthrough_0x20b358;
    }
    ctx->pc = 0x20B358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B35Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AD50u: goto label_20ad50;
            case 0x20AD54u: goto label_20ad54;
            case 0x20AD58u: goto label_20ad58;
            case 0x20AD5Cu: goto label_20ad5c;
            case 0x20AD60u: goto label_20ad60;
            case 0x20AD64u: goto label_20ad64;
            case 0x20AD68u: goto label_20ad68;
            case 0x20AD6Cu: goto label_20ad6c;
            case 0x20AD70u: goto label_20ad70;
            case 0x20AD74u: goto label_20ad74;
            case 0x20AD78u: goto label_20ad78;
            case 0x20AD7Cu: goto label_20ad7c;
            case 0x20AD80u: goto label_20ad80;
            case 0x20AD84u: goto label_20ad84;
            case 0x20AD88u: goto label_20ad88;
            case 0x20AD8Cu: goto label_20ad8c;
            case 0x20AD90u: goto label_20ad90;
            case 0x20AD94u: goto label_20ad94;
            case 0x20AD98u: goto label_20ad98;
            case 0x20AD9Cu: goto label_20ad9c;
            case 0x20ADA0u: goto label_20ada0;
            case 0x20ADA4u: goto label_20ada4;
            case 0x20ADA8u: goto label_20ada8;
            case 0x20ADACu: goto label_20adac;
            case 0x20ADB0u: goto label_20adb0;
            case 0x20ADB4u: goto label_20adb4;
            case 0x20ADB8u: goto label_20adb8;
            case 0x20ADBCu: goto label_20adbc;
            case 0x20ADC0u: goto label_20adc0;
            case 0x20ADC4u: goto label_20adc4;
            case 0x20ADC8u: goto label_20adc8;
            case 0x20ADCCu: goto label_20adcc;
            case 0x20ADD0u: goto label_20add0;
            case 0x20ADD4u: goto label_20add4;
            case 0x20ADD8u: goto label_20add8;
            case 0x20ADDCu: goto label_20addc;
            case 0x20ADE0u: goto label_20ade0;
            case 0x20ADE4u: goto label_20ade4;
            case 0x20ADE8u: goto label_20ade8;
            case 0x20ADECu: goto label_20adec;
            case 0x20ADF0u: goto label_20adf0;
            case 0x20ADF4u: goto label_20adf4;
            case 0x20ADF8u: goto label_20adf8;
            case 0x20ADFCu: goto label_20adfc;
            case 0x20AE00u: goto label_20ae00;
            case 0x20AE04u: goto label_20ae04;
            case 0x20AE08u: goto label_20ae08;
            case 0x20AE0Cu: goto label_20ae0c;
            case 0x20AE10u: goto label_20ae10;
            case 0x20AE14u: goto label_20ae14;
            case 0x20AE18u: goto label_20ae18;
            case 0x20AE1Cu: goto label_20ae1c;
            case 0x20AE20u: goto label_20ae20;
            case 0x20AE24u: goto label_20ae24;
            case 0x20AE28u: goto label_20ae28;
            case 0x20AE2Cu: goto label_20ae2c;
            case 0x20AE30u: goto label_20ae30;
            case 0x20AE34u: goto label_20ae34;
            case 0x20AE38u: goto label_20ae38;
            case 0x20AE3Cu: goto label_20ae3c;
            case 0x20AE40u: goto label_20ae40;
            case 0x20AE44u: goto label_20ae44;
            case 0x20AE48u: goto label_20ae48;
            case 0x20AE4Cu: goto label_20ae4c;
            case 0x20AE50u: goto label_20ae50;
            case 0x20AE54u: goto label_20ae54;
            case 0x20AE58u: goto label_20ae58;
            case 0x20AE5Cu: goto label_20ae5c;
            case 0x20AE60u: goto label_20ae60;
            case 0x20AE64u: goto label_20ae64;
            case 0x20AE68u: goto label_20ae68;
            case 0x20AE6Cu: goto label_20ae6c;
            case 0x20AE70u: goto label_20ae70;
            case 0x20AE74u: goto label_20ae74;
            case 0x20AE78u: goto label_20ae78;
            case 0x20AE7Cu: goto label_20ae7c;
            case 0x20AE80u: goto label_20ae80;
            case 0x20AE84u: goto label_20ae84;
            case 0x20AE88u: goto label_20ae88;
            case 0x20AE8Cu: goto label_20ae8c;
            case 0x20AE90u: goto label_20ae90;
            case 0x20AE94u: goto label_20ae94;
            case 0x20AE98u: goto label_20ae98;
            case 0x20AE9Cu: goto label_20ae9c;
            case 0x20AEA0u: goto label_20aea0;
            case 0x20AEA4u: goto label_20aea4;
            case 0x20AEA8u: goto label_20aea8;
            case 0x20AEACu: goto label_20aeac;
            case 0x20AEB0u: goto label_20aeb0;
            case 0x20AEB4u: goto label_20aeb4;
            case 0x20AEB8u: goto label_20aeb8;
            case 0x20AEBCu: goto label_20aebc;
            case 0x20AEC0u: goto label_20aec0;
            case 0x20AEC4u: goto label_20aec4;
            case 0x20AEC8u: goto label_20aec8;
            case 0x20AECCu: goto label_20aecc;
            case 0x20AED0u: goto label_20aed0;
            case 0x20AED4u: goto label_20aed4;
            case 0x20AED8u: goto label_20aed8;
            case 0x20AEDCu: goto label_20aedc;
            case 0x20AEE0u: goto label_20aee0;
            case 0x20AEE4u: goto label_20aee4;
            case 0x20AEE8u: goto label_20aee8;
            case 0x20AEECu: goto label_20aeec;
            case 0x20AEF0u: goto label_20aef0;
            case 0x20AEF4u: goto label_20aef4;
            case 0x20AEF8u: goto label_20aef8;
            case 0x20AEFCu: goto label_20aefc;
            case 0x20AF00u: goto label_20af00;
            case 0x20AF04u: goto label_20af04;
            case 0x20AF08u: goto label_20af08;
            case 0x20AF0Cu: goto label_20af0c;
            case 0x20AF10u: goto label_20af10;
            case 0x20AF14u: goto label_20af14;
            case 0x20AF18u: goto label_20af18;
            case 0x20AF1Cu: goto label_20af1c;
            case 0x20AF20u: goto label_20af20;
            case 0x20AF24u: goto label_20af24;
            case 0x20AF28u: goto label_20af28;
            case 0x20AF2Cu: goto label_20af2c;
            case 0x20AF30u: goto label_20af30;
            case 0x20AF34u: goto label_20af34;
            case 0x20AF38u: goto label_20af38;
            case 0x20AF3Cu: goto label_20af3c;
            case 0x20AF40u: goto label_20af40;
            case 0x20AF44u: goto label_20af44;
            case 0x20AF48u: goto label_20af48;
            case 0x20AF4Cu: goto label_20af4c;
            case 0x20AF50u: goto label_20af50;
            case 0x20AF54u: goto label_20af54;
            case 0x20AF58u: goto label_20af58;
            case 0x20AF5Cu: goto label_20af5c;
            case 0x20AF60u: goto label_20af60;
            case 0x20AF64u: goto label_20af64;
            case 0x20AF68u: goto label_20af68;
            case 0x20AF6Cu: goto label_20af6c;
            case 0x20AF70u: goto label_20af70;
            case 0x20AF74u: goto label_20af74;
            case 0x20AF78u: goto label_20af78;
            case 0x20AF7Cu: goto label_20af7c;
            case 0x20AF80u: goto label_20af80;
            case 0x20AF84u: goto label_20af84;
            case 0x20AF88u: goto label_20af88;
            case 0x20AF8Cu: goto label_20af8c;
            case 0x20AF90u: goto label_20af90;
            case 0x20AF94u: goto label_20af94;
            case 0x20AF98u: goto label_20af98;
            case 0x20AF9Cu: goto label_20af9c;
            case 0x20AFA0u: goto label_20afa0;
            case 0x20AFA4u: goto label_20afa4;
            case 0x20AFA8u: goto label_20afa8;
            case 0x20AFACu: goto label_20afac;
            case 0x20AFB0u: goto label_20afb0;
            case 0x20AFB4u: goto label_20afb4;
            case 0x20AFB8u: goto label_20afb8;
            case 0x20AFBCu: goto label_20afbc;
            case 0x20AFC0u: goto label_20afc0;
            case 0x20AFC4u: goto label_20afc4;
            case 0x20AFC8u: goto label_20afc8;
            case 0x20AFCCu: goto label_20afcc;
            case 0x20AFD0u: goto label_20afd0;
            case 0x20AFD4u: goto label_20afd4;
            case 0x20AFD8u: goto label_20afd8;
            case 0x20AFDCu: goto label_20afdc;
            case 0x20AFE0u: goto label_20afe0;
            case 0x20AFE4u: goto label_20afe4;
            case 0x20AFE8u: goto label_20afe8;
            case 0x20AFECu: goto label_20afec;
            case 0x20AFF0u: goto label_20aff0;
            case 0x20AFF4u: goto label_20aff4;
            case 0x20AFF8u: goto label_20aff8;
            case 0x20AFFCu: goto label_20affc;
            case 0x20B000u: goto label_20b000;
            case 0x20B004u: goto label_20b004;
            case 0x20B008u: goto label_20b008;
            case 0x20B00Cu: goto label_20b00c;
            case 0x20B010u: goto label_20b010;
            case 0x20B014u: goto label_20b014;
            case 0x20B018u: goto label_20b018;
            case 0x20B01Cu: goto label_20b01c;
            case 0x20B020u: goto label_20b020;
            case 0x20B024u: goto label_20b024;
            case 0x20B028u: goto label_20b028;
            case 0x20B02Cu: goto label_20b02c;
            case 0x20B030u: goto label_20b030;
            case 0x20B034u: goto label_20b034;
            case 0x20B038u: goto label_20b038;
            case 0x20B03Cu: goto label_20b03c;
            case 0x20B040u: goto label_20b040;
            case 0x20B044u: goto label_20b044;
            case 0x20B048u: goto label_20b048;
            case 0x20B04Cu: goto label_20b04c;
            case 0x20B050u: goto label_20b050;
            case 0x20B054u: goto label_20b054;
            case 0x20B058u: goto label_20b058;
            case 0x20B05Cu: goto label_20b05c;
            case 0x20B060u: goto label_20b060;
            case 0x20B064u: goto label_20b064;
            case 0x20B068u: goto label_20b068;
            case 0x20B06Cu: goto label_20b06c;
            case 0x20B070u: goto label_20b070;
            case 0x20B074u: goto label_20b074;
            case 0x20B078u: goto label_20b078;
            case 0x20B07Cu: goto label_20b07c;
            case 0x20B080u: goto label_20b080;
            case 0x20B084u: goto label_20b084;
            case 0x20B088u: goto label_20b088;
            case 0x20B08Cu: goto label_20b08c;
            case 0x20B090u: goto label_20b090;
            case 0x20B094u: goto label_20b094;
            case 0x20B098u: goto label_20b098;
            case 0x20B09Cu: goto label_20b09c;
            case 0x20B0A0u: goto label_20b0a0;
            case 0x20B0A4u: goto label_20b0a4;
            case 0x20B0A8u: goto label_20b0a8;
            case 0x20B0ACu: goto label_20b0ac;
            case 0x20B0B0u: goto label_20b0b0;
            case 0x20B0B4u: goto label_20b0b4;
            case 0x20B0B8u: goto label_20b0b8;
            case 0x20B0BCu: goto label_20b0bc;
            case 0x20B0C0u: goto label_20b0c0;
            case 0x20B0C4u: goto label_20b0c4;
            case 0x20B0C8u: goto label_20b0c8;
            case 0x20B0CCu: goto label_20b0cc;
            case 0x20B0D0u: goto label_20b0d0;
            case 0x20B0D4u: goto label_20b0d4;
            case 0x20B0D8u: goto label_20b0d8;
            case 0x20B0DCu: goto label_20b0dc;
            case 0x20B0E0u: goto label_20b0e0;
            case 0x20B0E4u: goto label_20b0e4;
            case 0x20B0E8u: goto label_20b0e8;
            case 0x20B0ECu: goto label_20b0ec;
            case 0x20B0F0u: goto label_20b0f0;
            case 0x20B0F4u: goto label_20b0f4;
            case 0x20B0F8u: goto label_20b0f8;
            case 0x20B0FCu: goto label_20b0fc;
            case 0x20B100u: goto label_20b100;
            case 0x20B104u: goto label_20b104;
            case 0x20B108u: goto label_20b108;
            case 0x20B10Cu: goto label_20b10c;
            case 0x20B110u: goto label_20b110;
            case 0x20B114u: goto label_20b114;
            case 0x20B118u: goto label_20b118;
            case 0x20B11Cu: goto label_20b11c;
            case 0x20B120u: goto label_20b120;
            case 0x20B124u: goto label_20b124;
            case 0x20B128u: goto label_20b128;
            case 0x20B12Cu: goto label_20b12c;
            case 0x20B130u: goto label_20b130;
            case 0x20B134u: goto label_20b134;
            case 0x20B138u: goto label_20b138;
            case 0x20B13Cu: goto label_20b13c;
            case 0x20B140u: goto label_20b140;
            case 0x20B144u: goto label_20b144;
            case 0x20B148u: goto label_20b148;
            case 0x20B14Cu: goto label_20b14c;
            case 0x20B150u: goto label_20b150;
            case 0x20B154u: goto label_20b154;
            case 0x20B158u: goto label_20b158;
            case 0x20B15Cu: goto label_20b15c;
            case 0x20B160u: goto label_20b160;
            case 0x20B164u: goto label_20b164;
            case 0x20B168u: goto label_20b168;
            case 0x20B16Cu: goto label_20b16c;
            case 0x20B170u: goto label_20b170;
            case 0x20B174u: goto label_20b174;
            case 0x20B178u: goto label_20b178;
            case 0x20B17Cu: goto label_20b17c;
            case 0x20B180u: goto label_20b180;
            case 0x20B184u: goto label_20b184;
            case 0x20B188u: goto label_20b188;
            case 0x20B18Cu: goto label_20b18c;
            case 0x20B190u: goto label_20b190;
            case 0x20B194u: goto label_20b194;
            case 0x20B198u: goto label_20b198;
            case 0x20B19Cu: goto label_20b19c;
            case 0x20B1A0u: goto label_20b1a0;
            case 0x20B1A4u: goto label_20b1a4;
            case 0x20B1A8u: goto label_20b1a8;
            case 0x20B1ACu: goto label_20b1ac;
            case 0x20B1B0u: goto label_20b1b0;
            case 0x20B1B4u: goto label_20b1b4;
            case 0x20B1B8u: goto label_20b1b8;
            case 0x20B1BCu: goto label_20b1bc;
            case 0x20B1C0u: goto label_20b1c0;
            case 0x20B1C4u: goto label_20b1c4;
            case 0x20B1C8u: goto label_20b1c8;
            case 0x20B1CCu: goto label_20b1cc;
            case 0x20B1D0u: goto label_20b1d0;
            case 0x20B1D4u: goto label_20b1d4;
            case 0x20B1D8u: goto label_20b1d8;
            case 0x20B1DCu: goto label_20b1dc;
            case 0x20B1E0u: goto label_20b1e0;
            case 0x20B1E4u: goto label_20b1e4;
            case 0x20B1E8u: goto label_20b1e8;
            case 0x20B1ECu: goto label_20b1ec;
            case 0x20B1F0u: goto label_20b1f0;
            case 0x20B1F4u: goto label_20b1f4;
            case 0x20B1F8u: goto label_20b1f8;
            case 0x20B1FCu: goto label_20b1fc;
            case 0x20B200u: goto label_20b200;
            case 0x20B204u: goto label_20b204;
            case 0x20B208u: goto label_20b208;
            case 0x20B20Cu: goto label_20b20c;
            case 0x20B210u: goto label_20b210;
            case 0x20B214u: goto label_20b214;
            case 0x20B218u: goto label_20b218;
            case 0x20B21Cu: goto label_20b21c;
            case 0x20B220u: goto label_20b220;
            case 0x20B224u: goto label_20b224;
            case 0x20B228u: goto label_20b228;
            case 0x20B22Cu: goto label_20b22c;
            case 0x20B230u: goto label_20b230;
            case 0x20B234u: goto label_20b234;
            case 0x20B238u: goto label_20b238;
            case 0x20B23Cu: goto label_20b23c;
            case 0x20B240u: goto label_20b240;
            case 0x20B244u: goto label_20b244;
            case 0x20B248u: goto label_20b248;
            case 0x20B24Cu: goto label_20b24c;
            case 0x20B250u: goto label_20b250;
            case 0x20B254u: goto label_20b254;
            case 0x20B258u: goto label_20b258;
            case 0x20B25Cu: goto label_20b25c;
            case 0x20B260u: goto label_20b260;
            case 0x20B264u: goto label_20b264;
            case 0x20B268u: goto label_20b268;
            case 0x20B26Cu: goto label_20b26c;
            case 0x20B270u: goto label_20b270;
            case 0x20B274u: goto label_20b274;
            case 0x20B278u: goto label_20b278;
            case 0x20B27Cu: goto label_20b27c;
            case 0x20B280u: goto label_20b280;
            case 0x20B284u: goto label_20b284;
            case 0x20B288u: goto label_20b288;
            case 0x20B28Cu: goto label_20b28c;
            case 0x20B290u: goto label_20b290;
            case 0x20B294u: goto label_20b294;
            case 0x20B298u: goto label_20b298;
            case 0x20B29Cu: goto label_20b29c;
            case 0x20B2A0u: goto label_20b2a0;
            case 0x20B2A4u: goto label_20b2a4;
            case 0x20B2A8u: goto label_20b2a8;
            case 0x20B2ACu: goto label_20b2ac;
            case 0x20B2B0u: goto label_20b2b0;
            case 0x20B2B4u: goto label_20b2b4;
            case 0x20B2B8u: goto label_20b2b8;
            case 0x20B2BCu: goto label_20b2bc;
            case 0x20B2C0u: goto label_20b2c0;
            case 0x20B2C4u: goto label_20b2c4;
            case 0x20B2C8u: goto label_20b2c8;
            case 0x20B2CCu: goto label_20b2cc;
            case 0x20B2D0u: goto label_20b2d0;
            case 0x20B2D4u: goto label_20b2d4;
            case 0x20B2D8u: goto label_20b2d8;
            case 0x20B2DCu: goto label_20b2dc;
            case 0x20B2E0u: goto label_20b2e0;
            case 0x20B2E4u: goto label_20b2e4;
            case 0x20B2E8u: goto label_20b2e8;
            case 0x20B2ECu: goto label_20b2ec;
            case 0x20B2F0u: goto label_20b2f0;
            case 0x20B2F4u: goto label_20b2f4;
            case 0x20B2F8u: goto label_20b2f8;
            case 0x20B2FCu: goto label_20b2fc;
            case 0x20B300u: goto label_20b300;
            case 0x20B304u: goto label_20b304;
            case 0x20B308u: goto label_20b308;
            case 0x20B30Cu: goto label_20b30c;
            case 0x20B310u: goto label_20b310;
            case 0x20B314u: goto label_20b314;
            case 0x20B318u: goto label_20b318;
            case 0x20B31Cu: goto label_20b31c;
            case 0x20B320u: goto label_20b320;
            case 0x20B324u: goto label_20b324;
            case 0x20B328u: goto label_20b328;
            case 0x20B32Cu: goto label_20b32c;
            case 0x20B330u: goto label_20b330;
            case 0x20B334u: goto label_20b334;
            case 0x20B338u: goto label_20b338;
            case 0x20B33Cu: goto label_20b33c;
            case 0x20B340u: goto label_20b340;
            case 0x20B344u: goto label_20b344;
            case 0x20B348u: goto label_20b348;
            case 0x20B34Cu: goto label_20b34c;
            case 0x20B350u: goto label_20b350;
            case 0x20B354u: goto label_20b354;
            case 0x20B358u: goto label_20b358;
            case 0x20B35Cu: goto label_20b35c;
            default: break;
        }
        return;
    }
label_fallthrough_0x20b358:
    ctx->pc = 0x20B360u;
}
