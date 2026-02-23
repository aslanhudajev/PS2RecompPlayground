#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneSpsd
// Address: 0x168940 - 0x168ab4
void ADXB_ExecOneSpsd_0x168940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneSpsd");


    ctx->pc = 0x168940u;

label_168940:
    // 0x168940: 0x27bdffc0
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_168944:
    // 0x168944: 0x24020001
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168948:
    // 0x168948: 0xffb10010
    ctx->pc = 0x168948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16894c:
    // 0x16894c: 0xffb00000
    ctx->pc = 0x16894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_168950:
    // 0x168950: 0xffbf0030
    ctx->pc = 0x168950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168954:
    // 0x168954: 0x80802d
    ctx->pc = 0x168954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168958:
    // 0x168958: 0xffb20020
    ctx->pc = 0x168958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16895c:
    // 0x16895c: 0x26110050
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_168960:
    // 0x168960: 0x8e030004
    ctx->pc = 0x168960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_168964:
    // 0x168964: 0x14620043
label_168968:
    if (ctx->pc == 0x168968u) {
        ctx->pc = 0x168968u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x16896Cu;
        goto label_16896c;
    }
    ctx->pc = 0x168964u;
    {
        const bool branch_taken_0x168964 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168968u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x168964) {
            ctx->pc = 0x168A74u;
            goto label_168a74;
        }
    }
    ctx->pc = 0x16896Cu;
label_16896c:
    // 0x16896c: 0xc05cfec
label_168970:
    if (ctx->pc == 0x168970u) {
        ctx->pc = 0x168970u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x168974u;
        goto label_168974;
    }
    ctx->pc = 0x16896Cu;
    SET_GPR_U32(ctx, 31, 0x168974u);
    ctx->pc = 0x168970u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168974u; }
        else if (ctx->pc != 0x168974u) { ctx->pc = 0x168974u; }
    }
    if (ctx->pc != 0x168974u) { return; }
    ctx->pc = 0x168974u;
label_168974:
    // 0x168974: 0x5440003f
label_168978:
    if (ctx->pc == 0x168978u) {
        ctx->pc = 0x168978u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x16897Cu;
        goto label_16897c;
    }
    ctx->pc = 0x168974u;
    {
        const bool branch_taken_0x168974 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168974) {
            ctx->pc = 0x168978u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x168A74u;
            goto label_168a74;
        }
    }
    ctx->pc = 0x16897Cu;
label_16897c:
    // 0x16897c: 0x8e020088
    ctx->pc = 0x16897cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_168980:
    // 0x168980: 0x26050070
    ctx->pc = 0x168980u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_168984:
    // 0x168984: 0x8e04008c
    ctx->pc = 0x168984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_168988:
    // 0x168988: 0x26060074
    ctx->pc = 0x168988u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_16898c:
    // 0x16898c: 0x40f809
label_168990:
    if (ctx->pc == 0x168990u) {
        ctx->pc = 0x168990u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x168994u;
        goto label_168994;
    }
    ctx->pc = 0x16898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x168994u);
        ctx->pc = 0x168990u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168940u: goto label_168940;
            case 0x168944u: goto label_168944;
            case 0x168948u: goto label_168948;
            case 0x16894Cu: goto label_16894c;
            case 0x168950u: goto label_168950;
            case 0x168954u: goto label_168954;
            case 0x168958u: goto label_168958;
            case 0x16895Cu: goto label_16895c;
            case 0x168960u: goto label_168960;
            case 0x168964u: goto label_168964;
            case 0x168968u: goto label_168968;
            case 0x16896Cu: goto label_16896c;
            case 0x168970u: goto label_168970;
            case 0x168974u: goto label_168974;
            case 0x168978u: goto label_168978;
            case 0x16897Cu: goto label_16897c;
            case 0x168980u: goto label_168980;
            case 0x168984u: goto label_168984;
            case 0x168988u: goto label_168988;
            case 0x16898Cu: goto label_16898c;
            case 0x168990u: goto label_168990;
            case 0x168994u: goto label_168994;
            case 0x168998u: goto label_168998;
            case 0x16899Cu: goto label_16899c;
            case 0x1689A0u: goto label_1689a0;
            case 0x1689A4u: goto label_1689a4;
            case 0x1689A8u: goto label_1689a8;
            case 0x1689ACu: goto label_1689ac;
            case 0x1689B0u: goto label_1689b0;
            case 0x1689B4u: goto label_1689b4;
            case 0x1689B8u: goto label_1689b8;
            case 0x1689BCu: goto label_1689bc;
            case 0x1689C0u: goto label_1689c0;
            case 0x1689C4u: goto label_1689c4;
            case 0x1689C8u: goto label_1689c8;
            case 0x1689CCu: goto label_1689cc;
            case 0x1689D0u: goto label_1689d0;
            case 0x1689D4u: goto label_1689d4;
            case 0x1689D8u: goto label_1689d8;
            case 0x1689DCu: goto label_1689dc;
            case 0x1689E0u: goto label_1689e0;
            case 0x1689E4u: goto label_1689e4;
            case 0x1689E8u: goto label_1689e8;
            case 0x1689ECu: goto label_1689ec;
            case 0x1689F0u: goto label_1689f0;
            case 0x1689F4u: goto label_1689f4;
            case 0x1689F8u: goto label_1689f8;
            case 0x1689FCu: goto label_1689fc;
            case 0x168A00u: goto label_168a00;
            case 0x168A04u: goto label_168a04;
            case 0x168A08u: goto label_168a08;
            case 0x168A0Cu: goto label_168a0c;
            case 0x168A10u: goto label_168a10;
            case 0x168A14u: goto label_168a14;
            case 0x168A18u: goto label_168a18;
            case 0x168A1Cu: goto label_168a1c;
            case 0x168A20u: goto label_168a20;
            case 0x168A24u: goto label_168a24;
            case 0x168A28u: goto label_168a28;
            case 0x168A2Cu: goto label_168a2c;
            case 0x168A30u: goto label_168a30;
            case 0x168A34u: goto label_168a34;
            case 0x168A38u: goto label_168a38;
            case 0x168A3Cu: goto label_168a3c;
            case 0x168A40u: goto label_168a40;
            case 0x168A44u: goto label_168a44;
            case 0x168A48u: goto label_168a48;
            case 0x168A4Cu: goto label_168a4c;
            case 0x168A50u: goto label_168a50;
            case 0x168A54u: goto label_168a54;
            case 0x168A58u: goto label_168a58;
            case 0x168A5Cu: goto label_168a5c;
            case 0x168A60u: goto label_168a60;
            case 0x168A64u: goto label_168a64;
            case 0x168A68u: goto label_168a68;
            case 0x168A6Cu: goto label_168a6c;
            case 0x168A70u: goto label_168a70;
            case 0x168A74u: goto label_168a74;
            case 0x168A78u: goto label_168a78;
            case 0x168A7Cu: goto label_168a7c;
            case 0x168A80u: goto label_168a80;
            case 0x168A84u: goto label_168a84;
            case 0x168A88u: goto label_168a88;
            case 0x168A8Cu: goto label_168a8c;
            case 0x168A90u: goto label_168a90;
            case 0x168A94u: goto label_168a94;
            case 0x168A98u: goto label_168a98;
            case 0x168A9Cu: goto label_168a9c;
            case 0x168AA0u: goto label_168aa0;
            case 0x168AA4u: goto label_168aa4;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AACu: goto label_168aac;
            case 0x168AB0u: goto label_168ab0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168994u; }
            if (ctx->pc != 0x168994u) { return; }
        }
    }
    ctx->pc = 0x168994u;
label_168994:
    // 0x168994: 0x8e280020
    ctx->pc = 0x168994u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_168998:
    // 0x168998: 0x24060002
    ctx->pc = 0x168998u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_16899c:
    // 0x16899c: 0x8e230018
    ctx->pc = 0x16899cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1689a0:
    // 0x1689a0: 0x8e290014
    ctx->pc = 0x1689a0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1689a4:
    // 0x1689a4: 0x81040
    ctx->pc = 0x1689a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
label_1689a8:
    // 0x1689a8: 0x8e240024
    ctx->pc = 0x1689a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1689ac:
    // 0x1689ac: 0x683823
    ctx->pc = 0x1689acu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1689b0:
    // 0x1689b0: 0x1225021
    ctx->pc = 0x1689b0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1689b4:
    // 0x1689b4: 0x8e250004
    ctx->pc = 0x1689b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1689b8:
    // 0x1689b8: 0x87102a
    ctx->pc = 0x1689b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_1689bc:
    // 0x1689bc: 0x8203000e
    ctx->pc = 0x1689bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1689c0:
    // 0x1689c0: 0x82380b
    ctx->pc = 0x1689c0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
label_1689c4:
    // 0x1689c4: 0xa7102a
    ctx->pc = 0x1689c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
label_1689c8:
    // 0x1689c8: 0x9204000e
    ctx->pc = 0x1689c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1689cc:
    // 0x1689cc: 0x14660015
label_1689d0:
    if (ctx->pc == 0x1689D0u) {
        ctx->pc = 0x1689D0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        ctx->pc = 0x1689D4u;
        goto label_1689d4;
    }
    ctx->pc = 0x1689CCu;
    {
        const bool branch_taken_0x1689cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x1689D0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        if (branch_taken_0x1689cc) {
            ctx->pc = 0x168A24u;
            goto label_168a24;
        }
    }
    ctx->pc = 0x1689D4u;
label_1689d4:
    // 0x1689d4: 0x8e22001c
    ctx->pc = 0x1689d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1689d8:
    // 0x1689d8: 0x481021
    ctx->pc = 0x1689d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1689dc:
    // 0x1689dc: 0x21040
    ctx->pc = 0x1689dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1689e0:
    // 0x1689e0: 0x18e0001d
label_1689e4:
    if (ctx->pc == 0x1689E4u) {
        ctx->pc = 0x1689E4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x1689E8u;
        goto label_1689e8;
    }
    ctx->pc = 0x1689E0u;
    {
        const bool branch_taken_0x1689e0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1689E4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x1689e0) {
            ctx->pc = 0x168A58u;
            goto label_168a58;
        }
    }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0x40302d
    ctx->pc = 0x1689e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1689ec:
    // 0x1689ec: 0x140282d
    ctx->pc = 0x1689ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1689f0:
    // 0x1689f0: 0x240202d
    ctx->pc = 0x1689f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1689f4:
    // 0x1689f4: 0xe0182d
    ctx->pc = 0x1689f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1689f8:
    // 0x1689f8: 0x94820000
    ctx->pc = 0x1689f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1689fc:
    // 0x1689fc: 0x2463ffff
    ctx->pc = 0x1689fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_168a00:
    // 0x168a00: 0xa4a20000
    ctx->pc = 0x168a00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_168a04:
    // 0x168a04: 0x24a50002
    ctx->pc = 0x168a04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_168a08:
    // 0x168a08: 0x94820002
    ctx->pc = 0x168a08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_168a0c:
    // 0x168a0c: 0x24840004
    ctx->pc = 0x168a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_168a10:
    // 0x168a10: 0xa4c20000
    ctx->pc = 0x168a10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_168a14:
    // 0x168a14: 0x1460fff8
label_168a18:
    if (ctx->pc == 0x168A18u) {
        ctx->pc = 0x168A18u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x168A1Cu;
        goto label_168a1c;
    }
    ctx->pc = 0x168A14u;
    {
        const bool branch_taken_0x168a14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x168A18u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x168a14) {
            ctx->pc = 0x1689F8u;
            goto label_1689f8;
        }
    }
    ctx->pc = 0x168A1Cu;
label_168a1c:
    // 0x168a1c: 0x1000000e
label_168a20:
    if (ctx->pc == 0x168A20u) {
        ctx->pc = 0x168A20u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x168A24u;
        goto label_168a24;
    }
    ctx->pc = 0x168A1Cu;
    {
        const bool branch_taken_0x168a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168A20u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x168a1c) {
            ctx->pc = 0x168A58u;
            goto label_168a58;
        }
    }
    ctx->pc = 0x168A24u;
label_168a24:
    // 0x168a24: 0x18e0000c
label_168a28:
    if (ctx->pc == 0x168A28u) {
        ctx->pc = 0x168A28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168A2Cu;
        goto label_168a2c;
    }
    ctx->pc = 0x168A24u;
    {
        const bool branch_taken_0x168a24 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x168A28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168a24) {
            ctx->pc = 0x168A58u;
            goto label_168a58;
        }
    }
    ctx->pc = 0x168A2Cu;
label_168a2c:
    // 0x168a2c: 0x240202d
    ctx->pc = 0x168a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168a30:
    // 0x168a30: 0xe0182d
    ctx->pc = 0x168a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_168a34:
    // 0x168a34: 0x0
    ctx->pc = 0x168a34u;
    // NOP
label_168a38:
    // 0x168a38: 0x94820000
    ctx->pc = 0x168a38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_168a3c:
    // 0x168a3c: 0x2463ffff
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_168a40:
    // 0x168a40: 0x24840002
    ctx->pc = 0x168a40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_168a44:
    // 0x168a44: 0xa4a20000
    ctx->pc = 0x168a44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_168a48:
    // 0x168a48: 0x24a50002
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_168a4c:
    // 0x168a4c: 0x1460fffa
label_168a50:
    if (ctx->pc == 0x168A50u) {
        ctx->pc = 0x168A54u;
        goto label_168a54;
    }
    ctx->pc = 0x168A4Cu;
    {
        const bool branch_taken_0x168a4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x168a4c) {
            ctx->pc = 0x168A38u;
            goto label_168a38;
        }
    }
    ctx->pc = 0x168A54u;
label_168a54:
    // 0x168a54: 0x9204000e
    ctx->pc = 0x168a54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_168a58:
    // 0x168a58: 0x41600
    ctx->pc = 0x168a58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_168a5c:
    // 0x168a5c: 0x24030002
    ctx->pc = 0x168a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_168a60:
    // 0x168a60: 0x215c3
    ctx->pc = 0x168a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
label_168a64:
    // 0x168a64: 0xae030004
    ctx->pc = 0x168a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_168a68:
    // 0x168a68: 0xe21018
    ctx->pc = 0x168a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_168a6c:
    // 0x168a6c: 0xae0700a0
    ctx->pc = 0x168a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
label_168a70:
    // 0x168a70: 0xae0200a4
    ctx->pc = 0x168a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_168a74:
    // 0x168a74: 0x24020002
    ctx->pc = 0x168a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_168a78:
    // 0x168a78: 0x14620009
label_168a7c:
    if (ctx->pc == 0x168A7Cu) {
        ctx->pc = 0x168A7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x168A80u;
        goto label_168a80;
    }
    ctx->pc = 0x168A78u;
    {
        const bool branch_taken_0x168a78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168A7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x168a78) {
            ctx->pc = 0x168AA0u;
            goto label_168aa0;
        }
    }
    ctx->pc = 0x168A80u;
label_168a80:
    // 0x168a80: 0x8e030090
    ctx->pc = 0x168a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_168a84:
    // 0x168a84: 0x8e040094
    ctx->pc = 0x168a84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_168a88:
    // 0x168a88: 0x8e0500a4
    ctx->pc = 0x168a88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_168a8c:
    // 0x168a8c: 0x60f809
label_168a90:
    if (ctx->pc == 0x168A90u) {
        ctx->pc = 0x168A90u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x168A94u;
        goto label_168a94;
    }
    ctx->pc = 0x168A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x168A94u);
        ctx->pc = 0x168A90u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168940u: goto label_168940;
            case 0x168944u: goto label_168944;
            case 0x168948u: goto label_168948;
            case 0x16894Cu: goto label_16894c;
            case 0x168950u: goto label_168950;
            case 0x168954u: goto label_168954;
            case 0x168958u: goto label_168958;
            case 0x16895Cu: goto label_16895c;
            case 0x168960u: goto label_168960;
            case 0x168964u: goto label_168964;
            case 0x168968u: goto label_168968;
            case 0x16896Cu: goto label_16896c;
            case 0x168970u: goto label_168970;
            case 0x168974u: goto label_168974;
            case 0x168978u: goto label_168978;
            case 0x16897Cu: goto label_16897c;
            case 0x168980u: goto label_168980;
            case 0x168984u: goto label_168984;
            case 0x168988u: goto label_168988;
            case 0x16898Cu: goto label_16898c;
            case 0x168990u: goto label_168990;
            case 0x168994u: goto label_168994;
            case 0x168998u: goto label_168998;
            case 0x16899Cu: goto label_16899c;
            case 0x1689A0u: goto label_1689a0;
            case 0x1689A4u: goto label_1689a4;
            case 0x1689A8u: goto label_1689a8;
            case 0x1689ACu: goto label_1689ac;
            case 0x1689B0u: goto label_1689b0;
            case 0x1689B4u: goto label_1689b4;
            case 0x1689B8u: goto label_1689b8;
            case 0x1689BCu: goto label_1689bc;
            case 0x1689C0u: goto label_1689c0;
            case 0x1689C4u: goto label_1689c4;
            case 0x1689C8u: goto label_1689c8;
            case 0x1689CCu: goto label_1689cc;
            case 0x1689D0u: goto label_1689d0;
            case 0x1689D4u: goto label_1689d4;
            case 0x1689D8u: goto label_1689d8;
            case 0x1689DCu: goto label_1689dc;
            case 0x1689E0u: goto label_1689e0;
            case 0x1689E4u: goto label_1689e4;
            case 0x1689E8u: goto label_1689e8;
            case 0x1689ECu: goto label_1689ec;
            case 0x1689F0u: goto label_1689f0;
            case 0x1689F4u: goto label_1689f4;
            case 0x1689F8u: goto label_1689f8;
            case 0x1689FCu: goto label_1689fc;
            case 0x168A00u: goto label_168a00;
            case 0x168A04u: goto label_168a04;
            case 0x168A08u: goto label_168a08;
            case 0x168A0Cu: goto label_168a0c;
            case 0x168A10u: goto label_168a10;
            case 0x168A14u: goto label_168a14;
            case 0x168A18u: goto label_168a18;
            case 0x168A1Cu: goto label_168a1c;
            case 0x168A20u: goto label_168a20;
            case 0x168A24u: goto label_168a24;
            case 0x168A28u: goto label_168a28;
            case 0x168A2Cu: goto label_168a2c;
            case 0x168A30u: goto label_168a30;
            case 0x168A34u: goto label_168a34;
            case 0x168A38u: goto label_168a38;
            case 0x168A3Cu: goto label_168a3c;
            case 0x168A40u: goto label_168a40;
            case 0x168A44u: goto label_168a44;
            case 0x168A48u: goto label_168a48;
            case 0x168A4Cu: goto label_168a4c;
            case 0x168A50u: goto label_168a50;
            case 0x168A54u: goto label_168a54;
            case 0x168A58u: goto label_168a58;
            case 0x168A5Cu: goto label_168a5c;
            case 0x168A60u: goto label_168a60;
            case 0x168A64u: goto label_168a64;
            case 0x168A68u: goto label_168a68;
            case 0x168A6Cu: goto label_168a6c;
            case 0x168A70u: goto label_168a70;
            case 0x168A74u: goto label_168a74;
            case 0x168A78u: goto label_168a78;
            case 0x168A7Cu: goto label_168a7c;
            case 0x168A80u: goto label_168a80;
            case 0x168A84u: goto label_168a84;
            case 0x168A88u: goto label_168a88;
            case 0x168A8Cu: goto label_168a8c;
            case 0x168A90u: goto label_168a90;
            case 0x168A94u: goto label_168a94;
            case 0x168A98u: goto label_168a98;
            case 0x168A9Cu: goto label_168a9c;
            case 0x168AA0u: goto label_168aa0;
            case 0x168AA4u: goto label_168aa4;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AACu: goto label_168aac;
            case 0x168AB0u: goto label_168ab0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168A94u; }
            if (ctx->pc != 0x168A94u) { return; }
        }
    }
    ctx->pc = 0x168A94u;
label_168a94:
    // 0x168a94: 0x24020003
    ctx->pc = 0x168a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_168a98:
    // 0x168a98: 0xae020004
    ctx->pc = 0x168a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_168a9c:
    // 0x168a9c: 0xdfbf0030
    ctx->pc = 0x168a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168aa0:
    // 0x168aa0: 0xdfb20020
    ctx->pc = 0x168aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_168aa4:
    // 0x168aa4: 0xdfb10010
    ctx->pc = 0x168aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_168aa8:
    // 0x168aa8: 0xdfb00000
    ctx->pc = 0x168aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168aac:
    // 0x168aac: 0x3e00008
label_168ab0:
    if (ctx->pc == 0x168AB0u) {
        ctx->pc = 0x168AB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x168AB4u;
        goto label_fallthrough_0x168aac;
    }
    ctx->pc = 0x168AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168940u: goto label_168940;
            case 0x168944u: goto label_168944;
            case 0x168948u: goto label_168948;
            case 0x16894Cu: goto label_16894c;
            case 0x168950u: goto label_168950;
            case 0x168954u: goto label_168954;
            case 0x168958u: goto label_168958;
            case 0x16895Cu: goto label_16895c;
            case 0x168960u: goto label_168960;
            case 0x168964u: goto label_168964;
            case 0x168968u: goto label_168968;
            case 0x16896Cu: goto label_16896c;
            case 0x168970u: goto label_168970;
            case 0x168974u: goto label_168974;
            case 0x168978u: goto label_168978;
            case 0x16897Cu: goto label_16897c;
            case 0x168980u: goto label_168980;
            case 0x168984u: goto label_168984;
            case 0x168988u: goto label_168988;
            case 0x16898Cu: goto label_16898c;
            case 0x168990u: goto label_168990;
            case 0x168994u: goto label_168994;
            case 0x168998u: goto label_168998;
            case 0x16899Cu: goto label_16899c;
            case 0x1689A0u: goto label_1689a0;
            case 0x1689A4u: goto label_1689a4;
            case 0x1689A8u: goto label_1689a8;
            case 0x1689ACu: goto label_1689ac;
            case 0x1689B0u: goto label_1689b0;
            case 0x1689B4u: goto label_1689b4;
            case 0x1689B8u: goto label_1689b8;
            case 0x1689BCu: goto label_1689bc;
            case 0x1689C0u: goto label_1689c0;
            case 0x1689C4u: goto label_1689c4;
            case 0x1689C8u: goto label_1689c8;
            case 0x1689CCu: goto label_1689cc;
            case 0x1689D0u: goto label_1689d0;
            case 0x1689D4u: goto label_1689d4;
            case 0x1689D8u: goto label_1689d8;
            case 0x1689DCu: goto label_1689dc;
            case 0x1689E0u: goto label_1689e0;
            case 0x1689E4u: goto label_1689e4;
            case 0x1689E8u: goto label_1689e8;
            case 0x1689ECu: goto label_1689ec;
            case 0x1689F0u: goto label_1689f0;
            case 0x1689F4u: goto label_1689f4;
            case 0x1689F8u: goto label_1689f8;
            case 0x1689FCu: goto label_1689fc;
            case 0x168A00u: goto label_168a00;
            case 0x168A04u: goto label_168a04;
            case 0x168A08u: goto label_168a08;
            case 0x168A0Cu: goto label_168a0c;
            case 0x168A10u: goto label_168a10;
            case 0x168A14u: goto label_168a14;
            case 0x168A18u: goto label_168a18;
            case 0x168A1Cu: goto label_168a1c;
            case 0x168A20u: goto label_168a20;
            case 0x168A24u: goto label_168a24;
            case 0x168A28u: goto label_168a28;
            case 0x168A2Cu: goto label_168a2c;
            case 0x168A30u: goto label_168a30;
            case 0x168A34u: goto label_168a34;
            case 0x168A38u: goto label_168a38;
            case 0x168A3Cu: goto label_168a3c;
            case 0x168A40u: goto label_168a40;
            case 0x168A44u: goto label_168a44;
            case 0x168A48u: goto label_168a48;
            case 0x168A4Cu: goto label_168a4c;
            case 0x168A50u: goto label_168a50;
            case 0x168A54u: goto label_168a54;
            case 0x168A58u: goto label_168a58;
            case 0x168A5Cu: goto label_168a5c;
            case 0x168A60u: goto label_168a60;
            case 0x168A64u: goto label_168a64;
            case 0x168A68u: goto label_168a68;
            case 0x168A6Cu: goto label_168a6c;
            case 0x168A70u: goto label_168a70;
            case 0x168A74u: goto label_168a74;
            case 0x168A78u: goto label_168a78;
            case 0x168A7Cu: goto label_168a7c;
            case 0x168A80u: goto label_168a80;
            case 0x168A84u: goto label_168a84;
            case 0x168A88u: goto label_168a88;
            case 0x168A8Cu: goto label_168a8c;
            case 0x168A90u: goto label_168a90;
            case 0x168A94u: goto label_168a94;
            case 0x168A98u: goto label_168a98;
            case 0x168A9Cu: goto label_168a9c;
            case 0x168AA0u: goto label_168aa0;
            case 0x168AA4u: goto label_168aa4;
            case 0x168AA8u: goto label_168aa8;
            case 0x168AACu: goto label_168aac;
            case 0x168AB0u: goto label_168ab0;
            default: break;
        }
        return;
    }
label_fallthrough_0x168aac:
    ctx->pc = 0x168AB4u;
}
