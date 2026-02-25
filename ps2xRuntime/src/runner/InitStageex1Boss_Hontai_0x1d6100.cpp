#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStageex1Boss_Hontai
// Address: 0x1d6100 - 0x1d62ac
void InitStageex1Boss_Hontai_0x1d6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStageex1Boss_Hontai_0x1d6100");
#endif

    ctx->pc = 0x1d6100u;

    // 0x1d6100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6104: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d6108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d6108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d610c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1d610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d6110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d6110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6114: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6118: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1D6118u;
    SET_GPR_U32(ctx, 31, 0x1D6120u);
    ctx->pc = 0x1D611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6118u;
            // 0x1d611c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6120u; }
        if (ctx->pc != 0x1D6120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6120u; }
        if (ctx->pc != 0x1D6120u) { return; }
    }
    ctx->pc = 0x1D6120u;
    // 0x1d6120: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1d6124: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D6124u;
    SET_GPR_U32(ctx, 31, 0x1D612Cu);
    ctx->pc = 0x1D6128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6124u;
            // 0x1d6128: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D612Cu; }
        if (ctx->pc != 0x1D612Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D612Cu; }
        if (ctx->pc != 0x1D612Cu) { return; }
    }
    ctx->pc = 0x1D612Cu;
    // 0x1d612c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d612cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6134: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6134u;
    SET_GPR_U32(ctx, 31, 0x1D613Cu);
    ctx->pc = 0x1D6138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6134u;
            // 0x1d6138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D613Cu; }
        if (ctx->pc != 0x1D613Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D613Cu; }
        if (ctx->pc != 0x1D613Cu) { return; }
    }
    ctx->pc = 0x1D613Cu;
    // 0x1d613c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6140: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6140u;
    SET_GPR_U32(ctx, 31, 0x1D6148u);
    ctx->pc = 0x1D6144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6140u;
            // 0x1d6144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6148u; }
        if (ctx->pc != 0x1D6148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6148u; }
        if (ctx->pc != 0x1D6148u) { return; }
    }
    ctx->pc = 0x1D6148u;
    // 0x1d6148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d614c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D614Cu;
    SET_GPR_U32(ctx, 31, 0x1D6154u);
    ctx->pc = 0x1D6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D614Cu;
            // 0x1d6150: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6154u; }
        if (ctx->pc != 0x1D6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6154u; }
        if (ctx->pc != 0x1D6154u) { return; }
    }
    ctx->pc = 0x1D6154u;
    // 0x1d6154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6158: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6158u;
    SET_GPR_U32(ctx, 31, 0x1D6160u);
    ctx->pc = 0x1D615Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6158u;
            // 0x1d615c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6160u; }
        if (ctx->pc != 0x1D6160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6160u; }
        if (ctx->pc != 0x1D6160u) { return; }
    }
    ctx->pc = 0x1D6160u;
    // 0x1d6160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6164: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6164u;
    SET_GPR_U32(ctx, 31, 0x1D616Cu);
    ctx->pc = 0x1D6168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6164u;
            // 0x1d6168: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D616Cu; }
        if (ctx->pc != 0x1D616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D616Cu; }
        if (ctx->pc != 0x1D616Cu) { return; }
    }
    ctx->pc = 0x1D616Cu;
    // 0x1d616c: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x1d616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1d6170: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D6170u;
    SET_GPR_U32(ctx, 31, 0x1D6178u);
    ctx->pc = 0x1D6174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6170u;
            // 0x1d6174: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6178u; }
        if (ctx->pc != 0x1D6178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6178u; }
        if (ctx->pc != 0x1D6178u) { return; }
    }
    ctx->pc = 0x1D6178u;
    // 0x1d6178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d617c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d617cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6180: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6180u;
    SET_GPR_U32(ctx, 31, 0x1D6188u);
    ctx->pc = 0x1D6184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6180u;
            // 0x1d6184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6188u; }
        if (ctx->pc != 0x1D6188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6188u; }
        if (ctx->pc != 0x1D6188u) { return; }
    }
    ctx->pc = 0x1D6188u;
    // 0x1d6188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d618c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D618Cu;
    SET_GPR_U32(ctx, 31, 0x1D6194u);
    ctx->pc = 0x1D6190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D618Cu;
            // 0x1d6190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6194u; }
        if (ctx->pc != 0x1D6194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6194u; }
        if (ctx->pc != 0x1D6194u) { return; }
    }
    ctx->pc = 0x1D6194u;
    // 0x1d6194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6198: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6198u;
    SET_GPR_U32(ctx, 31, 0x1D61A0u);
    ctx->pc = 0x1D619Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6198u;
            // 0x1d619c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61A0u; }
        if (ctx->pc != 0x1D61A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61A0u; }
        if (ctx->pc != 0x1D61A0u) { return; }
    }
    ctx->pc = 0x1D61A0u;
    // 0x1d61a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d61a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61a4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61A4u;
    SET_GPR_U32(ctx, 31, 0x1D61ACu);
    ctx->pc = 0x1D61A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61A4u;
            // 0x1d61a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61ACu; }
        if (ctx->pc != 0x1D61ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61ACu; }
        if (ctx->pc != 0x1D61ACu) { return; }
    }
    ctx->pc = 0x1D61ACu;
    // 0x1d61ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d61acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61b0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61B0u;
    SET_GPR_U32(ctx, 31, 0x1D61B8u);
    ctx->pc = 0x1D61B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61B0u;
            // 0x1d61b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61B8u; }
        if (ctx->pc != 0x1D61B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61B8u; }
        if (ctx->pc != 0x1D61B8u) { return; }
    }
    ctx->pc = 0x1D61B8u;
    // 0x1d61b8: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1d61b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1d61bc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D61BCu;
    SET_GPR_U32(ctx, 31, 0x1D61C4u);
    ctx->pc = 0x1D61C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61BCu;
            // 0x1d61c0: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61C4u; }
        if (ctx->pc != 0x1D61C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61C4u; }
        if (ctx->pc != 0x1D61C4u) { return; }
    }
    ctx->pc = 0x1D61C4u;
    // 0x1d61c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d61c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d61c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61cc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61CCu;
    SET_GPR_U32(ctx, 31, 0x1D61D4u);
    ctx->pc = 0x1D61D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61CCu;
            // 0x1d61d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61D4u; }
        if (ctx->pc != 0x1D61D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61D4u; }
        if (ctx->pc != 0x1D61D4u) { return; }
    }
    ctx->pc = 0x1D61D4u;
    // 0x1d61d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d61d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61d8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61D8u;
    SET_GPR_U32(ctx, 31, 0x1D61E0u);
    ctx->pc = 0x1D61DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61D8u;
            // 0x1d61dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61E0u; }
        if (ctx->pc != 0x1D61E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61E0u; }
        if (ctx->pc != 0x1D61E0u) { return; }
    }
    ctx->pc = 0x1D61E0u;
    // 0x1d61e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d61e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61E4u;
    SET_GPR_U32(ctx, 31, 0x1D61ECu);
    ctx->pc = 0x1D61E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61E4u;
            // 0x1d61e8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61ECu; }
        if (ctx->pc != 0x1D61ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61ECu; }
        if (ctx->pc != 0x1D61ECu) { return; }
    }
    ctx->pc = 0x1D61ECu;
    // 0x1d61ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d61ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61F0u;
    SET_GPR_U32(ctx, 31, 0x1D61F8u);
    ctx->pc = 0x1D61F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61F0u;
            // 0x1d61f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61F8u; }
        if (ctx->pc != 0x1D61F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61F8u; }
        if (ctx->pc != 0x1D61F8u) { return; }
    }
    ctx->pc = 0x1D61F8u;
    // 0x1d61f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d61f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D61FCu;
    SET_GPR_U32(ctx, 31, 0x1D6204u);
    ctx->pc = 0x1D6200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61FCu;
            // 0x1d6200: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6204u; }
        if (ctx->pc != 0x1D6204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6204u; }
        if (ctx->pc != 0x1D6204u) { return; }
    }
    ctx->pc = 0x1D6204u;
    // 0x1d6204: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x1d6204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d6208: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D6208u;
    SET_GPR_U32(ctx, 31, 0x1D6210u);
    ctx->pc = 0x1D620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6208u;
            // 0x1d620c: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6210u; }
        if (ctx->pc != 0x1D6210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6210u; }
        if (ctx->pc != 0x1D6210u) { return; }
    }
    ctx->pc = 0x1D6210u;
    // 0x1d6210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6218: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6218u;
    SET_GPR_U32(ctx, 31, 0x1D6220u);
    ctx->pc = 0x1D621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6218u;
            // 0x1d621c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6220u; }
        if (ctx->pc != 0x1D6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6220u; }
        if (ctx->pc != 0x1D6220u) { return; }
    }
    ctx->pc = 0x1D6220u;
    // 0x1d6220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6224: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6224u;
    SET_GPR_U32(ctx, 31, 0x1D622Cu);
    ctx->pc = 0x1D6228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6224u;
            // 0x1d6228: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D622Cu; }
        if (ctx->pc != 0x1D622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D622Cu; }
        if (ctx->pc != 0x1D622Cu) { return; }
    }
    ctx->pc = 0x1D622Cu;
    // 0x1d622c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6230: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6230u;
    SET_GPR_U32(ctx, 31, 0x1D6238u);
    ctx->pc = 0x1D6234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6230u;
            // 0x1d6234: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6238u; }
        if (ctx->pc != 0x1D6238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6238u; }
        if (ctx->pc != 0x1D6238u) { return; }
    }
    ctx->pc = 0x1D6238u;
    // 0x1d6238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d623c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D623Cu;
    SET_GPR_U32(ctx, 31, 0x1D6244u);
    ctx->pc = 0x1D6240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D623Cu;
            // 0x1d6240: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6244u; }
        if (ctx->pc != 0x1D6244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6244u; }
        if (ctx->pc != 0x1D6244u) { return; }
    }
    ctx->pc = 0x1D6244u;
    // 0x1d6244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6248: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6248u;
    SET_GPR_U32(ctx, 31, 0x1D6250u);
    ctx->pc = 0x1D624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6248u;
            // 0x1d624c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6250u; }
        if (ctx->pc != 0x1D6250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6250u; }
        if (ctx->pc != 0x1D6250u) { return; }
    }
    ctx->pc = 0x1D6250u;
    // 0x1d6250: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1d6254: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D6254u;
    SET_GPR_U32(ctx, 31, 0x1D625Cu);
    ctx->pc = 0x1D6258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6254u;
            // 0x1d6258: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D625Cu; }
        if (ctx->pc != 0x1D625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D625Cu; }
        if (ctx->pc != 0x1D625Cu) { return; }
    }
    ctx->pc = 0x1D625Cu;
    // 0x1d625c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d625cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6264: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6264u;
    SET_GPR_U32(ctx, 31, 0x1D626Cu);
    ctx->pc = 0x1D6268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6264u;
            // 0x1d6268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D626Cu; }
        if (ctx->pc != 0x1D626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D626Cu; }
        if (ctx->pc != 0x1D626Cu) { return; }
    }
    ctx->pc = 0x1D626Cu;
    // 0x1d626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6270: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6270u;
    SET_GPR_U32(ctx, 31, 0x1D6278u);
    ctx->pc = 0x1D6274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6270u;
            // 0x1d6274: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6278u; }
        if (ctx->pc != 0x1D6278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6278u; }
        if (ctx->pc != 0x1D6278u) { return; }
    }
    ctx->pc = 0x1D6278u;
    // 0x1d6278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d627c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D627Cu;
    SET_GPR_U32(ctx, 31, 0x1D6284u);
    ctx->pc = 0x1D6280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D627Cu;
            // 0x1d6280: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6284u; }
        if (ctx->pc != 0x1D6284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6284u; }
        if (ctx->pc != 0x1D6284u) { return; }
    }
    ctx->pc = 0x1D6284u;
    // 0x1d6284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6288: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6288u;
    SET_GPR_U32(ctx, 31, 0x1D6290u);
    ctx->pc = 0x1D628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6288u;
            // 0x1d628c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6290u; }
        if (ctx->pc != 0x1D6290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6290u; }
        if (ctx->pc != 0x1D6290u) { return; }
    }
    ctx->pc = 0x1D6290u;
    // 0x1d6290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6294: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D6294u;
    SET_GPR_U32(ctx, 31, 0x1D629Cu);
    ctx->pc = 0x1D6298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6294u;
            // 0x1d6298: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D629Cu; }
        if (ctx->pc != 0x1D629Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D629Cu; }
        if (ctx->pc != 0x1D629Cu) { return; }
    }
    ctx->pc = 0x1D629Cu;
    // 0x1d629c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d62a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d62a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d62a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D62A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D62A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62A4u;
            // 0x1d62a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D62ACu;
}
