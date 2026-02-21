#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSortObjects
// Address: 0x2c7b98 - 0x2c7bb4
void InitSortObjects_0x2c7b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7b98u;

    // 0x2c7b98: 0x3c020039
    ctx->pc = 0x2c7b98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c7b9c: 0xac4009c0
    ctx->pc = 0x2c7b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2496), GPR_U32(ctx, 0));
    // 0x2c7ba0: 0x3c020039
    ctx->pc = 0x2c7ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c7ba4: 0xac4059d0
    ctx->pc = 0x2c7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22992), GPR_U32(ctx, 0));
    // 0x2c7ba8: 0x3c02003a
    ctx->pc = 0x2c7ba8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c7bac: 0x3e00008
    ctx->pc = 0x2C7BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7BB0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945248), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7BB4u;
}
