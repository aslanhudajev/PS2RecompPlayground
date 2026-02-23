#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneWav16
// Address: 0x168e50 - 0x168fc4
void ADXB_ExecOneWav16_0x168e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneWav16");


    ctx->pc = 0x168e50u;

label_168e50:
    // 0x168e50: 0x27bdffc0
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_168e54:
    // 0x168e54: 0x24020001
    ctx->pc = 0x168e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_168e58:
    // 0x168e58: 0xffb10010
    ctx->pc = 0x168e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_168e5c:
    // 0x168e5c: 0xffb00000
    ctx->pc = 0x168e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_168e60:
    // 0x168e60: 0xffbf0030
    ctx->pc = 0x168e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_168e64:
    // 0x168e64: 0x80802d
    ctx->pc = 0x168e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168e68:
    // 0x168e68: 0xffb20020
    ctx->pc = 0x168e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_168e6c:
    // 0x168e6c: 0x26110050
    ctx->pc = 0x168e6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_168e70:
    // 0x168e70: 0x8e030004
    ctx->pc = 0x168e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_168e74:
    // 0x168e74: 0x14620043
label_168e78:
    if (ctx->pc == 0x168E78u) {
        ctx->pc = 0x168E78u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x168E7Cu;
        goto label_168e7c;
    }
    ctx->pc = 0x168E74u;
    {
        const bool branch_taken_0x168e74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168E78u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x168e74) {
            ctx->pc = 0x168F84u;
            goto label_168f84;
        }
    }
    ctx->pc = 0x168E7Cu;
label_168e7c:
    // 0x168e7c: 0xc05cfec
label_168e80:
    if (ctx->pc == 0x168E80u) {
        ctx->pc = 0x168E80u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x168E84u;
        goto label_168e84;
    }
    ctx->pc = 0x168E7Cu;
    SET_GPR_U32(ctx, 31, 0x168E84u);
    ctx->pc = 0x168E80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E84u; }
        else if (ctx->pc != 0x168E84u) { ctx->pc = 0x168E84u; }
    }
    if (ctx->pc != 0x168E84u) { return; }
    ctx->pc = 0x168E84u;
label_168e84:
    // 0x168e84: 0x5440003f
label_168e88:
    if (ctx->pc == 0x168E88u) {
        ctx->pc = 0x168E88u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x168E8Cu;
        goto label_168e8c;
    }
    ctx->pc = 0x168E84u;
    {
        const bool branch_taken_0x168e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168e84) {
            ctx->pc = 0x168E88u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x168F84u;
            goto label_168f84;
        }
    }
    ctx->pc = 0x168E8Cu;
label_168e8c:
    // 0x168e8c: 0x8e020088
    ctx->pc = 0x168e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_168e90:
    // 0x168e90: 0x26050070
    ctx->pc = 0x168e90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_168e94:
    // 0x168e94: 0x8e04008c
    ctx->pc = 0x168e94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_168e98:
    // 0x168e98: 0x26060074
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_168e9c:
    // 0x168e9c: 0x40f809
label_168ea0:
    if (ctx->pc == 0x168EA0u) {
        ctx->pc = 0x168EA0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x168EA4u;
        goto label_168ea4;
    }
    ctx->pc = 0x168E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x168EA4u);
        ctx->pc = 0x168EA0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168E50u: goto label_168e50;
            case 0x168E54u: goto label_168e54;
            case 0x168E58u: goto label_168e58;
            case 0x168E5Cu: goto label_168e5c;
            case 0x168E60u: goto label_168e60;
            case 0x168E64u: goto label_168e64;
            case 0x168E68u: goto label_168e68;
            case 0x168E6Cu: goto label_168e6c;
            case 0x168E70u: goto label_168e70;
            case 0x168E74u: goto label_168e74;
            case 0x168E78u: goto label_168e78;
            case 0x168E7Cu: goto label_168e7c;
            case 0x168E80u: goto label_168e80;
            case 0x168E84u: goto label_168e84;
            case 0x168E88u: goto label_168e88;
            case 0x168E8Cu: goto label_168e8c;
            case 0x168E90u: goto label_168e90;
            case 0x168E94u: goto label_168e94;
            case 0x168E98u: goto label_168e98;
            case 0x168E9Cu: goto label_168e9c;
            case 0x168EA0u: goto label_168ea0;
            case 0x168EA4u: goto label_168ea4;
            case 0x168EA8u: goto label_168ea8;
            case 0x168EACu: goto label_168eac;
            case 0x168EB0u: goto label_168eb0;
            case 0x168EB4u: goto label_168eb4;
            case 0x168EB8u: goto label_168eb8;
            case 0x168EBCu: goto label_168ebc;
            case 0x168EC0u: goto label_168ec0;
            case 0x168EC4u: goto label_168ec4;
            case 0x168EC8u: goto label_168ec8;
            case 0x168ECCu: goto label_168ecc;
            case 0x168ED0u: goto label_168ed0;
            case 0x168ED4u: goto label_168ed4;
            case 0x168ED8u: goto label_168ed8;
            case 0x168EDCu: goto label_168edc;
            case 0x168EE0u: goto label_168ee0;
            case 0x168EE4u: goto label_168ee4;
            case 0x168EE8u: goto label_168ee8;
            case 0x168EECu: goto label_168eec;
            case 0x168EF0u: goto label_168ef0;
            case 0x168EF4u: goto label_168ef4;
            case 0x168EF8u: goto label_168ef8;
            case 0x168EFCu: goto label_168efc;
            case 0x168F00u: goto label_168f00;
            case 0x168F04u: goto label_168f04;
            case 0x168F08u: goto label_168f08;
            case 0x168F0Cu: goto label_168f0c;
            case 0x168F10u: goto label_168f10;
            case 0x168F14u: goto label_168f14;
            case 0x168F18u: goto label_168f18;
            case 0x168F1Cu: goto label_168f1c;
            case 0x168F20u: goto label_168f20;
            case 0x168F24u: goto label_168f24;
            case 0x168F28u: goto label_168f28;
            case 0x168F2Cu: goto label_168f2c;
            case 0x168F30u: goto label_168f30;
            case 0x168F34u: goto label_168f34;
            case 0x168F38u: goto label_168f38;
            case 0x168F3Cu: goto label_168f3c;
            case 0x168F40u: goto label_168f40;
            case 0x168F44u: goto label_168f44;
            case 0x168F48u: goto label_168f48;
            case 0x168F4Cu: goto label_168f4c;
            case 0x168F50u: goto label_168f50;
            case 0x168F54u: goto label_168f54;
            case 0x168F58u: goto label_168f58;
            case 0x168F5Cu: goto label_168f5c;
            case 0x168F60u: goto label_168f60;
            case 0x168F64u: goto label_168f64;
            case 0x168F68u: goto label_168f68;
            case 0x168F6Cu: goto label_168f6c;
            case 0x168F70u: goto label_168f70;
            case 0x168F74u: goto label_168f74;
            case 0x168F78u: goto label_168f78;
            case 0x168F7Cu: goto label_168f7c;
            case 0x168F80u: goto label_168f80;
            case 0x168F84u: goto label_168f84;
            case 0x168F88u: goto label_168f88;
            case 0x168F8Cu: goto label_168f8c;
            case 0x168F90u: goto label_168f90;
            case 0x168F94u: goto label_168f94;
            case 0x168F98u: goto label_168f98;
            case 0x168F9Cu: goto label_168f9c;
            case 0x168FA0u: goto label_168fa0;
            case 0x168FA4u: goto label_168fa4;
            case 0x168FA8u: goto label_168fa8;
            case 0x168FACu: goto label_168fac;
            case 0x168FB0u: goto label_168fb0;
            case 0x168FB4u: goto label_168fb4;
            case 0x168FB8u: goto label_168fb8;
            case 0x168FBCu: goto label_168fbc;
            case 0x168FC0u: goto label_168fc0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168EA4u; }
            if (ctx->pc != 0x168EA4u) { return; }
        }
    }
    ctx->pc = 0x168EA4u;
label_168ea4:
    // 0x168ea4: 0x8e280020
    ctx->pc = 0x168ea4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_168ea8:
    // 0x168ea8: 0x24060002
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_168eac:
    // 0x168eac: 0x8e230018
    ctx->pc = 0x168eacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_168eb0:
    // 0x168eb0: 0x8e290014
    ctx->pc = 0x168eb0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_168eb4:
    // 0x168eb4: 0x81040
    ctx->pc = 0x168eb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 8), 1));
label_168eb8:
    // 0x168eb8: 0x8e240024
    ctx->pc = 0x168eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_168ebc:
    // 0x168ebc: 0x683823
    ctx->pc = 0x168ebcu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_168ec0:
    // 0x168ec0: 0x1225021
    ctx->pc = 0x168ec0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_168ec4:
    // 0x168ec4: 0x8e250004
    ctx->pc = 0x168ec4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_168ec8:
    // 0x168ec8: 0x87102a
    ctx->pc = 0x168ec8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
label_168ecc:
    // 0x168ecc: 0x8203000e
    ctx->pc = 0x168eccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_168ed0:
    // 0x168ed0: 0x82380b
    ctx->pc = 0x168ed0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 4));
label_168ed4:
    // 0x168ed4: 0xa7102a
    ctx->pc = 0x168ed4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
label_168ed8:
    // 0x168ed8: 0x9204000e
    ctx->pc = 0x168ed8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_168edc:
    // 0x168edc: 0x14660015
label_168ee0:
    if (ctx->pc == 0x168EE0u) {
        ctx->pc = 0x168EE0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        ctx->pc = 0x168EE4u;
        goto label_168ee4;
    }
    ctx->pc = 0x168EDCu;
    {
        const bool branch_taken_0x168edc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x168EE0u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
        if (branch_taken_0x168edc) {
            ctx->pc = 0x168F34u;
            goto label_168f34;
        }
    }
    ctx->pc = 0x168EE4u;
label_168ee4:
    // 0x168ee4: 0x8e22001c
    ctx->pc = 0x168ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_168ee8:
    // 0x168ee8: 0x481021
    ctx->pc = 0x168ee8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_168eec:
    // 0x168eec: 0x21040
    ctx->pc = 0x168eecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_168ef0:
    // 0x168ef0: 0x18e0001d
label_168ef4:
    if (ctx->pc == 0x168EF4u) {
        ctx->pc = 0x168EF4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x168EF8u;
        goto label_168ef8;
    }
    ctx->pc = 0x168EF0u;
    {
        const bool branch_taken_0x168ef0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x168EF4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x168ef0) {
            ctx->pc = 0x168F68u;
            goto label_168f68;
        }
    }
    ctx->pc = 0x168EF8u;
label_168ef8:
    // 0x168ef8: 0x40302d
    ctx->pc = 0x168ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168efc:
    // 0x168efc: 0x140282d
    ctx->pc = 0x168efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_168f00:
    // 0x168f00: 0x240202d
    ctx->pc = 0x168f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168f04:
    // 0x168f04: 0xe0182d
    ctx->pc = 0x168f04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_168f08:
    // 0x168f08: 0x94820000
    ctx->pc = 0x168f08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_168f0c:
    // 0x168f0c: 0x2463ffff
    ctx->pc = 0x168f0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_168f10:
    // 0x168f10: 0xa4a20000
    ctx->pc = 0x168f10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_168f14:
    // 0x168f14: 0x24a50002
    ctx->pc = 0x168f14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_168f18:
    // 0x168f18: 0x94820002
    ctx->pc = 0x168f18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_168f1c:
    // 0x168f1c: 0x24840004
    ctx->pc = 0x168f1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
label_168f20:
    // 0x168f20: 0xa4c20000
    ctx->pc = 0x168f20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_168f24:
    // 0x168f24: 0x1460fff8
label_168f28:
    if (ctx->pc == 0x168F28u) {
        ctx->pc = 0x168F28u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x168F2Cu;
        goto label_168f2c;
    }
    ctx->pc = 0x168F24u;
    {
        const bool branch_taken_0x168f24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x168F28u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x168f24) {
            ctx->pc = 0x168F08u;
            goto label_168f08;
        }
    }
    ctx->pc = 0x168F2Cu;
label_168f2c:
    // 0x168f2c: 0x1000000e
label_168f30:
    if (ctx->pc == 0x168F30u) {
        ctx->pc = 0x168F30u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x168F34u;
        goto label_168f34;
    }
    ctx->pc = 0x168F2Cu;
    {
        const bool branch_taken_0x168f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168F30u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x168f2c) {
            ctx->pc = 0x168F68u;
            goto label_168f68;
        }
    }
    ctx->pc = 0x168F34u;
label_168f34:
    // 0x168f34: 0x18e0000c
label_168f38:
    if (ctx->pc == 0x168F38u) {
        ctx->pc = 0x168F38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168F3Cu;
        goto label_168f3c;
    }
    ctx->pc = 0x168F34u;
    {
        const bool branch_taken_0x168f34 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x168F38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168f34) {
            ctx->pc = 0x168F68u;
            goto label_168f68;
        }
    }
    ctx->pc = 0x168F3Cu;
label_168f3c:
    // 0x168f3c: 0x240202d
    ctx->pc = 0x168f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168f40:
    // 0x168f40: 0xe0182d
    ctx->pc = 0x168f40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_168f44:
    // 0x168f44: 0x0
    ctx->pc = 0x168f44u;
    // NOP
label_168f48:
    // 0x168f48: 0x94820000
    ctx->pc = 0x168f48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_168f4c:
    // 0x168f4c: 0x2463ffff
    ctx->pc = 0x168f4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_168f50:
    // 0x168f50: 0x24840002
    ctx->pc = 0x168f50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_168f54:
    // 0x168f54: 0xa4a20000
    ctx->pc = 0x168f54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_168f58:
    // 0x168f58: 0x24a50002
    ctx->pc = 0x168f58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_168f5c:
    // 0x168f5c: 0x1460fffa
label_168f60:
    if (ctx->pc == 0x168F60u) {
        ctx->pc = 0x168F64u;
        goto label_168f64;
    }
    ctx->pc = 0x168F5Cu;
    {
        const bool branch_taken_0x168f5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x168f5c) {
            ctx->pc = 0x168F48u;
            goto label_168f48;
        }
    }
    ctx->pc = 0x168F64u;
label_168f64:
    // 0x168f64: 0x9204000e
    ctx->pc = 0x168f64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_168f68:
    // 0x168f68: 0x41600
    ctx->pc = 0x168f68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_168f6c:
    // 0x168f6c: 0x24030002
    ctx->pc = 0x168f6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_168f70:
    // 0x168f70: 0x215c3
    ctx->pc = 0x168f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
label_168f74:
    // 0x168f74: 0xae030004
    ctx->pc = 0x168f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_168f78:
    // 0x168f78: 0xe21018
    ctx->pc = 0x168f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_168f7c:
    // 0x168f7c: 0xae0700a0
    ctx->pc = 0x168f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
label_168f80:
    // 0x168f80: 0xae0200a4
    ctx->pc = 0x168f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_168f84:
    // 0x168f84: 0x24020002
    ctx->pc = 0x168f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_168f88:
    // 0x168f88: 0x14620009
label_168f8c:
    if (ctx->pc == 0x168F8Cu) {
        ctx->pc = 0x168F8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x168F90u;
        goto label_168f90;
    }
    ctx->pc = 0x168F88u;
    {
        const bool branch_taken_0x168f88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168F8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x168f88) {
            ctx->pc = 0x168FB0u;
            goto label_168fb0;
        }
    }
    ctx->pc = 0x168F90u;
label_168f90:
    // 0x168f90: 0x8e030090
    ctx->pc = 0x168f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_168f94:
    // 0x168f94: 0x8e040094
    ctx->pc = 0x168f94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_168f98:
    // 0x168f98: 0x8e0500a4
    ctx->pc = 0x168f98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_168f9c:
    // 0x168f9c: 0x60f809
label_168fa0:
    if (ctx->pc == 0x168FA0u) {
        ctx->pc = 0x168FA0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x168FA4u;
        goto label_168fa4;
    }
    ctx->pc = 0x168F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x168FA4u);
        ctx->pc = 0x168FA0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168E50u: goto label_168e50;
            case 0x168E54u: goto label_168e54;
            case 0x168E58u: goto label_168e58;
            case 0x168E5Cu: goto label_168e5c;
            case 0x168E60u: goto label_168e60;
            case 0x168E64u: goto label_168e64;
            case 0x168E68u: goto label_168e68;
            case 0x168E6Cu: goto label_168e6c;
            case 0x168E70u: goto label_168e70;
            case 0x168E74u: goto label_168e74;
            case 0x168E78u: goto label_168e78;
            case 0x168E7Cu: goto label_168e7c;
            case 0x168E80u: goto label_168e80;
            case 0x168E84u: goto label_168e84;
            case 0x168E88u: goto label_168e88;
            case 0x168E8Cu: goto label_168e8c;
            case 0x168E90u: goto label_168e90;
            case 0x168E94u: goto label_168e94;
            case 0x168E98u: goto label_168e98;
            case 0x168E9Cu: goto label_168e9c;
            case 0x168EA0u: goto label_168ea0;
            case 0x168EA4u: goto label_168ea4;
            case 0x168EA8u: goto label_168ea8;
            case 0x168EACu: goto label_168eac;
            case 0x168EB0u: goto label_168eb0;
            case 0x168EB4u: goto label_168eb4;
            case 0x168EB8u: goto label_168eb8;
            case 0x168EBCu: goto label_168ebc;
            case 0x168EC0u: goto label_168ec0;
            case 0x168EC4u: goto label_168ec4;
            case 0x168EC8u: goto label_168ec8;
            case 0x168ECCu: goto label_168ecc;
            case 0x168ED0u: goto label_168ed0;
            case 0x168ED4u: goto label_168ed4;
            case 0x168ED8u: goto label_168ed8;
            case 0x168EDCu: goto label_168edc;
            case 0x168EE0u: goto label_168ee0;
            case 0x168EE4u: goto label_168ee4;
            case 0x168EE8u: goto label_168ee8;
            case 0x168EECu: goto label_168eec;
            case 0x168EF0u: goto label_168ef0;
            case 0x168EF4u: goto label_168ef4;
            case 0x168EF8u: goto label_168ef8;
            case 0x168EFCu: goto label_168efc;
            case 0x168F00u: goto label_168f00;
            case 0x168F04u: goto label_168f04;
            case 0x168F08u: goto label_168f08;
            case 0x168F0Cu: goto label_168f0c;
            case 0x168F10u: goto label_168f10;
            case 0x168F14u: goto label_168f14;
            case 0x168F18u: goto label_168f18;
            case 0x168F1Cu: goto label_168f1c;
            case 0x168F20u: goto label_168f20;
            case 0x168F24u: goto label_168f24;
            case 0x168F28u: goto label_168f28;
            case 0x168F2Cu: goto label_168f2c;
            case 0x168F30u: goto label_168f30;
            case 0x168F34u: goto label_168f34;
            case 0x168F38u: goto label_168f38;
            case 0x168F3Cu: goto label_168f3c;
            case 0x168F40u: goto label_168f40;
            case 0x168F44u: goto label_168f44;
            case 0x168F48u: goto label_168f48;
            case 0x168F4Cu: goto label_168f4c;
            case 0x168F50u: goto label_168f50;
            case 0x168F54u: goto label_168f54;
            case 0x168F58u: goto label_168f58;
            case 0x168F5Cu: goto label_168f5c;
            case 0x168F60u: goto label_168f60;
            case 0x168F64u: goto label_168f64;
            case 0x168F68u: goto label_168f68;
            case 0x168F6Cu: goto label_168f6c;
            case 0x168F70u: goto label_168f70;
            case 0x168F74u: goto label_168f74;
            case 0x168F78u: goto label_168f78;
            case 0x168F7Cu: goto label_168f7c;
            case 0x168F80u: goto label_168f80;
            case 0x168F84u: goto label_168f84;
            case 0x168F88u: goto label_168f88;
            case 0x168F8Cu: goto label_168f8c;
            case 0x168F90u: goto label_168f90;
            case 0x168F94u: goto label_168f94;
            case 0x168F98u: goto label_168f98;
            case 0x168F9Cu: goto label_168f9c;
            case 0x168FA0u: goto label_168fa0;
            case 0x168FA4u: goto label_168fa4;
            case 0x168FA8u: goto label_168fa8;
            case 0x168FACu: goto label_168fac;
            case 0x168FB0u: goto label_168fb0;
            case 0x168FB4u: goto label_168fb4;
            case 0x168FB8u: goto label_168fb8;
            case 0x168FBCu: goto label_168fbc;
            case 0x168FC0u: goto label_168fc0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168FA4u; }
            if (ctx->pc != 0x168FA4u) { return; }
        }
    }
    ctx->pc = 0x168FA4u;
label_168fa4:
    // 0x168fa4: 0x24020003
    ctx->pc = 0x168fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_168fa8:
    // 0x168fa8: 0xae020004
    ctx->pc = 0x168fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_168fac:
    // 0x168fac: 0xdfbf0030
    ctx->pc = 0x168facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_168fb0:
    // 0x168fb0: 0xdfb20020
    ctx->pc = 0x168fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_168fb4:
    // 0x168fb4: 0xdfb10010
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_168fb8:
    // 0x168fb8: 0xdfb00000
    ctx->pc = 0x168fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168fbc:
    // 0x168fbc: 0x3e00008
label_168fc0:
    if (ctx->pc == 0x168FC0u) {
        ctx->pc = 0x168FC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x168FC4u;
        goto label_fallthrough_0x168fbc;
    }
    ctx->pc = 0x168FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168FC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168E50u: goto label_168e50;
            case 0x168E54u: goto label_168e54;
            case 0x168E58u: goto label_168e58;
            case 0x168E5Cu: goto label_168e5c;
            case 0x168E60u: goto label_168e60;
            case 0x168E64u: goto label_168e64;
            case 0x168E68u: goto label_168e68;
            case 0x168E6Cu: goto label_168e6c;
            case 0x168E70u: goto label_168e70;
            case 0x168E74u: goto label_168e74;
            case 0x168E78u: goto label_168e78;
            case 0x168E7Cu: goto label_168e7c;
            case 0x168E80u: goto label_168e80;
            case 0x168E84u: goto label_168e84;
            case 0x168E88u: goto label_168e88;
            case 0x168E8Cu: goto label_168e8c;
            case 0x168E90u: goto label_168e90;
            case 0x168E94u: goto label_168e94;
            case 0x168E98u: goto label_168e98;
            case 0x168E9Cu: goto label_168e9c;
            case 0x168EA0u: goto label_168ea0;
            case 0x168EA4u: goto label_168ea4;
            case 0x168EA8u: goto label_168ea8;
            case 0x168EACu: goto label_168eac;
            case 0x168EB0u: goto label_168eb0;
            case 0x168EB4u: goto label_168eb4;
            case 0x168EB8u: goto label_168eb8;
            case 0x168EBCu: goto label_168ebc;
            case 0x168EC0u: goto label_168ec0;
            case 0x168EC4u: goto label_168ec4;
            case 0x168EC8u: goto label_168ec8;
            case 0x168ECCu: goto label_168ecc;
            case 0x168ED0u: goto label_168ed0;
            case 0x168ED4u: goto label_168ed4;
            case 0x168ED8u: goto label_168ed8;
            case 0x168EDCu: goto label_168edc;
            case 0x168EE0u: goto label_168ee0;
            case 0x168EE4u: goto label_168ee4;
            case 0x168EE8u: goto label_168ee8;
            case 0x168EECu: goto label_168eec;
            case 0x168EF0u: goto label_168ef0;
            case 0x168EF4u: goto label_168ef4;
            case 0x168EF8u: goto label_168ef8;
            case 0x168EFCu: goto label_168efc;
            case 0x168F00u: goto label_168f00;
            case 0x168F04u: goto label_168f04;
            case 0x168F08u: goto label_168f08;
            case 0x168F0Cu: goto label_168f0c;
            case 0x168F10u: goto label_168f10;
            case 0x168F14u: goto label_168f14;
            case 0x168F18u: goto label_168f18;
            case 0x168F1Cu: goto label_168f1c;
            case 0x168F20u: goto label_168f20;
            case 0x168F24u: goto label_168f24;
            case 0x168F28u: goto label_168f28;
            case 0x168F2Cu: goto label_168f2c;
            case 0x168F30u: goto label_168f30;
            case 0x168F34u: goto label_168f34;
            case 0x168F38u: goto label_168f38;
            case 0x168F3Cu: goto label_168f3c;
            case 0x168F40u: goto label_168f40;
            case 0x168F44u: goto label_168f44;
            case 0x168F48u: goto label_168f48;
            case 0x168F4Cu: goto label_168f4c;
            case 0x168F50u: goto label_168f50;
            case 0x168F54u: goto label_168f54;
            case 0x168F58u: goto label_168f58;
            case 0x168F5Cu: goto label_168f5c;
            case 0x168F60u: goto label_168f60;
            case 0x168F64u: goto label_168f64;
            case 0x168F68u: goto label_168f68;
            case 0x168F6Cu: goto label_168f6c;
            case 0x168F70u: goto label_168f70;
            case 0x168F74u: goto label_168f74;
            case 0x168F78u: goto label_168f78;
            case 0x168F7Cu: goto label_168f7c;
            case 0x168F80u: goto label_168f80;
            case 0x168F84u: goto label_168f84;
            case 0x168F88u: goto label_168f88;
            case 0x168F8Cu: goto label_168f8c;
            case 0x168F90u: goto label_168f90;
            case 0x168F94u: goto label_168f94;
            case 0x168F98u: goto label_168f98;
            case 0x168F9Cu: goto label_168f9c;
            case 0x168FA0u: goto label_168fa0;
            case 0x168FA4u: goto label_168fa4;
            case 0x168FA8u: goto label_168fa8;
            case 0x168FACu: goto label_168fac;
            case 0x168FB0u: goto label_168fb0;
            case 0x168FB4u: goto label_168fb4;
            case 0x168FB8u: goto label_168fb8;
            case 0x168FBCu: goto label_168fbc;
            case 0x168FC0u: goto label_168fc0;
            default: break;
        }
        return;
    }
label_fallthrough_0x168fbc:
    ctx->pc = 0x168FC4u;
}
