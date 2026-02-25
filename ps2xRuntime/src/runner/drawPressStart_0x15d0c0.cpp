#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawPressStart
// Address: 0x15d0c0 - 0x15d138
void drawPressStart_0x15d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawPressStart_0x15d0c0");
#endif

    ctx->pc = 0x15d0c0u;

    // 0x15d0c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d0d0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D0D0u;
    SET_GPR_U32(ctx, 31, 0x15D0D8u);
    ctx->pc = 0x15D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0D0u;
            // 0x15d0d4: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0D8u; }
        if (ctx->pc != 0x15D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D0D8u; }
        if (ctx->pc != 0x15D0D8u) { return; }
    }
    ctx->pc = 0x15D0D8u;
    // 0x15d0d8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x15d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x15d0dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d0e0: 0x24429cb8  addiu       $v0, $v0, -0x6348
    ctx->pc = 0x15d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941880));
    // 0x15d0e4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D0E4u;
    {
        const bool branch_taken_0x15d0e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0E4u;
            // 0x15d0e8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0e4) {
            ctx->pc = 0x15D108u;
            goto label_15d108;
        }
    }
    ctx->pc = 0x15D0ECu;
    // 0x15d0ec: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d0f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d0f4: 0x24633c30  addiu       $v1, $v1, 0x3C30
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15408));
    // 0x15d0f8: 0x24423bf0  addiu       $v0, $v0, 0x3BF0
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15344));
    // 0x15d0fc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x15d100: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D100u;
    {
        const bool branch_taken_0x15d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D100u;
            // 0x15d104: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d100) {
            ctx->pc = 0x15D120u;
            goto label_15d120;
        }
    }
    ctx->pc = 0x15D108u;
label_15d108:
    // 0x15d108: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d10c: 0x24423c50  addiu       $v0, $v0, 0x3C50
    ctx->pc = 0x15d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    // 0x15d110: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15d114: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d118: 0x24423c10  addiu       $v0, $v0, 0x3C10
    ctx->pc = 0x15d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15376));
    // 0x15d11c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_15d120:
    // 0x15d120: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D120u;
    SET_GPR_U32(ctx, 31, 0x15D128u);
    ctx->pc = 0x15D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D120u;
            // 0x15d124: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D128u; }
        if (ctx->pc != 0x15D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D128u; }
        if (ctx->pc != 0x15D128u) { return; }
    }
    ctx->pc = 0x15D128u;
    // 0x15d128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d130: 0x3e00008  jr          $ra
    ctx->pc = 0x15D130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D130u;
            // 0x15d134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D108u: goto label_15d108;
            case 0x15D120u: goto label_15d120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D138u;
}
