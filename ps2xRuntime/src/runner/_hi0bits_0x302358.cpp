#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _hi0bits
// Address: 0x302358 - 0x3023dc
void _hi0bits_0x302358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302358u;

    // 0x302358: 0x3c02ffff
    ctx->pc = 0x302358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x30235c: 0x821024
    ctx->pc = 0x30235cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x302360: 0x14400003
    ctx->pc = 0x302360u;
    {
        const bool branch_taken_0x302360 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x302364u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302360) {
            ctx->pc = 0x302370u;
            goto label_302370;
        }
    }
    ctx->pc = 0x302368u;
    // 0x302368: 0x24050010
    ctx->pc = 0x302368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x30236c: 0x42400
    ctx->pc = 0x30236cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
label_302370:
    // 0x302370: 0x3c02ff00
    ctx->pc = 0x302370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65280 << 16));
    // 0x302374: 0x821024
    ctx->pc = 0x302374u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x302378: 0x14400003
    ctx->pc = 0x302378u;
    {
        const bool branch_taken_0x302378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x302378) {
            ctx->pc = 0x302388u;
            goto label_302388;
        }
    }
    ctx->pc = 0x302380u;
    // 0x302380: 0x24a50008
    ctx->pc = 0x302380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x302384: 0x42200
    ctx->pc = 0x302384u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
label_302388:
    // 0x302388: 0x3c02f000
    ctx->pc = 0x302388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61440 << 16));
    // 0x30238c: 0x821024
    ctx->pc = 0x30238cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x302390: 0x14400003
    ctx->pc = 0x302390u;
    {
        const bool branch_taken_0x302390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x302390) {
            ctx->pc = 0x3023A0u;
            goto label_3023a0;
        }
    }
    ctx->pc = 0x302398u;
    // 0x302398: 0x24a50004
    ctx->pc = 0x302398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x30239c: 0x42100
    ctx->pc = 0x30239cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
label_3023a0:
    // 0x3023a0: 0x3c02c000
    ctx->pc = 0x3023a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x3023a4: 0x821024
    ctx->pc = 0x3023a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3023a8: 0x14400003
    ctx->pc = 0x3023A8u;
    {
        const bool branch_taken_0x3023a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3023a8) {
            ctx->pc = 0x3023B8u;
            goto label_3023b8;
        }
    }
    ctx->pc = 0x3023B0u;
    // 0x3023b0: 0x24a50002
    ctx->pc = 0x3023b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x3023b4: 0x42080
    ctx->pc = 0x3023b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_3023b8:
    // 0x3023b8: 0x4800005
    ctx->pc = 0x3023B8u;
    {
        const bool branch_taken_0x3023b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3023BCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
        if (branch_taken_0x3023b8) {
            ctx->pc = 0x3023D0u;
            goto label_3023d0;
        }
    }
    ctx->pc = 0x3023C0u;
    // 0x3023c0: 0x24a50001
    ctx->pc = 0x3023c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x3023c4: 0x831824
    ctx->pc = 0x3023c4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3023c8: 0x10600002
    ctx->pc = 0x3023C8u;
    {
        const bool branch_taken_0x3023c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x3023CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x3023c8) {
            ctx->pc = 0x3023D4u;
            goto label_3023d4;
        }
    }
    ctx->pc = 0x3023D0u;
label_3023d0:
    // 0x3023d0: 0xa0102d
    ctx->pc = 0x3023d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3023d4:
    // 0x3023d4: 0x3e00008
    ctx->pc = 0x3023D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302370u: goto label_302370;
            case 0x302388u: goto label_302388;
            case 0x3023A0u: goto label_3023a0;
            case 0x3023B8u: goto label_3023b8;
            case 0x3023D0u: goto label_3023d0;
            case 0x3023D4u: goto label_3023d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3023DCu;
}
