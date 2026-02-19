#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbGetCompletedTexSeq
// Address: 0x2ab288 - 0x2ab2c4
void ipbGetCompletedTexSeq_0x2ab288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab288u;

    // 0x2ab288: 0x27bdfff0
    ctx->pc = 0x2ab288u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab28c: 0xffbe0000
    ctx->pc = 0x2ab28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2ab290: 0x3a0f02d
    ctx->pc = 0x2ab290u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab294: 0x3c030037
    ctx->pc = 0x2ab294u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ab298: 0x8c6383ac
    ctx->pc = 0x2ab298u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294935468)));
    // 0x2ab29c: 0x31402
    ctx->pc = 0x2ab29cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 16));
    // 0x2ab2a0: 0x3043ffff
    ctx->pc = 0x2ab2a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2ab2a4: 0x60102d
    ctx->pc = 0x2ab2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2a8: 0x10000001
    ctx->pc = 0x2AB2A8u;
    {
        const bool branch_taken_0x2ab2a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ab2a8) {
            ctx->pc = 0x2AB2B0u;
            goto label_2ab2b0;
        }
    }
    ctx->pc = 0x2AB2B0u;
label_2ab2b0:
    // 0x2ab2b0: 0x3c0e82d
    ctx->pc = 0x2ab2b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b4: 0xdfbe0000
    ctx->pc = 0x2ab2b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab2b8: 0x27bd0010
    ctx->pc = 0x2ab2b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab2bc: 0x3e00008
    ctx->pc = 0x2AB2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB2B0u: goto label_2ab2b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB2C4u;
}
