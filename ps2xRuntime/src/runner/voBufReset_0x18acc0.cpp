#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufReset
// Address: 0x18acc0 - 0x18accc
void voBufReset_0x18acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufReset_0x18acc0");
#endif

    ctx->pc = 0x18acc0u;

    // 0x18acc0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18acc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18ACC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACC4u;
            // 0x18acc8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18ACCCu;
}
