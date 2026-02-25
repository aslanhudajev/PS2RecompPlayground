#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DPRINT
// Address: 0x106468 - 0x106490
void DPRINT_0x106468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DPRINT_0x106468");
#endif

    ctx->pc = 0x106468u;

    // 0x106468: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x106468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10646c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x10646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x106470: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x106470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
    // 0x106474: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x106474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
    // 0x106478: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x106478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x10647c: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x10647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x106480: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x106480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x106484: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x106484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x106488: 0x3e00008  jr          $ra
    ctx->pc = 0x106488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106488u;
            // 0x10648c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106490u;
}
