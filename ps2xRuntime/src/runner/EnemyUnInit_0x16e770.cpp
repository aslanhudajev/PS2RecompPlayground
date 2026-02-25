#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyUnInit
// Address: 0x16e770 - 0x16e7c0
void EnemyUnInit_0x16e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyUnInit_0x16e770");
#endif

    ctx->pc = 0x16e770u;

    // 0x16e770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e774: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16e774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16e778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e780: 0x8c244ce0  lw          $a0, 0x4CE0($at)
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19680)));
    // 0x16e784: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16E784u;
    {
        const bool branch_taken_0x16e784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e784) {
            ctx->pc = 0x16E7B0u;
            goto label_16e7b0;
        }
    }
    ctx->pc = 0x16E78Cu;
    // 0x16e78c: 0x0  nop
    ctx->pc = 0x16e78cu;
    // NOP
label_16e790:
    // 0x16e790: 0xc05ba74  jal         func_16E9D0
    ctx->pc = 0x16E790u;
    SET_GPR_U32(ctx, 31, 0x16E798u);
    ctx->pc = 0x16E794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E790u;
            // 0x16e794: 0x8c900108  lw          $s0, 0x108($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D0u;
    if (runtime->hasFunction(0x16E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E798u; }
        if (ctx->pc != 0x16E798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyFree_0x16e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E798u; }
        if (ctx->pc != 0x16E798u) { return; }
    }
    ctx->pc = 0x16E798u;
    // 0x16e798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e79c: 0x0  nop
    ctx->pc = 0x16e79cu;
    // NOP
    // 0x16e7a0: 0x0  nop
    ctx->pc = 0x16e7a0u;
    // NOP
    // 0x16e7a4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16E7A4u;
    {
        const bool branch_taken_0x16e7a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e7a4) {
            ctx->pc = 0x16E790u;
            goto label_16e790;
        }
    }
    ctx->pc = 0x16E7ACu;
    // 0x16e7ac: 0x0  nop
    ctx->pc = 0x16e7acu;
    // NOP
label_16e7b0:
    // 0x16e7b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e7b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x16E7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7B8u;
            // 0x16e7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E790u: goto label_16e790;
            case 0x16E7B0u: goto label_16e7b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E7C0u;
}
