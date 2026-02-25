#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2EnemyUnInit
// Address: 0x16e440 - 0x16e47c
void stage2EnemyUnInit_0x16e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2EnemyUnInit_0x16e440");
#endif

    ctx->pc = 0x16e440u;

    // 0x16e440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e448: 0xc059b74  jal         func_166DD0
    ctx->pc = 0x16E448u;
    SET_GPR_U32(ctx, 31, 0x16E450u);
    ctx->pc = 0x166DD0u;
    if (runtime->hasFunction(0x166DD0u)) {
        auto targetFn = runtime->lookupFunction(0x166DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E450u; }
        if (ctx->pc != 0x16E450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn2_01_Hontai_0x166dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E450u; }
        if (ctx->pc != 0x16E450u) { return; }
    }
    ctx->pc = 0x16E450u;
    // 0x16e450: 0xc0638f8  jal         func_18E3E0
    ctx->pc = 0x16E450u;
    SET_GPR_U32(ctx, 31, 0x16E458u);
    ctx->pc = 0x18E3E0u;
    if (runtime->hasFunction(0x18E3E0u)) {
        auto targetFn = runtime->lookupFunction(0x18E3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E458u; }
        if (ctx->pc != 0x16E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn2_02_Hontai_0x18e3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E458u; }
        if (ctx->pc != 0x16E458u) { return; }
    }
    ctx->pc = 0x16E458u;
    // 0x16e458: 0xc066278  jal         func_1989E0
    ctx->pc = 0x16E458u;
    SET_GPR_U32(ctx, 31, 0x16E460u);
    ctx->pc = 0x1989E0u;
    if (runtime->hasFunction(0x1989E0u)) {
        auto targetFn = runtime->lookupFunction(0x1989E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E460u; }
        if (ctx->pc != 0x16E460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn2_03_Hontai_0x1989e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E460u; }
        if (ctx->pc != 0x16E460u) { return; }
    }
    ctx->pc = 0x16E460u;
    // 0x16e460: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x16E460u;
    SET_GPR_U32(ctx, 31, 0x16E468u);
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E468u; }
        if (ctx->pc != 0x16E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitEn2_04_Hontai_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E468u; }
        if (ctx->pc != 0x16E468u) { return; }
    }
    ctx->pc = 0x16E468u;
    // 0x16e468: 0xc05d45c  jal         func_175170
    ctx->pc = 0x16E468u;
    SET_GPR_U32(ctx, 31, 0x16E470u);
    ctx->pc = 0x175170u;
    if (runtime->hasFunction(0x175170u)) {
        auto targetFn = runtime->lookupFunction(0x175170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E470u; }
        if (ctx->pc != 0x16E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnInitStage2Boss_Hontai_0x175170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E470u; }
        if (ctx->pc != 0x16E470u) { return; }
    }
    ctx->pc = 0x16E470u;
    // 0x16e470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e474: 0x3e00008  jr          $ra
    ctx->pc = 0x16E474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E474u;
            // 0x16e478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E47Cu;
}
