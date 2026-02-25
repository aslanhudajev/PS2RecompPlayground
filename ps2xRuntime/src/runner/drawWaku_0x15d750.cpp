#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawWaku
// Address: 0x15d750 - 0x15d7c8
void drawWaku_0x15d750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawWaku_0x15d750");
#endif

    ctx->pc = 0x15d750u;

    // 0x15d750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d754: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d75c: 0x24429c78  addiu       $v0, $v0, -0x6388
    ctx->pc = 0x15d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941816));
    // 0x15d760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d768: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15d768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15d76c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D76Cu;
    SET_GPR_U32(ctx, 31, 0x15D774u);
    ctx->pc = 0x15D770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D76Cu;
            // 0x15d770: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D774u; }
        if (ctx->pc != 0x15D774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D774u; }
        if (ctx->pc != 0x15D774u) { return; }
    }
    ctx->pc = 0x15D774u;
    // 0x15d774: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D774u;
    {
        const bool branch_taken_0x15d774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D774u;
            // 0x15d778: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d774) {
            ctx->pc = 0x15D798u;
            goto label_15d798;
        }
    }
    ctx->pc = 0x15D77Cu;
    // 0x15d77c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d780: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d784: 0x246348f0  addiu       $v1, $v1, 0x48F0
    ctx->pc = 0x15d784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18672));
    // 0x15d788: 0x244248b0  addiu       $v0, $v0, 0x48B0
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18608));
    // 0x15d78c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15d78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x15d790: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D790u;
    {
        const bool branch_taken_0x15d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D790u;
            // 0x15d794: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d790) {
            ctx->pc = 0x15D7B0u;
            goto label_15d7b0;
        }
    }
    ctx->pc = 0x15D798u;
label_15d798:
    // 0x15d798: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d79c: 0x24424910  addiu       $v0, $v0, 0x4910
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18704));
    // 0x15d7a0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15d7a4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d7a8: 0x244248d0  addiu       $v0, $v0, 0x48D0
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18640));
    // 0x15d7ac: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_15d7b0:
    // 0x15d7b0: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D7B0u;
    SET_GPR_U32(ctx, 31, 0x15D7B8u);
    ctx->pc = 0x15D7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7B0u;
            // 0x15d7b4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7B8u; }
        if (ctx->pc != 0x15D7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D7B8u; }
        if (ctx->pc != 0x15D7B8u) { return; }
    }
    ctx->pc = 0x15D7B8u;
    // 0x15d7b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D7C0u;
            // 0x15d7c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D798u: goto label_15d798;
            case 0x15D7B0u: goto label_15d7b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D7C8u;
}
