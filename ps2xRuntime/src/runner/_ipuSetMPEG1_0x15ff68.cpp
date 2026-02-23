#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ipuSetMPEG1
// Address: 0x15ff68 - 0x15ff90
void _ipuSetMPEG1_0x15ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ipuSetMPEG1");


    ctx->pc = 0x15ff68u;

    // 0x15ff68: 0x3c051000
    ctx->pc = 0x15ff68u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x15ff6c: 0x3c03ff7f
    ctx->pc = 0x15ff6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65407 << 16));
    // 0x15ff70: 0x34a52010
    ctx->pc = 0x15ff70u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8208));
    // 0x15ff74: 0x3463ffff
    ctx->pc = 0x15ff74u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x15ff78: 0x8ca20000
    ctx->pc = 0x15ff78u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x15ff7c: 0x425c0
    ctx->pc = 0x15ff7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 23));
    // 0x15ff80: 0x431024
    ctx->pc = 0x15ff80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ff84: 0x441025
    ctx->pc = 0x15ff84u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ff88: 0x3e00008
    ctx->pc = 0x15FF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FF8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FF90u;
}
