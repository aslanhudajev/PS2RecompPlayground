#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalAssign
// Address: 0x2b4bf0 - 0x2b4d0c
void evalAssign_0x2b4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4bf0u;

    // 0x2b4bf0: 0x27bdffc0
    ctx->pc = 0x2b4bf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4bf4: 0xffbf0030
    ctx->pc = 0x2b4bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b4bf8: 0xffb20020
    ctx->pc = 0x2b4bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b4bfc: 0xffb10010
    ctx->pc = 0x2b4bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b4c00: 0xffb00000
    ctx->pc = 0x2b4c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4c04: 0x80802d
    ctx->pc = 0x2b4c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c08: 0xc0ad26c
    ctx->pc = 0x2B4C08u;
    SET_GPR_U32(ctx, 31, 0x2B4C10u);
    ctx->pc = 0x2B4C0Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B49B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getVar_0x2b49b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C10u; }
    }
    if (ctx->pc != 0x2B4C10u) { return; }
    ctx->pc = 0x2B4C10u;
    // 0x2b4c10: 0x40882d
    ctx->pc = 0x2b4c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c14: 0x16200015
    ctx->pc = 0x2B4C14u;
    {
        const bool branch_taken_0x2b4c14 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4C18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4c14) {
            ctx->pc = 0x2B4C6Cu;
            goto label_2b4c6c;
        }
    }
    ctx->pc = 0x2B4C1Cu;
    // 0x2b4c1c: 0x3c04003b
    ctx->pc = 0x2b4c1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4c20: 0x24844650
    ctx->pc = 0x2b4c20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2b4c24: 0x24050020
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4c28: 0x3c06003b
    ctx->pc = 0x2b4c28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b4c2c: 0x24c60d80
    ctx->pc = 0x2b4c2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b4c30: 0xc0ad0d6
    ctx->pc = 0x2B4C30u;
    SET_GPR_U32(ctx, 31, 0x2B4C38u);
    ctx->pc = 0x2B4C34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C38u; }
    }
    if (ctx->pc != 0x2B4C38u) { return; }
    ctx->pc = 0x2B4C38u;
    // 0x2b4c38: 0x3c04003b
    ctx->pc = 0x2b4c38u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4c3c: 0x24844808
    ctx->pc = 0x2b4c3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18440));
    // 0x2b4c40: 0xc0b4a34
    ctx->pc = 0x2B4C40u;
    SET_GPR_U32(ctx, 31, 0x2B4C48u);
    ctx->pc = 0x2B4C44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C48u; }
    }
    if (ctx->pc != 0x2B4C48u) { return; }
    ctx->pc = 0x2B4C48u;
    // 0x2b4c48: 0x3c04003b
    ctx->pc = 0x2b4c48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4c4c: 0xc0b4a34
    ctx->pc = 0x2B4C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B4C54u);
    ctx->pc = 0x2B4C50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C54u; }
    }
    if (ctx->pc != 0x2B4C54u) { return; }
    ctx->pc = 0x2B4C54u;
    // 0x2b4c54: 0x3c020037
    ctx->pc = 0x2b4c54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4c58: 0x8c4320ac
    ctx->pc = 0x2b4c58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4c5c: 0x8c620048
    ctx->pc = 0x2b4c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2b4c60: 0x34420001
    ctx->pc = 0x2b4c60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2b4c64: 0x10000023
    ctx->pc = 0x2B4C64u;
    {
        const bool branch_taken_0x2b4c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4C68u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x2b4c64) {
            ctx->pc = 0x2B4CF4u;
            goto label_2b4cf4;
        }
    }
    ctx->pc = 0x2B4C6Cu;
label_2b4c6c:
    // 0x2b4c6c: 0x8c4220ac
    ctx->pc = 0x2b4c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4c70: 0x8c42002c
    ctx->pc = 0x2b4c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b4c74: 0x1040000a
    ctx->pc = 0x2B4C74u;
    {
        const bool branch_taken_0x2b4c74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4C78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c74) {
            ctx->pc = 0x2B4CA0u;
            goto label_2b4ca0;
        }
    }
    ctx->pc = 0x2B4C7Cu;
    // 0x2b4c7c: 0x24050020
    ctx->pc = 0x2b4c7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4c80: 0x3c06003b
    ctx->pc = 0x2b4c80u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b4c84: 0x24c60d80
    ctx->pc = 0x2b4c84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b4c88: 0xc0ad0d6
    ctx->pc = 0x2B4C88u;
    SET_GPR_U32(ctx, 31, 0x2B4C90u);
    ctx->pc = 0x2B4C8Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4C90u; }
    }
    if (ctx->pc != 0x2B4C90u) { return; }
    ctx->pc = 0x2B4C90u;
    // 0x2b4c90: 0x3c04003b
    ctx->pc = 0x2b4c90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b4c94: 0x24844828
    ctx->pc = 0x2b4c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18472));
    // 0x2b4c98: 0xc0b4a34
    ctx->pc = 0x2B4C98u;
    SET_GPR_U32(ctx, 31, 0x2B4CA0u);
    ctx->pc = 0x2B4C9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4CA0u; }
    }
    if (ctx->pc != 0x2B4CA0u) { return; }
    ctx->pc = 0x2B4CA0u;
label_2b4ca0:
    // 0x2b4ca0: 0x220102d
    ctx->pc = 0x2b4ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ca4: 0x240282d
    ctx->pc = 0x2b4ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ca8: 0x24a30040
    ctx->pc = 0x2b4ca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 64));
label_2b4cac:
    // 0x2b4cac: 0xdca40000
    ctx->pc = 0x2b4cacu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4cb0: 0xdca60008
    ctx->pc = 0x2b4cb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b4cb4: 0xdca70010
    ctx->pc = 0x2b4cb4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b4cb8: 0xdca80018
    ctx->pc = 0x2b4cb8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b4cbc: 0xfc440000
    ctx->pc = 0x2b4cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x2b4cc0: 0xfc460008
    ctx->pc = 0x2b4cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x2b4cc4: 0xfc470010
    ctx->pc = 0x2b4cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x2b4cc8: 0xfc480018
    ctx->pc = 0x2b4cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x2b4ccc: 0x24a50020
    ctx->pc = 0x2b4cccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b4cd0: 0x24420020
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b4cd4: 0x0
    ctx->pc = 0x2b4cd4u;
    // NOP
    // 0x2b4cd8: 0x0
    ctx->pc = 0x2b4cd8u;
    // NOP
    // 0x2b4cdc: 0x14a3fff3
    ctx->pc = 0x2B4CDCu;
    {
        const bool branch_taken_0x2b4cdc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b4cdc) {
            ctx->pc = 0x2B4CACu;
            goto label_2b4cac;
        }
    }
    ctx->pc = 0x2B4CE4u;
    // 0x2b4ce4: 0xdca30000
    ctx->pc = 0x2b4ce4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b4ce8: 0xdca40008
    ctx->pc = 0x2b4ce8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b4cec: 0xfc430000
    ctx->pc = 0x2b4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2b4cf0: 0xfc440008
    ctx->pc = 0x2b4cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
label_2b4cf4:
    // 0x2b4cf4: 0xdfbf0030
    ctx->pc = 0x2b4cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4cf8: 0xdfb20020
    ctx->pc = 0x2b4cf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4cfc: 0xdfb10010
    ctx->pc = 0x2b4cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4d00: 0xdfb00000
    ctx->pc = 0x2b4d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4d04: 0x3e00008
    ctx->pc = 0x2B4D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4D08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4C6Cu: goto label_2b4c6c;
            case 0x2B4CA0u: goto label_2b4ca0;
            case 0x2B4CACu: goto label_2b4cac;
            case 0x2B4CF4u: goto label_2b4cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4D0Cu;
}
