#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetAutoSave
// Address: 0x1973f0 - 0x1973fc
void SetAutoSave_0x1973f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetAutoSave_0x1973f0");
#endif

    ctx->pc = 0x1973f0u;

    // 0x1973f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1973f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1973F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1973F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1973F4u;
            // 0x1973f8: 0xac241610  sw          $a0, 0x1610($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5648), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1973FCu;
}
