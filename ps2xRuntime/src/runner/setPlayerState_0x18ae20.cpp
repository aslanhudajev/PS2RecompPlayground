#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setPlayerState
// Address: 0x18ae20 - 0x18ae40
void setPlayerState_0x18ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setPlayerState_0x18ae20");
#endif

    ctx->pc = 0x18ae20u;

    // 0x18ae20: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18ae24: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18ae24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ae28: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x18ae2c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18ae30: 0x246300c4  addiu       $v1, $v1, 0xC4
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
    // 0x18ae34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ae38: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE38u;
            // 0x18ae3c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AE40u;
}
