#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setGamePlayerAvtive
// Address: 0x15be30 - 0x15be4c
void setGamePlayerAvtive_0x15be30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setGamePlayerAvtive_0x15be30");
#endif

    ctx->pc = 0x15be30u;

    // 0x15be30: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15be34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15be34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15be38: 0x24633530  addiu       $v1, $v1, 0x3530
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13616));
    // 0x15be3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15be40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15be40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15be44: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE44u;
            // 0x15be48: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BE4Cu;
}
