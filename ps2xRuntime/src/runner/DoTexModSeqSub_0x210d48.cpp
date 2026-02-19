#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexModSeqSub
// Address: 0x210d48 - 0x210e48
void DoTexModSeqSub_0x210d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210d48u;

label_210d48:
    // 0x210d48: 0x27bdfff0
    ctx->pc = 0x210d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_210d4c:
    // 0x210d4c: 0xa0402d
    ctx->pc = 0x210d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_210d50:
    // 0x210d50: 0x1100003a
label_210d54:
    if (ctx->pc == 0x210D54u) {
        ctx->pc = 0x210D54u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x210D58u;
        goto label_210d58;
    }
    ctx->pc = 0x210D50u;
    {
        const bool branch_taken_0x210d50 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D54u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x210d50) {
            ctx->pc = 0x210E3Cu;
            goto label_210e3c;
        }
    }
    ctx->pc = 0x210D58u;
label_210d58:
    // 0x210d58: 0x8d020048
    ctx->pc = 0x210d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 72)));
label_210d5c:
    // 0x210d5c: 0x24430006
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 6));
label_210d60:
    // 0x210d60: 0x2c620005
    ctx->pc = 0x210d60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_210d64:
    // 0x210d64: 0x1040001f
label_210d68:
    if (ctx->pc == 0x210D68u) {
        ctx->pc = 0x210D68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x210D6Cu;
        goto label_210d6c;
    }
    ctx->pc = 0x210D64u;
    {
        const bool branch_taken_0x210d64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x210d64) {
            ctx->pc = 0x210DE4u;
            goto label_210de4;
        }
    }
    ctx->pc = 0x210D6Cu;
label_210d6c:
    // 0x210d6c: 0x24425850
    ctx->pc = 0x210d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22608));
label_210d70:
    // 0x210d70: 0x31880
    ctx->pc = 0x210d70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_210d74:
    // 0x210d74: 0x621821
    ctx->pc = 0x210d74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_210d78:
    // 0x210d78: 0x8c620000
    ctx->pc = 0x210d78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210d7c:
    // 0x210d7c: 0x400008
label_210d80:
    if (ctx->pc == 0x210D80u) {
        ctx->pc = 0x210D84u;
        goto label_210d84;
    }
    ctx->pc = 0x210D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210D48u: goto label_210d48;
            case 0x210D4Cu: goto label_210d4c;
            case 0x210D50u: goto label_210d50;
            case 0x210D54u: goto label_210d54;
            case 0x210D58u: goto label_210d58;
            case 0x210D5Cu: goto label_210d5c;
            case 0x210D60u: goto label_210d60;
            case 0x210D64u: goto label_210d64;
            case 0x210D68u: goto label_210d68;
            case 0x210D6Cu: goto label_210d6c;
            case 0x210D70u: goto label_210d70;
            case 0x210D74u: goto label_210d74;
            case 0x210D78u: goto label_210d78;
            case 0x210D7Cu: goto label_210d7c;
            case 0x210D80u: goto label_210d80;
            case 0x210D84u: goto label_210d84;
            case 0x210D88u: goto label_210d88;
            case 0x210D8Cu: goto label_210d8c;
            case 0x210D90u: goto label_210d90;
            case 0x210D94u: goto label_210d94;
            case 0x210D98u: goto label_210d98;
            case 0x210D9Cu: goto label_210d9c;
            case 0x210DA0u: goto label_210da0;
            case 0x210DA4u: goto label_210da4;
            case 0x210DA8u: goto label_210da8;
            case 0x210DACu: goto label_210dac;
            case 0x210DB0u: goto label_210db0;
            case 0x210DB4u: goto label_210db4;
            case 0x210DB8u: goto label_210db8;
            case 0x210DBCu: goto label_210dbc;
            case 0x210DC0u: goto label_210dc0;
            case 0x210DC4u: goto label_210dc4;
            case 0x210DC8u: goto label_210dc8;
            case 0x210DCCu: goto label_210dcc;
            case 0x210DD0u: goto label_210dd0;
            case 0x210DD4u: goto label_210dd4;
            case 0x210DD8u: goto label_210dd8;
            case 0x210DDCu: goto label_210ddc;
            case 0x210DE0u: goto label_210de0;
            case 0x210DE4u: goto label_210de4;
            case 0x210DE8u: goto label_210de8;
            case 0x210DECu: goto label_210dec;
            case 0x210DF0u: goto label_210df0;
            case 0x210DF4u: goto label_210df4;
            case 0x210DF8u: goto label_210df8;
            case 0x210DFCu: goto label_210dfc;
            case 0x210E00u: goto label_210e00;
            case 0x210E04u: goto label_210e04;
            case 0x210E08u: goto label_210e08;
            case 0x210E0Cu: goto label_210e0c;
            case 0x210E10u: goto label_210e10;
            case 0x210E14u: goto label_210e14;
            case 0x210E18u: goto label_210e18;
            case 0x210E1Cu: goto label_210e1c;
            case 0x210E20u: goto label_210e20;
            case 0x210E24u: goto label_210e24;
            case 0x210E28u: goto label_210e28;
            case 0x210E2Cu: goto label_210e2c;
            case 0x210E30u: goto label_210e30;
            case 0x210E34u: goto label_210e34;
            case 0x210E38u: goto label_210e38;
            case 0x210E3Cu: goto label_210e3c;
            case 0x210E40u: goto label_210e40;
            case 0x210E44u: goto label_210e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210D84u;
label_210d84:
    // 0x210d84: 0x100282d
    ctx->pc = 0x210d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_210d88:
    // 0x210d88: 0x85070002
    ctx->pc = 0x210d88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_210d8c:
    // 0x210d8c: 0xc0842d8
label_210d90:
    if (ctx->pc == 0x210D90u) {
        ctx->pc = 0x210D90u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210D94u;
        goto label_210d94;
    }
    ctx->pc = 0x210D8Cu;
    SET_GPR_U32(ctx, 31, 0x210D94u);
    ctx->pc = 0x210D90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexScrollSub_0x210b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D94u; }
    }
    if (ctx->pc != 0x210D94u) { return; }
    ctx->pc = 0x210D94u;
label_210d94:
    // 0x210d94: 0x1000002a
label_210d98:
    if (ctx->pc == 0x210D98u) {
        ctx->pc = 0x210D98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x210D9Cu;
        goto label_210d9c;
    }
    ctx->pc = 0x210D94u;
    {
        const bool branch_taken_0x210d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210d94) {
            ctx->pc = 0x210E40u;
            goto label_210e40;
        }
    }
    ctx->pc = 0x210D9Cu;
label_210d9c:
    // 0x210d9c: 0x100282d
    ctx->pc = 0x210d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_210da0:
    // 0x210da0: 0x85070002
    ctx->pc = 0x210da0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_210da4:
    // 0x210da4: 0xc0842d8
label_210da8:
    if (ctx->pc == 0x210DA8u) {
        ctx->pc = 0x210DA8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x210DACu;
        goto label_210dac;
    }
    ctx->pc = 0x210DA4u;
    SET_GPR_U32(ctx, 31, 0x210DACu);
    ctx->pc = 0x210DA8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x210B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexScrollSub_0x210b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210DACu; }
    }
    if (ctx->pc != 0x210DACu) { return; }
    ctx->pc = 0x210DACu;
label_210dac:
    // 0x210dac: 0x10000024
label_210db0:
    if (ctx->pc == 0x210DB0u) {
        ctx->pc = 0x210DB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x210DB4u;
        goto label_210db4;
    }
    ctx->pc = 0x210DACu;
    {
        const bool branch_taken_0x210dac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210DB0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210dac) {
            ctx->pc = 0x210E40u;
            goto label_210e40;
        }
    }
    ctx->pc = 0x210DB4u;
label_210db4:
    // 0x210db4: 0x100282d
    ctx->pc = 0x210db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_210db8:
    // 0x210db8: 0x85070002
    ctx->pc = 0x210db8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_210dbc:
    // 0x210dbc: 0xc084302
label_210dc0:
    if (ctx->pc == 0x210DC0u) {
        ctx->pc = 0x210DC0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210DC4u;
        goto label_210dc4;
    }
    ctx->pc = 0x210DBCu;
    SET_GPR_U32(ctx, 31, 0x210DC4u);
    ctx->pc = 0x210DC0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x210C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexFadeSub_0x210c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210DC4u; }
    }
    if (ctx->pc != 0x210DC4u) { return; }
    ctx->pc = 0x210DC4u;
label_210dc4:
    // 0x210dc4: 0x1000001e
label_210dc8:
    if (ctx->pc == 0x210DC8u) {
        ctx->pc = 0x210DC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x210DCCu;
        goto label_210dcc;
    }
    ctx->pc = 0x210DC4u;
    {
        const bool branch_taken_0x210dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210DC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210dc4) {
            ctx->pc = 0x210E40u;
            goto label_210e40;
        }
    }
    ctx->pc = 0x210DCCu;
label_210dcc:
    // 0x210dcc: 0x100282d
    ctx->pc = 0x210dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_210dd0:
    // 0x210dd0: 0x85070002
    ctx->pc = 0x210dd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_210dd4:
    // 0x210dd4: 0xc084302
label_210dd8:
    if (ctx->pc == 0x210DD8u) {
        ctx->pc = 0x210DD8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x210DDCu;
        goto label_210ddc;
    }
    ctx->pc = 0x210DD4u;
    SET_GPR_U32(ctx, 31, 0x210DDCu);
    ctx->pc = 0x210DD8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x210C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexFadeSub_0x210c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210DDCu; }
    }
    if (ctx->pc != 0x210DDCu) { return; }
    ctx->pc = 0x210DDCu;
label_210ddc:
    // 0x210ddc: 0x10000018
label_210de0:
    if (ctx->pc == 0x210DE0u) {
        ctx->pc = 0x210DE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x210DE4u;
        goto label_210de4;
    }
    ctx->pc = 0x210DDCu;
    {
        const bool branch_taken_0x210ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210DE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x210ddc) {
            ctx->pc = 0x210E40u;
            goto label_210e40;
        }
    }
    ctx->pc = 0x210DE4u;
label_210de4:
    // 0x210de4: 0x8502004e
    ctx->pc = 0x210de4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 78)));
label_210de8:
    // 0x210de8: 0xc23823
    ctx->pc = 0x210de8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_210dec:
    // 0x210dec: 0x4e30003
label_210df0:
    if (ctx->pc == 0x210DF0u) {
        ctx->pc = 0x210DF0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 80)));
        ctx->pc = 0x210DF4u;
        goto label_210df4;
    }
    ctx->pc = 0x210DECu;
    {
        const bool branch_taken_0x210dec = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x210dec) {
            ctx->pc = 0x210DF0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 80)));
            ctx->pc = 0x210DFCu;
            goto label_210dfc;
        }
    }
    ctx->pc = 0x210DF4u;
label_210df4:
    // 0x210df4: 0x1000000c
label_210df8:
    if (ctx->pc == 0x210DF8u) {
        ctx->pc = 0x210DF8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x210DFCu;
        goto label_210dfc;
    }
    ctx->pc = 0x210DF4u;
    {
        const bool branch_taken_0x210df4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210DF8u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210df4) {
            ctx->pc = 0x210E28u;
            goto label_210e28;
        }
    }
    ctx->pc = 0x210DFCu;
label_210dfc:
    // 0x210dfc: 0x58600007
label_210e00:
    if (ctx->pc == 0x210E00u) {
        ctx->pc = 0x210E00u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 76)));
        ctx->pc = 0x210E04u;
        goto label_210e04;
    }
    ctx->pc = 0x210DFCu;
    {
        const bool branch_taken_0x210dfc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x210dfc) {
            ctx->pc = 0x210E00u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 76)));
            ctx->pc = 0x210E1Cu;
            goto label_210e1c;
        }
    }
    ctx->pc = 0x210E04u;
label_210e04:
    // 0x210e04: 0xe3001a
    ctx->pc = 0x210e04u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_210e08:
    // 0x210e08: 0x1012
    ctx->pc = 0x210e08u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_210e0c:
    // 0x210e0c: 0x50600001
label_210e10:
    if (ctx->pc == 0x210E10u) {
        ctx->pc = 0x210E10u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x210E14u;
        goto label_210e14;
    }
    ctx->pc = 0x210E0Cu;
    {
        const bool branch_taken_0x210e0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x210e0c) {
            ctx->pc = 0x210E10u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x210E14u;
            goto label_210e14;
        }
    }
    ctx->pc = 0x210E14u;
label_210e14:
    // 0x210e14: 0x40382d
    ctx->pc = 0x210e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210e18:
    // 0x210e18: 0x8503004c
    ctx->pc = 0x210e18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 76)));
label_210e1c:
    // 0x210e1c: 0xe3102a
    ctx->pc = 0x210e1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
label_210e20:
    // 0x210e20: 0x50400001
label_210e24:
    if (ctx->pc == 0x210E24u) {
        ctx->pc = 0x210E24u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x210E28u;
        goto label_210e28;
    }
    ctx->pc = 0x210E20u;
    {
        const bool branch_taken_0x210e20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x210e20) {
            ctx->pc = 0x210E24u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->pc = 0x210E28u;
            goto label_210e28;
        }
    }
    ctx->pc = 0x210E28u;
label_210e28:
    // 0x210e28: 0x8d060048
    ctx->pc = 0x210e28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 72)));
label_210e2c:
    // 0x210e2c: 0x95050044
    ctx->pc = 0x210e2cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 68)));
label_210e30:
    // 0x210e30: 0xe63021
    ctx->pc = 0x210e30u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_210e34:
    // 0x210e34: 0xc0b4126
label_210e38:
    if (ctx->pc == 0x210E38u) {
        ctx->pc = 0x210E38u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x210E3Cu;
        goto label_210e3c;
    }
    ctx->pc = 0x210E34u;
    SET_GPR_U32(ctx, 31, 0x210E3Cu);
    ctx->pc = 0x210E38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0498u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAltTex_0x2d0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210E3Cu; }
    }
    if (ctx->pc != 0x210E3Cu) { return; }
    ctx->pc = 0x210E3Cu;
label_210e3c:
    // 0x210e3c: 0xdfbf0000
    ctx->pc = 0x210e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210e40:
    // 0x210e40: 0x3e00008
label_210e44:
    if (ctx->pc == 0x210E44u) {
        ctx->pc = 0x210E44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x210E48u;
        goto label_fallthrough_0x210e40;
    }
    ctx->pc = 0x210E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210D48u: goto label_210d48;
            case 0x210D4Cu: goto label_210d4c;
            case 0x210D50u: goto label_210d50;
            case 0x210D54u: goto label_210d54;
            case 0x210D58u: goto label_210d58;
            case 0x210D5Cu: goto label_210d5c;
            case 0x210D60u: goto label_210d60;
            case 0x210D64u: goto label_210d64;
            case 0x210D68u: goto label_210d68;
            case 0x210D6Cu: goto label_210d6c;
            case 0x210D70u: goto label_210d70;
            case 0x210D74u: goto label_210d74;
            case 0x210D78u: goto label_210d78;
            case 0x210D7Cu: goto label_210d7c;
            case 0x210D80u: goto label_210d80;
            case 0x210D84u: goto label_210d84;
            case 0x210D88u: goto label_210d88;
            case 0x210D8Cu: goto label_210d8c;
            case 0x210D90u: goto label_210d90;
            case 0x210D94u: goto label_210d94;
            case 0x210D98u: goto label_210d98;
            case 0x210D9Cu: goto label_210d9c;
            case 0x210DA0u: goto label_210da0;
            case 0x210DA4u: goto label_210da4;
            case 0x210DA8u: goto label_210da8;
            case 0x210DACu: goto label_210dac;
            case 0x210DB0u: goto label_210db0;
            case 0x210DB4u: goto label_210db4;
            case 0x210DB8u: goto label_210db8;
            case 0x210DBCu: goto label_210dbc;
            case 0x210DC0u: goto label_210dc0;
            case 0x210DC4u: goto label_210dc4;
            case 0x210DC8u: goto label_210dc8;
            case 0x210DCCu: goto label_210dcc;
            case 0x210DD0u: goto label_210dd0;
            case 0x210DD4u: goto label_210dd4;
            case 0x210DD8u: goto label_210dd8;
            case 0x210DDCu: goto label_210ddc;
            case 0x210DE0u: goto label_210de0;
            case 0x210DE4u: goto label_210de4;
            case 0x210DE8u: goto label_210de8;
            case 0x210DECu: goto label_210dec;
            case 0x210DF0u: goto label_210df0;
            case 0x210DF4u: goto label_210df4;
            case 0x210DF8u: goto label_210df8;
            case 0x210DFCu: goto label_210dfc;
            case 0x210E00u: goto label_210e00;
            case 0x210E04u: goto label_210e04;
            case 0x210E08u: goto label_210e08;
            case 0x210E0Cu: goto label_210e0c;
            case 0x210E10u: goto label_210e10;
            case 0x210E14u: goto label_210e14;
            case 0x210E18u: goto label_210e18;
            case 0x210E1Cu: goto label_210e1c;
            case 0x210E20u: goto label_210e20;
            case 0x210E24u: goto label_210e24;
            case 0x210E28u: goto label_210e28;
            case 0x210E2Cu: goto label_210e2c;
            case 0x210E30u: goto label_210e30;
            case 0x210E34u: goto label_210e34;
            case 0x210E38u: goto label_210e38;
            case 0x210E3Cu: goto label_210e3c;
            case 0x210E40u: goto label_210e40;
            case 0x210E44u: goto label_210e44;
            default: break;
        }
        return;
    }
label_fallthrough_0x210e40:
    ctx->pc = 0x210E48u;
}
