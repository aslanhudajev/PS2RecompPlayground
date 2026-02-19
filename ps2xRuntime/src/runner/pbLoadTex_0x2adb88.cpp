#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_fake_gs.h"

// Function: pbLoadTex
// Address: 0x2adb88 - 0x2ae1b8
void pbLoadTex_0x2adb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2adb88u;

    // Fake GS: always stub so we return to caller with v0=1 and pc=ra (never run body).
    if (runtime)
        fakeGSStubLoadTex(rdram, ctx, runtime);
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = GPR_U32(ctx, 31);
    return;

label_2adb88:
    // 0x2adb88: 0x27bdff20
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
label_2adb8c:
    // 0x2adb8c: 0xffbf00d0
    ctx->pc = 0x2adb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2adb90:
    // 0x2adb90: 0xffbe00c0
    ctx->pc = 0x2adb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_2adb94:
    // 0x2adb94: 0xffb700b0
    ctx->pc = 0x2adb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_2adb98:
    // 0x2adb98: 0xffb600a0
    ctx->pc = 0x2adb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_2adb9c:
    // 0x2adb9c: 0xffb50090
    ctx->pc = 0x2adb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_2adba0:
    // 0x2adba0: 0xffb40080
    ctx->pc = 0x2adba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2adba4:
    // 0x2adba4: 0xffb30070
    ctx->pc = 0x2adba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_2adba8:
    // 0x2adba8: 0xffb20060
    ctx->pc = 0x2adba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2adbac:
    // 0x2adbac: 0xffb10050
    ctx->pc = 0x2adbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2adbb0:
    // 0x2adbb0: 0xffb00040
    ctx->pc = 0x2adbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2adbb4:
    // 0x2adbb4: 0x3c020036
    ctx->pc = 0x2adbb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2adbb8:
    // 0x2adbb8: 0x8c52dee0
    ctx->pc = 0x2adbb8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2adbbc:
    // 0x2adbbc: 0x8e42002c
    ctx->pc = 0x2adbbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2adbc0:
    // 0x2adbc0: 0x8c420074
    ctx->pc = 0x2adbc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_2adbc4:
    // 0x2adbc4: 0x14400170
label_2adbc8:
    if (ctx->pc == 0x2ADBC8u) {
        ctx->pc = 0x2ADBC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2ADBCCu;
        goto label_2adbcc;
    }
    ctx->pc = 0x2ADBC4u;
    {
        const bool branch_taken_0x2adbc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADBC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2adbc4) {
            ctx->pc = 0x2AE188u;
            goto label_2ae188;
        }
    }
    ctx->pc = 0x2ADBCCu;
label_2adbcc:
    // 0x2adbcc: 0x48402
    ctx->pc = 0x2adbccu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 4), 16));
label_2adbd0:
    // 0x2adbd0: 0xc0b3da0
label_2adbd4:
    if (ctx->pc == 0x2ADBD4u) {
        ctx->pc = 0x2ADBD4u;
        SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), 65535));
        ctx->pc = 0x2ADBD8u;
        goto label_2adbd8;
    }
    ctx->pc = 0x2ADBD0u;
    SET_GPR_U32(ctx, 31, 0x2ADBD8u);
    ctx->pc = 0x2ADBD4u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 4), 65535));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBD8u; }
    }
    if (ctx->pc != 0x2ADBD8u) { return; }
    ctx->pc = 0x2ADBD8u;
label_2adbd8:
    // 0x2adbd8: 0x40882d
    ctx->pc = 0x2adbd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adbdc:
    // 0x2adbdc: 0x8e420038
    ctx->pc = 0x2adbdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2adbe0:
    // 0x2adbe0: 0x101900
    ctx->pc = 0x2adbe0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
label_2adbe4:
    // 0x2adbe4: 0x431021
    ctx->pc = 0x2adbe4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2adbe8:
    // 0x2adbe8: 0x8c420010
    ctx->pc = 0x2adbe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2adbec:
    // 0x2adbec: 0x54400006
label_2adbf0:
    if (ctx->pc == 0x2ADBF0u) {
        ctx->pc = 0x2ADBF0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBF4u;
        goto label_2adbf4;
    }
    ctx->pc = 0x2ADBECu;
    {
        const bool branch_taken_0x2adbec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2adbec) {
            ctx->pc = 0x2ADBF0u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2ADC08u;
            goto label_2adc08;
        }
    }
    ctx->pc = 0x2ADBF4u;
label_2adbf4:
    // 0x2adbf4: 0x96220008
    ctx->pc = 0x2adbf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2adbf8:
    // 0x2adbf8: 0x30420100
    ctx->pc = 0x2adbf8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_2adbfc:
    // 0x2adbfc: 0x10400007
label_2adc00:
    if (ctx->pc == 0x2ADC00u) {
        ctx->pc = 0x2ADC00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2ADC04u;
        goto label_2adc04;
    }
    ctx->pc = 0x2ADBFCu;
    {
        const bool branch_taken_0x2adbfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADC00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2adbfc) {
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADC04u;
label_2adc04:
    // 0x2adc04: 0x802d
    ctx->pc = 0x2adc04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adc08:
    // 0x2adc08: 0x982d
    ctx->pc = 0x2adc08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adc0c:
    // 0x2adc0c: 0xc0b3da0
label_2adc10:
    if (ctx->pc == 0x2ADC10u) {
        ctx->pc = 0x2ADC10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC14u;
        goto label_2adc14;
    }
    ctx->pc = 0x2ADC0Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC14u);
    ctx->pc = 0x2ADC10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC14u; }
    }
    if (ctx->pc != 0x2ADC14u) { return; }
    ctx->pc = 0x2ADC14u;
label_2adc14:
    // 0x2adc14: 0x40882d
    ctx->pc = 0x2adc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adc18:
    // 0x2adc18: 0x3c020037
    ctx->pc = 0x2adc18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adc1c:
    // 0x2adc1c: 0x8c4685e0
    ctx->pc = 0x2adc1cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294936032)));
label_2adc20:
    // 0x2adc20: 0x8e420038
    ctx->pc = 0x2adc20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2adc24:
    // 0x2adc24: 0x101900
    ctx->pc = 0x2adc24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
label_2adc28:
    // 0x2adc28: 0x431021
    ctx->pc = 0x2adc28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2adc2c:
    // 0x2adc2c: 0x8c420004
    ctx->pc = 0x2adc2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2adc30:
    // 0x2adc30: 0x8c420078
    ctx->pc = 0x2adc30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_2adc34:
    // 0x2adc34: 0x531021
    ctx->pc = 0x2adc34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2adc38:
    // 0x2adc38: 0x90420000
    ctx->pc = 0x2adc38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2adc3c:
    // 0x2adc3c: 0xc21007
    ctx->pc = 0x2adc3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
label_2adc40:
    // 0x2adc40: 0x30420001
    ctx->pc = 0x2adc40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2adc44:
    // 0x2adc44: 0x14400150
label_2adc48:
    if (ctx->pc == 0x2ADC48u) {
        ctx->pc = 0x2ADC48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2ADC4Cu;
        goto label_2adc4c;
    }
    ctx->pc = 0x2ADC44u;
    {
        const bool branch_taken_0x2adc44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADC48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2adc44) {
            ctx->pc = 0x2AE188u;
            goto label_2ae188;
        }
    }
    ctx->pc = 0x2ADC4Cu;
label_2adc4c:
    // 0x2adc4c: 0x3c020037
    ctx->pc = 0x2adc4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adc50:
    // 0x2adc50: 0x8c4285fc
    ctx->pc = 0x2adc50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936060)));
label_2adc54:
    // 0x2adc54: 0x10400010
label_2adc58:
    if (ctx->pc == 0x2ADC58u) {
        ctx->pc = 0x2ADC58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2ADC5Cu;
        goto label_2adc5c;
    }
    ctx->pc = 0x2ADC54u;
    {
        const bool branch_taken_0x2adc54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADC58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2adc54) {
            ctx->pc = 0x2ADC98u;
            goto label_2adc98;
        }
    }
    ctx->pc = 0x2ADC5Cu;
label_2adc5c:
    // 0x2adc5c: 0x8c428a80
    ctx->pc = 0x2adc5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937216)));
label_2adc60:
    // 0x2adc60: 0xafa20030
    ctx->pc = 0x2adc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2adc64:
    // 0x2adc64: 0xafa2002c
    ctx->pc = 0x2adc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2adc68:
    // 0x2adc68: 0x9625001a
    ctx->pc = 0x2adc68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_2adc6c:
    // 0x2adc6c: 0x451821
    ctx->pc = 0x2adc6cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2adc70:
    // 0x2adc70: 0x3c020037
    ctx->pc = 0x2adc70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adc74:
    // 0x2adc74: 0x8c428a88
    ctx->pc = 0x2adc74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937224)));
label_2adc78:
    // 0x2adc78: 0x43102a
    ctx->pc = 0x2adc78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2adc7c:
    // 0x2adc7c: 0x14400142
label_2adc80:
    if (ctx->pc == 0x2ADC80u) {
        ctx->pc = 0x2ADC80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC84u;
        goto label_2adc84;
    }
    ctx->pc = 0x2ADC7Cu;
    {
        const bool branch_taken_0x2adc7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADC80u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2adc7c) {
            ctx->pc = 0x2AE188u;
            goto label_2ae188;
        }
    }
    ctx->pc = 0x2ADC84u;
label_2adc84:
    // 0x2adc84: 0x3c030037
    ctx->pc = 0x2adc84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2adc88:
    // 0x2adc88: 0x8c628a80
    ctx->pc = 0x2adc88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937216)));
label_2adc8c:
    // 0x2adc8c: 0xa21021
    ctx->pc = 0x2adc8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2adc90:
    // 0x2adc90: 0x10000039
label_2adc94:
    if (ctx->pc == 0x2ADC94u) {
        ctx->pc = 0x2ADC94u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937216), GPR_U32(ctx, 2));
        ctx->pc = 0x2ADC98u;
        goto label_2adc98;
    }
    ctx->pc = 0x2ADC90u;
    {
        const bool branch_taken_0x2adc90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADC94u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937216), GPR_U32(ctx, 2));
        if (branch_taken_0x2adc90) {
            ctx->pc = 0x2ADD78u;
            goto label_2add78;
        }
    }
    ctx->pc = 0x2ADC98u;
label_2adc98:
    // 0x2adc98: 0x3c020037
    ctx->pc = 0x2adc98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adc9c:
    // 0x2adc9c: 0x24428a98
    ctx->pc = 0x2adc9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937240));
label_2adca0:
    // 0x2adca0: 0x61880
    ctx->pc = 0x2adca0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_2adca4:
    // 0x2adca4: 0x621821
    ctx->pc = 0x2adca4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2adca8:
    // 0x2adca8: 0x8c630000
    ctx->pc = 0x2adca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2adcac:
    // 0x2adcac: 0xafa30030
    ctx->pc = 0x2adcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_2adcb0:
    // 0x2adcb0: 0xafa3002c
    ctx->pc = 0x2adcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_2adcb4:
    // 0x2adcb4: 0x92220000
    ctx->pc = 0x2adcb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2adcb8:
    // 0x2adcb8: 0x30420008
    ctx->pc = 0x2adcb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_2adcbc:
    // 0x2adcbc: 0x10400011
label_2adcc0:
    if (ctx->pc == 0x2ADCC0u) {
        ctx->pc = 0x2ADCC0u;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->pc = 0x2ADCC4u;
        goto label_2adcc4;
    }
    ctx->pc = 0x2ADCBCu;
    {
        const bool branch_taken_0x2adcbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADCC0u;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        if (branch_taken_0x2adcbc) {
            ctx->pc = 0x2ADD04u;
            goto label_2add04;
        }
    }
    ctx->pc = 0x2ADCC4u;
label_2adcc4:
    // 0x2adcc4: 0x96230016
    ctx->pc = 0x2adcc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_2adcc8:
    // 0x2adcc8: 0x2463003f
    ctx->pc = 0x2adcc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
label_2adccc:
    // 0x2adccc: 0x2402ffc0
    ctx->pc = 0x2adcccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
label_2adcd0:
    // 0x2adcd0: 0x621824
    ctx->pc = 0x2adcd0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2adcd4:
    // 0x2adcd4: 0x96220018
    ctx->pc = 0x2adcd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2adcd8:
    // 0x2adcd8: 0x2442001f
    ctx->pc = 0x2adcd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
label_2adcdc:
    // 0x2adcdc: 0x2404ffe0
    ctx->pc = 0x2adcdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967264));
label_2adce0:
    // 0x2adce0: 0x441024
    ctx->pc = 0x2adce0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2adce4:
    // 0x2adce4: 0x621818
    ctx->pc = 0x2adce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2adce8:
    // 0x2adce8: 0x31983
    ctx->pc = 0x2adce8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_2adcec:
    // 0x2adcec: 0x8fa20030
    ctx->pc = 0x2adcecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2adcf0:
    // 0x2adcf0: 0x431021
    ctx->pc = 0x2adcf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2adcf4:
    // 0x2adcf4: 0xafa2002c
    ctx->pc = 0x2adcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2adcf8:
    // 0x2adcf8: 0x452021
    ctx->pc = 0x2adcf8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2adcfc:
    // 0x2adcfc: 0x10000003
label_2add00:
    if (ctx->pc == 0x2ADD00u) {
        ctx->pc = 0x2ADD00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD04u;
        goto label_2add04;
    }
    ctx->pc = 0x2ADCFCu;
    {
        const bool branch_taken_0x2adcfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADD00u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2adcfc) {
            ctx->pc = 0x2ADD0Cu;
            goto label_2add0c;
        }
    }
    ctx->pc = 0x2ADD04u;
label_2add04:
    // 0x2add04: 0x8fa3002c
    ctx->pc = 0x2add04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2add08:
    // 0x2add08: 0x652021
    ctx->pc = 0x2add08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2add0c:
    // 0x2add0c: 0x3c020037
    ctx->pc = 0x2add0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2add10:
    // 0x2add10: 0x24428aa0
    ctx->pc = 0x2add10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937248));
label_2add14:
    // 0x2add14: 0x61880
    ctx->pc = 0x2add14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_2add18:
    // 0x2add18: 0x621821
    ctx->pc = 0x2add18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2add1c:
    // 0x2add1c: 0x8c620000
    ctx->pc = 0x2add1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2add20:
    // 0x2add20: 0x82102a
    ctx->pc = 0x2add20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_2add24:
    // 0x2add24: 0x14400003
label_2add28:
    if (ctx->pc == 0x2ADD28u) {
        ctx->pc = 0x2ADD28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2ADD2Cu;
        goto label_2add2c;
    }
    ctx->pc = 0x2ADD24u;
    {
        const bool branch_taken_0x2add24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADD28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2add24) {
            ctx->pc = 0x2ADD34u;
            goto label_2add34;
        }
    }
    ctx->pc = 0x2ADD2Cu;
label_2add2c:
    // 0x2add2c: 0x10000116
label_2add30:
    if (ctx->pc == 0x2ADD30u) {
        ctx->pc = 0x2ADD30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ADD34u;
        goto label_2add34;
    }
    ctx->pc = 0x2ADD2Cu;
    {
        const bool branch_taken_0x2add2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADD30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2add2c) {
            ctx->pc = 0x2AE188u;
            goto label_2ae188;
        }
    }
    ctx->pc = 0x2ADD34u;
label_2add34:
    // 0x2add34: 0x24428a98
    ctx->pc = 0x2add34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937240));
label_2add38:
    // 0x2add38: 0x61880
    ctx->pc = 0x2add38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_2add3c:
    // 0x2add3c: 0x621821
    ctx->pc = 0x2add3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2add40:
    // 0x2add40: 0x8fa40030
    ctx->pc = 0x2add40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2add44:
    // 0x2add44: 0x851021
    ctx->pc = 0x2add44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2add48:
    // 0x2add48: 0xac620000
    ctx->pc = 0x2add48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2add4c:
    // 0x2add4c: 0x8e420038
    ctx->pc = 0x2add4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2add50:
    // 0x2add50: 0x101900
    ctx->pc = 0x2add50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
label_2add54:
    // 0x2add54: 0x431021
    ctx->pc = 0x2add54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2add58:
    // 0x2add58: 0x8c420004
    ctx->pc = 0x2add58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2add5c:
    // 0x2add5c: 0x8c440078
    ctx->pc = 0x2add5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_2add60:
    // 0x2add60: 0x932021
    ctx->pc = 0x2add60u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2add64:
    // 0x2add64: 0x24030001
    ctx->pc = 0x2add64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2add68:
    // 0x2add68: 0xc31804
    ctx->pc = 0x2add68u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_2add6c:
    // 0x2add6c: 0x90820000
    ctx->pc = 0x2add6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2add70:
    // 0x2add70: 0x431025
    ctx->pc = 0x2add70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2add74:
    // 0x2add74: 0xa0820000
    ctx->pc = 0x2add74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2add78:
    // 0x2add78: 0x40034800
    ctx->pc = 0x2add78u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_2add7c:
    // 0x2add7c: 0x3c02003a
    ctx->pc = 0x2add7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2add80:
    // 0x2add80: 0x24442050
    ctx->pc = 0x2add80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8272));
label_2add84:
    // 0x2add84: 0xac830088
    ctx->pc = 0x2add84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_2add88:
    // 0x2add88: 0x96250016
    ctx->pc = 0x2add88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
label_2add8c:
    // 0x2add8c: 0xafa50020
    ctx->pc = 0x2add8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2add90:
    // 0x2add90: 0x96260018
    ctx->pc = 0x2add90u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2add94:
    // 0x2add94: 0xafa60024
    ctx->pc = 0x2add94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_2add98:
    // 0x2add98: 0x92270003
    ctx->pc = 0x2add98u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2add9c:
    // 0x2add9c: 0xafa70028
    ctx->pc = 0x2add9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
label_2adda0:
    // 0x2adda0: 0x24e2ffff
    ctx->pc = 0x2adda0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294967295));
label_2adda4:
    // 0x2adda4: 0x2c420020
    ctx->pc = 0x2adda4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 32));
label_2adda8:
    // 0x2adda8: 0x1440000a
label_2addac:
    if (ctx->pc == 0x2ADDACu) {
        ctx->pc = 0x2ADDACu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x2ADDB0u;
        goto label_2addb0;
    }
    ctx->pc = 0x2ADDA8u;
    {
        const bool branch_taken_0x2adda8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADDACu;
        SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        if (branch_taken_0x2adda8) {
            ctx->pc = 0x2ADDD4u;
            goto label_2addd4;
        }
    }
    ctx->pc = 0x2ADDB0u;
label_2addb0:
    // 0x2addb0: 0x40024800
    ctx->pc = 0x2addb0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_2addb4:
    // 0x2addb4: 0x431023
    ctx->pc = 0x2addb4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2addb8:
    // 0x2addb8: 0x8c830080
    ctx->pc = 0x2addb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2addbc:
    // 0x2addbc: 0x431021
    ctx->pc = 0x2addbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2addc0:
    // 0x2addc0: 0xac820080
    ctx->pc = 0x2addc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2addc4:
    // 0x2addc4: 0x8c820084
    ctx->pc = 0x2addc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2addc8:
    // 0x2addc8: 0x24420001
    ctx->pc = 0x2addc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2addcc:
    // 0x2addcc: 0x100000ed
label_2addd0:
    if (ctx->pc == 0x2ADDD0u) {
        ctx->pc = 0x2ADDD0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x2ADDD4u;
        goto label_2addd4;
    }
    ctx->pc = 0x2ADDCCu;
    {
        const bool branch_taken_0x2addcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADDD0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        if (branch_taken_0x2addcc) {
            ctx->pc = 0x2AE184u;
            goto label_2ae184;
        }
    }
    ctx->pc = 0x2ADDD4u;
label_2addd4:
    // 0x2addd4: 0x92220000
    ctx->pc = 0x2addd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2addd8:
    // 0x2addd8: 0x30430007
    ctx->pc = 0x2addd8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 7));
label_2adddc:
    // 0x2adddc: 0x304200ff
    ctx->pc = 0x2adddcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_2adde0:
    // 0x2adde0: 0x28102
    ctx->pc = 0x2adde0u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 4));
label_2adde4:
    // 0x2adde4: 0x8e220020
    ctx->pc = 0x2adde4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2adde8:
    // 0x2adde8: 0x30423fff
    ctx->pc = 0x2adde8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16383));
label_2addec:
    // 0x2addec: 0x8fa4002c
    ctx->pc = 0x2addecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2addf0:
    // 0x2addf0: 0x829021
    ctx->pc = 0x2addf0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2addf4:
    // 0x2addf4: 0x32020008
    ctx->pc = 0x2addf4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 8));
label_2addf8:
    // 0x2addf8: 0x10400026
label_2addfc:
    if (ctx->pc == 0x2ADDFCu) {
        ctx->pc = 0x2ADDFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2ADE00u;
        goto label_2ade00;
    }
    ctx->pc = 0x2ADDF8u;
    {
        const bool branch_taken_0x2addf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADDFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2addf8) {
            ctx->pc = 0x2ADE94u;
            goto label_2ade94;
        }
    }
    ctx->pc = 0x2ADE00u;
label_2ade00:
    // 0x2ade00: 0x2444f540
    ctx->pc = 0x2ade00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964544));
label_2ade04:
    // 0x2ade04: 0x68850007
    ctx->pc = 0x2ade04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
label_2ade08:
    // 0x2ade08: 0x6c850000
    ctx->pc = 0x2ade08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2ade0c:
    // 0x2ade0c: 0x6886000f
    ctx->pc = 0x2ade0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
label_2ade10:
    // 0x2ade10: 0x6c860008
    ctx->pc = 0x2ade10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
label_2ade14:
    // 0x2ade14: 0x8c870010
    ctx->pc = 0x2ade14u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2ade18:
    // 0x2ade18: 0xb3a50007
    ctx->pc = 0x2ade18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ade1c:
    // 0x2ade1c: 0xb7a50000
    ctx->pc = 0x2ade1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ade20:
    // 0x2ade20: 0xb3a6000f
    ctx->pc = 0x2ade20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ade24:
    // 0x2ade24: 0xb7a60008
    ctx->pc = 0x2ade24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ade28:
    // 0x2ade28: 0xafa70010
    ctx->pc = 0x2ade28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_2ade2c:
    // 0x2ade2c: 0x24020008
    ctx->pc = 0x2ade2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2ade30:
    // 0x2ade30: 0x1602000c
label_2ade34:
    if (ctx->pc == 0x2ADE34u) {
        ctx->pc = 0x2ADE34u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2ADE38u;
        goto label_2ade38;
    }
    ctx->pc = 0x2ADE30u;
    {
        const bool branch_taken_0x2ade30 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2ADE34u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x2ade30) {
            ctx->pc = 0x2ADE64u;
            goto label_2ade64;
        }
    }
    ctx->pc = 0x2ADE38u;
label_2ade38:
    // 0x2ade38: 0x24050013
    ctx->pc = 0x2ade38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 19));
label_2ade3c:
    // 0x2ade3c: 0xafa50038
    ctx->pc = 0x2ade3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_2ade40:
    // 0x2ade40: 0x24060002
    ctx->pc = 0x2ade40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_2ade44:
    // 0x2ade44: 0x14660004
label_2ade48:
    if (ctx->pc == 0x2ADE48u) {
        ctx->pc = 0x2ADE48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
        ctx->pc = 0x2ADE4Cu;
        goto label_2ade4c;
    }
    ctx->pc = 0x2ADE44u;
    {
        const bool branch_taken_0x2ade44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x2ADE48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
        if (branch_taken_0x2ade44) {
            ctx->pc = 0x2ADE58u;
            goto label_2ade58;
        }
    }
    ctx->pc = 0x2ADE4Cu;
label_2ade4c:
    // 0x2ade4c: 0x3c020037
    ctx->pc = 0x2ade4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2ade50:
    // 0x2ade50: 0x1000000e
label_2ade54:
    if (ctx->pc == 0x2ADE54u) {
        ctx->pc = 0x2ADE54u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937200)));
        ctx->pc = 0x2ADE58u;
        goto label_2ade58;
    }
    ctx->pc = 0x2ADE50u;
    {
        const bool branch_taken_0x2ade50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADE54u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937200)));
        if (branch_taken_0x2ade50) {
            ctx->pc = 0x2ADE8Cu;
            goto label_2ade8c;
        }
    }
    ctx->pc = 0x2ADE58u;
label_2ade58:
    // 0x2ade58: 0x3c020037
    ctx->pc = 0x2ade58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2ade5c:
    // 0x2ade5c: 0x1000000b
label_2ade60:
    if (ctx->pc == 0x2ADE60u) {
        ctx->pc = 0x2ADE60u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937204)));
        ctx->pc = 0x2ADE64u;
        goto label_2ade64;
    }
    ctx->pc = 0x2ADE5Cu;
    {
        const bool branch_taken_0x2ade5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADE60u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937204)));
        if (branch_taken_0x2ade5c) {
            ctx->pc = 0x2ADE8Cu;
            goto label_2ade8c;
        }
    }
    ctx->pc = 0x2ADE64u;
label_2ade64:
    // 0x2ade64: 0xafa70038
    ctx->pc = 0x2ade64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_2ade68:
    // 0x2ade68: 0x24020001
    ctx->pc = 0x2ade68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2ade6c:
    // 0x2ade6c: 0xafa20034
    ctx->pc = 0x2ade6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2ade70:
    // 0x2ade70: 0x24020002
    ctx->pc = 0x2ade70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2ade74:
    // 0x2ade74: 0x14620004
label_2ade78:
    if (ctx->pc == 0x2ADE78u) {
        ctx->pc = 0x2ADE78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2ADE7Cu;
        goto label_2ade7c;
    }
    ctx->pc = 0x2ADE74u;
    {
        const bool branch_taken_0x2ade74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2ADE78u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ade74) {
            ctx->pc = 0x2ADE88u;
            goto label_2ade88;
        }
    }
    ctx->pc = 0x2ADE7Cu;
label_2ade7c:
    // 0x2ade7c: 0x3c020037
    ctx->pc = 0x2ade7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2ade80:
    // 0x2ade80: 0x10000002
label_2ade84:
    if (ctx->pc == 0x2ADE84u) {
        ctx->pc = 0x2ADE84u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937208)));
        ctx->pc = 0x2ADE88u;
        goto label_2ade88;
    }
    ctx->pc = 0x2ADE80u;
    {
        const bool branch_taken_0x2ade80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADE84u;
        SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937208)));
        if (branch_taken_0x2ade80) {
            ctx->pc = 0x2ADE8Cu;
            goto label_2ade8c;
        }
    }
    ctx->pc = 0x2ADE88u;
label_2ade88:
    // 0x2ade88: 0x8c578a7c
    ctx->pc = 0x2ade88u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294937212)));
label_2ade8c:
    // 0x2ade8c: 0x10000044
label_2ade90:
    if (ctx->pc == 0x2ADE90u) {
        ctx->pc = 0x2ADE90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2ADE94u;
        goto label_2ade94;
    }
    ctx->pc = 0x2ADE8Cu;
    {
        const bool branch_taken_0x2ade8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADE90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2ade8c) {
            ctx->pc = 0x2ADFA0u;
            goto label_2adfa0;
        }
    }
    ctx->pc = 0x2ADE94u;
label_2ade94:
    // 0x2ade94: 0x1a000036
label_2ade98:
    if (ctx->pc == 0x2ADE98u) {
        ctx->pc = 0x2ADE98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2ADE9Cu;
        goto label_2ade9c;
    }
    ctx->pc = 0x2ADE94u;
    {
        const bool branch_taken_0x2ade94 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2ADE98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ade94) {
            ctx->pc = 0x2ADF70u;
            goto label_2adf70;
        }
    }
    ctx->pc = 0x2ADE9Cu;
label_2ade9c:
    // 0x2ade9c: 0x92220000
    ctx->pc = 0x2ade9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2adea0:
    // 0x2adea0: 0x30420008
    ctx->pc = 0x2adea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_2adea4:
    // 0x2adea4: 0x10400006
label_2adea8:
    if (ctx->pc == 0x2ADEA8u) {
        ctx->pc = 0x2ADEA8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x2ADEACu;
        goto label_2adeac;
    }
    ctx->pc = 0x2ADEA4u;
    {
        const bool branch_taken_0x2adea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADEA8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 44)));
        if (branch_taken_0x2adea4) {
            ctx->pc = 0x2ADEC0u;
            goto label_2adec0;
        }
    }
    ctx->pc = 0x2ADEACu;
label_2adeac:
    // 0x2adeac: 0x8e22002c
    ctx->pc = 0x2adeacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2adeb0:
    // 0x2adeb0: 0x21142
    ctx->pc = 0x2adeb0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 5));
label_2adeb4:
    // 0x2adeb4: 0x30423fff
    ctx->pc = 0x2adeb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16383));
label_2adeb8:
    // 0x2adeb8: 0x10000006
label_2adebc:
    if (ctx->pc == 0x2ADEBCu) {
        ctx->pc = 0x2ADEBCu;
        SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2ADEC0u;
        goto label_2adec0;
    }
    ctx->pc = 0x2ADEB8u;
    {
        const bool branch_taken_0x2adeb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADEBCu;
        SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2adeb8) {
            ctx->pc = 0x2ADED4u;
            goto label_2aded4;
        }
    }
    ctx->pc = 0x2ADEC0u;
label_2adec0:
    // 0x2adec0: 0x8e220024
    ctx->pc = 0x2adec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2adec4:
    // 0x2adec4: 0x21142
    ctx->pc = 0x2adec4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 5));
label_2adec8:
    // 0x2adec8: 0x30423fff
    ctx->pc = 0x2adec8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16383));
label_2adecc:
    // 0x2adecc: 0x8fa4002c
    ctx->pc = 0x2adeccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2aded0:
    // 0x2aded0: 0x82b821
    ctx->pc = 0x2aded0u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2aded4:
    // 0x2aded4: 0x3c070037
    ctx->pc = 0x2aded4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)55 << 16));
label_2aded8:
    // 0x2aded8: 0x24e78630
    ctx->pc = 0x2aded8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294936112));
label_2adedc:
    // 0x2adedc: 0x108080
    ctx->pc = 0x2adedcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 2));
label_2adee0:
    // 0x2adee0: 0x2073821
    ctx->pc = 0x2adee0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_2adee4:
    // 0x2adee4: 0x3c020037
    ctx->pc = 0x2adee4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adee8:
    // 0x2adee8: 0x24428648
    ctx->pc = 0x2adee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936136));
label_2adeec:
    // 0x2adeec: 0x2021021
    ctx->pc = 0x2adeecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2adef0:
    // 0x2adef0: 0x8c420000
    ctx->pc = 0x2adef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2adef4:
    // 0x2adef4: 0xafa20038
    ctx->pc = 0x2adef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2adef8:
    // 0x2adef8: 0x3c020037
    ctx->pc = 0x2adef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adefc:
    // 0x2adefc: 0x24428678
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936184));
label_2adf00:
    // 0x2adf00: 0x2021021
    ctx->pc = 0x2adf00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2adf04:
    // 0x2adf04: 0x8c420000
    ctx->pc = 0x2adf04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2adf08:
    // 0x2adf08: 0xafa20034
    ctx->pc = 0x2adf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2adf0c:
    // 0x2adf0c: 0x3c080037
    ctx->pc = 0x2adf0cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)55 << 16));
label_2adf10:
    // 0x2adf10: 0x25088660
    ctx->pc = 0x2adf10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294936160));
label_2adf14:
    // 0x2adf14: 0x2084021
    ctx->pc = 0x2adf14u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_2adf18:
    // 0x2adf18: 0x3c030037
    ctx->pc = 0x2adf18u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2adf1c:
    // 0x2adf1c: 0x24638600
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294936064));
label_2adf20:
    // 0x2adf20: 0x2031821
    ctx->pc = 0x2adf20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2adf24:
    // 0x2adf24: 0x3c020037
    ctx->pc = 0x2adf24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adf28:
    // 0x2adf28: 0x24428618
    ctx->pc = 0x2adf28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936088));
label_2adf2c:
    // 0x2adf2c: 0x2021021
    ctx->pc = 0x2adf2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2adf30:
    // 0x2adf30: 0x3c0202d
    ctx->pc = 0x2adf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2adf34:
    // 0x2adf34: 0x2e0282d
    ctx->pc = 0x2adf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2adf38:
    // 0x2adf38: 0x24060001
    ctx->pc = 0x2adf38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2adf3c:
    // 0x2adf3c: 0x8ce70000
    ctx->pc = 0x2adf3cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2adf40:
    // 0x2adf40: 0x8d080000
    ctx->pc = 0x2adf40u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2adf44:
    // 0x2adf44: 0x8c690000
    ctx->pc = 0x2adf44u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2adf48:
    // 0x2adf48: 0xc0ab572
label_2adf4c:
    if (ctx->pc == 0x2ADF4Cu) {
        ctx->pc = 0x2ADF4Cu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2ADF50u;
        goto label_2adf50;
    }
    ctx->pc = 0x2ADF48u;
    SET_GPR_U32(ctx, 31, 0x2ADF50u);
    ctx->pc = 0x2ADF4Cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2AD5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TexDmaAppendTexture_0x2ad5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF50u; }
    }
    if (ctx->pc != 0x2ADF50u) { return; }
    ctx->pc = 0x2ADF50u;
label_2adf50:
    // 0x2adf50: 0x8fb7002c
    ctx->pc = 0x2adf50u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2adf54:
    // 0x2adf54: 0x24030002
    ctx->pc = 0x2adf54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2adf58:
    // 0x2adf58: 0x3c020037
    ctx->pc = 0x2adf58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adf5c:
    // 0x2adf5c: 0x24428690
    ctx->pc = 0x2adf5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936208));
label_2adf60:
    // 0x2adf60: 0x2028021
    ctx->pc = 0x2adf60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2adf64:
    // 0x2adf64: 0x8e020000
    ctx->pc = 0x2adf64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2adf68:
    // 0x2adf68: 0x1000000d
label_2adf6c:
    if (ctx->pc == 0x2ADF6Cu) {
        ctx->pc = 0x2ADF6Cu;
        SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->pc = 0x2ADF70u;
        goto label_2adf70;
    }
    ctx->pc = 0x2ADF68u;
    {
        const bool branch_taken_0x2adf68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADF6Cu;
        SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        if (branch_taken_0x2adf68) {
            ctx->pc = 0x2ADFA0u;
            goto label_2adfa0;
        }
    }
    ctx->pc = 0x2ADF70u;
label_2adf70:
    // 0x2adf70: 0x244286a8
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936232));
label_2adf74:
    // 0x2adf74: 0x31880
    ctx->pc = 0x2adf74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2adf78:
    // 0x2adf78: 0x621021
    ctx->pc = 0x2adf78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2adf7c:
    // 0x2adf7c: 0x8c420000
    ctx->pc = 0x2adf7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2adf80:
    // 0x2adf80: 0xafa20038
    ctx->pc = 0x2adf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_2adf84:
    // 0x2adf84: 0x3c020037
    ctx->pc = 0x2adf84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2adf88:
    // 0x2adf88: 0x244286c0
    ctx->pc = 0x2adf88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936256));
label_2adf8c:
    // 0x2adf8c: 0x621821
    ctx->pc = 0x2adf8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2adf90:
    // 0x2adf90: 0x8c630000
    ctx->pc = 0x2adf90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2adf94:
    // 0x2adf94: 0xafa30034
    ctx->pc = 0x2adf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_2adf98:
    // 0x2adf98: 0xb82d
    ctx->pc = 0x2adf98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adf9c:
    // 0x2adf9c: 0x24030001
    ctx->pc = 0x2adf9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2adfa0:
    // 0x2adfa0: 0x8fa50028
    ctx->pc = 0x2adfa0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2adfa4:
    // 0x2adfa4: 0xa3102a
    ctx->pc = 0x2adfa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
label_2adfa8:
    // 0x2adfa8: 0x62280b
    ctx->pc = 0x2adfa8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_2adfac:
    // 0x2adfac: 0xafa50028
    ctx->pc = 0x2adfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_2adfb0:
    // 0x2adfb0: 0x3c0202d
    ctx->pc = 0x2adfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2adfb4:
    // 0x2adfb4: 0x240282d
    ctx->pc = 0x2adfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2adfb8:
    // 0x2adfb8: 0x8fa60028
    ctx->pc = 0x2adfb8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2adfbc:
    // 0x2adfbc: 0x8fa70038
    ctx->pc = 0x2adfbcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2adfc0:
    // 0x2adfc0: 0x8fa80034
    ctx->pc = 0x2adfc0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2adfc4:
    // 0x2adfc4: 0x8fa90020
    ctx->pc = 0x2adfc4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2adfc8:
    // 0x2adfc8: 0xc0ab572
label_2adfcc:
    if (ctx->pc == 0x2ADFCCu) {
        ctx->pc = 0x2ADFCCu;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x2ADFD0u;
        goto label_2adfd0;
    }
    ctx->pc = 0x2ADFC8u;
    SET_GPR_U32(ctx, 31, 0x2ADFD0u);
    ctx->pc = 0x2ADFCCu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x2AD5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TexDmaAppendTexture_0x2ad5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFD0u; }
    }
    if (ctx->pc != 0x2ADFD0u) { return; }
    ctx->pc = 0x2ADFD0u;
label_2adfd0:
    // 0x2adfd0: 0x92220002
    ctx->pc = 0x2adfd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2adfd4:
    // 0x2adfd4: 0x10400047
label_2adfd8:
    if (ctx->pc == 0x2ADFD8u) {
        ctx->pc = 0x2ADFD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFDCu;
        goto label_2adfdc;
    }
    ctx->pc = 0x2ADFD4u;
    {
        const bool branch_taken_0x2adfd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADFD8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2adfd4) {
            ctx->pc = 0x2AE0F4u;
            goto label_2ae0f4;
        }
    }
    ctx->pc = 0x2ADFDCu;
label_2adfdc:
    // 0x2adfdc: 0x902d
    ctx->pc = 0x2adfdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2adfe0:
    // 0x2adfe0: 0x8fb60020
    ctx->pc = 0x2adfe0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2adfe4:
    // 0x2adfe4: 0x8fb50024
    ctx->pc = 0x2adfe4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2adfe8:
    // 0x2adfe8: 0x2d5a018
    ctx->pc = 0x2adfe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2adfec:
    // 0x2adfec: 0x8fa60034
    ctx->pc = 0x2adfecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2adff0:
    // 0x2adff0: 0x286a018
    ctx->pc = 0x2adff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2adff4:
    // 0x2adff4: 0x14a043
    ctx->pc = 0x2adff4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 1));
label_2adff8:
    // 0x2adff8: 0x10000038
label_2adffc:
    if (ctx->pc == 0x2ADFFCu) {
        ctx->pc = 0x2ADFFCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE000u;
        goto label_2ae000;
    }
    ctx->pc = 0x2ADFF8u;
    {
        const bool branch_taken_0x2adff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADFFCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2adff8) {
            ctx->pc = 0x2AE0DCu;
            goto label_2ae0dc;
        }
    }
    ctx->pc = 0x2AE000u;
label_2ae000:
    // 0x2ae000: 0x10400025
label_2ae004:
    if (ctx->pc == 0x2AE004u) {
        ctx->pc = 0x2AE004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2AE008u;
        goto label_2ae008;
    }
    ctx->pc = 0x2AE000u;
    {
        const bool branch_taken_0x2ae000 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE004u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2ae000) {
            ctx->pc = 0x2AE098u;
            goto label_2ae098;
        }
    }
    ctx->pc = 0x2AE008u;
label_2ae008:
    // 0x2ae008: 0x2442f560
    ctx->pc = 0x2ae008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964576));
label_2ae00c:
    // 0x2ae00c: 0x131880
    ctx->pc = 0x2ae00cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_2ae010:
    // 0x2ae010: 0x621821
    ctx->pc = 0x2ae010u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ae014:
    // 0x2ae014: 0x8c620000
    ctx->pc = 0x2ae014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ae018:
    // 0x2ae018: 0x400008
label_2ae01c:
    if (ctx->pc == 0x2AE01Cu) {
        ctx->pc = 0x2AE020u;
        goto label_2ae020;
    }
    ctx->pc = 0x2AE018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADB88u: goto label_2adb88;
            case 0x2ADB8Cu: goto label_2adb8c;
            case 0x2ADB90u: goto label_2adb90;
            case 0x2ADB94u: goto label_2adb94;
            case 0x2ADB98u: goto label_2adb98;
            case 0x2ADB9Cu: goto label_2adb9c;
            case 0x2ADBA0u: goto label_2adba0;
            case 0x2ADBA4u: goto label_2adba4;
            case 0x2ADBA8u: goto label_2adba8;
            case 0x2ADBACu: goto label_2adbac;
            case 0x2ADBB0u: goto label_2adbb0;
            case 0x2ADBB4u: goto label_2adbb4;
            case 0x2ADBB8u: goto label_2adbb8;
            case 0x2ADBBCu: goto label_2adbbc;
            case 0x2ADBC0u: goto label_2adbc0;
            case 0x2ADBC4u: goto label_2adbc4;
            case 0x2ADBC8u: goto label_2adbc8;
            case 0x2ADBCCu: goto label_2adbcc;
            case 0x2ADBD0u: goto label_2adbd0;
            case 0x2ADBD4u: goto label_2adbd4;
            case 0x2ADBD8u: goto label_2adbd8;
            case 0x2ADBDCu: goto label_2adbdc;
            case 0x2ADBE0u: goto label_2adbe0;
            case 0x2ADBE4u: goto label_2adbe4;
            case 0x2ADBE8u: goto label_2adbe8;
            case 0x2ADBECu: goto label_2adbec;
            case 0x2ADBF0u: goto label_2adbf0;
            case 0x2ADBF4u: goto label_2adbf4;
            case 0x2ADBF8u: goto label_2adbf8;
            case 0x2ADBFCu: goto label_2adbfc;
            case 0x2ADC00u: goto label_2adc00;
            case 0x2ADC04u: goto label_2adc04;
            case 0x2ADC08u: goto label_2adc08;
            case 0x2ADC0Cu: goto label_2adc0c;
            case 0x2ADC10u: goto label_2adc10;
            case 0x2ADC14u: goto label_2adc14;
            case 0x2ADC18u: goto label_2adc18;
            case 0x2ADC1Cu: goto label_2adc1c;
            case 0x2ADC20u: goto label_2adc20;
            case 0x2ADC24u: goto label_2adc24;
            case 0x2ADC28u: goto label_2adc28;
            case 0x2ADC2Cu: goto label_2adc2c;
            case 0x2ADC30u: goto label_2adc30;
            case 0x2ADC34u: goto label_2adc34;
            case 0x2ADC38u: goto label_2adc38;
            case 0x2ADC3Cu: goto label_2adc3c;
            case 0x2ADC40u: goto label_2adc40;
            case 0x2ADC44u: goto label_2adc44;
            case 0x2ADC48u: goto label_2adc48;
            case 0x2ADC4Cu: goto label_2adc4c;
            case 0x2ADC50u: goto label_2adc50;
            case 0x2ADC54u: goto label_2adc54;
            case 0x2ADC58u: goto label_2adc58;
            case 0x2ADC5Cu: goto label_2adc5c;
            case 0x2ADC60u: goto label_2adc60;
            case 0x2ADC64u: goto label_2adc64;
            case 0x2ADC68u: goto label_2adc68;
            case 0x2ADC6Cu: goto label_2adc6c;
            case 0x2ADC70u: goto label_2adc70;
            case 0x2ADC74u: goto label_2adc74;
            case 0x2ADC78u: goto label_2adc78;
            case 0x2ADC7Cu: goto label_2adc7c;
            case 0x2ADC80u: goto label_2adc80;
            case 0x2ADC84u: goto label_2adc84;
            case 0x2ADC88u: goto label_2adc88;
            case 0x2ADC8Cu: goto label_2adc8c;
            case 0x2ADC90u: goto label_2adc90;
            case 0x2ADC94u: goto label_2adc94;
            case 0x2ADC98u: goto label_2adc98;
            case 0x2ADC9Cu: goto label_2adc9c;
            case 0x2ADCA0u: goto label_2adca0;
            case 0x2ADCA4u: goto label_2adca4;
            case 0x2ADCA8u: goto label_2adca8;
            case 0x2ADCACu: goto label_2adcac;
            case 0x2ADCB0u: goto label_2adcb0;
            case 0x2ADCB4u: goto label_2adcb4;
            case 0x2ADCB8u: goto label_2adcb8;
            case 0x2ADCBCu: goto label_2adcbc;
            case 0x2ADCC0u: goto label_2adcc0;
            case 0x2ADCC4u: goto label_2adcc4;
            case 0x2ADCC8u: goto label_2adcc8;
            case 0x2ADCCCu: goto label_2adccc;
            case 0x2ADCD0u: goto label_2adcd0;
            case 0x2ADCD4u: goto label_2adcd4;
            case 0x2ADCD8u: goto label_2adcd8;
            case 0x2ADCDCu: goto label_2adcdc;
            case 0x2ADCE0u: goto label_2adce0;
            case 0x2ADCE4u: goto label_2adce4;
            case 0x2ADCE8u: goto label_2adce8;
            case 0x2ADCECu: goto label_2adcec;
            case 0x2ADCF0u: goto label_2adcf0;
            case 0x2ADCF4u: goto label_2adcf4;
            case 0x2ADCF8u: goto label_2adcf8;
            case 0x2ADCFCu: goto label_2adcfc;
            case 0x2ADD00u: goto label_2add00;
            case 0x2ADD04u: goto label_2add04;
            case 0x2ADD08u: goto label_2add08;
            case 0x2ADD0Cu: goto label_2add0c;
            case 0x2ADD10u: goto label_2add10;
            case 0x2ADD14u: goto label_2add14;
            case 0x2ADD18u: goto label_2add18;
            case 0x2ADD1Cu: goto label_2add1c;
            case 0x2ADD20u: goto label_2add20;
            case 0x2ADD24u: goto label_2add24;
            case 0x2ADD28u: goto label_2add28;
            case 0x2ADD2Cu: goto label_2add2c;
            case 0x2ADD30u: goto label_2add30;
            case 0x2ADD34u: goto label_2add34;
            case 0x2ADD38u: goto label_2add38;
            case 0x2ADD3Cu: goto label_2add3c;
            case 0x2ADD40u: goto label_2add40;
            case 0x2ADD44u: goto label_2add44;
            case 0x2ADD48u: goto label_2add48;
            case 0x2ADD4Cu: goto label_2add4c;
            case 0x2ADD50u: goto label_2add50;
            case 0x2ADD54u: goto label_2add54;
            case 0x2ADD58u: goto label_2add58;
            case 0x2ADD5Cu: goto label_2add5c;
            case 0x2ADD60u: goto label_2add60;
            case 0x2ADD64u: goto label_2add64;
            case 0x2ADD68u: goto label_2add68;
            case 0x2ADD6Cu: goto label_2add6c;
            case 0x2ADD70u: goto label_2add70;
            case 0x2ADD74u: goto label_2add74;
            case 0x2ADD78u: goto label_2add78;
            case 0x2ADD7Cu: goto label_2add7c;
            case 0x2ADD80u: goto label_2add80;
            case 0x2ADD84u: goto label_2add84;
            case 0x2ADD88u: goto label_2add88;
            case 0x2ADD8Cu: goto label_2add8c;
            case 0x2ADD90u: goto label_2add90;
            case 0x2ADD94u: goto label_2add94;
            case 0x2ADD98u: goto label_2add98;
            case 0x2ADD9Cu: goto label_2add9c;
            case 0x2ADDA0u: goto label_2adda0;
            case 0x2ADDA4u: goto label_2adda4;
            case 0x2ADDA8u: goto label_2adda8;
            case 0x2ADDACu: goto label_2addac;
            case 0x2ADDB0u: goto label_2addb0;
            case 0x2ADDB4u: goto label_2addb4;
            case 0x2ADDB8u: goto label_2addb8;
            case 0x2ADDBCu: goto label_2addbc;
            case 0x2ADDC0u: goto label_2addc0;
            case 0x2ADDC4u: goto label_2addc4;
            case 0x2ADDC8u: goto label_2addc8;
            case 0x2ADDCCu: goto label_2addcc;
            case 0x2ADDD0u: goto label_2addd0;
            case 0x2ADDD4u: goto label_2addd4;
            case 0x2ADDD8u: goto label_2addd8;
            case 0x2ADDDCu: goto label_2adddc;
            case 0x2ADDE0u: goto label_2adde0;
            case 0x2ADDE4u: goto label_2adde4;
            case 0x2ADDE8u: goto label_2adde8;
            case 0x2ADDECu: goto label_2addec;
            case 0x2ADDF0u: goto label_2addf0;
            case 0x2ADDF4u: goto label_2addf4;
            case 0x2ADDF8u: goto label_2addf8;
            case 0x2ADDFCu: goto label_2addfc;
            case 0x2ADE00u: goto label_2ade00;
            case 0x2ADE04u: goto label_2ade04;
            case 0x2ADE08u: goto label_2ade08;
            case 0x2ADE0Cu: goto label_2ade0c;
            case 0x2ADE10u: goto label_2ade10;
            case 0x2ADE14u: goto label_2ade14;
            case 0x2ADE18u: goto label_2ade18;
            case 0x2ADE1Cu: goto label_2ade1c;
            case 0x2ADE20u: goto label_2ade20;
            case 0x2ADE24u: goto label_2ade24;
            case 0x2ADE28u: goto label_2ade28;
            case 0x2ADE2Cu: goto label_2ade2c;
            case 0x2ADE30u: goto label_2ade30;
            case 0x2ADE34u: goto label_2ade34;
            case 0x2ADE38u: goto label_2ade38;
            case 0x2ADE3Cu: goto label_2ade3c;
            case 0x2ADE40u: goto label_2ade40;
            case 0x2ADE44u: goto label_2ade44;
            case 0x2ADE48u: goto label_2ade48;
            case 0x2ADE4Cu: goto label_2ade4c;
            case 0x2ADE50u: goto label_2ade50;
            case 0x2ADE54u: goto label_2ade54;
            case 0x2ADE58u: goto label_2ade58;
            case 0x2ADE5Cu: goto label_2ade5c;
            case 0x2ADE60u: goto label_2ade60;
            case 0x2ADE64u: goto label_2ade64;
            case 0x2ADE68u: goto label_2ade68;
            case 0x2ADE6Cu: goto label_2ade6c;
            case 0x2ADE70u: goto label_2ade70;
            case 0x2ADE74u: goto label_2ade74;
            case 0x2ADE78u: goto label_2ade78;
            case 0x2ADE7Cu: goto label_2ade7c;
            case 0x2ADE80u: goto label_2ade80;
            case 0x2ADE84u: goto label_2ade84;
            case 0x2ADE88u: goto label_2ade88;
            case 0x2ADE8Cu: goto label_2ade8c;
            case 0x2ADE90u: goto label_2ade90;
            case 0x2ADE94u: goto label_2ade94;
            case 0x2ADE98u: goto label_2ade98;
            case 0x2ADE9Cu: goto label_2ade9c;
            case 0x2ADEA0u: goto label_2adea0;
            case 0x2ADEA4u: goto label_2adea4;
            case 0x2ADEA8u: goto label_2adea8;
            case 0x2ADEACu: goto label_2adeac;
            case 0x2ADEB0u: goto label_2adeb0;
            case 0x2ADEB4u: goto label_2adeb4;
            case 0x2ADEB8u: goto label_2adeb8;
            case 0x2ADEBCu: goto label_2adebc;
            case 0x2ADEC0u: goto label_2adec0;
            case 0x2ADEC4u: goto label_2adec4;
            case 0x2ADEC8u: goto label_2adec8;
            case 0x2ADECCu: goto label_2adecc;
            case 0x2ADED0u: goto label_2aded0;
            case 0x2ADED4u: goto label_2aded4;
            case 0x2ADED8u: goto label_2aded8;
            case 0x2ADEDCu: goto label_2adedc;
            case 0x2ADEE0u: goto label_2adee0;
            case 0x2ADEE4u: goto label_2adee4;
            case 0x2ADEE8u: goto label_2adee8;
            case 0x2ADEECu: goto label_2adeec;
            case 0x2ADEF0u: goto label_2adef0;
            case 0x2ADEF4u: goto label_2adef4;
            case 0x2ADEF8u: goto label_2adef8;
            case 0x2ADEFCu: goto label_2adefc;
            case 0x2ADF00u: goto label_2adf00;
            case 0x2ADF04u: goto label_2adf04;
            case 0x2ADF08u: goto label_2adf08;
            case 0x2ADF0Cu: goto label_2adf0c;
            case 0x2ADF10u: goto label_2adf10;
            case 0x2ADF14u: goto label_2adf14;
            case 0x2ADF18u: goto label_2adf18;
            case 0x2ADF1Cu: goto label_2adf1c;
            case 0x2ADF20u: goto label_2adf20;
            case 0x2ADF24u: goto label_2adf24;
            case 0x2ADF28u: goto label_2adf28;
            case 0x2ADF2Cu: goto label_2adf2c;
            case 0x2ADF30u: goto label_2adf30;
            case 0x2ADF34u: goto label_2adf34;
            case 0x2ADF38u: goto label_2adf38;
            case 0x2ADF3Cu: goto label_2adf3c;
            case 0x2ADF40u: goto label_2adf40;
            case 0x2ADF44u: goto label_2adf44;
            case 0x2ADF48u: goto label_2adf48;
            case 0x2ADF4Cu: goto label_2adf4c;
            case 0x2ADF50u: goto label_2adf50;
            case 0x2ADF54u: goto label_2adf54;
            case 0x2ADF58u: goto label_2adf58;
            case 0x2ADF5Cu: goto label_2adf5c;
            case 0x2ADF60u: goto label_2adf60;
            case 0x2ADF64u: goto label_2adf64;
            case 0x2ADF68u: goto label_2adf68;
            case 0x2ADF6Cu: goto label_2adf6c;
            case 0x2ADF70u: goto label_2adf70;
            case 0x2ADF74u: goto label_2adf74;
            case 0x2ADF78u: goto label_2adf78;
            case 0x2ADF7Cu: goto label_2adf7c;
            case 0x2ADF80u: goto label_2adf80;
            case 0x2ADF84u: goto label_2adf84;
            case 0x2ADF88u: goto label_2adf88;
            case 0x2ADF8Cu: goto label_2adf8c;
            case 0x2ADF90u: goto label_2adf90;
            case 0x2ADF94u: goto label_2adf94;
            case 0x2ADF98u: goto label_2adf98;
            case 0x2ADF9Cu: goto label_2adf9c;
            case 0x2ADFA0u: goto label_2adfa0;
            case 0x2ADFA4u: goto label_2adfa4;
            case 0x2ADFA8u: goto label_2adfa8;
            case 0x2ADFACu: goto label_2adfac;
            case 0x2ADFB0u: goto label_2adfb0;
            case 0x2ADFB4u: goto label_2adfb4;
            case 0x2ADFB8u: goto label_2adfb8;
            case 0x2ADFBCu: goto label_2adfbc;
            case 0x2ADFC0u: goto label_2adfc0;
            case 0x2ADFC4u: goto label_2adfc4;
            case 0x2ADFC8u: goto label_2adfc8;
            case 0x2ADFCCu: goto label_2adfcc;
            case 0x2ADFD0u: goto label_2adfd0;
            case 0x2ADFD4u: goto label_2adfd4;
            case 0x2ADFD8u: goto label_2adfd8;
            case 0x2ADFDCu: goto label_2adfdc;
            case 0x2ADFE0u: goto label_2adfe0;
            case 0x2ADFE4u: goto label_2adfe4;
            case 0x2ADFE8u: goto label_2adfe8;
            case 0x2ADFECu: goto label_2adfec;
            case 0x2ADFF0u: goto label_2adff0;
            case 0x2ADFF4u: goto label_2adff4;
            case 0x2ADFF8u: goto label_2adff8;
            case 0x2ADFFCu: goto label_2adffc;
            case 0x2AE000u: goto label_2ae000;
            case 0x2AE004u: goto label_2ae004;
            case 0x2AE008u: goto label_2ae008;
            case 0x2AE00Cu: goto label_2ae00c;
            case 0x2AE010u: goto label_2ae010;
            case 0x2AE014u: goto label_2ae014;
            case 0x2AE018u: goto label_2ae018;
            case 0x2AE01Cu: goto label_2ae01c;
            case 0x2AE020u: goto label_2ae020;
            case 0x2AE024u: goto label_2ae024;
            case 0x2AE028u: goto label_2ae028;
            case 0x2AE02Cu: goto label_2ae02c;
            case 0x2AE030u: goto label_2ae030;
            case 0x2AE034u: goto label_2ae034;
            case 0x2AE038u: goto label_2ae038;
            case 0x2AE03Cu: goto label_2ae03c;
            case 0x2AE040u: goto label_2ae040;
            case 0x2AE044u: goto label_2ae044;
            case 0x2AE048u: goto label_2ae048;
            case 0x2AE04Cu: goto label_2ae04c;
            case 0x2AE050u: goto label_2ae050;
            case 0x2AE054u: goto label_2ae054;
            case 0x2AE058u: goto label_2ae058;
            case 0x2AE05Cu: goto label_2ae05c;
            case 0x2AE060u: goto label_2ae060;
            case 0x2AE064u: goto label_2ae064;
            case 0x2AE068u: goto label_2ae068;
            case 0x2AE06Cu: goto label_2ae06c;
            case 0x2AE070u: goto label_2ae070;
            case 0x2AE074u: goto label_2ae074;
            case 0x2AE078u: goto label_2ae078;
            case 0x2AE07Cu: goto label_2ae07c;
            case 0x2AE080u: goto label_2ae080;
            case 0x2AE084u: goto label_2ae084;
            case 0x2AE088u: goto label_2ae088;
            case 0x2AE08Cu: goto label_2ae08c;
            case 0x2AE090u: goto label_2ae090;
            case 0x2AE094u: goto label_2ae094;
            case 0x2AE098u: goto label_2ae098;
            case 0x2AE09Cu: goto label_2ae09c;
            case 0x2AE0A0u: goto label_2ae0a0;
            case 0x2AE0A4u: goto label_2ae0a4;
            case 0x2AE0A8u: goto label_2ae0a8;
            case 0x2AE0ACu: goto label_2ae0ac;
            case 0x2AE0B0u: goto label_2ae0b0;
            case 0x2AE0B4u: goto label_2ae0b4;
            case 0x2AE0B8u: goto label_2ae0b8;
            case 0x2AE0BCu: goto label_2ae0bc;
            case 0x2AE0C0u: goto label_2ae0c0;
            case 0x2AE0C4u: goto label_2ae0c4;
            case 0x2AE0C8u: goto label_2ae0c8;
            case 0x2AE0CCu: goto label_2ae0cc;
            case 0x2AE0D0u: goto label_2ae0d0;
            case 0x2AE0D4u: goto label_2ae0d4;
            case 0x2AE0D8u: goto label_2ae0d8;
            case 0x2AE0DCu: goto label_2ae0dc;
            case 0x2AE0E0u: goto label_2ae0e0;
            case 0x2AE0E4u: goto label_2ae0e4;
            case 0x2AE0E8u: goto label_2ae0e8;
            case 0x2AE0ECu: goto label_2ae0ec;
            case 0x2AE0F0u: goto label_2ae0f0;
            case 0x2AE0F4u: goto label_2ae0f4;
            case 0x2AE0F8u: goto label_2ae0f8;
            case 0x2AE0FCu: goto label_2ae0fc;
            case 0x2AE100u: goto label_2ae100;
            case 0x2AE104u: goto label_2ae104;
            case 0x2AE108u: goto label_2ae108;
            case 0x2AE10Cu: goto label_2ae10c;
            case 0x2AE110u: goto label_2ae110;
            case 0x2AE114u: goto label_2ae114;
            case 0x2AE118u: goto label_2ae118;
            case 0x2AE11Cu: goto label_2ae11c;
            case 0x2AE120u: goto label_2ae120;
            case 0x2AE124u: goto label_2ae124;
            case 0x2AE128u: goto label_2ae128;
            case 0x2AE12Cu: goto label_2ae12c;
            case 0x2AE130u: goto label_2ae130;
            case 0x2AE134u: goto label_2ae134;
            case 0x2AE138u: goto label_2ae138;
            case 0x2AE13Cu: goto label_2ae13c;
            case 0x2AE140u: goto label_2ae140;
            case 0x2AE144u: goto label_2ae144;
            case 0x2AE148u: goto label_2ae148;
            case 0x2AE14Cu: goto label_2ae14c;
            case 0x2AE150u: goto label_2ae150;
            case 0x2AE154u: goto label_2ae154;
            case 0x2AE158u: goto label_2ae158;
            case 0x2AE15Cu: goto label_2ae15c;
            case 0x2AE160u: goto label_2ae160;
            case 0x2AE164u: goto label_2ae164;
            case 0x2AE168u: goto label_2ae168;
            case 0x2AE16Cu: goto label_2ae16c;
            case 0x2AE170u: goto label_2ae170;
            case 0x2AE174u: goto label_2ae174;
            case 0x2AE178u: goto label_2ae178;
            case 0x2AE17Cu: goto label_2ae17c;
            case 0x2AE180u: goto label_2ae180;
            case 0x2AE184u: goto label_2ae184;
            case 0x2AE188u: goto label_2ae188;
            case 0x2AE18Cu: goto label_2ae18c;
            case 0x2AE190u: goto label_2ae190;
            case 0x2AE194u: goto label_2ae194;
            case 0x2AE198u: goto label_2ae198;
            case 0x2AE19Cu: goto label_2ae19c;
            case 0x2AE1A0u: goto label_2ae1a0;
            case 0x2AE1A4u: goto label_2ae1a4;
            case 0x2AE1A8u: goto label_2ae1a8;
            case 0x2AE1ACu: goto label_2ae1ac;
            case 0x2AE1B0u: goto label_2ae1b0;
            case 0x2AE1B4u: goto label_2ae1b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AE020u;
label_2ae020:
    // 0x2ae020: 0x1000000c
label_2ae024:
    if (ctx->pc == 0x2AE024u) {
        ctx->pc = 0x2AE024u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x2AE028u;
        goto label_2ae028;
    }
    ctx->pc = 0x2AE020u;
    {
        const bool branch_taken_0x2ae020 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE024u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        if (branch_taken_0x2ae020) {
            ctx->pc = 0x2AE054u;
            goto label_2ae054;
        }
    }
    ctx->pc = 0x2AE028u;
label_2ae028:
    // 0x2ae028: 0x8e220028
    ctx->pc = 0x2ae028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2ae02c:
    // 0x2ae02c: 0x28502
    ctx->pc = 0x2ae02cu;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 20));
label_2ae030:
    // 0x2ae030: 0x8e23002c
    ctx->pc = 0x2ae030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2ae034:
    // 0x2ae034: 0x30620003
    ctx->pc = 0x2ae034u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
label_2ae038:
    // 0x2ae038: 0x21300
    ctx->pc = 0x2ae038u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
label_2ae03c:
    // 0x2ae03c: 0x2028025
    ctx->pc = 0x2ae03cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ae040:
    // 0x2ae040: 0x10000014
label_2ae044:
    if (ctx->pc == 0x2AE044u) {
        ctx->pc = 0x2AE044u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x2AE048u;
        goto label_2ae048;
    }
    ctx->pc = 0x2AE040u;
    {
        const bool branch_taken_0x2ae040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE044u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2ae040) {
            ctx->pc = 0x2AE094u;
            goto label_2ae094;
        }
    }
    ctx->pc = 0x2AE048u;
label_2ae048:
    // 0x2ae048: 0x1000000f
label_2ae04c:
    if (ctx->pc == 0x2AE04Cu) {
        ctx->pc = 0x2AE04Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x2AE050u;
        goto label_2ae050;
    }
    ctx->pc = 0x2AE048u;
    {
        const bool branch_taken_0x2ae048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE04Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
        if (branch_taken_0x2ae048) {
            ctx->pc = 0x2AE088u;
            goto label_2ae088;
        }
    }
    ctx->pc = 0x2AE050u;
label_2ae050:
    // 0x2ae050: 0x8e220030
    ctx->pc = 0x2ae050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2ae054:
    // 0x2ae054: 0x30503fff
    ctx->pc = 0x2ae054u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 16383));
label_2ae058:
    // 0x2ae058: 0x21382
    ctx->pc = 0x2ae058u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 14));
label_2ae05c:
    // 0x2ae05c: 0x1000000e
label_2ae060:
    if (ctx->pc == 0x2AE060u) {
        ctx->pc = 0x2AE060u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 63));
        ctx->pc = 0x2AE064u;
        goto label_2ae064;
    }
    ctx->pc = 0x2AE05Cu;
    {
        const bool branch_taken_0x2ae05c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE060u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 63));
        if (branch_taken_0x2ae05c) {
            ctx->pc = 0x2AE098u;
            goto label_2ae098;
        }
    }
    ctx->pc = 0x2AE064u;
label_2ae064:
    // 0x2ae064: 0x8e220030
    ctx->pc = 0x2ae064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2ae068:
    // 0x2ae068: 0x28502
    ctx->pc = 0x2ae068u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 20));
label_2ae06c:
    // 0x2ae06c: 0x8e230034
    ctx->pc = 0x2ae06cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2ae070:
    // 0x2ae070: 0x30620003
    ctx->pc = 0x2ae070u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
label_2ae074:
    // 0x2ae074: 0x21300
    ctx->pc = 0x2ae074u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 12));
label_2ae078:
    // 0x2ae078: 0x2028025
    ctx->pc = 0x2ae078u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ae07c:
    // 0x2ae07c: 0x10000005
label_2ae080:
    if (ctx->pc == 0x2AE080u) {
        ctx->pc = 0x2AE080u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x2AE084u;
        goto label_2ae084;
    }
    ctx->pc = 0x2AE07Cu;
    {
        const bool branch_taken_0x2ae07c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE080u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2ae07c) {
            ctx->pc = 0x2AE094u;
            goto label_2ae094;
        }
    }
    ctx->pc = 0x2AE084u;
label_2ae084:
    // 0x2ae084: 0x8e230034
    ctx->pc = 0x2ae084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2ae088:
    // 0x2ae088: 0x31202
    ctx->pc = 0x2ae088u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 8));
label_2ae08c:
    // 0x2ae08c: 0x30503fff
    ctx->pc = 0x2ae08cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 16383));
label_2ae090:
    // 0x2ae090: 0x31d82
    ctx->pc = 0x2ae090u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 22));
label_2ae094:
    // 0x2ae094: 0x3072003f
    ctx->pc = 0x2ae094u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 3), 63));
label_2ae098:
    // 0x2ae098: 0x8fa7002c
    ctx->pc = 0x2ae098u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2ae09c:
    // 0x2ae09c: 0x2078021
    ctx->pc = 0x2ae09cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_2ae0a0:
    // 0x2ae0a0: 0x16b043
    ctx->pc = 0x2ae0a0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 22), 1));
label_2ae0a4:
    // 0x2ae0a4: 0x15a843
    ctx->pc = 0x2ae0a4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 21), 1));
label_2ae0a8:
    // 0x2ae0a8: 0x3d4f021
    ctx->pc = 0x2ae0a8u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
label_2ae0ac:
    // 0x2ae0ac: 0x14a082
    ctx->pc = 0x2ae0acu;
    SET_GPR_U32(ctx, 20, SRL32(GPR_U32(ctx, 20), 2));
label_2ae0b0:
    // 0x2ae0b0: 0x3c0202d
    ctx->pc = 0x2ae0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ae0b4:
    // 0x2ae0b4: 0x200282d
    ctx->pc = 0x2ae0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae0b8:
    // 0x2ae0b8: 0x240302d
    ctx->pc = 0x2ae0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ae0bc:
    // 0x2ae0bc: 0x8fa70038
    ctx->pc = 0x2ae0bcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2ae0c0:
    // 0x2ae0c0: 0x8fa80034
    ctx->pc = 0x2ae0c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2ae0c4:
    // 0x2ae0c4: 0x2c0482d
    ctx->pc = 0x2ae0c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ae0c8:
    // 0x2ae0c8: 0xc0ab572
label_2ae0cc:
    if (ctx->pc == 0x2AE0CCu) {
        ctx->pc = 0x2AE0CCu;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0D0u;
        goto label_2ae0d0;
    }
    ctx->pc = 0x2AE0C8u;
    SET_GPR_U32(ctx, 31, 0x2AE0D0u);
    ctx->pc = 0x2AE0CCu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TexDmaAppendTexture_0x2ad5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0D0u; }
    }
    if (ctx->pc != 0x2AE0D0u) { return; }
    ctx->pc = 0x2AE0D0u;
label_2ae0d0:
    // 0x2ae0d0: 0x26730001
    ctx->pc = 0x2ae0d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2ae0d4:
    // 0x2ae0d4: 0x92220002
    ctx->pc = 0x2ae0d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2ae0d8:
    // 0x2ae0d8: 0x262102a
    ctx->pc = 0x2ae0d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_2ae0dc:
    // 0x2ae0dc: 0x10400005
label_2ae0e0:
    if (ctx->pc == 0x2AE0E0u) {
        ctx->pc = 0x2AE0E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 8));
        ctx->pc = 0x2AE0E4u;
        goto label_2ae0e4;
    }
    ctx->pc = 0x2AE0DCu;
    {
        const bool branch_taken_0x2ae0dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE0E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 8));
        if (branch_taken_0x2ae0dc) {
            ctx->pc = 0x2AE0F4u;
            goto label_2ae0f4;
        }
    }
    ctx->pc = 0x2AE0E4u;
label_2ae0e4:
    // 0x2ae0e4: 0x14400003
label_2ae0e8:
    if (ctx->pc == 0x2AE0E8u) {
        ctx->pc = 0x2AE0E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 8));
        ctx->pc = 0x2AE0ECu;
        goto label_2ae0ec;
    }
    ctx->pc = 0x2AE0E4u;
    {
        const bool branch_taken_0x2ae0e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE0E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), 8));
        if (branch_taken_0x2ae0e4) {
            ctx->pc = 0x2AE0F4u;
            goto label_2ae0f4;
        }
    }
    ctx->pc = 0x2AE0ECu;
label_2ae0ec:
    // 0x2ae0ec: 0x1040ffc4
label_2ae0f0:
    if (ctx->pc == 0x2AE0F0u) {
        ctx->pc = 0x2AE0F0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 6));
        ctx->pc = 0x2AE0F4u;
        goto label_2ae0f4;
    }
    ctx->pc = 0x2AE0ECu;
    {
        const bool branch_taken_0x2ae0ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2AE0F0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 6));
        if (branch_taken_0x2ae0ec) {
            ctx->pc = 0x2AE000u;
            goto label_2ae000;
        }
    }
    ctx->pc = 0x2AE0F4u;
label_2ae0f4:
    // 0x2ae0f4: 0x8fa20030
    ctx->pc = 0x2ae0f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ae0f8:
    // 0x2ae0f8: 0xa6220038
    ctx->pc = 0x2ae0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 2));
label_2ae0fc:
    // 0x2ae0fc: 0xa637003c
    ctx->pc = 0x2ae0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 23));
label_2ae100:
    // 0x2ae100: 0x92230000
    ctx->pc = 0x2ae100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae104:
    // 0x2ae104: 0x24020038
    ctx->pc = 0x2ae104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
label_2ae108:
    // 0x2ae108: 0x14620013
label_2ae10c:
    if (ctx->pc == 0x2AE10Cu) {
        ctx->pc = 0x2AE10Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2AE110u;
        goto label_2ae110;
    }
    ctx->pc = 0x2AE108u;
    {
        const bool branch_taken_0x2ae108 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AE10Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2ae108) {
            ctx->pc = 0x2AE158u;
            goto label_2ae158;
        }
    }
    ctx->pc = 0x2AE110u;
label_2ae110:
    // 0x2ae110: 0x8e30000c
    ctx->pc = 0x2ae110u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ae114:
    // 0x2ae114: 0x26100200
    ctx->pc = 0x2ae114u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 512));
label_2ae118:
    // 0x2ae118: 0x8fa40024
    ctx->pc = 0x2ae118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ae11c:
    // 0x2ae11c: 0x641018
    ctx->pc = 0x2ae11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2ae120:
    // 0x2ae120: 0x2028021
    ctx->pc = 0x2ae120u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ae124:
    // 0x2ae124: 0x220202d
    ctx->pc = 0x2ae124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ae128:
    // 0x2ae128: 0x8fa5002c
    ctx->pc = 0x2ae128u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2ae12c:
    // 0x2ae12c: 0x60302d
    ctx->pc = 0x2ae12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ae130:
    // 0x2ae130: 0x8fa70024
    ctx->pc = 0x2ae130u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ae134:
    // 0x2ae134: 0x8fa80028
    ctx->pc = 0x2ae134u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2ae138:
    // 0x2ae138: 0xc0ab63c
label_2ae13c:
    if (ctx->pc == 0x2AE13Cu) {
        ctx->pc = 0x2AE13Cu;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2AE140u;
        goto label_2ae140;
    }
    ctx->pc = 0x2AE138u;
    SET_GPR_U32(ctx, 31, 0x2AE140u);
    ctx->pc = 0x2AE13Cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x2AD8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexTexXfer_0x2ad8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE140u; }
    }
    if (ctx->pc != 0x2AE140u) { return; }
    ctx->pc = 0x2AE140u;
label_2ae140:
    // 0x2ae140: 0x8fa40020
    ctx->pc = 0x2ae140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae144:
    // 0x2ae144: 0x8fa50024
    ctx->pc = 0x2ae144u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ae148:
    // 0x2ae148: 0x8fa60028
    ctx->pc = 0x2ae148u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2ae14c:
    // 0x2ae14c: 0x8fa70030
    ctx->pc = 0x2ae14cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2ae150:
    // 0x2ae150: 0xc0ab5c6
label_2ae154:
    if (ctx->pc == 0x2AE154u) {
        ctx->pc = 0x2AE154u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AE158u;
        goto label_2ae158;
    }
    ctx->pc = 0x2AE150u;
    SET_GPR_U32(ctx, 31, 0x2AE158u);
    ctx->pc = 0x2AE154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD718u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexAlphaXfer_0x2ad718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE158u; }
    }
    if (ctx->pc != 0x2AE158u) { return; }
    ctx->pc = 0x2AE158u;
label_2ae158:
    // 0x2ae158: 0x40044800
    ctx->pc = 0x2ae158u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
label_2ae15c:
    // 0x2ae15c: 0x3c03003a
    ctx->pc = 0x2ae15cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2ae160:
    // 0x2ae160: 0x24632050
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
label_2ae164:
    // 0x2ae164: 0x8c620088
    ctx->pc = 0x2ae164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2ae168:
    // 0x2ae168: 0x822023
    ctx->pc = 0x2ae168u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ae16c:
    // 0x2ae16c: 0x8c620080
    ctx->pc = 0x2ae16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2ae170:
    // 0x2ae170: 0x822021
    ctx->pc = 0x2ae170u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2ae174:
    // 0x2ae174: 0xac640080
    ctx->pc = 0x2ae174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
label_2ae178:
    // 0x2ae178: 0x8c620084
    ctx->pc = 0x2ae178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2ae17c:
    // 0x2ae17c: 0x24420001
    ctx->pc = 0x2ae17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2ae180:
    // 0x2ae180: 0xac620084
    ctx->pc = 0x2ae180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_2ae184:
    // 0x2ae184: 0x24020001
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2ae188:
    // 0x2ae188: 0xdfbf00d0
    ctx->pc = 0x2ae188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2ae18c:
    // 0x2ae18c: 0xdfbe00c0
    ctx->pc = 0x2ae18cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2ae190:
    // 0x2ae190: 0xdfb700b0
    ctx->pc = 0x2ae190u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2ae194:
    // 0x2ae194: 0xdfb600a0
    ctx->pc = 0x2ae194u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ae198:
    // 0x2ae198: 0xdfb50090
    ctx->pc = 0x2ae198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ae19c:
    // 0x2ae19c: 0xdfb40080
    ctx->pc = 0x2ae19cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2ae1a0:
    // 0x2ae1a0: 0xdfb30070
    ctx->pc = 0x2ae1a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ae1a4:
    // 0x2ae1a4: 0xdfb20060
    ctx->pc = 0x2ae1a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ae1a8:
    // 0x2ae1a8: 0xdfb10050
    ctx->pc = 0x2ae1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ae1ac:
    // 0x2ae1ac: 0xdfb00040
    ctx->pc = 0x2ae1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ae1b0:
    // 0x2ae1b0: 0x3e00008
label_2ae1b4:
    if (ctx->pc == 0x2AE1B4u) {
        ctx->pc = 0x2AE1B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2AE1B8u;
        goto label_fallthrough_0x2ae1b0;
    }
    ctx->pc = 0x2AE1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE1B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADB88u: goto label_2adb88;
            case 0x2ADB8Cu: goto label_2adb8c;
            case 0x2ADB90u: goto label_2adb90;
            case 0x2ADB94u: goto label_2adb94;
            case 0x2ADB98u: goto label_2adb98;
            case 0x2ADB9Cu: goto label_2adb9c;
            case 0x2ADBA0u: goto label_2adba0;
            case 0x2ADBA4u: goto label_2adba4;
            case 0x2ADBA8u: goto label_2adba8;
            case 0x2ADBACu: goto label_2adbac;
            case 0x2ADBB0u: goto label_2adbb0;
            case 0x2ADBB4u: goto label_2adbb4;
            case 0x2ADBB8u: goto label_2adbb8;
            case 0x2ADBBCu: goto label_2adbbc;
            case 0x2ADBC0u: goto label_2adbc0;
            case 0x2ADBC4u: goto label_2adbc4;
            case 0x2ADBC8u: goto label_2adbc8;
            case 0x2ADBCCu: goto label_2adbcc;
            case 0x2ADBD0u: goto label_2adbd0;
            case 0x2ADBD4u: goto label_2adbd4;
            case 0x2ADBD8u: goto label_2adbd8;
            case 0x2ADBDCu: goto label_2adbdc;
            case 0x2ADBE0u: goto label_2adbe0;
            case 0x2ADBE4u: goto label_2adbe4;
            case 0x2ADBE8u: goto label_2adbe8;
            case 0x2ADBECu: goto label_2adbec;
            case 0x2ADBF0u: goto label_2adbf0;
            case 0x2ADBF4u: goto label_2adbf4;
            case 0x2ADBF8u: goto label_2adbf8;
            case 0x2ADBFCu: goto label_2adbfc;
            case 0x2ADC00u: goto label_2adc00;
            case 0x2ADC04u: goto label_2adc04;
            case 0x2ADC08u: goto label_2adc08;
            case 0x2ADC0Cu: goto label_2adc0c;
            case 0x2ADC10u: goto label_2adc10;
            case 0x2ADC14u: goto label_2adc14;
            case 0x2ADC18u: goto label_2adc18;
            case 0x2ADC1Cu: goto label_2adc1c;
            case 0x2ADC20u: goto label_2adc20;
            case 0x2ADC24u: goto label_2adc24;
            case 0x2ADC28u: goto label_2adc28;
            case 0x2ADC2Cu: goto label_2adc2c;
            case 0x2ADC30u: goto label_2adc30;
            case 0x2ADC34u: goto label_2adc34;
            case 0x2ADC38u: goto label_2adc38;
            case 0x2ADC3Cu: goto label_2adc3c;
            case 0x2ADC40u: goto label_2adc40;
            case 0x2ADC44u: goto label_2adc44;
            case 0x2ADC48u: goto label_2adc48;
            case 0x2ADC4Cu: goto label_2adc4c;
            case 0x2ADC50u: goto label_2adc50;
            case 0x2ADC54u: goto label_2adc54;
            case 0x2ADC58u: goto label_2adc58;
            case 0x2ADC5Cu: goto label_2adc5c;
            case 0x2ADC60u: goto label_2adc60;
            case 0x2ADC64u: goto label_2adc64;
            case 0x2ADC68u: goto label_2adc68;
            case 0x2ADC6Cu: goto label_2adc6c;
            case 0x2ADC70u: goto label_2adc70;
            case 0x2ADC74u: goto label_2adc74;
            case 0x2ADC78u: goto label_2adc78;
            case 0x2ADC7Cu: goto label_2adc7c;
            case 0x2ADC80u: goto label_2adc80;
            case 0x2ADC84u: goto label_2adc84;
            case 0x2ADC88u: goto label_2adc88;
            case 0x2ADC8Cu: goto label_2adc8c;
            case 0x2ADC90u: goto label_2adc90;
            case 0x2ADC94u: goto label_2adc94;
            case 0x2ADC98u: goto label_2adc98;
            case 0x2ADC9Cu: goto label_2adc9c;
            case 0x2ADCA0u: goto label_2adca0;
            case 0x2ADCA4u: goto label_2adca4;
            case 0x2ADCA8u: goto label_2adca8;
            case 0x2ADCACu: goto label_2adcac;
            case 0x2ADCB0u: goto label_2adcb0;
            case 0x2ADCB4u: goto label_2adcb4;
            case 0x2ADCB8u: goto label_2adcb8;
            case 0x2ADCBCu: goto label_2adcbc;
            case 0x2ADCC0u: goto label_2adcc0;
            case 0x2ADCC4u: goto label_2adcc4;
            case 0x2ADCC8u: goto label_2adcc8;
            case 0x2ADCCCu: goto label_2adccc;
            case 0x2ADCD0u: goto label_2adcd0;
            case 0x2ADCD4u: goto label_2adcd4;
            case 0x2ADCD8u: goto label_2adcd8;
            case 0x2ADCDCu: goto label_2adcdc;
            case 0x2ADCE0u: goto label_2adce0;
            case 0x2ADCE4u: goto label_2adce4;
            case 0x2ADCE8u: goto label_2adce8;
            case 0x2ADCECu: goto label_2adcec;
            case 0x2ADCF0u: goto label_2adcf0;
            case 0x2ADCF4u: goto label_2adcf4;
            case 0x2ADCF8u: goto label_2adcf8;
            case 0x2ADCFCu: goto label_2adcfc;
            case 0x2ADD00u: goto label_2add00;
            case 0x2ADD04u: goto label_2add04;
            case 0x2ADD08u: goto label_2add08;
            case 0x2ADD0Cu: goto label_2add0c;
            case 0x2ADD10u: goto label_2add10;
            case 0x2ADD14u: goto label_2add14;
            case 0x2ADD18u: goto label_2add18;
            case 0x2ADD1Cu: goto label_2add1c;
            case 0x2ADD20u: goto label_2add20;
            case 0x2ADD24u: goto label_2add24;
            case 0x2ADD28u: goto label_2add28;
            case 0x2ADD2Cu: goto label_2add2c;
            case 0x2ADD30u: goto label_2add30;
            case 0x2ADD34u: goto label_2add34;
            case 0x2ADD38u: goto label_2add38;
            case 0x2ADD3Cu: goto label_2add3c;
            case 0x2ADD40u: goto label_2add40;
            case 0x2ADD44u: goto label_2add44;
            case 0x2ADD48u: goto label_2add48;
            case 0x2ADD4Cu: goto label_2add4c;
            case 0x2ADD50u: goto label_2add50;
            case 0x2ADD54u: goto label_2add54;
            case 0x2ADD58u: goto label_2add58;
            case 0x2ADD5Cu: goto label_2add5c;
            case 0x2ADD60u: goto label_2add60;
            case 0x2ADD64u: goto label_2add64;
            case 0x2ADD68u: goto label_2add68;
            case 0x2ADD6Cu: goto label_2add6c;
            case 0x2ADD70u: goto label_2add70;
            case 0x2ADD74u: goto label_2add74;
            case 0x2ADD78u: goto label_2add78;
            case 0x2ADD7Cu: goto label_2add7c;
            case 0x2ADD80u: goto label_2add80;
            case 0x2ADD84u: goto label_2add84;
            case 0x2ADD88u: goto label_2add88;
            case 0x2ADD8Cu: goto label_2add8c;
            case 0x2ADD90u: goto label_2add90;
            case 0x2ADD94u: goto label_2add94;
            case 0x2ADD98u: goto label_2add98;
            case 0x2ADD9Cu: goto label_2add9c;
            case 0x2ADDA0u: goto label_2adda0;
            case 0x2ADDA4u: goto label_2adda4;
            case 0x2ADDA8u: goto label_2adda8;
            case 0x2ADDACu: goto label_2addac;
            case 0x2ADDB0u: goto label_2addb0;
            case 0x2ADDB4u: goto label_2addb4;
            case 0x2ADDB8u: goto label_2addb8;
            case 0x2ADDBCu: goto label_2addbc;
            case 0x2ADDC0u: goto label_2addc0;
            case 0x2ADDC4u: goto label_2addc4;
            case 0x2ADDC8u: goto label_2addc8;
            case 0x2ADDCCu: goto label_2addcc;
            case 0x2ADDD0u: goto label_2addd0;
            case 0x2ADDD4u: goto label_2addd4;
            case 0x2ADDD8u: goto label_2addd8;
            case 0x2ADDDCu: goto label_2adddc;
            case 0x2ADDE0u: goto label_2adde0;
            case 0x2ADDE4u: goto label_2adde4;
            case 0x2ADDE8u: goto label_2adde8;
            case 0x2ADDECu: goto label_2addec;
            case 0x2ADDF0u: goto label_2addf0;
            case 0x2ADDF4u: goto label_2addf4;
            case 0x2ADDF8u: goto label_2addf8;
            case 0x2ADDFCu: goto label_2addfc;
            case 0x2ADE00u: goto label_2ade00;
            case 0x2ADE04u: goto label_2ade04;
            case 0x2ADE08u: goto label_2ade08;
            case 0x2ADE0Cu: goto label_2ade0c;
            case 0x2ADE10u: goto label_2ade10;
            case 0x2ADE14u: goto label_2ade14;
            case 0x2ADE18u: goto label_2ade18;
            case 0x2ADE1Cu: goto label_2ade1c;
            case 0x2ADE20u: goto label_2ade20;
            case 0x2ADE24u: goto label_2ade24;
            case 0x2ADE28u: goto label_2ade28;
            case 0x2ADE2Cu: goto label_2ade2c;
            case 0x2ADE30u: goto label_2ade30;
            case 0x2ADE34u: goto label_2ade34;
            case 0x2ADE38u: goto label_2ade38;
            case 0x2ADE3Cu: goto label_2ade3c;
            case 0x2ADE40u: goto label_2ade40;
            case 0x2ADE44u: goto label_2ade44;
            case 0x2ADE48u: goto label_2ade48;
            case 0x2ADE4Cu: goto label_2ade4c;
            case 0x2ADE50u: goto label_2ade50;
            case 0x2ADE54u: goto label_2ade54;
            case 0x2ADE58u: goto label_2ade58;
            case 0x2ADE5Cu: goto label_2ade5c;
            case 0x2ADE60u: goto label_2ade60;
            case 0x2ADE64u: goto label_2ade64;
            case 0x2ADE68u: goto label_2ade68;
            case 0x2ADE6Cu: goto label_2ade6c;
            case 0x2ADE70u: goto label_2ade70;
            case 0x2ADE74u: goto label_2ade74;
            case 0x2ADE78u: goto label_2ade78;
            case 0x2ADE7Cu: goto label_2ade7c;
            case 0x2ADE80u: goto label_2ade80;
            case 0x2ADE84u: goto label_2ade84;
            case 0x2ADE88u: goto label_2ade88;
            case 0x2ADE8Cu: goto label_2ade8c;
            case 0x2ADE90u: goto label_2ade90;
            case 0x2ADE94u: goto label_2ade94;
            case 0x2ADE98u: goto label_2ade98;
            case 0x2ADE9Cu: goto label_2ade9c;
            case 0x2ADEA0u: goto label_2adea0;
            case 0x2ADEA4u: goto label_2adea4;
            case 0x2ADEA8u: goto label_2adea8;
            case 0x2ADEACu: goto label_2adeac;
            case 0x2ADEB0u: goto label_2adeb0;
            case 0x2ADEB4u: goto label_2adeb4;
            case 0x2ADEB8u: goto label_2adeb8;
            case 0x2ADEBCu: goto label_2adebc;
            case 0x2ADEC0u: goto label_2adec0;
            case 0x2ADEC4u: goto label_2adec4;
            case 0x2ADEC8u: goto label_2adec8;
            case 0x2ADECCu: goto label_2adecc;
            case 0x2ADED0u: goto label_2aded0;
            case 0x2ADED4u: goto label_2aded4;
            case 0x2ADED8u: goto label_2aded8;
            case 0x2ADEDCu: goto label_2adedc;
            case 0x2ADEE0u: goto label_2adee0;
            case 0x2ADEE4u: goto label_2adee4;
            case 0x2ADEE8u: goto label_2adee8;
            case 0x2ADEECu: goto label_2adeec;
            case 0x2ADEF0u: goto label_2adef0;
            case 0x2ADEF4u: goto label_2adef4;
            case 0x2ADEF8u: goto label_2adef8;
            case 0x2ADEFCu: goto label_2adefc;
            case 0x2ADF00u: goto label_2adf00;
            case 0x2ADF04u: goto label_2adf04;
            case 0x2ADF08u: goto label_2adf08;
            case 0x2ADF0Cu: goto label_2adf0c;
            case 0x2ADF10u: goto label_2adf10;
            case 0x2ADF14u: goto label_2adf14;
            case 0x2ADF18u: goto label_2adf18;
            case 0x2ADF1Cu: goto label_2adf1c;
            case 0x2ADF20u: goto label_2adf20;
            case 0x2ADF24u: goto label_2adf24;
            case 0x2ADF28u: goto label_2adf28;
            case 0x2ADF2Cu: goto label_2adf2c;
            case 0x2ADF30u: goto label_2adf30;
            case 0x2ADF34u: goto label_2adf34;
            case 0x2ADF38u: goto label_2adf38;
            case 0x2ADF3Cu: goto label_2adf3c;
            case 0x2ADF40u: goto label_2adf40;
            case 0x2ADF44u: goto label_2adf44;
            case 0x2ADF48u: goto label_2adf48;
            case 0x2ADF4Cu: goto label_2adf4c;
            case 0x2ADF50u: goto label_2adf50;
            case 0x2ADF54u: goto label_2adf54;
            case 0x2ADF58u: goto label_2adf58;
            case 0x2ADF5Cu: goto label_2adf5c;
            case 0x2ADF60u: goto label_2adf60;
            case 0x2ADF64u: goto label_2adf64;
            case 0x2ADF68u: goto label_2adf68;
            case 0x2ADF6Cu: goto label_2adf6c;
            case 0x2ADF70u: goto label_2adf70;
            case 0x2ADF74u: goto label_2adf74;
            case 0x2ADF78u: goto label_2adf78;
            case 0x2ADF7Cu: goto label_2adf7c;
            case 0x2ADF80u: goto label_2adf80;
            case 0x2ADF84u: goto label_2adf84;
            case 0x2ADF88u: goto label_2adf88;
            case 0x2ADF8Cu: goto label_2adf8c;
            case 0x2ADF90u: goto label_2adf90;
            case 0x2ADF94u: goto label_2adf94;
            case 0x2ADF98u: goto label_2adf98;
            case 0x2ADF9Cu: goto label_2adf9c;
            case 0x2ADFA0u: goto label_2adfa0;
            case 0x2ADFA4u: goto label_2adfa4;
            case 0x2ADFA8u: goto label_2adfa8;
            case 0x2ADFACu: goto label_2adfac;
            case 0x2ADFB0u: goto label_2adfb0;
            case 0x2ADFB4u: goto label_2adfb4;
            case 0x2ADFB8u: goto label_2adfb8;
            case 0x2ADFBCu: goto label_2adfbc;
            case 0x2ADFC0u: goto label_2adfc0;
            case 0x2ADFC4u: goto label_2adfc4;
            case 0x2ADFC8u: goto label_2adfc8;
            case 0x2ADFCCu: goto label_2adfcc;
            case 0x2ADFD0u: goto label_2adfd0;
            case 0x2ADFD4u: goto label_2adfd4;
            case 0x2ADFD8u: goto label_2adfd8;
            case 0x2ADFDCu: goto label_2adfdc;
            case 0x2ADFE0u: goto label_2adfe0;
            case 0x2ADFE4u: goto label_2adfe4;
            case 0x2ADFE8u: goto label_2adfe8;
            case 0x2ADFECu: goto label_2adfec;
            case 0x2ADFF0u: goto label_2adff0;
            case 0x2ADFF4u: goto label_2adff4;
            case 0x2ADFF8u: goto label_2adff8;
            case 0x2ADFFCu: goto label_2adffc;
            case 0x2AE000u: goto label_2ae000;
            case 0x2AE004u: goto label_2ae004;
            case 0x2AE008u: goto label_2ae008;
            case 0x2AE00Cu: goto label_2ae00c;
            case 0x2AE010u: goto label_2ae010;
            case 0x2AE014u: goto label_2ae014;
            case 0x2AE018u: goto label_2ae018;
            case 0x2AE01Cu: goto label_2ae01c;
            case 0x2AE020u: goto label_2ae020;
            case 0x2AE024u: goto label_2ae024;
            case 0x2AE028u: goto label_2ae028;
            case 0x2AE02Cu: goto label_2ae02c;
            case 0x2AE030u: goto label_2ae030;
            case 0x2AE034u: goto label_2ae034;
            case 0x2AE038u: goto label_2ae038;
            case 0x2AE03Cu: goto label_2ae03c;
            case 0x2AE040u: goto label_2ae040;
            case 0x2AE044u: goto label_2ae044;
            case 0x2AE048u: goto label_2ae048;
            case 0x2AE04Cu: goto label_2ae04c;
            case 0x2AE050u: goto label_2ae050;
            case 0x2AE054u: goto label_2ae054;
            case 0x2AE058u: goto label_2ae058;
            case 0x2AE05Cu: goto label_2ae05c;
            case 0x2AE060u: goto label_2ae060;
            case 0x2AE064u: goto label_2ae064;
            case 0x2AE068u: goto label_2ae068;
            case 0x2AE06Cu: goto label_2ae06c;
            case 0x2AE070u: goto label_2ae070;
            case 0x2AE074u: goto label_2ae074;
            case 0x2AE078u: goto label_2ae078;
            case 0x2AE07Cu: goto label_2ae07c;
            case 0x2AE080u: goto label_2ae080;
            case 0x2AE084u: goto label_2ae084;
            case 0x2AE088u: goto label_2ae088;
            case 0x2AE08Cu: goto label_2ae08c;
            case 0x2AE090u: goto label_2ae090;
            case 0x2AE094u: goto label_2ae094;
            case 0x2AE098u: goto label_2ae098;
            case 0x2AE09Cu: goto label_2ae09c;
            case 0x2AE0A0u: goto label_2ae0a0;
            case 0x2AE0A4u: goto label_2ae0a4;
            case 0x2AE0A8u: goto label_2ae0a8;
            case 0x2AE0ACu: goto label_2ae0ac;
            case 0x2AE0B0u: goto label_2ae0b0;
            case 0x2AE0B4u: goto label_2ae0b4;
            case 0x2AE0B8u: goto label_2ae0b8;
            case 0x2AE0BCu: goto label_2ae0bc;
            case 0x2AE0C0u: goto label_2ae0c0;
            case 0x2AE0C4u: goto label_2ae0c4;
            case 0x2AE0C8u: goto label_2ae0c8;
            case 0x2AE0CCu: goto label_2ae0cc;
            case 0x2AE0D0u: goto label_2ae0d0;
            case 0x2AE0D4u: goto label_2ae0d4;
            case 0x2AE0D8u: goto label_2ae0d8;
            case 0x2AE0DCu: goto label_2ae0dc;
            case 0x2AE0E0u: goto label_2ae0e0;
            case 0x2AE0E4u: goto label_2ae0e4;
            case 0x2AE0E8u: goto label_2ae0e8;
            case 0x2AE0ECu: goto label_2ae0ec;
            case 0x2AE0F0u: goto label_2ae0f0;
            case 0x2AE0F4u: goto label_2ae0f4;
            case 0x2AE0F8u: goto label_2ae0f8;
            case 0x2AE0FCu: goto label_2ae0fc;
            case 0x2AE100u: goto label_2ae100;
            case 0x2AE104u: goto label_2ae104;
            case 0x2AE108u: goto label_2ae108;
            case 0x2AE10Cu: goto label_2ae10c;
            case 0x2AE110u: goto label_2ae110;
            case 0x2AE114u: goto label_2ae114;
            case 0x2AE118u: goto label_2ae118;
            case 0x2AE11Cu: goto label_2ae11c;
            case 0x2AE120u: goto label_2ae120;
            case 0x2AE124u: goto label_2ae124;
            case 0x2AE128u: goto label_2ae128;
            case 0x2AE12Cu: goto label_2ae12c;
            case 0x2AE130u: goto label_2ae130;
            case 0x2AE134u: goto label_2ae134;
            case 0x2AE138u: goto label_2ae138;
            case 0x2AE13Cu: goto label_2ae13c;
            case 0x2AE140u: goto label_2ae140;
            case 0x2AE144u: goto label_2ae144;
            case 0x2AE148u: goto label_2ae148;
            case 0x2AE14Cu: goto label_2ae14c;
            case 0x2AE150u: goto label_2ae150;
            case 0x2AE154u: goto label_2ae154;
            case 0x2AE158u: goto label_2ae158;
            case 0x2AE15Cu: goto label_2ae15c;
            case 0x2AE160u: goto label_2ae160;
            case 0x2AE164u: goto label_2ae164;
            case 0x2AE168u: goto label_2ae168;
            case 0x2AE16Cu: goto label_2ae16c;
            case 0x2AE170u: goto label_2ae170;
            case 0x2AE174u: goto label_2ae174;
            case 0x2AE178u: goto label_2ae178;
            case 0x2AE17Cu: goto label_2ae17c;
            case 0x2AE180u: goto label_2ae180;
            case 0x2AE184u: goto label_2ae184;
            case 0x2AE188u: goto label_2ae188;
            case 0x2AE18Cu: goto label_2ae18c;
            case 0x2AE190u: goto label_2ae190;
            case 0x2AE194u: goto label_2ae194;
            case 0x2AE198u: goto label_2ae198;
            case 0x2AE19Cu: goto label_2ae19c;
            case 0x2AE1A0u: goto label_2ae1a0;
            case 0x2AE1A4u: goto label_2ae1a4;
            case 0x2AE1A8u: goto label_2ae1a8;
            case 0x2AE1ACu: goto label_2ae1ac;
            case 0x2AE1B0u: goto label_2ae1b0;
            case 0x2AE1B4u: goto label_2ae1b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x2ae1b0:
    ctx->pc = 0x2AE1B8u;
}
