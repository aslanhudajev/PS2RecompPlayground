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
// Address: 0x17e070 - 0x17e084
void wrsSetColorRGBA_0x17e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsSetColorRGBA_0x17e070");
#endif

    ctx->pc = 0x17e070u;

    // 0x17e070: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x17e070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17e074: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x17e074u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x17e078: 0xa0870002  sb          $a3, 0x2($a0)
    ctx->pc = 0x17e078u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x17e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E07Cu;
            // 0x17e080: 0xa0880003  sb          $t0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E084u;
}
