#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflateSyncPoint
// Address: 0x1efa64 - 0x1efaa4
void inflateSyncPoint_0x1efa64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflateSyncPoint_0x1efa64");
#endif

    ctx->pc = 0x1efa64u;

    // 0x1efa64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1efa64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efa68: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFA68u;
    {
        const bool branch_taken_0x1efa68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA68u;
            // 0x1efa6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa68) {
            ctx->pc = 0x1EFA88u;
            goto label_1efa88;
        }
    }
    ctx->pc = 0x1EFA70u;
    // 0x1efa70: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1efa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1efa74: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFA74u;
    {
        const bool branch_taken_0x1efa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efa74) {
            ctx->pc = 0x1EFA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA74u;
            // 0x1efa78: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA98u;
            goto label_1efa98;
        }
    }
    ctx->pc = 0x1EFA7Cu;
    // 0x1efa7c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1efa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1efa80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFA80u;
    {
        const bool branch_taken_0x1efa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efa80) {
            ctx->pc = 0x1EFA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA80u;
            // 0x1efa84: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA90u;
            goto label_1efa90;
        }
    }
    ctx->pc = 0x1EFA88u;
label_1efa88:
    // 0x1efa88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFA88u;
    {
        const bool branch_taken_0x1efa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA88u;
            // 0x1efa8c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa88) {
            ctx->pc = 0x1EFA98u;
            goto label_1efa98;
        }
    }
    ctx->pc = 0x1EFA90u;
label_1efa90:
    // 0x1efa90: 0xc07c1ea  jal         func_1F07A8
    ctx->pc = 0x1EFA90u;
    SET_GPR_U32(ctx, 31, 0x1EFA98u);
    ctx->pc = 0x1EFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA90u;
            // 0x1efa94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F07A8u;
    if (runtime->hasFunction(0x1F07A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F07A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA98u; }
        if (ctx->pc != 0x1EFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_sync_point_0x1f07a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA98u; }
        if (ctx->pc != 0x1EFA98u) { return; }
    }
    ctx->pc = 0x1EFA98u;
label_1efa98:
    // 0x1efa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA9Cu;
            // 0x1efaa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFA88u: goto label_1efa88;
            case 0x1EFA90u: goto label_1efa90;
            case 0x1EFA98u: goto label_1efa98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFAA4u;
}
