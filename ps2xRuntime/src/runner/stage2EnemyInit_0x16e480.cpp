#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2EnemyInit
// Address: 0x16e480 - 0x16e4e4
void stage2EnemyInit_0x16e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2EnemyInit_0x16e480");
#endif

    ctx->pc = 0x16e480u;

    // 0x16e480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e488: 0xc059bc0  jal         func_166F00
    ctx->pc = 0x16E488u;
    SET_GPR_U32(ctx, 31, 0x16E490u);
    ctx->pc = 0x166F00u;
    if (runtime->hasFunction(0x166F00u)) {
        auto targetFn = runtime->lookupFunction(0x166F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E490u; }
        if (ctx->pc != 0x16E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn2_01_Hontai_0x166f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E490u; }
        if (ctx->pc != 0x16E490u) { return; }
    }
    ctx->pc = 0x16E490u;
    // 0x16e490: 0xc059b80  jal         func_166E00
    ctx->pc = 0x16E490u;
    SET_GPR_U32(ctx, 31, 0x16E498u);
    ctx->pc = 0x166E00u;
    if (runtime->hasFunction(0x166E00u)) {
        auto targetFn = runtime->lookupFunction(0x166E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E498u; }
        if (ctx->pc != 0x16E498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_01_Hontai_0x166e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E498u; }
        if (ctx->pc != 0x16E498u) { return; }
    }
    ctx->pc = 0x16E498u;
    // 0x16e498: 0xc06393c  jal         func_18E4F0
    ctx->pc = 0x16E498u;
    SET_GPR_U32(ctx, 31, 0x16E4A0u);
    ctx->pc = 0x18E4F0u;
    if (runtime->hasFunction(0x18E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4A0u; }
        if (ctx->pc != 0x16E4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn2_02_Hontai_0x18e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4A0u; }
        if (ctx->pc != 0x16E4A0u) { return; }
    }
    ctx->pc = 0x16E4A0u;
    // 0x16e4a0: 0xc0638fc  jal         func_18E3F0
    ctx->pc = 0x16E4A0u;
    SET_GPR_U32(ctx, 31, 0x16E4A8u);
    ctx->pc = 0x18E3F0u;
    if (runtime->hasFunction(0x18E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4A8u; }
        if (ctx->pc != 0x16E4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_02_Hontai_0x18e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4A8u; }
        if (ctx->pc != 0x16E4A8u) { return; }
    }
    ctx->pc = 0x16E4A8u;
    // 0x16e4a8: 0xc0662bc  jal         func_198AF0
    ctx->pc = 0x16E4A8u;
    SET_GPR_U32(ctx, 31, 0x16E4B0u);
    ctx->pc = 0x198AF0u;
    if (runtime->hasFunction(0x198AF0u)) {
        auto targetFn = runtime->lookupFunction(0x198AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4B0u; }
        if (ctx->pc != 0x16E4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn2_03_Hontai_0x198af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4B0u; }
        if (ctx->pc != 0x16E4B0u) { return; }
    }
    ctx->pc = 0x16E4B0u;
    // 0x16e4b0: 0xc06627c  jal         func_1989F0
    ctx->pc = 0x16E4B0u;
    SET_GPR_U32(ctx, 31, 0x16E4B8u);
    ctx->pc = 0x1989F0u;
    if (runtime->hasFunction(0x1989F0u)) {
        auto targetFn = runtime->lookupFunction(0x1989F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4B8u; }
        if (ctx->pc != 0x16E4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_03_Hontai_0x1989f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4B8u; }
        if (ctx->pc != 0x16E4B8u) { return; }
    }
    ctx->pc = 0x16E4B8u;
    // 0x16e4b8: 0xc0666b0  jal         func_199AC0
    ctx->pc = 0x16E4B8u;
    SET_GPR_U32(ctx, 31, 0x16E4C0u);
    ctx->pc = 0x199AC0u;
    if (runtime->hasFunction(0x199AC0u)) {
        auto targetFn = runtime->lookupFunction(0x199AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4C0u; }
        if (ctx->pc != 0x16E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn2_04_Hontai_0x199ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4C0u; }
        if (ctx->pc != 0x16E4C0u) { return; }
    }
    ctx->pc = 0x16E4C0u;
    // 0x16e4c0: 0xc066670  jal         func_1999C0
    ctx->pc = 0x16E4C0u;
    SET_GPR_U32(ctx, 31, 0x16E4C8u);
    ctx->pc = 0x1999C0u;
    if (runtime->hasFunction(0x1999C0u)) {
        auto targetFn = runtime->lookupFunction(0x1999C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4C8u; }
        if (ctx->pc != 0x16E4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_04_Hontai_0x1999c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4C8u; }
        if (ctx->pc != 0x16E4C8u) { return; }
    }
    ctx->pc = 0x16E4C8u;
    // 0x16e4c8: 0xc05d550  jal         func_175540
    ctx->pc = 0x16E4C8u;
    SET_GPR_U32(ctx, 31, 0x16E4D0u);
    ctx->pc = 0x175540u;
    if (runtime->hasFunction(0x175540u)) {
        auto targetFn = runtime->lookupFunction(0x175540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4D0u; }
        if (ctx->pc != 0x16E4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStage2Boss_Hontai_0x175540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4D0u; }
        if (ctx->pc != 0x16E4D0u) { return; }
    }
    ctx->pc = 0x16E4D0u;
    // 0x16e4d0: 0xc05d470  jal         func_1751C0
    ctx->pc = 0x16E4D0u;
    SET_GPR_U32(ctx, 31, 0x16E4D8u);
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4D8u; }
        if (ctx->pc != 0x16E4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage2Boss_Hontai_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E4D8u; }
        if (ctx->pc != 0x16E4D8u) { return; }
    }
    ctx->pc = 0x16E4D8u;
    // 0x16e4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x16E4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4DCu;
            // 0x16e4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E4E4u;
}
