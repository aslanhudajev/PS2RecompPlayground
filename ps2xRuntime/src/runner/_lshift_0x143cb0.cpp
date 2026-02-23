#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lshift
// Address: 0x143cb0 - 0x143e28
void _lshift_0x143cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lshift");


    ctx->pc = 0x143cb0u;

    // 0x143cb0: 0x27bdff80
    ctx->pc = 0x143cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x143cb4: 0xffb60060
    ctx->pc = 0x143cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x143cb8: 0xffb40040
    ctx->pc = 0x143cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x143cbc: 0x80b02d
    ctx->pc = 0x143cbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cc0: 0xffb10010
    ctx->pc = 0x143cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x143cc4: 0x6a143
    ctx->pc = 0x143cc4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x143cc8: 0xffb00000
    ctx->pc = 0x143cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143ccc: 0xa0882d
    ctx->pc = 0x143cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cd0: 0xffbf0070
    ctx->pc = 0x143cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x143cd4: 0xffb50050
    ctx->pc = 0x143cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x143cd8: 0xffb30030
    ctx->pc = 0x143cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x143cdc: 0xffb20020
    ctx->pc = 0x143cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x143ce0: 0x8e230010
    ctx->pc = 0x143ce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x143ce4: 0x8e270008
    ctx->pc = 0x143ce4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x143ce8: 0x2831821
    ctx->pc = 0x143ce8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x143cec: 0x24700001
    ctx->pc = 0x143cecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1));
    // 0x143cf0: 0xf0102a
    ctx->pc = 0x143cf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x143cf4: 0x1040000d
    ctx->pc = 0x143CF4u;
    {
        const bool branch_taken_0x143cf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x143CF8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x143cf4) {
            ctx->pc = 0x143D2Cu;
            goto label_143d2c;
        }
    }
    ctx->pc = 0x143CFCu;
    // 0x143cfc: 0x30d3001f
    ctx->pc = 0x143cfcu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 31));
    // 0x143d00: 0x26320014
    ctx->pc = 0x143d00u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 20));
    // 0x143d04: 0x0
    ctx->pc = 0x143d04u;
    // NOP
label_143d08:
    // 0x143d08: 0x73840
    ctx->pc = 0x143d08u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x143d0c: 0x24a50001
    ctx->pc = 0x143d0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x143d10: 0xf0102a
    ctx->pc = 0x143d10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x143d14: 0x0
    ctx->pc = 0x143d14u;
    // NOP
    // 0x143d18: 0x0
    ctx->pc = 0x143d18u;
    // NOP
    // 0x143d1c: 0x1440fffa
    ctx->pc = 0x143D1Cu;
    {
        const bool branch_taken_0x143d1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143d1c) {
            ctx->pc = 0x143D08u;
            goto label_143d08;
        }
    }
    ctx->pc = 0x143D24u;
    // 0x143d24: 0x10000003
    ctx->pc = 0x143D24u;
    {
        const bool branch_taken_0x143d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x143d24) {
            ctx->pc = 0x143D34u;
            goto label_143d34;
        }
    }
    ctx->pc = 0x143D2Cu;
label_143d2c:
    // 0x143d2c: 0x30d3001f
    ctx->pc = 0x143d2cu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 31));
    // 0x143d30: 0x26320014
    ctx->pc = 0x143d30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 20));
label_143d34:
    // 0x143d34: 0xc050d32
    ctx->pc = 0x143D34u;
    SET_GPR_U32(ctx, 31, 0x143D3Cu);
    ctx->pc = 0x143D38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D3Cu; }
        else if (ctx->pc != 0x143D3Cu) { ctx->pc = 0x143D3Cu; }
    }
    if (ctx->pc != 0x143D3Cu) { return; }
    ctx->pc = 0x143D3Cu;
    // 0x143d3c: 0x40a82d
    ctx->pc = 0x143d3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d40: 0x1a80000a
    ctx->pc = 0x143D40u;
    {
        const bool branch_taken_0x143d40 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x143D44u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 20));
        if (branch_taken_0x143d40) {
            ctx->pc = 0x143D6Cu;
            goto label_143d6c;
        }
    }
    ctx->pc = 0x143D48u;
    // 0x143d48: 0x280382d
    ctx->pc = 0x143d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d4c: 0x0
    ctx->pc = 0x143d4cu;
    // NOP
label_143d50:
    // 0x143d50: 0xacc00000
    ctx->pc = 0x143d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x143d54: 0x24e7ffff
    ctx->pc = 0x143d54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x143d58: 0x24c60004
    ctx->pc = 0x143d58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x143d5c: 0x0
    ctx->pc = 0x143d5cu;
    // NOP
    // 0x143d60: 0x0
    ctx->pc = 0x143d60u;
    // NOP
    // 0x143d64: 0x14e0fffa
    ctx->pc = 0x143D64u;
    {
        const bool branch_taken_0x143d64 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x143d64) {
            ctx->pc = 0x143D50u;
            goto label_143d50;
        }
    }
    ctx->pc = 0x143D6Cu;
label_143d6c:
    // 0x143d6c: 0x8e220010
    ctx->pc = 0x143d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x143d70: 0x240202d
    ctx->pc = 0x143d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d74: 0x21080
    ctx->pc = 0x143d74u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x143d78: 0x12600013
    ctx->pc = 0x143D78u;
    {
        const bool branch_taken_0x143d78 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x143D7Cu;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x143d78) {
            ctx->pc = 0x143DC8u;
            goto label_143dc8;
        }
    }
    ctx->pc = 0x143D80u;
    // 0x143d80: 0x24020020
    ctx->pc = 0x143d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x143d84: 0x182d
    ctx->pc = 0x143d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d88: 0x532823
    ctx->pc = 0x143d88u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x143d8c: 0x26080001
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 1));
label_143d90:
    // 0x143d90: 0x8c820000
    ctx->pc = 0x143d90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143d94: 0x2621004
    ctx->pc = 0x143d94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x143d98: 0x431025
    ctx->pc = 0x143d98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143d9c: 0xacc20000
    ctx->pc = 0x143d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x143da0: 0x24c60004
    ctx->pc = 0x143da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x143da4: 0x8c830000
    ctx->pc = 0x143da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143da8: 0x24840004
    ctx->pc = 0x143da8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x143dac: 0x87102b
    ctx->pc = 0x143dacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x143db0: 0x1440fff7
    ctx->pc = 0x143DB0u;
    {
        const bool branch_taken_0x143db0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x143DB4u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x143db0) {
            ctx->pc = 0x143D90u;
            goto label_143d90;
        }
    }
    ctx->pc = 0x143DB8u;
    // 0x143db8: 0x103800b
    ctx->pc = 0x143db8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 8));
    // 0x143dbc: 0xacc30000
    ctx->pc = 0x143dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x143dc0: 0x1000000a
    ctx->pc = 0x143DC0u;
    {
        const bool branch_taken_0x143dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x143DC4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x143dc0) {
            ctx->pc = 0x143DECu;
            goto label_143dec;
        }
    }
    ctx->pc = 0x143DC8u;
label_143dc8:
    // 0x143dc8: 0x2605ffff
    ctx->pc = 0x143dc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x143dcc: 0x0
    ctx->pc = 0x143dccu;
    // NOP
label_143dd0:
    // 0x143dd0: 0x8c820000
    ctx->pc = 0x143dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143dd4: 0x24840004
    ctx->pc = 0x143dd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x143dd8: 0xacc20000
    ctx->pc = 0x143dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x143ddc: 0x87182b
    ctx->pc = 0x143ddcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x143de0: 0x24c60004
    ctx->pc = 0x143de0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x143de4: 0x1460fffa
    ctx->pc = 0x143DE4u;
    {
        const bool branch_taken_0x143de4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x143de4) {
            ctx->pc = 0x143DD0u;
            goto label_143dd0;
        }
    }
    ctx->pc = 0x143DECu;
label_143dec:
    // 0x143dec: 0xaea50010
    ctx->pc = 0x143decu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x143df0: 0x2c0202d
    ctx->pc = 0x143df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143df4: 0xc050d5c
    ctx->pc = 0x143DF4u;
    SET_GPR_U32(ctx, 31, 0x143DFCu);
    ctx->pc = 0x143DF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DFCu; }
        else if (ctx->pc != 0x143DFCu) { ctx->pc = 0x143DFCu; }
    }
    if (ctx->pc != 0x143DFCu) { return; }
    ctx->pc = 0x143DFCu;
    // 0x143dfc: 0x2a0102d
    ctx->pc = 0x143dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e00: 0xdfbf0070
    ctx->pc = 0x143e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143e04: 0xdfb60060
    ctx->pc = 0x143e04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143e08: 0xdfb50050
    ctx->pc = 0x143e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143e0c: 0xdfb40040
    ctx->pc = 0x143e0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143e10: 0xdfb30030
    ctx->pc = 0x143e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143e14: 0xdfb20020
    ctx->pc = 0x143e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143e18: 0xdfb10010
    ctx->pc = 0x143e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143e1c: 0xdfb00000
    ctx->pc = 0x143e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143e20: 0x3e00008
    ctx->pc = 0x143E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143E24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143D08u: goto label_143d08;
            case 0x143D2Cu: goto label_143d2c;
            case 0x143D34u: goto label_143d34;
            case 0x143D50u: goto label_143d50;
            case 0x143D6Cu: goto label_143d6c;
            case 0x143D90u: goto label_143d90;
            case 0x143DC8u: goto label_143dc8;
            case 0x143DD0u: goto label_143dd0;
            case 0x143DECu: goto label_143dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143E28u;
}
