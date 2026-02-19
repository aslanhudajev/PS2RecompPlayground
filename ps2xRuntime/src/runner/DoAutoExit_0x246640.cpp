#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAutoExit
// Address: 0x246640 - 0x246684
void DoAutoExit_0x246640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x246640u;

    // 0x246640: 0x3c020032
    ctx->pc = 0x246640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x246644: 0x8c4207bc
    ctx->pc = 0x246644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x246648: 0x1040000c
    ctx->pc = 0x246648u;
    {
        const bool branch_taken_0x246648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24664Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x246648) {
            ctx->pc = 0x24667Cu;
            goto label_24667c;
        }
    }
    ctx->pc = 0x246650u;
    // 0x246650: 0x8c4207d4
    ctx->pc = 0x246650u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2004)));
    // 0x246654: 0x14400005
    ctx->pc = 0x246654u;
    {
        const bool branch_taken_0x246654 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x246658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x246654) {
            ctx->pc = 0x24666Cu;
            goto label_24666c;
        }
    }
    ctx->pc = 0x24665Cu;
    // 0x24665c: 0x3c020032
    ctx->pc = 0x24665cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x246660: 0x8c4207d0
    ctx->pc = 0x246660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2000)));
    // 0x246664: 0x10400005
    ctx->pc = 0x246664u;
    {
        const bool branch_taken_0x246664 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x246668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x246664) {
            ctx->pc = 0x24667Cu;
            goto label_24667c;
        }
    }
    ctx->pc = 0x24666Cu;
label_24666c:
    // 0x24666c: 0xac8200fc
    ctx->pc = 0x24666cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 2));
    // 0x246670: 0xa48001ca
    ctx->pc = 0x246670u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 458), (uint16_t)GPR_U32(ctx, 0));
    // 0x246674: 0x3e00008
    ctx->pc = 0x246674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246678u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24666Cu: goto label_24666c;
            case 0x24667Cu: goto label_24667c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24667Cu;
label_24667c:
    // 0x24667c: 0x3e00008
    ctx->pc = 0x24667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24666Cu: goto label_24666c;
            case 0x24667Cu: goto label_24667c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x246684u;
}
