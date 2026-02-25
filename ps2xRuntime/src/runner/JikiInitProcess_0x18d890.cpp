#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: JikiInitProcess
// Address: 0x18d890 - 0x18da70
void JikiInitProcess_0x18d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("JikiInitProcess_0x18d890");
#endif

    ctx->pc = 0x18d890u;

    // 0x18d890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d894: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18d898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d89c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18d8a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18d8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d8a4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d8ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x18d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x18d8b0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18d8b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d8b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18d8bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18d8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18d8c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18d8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8c8: 0x668021  addu        $s0, $v1, $a2
    ctx->pc = 0x18d8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d8cc: 0xc060694  jal         func_181A50
    ctx->pc = 0x18D8CCu;
    SET_GPR_U32(ctx, 31, 0x18D8D4u);
    ctx->pc = 0x18D8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8CCu;
            // 0x18d8d0: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8D4u; }
        if (ctx->pc != 0x18D8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8D4u; }
        if (ctx->pc != 0x18D8D4u) { return; }
    }
    ctx->pc = 0x18D8D4u;
    // 0x18d8d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18d8d8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x18d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x18d8dc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x18d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18d8e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18d8e4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d8e8: 0x2442a4e0  addiu       $v0, $v0, -0x5B20
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943968));
    // 0x18d8ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d8f0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18D8F0u;
    SET_GPR_U32(ctx, 31, 0x18D8F8u);
    ctx->pc = 0x18D8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D8F0u;
            // 0x18d8f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8F8u; }
        if (ctx->pc != 0x18D8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D8F8u; }
        if (ctx->pc != 0x18D8F8u) { return; }
    }
    ctx->pc = 0x18D8F8u;
    // 0x18d8f8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x18d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18d8fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18d8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d900: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18d904: 0x2442a4d0  addiu       $v0, $v0, -0x5B30
    ctx->pc = 0x18d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943952));
    // 0x18d908: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18d908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d90c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x18D90Cu;
    SET_GPR_U32(ctx, 31, 0x18D914u);
    ctx->pc = 0x18D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D90Cu;
            // 0x18d910: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D914u; }
        if (ctx->pc != 0x18D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D914u; }
        if (ctx->pc != 0x18D914u) { return; }
    }
    ctx->pc = 0x18D914u;
    // 0x18d914: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d918: 0xac220000  sw          $v0, 0x0($at)
    ctx->pc = 0x18d918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 2));
    // 0x18d91c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x18D91Cu;
    SET_GPR_U32(ctx, 31, 0x18D924u);
    ctx->pc = 0x18D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D91Cu;
            // 0x18d920: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D924u; }
        if (ctx->pc != 0x18D924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D924u; }
        if (ctx->pc != 0x18D924u) { return; }
    }
    ctx->pc = 0x18D924u;
    // 0x18d924: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d928: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18d928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d92c: 0xac220004  sw          $v0, 0x4($at)
    ctx->pc = 0x18d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 2));
    // 0x18d930: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d934: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d938: 0x8c270000  lw          $a3, 0x0($at)
    ctx->pc = 0x18d938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x18d93c: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d940: 0x8c280004  lw          $t0, 0x4($at)
    ctx->pc = 0x18d940u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x18d944: 0xc060614  jal         func_181850
    ctx->pc = 0x18D944u;
    SET_GPR_U32(ctx, 31, 0x18D94Cu);
    ctx->pc = 0x18D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D944u;
            // 0x18d948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D94Cu; }
        if (ctx->pc != 0x18D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D94Cu; }
        if (ctx->pc != 0x18D94Cu) { return; }
    }
    ctx->pc = 0x18D94Cu;
    // 0x18d94c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x18D94Cu;
    SET_GPR_U32(ctx, 31, 0x18D954u);
    ctx->pc = 0x18D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D94Cu;
            // 0x18d950: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D954u; }
        if (ctx->pc != 0x18D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D954u; }
        if (ctx->pc != 0x18D954u) { return; }
    }
    ctx->pc = 0x18D954u;
    // 0x18d954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18d954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d958: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x18D958u;
    SET_GPR_U32(ctx, 31, 0x18D960u);
    ctx->pc = 0x18D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D958u;
            // 0x18d95c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D960u; }
        if (ctx->pc != 0x18D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D960u; }
        if (ctx->pc != 0x18D960u) { return; }
    }
    ctx->pc = 0x18D960u;
    // 0x18d960: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d964: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18d968: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x18D968u;
    SET_GPR_U32(ctx, 31, 0x18D970u);
    ctx->pc = 0x18D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D968u;
            // 0x18d96c: 0xac220000  sw          $v0, 0x0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D970u; }
        if (ctx->pc != 0x18D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D970u; }
        if (ctx->pc != 0x18D970u) { return; }
    }
    ctx->pc = 0x18D970u;
    // 0x18d970: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18d974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d978: 0xac220004  sw          $v0, 0x4($at)
    ctx->pc = 0x18d978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 2));
    // 0x18d97c: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d980: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18d980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d984: 0x8c270000  lw          $a3, 0x0($at)
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x18d988: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x18d988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x18d98c: 0x8c280004  lw          $t0, 0x4($at)
    ctx->pc = 0x18d98cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x18d990: 0xc060614  jal         func_181850
    ctx->pc = 0x18D990u;
    SET_GPR_U32(ctx, 31, 0x18D998u);
    ctx->pc = 0x18D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D990u;
            // 0x18d994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D998u; }
        if (ctx->pc != 0x18D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D998u; }
        if (ctx->pc != 0x18D998u) { return; }
    }
    ctx->pc = 0x18D998u;
    // 0x18d998: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x18d998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x18d99c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d9a0: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x18d9a4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x18d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x18d9a8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x18d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x18d9ac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x18d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x18d9b0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x18d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x18d9b4: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18D9B4u;
    SET_GPR_U32(ctx, 31, 0x18D9BCu);
    ctx->pc = 0x18D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9B4u;
            // 0x18d9b8: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9BCu; }
        if (ctx->pc != 0x18D9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9BCu; }
        if (ctx->pc != 0x18D9BCu) { return; }
    }
    ctx->pc = 0x18D9BCu;
    // 0x18d9bc: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x18d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d9c0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d9c4: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18D9C4u;
    SET_GPR_U32(ctx, 31, 0x18D9CCu);
    ctx->pc = 0x18D9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9C4u;
            // 0x18d9c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9CCu; }
        if (ctx->pc != 0x18D9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9CCu; }
        if (ctx->pc != 0x18D9CCu) { return; }
    }
    ctx->pc = 0x18D9CCu;
    // 0x18d9cc: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x18d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d9d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d9d4: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18D9D4u;
    SET_GPR_U32(ctx, 31, 0x18D9DCu);
    ctx->pc = 0x18D9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9D4u;
            // 0x18d9d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9DCu; }
        if (ctx->pc != 0x18D9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9DCu; }
        if (ctx->pc != 0x18D9DCu) { return; }
    }
    ctx->pc = 0x18D9DCu;
    // 0x18d9dc: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x18d9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d9e0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d9e4: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18D9E4u;
    SET_GPR_U32(ctx, 31, 0x18D9ECu);
    ctx->pc = 0x18D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9E4u;
            // 0x18d9e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9ECu; }
        if (ctx->pc != 0x18D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9ECu; }
        if (ctx->pc != 0x18D9ECu) { return; }
    }
    ctx->pc = 0x18D9ECu;
    // 0x18d9ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d9f0: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x18d9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x18d9f4: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18D9F4u;
    SET_GPR_U32(ctx, 31, 0x18D9FCu);
    ctx->pc = 0x18D9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D9F4u;
            // 0x18d9f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9FCu; }
        if (ctx->pc != 0x18D9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9FCu; }
        if (ctx->pc != 0x18D9FCu) { return; }
    }
    ctx->pc = 0x18D9FCu;
    // 0x18d9fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18da00: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x18da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18da04: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18DA04u;
    SET_GPR_U32(ctx, 31, 0x18DA0Cu);
    ctx->pc = 0x18DA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA04u;
            // 0x18da08: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA0Cu; }
        if (ctx->pc != 0x18DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA0Cu; }
        if (ctx->pc != 0x18DA0Cu) { return; }
    }
    ctx->pc = 0x18DA0Cu;
    // 0x18da0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18da0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18da10: 0xc06060c  jal         func_181830
    ctx->pc = 0x18DA10u;
    SET_GPR_U32(ctx, 31, 0x18DA18u);
    ctx->pc = 0x18DA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA10u;
            // 0x18da14: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA18u; }
        if (ctx->pc != 0x18DA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA18u; }
        if (ctx->pc != 0x18DA18u) { return; }
    }
    ctx->pc = 0x18DA18u;
    // 0x18da18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18da1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da20: 0xc0605dc  jal         func_181770
    ctx->pc = 0x18DA20u;
    SET_GPR_U32(ctx, 31, 0x18DA28u);
    ctx->pc = 0x18DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA20u;
            // 0x18da24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA28u; }
        if (ctx->pc != 0x18DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA28u; }
        if (ctx->pc != 0x18DA28u) { return; }
    }
    ctx->pc = 0x18DA28u;
    // 0x18da28: 0xc0605cc  jal         func_181730
    ctx->pc = 0x18DA28u;
    SET_GPR_U32(ctx, 31, 0x18DA30u);
    ctx->pc = 0x18DA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA28u;
            // 0x18da2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA30u; }
        if (ctx->pc != 0x18DA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA30u; }
        if (ctx->pc != 0x18DA30u) { return; }
    }
    ctx->pc = 0x18DA30u;
    // 0x18da30: 0xc0605c0  jal         func_181700
    ctx->pc = 0x18DA30u;
    SET_GPR_U32(ctx, 31, 0x18DA38u);
    ctx->pc = 0x18DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA30u;
            // 0x18da34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181700u;
    if (runtime->hasFunction(0x181700u)) {
        auto targetFn = runtime->lookupFunction(0x181700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA38u; }
        if (ctx->pc != 0x18DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CameraViewMicroD_0x181700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA38u; }
        if (ctx->pc != 0x18DA38u) { return; }
    }
    ctx->pc = 0x18DA38u;
    // 0x18da38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18da3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18da3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da40: 0xc0605dc  jal         func_181770
    ctx->pc = 0x18DA40u;
    SET_GPR_U32(ctx, 31, 0x18DA48u);
    ctx->pc = 0x18DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA40u;
            // 0x18da44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA48u; }
        if (ctx->pc != 0x18DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA48u; }
        if (ctx->pc != 0x18DA48u) { return; }
    }
    ctx->pc = 0x18DA48u;
    // 0x18da48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18da4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da50: 0xc0605dc  jal         func_181770
    ctx->pc = 0x18DA50u;
    SET_GPR_U32(ctx, 31, 0x18DA58u);
    ctx->pc = 0x18DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA50u;
            // 0x18da54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA58u; }
        if (ctx->pc != 0x18DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DA58u; }
        if (ctx->pc != 0x18DA58u) { return; }
    }
    ctx->pc = 0x18DA58u;
    // 0x18da58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18da58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18da5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18da5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18da60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18da60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18da64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18da64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18da68: 0x3e00008  jr          $ra
    ctx->pc = 0x18DA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DA68u;
            // 0x18da6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DA70u;
}
