#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufDelete
// Address: 0x11a918 - 0x11a920
void voBufDelete_0x11a918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufDelete_0x11a918");
#endif

    ctx->pc = 0x11a918u;

    // 0x11a918: 0x3e00008  jr          $ra
    ctx->pc = 0x11A918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A920u;
}
