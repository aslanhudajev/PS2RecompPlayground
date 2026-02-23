#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpslib_SearchFreeHn
// Address: 0x182820 - 0x182868
void mpslib_SearchFreeHn_0x182820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpslib_SearchFreeHn");


    ctx->pc = 0x182820u;

    // 0x182820: 0x3c030024
    ctx->pc = 0x182820u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x182824: 0x202d
    ctx->pc = 0x182824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182828: 0x8c621538
    ctx->pc = 0x182828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 5432)));
    // 0x18282c: 0x8c45000c
    ctx->pc = 0x18282cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x182830: 0x18a0000b
    ctx->pc = 0x182830u;
    {
        const bool branch_taken_0x182830 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x182834u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 16));
        if (branch_taken_0x182830) {
            ctx->pc = 0x182860u;
            goto label_182860;
        }
    }
    ctx->pc = 0x182838u;
    // 0x182838: 0x24060001
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18283c: 0x0
    ctx->pc = 0x18283cu;
    // NOP
label_182840:
    // 0x182840: 0x8c620000
    ctx->pc = 0x182840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182844: 0x14460003
    ctx->pc = 0x182844u;
    {
        const bool branch_taken_0x182844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x182848u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x182844) {
            ctx->pc = 0x182854u;
            goto label_182854;
        }
    }
    ctx->pc = 0x18284Cu;
    // 0x18284c: 0x3e00008
    ctx->pc = 0x18284Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182850u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182840u: goto label_182840;
            case 0x182854u: goto label_182854;
            case 0x182860u: goto label_182860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182854u;
label_182854:
    // 0x182854: 0x85102a
    ctx->pc = 0x182854u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x182858: 0x1440fff9
    ctx->pc = 0x182858u;
    {
        const bool branch_taken_0x182858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18285Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 192));
        if (branch_taken_0x182858) {
            ctx->pc = 0x182840u;
            goto label_182840;
        }
    }
    ctx->pc = 0x182860u;
label_182860:
    // 0x182860: 0x3e00008
    ctx->pc = 0x182860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182864u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182840u: goto label_182840;
            case 0x182854u: goto label_182854;
            case 0x182860u: goto label_182860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182868u;
}
