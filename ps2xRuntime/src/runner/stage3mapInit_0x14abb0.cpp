#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage3mapInit
// Address: 0x14abb0 - 0x14b714
void stage3mapInit_0x14abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage3mapInit_0x14abb0");
#endif

    ctx->pc = 0x14abb0u;

    // 0x14abb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14abb4: 0x240400b7  addiu       $a0, $zero, 0xB7
    ctx->pc = 0x14abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x14abb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14abbc: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x14abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14abc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14abc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14abc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14abc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14abcc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14abccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14abd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14abd4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14ABD4u;
    SET_GPR_U32(ctx, 31, 0x14ABDCu);
    ctx->pc = 0x14ABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABD4u;
            // 0x14abd8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABDCu; }
        if (ctx->pc != 0x14ABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABDCu; }
        if (ctx->pc != 0x14ABDCu) { return; }
    }
    ctx->pc = 0x14ABDCu;
    // 0x14abdc: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x14abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x14abe0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x14abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14abe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14abe8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14ABE8u;
    SET_GPR_U32(ctx, 31, 0x14ABF0u);
    ctx->pc = 0x14ABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABE8u;
            // 0x14abec: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABF0u; }
        if (ctx->pc != 0x14ABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ABF0u; }
        if (ctx->pc != 0x14ABF0u) { return; }
    }
    ctx->pc = 0x14ABF0u;
    // 0x14abf0: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x14abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x14abf4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x14abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14abf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14abfc: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14ABFCu;
    SET_GPR_U32(ctx, 31, 0x14AC04u);
    ctx->pc = 0x14AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ABFCu;
            // 0x14ac00: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC04u; }
        if (ctx->pc != 0x14AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC04u; }
        if (ctx->pc != 0x14AC04u) { return; }
    }
    ctx->pc = 0x14AC04u;
    // 0x14ac04: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x14ac04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x14ac08: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x14ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ac0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ac10: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14AC10u;
    SET_GPR_U32(ctx, 31, 0x14AC18u);
    ctx->pc = 0x14AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC10u;
            // 0x14ac14: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC18u; }
        if (ctx->pc != 0x14AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC18u; }
        if (ctx->pc != 0x14AC18u) { return; }
    }
    ctx->pc = 0x14AC18u;
    // 0x14ac18: 0x240400b9  addiu       $a0, $zero, 0xB9
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x14ac1c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x14ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14ac20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ac20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ac24: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14AC24u;
    SET_GPR_U32(ctx, 31, 0x14AC2Cu);
    ctx->pc = 0x14AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC24u;
            // 0x14ac28: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC2Cu; }
        if (ctx->pc != 0x14AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC2Cu; }
        if (ctx->pc != 0x14AC2Cu) { return; }
    }
    ctx->pc = 0x14AC2Cu;
    // 0x14ac2c: 0x240400ba  addiu       $a0, $zero, 0xBA
    ctx->pc = 0x14ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x14ac30: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14ac34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ac38: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14AC38u;
    SET_GPR_U32(ctx, 31, 0x14AC40u);
    ctx->pc = 0x14AC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC38u;
            // 0x14ac3c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC40u; }
        if (ctx->pc != 0x14AC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC40u; }
        if (ctx->pc != 0x14AC40u) { return; }
    }
    ctx->pc = 0x14AC40u;
    // 0x14ac40: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x14ac44: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x14ac48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14ac48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac4c: 0x26319640  addiu       $s1, $s1, -0x69C0
    ctx->pc = 0x14ac4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940224));
    // 0x14ac50: 0x26109600  addiu       $s0, $s0, -0x6A00
    ctx->pc = 0x14ac50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940160));
    // 0x14ac54: 0x0  nop
    ctx->pc = 0x14ac54u;
    // NOP
label_14ac58:
    // 0x14ac58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x14ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14ac5c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14AC5Cu;
    SET_GPR_U32(ctx, 31, 0x14AC64u);
    ctx->pc = 0x14AC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC5Cu;
            // 0x14ac60: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC64u; }
        if (ctx->pc != 0x14AC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC64u; }
        if (ctx->pc != 0x14AC64u) { return; }
    }
    ctx->pc = 0x14AC64u;
    // 0x14ac64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ac64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac6c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AC6Cu;
    SET_GPR_U32(ctx, 31, 0x14AC74u);
    ctx->pc = 0x14AC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC6Cu;
            // 0x14ac70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC74u; }
        if (ctx->pc != 0x14AC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC74u; }
        if (ctx->pc != 0x14AC74u) { return; }
    }
    ctx->pc = 0x14AC74u;
    // 0x14ac74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac78: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AC78u;
    SET_GPR_U32(ctx, 31, 0x14AC80u);
    ctx->pc = 0x14AC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC78u;
            // 0x14ac7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC80u; }
        if (ctx->pc != 0x14AC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC80u; }
        if (ctx->pc != 0x14AC80u) { return; }
    }
    ctx->pc = 0x14AC80u;
    // 0x14ac80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac84: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AC84u;
    SET_GPR_U32(ctx, 31, 0x14AC8Cu);
    ctx->pc = 0x14AC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC84u;
            // 0x14ac88: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC8Cu; }
        if (ctx->pc != 0x14AC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC8Cu; }
        if (ctx->pc != 0x14AC8Cu) { return; }
    }
    ctx->pc = 0x14AC8Cu;
    // 0x14ac8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac90: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AC90u;
    SET_GPR_U32(ctx, 31, 0x14AC98u);
    ctx->pc = 0x14AC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC90u;
            // 0x14ac94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC98u; }
        if (ctx->pc != 0x14AC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AC98u; }
        if (ctx->pc != 0x14AC98u) { return; }
    }
    ctx->pc = 0x14AC98u;
    // 0x14ac98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac9c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AC9Cu;
    SET_GPR_U32(ctx, 31, 0x14ACA4u);
    ctx->pc = 0x14ACA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AC9Cu;
            // 0x14aca0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACA4u; }
        if (ctx->pc != 0x14ACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACA4u; }
        if (ctx->pc != 0x14ACA4u) { return; }
    }
    ctx->pc = 0x14ACA4u;
    // 0x14aca4: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x14aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x14aca8: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x14aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x14acac: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14ACACu;
    SET_GPR_U32(ctx, 31, 0x14ACB4u);
    ctx->pc = 0x14ACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACACu;
            // 0x14acb0: 0x26460160  addiu       $a2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACB4u; }
        if (ctx->pc != 0x14ACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACB4u; }
        if (ctx->pc != 0x14ACB4u) { return; }
    }
    ctx->pc = 0x14ACB4u;
    // 0x14acb4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14ACB4u;
    SET_GPR_U32(ctx, 31, 0x14ACBCu);
    ctx->pc = 0x14ACB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACB4u;
            // 0x14acb8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACBCu; }
        if (ctx->pc != 0x14ACBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACBCu; }
        if (ctx->pc != 0x14ACBCu) { return; }
    }
    ctx->pc = 0x14ACBCu;
    // 0x14acbc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14acbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14acc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14acc4: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14ACC4u;
    SET_GPR_U32(ctx, 31, 0x14ACCCu);
    ctx->pc = 0x14ACC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACC4u;
            // 0x14acc8: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACCCu; }
        if (ctx->pc != 0x14ACCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACCCu; }
        if (ctx->pc != 0x14ACCCu) { return; }
    }
    ctx->pc = 0x14ACCCu;
    // 0x14accc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14acccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14acd0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14acd4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14ACD4u;
    SET_GPR_U32(ctx, 31, 0x14ACDCu);
    ctx->pc = 0x14ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACD4u;
            // 0x14acd8: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACDCu; }
        if (ctx->pc != 0x14ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACDCu; }
        if (ctx->pc != 0x14ACDCu) { return; }
    }
    ctx->pc = 0x14ACDCu;
    // 0x14acdc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14acdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ace0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ace0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ace4: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14ace4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14ace8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14acec: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14acecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14acf0: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14acf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14acf4: 0xc060614  jal         func_181850
    ctx->pc = 0x14ACF4u;
    SET_GPR_U32(ctx, 31, 0x14ACFCu);
    ctx->pc = 0x14ACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ACF4u;
            // 0x14acf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACFCu; }
        if (ctx->pc != 0x14ACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ACFCu; }
        if (ctx->pc != 0x14ACFCu) { return; }
    }
    ctx->pc = 0x14ACFCu;
    // 0x14acfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad00: 0xc06060c  jal         func_181830
    ctx->pc = 0x14AD00u;
    SET_GPR_U32(ctx, 31, 0x14AD08u);
    ctx->pc = 0x14AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD00u;
            // 0x14ad04: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD08u; }
        if (ctx->pc != 0x14AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD08u; }
        if (ctx->pc != 0x14AD08u) { return; }
    }
    ctx->pc = 0x14AD08u;
    // 0x14ad08: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14ad0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ad14: 0xc060604  jal         func_181810
    ctx->pc = 0x14AD14u;
    SET_GPR_U32(ctx, 31, 0x14AD1Cu);
    ctx->pc = 0x14AD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD14u;
            // 0x14ad18: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD1Cu; }
        if (ctx->pc != 0x14AD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD1Cu; }
        if (ctx->pc != 0x14AD1Cu) { return; }
    }
    ctx->pc = 0x14AD1Cu;
    // 0x14ad1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ad20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad24: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14AD24u;
    SET_GPR_U32(ctx, 31, 0x14AD2Cu);
    ctx->pc = 0x14AD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD24u;
            // 0x14ad28: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD2Cu; }
        if (ctx->pc != 0x14AD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD2Cu; }
        if (ctx->pc != 0x14AD2Cu) { return; }
    }
    ctx->pc = 0x14AD2Cu;
    // 0x14ad2c: 0x8e440180  lw          $a0, 0x180($s2)
    ctx->pc = 0x14ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x14ad30: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14AD30u;
    SET_GPR_U32(ctx, 31, 0x14AD38u);
    ctx->pc = 0x14AD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD30u;
            // 0x14ad34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD38u; }
        if (ctx->pc != 0x14AD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD38u; }
        if (ctx->pc != 0x14AD38u) { return; }
    }
    ctx->pc = 0x14AD38u;
    // 0x14ad38: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14AD38u;
    SET_GPR_U32(ctx, 31, 0x14AD40u);
    ctx->pc = 0x14AD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD38u;
            // 0x14ad3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD40u; }
        if (ctx->pc != 0x14AD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD40u; }
        if (ctx->pc != 0x14AD40u) { return; }
    }
    ctx->pc = 0x14AD40u;
    // 0x14ad40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14ad40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14ad44: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14ad44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x14ad48: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x14ad48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14ad4c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x14AD4Cu;
    {
        const bool branch_taken_0x14ad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD4Cu;
            // 0x14ad50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ad4c) {
            ctx->pc = 0x14AC58u;
            goto label_14ac58;
        }
    }
    ctx->pc = 0x14AD54u;
    // 0x14ad54: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x14ad54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x14ad58: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x14ad58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x14ad5c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x14ad5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14ad60: 0x26739658  addiu       $s3, $s3, -0x69A8
    ctx->pc = 0x14ad60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940248));
    // 0x14ad64: 0x26529618  addiu       $s2, $s2, -0x69E8
    ctx->pc = 0x14ad64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294940184));
label_14ad68:
    // 0x14ad68: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ad6c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14AD6Cu;
    SET_GPR_U32(ctx, 31, 0x14AD74u);
    ctx->pc = 0x14AD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD6Cu;
            // 0x14ad70: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD74u; }
        if (ctx->pc != 0x14AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD74u; }
        if (ctx->pc != 0x14AD74u) { return; }
    }
    ctx->pc = 0x14AD74u;
    // 0x14ad74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ad74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14ad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad7c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AD7Cu;
    SET_GPR_U32(ctx, 31, 0x14AD84u);
    ctx->pc = 0x14AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD7Cu;
            // 0x14ad80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD84u; }
        if (ctx->pc != 0x14AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD84u; }
        if (ctx->pc != 0x14AD84u) { return; }
    }
    ctx->pc = 0x14AD84u;
    // 0x14ad84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad88: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AD88u;
    SET_GPR_U32(ctx, 31, 0x14AD90u);
    ctx->pc = 0x14AD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD88u;
            // 0x14ad8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD90u; }
        if (ctx->pc != 0x14AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD90u; }
        if (ctx->pc != 0x14AD90u) { return; }
    }
    ctx->pc = 0x14AD90u;
    // 0x14ad90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ad94: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AD94u;
    SET_GPR_U32(ctx, 31, 0x14AD9Cu);
    ctx->pc = 0x14AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AD94u;
            // 0x14ad98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD9Cu; }
        if (ctx->pc != 0x14AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AD9Cu; }
        if (ctx->pc != 0x14AD9Cu) { return; }
    }
    ctx->pc = 0x14AD9Cu;
    // 0x14ad9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ada0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14ADA0u;
    SET_GPR_U32(ctx, 31, 0x14ADA8u);
    ctx->pc = 0x14ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADA0u;
            // 0x14ada4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADA8u; }
        if (ctx->pc != 0x14ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADA8u; }
        if (ctx->pc != 0x14ADA8u) { return; }
    }
    ctx->pc = 0x14ADA8u;
    // 0x14ada8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14ADACu;
    SET_GPR_U32(ctx, 31, 0x14ADB4u);
    ctx->pc = 0x14ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADACu;
            // 0x14adb0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADB4u; }
        if (ctx->pc != 0x14ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADB4u; }
        if (ctx->pc != 0x14ADB4u) { return; }
    }
    ctx->pc = 0x14ADB4u;
    // 0x14adb4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14adb8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14adbc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14ADBCu;
    SET_GPR_U32(ctx, 31, 0x14ADC4u);
    ctx->pc = 0x14ADC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADBCu;
            // 0x14adc0: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADC4u; }
        if (ctx->pc != 0x14ADC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADC4u; }
        if (ctx->pc != 0x14ADC4u) { return; }
    }
    ctx->pc = 0x14ADC4u;
    // 0x14adc4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14ADC4u;
    SET_GPR_U32(ctx, 31, 0x14ADCCu);
    ctx->pc = 0x14ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADC4u;
            // 0x14adc8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADCCu; }
        if (ctx->pc != 0x14ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADCCu; }
        if (ctx->pc != 0x14ADCCu) { return; }
    }
    ctx->pc = 0x14ADCCu;
    // 0x14adcc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14adccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14add0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14add4: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14ADD4u;
    SET_GPR_U32(ctx, 31, 0x14ADDCu);
    ctx->pc = 0x14ADD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADD4u;
            // 0x14add8: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADDCu; }
        if (ctx->pc != 0x14ADDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADDCu; }
        if (ctx->pc != 0x14ADDCu) { return; }
    }
    ctx->pc = 0x14ADDCu;
    // 0x14addc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14addcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ade0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14ade4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14ADE4u;
    SET_GPR_U32(ctx, 31, 0x14ADECu);
    ctx->pc = 0x14ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ADE4u;
            // 0x14ade8: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADECu; }
        if (ctx->pc != 0x14ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ADECu; }
        if (ctx->pc != 0x14ADECu) { return; }
    }
    ctx->pc = 0x14ADECu;
    // 0x14adec: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14adecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14adf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14adf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adf4: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14adf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14adf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14adf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14adfc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae00: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14ae00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14ae04: 0xc060614  jal         func_181850
    ctx->pc = 0x14AE04u;
    SET_GPR_U32(ctx, 31, 0x14AE0Cu);
    ctx->pc = 0x14AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE04u;
            // 0x14ae08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE0Cu; }
        if (ctx->pc != 0x14AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE0Cu; }
        if (ctx->pc != 0x14AE0Cu) { return; }
    }
    ctx->pc = 0x14AE0Cu;
    // 0x14ae0c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14AE0Cu;
    SET_GPR_U32(ctx, 31, 0x14AE14u);
    ctx->pc = 0x14AE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE0Cu;
            // 0x14ae10: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE14u; }
        if (ctx->pc != 0x14AE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE14u; }
        if (ctx->pc != 0x14AE14u) { return; }
    }
    ctx->pc = 0x14AE14u;
    // 0x14ae14: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae18: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x14ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x14ae1c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14AE1Cu;
    SET_GPR_U32(ctx, 31, 0x14AE24u);
    ctx->pc = 0x14AE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE1Cu;
            // 0x14ae20: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE24u; }
        if (ctx->pc != 0x14AE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE24u; }
        if (ctx->pc != 0x14AE24u) { return; }
    }
    ctx->pc = 0x14AE24u;
    // 0x14ae24: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae28: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14ae2c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AE2Cu;
    SET_GPR_U32(ctx, 31, 0x14AE34u);
    ctx->pc = 0x14AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE2Cu;
            // 0x14ae30: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE34u; }
        if (ctx->pc != 0x14AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE34u; }
        if (ctx->pc != 0x14AE34u) { return; }
    }
    ctx->pc = 0x14AE34u;
    // 0x14ae34: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ae38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae3c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14ae3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14ae40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae44: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae48: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14ae48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14ae4c: 0xc060614  jal         func_181850
    ctx->pc = 0x14AE4Cu;
    SET_GPR_U32(ctx, 31, 0x14AE54u);
    ctx->pc = 0x14AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE4Cu;
            // 0x14ae50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE54u; }
        if (ctx->pc != 0x14AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE54u; }
        if (ctx->pc != 0x14AE54u) { return; }
    }
    ctx->pc = 0x14AE54u;
    // 0x14ae54: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14AE54u;
    SET_GPR_U32(ctx, 31, 0x14AE5Cu);
    ctx->pc = 0x14AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE54u;
            // 0x14ae58: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE5Cu; }
        if (ctx->pc != 0x14AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE5Cu; }
        if (ctx->pc != 0x14AE5Cu) { return; }
    }
    ctx->pc = 0x14AE5Cu;
    // 0x14ae5c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae60: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x14ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x14ae64: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14AE64u;
    SET_GPR_U32(ctx, 31, 0x14AE6Cu);
    ctx->pc = 0x14AE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE64u;
            // 0x14ae68: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE6Cu; }
        if (ctx->pc != 0x14AE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE6Cu; }
        if (ctx->pc != 0x14AE6Cu) { return; }
    }
    ctx->pc = 0x14AE6Cu;
    // 0x14ae6c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14ae74: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AE74u;
    SET_GPR_U32(ctx, 31, 0x14AE7Cu);
    ctx->pc = 0x14AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE74u;
            // 0x14ae78: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE7Cu; }
        if (ctx->pc != 0x14AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE7Cu; }
        if (ctx->pc != 0x14AE7Cu) { return; }
    }
    ctx->pc = 0x14AE7Cu;
    // 0x14ae7c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ae80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae84: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14ae84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14ae88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ae8c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14ae8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14ae90: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14ae90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14ae94: 0xc060614  jal         func_181850
    ctx->pc = 0x14AE94u;
    SET_GPR_U32(ctx, 31, 0x14AE9Cu);
    ctx->pc = 0x14AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AE94u;
            // 0x14ae98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE9Cu; }
        if (ctx->pc != 0x14AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AE9Cu; }
        if (ctx->pc != 0x14AE9Cu) { return; }
    }
    ctx->pc = 0x14AE9Cu;
    // 0x14ae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aea0: 0xc06060c  jal         func_181830
    ctx->pc = 0x14AEA0u;
    SET_GPR_U32(ctx, 31, 0x14AEA8u);
    ctx->pc = 0x14AEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEA0u;
            // 0x14aea4: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEA8u; }
        if (ctx->pc != 0x14AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEA8u; }
        if (ctx->pc != 0x14AEA8u) { return; }
    }
    ctx->pc = 0x14AEA8u;
    // 0x14aea8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14aea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14aeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aeb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aeb4: 0xc060604  jal         func_181810
    ctx->pc = 0x14AEB4u;
    SET_GPR_U32(ctx, 31, 0x14AEBCu);
    ctx->pc = 0x14AEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEB4u;
            // 0x14aeb8: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEBCu; }
        if (ctx->pc != 0x14AEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEBCu; }
        if (ctx->pc != 0x14AEBCu) { return; }
    }
    ctx->pc = 0x14AEBCu;
    // 0x14aebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aec4: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14AEC4u;
    SET_GPR_U32(ctx, 31, 0x14AECCu);
    ctx->pc = 0x14AEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEC4u;
            // 0x14aec8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AECCu; }
        if (ctx->pc != 0x14AECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AECCu; }
        if (ctx->pc != 0x14AECCu) { return; }
    }
    ctx->pc = 0x14AECCu;
    // 0x14aecc: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14aed0: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14AED0u;
    SET_GPR_U32(ctx, 31, 0x14AED8u);
    ctx->pc = 0x14AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AED0u;
            // 0x14aed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AED8u; }
        if (ctx->pc != 0x14AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AED8u; }
        if (ctx->pc != 0x14AED8u) { return; }
    }
    ctx->pc = 0x14AED8u;
    // 0x14aed8: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14AED8u;
    SET_GPR_U32(ctx, 31, 0x14AEE0u);
    ctx->pc = 0x14AEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AED8u;
            // 0x14aedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEE0u; }
        if (ctx->pc != 0x14AEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AEE0u; }
        if (ctx->pc != 0x14AEE0u) { return; }
    }
    ctx->pc = 0x14AEE0u;
    // 0x14aee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14aee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14aee4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x14aee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x14aee8: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x14aee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x14aeec: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x14AEECu;
    {
        const bool branch_taken_0x14aeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AEECu;
            // 0x14aef0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aeec) {
            ctx->pc = 0x14AD68u;
            goto label_14ad68;
        }
    }
    ctx->pc = 0x14AEF4u;
    // 0x14aef4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14aef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14aef8: 0x8c249628  lw          $a0, -0x69D8($at)
    ctx->pc = 0x14aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940200)));
    // 0x14aefc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14aefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14af00: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14AF00u;
    SET_GPR_U32(ctx, 31, 0x14AF08u);
    ctx->pc = 0x14AF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF00u;
            // 0x14af04: 0x8c259668  lw          $a1, -0x6998($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF08u; }
        if (ctx->pc != 0x14AF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF08u; }
        if (ctx->pc != 0x14AF08u) { return; }
    }
    ctx->pc = 0x14AF08u;
    // 0x14af08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14af08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14af0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AF10u;
    SET_GPR_U32(ctx, 31, 0x14AF18u);
    ctx->pc = 0x14AF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF10u;
            // 0x14af14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF18u; }
        if (ctx->pc != 0x14AF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF18u; }
        if (ctx->pc != 0x14AF18u) { return; }
    }
    ctx->pc = 0x14AF18u;
    // 0x14af18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af1c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AF1Cu;
    SET_GPR_U32(ctx, 31, 0x14AF24u);
    ctx->pc = 0x14AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF1Cu;
            // 0x14af20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF24u; }
        if (ctx->pc != 0x14AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF24u; }
        if (ctx->pc != 0x14AF24u) { return; }
    }
    ctx->pc = 0x14AF24u;
    // 0x14af24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14af24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AF28u;
    SET_GPR_U32(ctx, 31, 0x14AF30u);
    ctx->pc = 0x14AF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF28u;
            // 0x14af2c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF30u; }
        if (ctx->pc != 0x14AF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF30u; }
        if (ctx->pc != 0x14AF30u) { return; }
    }
    ctx->pc = 0x14AF30u;
    // 0x14af30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14af30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AF34u;
    SET_GPR_U32(ctx, 31, 0x14AF3Cu);
    ctx->pc = 0x14AF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF34u;
            // 0x14af38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF3Cu; }
        if (ctx->pc != 0x14AF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF3Cu; }
        if (ctx->pc != 0x14AF3Cu) { return; }
    }
    ctx->pc = 0x14AF3Cu;
    // 0x14af3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14af3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14AF40u;
    SET_GPR_U32(ctx, 31, 0x14AF48u);
    ctx->pc = 0x14AF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF40u;
            // 0x14af44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF48u; }
        if (ctx->pc != 0x14AF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF48u; }
        if (ctx->pc != 0x14AF48u) { return; }
    }
    ctx->pc = 0x14AF48u;
    // 0x14af48: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14af4c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14af4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14af50: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14AF50u;
    SET_GPR_U32(ctx, 31, 0x14AF58u);
    ctx->pc = 0x14AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF50u;
            // 0x14af54: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF58u; }
        if (ctx->pc != 0x14AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF58u; }
        if (ctx->pc != 0x14AF58u) { return; }
    }
    ctx->pc = 0x14AF58u;
    // 0x14af58: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14AF58u;
    SET_GPR_U32(ctx, 31, 0x14AF60u);
    ctx->pc = 0x14AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF58u;
            // 0x14af5c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF60u; }
        if (ctx->pc != 0x14AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF60u; }
        if (ctx->pc != 0x14AF60u) { return; }
    }
    ctx->pc = 0x14AF60u;
    // 0x14af60: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14af60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14af64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14af64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14af68: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14AF68u;
    SET_GPR_U32(ctx, 31, 0x14AF70u);
    ctx->pc = 0x14AF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF68u;
            // 0x14af6c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF70u; }
        if (ctx->pc != 0x14AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF70u; }
        if (ctx->pc != 0x14AF70u) { return; }
    }
    ctx->pc = 0x14AF70u;
    // 0x14af70: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14af74: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14af74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14af78: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AF78u;
    SET_GPR_U32(ctx, 31, 0x14AF80u);
    ctx->pc = 0x14AF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF78u;
            // 0x14af7c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF80u; }
        if (ctx->pc != 0x14AF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AF80u; }
        if (ctx->pc != 0x14AF80u) { return; }
    }
    ctx->pc = 0x14AF80u;
    // 0x14af80: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14af80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14af84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14af84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af88: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14af88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14af8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14af8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14af90: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14af90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14af94: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14af94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14af98: 0xc060614  jal         func_181850
    ctx->pc = 0x14AF98u;
    SET_GPR_U32(ctx, 31, 0x14AFA0u);
    ctx->pc = 0x14AF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AF98u;
            // 0x14af9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFA0u; }
        if (ctx->pc != 0x14AFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFA0u; }
        if (ctx->pc != 0x14AFA0u) { return; }
    }
    ctx->pc = 0x14AFA0u;
    // 0x14afa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14afa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afa4: 0xc06060c  jal         func_181830
    ctx->pc = 0x14AFA4u;
    SET_GPR_U32(ctx, 31, 0x14AFACu);
    ctx->pc = 0x14AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFA4u;
            // 0x14afa8: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFACu; }
        if (ctx->pc != 0x14AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFACu; }
        if (ctx->pc != 0x14AFACu) { return; }
    }
    ctx->pc = 0x14AFACu;
    // 0x14afac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14afacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14afb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14afb8: 0xc060604  jal         func_181810
    ctx->pc = 0x14AFB8u;
    SET_GPR_U32(ctx, 31, 0x14AFC0u);
    ctx->pc = 0x14AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFB8u;
            // 0x14afbc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFC0u; }
        if (ctx->pc != 0x14AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFC0u; }
        if (ctx->pc != 0x14AFC0u) { return; }
    }
    ctx->pc = 0x14AFC0u;
    // 0x14afc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14afc8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14AFC8u;
    SET_GPR_U32(ctx, 31, 0x14AFD0u);
    ctx->pc = 0x14AFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFC8u;
            // 0x14afcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFD0u; }
        if (ctx->pc != 0x14AFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFD0u; }
        if (ctx->pc != 0x14AFD0u) { return; }
    }
    ctx->pc = 0x14AFD0u;
    // 0x14afd0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14afd4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14AFD4u;
    SET_GPR_U32(ctx, 31, 0x14AFDCu);
    ctx->pc = 0x14AFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFD4u;
            // 0x14afd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFDCu; }
        if (ctx->pc != 0x14AFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFDCu; }
        if (ctx->pc != 0x14AFDCu) { return; }
    }
    ctx->pc = 0x14AFDCu;
    // 0x14afdc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14AFDCu;
    SET_GPR_U32(ctx, 31, 0x14AFE4u);
    ctx->pc = 0x14AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFDCu;
            // 0x14afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFE4u; }
        if (ctx->pc != 0x14AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFE4u; }
        if (ctx->pc != 0x14AFE4u) { return; }
    }
    ctx->pc = 0x14AFE4u;
    // 0x14afe4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14afe8: 0x8c24962c  lw          $a0, -0x69D4($at)
    ctx->pc = 0x14afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940204)));
    // 0x14afec: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14afecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14aff0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14AFF0u;
    SET_GPR_U32(ctx, 31, 0x14AFF8u);
    ctx->pc = 0x14AFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AFF0u;
            // 0x14aff4: 0x8c25966c  lw          $a1, -0x6994($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940268)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFF8u; }
        if (ctx->pc != 0x14AFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AFF8u; }
        if (ctx->pc != 0x14AFF8u) { return; }
    }
    ctx->pc = 0x14AFF8u;
    // 0x14aff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14aff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14affc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b000: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B000u;
    SET_GPR_U32(ctx, 31, 0x14B008u);
    ctx->pc = 0x14B004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B000u;
            // 0x14b004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B008u; }
        if (ctx->pc != 0x14B008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B008u; }
        if (ctx->pc != 0x14B008u) { return; }
    }
    ctx->pc = 0x14B008u;
    // 0x14b008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b00c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B00Cu;
    SET_GPR_U32(ctx, 31, 0x14B014u);
    ctx->pc = 0x14B010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B00Cu;
            // 0x14b010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B014u; }
        if (ctx->pc != 0x14B014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B014u; }
        if (ctx->pc != 0x14B014u) { return; }
    }
    ctx->pc = 0x14B014u;
    // 0x14b014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b018: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B018u;
    SET_GPR_U32(ctx, 31, 0x14B020u);
    ctx->pc = 0x14B01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B018u;
            // 0x14b01c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B020u; }
        if (ctx->pc != 0x14B020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B020u; }
        if (ctx->pc != 0x14B020u) { return; }
    }
    ctx->pc = 0x14B020u;
    // 0x14b020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b024: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B024u;
    SET_GPR_U32(ctx, 31, 0x14B02Cu);
    ctx->pc = 0x14B028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B024u;
            // 0x14b028: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B02Cu; }
        if (ctx->pc != 0x14B02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B02Cu; }
        if (ctx->pc != 0x14B02Cu) { return; }
    }
    ctx->pc = 0x14B02Cu;
    // 0x14b02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b030: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B030u;
    SET_GPR_U32(ctx, 31, 0x14B038u);
    ctx->pc = 0x14B034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B030u;
            // 0x14b034: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B038u; }
        if (ctx->pc != 0x14B038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B038u; }
        if (ctx->pc != 0x14B038u) { return; }
    }
    ctx->pc = 0x14B038u;
    // 0x14b038: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x14b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x14b03c: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x14b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x14b040: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B040u;
    SET_GPR_U32(ctx, 31, 0x14B048u);
    ctx->pc = 0x14B044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B040u;
            // 0x14b044: 0x26260160  addiu       $a2, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B048u; }
        if (ctx->pc != 0x14B048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B048u; }
        if (ctx->pc != 0x14B048u) { return; }
    }
    ctx->pc = 0x14B048u;
    // 0x14b048: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B048u;
    SET_GPR_U32(ctx, 31, 0x14B050u);
    ctx->pc = 0x14B04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B048u;
            // 0x14b04c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B050u; }
        if (ctx->pc != 0x14B050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B050u; }
        if (ctx->pc != 0x14B050u) { return; }
    }
    ctx->pc = 0x14B050u;
    // 0x14b050: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b054: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14b054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b058: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B058u;
    SET_GPR_U32(ctx, 31, 0x14B060u);
    ctx->pc = 0x14B05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B058u;
            // 0x14b05c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B060u; }
        if (ctx->pc != 0x14B060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B060u; }
        if (ctx->pc != 0x14B060u) { return; }
    }
    ctx->pc = 0x14B060u;
    // 0x14b060: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b064: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14b068: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B068u;
    SET_GPR_U32(ctx, 31, 0x14B070u);
    ctx->pc = 0x14B06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B068u;
            // 0x14b06c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B070u; }
        if (ctx->pc != 0x14B070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B070u; }
        if (ctx->pc != 0x14B070u) { return; }
    }
    ctx->pc = 0x14B070u;
    // 0x14b070: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b078: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b084: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b088: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b08c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B08Cu;
    SET_GPR_U32(ctx, 31, 0x14B094u);
    ctx->pc = 0x14B090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B08Cu;
            // 0x14b090: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B094u; }
        if (ctx->pc != 0x14B094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B094u; }
        if (ctx->pc != 0x14B094u) { return; }
    }
    ctx->pc = 0x14B094u;
    // 0x14b094: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b098: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14b098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b09c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b0a8: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b0ac: 0xc060614  jal         func_181850
    ctx->pc = 0x14B0ACu;
    SET_GPR_U32(ctx, 31, 0x14B0B4u);
    ctx->pc = 0x14B0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0ACu;
            // 0x14b0b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0B4u; }
        if (ctx->pc != 0x14B0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0B4u; }
        if (ctx->pc != 0x14B0B4u) { return; }
    }
    ctx->pc = 0x14B0B4u;
    // 0x14b0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0b8: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B0B8u;
    SET_GPR_U32(ctx, 31, 0x14B0C0u);
    ctx->pc = 0x14B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0B8u;
            // 0x14b0bc: 0x26250110  addiu       $a1, $s1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0C0u; }
        if (ctx->pc != 0x14B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0C0u; }
        if (ctx->pc != 0x14B0C0u) { return; }
    }
    ctx->pc = 0x14B0C0u;
    // 0x14b0c0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b0cc: 0xc060604  jal         func_181810
    ctx->pc = 0x14B0CCu;
    SET_GPR_U32(ctx, 31, 0x14B0D4u);
    ctx->pc = 0x14B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0CCu;
            // 0x14b0d0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0D4u; }
        if (ctx->pc != 0x14B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0D4u; }
        if (ctx->pc != 0x14B0D4u) { return; }
    }
    ctx->pc = 0x14B0D4u;
    // 0x14b0d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0dc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B0DCu;
    SET_GPR_U32(ctx, 31, 0x14B0E4u);
    ctx->pc = 0x14B0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0DCu;
            // 0x14b0e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0E4u; }
        if (ctx->pc != 0x14B0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0E4u; }
        if (ctx->pc != 0x14B0E4u) { return; }
    }
    ctx->pc = 0x14B0E4u;
    // 0x14b0e4: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x14b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x14b0e8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B0E8u;
    SET_GPR_U32(ctx, 31, 0x14B0F0u);
    ctx->pc = 0x14B0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0E8u;
            // 0x14b0ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0F0u; }
        if (ctx->pc != 0x14B0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0F0u; }
        if (ctx->pc != 0x14B0F0u) { return; }
    }
    ctx->pc = 0x14B0F0u;
    // 0x14b0f0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B0F0u;
    SET_GPR_U32(ctx, 31, 0x14B0F8u);
    ctx->pc = 0x14B0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0F0u;
            // 0x14b0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0F8u; }
        if (ctx->pc != 0x14B0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0F8u; }
        if (ctx->pc != 0x14B0F8u) { return; }
    }
    ctx->pc = 0x14B0F8u;
    // 0x14b0f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b0fc: 0x8c249630  lw          $a0, -0x69D0($at)
    ctx->pc = 0x14b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940208)));
    // 0x14b100: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b104: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B104u;
    SET_GPR_U32(ctx, 31, 0x14B10Cu);
    ctx->pc = 0x14B108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B104u;
            // 0x14b108: 0x8c259670  lw          $a1, -0x6990($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B10Cu; }
        if (ctx->pc != 0x14B10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B10Cu; }
        if (ctx->pc != 0x14B10Cu) { return; }
    }
    ctx->pc = 0x14B10Cu;
    // 0x14b10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b114: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B114u;
    SET_GPR_U32(ctx, 31, 0x14B11Cu);
    ctx->pc = 0x14B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B114u;
            // 0x14b118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B11Cu; }
        if (ctx->pc != 0x14B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B11Cu; }
        if (ctx->pc != 0x14B11Cu) { return; }
    }
    ctx->pc = 0x14B11Cu;
    // 0x14b11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b120: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B120u;
    SET_GPR_U32(ctx, 31, 0x14B128u);
    ctx->pc = 0x14B124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B120u;
            // 0x14b124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B128u; }
        if (ctx->pc != 0x14B128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B128u; }
        if (ctx->pc != 0x14B128u) { return; }
    }
    ctx->pc = 0x14B128u;
    // 0x14b128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b12c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B12Cu;
    SET_GPR_U32(ctx, 31, 0x14B134u);
    ctx->pc = 0x14B130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B12Cu;
            // 0x14b130: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B134u; }
        if (ctx->pc != 0x14B134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B134u; }
        if (ctx->pc != 0x14B134u) { return; }
    }
    ctx->pc = 0x14B134u;
    // 0x14b134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b138: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B138u;
    SET_GPR_U32(ctx, 31, 0x14B140u);
    ctx->pc = 0x14B13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B138u;
            // 0x14b13c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B140u; }
        if (ctx->pc != 0x14B140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B140u; }
        if (ctx->pc != 0x14B140u) { return; }
    }
    ctx->pc = 0x14B140u;
    // 0x14b140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b144: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B144u;
    SET_GPR_U32(ctx, 31, 0x14B14Cu);
    ctx->pc = 0x14B148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B144u;
            // 0x14b148: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B14Cu; }
        if (ctx->pc != 0x14B14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B14Cu; }
        if (ctx->pc != 0x14B14Cu) { return; }
    }
    ctx->pc = 0x14B14Cu;
    // 0x14b14c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14b150: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b154: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B154u;
    SET_GPR_U32(ctx, 31, 0x14B15Cu);
    ctx->pc = 0x14B158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B154u;
            // 0x14b158: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B15Cu; }
        if (ctx->pc != 0x14B15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B15Cu; }
        if (ctx->pc != 0x14B15Cu) { return; }
    }
    ctx->pc = 0x14B15Cu;
    // 0x14b15c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B15Cu;
    SET_GPR_U32(ctx, 31, 0x14B164u);
    ctx->pc = 0x14B160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B15Cu;
            // 0x14b160: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B164u; }
        if (ctx->pc != 0x14B164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B164u; }
        if (ctx->pc != 0x14B164u) { return; }
    }
    ctx->pc = 0x14B164u;
    // 0x14b164: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b168: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14b168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14b16c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B16Cu;
    SET_GPR_U32(ctx, 31, 0x14B174u);
    ctx->pc = 0x14B170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B16Cu;
            // 0x14b170: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B174u; }
        if (ctx->pc != 0x14B174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B174u; }
        if (ctx->pc != 0x14B174u) { return; }
    }
    ctx->pc = 0x14B174u;
    // 0x14b174: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b178: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14b17c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B17Cu;
    SET_GPR_U32(ctx, 31, 0x14B184u);
    ctx->pc = 0x14B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B17Cu;
            // 0x14b180: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B184u; }
        if (ctx->pc != 0x14B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B184u; }
        if (ctx->pc != 0x14B184u) { return; }
    }
    ctx->pc = 0x14B184u;
    // 0x14b184: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b188: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b18c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b194: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b198: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b19c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B19Cu;
    SET_GPR_U32(ctx, 31, 0x14B1A4u);
    ctx->pc = 0x14B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B19Cu;
            // 0x14b1a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1A4u; }
        if (ctx->pc != 0x14B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1A4u; }
        if (ctx->pc != 0x14B1A4u) { return; }
    }
    ctx->pc = 0x14B1A4u;
    // 0x14b1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1a8: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B1A8u;
    SET_GPR_U32(ctx, 31, 0x14B1B0u);
    ctx->pc = 0x14B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1A8u;
            // 0x14b1ac: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1B0u; }
        if (ctx->pc != 0x14B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1B0u; }
        if (ctx->pc != 0x14B1B0u) { return; }
    }
    ctx->pc = 0x14B1B0u;
    // 0x14b1b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b1bc: 0xc060604  jal         func_181810
    ctx->pc = 0x14B1BCu;
    SET_GPR_U32(ctx, 31, 0x14B1C4u);
    ctx->pc = 0x14B1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1BCu;
            // 0x14b1c0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1C4u; }
        if (ctx->pc != 0x14B1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1C4u; }
        if (ctx->pc != 0x14B1C4u) { return; }
    }
    ctx->pc = 0x14B1C4u;
    // 0x14b1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1cc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B1CCu;
    SET_GPR_U32(ctx, 31, 0x14B1D4u);
    ctx->pc = 0x14B1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1CCu;
            // 0x14b1d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1D4u; }
        if (ctx->pc != 0x14B1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1D4u; }
        if (ctx->pc != 0x14B1D4u) { return; }
    }
    ctx->pc = 0x14B1D4u;
    // 0x14b1d4: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14b1d8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B1D8u;
    SET_GPR_U32(ctx, 31, 0x14B1E0u);
    ctx->pc = 0x14B1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1D8u;
            // 0x14b1dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1E0u; }
        if (ctx->pc != 0x14B1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1E0u; }
        if (ctx->pc != 0x14B1E0u) { return; }
    }
    ctx->pc = 0x14B1E0u;
    // 0x14b1e0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B1E0u;
    SET_GPR_U32(ctx, 31, 0x14B1E8u);
    ctx->pc = 0x14B1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1E0u;
            // 0x14b1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1E8u; }
        if (ctx->pc != 0x14B1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1E8u; }
        if (ctx->pc != 0x14B1E8u) { return; }
    }
    ctx->pc = 0x14B1E8u;
    // 0x14b1e8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b1ec: 0x8c249634  lw          $a0, -0x69CC($at)
    ctx->pc = 0x14b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940212)));
    // 0x14b1f0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b1f4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B1F4u;
    SET_GPR_U32(ctx, 31, 0x14B1FCu);
    ctx->pc = 0x14B1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1F4u;
            // 0x14b1f8: 0x8c259674  lw          $a1, -0x698C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1FCu; }
        if (ctx->pc != 0x14B1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B1FCu; }
        if (ctx->pc != 0x14B1FCu) { return; }
    }
    ctx->pc = 0x14B1FCu;
    // 0x14b1fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b204: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B204u;
    SET_GPR_U32(ctx, 31, 0x14B20Cu);
    ctx->pc = 0x14B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B204u;
            // 0x14b208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B20Cu; }
        if (ctx->pc != 0x14B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B20Cu; }
        if (ctx->pc != 0x14B20Cu) { return; }
    }
    ctx->pc = 0x14B20Cu;
    // 0x14b20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b210: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B210u;
    SET_GPR_U32(ctx, 31, 0x14B218u);
    ctx->pc = 0x14B214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B210u;
            // 0x14b214: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B218u; }
        if (ctx->pc != 0x14B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B218u; }
        if (ctx->pc != 0x14B218u) { return; }
    }
    ctx->pc = 0x14B218u;
    // 0x14b218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b21c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B21Cu;
    SET_GPR_U32(ctx, 31, 0x14B224u);
    ctx->pc = 0x14B220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B21Cu;
            // 0x14b220: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B224u; }
        if (ctx->pc != 0x14B224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B224u; }
        if (ctx->pc != 0x14B224u) { return; }
    }
    ctx->pc = 0x14B224u;
    // 0x14b224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b228: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B228u;
    SET_GPR_U32(ctx, 31, 0x14B230u);
    ctx->pc = 0x14B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B228u;
            // 0x14b22c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B230u; }
        if (ctx->pc != 0x14B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B230u; }
        if (ctx->pc != 0x14B230u) { return; }
    }
    ctx->pc = 0x14B230u;
    // 0x14b230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b234: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B234u;
    SET_GPR_U32(ctx, 31, 0x14B23Cu);
    ctx->pc = 0x14B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B234u;
            // 0x14b238: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B23Cu; }
        if (ctx->pc != 0x14B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B23Cu; }
        if (ctx->pc != 0x14B23Cu) { return; }
    }
    ctx->pc = 0x14B23Cu;
    // 0x14b23c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14b240: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14b240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b244: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B244u;
    SET_GPR_U32(ctx, 31, 0x14B24Cu);
    ctx->pc = 0x14B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B244u;
            // 0x14b248: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B24Cu; }
        if (ctx->pc != 0x14B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B24Cu; }
        if (ctx->pc != 0x14B24Cu) { return; }
    }
    ctx->pc = 0x14B24Cu;
    // 0x14b24c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B24Cu;
    SET_GPR_U32(ctx, 31, 0x14B254u);
    ctx->pc = 0x14B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B24Cu;
            // 0x14b250: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B254u; }
        if (ctx->pc != 0x14B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B254u; }
        if (ctx->pc != 0x14B254u) { return; }
    }
    ctx->pc = 0x14B254u;
    // 0x14b254: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b258: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x14b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x14b25c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B25Cu;
    SET_GPR_U32(ctx, 31, 0x14B264u);
    ctx->pc = 0x14B260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B25Cu;
            // 0x14b260: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B264u; }
        if (ctx->pc != 0x14B264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B264u; }
        if (ctx->pc != 0x14B264u) { return; }
    }
    ctx->pc = 0x14B264u;
    // 0x14b264: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b268: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x14b26c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B26Cu;
    SET_GPR_U32(ctx, 31, 0x14B274u);
    ctx->pc = 0x14B270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B26Cu;
            // 0x14b270: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B274u; }
        if (ctx->pc != 0x14B274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B274u; }
        if (ctx->pc != 0x14B274u) { return; }
    }
    ctx->pc = 0x14B274u;
    // 0x14b274: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b278: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b27c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b27cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b284: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b288: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b28c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B28Cu;
    SET_GPR_U32(ctx, 31, 0x14B294u);
    ctx->pc = 0x14B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B28Cu;
            // 0x14b290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B294u; }
        if (ctx->pc != 0x14B294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B294u; }
        if (ctx->pc != 0x14B294u) { return; }
    }
    ctx->pc = 0x14B294u;
    // 0x14b294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b298: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B298u;
    SET_GPR_U32(ctx, 31, 0x14B2A0u);
    ctx->pc = 0x14B29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B298u;
            // 0x14b29c: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2A0u; }
        if (ctx->pc != 0x14B2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2A0u; }
        if (ctx->pc != 0x14B2A0u) { return; }
    }
    ctx->pc = 0x14B2A0u;
    // 0x14b2a0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b2ac: 0xc060604  jal         func_181810
    ctx->pc = 0x14B2ACu;
    SET_GPR_U32(ctx, 31, 0x14B2B4u);
    ctx->pc = 0x14B2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2ACu;
            // 0x14b2b0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2B4u; }
        if (ctx->pc != 0x14B2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2B4u; }
        if (ctx->pc != 0x14B2B4u) { return; }
    }
    ctx->pc = 0x14B2B4u;
    // 0x14b2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2bc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B2BCu;
    SET_GPR_U32(ctx, 31, 0x14B2C4u);
    ctx->pc = 0x14B2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2BCu;
            // 0x14b2c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2C4u; }
        if (ctx->pc != 0x14B2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2C4u; }
        if (ctx->pc != 0x14B2C4u) { return; }
    }
    ctx->pc = 0x14B2C4u;
    // 0x14b2c4: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14b2c8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B2C8u;
    SET_GPR_U32(ctx, 31, 0x14B2D0u);
    ctx->pc = 0x14B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2C8u;
            // 0x14b2cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2D0u; }
        if (ctx->pc != 0x14B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2D0u; }
        if (ctx->pc != 0x14B2D0u) { return; }
    }
    ctx->pc = 0x14B2D0u;
    // 0x14b2d0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B2D0u;
    SET_GPR_U32(ctx, 31, 0x14B2D8u);
    ctx->pc = 0x14B2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2D0u;
            // 0x14b2d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2D8u; }
        if (ctx->pc != 0x14B2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2D8u; }
        if (ctx->pc != 0x14B2D8u) { return; }
    }
    ctx->pc = 0x14B2D8u;
    // 0x14b2d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b2dc: 0x8c249638  lw          $a0, -0x69C8($at)
    ctx->pc = 0x14b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940216)));
    // 0x14b2e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b2e4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B2E4u;
    SET_GPR_U32(ctx, 31, 0x14B2ECu);
    ctx->pc = 0x14B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2E4u;
            // 0x14b2e8: 0x8c259678  lw          $a1, -0x6988($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2ECu; }
        if (ctx->pc != 0x14B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2ECu; }
        if (ctx->pc != 0x14B2ECu) { return; }
    }
    ctx->pc = 0x14B2ECu;
    // 0x14b2ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B2F4u;
    SET_GPR_U32(ctx, 31, 0x14B2FCu);
    ctx->pc = 0x14B2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B2F4u;
            // 0x14b2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2FCu; }
        if (ctx->pc != 0x14B2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2FCu; }
        if (ctx->pc != 0x14B2FCu) { return; }
    }
    ctx->pc = 0x14B2FCu;
    // 0x14b2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b300: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B300u;
    SET_GPR_U32(ctx, 31, 0x14B308u);
    ctx->pc = 0x14B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B300u;
            // 0x14b304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B308u; }
        if (ctx->pc != 0x14B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B308u; }
        if (ctx->pc != 0x14B308u) { return; }
    }
    ctx->pc = 0x14B308u;
    // 0x14b308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b30c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B30Cu;
    SET_GPR_U32(ctx, 31, 0x14B314u);
    ctx->pc = 0x14B310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B30Cu;
            // 0x14b310: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B314u; }
        if (ctx->pc != 0x14B314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B314u; }
        if (ctx->pc != 0x14B314u) { return; }
    }
    ctx->pc = 0x14B314u;
    // 0x14b314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b318: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B318u;
    SET_GPR_U32(ctx, 31, 0x14B320u);
    ctx->pc = 0x14B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B318u;
            // 0x14b31c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B320u; }
        if (ctx->pc != 0x14B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B320u; }
        if (ctx->pc != 0x14B320u) { return; }
    }
    ctx->pc = 0x14B320u;
    // 0x14b320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b324: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B324u;
    SET_GPR_U32(ctx, 31, 0x14B32Cu);
    ctx->pc = 0x14B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B324u;
            // 0x14b328: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B32Cu; }
        if (ctx->pc != 0x14B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B32Cu; }
        if (ctx->pc != 0x14B32Cu) { return; }
    }
    ctx->pc = 0x14B32Cu;
    // 0x14b32c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14b330: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b334: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B334u;
    SET_GPR_U32(ctx, 31, 0x14B33Cu);
    ctx->pc = 0x14B338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B334u;
            // 0x14b338: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B33Cu; }
        if (ctx->pc != 0x14B33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B33Cu; }
        if (ctx->pc != 0x14B33Cu) { return; }
    }
    ctx->pc = 0x14B33Cu;
    // 0x14b33c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B33Cu;
    SET_GPR_U32(ctx, 31, 0x14B344u);
    ctx->pc = 0x14B340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B33Cu;
            // 0x14b340: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B344u; }
        if (ctx->pc != 0x14B344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B344u; }
        if (ctx->pc != 0x14B344u) { return; }
    }
    ctx->pc = 0x14B344u;
    // 0x14b344: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b348: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14b348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b34c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B34Cu;
    SET_GPR_U32(ctx, 31, 0x14B354u);
    ctx->pc = 0x14B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B34Cu;
            // 0x14b350: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B354u; }
        if (ctx->pc != 0x14B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B354u; }
        if (ctx->pc != 0x14B354u) { return; }
    }
    ctx->pc = 0x14B354u;
    // 0x14b354: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b358: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14b35c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B35Cu;
    SET_GPR_U32(ctx, 31, 0x14B364u);
    ctx->pc = 0x14B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B35Cu;
            // 0x14b360: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B364u; }
        if (ctx->pc != 0x14B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B364u; }
        if (ctx->pc != 0x14B364u) { return; }
    }
    ctx->pc = 0x14B364u;
    // 0x14b364: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b368: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b36c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b36cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b374: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b378: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b378u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b37c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B37Cu;
    SET_GPR_U32(ctx, 31, 0x14B384u);
    ctx->pc = 0x14B380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B37Cu;
            // 0x14b380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B384u; }
        if (ctx->pc != 0x14B384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B384u; }
        if (ctx->pc != 0x14B384u) { return; }
    }
    ctx->pc = 0x14B384u;
    // 0x14b384: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14B384u;
    SET_GPR_U32(ctx, 31, 0x14B38Cu);
    ctx->pc = 0x14B388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B384u;
            // 0x14b388: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B38Cu; }
        if (ctx->pc != 0x14B38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B38Cu; }
        if (ctx->pc != 0x14B38Cu) { return; }
    }
    ctx->pc = 0x14B38Cu;
    // 0x14b38c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b390: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14b390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b394: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14B394u;
    SET_GPR_U32(ctx, 31, 0x14B39Cu);
    ctx->pc = 0x14B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B394u;
            // 0x14b398: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B39Cu; }
        if (ctx->pc != 0x14B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B39Cu; }
        if (ctx->pc != 0x14B39Cu) { return; }
    }
    ctx->pc = 0x14B39Cu;
    // 0x14b39c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b3a0: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14b3a4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B3A4u;
    SET_GPR_U32(ctx, 31, 0x14B3ACu);
    ctx->pc = 0x14B3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3A4u;
            // 0x14b3a8: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3ACu; }
        if (ctx->pc != 0x14B3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3ACu; }
        if (ctx->pc != 0x14B3ACu) { return; }
    }
    ctx->pc = 0x14B3ACu;
    // 0x14b3ac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b3b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3b4: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3bc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b3c0: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b3c4: 0xc060614  jal         func_181850
    ctx->pc = 0x14B3C4u;
    SET_GPR_U32(ctx, 31, 0x14B3CCu);
    ctx->pc = 0x14B3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3C4u;
            // 0x14b3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3CCu; }
        if (ctx->pc != 0x14B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3CCu; }
        if (ctx->pc != 0x14B3CCu) { return; }
    }
    ctx->pc = 0x14B3CCu;
    // 0x14b3cc: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B3CCu;
    SET_GPR_U32(ctx, 31, 0x14B3D4u);
    ctx->pc = 0x14B3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3CCu;
            // 0x14b3d0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3D4u; }
        if (ctx->pc != 0x14B3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3D4u; }
        if (ctx->pc != 0x14B3D4u) { return; }
    }
    ctx->pc = 0x14B3D4u;
    // 0x14b3d4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b3d8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x14b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x14b3dc: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B3DCu;
    SET_GPR_U32(ctx, 31, 0x14B3E4u);
    ctx->pc = 0x14B3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3DCu;
            // 0x14b3e0: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3E4u; }
        if (ctx->pc != 0x14B3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3E4u; }
        if (ctx->pc != 0x14B3E4u) { return; }
    }
    ctx->pc = 0x14B3E4u;
    // 0x14b3e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b3e8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14b3ec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B3ECu;
    SET_GPR_U32(ctx, 31, 0x14B3F4u);
    ctx->pc = 0x14B3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3ECu;
            // 0x14b3f0: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3F4u; }
        if (ctx->pc != 0x14B3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B3F4u; }
        if (ctx->pc != 0x14B3F4u) { return; }
    }
    ctx->pc = 0x14B3F4u;
    // 0x14b3f4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b3f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b3fc: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b404: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b408: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b40c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B40Cu;
    SET_GPR_U32(ctx, 31, 0x14B414u);
    ctx->pc = 0x14B410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B40Cu;
            // 0x14b410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B414u; }
        if (ctx->pc != 0x14B414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B414u; }
        if (ctx->pc != 0x14B414u) { return; }
    }
    ctx->pc = 0x14B414u;
    // 0x14b414: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B414u;
    SET_GPR_U32(ctx, 31, 0x14B41Cu);
    ctx->pc = 0x14B418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B414u;
            // 0x14b418: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B41Cu; }
        if (ctx->pc != 0x14B41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B41Cu; }
        if (ctx->pc != 0x14B41Cu) { return; }
    }
    ctx->pc = 0x14B41Cu;
    // 0x14b41c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b420: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x14b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x14b424: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B424u;
    SET_GPR_U32(ctx, 31, 0x14B42Cu);
    ctx->pc = 0x14B428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B424u;
            // 0x14b428: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B42Cu; }
        if (ctx->pc != 0x14B42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B42Cu; }
        if (ctx->pc != 0x14B42Cu) { return; }
    }
    ctx->pc = 0x14B42Cu;
    // 0x14b42c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b430: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b434: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B434u;
    SET_GPR_U32(ctx, 31, 0x14B43Cu);
    ctx->pc = 0x14B438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B434u;
            // 0x14b438: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B43Cu; }
        if (ctx->pc != 0x14B43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B43Cu; }
        if (ctx->pc != 0x14B43Cu) { return; }
    }
    ctx->pc = 0x14B43Cu;
    // 0x14b43c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b440: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b444: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b44c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b450: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b454: 0xc060614  jal         func_181850
    ctx->pc = 0x14B454u;
    SET_GPR_U32(ctx, 31, 0x14B45Cu);
    ctx->pc = 0x14B458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B454u;
            // 0x14b458: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B45Cu; }
        if (ctx->pc != 0x14B45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B45Cu; }
        if (ctx->pc != 0x14B45Cu) { return; }
    }
    ctx->pc = 0x14B45Cu;
    // 0x14b45c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B45Cu;
    SET_GPR_U32(ctx, 31, 0x14B464u);
    ctx->pc = 0x14B460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B45Cu;
            // 0x14b460: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B464u; }
        if (ctx->pc != 0x14B464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B464u; }
        if (ctx->pc != 0x14B464u) { return; }
    }
    ctx->pc = 0x14B464u;
    // 0x14b464: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b468: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14b468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14b46c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B46Cu;
    SET_GPR_U32(ctx, 31, 0x14B474u);
    ctx->pc = 0x14B470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B46Cu;
            // 0x14b470: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B474u; }
        if (ctx->pc != 0x14B474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B474u; }
        if (ctx->pc != 0x14B474u) { return; }
    }
    ctx->pc = 0x14B474u;
    // 0x14b474: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b478: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14b478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14b47c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B47Cu;
    SET_GPR_U32(ctx, 31, 0x14B484u);
    ctx->pc = 0x14B480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B47Cu;
            // 0x14b480: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B484u; }
        if (ctx->pc != 0x14B484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B484u; }
        if (ctx->pc != 0x14B484u) { return; }
    }
    ctx->pc = 0x14B484u;
    // 0x14b484: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b488: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b48c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b494: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b498: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b49c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B49Cu;
    SET_GPR_U32(ctx, 31, 0x14B4A4u);
    ctx->pc = 0x14B4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B49Cu;
            // 0x14b4a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4A4u; }
        if (ctx->pc != 0x14B4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4A4u; }
        if (ctx->pc != 0x14B4A4u) { return; }
    }
    ctx->pc = 0x14B4A4u;
    // 0x14b4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4a8: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B4A8u;
    SET_GPR_U32(ctx, 31, 0x14B4B0u);
    ctx->pc = 0x14B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4A8u;
            // 0x14b4ac: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4B0u; }
        if (ctx->pc != 0x14B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4B0u; }
        if (ctx->pc != 0x14B4B0u) { return; }
    }
    ctx->pc = 0x14B4B0u;
    // 0x14b4b0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b4bc: 0xc060604  jal         func_181810
    ctx->pc = 0x14B4BCu;
    SET_GPR_U32(ctx, 31, 0x14B4C4u);
    ctx->pc = 0x14B4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4BCu;
            // 0x14b4c0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4C4u; }
        if (ctx->pc != 0x14B4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4C4u; }
        if (ctx->pc != 0x14B4C4u) { return; }
    }
    ctx->pc = 0x14B4C4u;
    // 0x14b4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4cc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B4CCu;
    SET_GPR_U32(ctx, 31, 0x14B4D4u);
    ctx->pc = 0x14B4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4CCu;
            // 0x14b4d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4D4u; }
        if (ctx->pc != 0x14B4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4D4u; }
        if (ctx->pc != 0x14B4D4u) { return; }
    }
    ctx->pc = 0x14B4D4u;
    // 0x14b4d4: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14b4d8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B4D8u;
    SET_GPR_U32(ctx, 31, 0x14B4E0u);
    ctx->pc = 0x14B4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4D8u;
            // 0x14b4dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E0u; }
        if (ctx->pc != 0x14B4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E0u; }
        if (ctx->pc != 0x14B4E0u) { return; }
    }
    ctx->pc = 0x14B4E0u;
    // 0x14b4e0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B4E0u;
    SET_GPR_U32(ctx, 31, 0x14B4E8u);
    ctx->pc = 0x14B4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4E0u;
            // 0x14b4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E8u; }
        if (ctx->pc != 0x14B4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4E8u; }
        if (ctx->pc != 0x14B4E8u) { return; }
    }
    ctx->pc = 0x14B4E8u;
    // 0x14b4e8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b4ec: 0x8c24963c  lw          $a0, -0x69C4($at)
    ctx->pc = 0x14b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940220)));
    // 0x14b4f0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14b4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14b4f4: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14B4F4u;
    SET_GPR_U32(ctx, 31, 0x14B4FCu);
    ctx->pc = 0x14B4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4F4u;
            // 0x14b4f8: 0x8c25967c  lw          $a1, -0x6984($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4FCu; }
        if (ctx->pc != 0x14B4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B4FCu; }
        if (ctx->pc != 0x14B4FCu) { return; }
    }
    ctx->pc = 0x14B4FCu;
    // 0x14b4fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b504: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B504u;
    SET_GPR_U32(ctx, 31, 0x14B50Cu);
    ctx->pc = 0x14B508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B504u;
            // 0x14b508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B50Cu; }
        if (ctx->pc != 0x14B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B50Cu; }
        if (ctx->pc != 0x14B50Cu) { return; }
    }
    ctx->pc = 0x14B50Cu;
    // 0x14b50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b510: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B510u;
    SET_GPR_U32(ctx, 31, 0x14B518u);
    ctx->pc = 0x14B514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B510u;
            // 0x14b514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B518u; }
        if (ctx->pc != 0x14B518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B518u; }
        if (ctx->pc != 0x14B518u) { return; }
    }
    ctx->pc = 0x14B518u;
    // 0x14b518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b51c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B51Cu;
    SET_GPR_U32(ctx, 31, 0x14B524u);
    ctx->pc = 0x14B520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B51Cu;
            // 0x14b520: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B524u; }
        if (ctx->pc != 0x14B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B524u; }
        if (ctx->pc != 0x14B524u) { return; }
    }
    ctx->pc = 0x14B524u;
    // 0x14b524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b528: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B528u;
    SET_GPR_U32(ctx, 31, 0x14B530u);
    ctx->pc = 0x14B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B528u;
            // 0x14b52c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B530u; }
        if (ctx->pc != 0x14B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B530u; }
        if (ctx->pc != 0x14B530u) { return; }
    }
    ctx->pc = 0x14B530u;
    // 0x14b530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b534: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14B534u;
    SET_GPR_U32(ctx, 31, 0x14B53Cu);
    ctx->pc = 0x14B538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B534u;
            // 0x14b538: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B53Cu; }
        if (ctx->pc != 0x14B53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B53Cu; }
        if (ctx->pc != 0x14B53Cu) { return; }
    }
    ctx->pc = 0x14B53Cu;
    // 0x14b53c: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14b540: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14b540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14b544: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14B544u;
    SET_GPR_U32(ctx, 31, 0x14B54Cu);
    ctx->pc = 0x14B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B544u;
            // 0x14b548: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B54Cu; }
        if (ctx->pc != 0x14B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B54Cu; }
        if (ctx->pc != 0x14B54Cu) { return; }
    }
    ctx->pc = 0x14B54Cu;
    // 0x14b54c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B54Cu;
    SET_GPR_U32(ctx, 31, 0x14B554u);
    ctx->pc = 0x14B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B54Cu;
            // 0x14b550: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B554u; }
        if (ctx->pc != 0x14B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B554u; }
        if (ctx->pc != 0x14B554u) { return; }
    }
    ctx->pc = 0x14B554u;
    // 0x14b554: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b558: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14b55c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B55Cu;
    SET_GPR_U32(ctx, 31, 0x14B564u);
    ctx->pc = 0x14B560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B55Cu;
            // 0x14b560: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B564u; }
        if (ctx->pc != 0x14B564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B564u; }
        if (ctx->pc != 0x14B564u) { return; }
    }
    ctx->pc = 0x14B564u;
    // 0x14b564: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b568: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14b56c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B56Cu;
    SET_GPR_U32(ctx, 31, 0x14B574u);
    ctx->pc = 0x14B570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B56Cu;
            // 0x14b570: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B574u; }
        if (ctx->pc != 0x14B574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B574u; }
        if (ctx->pc != 0x14B574u) { return; }
    }
    ctx->pc = 0x14B574u;
    // 0x14b574: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b57c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b584: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b588: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b588u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b58c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B58Cu;
    SET_GPR_U32(ctx, 31, 0x14B594u);
    ctx->pc = 0x14B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B58Cu;
            // 0x14b590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B594u; }
        if (ctx->pc != 0x14B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B594u; }
        if (ctx->pc != 0x14B594u) { return; }
    }
    ctx->pc = 0x14B594u;
    // 0x14b594: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B594u;
    SET_GPR_U32(ctx, 31, 0x14B59Cu);
    ctx->pc = 0x14B598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B594u;
            // 0x14b598: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B59Cu; }
        if (ctx->pc != 0x14B59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B59Cu; }
        if (ctx->pc != 0x14B59Cu) { return; }
    }
    ctx->pc = 0x14B59Cu;
    // 0x14b59c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b5a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14b5a4: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B5A4u;
    SET_GPR_U32(ctx, 31, 0x14B5ACu);
    ctx->pc = 0x14B5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5A4u;
            // 0x14b5a8: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5ACu; }
        if (ctx->pc != 0x14B5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5ACu; }
        if (ctx->pc != 0x14B5ACu) { return; }
    }
    ctx->pc = 0x14B5ACu;
    // 0x14b5ac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b5b0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14b5b4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B5B4u;
    SET_GPR_U32(ctx, 31, 0x14B5BCu);
    ctx->pc = 0x14B5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5B4u;
            // 0x14b5b8: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5BCu; }
        if (ctx->pc != 0x14B5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5BCu; }
        if (ctx->pc != 0x14B5BCu) { return; }
    }
    ctx->pc = 0x14B5BCu;
    // 0x14b5bc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b5c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5c4: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b5c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b5cc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b5d0: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b5d4: 0xc060614  jal         func_181850
    ctx->pc = 0x14B5D4u;
    SET_GPR_U32(ctx, 31, 0x14B5DCu);
    ctx->pc = 0x14B5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5D4u;
            // 0x14b5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5DCu; }
        if (ctx->pc != 0x14B5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5DCu; }
        if (ctx->pc != 0x14B5DCu) { return; }
    }
    ctx->pc = 0x14B5DCu;
    // 0x14b5dc: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14B5DCu;
    SET_GPR_U32(ctx, 31, 0x14B5E4u);
    ctx->pc = 0x14B5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5DCu;
            // 0x14b5e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5E4u; }
        if (ctx->pc != 0x14B5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5E4u; }
        if (ctx->pc != 0x14B5E4u) { return; }
    }
    ctx->pc = 0x14B5E4u;
    // 0x14b5e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b5e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b5ec: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14B5ECu;
    SET_GPR_U32(ctx, 31, 0x14B5F4u);
    ctx->pc = 0x14B5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5ECu;
            // 0x14b5f0: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5F4u; }
        if (ctx->pc != 0x14B5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B5F4u; }
        if (ctx->pc != 0x14B5F4u) { return; }
    }
    ctx->pc = 0x14B5F4u;
    // 0x14b5f4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b5f8: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14b5fc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B5FCu;
    SET_GPR_U32(ctx, 31, 0x14B604u);
    ctx->pc = 0x14B600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B5FCu;
            // 0x14b600: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B604u; }
        if (ctx->pc != 0x14B604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B604u; }
        if (ctx->pc != 0x14B604u) { return; }
    }
    ctx->pc = 0x14B604u;
    // 0x14b604: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b608: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b60c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b60cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b614: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b618: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b61c: 0xc060614  jal         func_181850
    ctx->pc = 0x14B61Cu;
    SET_GPR_U32(ctx, 31, 0x14B624u);
    ctx->pc = 0x14B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B61Cu;
            // 0x14b620: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B624u; }
        if (ctx->pc != 0x14B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B624u; }
        if (ctx->pc != 0x14B624u) { return; }
    }
    ctx->pc = 0x14B624u;
    // 0x14b624: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B624u;
    SET_GPR_U32(ctx, 31, 0x14B62Cu);
    ctx->pc = 0x14B628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B624u;
            // 0x14b628: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B62Cu; }
        if (ctx->pc != 0x14B62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B62Cu; }
        if (ctx->pc != 0x14B62Cu) { return; }
    }
    ctx->pc = 0x14B62Cu;
    // 0x14b62c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b630: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x14b630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x14b634: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B634u;
    SET_GPR_U32(ctx, 31, 0x14B63Cu);
    ctx->pc = 0x14B638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B634u;
            // 0x14b638: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B63Cu; }
        if (ctx->pc != 0x14B63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B63Cu; }
        if (ctx->pc != 0x14B63Cu) { return; }
    }
    ctx->pc = 0x14B63Cu;
    // 0x14b63c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b640: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14b644: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B644u;
    SET_GPR_U32(ctx, 31, 0x14B64Cu);
    ctx->pc = 0x14B648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B644u;
            // 0x14b648: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B64Cu; }
        if (ctx->pc != 0x14B64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B64Cu; }
        if (ctx->pc != 0x14B64Cu) { return; }
    }
    ctx->pc = 0x14B64Cu;
    // 0x14b64c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b650: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b654: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b65c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b660: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b664: 0xc060614  jal         func_181850
    ctx->pc = 0x14B664u;
    SET_GPR_U32(ctx, 31, 0x14B66Cu);
    ctx->pc = 0x14B668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B664u;
            // 0x14b668: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B66Cu; }
        if (ctx->pc != 0x14B66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B66Cu; }
        if (ctx->pc != 0x14B66Cu) { return; }
    }
    ctx->pc = 0x14B66Cu;
    // 0x14b66c: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14B66Cu;
    SET_GPR_U32(ctx, 31, 0x14B674u);
    ctx->pc = 0x14B670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B66Cu;
            // 0x14b670: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B674u; }
        if (ctx->pc != 0x14B674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B674u; }
        if (ctx->pc != 0x14B674u) { return; }
    }
    ctx->pc = 0x14B674u;
    // 0x14b674: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b678: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x14b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x14b67c: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14B67Cu;
    SET_GPR_U32(ctx, 31, 0x14B684u);
    ctx->pc = 0x14B680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B67Cu;
            // 0x14b680: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B684u; }
        if (ctx->pc != 0x14B684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B684u; }
        if (ctx->pc != 0x14B684u) { return; }
    }
    ctx->pc = 0x14B684u;
    // 0x14b684: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b688: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b68c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B68Cu;
    SET_GPR_U32(ctx, 31, 0x14B694u);
    ctx->pc = 0x14B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B68Cu;
            // 0x14b690: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B694u; }
        if (ctx->pc != 0x14B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B694u; }
        if (ctx->pc != 0x14B694u) { return; }
    }
    ctx->pc = 0x14B694u;
    // 0x14b694: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b698: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b69c: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14b69cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14b6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14b6a8: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14b6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14b6ac: 0xc060614  jal         func_181850
    ctx->pc = 0x14B6ACu;
    SET_GPR_U32(ctx, 31, 0x14B6B4u);
    ctx->pc = 0x14B6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6ACu;
            // 0x14b6b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6B4u; }
        if (ctx->pc != 0x14B6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6B4u; }
        if (ctx->pc != 0x14B6B4u) { return; }
    }
    ctx->pc = 0x14B6B4u;
    // 0x14b6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6b8: 0xc06060c  jal         func_181830
    ctx->pc = 0x14B6B8u;
    SET_GPR_U32(ctx, 31, 0x14B6C0u);
    ctx->pc = 0x14B6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6B8u;
            // 0x14b6bc: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6C0u; }
        if (ctx->pc != 0x14B6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6C0u; }
        if (ctx->pc != 0x14B6C0u) { return; }
    }
    ctx->pc = 0x14B6C0u;
    // 0x14b6c0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14b6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14b6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b6cc: 0xc060604  jal         func_181810
    ctx->pc = 0x14B6CCu;
    SET_GPR_U32(ctx, 31, 0x14B6D4u);
    ctx->pc = 0x14B6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6CCu;
            // 0x14b6d0: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6D4u; }
        if (ctx->pc != 0x14B6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6D4u; }
        if (ctx->pc != 0x14B6D4u) { return; }
    }
    ctx->pc = 0x14B6D4u;
    // 0x14b6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6dc: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14B6DCu;
    SET_GPR_U32(ctx, 31, 0x14B6E4u);
    ctx->pc = 0x14B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6DCu;
            // 0x14b6e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6E4u; }
        if (ctx->pc != 0x14B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6E4u; }
        if (ctx->pc != 0x14B6E4u) { return; }
    }
    ctx->pc = 0x14B6E4u;
    // 0x14b6e4: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14b6e8: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14B6E8u;
    SET_GPR_U32(ctx, 31, 0x14B6F0u);
    ctx->pc = 0x14B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6E8u;
            // 0x14b6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6F0u; }
        if (ctx->pc != 0x14B6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6F0u; }
        if (ctx->pc != 0x14B6F0u) { return; }
    }
    ctx->pc = 0x14B6F0u;
    // 0x14b6f0: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14B6F0u;
    SET_GPR_U32(ctx, 31, 0x14B6F8u);
    ctx->pc = 0x14B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6F0u;
            // 0x14b6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6F8u; }
        if (ctx->pc != 0x14B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B6F8u; }
        if (ctx->pc != 0x14B6F8u) { return; }
    }
    ctx->pc = 0x14B6F8u;
    // 0x14b6f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14b6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b6fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14b6fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14b700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B70Cu;
            // 0x14b710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AC58u: goto label_14ac58;
            case 0x14AD68u: goto label_14ad68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14B714u;
}
