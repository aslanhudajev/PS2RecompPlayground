#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawCharaWaku
// Address: 0x15d650 - 0x15d6c8
void drawCharaWaku_0x15d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawCharaWaku_0x15d650");
#endif

    ctx->pc = 0x15d650u;

    // 0x15d650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d654: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d65c: 0x24429c88  addiu       $v0, $v0, -0x6378
    ctx->pc = 0x15d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941832));
    // 0x15d660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d664: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d668: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15d668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15d66c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D66Cu;
    SET_GPR_U32(ctx, 31, 0x15D674u);
    ctx->pc = 0x15D670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D66Cu;
            // 0x15d670: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D674u; }
        if (ctx->pc != 0x15D674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D674u; }
        if (ctx->pc != 0x15D674u) { return; }
    }
    ctx->pc = 0x15D674u;
    // 0x15d674: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D674u;
    {
        const bool branch_taken_0x15d674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D674u;
            // 0x15d678: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d674) {
            ctx->pc = 0x15D698u;
            goto label_15d698;
        }
    }
    ctx->pc = 0x15D67Cu;
    // 0x15d67c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d680: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d684: 0x246347f0  addiu       $v1, $v1, 0x47F0
    ctx->pc = 0x15d684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18416));
    // 0x15d688: 0x244247b0  addiu       $v0, $v0, 0x47B0
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18352));
    // 0x15d68c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x15d690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D690u;
    {
        const bool branch_taken_0x15d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D690u;
            // 0x15d694: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d690) {
            ctx->pc = 0x15D6B0u;
            goto label_15d6b0;
        }
    }
    ctx->pc = 0x15D698u;
label_15d698:
    // 0x15d698: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d69c: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
    // 0x15d6a0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15d6a4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d6a8: 0x244247d0  addiu       $v0, $v0, 0x47D0
    ctx->pc = 0x15d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18384));
    // 0x15d6ac: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_15d6b0:
    // 0x15d6b0: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D6B0u;
    SET_GPR_U32(ctx, 31, 0x15D6B8u);
    ctx->pc = 0x15D6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6B0u;
            // 0x15d6b4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6B8u; }
        if (ctx->pc != 0x15D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D6B8u; }
        if (ctx->pc != 0x15D6B8u) { return; }
    }
    ctx->pc = 0x15D6B8u;
    // 0x15d6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15D6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6C0u;
            // 0x15d6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D698u: goto label_15d698;
            case 0x15D6B0u: goto label_15d6b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D6C8u;
}
