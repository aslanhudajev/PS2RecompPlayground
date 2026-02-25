#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawPlayerNo2
// Address: 0x15d2c0 - 0x15d338
void drawPlayerNo2_0x15d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawPlayerNo2_0x15d2c0");
#endif

    ctx->pc = 0x15d2c0u;

    // 0x15d2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15d2c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d2c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d2cc: 0x24429ca0  addiu       $v0, $v0, -0x6360
    ctx->pc = 0x15d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x15d2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2d8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x15d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x15d2dc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D2DCu;
    SET_GPR_U32(ctx, 31, 0x15D2E4u);
    ctx->pc = 0x15D2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2DCu;
            // 0x15d2e0: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2E4u; }
        if (ctx->pc != 0x15D2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2E4u; }
        if (ctx->pc != 0x15D2E4u) { return; }
    }
    ctx->pc = 0x15D2E4u;
    // 0x15d2e4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D2E4u;
    {
        const bool branch_taken_0x15d2e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2E4u;
            // 0x15d2e8: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2e4) {
            ctx->pc = 0x15D308u;
            goto label_15d308;
        }
    }
    ctx->pc = 0x15D2ECu;
    // 0x15d2ec: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d2f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d2f4: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x15d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x15d2f8: 0x24423fb0  addiu       $v0, $v0, 0x3FB0
    ctx->pc = 0x15d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16304));
    // 0x15d2fc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x15d300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D300u;
    {
        const bool branch_taken_0x15d300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D300u;
            // 0x15d304: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d300) {
            ctx->pc = 0x15D320u;
            goto label_15d320;
        }
    }
    ctx->pc = 0x15D308u;
label_15d308:
    // 0x15d308: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d30c: 0x24424050  addiu       $v0, $v0, 0x4050
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16464));
    // 0x15d310: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15d310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x15d314: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d318: 0x24423fd0  addiu       $v0, $v0, 0x3FD0
    ctx->pc = 0x15d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16336));
    // 0x15d31c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x15d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_15d320:
    // 0x15d320: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D320u;
    SET_GPR_U32(ctx, 31, 0x15D328u);
    ctx->pc = 0x15D324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D320u;
            // 0x15d324: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D328u; }
        if (ctx->pc != 0x15D328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D328u; }
        if (ctx->pc != 0x15D328u) { return; }
    }
    ctx->pc = 0x15D328u;
    // 0x15d328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d330: 0x3e00008  jr          $ra
    ctx->pc = 0x15D330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D330u;
            // 0x15d334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D308u: goto label_15d308;
            case 0x15D320u: goto label_15d320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D338u;
}
