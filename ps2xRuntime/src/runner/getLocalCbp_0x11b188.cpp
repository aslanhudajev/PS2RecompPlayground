#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getLocalCbp
// Address: 0x11b188 - 0x11b1a8
void getLocalCbp_0x11b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getLocalCbp_0x11b188");
#endif

    ctx->pc = 0x11b188u;

    // 0x11b188: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11b188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11b18c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b190: 0x8c8372b8  lw          $v1, 0x72B8($a0)
    ctx->pc = 0x11b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29368)));
    // 0x11b194: 0x24427278  addiu       $v0, $v0, 0x7278
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29304));
    // 0x11b198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11b198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11b19c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B1A0u;
            // 0x11b1a4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B1A8u;
}
