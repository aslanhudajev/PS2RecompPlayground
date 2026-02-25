#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setCutinEnd
// Address: 0x15bd20 - 0x15bd4c
void setCutinEnd_0x15bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setCutinEnd_0x15bd20");
#endif

    ctx->pc = 0x15bd20u;

    // 0x15bd20: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bd24: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x15bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bd28: 0x24633560  addiu       $v1, $v1, 0x3560
    ctx->pc = 0x15bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13664));
    // 0x15bd2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd30: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x15bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15bd34: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bd38: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x15bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x15bd3c: 0x24633568  addiu       $v1, $v1, 0x3568
    ctx->pc = 0x15bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13672));
    // 0x15bd40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15bd44: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD44u;
            // 0x15bd48: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BD4Cu;
}
