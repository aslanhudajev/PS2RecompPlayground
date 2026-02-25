#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetEsAddr
// Address: 0x181a50 - 0x181a6c
void GetEsAddr_0x181a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetEsAddr_0x181a50");
#endif

    ctx->pc = 0x181a50u;

    // 0x181a50: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x181a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x181a54: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x181a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181a58: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x181a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x181a5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x181a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181a60: 0x24423de0  addiu       $v0, $v0, 0x3DE0
    ctx->pc = 0x181a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15840));
    // 0x181a64: 0x3e00008  jr          $ra
    ctx->pc = 0x181A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A64u;
            // 0x181a68: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181A6Cu;
}
