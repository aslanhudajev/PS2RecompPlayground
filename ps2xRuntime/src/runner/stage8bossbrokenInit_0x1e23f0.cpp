#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8bossbrokenInit
// Address: 0x1e23f0 - 0x1e23fc
void stage8bossbrokenInit_0x1e23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8bossbrokenInit_0x1e23f0");
#endif

    ctx->pc = 0x1e23f0u;

    // 0x1e23f0: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e23f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e23f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E23F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23F4u;
            // 0x1e23f8: 0xac202da8  sw          $zero, 0x2DA8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E23FCu;
}
