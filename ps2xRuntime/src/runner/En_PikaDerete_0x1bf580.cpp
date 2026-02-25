#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En_PikaDerete
// Address: 0x1bf580 - 0x1bf5b0
void En_PikaDerete_0x1bf580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En_PikaDerete_0x1bf580");
#endif

    ctx->pc = 0x1bf580u;

    // 0x1bf580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf590: 0xc060564  jal         func_181590
    ctx->pc = 0x1BF590u;
    SET_GPR_U32(ctx, 31, 0x1BF598u);
    ctx->pc = 0x1BF594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF590u;
            // 0x1bf594: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181590u;
    if (runtime->hasFunction(0x181590u)) {
        auto targetFn = runtime->lookupFunction(0x181590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF598u; }
        if (ctx->pc != 0x1BF598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFree_0x181590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF598u; }
        if (ctx->pc != 0x1BF598u) { return; }
    }
    ctx->pc = 0x1BF598u;
    // 0x1bf598: 0xc05ba74  jal         func_16E9D0
    ctx->pc = 0x1BF598u;
    SET_GPR_U32(ctx, 31, 0x1BF5A0u);
    ctx->pc = 0x1BF59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF598u;
            // 0x1bf59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9D0u;
    if (runtime->hasFunction(0x16E9D0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5A0u; }
        if (ctx->pc != 0x1BF5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyFree_0x16e9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF5A0u; }
        if (ctx->pc != 0x1BF5A0u) { return; }
    }
    ctx->pc = 0x1BF5A0u;
    // 0x1bf5a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf5a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF5A8u;
            // 0x1bf5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF5B0u;
}
