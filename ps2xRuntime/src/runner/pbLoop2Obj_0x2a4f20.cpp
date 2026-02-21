#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLoop2Obj
// Address: 0x2a4f20 - 0x2a5000
void pbLoop2Obj_0x2a4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4f20u;

    // 0x2a4f20: 0x27bdff80
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a4f24: 0xffbf0070
    ctx->pc = 0x2a4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a4f28: 0xffb50060
    ctx->pc = 0x2a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2a4f2c: 0xffb40050
    ctx->pc = 0x2a4f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a4f30: 0xffb30040
    ctx->pc = 0x2a4f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a4f34: 0xffb20030
    ctx->pc = 0x2a4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a4f38: 0xffb10020
    ctx->pc = 0x2a4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a4f3c: 0xffb00010
    ctx->pc = 0x2a4f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a4f40: 0x80a82d
    ctx->pc = 0x2a4f40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f44: 0xa0a02d
    ctx->pc = 0x2a4f44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f48: 0xc0982d
    ctx->pc = 0x2a4f48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f4c: 0xe0902d
    ctx->pc = 0x2a4f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f50: 0x3c020036
    ctx->pc = 0x2a4f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a4f54: 0x8c50dee0
    ctx->pc = 0x2a4f54u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a4f58: 0x24020001
    ctx->pc = 0x2a4f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4f5c: 0xafa20000
    ctx->pc = 0x2a4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a4f60: 0x8fa20000
    ctx->pc = 0x2a4f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4f64: 0x1040001d
    ctx->pc = 0x2A4F64u;
    {
        const bool branch_taken_0x2a4f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4F68u;
        SET_GPR_U32(ctx, 17, ((uint32_t)56 << 16));
        if (branch_taken_0x2a4f64) {
            ctx->pc = 0x2A4FDCu;
            goto label_2a4fdc;
        }
    }
    ctx->pc = 0x2A4F6Cu;
    // 0x2a4f6c: 0x8e22b17c
    ctx->pc = 0x2a4f6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947196)));
label_2a4f70:
    // 0x2a4f70: 0x0
    ctx->pc = 0x2a4f70u;
    // NOP
    // 0x2a4f74: 0x0
    ctx->pc = 0x2a4f74u;
    // NOP
    // 0x2a4f78: 0x0
    ctx->pc = 0x2a4f78u;
    // NOP
    // 0x2a4f7c: 0x0
    ctx->pc = 0x2a4f7cu;
    // NOP
    // 0x2a4f80: 0x0
    ctx->pc = 0x2a4f80u;
    // NOP
    // 0x2a4f84: 0x1440fffa
    ctx->pc = 0x2A4F84u;
    {
        const bool branch_taken_0x2a4f84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a4f84) {
            ctx->pc = 0x2A4F70u;
            goto label_2a4f70;
        }
    }
    ctx->pc = 0x2A4F8Cu;
    // 0x2a4f8c: 0x8e030010
    ctx->pc = 0x2a4f8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a4f90: 0x8c620004
    ctx->pc = 0x2a4f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a4f94: 0x24420001
    ctx->pc = 0x2a4f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a4f98: 0xac620004
    ctx->pc = 0x2a4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a4f9c: 0x2a0202d
    ctx->pc = 0x2a4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fa0: 0x280282d
    ctx->pc = 0x2a4fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fa4: 0xc0af988
    ctx->pc = 0x2A4FA4u;
    SET_GPR_U32(ctx, 31, 0x2A4FACu);
    ctx->pc = 0x2A4FA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4FACu; }
    }
    if (ctx->pc != 0x2A4FACu) { return; }
    ctx->pc = 0x2A4FACu;
    // 0x2a4fac: 0x260202d
    ctx->pc = 0x2a4facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fb0: 0x240282d
    ctx->pc = 0x2a4fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fb4: 0xc0af988
    ctx->pc = 0x2A4FB4u;
    SET_GPR_U32(ctx, 31, 0x2A4FBCu);
    ctx->pc = 0x2A4FB8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4FBCu; }
    }
    if (ctx->pc != 0x2A4FBCu) { return; }
    ctx->pc = 0x2A4FBCu;
    // 0x2a4fbc: 0x8e020010
    ctx->pc = 0x2a4fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a4fc0: 0x8c420004
    ctx->pc = 0x2a4fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a4fc4: 0x30420001
    ctx->pc = 0x2a4fc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2a4fc8: 0x24420001
    ctx->pc = 0x2a4fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a4fcc: 0xae22b17c
    ctx->pc = 0x2a4fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947196), GPR_U32(ctx, 2));
    // 0x2a4fd0: 0x8fa20000
    ctx->pc = 0x2a4fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4fd4: 0x1440ffe6
    ctx->pc = 0x2A4FD4u;
    {
        const bool branch_taken_0x2a4fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A4FD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947196)));
        if (branch_taken_0x2a4fd4) {
            ctx->pc = 0x2A4F70u;
            goto label_2a4f70;
        }
    }
    ctx->pc = 0x2A4FDCu;
label_2a4fdc:
    // 0x2a4fdc: 0xdfbf0070
    ctx->pc = 0x2a4fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a4fe0: 0xdfb50060
    ctx->pc = 0x2a4fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a4fe4: 0xdfb40050
    ctx->pc = 0x2a4fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4fe8: 0xdfb30040
    ctx->pc = 0x2a4fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4fec: 0xdfb20030
    ctx->pc = 0x2a4fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4ff0: 0xdfb10020
    ctx->pc = 0x2a4ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4ff4: 0xdfb00010
    ctx->pc = 0x2a4ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4ff8: 0x3e00008
    ctx->pc = 0x2A4FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4FFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4F70u: goto label_2a4f70;
            case 0x2A4FDCu: goto label_2a4fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5000u;
}
