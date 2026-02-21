#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dispSwitch
// Address: 0x11b198 - 0x11b1cc
void dispSwitch_0x11b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b198u;

    // 0x11b198: 0x10a00003
    ctx->pc = 0x11B198u;
    {
        const bool branch_taken_0x11b198 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B19Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11b198) {
            ctx->pc = 0x11B1A8u;
            goto label_11b1a8;
        }
    }
    ctx->pc = 0x11B1A0u;
    // 0x11b1a0: 0x10000002
    ctx->pc = 0x11B1A0u;
    {
        const bool branch_taken_0x11b1a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11B1A4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 44)));
        if (branch_taken_0x11b1a0) {
            ctx->pc = 0x11B1ACu;
            goto label_11b1ac;
        }
    }
    ctx->pc = 0x11B1A8u;
label_11b1a8:
    // 0x11b1a8: 0x8cc50028
    ctx->pc = 0x11b1a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_11b1ac:
    // 0x11b1ac: 0x8cc20010
    ctx->pc = 0x11b1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x11b1b0: 0x2403fe00
    ctx->pc = 0x11b1b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x11b1b4: 0x30a501ff
    ctx->pc = 0x11b1b4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 511));
    // 0x11b1b8: 0xc0202d
    ctx->pc = 0x11b1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b1bc: 0x431024
    ctx->pc = 0x11b1bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11b1c0: 0x451025
    ctx->pc = 0x11b1c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11b1c4: 0x80499b2
    ctx->pc = 0x11B1C4u;
    ctx->pc = 0x11B1C8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1266C8u;
    sceGsPutDispEnv_0x1266c8(rdram, ctx, runtime); return;
    ctx->pc = 0x11B1CCu;
}
