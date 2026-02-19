#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetNodeIdx
// Address: 0x291f20 - 0x291f80
void CritterGetNodeIdx_0x291f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291f20u;

    // 0x291f20: 0x27bdfff0
    ctx->pc = 0x291f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291f24: 0xffbf0000
    ctx->pc = 0x291f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291f28: 0xa0402d
    ctx->pc = 0x291f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f2c: 0xc0382d
    ctx->pc = 0x291f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291f30: 0x8c830138
    ctx->pc = 0x291f30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x291f34: 0x1060000e
    ctx->pc = 0x291F34u;
    {
        const bool branch_taken_0x291f34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x291F38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x291f34) {
            ctx->pc = 0x291F70u;
            goto label_291f70;
        }
    }
    ctx->pc = 0x291F3Cu;
    // 0x291f3c: 0x1100000d
    ctx->pc = 0x291F3Cu;
    {
        const bool branch_taken_0x291f3c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x291F40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291f3c) {
            ctx->pc = 0x291F74u;
            goto label_291f74;
        }
    }
    ctx->pc = 0x291F44u;
    // 0x291f44: 0x81020000
    ctx->pc = 0x291f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x291f48: 0x1040000a
    ctx->pc = 0x291F48u;
    {
        const bool branch_taken_0x291f48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x291F4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291f48) {
            ctx->pc = 0x291F74u;
            goto label_291f74;
        }
    }
    ctx->pc = 0x291F50u;
    // 0x291f50: 0x81020001
    ctx->pc = 0x291f50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x291f54: 0x10400007
    ctx->pc = 0x291F54u;
    {
        const bool branch_taken_0x291f54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x291F58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291f54) {
            ctx->pc = 0x291F74u;
            goto label_291f74;
        }
    }
    ctx->pc = 0x291F5Cu;
    // 0x291f5c: 0x8c64000c
    ctx->pc = 0x291f5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x291f60: 0x8c650010
    ctx->pc = 0x291f60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x291f64: 0xc084bfe
    ctx->pc = 0x291F64u;
    SET_GPR_U32(ctx, 31, 0x291F6Cu);
    ctx->pc = 0x291F68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindNodeIdx_0x212ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F6Cu; }
    }
    if (ctx->pc != 0x291F6Cu) { return; }
    ctx->pc = 0x291F6Cu;
    // 0x291f6c: 0x40282d
    ctx->pc = 0x291f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291f70:
    // 0x291f70: 0xa0102d
    ctx->pc = 0x291f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_291f74:
    // 0x291f74: 0xdfbf0000
    ctx->pc = 0x291f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291f78: 0x3e00008
    ctx->pc = 0x291F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291F7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291F70u: goto label_291f70;
            case 0x291F74u: goto label_291f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291F80u;
}
