#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_SetCbUnlock
// Address: 0x17e1c0 - 0x17e1d0
void SVM_SetCbUnlock_0x17e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_SetCbUnlock");


    ctx->pc = 0x17e1c0u;

    // 0x17e1c0: 0xaf848918
    ctx->pc = 0x17e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936856), GPR_U32(ctx, 4));
    // 0x17e1c4: 0xaf85891c
    ctx->pc = 0x17e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936860), GPR_U32(ctx, 5));
    // 0x17e1c8: 0x3e00008
    ctx->pc = 0x17E1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E1D0u;
}
