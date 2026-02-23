#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvbdec_CheckOfsAcDataErr
// Address: 0x182aa8 - 0x182ab0
void mpvbdec_CheckOfsAcDataErr_0x182aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvbdec_CheckOfsAcDataErr");


    ctx->pc = 0x182aa8u;

    // 0x182aa8: 0x3e00008
    ctx->pc = 0x182AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182AB0u;
}
