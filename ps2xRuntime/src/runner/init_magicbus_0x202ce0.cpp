#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_magicbus
// Address: 0x202ce0 - 0x202ddc
void init_magicbus_0x202ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202ce0u;

    // 0x202ce0: 0x27bdff80
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x202ce4: 0xffbf0070
    ctx->pc = 0x202ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x202ce8: 0xffb60060
    ctx->pc = 0x202ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x202cec: 0xffb50050
    ctx->pc = 0x202cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x202cf0: 0xffb40040
    ctx->pc = 0x202cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x202cf4: 0xffb30030
    ctx->pc = 0x202cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x202cf8: 0xffb20020
    ctx->pc = 0x202cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x202cfc: 0xffb10010
    ctx->pc = 0x202cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x202d00: 0xffb00000
    ctx->pc = 0x202d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202d04: 0x3c020031
    ctx->pc = 0x202d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202d08: 0xac40ff7c
    ctx->pc = 0x202d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967164), GPR_U32(ctx, 0));
    // 0x202d0c: 0x3c02003c
    ctx->pc = 0x202d0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x202d10: 0x2442b2a0
    ctx->pc = 0x202d10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947488));
    // 0x202d14: 0xac400004
    ctx->pc = 0x202d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x202d18: 0xac400008
    ctx->pc = 0x202d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x202d1c: 0x3c02003a
    ctx->pc = 0x202d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x202d20: 0x8c5022f8
    ctx->pc = 0x202d20u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x202d24: 0x3c15003c
    ctx->pc = 0x202d24u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    // 0x202d28: 0x3c16003a
    ctx->pc = 0x202d28u;
    SET_GPR_U32(ctx, 22, ((uint32_t)58 << 16));
    // 0x202d2c: 0x2a0102d
    ctx->pc = 0x202d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d30: 0x2453b240
    ctx->pc = 0x202d30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x202d34: 0x3c140031
    ctx->pc = 0x202d34u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x202d38: 0x24120001
    ctx->pc = 0x202d38u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x202d3c: 0x10000010
    ctx->pc = 0x202D3Cu;
    {
        const bool branch_taken_0x202d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202D40u;
        SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
        if (branch_taken_0x202d3c) {
            ctx->pc = 0x202D80u;
            goto label_202d80;
        }
    }
    ctx->pc = 0x202D44u;
    // 0x202d44: 0x0
    ctx->pc = 0x202d44u;
    // NOP
label_202d48:
    // 0x202d48: 0x182d
    ctx->pc = 0x202d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d4c: 0x3404ffff
    ctx->pc = 0x202d4cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
label_202d50:
    // 0x202d50: 0x24630001
    ctx->pc = 0x202d50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x202d54: 0x83102b
    ctx->pc = 0x202d54u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x202d58: 0x0
    ctx->pc = 0x202d58u;
    // NOP
    // 0x202d5c: 0x0
    ctx->pc = 0x202d5cu;
    // NOP
    // 0x202d60: 0x0
    ctx->pc = 0x202d60u;
    // NOP
    // 0x202d64: 0x1040fffa
    ctx->pc = 0x202D64u;
    {
        const bool branch_taken_0x202d64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x202d64) {
            ctx->pc = 0x202D50u;
            goto label_202d50;
        }
    }
    ctx->pc = 0x202D6Cu;
    // 0x202d6c: 0x8e2222f8
    ctx->pc = 0x202d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8952)));
    // 0x202d70: 0x501023
    ctx->pc = 0x202d70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x202d74: 0x2c420079
    ctx->pc = 0x202d74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 121));
    // 0x202d78: 0x1040000e
    ctx->pc = 0x202D78u;
    {
        const bool branch_taken_0x202d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202D7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202d78) {
            ctx->pc = 0x202DB4u;
            goto label_202db4;
        }
    }
    ctx->pc = 0x202D80u;
label_202d80:
    // 0x202d80: 0x26a4b240
    ctx->pc = 0x202d80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294947392));
    // 0x202d84: 0x34058001
    ctx->pc = 0x202d84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
    // 0x202d88: 0xc0c1836
    ctx->pc = 0x202D88u;
    SET_GPR_U32(ctx, 31, 0x202D90u);
    ctx->pc = 0x202D8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3060D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x3060d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D90u; }
    }
    if (ctx->pc != 0x202D90u) { return; }
    ctx->pc = 0x202D90u;
    // 0x202d90: 0x4430005
    ctx->pc = 0x202D90u;
    {
        const bool branch_taken_0x202d90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x202d90) {
            ctx->pc = 0x202D94u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->pc = 0x202DA8u;
            goto label_202da8;
        }
    }
    ctx->pc = 0x202D98u;
    // 0x202d98: 0xc0b4a34
    ctx->pc = 0x202D98u;
    SET_GPR_U32(ctx, 31, 0x202DA0u);
    ctx->pc = 0x202D9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 18584));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DA0u; }
    }
    if (ctx->pc != 0x202DA0u) { return; }
    ctx->pc = 0x202DA0u;
    // 0x202da0: 0x10000004
    ctx->pc = 0x202DA0u;
    {
        const bool branch_taken_0x202da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202DA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202da0) {
            ctx->pc = 0x202DB4u;
            goto label_202db4;
        }
    }
    ctx->pc = 0x202DA8u;
label_202da8:
    // 0x202da8: 0x1040ffe7
    ctx->pc = 0x202DA8u;
    {
        const bool branch_taken_0x202da8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x202DACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x202da8) {
            ctx->pc = 0x202D48u;
            goto label_202d48;
        }
    }
    ctx->pc = 0x202DB0u;
    // 0x202db0: 0xae92ff7c
    ctx->pc = 0x202db0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294967164), GPR_U32(ctx, 18));
label_202db4:
    // 0x202db4: 0xdfbf0070
    ctx->pc = 0x202db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x202db8: 0xdfb60060
    ctx->pc = 0x202db8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x202dbc: 0xdfb50050
    ctx->pc = 0x202dbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202dc0: 0xdfb40040
    ctx->pc = 0x202dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202dc4: 0xdfb30030
    ctx->pc = 0x202dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202dc8: 0xdfb20020
    ctx->pc = 0x202dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202dcc: 0xdfb10010
    ctx->pc = 0x202dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202dd0: 0xdfb00000
    ctx->pc = 0x202dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202dd4: 0x3e00008
    ctx->pc = 0x202DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202DD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202D48u: goto label_202d48;
            case 0x202D50u: goto label_202d50;
            case 0x202D80u: goto label_202d80;
            case 0x202DA8u: goto label_202da8;
            case 0x202DB4u: goto label_202db4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202DDCu;
}
