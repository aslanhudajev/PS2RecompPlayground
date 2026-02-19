#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetNode
// Address: 0x291f80 - 0x291fa8
void CritterGetNode_0x291f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291f80u;

    // 0x291f80: 0x4a30003
    ctx->pc = 0x291F80u;
    {
        const bool branch_taken_0x291f80 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x291f80) {
            ctx->pc = 0x291F84u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 192)));
            ctx->pc = 0x291F90u;
            goto label_291f90;
        }
    }
    ctx->pc = 0x291F88u;
    // 0x291f88: 0x3e00008
    ctx->pc = 0x291F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291F8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291F90u: goto label_291f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291F90u;
label_291f90:
    // 0x291f90: 0x24020028
    ctx->pc = 0x291f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
    // 0x291f94: 0xa21018
    ctx->pc = 0x291f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x291f98: 0x431021
    ctx->pc = 0x291f98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x291f9c: 0x8c420000
    ctx->pc = 0x291f9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291fa0: 0x3e00008
    ctx->pc = 0x291FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291FA4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291F90u: goto label_291f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291FA8u;
}
