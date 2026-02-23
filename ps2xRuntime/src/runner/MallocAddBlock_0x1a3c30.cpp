#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MallocAddBlock
// Address: 0x1a3c30 - 0x1a3c40
void MallocAddBlock_0x1a3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MallocAddBlock");


    ctx->pc = 0x1a3c30u;

    // 0x1a3c30: 0xaf848990
    ctx->pc = 0x1a3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 4));
    // 0x1a3c34: 0xac850000
    ctx->pc = 0x1a3c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a3c38: 0x3e00008
    ctx->pc = 0x1A3C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3C40u;
}
