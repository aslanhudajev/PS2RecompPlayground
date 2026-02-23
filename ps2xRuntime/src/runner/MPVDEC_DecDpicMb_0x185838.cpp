#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVDEC_DecDpicMb
// Address: 0x185838 - 0x185840
void MPVDEC_DecDpicMb_0x185838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVDEC_DecDpicMb");


    ctx->pc = 0x185838u;

    // 0x185838: 0x3e00008
    ctx->pc = 0x185838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185840u;
}
