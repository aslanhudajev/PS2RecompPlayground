#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAiff16
// Address: 0x166dd8 - 0x166f6c
void ADXB_ExecOneAiff16_0x166dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAiff16");


    ctx->pc = 0x166dd8u;

label_166dd8:
    // 0x166dd8: 0x27bdffc0
    ctx->pc = 0x166dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_166ddc:
    // 0x166ddc: 0x24020001
    ctx->pc = 0x166ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_166de0:
    // 0x166de0: 0xffb10010
    ctx->pc = 0x166de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_166de4:
    // 0x166de4: 0xffb00000
    ctx->pc = 0x166de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_166de8:
    // 0x166de8: 0xffbf0030
    ctx->pc = 0x166de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_166dec:
    // 0x166dec: 0x80802d
    ctx->pc = 0x166decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166df0:
    // 0x166df0: 0xffb20020
    ctx->pc = 0x166df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_166df4:
    // 0x166df4: 0x26110050
    ctx->pc = 0x166df4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_166df8:
    // 0x166df8: 0x8e030004
    ctx->pc = 0x166df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_166dfc:
    // 0x166dfc: 0x1462004b
label_166e00:
    if (ctx->pc == 0x166E00u) {
        ctx->pc = 0x166E00u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x166E04u;
        goto label_166e04;
    }
    ctx->pc = 0x166DFCu;
    {
        const bool branch_taken_0x166dfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x166E00u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x166dfc) {
            ctx->pc = 0x166F2Cu;
            goto label_166f2c;
        }
    }
    ctx->pc = 0x166E04u;
label_166e04:
    // 0x166e04: 0xc05cfec
label_166e08:
    if (ctx->pc == 0x166E08u) {
        ctx->pc = 0x166E08u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x166E0Cu;
        goto label_166e0c;
    }
    ctx->pc = 0x166E04u;
    SET_GPR_U32(ctx, 31, 0x166E0Cu);
    ctx->pc = 0x166E08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166E0Cu; }
        else if (ctx->pc != 0x166E0Cu) { ctx->pc = 0x166E0Cu; }
    }
    if (ctx->pc != 0x166E0Cu) { return; }
    ctx->pc = 0x166E0Cu;
label_166e0c:
    // 0x166e0c: 0x54400047
label_166e10:
    if (ctx->pc == 0x166E10u) {
        ctx->pc = 0x166E10u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x166E14u;
        goto label_166e14;
    }
    ctx->pc = 0x166E0Cu;
    {
        const bool branch_taken_0x166e0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x166e0c) {
            ctx->pc = 0x166E10u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x166F2Cu;
            goto label_166f2c;
        }
    }
    ctx->pc = 0x166E14u;
label_166e14:
    // 0x166e14: 0x8e020088
    ctx->pc = 0x166e14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_166e18:
    // 0x166e18: 0x26050070
    ctx->pc = 0x166e18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_166e1c:
    // 0x166e1c: 0x8e04008c
    ctx->pc = 0x166e1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_166e20:
    // 0x166e20: 0x26060074
    ctx->pc = 0x166e20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_166e24:
    // 0x166e24: 0x40f809
label_166e28:
    if (ctx->pc == 0x166E28u) {
        ctx->pc = 0x166E28u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x166E2Cu;
        goto label_166e2c;
    }
    ctx->pc = 0x166E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166E2Cu);
        ctx->pc = 0x166E28u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166DD8u: goto label_166dd8;
            case 0x166DDCu: goto label_166ddc;
            case 0x166DE0u: goto label_166de0;
            case 0x166DE4u: goto label_166de4;
            case 0x166DE8u: goto label_166de8;
            case 0x166DECu: goto label_166dec;
            case 0x166DF0u: goto label_166df0;
            case 0x166DF4u: goto label_166df4;
            case 0x166DF8u: goto label_166df8;
            case 0x166DFCu: goto label_166dfc;
            case 0x166E00u: goto label_166e00;
            case 0x166E04u: goto label_166e04;
            case 0x166E08u: goto label_166e08;
            case 0x166E0Cu: goto label_166e0c;
            case 0x166E10u: goto label_166e10;
            case 0x166E14u: goto label_166e14;
            case 0x166E18u: goto label_166e18;
            case 0x166E1Cu: goto label_166e1c;
            case 0x166E20u: goto label_166e20;
            case 0x166E24u: goto label_166e24;
            case 0x166E28u: goto label_166e28;
            case 0x166E2Cu: goto label_166e2c;
            case 0x166E30u: goto label_166e30;
            case 0x166E34u: goto label_166e34;
            case 0x166E38u: goto label_166e38;
            case 0x166E3Cu: goto label_166e3c;
            case 0x166E40u: goto label_166e40;
            case 0x166E44u: goto label_166e44;
            case 0x166E48u: goto label_166e48;
            case 0x166E4Cu: goto label_166e4c;
            case 0x166E50u: goto label_166e50;
            case 0x166E54u: goto label_166e54;
            case 0x166E58u: goto label_166e58;
            case 0x166E5Cu: goto label_166e5c;
            case 0x166E60u: goto label_166e60;
            case 0x166E64u: goto label_166e64;
            case 0x166E68u: goto label_166e68;
            case 0x166E6Cu: goto label_166e6c;
            case 0x166E70u: goto label_166e70;
            case 0x166E74u: goto label_166e74;
            case 0x166E78u: goto label_166e78;
            case 0x166E7Cu: goto label_166e7c;
            case 0x166E80u: goto label_166e80;
            case 0x166E84u: goto label_166e84;
            case 0x166E88u: goto label_166e88;
            case 0x166E8Cu: goto label_166e8c;
            case 0x166E90u: goto label_166e90;
            case 0x166E94u: goto label_166e94;
            case 0x166E98u: goto label_166e98;
            case 0x166E9Cu: goto label_166e9c;
            case 0x166EA0u: goto label_166ea0;
            case 0x166EA4u: goto label_166ea4;
            case 0x166EA8u: goto label_166ea8;
            case 0x166EACu: goto label_166eac;
            case 0x166EB0u: goto label_166eb0;
            case 0x166EB4u: goto label_166eb4;
            case 0x166EB8u: goto label_166eb8;
            case 0x166EBCu: goto label_166ebc;
            case 0x166EC0u: goto label_166ec0;
            case 0x166EC4u: goto label_166ec4;
            case 0x166EC8u: goto label_166ec8;
            case 0x166ECCu: goto label_166ecc;
            case 0x166ED0u: goto label_166ed0;
            case 0x166ED4u: goto label_166ed4;
            case 0x166ED8u: goto label_166ed8;
            case 0x166EDCu: goto label_166edc;
            case 0x166EE0u: goto label_166ee0;
            case 0x166EE4u: goto label_166ee4;
            case 0x166EE8u: goto label_166ee8;
            case 0x166EECu: goto label_166eec;
            case 0x166EF0u: goto label_166ef0;
            case 0x166EF4u: goto label_166ef4;
            case 0x166EF8u: goto label_166ef8;
            case 0x166EFCu: goto label_166efc;
            case 0x166F00u: goto label_166f00;
            case 0x166F04u: goto label_166f04;
            case 0x166F08u: goto label_166f08;
            case 0x166F0Cu: goto label_166f0c;
            case 0x166F10u: goto label_166f10;
            case 0x166F14u: goto label_166f14;
            case 0x166F18u: goto label_166f18;
            case 0x166F1Cu: goto label_166f1c;
            case 0x166F20u: goto label_166f20;
            case 0x166F24u: goto label_166f24;
            case 0x166F28u: goto label_166f28;
            case 0x166F2Cu: goto label_166f2c;
            case 0x166F30u: goto label_166f30;
            case 0x166F34u: goto label_166f34;
            case 0x166F38u: goto label_166f38;
            case 0x166F3Cu: goto label_166f3c;
            case 0x166F40u: goto label_166f40;
            case 0x166F44u: goto label_166f44;
            case 0x166F48u: goto label_166f48;
            case 0x166F4Cu: goto label_166f4c;
            case 0x166F50u: goto label_166f50;
            case 0x166F54u: goto label_166f54;
            case 0x166F58u: goto label_166f58;
            case 0x166F5Cu: goto label_166f5c;
            case 0x166F60u: goto label_166f60;
            case 0x166F64u: goto label_166f64;
            case 0x166F68u: goto label_166f68;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166E2Cu; }
            if (ctx->pc != 0x166E2Cu) { return; }
        }
    }
    ctx->pc = 0x166E2Cu;
label_166e2c:
    // 0x166e2c: 0x8e270020
    ctx->pc = 0x166e2cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_166e30:
    // 0x166e30: 0x24060002
    ctx->pc = 0x166e30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_166e34:
    // 0x166e34: 0x8e230018
    ctx->pc = 0x166e34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_166e38:
    // 0x166e38: 0x8e290014
    ctx->pc = 0x166e38u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_166e3c:
    // 0x166e3c: 0x71040
    ctx->pc = 0x166e3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
label_166e40:
    // 0x166e40: 0x8e240024
    ctx->pc = 0x166e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_166e44:
    // 0x166e44: 0x674023
    ctx->pc = 0x166e44u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_166e48:
    // 0x166e48: 0x1225021
    ctx->pc = 0x166e48u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_166e4c:
    // 0x166e4c: 0x8e250004
    ctx->pc = 0x166e4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_166e50:
    // 0x166e50: 0x88102a
    ctx->pc = 0x166e50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
label_166e54:
    // 0x166e54: 0x8203000e
    ctx->pc = 0x166e54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_166e58:
    // 0x166e58: 0x82400b
    ctx->pc = 0x166e58u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 4));
label_166e5c:
    // 0x166e5c: 0xa8102a
    ctx->pc = 0x166e5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
label_166e60:
    // 0x166e60: 0x9204000e
    ctx->pc = 0x166e60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_166e64:
    // 0x166e64: 0x1466001b
label_166e68:
    if (ctx->pc == 0x166E68u) {
        ctx->pc = 0x166E68u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
        ctx->pc = 0x166E6Cu;
        goto label_166e6c;
    }
    ctx->pc = 0x166E64u;
    {
        const bool branch_taken_0x166e64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x166E68u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
        if (branch_taken_0x166e64) {
            ctx->pc = 0x166ED4u;
            goto label_166ed4;
        }
    }
    ctx->pc = 0x166E6Cu;
label_166e6c:
    // 0x166e6c: 0x8e22001c
    ctx->pc = 0x166e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_166e70:
    // 0x166e70: 0x471021
    ctx->pc = 0x166e70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_166e74:
    // 0x166e74: 0x21040
    ctx->pc = 0x166e74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_166e78:
    // 0x166e78: 0x19000025
label_166e7c:
    if (ctx->pc == 0x166E7Cu) {
        ctx->pc = 0x166E7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x166E80u;
        goto label_166e80;
    }
    ctx->pc = 0x166E78u;
    {
        const bool branch_taken_0x166e78 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x166E7Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x166e78) {
            ctx->pc = 0x166F10u;
            goto label_166f10;
        }
    }
    ctx->pc = 0x166E80u;
label_166e80:
    // 0x166e80: 0x40382d
    ctx->pc = 0x166e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166e84:
    // 0x166e84: 0x140302d
    ctx->pc = 0x166e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_166e88:
    // 0x166e88: 0x240282d
    ctx->pc = 0x166e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166e8c:
    // 0x166e8c: 0x100202d
    ctx->pc = 0x166e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_166e90:
    // 0x166e90: 0x94a20000
    ctx->pc = 0x166e90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_166e94:
    // 0x166e94: 0x2484ffff
    ctx->pc = 0x166e94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_166e98:
    // 0x166e98: 0x21a00
    ctx->pc = 0x166e98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_166e9c:
    // 0x166e9c: 0x21202
    ctx->pc = 0x166e9cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_166ea0:
    // 0x166ea0: 0x431025
    ctx->pc = 0x166ea0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_166ea4:
    // 0x166ea4: 0xa4c20000
    ctx->pc = 0x166ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_166ea8:
    // 0x166ea8: 0x24c60002
    ctx->pc = 0x166ea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_166eac:
    // 0x166eac: 0x94a20002
    ctx->pc = 0x166eacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_166eb0:
    // 0x166eb0: 0x24a50004
    ctx->pc = 0x166eb0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_166eb4:
    // 0x166eb4: 0x21a00
    ctx->pc = 0x166eb4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_166eb8:
    // 0x166eb8: 0x21202
    ctx->pc = 0x166eb8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_166ebc:
    // 0x166ebc: 0x431025
    ctx->pc = 0x166ebcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_166ec0:
    // 0x166ec0: 0xa4e20000
    ctx->pc = 0x166ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_166ec4:
    // 0x166ec4: 0x1480fff2
label_166ec8:
    if (ctx->pc == 0x166EC8u) {
        ctx->pc = 0x166EC8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x166ECCu;
        goto label_166ecc;
    }
    ctx->pc = 0x166EC4u;
    {
        const bool branch_taken_0x166ec4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x166EC8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x166ec4) {
            ctx->pc = 0x166E90u;
            goto label_166e90;
        }
    }
    ctx->pc = 0x166ECCu;
label_166ecc:
    // 0x166ecc: 0x10000010
label_166ed0:
    if (ctx->pc == 0x166ED0u) {
        ctx->pc = 0x166ED0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x166ED4u;
        goto label_166ed4;
    }
    ctx->pc = 0x166ECCu;
    {
        const bool branch_taken_0x166ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166ED0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x166ecc) {
            ctx->pc = 0x166F10u;
            goto label_166f10;
        }
    }
    ctx->pc = 0x166ED4u;
label_166ed4:
    // 0x166ed4: 0x1900000e
label_166ed8:
    if (ctx->pc == 0x166ED8u) {
        ctx->pc = 0x166ED8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166EDCu;
        goto label_166edc;
    }
    ctx->pc = 0x166ED4u;
    {
        const bool branch_taken_0x166ed4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x166ED8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166ed4) {
            ctx->pc = 0x166F10u;
            goto label_166f10;
        }
    }
    ctx->pc = 0x166EDCu;
label_166edc:
    // 0x166edc: 0x240282d
    ctx->pc = 0x166edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166ee0:
    // 0x166ee0: 0x100202d
    ctx->pc = 0x166ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_166ee4:
    // 0x166ee4: 0x0
    ctx->pc = 0x166ee4u;
    // NOP
label_166ee8:
    // 0x166ee8: 0x94a20000
    ctx->pc = 0x166ee8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_166eec:
    // 0x166eec: 0x2484ffff
    ctx->pc = 0x166eecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_166ef0:
    // 0x166ef0: 0x24a50002
    ctx->pc = 0x166ef0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_166ef4:
    // 0x166ef4: 0x21a00
    ctx->pc = 0x166ef4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_166ef8:
    // 0x166ef8: 0x21202
    ctx->pc = 0x166ef8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_166efc:
    // 0x166efc: 0x431025
    ctx->pc = 0x166efcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_166f00:
    // 0x166f00: 0xa4c20000
    ctx->pc = 0x166f00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_166f04:
    // 0x166f04: 0x1480fff8
label_166f08:
    if (ctx->pc == 0x166F08u) {
        ctx->pc = 0x166F08u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x166F0Cu;
        goto label_166f0c;
    }
    ctx->pc = 0x166F04u;
    {
        const bool branch_taken_0x166f04 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x166F08u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x166f04) {
            ctx->pc = 0x166EE8u;
            goto label_166ee8;
        }
    }
    ctx->pc = 0x166F0Cu;
label_166f0c:
    // 0x166f0c: 0x9204000e
    ctx->pc = 0x166f0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_166f10:
    // 0x166f10: 0x41600
    ctx->pc = 0x166f10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_166f14:
    // 0x166f14: 0x24030002
    ctx->pc = 0x166f14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_166f18:
    // 0x166f18: 0x215c3
    ctx->pc = 0x166f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
label_166f1c:
    // 0x166f1c: 0xae030004
    ctx->pc = 0x166f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_166f20:
    // 0x166f20: 0x1021018
    ctx->pc = 0x166f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_166f24:
    // 0x166f24: 0xae0800a0
    ctx->pc = 0x166f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 8));
label_166f28:
    // 0x166f28: 0xae0200a4
    ctx->pc = 0x166f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_166f2c:
    // 0x166f2c: 0x24020002
    ctx->pc = 0x166f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_166f30:
    // 0x166f30: 0x14620009
label_166f34:
    if (ctx->pc == 0x166F34u) {
        ctx->pc = 0x166F34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x166F38u;
        goto label_166f38;
    }
    ctx->pc = 0x166F30u;
    {
        const bool branch_taken_0x166f30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x166F34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x166f30) {
            ctx->pc = 0x166F58u;
            goto label_166f58;
        }
    }
    ctx->pc = 0x166F38u;
label_166f38:
    // 0x166f38: 0x8e030090
    ctx->pc = 0x166f38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_166f3c:
    // 0x166f3c: 0x8e040094
    ctx->pc = 0x166f3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_166f40:
    // 0x166f40: 0x8e0500a4
    ctx->pc = 0x166f40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_166f44:
    // 0x166f44: 0x60f809
label_166f48:
    if (ctx->pc == 0x166F48u) {
        ctx->pc = 0x166F48u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x166F4Cu;
        goto label_166f4c;
    }
    ctx->pc = 0x166F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166F4Cu);
        ctx->pc = 0x166F48u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166DD8u: goto label_166dd8;
            case 0x166DDCu: goto label_166ddc;
            case 0x166DE0u: goto label_166de0;
            case 0x166DE4u: goto label_166de4;
            case 0x166DE8u: goto label_166de8;
            case 0x166DECu: goto label_166dec;
            case 0x166DF0u: goto label_166df0;
            case 0x166DF4u: goto label_166df4;
            case 0x166DF8u: goto label_166df8;
            case 0x166DFCu: goto label_166dfc;
            case 0x166E00u: goto label_166e00;
            case 0x166E04u: goto label_166e04;
            case 0x166E08u: goto label_166e08;
            case 0x166E0Cu: goto label_166e0c;
            case 0x166E10u: goto label_166e10;
            case 0x166E14u: goto label_166e14;
            case 0x166E18u: goto label_166e18;
            case 0x166E1Cu: goto label_166e1c;
            case 0x166E20u: goto label_166e20;
            case 0x166E24u: goto label_166e24;
            case 0x166E28u: goto label_166e28;
            case 0x166E2Cu: goto label_166e2c;
            case 0x166E30u: goto label_166e30;
            case 0x166E34u: goto label_166e34;
            case 0x166E38u: goto label_166e38;
            case 0x166E3Cu: goto label_166e3c;
            case 0x166E40u: goto label_166e40;
            case 0x166E44u: goto label_166e44;
            case 0x166E48u: goto label_166e48;
            case 0x166E4Cu: goto label_166e4c;
            case 0x166E50u: goto label_166e50;
            case 0x166E54u: goto label_166e54;
            case 0x166E58u: goto label_166e58;
            case 0x166E5Cu: goto label_166e5c;
            case 0x166E60u: goto label_166e60;
            case 0x166E64u: goto label_166e64;
            case 0x166E68u: goto label_166e68;
            case 0x166E6Cu: goto label_166e6c;
            case 0x166E70u: goto label_166e70;
            case 0x166E74u: goto label_166e74;
            case 0x166E78u: goto label_166e78;
            case 0x166E7Cu: goto label_166e7c;
            case 0x166E80u: goto label_166e80;
            case 0x166E84u: goto label_166e84;
            case 0x166E88u: goto label_166e88;
            case 0x166E8Cu: goto label_166e8c;
            case 0x166E90u: goto label_166e90;
            case 0x166E94u: goto label_166e94;
            case 0x166E98u: goto label_166e98;
            case 0x166E9Cu: goto label_166e9c;
            case 0x166EA0u: goto label_166ea0;
            case 0x166EA4u: goto label_166ea4;
            case 0x166EA8u: goto label_166ea8;
            case 0x166EACu: goto label_166eac;
            case 0x166EB0u: goto label_166eb0;
            case 0x166EB4u: goto label_166eb4;
            case 0x166EB8u: goto label_166eb8;
            case 0x166EBCu: goto label_166ebc;
            case 0x166EC0u: goto label_166ec0;
            case 0x166EC4u: goto label_166ec4;
            case 0x166EC8u: goto label_166ec8;
            case 0x166ECCu: goto label_166ecc;
            case 0x166ED0u: goto label_166ed0;
            case 0x166ED4u: goto label_166ed4;
            case 0x166ED8u: goto label_166ed8;
            case 0x166EDCu: goto label_166edc;
            case 0x166EE0u: goto label_166ee0;
            case 0x166EE4u: goto label_166ee4;
            case 0x166EE8u: goto label_166ee8;
            case 0x166EECu: goto label_166eec;
            case 0x166EF0u: goto label_166ef0;
            case 0x166EF4u: goto label_166ef4;
            case 0x166EF8u: goto label_166ef8;
            case 0x166EFCu: goto label_166efc;
            case 0x166F00u: goto label_166f00;
            case 0x166F04u: goto label_166f04;
            case 0x166F08u: goto label_166f08;
            case 0x166F0Cu: goto label_166f0c;
            case 0x166F10u: goto label_166f10;
            case 0x166F14u: goto label_166f14;
            case 0x166F18u: goto label_166f18;
            case 0x166F1Cu: goto label_166f1c;
            case 0x166F20u: goto label_166f20;
            case 0x166F24u: goto label_166f24;
            case 0x166F28u: goto label_166f28;
            case 0x166F2Cu: goto label_166f2c;
            case 0x166F30u: goto label_166f30;
            case 0x166F34u: goto label_166f34;
            case 0x166F38u: goto label_166f38;
            case 0x166F3Cu: goto label_166f3c;
            case 0x166F40u: goto label_166f40;
            case 0x166F44u: goto label_166f44;
            case 0x166F48u: goto label_166f48;
            case 0x166F4Cu: goto label_166f4c;
            case 0x166F50u: goto label_166f50;
            case 0x166F54u: goto label_166f54;
            case 0x166F58u: goto label_166f58;
            case 0x166F5Cu: goto label_166f5c;
            case 0x166F60u: goto label_166f60;
            case 0x166F64u: goto label_166f64;
            case 0x166F68u: goto label_166f68;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166F4Cu; }
            if (ctx->pc != 0x166F4Cu) { return; }
        }
    }
    ctx->pc = 0x166F4Cu;
label_166f4c:
    // 0x166f4c: 0x24020003
    ctx->pc = 0x166f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_166f50:
    // 0x166f50: 0xae020004
    ctx->pc = 0x166f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_166f54:
    // 0x166f54: 0xdfbf0030
    ctx->pc = 0x166f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_166f58:
    // 0x166f58: 0xdfb20020
    ctx->pc = 0x166f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_166f5c:
    // 0x166f5c: 0xdfb10010
    ctx->pc = 0x166f5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166f60:
    // 0x166f60: 0xdfb00000
    ctx->pc = 0x166f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_166f64:
    // 0x166f64: 0x3e00008
label_166f68:
    if (ctx->pc == 0x166F68u) {
        ctx->pc = 0x166F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x166F6Cu;
        goto label_fallthrough_0x166f64;
    }
    ctx->pc = 0x166F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166F68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166DD8u: goto label_166dd8;
            case 0x166DDCu: goto label_166ddc;
            case 0x166DE0u: goto label_166de0;
            case 0x166DE4u: goto label_166de4;
            case 0x166DE8u: goto label_166de8;
            case 0x166DECu: goto label_166dec;
            case 0x166DF0u: goto label_166df0;
            case 0x166DF4u: goto label_166df4;
            case 0x166DF8u: goto label_166df8;
            case 0x166DFCu: goto label_166dfc;
            case 0x166E00u: goto label_166e00;
            case 0x166E04u: goto label_166e04;
            case 0x166E08u: goto label_166e08;
            case 0x166E0Cu: goto label_166e0c;
            case 0x166E10u: goto label_166e10;
            case 0x166E14u: goto label_166e14;
            case 0x166E18u: goto label_166e18;
            case 0x166E1Cu: goto label_166e1c;
            case 0x166E20u: goto label_166e20;
            case 0x166E24u: goto label_166e24;
            case 0x166E28u: goto label_166e28;
            case 0x166E2Cu: goto label_166e2c;
            case 0x166E30u: goto label_166e30;
            case 0x166E34u: goto label_166e34;
            case 0x166E38u: goto label_166e38;
            case 0x166E3Cu: goto label_166e3c;
            case 0x166E40u: goto label_166e40;
            case 0x166E44u: goto label_166e44;
            case 0x166E48u: goto label_166e48;
            case 0x166E4Cu: goto label_166e4c;
            case 0x166E50u: goto label_166e50;
            case 0x166E54u: goto label_166e54;
            case 0x166E58u: goto label_166e58;
            case 0x166E5Cu: goto label_166e5c;
            case 0x166E60u: goto label_166e60;
            case 0x166E64u: goto label_166e64;
            case 0x166E68u: goto label_166e68;
            case 0x166E6Cu: goto label_166e6c;
            case 0x166E70u: goto label_166e70;
            case 0x166E74u: goto label_166e74;
            case 0x166E78u: goto label_166e78;
            case 0x166E7Cu: goto label_166e7c;
            case 0x166E80u: goto label_166e80;
            case 0x166E84u: goto label_166e84;
            case 0x166E88u: goto label_166e88;
            case 0x166E8Cu: goto label_166e8c;
            case 0x166E90u: goto label_166e90;
            case 0x166E94u: goto label_166e94;
            case 0x166E98u: goto label_166e98;
            case 0x166E9Cu: goto label_166e9c;
            case 0x166EA0u: goto label_166ea0;
            case 0x166EA4u: goto label_166ea4;
            case 0x166EA8u: goto label_166ea8;
            case 0x166EACu: goto label_166eac;
            case 0x166EB0u: goto label_166eb0;
            case 0x166EB4u: goto label_166eb4;
            case 0x166EB8u: goto label_166eb8;
            case 0x166EBCu: goto label_166ebc;
            case 0x166EC0u: goto label_166ec0;
            case 0x166EC4u: goto label_166ec4;
            case 0x166EC8u: goto label_166ec8;
            case 0x166ECCu: goto label_166ecc;
            case 0x166ED0u: goto label_166ed0;
            case 0x166ED4u: goto label_166ed4;
            case 0x166ED8u: goto label_166ed8;
            case 0x166EDCu: goto label_166edc;
            case 0x166EE0u: goto label_166ee0;
            case 0x166EE4u: goto label_166ee4;
            case 0x166EE8u: goto label_166ee8;
            case 0x166EECu: goto label_166eec;
            case 0x166EF0u: goto label_166ef0;
            case 0x166EF4u: goto label_166ef4;
            case 0x166EF8u: goto label_166ef8;
            case 0x166EFCu: goto label_166efc;
            case 0x166F00u: goto label_166f00;
            case 0x166F04u: goto label_166f04;
            case 0x166F08u: goto label_166f08;
            case 0x166F0Cu: goto label_166f0c;
            case 0x166F10u: goto label_166f10;
            case 0x166F14u: goto label_166f14;
            case 0x166F18u: goto label_166f18;
            case 0x166F1Cu: goto label_166f1c;
            case 0x166F20u: goto label_166f20;
            case 0x166F24u: goto label_166f24;
            case 0x166F28u: goto label_166f28;
            case 0x166F2Cu: goto label_166f2c;
            case 0x166F30u: goto label_166f30;
            case 0x166F34u: goto label_166f34;
            case 0x166F38u: goto label_166f38;
            case 0x166F3Cu: goto label_166f3c;
            case 0x166F40u: goto label_166f40;
            case 0x166F44u: goto label_166f44;
            case 0x166F48u: goto label_166f48;
            case 0x166F4Cu: goto label_166f4c;
            case 0x166F50u: goto label_166f50;
            case 0x166F54u: goto label_166f54;
            case 0x166F58u: goto label_166f58;
            case 0x166F5Cu: goto label_166f5c;
            case 0x166F60u: goto label_166f60;
            case 0x166F64u: goto label_166f64;
            case 0x166F68u: goto label_166f68;
            default: break;
        }
        return;
    }
label_fallthrough_0x166f64:
    ctx->pc = 0x166F6Cu;
}
