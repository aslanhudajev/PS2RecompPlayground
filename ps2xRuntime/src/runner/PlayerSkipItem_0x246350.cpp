#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSkipItem
// Address: 0x246350 - 0x2463c0
void PlayerSkipItem_0x246350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x246350u;

    // 0x246350: 0x8c820000
    ctx->pc = 0x246350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x246354: 0x8c430000
    ctx->pc = 0x246354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246358: 0x24020001
    ctx->pc = 0x246358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24635c: 0x10620006
    ctx->pc = 0x24635Cu;
    {
        const bool branch_taken_0x24635c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x246360u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24635c) {
            ctx->pc = 0x246378u;
            goto label_246378;
        }
    }
    ctx->pc = 0x246364u;
    // 0x246364: 0x24020008
    ctx->pc = 0x246364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x246368: 0x10620007
    ctx->pc = 0x246368u;
    {
        const bool branch_taken_0x246368 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x24636Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246368) {
            ctx->pc = 0x246388u;
            goto label_246388;
        }
    }
    ctx->pc = 0x246370u;
    // 0x246370: 0x10000011
    ctx->pc = 0x246370u;
    {
        const bool branch_taken_0x246370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x246370) {
            ctx->pc = 0x2463B8u;
            goto label_2463b8;
        }
    }
    ctx->pc = 0x246378u;
label_246378:
    // 0x246378: 0x8c8300fc
    ctx->pc = 0x246378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x24637c: 0x24020001
    ctx->pc = 0x24637cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x246380: 0x1000000c
    ctx->pc = 0x246380u;
    {
        const bool branch_taken_0x246380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x246384u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x246380) {
            ctx->pc = 0x2463B4u;
            goto label_2463b4;
        }
    }
    ctx->pc = 0x246388u;
label_246388:
    // 0x246388: 0x808300dc
    ctx->pc = 0x246388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x24638c: 0x24020002
    ctx->pc = 0x24638cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x246390: 0x10620003
    ctx->pc = 0x246390u;
    {
        const bool branch_taken_0x246390 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x246394u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x246390) {
            ctx->pc = 0x2463A0u;
            goto label_2463a0;
        }
    }
    ctx->pc = 0x246398u;
    // 0x246398: 0x54620006
    ctx->pc = 0x246398u;
    {
        const bool branch_taken_0x246398 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x246398) {
            ctx->pc = 0x24639Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2463B4u;
            goto label_2463b4;
        }
    }
    ctx->pc = 0x2463A0u;
label_2463a0:
    // 0x2463a0: 0x948200d8
    ctx->pc = 0x2463a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2463a4: 0x30420001
    ctx->pc = 0x2463a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2463a8: 0x14400003
    ctx->pc = 0x2463A8u;
    {
        const bool branch_taken_0x2463a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2463ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2463a8) {
            ctx->pc = 0x2463B8u;
            goto label_2463b8;
        }
    }
    ctx->pc = 0x2463B0u;
    // 0x2463b0: 0x24050001
    ctx->pc = 0x2463b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2463b4:
    // 0x2463b4: 0xa0102d
    ctx->pc = 0x2463b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2463b8:
    // 0x2463b8: 0x3e00008
    ctx->pc = 0x2463B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246378u: goto label_246378;
            case 0x246388u: goto label_246388;
            case 0x2463A0u: goto label_2463a0;
            case 0x2463B4u: goto label_2463b4;
            case 0x2463B8u: goto label_2463b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2463C0u;
}
