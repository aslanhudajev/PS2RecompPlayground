#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setGamePlayerMachine
// Address: 0x15bdb0 - 0x15bdc8
void setGamePlayerMachine_0x15bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setGamePlayerMachine_0x15bdb0");
#endif

    ctx->pc = 0x15bdb0u;

    // 0x15bdb0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bdb4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bdb8: 0x24633548  addiu       $v1, $v1, 0x3548
    ctx->pc = 0x15bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13640));
    // 0x15bdbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDC0u;
            // 0x15bdc4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BDC8u;
}
