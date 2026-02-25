#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8TrueBossGetStep
// Address: 0x1eed40 - 0x1eed84
void Stage8TrueBossGetStep_0x1eed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8TrueBossGetStep_0x1eed40");
#endif

    ctx->pc = 0x1eed40u;

    // 0x1eed40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eed44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eed48:
    // 0x1eed48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EED48u;
    SET_GPR_U32(ctx, 31, 0x1EED50u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED50u; }
        if (ctx->pc != 0x1EED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EED50u; }
        if (ctx->pc != 0x1EED50u) { return; }
    }
    ctx->pc = 0x1EED50u;
    // 0x1eed50: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1eed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1eed54: 0x3c010045  lui         $at, 0x45
    ctx->pc = 0x1eed54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)69 << 16));
    // 0x1eed58: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1eed58u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1eed5c: 0x8c23c148  lw          $v1, -0x3EB8($at)
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294951240)));
    // 0x1eed60: 0x0  nop
    ctx->pc = 0x1eed60u;
    // NOP
    // 0x1eed64: 0x1010  mfhi        $v0
    ctx->pc = 0x1eed64u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eed68: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1eed68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1eed6c: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EED6Cu;
    {
        const bool branch_taken_0x1eed6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EED70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED6Cu;
            // 0x1eed70: 0x3c010045  lui         $at, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eed6c) {
            ctx->pc = 0x1EED48u;
            goto label_1eed48;
        }
    }
    ctx->pc = 0x1EED74u;
    // 0x1eed74: 0xac22c148  sw          $v0, -0x3EB8($at)
    ctx->pc = 0x1eed74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951240), GPR_U32(ctx, 2));
    // 0x1eed78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eed78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eed7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EED7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EED7Cu;
            // 0x1eed80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EED48u: goto label_1eed48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EED84u;
}
