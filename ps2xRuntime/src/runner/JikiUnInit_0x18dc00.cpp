#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: JikiUnInit
// Address: 0x18dc00 - 0x18dd74
void JikiUnInit_0x18dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("JikiUnInit_0x18dc00");
#endif

    ctx->pc = 0x18dc00u;

    // 0x18dc00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dc08: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC08u;
    SET_GPR_U32(ctx, 31, 0x18DC10u);
    ctx->pc = 0x18DC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC08u;
            // 0x18dc0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC10u; }
        if (ctx->pc != 0x18DC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC10u; }
        if (ctx->pc != 0x18DC10u) { return; }
    }
    ctx->pc = 0x18DC10u;
    // 0x18dc10: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC10u;
    SET_GPR_U32(ctx, 31, 0x18DC18u);
    ctx->pc = 0x18DC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC10u;
            // 0x18dc14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC18u; }
        if (ctx->pc != 0x18DC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC18u; }
        if (ctx->pc != 0x18DC18u) { return; }
    }
    ctx->pc = 0x18DC18u;
    // 0x18dc18: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC18u;
    SET_GPR_U32(ctx, 31, 0x18DC20u);
    ctx->pc = 0x18DC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC18u;
            // 0x18dc1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC20u; }
        if (ctx->pc != 0x18DC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC20u; }
        if (ctx->pc != 0x18DC20u) { return; }
    }
    ctx->pc = 0x18DC20u;
    // 0x18dc20: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC20u;
    SET_GPR_U32(ctx, 31, 0x18DC28u);
    ctx->pc = 0x18DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC20u;
            // 0x18dc24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC28u; }
        if (ctx->pc != 0x18DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC28u; }
        if (ctx->pc != 0x18DC28u) { return; }
    }
    ctx->pc = 0x18DC28u;
    // 0x18dc28: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC28u;
    SET_GPR_U32(ctx, 31, 0x18DC30u);
    ctx->pc = 0x18DC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC28u;
            // 0x18dc2c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC30u; }
        if (ctx->pc != 0x18DC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC30u; }
        if (ctx->pc != 0x18DC30u) { return; }
    }
    ctx->pc = 0x18DC30u;
    // 0x18dc30: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC30u;
    SET_GPR_U32(ctx, 31, 0x18DC38u);
    ctx->pc = 0x18DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC30u;
            // 0x18dc34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC38u; }
        if (ctx->pc != 0x18DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC38u; }
        if (ctx->pc != 0x18DC38u) { return; }
    }
    ctx->pc = 0x18DC38u;
    // 0x18dc38: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC38u;
    SET_GPR_U32(ctx, 31, 0x18DC40u);
    ctx->pc = 0x18DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC38u;
            // 0x18dc3c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC40u; }
        if (ctx->pc != 0x18DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC40u; }
        if (ctx->pc != 0x18DC40u) { return; }
    }
    ctx->pc = 0x18DC40u;
    // 0x18dc40: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC40u;
    SET_GPR_U32(ctx, 31, 0x18DC48u);
    ctx->pc = 0x18DC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC40u;
            // 0x18dc44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC48u; }
        if (ctx->pc != 0x18DC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC48u; }
        if (ctx->pc != 0x18DC48u) { return; }
    }
    ctx->pc = 0x18DC48u;
    // 0x18dc48: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC48u;
    SET_GPR_U32(ctx, 31, 0x18DC50u);
    ctx->pc = 0x18DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC48u;
            // 0x18dc4c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC50u; }
        if (ctx->pc != 0x18DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC50u; }
        if (ctx->pc != 0x18DC50u) { return; }
    }
    ctx->pc = 0x18DC50u;
    // 0x18dc50: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC50u;
    SET_GPR_U32(ctx, 31, 0x18DC58u);
    ctx->pc = 0x18DC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC50u;
            // 0x18dc54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC58u; }
        if (ctx->pc != 0x18DC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC58u; }
        if (ctx->pc != 0x18DC58u) { return; }
    }
    ctx->pc = 0x18DC58u;
    // 0x18dc58: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC58u;
    SET_GPR_U32(ctx, 31, 0x18DC60u);
    ctx->pc = 0x18DC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC58u;
            // 0x18dc5c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC60u; }
        if (ctx->pc != 0x18DC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC60u; }
        if (ctx->pc != 0x18DC60u) { return; }
    }
    ctx->pc = 0x18DC60u;
    // 0x18dc60: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC60u;
    SET_GPR_U32(ctx, 31, 0x18DC68u);
    ctx->pc = 0x18DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC60u;
            // 0x18dc64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC68u; }
        if (ctx->pc != 0x18DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC68u; }
        if (ctx->pc != 0x18DC68u) { return; }
    }
    ctx->pc = 0x18DC68u;
    // 0x18dc68: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC68u;
    SET_GPR_U32(ctx, 31, 0x18DC70u);
    ctx->pc = 0x18DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC68u;
            // 0x18dc6c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC70u; }
        if (ctx->pc != 0x18DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC70u; }
        if (ctx->pc != 0x18DC70u) { return; }
    }
    ctx->pc = 0x18DC70u;
    // 0x18dc70: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC70u;
    SET_GPR_U32(ctx, 31, 0x18DC78u);
    ctx->pc = 0x18DC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC70u;
            // 0x18dc74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC78u; }
        if (ctx->pc != 0x18DC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC78u; }
        if (ctx->pc != 0x18DC78u) { return; }
    }
    ctx->pc = 0x18DC78u;
    // 0x18dc78: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC78u;
    SET_GPR_U32(ctx, 31, 0x18DC80u);
    ctx->pc = 0x18DC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC78u;
            // 0x18dc7c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC80u; }
        if (ctx->pc != 0x18DC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC80u; }
        if (ctx->pc != 0x18DC80u) { return; }
    }
    ctx->pc = 0x18DC80u;
    // 0x18dc80: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC80u;
    SET_GPR_U32(ctx, 31, 0x18DC88u);
    ctx->pc = 0x18DC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC80u;
            // 0x18dc84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC88u; }
        if (ctx->pc != 0x18DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC88u; }
        if (ctx->pc != 0x18DC88u) { return; }
    }
    ctx->pc = 0x18DC88u;
    // 0x18dc88: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC88u;
    SET_GPR_U32(ctx, 31, 0x18DC90u);
    ctx->pc = 0x18DC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC88u;
            // 0x18dc8c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC90u; }
        if (ctx->pc != 0x18DC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC90u; }
        if (ctx->pc != 0x18DC90u) { return; }
    }
    ctx->pc = 0x18DC90u;
    // 0x18dc90: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DC90u;
    SET_GPR_U32(ctx, 31, 0x18DC98u);
    ctx->pc = 0x18DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC90u;
            // 0x18dc94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC98u; }
        if (ctx->pc != 0x18DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DC98u; }
        if (ctx->pc != 0x18DC98u) { return; }
    }
    ctx->pc = 0x18DC98u;
    // 0x18dc98: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DC98u;
    SET_GPR_U32(ctx, 31, 0x18DCA0u);
    ctx->pc = 0x18DC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DC98u;
            // 0x18dc9c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCA0u; }
        if (ctx->pc != 0x18DCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCA0u; }
        if (ctx->pc != 0x18DCA0u) { return; }
    }
    ctx->pc = 0x18DCA0u;
    // 0x18dca0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DCA0u;
    SET_GPR_U32(ctx, 31, 0x18DCA8u);
    ctx->pc = 0x18DCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCA0u;
            // 0x18dca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCA8u; }
        if (ctx->pc != 0x18DCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCA8u; }
        if (ctx->pc != 0x18DCA8u) { return; }
    }
    ctx->pc = 0x18DCA8u;
    // 0x18dca8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DCA8u;
    SET_GPR_U32(ctx, 31, 0x18DCB0u);
    ctx->pc = 0x18DCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCA8u;
            // 0x18dcac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCB0u; }
        if (ctx->pc != 0x18DCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCB0u; }
        if (ctx->pc != 0x18DCB0u) { return; }
    }
    ctx->pc = 0x18DCB0u;
    // 0x18dcb0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DCB0u;
    SET_GPR_U32(ctx, 31, 0x18DCB8u);
    ctx->pc = 0x18DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCB0u;
            // 0x18dcb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCB8u; }
        if (ctx->pc != 0x18DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCB8u; }
        if (ctx->pc != 0x18DCB8u) { return; }
    }
    ctx->pc = 0x18DCB8u;
    // 0x18dcb8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DCB8u;
    SET_GPR_U32(ctx, 31, 0x18DCC0u);
    ctx->pc = 0x18DCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCB8u;
            // 0x18dcbc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC0u; }
        if (ctx->pc != 0x18DCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC0u; }
        if (ctx->pc != 0x18DCC0u) { return; }
    }
    ctx->pc = 0x18DCC0u;
    // 0x18dcc0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DCC0u;
    SET_GPR_U32(ctx, 31, 0x18DCC8u);
    ctx->pc = 0x18DCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCC0u;
            // 0x18dcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC8u; }
        if (ctx->pc != 0x18DCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC8u; }
        if (ctx->pc != 0x18DCC8u) { return; }
    }
    ctx->pc = 0x18DCC8u;
    // 0x18dcc8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DCC8u;
    SET_GPR_U32(ctx, 31, 0x18DCD0u);
    ctx->pc = 0x18DCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCC8u;
            // 0x18dccc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCD0u; }
        if (ctx->pc != 0x18DCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCD0u; }
        if (ctx->pc != 0x18DCD0u) { return; }
    }
    ctx->pc = 0x18DCD0u;
    // 0x18dcd0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DCD0u;
    SET_GPR_U32(ctx, 31, 0x18DCD8u);
    ctx->pc = 0x18DCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCD0u;
            // 0x18dcd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCD8u; }
        if (ctx->pc != 0x18DCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCD8u; }
        if (ctx->pc != 0x18DCD8u) { return; }
    }
    ctx->pc = 0x18DCD8u;
    // 0x18dcd8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DCD8u;
    SET_GPR_U32(ctx, 31, 0x18DCE0u);
    ctx->pc = 0x18DCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCD8u;
            // 0x18dcdc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCE0u; }
        if (ctx->pc != 0x18DCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCE0u; }
        if (ctx->pc != 0x18DCE0u) { return; }
    }
    ctx->pc = 0x18DCE0u;
    // 0x18dce0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DCE0u;
    SET_GPR_U32(ctx, 31, 0x18DCE8u);
    ctx->pc = 0x18DCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCE0u;
            // 0x18dce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCE8u; }
        if (ctx->pc != 0x18DCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCE8u; }
        if (ctx->pc != 0x18DCE8u) { return; }
    }
    ctx->pc = 0x18DCE8u;
    // 0x18dce8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DCE8u;
    SET_GPR_U32(ctx, 31, 0x18DCF0u);
    ctx->pc = 0x18DCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCE8u;
            // 0x18dcec: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF0u; }
        if (ctx->pc != 0x18DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF0u; }
        if (ctx->pc != 0x18DCF0u) { return; }
    }
    ctx->pc = 0x18DCF0u;
    // 0x18dcf0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DCF0u;
    SET_GPR_U32(ctx, 31, 0x18DCF8u);
    ctx->pc = 0x18DCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCF0u;
            // 0x18dcf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF8u; }
        if (ctx->pc != 0x18DCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCF8u; }
        if (ctx->pc != 0x18DCF8u) { return; }
    }
    ctx->pc = 0x18DCF8u;
    // 0x18dcf8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DCF8u;
    SET_GPR_U32(ctx, 31, 0x18DD00u);
    ctx->pc = 0x18DCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DCF8u;
            // 0x18dcfc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD00u; }
        if (ctx->pc != 0x18DD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD00u; }
        if (ctx->pc != 0x18DD00u) { return; }
    }
    ctx->pc = 0x18DD00u;
    // 0x18dd00: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DD00u;
    SET_GPR_U32(ctx, 31, 0x18DD08u);
    ctx->pc = 0x18DD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD00u;
            // 0x18dd04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD08u; }
        if (ctx->pc != 0x18DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD08u; }
        if (ctx->pc != 0x18DD08u) { return; }
    }
    ctx->pc = 0x18DD08u;
    // 0x18dd08: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DD08u;
    SET_GPR_U32(ctx, 31, 0x18DD10u);
    ctx->pc = 0x18DD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD08u;
            // 0x18dd0c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD10u; }
        if (ctx->pc != 0x18DD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD10u; }
        if (ctx->pc != 0x18DD10u) { return; }
    }
    ctx->pc = 0x18DD10u;
    // 0x18dd10: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DD10u;
    SET_GPR_U32(ctx, 31, 0x18DD18u);
    ctx->pc = 0x18DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD10u;
            // 0x18dd14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD18u; }
        if (ctx->pc != 0x18DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD18u; }
        if (ctx->pc != 0x18DD18u) { return; }
    }
    ctx->pc = 0x18DD18u;
    // 0x18dd18: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DD18u;
    SET_GPR_U32(ctx, 31, 0x18DD20u);
    ctx->pc = 0x18DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD18u;
            // 0x18dd1c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD20u; }
        if (ctx->pc != 0x18DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD20u; }
        if (ctx->pc != 0x18DD20u) { return; }
    }
    ctx->pc = 0x18DD20u;
    // 0x18dd20: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DD20u;
    SET_GPR_U32(ctx, 31, 0x18DD28u);
    ctx->pc = 0x18DD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD20u;
            // 0x18dd24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD28u; }
        if (ctx->pc != 0x18DD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD28u; }
        if (ctx->pc != 0x18DD28u) { return; }
    }
    ctx->pc = 0x18DD28u;
    // 0x18dd28: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18DD28u;
    SET_GPR_U32(ctx, 31, 0x18DD30u);
    ctx->pc = 0x18DD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD28u;
            // 0x18dd2c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD30u; }
        if (ctx->pc != 0x18DD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD30u; }
        if (ctx->pc != 0x18DD30u) { return; }
    }
    ctx->pc = 0x18DD30u;
    // 0x18dd30: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x18DD30u;
    SET_GPR_U32(ctx, 31, 0x18DD38u);
    ctx->pc = 0x18DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD30u;
            // 0x18dd34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD38u; }
        if (ctx->pc != 0x18DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD38u; }
        if (ctx->pc != 0x18DD38u) { return; }
    }
    ctx->pc = 0x18DD38u;
    // 0x18dd38: 0xc060680  jal         func_181A00
    ctx->pc = 0x18DD38u;
    SET_GPR_U32(ctx, 31, 0x18DD40u);
    ctx->pc = 0x18DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD38u;
            // 0x18dd3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD40u; }
        if (ctx->pc != 0x18DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD40u; }
        if (ctx->pc != 0x18DD40u) { return; }
    }
    ctx->pc = 0x18DD40u;
    // 0x18dd40: 0xc060680  jal         func_181A00
    ctx->pc = 0x18DD40u;
    SET_GPR_U32(ctx, 31, 0x18DD48u);
    ctx->pc = 0x18DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD40u;
            // 0x18dd44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD48u; }
        if (ctx->pc != 0x18DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD48u; }
        if (ctx->pc != 0x18DD48u) { return; }
    }
    ctx->pc = 0x18DD48u;
    // 0x18dd48: 0xc060680  jal         func_181A00
    ctx->pc = 0x18DD48u;
    SET_GPR_U32(ctx, 31, 0x18DD50u);
    ctx->pc = 0x18DD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD48u;
            // 0x18dd4c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD50u; }
        if (ctx->pc != 0x18DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD50u; }
        if (ctx->pc != 0x18DD50u) { return; }
    }
    ctx->pc = 0x18DD50u;
    // 0x18dd50: 0xc060680  jal         func_181A00
    ctx->pc = 0x18DD50u;
    SET_GPR_U32(ctx, 31, 0x18DD58u);
    ctx->pc = 0x18DD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD50u;
            // 0x18dd54: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD58u; }
        if (ctx->pc != 0x18DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD58u; }
        if (ctx->pc != 0x18DD58u) { return; }
    }
    ctx->pc = 0x18DD58u;
    // 0x18dd58: 0xc060680  jal         func_181A00
    ctx->pc = 0x18DD58u;
    SET_GPR_U32(ctx, 31, 0x18DD60u);
    ctx->pc = 0x18DD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD58u;
            // 0x18dd5c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD60u; }
        if (ctx->pc != 0x18DD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD60u; }
        if (ctx->pc != 0x18DD60u) { return; }
    }
    ctx->pc = 0x18DD60u;
    // 0x18dd60: 0xc060680  jal         func_181A00
    ctx->pc = 0x18DD60u;
    SET_GPR_U32(ctx, 31, 0x18DD68u);
    ctx->pc = 0x18DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD60u;
            // 0x18dd64: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD68u; }
        if (ctx->pc != 0x18DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DD68u; }
        if (ctx->pc != 0x18DD68u) { return; }
    }
    ctx->pc = 0x18DD68u;
    // 0x18dd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DD6Cu;
            // 0x18dd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DD74u;
}
