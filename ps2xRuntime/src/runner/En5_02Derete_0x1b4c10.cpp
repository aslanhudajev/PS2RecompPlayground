#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_02Derete
// Address: 0x1b4c10 - 0x1b4c40
void En5_02Derete_0x1b4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_02Derete_0x1b4c10");
#endif

    ctx->pc = 0x1b4c10u;

    // 0x1b4c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4c20: 0xc060564  jal         func_181590
    ctx->pc = 0x1B4C20u;
    SET_GPR_U32(ctx, 31, 0x1B4C28u);
    ctx->pc = 0x1B4C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C20u;
            // 0x1b4c24: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181590u;
    if (runtime->hasFunction(0x181590u)) {
        auto targetFn = runtime->lookupFunction(0x181590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C28u; }
        if (ctx->pc != 0x1B4C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFree_0x181590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C28u; }
        if (ctx->pc != 0x1B4C28u) { return; }
    }
    ctx->pc = 0x1B4C28u;
    // 0x1b4c28: 0xc05ba74  jal         func_16E9D0
    ctx->pc = 0x1B4C28u;
    SET_GPR_U32(ctx, 31, 0x1B4C30u);
    ctx->pc = 0x1B4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C28u;
            // 0x1b4c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D0u;
    if (runtime->hasFunction(0x16E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C30u; }
        if (ctx->pc != 0x1B4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyFree_0x16e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4C30u; }
        if (ctx->pc != 0x1B4C30u) { return; }
    }
    ctx->pc = 0x1B4C30u;
    // 0x1b4c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4c34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4C38u;
            // 0x1b4c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4C40u;
}
