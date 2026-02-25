#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX2EnemyInit
// Address: 0x16de50 - 0x16ded4
void stageEX2EnemyInit_0x16de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX2EnemyInit_0x16de50");
#endif

    ctx->pc = 0x16de50u;

    // 0x16de50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16de54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16de58: 0xc07446c  jal         func_1D11B0
    ctx->pc = 0x16DE58u;
    SET_GPR_U32(ctx, 31, 0x16DE60u);
    ctx->pc = 0x1D11B0u;
    if (runtime->hasFunction(0x1D11B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE60u; }
        if (ctx->pc != 0x16DE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex2_01_Hontai_0x1d11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE60u; }
        if (ctx->pc != 0x16DE60u) { return; }
    }
    ctx->pc = 0x16DE60u;
    // 0x16de60: 0xc074430  jal         func_1D10C0
    ctx->pc = 0x16DE60u;
    SET_GPR_U32(ctx, 31, 0x16DE68u);
    ctx->pc = 0x1D10C0u;
    if (runtime->hasFunction(0x1D10C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D10C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE68u; }
        if (ctx->pc != 0x16DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_01_Hontai_0x1d10c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE68u; }
        if (ctx->pc != 0x16DE68u) { return; }
    }
    ctx->pc = 0x16DE68u;
    // 0x16de68: 0xc074a4c  jal         func_1D2930
    ctx->pc = 0x16DE68u;
    SET_GPR_U32(ctx, 31, 0x16DE70u);
    ctx->pc = 0x1D2930u;
    if (runtime->hasFunction(0x1D2930u)) {
        auto targetFn = runtime->lookupFunction(0x1D2930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE70u; }
        if (ctx->pc != 0x16DE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex2_02_Hontai_0x1d2930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE70u; }
        if (ctx->pc != 0x16DE70u) { return; }
    }
    ctx->pc = 0x16DE70u;
    // 0x16de70: 0xc074a10  jal         func_1D2840
    ctx->pc = 0x16DE70u;
    SET_GPR_U32(ctx, 31, 0x16DE78u);
    ctx->pc = 0x1D2840u;
    if (runtime->hasFunction(0x1D2840u)) {
        auto targetFn = runtime->lookupFunction(0x1D2840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE78u; }
        if (ctx->pc != 0x16DE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_02_Hontai_0x1d2840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE78u; }
        if (ctx->pc != 0x16DE78u) { return; }
    }
    ctx->pc = 0x16DE78u;
    // 0x16de78: 0xc073e80  jal         func_1CFA00
    ctx->pc = 0x16DE78u;
    SET_GPR_U32(ctx, 31, 0x16DE80u);
    ctx->pc = 0x1CFA00u;
    if (runtime->hasFunction(0x1CFA00u)) {
        auto targetFn = runtime->lookupFunction(0x1CFA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE80u; }
        if (ctx->pc != 0x16DE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex2_03_Hontai_0x1cfa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE80u; }
        if (ctx->pc != 0x16DE80u) { return; }
    }
    ctx->pc = 0x16DE80u;
    // 0x16de80: 0xc073e44  jal         func_1CF910
    ctx->pc = 0x16DE80u;
    SET_GPR_U32(ctx, 31, 0x16DE88u);
    ctx->pc = 0x1CF910u;
    if (runtime->hasFunction(0x1CF910u)) {
        auto targetFn = runtime->lookupFunction(0x1CF910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE88u; }
        if (ctx->pc != 0x16DE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_03_Hontai_0x1cf910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE88u; }
        if (ctx->pc != 0x16DE88u) { return; }
    }
    ctx->pc = 0x16DE88u;
    // 0x16de88: 0xc075074  jal         func_1D41D0
    ctx->pc = 0x16DE88u;
    SET_GPR_U32(ctx, 31, 0x16DE90u);
    ctx->pc = 0x1D41D0u;
    if (runtime->hasFunction(0x1D41D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE90u; }
        if (ctx->pc != 0x16DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex2_04_Hontai_0x1d41d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE90u; }
        if (ctx->pc != 0x16DE90u) { return; }
    }
    ctx->pc = 0x16DE90u;
    // 0x16de90: 0xc075038  jal         func_1D40E0
    ctx->pc = 0x16DE90u;
    SET_GPR_U32(ctx, 31, 0x16DE98u);
    ctx->pc = 0x1D40E0u;
    if (runtime->hasFunction(0x1D40E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D40E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE98u; }
        if (ctx->pc != 0x16DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_04_Hontai_0x1d40e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DE98u; }
        if (ctx->pc != 0x16DE98u) { return; }
    }
    ctx->pc = 0x16DE98u;
    // 0x16de98: 0xc073b58  jal         func_1CED60
    ctx->pc = 0x16DE98u;
    SET_GPR_U32(ctx, 31, 0x16DEA0u);
    ctx->pc = 0x1CED60u;
    if (runtime->hasFunction(0x1CED60u)) {
        auto targetFn = runtime->lookupFunction(0x1CED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA0u; }
        if (ctx->pc != 0x16DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnex2_05_Hontai_0x1ced60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA0u; }
        if (ctx->pc != 0x16DEA0u) { return; }
    }
    ctx->pc = 0x16DEA0u;
    // 0x16dea0: 0xc073b18  jal         func_1CEC60
    ctx->pc = 0x16DEA0u;
    SET_GPR_U32(ctx, 31, 0x16DEA8u);
    ctx->pc = 0x1CEC60u;
    if (runtime->hasFunction(0x1CEC60u)) {
        auto targetFn = runtime->lookupFunction(0x1CEC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA8u; }
        if (ctx->pc != 0x16DEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnex2_05_Hontai_0x1cec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEA8u; }
        if (ctx->pc != 0x16DEA8u) { return; }
    }
    ctx->pc = 0x16DEA8u;
    // 0x16dea8: 0xc076ee8  jal         func_1DBBA0
    ctx->pc = 0x16DEA8u;
    SET_GPR_U32(ctx, 31, 0x16DEB0u);
    ctx->pc = 0x1DBBA0u;
    if (runtime->hasFunction(0x1DBBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB0u; }
        if (ctx->pc != 0x16DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStageex2Boss_Hontai_0x1dbba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB0u; }
        if (ctx->pc != 0x16DEB0u) { return; }
    }
    ctx->pc = 0x16DEB0u;
    // 0x16deb0: 0xc076eb4  jal         func_1DBAD0
    ctx->pc = 0x16DEB0u;
    SET_GPR_U32(ctx, 31, 0x16DEB8u);
    ctx->pc = 0x1DBAD0u;
    if (runtime->hasFunction(0x1DBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB8u; }
        if (ctx->pc != 0x16DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStageex2Boss_Hontai_0x1dbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB8u; }
        if (ctx->pc != 0x16DEB8u) { return; }
    }
    ctx->pc = 0x16DEB8u;
    // 0x16deb8: 0xc06fdb0  jal         func_1BF6C0
    ctx->pc = 0x16DEB8u;
    SET_GPR_U32(ctx, 31, 0x16DEC0u);
    ctx->pc = 0x1BF6C0u;
    if (runtime->hasFunction(0x1BF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEC0u; }
        if (ctx->pc != 0x16DEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEn_Pika_Hontai_0x1bf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEC0u; }
        if (ctx->pc != 0x16DEC0u) { return; }
    }
    ctx->pc = 0x16DEC0u;
    // 0x16dec0: 0xc06fd74  jal         func_1BF5D0
    ctx->pc = 0x16DEC0u;
    SET_GPR_U32(ctx, 31, 0x16DEC8u);
    ctx->pc = 0x1BF5D0u;
    if (runtime->hasFunction(0x1BF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEC8u; }
        if (ctx->pc != 0x16DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_Hontai_0x1bf5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEC8u; }
        if (ctx->pc != 0x16DEC8u) { return; }
    }
    ctx->pc = 0x16DEC8u;
    // 0x16dec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16decc: 0x3e00008  jr          $ra
    ctx->pc = 0x16DECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DECCu;
            // 0x16ded0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DED4u;
}
