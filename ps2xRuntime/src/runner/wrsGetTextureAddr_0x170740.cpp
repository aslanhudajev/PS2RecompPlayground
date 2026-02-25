#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetTextureAddr
// Address: 0x170740 - 0x17075c
void wrsGetTextureAddr_0x170740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetTextureAddr_0x170740");
#endif

    ctx->pc = 0x170740u;

    // 0x170740: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x170740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x170744: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x170744u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170748: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x170748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17074c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x170750: 0x24421640  addiu       $v0, $v0, 0x1640
    ctx->pc = 0x170750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x170754: 0x3e00008  jr          $ra
    ctx->pc = 0x170754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170754u;
            // 0x170758: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17075Cu;
}
