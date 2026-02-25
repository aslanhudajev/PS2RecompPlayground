#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_trees_fixed
// Address: 0x1f1074 - 0x1f10a4
void inflate_trees_fixed_0x1f1074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_trees_fixed_0x1f1074");
#endif

    ctx->pc = 0x1f1074u;

    // 0x1f1074: 0x8f82802c  lw          $v0, -0x7FD4($gp)
    ctx->pc = 0x1f1074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1f1078: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f1078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f107c: 0x8f828030  lw          $v0, -0x7FD0($gp)
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1f1080: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f1080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f1084: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1088: 0x2442ad50  addiu       $v0, $v0, -0x52B0
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946128));
    // 0x1f108c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f108cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f1090: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f1094: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x1f1098: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1f1098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1f109c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F10A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F109Cu;
            // 0x1f10a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F10A4u;
}
