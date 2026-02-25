#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex2_01_Hontai
// Address: 0x1d11b0 - 0x1d122c
void InitEnex2_01_Hontai_0x1d11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex2_01_Hontai_0x1d11b0");
#endif

    ctx->pc = 0x1d11b0u;

    // 0x1d11b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d11b4: 0x2404005b  addiu       $a0, $zero, 0x5B
    ctx->pc = 0x1d11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1d11b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d11b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d11bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d11bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d11c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d11c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d11c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1d11c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d11c8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1D11C8u;
    SET_GPR_U32(ctx, 31, 0x1D11D0u);
    ctx->pc = 0x1D11CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11C8u;
            // 0x1d11cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11D0u; }
        if (ctx->pc != 0x1D11D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11D0u; }
        if (ctx->pc != 0x1D11D0u) { return; }
    }
    ctx->pc = 0x1D11D0u;
    // 0x1d11d0: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x1d11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1d11d4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1D11D4u;
    SET_GPR_U32(ctx, 31, 0x1D11DCu);
    ctx->pc = 0x1D11D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11D4u;
            // 0x1d11d8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11DCu; }
        if (ctx->pc != 0x1D11DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11DCu; }
        if (ctx->pc != 0x1D11DCu) { return; }
    }
    ctx->pc = 0x1D11DCu;
    // 0x1d11dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d11dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d11e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D11E4u;
    SET_GPR_U32(ctx, 31, 0x1D11ECu);
    ctx->pc = 0x1D11E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11E4u;
            // 0x1d11e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11ECu; }
        if (ctx->pc != 0x1D11ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11ECu; }
        if (ctx->pc != 0x1D11ECu) { return; }
    }
    ctx->pc = 0x1D11ECu;
    // 0x1d11ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d11ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D11F0u;
    SET_GPR_U32(ctx, 31, 0x1D11F8u);
    ctx->pc = 0x1D11F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11F0u;
            // 0x1d11f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F8u; }
        if (ctx->pc != 0x1D11F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D11F8u; }
        if (ctx->pc != 0x1D11F8u) { return; }
    }
    ctx->pc = 0x1D11F8u;
    // 0x1d11f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d11f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d11fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D11FCu;
    SET_GPR_U32(ctx, 31, 0x1D1204u);
    ctx->pc = 0x1D1200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D11FCu;
            // 0x1d1200: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1204u; }
        if (ctx->pc != 0x1D1204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1204u; }
        if (ctx->pc != 0x1D1204u) { return; }
    }
    ctx->pc = 0x1D1204u;
    // 0x1d1204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1208: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D1208u;
    SET_GPR_U32(ctx, 31, 0x1D1210u);
    ctx->pc = 0x1D120Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1208u;
            // 0x1d120c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1210u; }
        if (ctx->pc != 0x1D1210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1210u; }
        if (ctx->pc != 0x1D1210u) { return; }
    }
    ctx->pc = 0x1D1210u;
    // 0x1d1210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1214: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1D1214u;
    SET_GPR_U32(ctx, 31, 0x1D121Cu);
    ctx->pc = 0x1D1218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1214u;
            // 0x1d1218: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D121Cu; }
        if (ctx->pc != 0x1D121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D121Cu; }
        if (ctx->pc != 0x1D121Cu) { return; }
    }
    ctx->pc = 0x1D121Cu;
    // 0x1d121c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d121cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1224: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1224u;
            // 0x1d1228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D122Cu;
}
