#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sendIpuCommand
// Address: 0x1611c0 - 0x1611f0
void _sendIpuCommand_0x1611c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sendIpuCommand");


    ctx->pc = 0x1611c0u;

    // 0x1611c0: 0x3c021000
    ctx->pc = 0x1611c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1611c4: 0x42f02
    ctx->pc = 0x1611c4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 4), 28));
    // 0x1611c8: 0x34422000
    ctx->pc = 0x1611c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8192));
    // 0x1611cc: 0x3c030023
    ctx->pc = 0x1611ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1611d0: 0xac440000
    ctx->pc = 0x1611d0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x1611d4: 0x2463a148
    ctx->pc = 0x1611d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943048));
    // 0x1611d8: 0x52880
    ctx->pc = 0x1611d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1611dc: 0x3c040023
    ctx->pc = 0x1611dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1611e0: 0xa32821
    ctx->pc = 0x1611e0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1611e4: 0x8ca20000
    ctx->pc = 0x1611e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1611e8: 0x3e00008
    ctx->pc = 0x1611E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1611ECu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943332), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1611F0u;
}
