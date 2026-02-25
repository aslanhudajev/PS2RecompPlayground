#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setGamePlayerChar
// Address: 0x15bd70 - 0x15bd88
void setGamePlayerChar_0x15bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setGamePlayerChar_0x15bd70");
#endif

    ctx->pc = 0x15bd70u;

    // 0x15bd70: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bd74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bd78: 0x24633558  addiu       $v1, $v1, 0x3558
    ctx->pc = 0x15bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13656));
    // 0x15bd7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x15BD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD80u;
            // 0x15bd84: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BD88u;
}
