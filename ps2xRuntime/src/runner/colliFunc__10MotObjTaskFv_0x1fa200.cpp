#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: colliFunc__10MotObjTaskFv
// Address: 0x1fa200 - 0x1fa208
void colliFunc__10MotObjTaskFv_0x1fa200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("colliFunc__10MotObjTaskFv");


    ctx->pc = 0x1fa200u;

    // 0x1fa200: 0x3e00008
    ctx->pc = 0x1FA200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA208u;
}
