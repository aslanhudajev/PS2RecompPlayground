#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn2_04_Hontai
// Address: 0x199ac0 - 0x199b28
void InitEn2_04_Hontai_0x199ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn2_04_Hontai_0x199ac0");
#endif

    ctx->pc = 0x199ac0u;

    // 0x199ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199ac4: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x199ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199acc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x199ad0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x199AD0u;
    SET_GPR_U32(ctx, 31, 0x199AD8u);
    ctx->pc = 0x199AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AD0u;
            // 0x199ad4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AD8u; }
        if (ctx->pc != 0x199AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AD8u; }
        if (ctx->pc != 0x199AD8u) { return; }
    }
    ctx->pc = 0x199AD8u;
    // 0x199ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x199ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ae0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x199AE0u;
    SET_GPR_U32(ctx, 31, 0x199AE8u);
    ctx->pc = 0x199AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AE0u;
            // 0x199ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AE8u; }
        if (ctx->pc != 0x199AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AE8u; }
        if (ctx->pc != 0x199AE8u) { return; }
    }
    ctx->pc = 0x199AE8u;
    // 0x199ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199aec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x199AECu;
    SET_GPR_U32(ctx, 31, 0x199AF4u);
    ctx->pc = 0x199AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AECu;
            // 0x199af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AF4u; }
        if (ctx->pc != 0x199AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AF4u; }
        if (ctx->pc != 0x199AF4u) { return; }
    }
    ctx->pc = 0x199AF4u;
    // 0x199af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199af8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x199AF8u;
    SET_GPR_U32(ctx, 31, 0x199B00u);
    ctx->pc = 0x199AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199AF8u;
            // 0x199afc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B00u; }
        if (ctx->pc != 0x199B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B00u; }
        if (ctx->pc != 0x199B00u) { return; }
    }
    ctx->pc = 0x199B00u;
    // 0x199b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b04: 0xc060630  jal         func_1818C0
    ctx->pc = 0x199B04u;
    SET_GPR_U32(ctx, 31, 0x199B0Cu);
    ctx->pc = 0x199B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199B04u;
            // 0x199b08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B0Cu; }
        if (ctx->pc != 0x199B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B0Cu; }
        if (ctx->pc != 0x199B0Cu) { return; }
    }
    ctx->pc = 0x199B0Cu;
    // 0x199b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x199B10u;
    SET_GPR_U32(ctx, 31, 0x199B18u);
    ctx->pc = 0x199B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199B10u;
            // 0x199b14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B18u; }
        if (ctx->pc != 0x199B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B18u; }
        if (ctx->pc != 0x199B18u) { return; }
    }
    ctx->pc = 0x199B18u;
    // 0x199b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199b20: 0x3e00008  jr          $ra
    ctx->pc = 0x199B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199B20u;
            // 0x199b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199B28u;
}
