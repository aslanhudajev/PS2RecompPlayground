#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiEntryErrFunc
// Address: 0x178a20 - 0x178a34
void htCiEntryErrFunc_0x178a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiEntryErrFunc");


    ctx->pc = 0x178a20u;

    // 0x178a20: 0x3c020024
    ctx->pc = 0x178a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x178a24: 0x3c030024
    ctx->pc = 0x178a24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x178a28: 0xac44a0ac
    ctx->pc = 0x178a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942892), GPR_U32(ctx, 4));
    // 0x178a2c: 0x3e00008
    ctx->pc = 0x178A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A30u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942896), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178A34u;
}
