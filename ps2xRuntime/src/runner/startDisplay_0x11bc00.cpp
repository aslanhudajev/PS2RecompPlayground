#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: startDisplay
// Address: 0x11bc00 - 0x11bc3c
void startDisplay_0x11bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("startDisplay_0x11bc00");
#endif

    ctx->pc = 0x11bc00u;

    // 0x11bc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bc04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bc08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11bc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11bc10:
    // 0x11bc10: 0xc0432fc  jal         func_10CBF0
    ctx->pc = 0x11BC10u;
    SET_GPR_U32(ctx, 31, 0x11BC18u);
    ctx->pc = 0x11BC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC10u;
            // 0x11bc14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CBF0u;
    if (runtime->hasFunction(0x10CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC18u; }
        if (ctx->pc != 0x11BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC18u; }
        if (ctx->pc != 0x11BC18u) { return; }
    }
    ctx->pc = 0x11BC18u;
    // 0x11bc18: 0x1050fffd  beq         $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x11BC18u;
    {
        const bool branch_taken_0x11bc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC18u;
            // 0x11bc1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc18) {
            ctx->pc = 0x11BC10u;
            goto label_11bc10;
        }
    }
    ctx->pc = 0x11BC20u;
    // 0x11bc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bc24: 0xaf82843c  sw          $v0, -0x7BC4($gp)
    ctx->pc = 0x11bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 2));
    // 0x11bc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc2c: 0xaf8084c8  sw          $zero, -0x7B38($gp)
    ctx->pc = 0x11bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 0));
    // 0x11bc30: 0xaf808440  sw          $zero, -0x7BC0($gp)
    ctx->pc = 0x11bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 0));
    // 0x11bc34: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC34u;
            // 0x11bc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BC10u: goto label_11bc10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BC3Cu;
}
