#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_SetCbLock
// Address: 0x17e1b0 - 0x17e1c0
void SVM_SetCbLock_0x17e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_SetCbLock");


    ctx->pc = 0x17e1b0u;

    // 0x17e1b0: 0xaf848910
    ctx->pc = 0x17e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 4));
    // 0x17e1b4: 0xaf858914
    ctx->pc = 0x17e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 5));
    // 0x17e1b8: 0x3e00008
    ctx->pc = 0x17E1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E1C0u;
}
