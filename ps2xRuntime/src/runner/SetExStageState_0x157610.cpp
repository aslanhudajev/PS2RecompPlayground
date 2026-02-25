#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetExStageState
// Address: 0x157610 - 0x15762c
void SetExStageState_0x157610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetExStageState_0x157610");
#endif

    ctx->pc = 0x157610u;

    // 0x157610: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x157610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x157614: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x157614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x157618: 0x24632c70  addiu       $v1, $v1, 0x2C70
    ctx->pc = 0x157618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11376));
    // 0x15761c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157624: 0x3e00008  jr          $ra
    ctx->pc = 0x157624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157624u;
            // 0x157628: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15762Cu;
}
