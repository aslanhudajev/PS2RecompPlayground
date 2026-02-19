#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CheckSoftReset
// Address: 0x2252e0 - 0x225340
void CheckSoftReset_0x2252e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2252e0u;

    // 0x2252e0: 0x3c020031
    ctx->pc = 0x2252e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2252e4: 0x8c42f184
    ctx->pc = 0x2252e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2252e8: 0x10400003
    ctx->pc = 0x2252E8u;
    {
        const bool branch_taken_0x2252e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2252ECu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2252e8) {
            ctx->pc = 0x2252F8u;
            goto label_2252f8;
        }
    }
    ctx->pc = 0x2252F0u;
    // 0x2252f0: 0x3e00008
    ctx->pc = 0x2252F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2252F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2252F8u: goto label_2252f8;
            case 0x225310u: goto label_225310;
            case 0x225324u: goto label_225324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2252F8u;
label_2252f8:
    // 0x2252f8: 0x3c020032
    ctx->pc = 0x2252f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2252fc: 0x24460870
    ctx->pc = 0x2252fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 2160));
    // 0x225300: 0x3c050035
    ctx->pc = 0x225300u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x225304: 0x24040001
    ctx->pc = 0x225304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x225308: 0x31080
    ctx->pc = 0x225308u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x22530c: 0x0
    ctx->pc = 0x22530cu;
    // NOP
label_225310:
    // 0x225310: 0x461021
    ctx->pc = 0x225310u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x225314: 0x8c420000
    ctx->pc = 0x225314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225318: 0x28420079
    ctx->pc = 0x225318u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 121));
    // 0x22531c: 0x50400001
    ctx->pc = 0x22531Cu;
    {
        const bool branch_taken_0x22531c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22531c) {
            ctx->pc = 0x225320u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294941580), GPR_U32(ctx, 4));
            ctx->pc = 0x225324u;
            goto label_225324;
        }
    }
    ctx->pc = 0x225324u;
label_225324:
    // 0x225324: 0x24630001
    ctx->pc = 0x225324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x225328: 0x28620008
    ctx->pc = 0x225328u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x22532c: 0x5440fff8
    ctx->pc = 0x22532Cu;
    {
        const bool branch_taken_0x22532c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22532c) {
            ctx->pc = 0x225330u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
            ctx->pc = 0x225310u;
            goto label_225310;
        }
    }
    ctx->pc = 0x225334u;
    // 0x225334: 0x3c020035
    ctx->pc = 0x225334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x225338: 0x3e00008
    ctx->pc = 0x225338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22533Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941580)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2252F8u: goto label_2252f8;
            case 0x225310u: goto label_225310;
            case 0x225324u: goto label_225324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225340u;
}
