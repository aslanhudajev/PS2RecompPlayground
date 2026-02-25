#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setGamePlayerTexture
// Address: 0x15bd90 - 0x15bda8
void setGamePlayerTexture_0x15bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setGamePlayerTexture_0x15bd90");
#endif

    ctx->pc = 0x15bd90u;

    // 0x15bd90: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15bd94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15bd98: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x15bd9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDA0u;
            // 0x15bda4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BDA8u;
}
