#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetPixelMemTbl256x256
// Address: 0x140f60 - 0x140f8c
void wrsGetPixelMemTbl256x256_0x140f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetPixelMemTbl256x256_0x140f60");
#endif

    ctx->pc = 0x140f60u;

    // 0x140f60: 0x28810021  slti        $at, $a0, 0x21
    ctx->pc = 0x140f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x140f64: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x140F64u;
    {
        const bool branch_taken_0x140f64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x140F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F64u;
            // 0x140f68: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f64) {
            ctx->pc = 0x140F74u;
            goto label_140f74;
        }
    }
    ctx->pc = 0x140F6Cu;
    // 0x140f6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x140F6Cu;
    {
        const bool branch_taken_0x140f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F6Cu;
            // 0x140f70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f6c) {
            ctx->pc = 0x140F84u;
            goto label_140f84;
        }
    }
    ctx->pc = 0x140F74u;
label_140f74:
    // 0x140f74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x140f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140f78: 0x244277b0  addiu       $v0, $v0, 0x77B0
    ctx->pc = 0x140f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30640));
    // 0x140f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140f80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140f84:
    // 0x140f84: 0x3e00008  jr          $ra
    ctx->pc = 0x140F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140F74u: goto label_140f74;
            case 0x140F84u: goto label_140f84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140F8Cu;
}
