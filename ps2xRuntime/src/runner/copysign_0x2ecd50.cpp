#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: copysign
// Address: 0x2ecd50 - 0x2ecd94
void copysign_0x2ecd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ecd50u;

    // 0x2ecd50: 0x80102d
    ctx->pc = 0x2ecd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd54: 0x2103f
    ctx->pc = 0x2ecd54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ecd58: 0x5283f
    ctx->pc = 0x2ecd58u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2ecd5c: 0x80302d
    ctx->pc = 0x2ecd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd60: 0x3c037fff
    ctx->pc = 0x2ecd60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x2ecd64: 0x3c048000
    ctx->pc = 0x2ecd64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x2ecd68: 0x3463ffff
    ctx->pc = 0x2ecd68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ecd6c: 0xa42824
    ctx->pc = 0x2ecd6cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ecd70: 0x431024
    ctx->pc = 0x2ecd70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecd74: 0x3c04ffff
    ctx->pc = 0x2ecd74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2ecd78: 0x4203e
    ctx->pc = 0x2ecd78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2ecd7c: 0x451025
    ctx->pc = 0x2ecd7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ecd80: 0xc43024
    ctx->pc = 0x2ecd80u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ecd84: 0x2103c
    ctx->pc = 0x2ecd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecd88: 0xc22025
    ctx->pc = 0x2ecd88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecd8c: 0x3e00008
    ctx->pc = 0x2ECD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECD90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECD94u;
}
