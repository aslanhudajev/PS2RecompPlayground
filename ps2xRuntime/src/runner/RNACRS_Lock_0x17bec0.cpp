#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RNACRS_Lock
// Address: 0x17bec0 - 0x17bed0
void RNACRS_Lock_0x17bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RNACRS_Lock");


    ctx->pc = 0x17bec0u;

    // 0x17bec0: 0x8f8282e8
    ctx->pc = 0x17bec0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x17bec4: 0x24420001
    ctx->pc = 0x17bec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bec8: 0x3e00008
    ctx->pc = 0x17BEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BECCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BED0u;
}
