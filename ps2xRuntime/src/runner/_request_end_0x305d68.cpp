#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_end
// Address: 0x305d68 - 0x305e1c
void _request_end_0x305d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x305d68u;

label_305d68:
    // 0x305d68: 0x27bdffd0
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_305d6c:
    // 0x305d6c: 0x3c028000
    ctx->pc = 0x305d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_305d70:
    // 0x305d70: 0xffb10010
    ctx->pc = 0x305d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_305d74:
    // 0x305d74: 0x3442000a
    ctx->pc = 0x305d74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
label_305d78:
    // 0x305d78: 0xffbf0020
    ctx->pc = 0x305d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_305d7c:
    // 0x305d7c: 0x80882d
    ctx->pc = 0x305d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305d80:
    // 0x305d80: 0xffb00000
    ctx->pc = 0x305d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_305d84:
    // 0x305d84: 0x8e230020
    ctx->pc = 0x305d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_305d88:
    // 0x305d88: 0x10620009
label_305d8c:
    if (ctx->pc == 0x305D8Cu) {
        ctx->pc = 0x305D8Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x305D90u;
        goto label_305d90;
    }
    ctx->pc = 0x305D88u;
    {
        const bool branch_taken_0x305d88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x305D8Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x305d88) {
            ctx->pc = 0x305DB0u;
            goto label_305db0;
        }
    }
    ctx->pc = 0x305D90u;
label_305d90:
    // 0x305d90: 0x54400015
label_305d94:
    if (ctx->pc == 0x305D94u) {
        ctx->pc = 0x305D94u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x305D98u;
        goto label_305d98;
    }
    ctx->pc = 0x305D90u;
    {
        const bool branch_taken_0x305d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x305d90) {
            ctx->pc = 0x305D94u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->pc = 0x305DE8u;
            goto label_305de8;
        }
    }
    ctx->pc = 0x305D98u;
label_305d98:
    // 0x305d98: 0x3c028000
    ctx->pc = 0x305d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
label_305d9c:
    // 0x305d9c: 0x34420009
    ctx->pc = 0x305d9cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
label_305da0:
    // 0x305da0: 0x5062000b
label_305da4:
    if (ctx->pc == 0x305DA4u) {
        ctx->pc = 0x305DA4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x305DA8u;
        goto label_305da8;
    }
    ctx->pc = 0x305DA0u;
    {
        const bool branch_taken_0x305da0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x305da0) {
            ctx->pc = 0x305DA4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->pc = 0x305DD0u;
            goto label_305dd0;
        }
    }
    ctx->pc = 0x305DA8u;
label_305da8:
    // 0x305da8: 0x1000000f
label_305dac:
    if (ctx->pc == 0x305DACu) {
        ctx->pc = 0x305DACu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x305DB0u;
        goto label_305db0;
    }
    ctx->pc = 0x305DA8u;
    {
        const bool branch_taken_0x305da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x305DACu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x305da8) {
            ctx->pc = 0x305DE8u;
            goto label_305de8;
        }
    }
    ctx->pc = 0x305DB0u;
label_305db0:
    // 0x305db0: 0x8e30001c
    ctx->pc = 0x305db0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_305db4:
    // 0x305db4: 0x8e02001c
    ctx->pc = 0x305db4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_305db8:
    // 0x305db8: 0x5040000c
label_305dbc:
    if (ctx->pc == 0x305DBCu) {
        ctx->pc = 0x305DBCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x305DC0u;
        goto label_305dc0;
    }
    ctx->pc = 0x305DB8u;
    {
        const bool branch_taken_0x305db8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x305db8) {
            ctx->pc = 0x305DBCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x305DECu;
            goto label_305dec;
        }
    }
    ctx->pc = 0x305DC0u;
label_305dc0:
    // 0x305dc0: 0x40f809
label_305dc4:
    if (ctx->pc == 0x305DC4u) {
        ctx->pc = 0x305DC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x305DC8u;
        goto label_305dc8;
    }
    ctx->pc = 0x305DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x305DC8u);
        ctx->pc = 0x305DC4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305D68u: goto label_305d68;
            case 0x305D6Cu: goto label_305d6c;
            case 0x305D70u: goto label_305d70;
            case 0x305D74u: goto label_305d74;
            case 0x305D78u: goto label_305d78;
            case 0x305D7Cu: goto label_305d7c;
            case 0x305D80u: goto label_305d80;
            case 0x305D84u: goto label_305d84;
            case 0x305D88u: goto label_305d88;
            case 0x305D8Cu: goto label_305d8c;
            case 0x305D90u: goto label_305d90;
            case 0x305D94u: goto label_305d94;
            case 0x305D98u: goto label_305d98;
            case 0x305D9Cu: goto label_305d9c;
            case 0x305DA0u: goto label_305da0;
            case 0x305DA4u: goto label_305da4;
            case 0x305DA8u: goto label_305da8;
            case 0x305DACu: goto label_305dac;
            case 0x305DB0u: goto label_305db0;
            case 0x305DB4u: goto label_305db4;
            case 0x305DB8u: goto label_305db8;
            case 0x305DBCu: goto label_305dbc;
            case 0x305DC0u: goto label_305dc0;
            case 0x305DC4u: goto label_305dc4;
            case 0x305DC8u: goto label_305dc8;
            case 0x305DCCu: goto label_305dcc;
            case 0x305DD0u: goto label_305dd0;
            case 0x305DD4u: goto label_305dd4;
            case 0x305DD8u: goto label_305dd8;
            case 0x305DDCu: goto label_305ddc;
            case 0x305DE0u: goto label_305de0;
            case 0x305DE4u: goto label_305de4;
            case 0x305DE8u: goto label_305de8;
            case 0x305DECu: goto label_305dec;
            case 0x305DF0u: goto label_305df0;
            case 0x305DF4u: goto label_305df4;
            case 0x305DF8u: goto label_305df8;
            case 0x305DFCu: goto label_305dfc;
            case 0x305E00u: goto label_305e00;
            case 0x305E04u: goto label_305e04;
            case 0x305E08u: goto label_305e08;
            case 0x305E0Cu: goto label_305e0c;
            case 0x305E10u: goto label_305e10;
            case 0x305E14u: goto label_305e14;
            case 0x305E18u: goto label_305e18;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x305DC8u; }
            if (ctx->pc != 0x305DC8u) { return; }
        }
    }
    ctx->pc = 0x305DC8u;
label_305dc8:
    // 0x305dc8: 0x10000007
label_305dcc:
    if (ctx->pc == 0x305DCCu) {
        ctx->pc = 0x305DCCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x305DD0u;
        goto label_305dd0;
    }
    ctx->pc = 0x305DC8u;
    {
        const bool branch_taken_0x305dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x305DCCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
        if (branch_taken_0x305dc8) {
            ctx->pc = 0x305DE8u;
            goto label_305de8;
        }
    }
    ctx->pc = 0x305DD0u;
label_305dd0:
    // 0x305dd0: 0x8e30001c
    ctx->pc = 0x305dd0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_305dd4:
    // 0x305dd4: 0xae020024
    ctx->pc = 0x305dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_305dd8:
    // 0x305dd8: 0x8e230028
    ctx->pc = 0x305dd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_305ddc:
    // 0x305ddc: 0xae030014
    ctx->pc = 0x305ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_305de0:
    // 0x305de0: 0x8e22002c
    ctx->pc = 0x305de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_305de4:
    // 0x305de4: 0xae020018
    ctx->pc = 0x305de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_305de8:
    // 0x305de8: 0x8e040008
    ctx->pc = 0x305de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_305dec:
    // 0x305dec: 0x4800003
label_305df0:
    if (ctx->pc == 0x305DF0u) {
        ctx->pc = 0x305DF4u;
        goto label_305df4;
    }
    ctx->pc = 0x305DECu;
    {
        const bool branch_taken_0x305dec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x305dec) {
            ctx->pc = 0x305DFCu;
            goto label_305dfc;
        }
    }
    ctx->pc = 0x305DF4u;
label_305df4:
    // 0x305df4: 0xc0c0d84
label_305df8:
    if (ctx->pc == 0x305DF8u) {
        ctx->pc = 0x305DFCu;
        goto label_305dfc;
    }
    ctx->pc = 0x305DF4u;
    SET_GPR_U32(ctx, 31, 0x305DFCu);
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305DFCu; }
    }
    if (ctx->pc != 0x305DFCu) { return; }
    ctx->pc = 0x305DFCu;
label_305dfc:
    // 0x305dfc: 0xc0c1736
label_305e00:
    if (ctx->pc == 0x305E00u) {
        ctx->pc = 0x305E00u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x305E04u;
        goto label_305e04;
    }
    ctx->pc = 0x305DFCu;
    SET_GPR_U32(ctx, 31, 0x305E04u);
    ctx->pc = 0x305E00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x305CD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcFreePacket_0x305cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E04u; }
    }
    if (ctx->pc != 0x305E04u) { return; }
    ctx->pc = 0x305E04u;
label_305e04:
    // 0x305e04: 0xae000000
    ctx->pc = 0x305e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_305e08:
    // 0x305e08: 0xdfbf0020
    ctx->pc = 0x305e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_305e0c:
    // 0x305e0c: 0xdfb10010
    ctx->pc = 0x305e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_305e10:
    // 0x305e10: 0xdfb00000
    ctx->pc = 0x305e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_305e14:
    // 0x305e14: 0x3e00008
label_305e18:
    if (ctx->pc == 0x305E18u) {
        ctx->pc = 0x305E18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x305E1Cu;
        goto label_fallthrough_0x305e14;
    }
    ctx->pc = 0x305E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305E18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305D68u: goto label_305d68;
            case 0x305D6Cu: goto label_305d6c;
            case 0x305D70u: goto label_305d70;
            case 0x305D74u: goto label_305d74;
            case 0x305D78u: goto label_305d78;
            case 0x305D7Cu: goto label_305d7c;
            case 0x305D80u: goto label_305d80;
            case 0x305D84u: goto label_305d84;
            case 0x305D88u: goto label_305d88;
            case 0x305D8Cu: goto label_305d8c;
            case 0x305D90u: goto label_305d90;
            case 0x305D94u: goto label_305d94;
            case 0x305D98u: goto label_305d98;
            case 0x305D9Cu: goto label_305d9c;
            case 0x305DA0u: goto label_305da0;
            case 0x305DA4u: goto label_305da4;
            case 0x305DA8u: goto label_305da8;
            case 0x305DACu: goto label_305dac;
            case 0x305DB0u: goto label_305db0;
            case 0x305DB4u: goto label_305db4;
            case 0x305DB8u: goto label_305db8;
            case 0x305DBCu: goto label_305dbc;
            case 0x305DC0u: goto label_305dc0;
            case 0x305DC4u: goto label_305dc4;
            case 0x305DC8u: goto label_305dc8;
            case 0x305DCCu: goto label_305dcc;
            case 0x305DD0u: goto label_305dd0;
            case 0x305DD4u: goto label_305dd4;
            case 0x305DD8u: goto label_305dd8;
            case 0x305DDCu: goto label_305ddc;
            case 0x305DE0u: goto label_305de0;
            case 0x305DE4u: goto label_305de4;
            case 0x305DE8u: goto label_305de8;
            case 0x305DECu: goto label_305dec;
            case 0x305DF0u: goto label_305df0;
            case 0x305DF4u: goto label_305df4;
            case 0x305DF8u: goto label_305df8;
            case 0x305DFCu: goto label_305dfc;
            case 0x305E00u: goto label_305e00;
            case 0x305E04u: goto label_305e04;
            case 0x305E08u: goto label_305e08;
            case 0x305E0Cu: goto label_305e0c;
            case 0x305E10u: goto label_305e10;
            case 0x305E14u: goto label_305e14;
            case 0x305E18u: goto label_305e18;
            default: break;
        }
        return;
    }
label_fallthrough_0x305e14:
    ctx->pc = 0x305E1Cu;
}
