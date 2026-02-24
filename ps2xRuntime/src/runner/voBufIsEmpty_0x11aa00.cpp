#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufIsEmpty
// Address: 0x11aa00 - 0x11aa0c
void voBufIsEmpty_0x11aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufIsEmpty_0x11aa00");
#endif

    ctx->pc = 0x11aa00u;

    // 0x11aa00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11aa04: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA04u;
            // 0x11aa08: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11AA0Cu;
}
