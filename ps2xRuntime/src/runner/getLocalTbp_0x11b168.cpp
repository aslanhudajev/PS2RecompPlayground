#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getLocalTbp
// Address: 0x11b168 - 0x11b188
void getLocalTbp_0x11b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getLocalTbp_0x11b168");
#endif

    ctx->pc = 0x11b168u;

    // 0x11b168: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11b168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11b16c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b170: 0x8c8372b8  lw          $v1, 0x72B8($a0)
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29368)));
    // 0x11b174: 0x24427238  addiu       $v0, $v0, 0x7238
    ctx->pc = 0x11b174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29240));
    // 0x11b178: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11b178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11b17c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11b180: 0x3e00008  jr          $ra
    ctx->pc = 0x11B180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B180u;
            // 0x11b184: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B188u;
}
