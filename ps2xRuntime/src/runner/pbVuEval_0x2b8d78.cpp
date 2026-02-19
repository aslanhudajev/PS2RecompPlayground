#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuEval
// Address: 0x2b8d78 - 0x2b9600
void pbVuEval_0x2b8d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b8d78u;

label_2b8d78:
    // 0x2b8d78: 0x27bdfeb0
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2b8d7c: 0xffbf0140
    ctx->pc = 0x2b8d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x2b8d80: 0xffbe0130
    ctx->pc = 0x2b8d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x2b8d84: 0xffb70120
    ctx->pc = 0x2b8d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
    // 0x2b8d88: 0xffb60110
    ctx->pc = 0x2b8d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x2b8d8c: 0xffb50100
    ctx->pc = 0x2b8d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
    // 0x2b8d90: 0xffb400f0
    ctx->pc = 0x2b8d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2b8d94: 0xffb300e0
    ctx->pc = 0x2b8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
    // 0x2b8d98: 0xffb200d0
    ctx->pc = 0x2b8d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2b8d9c: 0xffb100c0
    ctx->pc = 0x2b8d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2b8da0: 0xffb000b0
    ctx->pc = 0x2b8da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2b8da4: 0x80902d
    ctx->pc = 0x2b8da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8da8: 0xa0a82d
    ctx->pc = 0x2b8da8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8dac: 0xc0982d
    ctx->pc = 0x2b8dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8db0: 0xe0882d
    ctx->pc = 0x2b8db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8db4: 0x100f02d
    ctx->pc = 0x2b8db4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8db8: 0x3a0b02d
    ctx->pc = 0x2b8db8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8dbc: 0x27b70050
    ctx->pc = 0x2b8dbcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b8dc0: 0xc0ad116
    ctx->pc = 0x2B8DC0u;
    SET_GPR_U32(ctx, 31, 0x2B8DC8u);
    ctx->pc = 0x2B8DC4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    ctx->pc = 0x2B4458u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlUp_0x2b4458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DC8u; }
    }
    if (ctx->pc != 0x2B8DC8u) { return; }
    ctx->pc = 0x2B8DC8u;
    // 0x2b8dc8: 0x233102b
    ctx->pc = 0x2b8dc8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2b8dcc: 0x10400029
    ctx->pc = 0x2B8DCCu;
    {
        const bool branch_taken_0x2b8dcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8dcc) {
            ctx->pc = 0x2B8E74u;
            goto label_2b8e74;
        }
    }
    ctx->pc = 0x2B8DD4u;
    // 0x2b8dd4: 0xae420000
    ctx->pc = 0x2b8dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b8dd8: 0x26220001
    ctx->pc = 0x2b8dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b8ddc: 0x1662000a
    ctx->pc = 0x2B8DDCu;
    {
        const bool branch_taken_0x2b8ddc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B8DE0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8ddc) {
            ctx->pc = 0x2B8E08u;
            goto label_2b8e08;
        }
    }
    ctx->pc = 0x2B8DE4u;
    // 0x2b8de4: 0x24844650
    ctx->pc = 0x2b8de4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b8de8: 0x24050020
    ctx->pc = 0x2b8de8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b8dec: 0x3c06003b
    ctx->pc = 0x2b8decu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b8df0: 0x24c60d80
    ctx->pc = 0x2b8df0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b8df4: 0xc0ad0d6
    ctx->pc = 0x2B8DF4u;
    SET_GPR_U32(ctx, 31, 0x2B8DFCu);
    ctx->pc = 0x2B8DF8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DFCu; }
    }
    if (ctx->pc != 0x2B8DFCu) { return; }
    ctx->pc = 0x2B8DFCu;
    // 0x2b8dfc: 0x3c04003b
    ctx->pc = 0x2b8dfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8e00: 0x10000009
    ctx->pc = 0x2B8E00u;
    {
        const bool branch_taken_0x2b8e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8E04u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21792));
        if (branch_taken_0x2b8e00) {
            ctx->pc = 0x2B8E28u;
            goto label_2b8e28;
        }
    }
    ctx->pc = 0x2B8E08u;
label_2b8e08:
    // 0x2b8e08: 0x24844650
    ctx->pc = 0x2b8e08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b8e0c: 0x24050020
    ctx->pc = 0x2b8e0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b8e10: 0x3c06003b
    ctx->pc = 0x2b8e10u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b8e14: 0x24c60d80
    ctx->pc = 0x2b8e14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b8e18: 0xc0ad0d6
    ctx->pc = 0x2B8E18u;
    SET_GPR_U32(ctx, 31, 0x2B8E20u);
    ctx->pc = 0x2B8E1Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E20u; }
    }
    if (ctx->pc != 0x2B8E20u) { return; }
    ctx->pc = 0x2B8E20u;
    // 0x2b8e20: 0x3c04003b
    ctx->pc = 0x2b8e20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8e24: 0x24845538
    ctx->pc = 0x2b8e24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21816));
label_2b8e28:
    // 0x2b8e28: 0xc0b4a34
    ctx->pc = 0x2B8E28u;
    SET_GPR_U32(ctx, 31, 0x2B8E30u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E30u; }
    }
    if (ctx->pc != 0x2B8E30u) { return; }
    ctx->pc = 0x2B8E30u;
    // 0x2b8e30: 0x3c04003b
    ctx->pc = 0x2b8e30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8e34: 0xc0b4a34
    ctx->pc = 0x2B8E34u;
    SET_GPR_U32(ctx, 31, 0x2B8E3Cu);
    ctx->pc = 0x2B8E38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E3Cu; }
    }
    if (ctx->pc != 0x2B8E3Cu) { return; }
    ctx->pc = 0x2B8E3Cu;
    // 0x2b8e3c: 0x3c020037
    ctx->pc = 0x2b8e3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b8e40: 0x8c4320ac
    ctx->pc = 0x2b8e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b8e44: 0x8c620048
    ctx->pc = 0x2b8e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b8e48: 0x34420001
    ctx->pc = 0x2b8e48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b8e4c: 0xac620048
    ctx->pc = 0x2b8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b8e50: 0x24040001
    ctx->pc = 0x2b8e50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8e54: 0x260282d
    ctx->pc = 0x2b8e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e58: 0x220302d
    ctx->pc = 0x2b8e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e5c: 0x382d
    ctx->pc = 0x2b8e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e60: 0x402d
    ctx->pc = 0x2b8e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e64: 0xc0adee0
    ctx->pc = 0x2B8E64u;
    SET_GPR_U32(ctx, 31, 0x2B8E6Cu);
    ctx->pc = 0x2B8E68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDB_0x2b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E6Cu; }
    }
    if (ctx->pc != 0x2B8E6Cu) { return; }
    ctx->pc = 0x2B8E6Cu;
    // 0x2b8e6c: 0x100001d4
    ctx->pc = 0x2B8E6Cu;
    {
        const bool branch_taken_0x2b8e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8E70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8e6c) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B8E74u;
label_2b8e74:
    // 0x2b8e74: 0x27a400a0
    ctx->pc = 0x2b8e74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b8e78: 0x260282d
    ctx->pc = 0x2b8e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e7c: 0xc0ad742
    ctx->pc = 0x2B8E7Cu;
    SET_GPR_U32(ctx, 31, 0x2B8E84u);
    ctx->pc = 0x2B8E80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B5D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        findOp_0x2b5d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8E84u; }
    }
    if (ctx->pc != 0x2B8E84u) { return; }
    ctx->pc = 0x2B8E84u;
    // 0x2b8e84: 0x40a02d
    ctx->pc = 0x2b8e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e88: 0x202d
    ctx->pc = 0x2b8e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e8c: 0x260282d
    ctx->pc = 0x2b8e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e90: 0x220302d
    ctx->pc = 0x2b8e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e94: 0x8fa700a0
    ctx->pc = 0x2b8e94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8e98: 0x402d
    ctx->pc = 0x2b8e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8e9c: 0xc0adee0
    ctx->pc = 0x2B8E9Cu;
    SET_GPR_U32(ctx, 31, 0x2B8EA4u);
    ctx->pc = 0x2B8EA0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDB_0x2b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8EA4u; }
    }
    if (ctx->pc != 0x2B8EA4u) { return; }
    ctx->pc = 0x2B8EA4u;
    // 0x2b8ea4: 0x5680004c
    ctx->pc = 0x2B8EA4u;
    {
        const bool branch_taken_0x2b8ea4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b8ea4) {
            ctx->pc = 0x2B8EA8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->pc = 0x2B8FD8u;
            goto label_2b8fd8;
        }
    }
    ctx->pc = 0x2B8EACu;
    // 0x2b8eac: 0x82620000
    ctx->pc = 0x2b8eacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b8eb0: 0x3c03003c
    ctx->pc = 0x2b8eb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2b8eb4: 0x2463a781
    ctx->pc = 0x2b8eb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944641));
    // 0x2b8eb8: 0x431021
    ctx->pc = 0x2b8eb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8ebc: 0x90420000
    ctx->pc = 0x2b8ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8ec0: 0x30420004
    ctx->pc = 0x2b8ec0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2b8ec4: 0x10400028
    ctx->pc = 0x2B8EC4u;
    {
        const bool branch_taken_0x2b8ec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8EC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8ec4) {
            ctx->pc = 0x2B8F68u;
            goto label_2b8f68;
        }
    }
    ctx->pc = 0x2B8ECCu;
    // 0x2b8ecc: 0xae420000
    ctx->pc = 0x2b8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b8ed0: 0x82640001
    ctx->pc = 0x2b8ed0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2b8ed4: 0x831021
    ctx->pc = 0x2b8ed4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b8ed8: 0x90420000
    ctx->pc = 0x2b8ed8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8edc: 0x30420001
    ctx->pc = 0x2b8edcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2b8ee0: 0x24830020
    ctx->pc = 0x2b8ee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b8ee4: 0x62200b
    ctx->pc = 0x2b8ee4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b8ee8: 0x24020078
    ctx->pc = 0x2b8ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x2b8eec: 0x1482000b
    ctx->pc = 0x2B8EECu;
    {
        const bool branch_taken_0x2b8eec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B8EF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8eec) {
            ctx->pc = 0x2B8F1Cu;
            goto label_2b8f1c;
        }
    }
    ctx->pc = 0x2B8EF4u;
    // 0x2b8ef4: 0x27a500a0
    ctx->pc = 0x2b8ef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b8ef8: 0xc0bf932
    ctx->pc = 0x2B8EF8u;
    SET_GPR_U32(ctx, 31, 0x2B8F00u);
    ctx->pc = 0x2B8EFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FE4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strtol_0x2fe4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F00u; }
    }
    if (ctx->pc != 0x2B8F00u) { return; }
    ctx->pc = 0x2B8F00u;
    // 0x2b8f00: 0x2103c
    ctx->pc = 0x2b8f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b8f04: 0x2103f
    ctx->pc = 0x2b8f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b8f08: 0xae420010
    ctx->pc = 0x2b8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2b8f0c: 0x26230001
    ctx->pc = 0x2b8f0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b8f10: 0x8fa200a0
    ctx->pc = 0x2b8f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8f14: 0x104301a9
    ctx->pc = 0x2B8F14u;
    {
        const bool branch_taken_0x2b8f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2B8F18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f14) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B8F1Cu;
label_2b8f1c:
    // 0x2b8f1c: 0x27a500a0
    ctx->pc = 0x2b8f1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b8f20: 0xc0bf932
    ctx->pc = 0x2B8F20u;
    SET_GPR_U32(ctx, 31, 0x2B8F28u);
    ctx->pc = 0x2B8F24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2FE4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strtol_0x2fe4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F28u; }
    }
    if (ctx->pc != 0x2B8F28u) { return; }
    ctx->pc = 0x2B8F28u;
    // 0x2b8f28: 0x2103c
    ctx->pc = 0x2b8f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b8f2c: 0x2103f
    ctx->pc = 0x2b8f2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2b8f30: 0xae420010
    ctx->pc = 0x2b8f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2b8f34: 0x26230001
    ctx->pc = 0x2b8f34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b8f38: 0x8fa200a0
    ctx->pc = 0x2b8f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8f3c: 0x1043019f
    ctx->pc = 0x2B8F3Cu;
    {
        const bool branch_taken_0x2b8f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2B8F40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8f3c) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B8F44u;
    // 0x2b8f44: 0xae420000
    ctx->pc = 0x2b8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b8f48: 0x260202d
    ctx->pc = 0x2b8f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8f4c: 0xc0bf88e
    ctx->pc = 0x2B8F4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8F54u);
    ctx->pc = 0x2B8F50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2FE238u;
    {
        const uint32_t __entryPc = ctx->pc;
        strtod_0x2fe238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8F54u; }
    }
    if (ctx->pc != 0x2B8F54u) { return; }
    ctx->pc = 0x2B8F54u;
    // 0x2b8f54: 0xe6400010
    ctx->pc = 0x2b8f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2b8f58: 0x26230001
    ctx->pc = 0x2b8f58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b8f5c: 0x8fa200a0
    ctx->pc = 0x2b8f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8f60: 0x10430197
    ctx->pc = 0x2B8F60u;
    {
        const bool branch_taken_0x2b8f60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2B8F64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b8f60) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B8F68u;
label_2b8f68:
    // 0x2b8f68: 0x82630000
    ctx->pc = 0x2b8f68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b8f6c: 0x3c02003c
    ctx->pc = 0x2b8f6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b8f70: 0x2442a781
    ctx->pc = 0x2b8f70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x2b8f74: 0x621021
    ctx->pc = 0x2b8f74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8f78: 0x90420000
    ctx->pc = 0x2b8f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8f7c: 0x30420003
    ctx->pc = 0x2b8f7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2b8f80: 0x54400005
    ctx->pc = 0x2B8F80u;
    {
        const bool branch_taken_0x2b8f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b8f80) {
            ctx->pc = 0x2B8F84u;
            SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->pc = 0x2B8F98u;
            goto label_2b8f98;
        }
    }
    ctx->pc = 0x2B8F88u;
    // 0x2b8f88: 0x2402005f
    ctx->pc = 0x2b8f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
    // 0x2b8f8c: 0x14620009
    ctx->pc = 0x2B8F8Cu;
    {
        const bool branch_taken_0x2b8f8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B8F90u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8f8c) {
            ctx->pc = 0x2B8FB4u;
            goto label_2b8fb4;
        }
    }
    ctx->pc = 0x2B8F94u;
    // 0x2b8f94: 0x82300001
    ctx->pc = 0x2b8f94u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2b8f98:
    // 0x2b8f98: 0xa2200001
    ctx->pc = 0x2b8f98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8f9c: 0x240202d
    ctx->pc = 0x2b8f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fa0: 0x2a0282d
    ctx->pc = 0x2b8fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fa4: 0xc0adf5e
    ctx->pc = 0x2B8FA4u;
    SET_GPR_U32(ctx, 31, 0x2B8FACu);
    ctx->pc = 0x2B8FA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalGetAddr_0x2b7d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FACu; }
    }
    if (ctx->pc != 0x2B8FACu) { return; }
    ctx->pc = 0x2B8FACu;
    // 0x2b8fac: 0x10000183
    ctx->pc = 0x2B8FACu;
    {
        const bool branch_taken_0x2b8fac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8FB0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x2b8fac) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B8FB4u;
label_2b8fb4:
    // 0x2b8fb4: 0x260282d
    ctx->pc = 0x2b8fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fb8: 0x220302d
    ctx->pc = 0x2b8fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fbc: 0x382d
    ctx->pc = 0x2b8fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fc0: 0x402d
    ctx->pc = 0x2b8fc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8fc4: 0x3c09003b
    ctx->pc = 0x2b8fc4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)59 << 16));
    // 0x2b8fc8: 0xc0adee0
    ctx->pc = 0x2B8FC8u;
    SET_GPR_U32(ctx, 31, 0x2B8FD0u);
    ctx->pc = 0x2B8FCCu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 21824));
    ctx->pc = 0x2B7B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDB_0x2b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FD0u; }
    }
    if (ctx->pc != 0x2B8FD0u) { return; }
    ctx->pc = 0x2B8FD0u;
    // 0x2b8fd0: 0x10000179
    ctx->pc = 0x2B8FD0u;
    {
        const bool branch_taken_0x2b8fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8FD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b8fd0) {
            ctx->pc = 0x2B95B8u;
            goto label_2b95b8;
        }
    }
    ctx->pc = 0x2B8FD8u;
label_2b8fd8:
    // 0x2b8fd8: 0x10400034
    ctx->pc = 0x2B8FD8u;
    {
        const bool branch_taken_0x2b8fd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B8FDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b8fd8) {
            ctx->pc = 0x2B90ACu;
            goto label_2b90ac;
        }
    }
    ctx->pc = 0x2B8FE0u;
    // 0x2b8fe0: 0x92830007
    ctx->pc = 0x2b8fe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x2b8fe4: 0x14620014
    ctx->pc = 0x2B8FE4u;
    {
        const bool branch_taken_0x2b8fe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B8FE8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b8fe4) {
            ctx->pc = 0x2B9038u;
            goto label_2b9038;
        }
    }
    ctx->pc = 0x2B8FECu;
    // 0x2b8fec: 0x3c04003b
    ctx->pc = 0x2b8fecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b8ff0: 0x24845560
    ctx->pc = 0x2b8ff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21856));
    // 0x2b8ff4: 0xc0addb0
    ctx->pc = 0x2B8FF4u;
    SET_GPR_U32(ctx, 31, 0x2B8FFCu);
    ctx->pc = 0x2B8FF8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8FFCu; }
    }
    if (ctx->pc != 0x2B8FFCu) { return; }
    ctx->pc = 0x2B8FFCu;
    // 0x2b8ffc: 0x92820004
    ctx->pc = 0x2b8ffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b9000: 0x8fa600a0
    ctx->pc = 0x2b9000u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9004: 0x2c0202d
    ctx->pc = 0x2b9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9008: 0x2a0282d
    ctx->pc = 0x2b9008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b900c: 0x463021
    ctx->pc = 0x2b900cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b9010: 0x220382d
    ctx->pc = 0x2b9010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9014: 0xc0ae35e
    ctx->pc = 0x2B9014u;
    SET_GPR_U32(ctx, 31, 0x2B901Cu);
    ctx->pc = 0x2B9018u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B901Cu;
label_2b901c:
    // 0x2b901c: 0x240202d
    ctx->pc = 0x2b901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9020: 0x2c0282d
    ctx->pc = 0x2b9020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9024: 0x2c0302d
    ctx->pc = 0x2b9024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9028: 0xc0ad664
    ctx->pc = 0x2B9028u;
    SET_GPR_U32(ctx, 31, 0x2B9030u);
    ctx->pc = 0x2B902Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B5990u;
    {
        const uint32_t __entryPc = ctx->pc;
        doOp_0x2b5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9030u; }
    }
    if (ctx->pc != 0x2B9030u) { return; }
    ctx->pc = 0x2B9030u;
    // 0x2b9030: 0x10000163
    ctx->pc = 0x2B9030u;
    {
        const bool branch_taken_0x2b9030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9034u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9030) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B9038u;
label_2b9038:
    // 0x2b9038: 0x24845578
    ctx->pc = 0x2b9038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21880));
    // 0x2b903c: 0xc0addb0
    ctx->pc = 0x2B903Cu;
    SET_GPR_U32(ctx, 31, 0x2B9044u);
    ctx->pc = 0x2B9040u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9044u; }
    }
    if (ctx->pc != 0x2B9044u) { return; }
    ctx->pc = 0x2B9044u;
    // 0x2b9044: 0x8fa700a0
    ctx->pc = 0x2b9044u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9048: 0x2c0202d
    ctx->pc = 0x2b9048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b904c: 0x2a0282d
    ctx->pc = 0x2b904cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9050: 0x260302d
    ctx->pc = 0x2b9050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9054: 0x24e7ffff
    ctx->pc = 0x2b9054u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b9058: 0xc0ae35e
    ctx->pc = 0x2B9058u;
    SET_GPR_U32(ctx, 31, 0x2B9060u);
    ctx->pc = 0x2B905Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9060u;
label_2b9060:
    // 0x2b9060: 0x3c04003b
    ctx->pc = 0x2b9060u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b9064: 0x24845590
    ctx->pc = 0x2b9064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21904));
    // 0x2b9068: 0xc0addb0
    ctx->pc = 0x2B9068u;
    SET_GPR_U32(ctx, 31, 0x2B9070u);
    ctx->pc = 0x2B906Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9070u; }
    }
    if (ctx->pc != 0x2B9070u) { return; }
    ctx->pc = 0x2B9070u;
    // 0x2b9070: 0x92820004
    ctx->pc = 0x2b9070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2b9074: 0x8fa600a0
    ctx->pc = 0x2b9074u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9078: 0x2e0202d
    ctx->pc = 0x2b9078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b907c: 0x2a0282d
    ctx->pc = 0x2b907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9080: 0x463021
    ctx->pc = 0x2b9080u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b9084: 0x220382d
    ctx->pc = 0x2b9084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9088: 0xc0ae35e
    ctx->pc = 0x2B9088u;
    SET_GPR_U32(ctx, 31, 0x2B9090u);
    ctx->pc = 0x2B908Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9090u;
label_2b9090:
    // 0x2b9090: 0x240202d
    ctx->pc = 0x2b9090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9094: 0x2c0282d
    ctx->pc = 0x2b9094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9098: 0x2e0302d
    ctx->pc = 0x2b9098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b909c: 0xc0ad664
    ctx->pc = 0x2B909Cu;
    SET_GPR_U32(ctx, 31, 0x2B90A4u);
    ctx->pc = 0x2B90A0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B5990u;
    {
        const uint32_t __entryPc = ctx->pc;
        doOp_0x2b5990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B90A4u; }
    }
    if (ctx->pc != 0x2B90A4u) { return; }
    ctx->pc = 0x2B90A4u;
    // 0x2b90a4: 0x10000146
    ctx->pc = 0x2B90A4u;
    {
        const bool branch_taken_0x2b90a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B90A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b90a4) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B90ACu;
label_2b90ac:
    // 0x2b90ac: 0x82830008
    ctx->pc = 0x2b90acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2b90b0: 0x24020040
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b90b4: 0x106200e7
    ctx->pc = 0x2B90B4u;
    {
        const bool branch_taken_0x2b90b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B90B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 65));
        if (branch_taken_0x2b90b4) {
            ctx->pc = 0x2B9454u;
            goto label_2b9454;
        }
    }
    ctx->pc = 0x2B90BCu;
    // 0x2b90bc: 0x10400010
    ctx->pc = 0x2B90BCu;
    {
        const bool branch_taken_0x2b90bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B90C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x2b90bc) {
            ctx->pc = 0x2B9100u;
            goto label_2b9100;
        }
    }
    ctx->pc = 0x2B90C4u;
    // 0x2b90c4: 0x1062001c
    ctx->pc = 0x2B90C4u;
    {
        const bool branch_taken_0x2b90c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B90C8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 45));
        if (branch_taken_0x2b90c4) {
            ctx->pc = 0x2B9138u;
            goto label_2b9138;
        }
    }
    ctx->pc = 0x2B90CCu;
    // 0x2b90cc: 0x10400005
    ctx->pc = 0x2B90CCu;
    {
        const bool branch_taken_0x2b90cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B90D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x2b90cc) {
            ctx->pc = 0x2B90E4u;
            goto label_2b90e4;
        }
    }
    ctx->pc = 0x2B90D4u;
    // 0x2b90d4: 0x506200b0
    ctx->pc = 0x2B90D4u;
    {
        const bool branch_taken_0x2b90d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b90d4) {
            ctx->pc = 0x2B90D8u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B9398u;
            goto label_2b9398;
        }
    }
    ctx->pc = 0x2B90DCu;
    // 0x2b90dc: 0x10000120
    ctx->pc = 0x2B90DCu;
    {
        const bool branch_taken_0x2b90dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b90dc) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B90E4u;
label_2b90e4:
    // 0x2b90e4: 0x2402003d
    ctx->pc = 0x2b90e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 61));
    // 0x2b90e8: 0x10620054
    ctx->pc = 0x2B90E8u;
    {
        const bool branch_taken_0x2b90e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B90ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x2b90e8) {
            ctx->pc = 0x2B923Cu;
            goto label_2b923c;
        }
    }
    ctx->pc = 0x2B90F0u;
    // 0x2b90f0: 0x10620066
    ctx->pc = 0x2B90F0u;
    {
        const bool branch_taken_0x2b90f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B90F4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b90f0) {
            ctx->pc = 0x2B928Cu;
            goto label_2b928c;
        }
    }
    ctx->pc = 0x2B90F8u;
    // 0x2b90f8: 0x10000119
    ctx->pc = 0x2B90F8u;
    {
        const bool branch_taken_0x2b90f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b90f8) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9100u;
label_2b9100:
    // 0x2b9100: 0x24020071
    ctx->pc = 0x2b9100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 113));
    // 0x2b9104: 0x1062003d
    ctx->pc = 0x2B9104u;
    {
        const bool branch_taken_0x2b9104 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B9108u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 114));
        if (branch_taken_0x2b9104) {
            ctx->pc = 0x2B91FCu;
            goto label_2b91fc;
        }
    }
    ctx->pc = 0x2B910Cu;
    // 0x2b910c: 0x10400005
    ctx->pc = 0x2B910Cu;
    {
        const bool branch_taken_0x2b910c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 91));
        if (branch_taken_0x2b910c) {
            ctx->pc = 0x2B9124u;
            goto label_2b9124;
        }
    }
    ctx->pc = 0x2B9114u;
    // 0x2b9114: 0x506200ba
    ctx->pc = 0x2B9114u;
    {
        const bool branch_taken_0x2b9114 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b9114) {
            ctx->pc = 0x2B9118u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B9400u;
            goto label_2b9400;
        }
    }
    ctx->pc = 0x2B911Cu;
    // 0x2b911c: 0x10000110
    ctx->pc = 0x2B911Cu;
    {
        const bool branch_taken_0x2b911c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b911c) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9124u;
label_2b9124:
    // 0x2b9124: 0x2402007b
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 123));
    // 0x2b9128: 0x506200c0
    ctx->pc = 0x2B9128u;
    {
        const bool branch_taken_0x2b9128 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b9128) {
            ctx->pc = 0x2B912Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B942Cu;
            goto label_2b942c;
        }
    }
    ctx->pc = 0x2B9130u;
    // 0x2b9130: 0x1000010b
    ctx->pc = 0x2B9130u;
    {
        const bool branch_taken_0x2b9130 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b9130) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9138u;
label_2b9138:
    // 0x2b9138: 0x3c04003b
    ctx->pc = 0x2b9138u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b913c: 0x248455a8
    ctx->pc = 0x2b913cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21928));
    // 0x2b9140: 0xc0addb0
    ctx->pc = 0x2B9140u;
    SET_GPR_U32(ctx, 31, 0x2B9148u);
    ctx->pc = 0x2B9144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9148u; }
    }
    if (ctx->pc != 0x2B9148u) { return; }
    ctx->pc = 0x2B9148u;
    // 0x2b9148: 0x13c00014
    ctx->pc = 0x2B9148u;
    {
        const bool branch_taken_0x2b9148 = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B914Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2b9148) {
            ctx->pc = 0x2B919Cu;
            goto label_2b919c;
        }
    }
    ctx->pc = 0x2B9150u;
    // 0x2b9150: 0x240202d
    ctx->pc = 0x2b9150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9154: 0x2a0282d
    ctx->pc = 0x2b9154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9158: 0x260302d
    ctx->pc = 0x2b9158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b915c: 0x24e7ffff
    ctx->pc = 0x2b915cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b9160: 0xc0ae35e
    ctx->pc = 0x2B9160u;
    SET_GPR_U32(ctx, 31, 0x2B9168u);
    ctx->pc = 0x2B9164u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9168u;
label_2b9168:
    // 0x2b9168: 0x3c04003b
    ctx->pc = 0x2b9168u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b916c: 0x248455b8
    ctx->pc = 0x2b916cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21944));
    // 0x2b9170: 0xc0addb0
    ctx->pc = 0x2B9170u;
    SET_GPR_U32(ctx, 31, 0x2B9178u);
    ctx->pc = 0x2B9174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9178u; }
    }
    if (ctx->pc != 0x2B9178u) { return; }
    ctx->pc = 0x2B9178u;
    // 0x2b9178: 0x8fa600a0
    ctx->pc = 0x2b9178u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b917c: 0x240202d
    ctx->pc = 0x2b917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9180: 0x2a0282d
    ctx->pc = 0x2b9180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9184: 0x24c60001
    ctx->pc = 0x2b9184u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b9188: 0x220382d
    ctx->pc = 0x2b9188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b918c: 0xc0ae35e
    ctx->pc = 0x2B918Cu;
    SET_GPR_U32(ctx, 31, 0x2B9194u);
    ctx->pc = 0x2B9190u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9194u;
label_2b9194:
    // 0x2b9194: 0x1000010a
    ctx->pc = 0x2B9194u;
    {
        const bool branch_taken_0x2b9194 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9198u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9194) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B919Cu;
label_2b919c:
    // 0x2b919c: 0x3c020037
    ctx->pc = 0x2b919cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b91a0: 0x8c4220ac
    ctx->pc = 0x2b91a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b91a4: 0x8c420024
    ctx->pc = 0x2b91a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b91a8: 0x28420002
    ctx->pc = 0x2b91a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2b91ac: 0x10400004
    ctx->pc = 0x2B91ACu;
    {
        const bool branch_taken_0x2b91ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B91B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b91ac) {
            ctx->pc = 0x2B91C0u;
            goto label_2b91c0;
        }
    }
    ctx->pc = 0x2B91B4u;
    // 0x2b91b4: 0x8fa200a0
    ctx->pc = 0x2b91b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b91b8: 0xa0400000
    ctx->pc = 0x2b91b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b91bc: 0x8fa700a0
    ctx->pc = 0x2b91bcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b91c0:
    // 0x2b91c0: 0x2a0282d
    ctx->pc = 0x2b91c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91c4: 0x260302d
    ctx->pc = 0x2b91c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91c8: 0x24e7ffff
    ctx->pc = 0x2b91c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b91cc: 0xc0ae35e
    ctx->pc = 0x2B91CCu;
    SET_GPR_U32(ctx, 31, 0x2B91D4u);
    ctx->pc = 0x2B91D0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B91D4u;
label_2b91d4:
    // 0x2b91d4: 0x260202d
    ctx->pc = 0x2b91d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91d8: 0x220282d
    ctx->pc = 0x2b91d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91dc: 0xc0ade66
    ctx->pc = 0x2B91DCu;
    SET_GPR_U32(ctx, 31, 0x2B91E4u);
    ctx->pc = 0x2B91E0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7998u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBRet_0x2b7998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91E4u; }
    }
    if (ctx->pc != 0x2B91E4u) { return; }
    ctx->pc = 0x2B91E4u;
    // 0x2b91e4: 0x8fa300a0
    ctx->pc = 0x2b91e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b91e8: 0x2402002c
    ctx->pc = 0x2b91e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b91ec: 0xa0620000
    ctx->pc = 0x2b91ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b91f0: 0x8fa200a0
    ctx->pc = 0x2b91f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b91f4: 0x100000f6
    ctx->pc = 0x2B91F4u;
    {
        const bool branch_taken_0x2b91f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B91F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2b91f4) {
            ctx->pc = 0x2B95D0u;
            goto label_2b95d0;
        }
    }
    ctx->pc = 0x2B91FCu;
label_2b91fc:
    // 0x2b91fc: 0x82230000
    ctx->pc = 0x2b91fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9200: 0x24020027
    ctx->pc = 0x2b9200u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 39));
    // 0x2b9204: 0x10620003
    ctx->pc = 0x2B9204u;
    {
        const bool branch_taken_0x2b9204 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B9208u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 39));
        if (branch_taken_0x2b9204) {
            ctx->pc = 0x2B9214u;
            goto label_2b9214;
        }
    }
    ctx->pc = 0x2B920Cu;
    // 0x2b920c: 0x100000d4
    ctx->pc = 0x2B920Cu;
    {
        const bool branch_taken_0x2b920c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9210u;
        WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x2b920c) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9214u;
label_2b9214:
    // 0x2b9214: 0x24020040
    ctx->pc = 0x2b9214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b9218: 0xae420000
    ctx->pc = 0x2b9218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b921c: 0x8fa200a0
    ctx->pc = 0x2b921cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9220: 0x24420001
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b9224: 0xae420010
    ctx->pc = 0x2b9224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2b9228: 0x8fa200a0
    ctx->pc = 0x2b9228u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b922c: 0x2221023
    ctx->pc = 0x2b922cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b9230: 0x2442ffff
    ctx->pc = 0x2b9230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b9234: 0x100000e1
    ctx->pc = 0x2B9234u;
    {
        const bool branch_taken_0x2b9234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9238u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2b9234) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B923Cu;
label_2b923c:
    // 0x2b923c: 0x3c04003b
    ctx->pc = 0x2b923cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b9240: 0x248455c8
    ctx->pc = 0x2b9240u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21960));
    // 0x2b9244: 0xc0addb0
    ctx->pc = 0x2B9244u;
    SET_GPR_U32(ctx, 31, 0x2B924Cu);
    ctx->pc = 0x2B9248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B924Cu; }
    }
    if (ctx->pc != 0x2B924Cu) { return; }
    ctx->pc = 0x2B924Cu;
    // 0x2b924c: 0x8fa600a0
    ctx->pc = 0x2b924cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9250: 0x240202d
    ctx->pc = 0x2b9250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9254: 0x2a0282d
    ctx->pc = 0x2b9254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9258: 0x24c60001
    ctx->pc = 0x2b9258u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b925c: 0x220382d
    ctx->pc = 0x2b925cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9260: 0xc0ae35e
    ctx->pc = 0x2B9260u;
    SET_GPR_U32(ctx, 31, 0x2B9268u);
    ctx->pc = 0x2B9264u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9268u;
label_2b9268:
    // 0x2b9268: 0x8fa200a0
    ctx->pc = 0x2b9268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b926c: 0xa0400000
    ctx->pc = 0x2b926cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b9270: 0x260202d
    ctx->pc = 0x2b9270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9274: 0xc0ad2fc
    ctx->pc = 0x2B9274u;
    SET_GPR_U32(ctx, 31, 0x2B927Cu);
    ctx->pc = 0x2B9278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B927Cu; }
    }
    if (ctx->pc != 0x2B927Cu) { return; }
    ctx->pc = 0x2B927Cu;
    // 0x2b927c: 0x8fa300a0
    ctx->pc = 0x2b927cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9280: 0x2402003d
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 61));
    // 0x2b9284: 0x100000cd
    ctx->pc = 0x2B9284u;
    {
        const bool branch_taken_0x2b9284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9288u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2b9284) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B928Cu;
label_2b928c:
    // 0x2b928c: 0x248455d8
    ctx->pc = 0x2b928cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21976));
    // 0x2b9290: 0xc0addb0
    ctx->pc = 0x2B9290u;
    SET_GPR_U32(ctx, 31, 0x2B9298u);
    ctx->pc = 0x2B9294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9298u; }
    }
    if (ctx->pc != 0x2B9298u) { return; }
    ctx->pc = 0x2B9298u;
    // 0x2b9298: 0x8fa700a0
    ctx->pc = 0x2b9298u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b929c: 0x2c0202d
    ctx->pc = 0x2b929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b92a0: 0x2a0282d
    ctx->pc = 0x2b92a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b92a4: 0x260302d
    ctx->pc = 0x2b92a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b92a8: 0x24e7ffff
    ctx->pc = 0x2b92a8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b92ac: 0xc0ae35e
    ctx->pc = 0x2B92ACu;
    SET_GPR_U32(ctx, 31, 0x2B92B4u);
    ctx->pc = 0x2B92B0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B92B4u;
label_2b92b4:
    // 0x2b92b4: 0x8fa300a0
    ctx->pc = 0x2b92b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b92b8: 0x24700001
    ctx->pc = 0x2b92b8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b92bc: 0x211102b
    ctx->pc = 0x2b92bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b92c0: 0x1040000b
    ctx->pc = 0x2B92C0u;
    {
        const bool branch_taken_0x2b92c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B92C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
        if (branch_taken_0x2b92c0) {
            ctx->pc = 0x2B92F0u;
            goto label_2b92f0;
        }
    }
    ctx->pc = 0x2B92C8u;
    // 0x2b92c8: 0x80630001
    ctx->pc = 0x2b92c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2b92cc: 0x1062000e
    ctx->pc = 0x2B92CCu;
    {
        const bool branch_taken_0x2b92cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B92D0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 58));
        if (branch_taken_0x2b92cc) {
            ctx->pc = 0x2B9308u;
            goto label_2b9308;
        }
    }
    ctx->pc = 0x2B92D4u;
    // 0x2b92d4: 0x26100001
    ctx->pc = 0x2b92d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2b92d8:
    // 0x2b92d8: 0x211102b
    ctx->pc = 0x2b92d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2b92dc: 0x50400005
    ctx->pc = 0x2B92DCu;
    {
        const bool branch_taken_0x2b92dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b92dc) {
            ctx->pc = 0x2B92E0u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B92F4u;
            goto label_2b92f4;
        }
    }
    ctx->pc = 0x2B92E4u;
    // 0x2b92e4: 0x82020000
    ctx->pc = 0x2b92e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b92e8: 0x5443fffb
    ctx->pc = 0x2B92E8u;
    {
        const bool branch_taken_0x2b92e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b92e8) {
            ctx->pc = 0x2B92ECu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2B92D8u;
            goto label_2b92d8;
        }
    }
    ctx->pc = 0x2B92F0u;
label_2b92f0:
    // 0x2b92f0: 0x82030000
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2b92f4:
    // 0x2b92f4: 0x2402003a
    ctx->pc = 0x2b92f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x2b92f8: 0x10620004
    ctx->pc = 0x2B92F8u;
    {
        const bool branch_taken_0x2b92f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B92FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b92f8) {
            ctx->pc = 0x2B930Cu;
            goto label_2b930c;
        }
    }
    ctx->pc = 0x2B9300u;
    // 0x2b9300: 0x10000097
    ctx->pc = 0x2B9300u;
    {
        const bool branch_taken_0x2b9300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9304u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 58));
        if (branch_taken_0x2b9300) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9308u;
label_2b9308:
    // 0x2b9308: 0x202d
    ctx->pc = 0x2b9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b930c:
    // 0x2b930c: 0x260282d
    ctx->pc = 0x2b930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9310: 0x220302d
    ctx->pc = 0x2b9310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9314: 0x8fa700a0
    ctx->pc = 0x2b9314u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9318: 0x200402d
    ctx->pc = 0x2b9318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b931c: 0x3c09003b
    ctx->pc = 0x2b931cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)59 << 16));
    // 0x2b9320: 0xc0adee0
    ctx->pc = 0x2B9320u;
    SET_GPR_U32(ctx, 31, 0x2B9328u);
    ctx->pc = 0x2B9324u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 21992));
    ctx->pc = 0x2B7B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDB_0x2b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9328u; }
    }
    if (ctx->pc != 0x2B9328u) { return; }
    ctx->pc = 0x2B9328u;
    // 0x2b9328: 0xc0ad1a2
    ctx->pc = 0x2B9328u;
    SET_GPR_U32(ctx, 31, 0x2B9330u);
    ctx->pc = 0x2B932Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9330u; }
    }
    if (ctx->pc != 0x2B9330u) { return; }
    ctx->pc = 0x2B9330u;
    // 0x2b9330: 0x1040000d
    ctx->pc = 0x2B9330u;
    {
        const bool branch_taken_0x2b9330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9334u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9330) {
            ctx->pc = 0x2B9368u;
            goto label_2b9368;
        }
    }
    ctx->pc = 0x2B9338u;
    // 0x2b9338: 0x248455f8
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22008));
    // 0x2b933c: 0xc0addb0
    ctx->pc = 0x2B933Cu;
    SET_GPR_U32(ctx, 31, 0x2B9344u);
    ctx->pc = 0x2B9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9344u; }
    }
    if (ctx->pc != 0x2B9344u) { return; }
    ctx->pc = 0x2B9344u;
    // 0x2b9344: 0x8fa600a0
    ctx->pc = 0x2b9344u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9348: 0x240202d
    ctx->pc = 0x2b9348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b934c: 0x2a0282d
    ctx->pc = 0x2b934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9350: 0x24c60001
    ctx->pc = 0x2b9350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b9354: 0x2607ffff
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b9358: 0xc0ae35e
    ctx->pc = 0x2B9358u;
    SET_GPR_U32(ctx, 31, 0x2B9360u);
    ctx->pc = 0x2B935Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9360u;
label_2b9360:
    // 0x2b9360: 0x10000097
    ctx->pc = 0x2B9360u;
    {
        const bool branch_taken_0x2b9360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9364u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9360) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B9368u;
label_2b9368:
    // 0x2b9368: 0x3c04003b
    ctx->pc = 0x2b9368u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b936c: 0x24845610
    ctx->pc = 0x2b936cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22032));
    // 0x2b9370: 0xc0addb0
    ctx->pc = 0x2B9370u;
    SET_GPR_U32(ctx, 31, 0x2B9378u);
    ctx->pc = 0x2B9374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9378u; }
    }
    if (ctx->pc != 0x2B9378u) { return; }
    ctx->pc = 0x2B9378u;
    // 0x2b9378: 0x240202d
    ctx->pc = 0x2b9378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b937c: 0x2a0282d
    ctx->pc = 0x2b937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9380: 0x26060001
    ctx->pc = 0x2b9380u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b9384: 0x220382d
    ctx->pc = 0x2b9384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9388: 0xc0ae35e
    ctx->pc = 0x2B9388u;
    SET_GPR_U32(ctx, 31, 0x2B9390u);
    ctx->pc = 0x2B938Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B9390u;
label_2b9390:
    // 0x2b9390: 0x1000008b
    ctx->pc = 0x2B9390u;
    {
        const bool branch_taken_0x2b9390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9394u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9390) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B9398u;
label_2b9398:
    // 0x2b9398: 0x24020029
    ctx->pc = 0x2b9398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
    // 0x2b939c: 0x14620070
    ctx->pc = 0x2B939Cu;
    {
        const bool branch_taken_0x2b939c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B93A0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 41));
        if (branch_taken_0x2b939c) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B93A4u;
    // 0x2b93a4: 0x8fa200a0
    ctx->pc = 0x2b93a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b93a8: 0x1453000e
    ctx->pc = 0x2B93A8u;
    {
        const bool branch_taken_0x2b93a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x2B93ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b93a8) {
            ctx->pc = 0x2B93E4u;
            goto label_2b93e4;
        }
    }
    ctx->pc = 0x2B93B0u;
    // 0x2b93b0: 0x3c04003b
    ctx->pc = 0x2b93b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b93b4: 0x24845628
    ctx->pc = 0x2b93b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22056));
    // 0x2b93b8: 0xc0addb0
    ctx->pc = 0x2B93B8u;
    SET_GPR_U32(ctx, 31, 0x2B93C0u);
    ctx->pc = 0x2B93BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B76C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuEvalComment_0x2b76c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93C0u; }
    }
    if (ctx->pc != 0x2B93C0u) { return; }
    ctx->pc = 0x2B93C0u;
    // 0x2b93c0: 0x8fa600a0
    ctx->pc = 0x2b93c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b93c4: 0x240202d
    ctx->pc = 0x2b93c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93c8: 0x2a0282d
    ctx->pc = 0x2b93c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93cc: 0x24c60001
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b93d0: 0x2627ffff
    ctx->pc = 0x2b93d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2b93d4: 0xc0ae35e
    ctx->pc = 0x2B93D4u;
    SET_GPR_U32(ctx, 31, 0x2B93DCu);
    ctx->pc = 0x2B93D8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B8D78u;
    goto label_2b8d78;
    ctx->pc = 0x2B93DCu;
label_2b93dc:
    // 0x2b93dc: 0x10000078
    ctx->pc = 0x2B93DCu;
    {
        const bool branch_taken_0x2b93dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B93E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b93dc) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B93E4u;
label_2b93e4:
    // 0x2b93e4: 0x2a0282d
    ctx->pc = 0x2b93e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93e8: 0x260302d
    ctx->pc = 0x2b93e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b93ec: 0x8fa700a0
    ctx->pc = 0x2b93ecu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b93f0: 0xc0add26
    ctx->pc = 0x2B93F0u;
    SET_GPR_U32(ctx, 31, 0x2B93F8u);
    ctx->pc = 0x2B93F4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7498u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFunc_0x2b7498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93F8u; }
    }
    if (ctx->pc != 0x2B93F8u) { return; }
    ctx->pc = 0x2B93F8u;
    // 0x2b93f8: 0x10000071
    ctx->pc = 0x2B93F8u;
    {
        const bool branch_taken_0x2b93f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B93FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b93f8) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B9400u;
label_2b9400:
    // 0x2b9400: 0x2402005d
    ctx->pc = 0x2b9400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 93));
    // 0x2b9404: 0x14620056
    ctx->pc = 0x2B9404u;
    {
        const bool branch_taken_0x2b9404 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B9408u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 93));
        if (branch_taken_0x2b9404) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B940Cu;
    // 0x2b940c: 0x240202d
    ctx->pc = 0x2b940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9410: 0x2a0282d
    ctx->pc = 0x2b9410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9414: 0x260302d
    ctx->pc = 0x2b9414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9418: 0x8fa700a0
    ctx->pc = 0x2b9418u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b941c: 0xc0adfcc
    ctx->pc = 0x2B941Cu;
    SET_GPR_U32(ctx, 31, 0x2B9424u);
    ctx->pc = 0x2B9420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7F30u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalMemAccess_0x2b7f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9424u; }
    }
    if (ctx->pc != 0x2B9424u) { return; }
    ctx->pc = 0x2B9424u;
    // 0x2b9424: 0x10000066
    ctx->pc = 0x2B9424u;
    {
        const bool branch_taken_0x2b9424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9428u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9424) {
            ctx->pc = 0x2B95C0u;
            goto label_2b95c0;
        }
    }
    ctx->pc = 0x2B942Cu;
label_2b942c:
    // 0x2b942c: 0x2402007d
    ctx->pc = 0x2b942cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 125));
    // 0x2b9430: 0x1462004b
    ctx->pc = 0x2B9430u;
    {
        const bool branch_taken_0x2b9430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B9434u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 125));
        if (branch_taken_0x2b9430) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9438u;
    // 0x2b9438: 0xa2200000
    ctx->pc = 0x2b9438u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b943c: 0x240202d
    ctx->pc = 0x2b943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9440: 0xc0ad344
    ctx->pc = 0x2B9440u;
    SET_GPR_U32(ctx, 31, 0x2B9448u);
    ctx->pc = 0x2B9444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x2B4D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalGetAssign_0x2b4d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9448u; }
    }
    if (ctx->pc != 0x2B9448u) { return; }
    ctx->pc = 0x2B9448u;
    // 0x2b9448: 0x2402007d
    ctx->pc = 0x2b9448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 125));
    // 0x2b944c: 0x1000005b
    ctx->pc = 0x2B944Cu;
    {
        const bool branch_taken_0x2b944c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9450u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2b944c) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B9454u;
label_2b9454:
    // 0x2b9454: 0x8fa200a0
    ctx->pc = 0x2b9454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9458: 0x16620041
    ctx->pc = 0x2B9458u;
    {
        const bool branch_taken_0x2b9458 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B945Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2b9458) {
            ctx->pc = 0x2B9560u;
            goto label_2b9560;
        }
    }
    ctx->pc = 0x2B9460u;
    // 0x2b9460: 0x8fa400a0
    ctx->pc = 0x2b9460u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b9464: 0x80830001
    ctx->pc = 0x2b9464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2b9468: 0x24020040
    ctx->pc = 0x2b9468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2b946c: 0x14620004
    ctx->pc = 0x2B946Cu;
    {
        const bool branch_taken_0x2b946c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B9470u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2b946c) {
            ctx->pc = 0x2B9480u;
            goto label_2b9480;
        }
    }
    ctx->pc = 0x2B9474u;
    // 0x2b9474: 0x24820001
    ctx->pc = 0x2b9474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b9478: 0xafa200a0
    ctx->pc = 0x2b9478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2b947c: 0x8fa500a0
    ctx->pc = 0x2b947cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9480:
    // 0x2b9480: 0x80a40001
    ctx->pc = 0x2b9480u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b9484: 0x3c02003c
    ctx->pc = 0x2b9484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b9488: 0x2442a781
    ctx->pc = 0x2b9488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x2b948c: 0x821021
    ctx->pc = 0x2b948cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b9490: 0x90420000
    ctx->pc = 0x2b9490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b9494: 0x30420002
    ctx->pc = 0x2b9494u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2b9498: 0x2483ffe0
    ctx->pc = 0x2b9498u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2b949c: 0x62200b
    ctx->pc = 0x2b949cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b94a0: 0x24020051
    ctx->pc = 0x2b94a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 81));
    // 0x2b94a4: 0x14820009
    ctx->pc = 0x2B94A4u;
    {
        const bool branch_taken_0x2b94a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B94A8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2b94a4) {
            ctx->pc = 0x2B94CCu;
            goto label_2b94cc;
        }
    }
    ctx->pc = 0x2B94ACu;
    // 0x2b94ac: 0x24a20001
    ctx->pc = 0x2b94acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b94b0: 0x14510007
    ctx->pc = 0x2B94B0u;
    {
        const bool branch_taken_0x2b94b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x2B94B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b94b0) {
            ctx->pc = 0x2B94D0u;
            goto label_2b94d0;
        }
    }
    ctx->pc = 0x2B94B8u;
    // 0x2b94b8: 0x8ea20004
    ctx->pc = 0x2b94b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2b94bc: 0x8c420254
    ctx->pc = 0x2b94bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x2b94c0: 0xae420010
    ctx->pc = 0x2b94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x2b94c4: 0xae400000
    ctx->pc = 0x2b94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2b94c8: 0x8fa600a0
    ctx->pc = 0x2b94c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b94cc:
    // 0x2b94cc: 0x240202d
    ctx->pc = 0x2b94ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b94d0:
    // 0x2b94d0: 0x2a0282d
    ctx->pc = 0x2b94d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b94d4: 0x24c60001
    ctx->pc = 0x2b94d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b94d8: 0xc0ae18c
    ctx->pc = 0x2B94D8u;
    SET_GPR_U32(ctx, 31, 0x2B94E0u);
    ctx->pc = 0x2B94DCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B8630u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalRegValue_0x2b8630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94E0u; }
    }
    if (ctx->pc != 0x2B94E0u) { return; }
    ctx->pc = 0x2B94E0u;
    // 0x2b94e0: 0x8fa200a0
    ctx->pc = 0x2b94e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b94e4: 0x12620035
    ctx->pc = 0x2B94E4u;
    {
        const bool branch_taken_0x2b94e4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B94E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b94e4) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B94ECu;
    // 0x2b94ec: 0x8e430000
    ctx->pc = 0x2b94ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b94f0: 0x54620005
    ctx->pc = 0x2B94F0u;
    {
        const bool branch_taken_0x2b94f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b94f0) {
            ctx->pc = 0x2B94F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2B9508u;
            goto label_2b9508;
        }
    }
    ctx->pc = 0x2B94F8u;
    // 0x2b94f8: 0x8e420010
    ctx->pc = 0x2b94f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b94fc: 0x21100
    ctx->pc = 0x2b94fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b9500: 0x1000002e
    ctx->pc = 0x2B9500u;
    {
        const bool branch_taken_0x2b9500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9504u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b9500) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B9508u;
label_2b9508:
    // 0x2b9508: 0x24100020
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b950c: 0x1050002b
    ctx->pc = 0x2B950Cu;
    {
        const bool branch_taken_0x2b950c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x2B9510u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b950c) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B9514u;
    // 0x2b9514: 0x24844650
    ctx->pc = 0x2b9514u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b9518: 0x24050020
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b951c: 0x3c06003b
    ctx->pc = 0x2b951cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b9520: 0x24c60d80
    ctx->pc = 0x2b9520u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b9524: 0xc0ad0d6
    ctx->pc = 0x2B9524u;
    SET_GPR_U32(ctx, 31, 0x2B952Cu);
    ctx->pc = 0x2B9528u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B952Cu; }
    }
    if (ctx->pc != 0x2B952Cu) { return; }
    ctx->pc = 0x2B952Cu;
    // 0x2b952c: 0x3c04003b
    ctx->pc = 0x2b952cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b9530: 0xc0b4a34
    ctx->pc = 0x2B9530u;
    SET_GPR_U32(ctx, 31, 0x2B9538u);
    ctx->pc = 0x2B9534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22072));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9538u; }
    }
    if (ctx->pc != 0x2B9538u) { return; }
    ctx->pc = 0x2B9538u;
    // 0x2b9538: 0x3c04003b
    ctx->pc = 0x2b9538u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b953c: 0xc0b4a34
    ctx->pc = 0x2B953Cu;
    SET_GPR_U32(ctx, 31, 0x2B9544u);
    ctx->pc = 0x2B9540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9544u; }
    }
    if (ctx->pc != 0x2B9544u) { return; }
    ctx->pc = 0x2B9544u;
    // 0x2b9544: 0x3c020037
    ctx->pc = 0x2b9544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b9548: 0x8c4320ac
    ctx->pc = 0x2b9548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b954c: 0x8c620048
    ctx->pc = 0x2b954cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b9550: 0x34420001
    ctx->pc = 0x2b9550u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b9554: 0xac620048
    ctx->pc = 0x2b9554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2b9558: 0x10000018
    ctx->pc = 0x2B9558u;
    {
        const bool branch_taken_0x2b9558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B955Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x2b9558) {
            ctx->pc = 0x2B95BCu;
            goto label_2b95bc;
        }
    }
    ctx->pc = 0x2B9560u;
label_2b9560:
    // 0x2b9560: 0x12000014
    ctx->pc = 0x2B9560u;
    {
        const bool branch_taken_0x2b9560 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9564u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b9560) {
            ctx->pc = 0x2B95B4u;
            goto label_2b95b4;
        }
    }
    ctx->pc = 0x2B9568u;
    // 0x2b9568: 0x24844650
    ctx->pc = 0x2b9568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b956c: 0x24050020
    ctx->pc = 0x2b956cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b9570: 0x3c06003b
    ctx->pc = 0x2b9570u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b9574: 0x24c60d80
    ctx->pc = 0x2b9574u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b9578: 0xc0ad0d6
    ctx->pc = 0x2B9578u;
    SET_GPR_U32(ctx, 31, 0x2B9580u);
    ctx->pc = 0x2B957Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9580u; }
    }
    if (ctx->pc != 0x2B9580u) { return; }
    ctx->pc = 0x2B9580u;
    // 0x2b9580: 0x3c04003b
    ctx->pc = 0x2b9580u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b9584: 0x24845658
    ctx->pc = 0x2b9584u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22104));
    // 0x2b9588: 0x82850008
    ctx->pc = 0x2b9588u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2b958c: 0xc0b4a34
    ctx->pc = 0x2B958Cu;
    SET_GPR_U32(ctx, 31, 0x2B9594u);
    ctx->pc = 0x2B9590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9594u; }
    }
    if (ctx->pc != 0x2B9594u) { return; }
    ctx->pc = 0x2B9594u;
    // 0x2b9594: 0x3c04003b
    ctx->pc = 0x2b9594u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b9598: 0xc0b4a34
    ctx->pc = 0x2B9598u;
    SET_GPR_U32(ctx, 31, 0x2B95A0u);
    ctx->pc = 0x2B959Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B95A0u; }
    }
    if (ctx->pc != 0x2B95A0u) { return; }
    ctx->pc = 0x2B95A0u;
    // 0x2b95a0: 0x3c020037
    ctx->pc = 0x2b95a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b95a4: 0x8c4320ac
    ctx->pc = 0x2b95a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b95a8: 0x8c620048
    ctx->pc = 0x2b95a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b95ac: 0x34420001
    ctx->pc = 0x2b95acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b95b0: 0xac620048
    ctx->pc = 0x2b95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b95b4:
    // 0x2b95b4: 0x24020020
    ctx->pc = 0x2b95b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b95b8:
    // 0x2b95b8: 0xae420000
    ctx->pc = 0x2b95b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2b95bc:
    // 0x2b95bc: 0x260202d
    ctx->pc = 0x2b95bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b95c0:
    // 0x2b95c0: 0x220282d
    ctx->pc = 0x2b95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b95c4: 0xc0ade66
    ctx->pc = 0x2B95C4u;
    SET_GPR_U32(ctx, 31, 0x2B95CCu);
    ctx->pc = 0x2B95C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B7998u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBRet_0x2b7998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B95CCu; }
    }
    if (ctx->pc != 0x2B95CCu) { return; }
    ctx->pc = 0x2B95CCu;
    // 0x2b95cc: 0x102d
    ctx->pc = 0x2b95ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b95d0:
    // 0x2b95d0: 0xdfbf0140
    ctx->pc = 0x2b95d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2b95d4: 0xdfbe0130
    ctx->pc = 0x2b95d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b95d8: 0xdfb70120
    ctx->pc = 0x2b95d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b95dc: 0xdfb60110
    ctx->pc = 0x2b95dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b95e0: 0xdfb50100
    ctx->pc = 0x2b95e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b95e4: 0xdfb400f0
    ctx->pc = 0x2b95e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b95e8: 0xdfb300e0
    ctx->pc = 0x2b95e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b95ec: 0xdfb200d0
    ctx->pc = 0x2b95ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b95f0: 0xdfb100c0
    ctx->pc = 0x2b95f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b95f4: 0xdfb000b0
    ctx->pc = 0x2b95f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b95f8: 0x3e00008
    ctx->pc = 0x2B95F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B95FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B8D78u: goto label_2b8d78;
            case 0x2B8E08u: goto label_2b8e08;
            case 0x2B8E28u: goto label_2b8e28;
            case 0x2B8E74u: goto label_2b8e74;
            case 0x2B8F1Cu: goto label_2b8f1c;
            case 0x2B8F68u: goto label_2b8f68;
            case 0x2B8F98u: goto label_2b8f98;
            case 0x2B8FB4u: goto label_2b8fb4;
            case 0x2B8FD8u: goto label_2b8fd8;
            case 0x2B901Cu: goto label_2b901c;
            case 0x2B9038u: goto label_2b9038;
            case 0x2B9060u: goto label_2b9060;
            case 0x2B9090u: goto label_2b9090;
            case 0x2B90ACu: goto label_2b90ac;
            case 0x2B90E4u: goto label_2b90e4;
            case 0x2B9100u: goto label_2b9100;
            case 0x2B9124u: goto label_2b9124;
            case 0x2B9138u: goto label_2b9138;
            case 0x2B9168u: goto label_2b9168;
            case 0x2B9194u: goto label_2b9194;
            case 0x2B919Cu: goto label_2b919c;
            case 0x2B91C0u: goto label_2b91c0;
            case 0x2B91D4u: goto label_2b91d4;
            case 0x2B91FCu: goto label_2b91fc;
            case 0x2B9214u: goto label_2b9214;
            case 0x2B923Cu: goto label_2b923c;
            case 0x2B9268u: goto label_2b9268;
            case 0x2B928Cu: goto label_2b928c;
            case 0x2B92B4u: goto label_2b92b4;
            case 0x2B92D8u: goto label_2b92d8;
            case 0x2B92F0u: goto label_2b92f0;
            case 0x2B92F4u: goto label_2b92f4;
            case 0x2B9308u: goto label_2b9308;
            case 0x2B930Cu: goto label_2b930c;
            case 0x2B9360u: goto label_2b9360;
            case 0x2B9368u: goto label_2b9368;
            case 0x2B9390u: goto label_2b9390;
            case 0x2B9398u: goto label_2b9398;
            case 0x2B93DCu: goto label_2b93dc;
            case 0x2B93E4u: goto label_2b93e4;
            case 0x2B9400u: goto label_2b9400;
            case 0x2B942Cu: goto label_2b942c;
            case 0x2B9454u: goto label_2b9454;
            case 0x2B9480u: goto label_2b9480;
            case 0x2B94CCu: goto label_2b94cc;
            case 0x2B94D0u: goto label_2b94d0;
            case 0x2B9508u: goto label_2b9508;
            case 0x2B9560u: goto label_2b9560;
            case 0x2B95B4u: goto label_2b95b4;
            case 0x2B95B8u: goto label_2b95b8;
            case 0x2B95BCu: goto label_2b95bc;
            case 0x2B95C0u: goto label_2b95c0;
            case 0x2B95D0u: goto label_2b95d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B9600u;
}
