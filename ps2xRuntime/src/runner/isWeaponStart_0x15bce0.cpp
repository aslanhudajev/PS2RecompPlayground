#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isWeaponStart
// Address: 0x15bce0 - 0x15bcf8
void isWeaponStart_0x15bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isWeaponStart_0x15bce0");
#endif

    ctx->pc = 0x15bce0u;

    // 0x15bce0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15bce4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bce8: 0x24423568  addiu       $v0, $v0, 0x3568
    ctx->pc = 0x15bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13672));
    // 0x15bcec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCF0u;
            // 0x15bcf4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BCF8u;
}
