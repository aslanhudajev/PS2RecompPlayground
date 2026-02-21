#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLoop1Obj
// Address: 0x2a4e68 - 0x2a4f20
void pbLoop1Obj_0x2a4e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4e68u;

    // 0x2a4e68: 0x27bdffa0
    ctx->pc = 0x2a4e68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a4e6c: 0xffbf0050
    ctx->pc = 0x2a4e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a4e70: 0xffb30040
    ctx->pc = 0x2a4e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a4e74: 0xffb20030
    ctx->pc = 0x2a4e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a4e78: 0xffb10020
    ctx->pc = 0x2a4e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a4e7c: 0xffb00010
    ctx->pc = 0x2a4e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a4e80: 0x80982d
    ctx->pc = 0x2a4e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e84: 0xa0902d
    ctx->pc = 0x2a4e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e88: 0x3c020036
    ctx->pc = 0x2a4e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a4e8c: 0x8c50dee0
    ctx->pc = 0x2a4e8cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a4e90: 0x24020001
    ctx->pc = 0x2a4e90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4e94: 0xafa20000
    ctx->pc = 0x2a4e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a4e98: 0x8fa20000
    ctx->pc = 0x2a4e98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4e9c: 0x10400019
    ctx->pc = 0x2A4E9Cu;
    {
        const bool branch_taken_0x2a4e9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4EA0u;
        SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
        if (branch_taken_0x2a4e9c) {
            ctx->pc = 0x2A4F04u;
            goto label_2a4f04;
        }
    }
    ctx->pc = 0x2A4EA4u;
    // 0x2a4ea4: 0x8e22b17c
    ctx->pc = 0x2a4ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947196)));
label_2a4ea8:
    // 0x2a4ea8: 0x0
    ctx->pc = 0x2a4ea8u;
    // NOP
    // 0x2a4eac: 0x0
    ctx->pc = 0x2a4eacu;
    // NOP
    // 0x2a4eb0: 0x0
    ctx->pc = 0x2a4eb0u;
    // NOP
    // 0x2a4eb4: 0x0
    ctx->pc = 0x2a4eb4u;
    // NOP
    // 0x2a4eb8: 0x0
    ctx->pc = 0x2a4eb8u;
    // NOP
    // 0x2a4ebc: 0x1440fffa
    ctx->pc = 0x2A4EBCu;
    {
        const bool branch_taken_0x2a4ebc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a4ebc) {
            ctx->pc = 0x2A4EA8u;
            goto label_2a4ea8;
        }
    }
    ctx->pc = 0x2A4EC4u;
    // 0x2a4ec4: 0x8e030010
    ctx->pc = 0x2a4ec4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a4ec8: 0x8c620004
    ctx->pc = 0x2a4ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a4ecc: 0x24420001
    ctx->pc = 0x2a4eccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a4ed0: 0xac620004
    ctx->pc = 0x2a4ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a4ed4: 0x260202d
    ctx->pc = 0x2a4ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ed8: 0x240282d
    ctx->pc = 0x2a4ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4edc: 0xc0af988
    ctx->pc = 0x2A4EDCu;
    SET_GPR_U32(ctx, 31, 0x2A4EE4u);
    ctx->pc = 0x2A4EE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4EE4u; }
    }
    if (ctx->pc != 0x2A4EE4u) { return; }
    ctx->pc = 0x2A4EE4u;
    // 0x2a4ee4: 0x8e020010
    ctx->pc = 0x2a4ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a4ee8: 0x8c420004
    ctx->pc = 0x2a4ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a4eec: 0x30420001
    ctx->pc = 0x2a4eecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a4ef0: 0x24420001
    ctx->pc = 0x2a4ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a4ef4: 0xae22b17c
    ctx->pc = 0x2a4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947196), GPR_U32(ctx, 2));
    // 0x2a4ef8: 0x8fa20000
    ctx->pc = 0x2a4ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4efc: 0x1440ffea
    ctx->pc = 0x2A4EFCu;
    {
        const bool branch_taken_0x2a4efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A4F00u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947196)));
        if (branch_taken_0x2a4efc) {
            ctx->pc = 0x2A4EA8u;
            goto label_2a4ea8;
        }
    }
    ctx->pc = 0x2A4F04u;
label_2a4f04:
    // 0x2a4f04: 0xdfbf0050
    ctx->pc = 0x2a4f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4f08: 0xdfb30040
    ctx->pc = 0x2a4f08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4f0c: 0xdfb20030
    ctx->pc = 0x2a4f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4f10: 0xdfb10020
    ctx->pc = 0x2a4f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4f14: 0xdfb00010
    ctx->pc = 0x2a4f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4f18: 0x3e00008
    ctx->pc = 0x2A4F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4EA8u: goto label_2a4ea8;
            case 0x2A4F04u: goto label_2a4f04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4F20u;
}
