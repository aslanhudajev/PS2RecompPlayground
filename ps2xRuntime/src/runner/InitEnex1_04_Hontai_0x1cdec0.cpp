#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex1_04_Hontai
// Address: 0x1cdec0 - 0x1cdf28
void InitEnex1_04_Hontai_0x1cdec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex1_04_Hontai_0x1cdec0");
#endif

    ctx->pc = 0x1cdec0u;

    // 0x1cdec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdec4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1cdec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdecc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1cded0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1CDED0u;
    SET_GPR_U32(ctx, 31, 0x1CDED8u);
    ctx->pc = 0x1CDED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDED0u;
            // 0x1cded4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDED8u; }
        if (ctx->pc != 0x1CDED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDED8u; }
        if (ctx->pc != 0x1CDED8u) { return; }
    }
    ctx->pc = 0x1CDED8u;
    // 0x1cded8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cded8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdedc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdee0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CDEE0u;
    SET_GPR_U32(ctx, 31, 0x1CDEE8u);
    ctx->pc = 0x1CDEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEE0u;
            // 0x1cdee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEE8u; }
        if (ctx->pc != 0x1CDEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEE8u; }
        if (ctx->pc != 0x1CDEE8u) { return; }
    }
    ctx->pc = 0x1CDEE8u;
    // 0x1cdee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CDEECu;
    SET_GPR_U32(ctx, 31, 0x1CDEF4u);
    ctx->pc = 0x1CDEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEECu;
            // 0x1cdef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEF4u; }
        if (ctx->pc != 0x1CDEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEF4u; }
        if (ctx->pc != 0x1CDEF4u) { return; }
    }
    ctx->pc = 0x1CDEF4u;
    // 0x1cdef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdef8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CDEF8u;
    SET_GPR_U32(ctx, 31, 0x1CDF00u);
    ctx->pc = 0x1CDEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEF8u;
            // 0x1cdefc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF00u; }
        if (ctx->pc != 0x1CDF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF00u; }
        if (ctx->pc != 0x1CDF00u) { return; }
    }
    ctx->pc = 0x1CDF00u;
    // 0x1cdf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf04: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CDF04u;
    SET_GPR_U32(ctx, 31, 0x1CDF0Cu);
    ctx->pc = 0x1CDF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF04u;
            // 0x1cdf08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF0Cu; }
        if (ctx->pc != 0x1CDF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF0Cu; }
        if (ctx->pc != 0x1CDF0Cu) { return; }
    }
    ctx->pc = 0x1CDF0Cu;
    // 0x1cdf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1CDF10u;
    SET_GPR_U32(ctx, 31, 0x1CDF18u);
    ctx->pc = 0x1CDF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF10u;
            // 0x1cdf14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF18u; }
        if (ctx->pc != 0x1CDF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF18u; }
        if (ctx->pc != 0x1CDF18u) { return; }
    }
    ctx->pc = 0x1CDF18u;
    // 0x1cdf18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdf1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdf20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF20u;
            // 0x1cdf24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDF28u;
}
