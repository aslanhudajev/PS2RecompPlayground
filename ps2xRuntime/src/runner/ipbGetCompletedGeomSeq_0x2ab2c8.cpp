#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbGetCompletedGeomSeq
// Address: 0x2ab2c8 - 0x2ab304
void ipbGetCompletedGeomSeq_0x2ab2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab2c8u;

    // 0x2ab2c8: 0x27bdfff0
    ctx->pc = 0x2ab2c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab2cc: 0xffbe0000
    ctx->pc = 0x2ab2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2ab2d0: 0x3a0f02d
    ctx->pc = 0x2ab2d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2d4: 0x3c030037
    ctx->pc = 0x2ab2d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ab2d8: 0x8c6383ac
    ctx->pc = 0x2ab2d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294935468)));
    // 0x2ab2dc: 0x60102d
    ctx->pc = 0x2ab2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2e0: 0x3043ffff
    ctx->pc = 0x2ab2e0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2ab2e4: 0x60102d
    ctx->pc = 0x2ab2e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2e8: 0x10000001
    ctx->pc = 0x2AB2E8u;
    {
        const bool branch_taken_0x2ab2e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab2e8) {
            ctx->pc = 0x2AB2F0u;
            goto label_2ab2f0;
        }
    }
    ctx->pc = 0x2AB2F0u;
label_2ab2f0:
    // 0x2ab2f0: 0x3c0e82d
    ctx->pc = 0x2ab2f0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2f4: 0xdfbe0000
    ctx->pc = 0x2ab2f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab2f8: 0x27bd0010
    ctx->pc = 0x2ab2f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab2fc: 0x3e00008
    ctx->pc = 0x2AB2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB2F0u: goto label_2ab2f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB304u;
}
