#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1BossDerete
// Address: 0x1619f0 - 0x161a20
void Stage1BossDerete_0x1619f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1BossDerete_0x1619f0");
#endif

    ctx->pc = 0x1619f0u;

    // 0x1619f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1619f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1619f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1619f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1619f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1619f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1619fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1619fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a00: 0xc060564  jal         func_181590
    ctx->pc = 0x161A00u;
    SET_GPR_U32(ctx, 31, 0x161A08u);
    ctx->pc = 0x161A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A00u;
            // 0x161a04: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181590u;
    if (runtime->hasFunction(0x181590u)) {
        auto targetFn = runtime->lookupFunction(0x181590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A08u; }
        if (ctx->pc != 0x161A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFree_0x181590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A08u; }
        if (ctx->pc != 0x161A08u) { return; }
    }
    ctx->pc = 0x161A08u;
    // 0x161a08: 0xc05ba74  jal         func_16E9D0
    ctx->pc = 0x161A08u;
    SET_GPR_U32(ctx, 31, 0x161A10u);
    ctx->pc = 0x161A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A08u;
            // 0x161a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D0u;
    if (runtime->hasFunction(0x16E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A10u; }
        if (ctx->pc != 0x161A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyFree_0x16e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A10u; }
        if (ctx->pc != 0x161A10u) { return; }
    }
    ctx->pc = 0x161A10u;
    // 0x161a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x161a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161a18: 0x3e00008  jr          $ra
    ctx->pc = 0x161A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A18u;
            // 0x161a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161A20u;
}
