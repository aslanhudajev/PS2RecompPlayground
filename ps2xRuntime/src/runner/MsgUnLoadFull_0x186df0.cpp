#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MsgUnLoadFull
// Address: 0x186df0 - 0x186e40
void MsgUnLoadFull_0x186df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MsgUnLoadFull_0x186df0");
#endif

    ctx->pc = 0x186df0u;

    // 0x186df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x186e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e04: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x186e08: 0x2610b640  addiu       $s0, $s0, -0x49C0
    ctx->pc = 0x186e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948416));
    // 0x186e0c: 0x0  nop
    ctx->pc = 0x186e0cu;
    // NOP
label_186e10:
    // 0x186e10: 0xc050700  jal         func_141C00
    ctx->pc = 0x186E10u;
    SET_GPR_U32(ctx, 31, 0x186E18u);
    ctx->pc = 0x186E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E10u;
            // 0x186e14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E18u; }
        if (ctx->pc != 0x186E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E18u; }
        if (ctx->pc != 0x186E18u) { return; }
    }
    ctx->pc = 0x186E18u;
    // 0x186e18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x186e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x186e1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x186e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x186e20: 0x2a23001d  slti        $v1, $s1, 0x1D
    ctx->pc = 0x186e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x186e24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186E24u;
    {
        const bool branch_taken_0x186e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186e24) {
            ctx->pc = 0x186E10u;
            goto label_186e10;
        }
    }
    ctx->pc = 0x186E2Cu;
    // 0x186e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e38: 0x3e00008  jr          $ra
    ctx->pc = 0x186E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E38u;
            // 0x186e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186E10u: goto label_186e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186E40u;
}
