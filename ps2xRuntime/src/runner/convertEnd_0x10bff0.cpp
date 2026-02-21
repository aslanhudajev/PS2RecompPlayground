#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: convertEnd
// Address: 0x10bff0 - 0x10c018
void convertEnd_0x10bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10bff0u;

    // 0x10bff0: 0x3085ff00
    ctx->pc = 0x10bff0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65280));
    // 0x10bff4: 0x41600
    ctx->pc = 0x10bff4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
    // 0x10bff8: 0x41a02
    ctx->pc = 0x10bff8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 8));
    // 0x10bffc: 0x52a00
    ctx->pc = 0x10bffcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x10c000: 0x451025
    ctx->pc = 0x10c000u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10c004: 0x3063ff00
    ctx->pc = 0x10c004u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65280));
    // 0x10c008: 0x431025
    ctx->pc = 0x10c008u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c00c: 0x42602
    ctx->pc = 0x10c00cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 24));
    // 0x10c010: 0x3e00008
    ctx->pc = 0x10C010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C014u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C018u;
}
