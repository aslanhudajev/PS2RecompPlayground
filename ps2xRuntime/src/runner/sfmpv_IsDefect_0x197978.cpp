#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsDefect
// Address: 0x197978 - 0x1979b8
void sfmpv_IsDefect_0x197978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsDefect");


    ctx->pc = 0x197978u;

    // 0x197978: 0x8c83376c
    ctx->pc = 0x197978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 14188)));
    // 0x19797c: 0x24020003
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x197980: 0xa0202d
    ctx->pc = 0x197980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197984: 0x10620008
    ctx->pc = 0x197984u;
    {
        const bool branch_taken_0x197984 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x197988u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197984) {
            ctx->pc = 0x1979A8u;
            goto label_1979a8;
        }
    }
    ctx->pc = 0x19798Cu;
    // 0x19798c: 0x2c620004
    ctx->pc = 0x19798cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 4));
    // 0x197990: 0x10400007
    ctx->pc = 0x197990u;
    {
        const bool branch_taken_0x197990 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197994u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x197990) {
            ctx->pc = 0x1979B0u;
            goto label_1979b0;
        }
    }
    ctx->pc = 0x197998u;
    // 0x197998: 0x14620005
    ctx->pc = 0x197998u;
    {
        const bool branch_taken_0x197998 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x19799Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967294));
        if (branch_taken_0x197998) {
            ctx->pc = 0x1979B0u;
            goto label_1979b0;
        }
    }
    ctx->pc = 0x1979A0u;
    // 0x1979a0: 0x10000003
    ctx->pc = 0x1979A0u;
    {
        const bool branch_taken_0x1979a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1979A4u;
        SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x1979a0) {
            ctx->pc = 0x1979B0u;
            goto label_1979b0;
        }
    }
    ctx->pc = 0x1979A8u;
label_1979a8:
    // 0x1979a8: 0x38820003
    ctx->pc = 0x1979a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 3));
    // 0x1979ac: 0x2c450001
    ctx->pc = 0x1979acu;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 2), 1));
label_1979b0:
    // 0x1979b0: 0x3e00008
    ctx->pc = 0x1979B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1979B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1979A8u: goto label_1979a8;
            case 0x1979B0u: goto label_1979b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1979B8u;
}
