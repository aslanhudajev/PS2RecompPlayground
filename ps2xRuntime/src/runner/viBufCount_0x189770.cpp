#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufCount
// Address: 0x189770 - 0x1897b4
void viBufCount_0x189770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufCount_0x189770");
#endif

    ctx->pc = 0x189770u;

    // 0x189770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18977c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18977cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189780: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189780u;
    SET_GPR_U32(ctx, 31, 0x189788u);
    ctx->pc = 0x189784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189780u;
            // 0x189784: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189788u; }
        if (ctx->pc != 0x189788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189788u; }
        if (ctx->pc != 0x189788u) { return; }
    }
    ctx->pc = 0x189788u;
    // 0x189788: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18978c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x18978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x189790: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x189790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x189794: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x189794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x189798: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189798u;
    SET_GPR_U32(ctx, 31, 0x1897A0u);
    ctx->pc = 0x18979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189798u;
            // 0x18979c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897A0u; }
        if (ctx->pc != 0x1897A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897A0u; }
        if (ctx->pc != 0x1897A0u) { return; }
    }
    ctx->pc = 0x1897A0u;
    // 0x1897a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1897a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1897a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1897a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1897a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1897a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1897ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1897ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1897B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1897ACu;
            // 0x1897b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1897B4u;
}
