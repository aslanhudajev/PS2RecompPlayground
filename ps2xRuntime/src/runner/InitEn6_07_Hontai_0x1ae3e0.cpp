#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_07_Hontai
// Address: 0x1ae3e0 - 0x1ae45c
void InitEn6_07_Hontai_0x1ae3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_07_Hontai_0x1ae3e0");
#endif

    ctx->pc = 0x1ae3e0u;

    // 0x1ae3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae3e4: 0x24040107  addiu       $a0, $zero, 0x107
    ctx->pc = 0x1ae3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1ae3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae3ec: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1ae3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ae3f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ae3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ae3f8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1AE3F8u;
    SET_GPR_U32(ctx, 31, 0x1AE400u);
    ctx->pc = 0x1AE3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3F8u;
            // 0x1ae3fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE400u; }
        if (ctx->pc != 0x1AE400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE400u; }
        if (ctx->pc != 0x1AE400u) { return; }
    }
    ctx->pc = 0x1AE400u;
    // 0x1ae400: 0x240400fc  addiu       $a0, $zero, 0xFC
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ae404: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1AE404u;
    SET_GPR_U32(ctx, 31, 0x1AE40Cu);
    ctx->pc = 0x1AE408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE404u;
            // 0x1ae408: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE40Cu; }
        if (ctx->pc != 0x1AE40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE40Cu; }
        if (ctx->pc != 0x1AE40Cu) { return; }
    }
    ctx->pc = 0x1AE40Cu;
    // 0x1ae40c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae414: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AE414u;
    SET_GPR_U32(ctx, 31, 0x1AE41Cu);
    ctx->pc = 0x1AE418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE414u;
            // 0x1ae418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE41Cu; }
        if (ctx->pc != 0x1AE41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE41Cu; }
        if (ctx->pc != 0x1AE41Cu) { return; }
    }
    ctx->pc = 0x1AE41Cu;
    // 0x1ae41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae420: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AE420u;
    SET_GPR_U32(ctx, 31, 0x1AE428u);
    ctx->pc = 0x1AE424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE420u;
            // 0x1ae424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE428u; }
        if (ctx->pc != 0x1AE428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE428u; }
        if (ctx->pc != 0x1AE428u) { return; }
    }
    ctx->pc = 0x1AE428u;
    // 0x1ae428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae42c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AE42Cu;
    SET_GPR_U32(ctx, 31, 0x1AE434u);
    ctx->pc = 0x1AE430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE42Cu;
            // 0x1ae430: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE434u; }
        if (ctx->pc != 0x1AE434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE434u; }
        if (ctx->pc != 0x1AE434u) { return; }
    }
    ctx->pc = 0x1AE434u;
    // 0x1ae434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae438: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AE438u;
    SET_GPR_U32(ctx, 31, 0x1AE440u);
    ctx->pc = 0x1AE43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE438u;
            // 0x1ae43c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE440u; }
        if (ctx->pc != 0x1AE440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE440u; }
        if (ctx->pc != 0x1AE440u) { return; }
    }
    ctx->pc = 0x1AE440u;
    // 0x1ae440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae444: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AE444u;
    SET_GPR_U32(ctx, 31, 0x1AE44Cu);
    ctx->pc = 0x1AE448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE444u;
            // 0x1ae448: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE44Cu; }
        if (ctx->pc != 0x1AE44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE44Cu; }
        if (ctx->pc != 0x1AE44Cu) { return; }
    }
    ctx->pc = 0x1AE44Cu;
    // 0x1ae44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae454: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE454u;
            // 0x1ae458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE45Cu;
}
