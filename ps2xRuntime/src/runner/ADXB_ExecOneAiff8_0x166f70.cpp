#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAiff8
// Address: 0x166f70 - 0x1670e8
void ADXB_ExecOneAiff8_0x166f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAiff8");


    ctx->pc = 0x166f70u;

label_166f70:
    // 0x166f70: 0x27bdffc0
    ctx->pc = 0x166f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_166f74:
    // 0x166f74: 0x24020001
    ctx->pc = 0x166f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_166f78:
    // 0x166f78: 0xffb10010
    ctx->pc = 0x166f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_166f7c:
    // 0x166f7c: 0xffb00000
    ctx->pc = 0x166f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166f80:
    // 0x166f80: 0xffbf0030
    ctx->pc = 0x166f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_166f84:
    // 0x166f84: 0x80802d
    ctx->pc = 0x166f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166f88:
    // 0x166f88: 0xffb20020
    ctx->pc = 0x166f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_166f8c:
    // 0x166f8c: 0x26110050
    ctx->pc = 0x166f8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_166f90:
    // 0x166f90: 0x8e030004
    ctx->pc = 0x166f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_166f94:
    // 0x166f94: 0x14620044
label_166f98:
    if (ctx->pc == 0x166F98u) {
        ctx->pc = 0x166F98u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x166F9Cu;
        goto label_166f9c;
    }
    ctx->pc = 0x166F94u;
    {
        const bool branch_taken_0x166f94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x166F98u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x166f94) {
            ctx->pc = 0x1670A8u;
            goto label_1670a8;
        }
    }
    ctx->pc = 0x166F9Cu;
label_166f9c:
    // 0x166f9c: 0xc05cfec
label_166fa0:
    if (ctx->pc == 0x166FA0u) {
        ctx->pc = 0x166FA0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x166FA4u;
        goto label_166fa4;
    }
    ctx->pc = 0x166F9Cu;
    SET_GPR_U32(ctx, 31, 0x166FA4u);
    ctx->pc = 0x166FA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166FA4u; }
        else if (ctx->pc != 0x166FA4u) { ctx->pc = 0x166FA4u; }
    }
    if (ctx->pc != 0x166FA4u) { return; }
    ctx->pc = 0x166FA4u;
label_166fa4:
    // 0x166fa4: 0x54400040
label_166fa8:
    if (ctx->pc == 0x166FA8u) {
        ctx->pc = 0x166FA8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x166FACu;
        goto label_166fac;
    }
    ctx->pc = 0x166FA4u;
    {
        const bool branch_taken_0x166fa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x166fa4) {
            ctx->pc = 0x166FA8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1670A8u;
            goto label_1670a8;
        }
    }
    ctx->pc = 0x166FACu;
label_166fac:
    // 0x166fac: 0x8e020088
    ctx->pc = 0x166facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_166fb0:
    // 0x166fb0: 0x26050070
    ctx->pc = 0x166fb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_166fb4:
    // 0x166fb4: 0x8e04008c
    ctx->pc = 0x166fb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_166fb8:
    // 0x166fb8: 0x26060074
    ctx->pc = 0x166fb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_166fbc:
    // 0x166fbc: 0x40f809
label_166fc0:
    if (ctx->pc == 0x166FC0u) {
        ctx->pc = 0x166FC0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x166FC4u;
        goto label_166fc4;
    }
    ctx->pc = 0x166FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166FC4u);
        ctx->pc = 0x166FC0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F70u: goto label_166f70;
            case 0x166F74u: goto label_166f74;
            case 0x166F78u: goto label_166f78;
            case 0x166F7Cu: goto label_166f7c;
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166FC4u; }
            if (ctx->pc != 0x166FC4u) { return; }
        }
    }
    ctx->pc = 0x166FC4u;
label_166fc4:
    // 0x166fc4: 0x8e290020
    ctx->pc = 0x166fc4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_166fc8:
    // 0x166fc8: 0x24060002
    ctx->pc = 0x166fc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_166fcc:
    // 0x166fcc: 0x8e230018
    ctx->pc = 0x166fccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_166fd0:
    // 0x166fd0: 0x8e2a0014
    ctx->pc = 0x166fd0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_166fd4:
    // 0x166fd4: 0x91040
    ctx->pc = 0x166fd4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 9), 1));
label_166fd8:
    // 0x166fd8: 0x8e240024
    ctx->pc = 0x166fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_166fdc:
    // 0x166fdc: 0x693823
    ctx->pc = 0x166fdcu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_166fe0:
    // 0x166fe0: 0x1425821
    ctx->pc = 0x166fe0u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_166fe4:
    // 0x166fe4: 0x8e250004
    ctx->pc = 0x166fe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_166fe8:
    // 0x166fe8: 0x87102a
    ctx->pc = 0x166fe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_166fec:
    // 0x166fec: 0x8203000e
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_166ff0:
    // 0x166ff0: 0x82380b
    ctx->pc = 0x166ff0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
label_166ff4:
    // 0x166ff4: 0x9208000e
    ctx->pc = 0x166ff4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_166ff8:
    // 0x166ff8: 0xa7102a
    ctx->pc = 0x166ff8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
label_166ffc:
    // 0x166ffc: 0x14660017
label_167000:
    if (ctx->pc == 0x167000u) {
        ctx->pc = 0x167000u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        ctx->pc = 0x167004u;
        goto label_167004;
    }
    ctx->pc = 0x166FFCu;
    {
        const bool branch_taken_0x166ffc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x167000u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        if (branch_taken_0x166ffc) {
            ctx->pc = 0x16705Cu;
            goto label_16705c;
        }
    }
    ctx->pc = 0x167004u;
label_167004:
    // 0x167004: 0x8e22001c
    ctx->pc = 0x167004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_167008:
    // 0x167008: 0x491021
    ctx->pc = 0x167008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_16700c:
    // 0x16700c: 0x21040
    ctx->pc = 0x16700cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_167010:
    // 0x167010: 0x18e0001e
label_167014:
    if (ctx->pc == 0x167014u) {
        ctx->pc = 0x167014u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->pc = 0x167018u;
        goto label_167018;
    }
    ctx->pc = 0x167010u;
    {
        const bool branch_taken_0x167010 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x167014u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        if (branch_taken_0x167010) {
            ctx->pc = 0x16708Cu;
            goto label_16708c;
        }
    }
    ctx->pc = 0x167018u;
label_167018:
    // 0x167018: 0x40302d
    ctx->pc = 0x167018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16701c:
    // 0x16701c: 0x160282d
    ctx->pc = 0x16701cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_167020:
    // 0x167020: 0x240182d
    ctx->pc = 0x167020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167024:
    // 0x167024: 0xe0202d
    ctx->pc = 0x167024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_167028:
    // 0x167028: 0x90620000
    ctx->pc = 0x167028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_16702c:
    // 0x16702c: 0x2484ffff
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_167030:
    // 0x167030: 0x21200
    ctx->pc = 0x167030u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_167034:
    // 0x167034: 0xa4a20000
    ctx->pc = 0x167034u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_167038:
    // 0x167038: 0x24a50002
    ctx->pc = 0x167038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_16703c:
    // 0x16703c: 0x90620001
    ctx->pc = 0x16703cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_167040:
    // 0x167040: 0x24630002
    ctx->pc = 0x167040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_167044:
    // 0x167044: 0x21200
    ctx->pc = 0x167044u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_167048:
    // 0x167048: 0xa4c20000
    ctx->pc = 0x167048u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_16704c:
    // 0x16704c: 0x1480fff6
label_167050:
    if (ctx->pc == 0x167050u) {
        ctx->pc = 0x167050u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x167054u;
        goto label_167054;
    }
    ctx->pc = 0x16704Cu;
    {
        const bool branch_taken_0x16704c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x167050u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x16704c) {
            ctx->pc = 0x167028u;
            goto label_167028;
        }
    }
    ctx->pc = 0x167054u;
label_167054:
    // 0x167054: 0x1000000d
label_167058:
    if (ctx->pc == 0x167058u) {
        ctx->pc = 0x167058u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x16705Cu;
        goto label_16705c;
    }
    ctx->pc = 0x167054u;
    {
        const bool branch_taken_0x167054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167058u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x167054) {
            ctx->pc = 0x16708Cu;
            goto label_16708c;
        }
    }
    ctx->pc = 0x16705Cu;
label_16705c:
    // 0x16705c: 0x18e0000b
label_167060:
    if (ctx->pc == 0x167060u) {
        ctx->pc = 0x167060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167064u;
        goto label_167064;
    }
    ctx->pc = 0x16705Cu;
    {
        const bool branch_taken_0x16705c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x167060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16705c) {
            ctx->pc = 0x16708Cu;
            goto label_16708c;
        }
    }
    ctx->pc = 0x167064u;
label_167064:
    // 0x167064: 0x160282d
    ctx->pc = 0x167064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_167068:
    // 0x167068: 0x2441021
    ctx->pc = 0x167068u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_16706c:
    // 0x16706c: 0x90430000
    ctx->pc = 0x16706cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_167070:
    // 0x167070: 0x24840001
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_167074:
    // 0x167074: 0x87102a
    ctx->pc = 0x167074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_167078:
    // 0x167078: 0x31a00
    ctx->pc = 0x167078u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
label_16707c:
    // 0x16707c: 0xa4a30000
    ctx->pc = 0x16707cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_167080:
    // 0x167080: 0x1440fff9
label_167084:
    if (ctx->pc == 0x167084u) {
        ctx->pc = 0x167084u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x167088u;
        goto label_167088;
    }
    ctx->pc = 0x167080u;
    {
        const bool branch_taken_0x167080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x167084u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x167080) {
            ctx->pc = 0x167068u;
            goto label_167068;
        }
    }
    ctx->pc = 0x167088u;
label_167088:
    // 0x167088: 0x9208000e
    ctx->pc = 0x167088u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_16708c:
    // 0x16708c: 0x81600
    ctx->pc = 0x16708cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 24));
label_167090:
    // 0x167090: 0x24030002
    ctx->pc = 0x167090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_167094:
    // 0x167094: 0x21603
    ctx->pc = 0x167094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_167098:
    // 0x167098: 0xae030004
    ctx->pc = 0x167098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_16709c:
    // 0x16709c: 0xe21018
    ctx->pc = 0x16709cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1670a0:
    // 0x1670a0: 0xae0700a0
    ctx->pc = 0x1670a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
label_1670a4:
    // 0x1670a4: 0xae0200a4
    ctx->pc = 0x1670a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1670a8:
    // 0x1670a8: 0x24020002
    ctx->pc = 0x1670a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1670ac:
    // 0x1670ac: 0x14620009
label_1670b0:
    if (ctx->pc == 0x1670B0u) {
        ctx->pc = 0x1670B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1670B4u;
        goto label_1670b4;
    }
    ctx->pc = 0x1670ACu;
    {
        const bool branch_taken_0x1670ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1670B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1670ac) {
            ctx->pc = 0x1670D4u;
            goto label_1670d4;
        }
    }
    ctx->pc = 0x1670B4u;
label_1670b4:
    // 0x1670b4: 0x8e030090
    ctx->pc = 0x1670b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1670b8:
    // 0x1670b8: 0x8e040094
    ctx->pc = 0x1670b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1670bc:
    // 0x1670bc: 0x8e0500a4
    ctx->pc = 0x1670bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1670c0:
    // 0x1670c0: 0x60f809
label_1670c4:
    if (ctx->pc == 0x1670C4u) {
        ctx->pc = 0x1670C4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x1670C8u;
        goto label_1670c8;
    }
    ctx->pc = 0x1670C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1670C8u);
        ctx->pc = 0x1670C4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F70u: goto label_166f70;
            case 0x166F74u: goto label_166f74;
            case 0x166F78u: goto label_166f78;
            case 0x166F7Cu: goto label_166f7c;
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1670C8u; }
            if (ctx->pc != 0x1670C8u) { return; }
        }
    }
    ctx->pc = 0x1670C8u;
label_1670c8:
    // 0x1670c8: 0x24020003
    ctx->pc = 0x1670c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1670cc:
    // 0x1670cc: 0xae020004
    ctx->pc = 0x1670ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1670d0:
    // 0x1670d0: 0xdfbf0030
    ctx->pc = 0x1670d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1670d4:
    // 0x1670d4: 0xdfb20020
    ctx->pc = 0x1670d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1670d8:
    // 0x1670d8: 0xdfb10010
    ctx->pc = 0x1670d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1670dc:
    // 0x1670dc: 0xdfb00000
    ctx->pc = 0x1670dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1670e0:
    // 0x1670e0: 0x3e00008
label_1670e4:
    if (ctx->pc == 0x1670E4u) {
        ctx->pc = 0x1670E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1670E8u;
        goto label_fallthrough_0x1670e0;
    }
    ctx->pc = 0x1670E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1670E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166F70u: goto label_166f70;
            case 0x166F74u: goto label_166f74;
            case 0x166F78u: goto label_166f78;
            case 0x166F7Cu: goto label_166f7c;
            case 0x166F80u: goto label_166f80;
            case 0x166F84u: goto label_166f84;
            case 0x166F88u: goto label_166f88;
            case 0x166F8Cu: goto label_166f8c;
            case 0x166F90u: goto label_166f90;
            case 0x166F94u: goto label_166f94;
            case 0x166F98u: goto label_166f98;
            case 0x166F9Cu: goto label_166f9c;
            case 0x166FA0u: goto label_166fa0;
            case 0x166FA4u: goto label_166fa4;
            case 0x166FA8u: goto label_166fa8;
            case 0x166FACu: goto label_166fac;
            case 0x166FB0u: goto label_166fb0;
            case 0x166FB4u: goto label_166fb4;
            case 0x166FB8u: goto label_166fb8;
            case 0x166FBCu: goto label_166fbc;
            case 0x166FC0u: goto label_166fc0;
            case 0x166FC4u: goto label_166fc4;
            case 0x166FC8u: goto label_166fc8;
            case 0x166FCCu: goto label_166fcc;
            case 0x166FD0u: goto label_166fd0;
            case 0x166FD4u: goto label_166fd4;
            case 0x166FD8u: goto label_166fd8;
            case 0x166FDCu: goto label_166fdc;
            case 0x166FE0u: goto label_166fe0;
            case 0x166FE4u: goto label_166fe4;
            case 0x166FE8u: goto label_166fe8;
            case 0x166FECu: goto label_166fec;
            case 0x166FF0u: goto label_166ff0;
            case 0x166FF4u: goto label_166ff4;
            case 0x166FF8u: goto label_166ff8;
            case 0x166FFCu: goto label_166ffc;
            case 0x167000u: goto label_167000;
            case 0x167004u: goto label_167004;
            case 0x167008u: goto label_167008;
            case 0x16700Cu: goto label_16700c;
            case 0x167010u: goto label_167010;
            case 0x167014u: goto label_167014;
            case 0x167018u: goto label_167018;
            case 0x16701Cu: goto label_16701c;
            case 0x167020u: goto label_167020;
            case 0x167024u: goto label_167024;
            case 0x167028u: goto label_167028;
            case 0x16702Cu: goto label_16702c;
            case 0x167030u: goto label_167030;
            case 0x167034u: goto label_167034;
            case 0x167038u: goto label_167038;
            case 0x16703Cu: goto label_16703c;
            case 0x167040u: goto label_167040;
            case 0x167044u: goto label_167044;
            case 0x167048u: goto label_167048;
            case 0x16704Cu: goto label_16704c;
            case 0x167050u: goto label_167050;
            case 0x167054u: goto label_167054;
            case 0x167058u: goto label_167058;
            case 0x16705Cu: goto label_16705c;
            case 0x167060u: goto label_167060;
            case 0x167064u: goto label_167064;
            case 0x167068u: goto label_167068;
            case 0x16706Cu: goto label_16706c;
            case 0x167070u: goto label_167070;
            case 0x167074u: goto label_167074;
            case 0x167078u: goto label_167078;
            case 0x16707Cu: goto label_16707c;
            case 0x167080u: goto label_167080;
            case 0x167084u: goto label_167084;
            case 0x167088u: goto label_167088;
            case 0x16708Cu: goto label_16708c;
            case 0x167090u: goto label_167090;
            case 0x167094u: goto label_167094;
            case 0x167098u: goto label_167098;
            case 0x16709Cu: goto label_16709c;
            case 0x1670A0u: goto label_1670a0;
            case 0x1670A4u: goto label_1670a4;
            case 0x1670A8u: goto label_1670a8;
            case 0x1670ACu: goto label_1670ac;
            case 0x1670B0u: goto label_1670b0;
            case 0x1670B4u: goto label_1670b4;
            case 0x1670B8u: goto label_1670b8;
            case 0x1670BCu: goto label_1670bc;
            case 0x1670C0u: goto label_1670c0;
            case 0x1670C4u: goto label_1670c4;
            case 0x1670C8u: goto label_1670c8;
            case 0x1670CCu: goto label_1670cc;
            case 0x1670D0u: goto label_1670d0;
            case 0x1670D4u: goto label_1670d4;
            case 0x1670D8u: goto label_1670d8;
            case 0x1670DCu: goto label_1670dc;
            case 0x1670E0u: goto label_1670e0;
            case 0x1670E4u: goto label_1670e4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1670e0:
    ctx->pc = 0x1670E8u;
}
