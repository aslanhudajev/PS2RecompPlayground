#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn5_01_Hontai
// Address: 0x1b40e0 - 0x1b415c
void InitEn5_01_Hontai_0x1b40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn5_01_Hontai_0x1b40e0");
#endif

    ctx->pc = 0x1b40e0u;

    // 0x1b40e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b40e4: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x1b40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1b40e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b40e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b40ec: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b40ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b40f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b40f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b40f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1b40f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b40f8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1B40F8u;
    SET_GPR_U32(ctx, 31, 0x1B4100u);
    ctx->pc = 0x1B40FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B40F8u;
            // 0x1b40fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4100u; }
        if (ctx->pc != 0x1B4100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4100u; }
        if (ctx->pc != 0x1B4100u) { return; }
    }
    ctx->pc = 0x1B4100u;
    // 0x1b4100: 0x240400d8  addiu       $a0, $zero, 0xD8
    ctx->pc = 0x1b4100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x1b4104: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1B4104u;
    SET_GPR_U32(ctx, 31, 0x1B410Cu);
    ctx->pc = 0x1B4108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4104u;
            // 0x1b4108: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B410Cu; }
        if (ctx->pc != 0x1B410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B410Cu; }
        if (ctx->pc != 0x1B410Cu) { return; }
    }
    ctx->pc = 0x1B410Cu;
    // 0x1b410c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b410cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4114: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4114u;
    SET_GPR_U32(ctx, 31, 0x1B411Cu);
    ctx->pc = 0x1B4118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4114u;
            // 0x1b4118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B411Cu; }
        if (ctx->pc != 0x1B411Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B411Cu; }
        if (ctx->pc != 0x1B411Cu) { return; }
    }
    ctx->pc = 0x1B411Cu;
    // 0x1b411c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4120: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4120u;
    SET_GPR_U32(ctx, 31, 0x1B4128u);
    ctx->pc = 0x1B4124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4120u;
            // 0x1b4124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4128u; }
        if (ctx->pc != 0x1B4128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4128u; }
        if (ctx->pc != 0x1B4128u) { return; }
    }
    ctx->pc = 0x1B4128u;
    // 0x1b4128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b412c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B412Cu;
    SET_GPR_U32(ctx, 31, 0x1B4134u);
    ctx->pc = 0x1B4130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B412Cu;
            // 0x1b4130: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4134u; }
        if (ctx->pc != 0x1B4134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4134u; }
        if (ctx->pc != 0x1B4134u) { return; }
    }
    ctx->pc = 0x1B4134u;
    // 0x1b4134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4138: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4138u;
    SET_GPR_U32(ctx, 31, 0x1B4140u);
    ctx->pc = 0x1B413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4138u;
            // 0x1b413c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4140u; }
        if (ctx->pc != 0x1B4140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4140u; }
        if (ctx->pc != 0x1B4140u) { return; }
    }
    ctx->pc = 0x1B4140u;
    // 0x1b4140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4144: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1B4144u;
    SET_GPR_U32(ctx, 31, 0x1B414Cu);
    ctx->pc = 0x1B4148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4144u;
            // 0x1b4148: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B414Cu; }
        if (ctx->pc != 0x1B414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B414Cu; }
        if (ctx->pc != 0x1B414Cu) { return; }
    }
    ctx->pc = 0x1B414Cu;
    // 0x1b414c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b414cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4154: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4154u;
            // 0x1b4158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B415Cu;
}
