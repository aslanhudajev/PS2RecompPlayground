#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjectDmaFree
// Address: 0x2c0678 - 0x2c0694
void pbObjectDmaFree_0x2c0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c0678u;

    // 0x2c0678: 0x3c020037
    ctx->pc = 0x2c0678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c067c: 0xac402974
    ctx->pc = 0x2c067cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10612), GPR_U32(ctx, 0));
    // 0x2c0680: 0x3c020037
    ctx->pc = 0x2c0680u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0684: 0xac402978
    ctx->pc = 0x2c0684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10616), GPR_U32(ctx, 0));
    // 0x2c0688: 0x3c020037
    ctx->pc = 0x2c0688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c068c: 0x3e00008
    ctx->pc = 0x2C068Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0690u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10608), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0694u;
}
