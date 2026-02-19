#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalGetAddr
// Address: 0x2b7d78 - 0x2b7f30
void evalGetAddr_0x2b7d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7d78u;

    // 0x2b7d78: 0x27bdffb0
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b7d7c: 0xffbf0040
    ctx->pc = 0x2b7d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b7d80: 0xffb30030
    ctx->pc = 0x2b7d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b7d84: 0xffb20020
    ctx->pc = 0x2b7d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b7d88: 0xffb10010
    ctx->pc = 0x2b7d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b7d8c: 0xffb00000
    ctx->pc = 0x2b7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7d90: 0x80802d
    ctx->pc = 0x2b7d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d94: 0xa0902d
    ctx->pc = 0x2b7d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d98: 0xc0982d
    ctx->pc = 0x2b7d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d9c: 0x240202d
    ctx->pc = 0x2b7d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7da0: 0x260282d
    ctx->pc = 0x2b7da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7da4: 0xc0accda
    ctx->pc = 0x2B7DA4u;
    SET_GPR_U32(ctx, 31, 0x2B7DACu);
    ctx->pc = 0x2B7DA8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B3368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataAddr_0x2b3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DACu; }
    }
    if (ctx->pc != 0x2B7DACu) { return; }
    ctx->pc = 0x2B7DACu;
    // 0x2b7dac: 0x40882d
    ctx->pc = 0x2b7dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7db0: 0x5620000b
    ctx->pc = 0x2B7DB0u;
    {
        const bool branch_taken_0x2b7db0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b7db0) {
            ctx->pc = 0x2B7DB4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B7DE0u;
            goto label_2b7de0;
        }
    }
    ctx->pc = 0x2B7DB8u;
    // 0x2b7db8: 0x3c04003b
    ctx->pc = 0x2b7db8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7dbc: 0x24844650
    ctx->pc = 0x2b7dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b7dc0: 0x24050020
    ctx->pc = 0x2b7dc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7dc4: 0x3c06003b
    ctx->pc = 0x2b7dc4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b7dc8: 0x24c60d80
    ctx->pc = 0x2b7dc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b7dcc: 0xc0ad0d6
    ctx->pc = 0x2B7DCCu;
    SET_GPR_U32(ctx, 31, 0x2B7DD4u);
    ctx->pc = 0x2B7DD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7DD4u; }
    }
    if (ctx->pc != 0x2B7DD4u) { return; }
    ctx->pc = 0x2B7DD4u;
    // 0x2b7dd4: 0x3c04003b
    ctx->pc = 0x2b7dd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7dd8: 0x1000000e
    ctx->pc = 0x2B7DD8u;
    {
        const bool branch_taken_0x2b7dd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7DDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21120));
        if (branch_taken_0x2b7dd8) {
            ctx->pc = 0x2B7E14u;
            goto label_2b7e14;
        }
    }
    ctx->pc = 0x2B7DE0u;
label_2b7de0:
    // 0x2b7de0: 0x3c02ffff
    ctx->pc = 0x2b7de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b7de4: 0x3442ffff
    ctx->pc = 0x2b7de4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b7de8: 0x14620017
    ctx->pc = 0x2B7DE8u;
    {
        const bool branch_taken_0x2b7de8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B7DECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b7de8) {
            ctx->pc = 0x2B7E48u;
            goto label_2b7e48;
        }
    }
    ctx->pc = 0x2B7DF0u;
    // 0x2b7df0: 0x3c04003b
    ctx->pc = 0x2b7df0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7df4: 0x24844650
    ctx->pc = 0x2b7df4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b7df8: 0x24050020
    ctx->pc = 0x2b7df8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7dfc: 0x3c06003b
    ctx->pc = 0x2b7dfcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b7e00: 0x24c60d80
    ctx->pc = 0x2b7e00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b7e04: 0xc0ad0d6
    ctx->pc = 0x2B7E04u;
    SET_GPR_U32(ctx, 31, 0x2B7E0Cu);
    ctx->pc = 0x2B7E08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E0Cu; }
    }
    if (ctx->pc != 0x2B7E0Cu) { return; }
    ctx->pc = 0x2B7E0Cu;
    // 0x2b7e0c: 0x3c04003b
    ctx->pc = 0x2b7e0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7e10: 0x24845298
    ctx->pc = 0x2b7e10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21144));
label_2b7e14:
    // 0x2b7e14: 0xc0b4a34
    ctx->pc = 0x2B7E14u;
    SET_GPR_U32(ctx, 31, 0x2B7E1Cu);
    ctx->pc = 0x2B7E18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E1Cu; }
    }
    if (ctx->pc != 0x2B7E1Cu) { return; }
    ctx->pc = 0x2B7E1Cu;
    // 0x2b7e1c: 0x3c04003b
    ctx->pc = 0x2b7e1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7e20: 0xc0b4a34
    ctx->pc = 0x2B7E20u;
    SET_GPR_U32(ctx, 31, 0x2B7E28u);
    ctx->pc = 0x2B7E24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7E28u; }
    }
    if (ctx->pc != 0x2B7E28u) { return; }
    ctx->pc = 0x2B7E28u;
    // 0x2b7e28: 0x3c020037
    ctx->pc = 0x2b7e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b7e2c: 0x8c4320ac
    ctx->pc = 0x2b7e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7e30: 0x8c620048
    ctx->pc = 0x2b7e30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b7e34: 0x34420001
    ctx->pc = 0x2b7e34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b7e38: 0xac620048
    ctx->pc = 0x2b7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b7e3c: 0x24020020
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7e40: 0x10000034
    ctx->pc = 0x2B7E40u;
    {
        const bool branch_taken_0x2b7e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7E44u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b7e40) {
            ctx->pc = 0x2B7F14u;
            goto label_2b7f14;
        }
    }
    ctx->pc = 0x2B7E48u;
label_2b7e48:
    // 0x2b7e48: 0xae020000
    ctx->pc = 0x2b7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b7e4c: 0x8e220000
    ctx->pc = 0x2b7e4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7e50: 0xae020010
    ctx->pc = 0x2b7e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b7e54: 0x8e220008
    ctx->pc = 0x2b7e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2b7e58: 0x3043f000
    ctx->pc = 0x2b7e58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 61440));
    // 0x2b7e5c: 0x24022000
    ctx->pc = 0x2b7e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2b7e60: 0x10620011
    ctx->pc = 0x2B7E60u;
    {
        const bool branch_taken_0x2b7e60 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7E64u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8193));
        if (branch_taken_0x2b7e60) {
            ctx->pc = 0x2B7EA8u;
            goto label_2b7ea8;
        }
    }
    ctx->pc = 0x2B7E68u;
    // 0x2b7e68: 0x10400007
    ctx->pc = 0x2B7E68u;
    {
        const bool branch_taken_0x2b7e68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7E6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12288));
        if (branch_taken_0x2b7e68) {
            ctx->pc = 0x2B7E88u;
            goto label_2b7e88;
        }
    }
    ctx->pc = 0x2B7E70u;
    // 0x2b7e70: 0x10600028
    ctx->pc = 0x2B7E70u;
    {
        const bool branch_taken_0x2b7e70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7E74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4096));
        if (branch_taken_0x2b7e70) {
            ctx->pc = 0x2B7F14u;
            goto label_2b7f14;
        }
    }
    ctx->pc = 0x2B7E78u;
    // 0x2b7e78: 0x10620009
    ctx->pc = 0x2B7E78u;
    {
        const bool branch_taken_0x2b7e78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7E7Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b7e78) {
            ctx->pc = 0x2B7EA0u;
            goto label_2b7ea0;
        }
    }
    ctx->pc = 0x2B7E80u;
    // 0x2b7e80: 0x10000012
    ctx->pc = 0x2B7E80u;
    {
        const bool branch_taken_0x2b7e80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7E84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b7e80) {
            ctx->pc = 0x2B7ECCu;
            goto label_2b7ecc;
        }
    }
    ctx->pc = 0x2B7E88u;
label_2b7e88:
    // 0x2b7e88: 0x10620009
    ctx->pc = 0x2B7E88u;
    {
        const bool branch_taken_0x2b7e88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7E8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
        if (branch_taken_0x2b7e88) {
            ctx->pc = 0x2B7EB0u;
            goto label_2b7eb0;
        }
    }
    ctx->pc = 0x2B7E90u;
    // 0x2b7e90: 0x10620009
    ctx->pc = 0x2B7E90u;
    {
        const bool branch_taken_0x2b7e90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B7E94u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b7e90) {
            ctx->pc = 0x2B7EB8u;
            goto label_2b7eb8;
        }
    }
    ctx->pc = 0x2B7E98u;
    // 0x2b7e98: 0x1000000c
    ctx->pc = 0x2B7E98u;
    {
        const bool branch_taken_0x2b7e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7E9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b7e98) {
            ctx->pc = 0x2B7ECCu;
            goto label_2b7ecc;
        }
    }
    ctx->pc = 0x2B7EA0u;
label_2b7ea0:
    // 0x2b7ea0: 0x10000006
    ctx->pc = 0x2B7EA0u;
    {
        const bool branch_taken_0x2b7ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7EA4u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
        if (branch_taken_0x2b7ea0) {
            ctx->pc = 0x2B7EBCu;
            goto label_2b7ebc;
        }
    }
    ctx->pc = 0x2B7EA8u;
label_2b7ea8:
    // 0x2b7ea8: 0x10000004
    ctx->pc = 0x2B7EA8u;
    {
        const bool branch_taken_0x2b7ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7EACu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 22)));
        if (branch_taken_0x2b7ea8) {
            ctx->pc = 0x2B7EBCu;
            goto label_2b7ebc;
        }
    }
    ctx->pc = 0x2B7EB0u;
label_2b7eb0:
    // 0x2b7eb0: 0x10000002
    ctx->pc = 0x2B7EB0u;
    {
        const bool branch_taken_0x2b7eb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7EB4u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        if (branch_taken_0x2b7eb0) {
            ctx->pc = 0x2B7EBCu;
            goto label_2b7ebc;
        }
    }
    ctx->pc = 0x2B7EB8u;
label_2b7eb8:
    // 0x2b7eb8: 0x9642001a
    ctx->pc = 0x2b7eb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_2b7ebc:
    // 0x2b7ebc: 0x8e030010
    ctx->pc = 0x2b7ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b7ec0: 0x431021
    ctx->pc = 0x2b7ec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b7ec4: 0x10000013
    ctx->pc = 0x2B7EC4u;
    {
        const bool branch_taken_0x2b7ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7EC8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b7ec4) {
            ctx->pc = 0x2B7F14u;
            goto label_2b7f14;
        }
    }
    ctx->pc = 0x2B7ECCu;
label_2b7ecc:
    // 0x2b7ecc: 0x24050020
    ctx->pc = 0x2b7eccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7ed0: 0x3c06003b
    ctx->pc = 0x2b7ed0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b7ed4: 0x24c60d80
    ctx->pc = 0x2b7ed4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b7ed8: 0xc0ad0d6
    ctx->pc = 0x2B7ED8u;
    SET_GPR_U32(ctx, 31, 0x2B7EE0u);
    ctx->pc = 0x2B7EDCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EE0u; }
    }
    if (ctx->pc != 0x2B7EE0u) { return; }
    ctx->pc = 0x2B7EE0u;
    // 0x2b7ee0: 0x3c04003b
    ctx->pc = 0x2b7ee0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7ee4: 0x248452c8
    ctx->pc = 0x2b7ee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21192));
    // 0x2b7ee8: 0x8e250004
    ctx->pc = 0x2b7ee8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b7eec: 0xc0b4a34
    ctx->pc = 0x2B7EECu;
    SET_GPR_U32(ctx, 31, 0x2B7EF4u);
    ctx->pc = 0x2B7EF0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7EF4u; }
    }
    if (ctx->pc != 0x2B7EF4u) { return; }
    ctx->pc = 0x2B7EF4u;
    // 0x2b7ef4: 0x3c04003b
    ctx->pc = 0x2b7ef4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7ef8: 0xc0b4a34
    ctx->pc = 0x2B7EF8u;
    SET_GPR_U32(ctx, 31, 0x2B7F00u);
    ctx->pc = 0x2B7EFCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7F00u; }
    }
    if (ctx->pc != 0x2B7F00u) { return; }
    ctx->pc = 0x2B7F00u;
    // 0x2b7f00: 0x3c020037
    ctx->pc = 0x2b7f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b7f04: 0x8c4320ac
    ctx->pc = 0x2b7f04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b7f08: 0x8c620048
    ctx->pc = 0x2b7f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b7f0c: 0x34420001
    ctx->pc = 0x2b7f0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b7f10: 0xac620048
    ctx->pc = 0x2b7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b7f14:
    // 0x2b7f14: 0xdfbf0040
    ctx->pc = 0x2b7f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7f18: 0xdfb30030
    ctx->pc = 0x2b7f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7f1c: 0xdfb20020
    ctx->pc = 0x2b7f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7f20: 0xdfb10010
    ctx->pc = 0x2b7f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7f24: 0xdfb00000
    ctx->pc = 0x2b7f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7f28: 0x3e00008
    ctx->pc = 0x2B7F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B7DE0u: goto label_2b7de0;
            case 0x2B7E14u: goto label_2b7e14;
            case 0x2B7E48u: goto label_2b7e48;
            case 0x2B7E88u: goto label_2b7e88;
            case 0x2B7EA0u: goto label_2b7ea0;
            case 0x2B7EA8u: goto label_2b7ea8;
            case 0x2B7EB0u: goto label_2b7eb0;
            case 0x2B7EB8u: goto label_2b7eb8;
            case 0x2B7EBCu: goto label_2b7ebc;
            case 0x2B7ECCu: goto label_2b7ecc;
            case 0x2B7F14u: goto label_2b7f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B7F30u;
}
