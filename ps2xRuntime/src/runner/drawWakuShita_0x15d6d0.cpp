#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawWakuShita
// Address: 0x15d6d0 - 0x15d748
void drawWakuShita_0x15d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawWakuShita_0x15d6d0");
#endif

    ctx->pc = 0x15d6d0u;

    // 0x15d6d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d6d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d6d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d6dc: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x15d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x15d6e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d6e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6e8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15d6ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D6ECu;
    SET_GPR_U32(ctx, 31, 0x15D6F4u);
    ctx->pc = 0x15D6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6ECu;
            // 0x15d6f0: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6F4u; }
        if (ctx->pc != 0x15D6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6F4u; }
        if (ctx->pc != 0x15D6F4u) { return; }
    }
    ctx->pc = 0x15D6F4u;
    // 0x15d6f4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D6F4u;
    {
        const bool branch_taken_0x15d6f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6F4u;
            // 0x15d6f8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6f4) {
            ctx->pc = 0x15D718u;
            goto label_15d718;
        }
    }
    ctx->pc = 0x15D6FCu;
    // 0x15d6fc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d700: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d704: 0x24634870  addiu       $v1, $v1, 0x4870
    ctx->pc = 0x15d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18544));
    // 0x15d708: 0x24424830  addiu       $v0, $v0, 0x4830
    ctx->pc = 0x15d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18480));
    // 0x15d70c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15d70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x15d710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D710u;
    {
        const bool branch_taken_0x15d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D710u;
            // 0x15d714: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d710) {
            ctx->pc = 0x15D730u;
            goto label_15d730;
        }
    }
    ctx->pc = 0x15D718u;
label_15d718:
    // 0x15d718: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d71c: 0x24424890  addiu       $v0, $v0, 0x4890
    ctx->pc = 0x15d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18576));
    // 0x15d720: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15d724: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d728: 0x24424850  addiu       $v0, $v0, 0x4850
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18512));
    // 0x15d72c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_15d730:
    // 0x15d730: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D730u;
    SET_GPR_U32(ctx, 31, 0x15D738u);
    ctx->pc = 0x15D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D730u;
            // 0x15d734: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D738u; }
        if (ctx->pc != 0x15D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D738u; }
        if (ctx->pc != 0x15D738u) { return; }
    }
    ctx->pc = 0x15D738u;
    // 0x15d738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d740: 0x3e00008  jr          $ra
    ctx->pc = 0x15D740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D740u;
            // 0x15d744: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D718u: goto label_15d718;
            case 0x15D730u: goto label_15d730;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D748u;
}
