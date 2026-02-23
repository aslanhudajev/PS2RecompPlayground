#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _getpic
// Address: 0x163d88 - 0x163f0c
void _getpic_0x163d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_getpic");


    ctx->pc = 0x163d88u;

label_163d88:
    // 0x163d88: 0x27bdff80
    ctx->pc = 0x163d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_163d8c:
    // 0x163d8c: 0xffb50050
    ctx->pc = 0x163d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_163d90:
    // 0x163d90: 0xffb40040
    ctx->pc = 0x163d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_163d94:
    // 0x163d94: 0x24150001
    ctx->pc = 0x163d94u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_163d98:
    // 0x163d98: 0xffb30030
    ctx->pc = 0x163d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_163d9c:
    // 0x163d9c: 0xa02d
    ctx->pc = 0x163d9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163da0:
    // 0x163da0: 0xffbf0070
    ctx->pc = 0x163da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_163da4:
    // 0x163da4: 0x80982d
    ctx->pc = 0x163da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163da8:
    // 0x163da8: 0xffb60060
    ctx->pc = 0x163da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_163dac:
    // 0x163dac: 0xffb20020
    ctx->pc = 0x163dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_163db0:
    // 0x163db0: 0xffb10010
    ctx->pc = 0x163db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_163db4:
    // 0x163db4: 0xffb00000
    ctx->pc = 0x163db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_163db8:
    // 0x163db8: 0x8e700040
    ctx->pc = 0x163db8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_163dbc:
    // 0x163dbc: 0x8e0500d8
    ctx->pc = 0x163dbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_163dc0:
    // 0x163dc0: 0x30a2003f
    ctx->pc = 0x163dc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 63));
label_163dc4:
    // 0x163dc4: 0x10400006
label_163dc8:
    if (ctx->pc == 0x163DC8u) {
        ctx->pc = 0x163DC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x163DCCu;
        goto label_163dcc;
    }
    ctx->pc = 0x163DC4u;
    {
        const bool branch_taken_0x163dc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163DC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x163dc4) {
            ctx->pc = 0x163DE0u;
            goto label_163de0;
        }
    }
    ctx->pc = 0x163DCCu;
label_163dcc:
    // 0x163dcc: 0x3c04002c
    ctx->pc = 0x163dccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_163dd0:
    // 0x163dd0: 0xc059106
label_163dd4:
    if (ctx->pc == 0x163DD4u) {
        ctx->pc = 0x163DD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938040));
        ctx->pc = 0x163DD8u;
        goto label_163dd8;
    }
    ctx->pc = 0x163DD0u;
    SET_GPR_U32(ctx, 31, 0x163DD8u);
    ctx->pc = 0x163DD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938040));
    ctx->pc = 0x164418u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x164418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163DD8u; }
        else if (ctx->pc != 0x163DD8u) { ctx->pc = 0x163DD8u; }
    }
    if (ctx->pc != 0x163DD8u) { return; }
    ctx->pc = 0x163DD8u;
label_163dd8:
    // 0x163dd8: 0x10000042
label_163ddc:
    if (ctx->pc == 0x163DDCu) {
        ctx->pc = 0x163DDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x163DE0u;
        goto label_163de0;
    }
    ctx->pc = 0x163DD8u;
    {
        const bool branch_taken_0x163dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163DDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x163dd8) {
            ctx->pc = 0x163EE4u;
            goto label_163ee4;
        }
    }
    ctx->pc = 0x163DE0u;
label_163de0:
    // 0x163de0: 0x3c160023
    ctx->pc = 0x163de0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)35 << 16));
label_163de4:
    // 0x163de4: 0xaec0aac0
    ctx->pc = 0x163de4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294945472), GPR_U32(ctx, 0));
label_163de8:
    // 0x163de8: 0x2402ffff
    ctx->pc = 0x163de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_163dec:
    // 0x163dec: 0x0
    ctx->pc = 0x163decu;
    // NOP
label_163df0:
    // 0x163df0: 0x1282000e
label_163df4:
    if (ctx->pc == 0x163DF4u) {
        ctx->pc = 0x163DF4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 5));
        ctx->pc = 0x163DF8u;
        goto label_163df8;
    }
    ctx->pc = 0x163DF0u;
    {
        const bool branch_taken_0x163df0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x163DF4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 5));
        if (branch_taken_0x163df0) {
            ctx->pc = 0x163E2Cu;
            goto label_163e2c;
        }
    }
    ctx->pc = 0x163DF8u;
label_163df8:
    // 0x163df8: 0x3c120023
    ctx->pc = 0x163df8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
label_163dfc:
    // 0x163dfc: 0x3c110023
    ctx->pc = 0x163dfcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
label_163e00:
    // 0x163e00: 0xc058664
label_163e04:
    if (ctx->pc == 0x163E04u) {
        ctx->pc = 0x163E08u;
        goto label_163e08;
    }
    ctx->pc = 0x163E00u;
    SET_GPR_U32(ctx, 31, 0x163E08u);
    ctx->pc = 0x161990u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x161990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E08u; }
        else if (ctx->pc != 0x163E08u) { ctx->pc = 0x163E08u; }
    }
    if (ctx->pc != 0x163E08u) { return; }
    ctx->pc = 0x163E08u;
label_163e08:
    // 0x163e08: 0x40a82d
    ctx->pc = 0x163e08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e0c:
    // 0x163e0c: 0x12a00006
label_163e10:
    if (ctx->pc == 0x163E10u) {
        ctx->pc = 0x163E10u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        ctx->pc = 0x163E14u;
        goto label_163e14;
    }
    ctx->pc = 0x163E0Cu;
    {
        const bool branch_taken_0x163e0c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x163E10u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x163e0c) {
            ctx->pc = 0x163E28u;
            goto label_163e28;
        }
    }
    ctx->pc = 0x163E14u;
label_163e14:
    // 0x163e14: 0x8e0200d4
    ctx->pc = 0x163e14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_163e18:
    // 0x163e18: 0x10620003
label_163e1c:
    if (ctx->pc == 0x163E1Cu) {
        ctx->pc = 0x163E1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294945520)));
        ctx->pc = 0x163E20u;
        goto label_163e20;
    }
    ctx->pc = 0x163E18u;
    {
        const bool branch_taken_0x163e18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x163E1Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294945520)));
        if (branch_taken_0x163e18) {
            ctx->pc = 0x163E28u;
            goto label_163e28;
        }
    }
    ctx->pc = 0x163E20u;
label_163e20:
    // 0x163e20: 0x1440fff7
label_163e24:
    if (ctx->pc == 0x163E24u) {
        ctx->pc = 0x163E28u;
        goto label_163e28;
    }
    ctx->pc = 0x163E20u;
    {
        const bool branch_taken_0x163e20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x163e20) {
            ctx->pc = 0x163E00u;
            goto label_163e00;
        }
    }
    ctx->pc = 0x163E28u;
label_163e28:
    // 0x163e28: 0x2ea20005
    ctx->pc = 0x163e28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 5));
label_163e2c:
    // 0x163e2c: 0x10400029
label_163e30:
    if (ctx->pc == 0x163E30u) {
        ctx->pc = 0x163E30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x163E34u;
        goto label_163e34;
    }
    ctx->pc = 0x163E2Cu;
    {
        const bool branch_taken_0x163e2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163E30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x163e2c) {
            ctx->pc = 0x163ED4u;
            goto label_163ed4;
        }
    }
    ctx->pc = 0x163E34u;
label_163e34:
    // 0x163e34: 0x151880
    ctx->pc = 0x163e34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_163e38:
    // 0x163e38: 0x24428e00
    ctx->pc = 0x163e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938112));
label_163e3c:
    // 0x163e3c: 0x621821
    ctx->pc = 0x163e3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_163e40:
    // 0x163e40: 0x8c640000
    ctx->pc = 0x163e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163e44:
    // 0x163e44: 0x800008
label_163e48:
    if (ctx->pc == 0x163E48u) {
        ctx->pc = 0x163E4Cu;
        goto label_163e4c;
    }
    ctx->pc = 0x163E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D88u: goto label_163d88;
            case 0x163D8Cu: goto label_163d8c;
            case 0x163D90u: goto label_163d90;
            case 0x163D94u: goto label_163d94;
            case 0x163D98u: goto label_163d98;
            case 0x163D9Cu: goto label_163d9c;
            case 0x163DA0u: goto label_163da0;
            case 0x163DA4u: goto label_163da4;
            case 0x163DA8u: goto label_163da8;
            case 0x163DACu: goto label_163dac;
            case 0x163DB0u: goto label_163db0;
            case 0x163DB4u: goto label_163db4;
            case 0x163DB8u: goto label_163db8;
            case 0x163DBCu: goto label_163dbc;
            case 0x163DC0u: goto label_163dc0;
            case 0x163DC4u: goto label_163dc4;
            case 0x163DC8u: goto label_163dc8;
            case 0x163DCCu: goto label_163dcc;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DD4u: goto label_163dd4;
            case 0x163DD8u: goto label_163dd8;
            case 0x163DDCu: goto label_163ddc;
            case 0x163DE0u: goto label_163de0;
            case 0x163DE4u: goto label_163de4;
            case 0x163DE8u: goto label_163de8;
            case 0x163DECu: goto label_163dec;
            case 0x163DF0u: goto label_163df0;
            case 0x163DF4u: goto label_163df4;
            case 0x163DF8u: goto label_163df8;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E00u: goto label_163e00;
            case 0x163E04u: goto label_163e04;
            case 0x163E08u: goto label_163e08;
            case 0x163E0Cu: goto label_163e0c;
            case 0x163E10u: goto label_163e10;
            case 0x163E14u: goto label_163e14;
            case 0x163E18u: goto label_163e18;
            case 0x163E1Cu: goto label_163e1c;
            case 0x163E20u: goto label_163e20;
            case 0x163E24u: goto label_163e24;
            case 0x163E28u: goto label_163e28;
            case 0x163E2Cu: goto label_163e2c;
            case 0x163E30u: goto label_163e30;
            case 0x163E34u: goto label_163e34;
            case 0x163E38u: goto label_163e38;
            case 0x163E3Cu: goto label_163e3c;
            case 0x163E40u: goto label_163e40;
            case 0x163E44u: goto label_163e44;
            case 0x163E48u: goto label_163e48;
            case 0x163E4Cu: goto label_163e4c;
            case 0x163E50u: goto label_163e50;
            case 0x163E54u: goto label_163e54;
            case 0x163E58u: goto label_163e58;
            case 0x163E5Cu: goto label_163e5c;
            case 0x163E60u: goto label_163e60;
            case 0x163E64u: goto label_163e64;
            case 0x163E68u: goto label_163e68;
            case 0x163E6Cu: goto label_163e6c;
            case 0x163E70u: goto label_163e70;
            case 0x163E74u: goto label_163e74;
            case 0x163E78u: goto label_163e78;
            case 0x163E7Cu: goto label_163e7c;
            case 0x163E80u: goto label_163e80;
            case 0x163E84u: goto label_163e84;
            case 0x163E88u: goto label_163e88;
            case 0x163E8Cu: goto label_163e8c;
            case 0x163E90u: goto label_163e90;
            case 0x163E94u: goto label_163e94;
            case 0x163E98u: goto label_163e98;
            case 0x163E9Cu: goto label_163e9c;
            case 0x163EA0u: goto label_163ea0;
            case 0x163EA4u: goto label_163ea4;
            case 0x163EA8u: goto label_163ea8;
            case 0x163EACu: goto label_163eac;
            case 0x163EB0u: goto label_163eb0;
            case 0x163EB4u: goto label_163eb4;
            case 0x163EB8u: goto label_163eb8;
            case 0x163EBCu: goto label_163ebc;
            case 0x163EC0u: goto label_163ec0;
            case 0x163EC4u: goto label_163ec4;
            case 0x163EC8u: goto label_163ec8;
            case 0x163ECCu: goto label_163ecc;
            case 0x163ED0u: goto label_163ed0;
            case 0x163ED4u: goto label_163ed4;
            case 0x163ED8u: goto label_163ed8;
            case 0x163EDCu: goto label_163edc;
            case 0x163EE0u: goto label_163ee0;
            case 0x163EE4u: goto label_163ee4;
            case 0x163EE8u: goto label_163ee8;
            case 0x163EECu: goto label_163eec;
            case 0x163EF0u: goto label_163ef0;
            case 0x163EF4u: goto label_163ef4;
            case 0x163EF8u: goto label_163ef8;
            case 0x163EFCu: goto label_163efc;
            case 0x163F00u: goto label_163f00;
            case 0x163F04u: goto label_163f04;
            case 0x163F08u: goto label_163f08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x163E4Cu;
label_163e4c:
    // 0x163e4c: 0xc05907a
label_163e50:
    if (ctx->pc == 0x163E50u) {
        ctx->pc = 0x163E50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163E54u;
        goto label_163e54;
    }
    ctx->pc = 0x163E4Cu;
    SET_GPR_U32(ctx, 31, 0x163E54u);
    ctx->pc = 0x163E50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1641E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x1641e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E54u; }
        else if (ctx->pc != 0x163E54u) { ctx->pc = 0x163E54u; }
    }
    if (ctx->pc != 0x163E54u) { return; }
    ctx->pc = 0x163E54u;
label_163e54:
    // 0x163e54: 0x24030001
    ctx->pc = 0x163e54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_163e58:
    // 0x163e58: 0x1000001e
label_163e5c:
    if (ctx->pc == 0x163E5Cu) {
        ctx->pc = 0x163E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x163E60u;
        goto label_163e60;
    }
    ctx->pc = 0x163E58u;
    {
        const bool branch_taken_0x163e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x163e58) {
            ctx->pc = 0x163ED4u;
            goto label_163ed4;
        }
    }
    ctx->pc = 0x163E60u;
label_163e60:
    // 0x163e60: 0xae0000a8
    ctx->pc = 0x163e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_163e64:
    // 0x163e64: 0x260202d
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163e68:
    // 0x163e68: 0xae0000a4
    ctx->pc = 0x163e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_163e6c:
    // 0x163e6c: 0x282d
    ctx->pc = 0x163e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163e70:
    // 0x163e70: 0xae0000a0
    ctx->pc = 0x163e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_163e74:
    // 0x163e74: 0xc05900e
label_163e78:
    if (ctx->pc == 0x163E78u) {
        ctx->pc = 0x163E78u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x163E7Cu;
        goto label_163e7c;
    }
    ctx->pc = 0x163E74u;
    SET_GPR_U32(ctx, 31, 0x163E7Cu);
    ctx->pc = 0x163E78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x164038u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x164038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163E7Cu; }
        else if (ctx->pc != 0x163E7Cu) { ctx->pc = 0x163E7Cu; }
    }
    if (ctx->pc != 0x163E7Cu) { return; }
    ctx->pc = 0x163E7Cu;
label_163e7c:
    // 0x163e7c: 0x8e0300a0
    ctx->pc = 0x163e7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_163e80:
    // 0x163e80: 0x40a02d
    ctx->pc = 0x163e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163e84:
    // 0x163e84: 0x24630001
    ctx->pc = 0x163e84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_163e88:
    // 0x163e88: 0x10000012
label_163e8c:
    if (ctx->pc == 0x163E8Cu) {
        ctx->pc = 0x163E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x163E90u;
        goto label_163e90;
    }
    ctx->pc = 0x163E88u;
    {
        const bool branch_taken_0x163e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163E8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        if (branch_taken_0x163e88) {
            ctx->pc = 0x163ED4u;
            goto label_163ed4;
        }
    }
    ctx->pc = 0x163E90u;
label_163e90:
    // 0x163e90: 0x8e0500a4
    ctx->pc = 0x163e90u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_163e94:
    // 0x163e94: 0x260202d
    ctx->pc = 0x163e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163e98:
    // 0x163e98: 0xc05900e
label_163e9c:
    if (ctx->pc == 0x163E9Cu) {
        ctx->pc = 0x163E9Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x163EA0u;
        goto label_163ea0;
    }
    ctx->pc = 0x163E98u;
    SET_GPR_U32(ctx, 31, 0x163EA0u);
    ctx->pc = 0x163E9Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->pc = 0x164038u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x164038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EA0u; }
        else if (ctx->pc != 0x163EA0u) { ctx->pc = 0x163EA0u; }
    }
    if (ctx->pc != 0x163EA0u) { return; }
    ctx->pc = 0x163EA0u;
label_163ea0:
    // 0x163ea0: 0x8e0300a4
    ctx->pc = 0x163ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_163ea4:
    // 0x163ea4: 0x40a02d
    ctx->pc = 0x163ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163ea8:
    // 0x163ea8: 0x24630001
    ctx->pc = 0x163ea8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_163eac:
    // 0x163eac: 0x10000009
label_163eb0:
    if (ctx->pc == 0x163EB0u) {
        ctx->pc = 0x163EB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x163EB4u;
        goto label_163eb4;
    }
    ctx->pc = 0x163EACu;
    {
        const bool branch_taken_0x163eac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163EB0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        if (branch_taken_0x163eac) {
            ctx->pc = 0x163ED4u;
            goto label_163ed4;
        }
    }
    ctx->pc = 0x163EB4u;
label_163eb4:
    // 0x163eb4: 0x8e0500a8
    ctx->pc = 0x163eb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_163eb8:
    // 0x163eb8: 0x260202d
    ctx->pc = 0x163eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_163ebc:
    // 0x163ebc: 0xc05900e
label_163ec0:
    if (ctx->pc == 0x163EC0u) {
        ctx->pc = 0x163EC0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->pc = 0x163EC4u;
        goto label_163ec4;
    }
    ctx->pc = 0x163EBCu;
    SET_GPR_U32(ctx, 31, 0x163EC4u);
    ctx->pc = 0x163EC0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->pc = 0x164038u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x164038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163EC4u; }
        else if (ctx->pc != 0x163EC4u) { ctx->pc = 0x163EC4u; }
    }
    if (ctx->pc != 0x163EC4u) { return; }
    ctx->pc = 0x163EC4u;
label_163ec4:
    // 0x163ec4: 0x8e0300a8
    ctx->pc = 0x163ec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_163ec8:
    // 0x163ec8: 0x40a02d
    ctx->pc = 0x163ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163ecc:
    // 0x163ecc: 0x24630001
    ctx->pc = 0x163eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_163ed0:
    // 0x163ed0: 0xae0300a8
    ctx->pc = 0x163ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_163ed4:
    // 0x163ed4: 0x8ec2aac0
    ctx->pc = 0x163ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294945472)));
label_163ed8:
    // 0x163ed8: 0x1040ffc5
label_163edc:
    if (ctx->pc == 0x163EDCu) {
        ctx->pc = 0x163EDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x163EE0u;
        goto label_163ee0;
    }
    ctx->pc = 0x163ED8u;
    {
        const bool branch_taken_0x163ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163EDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x163ed8) {
            ctx->pc = 0x163DF0u;
            goto label_163df0;
        }
    }
    ctx->pc = 0x163EE0u;
label_163ee0:
    // 0x163ee0: 0x24020001
    ctx->pc = 0x163ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_163ee4:
    // 0x163ee4: 0xdfbf0070
    ctx->pc = 0x163ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_163ee8:
    // 0x163ee8: 0xdfb60060
    ctx->pc = 0x163ee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_163eec:
    // 0x163eec: 0xdfb50050
    ctx->pc = 0x163eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_163ef0:
    // 0x163ef0: 0xdfb40040
    ctx->pc = 0x163ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_163ef4:
    // 0x163ef4: 0xdfb30030
    ctx->pc = 0x163ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163ef8:
    // 0x163ef8: 0xdfb20020
    ctx->pc = 0x163ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_163efc:
    // 0x163efc: 0xdfb10010
    ctx->pc = 0x163efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163f00:
    // 0x163f00: 0xdfb00000
    ctx->pc = 0x163f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163f04:
    // 0x163f04: 0x3e00008
label_163f08:
    if (ctx->pc == 0x163F08u) {
        ctx->pc = 0x163F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x163F0Cu;
        goto label_fallthrough_0x163f04;
    }
    ctx->pc = 0x163F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163D88u: goto label_163d88;
            case 0x163D8Cu: goto label_163d8c;
            case 0x163D90u: goto label_163d90;
            case 0x163D94u: goto label_163d94;
            case 0x163D98u: goto label_163d98;
            case 0x163D9Cu: goto label_163d9c;
            case 0x163DA0u: goto label_163da0;
            case 0x163DA4u: goto label_163da4;
            case 0x163DA8u: goto label_163da8;
            case 0x163DACu: goto label_163dac;
            case 0x163DB0u: goto label_163db0;
            case 0x163DB4u: goto label_163db4;
            case 0x163DB8u: goto label_163db8;
            case 0x163DBCu: goto label_163dbc;
            case 0x163DC0u: goto label_163dc0;
            case 0x163DC4u: goto label_163dc4;
            case 0x163DC8u: goto label_163dc8;
            case 0x163DCCu: goto label_163dcc;
            case 0x163DD0u: goto label_163dd0;
            case 0x163DD4u: goto label_163dd4;
            case 0x163DD8u: goto label_163dd8;
            case 0x163DDCu: goto label_163ddc;
            case 0x163DE0u: goto label_163de0;
            case 0x163DE4u: goto label_163de4;
            case 0x163DE8u: goto label_163de8;
            case 0x163DECu: goto label_163dec;
            case 0x163DF0u: goto label_163df0;
            case 0x163DF4u: goto label_163df4;
            case 0x163DF8u: goto label_163df8;
            case 0x163DFCu: goto label_163dfc;
            case 0x163E00u: goto label_163e00;
            case 0x163E04u: goto label_163e04;
            case 0x163E08u: goto label_163e08;
            case 0x163E0Cu: goto label_163e0c;
            case 0x163E10u: goto label_163e10;
            case 0x163E14u: goto label_163e14;
            case 0x163E18u: goto label_163e18;
            case 0x163E1Cu: goto label_163e1c;
            case 0x163E20u: goto label_163e20;
            case 0x163E24u: goto label_163e24;
            case 0x163E28u: goto label_163e28;
            case 0x163E2Cu: goto label_163e2c;
            case 0x163E30u: goto label_163e30;
            case 0x163E34u: goto label_163e34;
            case 0x163E38u: goto label_163e38;
            case 0x163E3Cu: goto label_163e3c;
            case 0x163E40u: goto label_163e40;
            case 0x163E44u: goto label_163e44;
            case 0x163E48u: goto label_163e48;
            case 0x163E4Cu: goto label_163e4c;
            case 0x163E50u: goto label_163e50;
            case 0x163E54u: goto label_163e54;
            case 0x163E58u: goto label_163e58;
            case 0x163E5Cu: goto label_163e5c;
            case 0x163E60u: goto label_163e60;
            case 0x163E64u: goto label_163e64;
            case 0x163E68u: goto label_163e68;
            case 0x163E6Cu: goto label_163e6c;
            case 0x163E70u: goto label_163e70;
            case 0x163E74u: goto label_163e74;
            case 0x163E78u: goto label_163e78;
            case 0x163E7Cu: goto label_163e7c;
            case 0x163E80u: goto label_163e80;
            case 0x163E84u: goto label_163e84;
            case 0x163E88u: goto label_163e88;
            case 0x163E8Cu: goto label_163e8c;
            case 0x163E90u: goto label_163e90;
            case 0x163E94u: goto label_163e94;
            case 0x163E98u: goto label_163e98;
            case 0x163E9Cu: goto label_163e9c;
            case 0x163EA0u: goto label_163ea0;
            case 0x163EA4u: goto label_163ea4;
            case 0x163EA8u: goto label_163ea8;
            case 0x163EACu: goto label_163eac;
            case 0x163EB0u: goto label_163eb0;
            case 0x163EB4u: goto label_163eb4;
            case 0x163EB8u: goto label_163eb8;
            case 0x163EBCu: goto label_163ebc;
            case 0x163EC0u: goto label_163ec0;
            case 0x163EC4u: goto label_163ec4;
            case 0x163EC8u: goto label_163ec8;
            case 0x163ECCu: goto label_163ecc;
            case 0x163ED0u: goto label_163ed0;
            case 0x163ED4u: goto label_163ed4;
            case 0x163ED8u: goto label_163ed8;
            case 0x163EDCu: goto label_163edc;
            case 0x163EE0u: goto label_163ee0;
            case 0x163EE4u: goto label_163ee4;
            case 0x163EE8u: goto label_163ee8;
            case 0x163EECu: goto label_163eec;
            case 0x163EF0u: goto label_163ef0;
            case 0x163EF4u: goto label_163ef4;
            case 0x163EF8u: goto label_163ef8;
            case 0x163EFCu: goto label_163efc;
            case 0x163F00u: goto label_163f00;
            case 0x163F04u: goto label_163f04;
            case 0x163F08u: goto label_163f08;
            default: break;
        }
        return;
    }
label_fallthrough_0x163f04:
    ctx->pc = 0x163F0Cu;
}
