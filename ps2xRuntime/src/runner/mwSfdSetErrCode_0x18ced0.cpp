#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdSetErrCode
// Address: 0x18ced0 - 0x18cee0
void mwSfdSetErrCode_0x18ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdSetErrCode");
    ctx->pc = 0x18ced0u;

    // 0x18ced0: 0x80102d
    ctx->pc = 0x18ced0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ced4: 0x3c030024
    ctx->pc = 0x18ced4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x18ced8: 0x3e00008
    ctx->pc = 0x18CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CEDCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15164), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CEE0u;
}
