#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsUnInitGp
// Address: 0x170910 - 0x170950
void wrsUnInitGp_0x170910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsUnInitGp_0x170910");
#endif

    ctx->pc = 0x170910u;

    // 0x170910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170918: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x170918u;
    SET_GPR_U32(ctx, 31, 0x170920u);
    ctx->pc = 0x17091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170918u;
            // 0x17091c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170920u; }
        if (ctx->pc != 0x170920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170920u; }
        if (ctx->pc != 0x170920u) { return; }
    }
    ctx->pc = 0x170920u;
    // 0x170920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x170920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170924: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x170924u;
    SET_GPR_U32(ctx, 31, 0x17092Cu);
    ctx->pc = 0x170928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170924u;
            // 0x170928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17092Cu; }
        if (ctx->pc != 0x17092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17092Cu; }
        if (ctx->pc != 0x17092Cu) { return; }
    }
    ctx->pc = 0x17092Cu;
    // 0x17092c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x17092cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x170930: 0xc050700  jal         func_141C00
    ctx->pc = 0x170930u;
    SET_GPR_U32(ctx, 31, 0x170938u);
    ctx->pc = 0x170934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170930u;
            // 0x170934: 0x8c24396c  lw          $a0, 0x396C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14700)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170938u; }
        if (ctx->pc != 0x170938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170938u; }
        if (ctx->pc != 0x170938u) { return; }
    }
    ctx->pc = 0x170938u;
    // 0x170938: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x17093c: 0xc050700  jal         func_141C00
    ctx->pc = 0x17093Cu;
    SET_GPR_U32(ctx, 31, 0x170944u);
    ctx->pc = 0x170940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17093Cu;
            // 0x170940: 0x8c243968  lw          $a0, 0x3968($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14696)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170944u; }
        if (ctx->pc != 0x170944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170944u; }
        if (ctx->pc != 0x170944u) { return; }
    }
    ctx->pc = 0x170944u;
    // 0x170944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170948: 0x3e00008  jr          $ra
    ctx->pc = 0x170948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170948u;
            // 0x17094c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170950u;
}
