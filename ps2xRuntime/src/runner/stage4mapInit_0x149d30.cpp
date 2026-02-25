#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage4mapInit
// Address: 0x149d30 - 0x14aaa4
void stage4mapInit_0x149d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage4mapInit_0x149d30");
#endif

    ctx->pc = 0x149d30u;

    // 0x149d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149d34: 0x240400d1  addiu       $a0, $zero, 0xD1
    ctx->pc = 0x149d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    // 0x149d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x149d3c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x149d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x149d40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d44: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x149d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x149d48: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149D48u;
    SET_GPR_U32(ctx, 31, 0x149D50u);
    ctx->pc = 0x149D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D48u;
            // 0x149d4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D50u; }
        if (ctx->pc != 0x149D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D50u; }
        if (ctx->pc != 0x149D50u) { return; }
    }
    ctx->pc = 0x149D50u;
    // 0x149d50: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x149d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x149d54: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x149d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x149d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d5c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149D5Cu;
    SET_GPR_U32(ctx, 31, 0x149D64u);
    ctx->pc = 0x149D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D5Cu;
            // 0x149d60: 0x24070011  addiu       $a3, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D64u; }
        if (ctx->pc != 0x149D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D64u; }
        if (ctx->pc != 0x149D64u) { return; }
    }
    ctx->pc = 0x149D64u;
    // 0x149d64: 0x240400d3  addiu       $a0, $zero, 0xD3
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x149d68: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x149d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x149d6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d70: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149D70u;
    SET_GPR_U32(ctx, 31, 0x149D78u);
    ctx->pc = 0x149D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D70u;
            // 0x149d74: 0x24070012  addiu       $a3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D78u; }
        if (ctx->pc != 0x149D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D78u; }
        if (ctx->pc != 0x149D78u) { return; }
    }
    ctx->pc = 0x149D78u;
    // 0x149d78: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x149d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x149d7c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x149d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x149d80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d84: 0xc05c20c  jal         func_170830
    ctx->pc = 0x149D84u;
    SET_GPR_U32(ctx, 31, 0x149D8Cu);
    ctx->pc = 0x149D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D84u;
            // 0x149d88: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D8Cu; }
        if (ctx->pc != 0x149D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D8Cu; }
        if (ctx->pc != 0x149D8Cu) { return; }
    }
    ctx->pc = 0x149D8Cu;
    // 0x149d8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149d90: 0x8c249680  lw          $a0, -0x6980($at)
    ctx->pc = 0x149d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940288)));
    // 0x149d94: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149d98: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149D98u;
    SET_GPR_U32(ctx, 31, 0x149DA0u);
    ctx->pc = 0x149D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D98u;
            // 0x149d9c: 0x8c2596c0  lw          $a1, -0x6940($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DA0u; }
        if (ctx->pc != 0x149DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DA0u; }
        if (ctx->pc != 0x149DA0u) { return; }
    }
    ctx->pc = 0x149DA0u;
    // 0x149da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149da8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149DA8u;
    SET_GPR_U32(ctx, 31, 0x149DB0u);
    ctx->pc = 0x149DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DA8u;
            // 0x149dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DB0u; }
        if (ctx->pc != 0x149DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DB0u; }
        if (ctx->pc != 0x149DB0u) { return; }
    }
    ctx->pc = 0x149DB0u;
    // 0x149db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149db4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149DB4u;
    SET_GPR_U32(ctx, 31, 0x149DBCu);
    ctx->pc = 0x149DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DB4u;
            // 0x149db8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DBCu; }
        if (ctx->pc != 0x149DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DBCu; }
        if (ctx->pc != 0x149DBCu) { return; }
    }
    ctx->pc = 0x149DBCu;
    // 0x149dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149dc0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149DC0u;
    SET_GPR_U32(ctx, 31, 0x149DC8u);
    ctx->pc = 0x149DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DC0u;
            // 0x149dc4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DC8u; }
        if (ctx->pc != 0x149DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DC8u; }
        if (ctx->pc != 0x149DC8u) { return; }
    }
    ctx->pc = 0x149DC8u;
    // 0x149dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149dcc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149DCCu;
    SET_GPR_U32(ctx, 31, 0x149DD4u);
    ctx->pc = 0x149DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DCCu;
            // 0x149dd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DD4u; }
        if (ctx->pc != 0x149DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DD4u; }
        if (ctx->pc != 0x149DD4u) { return; }
    }
    ctx->pc = 0x149DD4u;
    // 0x149dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149dd8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149DD8u;
    SET_GPR_U32(ctx, 31, 0x149DE0u);
    ctx->pc = 0x149DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DD8u;
            // 0x149ddc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DE0u; }
        if (ctx->pc != 0x149DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DE0u; }
        if (ctx->pc != 0x149DE0u) { return; }
    }
    ctx->pc = 0x149DE0u;
    // 0x149de0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x149de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149de4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149de8: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149DE8u;
    SET_GPR_U32(ctx, 31, 0x149DF0u);
    ctx->pc = 0x149DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DE8u;
            // 0x149dec: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DF0u; }
        if (ctx->pc != 0x149DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DF0u; }
        if (ctx->pc != 0x149DF0u) { return; }
    }
    ctx->pc = 0x149DF0u;
    // 0x149df0: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x149DF0u;
    SET_GPR_U32(ctx, 31, 0x149DF8u);
    ctx->pc = 0x149DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149DF0u;
            // 0x149df4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DF8u; }
        if (ctx->pc != 0x149DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149DF8u; }
        if (ctx->pc != 0x149DF8u) { return; }
    }
    ctx->pc = 0x149DF8u;
    // 0x149df8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149dfc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x149dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x149e00: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x149E00u;
    SET_GPR_U32(ctx, 31, 0x149E08u);
    ctx->pc = 0x149E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E00u;
            // 0x149e04: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E08u; }
        if (ctx->pc != 0x149E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E08u; }
        if (ctx->pc != 0x149E08u) { return; }
    }
    ctx->pc = 0x149E08u;
    // 0x149e08: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e0c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x149e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x149e10: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149E10u;
    SET_GPR_U32(ctx, 31, 0x149E18u);
    ctx->pc = 0x149E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E10u;
            // 0x149e14: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E18u; }
        if (ctx->pc != 0x149E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E18u; }
        if (ctx->pc != 0x149E18u) { return; }
    }
    ctx->pc = 0x149E18u;
    // 0x149e18: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e20: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e28: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e2c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149e30: 0xc060614  jal         func_181850
    ctx->pc = 0x149E30u;
    SET_GPR_U32(ctx, 31, 0x149E38u);
    ctx->pc = 0x149E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E30u;
            // 0x149e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E38u; }
        if (ctx->pc != 0x149E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E38u; }
        if (ctx->pc != 0x149E38u) { return; }
    }
    ctx->pc = 0x149E38u;
    // 0x149e38: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x149E38u;
    SET_GPR_U32(ctx, 31, 0x149E40u);
    ctx->pc = 0x149E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E38u;
            // 0x149e3c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E40u; }
        if (ctx->pc != 0x149E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E40u; }
        if (ctx->pc != 0x149E40u) { return; }
    }
    ctx->pc = 0x149E40u;
    // 0x149e40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e44: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x149e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x149e48: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x149E48u;
    SET_GPR_U32(ctx, 31, 0x149E50u);
    ctx->pc = 0x149E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E48u;
            // 0x149e4c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E50u; }
        if (ctx->pc != 0x149E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E50u; }
        if (ctx->pc != 0x149E50u) { return; }
    }
    ctx->pc = 0x149E50u;
    // 0x149e50: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e54: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x149e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x149e58: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149E58u;
    SET_GPR_U32(ctx, 31, 0x149E60u);
    ctx->pc = 0x149E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E58u;
            // 0x149e5c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E60u; }
        if (ctx->pc != 0x149E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E60u; }
        if (ctx->pc != 0x149E60u) { return; }
    }
    ctx->pc = 0x149E60u;
    // 0x149e60: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e68: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e70: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149e74: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149e74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149e78: 0xc060614  jal         func_181850
    ctx->pc = 0x149E78u;
    SET_GPR_U32(ctx, 31, 0x149E80u);
    ctx->pc = 0x149E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E78u;
            // 0x149e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E80u; }
        if (ctx->pc != 0x149E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E80u; }
        if (ctx->pc != 0x149E80u) { return; }
    }
    ctx->pc = 0x149E80u;
    // 0x149e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e84: 0xc06060c  jal         func_181830
    ctx->pc = 0x149E84u;
    SET_GPR_U32(ctx, 31, 0x149E8Cu);
    ctx->pc = 0x149E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E84u;
            // 0x149e88: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E8Cu; }
        if (ctx->pc != 0x149E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149E8Cu; }
        if (ctx->pc != 0x149E8Cu) { return; }
    }
    ctx->pc = 0x149E8Cu;
    // 0x149e8c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x149e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149e98: 0xc060604  jal         func_181810
    ctx->pc = 0x149E98u;
    SET_GPR_U32(ctx, 31, 0x149EA0u);
    ctx->pc = 0x149E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149E98u;
            // 0x149e9c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EA0u; }
        if (ctx->pc != 0x149EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EA0u; }
        if (ctx->pc != 0x149EA0u) { return; }
    }
    ctx->pc = 0x149EA0u;
    // 0x149ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ea8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x149EA8u;
    SET_GPR_U32(ctx, 31, 0x149EB0u);
    ctx->pc = 0x149EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149EA8u;
            // 0x149eac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EB0u; }
        if (ctx->pc != 0x149EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EB0u; }
        if (ctx->pc != 0x149EB0u) { return; }
    }
    ctx->pc = 0x149EB0u;
    // 0x149eb0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149eb4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149EB4u;
    SET_GPR_U32(ctx, 31, 0x149EBCu);
    ctx->pc = 0x149EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149EB4u;
            // 0x149eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EBCu; }
        if (ctx->pc != 0x149EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EBCu; }
        if (ctx->pc != 0x149EBCu) { return; }
    }
    ctx->pc = 0x149EBCu;
    // 0x149ebc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149EBCu;
    SET_GPR_U32(ctx, 31, 0x149EC4u);
    ctx->pc = 0x149EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149EBCu;
            // 0x149ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EC4u; }
        if (ctx->pc != 0x149EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EC4u; }
        if (ctx->pc != 0x149EC4u) { return; }
    }
    ctx->pc = 0x149EC4u;
    // 0x149ec4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149ec8: 0x8c249684  lw          $a0, -0x697C($at)
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940292)));
    // 0x149ecc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149ed0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149ED0u;
    SET_GPR_U32(ctx, 31, 0x149ED8u);
    ctx->pc = 0x149ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149ED0u;
            // 0x149ed4: 0x8c2596c4  lw          $a1, -0x693C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149ED8u; }
        if (ctx->pc != 0x149ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149ED8u; }
        if (ctx->pc != 0x149ED8u) { return; }
    }
    ctx->pc = 0x149ED8u;
    // 0x149ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ee0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149EE0u;
    SET_GPR_U32(ctx, 31, 0x149EE8u);
    ctx->pc = 0x149EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149EE0u;
            // 0x149ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EE8u; }
        if (ctx->pc != 0x149EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EE8u; }
        if (ctx->pc != 0x149EE8u) { return; }
    }
    ctx->pc = 0x149EE8u;
    // 0x149ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149eec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149EECu;
    SET_GPR_U32(ctx, 31, 0x149EF4u);
    ctx->pc = 0x149EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149EECu;
            // 0x149ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EF4u; }
        if (ctx->pc != 0x149EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149EF4u; }
        if (ctx->pc != 0x149EF4u) { return; }
    }
    ctx->pc = 0x149EF4u;
    // 0x149ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ef8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149EF8u;
    SET_GPR_U32(ctx, 31, 0x149F00u);
    ctx->pc = 0x149EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149EF8u;
            // 0x149efc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F00u; }
        if (ctx->pc != 0x149F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F00u; }
        if (ctx->pc != 0x149F00u) { return; }
    }
    ctx->pc = 0x149F00u;
    // 0x149f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f04: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149F04u;
    SET_GPR_U32(ctx, 31, 0x149F0Cu);
    ctx->pc = 0x149F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F04u;
            // 0x149f08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F0Cu; }
        if (ctx->pc != 0x149F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F0Cu; }
        if (ctx->pc != 0x149F0Cu) { return; }
    }
    ctx->pc = 0x149F0Cu;
    // 0x149f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f10: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149F10u;
    SET_GPR_U32(ctx, 31, 0x149F18u);
    ctx->pc = 0x149F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F10u;
            // 0x149f14: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F18u; }
        if (ctx->pc != 0x149F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F18u; }
        if (ctx->pc != 0x149F18u) { return; }
    }
    ctx->pc = 0x149F18u;
    // 0x149f18: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x149f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x149f1c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x149f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x149f20: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x149F20u;
    SET_GPR_U32(ctx, 31, 0x149F28u);
    ctx->pc = 0x149F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F20u;
            // 0x149f24: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F28u; }
        if (ctx->pc != 0x149F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F28u; }
        if (ctx->pc != 0x149F28u) { return; }
    }
    ctx->pc = 0x149F28u;
    // 0x149f28: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x149F28u;
    SET_GPR_U32(ctx, 31, 0x149F30u);
    ctx->pc = 0x149F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F28u;
            // 0x149f2c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F30u; }
        if (ctx->pc != 0x149F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F30u; }
        if (ctx->pc != 0x149F30u) { return; }
    }
    ctx->pc = 0x149F30u;
    // 0x149f30: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149f34: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x149f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x149f38: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x149F38u;
    SET_GPR_U32(ctx, 31, 0x149F40u);
    ctx->pc = 0x149F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F38u;
            // 0x149f3c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F40u; }
        if (ctx->pc != 0x149F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F40u; }
        if (ctx->pc != 0x149F40u) { return; }
    }
    ctx->pc = 0x149F40u;
    // 0x149f40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149f44: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x149f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x149f48: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149F48u;
    SET_GPR_U32(ctx, 31, 0x149F50u);
    ctx->pc = 0x149F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F48u;
            // 0x149f4c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F50u; }
        if (ctx->pc != 0x149F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F50u; }
        if (ctx->pc != 0x149F50u) { return; }
    }
    ctx->pc = 0x149F50u;
    // 0x149f50: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149f54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x149f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f58: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x149f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x149f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f60: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x149f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x149f64: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x149f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x149f68: 0xc060614  jal         func_181850
    ctx->pc = 0x149F68u;
    SET_GPR_U32(ctx, 31, 0x149F70u);
    ctx->pc = 0x149F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F68u;
            // 0x149f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F70u; }
        if (ctx->pc != 0x149F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F70u; }
        if (ctx->pc != 0x149F70u) { return; }
    }
    ctx->pc = 0x149F70u;
    // 0x149f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f74: 0xc06060c  jal         func_181830
    ctx->pc = 0x149F74u;
    SET_GPR_U32(ctx, 31, 0x149F7Cu);
    ctx->pc = 0x149F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F74u;
            // 0x149f78: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F7Cu; }
        if (ctx->pc != 0x149F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F7Cu; }
        if (ctx->pc != 0x149F7Cu) { return; }
    }
    ctx->pc = 0x149F7Cu;
    // 0x149f7c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x149f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x149f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x149f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149f88: 0xc060604  jal         func_181810
    ctx->pc = 0x149F88u;
    SET_GPR_U32(ctx, 31, 0x149F90u);
    ctx->pc = 0x149F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F88u;
            // 0x149f8c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F90u; }
        if (ctx->pc != 0x149F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149F90u; }
        if (ctx->pc != 0x149F90u) { return; }
    }
    ctx->pc = 0x149F90u;
    // 0x149f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f98: 0xc0605dc  jal         func_181770
    ctx->pc = 0x149F98u;
    SET_GPR_U32(ctx, 31, 0x149FA0u);
    ctx->pc = 0x149F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149F98u;
            // 0x149f9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FA0u; }
        if (ctx->pc != 0x149FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FA0u; }
        if (ctx->pc != 0x149FA0u) { return; }
    }
    ctx->pc = 0x149FA0u;
    // 0x149fa0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x149fa4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x149FA4u;
    SET_GPR_U32(ctx, 31, 0x149FACu);
    ctx->pc = 0x149FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FA4u;
            // 0x149fa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FACu; }
        if (ctx->pc != 0x149FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FACu; }
        if (ctx->pc != 0x149FACu) { return; }
    }
    ctx->pc = 0x149FACu;
    // 0x149fac: 0xc0605cc  jal         func_181730
    ctx->pc = 0x149FACu;
    SET_GPR_U32(ctx, 31, 0x149FB4u);
    ctx->pc = 0x149FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FACu;
            // 0x149fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FB4u; }
        if (ctx->pc != 0x149FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FB4u; }
        if (ctx->pc != 0x149FB4u) { return; }
    }
    ctx->pc = 0x149FB4u;
    // 0x149fb4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149fb8: 0x8c249688  lw          $a0, -0x6978($at)
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940296)));
    // 0x149fbc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149fc0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x149FC0u;
    SET_GPR_U32(ctx, 31, 0x149FC8u);
    ctx->pc = 0x149FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FC0u;
            // 0x149fc4: 0x8c2596c8  lw          $a1, -0x6938($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FC8u; }
        if (ctx->pc != 0x149FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FC8u; }
        if (ctx->pc != 0x149FC8u) { return; }
    }
    ctx->pc = 0x149FC8u;
    // 0x149fc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fd0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149FD0u;
    SET_GPR_U32(ctx, 31, 0x149FD8u);
    ctx->pc = 0x149FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FD0u;
            // 0x149fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FD8u; }
        if (ctx->pc != 0x149FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FD8u; }
        if (ctx->pc != 0x149FD8u) { return; }
    }
    ctx->pc = 0x149FD8u;
    // 0x149fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fdc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149FDCu;
    SET_GPR_U32(ctx, 31, 0x149FE4u);
    ctx->pc = 0x149FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FDCu;
            // 0x149fe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FE4u; }
        if (ctx->pc != 0x149FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FE4u; }
        if (ctx->pc != 0x149FE4u) { return; }
    }
    ctx->pc = 0x149FE4u;
    // 0x149fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fe8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149FE8u;
    SET_GPR_U32(ctx, 31, 0x149FF0u);
    ctx->pc = 0x149FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FE8u;
            // 0x149fec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FF0u; }
        if (ctx->pc != 0x149FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FF0u; }
        if (ctx->pc != 0x149FF0u) { return; }
    }
    ctx->pc = 0x149FF0u;
    // 0x149ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ff4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x149FF4u;
    SET_GPR_U32(ctx, 31, 0x149FFCu);
    ctx->pc = 0x149FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149FF4u;
            // 0x149ff8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FFCu; }
        if (ctx->pc != 0x149FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149FFCu; }
        if (ctx->pc != 0x149FFCu) { return; }
    }
    ctx->pc = 0x149FFCu;
    // 0x149ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a000: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A000u;
    SET_GPR_U32(ctx, 31, 0x14A008u);
    ctx->pc = 0x14A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A000u;
            // 0x14a004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A008u; }
        if (ctx->pc != 0x14A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A008u; }
        if (ctx->pc != 0x14A008u) { return; }
    }
    ctx->pc = 0x14A008u;
    // 0x14a008: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a00c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a010: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A010u;
    SET_GPR_U32(ctx, 31, 0x14A018u);
    ctx->pc = 0x14A014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A010u;
            // 0x14a014: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A018u; }
        if (ctx->pc != 0x14A018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A018u; }
        if (ctx->pc != 0x14A018u) { return; }
    }
    ctx->pc = 0x14A018u;
    // 0x14a018: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A018u;
    SET_GPR_U32(ctx, 31, 0x14A020u);
    ctx->pc = 0x14A01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A018u;
            // 0x14a01c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A020u; }
        if (ctx->pc != 0x14A020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A020u; }
        if (ctx->pc != 0x14A020u) { return; }
    }
    ctx->pc = 0x14A020u;
    // 0x14a020: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a024: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a028: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A028u;
    SET_GPR_U32(ctx, 31, 0x14A030u);
    ctx->pc = 0x14A02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A028u;
            // 0x14a02c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A030u; }
        if (ctx->pc != 0x14A030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A030u; }
        if (ctx->pc != 0x14A030u) { return; }
    }
    ctx->pc = 0x14A030u;
    // 0x14a030: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a034: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a038: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A038u;
    SET_GPR_U32(ctx, 31, 0x14A040u);
    ctx->pc = 0x14A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A038u;
            // 0x14a03c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A040u; }
        if (ctx->pc != 0x14A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A040u; }
        if (ctx->pc != 0x14A040u) { return; }
    }
    ctx->pc = 0x14A040u;
    // 0x14a040: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a044: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a048: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a050: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a054: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a058: 0xc060614  jal         func_181850
    ctx->pc = 0x14A058u;
    SET_GPR_U32(ctx, 31, 0x14A060u);
    ctx->pc = 0x14A05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A058u;
            // 0x14a05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A060u; }
        if (ctx->pc != 0x14A060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A060u; }
        if (ctx->pc != 0x14A060u) { return; }
    }
    ctx->pc = 0x14A060u;
    // 0x14a060: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A060u;
    SET_GPR_U32(ctx, 31, 0x14A068u);
    ctx->pc = 0x14A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A060u;
            // 0x14a064: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A068u; }
        if (ctx->pc != 0x14A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A068u; }
        if (ctx->pc != 0x14A068u) { return; }
    }
    ctx->pc = 0x14A068u;
    // 0x14a068: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a06c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x14a070: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A070u;
    SET_GPR_U32(ctx, 31, 0x14A078u);
    ctx->pc = 0x14A074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A070u;
            // 0x14a074: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A078u; }
        if (ctx->pc != 0x14A078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A078u; }
        if (ctx->pc != 0x14A078u) { return; }
    }
    ctx->pc = 0x14A078u;
    // 0x14a078: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a07c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x14a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x14a080: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A080u;
    SET_GPR_U32(ctx, 31, 0x14A088u);
    ctx->pc = 0x14A084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A080u;
            // 0x14a084: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A088u; }
        if (ctx->pc != 0x14A088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A088u; }
        if (ctx->pc != 0x14A088u) { return; }
    }
    ctx->pc = 0x14A088u;
    // 0x14a088: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a08c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a090: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a098: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a09c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a09cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a0a0: 0xc060614  jal         func_181850
    ctx->pc = 0x14A0A0u;
    SET_GPR_U32(ctx, 31, 0x14A0A8u);
    ctx->pc = 0x14A0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0A0u;
            // 0x14a0a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0A8u; }
        if (ctx->pc != 0x14A0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0A8u; }
        if (ctx->pc != 0x14A0A8u) { return; }
    }
    ctx->pc = 0x14A0A8u;
    // 0x14a0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0ac: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A0ACu;
    SET_GPR_U32(ctx, 31, 0x14A0B4u);
    ctx->pc = 0x14A0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0ACu;
            // 0x14a0b0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0B4u; }
        if (ctx->pc != 0x14A0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0B4u; }
        if (ctx->pc != 0x14A0B4u) { return; }
    }
    ctx->pc = 0x14A0B4u;
    // 0x14a0b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a0c0: 0xc060604  jal         func_181810
    ctx->pc = 0x14A0C0u;
    SET_GPR_U32(ctx, 31, 0x14A0C8u);
    ctx->pc = 0x14A0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0C0u;
            // 0x14a0c4: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0C8u; }
        if (ctx->pc != 0x14A0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0C8u; }
        if (ctx->pc != 0x14A0C8u) { return; }
    }
    ctx->pc = 0x14A0C8u;
    // 0x14a0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0d0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A0D0u;
    SET_GPR_U32(ctx, 31, 0x14A0D8u);
    ctx->pc = 0x14A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0D0u;
            // 0x14a0d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0D8u; }
        if (ctx->pc != 0x14A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0D8u; }
        if (ctx->pc != 0x14A0D8u) { return; }
    }
    ctx->pc = 0x14A0D8u;
    // 0x14a0d8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a0dc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A0DCu;
    SET_GPR_U32(ctx, 31, 0x14A0E4u);
    ctx->pc = 0x14A0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0DCu;
            // 0x14a0e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0E4u; }
        if (ctx->pc != 0x14A0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0E4u; }
        if (ctx->pc != 0x14A0E4u) { return; }
    }
    ctx->pc = 0x14A0E4u;
    // 0x14a0e4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A0E4u;
    SET_GPR_U32(ctx, 31, 0x14A0ECu);
    ctx->pc = 0x14A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0E4u;
            // 0x14a0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0ECu; }
        if (ctx->pc != 0x14A0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A0ECu; }
        if (ctx->pc != 0x14A0ECu) { return; }
    }
    ctx->pc = 0x14A0ECu;
    // 0x14a0ec: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a0f0: 0x8c24968c  lw          $a0, -0x6974($at)
    ctx->pc = 0x14a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940300)));
    // 0x14a0f4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a0f8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A0F8u;
    SET_GPR_U32(ctx, 31, 0x14A100u);
    ctx->pc = 0x14A0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A0F8u;
            // 0x14a0fc: 0x8c2596cc  lw          $a1, -0x6934($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940364)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A100u; }
        if (ctx->pc != 0x14A100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A100u; }
        if (ctx->pc != 0x14A100u) { return; }
    }
    ctx->pc = 0x14A100u;
    // 0x14a100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a108: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A108u;
    SET_GPR_U32(ctx, 31, 0x14A110u);
    ctx->pc = 0x14A10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A108u;
            // 0x14a10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A110u; }
        if (ctx->pc != 0x14A110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A110u; }
        if (ctx->pc != 0x14A110u) { return; }
    }
    ctx->pc = 0x14A110u;
    // 0x14a110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a114: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A114u;
    SET_GPR_U32(ctx, 31, 0x14A11Cu);
    ctx->pc = 0x14A118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A114u;
            // 0x14a118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A11Cu; }
        if (ctx->pc != 0x14A11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A11Cu; }
        if (ctx->pc != 0x14A11Cu) { return; }
    }
    ctx->pc = 0x14A11Cu;
    // 0x14a11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a120: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A120u;
    SET_GPR_U32(ctx, 31, 0x14A128u);
    ctx->pc = 0x14A124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A120u;
            // 0x14a124: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A128u; }
        if (ctx->pc != 0x14A128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A128u; }
        if (ctx->pc != 0x14A128u) { return; }
    }
    ctx->pc = 0x14A128u;
    // 0x14a128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a12c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A12Cu;
    SET_GPR_U32(ctx, 31, 0x14A134u);
    ctx->pc = 0x14A130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A12Cu;
            // 0x14a130: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A134u; }
        if (ctx->pc != 0x14A134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A134u; }
        if (ctx->pc != 0x14A134u) { return; }
    }
    ctx->pc = 0x14A134u;
    // 0x14a134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a138: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A138u;
    SET_GPR_U32(ctx, 31, 0x14A140u);
    ctx->pc = 0x14A13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A138u;
            // 0x14a13c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A140u; }
        if (ctx->pc != 0x14A140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A140u; }
        if (ctx->pc != 0x14A140u) { return; }
    }
    ctx->pc = 0x14A140u;
    // 0x14a140: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a144: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a148: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A148u;
    SET_GPR_U32(ctx, 31, 0x14A150u);
    ctx->pc = 0x14A14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A148u;
            // 0x14a14c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A150u; }
        if (ctx->pc != 0x14A150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A150u; }
        if (ctx->pc != 0x14A150u) { return; }
    }
    ctx->pc = 0x14A150u;
    // 0x14a150: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A150u;
    SET_GPR_U32(ctx, 31, 0x14A158u);
    ctx->pc = 0x14A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A150u;
            // 0x14a154: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A158u; }
        if (ctx->pc != 0x14A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A158u; }
        if (ctx->pc != 0x14A158u) { return; }
    }
    ctx->pc = 0x14A158u;
    // 0x14a158: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a15c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a160: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A160u;
    SET_GPR_U32(ctx, 31, 0x14A168u);
    ctx->pc = 0x14A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A160u;
            // 0x14a164: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A168u; }
        if (ctx->pc != 0x14A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A168u; }
        if (ctx->pc != 0x14A168u) { return; }
    }
    ctx->pc = 0x14A168u;
    // 0x14a168: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a16c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a170: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A170u;
    SET_GPR_U32(ctx, 31, 0x14A178u);
    ctx->pc = 0x14A174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A170u;
            // 0x14a174: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A178u; }
        if (ctx->pc != 0x14A178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A178u; }
        if (ctx->pc != 0x14A178u) { return; }
    }
    ctx->pc = 0x14A178u;
    // 0x14a178: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a17c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a180: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a188: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a18c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a190: 0xc060614  jal         func_181850
    ctx->pc = 0x14A190u;
    SET_GPR_U32(ctx, 31, 0x14A198u);
    ctx->pc = 0x14A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A190u;
            // 0x14a194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A198u; }
        if (ctx->pc != 0x14A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A198u; }
        if (ctx->pc != 0x14A198u) { return; }
    }
    ctx->pc = 0x14A198u;
    // 0x14a198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a19c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A19Cu;
    SET_GPR_U32(ctx, 31, 0x14A1A4u);
    ctx->pc = 0x14A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A19Cu;
            // 0x14a1a0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1A4u; }
        if (ctx->pc != 0x14A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1A4u; }
        if (ctx->pc != 0x14A1A4u) { return; }
    }
    ctx->pc = 0x14A1A4u;
    // 0x14a1a4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a1b0: 0xc060604  jal         func_181810
    ctx->pc = 0x14A1B0u;
    SET_GPR_U32(ctx, 31, 0x14A1B8u);
    ctx->pc = 0x14A1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1B0u;
            // 0x14a1b4: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1B8u; }
        if (ctx->pc != 0x14A1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1B8u; }
        if (ctx->pc != 0x14A1B8u) { return; }
    }
    ctx->pc = 0x14A1B8u;
    // 0x14a1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1c0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A1C0u;
    SET_GPR_U32(ctx, 31, 0x14A1C8u);
    ctx->pc = 0x14A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1C0u;
            // 0x14a1c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1C8u; }
        if (ctx->pc != 0x14A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1C8u; }
        if (ctx->pc != 0x14A1C8u) { return; }
    }
    ctx->pc = 0x14A1C8u;
    // 0x14a1c8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a1cc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A1CCu;
    SET_GPR_U32(ctx, 31, 0x14A1D4u);
    ctx->pc = 0x14A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1CCu;
            // 0x14a1d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1D4u; }
        if (ctx->pc != 0x14A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1D4u; }
        if (ctx->pc != 0x14A1D4u) { return; }
    }
    ctx->pc = 0x14A1D4u;
    // 0x14a1d4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A1D4u;
    SET_GPR_U32(ctx, 31, 0x14A1DCu);
    ctx->pc = 0x14A1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1D4u;
            // 0x14a1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1DCu; }
        if (ctx->pc != 0x14A1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1DCu; }
        if (ctx->pc != 0x14A1DCu) { return; }
    }
    ctx->pc = 0x14A1DCu;
    // 0x14a1dc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a1e0: 0x8c249690  lw          $a0, -0x6970($at)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940304)));
    // 0x14a1e4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a1e8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A1E8u;
    SET_GPR_U32(ctx, 31, 0x14A1F0u);
    ctx->pc = 0x14A1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1E8u;
            // 0x14a1ec: 0x8c2596d0  lw          $a1, -0x6930($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1F0u; }
        if (ctx->pc != 0x14A1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A1F0u; }
        if (ctx->pc != 0x14A1F0u) { return; }
    }
    ctx->pc = 0x14A1F0u;
    // 0x14a1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A1F8u;
    SET_GPR_U32(ctx, 31, 0x14A200u);
    ctx->pc = 0x14A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1F8u;
            // 0x14a1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A200u; }
        if (ctx->pc != 0x14A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A200u; }
        if (ctx->pc != 0x14A200u) { return; }
    }
    ctx->pc = 0x14A200u;
    // 0x14a200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a204: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A204u;
    SET_GPR_U32(ctx, 31, 0x14A20Cu);
    ctx->pc = 0x14A208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A204u;
            // 0x14a208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A20Cu; }
        if (ctx->pc != 0x14A20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A20Cu; }
        if (ctx->pc != 0x14A20Cu) { return; }
    }
    ctx->pc = 0x14A20Cu;
    // 0x14a20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a210: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A210u;
    SET_GPR_U32(ctx, 31, 0x14A218u);
    ctx->pc = 0x14A214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A210u;
            // 0x14a214: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A218u; }
        if (ctx->pc != 0x14A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A218u; }
        if (ctx->pc != 0x14A218u) { return; }
    }
    ctx->pc = 0x14A218u;
    // 0x14a218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a21c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A21Cu;
    SET_GPR_U32(ctx, 31, 0x14A224u);
    ctx->pc = 0x14A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A21Cu;
            // 0x14a220: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A224u; }
        if (ctx->pc != 0x14A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A224u; }
        if (ctx->pc != 0x14A224u) { return; }
    }
    ctx->pc = 0x14A224u;
    // 0x14a224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a228: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A228u;
    SET_GPR_U32(ctx, 31, 0x14A230u);
    ctx->pc = 0x14A22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A228u;
            // 0x14a22c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A230u; }
        if (ctx->pc != 0x14A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A230u; }
        if (ctx->pc != 0x14A230u) { return; }
    }
    ctx->pc = 0x14A230u;
    // 0x14a230: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a234: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a238: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A238u;
    SET_GPR_U32(ctx, 31, 0x14A240u);
    ctx->pc = 0x14A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A238u;
            // 0x14a23c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A240u; }
        if (ctx->pc != 0x14A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A240u; }
        if (ctx->pc != 0x14A240u) { return; }
    }
    ctx->pc = 0x14A240u;
    // 0x14a240: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A240u;
    SET_GPR_U32(ctx, 31, 0x14A248u);
    ctx->pc = 0x14A244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A240u;
            // 0x14a244: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A248u; }
        if (ctx->pc != 0x14A248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A248u; }
        if (ctx->pc != 0x14A248u) { return; }
    }
    ctx->pc = 0x14A248u;
    // 0x14a248: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a24c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a250: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A250u;
    SET_GPR_U32(ctx, 31, 0x14A258u);
    ctx->pc = 0x14A254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A250u;
            // 0x14a254: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A258u; }
        if (ctx->pc != 0x14A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A258u; }
        if (ctx->pc != 0x14A258u) { return; }
    }
    ctx->pc = 0x14A258u;
    // 0x14a258: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a25c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a260: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A260u;
    SET_GPR_U32(ctx, 31, 0x14A268u);
    ctx->pc = 0x14A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A260u;
            // 0x14a264: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A268u; }
        if (ctx->pc != 0x14A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A268u; }
        if (ctx->pc != 0x14A268u) { return; }
    }
    ctx->pc = 0x14A268u;
    // 0x14a268: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a26c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a270: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a278: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a27c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a27cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a280: 0xc060614  jal         func_181850
    ctx->pc = 0x14A280u;
    SET_GPR_U32(ctx, 31, 0x14A288u);
    ctx->pc = 0x14A284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A280u;
            // 0x14a284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A288u; }
        if (ctx->pc != 0x14A288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A288u; }
        if (ctx->pc != 0x14A288u) { return; }
    }
    ctx->pc = 0x14A288u;
    // 0x14a288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a28c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A28Cu;
    SET_GPR_U32(ctx, 31, 0x14A294u);
    ctx->pc = 0x14A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A28Cu;
            // 0x14a290: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A294u; }
        if (ctx->pc != 0x14A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A294u; }
        if (ctx->pc != 0x14A294u) { return; }
    }
    ctx->pc = 0x14A294u;
    // 0x14a294: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a29c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a2a0: 0xc060604  jal         func_181810
    ctx->pc = 0x14A2A0u;
    SET_GPR_U32(ctx, 31, 0x14A2A8u);
    ctx->pc = 0x14A2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2A0u;
            // 0x14a2a4: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2A8u; }
        if (ctx->pc != 0x14A2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2A8u; }
        if (ctx->pc != 0x14A2A8u) { return; }
    }
    ctx->pc = 0x14A2A8u;
    // 0x14a2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2b0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A2B0u;
    SET_GPR_U32(ctx, 31, 0x14A2B8u);
    ctx->pc = 0x14A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2B0u;
            // 0x14a2b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2B8u; }
        if (ctx->pc != 0x14A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2B8u; }
        if (ctx->pc != 0x14A2B8u) { return; }
    }
    ctx->pc = 0x14A2B8u;
    // 0x14a2b8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a2bc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A2BCu;
    SET_GPR_U32(ctx, 31, 0x14A2C4u);
    ctx->pc = 0x14A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2BCu;
            // 0x14a2c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2C4u; }
        if (ctx->pc != 0x14A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2C4u; }
        if (ctx->pc != 0x14A2C4u) { return; }
    }
    ctx->pc = 0x14A2C4u;
    // 0x14a2c4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A2C4u;
    SET_GPR_U32(ctx, 31, 0x14A2CCu);
    ctx->pc = 0x14A2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2C4u;
            // 0x14a2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2CCu; }
        if (ctx->pc != 0x14A2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2CCu; }
        if (ctx->pc != 0x14A2CCu) { return; }
    }
    ctx->pc = 0x14A2CCu;
    // 0x14a2cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a2d0: 0x8c249694  lw          $a0, -0x696C($at)
    ctx->pc = 0x14a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940308)));
    // 0x14a2d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a2d8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A2D8u;
    SET_GPR_U32(ctx, 31, 0x14A2E0u);
    ctx->pc = 0x14A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2D8u;
            // 0x14a2dc: 0x8c2596d4  lw          $a1, -0x692C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2E0u; }
        if (ctx->pc != 0x14A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2E0u; }
        if (ctx->pc != 0x14A2E0u) { return; }
    }
    ctx->pc = 0x14A2E0u;
    // 0x14a2e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2e8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A2E8u;
    SET_GPR_U32(ctx, 31, 0x14A2F0u);
    ctx->pc = 0x14A2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2E8u;
            // 0x14a2ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2F0u; }
        if (ctx->pc != 0x14A2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2F0u; }
        if (ctx->pc != 0x14A2F0u) { return; }
    }
    ctx->pc = 0x14A2F0u;
    // 0x14a2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a2f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A2F4u;
    SET_GPR_U32(ctx, 31, 0x14A2FCu);
    ctx->pc = 0x14A2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A2F4u;
            // 0x14a2f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2FCu; }
        if (ctx->pc != 0x14A2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A2FCu; }
        if (ctx->pc != 0x14A2FCu) { return; }
    }
    ctx->pc = 0x14A2FCu;
    // 0x14a2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a300: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A300u;
    SET_GPR_U32(ctx, 31, 0x14A308u);
    ctx->pc = 0x14A304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A300u;
            // 0x14a304: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A308u; }
        if (ctx->pc != 0x14A308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A308u; }
        if (ctx->pc != 0x14A308u) { return; }
    }
    ctx->pc = 0x14A308u;
    // 0x14a308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a30c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A30Cu;
    SET_GPR_U32(ctx, 31, 0x14A314u);
    ctx->pc = 0x14A310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A30Cu;
            // 0x14a310: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A314u; }
        if (ctx->pc != 0x14A314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A314u; }
        if (ctx->pc != 0x14A314u) { return; }
    }
    ctx->pc = 0x14A314u;
    // 0x14a314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a318: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A318u;
    SET_GPR_U32(ctx, 31, 0x14A320u);
    ctx->pc = 0x14A31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A318u;
            // 0x14a31c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A320u; }
        if (ctx->pc != 0x14A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A320u; }
        if (ctx->pc != 0x14A320u) { return; }
    }
    ctx->pc = 0x14A320u;
    // 0x14a320: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a324: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a328: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A328u;
    SET_GPR_U32(ctx, 31, 0x14A330u);
    ctx->pc = 0x14A32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A328u;
            // 0x14a32c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A330u; }
        if (ctx->pc != 0x14A330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A330u; }
        if (ctx->pc != 0x14A330u) { return; }
    }
    ctx->pc = 0x14A330u;
    // 0x14a330: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A330u;
    SET_GPR_U32(ctx, 31, 0x14A338u);
    ctx->pc = 0x14A334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A330u;
            // 0x14a334: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A338u; }
        if (ctx->pc != 0x14A338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A338u; }
        if (ctx->pc != 0x14A338u) { return; }
    }
    ctx->pc = 0x14A338u;
    // 0x14a338: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a33c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a340: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A340u;
    SET_GPR_U32(ctx, 31, 0x14A348u);
    ctx->pc = 0x14A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A340u;
            // 0x14a344: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A348u; }
        if (ctx->pc != 0x14A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A348u; }
        if (ctx->pc != 0x14A348u) { return; }
    }
    ctx->pc = 0x14A348u;
    // 0x14a348: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a34c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a350: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A350u;
    SET_GPR_U32(ctx, 31, 0x14A358u);
    ctx->pc = 0x14A354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A350u;
            // 0x14a354: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A358u; }
        if (ctx->pc != 0x14A358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A358u; }
        if (ctx->pc != 0x14A358u) { return; }
    }
    ctx->pc = 0x14A358u;
    // 0x14a358: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a35c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a360: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a368: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a36c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a36cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a370: 0xc060614  jal         func_181850
    ctx->pc = 0x14A370u;
    SET_GPR_U32(ctx, 31, 0x14A378u);
    ctx->pc = 0x14A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A370u;
            // 0x14a374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A378u; }
        if (ctx->pc != 0x14A378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A378u; }
        if (ctx->pc != 0x14A378u) { return; }
    }
    ctx->pc = 0x14A378u;
    // 0x14a378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a37c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A37Cu;
    SET_GPR_U32(ctx, 31, 0x14A384u);
    ctx->pc = 0x14A380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A37Cu;
            // 0x14a380: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A384u; }
        if (ctx->pc != 0x14A384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A384u; }
        if (ctx->pc != 0x14A384u) { return; }
    }
    ctx->pc = 0x14A384u;
    // 0x14a384: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a390: 0xc060604  jal         func_181810
    ctx->pc = 0x14A390u;
    SET_GPR_U32(ctx, 31, 0x14A398u);
    ctx->pc = 0x14A394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A390u;
            // 0x14a394: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A398u; }
        if (ctx->pc != 0x14A398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A398u; }
        if (ctx->pc != 0x14A398u) { return; }
    }
    ctx->pc = 0x14A398u;
    // 0x14a398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3a0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A3A0u;
    SET_GPR_U32(ctx, 31, 0x14A3A8u);
    ctx->pc = 0x14A3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3A0u;
            // 0x14a3a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3A8u; }
        if (ctx->pc != 0x14A3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3A8u; }
        if (ctx->pc != 0x14A3A8u) { return; }
    }
    ctx->pc = 0x14A3A8u;
    // 0x14a3a8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a3ac: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A3ACu;
    SET_GPR_U32(ctx, 31, 0x14A3B4u);
    ctx->pc = 0x14A3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3ACu;
            // 0x14a3b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3B4u; }
        if (ctx->pc != 0x14A3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3B4u; }
        if (ctx->pc != 0x14A3B4u) { return; }
    }
    ctx->pc = 0x14A3B4u;
    // 0x14a3b4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A3B4u;
    SET_GPR_U32(ctx, 31, 0x14A3BCu);
    ctx->pc = 0x14A3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3B4u;
            // 0x14a3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3BCu; }
        if (ctx->pc != 0x14A3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3BCu; }
        if (ctx->pc != 0x14A3BCu) { return; }
    }
    ctx->pc = 0x14A3BCu;
    // 0x14a3bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a3c0: 0x8c249698  lw          $a0, -0x6968($at)
    ctx->pc = 0x14a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940312)));
    // 0x14a3c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a3c8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A3C8u;
    SET_GPR_U32(ctx, 31, 0x14A3D0u);
    ctx->pc = 0x14A3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3C8u;
            // 0x14a3cc: 0x8c2596d8  lw          $a1, -0x6928($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940376)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3D0u; }
        if (ctx->pc != 0x14A3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3D0u; }
        if (ctx->pc != 0x14A3D0u) { return; }
    }
    ctx->pc = 0x14A3D0u;
    // 0x14a3d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3d8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A3D8u;
    SET_GPR_U32(ctx, 31, 0x14A3E0u);
    ctx->pc = 0x14A3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3D8u;
            // 0x14a3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3E0u; }
        if (ctx->pc != 0x14A3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3E0u; }
        if (ctx->pc != 0x14A3E0u) { return; }
    }
    ctx->pc = 0x14A3E0u;
    // 0x14a3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A3E4u;
    SET_GPR_U32(ctx, 31, 0x14A3ECu);
    ctx->pc = 0x14A3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3E4u;
            // 0x14a3e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3ECu; }
        if (ctx->pc != 0x14A3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3ECu; }
        if (ctx->pc != 0x14A3ECu) { return; }
    }
    ctx->pc = 0x14A3ECu;
    // 0x14a3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A3F0u;
    SET_GPR_U32(ctx, 31, 0x14A3F8u);
    ctx->pc = 0x14A3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3F0u;
            // 0x14a3f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3F8u; }
        if (ctx->pc != 0x14A3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A3F8u; }
        if (ctx->pc != 0x14A3F8u) { return; }
    }
    ctx->pc = 0x14A3F8u;
    // 0x14a3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A3FCu;
    SET_GPR_U32(ctx, 31, 0x14A404u);
    ctx->pc = 0x14A400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3FCu;
            // 0x14a400: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A404u; }
        if (ctx->pc != 0x14A404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A404u; }
        if (ctx->pc != 0x14A404u) { return; }
    }
    ctx->pc = 0x14A404u;
    // 0x14a404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a408: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A408u;
    SET_GPR_U32(ctx, 31, 0x14A410u);
    ctx->pc = 0x14A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A408u;
            // 0x14a40c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A410u; }
        if (ctx->pc != 0x14A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A410u; }
        if (ctx->pc != 0x14A410u) { return; }
    }
    ctx->pc = 0x14A410u;
    // 0x14a410: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a414: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a418: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A418u;
    SET_GPR_U32(ctx, 31, 0x14A420u);
    ctx->pc = 0x14A41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A418u;
            // 0x14a41c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A420u; }
        if (ctx->pc != 0x14A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A420u; }
        if (ctx->pc != 0x14A420u) { return; }
    }
    ctx->pc = 0x14A420u;
    // 0x14a420: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A420u;
    SET_GPR_U32(ctx, 31, 0x14A428u);
    ctx->pc = 0x14A424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A420u;
            // 0x14a424: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A428u; }
        if (ctx->pc != 0x14A428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A428u; }
        if (ctx->pc != 0x14A428u) { return; }
    }
    ctx->pc = 0x14A428u;
    // 0x14a428: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a42c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a430: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A430u;
    SET_GPR_U32(ctx, 31, 0x14A438u);
    ctx->pc = 0x14A434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A430u;
            // 0x14a434: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A438u; }
        if (ctx->pc != 0x14A438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A438u; }
        if (ctx->pc != 0x14A438u) { return; }
    }
    ctx->pc = 0x14A438u;
    // 0x14a438: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a43c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a440: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A440u;
    SET_GPR_U32(ctx, 31, 0x14A448u);
    ctx->pc = 0x14A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A440u;
            // 0x14a444: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A448u; }
        if (ctx->pc != 0x14A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A448u; }
        if (ctx->pc != 0x14A448u) { return; }
    }
    ctx->pc = 0x14A448u;
    // 0x14a448: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a44c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a450: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a458: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a45c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a45cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a460: 0xc060614  jal         func_181850
    ctx->pc = 0x14A460u;
    SET_GPR_U32(ctx, 31, 0x14A468u);
    ctx->pc = 0x14A464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A460u;
            // 0x14a464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A468u; }
        if (ctx->pc != 0x14A468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A468u; }
        if (ctx->pc != 0x14A468u) { return; }
    }
    ctx->pc = 0x14A468u;
    // 0x14a468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a46c: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A46Cu;
    SET_GPR_U32(ctx, 31, 0x14A474u);
    ctx->pc = 0x14A470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A46Cu;
            // 0x14a470: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A474u; }
        if (ctx->pc != 0x14A474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A474u; }
        if (ctx->pc != 0x14A474u) { return; }
    }
    ctx->pc = 0x14A474u;
    // 0x14a474: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a47c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a480: 0xc060604  jal         func_181810
    ctx->pc = 0x14A480u;
    SET_GPR_U32(ctx, 31, 0x14A488u);
    ctx->pc = 0x14A484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A480u;
            // 0x14a484: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A488u; }
        if (ctx->pc != 0x14A488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A488u; }
        if (ctx->pc != 0x14A488u) { return; }
    }
    ctx->pc = 0x14A488u;
    // 0x14a488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a490: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A490u;
    SET_GPR_U32(ctx, 31, 0x14A498u);
    ctx->pc = 0x14A494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A490u;
            // 0x14a494: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A498u; }
        if (ctx->pc != 0x14A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A498u; }
        if (ctx->pc != 0x14A498u) { return; }
    }
    ctx->pc = 0x14A498u;
    // 0x14a498: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a49c: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A49Cu;
    SET_GPR_U32(ctx, 31, 0x14A4A4u);
    ctx->pc = 0x14A4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A49Cu;
            // 0x14a4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4A4u; }
        if (ctx->pc != 0x14A4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4A4u; }
        if (ctx->pc != 0x14A4A4u) { return; }
    }
    ctx->pc = 0x14A4A4u;
    // 0x14a4a4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A4A4u;
    SET_GPR_U32(ctx, 31, 0x14A4ACu);
    ctx->pc = 0x14A4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4A4u;
            // 0x14a4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4ACu; }
        if (ctx->pc != 0x14A4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4ACu; }
        if (ctx->pc != 0x14A4ACu) { return; }
    }
    ctx->pc = 0x14A4ACu;
    // 0x14a4ac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a4b0: 0x8c24969c  lw          $a0, -0x6964($at)
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940316)));
    // 0x14a4b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a4b8: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A4B8u;
    SET_GPR_U32(ctx, 31, 0x14A4C0u);
    ctx->pc = 0x14A4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4B8u;
            // 0x14a4bc: 0x8c2596dc  lw          $a1, -0x6924($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4C0u; }
        if (ctx->pc != 0x14A4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4C0u; }
        if (ctx->pc != 0x14A4C0u) { return; }
    }
    ctx->pc = 0x14A4C0u;
    // 0x14a4c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A4C8u;
    SET_GPR_U32(ctx, 31, 0x14A4D0u);
    ctx->pc = 0x14A4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4C8u;
            // 0x14a4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4D0u; }
        if (ctx->pc != 0x14A4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4D0u; }
        if (ctx->pc != 0x14A4D0u) { return; }
    }
    ctx->pc = 0x14A4D0u;
    // 0x14a4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4d4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A4D4u;
    SET_GPR_U32(ctx, 31, 0x14A4DCu);
    ctx->pc = 0x14A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4D4u;
            // 0x14a4d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4DCu; }
        if (ctx->pc != 0x14A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4DCu; }
        if (ctx->pc != 0x14A4DCu) { return; }
    }
    ctx->pc = 0x14A4DCu;
    // 0x14a4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4E0u;
            // 0x14a4e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4E8u; }
        if (ctx->pc != 0x14A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4E8u; }
        if (ctx->pc != 0x14A4E8u) { return; }
    }
    ctx->pc = 0x14A4E8u;
    // 0x14a4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A4ECu;
    SET_GPR_U32(ctx, 31, 0x14A4F4u);
    ctx->pc = 0x14A4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4ECu;
            // 0x14a4f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4F4u; }
        if (ctx->pc != 0x14A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4F4u; }
        if (ctx->pc != 0x14A4F4u) { return; }
    }
    ctx->pc = 0x14A4F4u;
    // 0x14a4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A4F8u;
    SET_GPR_U32(ctx, 31, 0x14A500u);
    ctx->pc = 0x14A4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4F8u;
            // 0x14a4fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A500u; }
        if (ctx->pc != 0x14A500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A500u; }
        if (ctx->pc != 0x14A500u) { return; }
    }
    ctx->pc = 0x14A500u;
    // 0x14a500: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a504: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a508: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A508u;
    SET_GPR_U32(ctx, 31, 0x14A510u);
    ctx->pc = 0x14A50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A508u;
            // 0x14a50c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A510u; }
        if (ctx->pc != 0x14A510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A510u; }
        if (ctx->pc != 0x14A510u) { return; }
    }
    ctx->pc = 0x14A510u;
    // 0x14a510: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A510u;
    SET_GPR_U32(ctx, 31, 0x14A518u);
    ctx->pc = 0x14A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A510u;
            // 0x14a514: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A518u; }
        if (ctx->pc != 0x14A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A518u; }
        if (ctx->pc != 0x14A518u) { return; }
    }
    ctx->pc = 0x14A518u;
    // 0x14a518: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a51c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a520: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A520u;
    SET_GPR_U32(ctx, 31, 0x14A528u);
    ctx->pc = 0x14A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A520u;
            // 0x14a524: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A528u; }
        if (ctx->pc != 0x14A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A528u; }
        if (ctx->pc != 0x14A528u) { return; }
    }
    ctx->pc = 0x14A528u;
    // 0x14a528: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a52c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a530: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A530u;
    SET_GPR_U32(ctx, 31, 0x14A538u);
    ctx->pc = 0x14A534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A530u;
            // 0x14a534: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A538u; }
        if (ctx->pc != 0x14A538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A538u; }
        if (ctx->pc != 0x14A538u) { return; }
    }
    ctx->pc = 0x14A538u;
    // 0x14a538: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a53c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a540: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a548: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a54c: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a54cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a550: 0xc060614  jal         func_181850
    ctx->pc = 0x14A550u;
    SET_GPR_U32(ctx, 31, 0x14A558u);
    ctx->pc = 0x14A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A550u;
            // 0x14a554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A558u; }
        if (ctx->pc != 0x14A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A558u; }
        if (ctx->pc != 0x14A558u) { return; }
    }
    ctx->pc = 0x14A558u;
    // 0x14a558: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A558u;
    SET_GPR_U32(ctx, 31, 0x14A560u);
    ctx->pc = 0x14A55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A558u;
            // 0x14a55c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A560u; }
        if (ctx->pc != 0x14A560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A560u; }
        if (ctx->pc != 0x14A560u) { return; }
    }
    ctx->pc = 0x14A560u;
    // 0x14a560: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a564: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x14a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x14a568: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A568u;
    SET_GPR_U32(ctx, 31, 0x14A570u);
    ctx->pc = 0x14A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A568u;
            // 0x14a56c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A570u; }
        if (ctx->pc != 0x14A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A570u; }
        if (ctx->pc != 0x14A570u) { return; }
    }
    ctx->pc = 0x14A570u;
    // 0x14a570: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a574: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x14a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14a578: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A578u;
    SET_GPR_U32(ctx, 31, 0x14A580u);
    ctx->pc = 0x14A57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A578u;
            // 0x14a57c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A580u; }
        if (ctx->pc != 0x14A580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A580u; }
        if (ctx->pc != 0x14A580u) { return; }
    }
    ctx->pc = 0x14A580u;
    // 0x14a580: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a584: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a588: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a590: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a594: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a598: 0xc060614  jal         func_181850
    ctx->pc = 0x14A598u;
    SET_GPR_U32(ctx, 31, 0x14A5A0u);
    ctx->pc = 0x14A59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A598u;
            // 0x14a59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5A0u; }
        if (ctx->pc != 0x14A5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5A0u; }
        if (ctx->pc != 0x14A5A0u) { return; }
    }
    ctx->pc = 0x14A5A0u;
    // 0x14a5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5a4: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A5A4u;
    SET_GPR_U32(ctx, 31, 0x14A5ACu);
    ctx->pc = 0x14A5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5A4u;
            // 0x14a5a8: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5ACu; }
        if (ctx->pc != 0x14A5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5ACu; }
        if (ctx->pc != 0x14A5ACu) { return; }
    }
    ctx->pc = 0x14A5ACu;
    // 0x14a5ac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a5acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a5b8: 0xc060604  jal         func_181810
    ctx->pc = 0x14A5B8u;
    SET_GPR_U32(ctx, 31, 0x14A5C0u);
    ctx->pc = 0x14A5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5B8u;
            // 0x14a5bc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5C0u; }
        if (ctx->pc != 0x14A5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5C0u; }
        if (ctx->pc != 0x14A5C0u) { return; }
    }
    ctx->pc = 0x14A5C0u;
    // 0x14a5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5c8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A5C8u;
    SET_GPR_U32(ctx, 31, 0x14A5D0u);
    ctx->pc = 0x14A5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5C8u;
            // 0x14a5cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5D0u; }
        if (ctx->pc != 0x14A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5D0u; }
        if (ctx->pc != 0x14A5D0u) { return; }
    }
    ctx->pc = 0x14A5D0u;
    // 0x14a5d0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a5d4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A5D4u;
    SET_GPR_U32(ctx, 31, 0x14A5DCu);
    ctx->pc = 0x14A5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5D4u;
            // 0x14a5d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5DCu; }
        if (ctx->pc != 0x14A5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5DCu; }
        if (ctx->pc != 0x14A5DCu) { return; }
    }
    ctx->pc = 0x14A5DCu;
    // 0x14a5dc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A5DCu;
    SET_GPR_U32(ctx, 31, 0x14A5E4u);
    ctx->pc = 0x14A5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5DCu;
            // 0x14a5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5E4u; }
        if (ctx->pc != 0x14A5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5E4u; }
        if (ctx->pc != 0x14A5E4u) { return; }
    }
    ctx->pc = 0x14A5E4u;
    // 0x14a5e4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a5e8: 0x8c2496a0  lw          $a0, -0x6960($at)
    ctx->pc = 0x14a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940320)));
    // 0x14a5ec: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a5f0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A5F0u;
    SET_GPR_U32(ctx, 31, 0x14A5F8u);
    ctx->pc = 0x14A5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5F0u;
            // 0x14a5f4: 0x8c2596e0  lw          $a1, -0x6920($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940384)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5F8u; }
        if (ctx->pc != 0x14A5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A5F8u; }
        if (ctx->pc != 0x14A5F8u) { return; }
    }
    ctx->pc = 0x14A5F8u;
    // 0x14a5f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a600: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A600u;
    SET_GPR_U32(ctx, 31, 0x14A608u);
    ctx->pc = 0x14A604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A600u;
            // 0x14a604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A608u; }
        if (ctx->pc != 0x14A608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A608u; }
        if (ctx->pc != 0x14A608u) { return; }
    }
    ctx->pc = 0x14A608u;
    // 0x14a608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a60c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A60Cu;
    SET_GPR_U32(ctx, 31, 0x14A614u);
    ctx->pc = 0x14A610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A60Cu;
            // 0x14a610: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A614u; }
        if (ctx->pc != 0x14A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A614u; }
        if (ctx->pc != 0x14A614u) { return; }
    }
    ctx->pc = 0x14A614u;
    // 0x14a614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a618: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A618u;
    SET_GPR_U32(ctx, 31, 0x14A620u);
    ctx->pc = 0x14A61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A618u;
            // 0x14a61c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A620u; }
        if (ctx->pc != 0x14A620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A620u; }
        if (ctx->pc != 0x14A620u) { return; }
    }
    ctx->pc = 0x14A620u;
    // 0x14a620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a624: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A624u;
    SET_GPR_U32(ctx, 31, 0x14A62Cu);
    ctx->pc = 0x14A628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A624u;
            // 0x14a628: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A62Cu; }
        if (ctx->pc != 0x14A62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A62Cu; }
        if (ctx->pc != 0x14A62Cu) { return; }
    }
    ctx->pc = 0x14A62Cu;
    // 0x14a62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a630: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A630u;
    SET_GPR_U32(ctx, 31, 0x14A638u);
    ctx->pc = 0x14A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A630u;
            // 0x14a634: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A638u; }
        if (ctx->pc != 0x14A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A638u; }
        if (ctx->pc != 0x14A638u) { return; }
    }
    ctx->pc = 0x14A638u;
    // 0x14a638: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a63c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a640: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A640u;
    SET_GPR_U32(ctx, 31, 0x14A648u);
    ctx->pc = 0x14A644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A640u;
            // 0x14a644: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A648u; }
        if (ctx->pc != 0x14A648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A648u; }
        if (ctx->pc != 0x14A648u) { return; }
    }
    ctx->pc = 0x14A648u;
    // 0x14a648: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x14A648u;
    SET_GPR_U32(ctx, 31, 0x14A650u);
    ctx->pc = 0x14A64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A648u;
            // 0x14a64c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A650u; }
        if (ctx->pc != 0x14A650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A650u; }
        if (ctx->pc != 0x14A650u) { return; }
    }
    ctx->pc = 0x14A650u;
    // 0x14a650: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a654: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a658: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x14A658u;
    SET_GPR_U32(ctx, 31, 0x14A660u);
    ctx->pc = 0x14A65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A658u;
            // 0x14a65c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A660u; }
        if (ctx->pc != 0x14A660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A660u; }
        if (ctx->pc != 0x14A660u) { return; }
    }
    ctx->pc = 0x14A660u;
    // 0x14a660: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a664: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14a664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14a668: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A668u;
    SET_GPR_U32(ctx, 31, 0x14A670u);
    ctx->pc = 0x14A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A668u;
            // 0x14a66c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A670u; }
        if (ctx->pc != 0x14A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A670u; }
        if (ctx->pc != 0x14A670u) { return; }
    }
    ctx->pc = 0x14A670u;
    // 0x14a670: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a678: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a678u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a680: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a684: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a684u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a688: 0xc060614  jal         func_181850
    ctx->pc = 0x14A688u;
    SET_GPR_U32(ctx, 31, 0x14A690u);
    ctx->pc = 0x14A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A688u;
            // 0x14a68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A690u; }
        if (ctx->pc != 0x14A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A690u; }
        if (ctx->pc != 0x14A690u) { return; }
    }
    ctx->pc = 0x14A690u;
    // 0x14a690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a694: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A694u;
    SET_GPR_U32(ctx, 31, 0x14A69Cu);
    ctx->pc = 0x14A698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A694u;
            // 0x14a698: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A69Cu; }
        if (ctx->pc != 0x14A69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A69Cu; }
        if (ctx->pc != 0x14A69Cu) { return; }
    }
    ctx->pc = 0x14A69Cu;
    // 0x14a69c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a6a8: 0xc060604  jal         func_181810
    ctx->pc = 0x14A6A8u;
    SET_GPR_U32(ctx, 31, 0x14A6B0u);
    ctx->pc = 0x14A6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6A8u;
            // 0x14a6ac: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6B0u; }
        if (ctx->pc != 0x14A6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6B0u; }
        if (ctx->pc != 0x14A6B0u) { return; }
    }
    ctx->pc = 0x14A6B0u;
    // 0x14a6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6b8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A6B8u;
    SET_GPR_U32(ctx, 31, 0x14A6C0u);
    ctx->pc = 0x14A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6B8u;
            // 0x14a6bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6C0u; }
        if (ctx->pc != 0x14A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6C0u; }
        if (ctx->pc != 0x14A6C0u) { return; }
    }
    ctx->pc = 0x14A6C0u;
    // 0x14a6c0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a6c4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A6C4u;
    SET_GPR_U32(ctx, 31, 0x14A6CCu);
    ctx->pc = 0x14A6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6C4u;
            // 0x14a6c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6CCu; }
        if (ctx->pc != 0x14A6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6CCu; }
        if (ctx->pc != 0x14A6CCu) { return; }
    }
    ctx->pc = 0x14A6CCu;
    // 0x14a6cc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A6CCu;
    SET_GPR_U32(ctx, 31, 0x14A6D4u);
    ctx->pc = 0x14A6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6CCu;
            // 0x14a6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6D4u; }
        if (ctx->pc != 0x14A6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6D4u; }
        if (ctx->pc != 0x14A6D4u) { return; }
    }
    ctx->pc = 0x14A6D4u;
    // 0x14a6d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a6d8: 0x8c2496a4  lw          $a0, -0x695C($at)
    ctx->pc = 0x14a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940324)));
    // 0x14a6dc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a6e0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A6E0u;
    SET_GPR_U32(ctx, 31, 0x14A6E8u);
    ctx->pc = 0x14A6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6E0u;
            // 0x14a6e4: 0x8c2596e4  lw          $a1, -0x691C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6E8u; }
        if (ctx->pc != 0x14A6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6E8u; }
        if (ctx->pc != 0x14A6E8u) { return; }
    }
    ctx->pc = 0x14A6E8u;
    // 0x14a6e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A6F0u;
    SET_GPR_U32(ctx, 31, 0x14A6F8u);
    ctx->pc = 0x14A6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6F0u;
            // 0x14a6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6F8u; }
        if (ctx->pc != 0x14A6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6F8u; }
        if (ctx->pc != 0x14A6F8u) { return; }
    }
    ctx->pc = 0x14A6F8u;
    // 0x14a6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6fc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A6FCu;
    SET_GPR_U32(ctx, 31, 0x14A704u);
    ctx->pc = 0x14A700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6FCu;
            // 0x14a700: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A704u; }
        if (ctx->pc != 0x14A704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A704u; }
        if (ctx->pc != 0x14A704u) { return; }
    }
    ctx->pc = 0x14A704u;
    // 0x14a704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a708: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A708u;
    SET_GPR_U32(ctx, 31, 0x14A710u);
    ctx->pc = 0x14A70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A708u;
            // 0x14a70c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A710u; }
        if (ctx->pc != 0x14A710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A710u; }
        if (ctx->pc != 0x14A710u) { return; }
    }
    ctx->pc = 0x14A710u;
    // 0x14a710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a714: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A714u;
    SET_GPR_U32(ctx, 31, 0x14A71Cu);
    ctx->pc = 0x14A718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A714u;
            // 0x14a718: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A71Cu; }
        if (ctx->pc != 0x14A71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A71Cu; }
        if (ctx->pc != 0x14A71Cu) { return; }
    }
    ctx->pc = 0x14A71Cu;
    // 0x14a71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a720: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A720u;
    SET_GPR_U32(ctx, 31, 0x14A728u);
    ctx->pc = 0x14A724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A720u;
            // 0x14a724: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A728u; }
        if (ctx->pc != 0x14A728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A728u; }
        if (ctx->pc != 0x14A728u) { return; }
    }
    ctx->pc = 0x14A728u;
    // 0x14a728: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a72c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a730: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A730u;
    SET_GPR_U32(ctx, 31, 0x14A738u);
    ctx->pc = 0x14A734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A730u;
            // 0x14a734: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A738u; }
        if (ctx->pc != 0x14A738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A738u; }
        if (ctx->pc != 0x14A738u) { return; }
    }
    ctx->pc = 0x14A738u;
    // 0x14a738: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A738u;
    SET_GPR_U32(ctx, 31, 0x14A740u);
    ctx->pc = 0x14A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A738u;
            // 0x14a73c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A740u; }
        if (ctx->pc != 0x14A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A740u; }
        if (ctx->pc != 0x14A740u) { return; }
    }
    ctx->pc = 0x14A740u;
    // 0x14a740: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a744: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14a744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14a748: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A748u;
    SET_GPR_U32(ctx, 31, 0x14A750u);
    ctx->pc = 0x14A74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A748u;
            // 0x14a74c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A750u; }
        if (ctx->pc != 0x14A750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A750u; }
        if (ctx->pc != 0x14A750u) { return; }
    }
    ctx->pc = 0x14A750u;
    // 0x14a750: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a754: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14a758: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A758u;
    SET_GPR_U32(ctx, 31, 0x14A760u);
    ctx->pc = 0x14A75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A758u;
            // 0x14a75c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A760u; }
        if (ctx->pc != 0x14A760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A760u; }
        if (ctx->pc != 0x14A760u) { return; }
    }
    ctx->pc = 0x14A760u;
    // 0x14a760: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a764: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a768: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a770: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a774: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a778: 0xc060614  jal         func_181850
    ctx->pc = 0x14A778u;
    SET_GPR_U32(ctx, 31, 0x14A780u);
    ctx->pc = 0x14A77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A778u;
            // 0x14a77c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A780u; }
        if (ctx->pc != 0x14A780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A780u; }
        if (ctx->pc != 0x14A780u) { return; }
    }
    ctx->pc = 0x14A780u;
    // 0x14a780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a784: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A784u;
    SET_GPR_U32(ctx, 31, 0x14A78Cu);
    ctx->pc = 0x14A788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A784u;
            // 0x14a788: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A78Cu; }
        if (ctx->pc != 0x14A78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A78Cu; }
        if (ctx->pc != 0x14A78Cu) { return; }
    }
    ctx->pc = 0x14A78Cu;
    // 0x14a78c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a78cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a798: 0xc060604  jal         func_181810
    ctx->pc = 0x14A798u;
    SET_GPR_U32(ctx, 31, 0x14A7A0u);
    ctx->pc = 0x14A79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A798u;
            // 0x14a79c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7A0u; }
        if (ctx->pc != 0x14A7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7A0u; }
        if (ctx->pc != 0x14A7A0u) { return; }
    }
    ctx->pc = 0x14A7A0u;
    // 0x14a7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7a8: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A7A8u;
    SET_GPR_U32(ctx, 31, 0x14A7B0u);
    ctx->pc = 0x14A7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7A8u;
            // 0x14a7ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7B0u; }
        if (ctx->pc != 0x14A7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7B0u; }
        if (ctx->pc != 0x14A7B0u) { return; }
    }
    ctx->pc = 0x14A7B0u;
    // 0x14a7b0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a7b4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A7B4u;
    SET_GPR_U32(ctx, 31, 0x14A7BCu);
    ctx->pc = 0x14A7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7B4u;
            // 0x14a7b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7BCu; }
        if (ctx->pc != 0x14A7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7BCu; }
        if (ctx->pc != 0x14A7BCu) { return; }
    }
    ctx->pc = 0x14A7BCu;
    // 0x14a7bc: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A7BCu;
    SET_GPR_U32(ctx, 31, 0x14A7C4u);
    ctx->pc = 0x14A7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7BCu;
            // 0x14a7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7C4u; }
        if (ctx->pc != 0x14A7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7C4u; }
        if (ctx->pc != 0x14A7C4u) { return; }
    }
    ctx->pc = 0x14A7C4u;
    // 0x14a7c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a7c8: 0x8c2496a8  lw          $a0, -0x6958($at)
    ctx->pc = 0x14a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940328)));
    // 0x14a7cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a7d0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A7D0u;
    SET_GPR_U32(ctx, 31, 0x14A7D8u);
    ctx->pc = 0x14A7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7D0u;
            // 0x14a7d4: 0x8c2596e8  lw          $a1, -0x6918($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7D8u; }
        if (ctx->pc != 0x14A7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7D8u; }
        if (ctx->pc != 0x14A7D8u) { return; }
    }
    ctx->pc = 0x14A7D8u;
    // 0x14a7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7e0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A7E0u;
    SET_GPR_U32(ctx, 31, 0x14A7E8u);
    ctx->pc = 0x14A7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7E0u;
            // 0x14a7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E8u; }
        if (ctx->pc != 0x14A7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7E8u; }
        if (ctx->pc != 0x14A7E8u) { return; }
    }
    ctx->pc = 0x14A7E8u;
    // 0x14a7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7ec: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A7ECu;
    SET_GPR_U32(ctx, 31, 0x14A7F4u);
    ctx->pc = 0x14A7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7ECu;
            // 0x14a7f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7F4u; }
        if (ctx->pc != 0x14A7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A7F4u; }
        if (ctx->pc != 0x14A7F4u) { return; }
    }
    ctx->pc = 0x14A7F4u;
    // 0x14a7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a7f8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A7F8u;
    SET_GPR_U32(ctx, 31, 0x14A800u);
    ctx->pc = 0x14A7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7F8u;
            // 0x14a7fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A800u; }
        if (ctx->pc != 0x14A800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A800u; }
        if (ctx->pc != 0x14A800u) { return; }
    }
    ctx->pc = 0x14A800u;
    // 0x14a800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a804: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A804u;
    SET_GPR_U32(ctx, 31, 0x14A80Cu);
    ctx->pc = 0x14A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A804u;
            // 0x14a808: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A80Cu; }
        if (ctx->pc != 0x14A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A80Cu; }
        if (ctx->pc != 0x14A80Cu) { return; }
    }
    ctx->pc = 0x14A80Cu;
    // 0x14a80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a810: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A810u;
    SET_GPR_U32(ctx, 31, 0x14A818u);
    ctx->pc = 0x14A814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A810u;
            // 0x14a814: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A818u; }
        if (ctx->pc != 0x14A818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A818u; }
        if (ctx->pc != 0x14A818u) { return; }
    }
    ctx->pc = 0x14A818u;
    // 0x14a818: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a81c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a820: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A820u;
    SET_GPR_U32(ctx, 31, 0x14A828u);
    ctx->pc = 0x14A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A820u;
            // 0x14a824: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A828u; }
        if (ctx->pc != 0x14A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A828u; }
        if (ctx->pc != 0x14A828u) { return; }
    }
    ctx->pc = 0x14A828u;
    // 0x14a828: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A828u;
    SET_GPR_U32(ctx, 31, 0x14A830u);
    ctx->pc = 0x14A82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A828u;
            // 0x14a82c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A830u; }
        if (ctx->pc != 0x14A830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A830u; }
        if (ctx->pc != 0x14A830u) { return; }
    }
    ctx->pc = 0x14A830u;
    // 0x14a830: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a834: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14a838: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A838u;
    SET_GPR_U32(ctx, 31, 0x14A840u);
    ctx->pc = 0x14A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A838u;
            // 0x14a83c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A840u; }
        if (ctx->pc != 0x14A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A840u; }
        if (ctx->pc != 0x14A840u) { return; }
    }
    ctx->pc = 0x14A840u;
    // 0x14a840: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a844: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14a848: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A848u;
    SET_GPR_U32(ctx, 31, 0x14A850u);
    ctx->pc = 0x14A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A848u;
            // 0x14a84c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A850u; }
        if (ctx->pc != 0x14A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A850u; }
        if (ctx->pc != 0x14A850u) { return; }
    }
    ctx->pc = 0x14A850u;
    // 0x14a850: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a854: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a858: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a860: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a864: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a868: 0xc060614  jal         func_181850
    ctx->pc = 0x14A868u;
    SET_GPR_U32(ctx, 31, 0x14A870u);
    ctx->pc = 0x14A86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A868u;
            // 0x14a86c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A870u; }
        if (ctx->pc != 0x14A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A870u; }
        if (ctx->pc != 0x14A870u) { return; }
    }
    ctx->pc = 0x14A870u;
    // 0x14a870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a874: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A874u;
    SET_GPR_U32(ctx, 31, 0x14A87Cu);
    ctx->pc = 0x14A878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A874u;
            // 0x14a878: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A87Cu; }
        if (ctx->pc != 0x14A87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A87Cu; }
        if (ctx->pc != 0x14A87Cu) { return; }
    }
    ctx->pc = 0x14A87Cu;
    // 0x14a87c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a884: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a888: 0xc060604  jal         func_181810
    ctx->pc = 0x14A888u;
    SET_GPR_U32(ctx, 31, 0x14A890u);
    ctx->pc = 0x14A88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A888u;
            // 0x14a88c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A890u; }
        if (ctx->pc != 0x14A890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A890u; }
        if (ctx->pc != 0x14A890u) { return; }
    }
    ctx->pc = 0x14A890u;
    // 0x14a890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a898: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A898u;
    SET_GPR_U32(ctx, 31, 0x14A8A0u);
    ctx->pc = 0x14A89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A898u;
            // 0x14a89c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8A0u; }
        if (ctx->pc != 0x14A8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8A0u; }
        if (ctx->pc != 0x14A8A0u) { return; }
    }
    ctx->pc = 0x14A8A0u;
    // 0x14a8a0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a8a4: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A8A4u;
    SET_GPR_U32(ctx, 31, 0x14A8ACu);
    ctx->pc = 0x14A8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8A4u;
            // 0x14a8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8ACu; }
        if (ctx->pc != 0x14A8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8ACu; }
        if (ctx->pc != 0x14A8ACu) { return; }
    }
    ctx->pc = 0x14A8ACu;
    // 0x14a8ac: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A8ACu;
    SET_GPR_U32(ctx, 31, 0x14A8B4u);
    ctx->pc = 0x14A8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8ACu;
            // 0x14a8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8B4u; }
        if (ctx->pc != 0x14A8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8B4u; }
        if (ctx->pc != 0x14A8B4u) { return; }
    }
    ctx->pc = 0x14A8B4u;
    // 0x14a8b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a8b8: 0x8c2496ac  lw          $a0, -0x6954($at)
    ctx->pc = 0x14a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940332)));
    // 0x14a8bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a8c0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A8C0u;
    SET_GPR_U32(ctx, 31, 0x14A8C8u);
    ctx->pc = 0x14A8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8C0u;
            // 0x14a8c4: 0x8c2596ec  lw          $a1, -0x6914($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8C8u; }
        if (ctx->pc != 0x14A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8C8u; }
        if (ctx->pc != 0x14A8C8u) { return; }
    }
    ctx->pc = 0x14A8C8u;
    // 0x14a8c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8d0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A8D0u;
    SET_GPR_U32(ctx, 31, 0x14A8D8u);
    ctx->pc = 0x14A8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8D0u;
            // 0x14a8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D8u; }
        if (ctx->pc != 0x14A8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8D8u; }
        if (ctx->pc != 0x14A8D8u) { return; }
    }
    ctx->pc = 0x14A8D8u;
    // 0x14a8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8dc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A8DCu;
    SET_GPR_U32(ctx, 31, 0x14A8E4u);
    ctx->pc = 0x14A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8DCu;
            // 0x14a8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8E4u; }
        if (ctx->pc != 0x14A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8E4u; }
        if (ctx->pc != 0x14A8E4u) { return; }
    }
    ctx->pc = 0x14A8E4u;
    // 0x14a8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8e8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A8E8u;
    SET_GPR_U32(ctx, 31, 0x14A8F0u);
    ctx->pc = 0x14A8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8E8u;
            // 0x14a8ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8F0u; }
        if (ctx->pc != 0x14A8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8F0u; }
        if (ctx->pc != 0x14A8F0u) { return; }
    }
    ctx->pc = 0x14A8F0u;
    // 0x14a8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8f4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A8F4u;
    SET_GPR_U32(ctx, 31, 0x14A8FCu);
    ctx->pc = 0x14A8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A8F4u;
            // 0x14a8f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8FCu; }
        if (ctx->pc != 0x14A8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A8FCu; }
        if (ctx->pc != 0x14A8FCu) { return; }
    }
    ctx->pc = 0x14A8FCu;
    // 0x14a8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a900: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A900u;
    SET_GPR_U32(ctx, 31, 0x14A908u);
    ctx->pc = 0x14A904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A900u;
            // 0x14a904: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A908u; }
        if (ctx->pc != 0x14A908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A908u; }
        if (ctx->pc != 0x14A908u) { return; }
    }
    ctx->pc = 0x14A908u;
    // 0x14a908: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a90c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14a910: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14A910u;
    SET_GPR_U32(ctx, 31, 0x14A918u);
    ctx->pc = 0x14A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A910u;
            // 0x14a914: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A918u; }
        if (ctx->pc != 0x14A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A918u; }
        if (ctx->pc != 0x14A918u) { return; }
    }
    ctx->pc = 0x14A918u;
    // 0x14a918: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14A918u;
    SET_GPR_U32(ctx, 31, 0x14A920u);
    ctx->pc = 0x14A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A918u;
            // 0x14a91c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A920u; }
        if (ctx->pc != 0x14A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A920u; }
        if (ctx->pc != 0x14A920u) { return; }
    }
    ctx->pc = 0x14A920u;
    // 0x14a920: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a924: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14a924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14a928: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14A928u;
    SET_GPR_U32(ctx, 31, 0x14A930u);
    ctx->pc = 0x14A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A928u;
            // 0x14a92c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A930u; }
        if (ctx->pc != 0x14A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A930u; }
        if (ctx->pc != 0x14A930u) { return; }
    }
    ctx->pc = 0x14A930u;
    // 0x14a930: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a934: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14a934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14a938: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14A938u;
    SET_GPR_U32(ctx, 31, 0x14A940u);
    ctx->pc = 0x14A93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A938u;
            // 0x14a93c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A940u; }
        if (ctx->pc != 0x14A940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A940u; }
        if (ctx->pc != 0x14A940u) { return; }
    }
    ctx->pc = 0x14A940u;
    // 0x14a940: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a944: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a948: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14a948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14a94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a950: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14a954: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14a954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14a958: 0xc060614  jal         func_181850
    ctx->pc = 0x14A958u;
    SET_GPR_U32(ctx, 31, 0x14A960u);
    ctx->pc = 0x14A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A958u;
            // 0x14a95c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A960u; }
        if (ctx->pc != 0x14A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A960u; }
        if (ctx->pc != 0x14A960u) { return; }
    }
    ctx->pc = 0x14A960u;
    // 0x14a960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a964: 0xc06060c  jal         func_181830
    ctx->pc = 0x14A964u;
    SET_GPR_U32(ctx, 31, 0x14A96Cu);
    ctx->pc = 0x14A968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A964u;
            // 0x14a968: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A96Cu; }
        if (ctx->pc != 0x14A96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A96Cu; }
        if (ctx->pc != 0x14A96Cu) { return; }
    }
    ctx->pc = 0x14A96Cu;
    // 0x14a96c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14a96cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14a970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a974: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a978: 0xc060604  jal         func_181810
    ctx->pc = 0x14A978u;
    SET_GPR_U32(ctx, 31, 0x14A980u);
    ctx->pc = 0x14A97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A978u;
            // 0x14a97c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A980u; }
        if (ctx->pc != 0x14A980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A980u; }
        if (ctx->pc != 0x14A980u) { return; }
    }
    ctx->pc = 0x14A980u;
    // 0x14a980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a988: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14A988u;
    SET_GPR_U32(ctx, 31, 0x14A990u);
    ctx->pc = 0x14A98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A988u;
            // 0x14a98c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A990u; }
        if (ctx->pc != 0x14A990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A990u; }
        if (ctx->pc != 0x14A990u) { return; }
    }
    ctx->pc = 0x14A990u;
    // 0x14a990: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14a990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14a994: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14A994u;
    SET_GPR_U32(ctx, 31, 0x14A99Cu);
    ctx->pc = 0x14A998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A994u;
            // 0x14a998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A99Cu; }
        if (ctx->pc != 0x14A99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A99Cu; }
        if (ctx->pc != 0x14A99Cu) { return; }
    }
    ctx->pc = 0x14A99Cu;
    // 0x14a99c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14A99Cu;
    SET_GPR_U32(ctx, 31, 0x14A9A4u);
    ctx->pc = 0x14A9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A99Cu;
            // 0x14a9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9A4u; }
        if (ctx->pc != 0x14A9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9A4u; }
        if (ctx->pc != 0x14A9A4u) { return; }
    }
    ctx->pc = 0x14A9A4u;
    // 0x14a9a4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a9a8: 0x8c2496b0  lw          $a0, -0x6950($at)
    ctx->pc = 0x14a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940336)));
    // 0x14a9ac: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14a9b0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x14A9B0u;
    SET_GPR_U32(ctx, 31, 0x14A9B8u);
    ctx->pc = 0x14A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9B0u;
            // 0x14a9b4: 0x8c2596f0  lw          $a1, -0x6910($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9B8u; }
        if (ctx->pc != 0x14A9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9B8u; }
        if (ctx->pc != 0x14A9B8u) { return; }
    }
    ctx->pc = 0x14A9B8u;
    // 0x14a9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9c0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A9C0u;
    SET_GPR_U32(ctx, 31, 0x14A9C8u);
    ctx->pc = 0x14A9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9C0u;
            // 0x14a9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9C8u; }
        if (ctx->pc != 0x14A9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9C8u; }
        if (ctx->pc != 0x14A9C8u) { return; }
    }
    ctx->pc = 0x14A9C8u;
    // 0x14a9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9cc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A9CCu;
    SET_GPR_U32(ctx, 31, 0x14A9D4u);
    ctx->pc = 0x14A9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9CCu;
            // 0x14a9d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9D4u; }
        if (ctx->pc != 0x14A9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9D4u; }
        if (ctx->pc != 0x14A9D4u) { return; }
    }
    ctx->pc = 0x14A9D4u;
    // 0x14a9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9d8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A9D8u;
    SET_GPR_U32(ctx, 31, 0x14A9E0u);
    ctx->pc = 0x14A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9D8u;
            // 0x14a9dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9E0u; }
        if (ctx->pc != 0x14A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9E0u; }
        if (ctx->pc != 0x14A9E0u) { return; }
    }
    ctx->pc = 0x14A9E0u;
    // 0x14a9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A9E4u;
    SET_GPR_U32(ctx, 31, 0x14A9ECu);
    ctx->pc = 0x14A9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9E4u;
            // 0x14a9e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9ECu; }
        if (ctx->pc != 0x14A9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9ECu; }
        if (ctx->pc != 0x14A9ECu) { return; }
    }
    ctx->pc = 0x14A9ECu;
    // 0x14a9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a9f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x14A9F0u;
    SET_GPR_U32(ctx, 31, 0x14A9F8u);
    ctx->pc = 0x14A9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A9F0u;
            // 0x14a9f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9F8u; }
        if (ctx->pc != 0x14A9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A9F8u; }
        if (ctx->pc != 0x14A9F8u) { return; }
    }
    ctx->pc = 0x14A9F8u;
    // 0x14a9f8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x14a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x14a9fc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x14a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x14aa00: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14AA00u;
    SET_GPR_U32(ctx, 31, 0x14AA08u);
    ctx->pc = 0x14AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA00u;
            // 0x14aa04: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA08u; }
        if (ctx->pc != 0x14AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA08u; }
        if (ctx->pc != 0x14AA08u) { return; }
    }
    ctx->pc = 0x14AA08u;
    // 0x14aa08: 0xc0503d8  jal         func_140F60
    ctx->pc = 0x14AA08u;
    SET_GPR_U32(ctx, 31, 0x14AA10u);
    ctx->pc = 0x14AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA08u;
            // 0x14aa0c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F60u;
    if (runtime->hasFunction(0x140F60u)) {
        auto targetFn = runtime->lookupFunction(0x140F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA10u; }
        if (ctx->pc != 0x14AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl256x256_0x140f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA10u; }
        if (ctx->pc != 0x14AA10u) { return; }
    }
    ctx->pc = 0x14AA10u;
    // 0x14aa10: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14aa14: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14aa18: 0xc0503c0  jal         func_140F00
    ctx->pc = 0x14AA18u;
    SET_GPR_U32(ctx, 31, 0x14AA20u);
    ctx->pc = 0x14AA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA18u;
            // 0x14aa1c: 0xac229d18  sw          $v0, -0x62E8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941976), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F00u;
    if (runtime->hasFunction(0x140F00u)) {
        auto targetFn = runtime->lookupFunction(0x140F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA20u; }
        if (ctx->pc != 0x14AA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl256x256_0x140f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA20u; }
        if (ctx->pc != 0x14AA20u) { return; }
    }
    ctx->pc = 0x14AA20u;
    // 0x14aa20: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14aa24: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x14aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14aa28: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AA28u;
    SET_GPR_U32(ctx, 31, 0x14AA30u);
    ctx->pc = 0x14AA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA28u;
            // 0x14aa2c: 0xac229d1c  sw          $v0, -0x62E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294941980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA30u; }
        if (ctx->pc != 0x14AA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA30u; }
        if (ctx->pc != 0x14AA30u) { return; }
    }
    ctx->pc = 0x14AA30u;
    // 0x14aa30: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14aa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14aa34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14aa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa38: 0x8c279d18  lw          $a3, -0x62E8($at)
    ctx->pc = 0x14aa38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941976)));
    // 0x14aa3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14aa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14aa44: 0x8c289d1c  lw          $t0, -0x62E4($at)
    ctx->pc = 0x14aa44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941980)));
    // 0x14aa48: 0xc060614  jal         func_181850
    ctx->pc = 0x14AA48u;
    SET_GPR_U32(ctx, 31, 0x14AA50u);
    ctx->pc = 0x14AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA48u;
            // 0x14aa4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA50u; }
        if (ctx->pc != 0x14AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA50u; }
        if (ctx->pc != 0x14AA50u) { return; }
    }
    ctx->pc = 0x14AA50u;
    // 0x14aa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa54: 0xc06060c  jal         func_181830
    ctx->pc = 0x14AA54u;
    SET_GPR_U32(ctx, 31, 0x14AA5Cu);
    ctx->pc = 0x14AA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA54u;
            // 0x14aa58: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA5Cu; }
        if (ctx->pc != 0x14AA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA5Cu; }
        if (ctx->pc != 0x14AA5Cu) { return; }
    }
    ctx->pc = 0x14AA5Cu;
    // 0x14aa5c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x14aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x14aa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14aa68: 0xc060604  jal         func_181810
    ctx->pc = 0x14AA68u;
    SET_GPR_U32(ctx, 31, 0x14AA70u);
    ctx->pc = 0x14AA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA68u;
            // 0x14aa6c: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA70u; }
        if (ctx->pc != 0x14AA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA70u; }
        if (ctx->pc != 0x14AA70u) { return; }
    }
    ctx->pc = 0x14AA70u;
    // 0x14aa70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14aa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14aa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa78: 0xc0605dc  jal         func_181770
    ctx->pc = 0x14AA78u;
    SET_GPR_U32(ctx, 31, 0x14AA80u);
    ctx->pc = 0x14AA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA78u;
            // 0x14aa7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA80u; }
        if (ctx->pc != 0x14AA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA80u; }
        if (ctx->pc != 0x14AA80u) { return; }
    }
    ctx->pc = 0x14AA80u;
    // 0x14aa80: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x14aa84: 0xc046376  jal         func_118DD8
    ctx->pc = 0x14AA84u;
    SET_GPR_U32(ctx, 31, 0x14AA8Cu);
    ctx->pc = 0x14AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA84u;
            // 0x14aa88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA8Cu; }
        if (ctx->pc != 0x14AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA8Cu; }
        if (ctx->pc != 0x14AA8Cu) { return; }
    }
    ctx->pc = 0x14AA8Cu;
    // 0x14aa8c: 0xc0605cc  jal         func_181730
    ctx->pc = 0x14AA8Cu;
    SET_GPR_U32(ctx, 31, 0x14AA94u);
    ctx->pc = 0x14AA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA8Cu;
            // 0x14aa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA94u; }
        if (ctx->pc != 0x14AA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AA94u; }
        if (ctx->pc != 0x14AA94u) { return; }
    }
    ctx->pc = 0x14AA94u;
    // 0x14aa94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14aa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14aa98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14aa98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14aa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AA9Cu;
            // 0x14aaa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14AAA4u;
}
