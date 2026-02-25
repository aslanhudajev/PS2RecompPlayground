#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapItemFree
// Address: 0x14cd20 - 0x14cd98
void MapItemFree_0x14cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapItemFree_0x14cd20");
#endif

    ctx->pc = 0x14cd20u;

    // 0x14cd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14cd28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14cd2c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x14cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14cd30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CD30u;
    {
        const bool branch_taken_0x14cd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD30u;
            // 0x14cd34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd30) {
            ctx->pc = 0x14CD40u;
            goto label_14cd40;
        }
    }
    ctx->pc = 0x14CD38u;
    // 0x14cd38: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x14cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x14cd3c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x14cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_14cd40:
    // 0x14cd40: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x14cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x14cd44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CD44u;
    {
        const bool branch_taken_0x14cd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd44) {
            ctx->pc = 0x14CD58u;
            goto label_14cd58;
        }
    }
    ctx->pc = 0x14CD4Cu;
    // 0x14cd4c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x14cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x14cd50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14CD50u;
    {
        const bool branch_taken_0x14cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD50u;
            // 0x14cd54: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd50) {
            ctx->pc = 0x14CD68u;
            goto label_14cd68;
        }
    }
    ctx->pc = 0x14CD58u;
label_14cd58:
    // 0x14cd58: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x14cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x14cd5c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cd60: 0xac229d08  sw          $v0, -0x62F8($at)
    ctx->pc = 0x14cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941960), GPR_U32(ctx, 2));
    // 0x14cd64: 0x0  nop
    ctx->pc = 0x14cd64u;
    // NOP
label_14cd68:
    // 0x14cd68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14cd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14cd6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CD6Cu;
    {
        const bool branch_taken_0x14cd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cd6c) {
            ctx->pc = 0x14CD80u;
            goto label_14cd80;
        }
    }
    ctx->pc = 0x14CD74u;
    // 0x14cd74: 0xc060564  jal         func_181590
    ctx->pc = 0x14CD74u;
    SET_GPR_U32(ctx, 31, 0x14CD7Cu);
    ctx->pc = 0x181590u;
    if (runtime->hasFunction(0x181590u)) {
        auto targetFn = runtime->lookupFunction(0x181590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD7Cu; }
        if (ctx->pc != 0x14CD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFree_0x181590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD7Cu; }
        if (ctx->pc != 0x14CD7Cu) { return; }
    }
    ctx->pc = 0x14CD7Cu;
    // 0x14cd7c: 0x0  nop
    ctx->pc = 0x14cd7cu;
    // NOP
label_14cd80:
    // 0x14cd80: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x14CD80u;
    SET_GPR_U32(ctx, 31, 0x14CD88u);
    ctx->pc = 0x14CD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD80u;
            // 0x14cd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD88u; }
        if (ctx->pc != 0x14CD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CD88u; }
        if (ctx->pc != 0x14CD88u) { return; }
    }
    ctx->pc = 0x14CD88u;
    // 0x14cd88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14cd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14cd8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14cd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cd90: 0x3e00008  jr          $ra
    ctx->pc = 0x14CD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CD90u;
            // 0x14cd94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CD40u: goto label_14cd40;
            case 0x14CD58u: goto label_14cd58;
            case 0x14CD68u: goto label_14cd68;
            case 0x14CD80u: goto label_14cd80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CD98u;
}
