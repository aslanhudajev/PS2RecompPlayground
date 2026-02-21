#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterInitPlayerData
// Address: 0x29ab38 - 0x29ab88
void CritterInitPlayerData_0x29ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29ab38u;

    // 0x29ab38: 0x282d
    ctx->pc = 0x29ab38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab3c: 0x202d
    ctx->pc = 0x29ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab40: 0x3c020032
    ctx->pc = 0x29ab40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29ab44: 0x24461bc0
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29ab48: 0x3c020036
    ctx->pc = 0x29ab48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ab4c: 0x2447d7e8
    ctx->pc = 0x29ab4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294957032));
label_29ab50:
    // 0x29ab50: 0x8cc200fc
    ctx->pc = 0x29ab50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x29ab54: 0x24a30001
    ctx->pc = 0x29ab54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x29ab58: 0x38420001
    ctx->pc = 0x29ab58u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x29ab5c: 0x62280a
    ctx->pc = 0x29ab5cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
    // 0x29ab60: 0x41080
    ctx->pc = 0x29ab60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x29ab64: 0x471021
    ctx->pc = 0x29ab64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29ab68: 0xac400000
    ctx->pc = 0x29ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x29ab6c: 0x24840001
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x29ab70: 0x28820004
    ctx->pc = 0x29ab70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x29ab74: 0x1440fff6
    ctx->pc = 0x29AB74u;
    {
        const bool branch_taken_0x29ab74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29AB78u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11008));
        if (branch_taken_0x29ab74) {
            ctx->pc = 0x29AB50u;
            goto label_29ab50;
        }
    }
    ctx->pc = 0x29AB7Cu;
    // 0x29ab7c: 0x3c020036
    ctx->pc = 0x29ab7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ab80: 0x3e00008
    ctx->pc = 0x29AB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB84u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956880), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29AB50u: goto label_29ab50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29AB88u;
}
