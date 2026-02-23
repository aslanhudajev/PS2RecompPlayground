#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_Error
// Address: 0x17cb08 - 0x17cb24
void SJUNI_Error_0x17cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_Error");


    ctx->pc = 0x17cb08u;

label_17cb08:
    // 0x17cb08: 0x0
    ctx->pc = 0x17cb08u;
    // NOP
    // 0x17cb0c: 0x0
    ctx->pc = 0x17cb0cu;
    // NOP
    // 0x17cb10: 0x0
    ctx->pc = 0x17cb10u;
    // NOP
    // 0x17cb14: 0x0
    ctx->pc = 0x17cb14u;
    // NOP
    // 0x17cb18: 0x0
    ctx->pc = 0x17cb18u;
    // NOP
    // 0x17cb1c: 0x1000fffa
    ctx->pc = 0x17CB1Cu;
    {
        const bool branch_taken_0x17cb1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17cb1c) {
            ctx->pc = 0x17CB08u;
            goto label_17cb08;
        }
    }
    ctx->pc = 0x17CB24u;
}
