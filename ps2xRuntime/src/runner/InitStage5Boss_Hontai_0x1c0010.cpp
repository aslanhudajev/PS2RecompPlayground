#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage5Boss_Hontai
// Address: 0x1c0010 - 0x1c0124
void InitStage5Boss_Hontai_0x1c0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage5Boss_Hontai_0x1c0010");
#endif

    ctx->pc = 0x1c0010u;

    // 0x1c0010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c0014: 0x240400db  addiu       $a0, $zero, 0xDB
    ctx->pc = 0x1c0014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x1c0018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c001c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1c001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c0020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0024: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1c0024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0028: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1C0028u;
    SET_GPR_U32(ctx, 31, 0x1C0030u);
    ctx->pc = 0x1C002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0028u;
            // 0x1c002c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0030u; }
        if (ctx->pc != 0x1C0030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0030u; }
        if (ctx->pc != 0x1C0030u) { return; }
    }
    ctx->pc = 0x1C0030u;
    // 0x1c0030: 0x240400d7  addiu       $a0, $zero, 0xD7
    ctx->pc = 0x1c0030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x1c0034: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C0034u;
    SET_GPR_U32(ctx, 31, 0x1C003Cu);
    ctx->pc = 0x1C0038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0034u;
            // 0x1c0038: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C003Cu; }
        if (ctx->pc != 0x1C003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C003Cu; }
        if (ctx->pc != 0x1C003Cu) { return; }
    }
    ctx->pc = 0x1C003Cu;
    // 0x1c003c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c003cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0044: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C0044u;
    SET_GPR_U32(ctx, 31, 0x1C004Cu);
    ctx->pc = 0x1C0048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0044u;
            // 0x1c0048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C004Cu; }
        if (ctx->pc != 0x1C004Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C004Cu; }
        if (ctx->pc != 0x1C004Cu) { return; }
    }
    ctx->pc = 0x1C004Cu;
    // 0x1c004c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0050: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C0050u;
    SET_GPR_U32(ctx, 31, 0x1C0058u);
    ctx->pc = 0x1C0054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0050u;
            // 0x1c0054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0058u; }
        if (ctx->pc != 0x1C0058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0058u; }
        if (ctx->pc != 0x1C0058u) { return; }
    }
    ctx->pc = 0x1C0058u;
    // 0x1c0058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c005c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C005Cu;
    SET_GPR_U32(ctx, 31, 0x1C0064u);
    ctx->pc = 0x1C0060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C005Cu;
            // 0x1c0060: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0064u; }
        if (ctx->pc != 0x1C0064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0064u; }
        if (ctx->pc != 0x1C0064u) { return; }
    }
    ctx->pc = 0x1C0064u;
    // 0x1c0064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0068: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C0068u;
    SET_GPR_U32(ctx, 31, 0x1C0070u);
    ctx->pc = 0x1C006Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0068u;
            // 0x1c006c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0070u; }
        if (ctx->pc != 0x1C0070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0070u; }
        if (ctx->pc != 0x1C0070u) { return; }
    }
    ctx->pc = 0x1C0070u;
    // 0x1c0070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0074: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C0074u;
    SET_GPR_U32(ctx, 31, 0x1C007Cu);
    ctx->pc = 0x1C0078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0074u;
            // 0x1c0078: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C007Cu; }
        if (ctx->pc != 0x1C007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C007Cu; }
        if (ctx->pc != 0x1C007Cu) { return; }
    }
    ctx->pc = 0x1C007Cu;
    // 0x1c007c: 0x240400d5  addiu       $a0, $zero, 0xD5
    ctx->pc = 0x1c007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x1c0080: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C0080u;
    SET_GPR_U32(ctx, 31, 0x1C0088u);
    ctx->pc = 0x1C0084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0080u;
            // 0x1c0084: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0088u; }
        if (ctx->pc != 0x1C0088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0088u; }
        if (ctx->pc != 0x1C0088u) { return; }
    }
    ctx->pc = 0x1C0088u;
    // 0x1c0088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c008c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0090: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C0090u;
    SET_GPR_U32(ctx, 31, 0x1C0098u);
    ctx->pc = 0x1C0094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0090u;
            // 0x1c0094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0098u; }
        if (ctx->pc != 0x1C0098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0098u; }
        if (ctx->pc != 0x1C0098u) { return; }
    }
    ctx->pc = 0x1C0098u;
    // 0x1c0098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c009c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C009Cu;
    SET_GPR_U32(ctx, 31, 0x1C00A4u);
    ctx->pc = 0x1C00A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C009Cu;
            // 0x1c00a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00A4u; }
        if (ctx->pc != 0x1C00A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00A4u; }
        if (ctx->pc != 0x1C00A4u) { return; }
    }
    ctx->pc = 0x1C00A4u;
    // 0x1c00a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00a8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C00A8u;
    SET_GPR_U32(ctx, 31, 0x1C00B0u);
    ctx->pc = 0x1C00ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00A8u;
            // 0x1c00ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00B0u; }
        if (ctx->pc != 0x1C00B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00B0u; }
        if (ctx->pc != 0x1C00B0u) { return; }
    }
    ctx->pc = 0x1C00B0u;
    // 0x1c00b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00b4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C00B4u;
    SET_GPR_U32(ctx, 31, 0x1C00BCu);
    ctx->pc = 0x1C00B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00B4u;
            // 0x1c00b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00BCu; }
        if (ctx->pc != 0x1C00BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00BCu; }
        if (ctx->pc != 0x1C00BCu) { return; }
    }
    ctx->pc = 0x1C00BCu;
    // 0x1c00bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00c0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C00C0u;
    SET_GPR_U32(ctx, 31, 0x1C00C8u);
    ctx->pc = 0x1C00C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00C0u;
            // 0x1c00c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00C8u; }
        if (ctx->pc != 0x1C00C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00C8u; }
        if (ctx->pc != 0x1C00C8u) { return; }
    }
    ctx->pc = 0x1C00C8u;
    // 0x1c00c8: 0x240400d6  addiu       $a0, $zero, 0xD6
    ctx->pc = 0x1c00c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x1c00cc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C00CCu;
    SET_GPR_U32(ctx, 31, 0x1C00D4u);
    ctx->pc = 0x1C00D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00CCu;
            // 0x1c00d0: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00D4u; }
        if (ctx->pc != 0x1C00D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00D4u; }
        if (ctx->pc != 0x1C00D4u) { return; }
    }
    ctx->pc = 0x1C00D4u;
    // 0x1c00d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c00d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c00d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00dc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C00DCu;
    SET_GPR_U32(ctx, 31, 0x1C00E4u);
    ctx->pc = 0x1C00E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00DCu;
            // 0x1c00e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00E4u; }
        if (ctx->pc != 0x1C00E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00E4u; }
        if (ctx->pc != 0x1C00E4u) { return; }
    }
    ctx->pc = 0x1C00E4u;
    // 0x1c00e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C00E8u;
    SET_GPR_U32(ctx, 31, 0x1C00F0u);
    ctx->pc = 0x1C00ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00E8u;
            // 0x1c00ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00F0u; }
        if (ctx->pc != 0x1C00F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00F0u; }
        if (ctx->pc != 0x1C00F0u) { return; }
    }
    ctx->pc = 0x1C00F0u;
    // 0x1c00f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C00F4u;
    SET_GPR_U32(ctx, 31, 0x1C00FCu);
    ctx->pc = 0x1C00F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00F4u;
            // 0x1c00f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00FCu; }
        if (ctx->pc != 0x1C00FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C00FCu; }
        if (ctx->pc != 0x1C00FCu) { return; }
    }
    ctx->pc = 0x1C00FCu;
    // 0x1c00fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0100: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C0100u;
    SET_GPR_U32(ctx, 31, 0x1C0108u);
    ctx->pc = 0x1C0104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0100u;
            // 0x1c0104: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0108u; }
        if (ctx->pc != 0x1C0108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0108u; }
        if (ctx->pc != 0x1C0108u) { return; }
    }
    ctx->pc = 0x1C0108u;
    // 0x1c0108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c010c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C010Cu;
    SET_GPR_U32(ctx, 31, 0x1C0114u);
    ctx->pc = 0x1C0110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C010Cu;
            // 0x1c0110: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0114u; }
        if (ctx->pc != 0x1C0114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0114u; }
        if (ctx->pc != 0x1C0114u) { return; }
    }
    ctx->pc = 0x1C0114u;
    // 0x1c0114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c011c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C011Cu;
            // 0x1c0120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0124u;
}
