#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _localeconv_r
// Address: 0x12faf0 - 0x12fafc
void _localeconv_r_0x12faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_localeconv_r_0x12faf0");
#endif

    ctx->pc = 0x12faf0u;

    // 0x12faf0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x12faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12faf4: 0x3e00008  jr          $ra
    ctx->pc = 0x12FAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAF4u;
            // 0x12faf8: 0x24425948  addiu       $v0, $v0, 0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22856));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FAFCu;
}
