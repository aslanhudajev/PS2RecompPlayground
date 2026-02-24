#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecGetState
// Address: 0x11a140 - 0x11a148
void videoDecGetState_0x11a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecGetState_0x11a140");
#endif

    ctx->pc = 0x11a140u;

    // 0x11a140: 0x3e00008  jr          $ra
    ctx->pc = 0x11A140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A140u;
            // 0x11a144: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A148u;
}
