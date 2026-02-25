#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1ISize
// Address: 0x1178a8 - 0x1178b4
void Vumem1ISize_0x1178a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1ISize_0x1178a8");
#endif

    ctx->pc = 0x1178a8u;

    // 0x1178a8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1178ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1178ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1178B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178ACu;
            // 0x1178b0: 0x8c627208  lw          $v0, 0x7208($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1178B4u;
}
