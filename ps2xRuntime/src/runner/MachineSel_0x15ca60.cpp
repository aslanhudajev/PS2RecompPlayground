#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MachineSel
// Address: 0x15ca60 - 0x15cd34
void MachineSel_0x15ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MachineSel_0x15ca60");
#endif

    ctx->pc = 0x15ca60u;

    // 0x15ca60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ca64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ca68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ca68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ca6c: 0x14800056  bnez        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x15CA6Cu;
    {
        const bool branch_taken_0x15ca6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA6Cu;
            // 0x15ca70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca6c) {
            ctx->pc = 0x15CBC8u;
            goto label_15cbc8;
        }
    }
    ctx->pc = 0x15CA74u;
    // 0x15ca74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ca78: 0x8c222400  lw          $v0, 0x2400($at)
    ctx->pc = 0x15ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x15ca7c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15CA7Cu;
    {
        const bool branch_taken_0x15ca7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CA7Cu;
            // 0x15ca80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca7c) {
            ctx->pc = 0x15CAC8u;
            goto label_15cac8;
        }
    }
    ctx->pc = 0x15CA84u;
    // 0x15ca84: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CA84u;
    SET_GPR_U32(ctx, 31, 0x15CA8Cu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA8Cu; }
        if (ctx->pc != 0x15CA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CA8Cu; }
        if (ctx->pc != 0x15CA8Cu) { return; }
    }
    ctx->pc = 0x15CA8Cu;
    // 0x15ca8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ca8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ca90: 0x8c223588  lw          $v0, 0x3588($at)
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15ca94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15ca98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ca98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ca9c: 0xac223588  sw          $v0, 0x3588($at)
    ctx->pc = 0x15ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13704), GPR_U32(ctx, 2));
    // 0x15caa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15caa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15caa4: 0x8c223588  lw          $v0, 0x3588($at)
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15caa8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x15caa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15caac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15CAACu;
    {
        const bool branch_taken_0x15caac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAACu;
            // 0x15cab0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caac) {
            ctx->pc = 0x15CAB8u;
            goto label_15cab8;
        }
    }
    ctx->pc = 0x15CAB4u;
    // 0x15cab4: 0xac203588  sw          $zero, 0x3588($at)
    ctx->pc = 0x15cab4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13704), GPR_U32(ctx, 0));
label_15cab8:
    // 0x15cab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cabc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cac0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15CAC0u;
    {
        const bool branch_taken_0x15cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAC0u;
            // 0x15cac4: 0xac223598  sw          $v0, 0x3598($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cac0) {
            ctx->pc = 0x15CB90u;
            goto label_15cb90;
        }
    }
    ctx->pc = 0x15CAC8u;
label_15cac8:
    // 0x15cac8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cacc: 0x8c2223f8  lw          $v0, 0x23F8($at)
    ctx->pc = 0x15caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x15cad0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15CAD0u;
    {
        const bool branch_taken_0x15cad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAD0u;
            // 0x15cad4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cad0) {
            ctx->pc = 0x15CB10u;
            goto label_15cb10;
        }
    }
    ctx->pc = 0x15CAD8u;
    // 0x15cad8: 0x8c223578  lw          $v0, 0x3578($at)
    ctx->pc = 0x15cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15cadc: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x15CADCu;
    {
        const bool branch_taken_0x15cadc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15CAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CADCu;
            // 0x15cae0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cadc) {
            ctx->pc = 0x15CB90u;
            goto label_15cb90;
        }
    }
    ctx->pc = 0x15CAE4u;
    // 0x15cae4: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CAE4u;
    SET_GPR_U32(ctx, 31, 0x15CAECu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAECu; }
        if (ctx->pc != 0x15CAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CAECu; }
        if (ctx->pc != 0x15CAECu) { return; }
    }
    ctx->pc = 0x15CAECu;
    // 0x15caec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15caecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15caf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15caf4: 0x8c233578  lw          $v1, 0x3578($at)
    ctx->pc = 0x15caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15caf8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cafc: 0xac223598  sw          $v0, 0x3598($at)
    ctx->pc = 0x15cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13720), GPR_U32(ctx, 2));
    // 0x15cb00: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15cb04: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb08: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15CB08u;
    {
        const bool branch_taken_0x15cb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB08u;
            // 0x15cb0c: 0xac223578  sw          $v0, 0x3578($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb08) {
            ctx->pc = 0x15CB90u;
            goto label_15cb90;
        }
    }
    ctx->pc = 0x15CB10u;
label_15cb10:
    // 0x15cb10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb14: 0x8c2223f0  lw          $v0, 0x23F0($at)
    ctx->pc = 0x15cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x15cb18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15CB18u;
    {
        const bool branch_taken_0x15cb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB18u;
            // 0x15cb1c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb18) {
            ctx->pc = 0x15CB60u;
            goto label_15cb60;
        }
    }
    ctx->pc = 0x15CB20u;
    // 0x15cb20: 0x8c223578  lw          $v0, 0x3578($at)
    ctx->pc = 0x15cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15cb24: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15cb24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15cb28: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x15CB28u;
    {
        const bool branch_taken_0x15cb28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB28u;
            // 0x15cb2c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb28) {
            ctx->pc = 0x15CB90u;
            goto label_15cb90;
        }
    }
    ctx->pc = 0x15CB30u;
    // 0x15cb30: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CB30u;
    SET_GPR_U32(ctx, 31, 0x15CB38u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB38u; }
        if (ctx->pc != 0x15CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB38u; }
        if (ctx->pc != 0x15CB38u) { return; }
    }
    ctx->pc = 0x15CB38u;
    // 0x15cb38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cb40: 0x8c233578  lw          $v1, 0x3578($at)
    ctx->pc = 0x15cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15cb44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb48: 0xac223598  sw          $v0, 0x3598($at)
    ctx->pc = 0x15cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13720), GPR_U32(ctx, 2));
    // 0x15cb4c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15cb50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15CB54u;
    {
        const bool branch_taken_0x15cb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB54u;
            // 0x15cb58: 0xac223578  sw          $v0, 0x3578($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb54) {
            ctx->pc = 0x15CB90u;
            goto label_15cb90;
        }
    }
    ctx->pc = 0x15CB5Cu;
    // 0x15cb5c: 0x0  nop
    ctx->pc = 0x15cb5cu;
    // NOP
label_15cb60:
    // 0x15cb60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb64: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x15cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x15cb68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CB68u;
    {
        const bool branch_taken_0x15cb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB68u;
            // 0x15cb6c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb68) {
            ctx->pc = 0x15CB80u;
            goto label_15cb80;
        }
    }
    ctx->pc = 0x15CB70u;
    // 0x15cb70: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x15cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x15cb74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CB74u;
    {
        const bool branch_taken_0x15cb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb74) {
            ctx->pc = 0x15CB90u;
            goto label_15cb90;
        }
    }
    ctx->pc = 0x15CB7Cu;
    // 0x15cb7c: 0x0  nop
    ctx->pc = 0x15cb7cu;
    // NOP
label_15cb80:
    // 0x15cb80: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CB80u;
    SET_GPR_U32(ctx, 31, 0x15CB88u);
    ctx->pc = 0x15CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB80u;
            // 0x15cb84: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB88u; }
        if (ctx->pc != 0x15CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CB88u; }
        if (ctx->pc != 0x15CB88u) { return; }
    }
    ctx->pc = 0x15CB88u;
    // 0x15cb88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15cb88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cb8c: 0x0  nop
    ctx->pc = 0x15cb8cu;
    // NOP
label_15cb90:
    // 0x15cb90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cb94: 0x8c223598  lw          $v0, 0x3598($at)
    ctx->pc = 0x15cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13720)));
    // 0x15cb98: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x15CB98u;
    {
        const bool branch_taken_0x15cb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CB98u;
            // 0x15cb9c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb98) {
            ctx->pc = 0x15CD20u;
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CBA0u;
    // 0x15cba0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15cba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cba4: 0x8c263578  lw          $a2, 0x3578($at)
    ctx->pc = 0x15cba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13688)));
    // 0x15cba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cbac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cbb0: 0x8c273588  lw          $a3, 0x3588($at)
    ctx->pc = 0x15cbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13704)));
    // 0x15cbb4: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15CBB4u;
    SET_GPR_U32(ctx, 31, 0x15CBBCu);
    ctx->pc = 0x15CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBB4u;
            // 0x15cbb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CBBCu; }
        if (ctx->pc != 0x15CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CBBCu; }
        if (ctx->pc != 0x15CBBCu) { return; }
    }
    ctx->pc = 0x15CBBCu;
    // 0x15cbbc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cbc0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x15CBC0u;
    {
        const bool branch_taken_0x15cbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBC0u;
            // 0x15cbc4: 0xac203598  sw          $zero, 0x3598($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbc0) {
            ctx->pc = 0x15CD20u;
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CBC8u;
label_15cbc8:
    // 0x15cbc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cbcc: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x15cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x15cbd0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15CBD0u;
    {
        const bool branch_taken_0x15cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBD0u;
            // 0x15cbd4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbd0) {
            ctx->pc = 0x15CC20u;
            goto label_15cc20;
        }
    }
    ctx->pc = 0x15CBD8u;
    // 0x15cbd8: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CBD8u;
    SET_GPR_U32(ctx, 31, 0x15CBE0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CBE0u; }
        if (ctx->pc != 0x15CBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CBE0u; }
        if (ctx->pc != 0x15CBE0u) { return; }
    }
    ctx->pc = 0x15CBE0u;
    // 0x15cbe0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15cbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15cbe4: 0x8c229ce0  lw          $v0, -0x6320($at)
    ctx->pc = 0x15cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15cbe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15cbec: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15cbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15cbf0: 0xac229ce0  sw          $v0, -0x6320($at)
    ctx->pc = 0x15cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 2));
    // 0x15cbf4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15cbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15cbf8: 0x8c229ce0  lw          $v0, -0x6320($at)
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15cbfc: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x15cbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15cc00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CC00u;
    {
        const bool branch_taken_0x15cc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC00u;
            // 0x15cc04: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc00) {
            ctx->pc = 0x15CC10u;
            goto label_15cc10;
        }
    }
    ctx->pc = 0x15CC08u;
    // 0x15cc08: 0xac209ce0  sw          $zero, -0x6320($at)
    ctx->pc = 0x15cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 0));
    // 0x15cc0c: 0x0  nop
    ctx->pc = 0x15cc0cu;
    // NOP
label_15cc10:
    // 0x15cc10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cc14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc18: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15CC18u;
    {
        const bool branch_taken_0x15cc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC18u;
            // 0x15cc1c: 0xac2235a0  sw          $v0, 0x35A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc18) {
            ctx->pc = 0x15CCE8u;
            goto label_15cce8;
        }
    }
    ctx->pc = 0x15CC20u;
label_15cc20:
    // 0x15cc20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc24: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x15cc28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15CC28u;
    {
        const bool branch_taken_0x15cc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC28u;
            // 0x15cc2c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc28) {
            ctx->pc = 0x15CC68u;
            goto label_15cc68;
        }
    }
    ctx->pc = 0x15CC30u;
    // 0x15cc30: 0x8c223580  lw          $v0, 0x3580($at)
    ctx->pc = 0x15cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15cc34: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x15CC34u;
    {
        const bool branch_taken_0x15cc34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC34u;
            // 0x15cc38: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc34) {
            ctx->pc = 0x15CCE8u;
            goto label_15cce8;
        }
    }
    ctx->pc = 0x15CC3Cu;
    // 0x15cc3c: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CC3Cu;
    SET_GPR_U32(ctx, 31, 0x15CC44u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC44u; }
        if (ctx->pc != 0x15CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC44u; }
        if (ctx->pc != 0x15CC44u) { return; }
    }
    ctx->pc = 0x15CC44u;
    // 0x15cc44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cc4c: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x15cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15cc50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc54: 0xac2235a0  sw          $v0, 0x35A0($at)
    ctx->pc = 0x15cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13728), GPR_U32(ctx, 2));
    // 0x15cc58: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15cc5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc60: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15CC60u;
    {
        const bool branch_taken_0x15cc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC60u;
            // 0x15cc64: 0xac223580  sw          $v0, 0x3580($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc60) {
            ctx->pc = 0x15CCE8u;
            goto label_15cce8;
        }
    }
    ctx->pc = 0x15CC68u;
label_15cc68:
    // 0x15cc68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc6c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x15cc70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15CC70u;
    {
        const bool branch_taken_0x15cc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC70u;
            // 0x15cc74: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc70) {
            ctx->pc = 0x15CCB8u;
            goto label_15ccb8;
        }
    }
    ctx->pc = 0x15CC78u;
    // 0x15cc78: 0x8c223580  lw          $v0, 0x3580($at)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15cc7c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15cc7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15cc80: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x15CC80u;
    {
        const bool branch_taken_0x15cc80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CC80u;
            // 0x15cc84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc80) {
            ctx->pc = 0x15CCE8u;
            goto label_15cce8;
        }
    }
    ctx->pc = 0x15CC88u;
    // 0x15cc88: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CC88u;
    SET_GPR_U32(ctx, 31, 0x15CC90u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC90u; }
        if (ctx->pc != 0x15CC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CC90u; }
        if (ctx->pc != 0x15CC90u) { return; }
    }
    ctx->pc = 0x15CC90u;
    // 0x15cc90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cc98: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x15cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15cc9c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cca0: 0xac2235a0  sw          $v0, 0x35A0($at)
    ctx->pc = 0x15cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13728), GPR_U32(ctx, 2));
    // 0x15cca4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15cca8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ccac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15CCACu;
    {
        const bool branch_taken_0x15ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCACu;
            // 0x15ccb0: 0xac223580  sw          $v0, 0x3580($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccac) {
            ctx->pc = 0x15CCE8u;
            goto label_15cce8;
        }
    }
    ctx->pc = 0x15CCB4u;
    // 0x15ccb4: 0x0  nop
    ctx->pc = 0x15ccb4u;
    // NOP
label_15ccb8:
    // 0x15ccb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ccbc: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x15ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x15ccc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CCC0u;
    {
        const bool branch_taken_0x15ccc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCC0u;
            // 0x15ccc4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccc0) {
            ctx->pc = 0x15CCD8u;
            goto label_15ccd8;
        }
    }
    ctx->pc = 0x15CCC8u;
    // 0x15ccc8: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x15ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x15cccc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CCCCu;
    {
        const bool branch_taken_0x15cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cccc) {
            ctx->pc = 0x15CCE8u;
            goto label_15cce8;
        }
    }
    ctx->pc = 0x15CCD4u;
    // 0x15ccd4: 0x0  nop
    ctx->pc = 0x15ccd4u;
    // NOP
label_15ccd8:
    // 0x15ccd8: 0xc05d110  jal         func_174440
    ctx->pc = 0x15CCD8u;
    SET_GPR_U32(ctx, 31, 0x15CCE0u);
    ctx->pc = 0x15CCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCD8u;
            // 0x15ccdc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCE0u; }
        if (ctx->pc != 0x15CCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCE0u; }
        if (ctx->pc != 0x15CCE0u) { return; }
    }
    ctx->pc = 0x15CCE0u;
    // 0x15cce0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15cce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cce4: 0x0  nop
    ctx->pc = 0x15cce4u;
    // NOP
label_15cce8:
    // 0x15cce8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ccec: 0x8c2235a0  lw          $v0, 0x35A0($at)
    ctx->pc = 0x15ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13728)));
    // 0x15ccf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15CCF0u;
    {
        const bool branch_taken_0x15ccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCF0u;
            // 0x15ccf4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccf0) {
            ctx->pc = 0x15CD20u;
            goto label_15cd20;
        }
    }
    ctx->pc = 0x15CCF8u;
    // 0x15ccf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ccfc: 0x8c263580  lw          $a2, 0x3580($at)
    ctx->pc = 0x15ccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13696)));
    // 0x15cd00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd04: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15cd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15cd08: 0x8c279ce0  lw          $a3, -0x6320($at)
    ctx->pc = 0x15cd08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941920)));
    // 0x15cd0c: 0xc0635a0  jal         func_18D680
    ctx->pc = 0x15CD0Cu;
    SET_GPR_U32(ctx, 31, 0x15CD14u);
    ctx->pc = 0x15CD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD0Cu;
            // 0x15cd10: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D680u;
    if (runtime->hasFunction(0x18D680u)) {
        auto targetFn = runtime->lookupFunction(0x18D680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD14u; }
        if (ctx->pc != 0x15CD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePlayer_0x18d680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CD14u; }
        if (ctx->pc != 0x15CD14u) { return; }
    }
    ctx->pc = 0x15CD14u;
    // 0x15cd14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd18: 0xac2035a0  sw          $zero, 0x35A0($at)
    ctx->pc = 0x15cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13728), GPR_U32(ctx, 0));
    // 0x15cd1c: 0x0  nop
    ctx->pc = 0x15cd1cu;
    // NOP
label_15cd20:
    // 0x15cd20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15cd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cd28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD2Cu;
            // 0x15cd30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CAB8u: goto label_15cab8;
            case 0x15CAC8u: goto label_15cac8;
            case 0x15CB10u: goto label_15cb10;
            case 0x15CB60u: goto label_15cb60;
            case 0x15CB80u: goto label_15cb80;
            case 0x15CB90u: goto label_15cb90;
            case 0x15CBC8u: goto label_15cbc8;
            case 0x15CC10u: goto label_15cc10;
            case 0x15CC20u: goto label_15cc20;
            case 0x15CC68u: goto label_15cc68;
            case 0x15CCB8u: goto label_15ccb8;
            case 0x15CCD8u: goto label_15ccd8;
            case 0x15CCE8u: goto label_15cce8;
            case 0x15CD20u: goto label_15cd20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CD34u;
}
