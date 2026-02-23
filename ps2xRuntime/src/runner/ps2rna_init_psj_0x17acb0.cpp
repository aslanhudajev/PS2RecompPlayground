#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ps2rna_init_psj
// Address: 0x17acb0 - 0x17aed0
void ps2rna_init_psj_0x17acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2rna_init_psj");


    ctx->pc = 0x17acb0u;

label_17acb0:
    // 0x17acb0: 0x27bdffa0
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_17acb4:
    // 0x17acb4: 0x8f8282c4
    ctx->pc = 0x17acb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935236)));
label_17acb8:
    // 0x17acb8: 0xffbf0050
    ctx->pc = 0x17acb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17acbc:
    // 0x17acbc: 0xffb40040
    ctx->pc = 0x17acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_17acc0:
    // 0x17acc0: 0xffb30030
    ctx->pc = 0x17acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_17acc4:
    // 0x17acc4: 0xffb20020
    ctx->pc = 0x17acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17acc8:
    // 0x17acc8: 0xffb10010
    ctx->pc = 0x17acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17accc:
    // 0x17accc: 0x1440000c
label_17acd0:
    if (ctx->pc == 0x17ACD0u) {
        ctx->pc = 0x17ACD0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x17ACD4u;
        goto label_17acd4;
    }
    ctx->pc = 0x17ACCCu;
    {
        const bool branch_taken_0x17accc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17ACD0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x17accc) {
            ctx->pc = 0x17AD00u;
            goto label_17ad00;
        }
    }
    ctx->pc = 0x17ACD4u;
label_17acd4:
    // 0x17acd4: 0x8f8482c0
    ctx->pc = 0x17acd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935232)));
label_17acd8:
    // 0x17acd8: 0xc056dba
label_17acdc:
    if (ctx->pc == 0x17ACDCu) {
        ctx->pc = 0x17ACDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x17ACE0u;
        goto label_17ace0;
    }
    ctx->pc = 0x17ACD8u;
    SET_GPR_U32(ctx, 31, 0x17ACE0u);
    ctx->pc = 0x17ACDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    ctx->pc = 0x15B6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x15b6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ACE0u; }
        else if (ctx->pc != 0x17ACE0u) { ctx->pc = 0x17ACE0u; }
    }
    if (ctx->pc != 0x17ACE0u) { return; }
    ctx->pc = 0x17ACE0u;
label_17ace0:
    // 0x17ace0: 0x3c03ffff
    ctx->pc = 0x17ace0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_17ace4:
    // 0x17ace4: 0x24440040
    ctx->pc = 0x17ace4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
label_17ace8:
    // 0x17ace8: 0x3463ffc0
    ctx->pc = 0x17ace8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65472));
label_17acec:
    // 0x17acec: 0x24050001
    ctx->pc = 0x17acecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_17acf0:
    // 0x17acf0: 0x832024
    ctx->pc = 0x17acf0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17acf4:
    // 0x17acf4: 0xa38582cc
    ctx->pc = 0x17acf4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935244), (uint8_t)GPR_U32(ctx, 5));
label_17acf8:
    // 0x17acf8: 0xaf8482c8
    ctx->pc = 0x17acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935240), GPR_U32(ctx, 4));
label_17acfc:
    // 0x17acfc: 0xaf8282c4
    ctx->pc = 0x17acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935236), GPR_U32(ctx, 2));
label_17ad00:
    // 0x17ad00: 0x3c140024
    ctx->pc = 0x17ad00u;
    SET_GPR_U32(ctx, 20, ((uint32_t)36 << 16));
label_17ad04:
    // 0x17ad04: 0x282d
    ctx->pc = 0x17ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad08:
    // 0x17ad08: 0x2684d7e0
    ctx->pc = 0x17ad08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 4294957024));
label_17ad0c:
    // 0x17ad0c: 0xc050cfe
label_17ad10:
    if (ctx->pc == 0x17AD10u) {
        ctx->pc = 0x17AD10u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x17AD14u;
        goto label_17ad14;
    }
    ctx->pc = 0x17AD0Cu;
    SET_GPR_U32(ctx, 31, 0x17AD14u);
    ctx->pc = 0x17AD10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD14u; }
        else if (ctx->pc != 0x17AD14u) { ctx->pc = 0x17AD14u; }
    }
    if (ctx->pc != 0x17AD14u) { return; }
    ctx->pc = 0x17AD14u;
label_17ad14:
    // 0x17ad14: 0x902d
    ctx->pc = 0x17ad14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad18:
    // 0x17ad18: 0x8f8282bc
    ctx->pc = 0x17ad18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_17ad1c:
    // 0x17ad1c: 0x18400064
label_17ad20:
    if (ctx->pc == 0x17AD20u) {
        ctx->pc = 0x17AD20u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935240)));
        ctx->pc = 0x17AD24u;
        goto label_17ad24;
    }
    ctx->pc = 0x17AD1Cu;
    {
        const bool branch_taken_0x17ad1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17AD20u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935240)));
        if (branch_taken_0x17ad1c) {
            ctx->pc = 0x17AEB0u;
            goto label_17aeb0;
        }
    }
    ctx->pc = 0x17AD24u;
label_17ad24:
    // 0x17ad24: 0x3c130024
    ctx->pc = 0x17ad24u;
    SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
label_17ad28:
    // 0x17ad28: 0x24020018
    ctx->pc = 0x17ad28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_17ad2c:
    // 0x17ad2c: 0x0
    ctx->pc = 0x17ad2cu;
    // NOP
label_17ad30:
    // 0x17ad30: 0x2683d7e0
    ctx->pc = 0x17ad30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 20), 4294957024));
label_17ad34:
    // 0x17ad34: 0x2421018
    ctx->pc = 0x17ad34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_17ad38:
    // 0x17ad38: 0x3224003f
    ctx->pc = 0x17ad38u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 17), 63));
label_17ad3c:
    // 0x17ad3c: 0x438021
    ctx->pc = 0x17ad3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ad40:
    // 0x17ad40: 0x1080000c
label_17ad44:
    if (ctx->pc == 0x17AD44u) {
        ctx->pc = 0x17AD44u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17AD48u;
        goto label_17ad48;
    }
    ctx->pc = 0x17AD40u;
    {
        const bool branch_taken_0x17ad40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AD44u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x17ad40) {
            ctx->pc = 0x17AD74u;
            goto label_17ad74;
        }
    }
    ctx->pc = 0x17AD48u;
label_17ad48:
    // 0x17ad48: 0x3c04002c
    ctx->pc = 0x17ad48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17ad4c:
    // 0x17ad4c: 0xc05114a
label_17ad50:
    if (ctx->pc == 0x17AD50u) {
        ctx->pc = 0x17AD50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949864));
        ctx->pc = 0x17AD54u;
        goto label_17ad54;
    }
    ctx->pc = 0x17AD4Cu;
    SET_GPR_U32(ctx, 31, 0x17AD54u);
    ctx->pc = 0x17AD50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949864));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD54u; }
        else if (ctx->pc != 0x17AD54u) { ctx->pc = 0x17AD54u; }
    }
    if (ctx->pc != 0x17AD54u) { return; }
    ctx->pc = 0x17AD54u;
label_17ad54:
    // 0x17ad54: 0x0
    ctx->pc = 0x17ad54u;
    // NOP
label_17ad58:
    // 0x17ad58: 0x0
    ctx->pc = 0x17ad58u;
    // NOP
label_17ad5c:
    // 0x17ad5c: 0x0
    ctx->pc = 0x17ad5cu;
    // NOP
label_17ad60:
    // 0x17ad60: 0x0
    ctx->pc = 0x17ad60u;
    // NOP
label_17ad64:
    // 0x17ad64: 0x0
    ctx->pc = 0x17ad64u;
    // NOP
label_17ad68:
    // 0x17ad68: 0x0
    ctx->pc = 0x17ad68u;
    // NOP
label_17ad6c:
    // 0x17ad6c: 0x1000fffa
label_17ad70:
    if (ctx->pc == 0x17AD70u) {
        ctx->pc = 0x17AD74u;
        goto label_17ad74;
    }
    ctx->pc = 0x17AD6Cu;
    {
        const bool branch_taken_0x17ad6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ad6c) {
            ctx->pc = 0x17AD58u;
            goto label_17ad58;
        }
    }
    ctx->pc = 0x17AD74u;
label_17ad74:
    // 0x17ad74: 0x24040001
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_17ad78:
    // 0x17ad78: 0x220282d
    ctx->pc = 0x17ad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17ad7c:
    // 0x17ad7c: 0xc05f4f0
label_17ad80:
    if (ctx->pc == 0x17AD80u) {
        ctx->pc = 0x17AD80u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x17AD84u;
        goto label_17ad84;
    }
    ctx->pc = 0x17AD7Cu;
    SET_GPR_U32(ctx, 31, 0x17AD84u);
    ctx->pc = 0x17AD80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x17D3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_CreateRmt_0x17d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD84u; }
        else if (ctx->pc != 0x17AD84u) { ctx->pc = 0x17AD84u; }
    }
    if (ctx->pc != 0x17AD84u) { return; }
    ctx->pc = 0x17AD84u;
label_17ad84:
    // 0x17ad84: 0x1440000b
label_17ad88:
    if (ctx->pc == 0x17AD88u) {
        ctx->pc = 0x17AD88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x17AD8Cu;
        goto label_17ad8c;
    }
    ctx->pc = 0x17AD84u;
    {
        const bool branch_taken_0x17ad84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AD88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x17ad84) {
            ctx->pc = 0x17ADB4u;
            goto label_17adb4;
        }
    }
    ctx->pc = 0x17AD8Cu;
label_17ad8c:
    // 0x17ad8c: 0x3c04002c
    ctx->pc = 0x17ad8cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17ad90:
    // 0x17ad90: 0xc05114a
label_17ad94:
    if (ctx->pc == 0x17AD94u) {
        ctx->pc = 0x17AD94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949912));
        ctx->pc = 0x17AD98u;
        goto label_17ad98;
    }
    ctx->pc = 0x17AD90u;
    SET_GPR_U32(ctx, 31, 0x17AD98u);
    ctx->pc = 0x17AD94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949912));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AD98u; }
        else if (ctx->pc != 0x17AD98u) { ctx->pc = 0x17AD98u; }
    }
    if (ctx->pc != 0x17AD98u) { return; }
    ctx->pc = 0x17AD98u;
label_17ad98:
    // 0x17ad98: 0x0
    ctx->pc = 0x17ad98u;
    // NOP
label_17ad9c:
    // 0x17ad9c: 0x0
    ctx->pc = 0x17ad9cu;
    // NOP
label_17ada0:
    // 0x17ada0: 0x0
    ctx->pc = 0x17ada0u;
    // NOP
label_17ada4:
    // 0x17ada4: 0x0
    ctx->pc = 0x17ada4u;
    // NOP
label_17ada8:
    // 0x17ada8: 0x0
    ctx->pc = 0x17ada8u;
    // NOP
label_17adac:
    // 0x17adac: 0x1000fffa
label_17adb0:
    if (ctx->pc == 0x17ADB0u) {
        ctx->pc = 0x17ADB4u;
        goto label_17adb4;
    }
    ctx->pc = 0x17ADACu;
    {
        const bool branch_taken_0x17adac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17adac) {
            ctx->pc = 0x17AD98u;
            goto label_17ad98;
        }
    }
    ctx->pc = 0x17ADB4u;
label_17adb4:
    // 0x17adb4: 0x26310100
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 256));
label_17adb8:
    // 0x17adb8: 0x3222003f
    ctx->pc = 0x17adb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 63));
label_17adbc:
    // 0x17adbc: 0x1040000b
label_17adc0:
    if (ctx->pc == 0x17ADC0u) {
        ctx->pc = 0x17ADC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x17ADC4u;
        goto label_17adc4;
    }
    ctx->pc = 0x17ADBCu;
    {
        const bool branch_taken_0x17adbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17ADC0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x17adbc) {
            ctx->pc = 0x17ADECu;
            goto label_17adec;
        }
    }
    ctx->pc = 0x17ADC4u;
label_17adc4:
    // 0x17adc4: 0xc05114a
label_17adc8:
    if (ctx->pc == 0x17ADC8u) {
        ctx->pc = 0x17ADC8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949968));
        ctx->pc = 0x17ADCCu;
        goto label_17adcc;
    }
    ctx->pc = 0x17ADC4u;
    SET_GPR_U32(ctx, 31, 0x17ADCCu);
    ctx->pc = 0x17ADC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949968));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ADCCu; }
        else if (ctx->pc != 0x17ADCCu) { ctx->pc = 0x17ADCCu; }
    }
    if (ctx->pc != 0x17ADCCu) { return; }
    ctx->pc = 0x17ADCCu;
label_17adcc:
    // 0x17adcc: 0x0
    ctx->pc = 0x17adccu;
    // NOP
label_17add0:
    // 0x17add0: 0x0
    ctx->pc = 0x17add0u;
    // NOP
label_17add4:
    // 0x17add4: 0x0
    ctx->pc = 0x17add4u;
    // NOP
label_17add8:
    // 0x17add8: 0x0
    ctx->pc = 0x17add8u;
    // NOP
label_17addc:
    // 0x17addc: 0x0
    ctx->pc = 0x17addcu;
    // NOP
label_17ade0:
    // 0x17ade0: 0x0
    ctx->pc = 0x17ade0u;
    // NOP
label_17ade4:
    // 0x17ade4: 0x1000fffa
label_17ade8:
    if (ctx->pc == 0x17ADE8u) {
        ctx->pc = 0x17ADECu;
        goto label_17adec;
    }
    ctx->pc = 0x17ADE4u;
    {
        const bool branch_taken_0x17ade4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ade4) {
            ctx->pc = 0x17ADD0u;
            goto label_17add0;
        }
    }
    ctx->pc = 0x17ADECu;
label_17adec:
    // 0x17adec: 0x121200
    ctx->pc = 0x17adecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 8));
label_17adf0:
    // 0x17adf0: 0x2665d8a0
    ctx->pc = 0x17adf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 4294957216));
label_17adf4:
    // 0x17adf4: 0x452821
    ctx->pc = 0x17adf4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17adf8:
    // 0x17adf8: 0x24040001
    ctx->pc = 0x17adf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_17adfc:
    // 0x17adfc: 0xc05f2e6
label_17ae00:
    if (ctx->pc == 0x17AE00u) {
        ctx->pc = 0x17AE00u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x17AE04u;
        goto label_17ae04;
    }
    ctx->pc = 0x17ADFCu;
    SET_GPR_U32(ctx, 31, 0x17AE04u);
    ctx->pc = 0x17AE00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x17CB98u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_Create_0x17cb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE04u; }
        else if (ctx->pc != 0x17AE04u) { ctx->pc = 0x17AE04u; }
    }
    if (ctx->pc != 0x17AE04u) { return; }
    ctx->pc = 0x17AE04u;
label_17ae04:
    // 0x17ae04: 0x1440000b
label_17ae08:
    if (ctx->pc == 0x17AE08u) {
        ctx->pc = 0x17AE08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x17AE0Cu;
        goto label_17ae0c;
    }
    ctx->pc = 0x17AE04u;
    {
        const bool branch_taken_0x17ae04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AE08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x17ae04) {
            ctx->pc = 0x17AE34u;
            goto label_17ae34;
        }
    }
    ctx->pc = 0x17AE0Cu;
label_17ae0c:
    // 0x17ae0c: 0x3c04002c
    ctx->pc = 0x17ae0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17ae10:
    // 0x17ae10: 0xc05114a
label_17ae14:
    if (ctx->pc == 0x17AE14u) {
        ctx->pc = 0x17AE14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950016));
        ctx->pc = 0x17AE18u;
        goto label_17ae18;
    }
    ctx->pc = 0x17AE10u;
    SET_GPR_U32(ctx, 31, 0x17AE18u);
    ctx->pc = 0x17AE14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950016));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE18u; }
        else if (ctx->pc != 0x17AE18u) { ctx->pc = 0x17AE18u; }
    }
    if (ctx->pc != 0x17AE18u) { return; }
    ctx->pc = 0x17AE18u;
label_17ae18:
    // 0x17ae18: 0x0
    ctx->pc = 0x17ae18u;
    // NOP
label_17ae1c:
    // 0x17ae1c: 0x0
    ctx->pc = 0x17ae1cu;
    // NOP
label_17ae20:
    // 0x17ae20: 0x0
    ctx->pc = 0x17ae20u;
    // NOP
label_17ae24:
    // 0x17ae24: 0x0
    ctx->pc = 0x17ae24u;
    // NOP
label_17ae28:
    // 0x17ae28: 0x0
    ctx->pc = 0x17ae28u;
    // NOP
label_17ae2c:
    // 0x17ae2c: 0x1000fffa
label_17ae30:
    if (ctx->pc == 0x17AE30u) {
        ctx->pc = 0x17AE34u;
        goto label_17ae34;
    }
    ctx->pc = 0x17AE2Cu;
    {
        const bool branch_taken_0x17ae2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ae2c) {
            ctx->pc = 0x17AE18u;
            goto label_17ae18;
        }
    }
    ctx->pc = 0x17AE34u;
label_17ae34:
    // 0x17ae34: 0x8e040008
    ctx->pc = 0x17ae34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17ae38:
    // 0x17ae38: 0x24024000
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
label_17ae3c:
    // 0x17ae3c: 0xae020014
    ctx->pc = 0x17ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_17ae40:
    // 0x17ae40: 0x282d
    ctx->pc = 0x17ae40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ae44:
    // 0x17ae44: 0x8c830000
    ctx->pc = 0x17ae44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ae48:
    // 0x17ae48: 0x26060010
    ctx->pc = 0x17ae48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 16));
label_17ae4c:
    // 0x17ae4c: 0xae110010
    ctx->pc = 0x17ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_17ae50:
    // 0x17ae50: 0x8c620020
    ctx->pc = 0x17ae50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17ae54:
    // 0x17ae54: 0x40f809
label_17ae58:
    if (ctx->pc == 0x17AE58u) {
        ctx->pc = 0x17AE58u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16384));
        ctx->pc = 0x17AE5Cu;
        goto label_17ae5c;
    }
    ctx->pc = 0x17AE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17AE5Cu);
        ctx->pc = 0x17AE58u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ACB0u: goto label_17acb0;
            case 0x17ACB4u: goto label_17acb4;
            case 0x17ACB8u: goto label_17acb8;
            case 0x17ACBCu: goto label_17acbc;
            case 0x17ACC0u: goto label_17acc0;
            case 0x17ACC4u: goto label_17acc4;
            case 0x17ACC8u: goto label_17acc8;
            case 0x17ACCCu: goto label_17accc;
            case 0x17ACD0u: goto label_17acd0;
            case 0x17ACD4u: goto label_17acd4;
            case 0x17ACD8u: goto label_17acd8;
            case 0x17ACDCu: goto label_17acdc;
            case 0x17ACE0u: goto label_17ace0;
            case 0x17ACE4u: goto label_17ace4;
            case 0x17ACE8u: goto label_17ace8;
            case 0x17ACECu: goto label_17acec;
            case 0x17ACF0u: goto label_17acf0;
            case 0x17ACF4u: goto label_17acf4;
            case 0x17ACF8u: goto label_17acf8;
            case 0x17ACFCu: goto label_17acfc;
            case 0x17AD00u: goto label_17ad00;
            case 0x17AD04u: goto label_17ad04;
            case 0x17AD08u: goto label_17ad08;
            case 0x17AD0Cu: goto label_17ad0c;
            case 0x17AD10u: goto label_17ad10;
            case 0x17AD14u: goto label_17ad14;
            case 0x17AD18u: goto label_17ad18;
            case 0x17AD1Cu: goto label_17ad1c;
            case 0x17AD20u: goto label_17ad20;
            case 0x17AD24u: goto label_17ad24;
            case 0x17AD28u: goto label_17ad28;
            case 0x17AD2Cu: goto label_17ad2c;
            case 0x17AD30u: goto label_17ad30;
            case 0x17AD34u: goto label_17ad34;
            case 0x17AD38u: goto label_17ad38;
            case 0x17AD3Cu: goto label_17ad3c;
            case 0x17AD40u: goto label_17ad40;
            case 0x17AD44u: goto label_17ad44;
            case 0x17AD48u: goto label_17ad48;
            case 0x17AD4Cu: goto label_17ad4c;
            case 0x17AD50u: goto label_17ad50;
            case 0x17AD54u: goto label_17ad54;
            case 0x17AD58u: goto label_17ad58;
            case 0x17AD5Cu: goto label_17ad5c;
            case 0x17AD60u: goto label_17ad60;
            case 0x17AD64u: goto label_17ad64;
            case 0x17AD68u: goto label_17ad68;
            case 0x17AD6Cu: goto label_17ad6c;
            case 0x17AD70u: goto label_17ad70;
            case 0x17AD74u: goto label_17ad74;
            case 0x17AD78u: goto label_17ad78;
            case 0x17AD7Cu: goto label_17ad7c;
            case 0x17AD80u: goto label_17ad80;
            case 0x17AD84u: goto label_17ad84;
            case 0x17AD88u: goto label_17ad88;
            case 0x17AD8Cu: goto label_17ad8c;
            case 0x17AD90u: goto label_17ad90;
            case 0x17AD94u: goto label_17ad94;
            case 0x17AD98u: goto label_17ad98;
            case 0x17AD9Cu: goto label_17ad9c;
            case 0x17ADA0u: goto label_17ada0;
            case 0x17ADA4u: goto label_17ada4;
            case 0x17ADA8u: goto label_17ada8;
            case 0x17ADACu: goto label_17adac;
            case 0x17ADB0u: goto label_17adb0;
            case 0x17ADB4u: goto label_17adb4;
            case 0x17ADB8u: goto label_17adb8;
            case 0x17ADBCu: goto label_17adbc;
            case 0x17ADC0u: goto label_17adc0;
            case 0x17ADC4u: goto label_17adc4;
            case 0x17ADC8u: goto label_17adc8;
            case 0x17ADCCu: goto label_17adcc;
            case 0x17ADD0u: goto label_17add0;
            case 0x17ADD4u: goto label_17add4;
            case 0x17ADD8u: goto label_17add8;
            case 0x17ADDCu: goto label_17addc;
            case 0x17ADE0u: goto label_17ade0;
            case 0x17ADE4u: goto label_17ade4;
            case 0x17ADE8u: goto label_17ade8;
            case 0x17ADECu: goto label_17adec;
            case 0x17ADF0u: goto label_17adf0;
            case 0x17ADF4u: goto label_17adf4;
            case 0x17ADF8u: goto label_17adf8;
            case 0x17ADFCu: goto label_17adfc;
            case 0x17AE00u: goto label_17ae00;
            case 0x17AE04u: goto label_17ae04;
            case 0x17AE08u: goto label_17ae08;
            case 0x17AE0Cu: goto label_17ae0c;
            case 0x17AE10u: goto label_17ae10;
            case 0x17AE14u: goto label_17ae14;
            case 0x17AE18u: goto label_17ae18;
            case 0x17AE1Cu: goto label_17ae1c;
            case 0x17AE20u: goto label_17ae20;
            case 0x17AE24u: goto label_17ae24;
            case 0x17AE28u: goto label_17ae28;
            case 0x17AE2Cu: goto label_17ae2c;
            case 0x17AE30u: goto label_17ae30;
            case 0x17AE34u: goto label_17ae34;
            case 0x17AE38u: goto label_17ae38;
            case 0x17AE3Cu: goto label_17ae3c;
            case 0x17AE40u: goto label_17ae40;
            case 0x17AE44u: goto label_17ae44;
            case 0x17AE48u: goto label_17ae48;
            case 0x17AE4Cu: goto label_17ae4c;
            case 0x17AE50u: goto label_17ae50;
            case 0x17AE54u: goto label_17ae54;
            case 0x17AE58u: goto label_17ae58;
            case 0x17AE5Cu: goto label_17ae5c;
            case 0x17AE60u: goto label_17ae60;
            case 0x17AE64u: goto label_17ae64;
            case 0x17AE68u: goto label_17ae68;
            case 0x17AE6Cu: goto label_17ae6c;
            case 0x17AE70u: goto label_17ae70;
            case 0x17AE74u: goto label_17ae74;
            case 0x17AE78u: goto label_17ae78;
            case 0x17AE7Cu: goto label_17ae7c;
            case 0x17AE80u: goto label_17ae80;
            case 0x17AE84u: goto label_17ae84;
            case 0x17AE88u: goto label_17ae88;
            case 0x17AE8Cu: goto label_17ae8c;
            case 0x17AE90u: goto label_17ae90;
            case 0x17AE94u: goto label_17ae94;
            case 0x17AE98u: goto label_17ae98;
            case 0x17AE9Cu: goto label_17ae9c;
            case 0x17AEA0u: goto label_17aea0;
            case 0x17AEA4u: goto label_17aea4;
            case 0x17AEA8u: goto label_17aea8;
            case 0x17AEACu: goto label_17aeac;
            case 0x17AEB0u: goto label_17aeb0;
            case 0x17AEB4u: goto label_17aeb4;
            case 0x17AEB8u: goto label_17aeb8;
            case 0x17AEBCu: goto label_17aebc;
            case 0x17AEC0u: goto label_17aec0;
            case 0x17AEC4u: goto label_17aec4;
            case 0x17AEC8u: goto label_17aec8;
            case 0x17AECCu: goto label_17aecc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17AE5Cu; }
            if (ctx->pc != 0x17AE5Cu) { return; }
        }
    }
    ctx->pc = 0x17AE5Cu;
label_17ae5c:
    // 0x17ae5c: 0x8e040008
    ctx->pc = 0x17ae5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17ae60:
    // 0x17ae60: 0x24060001
    ctx->pc = 0x17ae60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_17ae64:
    // 0x17ae64: 0xc05f692
label_17ae68:
    if (ctx->pc == 0x17AE68u) {
        ctx->pc = 0x17AE68u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x17AE6Cu;
        goto label_17ae6c;
    }
    ctx->pc = 0x17AE64u;
    SET_GPR_U32(ctx, 31, 0x17AE6Cu);
    ctx->pc = 0x17AE68u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x17DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJX_Create_0x17da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE6Cu; }
        else if (ctx->pc != 0x17AE6Cu) { ctx->pc = 0x17AE6Cu; }
    }
    if (ctx->pc != 0x17AE6Cu) { return; }
    ctx->pc = 0x17AE6Cu;
label_17ae6c:
    // 0x17ae6c: 0x1440000b
label_17ae70:
    if (ctx->pc == 0x17AE70u) {
        ctx->pc = 0x17AE70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x17AE74u;
        goto label_17ae74;
    }
    ctx->pc = 0x17AE6Cu;
    {
        const bool branch_taken_0x17ae6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AE70u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17ae6c) {
            ctx->pc = 0x17AE9Cu;
            goto label_17ae9c;
        }
    }
    ctx->pc = 0x17AE74u;
label_17ae74:
    // 0x17ae74: 0x3c04002c
    ctx->pc = 0x17ae74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17ae78:
    // 0x17ae78: 0xc05114a
label_17ae7c:
    if (ctx->pc == 0x17AE7Cu) {
        ctx->pc = 0x17AE7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950072));
        ctx->pc = 0x17AE80u;
        goto label_17ae80;
    }
    ctx->pc = 0x17AE78u;
    SET_GPR_U32(ctx, 31, 0x17AE80u);
    ctx->pc = 0x17AE7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950072));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AE80u; }
        else if (ctx->pc != 0x17AE80u) { ctx->pc = 0x17AE80u; }
    }
    if (ctx->pc != 0x17AE80u) { return; }
    ctx->pc = 0x17AE80u;
label_17ae80:
    // 0x17ae80: 0x0
    ctx->pc = 0x17ae80u;
    // NOP
label_17ae84:
    // 0x17ae84: 0x0
    ctx->pc = 0x17ae84u;
    // NOP
label_17ae88:
    // 0x17ae88: 0x0
    ctx->pc = 0x17ae88u;
    // NOP
label_17ae8c:
    // 0x17ae8c: 0x0
    ctx->pc = 0x17ae8cu;
    // NOP
label_17ae90:
    // 0x17ae90: 0x0
    ctx->pc = 0x17ae90u;
    // NOP
label_17ae94:
    // 0x17ae94: 0x1000fffa
label_17ae98:
    if (ctx->pc == 0x17AE98u) {
        ctx->pc = 0x17AE9Cu;
        goto label_17ae9c;
    }
    ctx->pc = 0x17AE94u;
    {
        const bool branch_taken_0x17ae94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17ae94) {
            ctx->pc = 0x17AE80u;
            goto label_17ae80;
        }
    }
    ctx->pc = 0x17AE9Cu;
label_17ae9c:
    // 0x17ae9c: 0x8f8282bc
    ctx->pc = 0x17ae9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_17aea0:
    // 0x17aea0: 0x26520001
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_17aea4:
    // 0x17aea4: 0x242102a
    ctx->pc = 0x17aea4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_17aea8:
    // 0x17aea8: 0x1440ffa1
label_17aeac:
    if (ctx->pc == 0x17AEACu) {
        ctx->pc = 0x17AEACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x17AEB0u;
        goto label_17aeb0;
    }
    ctx->pc = 0x17AEA8u;
    {
        const bool branch_taken_0x17aea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17AEACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x17aea8) {
            ctx->pc = 0x17AD30u;
            goto label_17ad30;
        }
    }
    ctx->pc = 0x17AEB0u;
label_17aeb0:
    // 0x17aeb0: 0xdfbf0050
    ctx->pc = 0x17aeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17aeb4:
    // 0x17aeb4: 0xdfb40040
    ctx->pc = 0x17aeb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17aeb8:
    // 0x17aeb8: 0xdfb30030
    ctx->pc = 0x17aeb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17aebc:
    // 0x17aebc: 0xdfb20020
    ctx->pc = 0x17aebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17aec0:
    // 0x17aec0: 0xdfb10010
    ctx->pc = 0x17aec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17aec4:
    // 0x17aec4: 0xdfb00000
    ctx->pc = 0x17aec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17aec8:
    // 0x17aec8: 0x3e00008
label_17aecc:
    if (ctx->pc == 0x17AECCu) {
        ctx->pc = 0x17AECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x17AED0u;
        goto label_fallthrough_0x17aec8;
    }
    ctx->pc = 0x17AEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AECCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ACB0u: goto label_17acb0;
            case 0x17ACB4u: goto label_17acb4;
            case 0x17ACB8u: goto label_17acb8;
            case 0x17ACBCu: goto label_17acbc;
            case 0x17ACC0u: goto label_17acc0;
            case 0x17ACC4u: goto label_17acc4;
            case 0x17ACC8u: goto label_17acc8;
            case 0x17ACCCu: goto label_17accc;
            case 0x17ACD0u: goto label_17acd0;
            case 0x17ACD4u: goto label_17acd4;
            case 0x17ACD8u: goto label_17acd8;
            case 0x17ACDCu: goto label_17acdc;
            case 0x17ACE0u: goto label_17ace0;
            case 0x17ACE4u: goto label_17ace4;
            case 0x17ACE8u: goto label_17ace8;
            case 0x17ACECu: goto label_17acec;
            case 0x17ACF0u: goto label_17acf0;
            case 0x17ACF4u: goto label_17acf4;
            case 0x17ACF8u: goto label_17acf8;
            case 0x17ACFCu: goto label_17acfc;
            case 0x17AD00u: goto label_17ad00;
            case 0x17AD04u: goto label_17ad04;
            case 0x17AD08u: goto label_17ad08;
            case 0x17AD0Cu: goto label_17ad0c;
            case 0x17AD10u: goto label_17ad10;
            case 0x17AD14u: goto label_17ad14;
            case 0x17AD18u: goto label_17ad18;
            case 0x17AD1Cu: goto label_17ad1c;
            case 0x17AD20u: goto label_17ad20;
            case 0x17AD24u: goto label_17ad24;
            case 0x17AD28u: goto label_17ad28;
            case 0x17AD2Cu: goto label_17ad2c;
            case 0x17AD30u: goto label_17ad30;
            case 0x17AD34u: goto label_17ad34;
            case 0x17AD38u: goto label_17ad38;
            case 0x17AD3Cu: goto label_17ad3c;
            case 0x17AD40u: goto label_17ad40;
            case 0x17AD44u: goto label_17ad44;
            case 0x17AD48u: goto label_17ad48;
            case 0x17AD4Cu: goto label_17ad4c;
            case 0x17AD50u: goto label_17ad50;
            case 0x17AD54u: goto label_17ad54;
            case 0x17AD58u: goto label_17ad58;
            case 0x17AD5Cu: goto label_17ad5c;
            case 0x17AD60u: goto label_17ad60;
            case 0x17AD64u: goto label_17ad64;
            case 0x17AD68u: goto label_17ad68;
            case 0x17AD6Cu: goto label_17ad6c;
            case 0x17AD70u: goto label_17ad70;
            case 0x17AD74u: goto label_17ad74;
            case 0x17AD78u: goto label_17ad78;
            case 0x17AD7Cu: goto label_17ad7c;
            case 0x17AD80u: goto label_17ad80;
            case 0x17AD84u: goto label_17ad84;
            case 0x17AD88u: goto label_17ad88;
            case 0x17AD8Cu: goto label_17ad8c;
            case 0x17AD90u: goto label_17ad90;
            case 0x17AD94u: goto label_17ad94;
            case 0x17AD98u: goto label_17ad98;
            case 0x17AD9Cu: goto label_17ad9c;
            case 0x17ADA0u: goto label_17ada0;
            case 0x17ADA4u: goto label_17ada4;
            case 0x17ADA8u: goto label_17ada8;
            case 0x17ADACu: goto label_17adac;
            case 0x17ADB0u: goto label_17adb0;
            case 0x17ADB4u: goto label_17adb4;
            case 0x17ADB8u: goto label_17adb8;
            case 0x17ADBCu: goto label_17adbc;
            case 0x17ADC0u: goto label_17adc0;
            case 0x17ADC4u: goto label_17adc4;
            case 0x17ADC8u: goto label_17adc8;
            case 0x17ADCCu: goto label_17adcc;
            case 0x17ADD0u: goto label_17add0;
            case 0x17ADD4u: goto label_17add4;
            case 0x17ADD8u: goto label_17add8;
            case 0x17ADDCu: goto label_17addc;
            case 0x17ADE0u: goto label_17ade0;
            case 0x17ADE4u: goto label_17ade4;
            case 0x17ADE8u: goto label_17ade8;
            case 0x17ADECu: goto label_17adec;
            case 0x17ADF0u: goto label_17adf0;
            case 0x17ADF4u: goto label_17adf4;
            case 0x17ADF8u: goto label_17adf8;
            case 0x17ADFCu: goto label_17adfc;
            case 0x17AE00u: goto label_17ae00;
            case 0x17AE04u: goto label_17ae04;
            case 0x17AE08u: goto label_17ae08;
            case 0x17AE0Cu: goto label_17ae0c;
            case 0x17AE10u: goto label_17ae10;
            case 0x17AE14u: goto label_17ae14;
            case 0x17AE18u: goto label_17ae18;
            case 0x17AE1Cu: goto label_17ae1c;
            case 0x17AE20u: goto label_17ae20;
            case 0x17AE24u: goto label_17ae24;
            case 0x17AE28u: goto label_17ae28;
            case 0x17AE2Cu: goto label_17ae2c;
            case 0x17AE30u: goto label_17ae30;
            case 0x17AE34u: goto label_17ae34;
            case 0x17AE38u: goto label_17ae38;
            case 0x17AE3Cu: goto label_17ae3c;
            case 0x17AE40u: goto label_17ae40;
            case 0x17AE44u: goto label_17ae44;
            case 0x17AE48u: goto label_17ae48;
            case 0x17AE4Cu: goto label_17ae4c;
            case 0x17AE50u: goto label_17ae50;
            case 0x17AE54u: goto label_17ae54;
            case 0x17AE58u: goto label_17ae58;
            case 0x17AE5Cu: goto label_17ae5c;
            case 0x17AE60u: goto label_17ae60;
            case 0x17AE64u: goto label_17ae64;
            case 0x17AE68u: goto label_17ae68;
            case 0x17AE6Cu: goto label_17ae6c;
            case 0x17AE70u: goto label_17ae70;
            case 0x17AE74u: goto label_17ae74;
            case 0x17AE78u: goto label_17ae78;
            case 0x17AE7Cu: goto label_17ae7c;
            case 0x17AE80u: goto label_17ae80;
            case 0x17AE84u: goto label_17ae84;
            case 0x17AE88u: goto label_17ae88;
            case 0x17AE8Cu: goto label_17ae8c;
            case 0x17AE90u: goto label_17ae90;
            case 0x17AE94u: goto label_17ae94;
            case 0x17AE98u: goto label_17ae98;
            case 0x17AE9Cu: goto label_17ae9c;
            case 0x17AEA0u: goto label_17aea0;
            case 0x17AEA4u: goto label_17aea4;
            case 0x17AEA8u: goto label_17aea8;
            case 0x17AEACu: goto label_17aeac;
            case 0x17AEB0u: goto label_17aeb0;
            case 0x17AEB4u: goto label_17aeb4;
            case 0x17AEB8u: goto label_17aeb8;
            case 0x17AEBCu: goto label_17aebc;
            case 0x17AEC0u: goto label_17aec0;
            case 0x17AEC4u: goto label_17aec4;
            case 0x17AEC8u: goto label_17aec8;
            case 0x17AECCu: goto label_17aecc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17aec8:
    ctx->pc = 0x17AED0u;
}
