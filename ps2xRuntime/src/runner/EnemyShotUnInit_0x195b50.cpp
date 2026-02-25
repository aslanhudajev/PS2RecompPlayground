#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotUnInit
// Address: 0x195b50 - 0x195ba0
void EnemyShotUnInit_0x195b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotUnInit_0x195b50");
#endif

    ctx->pc = 0x195b50u;

    // 0x195b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195b54: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195b58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195b60: 0x8c240238  lw          $a0, 0x238($at)
    ctx->pc = 0x195b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
    // 0x195b64: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x195B64u;
    {
        const bool branch_taken_0x195b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b64) {
            ctx->pc = 0x195B90u;
            goto label_195b90;
        }
    }
    ctx->pc = 0x195B6Cu;
    // 0x195b6c: 0x0  nop
    ctx->pc = 0x195b6cu;
    // NOP
label_195b70:
    // 0x195b70: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x195B70u;
    SET_GPR_U32(ctx, 31, 0x195B78u);
    ctx->pc = 0x195B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195B70u;
            // 0x195b74: 0x8c900048  lw          $s0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B78u; }
        if (ctx->pc != 0x195B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195B78u; }
        if (ctx->pc != 0x195B78u) { return; }
    }
    ctx->pc = 0x195B78u;
    // 0x195b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b7c: 0x0  nop
    ctx->pc = 0x195b7cu;
    // NOP
    // 0x195b80: 0x0  nop
    ctx->pc = 0x195b80u;
    // NOP
    // 0x195b84: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195B84u;
    {
        const bool branch_taken_0x195b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b84) {
            ctx->pc = 0x195B70u;
            goto label_195b70;
        }
    }
    ctx->pc = 0x195B8Cu;
    // 0x195b8c: 0x0  nop
    ctx->pc = 0x195b8cu;
    // NOP
label_195b90:
    // 0x195b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195b98: 0x3e00008  jr          $ra
    ctx->pc = 0x195B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195B98u;
            // 0x195b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195B70u: goto label_195b70;
            case 0x195B90u: goto label_195b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195BA0u;
}
