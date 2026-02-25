#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isCutin
// Address: 0x15bd00 - 0x15bd18
void isCutin_0x15bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isCutin_0x15bd00");
#endif

    ctx->pc = 0x15bd00u;

    // 0x15bd00: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15bd04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x15bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bd08: 0x24423560  addiu       $v0, $v0, 0x3560
    ctx->pc = 0x15bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13664));
    // 0x15bd0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bd10: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD10u;
            // 0x15bd14: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BD18u;
}
