#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneWav8
// Address: 0x168fc8 - 0x16914c
void ADXB_ExecOneWav8_0x168fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneWav8");


    ctx->pc = 0x168fc8u;

label_168fc8:
    // 0x168fc8: 0x27bdffc0
    ctx->pc = 0x168fc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_168fcc:
    // 0x168fcc: 0x24020001
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168fd0:
    // 0x168fd0: 0xffb10010
    ctx->pc = 0x168fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_168fd4:
    // 0x168fd4: 0xffb00000
    ctx->pc = 0x168fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_168fd8:
    // 0x168fd8: 0xffbf0030
    ctx->pc = 0x168fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168fdc:
    // 0x168fdc: 0x80802d
    ctx->pc = 0x168fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168fe0:
    // 0x168fe0: 0xffb20020
    ctx->pc = 0x168fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_168fe4:
    // 0x168fe4: 0x26110050
    ctx->pc = 0x168fe4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_168fe8:
    // 0x168fe8: 0x8e030004
    ctx->pc = 0x168fe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_168fec:
    // 0x168fec: 0x14620047
label_168ff0:
    if (ctx->pc == 0x168FF0u) {
        ctx->pc = 0x168FF0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x168FF4u;
        goto label_168ff4;
    }
    ctx->pc = 0x168FECu;
    {
        const bool branch_taken_0x168fec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168FF0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x168fec) {
            ctx->pc = 0x16910Cu;
            goto label_16910c;
        }
    }
    ctx->pc = 0x168FF4u;
label_168ff4:
    // 0x168ff4: 0xc05cfec
label_168ff8:
    if (ctx->pc == 0x168FF8u) {
        ctx->pc = 0x168FF8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x168FFCu;
        goto label_168ffc;
    }
    ctx->pc = 0x168FF4u;
    SET_GPR_U32(ctx, 31, 0x168FFCu);
    ctx->pc = 0x168FF8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FFCu; }
        else if (ctx->pc != 0x168FFCu) { ctx->pc = 0x168FFCu; }
    }
    if (ctx->pc != 0x168FFCu) { return; }
    ctx->pc = 0x168FFCu;
label_168ffc:
    // 0x168ffc: 0x54400043
label_169000:
    if (ctx->pc == 0x169000u) {
        ctx->pc = 0x169000u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x169004u;
        goto label_169004;
    }
    ctx->pc = 0x168FFCu;
    {
        const bool branch_taken_0x168ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168ffc) {
            ctx->pc = 0x169000u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x16910Cu;
            goto label_16910c;
        }
    }
    ctx->pc = 0x169004u;
label_169004:
    // 0x169004: 0x8e020088
    ctx->pc = 0x169004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_169008:
    // 0x169008: 0x26050070
    ctx->pc = 0x169008u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_16900c:
    // 0x16900c: 0x8e04008c
    ctx->pc = 0x16900cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_169010:
    // 0x169010: 0x26060074
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_169014:
    // 0x169014: 0x40f809
label_169018:
    if (ctx->pc == 0x169018u) {
        ctx->pc = 0x169018u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x16901Cu;
        goto label_16901c;
    }
    ctx->pc = 0x169014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16901Cu);
        ctx->pc = 0x169018u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168FC8u: goto label_168fc8;
            case 0x168FCCu: goto label_168fcc;
            case 0x168FD0u: goto label_168fd0;
            case 0x168FD4u: goto label_168fd4;
            case 0x168FD8u: goto label_168fd8;
            case 0x168FDCu: goto label_168fdc;
            case 0x168FE0u: goto label_168fe0;
            case 0x168FE4u: goto label_168fe4;
            case 0x168FE8u: goto label_168fe8;
            case 0x168FECu: goto label_168fec;
            case 0x168FF0u: goto label_168ff0;
            case 0x168FF4u: goto label_168ff4;
            case 0x168FF8u: goto label_168ff8;
            case 0x168FFCu: goto label_168ffc;
            case 0x169000u: goto label_169000;
            case 0x169004u: goto label_169004;
            case 0x169008u: goto label_169008;
            case 0x16900Cu: goto label_16900c;
            case 0x169010u: goto label_169010;
            case 0x169014u: goto label_169014;
            case 0x169018u: goto label_169018;
            case 0x16901Cu: goto label_16901c;
            case 0x169020u: goto label_169020;
            case 0x169024u: goto label_169024;
            case 0x169028u: goto label_169028;
            case 0x16902Cu: goto label_16902c;
            case 0x169030u: goto label_169030;
            case 0x169034u: goto label_169034;
            case 0x169038u: goto label_169038;
            case 0x16903Cu: goto label_16903c;
            case 0x169040u: goto label_169040;
            case 0x169044u: goto label_169044;
            case 0x169048u: goto label_169048;
            case 0x16904Cu: goto label_16904c;
            case 0x169050u: goto label_169050;
            case 0x169054u: goto label_169054;
            case 0x169058u: goto label_169058;
            case 0x16905Cu: goto label_16905c;
            case 0x169060u: goto label_169060;
            case 0x169064u: goto label_169064;
            case 0x169068u: goto label_169068;
            case 0x16906Cu: goto label_16906c;
            case 0x169070u: goto label_169070;
            case 0x169074u: goto label_169074;
            case 0x169078u: goto label_169078;
            case 0x16907Cu: goto label_16907c;
            case 0x169080u: goto label_169080;
            case 0x169084u: goto label_169084;
            case 0x169088u: goto label_169088;
            case 0x16908Cu: goto label_16908c;
            case 0x169090u: goto label_169090;
            case 0x169094u: goto label_169094;
            case 0x169098u: goto label_169098;
            case 0x16909Cu: goto label_16909c;
            case 0x1690A0u: goto label_1690a0;
            case 0x1690A4u: goto label_1690a4;
            case 0x1690A8u: goto label_1690a8;
            case 0x1690ACu: goto label_1690ac;
            case 0x1690B0u: goto label_1690b0;
            case 0x1690B4u: goto label_1690b4;
            case 0x1690B8u: goto label_1690b8;
            case 0x1690BCu: goto label_1690bc;
            case 0x1690C0u: goto label_1690c0;
            case 0x1690C4u: goto label_1690c4;
            case 0x1690C8u: goto label_1690c8;
            case 0x1690CCu: goto label_1690cc;
            case 0x1690D0u: goto label_1690d0;
            case 0x1690D4u: goto label_1690d4;
            case 0x1690D8u: goto label_1690d8;
            case 0x1690DCu: goto label_1690dc;
            case 0x1690E0u: goto label_1690e0;
            case 0x1690E4u: goto label_1690e4;
            case 0x1690E8u: goto label_1690e8;
            case 0x1690ECu: goto label_1690ec;
            case 0x1690F0u: goto label_1690f0;
            case 0x1690F4u: goto label_1690f4;
            case 0x1690F8u: goto label_1690f8;
            case 0x1690FCu: goto label_1690fc;
            case 0x169100u: goto label_169100;
            case 0x169104u: goto label_169104;
            case 0x169108u: goto label_169108;
            case 0x16910Cu: goto label_16910c;
            case 0x169110u: goto label_169110;
            case 0x169114u: goto label_169114;
            case 0x169118u: goto label_169118;
            case 0x16911Cu: goto label_16911c;
            case 0x169120u: goto label_169120;
            case 0x169124u: goto label_169124;
            case 0x169128u: goto label_169128;
            case 0x16912Cu: goto label_16912c;
            case 0x169130u: goto label_169130;
            case 0x169134u: goto label_169134;
            case 0x169138u: goto label_169138;
            case 0x16913Cu: goto label_16913c;
            case 0x169140u: goto label_169140;
            case 0x169144u: goto label_169144;
            case 0x169148u: goto label_169148;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16901Cu; }
            if (ctx->pc != 0x16901Cu) { return; }
        }
    }
    ctx->pc = 0x16901Cu;
label_16901c:
    // 0x16901c: 0x8e290020
    ctx->pc = 0x16901cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_169020:
    // 0x169020: 0x24060002
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_169024:
    // 0x169024: 0x8e230018
    ctx->pc = 0x169024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_169028:
    // 0x169028: 0x8e2a0014
    ctx->pc = 0x169028u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_16902c:
    // 0x16902c: 0x91040
    ctx->pc = 0x16902cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
label_169030:
    // 0x169030: 0x8e240024
    ctx->pc = 0x169030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_169034:
    // 0x169034: 0x693823
    ctx->pc = 0x169034u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_169038:
    // 0x169038: 0x1425821
    ctx->pc = 0x169038u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_16903c:
    // 0x16903c: 0x8e250004
    ctx->pc = 0x16903cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_169040:
    // 0x169040: 0x87102a
    ctx->pc = 0x169040u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_169044:
    // 0x169044: 0x8203000e
    ctx->pc = 0x169044u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_169048:
    // 0x169048: 0x82380b
    ctx->pc = 0x169048u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
label_16904c:
    // 0x16904c: 0x9208000e
    ctx->pc = 0x16904cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_169050:
    // 0x169050: 0xa7102a
    ctx->pc = 0x169050u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
label_169054:
    // 0x169054: 0x14660019
label_169058:
    if (ctx->pc == 0x169058u) {
        ctx->pc = 0x169058u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        ctx->pc = 0x16905Cu;
        goto label_16905c;
    }
    ctx->pc = 0x169054u;
    {
        const bool branch_taken_0x169054 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x169058u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        if (branch_taken_0x169054) {
            ctx->pc = 0x1690BCu;
            goto label_1690bc;
        }
    }
    ctx->pc = 0x16905Cu;
label_16905c:
    // 0x16905c: 0x8e22001c
    ctx->pc = 0x16905cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_169060:
    // 0x169060: 0x491021
    ctx->pc = 0x169060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_169064:
    // 0x169064: 0x21040
    ctx->pc = 0x169064u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_169068:
    // 0x169068: 0x18e00021
label_16906c:
    if (ctx->pc == 0x16906Cu) {
        ctx->pc = 0x16906Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x169070u;
        goto label_169070;
    }
    ctx->pc = 0x169068u;
    {
        const bool branch_taken_0x169068 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x16906Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        if (branch_taken_0x169068) {
            ctx->pc = 0x1690F0u;
            goto label_1690f0;
        }
    }
    ctx->pc = 0x169070u;
label_169070:
    // 0x169070: 0x40302d
    ctx->pc = 0x169070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169074:
    // 0x169074: 0x160282d
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_169078:
    // 0x169078: 0x240182d
    ctx->pc = 0x169078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16907c:
    // 0x16907c: 0xe0202d
    ctx->pc = 0x16907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_169080:
    // 0x169080: 0x90620000
    ctx->pc = 0x169080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_169084:
    // 0x169084: 0x2484ffff
    ctx->pc = 0x169084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_169088:
    // 0x169088: 0x2442ff80
    ctx->pc = 0x169088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967168));
label_16908c:
    // 0x16908c: 0x21200
    ctx->pc = 0x16908cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_169090:
    // 0x169090: 0xa4a20000
    ctx->pc = 0x169090u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_169094:
    // 0x169094: 0x24a50002
    ctx->pc = 0x169094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_169098:
    // 0x169098: 0x90620001
    ctx->pc = 0x169098u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_16909c:
    // 0x16909c: 0x24630002
    ctx->pc = 0x16909cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1690a0:
    // 0x1690a0: 0x2442ff80
    ctx->pc = 0x1690a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967168));
label_1690a4:
    // 0x1690a4: 0x21200
    ctx->pc = 0x1690a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_1690a8:
    // 0x1690a8: 0xa4c20000
    ctx->pc = 0x1690a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_1690ac:
    // 0x1690ac: 0x1480fff4
label_1690b0:
    if (ctx->pc == 0x1690B0u) {
        ctx->pc = 0x1690B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1690B4u;
        goto label_1690b4;
    }
    ctx->pc = 0x1690ACu;
    {
        const bool branch_taken_0x1690ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1690B0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1690ac) {
            ctx->pc = 0x169080u;
            goto label_169080;
        }
    }
    ctx->pc = 0x1690B4u;
label_1690b4:
    // 0x1690b4: 0x1000000e
label_1690b8:
    if (ctx->pc == 0x1690B8u) {
        ctx->pc = 0x1690B8u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x1690BCu;
        goto label_1690bc;
    }
    ctx->pc = 0x1690B4u;
    {
        const bool branch_taken_0x1690b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1690B8u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x1690b4) {
            ctx->pc = 0x1690F0u;
            goto label_1690f0;
        }
    }
    ctx->pc = 0x1690BCu;
label_1690bc:
    // 0x1690bc: 0x18e0000c
label_1690c0:
    if (ctx->pc == 0x1690C0u) {
        ctx->pc = 0x1690C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1690C4u;
        goto label_1690c4;
    }
    ctx->pc = 0x1690BCu;
    {
        const bool branch_taken_0x1690bc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1690C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1690bc) {
            ctx->pc = 0x1690F0u;
            goto label_1690f0;
        }
    }
    ctx->pc = 0x1690C4u;
label_1690c4:
    // 0x1690c4: 0x160282d
    ctx->pc = 0x1690c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1690c8:
    // 0x1690c8: 0x2441021
    ctx->pc = 0x1690c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1690cc:
    // 0x1690cc: 0x90430000
    ctx->pc = 0x1690ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1690d0:
    // 0x1690d0: 0x24840001
    ctx->pc = 0x1690d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1690d4:
    // 0x1690d4: 0x87102a
    ctx->pc = 0x1690d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_1690d8:
    // 0x1690d8: 0x2463ff80
    ctx->pc = 0x1690d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967168));
label_1690dc:
    // 0x1690dc: 0x31a00
    ctx->pc = 0x1690dcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_1690e0:
    // 0x1690e0: 0xa4a30000
    ctx->pc = 0x1690e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1690e4:
    // 0x1690e4: 0x1440fff8
label_1690e8:
    if (ctx->pc == 0x1690E8u) {
        ctx->pc = 0x1690E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1690ECu;
        goto label_1690ec;
    }
    ctx->pc = 0x1690E4u;
    {
        const bool branch_taken_0x1690e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1690E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1690e4) {
            ctx->pc = 0x1690C8u;
            goto label_1690c8;
        }
    }
    ctx->pc = 0x1690ECu;
label_1690ec:
    // 0x1690ec: 0x9208000e
    ctx->pc = 0x1690ecu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1690f0:
    // 0x1690f0: 0x81600
    ctx->pc = 0x1690f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 24));
label_1690f4:
    // 0x1690f4: 0x24030002
    ctx->pc = 0x1690f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1690f8:
    // 0x1690f8: 0x21603
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1690fc:
    // 0x1690fc: 0xae030004
    ctx->pc = 0x1690fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_169100:
    // 0x169100: 0xe21018
    ctx->pc = 0x169100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_169104:
    // 0x169104: 0xae0700a0
    ctx->pc = 0x169104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
label_169108:
    // 0x169108: 0xae0200a4
    ctx->pc = 0x169108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_16910c:
    // 0x16910c: 0x24020002
    ctx->pc = 0x16910cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_169110:
    // 0x169110: 0x14620009
label_169114:
    if (ctx->pc == 0x169114u) {
        ctx->pc = 0x169114u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x169118u;
        goto label_169118;
    }
    ctx->pc = 0x169110u;
    {
        const bool branch_taken_0x169110 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x169114u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x169110) {
            ctx->pc = 0x169138u;
            goto label_169138;
        }
    }
    ctx->pc = 0x169118u;
label_169118:
    // 0x169118: 0x8e030090
    ctx->pc = 0x169118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_16911c:
    // 0x16911c: 0x8e040094
    ctx->pc = 0x16911cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_169120:
    // 0x169120: 0x8e0500a4
    ctx->pc = 0x169120u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_169124:
    // 0x169124: 0x60f809
label_169128:
    if (ctx->pc == 0x169128u) {
        ctx->pc = 0x169128u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x16912Cu;
        goto label_16912c;
    }
    ctx->pc = 0x169124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16912Cu);
        ctx->pc = 0x169128u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168FC8u: goto label_168fc8;
            case 0x168FCCu: goto label_168fcc;
            case 0x168FD0u: goto label_168fd0;
            case 0x168FD4u: goto label_168fd4;
            case 0x168FD8u: goto label_168fd8;
            case 0x168FDCu: goto label_168fdc;
            case 0x168FE0u: goto label_168fe0;
            case 0x168FE4u: goto label_168fe4;
            case 0x168FE8u: goto label_168fe8;
            case 0x168FECu: goto label_168fec;
            case 0x168FF0u: goto label_168ff0;
            case 0x168FF4u: goto label_168ff4;
            case 0x168FF8u: goto label_168ff8;
            case 0x168FFCu: goto label_168ffc;
            case 0x169000u: goto label_169000;
            case 0x169004u: goto label_169004;
            case 0x169008u: goto label_169008;
            case 0x16900Cu: goto label_16900c;
            case 0x169010u: goto label_169010;
            case 0x169014u: goto label_169014;
            case 0x169018u: goto label_169018;
            case 0x16901Cu: goto label_16901c;
            case 0x169020u: goto label_169020;
            case 0x169024u: goto label_169024;
            case 0x169028u: goto label_169028;
            case 0x16902Cu: goto label_16902c;
            case 0x169030u: goto label_169030;
            case 0x169034u: goto label_169034;
            case 0x169038u: goto label_169038;
            case 0x16903Cu: goto label_16903c;
            case 0x169040u: goto label_169040;
            case 0x169044u: goto label_169044;
            case 0x169048u: goto label_169048;
            case 0x16904Cu: goto label_16904c;
            case 0x169050u: goto label_169050;
            case 0x169054u: goto label_169054;
            case 0x169058u: goto label_169058;
            case 0x16905Cu: goto label_16905c;
            case 0x169060u: goto label_169060;
            case 0x169064u: goto label_169064;
            case 0x169068u: goto label_169068;
            case 0x16906Cu: goto label_16906c;
            case 0x169070u: goto label_169070;
            case 0x169074u: goto label_169074;
            case 0x169078u: goto label_169078;
            case 0x16907Cu: goto label_16907c;
            case 0x169080u: goto label_169080;
            case 0x169084u: goto label_169084;
            case 0x169088u: goto label_169088;
            case 0x16908Cu: goto label_16908c;
            case 0x169090u: goto label_169090;
            case 0x169094u: goto label_169094;
            case 0x169098u: goto label_169098;
            case 0x16909Cu: goto label_16909c;
            case 0x1690A0u: goto label_1690a0;
            case 0x1690A4u: goto label_1690a4;
            case 0x1690A8u: goto label_1690a8;
            case 0x1690ACu: goto label_1690ac;
            case 0x1690B0u: goto label_1690b0;
            case 0x1690B4u: goto label_1690b4;
            case 0x1690B8u: goto label_1690b8;
            case 0x1690BCu: goto label_1690bc;
            case 0x1690C0u: goto label_1690c0;
            case 0x1690C4u: goto label_1690c4;
            case 0x1690C8u: goto label_1690c8;
            case 0x1690CCu: goto label_1690cc;
            case 0x1690D0u: goto label_1690d0;
            case 0x1690D4u: goto label_1690d4;
            case 0x1690D8u: goto label_1690d8;
            case 0x1690DCu: goto label_1690dc;
            case 0x1690E0u: goto label_1690e0;
            case 0x1690E4u: goto label_1690e4;
            case 0x1690E8u: goto label_1690e8;
            case 0x1690ECu: goto label_1690ec;
            case 0x1690F0u: goto label_1690f0;
            case 0x1690F4u: goto label_1690f4;
            case 0x1690F8u: goto label_1690f8;
            case 0x1690FCu: goto label_1690fc;
            case 0x169100u: goto label_169100;
            case 0x169104u: goto label_169104;
            case 0x169108u: goto label_169108;
            case 0x16910Cu: goto label_16910c;
            case 0x169110u: goto label_169110;
            case 0x169114u: goto label_169114;
            case 0x169118u: goto label_169118;
            case 0x16911Cu: goto label_16911c;
            case 0x169120u: goto label_169120;
            case 0x169124u: goto label_169124;
            case 0x169128u: goto label_169128;
            case 0x16912Cu: goto label_16912c;
            case 0x169130u: goto label_169130;
            case 0x169134u: goto label_169134;
            case 0x169138u: goto label_169138;
            case 0x16913Cu: goto label_16913c;
            case 0x169140u: goto label_169140;
            case 0x169144u: goto label_169144;
            case 0x169148u: goto label_169148;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16912Cu; }
            if (ctx->pc != 0x16912Cu) { return; }
        }
    }
    ctx->pc = 0x16912Cu;
label_16912c:
    // 0x16912c: 0x24020003
    ctx->pc = 0x16912cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_169130:
    // 0x169130: 0xae020004
    ctx->pc = 0x169130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_169134:
    // 0x169134: 0xdfbf0030
    ctx->pc = 0x169134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_169138:
    // 0x169138: 0xdfb20020
    ctx->pc = 0x169138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16913c:
    // 0x16913c: 0xdfb10010
    ctx->pc = 0x16913cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169140:
    // 0x169140: 0xdfb00000
    ctx->pc = 0x169140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169144:
    // 0x169144: 0x3e00008
label_169148:
    if (ctx->pc == 0x169148u) {
        ctx->pc = 0x169148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16914Cu;
        goto label_fallthrough_0x169144;
    }
    ctx->pc = 0x169144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169148u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168FC8u: goto label_168fc8;
            case 0x168FCCu: goto label_168fcc;
            case 0x168FD0u: goto label_168fd0;
            case 0x168FD4u: goto label_168fd4;
            case 0x168FD8u: goto label_168fd8;
            case 0x168FDCu: goto label_168fdc;
            case 0x168FE0u: goto label_168fe0;
            case 0x168FE4u: goto label_168fe4;
            case 0x168FE8u: goto label_168fe8;
            case 0x168FECu: goto label_168fec;
            case 0x168FF0u: goto label_168ff0;
            case 0x168FF4u: goto label_168ff4;
            case 0x168FF8u: goto label_168ff8;
            case 0x168FFCu: goto label_168ffc;
            case 0x169000u: goto label_169000;
            case 0x169004u: goto label_169004;
            case 0x169008u: goto label_169008;
            case 0x16900Cu: goto label_16900c;
            case 0x169010u: goto label_169010;
            case 0x169014u: goto label_169014;
            case 0x169018u: goto label_169018;
            case 0x16901Cu: goto label_16901c;
            case 0x169020u: goto label_169020;
            case 0x169024u: goto label_169024;
            case 0x169028u: goto label_169028;
            case 0x16902Cu: goto label_16902c;
            case 0x169030u: goto label_169030;
            case 0x169034u: goto label_169034;
            case 0x169038u: goto label_169038;
            case 0x16903Cu: goto label_16903c;
            case 0x169040u: goto label_169040;
            case 0x169044u: goto label_169044;
            case 0x169048u: goto label_169048;
            case 0x16904Cu: goto label_16904c;
            case 0x169050u: goto label_169050;
            case 0x169054u: goto label_169054;
            case 0x169058u: goto label_169058;
            case 0x16905Cu: goto label_16905c;
            case 0x169060u: goto label_169060;
            case 0x169064u: goto label_169064;
            case 0x169068u: goto label_169068;
            case 0x16906Cu: goto label_16906c;
            case 0x169070u: goto label_169070;
            case 0x169074u: goto label_169074;
            case 0x169078u: goto label_169078;
            case 0x16907Cu: goto label_16907c;
            case 0x169080u: goto label_169080;
            case 0x169084u: goto label_169084;
            case 0x169088u: goto label_169088;
            case 0x16908Cu: goto label_16908c;
            case 0x169090u: goto label_169090;
            case 0x169094u: goto label_169094;
            case 0x169098u: goto label_169098;
            case 0x16909Cu: goto label_16909c;
            case 0x1690A0u: goto label_1690a0;
            case 0x1690A4u: goto label_1690a4;
            case 0x1690A8u: goto label_1690a8;
            case 0x1690ACu: goto label_1690ac;
            case 0x1690B0u: goto label_1690b0;
            case 0x1690B4u: goto label_1690b4;
            case 0x1690B8u: goto label_1690b8;
            case 0x1690BCu: goto label_1690bc;
            case 0x1690C0u: goto label_1690c0;
            case 0x1690C4u: goto label_1690c4;
            case 0x1690C8u: goto label_1690c8;
            case 0x1690CCu: goto label_1690cc;
            case 0x1690D0u: goto label_1690d0;
            case 0x1690D4u: goto label_1690d4;
            case 0x1690D8u: goto label_1690d8;
            case 0x1690DCu: goto label_1690dc;
            case 0x1690E0u: goto label_1690e0;
            case 0x1690E4u: goto label_1690e4;
            case 0x1690E8u: goto label_1690e8;
            case 0x1690ECu: goto label_1690ec;
            case 0x1690F0u: goto label_1690f0;
            case 0x1690F4u: goto label_1690f4;
            case 0x1690F8u: goto label_1690f8;
            case 0x1690FCu: goto label_1690fc;
            case 0x169100u: goto label_169100;
            case 0x169104u: goto label_169104;
            case 0x169108u: goto label_169108;
            case 0x16910Cu: goto label_16910c;
            case 0x169110u: goto label_169110;
            case 0x169114u: goto label_169114;
            case 0x169118u: goto label_169118;
            case 0x16911Cu: goto label_16911c;
            case 0x169120u: goto label_169120;
            case 0x169124u: goto label_169124;
            case 0x169128u: goto label_169128;
            case 0x16912Cu: goto label_16912c;
            case 0x169130u: goto label_169130;
            case 0x169134u: goto label_169134;
            case 0x169138u: goto label_169138;
            case 0x16913Cu: goto label_16913c;
            case 0x169140u: goto label_169140;
            case 0x169144u: goto label_169144;
            case 0x169148u: goto label_169148;
            default: break;
        }
        return;
    }
label_fallthrough_0x169144:
    ctx->pc = 0x16914Cu;
}
