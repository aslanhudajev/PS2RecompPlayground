#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawMachine
// Address: 0x15ca20 - 0x15ca54
void drawMachine_0x15ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawMachine_0x15ca20");
#endif

    ctx->pc = 0x15ca20u;

    // 0x15ca20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ca24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ca28: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x15CA28u;
    SET_GPR_U32(ctx, 31, 0x15CA30u);
    ctx->pc = 0x15CA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA28u;
            // 0x15ca2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA30u; }
        if (ctx->pc != 0x15CA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA30u; }
        if (ctx->pc != 0x15CA30u) { return; }
    }
    ctx->pc = 0x15CA30u;
    // 0x15ca30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ca34: 0xc062c6c  jal         func_18B1B0
    ctx->pc = 0x15CA34u;
    SET_GPR_U32(ctx, 31, 0x15CA3Cu);
    ctx->pc = 0x15CA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA34u;
            // 0x15ca38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B1B0u;
    if (runtime->hasFunction(0x18B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA3Cu; }
        if (ctx->pc != 0x15CA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerMoveFunction_0x18b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA3Cu; }
        if (ctx->pc != 0x15CA3Cu) { return; }
    }
    ctx->pc = 0x15CA3Cu;
    // 0x15ca3c: 0xc062c50  jal         func_18B140
    ctx->pc = 0x15CA3Cu;
    SET_GPR_U32(ctx, 31, 0x15CA44u);
    ctx->pc = 0x15CA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA3Cu;
            // 0x15ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B140u;
    if (runtime->hasFunction(0x18B140u)) {
        auto targetFn = runtime->lookupFunction(0x18B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA44u; }
        if (ctx->pc != 0x15CA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerRenderFunction_0x18b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA44u; }
        if (ctx->pc != 0x15CA44u) { return; }
    }
    ctx->pc = 0x15CA44u;
    // 0x15ca44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15ca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ca48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ca48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA4Cu;
            // 0x15ca50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CA54u;
}
