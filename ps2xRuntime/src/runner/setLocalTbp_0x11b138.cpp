#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setLocalTbp
// Address: 0x11b138 - 0x11b150
void setLocalTbp_0x11b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setLocalTbp_0x11b138");
#endif

    ctx->pc = 0x11b138u;

    // 0x11b138: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11b13c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11b140: 0x24427238  addiu       $v0, $v0, 0x7238
    ctx->pc = 0x11b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29240));
    // 0x11b144: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b148: 0x3e00008  jr          $ra
    ctx->pc = 0x11B148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B148u;
            // 0x11b14c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B150u;
}
