#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVoice
// Address: 0x10ad48 - 0x10aea8
void SetVoice_0x10ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ad48u;

    // 0x10ad48: 0x27bdffb0
    ctx->pc = 0x10ad48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ad4c: 0x28a20018
    ctx->pc = 0x10ad4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 24));
    // 0x10ad50: 0xffb30030
    ctx->pc = 0x10ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ad54: 0xffb20020
    ctx->pc = 0x10ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ad58: 0x80982d
    ctx->pc = 0x10ad58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad5c: 0xffbf0040
    ctx->pc = 0x10ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ad60: 0xc0902d
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad64: 0xffb10010
    ctx->pc = 0x10ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ad68: 0x14400004
    ctx->pc = 0x10AD68u;
    {
        const bool branch_taken_0x10ad68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10AD6Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x10ad68) {
            ctx->pc = 0x10AD7Cu;
            goto label_10ad7c;
        }
    }
    ctx->pc = 0x10AD70u;
    // 0x10ad70: 0x24a5ffe8
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x10ad74: 0x10000002
    ctx->pc = 0x10AD74u;
    {
        const bool branch_taken_0x10ad74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10AD78u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10ad74) {
            ctx->pc = 0x10AD80u;
            goto label_10ad80;
        }
    }
    ctx->pc = 0x10AD7Cu;
label_10ad7c:
    // 0x10ad7c: 0x302d
    ctx->pc = 0x10ad7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ad80:
    // 0x10ad80: 0x51040
    ctx->pc = 0x10ad80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x10ad84: 0x24040001
    ctx->pc = 0x10ad84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad88: 0xc28025
    ctx->pc = 0x10ad88u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10ad8c: 0x34058010
    ctx->pc = 0x10ad8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10ad90: 0x200302d
    ctx->pc = 0x10ad90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad94: 0xc045c80
    ctx->pc = 0x10AD94u;
    SET_GPR_U32(ctx, 31, 0x10AD9Cu);
    ctx->pc = 0x10AD98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7935));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD9Cu; }
    }
    if (ctx->pc != 0x10AD9Cu) { return; }
    ctx->pc = 0x10AD9Cu;
    // 0x10ad9c: 0x2411ffff
    ctx->pc = 0x10ad9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ada0: 0x54510005
    ctx->pc = 0x10ADA0u;
    {
        const bool branch_taken_0x10ada0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x10ada0) {
            ctx->pc = 0x10ADA4u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x10ADB8u;
            goto label_10adb8;
        }
    }
    ctx->pc = 0x10ADA8u;
    // 0x10ada8: 0x3c040017
    ctx->pc = 0x10ada8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10adac: 0xc04ace4
    ctx->pc = 0x10ADACu;
    SET_GPR_U32(ctx, 31, 0x10ADB4u);
    ctx->pc = 0x10ADB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24240));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADB4u; }
    }
    if (ctx->pc != 0x10ADB4u) { return; }
    ctx->pc = 0x10ADB4u;
    // 0x10adb4: 0x24040001
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10adb8:
    // 0x10adb8: 0x34058010
    ctx->pc = 0x10adb8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10adbc: 0x36060100
    ctx->pc = 0x10adbcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 256));
    // 0x10adc0: 0xc045c80
    ctx->pc = 0x10ADC0u;
    SET_GPR_U32(ctx, 31, 0x10ADC8u);
    ctx->pc = 0x10ADC4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7935));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADC8u; }
    }
    if (ctx->pc != 0x10ADC8u) { return; }
    ctx->pc = 0x10ADC8u;
    // 0x10adc8: 0x14510005
    ctx->pc = 0x10ADC8u;
    {
        const bool branch_taken_0x10adc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10ADCCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10adc8) {
            ctx->pc = 0x10ADE0u;
            goto label_10ade0;
        }
    }
    ctx->pc = 0x10ADD0u;
    // 0x10add0: 0x3c040017
    ctx->pc = 0x10add0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10add4: 0xc04ace4
    ctx->pc = 0x10ADD4u;
    SET_GPR_U32(ctx, 31, 0x10ADDCu);
    ctx->pc = 0x10ADD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24248));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADDCu; }
    }
    if (ctx->pc != 0x10ADDCu) { return; }
    ctx->pc = 0x10ADDCu;
    // 0x10addc: 0x240382d
    ctx->pc = 0x10addcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10ade0:
    // 0x10ade0: 0x24040001
    ctx->pc = 0x10ade0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ade4: 0x34058010
    ctx->pc = 0x10ade4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10ade8: 0xc045c80
    ctx->pc = 0x10ADE8u;
    SET_GPR_U32(ctx, 31, 0x10ADF0u);
    ctx->pc = 0x10ADECu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 512));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADF0u; }
    }
    if (ctx->pc != 0x10ADF0u) { return; }
    ctx->pc = 0x10ADF0u;
    // 0x10adf0: 0x14510005
    ctx->pc = 0x10ADF0u;
    {
        const bool branch_taken_0x10adf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10ADF4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10adf0) {
            ctx->pc = 0x10AE08u;
            goto label_10ae08;
        }
    }
    ctx->pc = 0x10ADF8u;
    // 0x10adf8: 0x3c040017
    ctx->pc = 0x10adf8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10adfc: 0xc04ace4
    ctx->pc = 0x10ADFCu;
    SET_GPR_U32(ctx, 31, 0x10AE04u);
    ctx->pc = 0x10AE00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24256));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE04u; }
    }
    if (ctx->pc != 0x10AE04u) { return; }
    ctx->pc = 0x10AE04u;
    // 0x10ae04: 0x260382d
    ctx->pc = 0x10ae04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10ae08:
    // 0x10ae08: 0x24040001
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae0c: 0x34058050
    ctx->pc = 0x10ae0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32848));
    // 0x10ae10: 0xc045c80
    ctx->pc = 0x10AE10u;
    SET_GPR_U32(ctx, 31, 0x10AE18u);
    ctx->pc = 0x10AE14u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 8256));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE18u; }
    }
    if (ctx->pc != 0x10AE18u) { return; }
    ctx->pc = 0x10AE18u;
    // 0x10ae18: 0x54510005
    ctx->pc = 0x10AE18u;
    {
        const bool branch_taken_0x10ae18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x10ae18) {
            ctx->pc = 0x10AE1Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x10AE30u;
            goto label_10ae30;
        }
    }
    ctx->pc = 0x10AE20u;
    // 0x10ae20: 0x3c040017
    ctx->pc = 0x10ae20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ae24: 0xc04ace4
    ctx->pc = 0x10AE24u;
    SET_GPR_U32(ctx, 31, 0x10AE2Cu);
    ctx->pc = 0x10AE28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24264));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE2Cu; }
    }
    if (ctx->pc != 0x10AE2Cu) { return; }
    ctx->pc = 0x10AE2Cu;
    // 0x10ae2c: 0x24040001
    ctx->pc = 0x10ae2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_10ae30:
    // 0x10ae30: 0x34058010
    ctx->pc = 0x10ae30u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10ae34: 0x36060300
    ctx->pc = 0x10ae34u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 768));
    // 0x10ae38: 0xc045c80
    ctx->pc = 0x10AE38u;
    SET_GPR_U32(ctx, 31, 0x10AE40u);
    ctx->pc = 0x10AE3Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE40u; }
    }
    if (ctx->pc != 0x10AE40u) { return; }
    ctx->pc = 0x10AE40u;
    // 0x10ae40: 0x14510005
    ctx->pc = 0x10AE40u;
    {
        const bool branch_taken_0x10ae40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AE44u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 1024));
        if (branch_taken_0x10ae40) {
            ctx->pc = 0x10AE58u;
            goto label_10ae58;
        }
    }
    ctx->pc = 0x10AE48u;
    // 0x10ae48: 0x3c040017
    ctx->pc = 0x10ae48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ae4c: 0xc04ace4
    ctx->pc = 0x10AE4Cu;
    SET_GPR_U32(ctx, 31, 0x10AE54u);
    ctx->pc = 0x10AE50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24272));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE54u; }
    }
    if (ctx->pc != 0x10AE54u) { return; }
    ctx->pc = 0x10AE54u;
    // 0x10ae54: 0x36060400
    ctx->pc = 0x10ae54u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 16), 1024));
label_10ae58:
    // 0x10ae58: 0x24040001
    ctx->pc = 0x10ae58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae5c: 0x34058010
    ctx->pc = 0x10ae5cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32784));
    // 0x10ae60: 0xc045c80
    ctx->pc = 0x10AE60u;
    SET_GPR_U32(ctx, 31, 0x10AE68u);
    ctx->pc = 0x10AE64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8128));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE68u; }
    }
    if (ctx->pc != 0x10AE68u) { return; }
    ctx->pc = 0x10AE68u;
    // 0x10ae68: 0x14510009
    ctx->pc = 0x10AE68u;
    {
        const bool branch_taken_0x10ae68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x10AE6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x10ae68) {
            ctx->pc = 0x10AE90u;
            goto label_10ae90;
        }
    }
    ctx->pc = 0x10AE70u;
    // 0x10ae70: 0x3c040017
    ctx->pc = 0x10ae70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10ae74: 0xdfb30030
    ctx->pc = 0x10ae74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ae78: 0x24845ed8
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24280));
    // 0x10ae7c: 0xdfb20020
    ctx->pc = 0x10ae7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ae80: 0xdfb10010
    ctx->pc = 0x10ae80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae84: 0xdfb00000
    ctx->pc = 0x10ae84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae88: 0x804ace4
    ctx->pc = 0x10AE88u;
    ctx->pc = 0x10AE8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x10AE90u;
label_10ae90:
    // 0x10ae90: 0xdfb30030
    ctx->pc = 0x10ae90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ae94: 0xdfb20020
    ctx->pc = 0x10ae94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ae98: 0xdfb10010
    ctx->pc = 0x10ae98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae9c: 0xdfb00000
    ctx->pc = 0x10ae9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aea0: 0x3e00008
    ctx->pc = 0x10AEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AEA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AD7Cu: goto label_10ad7c;
            case 0x10AD80u: goto label_10ad80;
            case 0x10ADB8u: goto label_10adb8;
            case 0x10ADE0u: goto label_10ade0;
            case 0x10AE08u: goto label_10ae08;
            case 0x10AE30u: goto label_10ae30;
            case 0x10AE58u: goto label_10ae58;
            case 0x10AE90u: goto label_10ae90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AEA8u;
}
