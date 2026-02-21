#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ipuSetMPEG1
// Address: 0x2f10c8 - 0x2f10f0
void _ipuSetMPEG1_0x2f10c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f10c8u;

    // 0x2f10c8: 0x3c051000
    ctx->pc = 0x2f10c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2f10cc: 0x3c03ff7f
    ctx->pc = 0x2f10ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65407 << 16));
    // 0x2f10d0: 0x34a52010
    ctx->pc = 0x2f10d0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8208));
    // 0x2f10d4: 0x3463ffff
    ctx->pc = 0x2f10d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2f10d8: 0x8ca20000
    ctx->pc = 0x2f10d8u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x2f10dc: 0x425c0
    ctx->pc = 0x2f10dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 23));
    // 0x2f10e0: 0x431024
    ctx->pc = 0x2f10e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f10e4: 0x441025
    ctx->pc = 0x2f10e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f10e8: 0x3e00008
    ctx->pc = 0x2F10E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F10ECu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F10F0u;
}
