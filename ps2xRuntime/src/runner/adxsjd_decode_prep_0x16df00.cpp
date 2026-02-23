#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_decode_prep
// Address: 0x16df00 - 0x16e074
void adxsjd_decode_prep_0x16df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_decode_prep");


    ctx->pc = 0x16df00u;

label_16df00:
    // 0x16df00: 0x27bdff90
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_16df04:
    // 0x16df04: 0x24050001
    ctx->pc = 0x16df04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16df08:
    // 0x16df08: 0xffb30050
    ctx->pc = 0x16df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_16df0c:
    // 0x16df0c: 0x24061000
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
label_16df10:
    // 0x16df10: 0xffbf0060
    ctx->pc = 0x16df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16df14:
    // 0x16df14: 0x80982d
    ctx->pc = 0x16df14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16df18:
    // 0x16df18: 0xffb20040
    ctx->pc = 0x16df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_16df1c:
    // 0x16df1c: 0x3a0382d
    ctx->pc = 0x16df1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16df20:
    // 0x16df20: 0xffb00020
    ctx->pc = 0x16df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_16df24:
    // 0x16df24: 0xffb10030
    ctx->pc = 0x16df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_16df28:
    // 0x16df28: 0x8e710008
    ctx->pc = 0x16df28u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_16df2c:
    // 0x16df2c: 0x8e700004
    ctx->pc = 0x16df2cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_16df30:
    // 0x16df30: 0x8e220000
    ctx->pc = 0x16df30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16df34:
    // 0x16df34: 0x8c430018
    ctx->pc = 0x16df34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16df38:
    // 0x16df38: 0x60f809
label_16df3c:
    if (ctx->pc == 0x16DF3Cu) {
        ctx->pc = 0x16DF3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DF40u;
        goto label_16df40;
    }
    ctx->pc = 0x16DF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16DF40u);
        ctx->pc = 0x16DF3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF08u: goto label_16df08;
            case 0x16DF0Cu: goto label_16df0c;
            case 0x16DF10u: goto label_16df10;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF1Cu: goto label_16df1c;
            case 0x16DF20u: goto label_16df20;
            case 0x16DF24u: goto label_16df24;
            case 0x16DF28u: goto label_16df28;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DF30u: goto label_16df30;
            case 0x16DF34u: goto label_16df34;
            case 0x16DF38u: goto label_16df38;
            case 0x16DF3Cu: goto label_16df3c;
            case 0x16DF40u: goto label_16df40;
            case 0x16DF44u: goto label_16df44;
            case 0x16DF48u: goto label_16df48;
            case 0x16DF4Cu: goto label_16df4c;
            case 0x16DF50u: goto label_16df50;
            case 0x16DF54u: goto label_16df54;
            case 0x16DF58u: goto label_16df58;
            case 0x16DF5Cu: goto label_16df5c;
            case 0x16DF60u: goto label_16df60;
            case 0x16DF64u: goto label_16df64;
            case 0x16DF68u: goto label_16df68;
            case 0x16DF6Cu: goto label_16df6c;
            case 0x16DF70u: goto label_16df70;
            case 0x16DF74u: goto label_16df74;
            case 0x16DF78u: goto label_16df78;
            case 0x16DF7Cu: goto label_16df7c;
            case 0x16DF80u: goto label_16df80;
            case 0x16DF84u: goto label_16df84;
            case 0x16DF88u: goto label_16df88;
            case 0x16DF8Cu: goto label_16df8c;
            case 0x16DF90u: goto label_16df90;
            case 0x16DF94u: goto label_16df94;
            case 0x16DF98u: goto label_16df98;
            case 0x16DF9Cu: goto label_16df9c;
            case 0x16DFA0u: goto label_16dfa0;
            case 0x16DFA4u: goto label_16dfa4;
            case 0x16DFA8u: goto label_16dfa8;
            case 0x16DFACu: goto label_16dfac;
            case 0x16DFB0u: goto label_16dfb0;
            case 0x16DFB4u: goto label_16dfb4;
            case 0x16DFB8u: goto label_16dfb8;
            case 0x16DFBCu: goto label_16dfbc;
            case 0x16DFC0u: goto label_16dfc0;
            case 0x16DFC4u: goto label_16dfc4;
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16DFCCu: goto label_16dfcc;
            case 0x16DFD0u: goto label_16dfd0;
            case 0x16DFD4u: goto label_16dfd4;
            case 0x16DFD8u: goto label_16dfd8;
            case 0x16DFDCu: goto label_16dfdc;
            case 0x16DFE0u: goto label_16dfe0;
            case 0x16DFE4u: goto label_16dfe4;
            case 0x16DFE8u: goto label_16dfe8;
            case 0x16DFECu: goto label_16dfec;
            case 0x16DFF0u: goto label_16dff0;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16DFF8u: goto label_16dff8;
            case 0x16DFFCu: goto label_16dffc;
            case 0x16E000u: goto label_16e000;
            case 0x16E004u: goto label_16e004;
            case 0x16E008u: goto label_16e008;
            case 0x16E00Cu: goto label_16e00c;
            case 0x16E010u: goto label_16e010;
            case 0x16E014u: goto label_16e014;
            case 0x16E018u: goto label_16e018;
            case 0x16E01Cu: goto label_16e01c;
            case 0x16E020u: goto label_16e020;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            case 0x16E02Cu: goto label_16e02c;
            case 0x16E030u: goto label_16e030;
            case 0x16E034u: goto label_16e034;
            case 0x16E038u: goto label_16e038;
            case 0x16E03Cu: goto label_16e03c;
            case 0x16E040u: goto label_16e040;
            case 0x16E044u: goto label_16e044;
            case 0x16E048u: goto label_16e048;
            case 0x16E04Cu: goto label_16e04c;
            case 0x16E050u: goto label_16e050;
            case 0x16E054u: goto label_16e054;
            case 0x16E058u: goto label_16e058;
            case 0x16E05Cu: goto label_16e05c;
            case 0x16E060u: goto label_16e060;
            case 0x16E064u: goto label_16e064;
            case 0x16E068u: goto label_16e068;
            case 0x16E06Cu: goto label_16e06c;
            case 0x16E070u: goto label_16e070;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DF40u; }
            if (ctx->pc != 0x16DF40u) { return; }
        }
    }
    ctx->pc = 0x16DF40u;
label_16df40:
    // 0x16df40: 0x8fa60004
    ctx->pc = 0x16df40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16df44:
    // 0x16df44: 0x28c20010
    ctx->pc = 0x16df44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 16));
label_16df48:
    // 0x16df48: 0x5440000b
label_16df4c:
    if (ctx->pc == 0x16DF4Cu) {
        ctx->pc = 0x16DF4Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x16DF50u;
        goto label_16df50;
    }
    ctx->pc = 0x16DF48u;
    {
        const bool branch_taken_0x16df48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16df48) {
            ctx->pc = 0x16DF4Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x16DF78u;
            goto label_16df78;
        }
    }
    ctx->pc = 0x16DF50u;
label_16df50:
    // 0x16df50: 0x8fa50000
    ctx->pc = 0x16df50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16df54:
    // 0x16df54: 0xc059fb2
label_16df58:
    if (ctx->pc == 0x16DF58u) {
        ctx->pc = 0x16DF58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DF5Cu;
        goto label_16df5c;
    }
    ctx->pc = 0x16DF54u;
    SET_GPR_U32(ctx, 31, 0x16DF5Cu);
    ctx->pc = 0x16DF58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_DecodeHeader_0x167ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF5Cu; }
        else if (ctx->pc != 0x16DF5Cu) { ctx->pc = 0x16DF5Cu; }
    }
    if (ctx->pc != 0x16DF5Cu) { return; }
    ctx->pc = 0x16DF5Cu;
label_16df5c:
    // 0x16df5c: 0x40902d
    ctx->pc = 0x16df5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16df60:
    // 0x16df60: 0x12400004
label_16df64:
    if (ctx->pc == 0x16DF64u) {
        ctx->pc = 0x16DF64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x16DF68u;
        goto label_16df68;
    }
    ctx->pc = 0x16DF60u;
    {
        const bool branch_taken_0x16df60 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DF64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x16df60) {
            ctx->pc = 0x16DF74u;
            goto label_16df74;
        }
    }
    ctx->pc = 0x16DF68u;
label_16df68:
    // 0x16df68: 0x52102a
    ctx->pc = 0x16df68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_16df6c:
    // 0x16df6c: 0x50400009
label_16df70:
    if (ctx->pc == 0x16DF70u) {
        ctx->pc = 0x16DF70u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 18));
        ctx->pc = 0x16DF74u;
        goto label_16df74;
    }
    ctx->pc = 0x16DF6Cu;
    {
        const bool branch_taken_0x16df6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16df6c) {
            ctx->pc = 0x16DF70u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 18));
            ctx->pc = 0x16DF94u;
            goto label_16df94;
        }
    }
    ctx->pc = 0x16DF74u;
label_16df74:
    // 0x16df74: 0x8e230000
    ctx->pc = 0x16df74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16df78:
    // 0x16df78: 0x220202d
    ctx->pc = 0x16df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16df7c:
    // 0x16df7c: 0x24050001
    ctx->pc = 0x16df7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16df80:
    // 0x16df80: 0x8c62001c
    ctx->pc = 0x16df80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16df84:
    // 0x16df84: 0x40f809
label_16df88:
    if (ctx->pc == 0x16DF88u) {
        ctx->pc = 0x16DF88u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DF8Cu;
        goto label_16df8c;
    }
    ctx->pc = 0x16DF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DF8Cu);
        ctx->pc = 0x16DF88u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF08u: goto label_16df08;
            case 0x16DF0Cu: goto label_16df0c;
            case 0x16DF10u: goto label_16df10;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF1Cu: goto label_16df1c;
            case 0x16DF20u: goto label_16df20;
            case 0x16DF24u: goto label_16df24;
            case 0x16DF28u: goto label_16df28;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DF30u: goto label_16df30;
            case 0x16DF34u: goto label_16df34;
            case 0x16DF38u: goto label_16df38;
            case 0x16DF3Cu: goto label_16df3c;
            case 0x16DF40u: goto label_16df40;
            case 0x16DF44u: goto label_16df44;
            case 0x16DF48u: goto label_16df48;
            case 0x16DF4Cu: goto label_16df4c;
            case 0x16DF50u: goto label_16df50;
            case 0x16DF54u: goto label_16df54;
            case 0x16DF58u: goto label_16df58;
            case 0x16DF5Cu: goto label_16df5c;
            case 0x16DF60u: goto label_16df60;
            case 0x16DF64u: goto label_16df64;
            case 0x16DF68u: goto label_16df68;
            case 0x16DF6Cu: goto label_16df6c;
            case 0x16DF70u: goto label_16df70;
            case 0x16DF74u: goto label_16df74;
            case 0x16DF78u: goto label_16df78;
            case 0x16DF7Cu: goto label_16df7c;
            case 0x16DF80u: goto label_16df80;
            case 0x16DF84u: goto label_16df84;
            case 0x16DF88u: goto label_16df88;
            case 0x16DF8Cu: goto label_16df8c;
            case 0x16DF90u: goto label_16df90;
            case 0x16DF94u: goto label_16df94;
            case 0x16DF98u: goto label_16df98;
            case 0x16DF9Cu: goto label_16df9c;
            case 0x16DFA0u: goto label_16dfa0;
            case 0x16DFA4u: goto label_16dfa4;
            case 0x16DFA8u: goto label_16dfa8;
            case 0x16DFACu: goto label_16dfac;
            case 0x16DFB0u: goto label_16dfb0;
            case 0x16DFB4u: goto label_16dfb4;
            case 0x16DFB8u: goto label_16dfb8;
            case 0x16DFBCu: goto label_16dfbc;
            case 0x16DFC0u: goto label_16dfc0;
            case 0x16DFC4u: goto label_16dfc4;
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16DFCCu: goto label_16dfcc;
            case 0x16DFD0u: goto label_16dfd0;
            case 0x16DFD4u: goto label_16dfd4;
            case 0x16DFD8u: goto label_16dfd8;
            case 0x16DFDCu: goto label_16dfdc;
            case 0x16DFE0u: goto label_16dfe0;
            case 0x16DFE4u: goto label_16dfe4;
            case 0x16DFE8u: goto label_16dfe8;
            case 0x16DFECu: goto label_16dfec;
            case 0x16DFF0u: goto label_16dff0;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16DFF8u: goto label_16dff8;
            case 0x16DFFCu: goto label_16dffc;
            case 0x16E000u: goto label_16e000;
            case 0x16E004u: goto label_16e004;
            case 0x16E008u: goto label_16e008;
            case 0x16E00Cu: goto label_16e00c;
            case 0x16E010u: goto label_16e010;
            case 0x16E014u: goto label_16e014;
            case 0x16E018u: goto label_16e018;
            case 0x16E01Cu: goto label_16e01c;
            case 0x16E020u: goto label_16e020;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            case 0x16E02Cu: goto label_16e02c;
            case 0x16E030u: goto label_16e030;
            case 0x16E034u: goto label_16e034;
            case 0x16E038u: goto label_16e038;
            case 0x16E03Cu: goto label_16e03c;
            case 0x16E040u: goto label_16e040;
            case 0x16E044u: goto label_16e044;
            case 0x16E048u: goto label_16e048;
            case 0x16E04Cu: goto label_16e04c;
            case 0x16E050u: goto label_16e050;
            case 0x16E054u: goto label_16e054;
            case 0x16E058u: goto label_16e058;
            case 0x16E05Cu: goto label_16e05c;
            case 0x16E060u: goto label_16e060;
            case 0x16E064u: goto label_16e064;
            case 0x16E068u: goto label_16e068;
            case 0x16E06Cu: goto label_16e06c;
            case 0x16E070u: goto label_16e070;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DF8Cu; }
            if (ctx->pc != 0x16DF8Cu) { return; }
        }
    }
    ctx->pc = 0x16DF8Cu;
label_16df8c:
    // 0x16df8c: 0x10000033
label_16df90:
    if (ctx->pc == 0x16DF90u) {
        ctx->pc = 0x16DF90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x16DF94u;
        goto label_16df94;
    }
    ctx->pc = 0x16DF8Cu;
    {
        const bool branch_taken_0x16df8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16DF90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x16df8c) {
            ctx->pc = 0x16E05Cu;
            goto label_16e05c;
        }
    }
    ctx->pc = 0x16DF94u;
label_16df94:
    // 0x16df94: 0xc059ffa
label_16df98:
    if (ctx->pc == 0x16DF98u) {
        ctx->pc = 0x16DF98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DF9Cu;
        goto label_16df9c;
    }
    ctx->pc = 0x16DF94u;
    SET_GPR_U32(ctx, 31, 0x16DF9Cu);
    ctx->pc = 0x16DF98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFormat_0x167fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DF9Cu; }
        else if (ctx->pc != 0x16DF9Cu) { ctx->pc = 0x16DF9Cu; }
    }
    if (ctx->pc != 0x16DF9Cu) { return; }
    ctx->pc = 0x16DF9Cu;
label_16df9c:
    // 0x16df9c: 0x24030004
    ctx->pc = 0x16df9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_16dfa0:
    // 0x16dfa0: 0x14430002
label_16dfa4:
    if (ctx->pc == 0x16DFA4u) {
        ctx->pc = 0x16DFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16DFA8u;
        goto label_16dfa8;
    }
    ctx->pc = 0x16DFA0u;
    {
        const bool branch_taken_0x16dfa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16DFA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x16dfa0) {
            ctx->pc = 0x16DFACu;
            goto label_16dfac;
        }
    }
    ctx->pc = 0x16DFA8u;
label_16dfa8:
    // 0x16dfa8: 0xa2620003
    ctx->pc = 0x16dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
label_16dfac:
    // 0x16dfac: 0xc059ffa
label_16dfb0:
    if (ctx->pc == 0x16DFB0u) {
        ctx->pc = 0x16DFB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DFB4u;
        goto label_16dfb4;
    }
    ctx->pc = 0x16DFACu;
    SET_GPR_U32(ctx, 31, 0x16DFB4u);
    ctx->pc = 0x16DFB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFormat_0x167fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFB4u; }
        else if (ctx->pc != 0x16DFB4u) { ctx->pc = 0x16DFB4u; }
    }
    if (ctx->pc != 0x16DFB4u) { return; }
    ctx->pc = 0x16DFB4u;
label_16dfb4:
    // 0x16dfb4: 0x24030002
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_16dfb8:
    // 0x16dfb8: 0x14430007
label_16dfbc:
    if (ctx->pc == 0x16DFBCu) {
        ctx->pc = 0x16DFBCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x16DFC0u;
        goto label_16dfc0;
    }
    ctx->pc = 0x16DFB8u;
    {
        const bool branch_taken_0x16dfb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16DFBCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x16dfb8) {
            ctx->pc = 0x16DFD8u;
            goto label_16dfd8;
        }
    }
    ctx->pc = 0x16DFC0u;
label_16dfc0:
    // 0x16dfc0: 0x24030040
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
label_16dfc4:
    // 0x16dfc4: 0x8fa50000
    ctx->pc = 0x16dfc4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16dfc8:
    // 0x16dfc8: 0x26640058
    ctx->pc = 0x16dfc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 88));
label_16dfcc:
    // 0x16dfcc: 0x28c20041
    ctx->pc = 0x16dfccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 65));
label_16dfd0:
    // 0x16dfd0: 0xc050c90
label_16dfd4:
    if (ctx->pc == 0x16DFD4u) {
        ctx->pc = 0x16DFD4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
        ctx->pc = 0x16DFD8u;
        goto label_16dfd8;
    }
    ctx->pc = 0x16DFD0u;
    SET_GPR_U32(ctx, 31, 0x16DFD8u);
    ctx->pc = 0x16DFD4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFD8u; }
        else if (ctx->pc != 0x16DFD8u) { ctx->pc = 0x16DFD8u; }
    }
    if (ctx->pc != 0x16DFD8u) { return; }
    ctx->pc = 0x16DFD8u;
label_16dfd8:
    // 0x16dfd8: 0xc059ffa
label_16dfdc:
    if (ctx->pc == 0x16DFDCu) {
        ctx->pc = 0x16DFDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DFE0u;
        goto label_16dfe0;
    }
    ctx->pc = 0x16DFD8u;
    SET_GPR_U32(ctx, 31, 0x16DFE0u);
    ctx->pc = 0x16DFDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFormat_0x167fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DFE0u; }
        else if (ctx->pc != 0x16DFE0u) { ctx->pc = 0x16DFE0u; }
    }
    if (ctx->pc != 0x16DFE0u) { return; }
    ctx->pc = 0x16DFE0u;
label_16dfe0:
    // 0x16dfe0: 0x2403000a
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_16dfe4:
    // 0x16dfe4: 0x14430009
label_16dfe8:
    if (ctx->pc == 0x16DFE8u) {
        ctx->pc = 0x16DFE8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16DFECu;
        goto label_16dfec;
    }
    ctx->pc = 0x16DFE4u;
    {
        const bool branch_taken_0x16dfe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16DFE8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x16dfe4) {
            ctx->pc = 0x16E00Cu;
            goto label_16e00c;
        }
    }
    ctx->pc = 0x16DFECu;
label_16dfec:
    // 0x16dfec: 0x8e230000
    ctx->pc = 0x16dfecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16dff0:
    // 0x16dff0: 0x220202d
    ctx->pc = 0x16dff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dff4:
    // 0x16dff4: 0x24050001
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16dff8:
    // 0x16dff8: 0x8c62001c
    ctx->pc = 0x16dff8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16dffc:
    // 0x16dffc: 0x40f809
label_16e000:
    if (ctx->pc == 0x16E000u) {
        ctx->pc = 0x16E000u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E004u;
        goto label_16e004;
    }
    ctx->pc = 0x16DFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E004u);
        ctx->pc = 0x16E000u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF08u: goto label_16df08;
            case 0x16DF0Cu: goto label_16df0c;
            case 0x16DF10u: goto label_16df10;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF1Cu: goto label_16df1c;
            case 0x16DF20u: goto label_16df20;
            case 0x16DF24u: goto label_16df24;
            case 0x16DF28u: goto label_16df28;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DF30u: goto label_16df30;
            case 0x16DF34u: goto label_16df34;
            case 0x16DF38u: goto label_16df38;
            case 0x16DF3Cu: goto label_16df3c;
            case 0x16DF40u: goto label_16df40;
            case 0x16DF44u: goto label_16df44;
            case 0x16DF48u: goto label_16df48;
            case 0x16DF4Cu: goto label_16df4c;
            case 0x16DF50u: goto label_16df50;
            case 0x16DF54u: goto label_16df54;
            case 0x16DF58u: goto label_16df58;
            case 0x16DF5Cu: goto label_16df5c;
            case 0x16DF60u: goto label_16df60;
            case 0x16DF64u: goto label_16df64;
            case 0x16DF68u: goto label_16df68;
            case 0x16DF6Cu: goto label_16df6c;
            case 0x16DF70u: goto label_16df70;
            case 0x16DF74u: goto label_16df74;
            case 0x16DF78u: goto label_16df78;
            case 0x16DF7Cu: goto label_16df7c;
            case 0x16DF80u: goto label_16df80;
            case 0x16DF84u: goto label_16df84;
            case 0x16DF88u: goto label_16df88;
            case 0x16DF8Cu: goto label_16df8c;
            case 0x16DF90u: goto label_16df90;
            case 0x16DF94u: goto label_16df94;
            case 0x16DF98u: goto label_16df98;
            case 0x16DF9Cu: goto label_16df9c;
            case 0x16DFA0u: goto label_16dfa0;
            case 0x16DFA4u: goto label_16dfa4;
            case 0x16DFA8u: goto label_16dfa8;
            case 0x16DFACu: goto label_16dfac;
            case 0x16DFB0u: goto label_16dfb0;
            case 0x16DFB4u: goto label_16dfb4;
            case 0x16DFB8u: goto label_16dfb8;
            case 0x16DFBCu: goto label_16dfbc;
            case 0x16DFC0u: goto label_16dfc0;
            case 0x16DFC4u: goto label_16dfc4;
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16DFCCu: goto label_16dfcc;
            case 0x16DFD0u: goto label_16dfd0;
            case 0x16DFD4u: goto label_16dfd4;
            case 0x16DFD8u: goto label_16dfd8;
            case 0x16DFDCu: goto label_16dfdc;
            case 0x16DFE0u: goto label_16dfe0;
            case 0x16DFE4u: goto label_16dfe4;
            case 0x16DFE8u: goto label_16dfe8;
            case 0x16DFECu: goto label_16dfec;
            case 0x16DFF0u: goto label_16dff0;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16DFF8u: goto label_16dff8;
            case 0x16DFFCu: goto label_16dffc;
            case 0x16E000u: goto label_16e000;
            case 0x16E004u: goto label_16e004;
            case 0x16E008u: goto label_16e008;
            case 0x16E00Cu: goto label_16e00c;
            case 0x16E010u: goto label_16e010;
            case 0x16E014u: goto label_16e014;
            case 0x16E018u: goto label_16e018;
            case 0x16E01Cu: goto label_16e01c;
            case 0x16E020u: goto label_16e020;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            case 0x16E02Cu: goto label_16e02c;
            case 0x16E030u: goto label_16e030;
            case 0x16E034u: goto label_16e034;
            case 0x16E038u: goto label_16e038;
            case 0x16E03Cu: goto label_16e03c;
            case 0x16E040u: goto label_16e040;
            case 0x16E044u: goto label_16e044;
            case 0x16E048u: goto label_16e048;
            case 0x16E04Cu: goto label_16e04c;
            case 0x16E050u: goto label_16e050;
            case 0x16E054u: goto label_16e054;
            case 0x16E058u: goto label_16e058;
            case 0x16E05Cu: goto label_16e05c;
            case 0x16E060u: goto label_16e060;
            case 0x16E064u: goto label_16e064;
            case 0x16E068u: goto label_16e068;
            case 0x16E06Cu: goto label_16e06c;
            case 0x16E070u: goto label_16e070;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E004u; }
            if (ctx->pc != 0x16E004u) { return; }
        }
    }
    ctx->pc = 0x16E004u;
label_16e004:
    // 0x16e004: 0x10000013
label_16e008:
    if (ctx->pc == 0x16E008u) {
        ctx->pc = 0x16E008u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16E00Cu;
        goto label_16e00c;
    }
    ctx->pc = 0x16E004u;
    {
        const bool branch_taken_0x16e004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E008u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x16e004) {
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16E00Cu;
label_16e00c:
    // 0x16e00c: 0x240282d
    ctx->pc = 0x16e00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e010:
    // 0x16e010: 0x3a0202d
    ctx->pc = 0x16e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16e014:
    // 0x16e014: 0x3a0302d
    ctx->pc = 0x16e014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16e018:
    // 0x16e018: 0xc05f4b0
label_16e01c:
    if (ctx->pc == 0x16E01Cu) {
        ctx->pc = 0x16E01Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E020u;
        goto label_16e020;
    }
    ctx->pc = 0x16E018u;
    SET_GPR_U32(ctx, 31, 0x16E020u);
    ctx->pc = 0x16E01Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E020u; }
        else if (ctx->pc != 0x16E020u) { ctx->pc = 0x16E020u; }
    }
    if (ctx->pc != 0x16E020u) { return; }
    ctx->pc = 0x16E020u;
label_16e020:
    // 0x16e020: 0x8e230000
    ctx->pc = 0x16e020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e024:
    // 0x16e024: 0x220202d
    ctx->pc = 0x16e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e028:
    // 0x16e028: 0x282d
    ctx->pc = 0x16e028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e02c:
    // 0x16e02c: 0x8c620020
    ctx->pc = 0x16e02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_16e030:
    // 0x16e030: 0x40f809
label_16e034:
    if (ctx->pc == 0x16E034u) {
        ctx->pc = 0x16E034u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E038u;
        goto label_16e038;
    }
    ctx->pc = 0x16E030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E038u);
        ctx->pc = 0x16E034u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF08u: goto label_16df08;
            case 0x16DF0Cu: goto label_16df0c;
            case 0x16DF10u: goto label_16df10;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF1Cu: goto label_16df1c;
            case 0x16DF20u: goto label_16df20;
            case 0x16DF24u: goto label_16df24;
            case 0x16DF28u: goto label_16df28;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DF30u: goto label_16df30;
            case 0x16DF34u: goto label_16df34;
            case 0x16DF38u: goto label_16df38;
            case 0x16DF3Cu: goto label_16df3c;
            case 0x16DF40u: goto label_16df40;
            case 0x16DF44u: goto label_16df44;
            case 0x16DF48u: goto label_16df48;
            case 0x16DF4Cu: goto label_16df4c;
            case 0x16DF50u: goto label_16df50;
            case 0x16DF54u: goto label_16df54;
            case 0x16DF58u: goto label_16df58;
            case 0x16DF5Cu: goto label_16df5c;
            case 0x16DF60u: goto label_16df60;
            case 0x16DF64u: goto label_16df64;
            case 0x16DF68u: goto label_16df68;
            case 0x16DF6Cu: goto label_16df6c;
            case 0x16DF70u: goto label_16df70;
            case 0x16DF74u: goto label_16df74;
            case 0x16DF78u: goto label_16df78;
            case 0x16DF7Cu: goto label_16df7c;
            case 0x16DF80u: goto label_16df80;
            case 0x16DF84u: goto label_16df84;
            case 0x16DF88u: goto label_16df88;
            case 0x16DF8Cu: goto label_16df8c;
            case 0x16DF90u: goto label_16df90;
            case 0x16DF94u: goto label_16df94;
            case 0x16DF98u: goto label_16df98;
            case 0x16DF9Cu: goto label_16df9c;
            case 0x16DFA0u: goto label_16dfa0;
            case 0x16DFA4u: goto label_16dfa4;
            case 0x16DFA8u: goto label_16dfa8;
            case 0x16DFACu: goto label_16dfac;
            case 0x16DFB0u: goto label_16dfb0;
            case 0x16DFB4u: goto label_16dfb4;
            case 0x16DFB8u: goto label_16dfb8;
            case 0x16DFBCu: goto label_16dfbc;
            case 0x16DFC0u: goto label_16dfc0;
            case 0x16DFC4u: goto label_16dfc4;
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16DFCCu: goto label_16dfcc;
            case 0x16DFD0u: goto label_16dfd0;
            case 0x16DFD4u: goto label_16dfd4;
            case 0x16DFD8u: goto label_16dfd8;
            case 0x16DFDCu: goto label_16dfdc;
            case 0x16DFE0u: goto label_16dfe0;
            case 0x16DFE4u: goto label_16dfe4;
            case 0x16DFE8u: goto label_16dfe8;
            case 0x16DFECu: goto label_16dfec;
            case 0x16DFF0u: goto label_16dff0;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16DFF8u: goto label_16dff8;
            case 0x16DFFCu: goto label_16dffc;
            case 0x16E000u: goto label_16e000;
            case 0x16E004u: goto label_16e004;
            case 0x16E008u: goto label_16e008;
            case 0x16E00Cu: goto label_16e00c;
            case 0x16E010u: goto label_16e010;
            case 0x16E014u: goto label_16e014;
            case 0x16E018u: goto label_16e018;
            case 0x16E01Cu: goto label_16e01c;
            case 0x16E020u: goto label_16e020;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            case 0x16E02Cu: goto label_16e02c;
            case 0x16E030u: goto label_16e030;
            case 0x16E034u: goto label_16e034;
            case 0x16E038u: goto label_16e038;
            case 0x16E03Cu: goto label_16e03c;
            case 0x16E040u: goto label_16e040;
            case 0x16E044u: goto label_16e044;
            case 0x16E048u: goto label_16e048;
            case 0x16E04Cu: goto label_16e04c;
            case 0x16E050u: goto label_16e050;
            case 0x16E054u: goto label_16e054;
            case 0x16E058u: goto label_16e058;
            case 0x16E05Cu: goto label_16e05c;
            case 0x16E060u: goto label_16e060;
            case 0x16E064u: goto label_16e064;
            case 0x16E068u: goto label_16e068;
            case 0x16E06Cu: goto label_16e06c;
            case 0x16E070u: goto label_16e070;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E038u; }
            if (ctx->pc != 0x16E038u) { return; }
        }
    }
    ctx->pc = 0x16E038u;
label_16e038:
    // 0x16e038: 0x8e230000
    ctx->pc = 0x16e038u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e03c:
    // 0x16e03c: 0x220202d
    ctx->pc = 0x16e03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e040:
    // 0x16e040: 0x200302d
    ctx->pc = 0x16e040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e044:
    // 0x16e044: 0x8c62001c
    ctx->pc = 0x16e044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16e048:
    // 0x16e048: 0x40f809
label_16e04c:
    if (ctx->pc == 0x16E04Cu) {
        ctx->pc = 0x16E04Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16E050u;
        goto label_16e050;
    }
    ctx->pc = 0x16E048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E050u);
        ctx->pc = 0x16E04Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF08u: goto label_16df08;
            case 0x16DF0Cu: goto label_16df0c;
            case 0x16DF10u: goto label_16df10;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF1Cu: goto label_16df1c;
            case 0x16DF20u: goto label_16df20;
            case 0x16DF24u: goto label_16df24;
            case 0x16DF28u: goto label_16df28;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DF30u: goto label_16df30;
            case 0x16DF34u: goto label_16df34;
            case 0x16DF38u: goto label_16df38;
            case 0x16DF3Cu: goto label_16df3c;
            case 0x16DF40u: goto label_16df40;
            case 0x16DF44u: goto label_16df44;
            case 0x16DF48u: goto label_16df48;
            case 0x16DF4Cu: goto label_16df4c;
            case 0x16DF50u: goto label_16df50;
            case 0x16DF54u: goto label_16df54;
            case 0x16DF58u: goto label_16df58;
            case 0x16DF5Cu: goto label_16df5c;
            case 0x16DF60u: goto label_16df60;
            case 0x16DF64u: goto label_16df64;
            case 0x16DF68u: goto label_16df68;
            case 0x16DF6Cu: goto label_16df6c;
            case 0x16DF70u: goto label_16df70;
            case 0x16DF74u: goto label_16df74;
            case 0x16DF78u: goto label_16df78;
            case 0x16DF7Cu: goto label_16df7c;
            case 0x16DF80u: goto label_16df80;
            case 0x16DF84u: goto label_16df84;
            case 0x16DF88u: goto label_16df88;
            case 0x16DF8Cu: goto label_16df8c;
            case 0x16DF90u: goto label_16df90;
            case 0x16DF94u: goto label_16df94;
            case 0x16DF98u: goto label_16df98;
            case 0x16DF9Cu: goto label_16df9c;
            case 0x16DFA0u: goto label_16dfa0;
            case 0x16DFA4u: goto label_16dfa4;
            case 0x16DFA8u: goto label_16dfa8;
            case 0x16DFACu: goto label_16dfac;
            case 0x16DFB0u: goto label_16dfb0;
            case 0x16DFB4u: goto label_16dfb4;
            case 0x16DFB8u: goto label_16dfb8;
            case 0x16DFBCu: goto label_16dfbc;
            case 0x16DFC0u: goto label_16dfc0;
            case 0x16DFC4u: goto label_16dfc4;
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16DFCCu: goto label_16dfcc;
            case 0x16DFD0u: goto label_16dfd0;
            case 0x16DFD4u: goto label_16dfd4;
            case 0x16DFD8u: goto label_16dfd8;
            case 0x16DFDCu: goto label_16dfdc;
            case 0x16DFE0u: goto label_16dfe0;
            case 0x16DFE4u: goto label_16dfe4;
            case 0x16DFE8u: goto label_16dfe8;
            case 0x16DFECu: goto label_16dfec;
            case 0x16DFF0u: goto label_16dff0;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16DFF8u: goto label_16dff8;
            case 0x16DFFCu: goto label_16dffc;
            case 0x16E000u: goto label_16e000;
            case 0x16E004u: goto label_16e004;
            case 0x16E008u: goto label_16e008;
            case 0x16E00Cu: goto label_16e00c;
            case 0x16E010u: goto label_16e010;
            case 0x16E014u: goto label_16e014;
            case 0x16E018u: goto label_16e018;
            case 0x16E01Cu: goto label_16e01c;
            case 0x16E020u: goto label_16e020;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            case 0x16E02Cu: goto label_16e02c;
            case 0x16E030u: goto label_16e030;
            case 0x16E034u: goto label_16e034;
            case 0x16E038u: goto label_16e038;
            case 0x16E03Cu: goto label_16e03c;
            case 0x16E040u: goto label_16e040;
            case 0x16E044u: goto label_16e044;
            case 0x16E048u: goto label_16e048;
            case 0x16E04Cu: goto label_16e04c;
            case 0x16E050u: goto label_16e050;
            case 0x16E054u: goto label_16e054;
            case 0x16E058u: goto label_16e058;
            case 0x16E05Cu: goto label_16e05c;
            case 0x16E060u: goto label_16e060;
            case 0x16E064u: goto label_16e064;
            case 0x16E068u: goto label_16e068;
            case 0x16E06Cu: goto label_16e06c;
            case 0x16E070u: goto label_16e070;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E050u; }
            if (ctx->pc != 0x16E050u) { return; }
        }
    }
    ctx->pc = 0x16E050u;
label_16e050:
    // 0x16e050: 0x24020002
    ctx->pc = 0x16e050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_16e054:
    // 0x16e054: 0xa2620001
    ctx->pc = 0x16e054u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_16e058:
    // 0x16e058: 0xdfbf0060
    ctx->pc = 0x16e058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16e05c:
    // 0x16e05c: 0xdfb30050
    ctx->pc = 0x16e05cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e060:
    // 0x16e060: 0xdfb20040
    ctx->pc = 0x16e060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16e064:
    // 0x16e064: 0xdfb10030
    ctx->pc = 0x16e064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e068:
    // 0x16e068: 0xdfb00020
    ctx->pc = 0x16e068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e06c:
    // 0x16e06c: 0x3e00008
label_16e070:
    if (ctx->pc == 0x16E070u) {
        ctx->pc = 0x16E070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16E074u;
        goto label_fallthrough_0x16e06c;
    }
    ctx->pc = 0x16E06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E070u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF08u: goto label_16df08;
            case 0x16DF0Cu: goto label_16df0c;
            case 0x16DF10u: goto label_16df10;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF1Cu: goto label_16df1c;
            case 0x16DF20u: goto label_16df20;
            case 0x16DF24u: goto label_16df24;
            case 0x16DF28u: goto label_16df28;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DF30u: goto label_16df30;
            case 0x16DF34u: goto label_16df34;
            case 0x16DF38u: goto label_16df38;
            case 0x16DF3Cu: goto label_16df3c;
            case 0x16DF40u: goto label_16df40;
            case 0x16DF44u: goto label_16df44;
            case 0x16DF48u: goto label_16df48;
            case 0x16DF4Cu: goto label_16df4c;
            case 0x16DF50u: goto label_16df50;
            case 0x16DF54u: goto label_16df54;
            case 0x16DF58u: goto label_16df58;
            case 0x16DF5Cu: goto label_16df5c;
            case 0x16DF60u: goto label_16df60;
            case 0x16DF64u: goto label_16df64;
            case 0x16DF68u: goto label_16df68;
            case 0x16DF6Cu: goto label_16df6c;
            case 0x16DF70u: goto label_16df70;
            case 0x16DF74u: goto label_16df74;
            case 0x16DF78u: goto label_16df78;
            case 0x16DF7Cu: goto label_16df7c;
            case 0x16DF80u: goto label_16df80;
            case 0x16DF84u: goto label_16df84;
            case 0x16DF88u: goto label_16df88;
            case 0x16DF8Cu: goto label_16df8c;
            case 0x16DF90u: goto label_16df90;
            case 0x16DF94u: goto label_16df94;
            case 0x16DF98u: goto label_16df98;
            case 0x16DF9Cu: goto label_16df9c;
            case 0x16DFA0u: goto label_16dfa0;
            case 0x16DFA4u: goto label_16dfa4;
            case 0x16DFA8u: goto label_16dfa8;
            case 0x16DFACu: goto label_16dfac;
            case 0x16DFB0u: goto label_16dfb0;
            case 0x16DFB4u: goto label_16dfb4;
            case 0x16DFB8u: goto label_16dfb8;
            case 0x16DFBCu: goto label_16dfbc;
            case 0x16DFC0u: goto label_16dfc0;
            case 0x16DFC4u: goto label_16dfc4;
            case 0x16DFC8u: goto label_16dfc8;
            case 0x16DFCCu: goto label_16dfcc;
            case 0x16DFD0u: goto label_16dfd0;
            case 0x16DFD4u: goto label_16dfd4;
            case 0x16DFD8u: goto label_16dfd8;
            case 0x16DFDCu: goto label_16dfdc;
            case 0x16DFE0u: goto label_16dfe0;
            case 0x16DFE4u: goto label_16dfe4;
            case 0x16DFE8u: goto label_16dfe8;
            case 0x16DFECu: goto label_16dfec;
            case 0x16DFF0u: goto label_16dff0;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16DFF8u: goto label_16dff8;
            case 0x16DFFCu: goto label_16dffc;
            case 0x16E000u: goto label_16e000;
            case 0x16E004u: goto label_16e004;
            case 0x16E008u: goto label_16e008;
            case 0x16E00Cu: goto label_16e00c;
            case 0x16E010u: goto label_16e010;
            case 0x16E014u: goto label_16e014;
            case 0x16E018u: goto label_16e018;
            case 0x16E01Cu: goto label_16e01c;
            case 0x16E020u: goto label_16e020;
            case 0x16E024u: goto label_16e024;
            case 0x16E028u: goto label_16e028;
            case 0x16E02Cu: goto label_16e02c;
            case 0x16E030u: goto label_16e030;
            case 0x16E034u: goto label_16e034;
            case 0x16E038u: goto label_16e038;
            case 0x16E03Cu: goto label_16e03c;
            case 0x16E040u: goto label_16e040;
            case 0x16E044u: goto label_16e044;
            case 0x16E048u: goto label_16e048;
            case 0x16E04Cu: goto label_16e04c;
            case 0x16E050u: goto label_16e050;
            case 0x16E054u: goto label_16e054;
            case 0x16E058u: goto label_16e058;
            case 0x16E05Cu: goto label_16e05c;
            case 0x16E060u: goto label_16e060;
            case 0x16E064u: goto label_16e064;
            case 0x16E068u: goto label_16e068;
            case 0x16E06Cu: goto label_16e06c;
            case 0x16E070u: goto label_16e070;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e06c:
    ctx->pc = 0x16E074u;
}
