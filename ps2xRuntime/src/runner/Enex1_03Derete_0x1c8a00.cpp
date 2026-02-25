#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_03Derete
// Address: 0x1c8a00 - 0x1c8a30
void Enex1_03Derete_0x1c8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_03Derete_0x1c8a00");
#endif

    ctx->pc = 0x1c8a00u;

    // 0x1c8a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a10: 0xc060564  jal         func_181590
    ctx->pc = 0x1C8A10u;
    SET_GPR_U32(ctx, 31, 0x1C8A18u);
    ctx->pc = 0x1C8A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A10u;
            // 0x1c8a14: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181590u;
    if (runtime->hasFunction(0x181590u)) {
        auto targetFn = runtime->lookupFunction(0x181590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A18u; }
        if (ctx->pc != 0x1C8A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFree_0x181590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A18u; }
        if (ctx->pc != 0x1C8A18u) { return; }
    }
    ctx->pc = 0x1C8A18u;
    // 0x1c8a18: 0xc05ba74  jal         func_16E9D0
    ctx->pc = 0x1C8A18u;
    SET_GPR_U32(ctx, 31, 0x1C8A20u);
    ctx->pc = 0x1C8A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A18u;
            // 0x1c8a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D0u;
    if (runtime->hasFunction(0x16E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A20u; }
        if (ctx->pc != 0x1C8A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyFree_0x16e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8A20u; }
        if (ctx->pc != 0x1C8A20u) { return; }
    }
    ctx->pc = 0x1C8A20u;
    // 0x1c8a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8A28u;
            // 0x1c8a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8A30u;
}
