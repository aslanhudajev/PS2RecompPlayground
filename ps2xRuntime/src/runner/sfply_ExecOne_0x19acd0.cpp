#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_ExecOne
// Address: 0x19acd0 - 0x19ade4
void sfply_ExecOne_0x19acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_ExecOne");


    ctx->pc = 0x19acd0u;

label_19acd0:
    // 0x19acd0: 0x27bdffc0
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_19acd4:
    // 0x19acd4: 0xffb10010
    ctx->pc = 0x19acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19acd8:
    // 0x19acd8: 0xffbf0030
    ctx->pc = 0x19acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19acdc:
    // 0x19acdc: 0x80882d
    ctx->pc = 0x19acdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ace0:
    // 0x19ace0: 0xffb20020
    ctx->pc = 0x19ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ace4:
    // 0x19ace4: 0xffb00000
    ctx->pc = 0x19ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ace8:
    // 0x19ace8: 0x8e300040
    ctx->pc = 0x19ace8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_19acec:
    // 0x19acec: 0x2602ffff
    ctx->pc = 0x19acecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
label_19acf0:
    // 0x19acf0: 0x2c420004
    ctx->pc = 0x19acf0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
label_19acf4:
    // 0x19acf4: 0x10400036
label_19acf8:
    if (ctx->pc == 0x19ACF8u) {
        ctx->pc = 0x19ACF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x19ACFCu;
        goto label_19acfc;
    }
    ctx->pc = 0x19ACF4u;
    {
        const bool branch_taken_0x19acf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19ACF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19acf4) {
            ctx->pc = 0x19ADD0u;
            goto label_19add0;
        }
    }
    ctx->pc = 0x19ACFCu;
label_19acfc:
    // 0x19acfc: 0x8e22003c
    ctx->pc = 0x19acfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_19ad00:
    // 0x19ad00: 0x10400034
label_19ad04:
    if (ctx->pc == 0x19AD04u) {
        ctx->pc = 0x19AD04u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x19AD08u;
        goto label_19ad08;
    }
    ctx->pc = 0x19AD00u;
    {
        const bool branch_taken_0x19ad00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AD04u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19ad00) {
            ctx->pc = 0x19ADD4u;
            goto label_19add4;
        }
    }
    ctx->pc = 0x19AD08u;
label_19ad08:
    // 0x19ad08: 0xae20003c
    ctx->pc = 0x19ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_19ad0c:
    // 0x19ad0c: 0xc0683dc
label_19ad10:
    if (ctx->pc == 0x19AD10u) {
        ctx->pc = 0x19AD14u;
        goto label_19ad14;
    }
    ctx->pc = 0x19AD0Cu;
    SET_GPR_U32(ctx, 31, 0x19AD14u);
    ctx->pc = 0x1A0F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_GetTmr_0x1a0f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD14u; }
        else if (ctx->pc != 0x19AD14u) { ctx->pc = 0x19AD14u; }
    }
    if (ctx->pc != 0x19AD14u) { return; }
    ctx->pc = 0x19AD14u;
label_19ad14:
    // 0x19ad14: 0x40902d
    ctx->pc = 0x19ad14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ad18:
    // 0x19ad18: 0x2602fffe
    ctx->pc = 0x19ad18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
label_19ad1c:
    // 0x19ad1c: 0x2c420003
    ctx->pc = 0x19ad1cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
label_19ad20:
    // 0x19ad20: 0x50400004
label_19ad24:
    if (ctx->pc == 0x19AD24u) {
        ctx->pc = 0x19AD24u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->pc = 0x19AD28u;
        goto label_19ad28;
    }
    ctx->pc = 0x19AD20u;
    {
        const bool branch_taken_0x19ad20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19ad20) {
            ctx->pc = 0x19AD24u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->pc = 0x19AD34u;
            goto label_19ad34;
        }
    }
    ctx->pc = 0x19AD28u;
label_19ad28:
    // 0x19ad28: 0xc066b7a
label_19ad2c:
    if (ctx->pc == 0x19AD2Cu) {
        ctx->pc = 0x19AD2Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD30u;
        goto label_19ad30;
    }
    ctx->pc = 0x19AD28u;
    SET_GPR_U32(ctx, 31, 0x19AD30u);
    ctx->pc = 0x19AD2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19ADE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_ExecOneSub_0x19ade8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD30u; }
        else if (ctx->pc != 0x19AD30u) { ctx->pc = 0x19AD30u; }
    }
    if (ctx->pc != 0x19AD30u) { return; }
    ctx->pc = 0x19AD30u;
label_19ad30:
    // 0x19ad30: 0x8e300040
    ctx->pc = 0x19ad30u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_19ad34:
    // 0x19ad34: 0x2e020007
    ctx->pc = 0x19ad34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 7));
label_19ad38:
    // 0x19ad38: 0x1040001a
label_19ad3c:
    if (ctx->pc == 0x19AD3Cu) {
        ctx->pc = 0x19AD3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x19AD40u;
        goto label_19ad40;
    }
    ctx->pc = 0x19AD38u;
    {
        const bool branch_taken_0x19ad38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AD3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x19ad38) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD40u;
label_19ad40:
    // 0x19ad40: 0x101880
    ctx->pc = 0x19ad40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_19ad44:
    // 0x19ad44: 0x2442d5d0
    ctx->pc = 0x19ad44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956496));
label_19ad48:
    // 0x19ad48: 0x621821
    ctx->pc = 0x19ad48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19ad4c:
    // 0x19ad4c: 0x8c640000
    ctx->pc = 0x19ad4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19ad50:
    // 0x19ad50: 0x800008
label_19ad54:
    if (ctx->pc == 0x19AD54u) {
        ctx->pc = 0x19AD58u;
        goto label_19ad58;
    }
    ctx->pc = 0x19AD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ACD0u: goto label_19acd0;
            case 0x19ACD4u: goto label_19acd4;
            case 0x19ACD8u: goto label_19acd8;
            case 0x19ACDCu: goto label_19acdc;
            case 0x19ACE0u: goto label_19ace0;
            case 0x19ACE4u: goto label_19ace4;
            case 0x19ACE8u: goto label_19ace8;
            case 0x19ACECu: goto label_19acec;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19ACF4u: goto label_19acf4;
            case 0x19ACF8u: goto label_19acf8;
            case 0x19ACFCu: goto label_19acfc;
            case 0x19AD00u: goto label_19ad00;
            case 0x19AD04u: goto label_19ad04;
            case 0x19AD08u: goto label_19ad08;
            case 0x19AD0Cu: goto label_19ad0c;
            case 0x19AD10u: goto label_19ad10;
            case 0x19AD14u: goto label_19ad14;
            case 0x19AD18u: goto label_19ad18;
            case 0x19AD1Cu: goto label_19ad1c;
            case 0x19AD20u: goto label_19ad20;
            case 0x19AD24u: goto label_19ad24;
            case 0x19AD28u: goto label_19ad28;
            case 0x19AD2Cu: goto label_19ad2c;
            case 0x19AD30u: goto label_19ad30;
            case 0x19AD34u: goto label_19ad34;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD40u: goto label_19ad40;
            case 0x19AD44u: goto label_19ad44;
            case 0x19AD48u: goto label_19ad48;
            case 0x19AD4Cu: goto label_19ad4c;
            case 0x19AD50u: goto label_19ad50;
            case 0x19AD54u: goto label_19ad54;
            case 0x19AD58u: goto label_19ad58;
            case 0x19AD5Cu: goto label_19ad5c;
            case 0x19AD60u: goto label_19ad60;
            case 0x19AD64u: goto label_19ad64;
            case 0x19AD68u: goto label_19ad68;
            case 0x19AD6Cu: goto label_19ad6c;
            case 0x19AD70u: goto label_19ad70;
            case 0x19AD74u: goto label_19ad74;
            case 0x19AD78u: goto label_19ad78;
            case 0x19AD7Cu: goto label_19ad7c;
            case 0x19AD80u: goto label_19ad80;
            case 0x19AD84u: goto label_19ad84;
            case 0x19AD88u: goto label_19ad88;
            case 0x19AD8Cu: goto label_19ad8c;
            case 0x19AD90u: goto label_19ad90;
            case 0x19AD94u: goto label_19ad94;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19ADA0u: goto label_19ada0;
            case 0x19ADA4u: goto label_19ada4;
            case 0x19ADA8u: goto label_19ada8;
            case 0x19ADACu: goto label_19adac;
            case 0x19ADB0u: goto label_19adb0;
            case 0x19ADB4u: goto label_19adb4;
            case 0x19ADB8u: goto label_19adb8;
            case 0x19ADBCu: goto label_19adbc;
            case 0x19ADC0u: goto label_19adc0;
            case 0x19ADC4u: goto label_19adc4;
            case 0x19ADC8u: goto label_19adc8;
            case 0x19ADCCu: goto label_19adcc;
            case 0x19ADD0u: goto label_19add0;
            case 0x19ADD4u: goto label_19add4;
            case 0x19ADD8u: goto label_19add8;
            case 0x19ADDCu: goto label_19addc;
            case 0x19ADE0u: goto label_19ade0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AD58u;
label_19ad58:
    // 0x19ad58: 0xc066b86
label_19ad5c:
    if (ctx->pc == 0x19AD5Cu) {
        ctx->pc = 0x19AD5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD60u;
        goto label_19ad60;
    }
    ctx->pc = 0x19AD58u;
    SET_GPR_U32(ctx, 31, 0x19AD60u);
    ctx->pc = 0x19AD5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_StatStop_0x19ae18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD60u; }
        else if (ctx->pc != 0x19AD60u) { ctx->pc = 0x19AD60u; }
    }
    if (ctx->pc != 0x19AD60u) { return; }
    ctx->pc = 0x19AD60u;
label_19ad60:
    // 0x19ad60: 0x10000010
label_19ad64:
    if (ctx->pc == 0x19AD64u) {
        ctx->pc = 0x19AD64u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD68u;
        goto label_19ad68;
    }
    ctx->pc = 0x19AD60u;
    {
        const bool branch_taken_0x19ad60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AD64u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ad60) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD68u;
label_19ad68:
    // 0x19ad68: 0xc066b92
label_19ad6c:
    if (ctx->pc == 0x19AD6Cu) {
        ctx->pc = 0x19AD6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD70u;
        goto label_19ad70;
    }
    ctx->pc = 0x19AD68u;
    SET_GPR_U32(ctx, 31, 0x19AD70u);
    ctx->pc = 0x19AD6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AE48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_StatPrep_0x19ae48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD70u; }
        else if (ctx->pc != 0x19AD70u) { ctx->pc = 0x19AD70u; }
    }
    if (ctx->pc != 0x19AD70u) { return; }
    ctx->pc = 0x19AD70u;
label_19ad70:
    // 0x19ad70: 0x1000000c
label_19ad74:
    if (ctx->pc == 0x19AD74u) {
        ctx->pc = 0x19AD74u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD78u;
        goto label_19ad78;
    }
    ctx->pc = 0x19AD70u;
    {
        const bool branch_taken_0x19ad70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AD74u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ad70) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD78u;
label_19ad78:
    // 0x19ad78: 0xc066c70
label_19ad7c:
    if (ctx->pc == 0x19AD7Cu) {
        ctx->pc = 0x19AD7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD80u;
        goto label_19ad80;
    }
    ctx->pc = 0x19AD78u;
    SET_GPR_U32(ctx, 31, 0x19AD80u);
    ctx->pc = 0x19AD7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_StatStby_0x19b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD80u; }
        else if (ctx->pc != 0x19AD80u) { ctx->pc = 0x19AD80u; }
    }
    if (ctx->pc != 0x19AD80u) { return; }
    ctx->pc = 0x19AD80u;
label_19ad80:
    // 0x19ad80: 0x10000008
label_19ad84:
    if (ctx->pc == 0x19AD84u) {
        ctx->pc = 0x19AD84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD88u;
        goto label_19ad88;
    }
    ctx->pc = 0x19AD80u;
    {
        const bool branch_taken_0x19ad80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AD84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ad80) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD88u;
label_19ad88:
    // 0x19ad88: 0xc066c98
label_19ad8c:
    if (ctx->pc == 0x19AD8Cu) {
        ctx->pc = 0x19AD8Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD90u;
        goto label_19ad90;
    }
    ctx->pc = 0x19AD88u;
    SET_GPR_U32(ctx, 31, 0x19AD90u);
    ctx->pc = 0x19AD8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B260u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_StatPlay_0x19b260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD90u; }
        else if (ctx->pc != 0x19AD90u) { ctx->pc = 0x19AD90u; }
    }
    if (ctx->pc != 0x19AD90u) { return; }
    ctx->pc = 0x19AD90u;
label_19ad90:
    // 0x19ad90: 0x10000004
label_19ad94:
    if (ctx->pc == 0x19AD94u) {
        ctx->pc = 0x19AD94u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19AD98u;
        goto label_19ad98;
    }
    ctx->pc = 0x19AD90u;
    {
        const bool branch_taken_0x19ad90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AD94u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ad90) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD98u;
label_19ad98:
    // 0x19ad98: 0xc066cb0
label_19ad9c:
    if (ctx->pc == 0x19AD9Cu) {
        ctx->pc = 0x19AD9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19ADA0u;
        goto label_19ada0;
    }
    ctx->pc = 0x19AD98u;
    SET_GPR_U32(ctx, 31, 0x19ADA0u);
    ctx->pc = 0x19AD9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_StatFin_0x19b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADA0u; }
        else if (ctx->pc != 0x19ADA0u) { ctx->pc = 0x19ADA0u; }
    }
    if (ctx->pc != 0x19ADA0u) { return; }
    ctx->pc = 0x19ADA0u;
label_19ada0:
    // 0x19ada0: 0x40802d
    ctx->pc = 0x19ada0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ada4:
    // 0x19ada4: 0xae300040
    ctx->pc = 0x19ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
label_19ada8:
    // 0x19ada8: 0xc0683dc
label_19adac:
    if (ctx->pc == 0x19ADACu) {
        ctx->pc = 0x19ADACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 26632));
        ctx->pc = 0x19ADB0u;
        goto label_19adb0;
    }
    ctx->pc = 0x19ADA8u;
    SET_GPR_U32(ctx, 31, 0x19ADB0u);
    ctx->pc = 0x19ADACu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 26632));
    ctx->pc = 0x1A0F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_GetTmr_0x1a0f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ADB0u; }
        else if (ctx->pc != 0x19ADB0u) { ctx->pc = 0x19ADB0u; }
    }
    if (ctx->pc != 0x19ADB0u) { return; }
    ctx->pc = 0x19ADB0u;
label_19adb0:
    // 0x19adb0: 0x52282f
    ctx->pc = 0x19adb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
label_19adb4:
    // 0x19adb4: 0x200202d
    ctx->pc = 0x19adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19adb8:
    // 0x19adb8: 0xdfbf0030
    ctx->pc = 0x19adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19adbc:
    // 0x19adbc: 0xdfb20020
    ctx->pc = 0x19adbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19adc0:
    // 0x19adc0: 0xdfb10010
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19adc4:
    // 0x19adc4: 0xdfb00000
    ctx->pc = 0x19adc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19adc8:
    // 0x19adc8: 0x8067b22
label_19adcc:
    if (ctx->pc == 0x19ADCCu) {
        ctx->pc = 0x19ADCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19ADD0u;
        goto label_19add0;
    }
    ctx->pc = 0x19ADC8u;
    ctx->pc = 0x19ADCCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x19EC88u;
    SFTMR_AddTsum_0x19ec88(rdram, ctx, runtime); return;
    ctx->pc = 0x19ADD0u;
label_19add0:
    // 0x19add0: 0xdfb20020
    ctx->pc = 0x19add0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19add4:
    // 0x19add4: 0xdfb10010
    ctx->pc = 0x19add4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19add8:
    // 0x19add8: 0xdfb00000
    ctx->pc = 0x19add8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19addc:
    // 0x19addc: 0x3e00008
label_19ade0:
    if (ctx->pc == 0x19ADE0u) {
        ctx->pc = 0x19ADE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x19ADE4u;
        goto label_fallthrough_0x19addc;
    }
    ctx->pc = 0x19ADDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ACD0u: goto label_19acd0;
            case 0x19ACD4u: goto label_19acd4;
            case 0x19ACD8u: goto label_19acd8;
            case 0x19ACDCu: goto label_19acdc;
            case 0x19ACE0u: goto label_19ace0;
            case 0x19ACE4u: goto label_19ace4;
            case 0x19ACE8u: goto label_19ace8;
            case 0x19ACECu: goto label_19acec;
            case 0x19ACF0u: goto label_19acf0;
            case 0x19ACF4u: goto label_19acf4;
            case 0x19ACF8u: goto label_19acf8;
            case 0x19ACFCu: goto label_19acfc;
            case 0x19AD00u: goto label_19ad00;
            case 0x19AD04u: goto label_19ad04;
            case 0x19AD08u: goto label_19ad08;
            case 0x19AD0Cu: goto label_19ad0c;
            case 0x19AD10u: goto label_19ad10;
            case 0x19AD14u: goto label_19ad14;
            case 0x19AD18u: goto label_19ad18;
            case 0x19AD1Cu: goto label_19ad1c;
            case 0x19AD20u: goto label_19ad20;
            case 0x19AD24u: goto label_19ad24;
            case 0x19AD28u: goto label_19ad28;
            case 0x19AD2Cu: goto label_19ad2c;
            case 0x19AD30u: goto label_19ad30;
            case 0x19AD34u: goto label_19ad34;
            case 0x19AD38u: goto label_19ad38;
            case 0x19AD3Cu: goto label_19ad3c;
            case 0x19AD40u: goto label_19ad40;
            case 0x19AD44u: goto label_19ad44;
            case 0x19AD48u: goto label_19ad48;
            case 0x19AD4Cu: goto label_19ad4c;
            case 0x19AD50u: goto label_19ad50;
            case 0x19AD54u: goto label_19ad54;
            case 0x19AD58u: goto label_19ad58;
            case 0x19AD5Cu: goto label_19ad5c;
            case 0x19AD60u: goto label_19ad60;
            case 0x19AD64u: goto label_19ad64;
            case 0x19AD68u: goto label_19ad68;
            case 0x19AD6Cu: goto label_19ad6c;
            case 0x19AD70u: goto label_19ad70;
            case 0x19AD74u: goto label_19ad74;
            case 0x19AD78u: goto label_19ad78;
            case 0x19AD7Cu: goto label_19ad7c;
            case 0x19AD80u: goto label_19ad80;
            case 0x19AD84u: goto label_19ad84;
            case 0x19AD88u: goto label_19ad88;
            case 0x19AD8Cu: goto label_19ad8c;
            case 0x19AD90u: goto label_19ad90;
            case 0x19AD94u: goto label_19ad94;
            case 0x19AD98u: goto label_19ad98;
            case 0x19AD9Cu: goto label_19ad9c;
            case 0x19ADA0u: goto label_19ada0;
            case 0x19ADA4u: goto label_19ada4;
            case 0x19ADA8u: goto label_19ada8;
            case 0x19ADACu: goto label_19adac;
            case 0x19ADB0u: goto label_19adb0;
            case 0x19ADB4u: goto label_19adb4;
            case 0x19ADB8u: goto label_19adb8;
            case 0x19ADBCu: goto label_19adbc;
            case 0x19ADC0u: goto label_19adc0;
            case 0x19ADC4u: goto label_19adc4;
            case 0x19ADC8u: goto label_19adc8;
            case 0x19ADCCu: goto label_19adcc;
            case 0x19ADD0u: goto label_19add0;
            case 0x19ADD4u: goto label_19add4;
            case 0x19ADD8u: goto label_19add8;
            case 0x19ADDCu: goto label_19addc;
            case 0x19ADE0u: goto label_19ade0;
            default: break;
        }
        return;
    }
label_fallthrough_0x19addc:
    ctx->pc = 0x19ADE4u;
}
