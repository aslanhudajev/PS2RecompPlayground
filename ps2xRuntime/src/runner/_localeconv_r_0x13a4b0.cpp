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
// Address: 0x13a4b0 - 0x13a4bc
void _localeconv_r_0x13a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_localeconv_r_0x13a4b0");
#endif

    ctx->pc = 0x13a4b0u;

    // 0x13a4b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13a4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4B4u;
            // 0x13a4b8: 0x2442fb40  addiu       $v0, $v0, -0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A4BCu;
}
