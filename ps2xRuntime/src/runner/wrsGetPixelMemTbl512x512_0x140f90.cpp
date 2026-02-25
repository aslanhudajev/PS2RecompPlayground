#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetPixelMemTbl512x512
// Address: 0x140f90 - 0x140fbc
void wrsGetPixelMemTbl512x512_0x140f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetPixelMemTbl512x512_0x140f90");
#endif

    ctx->pc = 0x140f90u;

    // 0x140f90: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x140f90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x140f94: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x140F94u;
    {
        const bool branch_taken_0x140f94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F94u;
            // 0x140f98: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f94) {
            ctx->pc = 0x140FA4u;
            goto label_140fa4;
        }
    }
    ctx->pc = 0x140F9Cu;
    // 0x140f9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140F9Cu;
    {
        const bool branch_taken_0x140f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F9Cu;
            // 0x140fa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f9c) {
            ctx->pc = 0x140FB4u;
            goto label_140fb4;
        }
    }
    ctx->pc = 0x140FA4u;
label_140fa4:
    // 0x140fa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x140fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140fa8: 0x24427830  addiu       $v0, $v0, 0x7830
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30768));
    // 0x140fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140fb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140fb4:
    // 0x140fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x140FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140FA4u: goto label_140fa4;
            case 0x140FB4u: goto label_140fb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140FBCu;
}
