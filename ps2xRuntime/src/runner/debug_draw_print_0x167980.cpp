#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_draw_print
// Address: 0x167980 - 0x1679a0
void debug_draw_print_0x167980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_draw_print_0x167980");
#endif

    ctx->pc = 0x167980u;

    // 0x167980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x167984: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x167984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x167988: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x167988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x16798c: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x16798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x167990: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x167990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x167994: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x167994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x167998: 0x3e00008  jr          $ra
    ctx->pc = 0x167998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167998u;
            // 0x16799c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1679A0u;
}
