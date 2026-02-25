#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex2_04_Hontai
// Address: 0x1d41d0 - 0x1d4238
void InitEnex2_04_Hontai_0x1d41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex2_04_Hontai_0x1d41d0");
#endif

    ctx->pc = 0x1d41d0u;

    // 0x1d41d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d41d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d41d4: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1d41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1d41d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d41d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d41dc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1d41dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1d41e0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D41E0u;
    SET_GPR_U32(ctx, 31, 0x1D41E8u);
    ctx->pc = 0x1D41E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41E0u;
            // 0x1d41e4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41E8u; }
        if (ctx->pc != 0x1D41E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41E8u; }
        if (ctx->pc != 0x1D41E8u) { return; }
    }
    ctx->pc = 0x1D41E8u;
    // 0x1d41e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d41e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d41ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D41F0u;
    SET_GPR_U32(ctx, 31, 0x1D41F8u);
    ctx->pc = 0x1D41F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41F0u;
            // 0x1d41f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41F8u; }
        if (ctx->pc != 0x1D41F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D41F8u; }
        if (ctx->pc != 0x1D41F8u) { return; }
    }
    ctx->pc = 0x1D41F8u;
    // 0x1d41f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d41f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d41fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D41FCu;
    SET_GPR_U32(ctx, 31, 0x1D4204u);
    ctx->pc = 0x1D4200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D41FCu;
            // 0x1d4200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4204u; }
        if (ctx->pc != 0x1D4204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4204u; }
        if (ctx->pc != 0x1D4204u) { return; }
    }
    ctx->pc = 0x1D4204u;
    // 0x1d4204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4208: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D4208u;
    SET_GPR_U32(ctx, 31, 0x1D4210u);
    ctx->pc = 0x1D420Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4208u;
            // 0x1d420c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4210u; }
        if (ctx->pc != 0x1D4210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4210u; }
        if (ctx->pc != 0x1D4210u) { return; }
    }
    ctx->pc = 0x1D4210u;
    // 0x1d4210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4214: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D4214u;
    SET_GPR_U32(ctx, 31, 0x1D421Cu);
    ctx->pc = 0x1D4218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4214u;
            // 0x1d4218: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D421Cu; }
        if (ctx->pc != 0x1D421Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D421Cu; }
        if (ctx->pc != 0x1D421Cu) { return; }
    }
    ctx->pc = 0x1D421Cu;
    // 0x1d421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4220: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D4220u;
    SET_GPR_U32(ctx, 31, 0x1D4228u);
    ctx->pc = 0x1D4224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4220u;
            // 0x1d4224: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4228u; }
        if (ctx->pc != 0x1D4228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4228u; }
        if (ctx->pc != 0x1D4228u) { return; }
    }
    ctx->pc = 0x1D4228u;
    // 0x1d4228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d422c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d422cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4230: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4230u;
            // 0x1d4234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4238u;
}
