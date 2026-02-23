#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_SearchFreeHn
// Address: 0x1882e8 - 0x188330
void mpvlib_SearchFreeHn_0x1882e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_SearchFreeHn");


    ctx->pc = 0x1882e8u;

    // 0x1882e8: 0x3c02002e
    ctx->pc = 0x1882e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x1882ec: 0x202d
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1882f0: 0x24424290
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 17040));
    // 0x1882f4: 0x8c450034
    ctx->pc = 0x1882f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1882f8: 0x18a0000b
    ctx->pc = 0x1882F8u;
    {
        const bool branch_taken_0x1882f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1882FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 56)));
        if (branch_taken_0x1882f8) {
            ctx->pc = 0x188328u;
            goto label_188328;
        }
    }
    ctx->pc = 0x188300u;
    // 0x188300: 0x24060001
    ctx->pc = 0x188300u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188304: 0x0
    ctx->pc = 0x188304u;
    // NOP
label_188308:
    // 0x188308: 0x8c620160
    ctx->pc = 0x188308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x18830c: 0x14460003
    ctx->pc = 0x18830Cu;
    {
        const bool branch_taken_0x18830c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x188310u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x18830c) {
            ctx->pc = 0x18831Cu;
            goto label_18831c;
        }
    }
    ctx->pc = 0x188314u;
    // 0x188314: 0x3e00008
    ctx->pc = 0x188314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188318u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188308u: goto label_188308;
            case 0x18831Cu: goto label_18831c;
            case 0x188328u: goto label_188328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18831Cu;
label_18831c:
    // 0x18831c: 0x85102a
    ctx->pc = 0x18831cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x188320: 0x1440fff9
    ctx->pc = 0x188320u;
    {
        const bool branch_taken_0x188320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x188324u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8192));
        if (branch_taken_0x188320) {
            ctx->pc = 0x188308u;
            goto label_188308;
        }
    }
    ctx->pc = 0x188328u;
label_188328:
    // 0x188328: 0x3e00008
    ctx->pc = 0x188328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18832Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188308u: goto label_188308;
            case 0x18831Cu: goto label_18831c;
            case 0x188328u: goto label_188328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188330u;
}
