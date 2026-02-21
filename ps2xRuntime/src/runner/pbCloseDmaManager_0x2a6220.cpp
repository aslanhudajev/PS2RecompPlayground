#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseDmaManager
// Address: 0x2a6220 - 0x2a6240
void pbCloseDmaManager_0x2a6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6220u;

    // 0x2a6220: 0x27bdfff0
    ctx->pc = 0x2a6220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a6224: 0xffbe0000
    ctx->pc = 0x2a6224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x2a6228: 0x3a0f02d
    ctx->pc = 0x2a6228u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a622c: 0x3c0e82d
    ctx->pc = 0x2a622cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6230: 0xdfbe0000
    ctx->pc = 0x2a6230u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6234: 0x27bd0010
    ctx->pc = 0x2a6234u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a6238: 0x3e00008
    ctx->pc = 0x2A6238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6240u;
}
