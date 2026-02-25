#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnsetNameEntry
// Address: 0x15bca0 - 0x15bcb8
void UnsetNameEntry_0x15bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnsetNameEntry_0x15bca0");
#endif

    ctx->pc = 0x15bca0u;

    // 0x15bca0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bca4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bca8: 0x24633540  addiu       $v1, $v1, 0x3540
    ctx->pc = 0x15bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13632));
    // 0x15bcac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BCB0u;
            // 0x15bcb4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BCB8u;
}
