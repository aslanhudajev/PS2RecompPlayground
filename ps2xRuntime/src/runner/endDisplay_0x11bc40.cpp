#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: endDisplay
// Address: 0x11bc40 - 0x11bc4c
void endDisplay_0x11bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("endDisplay_0x11bc40");
#endif

    ctx->pc = 0x11bc40u;

    // 0x11bc40: 0xaf80843c  sw          $zero, -0x7BC4($gp)
    ctx->pc = 0x11bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 0));
    // 0x11bc44: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC44u;
            // 0x11bc48: 0xaf8084c8  sw          $zero, -0x7B38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BC4Cu;
}
