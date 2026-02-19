#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveFileSize
// Address: 0x2091a8 - 0x2091d8
void saveFileSize_0x2091a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2091a8u;

    // 0x2091a8: 0x27bdfff0
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2091ac: 0xffbe0000
    ctx->pc = 0x2091acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2091b0: 0x3a0f02d
    ctx->pc = 0x2091b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091b4: 0x3c020004
    ctx->pc = 0x2091b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
    // 0x2091b8: 0x34427400
    ctx->pc = 0x2091b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 29696));
    // 0x2091bc: 0x10000001
    ctx->pc = 0x2091BCu;
    {
        const bool branch_taken_0x2091bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2091bc) {
            ctx->pc = 0x2091C4u;
            goto label_2091c4;
        }
    }
    ctx->pc = 0x2091C4u;
label_2091c4:
    // 0x2091c4: 0x3c0e82d
    ctx->pc = 0x2091c4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091c8: 0xdfbe0000
    ctx->pc = 0x2091c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2091cc: 0x27bd0010
    ctx->pc = 0x2091ccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2091d0: 0x3e00008
    ctx->pc = 0x2091D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2091C4u: goto label_2091c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2091D8u;
}
