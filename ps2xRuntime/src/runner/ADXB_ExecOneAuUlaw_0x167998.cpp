#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAuUlaw
// Address: 0x167998 - 0x167b38
void ADXB_ExecOneAuUlaw_0x167998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAuUlaw");


    ctx->pc = 0x167998u;

label_167998:
    // 0x167998: 0x27bdffc0
    ctx->pc = 0x167998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_16799c:
    // 0x16799c: 0x24020001
    ctx->pc = 0x16799cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1679a0:
    // 0x1679a0: 0xffb10010
    ctx->pc = 0x1679a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1679a4:
    // 0x1679a4: 0xffb00000
    ctx->pc = 0x1679a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1679a8:
    // 0x1679a8: 0xffbf0030
    ctx->pc = 0x1679a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1679ac:
    // 0x1679ac: 0x80802d
    ctx->pc = 0x1679acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1679b0:
    // 0x1679b0: 0xffb20020
    ctx->pc = 0x1679b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1679b4:
    // 0x1679b4: 0x26110050
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_1679b8:
    // 0x1679b8: 0x8e030004
    ctx->pc = 0x1679b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1679bc:
    // 0x1679bc: 0x1462004e
label_1679c0:
    if (ctx->pc == 0x1679C0u) {
        ctx->pc = 0x1679C0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x1679C4u;
        goto label_1679c4;
    }
    ctx->pc = 0x1679BCu;
    {
        const bool branch_taken_0x1679bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1679C0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x1679bc) {
            ctx->pc = 0x167AF8u;
            goto label_167af8;
        }
    }
    ctx->pc = 0x1679C4u;
label_1679c4:
    // 0x1679c4: 0xc05cfec
label_1679c8:
    if (ctx->pc == 0x1679C8u) {
        ctx->pc = 0x1679C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1679CCu;
        goto label_1679cc;
    }
    ctx->pc = 0x1679C4u;
    SET_GPR_U32(ctx, 31, 0x1679CCu);
    ctx->pc = 0x1679C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1679CCu; }
        else if (ctx->pc != 0x1679CCu) { ctx->pc = 0x1679CCu; }
    }
    if (ctx->pc != 0x1679CCu) { return; }
    ctx->pc = 0x1679CCu;
label_1679cc:
    // 0x1679cc: 0x5440004a
label_1679d0:
    if (ctx->pc == 0x1679D0u) {
        ctx->pc = 0x1679D0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1679D4u;
        goto label_1679d4;
    }
    ctx->pc = 0x1679CCu;
    {
        const bool branch_taken_0x1679cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1679cc) {
            ctx->pc = 0x1679D0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x167AF8u;
            goto label_167af8;
        }
    }
    ctx->pc = 0x1679D4u;
label_1679d4:
    // 0x1679d4: 0x8e020088
    ctx->pc = 0x1679d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1679d8:
    // 0x1679d8: 0x26050070
    ctx->pc = 0x1679d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_1679dc:
    // 0x1679dc: 0x8e04008c
    ctx->pc = 0x1679dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1679e0:
    // 0x1679e0: 0x26060074
    ctx->pc = 0x1679e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_1679e4:
    // 0x1679e4: 0x40f809
label_1679e8:
    if (ctx->pc == 0x1679E8u) {
        ctx->pc = 0x1679E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x1679ECu;
        goto label_1679ec;
    }
    ctx->pc = 0x1679E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1679ECu);
        ctx->pc = 0x1679E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167998u: goto label_167998;
            case 0x16799Cu: goto label_16799c;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679A4u: goto label_1679a4;
            case 0x1679A8u: goto label_1679a8;
            case 0x1679ACu: goto label_1679ac;
            case 0x1679B0u: goto label_1679b0;
            case 0x1679B4u: goto label_1679b4;
            case 0x1679B8u: goto label_1679b8;
            case 0x1679BCu: goto label_1679bc;
            case 0x1679C0u: goto label_1679c0;
            case 0x1679C4u: goto label_1679c4;
            case 0x1679C8u: goto label_1679c8;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679D0u: goto label_1679d0;
            case 0x1679D4u: goto label_1679d4;
            case 0x1679D8u: goto label_1679d8;
            case 0x1679DCu: goto label_1679dc;
            case 0x1679E0u: goto label_1679e0;
            case 0x1679E4u: goto label_1679e4;
            case 0x1679E8u: goto label_1679e8;
            case 0x1679ECu: goto label_1679ec;
            case 0x1679F0u: goto label_1679f0;
            case 0x1679F4u: goto label_1679f4;
            case 0x1679F8u: goto label_1679f8;
            case 0x1679FCu: goto label_1679fc;
            case 0x167A00u: goto label_167a00;
            case 0x167A04u: goto label_167a04;
            case 0x167A08u: goto label_167a08;
            case 0x167A0Cu: goto label_167a0c;
            case 0x167A10u: goto label_167a10;
            case 0x167A14u: goto label_167a14;
            case 0x167A18u: goto label_167a18;
            case 0x167A1Cu: goto label_167a1c;
            case 0x167A20u: goto label_167a20;
            case 0x167A24u: goto label_167a24;
            case 0x167A28u: goto label_167a28;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A30u: goto label_167a30;
            case 0x167A34u: goto label_167a34;
            case 0x167A38u: goto label_167a38;
            case 0x167A3Cu: goto label_167a3c;
            case 0x167A40u: goto label_167a40;
            case 0x167A44u: goto label_167a44;
            case 0x167A48u: goto label_167a48;
            case 0x167A4Cu: goto label_167a4c;
            case 0x167A50u: goto label_167a50;
            case 0x167A54u: goto label_167a54;
            case 0x167A58u: goto label_167a58;
            case 0x167A5Cu: goto label_167a5c;
            case 0x167A60u: goto label_167a60;
            case 0x167A64u: goto label_167a64;
            case 0x167A68u: goto label_167a68;
            case 0x167A6Cu: goto label_167a6c;
            case 0x167A70u: goto label_167a70;
            case 0x167A74u: goto label_167a74;
            case 0x167A78u: goto label_167a78;
            case 0x167A7Cu: goto label_167a7c;
            case 0x167A80u: goto label_167a80;
            case 0x167A84u: goto label_167a84;
            case 0x167A88u: goto label_167a88;
            case 0x167A8Cu: goto label_167a8c;
            case 0x167A90u: goto label_167a90;
            case 0x167A94u: goto label_167a94;
            case 0x167A98u: goto label_167a98;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA0u: goto label_167aa0;
            case 0x167AA4u: goto label_167aa4;
            case 0x167AA8u: goto label_167aa8;
            case 0x167AACu: goto label_167aac;
            case 0x167AB0u: goto label_167ab0;
            case 0x167AB4u: goto label_167ab4;
            case 0x167AB8u: goto label_167ab8;
            case 0x167ABCu: goto label_167abc;
            case 0x167AC0u: goto label_167ac0;
            case 0x167AC4u: goto label_167ac4;
            case 0x167AC8u: goto label_167ac8;
            case 0x167ACCu: goto label_167acc;
            case 0x167AD0u: goto label_167ad0;
            case 0x167AD4u: goto label_167ad4;
            case 0x167AD8u: goto label_167ad8;
            case 0x167ADCu: goto label_167adc;
            case 0x167AE0u: goto label_167ae0;
            case 0x167AE4u: goto label_167ae4;
            case 0x167AE8u: goto label_167ae8;
            case 0x167AECu: goto label_167aec;
            case 0x167AF0u: goto label_167af0;
            case 0x167AF4u: goto label_167af4;
            case 0x167AF8u: goto label_167af8;
            case 0x167AFCu: goto label_167afc;
            case 0x167B00u: goto label_167b00;
            case 0x167B04u: goto label_167b04;
            case 0x167B08u: goto label_167b08;
            case 0x167B0Cu: goto label_167b0c;
            case 0x167B10u: goto label_167b10;
            case 0x167B14u: goto label_167b14;
            case 0x167B18u: goto label_167b18;
            case 0x167B1Cu: goto label_167b1c;
            case 0x167B20u: goto label_167b20;
            case 0x167B24u: goto label_167b24;
            case 0x167B28u: goto label_167b28;
            case 0x167B2Cu: goto label_167b2c;
            case 0x167B30u: goto label_167b30;
            case 0x167B34u: goto label_167b34;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1679ECu; }
            if (ctx->pc != 0x1679ECu) { return; }
        }
    }
    ctx->pc = 0x1679ECu;
label_1679ec:
    // 0x1679ec: 0x8e270020
    ctx->pc = 0x1679ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1679f0:
    // 0x1679f0: 0x24060002
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1679f4:
    // 0x1679f4: 0x8e230018
    ctx->pc = 0x1679f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1679f8:
    // 0x1679f8: 0x8e280014
    ctx->pc = 0x1679f8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1679fc:
    // 0x1679fc: 0x71040
    ctx->pc = 0x1679fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
label_167a00:
    // 0x167a00: 0x8e240024
    ctx->pc = 0x167a00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_167a04:
    // 0x167a04: 0x675023
    ctx->pc = 0x167a04u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_167a08:
    // 0x167a08: 0x1025821
    ctx->pc = 0x167a08u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_167a0c:
    // 0x167a0c: 0x8e250004
    ctx->pc = 0x167a0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_167a10:
    // 0x167a10: 0x8a102a
    ctx->pc = 0x167a10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 10)));
label_167a14:
    // 0x167a14: 0x8203000e
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_167a18:
    // 0x167a18: 0x82500b
    ctx->pc = 0x167a18u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 4));
label_167a1c:
    // 0x167a1c: 0xaa102a
    ctx->pc = 0x167a1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 10)));
label_167a20:
    // 0x167a20: 0x9204000e
    ctx->pc = 0x167a20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_167a24:
    // 0x167a24: 0x1466001c
label_167a28:
    if (ctx->pc == 0x167A28u) {
        ctx->pc = 0x167A28u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 5));
        ctx->pc = 0x167A2Cu;
        goto label_167a2c;
    }
    ctx->pc = 0x167A24u;
    {
        const bool branch_taken_0x167a24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x167A28u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 5));
        if (branch_taken_0x167a24) {
            ctx->pc = 0x167A98u;
            goto label_167a98;
        }
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x8e22001c
    ctx->pc = 0x167a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_167a30:
    // 0x167a30: 0x482d
    ctx->pc = 0x167a30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167a34:
    // 0x167a34: 0x471021
    ctx->pc = 0x167a34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_167a38:
    // 0x167a38: 0x21040
    ctx->pc = 0x167a38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_167a3c:
    // 0x167a3c: 0x19400027
label_167a40:
    if (ctx->pc == 0x167A40u) {
        ctx->pc = 0x167A40u;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->pc = 0x167A44u;
        goto label_167a44;
    }
    ctx->pc = 0x167A3Cu;
    {
        const bool branch_taken_0x167a3c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x167A40u;
        SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x167a3c) {
            ctx->pc = 0x167ADCu;
            goto label_167adc;
        }
    }
    ctx->pc = 0x167A44u;
label_167a44:
    // 0x167a44: 0x3c0c0023
    ctx->pc = 0x167a44u;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
label_167a48:
    // 0x167a48: 0x92040
    ctx->pc = 0x167a48u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 1));
label_167a4c:
    // 0x167a4c: 0x2587acd0
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 12), 4294946000));
label_167a50:
    // 0x167a50: 0x922821
    ctx->pc = 0x167a50u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_167a54:
    // 0x167a54: 0x8b3021
    ctx->pc = 0x167a54u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_167a58:
    // 0x167a58: 0x90a20000
    ctx->pc = 0x167a58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_167a5c:
    // 0x167a5c: 0x8d2021
    ctx->pc = 0x167a5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_167a60:
    // 0x167a60: 0x25290001
    ctx->pc = 0x167a60u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_167a64:
    // 0x167a64: 0x21040
    ctx->pc = 0x167a64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_167a68:
    // 0x167a68: 0x12a402a
    ctx->pc = 0x167a68u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
label_167a6c:
    // 0x167a6c: 0x471021
    ctx->pc = 0x167a6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_167a70:
    // 0x167a70: 0x94430000
    ctx->pc = 0x167a70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167a74:
    // 0x167a74: 0xa4c30000
    ctx->pc = 0x167a74u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_167a78:
    // 0x167a78: 0x90a20001
    ctx->pc = 0x167a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_167a7c:
    // 0x167a7c: 0x21040
    ctx->pc = 0x167a7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_167a80:
    // 0x167a80: 0x471021
    ctx->pc = 0x167a80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_167a84:
    // 0x167a84: 0x94430000
    ctx->pc = 0x167a84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_167a88:
    // 0x167a88: 0x1500ffef
label_167a8c:
    if (ctx->pc == 0x167A8Cu) {
        ctx->pc = 0x167A8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x167A90u;
        goto label_167a90;
    }
    ctx->pc = 0x167A88u;
    {
        const bool branch_taken_0x167a88 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x167A8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x167a88) {
            ctx->pc = 0x167A48u;
            goto label_167a48;
        }
    }
    ctx->pc = 0x167A90u;
label_167a90:
    // 0x167a90: 0x10000012
label_167a94:
    if (ctx->pc == 0x167A94u) {
        ctx->pc = 0x167A94u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x167A98u;
        goto label_167a98;
    }
    ctx->pc = 0x167A90u;
    {
        const bool branch_taken_0x167a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167A94u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x167a90) {
            ctx->pc = 0x167ADCu;
            goto label_167adc;
        }
    }
    ctx->pc = 0x167A98u;
label_167a98:
    // 0x167a98: 0x19400010
label_167a9c:
    if (ctx->pc == 0x167A9Cu) {
        ctx->pc = 0x167A9Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167AA0u;
        goto label_167aa0;
    }
    ctx->pc = 0x167A98u;
    {
        const bool branch_taken_0x167a98 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x167A9Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167a98) {
            ctx->pc = 0x167ADCu;
            goto label_167adc;
        }
    }
    ctx->pc = 0x167AA0u;
label_167aa0:
    // 0x167aa0: 0x3c0c0023
    ctx->pc = 0x167aa0u;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
label_167aa4:
    // 0x167aa4: 0x0
    ctx->pc = 0x167aa4u;
    // NOP
label_167aa8:
    // 0x167aa8: 0x2491021
    ctx->pc = 0x167aa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_167aac:
    // 0x167aac: 0x2586acd0
    ctx->pc = 0x167aacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 12), 4294946000));
label_167ab0:
    // 0x167ab0: 0x90430000
    ctx->pc = 0x167ab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_167ab4:
    // 0x167ab4: 0x92040
    ctx->pc = 0x167ab4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 9), 1));
label_167ab8:
    // 0x167ab8: 0x8b2021
    ctx->pc = 0x167ab8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_167abc:
    // 0x167abc: 0x25290001
    ctx->pc = 0x167abcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_167ac0:
    // 0x167ac0: 0x31840
    ctx->pc = 0x167ac0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
label_167ac4:
    // 0x167ac4: 0x12a282a
    ctx->pc = 0x167ac4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 10)));
label_167ac8:
    // 0x167ac8: 0x661821
    ctx->pc = 0x167ac8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_167acc:
    // 0x167acc: 0x94620000
    ctx->pc = 0x167accu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_167ad0:
    // 0x167ad0: 0x14a0fff5
label_167ad4:
    if (ctx->pc == 0x167AD4u) {
        ctx->pc = 0x167AD4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x167AD8u;
        goto label_167ad8;
    }
    ctx->pc = 0x167AD0u;
    {
        const bool branch_taken_0x167ad0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x167AD4u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x167ad0) {
            ctx->pc = 0x167AA8u;
            goto label_167aa8;
        }
    }
    ctx->pc = 0x167AD8u;
label_167ad8:
    // 0x167ad8: 0x9204000e
    ctx->pc = 0x167ad8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_167adc:
    // 0x167adc: 0x41600
    ctx->pc = 0x167adcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_167ae0:
    // 0x167ae0: 0x24030002
    ctx->pc = 0x167ae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_167ae4:
    // 0x167ae4: 0x21603
    ctx->pc = 0x167ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_167ae8:
    // 0x167ae8: 0xae030004
    ctx->pc = 0x167ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_167aec:
    // 0x167aec: 0x1421018
    ctx->pc = 0x167aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_167af0:
    // 0x167af0: 0xae0a00a0
    ctx->pc = 0x167af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 10));
label_167af4:
    // 0x167af4: 0xae0200a4
    ctx->pc = 0x167af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_167af8:
    // 0x167af8: 0x24020002
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_167afc:
    // 0x167afc: 0x14620009
label_167b00:
    if (ctx->pc == 0x167B00u) {
        ctx->pc = 0x167B00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x167B04u;
        goto label_167b04;
    }
    ctx->pc = 0x167AFCu;
    {
        const bool branch_taken_0x167afc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x167B00u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x167afc) {
            ctx->pc = 0x167B24u;
            goto label_167b24;
        }
    }
    ctx->pc = 0x167B04u;
label_167b04:
    // 0x167b04: 0x8e030090
    ctx->pc = 0x167b04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_167b08:
    // 0x167b08: 0x8e040094
    ctx->pc = 0x167b08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_167b0c:
    // 0x167b0c: 0x8e0500a4
    ctx->pc = 0x167b0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_167b10:
    // 0x167b10: 0x60f809
label_167b14:
    if (ctx->pc == 0x167B14u) {
        ctx->pc = 0x167B14u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x167B18u;
        goto label_167b18;
    }
    ctx->pc = 0x167B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167B18u);
        ctx->pc = 0x167B14u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167998u: goto label_167998;
            case 0x16799Cu: goto label_16799c;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679A4u: goto label_1679a4;
            case 0x1679A8u: goto label_1679a8;
            case 0x1679ACu: goto label_1679ac;
            case 0x1679B0u: goto label_1679b0;
            case 0x1679B4u: goto label_1679b4;
            case 0x1679B8u: goto label_1679b8;
            case 0x1679BCu: goto label_1679bc;
            case 0x1679C0u: goto label_1679c0;
            case 0x1679C4u: goto label_1679c4;
            case 0x1679C8u: goto label_1679c8;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679D0u: goto label_1679d0;
            case 0x1679D4u: goto label_1679d4;
            case 0x1679D8u: goto label_1679d8;
            case 0x1679DCu: goto label_1679dc;
            case 0x1679E0u: goto label_1679e0;
            case 0x1679E4u: goto label_1679e4;
            case 0x1679E8u: goto label_1679e8;
            case 0x1679ECu: goto label_1679ec;
            case 0x1679F0u: goto label_1679f0;
            case 0x1679F4u: goto label_1679f4;
            case 0x1679F8u: goto label_1679f8;
            case 0x1679FCu: goto label_1679fc;
            case 0x167A00u: goto label_167a00;
            case 0x167A04u: goto label_167a04;
            case 0x167A08u: goto label_167a08;
            case 0x167A0Cu: goto label_167a0c;
            case 0x167A10u: goto label_167a10;
            case 0x167A14u: goto label_167a14;
            case 0x167A18u: goto label_167a18;
            case 0x167A1Cu: goto label_167a1c;
            case 0x167A20u: goto label_167a20;
            case 0x167A24u: goto label_167a24;
            case 0x167A28u: goto label_167a28;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A30u: goto label_167a30;
            case 0x167A34u: goto label_167a34;
            case 0x167A38u: goto label_167a38;
            case 0x167A3Cu: goto label_167a3c;
            case 0x167A40u: goto label_167a40;
            case 0x167A44u: goto label_167a44;
            case 0x167A48u: goto label_167a48;
            case 0x167A4Cu: goto label_167a4c;
            case 0x167A50u: goto label_167a50;
            case 0x167A54u: goto label_167a54;
            case 0x167A58u: goto label_167a58;
            case 0x167A5Cu: goto label_167a5c;
            case 0x167A60u: goto label_167a60;
            case 0x167A64u: goto label_167a64;
            case 0x167A68u: goto label_167a68;
            case 0x167A6Cu: goto label_167a6c;
            case 0x167A70u: goto label_167a70;
            case 0x167A74u: goto label_167a74;
            case 0x167A78u: goto label_167a78;
            case 0x167A7Cu: goto label_167a7c;
            case 0x167A80u: goto label_167a80;
            case 0x167A84u: goto label_167a84;
            case 0x167A88u: goto label_167a88;
            case 0x167A8Cu: goto label_167a8c;
            case 0x167A90u: goto label_167a90;
            case 0x167A94u: goto label_167a94;
            case 0x167A98u: goto label_167a98;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA0u: goto label_167aa0;
            case 0x167AA4u: goto label_167aa4;
            case 0x167AA8u: goto label_167aa8;
            case 0x167AACu: goto label_167aac;
            case 0x167AB0u: goto label_167ab0;
            case 0x167AB4u: goto label_167ab4;
            case 0x167AB8u: goto label_167ab8;
            case 0x167ABCu: goto label_167abc;
            case 0x167AC0u: goto label_167ac0;
            case 0x167AC4u: goto label_167ac4;
            case 0x167AC8u: goto label_167ac8;
            case 0x167ACCu: goto label_167acc;
            case 0x167AD0u: goto label_167ad0;
            case 0x167AD4u: goto label_167ad4;
            case 0x167AD8u: goto label_167ad8;
            case 0x167ADCu: goto label_167adc;
            case 0x167AE0u: goto label_167ae0;
            case 0x167AE4u: goto label_167ae4;
            case 0x167AE8u: goto label_167ae8;
            case 0x167AECu: goto label_167aec;
            case 0x167AF0u: goto label_167af0;
            case 0x167AF4u: goto label_167af4;
            case 0x167AF8u: goto label_167af8;
            case 0x167AFCu: goto label_167afc;
            case 0x167B00u: goto label_167b00;
            case 0x167B04u: goto label_167b04;
            case 0x167B08u: goto label_167b08;
            case 0x167B0Cu: goto label_167b0c;
            case 0x167B10u: goto label_167b10;
            case 0x167B14u: goto label_167b14;
            case 0x167B18u: goto label_167b18;
            case 0x167B1Cu: goto label_167b1c;
            case 0x167B20u: goto label_167b20;
            case 0x167B24u: goto label_167b24;
            case 0x167B28u: goto label_167b28;
            case 0x167B2Cu: goto label_167b2c;
            case 0x167B30u: goto label_167b30;
            case 0x167B34u: goto label_167b34;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167B18u; }
            if (ctx->pc != 0x167B18u) { return; }
        }
    }
    ctx->pc = 0x167B18u;
label_167b18:
    // 0x167b18: 0x24020003
    ctx->pc = 0x167b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_167b1c:
    // 0x167b1c: 0xae020004
    ctx->pc = 0x167b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_167b20:
    // 0x167b20: 0xdfbf0030
    ctx->pc = 0x167b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_167b24:
    // 0x167b24: 0xdfb20020
    ctx->pc = 0x167b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167b28:
    // 0x167b28: 0xdfb10010
    ctx->pc = 0x167b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167b2c:
    // 0x167b2c: 0xdfb00000
    ctx->pc = 0x167b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167b30:
    // 0x167b30: 0x3e00008
label_167b34:
    if (ctx->pc == 0x167B34u) {
        ctx->pc = 0x167B34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x167B38u;
        goto label_fallthrough_0x167b30;
    }
    ctx->pc = 0x167B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167B34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167998u: goto label_167998;
            case 0x16799Cu: goto label_16799c;
            case 0x1679A0u: goto label_1679a0;
            case 0x1679A4u: goto label_1679a4;
            case 0x1679A8u: goto label_1679a8;
            case 0x1679ACu: goto label_1679ac;
            case 0x1679B0u: goto label_1679b0;
            case 0x1679B4u: goto label_1679b4;
            case 0x1679B8u: goto label_1679b8;
            case 0x1679BCu: goto label_1679bc;
            case 0x1679C0u: goto label_1679c0;
            case 0x1679C4u: goto label_1679c4;
            case 0x1679C8u: goto label_1679c8;
            case 0x1679CCu: goto label_1679cc;
            case 0x1679D0u: goto label_1679d0;
            case 0x1679D4u: goto label_1679d4;
            case 0x1679D8u: goto label_1679d8;
            case 0x1679DCu: goto label_1679dc;
            case 0x1679E0u: goto label_1679e0;
            case 0x1679E4u: goto label_1679e4;
            case 0x1679E8u: goto label_1679e8;
            case 0x1679ECu: goto label_1679ec;
            case 0x1679F0u: goto label_1679f0;
            case 0x1679F4u: goto label_1679f4;
            case 0x1679F8u: goto label_1679f8;
            case 0x1679FCu: goto label_1679fc;
            case 0x167A00u: goto label_167a00;
            case 0x167A04u: goto label_167a04;
            case 0x167A08u: goto label_167a08;
            case 0x167A0Cu: goto label_167a0c;
            case 0x167A10u: goto label_167a10;
            case 0x167A14u: goto label_167a14;
            case 0x167A18u: goto label_167a18;
            case 0x167A1Cu: goto label_167a1c;
            case 0x167A20u: goto label_167a20;
            case 0x167A24u: goto label_167a24;
            case 0x167A28u: goto label_167a28;
            case 0x167A2Cu: goto label_167a2c;
            case 0x167A30u: goto label_167a30;
            case 0x167A34u: goto label_167a34;
            case 0x167A38u: goto label_167a38;
            case 0x167A3Cu: goto label_167a3c;
            case 0x167A40u: goto label_167a40;
            case 0x167A44u: goto label_167a44;
            case 0x167A48u: goto label_167a48;
            case 0x167A4Cu: goto label_167a4c;
            case 0x167A50u: goto label_167a50;
            case 0x167A54u: goto label_167a54;
            case 0x167A58u: goto label_167a58;
            case 0x167A5Cu: goto label_167a5c;
            case 0x167A60u: goto label_167a60;
            case 0x167A64u: goto label_167a64;
            case 0x167A68u: goto label_167a68;
            case 0x167A6Cu: goto label_167a6c;
            case 0x167A70u: goto label_167a70;
            case 0x167A74u: goto label_167a74;
            case 0x167A78u: goto label_167a78;
            case 0x167A7Cu: goto label_167a7c;
            case 0x167A80u: goto label_167a80;
            case 0x167A84u: goto label_167a84;
            case 0x167A88u: goto label_167a88;
            case 0x167A8Cu: goto label_167a8c;
            case 0x167A90u: goto label_167a90;
            case 0x167A94u: goto label_167a94;
            case 0x167A98u: goto label_167a98;
            case 0x167A9Cu: goto label_167a9c;
            case 0x167AA0u: goto label_167aa0;
            case 0x167AA4u: goto label_167aa4;
            case 0x167AA8u: goto label_167aa8;
            case 0x167AACu: goto label_167aac;
            case 0x167AB0u: goto label_167ab0;
            case 0x167AB4u: goto label_167ab4;
            case 0x167AB8u: goto label_167ab8;
            case 0x167ABCu: goto label_167abc;
            case 0x167AC0u: goto label_167ac0;
            case 0x167AC4u: goto label_167ac4;
            case 0x167AC8u: goto label_167ac8;
            case 0x167ACCu: goto label_167acc;
            case 0x167AD0u: goto label_167ad0;
            case 0x167AD4u: goto label_167ad4;
            case 0x167AD8u: goto label_167ad8;
            case 0x167ADCu: goto label_167adc;
            case 0x167AE0u: goto label_167ae0;
            case 0x167AE4u: goto label_167ae4;
            case 0x167AE8u: goto label_167ae8;
            case 0x167AECu: goto label_167aec;
            case 0x167AF0u: goto label_167af0;
            case 0x167AF4u: goto label_167af4;
            case 0x167AF8u: goto label_167af8;
            case 0x167AFCu: goto label_167afc;
            case 0x167B00u: goto label_167b00;
            case 0x167B04u: goto label_167b04;
            case 0x167B08u: goto label_167b08;
            case 0x167B0Cu: goto label_167b0c;
            case 0x167B10u: goto label_167b10;
            case 0x167B14u: goto label_167b14;
            case 0x167B18u: goto label_167b18;
            case 0x167B1Cu: goto label_167b1c;
            case 0x167B20u: goto label_167b20;
            case 0x167B24u: goto label_167b24;
            case 0x167B28u: goto label_167b28;
            case 0x167B2Cu: goto label_167b2c;
            case 0x167B30u: goto label_167b30;
            case 0x167B34u: goto label_167b34;
            default: break;
        }
        return;
    }
label_fallthrough_0x167b30:
    ctx->pc = 0x167B38u;
}
