#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cdvd_exit
// Address: 0x117a80 - 0x117b00
void cdvd_exit_0x117a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cdvd_exit_0x117a80");
#endif

    ctx->pc = 0x117a80u;

    // 0x117a80: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x117a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x117a84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117a88: 0x8c43fc94  lw          $v1, -0x36C($v0)
    ctx->pc = 0x117a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966420)));
    // 0x117a8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117a90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x117A90u;
    {
        const bool branch_taken_0x117a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A90u;
            // 0x117a94: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a90) {
            ctx->pc = 0x117AB8u;
            goto label_117ab8;
        }
    }
    ctx->pc = 0x117A98u;
    // 0x117a98: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x117a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x117a9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117aa0: 0xac62fcd4  sw          $v0, -0x32C($v1)
    ctx->pc = 0x117aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966484), GPR_U32(ctx, 2));
    // 0x117aa4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x117aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x117aa8: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x117AA8u;
    SET_GPR_U32(ctx, 31, 0x117AB0u);
    ctx->pc = 0x117AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AA8u;
            // 0x117aac: 0x8e04fca0  lw          $a0, -0x360($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AB0u; }
        if (ctx->pc != 0x117AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AB0u; }
        if (ctx->pc != 0x117AB0u) { return; }
    }
    ctx->pc = 0x117AB0u;
    // 0x117ab0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117AB0u;
    {
        const bool branch_taken_0x117ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117AB0u;
            // 0x117ab4: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ab0) {
            ctx->pc = 0x117AC0u;
            goto label_117ac0;
        }
    }
    ctx->pc = 0x117AB8u;
label_117ab8:
    // 0x117ab8: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x117ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x117abc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x117abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_117ac0:
    // 0x117ac0: 0xc0438ac  jal         func_10E2B0
    ctx->pc = 0x117AC0u;
    SET_GPR_U32(ctx, 31, 0x117AC8u);
    ctx->pc = 0x117AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AC0u;
            // 0x117ac4: 0x8c44fca8  lw          $a0, -0x358($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2B0u;
    if (runtime->hasFunction(0x10E2B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AC8u; }
        if (ctx->pc != 0x117AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AC8u; }
        if (ctx->pc != 0x117AC8u) { return; }
    }
    ctx->pc = 0x117AC8u;
    // 0x117ac8: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x117ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x117acc: 0xc0438ac  jal         func_10E2B0
    ctx->pc = 0x117ACCu;
    SET_GPR_U32(ctx, 31, 0x117AD4u);
    ctx->pc = 0x117AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117ACCu;
            // 0x117ad0: 0x8c64fcac  lw          $a0, -0x354($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2B0u;
    if (runtime->hasFunction(0x10E2B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AD4u; }
        if (ctx->pc != 0x117AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AD4u; }
        if (ctx->pc != 0x117AD4u) { return; }
    }
    ctx->pc = 0x117AD4u;
    // 0x117ad4: 0xc0438ac  jal         func_10E2B0
    ctx->pc = 0x117AD4u;
    SET_GPR_U32(ctx, 31, 0x117ADCu);
    ctx->pc = 0x117AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AD4u;
            // 0x117ad8: 0x8e04fca0  lw          $a0, -0x360($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2B0u;
    if (runtime->hasFunction(0x10E2B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ADCu; }
        if (ctx->pc != 0x117ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ADCu; }
        if (ctx->pc != 0x117ADCu) { return; }
    }
    ctx->pc = 0x117ADCu;
    // 0x117adc: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE4u; }
        if (ctx->pc != 0x117AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE4u; }
        if (ctx->pc != 0x117AE4u) { return; }
    }
    ctx->pc = 0x117AE4u;
    // 0x117ae4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x117ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x117ae8: 0xc045658  jal         func_115960
    ctx->pc = 0x117AE8u;
    SET_GPR_U32(ctx, 31, 0x117AF0u);
    ctx->pc = 0x117AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AE8u;
            // 0x117aec: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)18u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115960u;
    if (runtime->hasFunction(0x115960u)) {
        auto targetFn = runtime->lookupFunction(0x115960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AF0u; }
        if (ctx->pc != 0x117AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRemoveCmdHandler_0x115960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AF0u; }
        if (ctx->pc != 0x117AF0u) { return; }
    }
    ctx->pc = 0x117AF0u;
    // 0x117af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117af8: 0x8045400  j           func_115000
    ctx->pc = 0x117AF8u;
    ctx->pc = 0x117AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AF8u;
            // 0x117afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x115000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x117B00u;
}
