#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_Error
// Address: 0x17c410 - 0x17c42c
void SJRBF_Error_0x17c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_Error");


    ctx->pc = 0x17c410u;

label_17c410:
    // 0x17c410: 0x0
    ctx->pc = 0x17c410u;
    // NOP
    // 0x17c414: 0x0
    ctx->pc = 0x17c414u;
    // NOP
    // 0x17c418: 0x0
    ctx->pc = 0x17c418u;
    // NOP
    // 0x17c41c: 0x0
    ctx->pc = 0x17c41cu;
    // NOP
    // 0x17c420: 0x0
    ctx->pc = 0x17c420u;
    // NOP
    // 0x17c424: 0x1000fffa
    ctx->pc = 0x17C424u;
    {
        const bool branch_taken_0x17c424 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17c424) {
            ctx->pc = 0x17C410u;
            goto label_17c410;
        }
    }
    ctx->pc = 0x17C42Cu;
}
