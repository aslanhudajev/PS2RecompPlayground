#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _RefImageInit
// Address: 0x12c1d0 - 0x12c1f0
void ps2__RefImageInit_0x12c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__RefImageInit_0x12c1d0");
#endif

    ctx->pc = 0x12c1d0u;

    // 0x12c1d0: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x12c1d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x12c1d4: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x12c1d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x12c1d8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x12c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x12c1dc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x12c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x12c1e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c1e4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x12c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x12c1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1E8u;
            // 0x12c1ec: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C1F0u;
}
