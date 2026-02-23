#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Create
// Address: 0x179e68 - 0x179f70
void LSC_Create_0x179e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Create");


    ctx->pc = 0x179e68u;

label_179e68:
    // 0x179e68: 0x27bdffb0
    ctx->pc = 0x179e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_179e6c:
    // 0x179e6c: 0xffb10020
    ctx->pc = 0x179e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_179e70:
    // 0x179e70: 0xffbf0040
    ctx->pc = 0x179e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_179e74:
    // 0x179e74: 0x80882d
    ctx->pc = 0x179e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179e78:
    // 0x179e78: 0xffb20030
    ctx->pc = 0x179e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_179e7c:
    // 0x179e7c: 0x16200006
label_179e80:
    if (ctx->pc == 0x179E80u) {
        ctx->pc = 0x179E80u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->pc = 0x179E84u;
        goto label_179e84;
    }
    ctx->pc = 0x179E7Cu;
    {
        const bool branch_taken_0x179e7c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x179E80u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x179e7c) {
            ctx->pc = 0x179E98u;
            goto label_179e98;
        }
    }
    ctx->pc = 0x179E84u;
label_179e84:
    // 0x179e84: 0x3c04002c
    ctx->pc = 0x179e84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_179e88:
    // 0x179e88: 0xc05e9c6
label_179e8c:
    if (ctx->pc == 0x179E8Cu) {
        ctx->pc = 0x179E8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949360));
        ctx->pc = 0x179E90u;
        goto label_179e90;
    }
    ctx->pc = 0x179E88u;
    SET_GPR_U32(ctx, 31, 0x179E90u);
    ctx->pc = 0x179E8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949360));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179E90u; }
        else if (ctx->pc != 0x179E90u) { ctx->pc = 0x179E90u; }
    }
    if (ctx->pc != 0x179E90u) { return; }
    ctx->pc = 0x179E90u;
label_179e90:
    // 0x179e90: 0x10000031
label_179e94:
    if (ctx->pc == 0x179E94u) {
        ctx->pc = 0x179E94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179E98u;
        goto label_179e98;
    }
    ctx->pc = 0x179E90u;
    {
        const bool branch_taken_0x179e90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179E94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179e90) {
            ctx->pc = 0x179F58u;
            goto label_179f58;
        }
    }
    ctx->pc = 0x179E98u;
label_179e98:
    // 0x179e98: 0xc05e9b4
label_179e9c:
    if (ctx->pc == 0x179E9Cu) {
        ctx->pc = 0x179E9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179EA0u;
        goto label_179ea0;
    }
    ctx->pc = 0x179E98u;
    SET_GPR_U32(ctx, 31, 0x179EA0u);
    ctx->pc = 0x179E9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179EA0u; }
        else if (ctx->pc != 0x179EA0u) { ctx->pc = 0x179EA0u; }
    }
    if (ctx->pc != 0x179EA0u) { return; }
    ctx->pc = 0x179EA0u;
label_179ea0:
    // 0x179ea0: 0xc05e784
label_179ea4:
    if (ctx->pc == 0x179EA4u) {
        ctx->pc = 0x179EA8u;
        goto label_179ea8;
    }
    ctx->pc = 0x179EA0u;
    SET_GPR_U32(ctx, 31, 0x179EA8u);
    ctx->pc = 0x179E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        lsc_Alloc_0x179e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179EA8u; }
        else if (ctx->pc != 0x179EA8u) { ctx->pc = 0x179EA8u; }
    }
    if (ctx->pc != 0x179EA8u) { return; }
    ctx->pc = 0x179EA8u;
label_179ea8:
    // 0x179ea8: 0x40902d
    ctx->pc = 0x179ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179eac:
    // 0x179eac: 0x56400006
label_179eb0:
    if (ctx->pc == 0x179EB0u) {
        ctx->pc = 0x179EB0u;
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x179EB4u;
        goto label_179eb4;
    }
    ctx->pc = 0x179EACu;
    {
        const bool branch_taken_0x179eac = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x179eac) {
            ctx->pc = 0x179EB0u;
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x179EC8u;
            goto label_179ec8;
        }
    }
    ctx->pc = 0x179EB4u;
label_179eb4:
    // 0x179eb4: 0x3c04002c
    ctx->pc = 0x179eb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_179eb8:
    // 0x179eb8: 0xc05e9c6
label_179ebc:
    if (ctx->pc == 0x179EBCu) {
        ctx->pc = 0x179EBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949408));
        ctx->pc = 0x179EC0u;
        goto label_179ec0;
    }
    ctx->pc = 0x179EB8u;
    SET_GPR_U32(ctx, 31, 0x179EC0u);
    ctx->pc = 0x179EBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949408));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179EC0u; }
        else if (ctx->pc != 0x179EC0u) { ctx->pc = 0x179EC0u; }
    }
    if (ctx->pc != 0x179EC0u) { return; }
    ctx->pc = 0x179EC0u;
label_179ec0:
    // 0x179ec0: 0x10000022
label_179ec4:
    if (ctx->pc == 0x179EC4u) {
        ctx->pc = 0x179EC8u;
        goto label_179ec8;
    }
    ctx->pc = 0x179EC0u;
    {
        const bool branch_taken_0x179ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x179ec0) {
            ctx->pc = 0x179F4Cu;
            goto label_179f4c;
        }
    }
    ctx->pc = 0x179EC8u;
label_179ec8:
    // 0x179ec8: 0x220202d
    ctx->pc = 0x179ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179ecc:
    // 0x179ecc: 0xae510008
    ctx->pc = 0x179eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_179ed0:
    // 0x179ed0: 0x8e230000
    ctx->pc = 0x179ed0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_179ed4:
    // 0x179ed4: 0x8c620024
    ctx->pc = 0x179ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_179ed8:
    // 0x179ed8: 0x40f809
label_179edc:
    if (ctx->pc == 0x179EDCu) {
        ctx->pc = 0x179EDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179EE0u;
        goto label_179ee0;
    }
    ctx->pc = 0x179ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179EE0u);
        ctx->pc = 0x179EDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179E68u: goto label_179e68;
            case 0x179E6Cu: goto label_179e6c;
            case 0x179E70u: goto label_179e70;
            case 0x179E74u: goto label_179e74;
            case 0x179E78u: goto label_179e78;
            case 0x179E7Cu: goto label_179e7c;
            case 0x179E80u: goto label_179e80;
            case 0x179E84u: goto label_179e84;
            case 0x179E88u: goto label_179e88;
            case 0x179E8Cu: goto label_179e8c;
            case 0x179E90u: goto label_179e90;
            case 0x179E94u: goto label_179e94;
            case 0x179E98u: goto label_179e98;
            case 0x179E9Cu: goto label_179e9c;
            case 0x179EA0u: goto label_179ea0;
            case 0x179EA4u: goto label_179ea4;
            case 0x179EA8u: goto label_179ea8;
            case 0x179EACu: goto label_179eac;
            case 0x179EB0u: goto label_179eb0;
            case 0x179EB4u: goto label_179eb4;
            case 0x179EB8u: goto label_179eb8;
            case 0x179EBCu: goto label_179ebc;
            case 0x179EC0u: goto label_179ec0;
            case 0x179EC4u: goto label_179ec4;
            case 0x179EC8u: goto label_179ec8;
            case 0x179ECCu: goto label_179ecc;
            case 0x179ED0u: goto label_179ed0;
            case 0x179ED4u: goto label_179ed4;
            case 0x179ED8u: goto label_179ed8;
            case 0x179EDCu: goto label_179edc;
            case 0x179EE0u: goto label_179ee0;
            case 0x179EE4u: goto label_179ee4;
            case 0x179EE8u: goto label_179ee8;
            case 0x179EECu: goto label_179eec;
            case 0x179EF0u: goto label_179ef0;
            case 0x179EF4u: goto label_179ef4;
            case 0x179EF8u: goto label_179ef8;
            case 0x179EFCu: goto label_179efc;
            case 0x179F00u: goto label_179f00;
            case 0x179F04u: goto label_179f04;
            case 0x179F08u: goto label_179f08;
            case 0x179F0Cu: goto label_179f0c;
            case 0x179F10u: goto label_179f10;
            case 0x179F14u: goto label_179f14;
            case 0x179F18u: goto label_179f18;
            case 0x179F1Cu: goto label_179f1c;
            case 0x179F20u: goto label_179f20;
            case 0x179F24u: goto label_179f24;
            case 0x179F28u: goto label_179f28;
            case 0x179F2Cu: goto label_179f2c;
            case 0x179F30u: goto label_179f30;
            case 0x179F34u: goto label_179f34;
            case 0x179F38u: goto label_179f38;
            case 0x179F3Cu: goto label_179f3c;
            case 0x179F40u: goto label_179f40;
            case 0x179F44u: goto label_179f44;
            case 0x179F48u: goto label_179f48;
            case 0x179F4Cu: goto label_179f4c;
            case 0x179F50u: goto label_179f50;
            case 0x179F54u: goto label_179f54;
            case 0x179F58u: goto label_179f58;
            case 0x179F5Cu: goto label_179f5c;
            case 0x179F60u: goto label_179f60;
            case 0x179F64u: goto label_179f64;
            case 0x179F68u: goto label_179f68;
            case 0x179F6Cu: goto label_179f6c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179EE0u; }
            if (ctx->pc != 0x179EE0u) { return; }
        }
    }
    ctx->pc = 0x179EE0u;
label_179ee0:
    // 0x179ee0: 0x8e230000
    ctx->pc = 0x179ee0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_179ee4:
    // 0x179ee4: 0x40802d
    ctx->pc = 0x179ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179ee8:
    // 0x179ee8: 0x220202d
    ctx->pc = 0x179ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179eec:
    // 0x179eec: 0x8c620024
    ctx->pc = 0x179eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_179ef0:
    // 0x179ef0: 0x40f809
label_179ef4:
    if (ctx->pc == 0x179EF4u) {
        ctx->pc = 0x179EF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x179EF8u;
        goto label_179ef8;
    }
    ctx->pc = 0x179EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179EF8u);
        ctx->pc = 0x179EF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179E68u: goto label_179e68;
            case 0x179E6Cu: goto label_179e6c;
            case 0x179E70u: goto label_179e70;
            case 0x179E74u: goto label_179e74;
            case 0x179E78u: goto label_179e78;
            case 0x179E7Cu: goto label_179e7c;
            case 0x179E80u: goto label_179e80;
            case 0x179E84u: goto label_179e84;
            case 0x179E88u: goto label_179e88;
            case 0x179E8Cu: goto label_179e8c;
            case 0x179E90u: goto label_179e90;
            case 0x179E94u: goto label_179e94;
            case 0x179E98u: goto label_179e98;
            case 0x179E9Cu: goto label_179e9c;
            case 0x179EA0u: goto label_179ea0;
            case 0x179EA4u: goto label_179ea4;
            case 0x179EA8u: goto label_179ea8;
            case 0x179EACu: goto label_179eac;
            case 0x179EB0u: goto label_179eb0;
            case 0x179EB4u: goto label_179eb4;
            case 0x179EB8u: goto label_179eb8;
            case 0x179EBCu: goto label_179ebc;
            case 0x179EC0u: goto label_179ec0;
            case 0x179EC4u: goto label_179ec4;
            case 0x179EC8u: goto label_179ec8;
            case 0x179ECCu: goto label_179ecc;
            case 0x179ED0u: goto label_179ed0;
            case 0x179ED4u: goto label_179ed4;
            case 0x179ED8u: goto label_179ed8;
            case 0x179EDCu: goto label_179edc;
            case 0x179EE0u: goto label_179ee0;
            case 0x179EE4u: goto label_179ee4;
            case 0x179EE8u: goto label_179ee8;
            case 0x179EECu: goto label_179eec;
            case 0x179EF0u: goto label_179ef0;
            case 0x179EF4u: goto label_179ef4;
            case 0x179EF8u: goto label_179ef8;
            case 0x179EFCu: goto label_179efc;
            case 0x179F00u: goto label_179f00;
            case 0x179F04u: goto label_179f04;
            case 0x179F08u: goto label_179f08;
            case 0x179F0Cu: goto label_179f0c;
            case 0x179F10u: goto label_179f10;
            case 0x179F14u: goto label_179f14;
            case 0x179F18u: goto label_179f18;
            case 0x179F1Cu: goto label_179f1c;
            case 0x179F20u: goto label_179f20;
            case 0x179F24u: goto label_179f24;
            case 0x179F28u: goto label_179f28;
            case 0x179F2Cu: goto label_179f2c;
            case 0x179F30u: goto label_179f30;
            case 0x179F34u: goto label_179f34;
            case 0x179F38u: goto label_179f38;
            case 0x179F3Cu: goto label_179f3c;
            case 0x179F40u: goto label_179f40;
            case 0x179F44u: goto label_179f44;
            case 0x179F48u: goto label_179f48;
            case 0x179F4Cu: goto label_179f4c;
            case 0x179F50u: goto label_179f50;
            case 0x179F54u: goto label_179f54;
            case 0x179F58u: goto label_179f58;
            case 0x179F5Cu: goto label_179f5c;
            case 0x179F60u: goto label_179f60;
            case 0x179F64u: goto label_179f64;
            case 0x179F68u: goto label_179f68;
            case 0x179F6Cu: goto label_179f6c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179EF8u; }
            if (ctx->pc != 0x179EF8u) { return; }
        }
    }
    ctx->pc = 0x179EF8u;
label_179ef8:
    // 0x179ef8: 0x2028021
    ctx->pc = 0x179ef8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_179efc:
    // 0x179efc: 0x2404000f
    ctx->pc = 0x179efcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
label_179f00:
    // 0x179f00: 0x2402000a
    ctx->pc = 0x179f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_179f04:
    // 0x179f04: 0x1018c0
    ctx->pc = 0x179f04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
label_179f08:
    // 0x179f08: 0x62001a
    ctx->pc = 0x179f08u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_179f0c:
    // 0x179f0c: 0xae500018
    ctx->pc = 0x179f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_179f10:
    // 0x179f10: 0x50400001
label_179f14:
    if (ctx->pc == 0x179F14u) {
        ctx->pc = 0x179F14u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x179F18u;
        goto label_179f18;
    }
    ctx->pc = 0x179F10u;
    {
        const bool branch_taken_0x179f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x179f10) {
            ctx->pc = 0x179F14u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x179F18u;
            goto label_179f18;
        }
    }
    ctx->pc = 0x179F18u;
label_179f18:
    // 0x179f18: 0x26420430
    ctx->pc = 0x179f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1072));
label_179f1c:
    // 0x179f1c: 0x1812
    ctx->pc = 0x179f1cu;
    SET_GPR_U32(ctx, 3, ctx->lo);
label_179f20:
    // 0x179f20: 0xae430014
    ctx->pc = 0x179f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_179f24:
    // 0x179f24: 0x0
    ctx->pc = 0x179f24u;
    // NOP
label_179f28:
    // 0x179f28: 0xac400000
    ctx->pc = 0x179f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_179f2c:
    // 0x179f2c: 0x2484ffff
    ctx->pc = 0x179f2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_179f30:
    // 0x179f30: 0x2442ffc0
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967232));
label_179f34:
    // 0x179f34: 0x0
    ctx->pc = 0x179f34u;
    // NOP
label_179f38:
    // 0x179f38: 0x0
    ctx->pc = 0x179f38u;
    // NOP
label_179f3c:
    // 0x179f3c: 0x481fffa
label_179f40:
    if (ctx->pc == 0x179F40u) {
        ctx->pc = 0x179F44u;
        goto label_179f44;
    }
    ctx->pc = 0x179F3Cu;
    {
        const bool branch_taken_0x179f3c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x179f3c) {
            ctx->pc = 0x179F28u;
            goto label_179f28;
        }
    }
    ctx->pc = 0x179F44u;
label_179f44:
    // 0x179f44: 0x24020001
    ctx->pc = 0x179f44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_179f48:
    // 0x179f48: 0xa2420000
    ctx->pc = 0x179f48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_179f4c:
    // 0x179f4c: 0xc05e9bc
label_179f50:
    if (ctx->pc == 0x179F50u) {
        ctx->pc = 0x179F50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179F54u;
        goto label_179f54;
    }
    ctx->pc = 0x179F4Cu;
    SET_GPR_U32(ctx, 31, 0x179F54u);
    ctx->pc = 0x179F50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F54u; }
        else if (ctx->pc != 0x179F54u) { ctx->pc = 0x179F54u; }
    }
    if (ctx->pc != 0x179F54u) { return; }
    ctx->pc = 0x179F54u;
label_179f54:
    // 0x179f54: 0x240102d
    ctx->pc = 0x179f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179f58:
    // 0x179f58: 0xdfbf0040
    ctx->pc = 0x179f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_179f5c:
    // 0x179f5c: 0xdfb20030
    ctx->pc = 0x179f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179f60:
    // 0x179f60: 0xdfb10020
    ctx->pc = 0x179f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179f64:
    // 0x179f64: 0xdfb00010
    ctx->pc = 0x179f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179f68:
    // 0x179f68: 0x3e00008
label_179f6c:
    if (ctx->pc == 0x179F6Cu) {
        ctx->pc = 0x179F6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x179F70u;
        goto label_fallthrough_0x179f68;
    }
    ctx->pc = 0x179F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179F6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179E68u: goto label_179e68;
            case 0x179E6Cu: goto label_179e6c;
            case 0x179E70u: goto label_179e70;
            case 0x179E74u: goto label_179e74;
            case 0x179E78u: goto label_179e78;
            case 0x179E7Cu: goto label_179e7c;
            case 0x179E80u: goto label_179e80;
            case 0x179E84u: goto label_179e84;
            case 0x179E88u: goto label_179e88;
            case 0x179E8Cu: goto label_179e8c;
            case 0x179E90u: goto label_179e90;
            case 0x179E94u: goto label_179e94;
            case 0x179E98u: goto label_179e98;
            case 0x179E9Cu: goto label_179e9c;
            case 0x179EA0u: goto label_179ea0;
            case 0x179EA4u: goto label_179ea4;
            case 0x179EA8u: goto label_179ea8;
            case 0x179EACu: goto label_179eac;
            case 0x179EB0u: goto label_179eb0;
            case 0x179EB4u: goto label_179eb4;
            case 0x179EB8u: goto label_179eb8;
            case 0x179EBCu: goto label_179ebc;
            case 0x179EC0u: goto label_179ec0;
            case 0x179EC4u: goto label_179ec4;
            case 0x179EC8u: goto label_179ec8;
            case 0x179ECCu: goto label_179ecc;
            case 0x179ED0u: goto label_179ed0;
            case 0x179ED4u: goto label_179ed4;
            case 0x179ED8u: goto label_179ed8;
            case 0x179EDCu: goto label_179edc;
            case 0x179EE0u: goto label_179ee0;
            case 0x179EE4u: goto label_179ee4;
            case 0x179EE8u: goto label_179ee8;
            case 0x179EECu: goto label_179eec;
            case 0x179EF0u: goto label_179ef0;
            case 0x179EF4u: goto label_179ef4;
            case 0x179EF8u: goto label_179ef8;
            case 0x179EFCu: goto label_179efc;
            case 0x179F00u: goto label_179f00;
            case 0x179F04u: goto label_179f04;
            case 0x179F08u: goto label_179f08;
            case 0x179F0Cu: goto label_179f0c;
            case 0x179F10u: goto label_179f10;
            case 0x179F14u: goto label_179f14;
            case 0x179F18u: goto label_179f18;
            case 0x179F1Cu: goto label_179f1c;
            case 0x179F20u: goto label_179f20;
            case 0x179F24u: goto label_179f24;
            case 0x179F28u: goto label_179f28;
            case 0x179F2Cu: goto label_179f2c;
            case 0x179F30u: goto label_179f30;
            case 0x179F34u: goto label_179f34;
            case 0x179F38u: goto label_179f38;
            case 0x179F3Cu: goto label_179f3c;
            case 0x179F40u: goto label_179f40;
            case 0x179F44u: goto label_179f44;
            case 0x179F48u: goto label_179f48;
            case 0x179F4Cu: goto label_179f4c;
            case 0x179F50u: goto label_179f50;
            case 0x179F54u: goto label_179f54;
            case 0x179F58u: goto label_179f58;
            case 0x179F5Cu: goto label_179f5c;
            case 0x179F60u: goto label_179f60;
            case 0x179F64u: goto label_179f64;
            case 0x179F68u: goto label_179f68;
            case 0x179F6Cu: goto label_179f6c;
            default: break;
        }
        return;
    }
label_fallthrough_0x179f68:
    ctx->pc = 0x179F70u;
}
