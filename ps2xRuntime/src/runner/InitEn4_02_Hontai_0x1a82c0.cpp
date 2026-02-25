#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn4_02_Hontai
// Address: 0x1a82c0 - 0x1a8328
void InitEn4_02_Hontai_0x1a82c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn4_02_Hontai_0x1a82c0");
#endif

    ctx->pc = 0x1a82c0u;

    // 0x1a82c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a82c4: 0x240400bf  addiu       $a0, $zero, 0xBF
    ctx->pc = 0x1a82c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1a82c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a82c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a82cc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1a82ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1a82d0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A82D0u;
    SET_GPR_U32(ctx, 31, 0x1A82D8u);
    ctx->pc = 0x1A82D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82D0u;
            // 0x1a82d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82D8u; }
        if (ctx->pc != 0x1A82D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82D8u; }
        if (ctx->pc != 0x1A82D8u) { return; }
    }
    ctx->pc = 0x1A82D8u;
    // 0x1a82d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a82d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a82dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A82E0u;
    SET_GPR_U32(ctx, 31, 0x1A82E8u);
    ctx->pc = 0x1A82E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82E0u;
            // 0x1a82e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82E8u; }
        if (ctx->pc != 0x1A82E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82E8u; }
        if (ctx->pc != 0x1A82E8u) { return; }
    }
    ctx->pc = 0x1A82E8u;
    // 0x1a82e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a82e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A82ECu;
    SET_GPR_U32(ctx, 31, 0x1A82F4u);
    ctx->pc = 0x1A82F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82ECu;
            // 0x1a82f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82F4u; }
        if (ctx->pc != 0x1A82F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82F4u; }
        if (ctx->pc != 0x1A82F4u) { return; }
    }
    ctx->pc = 0x1A82F4u;
    // 0x1a82f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a82f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a82f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A82F8u;
    SET_GPR_U32(ctx, 31, 0x1A8300u);
    ctx->pc = 0x1A82FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82F8u;
            // 0x1a82fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8300u; }
        if (ctx->pc != 0x1A8300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8300u; }
        if (ctx->pc != 0x1A8300u) { return; }
    }
    ctx->pc = 0x1A8300u;
    // 0x1a8300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8304: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A8304u;
    SET_GPR_U32(ctx, 31, 0x1A830Cu);
    ctx->pc = 0x1A8308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8304u;
            // 0x1a8308: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A830Cu; }
        if (ctx->pc != 0x1A830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A830Cu; }
        if (ctx->pc != 0x1A830Cu) { return; }
    }
    ctx->pc = 0x1A830Cu;
    // 0x1a830c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8310: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A8310u;
    SET_GPR_U32(ctx, 31, 0x1A8318u);
    ctx->pc = 0x1A8314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8310u;
            // 0x1a8314: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8318u; }
        if (ctx->pc != 0x1A8318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8318u; }
        if (ctx->pc != 0x1A8318u) { return; }
    }
    ctx->pc = 0x1A8318u;
    // 0x1a8318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a831c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a831cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8320: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8320u;
            // 0x1a8324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8328u;
}
