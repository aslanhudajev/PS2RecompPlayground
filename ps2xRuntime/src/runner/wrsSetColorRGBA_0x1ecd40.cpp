#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsSetColorRGBA
// Address: 0x1ecd40 - 0x1ecd54
void wrsSetColorRGBA_0x1ecd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetColorRGBA_0x1ecd40");
#endif

    ctx->pc = 0x1ecd40u;

    // 0x1ecd40: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1ecd40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ecd44: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1ecd44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ecd48: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x1ecd48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ecd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD4Cu;
            // 0x1ecd50: 0xa0880003  sb          $t0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECD54u;
}
