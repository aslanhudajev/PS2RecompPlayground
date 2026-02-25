#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8EnemyGenerate
// Address: 0x1697a0 - 0x1697fc
void Stage8EnemyGenerate_0x1697a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8EnemyGenerate_0x1697a0");
#endif

    ctx->pc = 0x1697a0u;

    // 0x1697a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1697a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1697a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1697a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1697a8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1697A8u;
    {
        const bool branch_taken_0x1697a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1697ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697A8u;
            // 0x1697ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697a8) {
            ctx->pc = 0x1697E0u;
            goto label_1697e0;
        }
    }
    ctx->pc = 0x1697B0u;
    // 0x1697b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1697b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1697b4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1697B4u;
    {
        const bool branch_taken_0x1697b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1697b4) {
            ctx->pc = 0x1697C8u;
            goto label_1697c8;
        }
    }
    ctx->pc = 0x1697BCu;
    // 0x1697bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1697BCu;
    {
        const bool branch_taken_0x1697bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697bc) {
            ctx->pc = 0x1697F0u;
            goto label_1697f0;
        }
    }
    ctx->pc = 0x1697C4u;
    // 0x1697c4: 0x0  nop
    ctx->pc = 0x1697c4u;
    // NOP
label_1697c8:
    // 0x1697c8: 0xc05d004  jal         func_174010
    ctx->pc = 0x1697C8u;
    SET_GPR_U32(ctx, 31, 0x1697D0u);
    ctx->pc = 0x1697CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697C8u;
            // 0x1697cc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697D0u; }
        if (ctx->pc != 0x1697D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697D0u; }
        if (ctx->pc != 0x1697D0u) { return; }
    }
    ctx->pc = 0x1697D0u;
    // 0x1697d0: 0xc056050  jal         func_158140
    ctx->pc = 0x1697D0u;
    SET_GPR_U32(ctx, 31, 0x1697D8u);
    ctx->pc = 0x158140u;
    if (runtime->hasFunction(0x158140u)) {
        auto targetFn = runtime->lookupFunction(0x158140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697D8u; }
        if (ctx->pc != 0x1697D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuOk_0x158140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697D8u; }
        if (ctx->pc != 0x1697D8u) { return; }
    }
    ctx->pc = 0x1697D8u;
    // 0x1697d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1697D8u;
    {
        const bool branch_taken_0x1697d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1697d8) {
            ctx->pc = 0x1697F0u;
            goto label_1697f0;
        }
    }
    ctx->pc = 0x1697E0u;
label_1697e0:
    // 0x1697e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1697e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1697e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697e8: 0xc0781b4  jal         func_1E06D0
    ctx->pc = 0x1697E8u;
    SET_GPR_U32(ctx, 31, 0x1697F0u);
    ctx->pc = 0x1697ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1697E8u;
            // 0x1697ec: 0x2406ff60  addiu       $a2, $zero, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06D0u;
    if (runtime->hasFunction(0x1E06D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697F0u; }
        if (ctx->pc != 0x1697F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage8Boss_0x1e06d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1697F0u; }
        if (ctx->pc != 0x1697F0u) { return; }
    }
    ctx->pc = 0x1697F0u;
label_1697f0:
    // 0x1697f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1697f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1697f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1697F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697F4u;
            // 0x1697f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1697C8u: goto label_1697c8;
            case 0x1697E0u: goto label_1697e0;
            case 0x1697F0u: goto label_1697f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1697FCu;
}
