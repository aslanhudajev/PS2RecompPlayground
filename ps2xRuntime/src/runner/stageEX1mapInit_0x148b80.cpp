#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX1mapInit
// Address: 0x148b80 - 0x148d94
void stageEX1mapInit_0x148b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX1mapInit_0x148b80");
#endif

    ctx->pc = 0x148b80u;

    // 0x148b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148b84: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x148b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x148b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148b8c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x148b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x148b90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148b94: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x148b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x148b98: 0xc05c20c  jal         func_170830
    ctx->pc = 0x148B98u;
    SET_GPR_U32(ctx, 31, 0x148BA0u);
    ctx->pc = 0x148B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148B98u;
            // 0x148b9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BA0u; }
        if (ctx->pc != 0x148BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BA0u; }
        if (ctx->pc != 0x148BA0u) { return; }
    }
    ctx->pc = 0x148BA0u;
    // 0x148ba0: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x148ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x148ba4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x148ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x148ba8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x148ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148bac: 0xc05c20c  jal         func_170830
    ctx->pc = 0x148BACu;
    SET_GPR_U32(ctx, 31, 0x148BB4u);
    ctx->pc = 0x148BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BACu;
            // 0x148bb0: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BB4u; }
        if (ctx->pc != 0x148BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BB4u; }
        if (ctx->pc != 0x148BB4u) { return; }
    }
    ctx->pc = 0x148BB4u;
    // 0x148bb4: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x148bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x148bb8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x148BB8u;
    SET_GPR_U32(ctx, 31, 0x148BC0u);
    ctx->pc = 0x148BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BB8u;
            // 0x148bbc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BC0u; }
        if (ctx->pc != 0x148BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BC0u; }
        if (ctx->pc != 0x148BC0u) { return; }
    }
    ctx->pc = 0x148BC0u;
    // 0x148bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bc8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148BC8u;
    SET_GPR_U32(ctx, 31, 0x148BD0u);
    ctx->pc = 0x148BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BC8u;
            // 0x148bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BD0u; }
        if (ctx->pc != 0x148BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BD0u; }
        if (ctx->pc != 0x148BD0u) { return; }
    }
    ctx->pc = 0x148BD0u;
    // 0x148bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bd4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148BD4u;
    SET_GPR_U32(ctx, 31, 0x148BDCu);
    ctx->pc = 0x148BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BD4u;
            // 0x148bd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BDCu; }
        if (ctx->pc != 0x148BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BDCu; }
        if (ctx->pc != 0x148BDCu) { return; }
    }
    ctx->pc = 0x148BDCu;
    // 0x148bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148be0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148BE0u;
    SET_GPR_U32(ctx, 31, 0x148BE8u);
    ctx->pc = 0x148BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BE0u;
            // 0x148be4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BE8u; }
        if (ctx->pc != 0x148BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BE8u; }
        if (ctx->pc != 0x148BE8u) { return; }
    }
    ctx->pc = 0x148BE8u;
    // 0x148be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148BECu;
    SET_GPR_U32(ctx, 31, 0x148BF4u);
    ctx->pc = 0x148BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BECu;
            // 0x148bf0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BF4u; }
        if (ctx->pc != 0x148BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148BF4u; }
        if (ctx->pc != 0x148BF4u) { return; }
    }
    ctx->pc = 0x148BF4u;
    // 0x148bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bf8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148BF8u;
    SET_GPR_U32(ctx, 31, 0x148C00u);
    ctx->pc = 0x148BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148BF8u;
            // 0x148bfc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C00u; }
        if (ctx->pc != 0x148C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C00u; }
        if (ctx->pc != 0x148C00u) { return; }
    }
    ctx->pc = 0x148C00u;
    // 0x148c00: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x148c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x148c04: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x148c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x148c08: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x148C08u;
    SET_GPR_U32(ctx, 31, 0x148C10u);
    ctx->pc = 0x148C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C08u;
            // 0x148c0c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C10u; }
        if (ctx->pc != 0x148C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C10u; }
        if (ctx->pc != 0x148C10u) { return; }
    }
    ctx->pc = 0x148C10u;
    // 0x148c10: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x148C10u;
    SET_GPR_U32(ctx, 31, 0x148C18u);
    ctx->pc = 0x148C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C10u;
            // 0x148c14: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C18u; }
        if (ctx->pc != 0x148C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C18u; }
        if (ctx->pc != 0x148C18u) { return; }
    }
    ctx->pc = 0x148C18u;
    // 0x148c18: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148c1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x148c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x148c20: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x148C20u;
    SET_GPR_U32(ctx, 31, 0x148C28u);
    ctx->pc = 0x148C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C20u;
            // 0x148c24: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C28u; }
        if (ctx->pc != 0x148C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C28u; }
        if (ctx->pc != 0x148C28u) { return; }
    }
    ctx->pc = 0x148C28u;
    // 0x148c28: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148c2c: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x148c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x148c30: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148C30u;
    SET_GPR_U32(ctx, 31, 0x148C38u);
    ctx->pc = 0x148C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C30u;
            // 0x148c34: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C38u; }
        if (ctx->pc != 0x148C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C38u; }
        if (ctx->pc != 0x148C38u) { return; }
    }
    ctx->pc = 0x148C38u;
    // 0x148c38: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148c3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x148c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c40: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x148c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x148c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c48: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148c4c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x148c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x148c50: 0xc060614  jal         func_181850
    ctx->pc = 0x148C50u;
    SET_GPR_U32(ctx, 31, 0x148C58u);
    ctx->pc = 0x148C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C50u;
            // 0x148c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C58u; }
        if (ctx->pc != 0x148C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C58u; }
        if (ctx->pc != 0x148C58u) { return; }
    }
    ctx->pc = 0x148C58u;
    // 0x148c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c5c: 0xc06060c  jal         func_181830
    ctx->pc = 0x148C5Cu;
    SET_GPR_U32(ctx, 31, 0x148C64u);
    ctx->pc = 0x148C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C5Cu;
            // 0x148c60: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C64u; }
        if (ctx->pc != 0x148C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C64u; }
        if (ctx->pc != 0x148C64u) { return; }
    }
    ctx->pc = 0x148C64u;
    // 0x148c64: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x148c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c70: 0xc060604  jal         func_181810
    ctx->pc = 0x148C70u;
    SET_GPR_U32(ctx, 31, 0x148C78u);
    ctx->pc = 0x148C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C70u;
            // 0x148c74: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C78u; }
        if (ctx->pc != 0x148C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C78u; }
        if (ctx->pc != 0x148C78u) { return; }
    }
    ctx->pc = 0x148C78u;
    // 0x148c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148c80: 0xc0605dc  jal         func_181770
    ctx->pc = 0x148C80u;
    SET_GPR_U32(ctx, 31, 0x148C88u);
    ctx->pc = 0x148C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C80u;
            // 0x148c84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C88u; }
        if (ctx->pc != 0x148C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C88u; }
        if (ctx->pc != 0x148C88u) { return; }
    }
    ctx->pc = 0x148C88u;
    // 0x148c88: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x148c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x148c8c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x148C8Cu;
    SET_GPR_U32(ctx, 31, 0x148C94u);
    ctx->pc = 0x148C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C8Cu;
            // 0x148c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C94u; }
        if (ctx->pc != 0x148C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C94u; }
        if (ctx->pc != 0x148C94u) { return; }
    }
    ctx->pc = 0x148C94u;
    // 0x148c94: 0xc0605cc  jal         func_181730
    ctx->pc = 0x148C94u;
    SET_GPR_U32(ctx, 31, 0x148C9Cu);
    ctx->pc = 0x148C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148C94u;
            // 0x148c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C9Cu; }
        if (ctx->pc != 0x148C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148C9Cu; }
        if (ctx->pc != 0x148C9Cu) { return; }
    }
    ctx->pc = 0x148C9Cu;
    // 0x148c9c: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x148c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x148ca0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x148CA0u;
    SET_GPR_U32(ctx, 31, 0x148CA8u);
    ctx->pc = 0x148CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CA0u;
            // 0x148ca4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CA8u; }
        if (ctx->pc != 0x148CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CA8u; }
        if (ctx->pc != 0x148CA8u) { return; }
    }
    ctx->pc = 0x148CA8u;
    // 0x148ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cb0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148CB0u;
    SET_GPR_U32(ctx, 31, 0x148CB8u);
    ctx->pc = 0x148CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CB0u;
            // 0x148cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CB8u; }
        if (ctx->pc != 0x148CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CB8u; }
        if (ctx->pc != 0x148CB8u) { return; }
    }
    ctx->pc = 0x148CB8u;
    // 0x148cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cbc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148CBCu;
    SET_GPR_U32(ctx, 31, 0x148CC4u);
    ctx->pc = 0x148CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CBCu;
            // 0x148cc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CC4u; }
        if (ctx->pc != 0x148CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CC4u; }
        if (ctx->pc != 0x148CC4u) { return; }
    }
    ctx->pc = 0x148CC4u;
    // 0x148cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cc8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148CC8u;
    SET_GPR_U32(ctx, 31, 0x148CD0u);
    ctx->pc = 0x148CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CC8u;
            // 0x148ccc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CD0u; }
        if (ctx->pc != 0x148CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CD0u; }
        if (ctx->pc != 0x148CD0u) { return; }
    }
    ctx->pc = 0x148CD0u;
    // 0x148cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148cd4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148CD4u;
    SET_GPR_U32(ctx, 31, 0x148CDCu);
    ctx->pc = 0x148CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CD4u;
            // 0x148cd8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CDCu; }
        if (ctx->pc != 0x148CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CDCu; }
        if (ctx->pc != 0x148CDCu) { return; }
    }
    ctx->pc = 0x148CDCu;
    // 0x148cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ce0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x148CE0u;
    SET_GPR_U32(ctx, 31, 0x148CE8u);
    ctx->pc = 0x148CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CE0u;
            // 0x148ce4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CE8u; }
        if (ctx->pc != 0x148CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CE8u; }
        if (ctx->pc != 0x148CE8u) { return; }
    }
    ctx->pc = 0x148CE8u;
    // 0x148ce8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x148ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x148cec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x148cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x148cf0: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x148CF0u;
    SET_GPR_U32(ctx, 31, 0x148CF8u);
    ctx->pc = 0x148CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CF0u;
            // 0x148cf4: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CF8u; }
        if (ctx->pc != 0x148CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148CF8u; }
        if (ctx->pc != 0x148CF8u) { return; }
    }
    ctx->pc = 0x148CF8u;
    // 0x148cf8: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x148CF8u;
    SET_GPR_U32(ctx, 31, 0x148D00u);
    ctx->pc = 0x148CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148CF8u;
            // 0x148cfc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D00u; }
        if (ctx->pc != 0x148D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D00u; }
        if (ctx->pc != 0x148D00u) { return; }
    }
    ctx->pc = 0x148D00u;
    // 0x148d00: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148d04: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x148d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x148d08: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x148D08u;
    SET_GPR_U32(ctx, 31, 0x148D10u);
    ctx->pc = 0x148D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D08u;
            // 0x148d0c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D10u; }
        if (ctx->pc != 0x148D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D10u; }
        if (ctx->pc != 0x148D10u) { return; }
    }
    ctx->pc = 0x148D10u;
    // 0x148d10: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148d14: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x148d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x148d18: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x148D18u;
    SET_GPR_U32(ctx, 31, 0x148D20u);
    ctx->pc = 0x148D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D18u;
            // 0x148d1c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D20u; }
        if (ctx->pc != 0x148D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D20u; }
        if (ctx->pc != 0x148D20u) { return; }
    }
    ctx->pc = 0x148D20u;
    // 0x148d20: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148d24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x148d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d28: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x148d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x148d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d30: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x148d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x148d34: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x148d34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x148d38: 0xc060614  jal         func_181850
    ctx->pc = 0x148D38u;
    SET_GPR_U32(ctx, 31, 0x148D40u);
    ctx->pc = 0x148D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D38u;
            // 0x148d3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D40u; }
        if (ctx->pc != 0x148D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D40u; }
        if (ctx->pc != 0x148D40u) { return; }
    }
    ctx->pc = 0x148D40u;
    // 0x148d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d44: 0xc06060c  jal         func_181830
    ctx->pc = 0x148D44u;
    SET_GPR_U32(ctx, 31, 0x148D4Cu);
    ctx->pc = 0x148D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D44u;
            // 0x148d48: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D4Cu; }
        if (ctx->pc != 0x148D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D4Cu; }
        if (ctx->pc != 0x148D4Cu) { return; }
    }
    ctx->pc = 0x148D4Cu;
    // 0x148d4c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x148d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x148d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148d58: 0xc060604  jal         func_181810
    ctx->pc = 0x148D58u;
    SET_GPR_U32(ctx, 31, 0x148D60u);
    ctx->pc = 0x148D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D58u;
            // 0x148d5c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D60u; }
        if (ctx->pc != 0x148D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D60u; }
        if (ctx->pc != 0x148D60u) { return; }
    }
    ctx->pc = 0x148D60u;
    // 0x148d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148d68: 0xc0605dc  jal         func_181770
    ctx->pc = 0x148D68u;
    SET_GPR_U32(ctx, 31, 0x148D70u);
    ctx->pc = 0x148D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D68u;
            // 0x148d6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D70u; }
        if (ctx->pc != 0x148D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D70u; }
        if (ctx->pc != 0x148D70u) { return; }
    }
    ctx->pc = 0x148D70u;
    // 0x148d70: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x148d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x148d74: 0xc046376  jal         func_118DD8
    ctx->pc = 0x148D74u;
    SET_GPR_U32(ctx, 31, 0x148D7Cu);
    ctx->pc = 0x148D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D74u;
            // 0x148d78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D7Cu; }
        if (ctx->pc != 0x148D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D7Cu; }
        if (ctx->pc != 0x148D7Cu) { return; }
    }
    ctx->pc = 0x148D7Cu;
    // 0x148d7c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x148D7Cu;
    SET_GPR_U32(ctx, 31, 0x148D84u);
    ctx->pc = 0x148D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148D7Cu;
            // 0x148d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D84u; }
        if (ctx->pc != 0x148D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148D84u; }
        if (ctx->pc != 0x148D84u) { return; }
    }
    ctx->pc = 0x148D84u;
    // 0x148d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x148D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148D8Cu;
            // 0x148d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148D94u;
}
