#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage8mapInit
// Address: 0x148e30 - 0x149090
void stage8mapInit_0x148e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage8mapInit_0x148e30");
#endif

    ctx->pc = 0x148e30u;

    // 0x148e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x148e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x148e34: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x148e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x148e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x148e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x148e3c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x148e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x148e40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148e44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148e4c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x148e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148e54: 0xc05c20c  jal         func_170830
    ctx->pc = 0x148E54u;
    SET_GPR_U32(ctx, 31, 0x148E5Cu);
    ctx->pc = 0x148E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E54u;
            // 0x148e58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E5Cu; }
        if (ctx->pc != 0x148E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E5Cu; }
        if (ctx->pc != 0x148E5Cu) { return; }
    }
    ctx->pc = 0x148E5Cu;
    // 0x148e5c: 0x2404012d  addiu       $a0, $zero, 0x12D
    ctx->pc = 0x148e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x148e60: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x148e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x148e64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148e68: 0xc05c20c  jal         func_170830
    ctx->pc = 0x148E68u;
    SET_GPR_U32(ctx, 31, 0x148E70u);
    ctx->pc = 0x148E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E68u;
            // 0x148e6c: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E70u; }
        if (ctx->pc != 0x148E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E70u; }
        if (ctx->pc != 0x148E70u) { return; }
    }
    ctx->pc = 0x148E70u;
    // 0x148e70: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x148e70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x148e74: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x148e74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x148e78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x148e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e7c: 0x26319830  addiu       $s1, $s1, -0x67D0
    ctx->pc = 0x148e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940720));
    // 0x148e80: 0x26109800  addiu       $s0, $s0, -0x6800
    ctx->pc = 0x148e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940672));
    // 0x148e84: 0x0  nop
    ctx->pc = 0x148e84u;
    // NOP
label_148e88:
    // 0x148e88: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x148e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x148e8c: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x148E8Cu;
    SET_GPR_U32(ctx, 31, 0x148E94u);
    ctx->pc = 0x148E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E8Cu;
            // 0x148e90: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E94u; }
        if (ctx->pc != 0x148E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148E94u; }
        if (ctx->pc != 0x148E94u) { return; }
    }
    ctx->pc = 0x148E94u;
    // 0x148e94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x148e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148e9c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148E9Cu;
    SET_GPR_U32(ctx, 31, 0x148EA4u);
    ctx->pc = 0x148EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148E9Cu;
            // 0x148ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EA4u; }
        if (ctx->pc != 0x148EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EA4u; }
        if (ctx->pc != 0x148EA4u) { return; }
    }
    ctx->pc = 0x148EA4u;
    // 0x148ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ea8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148EA8u;
    SET_GPR_U32(ctx, 31, 0x148EB0u);
    ctx->pc = 0x148EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EA8u;
            // 0x148eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EB0u; }
        if (ctx->pc != 0x148EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EB0u; }
        if (ctx->pc != 0x148EB0u) { return; }
    }
    ctx->pc = 0x148EB0u;
    // 0x148eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148eb4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148EB4u;
    SET_GPR_U32(ctx, 31, 0x148EBCu);
    ctx->pc = 0x148EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EB4u;
            // 0x148eb8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EBCu; }
        if (ctx->pc != 0x148EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EBCu; }
        if (ctx->pc != 0x148EBCu) { return; }
    }
    ctx->pc = 0x148EBCu;
    // 0x148ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ec0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148EC0u;
    SET_GPR_U32(ctx, 31, 0x148EC8u);
    ctx->pc = 0x148EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EC0u;
            // 0x148ec4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EC8u; }
        if (ctx->pc != 0x148EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EC8u; }
        if (ctx->pc != 0x148EC8u) { return; }
    }
    ctx->pc = 0x148EC8u;
    // 0x148ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ecc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148ECCu;
    SET_GPR_U32(ctx, 31, 0x148ED4u);
    ctx->pc = 0x148ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148ECCu;
            // 0x148ed0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148ED4u; }
        if (ctx->pc != 0x148ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148ED4u; }
        if (ctx->pc != 0x148ED4u) { return; }
    }
    ctx->pc = 0x148ED4u;
    // 0x148ed4: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x148ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x148ed8: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x148ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x148edc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x148EDCu;
    SET_GPR_U32(ctx, 31, 0x148EE4u);
    ctx->pc = 0x148EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EDCu;
            // 0x148ee0: 0x26460160  addiu       $a2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EE4u; }
        if (ctx->pc != 0x148EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EE4u; }
        if (ctx->pc != 0x148EE4u) { return; }
    }
    ctx->pc = 0x148EE4u;
    // 0x148ee4: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x148EE4u;
    SET_GPR_U32(ctx, 31, 0x148EECu);
    ctx->pc = 0x148EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EE4u;
            // 0x148ee8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EECu; }
        if (ctx->pc != 0x148EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EECu; }
        if (ctx->pc != 0x148EECu) { return; }
    }
    ctx->pc = 0x148EECu;
    // 0x148eec: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148ef0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x148ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148ef4: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x148EF4u;
    SET_GPR_U32(ctx, 31, 0x148EFCu);
    ctx->pc = 0x148EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148EF4u;
            // 0x148ef8: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EFCu; }
        if (ctx->pc != 0x148EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148EFCu; }
        if (ctx->pc != 0x148EFCu) { return; }
    }
    ctx->pc = 0x148EFCu;
    // 0x148efc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148f00: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x148f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x148f04: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148F04u;
    SET_GPR_U32(ctx, 31, 0x148F0Cu);
    ctx->pc = 0x148F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F04u;
            // 0x148f08: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F0Cu; }
        if (ctx->pc != 0x148F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F0Cu; }
        if (ctx->pc != 0x148F0Cu) { return; }
    }
    ctx->pc = 0x148F0Cu;
    // 0x148f0c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148f10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x148f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f14: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x148f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f1c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148f20: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x148f24: 0xc060614  jal         func_181850
    ctx->pc = 0x148F24u;
    SET_GPR_U32(ctx, 31, 0x148F2Cu);
    ctx->pc = 0x148F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F24u;
            // 0x148f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F2Cu; }
        if (ctx->pc != 0x148F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F2Cu; }
        if (ctx->pc != 0x148F2Cu) { return; }
    }
    ctx->pc = 0x148F2Cu;
    // 0x148f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f30: 0xc06060c  jal         func_181830
    ctx->pc = 0x148F30u;
    SET_GPR_U32(ctx, 31, 0x148F38u);
    ctx->pc = 0x148F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F30u;
            // 0x148f34: 0x26450110  addiu       $a1, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F38u; }
        if (ctx->pc != 0x148F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F38u; }
        if (ctx->pc != 0x148F38u) { return; }
    }
    ctx->pc = 0x148F38u;
    // 0x148f38: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x148f38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x148f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148f44: 0xc060604  jal         func_181810
    ctx->pc = 0x148F44u;
    SET_GPR_U32(ctx, 31, 0x148F4Cu);
    ctx->pc = 0x148F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F44u;
            // 0x148f48: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F4Cu; }
        if (ctx->pc != 0x148F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F4Cu; }
        if (ctx->pc != 0x148F4Cu) { return; }
    }
    ctx->pc = 0x148F4Cu;
    // 0x148f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x148f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f54: 0xc0605dc  jal         func_181770
    ctx->pc = 0x148F54u;
    SET_GPR_U32(ctx, 31, 0x148F5Cu);
    ctx->pc = 0x148F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F54u;
            // 0x148f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F5Cu; }
        if (ctx->pc != 0x148F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F5Cu; }
        if (ctx->pc != 0x148F5Cu) { return; }
    }
    ctx->pc = 0x148F5Cu;
    // 0x148f5c: 0x8e440180  lw          $a0, 0x180($s2)
    ctx->pc = 0x148f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x148f60: 0xc046376  jal         func_118DD8
    ctx->pc = 0x148F60u;
    SET_GPR_U32(ctx, 31, 0x148F68u);
    ctx->pc = 0x148F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F60u;
            // 0x148f64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F68u; }
        if (ctx->pc != 0x148F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F68u; }
        if (ctx->pc != 0x148F68u) { return; }
    }
    ctx->pc = 0x148F68u;
    // 0x148f68: 0xc0605cc  jal         func_181730
    ctx->pc = 0x148F68u;
    SET_GPR_U32(ctx, 31, 0x148F70u);
    ctx->pc = 0x148F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F68u;
            // 0x148f6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F70u; }
        if (ctx->pc != 0x148F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F70u; }
        if (ctx->pc != 0x148F70u) { return; }
    }
    ctx->pc = 0x148F70u;
    // 0x148f70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x148f74: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x148f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x148f78: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x148f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x148f7c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x148F7Cu;
    {
        const bool branch_taken_0x148f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148F7Cu;
            // 0x148f80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f7c) {
            ctx->pc = 0x148E88u;
            goto label_148e88;
        }
    }
    ctx->pc = 0x148F84u;
    // 0x148f84: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x148f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x148f88: 0x8c249824  lw          $a0, -0x67DC($at)
    ctx->pc = 0x148f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940708)));
    // 0x148f8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x148f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x148f90: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x148F90u;
    SET_GPR_U32(ctx, 31, 0x148F98u);
    ctx->pc = 0x148F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148F90u;
            // 0x148f94: 0x8c259854  lw          $a1, -0x67AC($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940756)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F98u; }
        if (ctx->pc != 0x148F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148F98u; }
        if (ctx->pc != 0x148F98u) { return; }
    }
    ctx->pc = 0x148F98u;
    // 0x148f98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fa0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148FA0u;
    SET_GPR_U32(ctx, 31, 0x148FA8u);
    ctx->pc = 0x148FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FA0u;
            // 0x148fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FA8u; }
        if (ctx->pc != 0x148FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FA8u; }
        if (ctx->pc != 0x148FA8u) { return; }
    }
    ctx->pc = 0x148FA8u;
    // 0x148fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fac: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148FACu;
    SET_GPR_U32(ctx, 31, 0x148FB4u);
    ctx->pc = 0x148FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FACu;
            // 0x148fb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FB4u; }
        if (ctx->pc != 0x148FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FB4u; }
        if (ctx->pc != 0x148FB4u) { return; }
    }
    ctx->pc = 0x148FB4u;
    // 0x148fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fb8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148FB8u;
    SET_GPR_U32(ctx, 31, 0x148FC0u);
    ctx->pc = 0x148FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FB8u;
            // 0x148fbc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FC0u; }
        if (ctx->pc != 0x148FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FC0u; }
        if (ctx->pc != 0x148FC0u) { return; }
    }
    ctx->pc = 0x148FC0u;
    // 0x148fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fc4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148FC4u;
    SET_GPR_U32(ctx, 31, 0x148FCCu);
    ctx->pc = 0x148FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FC4u;
            // 0x148fc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FCCu; }
        if (ctx->pc != 0x148FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FCCu; }
        if (ctx->pc != 0x148FCCu) { return; }
    }
    ctx->pc = 0x148FCCu;
    // 0x148fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148fd0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148FD0u;
    SET_GPR_U32(ctx, 31, 0x148FD8u);
    ctx->pc = 0x148FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FD0u;
            // 0x148fd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FD8u; }
        if (ctx->pc != 0x148FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FD8u; }
        if (ctx->pc != 0x148FD8u) { return; }
    }
    ctx->pc = 0x148FD8u;
    // 0x148fd8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x148fdc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x148fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x148fe0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x148FE0u;
    SET_GPR_U32(ctx, 31, 0x148FE8u);
    ctx->pc = 0x148FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FE0u;
            // 0x148fe4: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FE8u; }
        if (ctx->pc != 0x148FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FE8u; }
        if (ctx->pc != 0x148FE8u) { return; }
    }
    ctx->pc = 0x148FE8u;
    // 0x148fe8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x148FE8u;
    SET_GPR_U32(ctx, 31, 0x148FF0u);
    ctx->pc = 0x148FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FE8u;
            // 0x148fec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FF0u; }
        if (ctx->pc != 0x148FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148FF0u; }
        if (ctx->pc != 0x148FF0u) { return; }
    }
    ctx->pc = 0x148FF0u;
    // 0x148ff0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148ff4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x148ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x148ff8: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x148FF8u;
    SET_GPR_U32(ctx, 31, 0x149000u);
    ctx->pc = 0x148FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148FF8u;
            // 0x148ffc: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149000u; }
        if (ctx->pc != 0x149000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149000u; }
        if (ctx->pc != 0x149000u) { return; }
    }
    ctx->pc = 0x149000u;
    // 0x149000: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149004: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x149004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x149008: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149008u;
    SET_GPR_U32(ctx, 31, 0x149010u);
    ctx->pc = 0x14900Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149008u;
            // 0x14900c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149010u; }
        if (ctx->pc != 0x149010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149010u; }
        if (ctx->pc != 0x149010u) { return; }
    }
    ctx->pc = 0x149010u;
    // 0x149010: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149018: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14901c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149020: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149024: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149028: 0xc060614  jal         func_181850
    ctx->pc = 0x149028u;
    SET_GPR_U32(ctx, 31, 0x149030u);
    ctx->pc = 0x14902Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149028u;
            // 0x14902c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149030u; }
        if (ctx->pc != 0x149030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149030u; }
        if (ctx->pc != 0x149030u) { return; }
    }
    ctx->pc = 0x149030u;
    // 0x149030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149034: 0xc06060c  jal         func_181830
    ctx->pc = 0x149034u;
    SET_GPR_U32(ctx, 31, 0x14903Cu);
    ctx->pc = 0x149038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149034u;
            // 0x149038: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14903Cu; }
        if (ctx->pc != 0x14903Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14903Cu; }
        if (ctx->pc != 0x14903Cu) { return; }
    }
    ctx->pc = 0x14903Cu;
    // 0x14903c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14903cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149048: 0xc060604  jal         func_181810
    ctx->pc = 0x149048u;
    SET_GPR_U32(ctx, 31, 0x149050u);
    ctx->pc = 0x14904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149048u;
            // 0x14904c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149050u; }
        if (ctx->pc != 0x149050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149050u; }
        if (ctx->pc != 0x149050u) { return; }
    }
    ctx->pc = 0x149050u;
    // 0x149050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149054: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149058: 0xc0605dc  jal         func_181770
    ctx->pc = 0x149058u;
    SET_GPR_U32(ctx, 31, 0x149060u);
    ctx->pc = 0x14905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149058u;
            // 0x14905c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149060u; }
        if (ctx->pc != 0x149060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149060u; }
        if (ctx->pc != 0x149060u) { return; }
    }
    ctx->pc = 0x149060u;
    // 0x149060: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149064: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149064u;
    SET_GPR_U32(ctx, 31, 0x14906Cu);
    ctx->pc = 0x149068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149064u;
            // 0x149068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14906Cu; }
        if (ctx->pc != 0x14906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14906Cu; }
        if (ctx->pc != 0x14906Cu) { return; }
    }
    ctx->pc = 0x14906Cu;
    // 0x14906c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14906Cu;
    SET_GPR_U32(ctx, 31, 0x149074u);
    ctx->pc = 0x149070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14906Cu;
            // 0x149070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149074u; }
        if (ctx->pc != 0x149074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149074u; }
        if (ctx->pc != 0x149074u) { return; }
    }
    ctx->pc = 0x149074u;
    // 0x149074: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x149074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14907c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14907cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x149084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149088: 0x3e00008  jr          $ra
    ctx->pc = 0x149088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149088u;
            // 0x14908c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148E88u: goto label_148e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149090u;
}
