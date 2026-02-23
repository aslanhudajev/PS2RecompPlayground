#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJMEM_Error
// Address: 0x17bf20 - 0x17bf3c
void SJMEM_Error_0x17bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJMEM_Error");


    ctx->pc = 0x17bf20u;

label_17bf20:
    // 0x17bf20: 0x0
    ctx->pc = 0x17bf20u;
    // NOP
    // 0x17bf24: 0x0
    ctx->pc = 0x17bf24u;
    // NOP
    // 0x17bf28: 0x0
    ctx->pc = 0x17bf28u;
    // NOP
    // 0x17bf2c: 0x0
    ctx->pc = 0x17bf2cu;
    // NOP
    // 0x17bf30: 0x0
    ctx->pc = 0x17bf30u;
    // NOP
    // 0x17bf34: 0x1000fffa
    ctx->pc = 0x17BF34u;
    {
        const bool branch_taken_0x17bf34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x17bf34) {
            ctx->pc = 0x17BF20u;
            goto label_17bf20;
        }
    }
    ctx->pc = 0x17BF3Cu;
}
