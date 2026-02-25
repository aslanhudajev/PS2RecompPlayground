#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetRankItemName
// Address: 0x198580 - 0x198598
void GetRankItemName_0x198580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetRankItemName_0x198580");
#endif

    ctx->pc = 0x198580u;

    // 0x198580: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x198584: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x198588: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19858c: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x19858cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
    // 0x198590: 0x3e00008  jr          $ra
    ctx->pc = 0x198590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198590u;
            // 0x198594: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198598u;
}
