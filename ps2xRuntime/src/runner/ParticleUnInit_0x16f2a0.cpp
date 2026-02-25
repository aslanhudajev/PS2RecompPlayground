#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ParticleUnInit
// Address: 0x16f2a0 - 0x16f2f0
void ParticleUnInit_0x16f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ParticleUnInit_0x16f2a0");
#endif

    ctx->pc = 0x16f2a0u;

    // 0x16f2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f2a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f2a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f2ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f2b0: 0x8c244cf0  lw          $a0, 0x4CF0($at)
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19696)));
    // 0x16f2b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16F2B4u;
    {
        const bool branch_taken_0x16f2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f2b4) {
            ctx->pc = 0x16F2E0u;
            goto label_16f2e0;
        }
    }
    ctx->pc = 0x16F2BCu;
    // 0x16f2bc: 0x0  nop
    ctx->pc = 0x16f2bcu;
    // NOP
label_16f2c0:
    // 0x16f2c0: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16F2C0u;
    SET_GPR_U32(ctx, 31, 0x16F2C8u);
    ctx->pc = 0x16F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2C0u;
            // 0x16f2c4: 0x8c900020  lw          $s0, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F2F0u;
    if (runtime->hasFunction(0x16F2F0u)) {
        auto targetFn = runtime->lookupFunction(0x16F2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2C8u; }
        if (ctx->pc != 0x16F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleFree_0x16f2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2C8u; }
        if (ctx->pc != 0x16F2C8u) { return; }
    }
    ctx->pc = 0x16F2C8u;
    // 0x16f2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2cc: 0x0  nop
    ctx->pc = 0x16f2ccu;
    // NOP
    // 0x16f2d0: 0x0  nop
    ctx->pc = 0x16f2d0u;
    // NOP
    // 0x16f2d4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16F2D4u;
    {
        const bool branch_taken_0x16f2d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f2d4) {
            ctx->pc = 0x16F2C0u;
            goto label_16f2c0;
        }
    }
    ctx->pc = 0x16F2DCu;
    // 0x16f2dc: 0x0  nop
    ctx->pc = 0x16f2dcu;
    // NOP
label_16f2e0:
    // 0x16f2e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f2e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16f2e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16F2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2E8u;
            // 0x16f2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F2C0u: goto label_16f2c0;
            case 0x16F2E0u: goto label_16f2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F2F0u;
}
