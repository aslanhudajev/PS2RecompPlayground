#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: KeySettingMain
// Address: 0x17e0d0 - 0x17ec94
void KeySettingMain_0x17e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("KeySettingMain_0x17e0d0");
#endif

    ctx->pc = 0x17e0d0u;

    // 0x17e0d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e0d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e0d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e0dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e0e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e0e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e0e8: 0xc060428  jal         func_1810A0
    ctx->pc = 0x17E0E8u;
    SET_GPR_U32(ctx, 31, 0x17E0F0u);
    ctx->pc = 0x17E0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E0E8u;
            // 0x17e0ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810A0u;
    if (runtime->hasFunction(0x1810A0u)) {
        auto targetFn = runtime->lookupFunction(0x1810A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F0u; }
        if (ctx->pc != 0x17E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keysetting_1p_paramInit_0x1810a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F0u; }
        if (ctx->pc != 0x17E0F0u) { return; }
    }
    ctx->pc = 0x17E0F0u;
    // 0x17e0f0: 0xc06041c  jal         func_181070
    ctx->pc = 0x17E0F0u;
    SET_GPR_U32(ctx, 31, 0x17E0F8u);
    ctx->pc = 0x181070u;
    if (runtime->hasFunction(0x181070u)) {
        auto targetFn = runtime->lookupFunction(0x181070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F8u; }
        if (ctx->pc != 0x17E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keysetting_2p_paramInit_0x181070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0F8u; }
        if (ctx->pc != 0x17E0F8u) { return; }
    }
    ctx->pc = 0x17E0F8u;
label_17e0f8:
    // 0x17e0f8: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x17E0F8u;
    SET_GPR_U32(ctx, 31, 0x17E100u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E100u; }
        if (ctx->pc != 0x17E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E100u; }
        if (ctx->pc != 0x17E100u) { return; }
    }
    ctx->pc = 0x17E100u;
    // 0x17e100: 0xc06069c  jal         func_181A70
    ctx->pc = 0x17E100u;
    SET_GPR_U32(ctx, 31, 0x17E108u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E108u; }
        if (ctx->pc != 0x17E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E108u; }
        if (ctx->pc != 0x17E108u) { return; }
    }
    ctx->pc = 0x17E108u;
    // 0x17e108: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x17E108u;
    SET_GPR_U32(ctx, 31, 0x17E110u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E110u; }
        if (ctx->pc != 0x17E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E110u; }
        if (ctx->pc != 0x17E110u) { return; }
    }
    ctx->pc = 0x17E110u;
    // 0x17e110: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e114: 0x90223c88  lbu         $v0, 0x3C88($at)
    ctx->pc = 0x17e114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17e118: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E118u;
    {
        const bool branch_taken_0x17e118 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17e118) {
            ctx->pc = 0x17E130u;
            goto label_17e130;
        }
    }
    ctx->pc = 0x17E120u;
    // 0x17e120: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17e124: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e128: 0xa0223c88  sb          $v0, 0x3C88($at)
    ctx->pc = 0x17e128u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15496), (uint8_t)GPR_U32(ctx, 2));
    // 0x17e12c: 0x0  nop
    ctx->pc = 0x17e12cu;
    // NOP
label_17e130:
    // 0x17e130: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e134: 0x90223c80  lbu         $v0, 0x3C80($at)
    ctx->pc = 0x17e134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e138: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x17e138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17e13c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E13Cu;
    {
        const bool branch_taken_0x17e13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e13c) {
            ctx->pc = 0x17E150u;
            goto label_17e150;
        }
    }
    ctx->pc = 0x17E144u;
    // 0x17e144: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17e144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17e148: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e14c: 0xa0223c80  sb          $v0, 0x3C80($at)
    ctx->pc = 0x17e14cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15488), (uint8_t)GPR_U32(ctx, 2));
label_17e150:
    // 0x17e150: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e154: 0x8c2223e8  lw          $v0, 0x23E8($at)
    ctx->pc = 0x17e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x17e158: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E158u;
    {
        const bool branch_taken_0x17e158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E158u;
            // 0x17e15c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e158) {
            ctx->pc = 0x17E1A0u;
            goto label_17e1a0;
        }
    }
    ctx->pc = 0x17E160u;
    // 0x17e160: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E160u;
    SET_GPR_U32(ctx, 31, 0x17E168u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E168u; }
        if (ctx->pc != 0x17E168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E168u; }
        if (ctx->pc != 0x17E168u) { return; }
    }
    ctx->pc = 0x17E168u;
    // 0x17e168: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e16c: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17e174: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e178: 0xac222808  sw          $v0, 0x2808($at)
    ctx->pc = 0x17e178u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10248), GPR_U32(ctx, 2));
    // 0x17e17c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e180: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e184: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E184u;
    {
        const bool branch_taken_0x17e184 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E184u;
            // 0x17e188: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e184) {
            ctx->pc = 0x17E198u;
            goto label_17e198;
        }
    }
    ctx->pc = 0x17E18Cu;
    // 0x17e18c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e190: 0xac222808  sw          $v0, 0x2808($at)
    ctx->pc = 0x17e190u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10248), GPR_U32(ctx, 2));
    // 0x17e194: 0x0  nop
    ctx->pc = 0x17e194u;
    // NOP
label_17e198:
    // 0x17e198: 0xc060428  jal         func_1810A0
    ctx->pc = 0x17E198u;
    SET_GPR_U32(ctx, 31, 0x17E1A0u);
    ctx->pc = 0x1810A0u;
    if (runtime->hasFunction(0x1810A0u)) {
        auto targetFn = runtime->lookupFunction(0x1810A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1A0u; }
        if (ctx->pc != 0x17E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keysetting_1p_paramInit_0x1810a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1A0u; }
        if (ctx->pc != 0x17E1A0u) { return; }
    }
    ctx->pc = 0x17E1A0u;
label_17e1a0:
    // 0x17e1a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e1a4: 0x8c2223e0  lw          $v0, 0x23E0($at)
    ctx->pc = 0x17e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x17e1a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E1A8u;
    {
        const bool branch_taken_0x17e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1A8u;
            // 0x17e1ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1a8) {
            ctx->pc = 0x17E1F0u;
            goto label_17e1f0;
        }
    }
    ctx->pc = 0x17E1B0u;
    // 0x17e1b0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E1B0u;
    SET_GPR_U32(ctx, 31, 0x17E1B8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1B8u; }
        if (ctx->pc != 0x17E1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1B8u; }
        if (ctx->pc != 0x17E1B8u) { return; }
    }
    ctx->pc = 0x17E1B8u;
    // 0x17e1b8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e1bc: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e1c4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e1c8: 0xac222808  sw          $v0, 0x2808($at)
    ctx->pc = 0x17e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10248), GPR_U32(ctx, 2));
    // 0x17e1cc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e1d0: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e1d4: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x17e1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17e1d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E1D8u;
    {
        const bool branch_taken_0x17e1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1D8u;
            // 0x17e1dc: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1d8) {
            ctx->pc = 0x17E1E8u;
            goto label_17e1e8;
        }
    }
    ctx->pc = 0x17E1E0u;
    // 0x17e1e0: 0xac202808  sw          $zero, 0x2808($at)
    ctx->pc = 0x17e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10248), GPR_U32(ctx, 0));
    // 0x17e1e4: 0x0  nop
    ctx->pc = 0x17e1e4u;
    // NOP
label_17e1e8:
    // 0x17e1e8: 0xc060428  jal         func_1810A0
    ctx->pc = 0x17E1E8u;
    SET_GPR_U32(ctx, 31, 0x17E1F0u);
    ctx->pc = 0x1810A0u;
    if (runtime->hasFunction(0x1810A0u)) {
        auto targetFn = runtime->lookupFunction(0x1810A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1F0u; }
        if (ctx->pc != 0x17E1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keysetting_1p_paramInit_0x1810a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E1F0u; }
        if (ctx->pc != 0x17E1F0u) { return; }
    }
    ctx->pc = 0x17E1F0u;
label_17e1f0:
    // 0x17e1f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e1f4: 0x8c222378  lw          $v0, 0x2378($at)
    ctx->pc = 0x17e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x17e1f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E1F8u;
    {
        const bool branch_taken_0x17e1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E1F8u;
            // 0x17e1fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e1f8) {
            ctx->pc = 0x17E240u;
            goto label_17e240;
        }
    }
    ctx->pc = 0x17E200u;
    // 0x17e200: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E200u;
    SET_GPR_U32(ctx, 31, 0x17E208u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E208u; }
        if (ctx->pc != 0x17E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E208u; }
        if (ctx->pc != 0x17E208u) { return; }
    }
    ctx->pc = 0x17E208u;
    // 0x17e208: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e20c: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17e214: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e218: 0xac222810  sw          $v0, 0x2810($at)
    ctx->pc = 0x17e218u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10256), GPR_U32(ctx, 2));
    // 0x17e21c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e220: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e224: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E224u;
    {
        const bool branch_taken_0x17e224 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E224u;
            // 0x17e228: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e224) {
            ctx->pc = 0x17E238u;
            goto label_17e238;
        }
    }
    ctx->pc = 0x17E22Cu;
    // 0x17e22c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e230: 0xac222810  sw          $v0, 0x2810($at)
    ctx->pc = 0x17e230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10256), GPR_U32(ctx, 2));
    // 0x17e234: 0x0  nop
    ctx->pc = 0x17e234u;
    // NOP
label_17e238:
    // 0x17e238: 0xc06041c  jal         func_181070
    ctx->pc = 0x17E238u;
    SET_GPR_U32(ctx, 31, 0x17E240u);
    ctx->pc = 0x181070u;
    if (runtime->hasFunction(0x181070u)) {
        auto targetFn = runtime->lookupFunction(0x181070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E240u; }
        if (ctx->pc != 0x17E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keysetting_2p_paramInit_0x181070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E240u; }
        if (ctx->pc != 0x17E240u) { return; }
    }
    ctx->pc = 0x17E240u;
label_17e240:
    // 0x17e240: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e244: 0x8c222370  lw          $v0, 0x2370($at)
    ctx->pc = 0x17e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x17e248: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E248u;
    {
        const bool branch_taken_0x17e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E248u;
            // 0x17e24c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e248) {
            ctx->pc = 0x17E290u;
            goto label_17e290;
        }
    }
    ctx->pc = 0x17E250u;
    // 0x17e250: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E250u;
    SET_GPR_U32(ctx, 31, 0x17E258u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E258u; }
        if (ctx->pc != 0x17E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E258u; }
        if (ctx->pc != 0x17E258u) { return; }
    }
    ctx->pc = 0x17E258u;
    // 0x17e258: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e25c: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17e264: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e268: 0xac222810  sw          $v0, 0x2810($at)
    ctx->pc = 0x17e268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10256), GPR_U32(ctx, 2));
    // 0x17e26c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e270: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e274: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x17e274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17e278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E278u;
    {
        const bool branch_taken_0x17e278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E278u;
            // 0x17e27c: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e278) {
            ctx->pc = 0x17E288u;
            goto label_17e288;
        }
    }
    ctx->pc = 0x17E280u;
    // 0x17e280: 0xac202810  sw          $zero, 0x2810($at)
    ctx->pc = 0x17e280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10256), GPR_U32(ctx, 0));
    // 0x17e284: 0x0  nop
    ctx->pc = 0x17e284u;
    // NOP
label_17e288:
    // 0x17e288: 0xc06041c  jal         func_181070
    ctx->pc = 0x17E288u;
    SET_GPR_U32(ctx, 31, 0x17E290u);
    ctx->pc = 0x181070u;
    if (runtime->hasFunction(0x181070u)) {
        auto targetFn = runtime->lookupFunction(0x181070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E290u; }
        if (ctx->pc != 0x17E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        keysetting_2p_paramInit_0x181070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E290u; }
        if (ctx->pc != 0x17E290u) { return; }
    }
    ctx->pc = 0x17E290u;
label_17e290:
    // 0x17e290: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e294: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17e294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e298: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x17e298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x17e29c: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x17E29Cu;
    {
        const bool branch_taken_0x17e29c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E29Cu;
            // 0x17e2a0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e29c) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E2A4u;
    // 0x17e2a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e2a8: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x17e2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e2b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e2b4: 0x400008  jr          $v0
    ctx->pc = 0x17E2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E2C0u: goto label_17e2c0;
            case 0x17E440u: goto label_17e440;
            case 0x17E498u: goto label_17e498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E2BCu;
    // 0x17e2bc: 0x0  nop
    ctx->pc = 0x17e2bcu;
    // NOP
label_17e2c0:
    // 0x17e2c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e2c4: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x17e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17e2c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E2C8u;
    {
        const bool branch_taken_0x17e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2C8u;
            // 0x17e2cc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2c8) {
            ctx->pc = 0x17E2F0u;
            goto label_17e2f0;
        }
    }
    ctx->pc = 0x17E2D0u;
    // 0x17e2d0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E2D0u;
    SET_GPR_U32(ctx, 31, 0x17E2D8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2D8u; }
        if (ctx->pc != 0x17E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2D8u; }
        if (ctx->pc != 0x17E2D8u) { return; }
    }
    ctx->pc = 0x17E2D8u;
    // 0x17e2d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e2dc: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e2e0: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E2E0u;
    SET_GPR_U32(ctx, 31, 0x17E2E8u);
    ctx->pc = 0x17E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2E0u;
            // 0x17e2e4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2E8u; }
        if (ctx->pc != 0x17E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E2E8u; }
        if (ctx->pc != 0x17E2E8u) { return; }
    }
    ctx->pc = 0x17E2E8u;
    // 0x17e2e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x17E2E8u;
    {
        const bool branch_taken_0x17e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e2e8) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E2F0u;
label_17e2f0:
    // 0x17e2f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e2f4: 0x8c222410  lw          $v0, 0x2410($at)
    ctx->pc = 0x17e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17e2f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E2F8u;
    {
        const bool branch_taken_0x17e2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E2F8u;
            // 0x17e2fc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2f8) {
            ctx->pc = 0x17E320u;
            goto label_17e320;
        }
    }
    ctx->pc = 0x17E300u;
    // 0x17e300: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E300u;
    SET_GPR_U32(ctx, 31, 0x17E308u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E308u; }
        if (ctx->pc != 0x17E308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E308u; }
        if (ctx->pc != 0x17E308u) { return; }
    }
    ctx->pc = 0x17E308u;
    // 0x17e308: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e30c: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e310: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E310u;
    SET_GPR_U32(ctx, 31, 0x17E318u);
    ctx->pc = 0x17E314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E310u;
            // 0x17e314: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E318u; }
        if (ctx->pc != 0x17E318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E318u; }
        if (ctx->pc != 0x17E318u) { return; }
    }
    ctx->pc = 0x17E318u;
    // 0x17e318: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x17E318u;
    {
        const bool branch_taken_0x17e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e318) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E320u;
label_17e320:
    // 0x17e320: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e324: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x17e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17e328: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E328u;
    {
        const bool branch_taken_0x17e328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E328u;
            // 0x17e32c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e328) {
            ctx->pc = 0x17E350u;
            goto label_17e350;
        }
    }
    ctx->pc = 0x17E330u;
    // 0x17e330: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E330u;
    SET_GPR_U32(ctx, 31, 0x17E338u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E338u; }
        if (ctx->pc != 0x17E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E338u; }
        if (ctx->pc != 0x17E338u) { return; }
    }
    ctx->pc = 0x17E338u;
    // 0x17e338: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e33c: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e340: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E340u;
    SET_GPR_U32(ctx, 31, 0x17E348u);
    ctx->pc = 0x17E344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E340u;
            // 0x17e344: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E348u; }
        if (ctx->pc != 0x17E348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E348u; }
        if (ctx->pc != 0x17E348u) { return; }
    }
    ctx->pc = 0x17E348u;
    // 0x17e348: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x17E348u;
    {
        const bool branch_taken_0x17e348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e348) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E350u;
label_17e350:
    // 0x17e350: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e354: 0x8c222400  lw          $v0, 0x2400($at)
    ctx->pc = 0x17e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x17e358: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E358u;
    {
        const bool branch_taken_0x17e358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E358u;
            // 0x17e35c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e358) {
            ctx->pc = 0x17E380u;
            goto label_17e380;
        }
    }
    ctx->pc = 0x17E360u;
    // 0x17e360: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E360u;
    SET_GPR_U32(ctx, 31, 0x17E368u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E368u; }
        if (ctx->pc != 0x17E368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E368u; }
        if (ctx->pc != 0x17E368u) { return; }
    }
    ctx->pc = 0x17E368u;
    // 0x17e368: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e36c: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e370: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E370u;
    SET_GPR_U32(ctx, 31, 0x17E378u);
    ctx->pc = 0x17E374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E370u;
            // 0x17e374: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E378u; }
        if (ctx->pc != 0x17E378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E378u; }
        if (ctx->pc != 0x17E378u) { return; }
    }
    ctx->pc = 0x17E378u;
    // 0x17e378: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x17E378u;
    {
        const bool branch_taken_0x17e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e378) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E380u;
label_17e380:
    // 0x17e380: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e384: 0x8c2223d8  lw          $v0, 0x23D8($at)
    ctx->pc = 0x17e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9176)));
    // 0x17e388: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E388u;
    {
        const bool branch_taken_0x17e388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E388u;
            // 0x17e38c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e388) {
            ctx->pc = 0x17E3B0u;
            goto label_17e3b0;
        }
    }
    ctx->pc = 0x17E390u;
    // 0x17e390: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E390u;
    SET_GPR_U32(ctx, 31, 0x17E398u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E398u; }
        if (ctx->pc != 0x17E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E398u; }
        if (ctx->pc != 0x17E398u) { return; }
    }
    ctx->pc = 0x17E398u;
    // 0x17e398: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e39c: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e3a0: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E3A0u;
    SET_GPR_U32(ctx, 31, 0x17E3A8u);
    ctx->pc = 0x17E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3A0u;
            // 0x17e3a4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3A8u; }
        if (ctx->pc != 0x17E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3A8u; }
        if (ctx->pc != 0x17E3A8u) { return; }
    }
    ctx->pc = 0x17E3A8u;
    // 0x17e3a8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x17E3A8u;
    {
        const bool branch_taken_0x17e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3a8) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E3B0u;
label_17e3b0:
    // 0x17e3b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e3b4: 0x8c2223d0  lw          $v0, 0x23D0($at)
    ctx->pc = 0x17e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9168)));
    // 0x17e3b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E3B8u;
    {
        const bool branch_taken_0x17e3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3B8u;
            // 0x17e3bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3b8) {
            ctx->pc = 0x17E3E0u;
            goto label_17e3e0;
        }
    }
    ctx->pc = 0x17E3C0u;
    // 0x17e3c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E3C0u;
    SET_GPR_U32(ctx, 31, 0x17E3C8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3C8u; }
        if (ctx->pc != 0x17E3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3C8u; }
        if (ctx->pc != 0x17E3C8u) { return; }
    }
    ctx->pc = 0x17E3C8u;
    // 0x17e3c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e3cc: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e3d0: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E3D0u;
    SET_GPR_U32(ctx, 31, 0x17E3D8u);
    ctx->pc = 0x17E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3D0u;
            // 0x17e3d4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3D8u; }
        if (ctx->pc != 0x17E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3D8u; }
        if (ctx->pc != 0x17E3D8u) { return; }
    }
    ctx->pc = 0x17E3D8u;
    // 0x17e3d8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x17E3D8u;
    {
        const bool branch_taken_0x17e3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e3d8) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E3E0u;
label_17e3e0:
    // 0x17e3e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e3e4: 0x8c2223c8  lw          $v0, 0x23C8($at)
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9160)));
    // 0x17e3e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E3E8u;
    {
        const bool branch_taken_0x17e3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3E8u;
            // 0x17e3ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3e8) {
            ctx->pc = 0x17E410u;
            goto label_17e410;
        }
    }
    ctx->pc = 0x17E3F0u;
    // 0x17e3f0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E3F0u;
    SET_GPR_U32(ctx, 31, 0x17E3F8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3F8u; }
        if (ctx->pc != 0x17E3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E3F8u; }
        if (ctx->pc != 0x17E3F8u) { return; }
    }
    ctx->pc = 0x17E3F8u;
    // 0x17e3f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e3fc: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e400: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E400u;
    SET_GPR_U32(ctx, 31, 0x17E408u);
    ctx->pc = 0x17E404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E400u;
            // 0x17e404: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E408u; }
        if (ctx->pc != 0x17E408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E408u; }
        if (ctx->pc != 0x17E408u) { return; }
    }
    ctx->pc = 0x17E408u;
    // 0x17e408: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x17E408u;
    {
        const bool branch_taken_0x17e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e408) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E410u;
label_17e410:
    // 0x17e410: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e414: 0x8c2223c0  lw          $v0, 0x23C0($at)
    ctx->pc = 0x17e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9152)));
    // 0x17e418: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17E418u;
    {
        const bool branch_taken_0x17e418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E418u;
            // 0x17e41c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e418) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E420u;
    // 0x17e420: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E420u;
    SET_GPR_U32(ctx, 31, 0x17E428u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E428u; }
        if (ctx->pc != 0x17E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E428u; }
        if (ctx->pc != 0x17E428u) { return; }
    }
    ctx->pc = 0x17E428u;
    // 0x17e428: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e42c: 0x8c242808  lw          $a0, 0x2808($at)
    ctx->pc = 0x17e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e430: 0xc065d6c  jal         func_1975B0
    ctx->pc = 0x17E430u;
    SET_GPR_U32(ctx, 31, 0x17E438u);
    ctx->pc = 0x17E434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E430u;
            // 0x17e434: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1975B0u;
    if (runtime->hasFunction(0x1975B0u)) {
        auto targetFn = runtime->lookupFunction(0x1975B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E438u; }
        if (ctx->pc != 0x17E438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged1p_0x1975b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E438u; }
        if (ctx->pc != 0x17E438u) { return; }
    }
    ctx->pc = 0x17E438u;
    // 0x17e438: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17E438u;
    {
        const bool branch_taken_0x17e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e438) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E440u;
label_17e440:
    // 0x17e440: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e444: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x17e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17e448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E448u;
    {
        const bool branch_taken_0x17e448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E448u;
            // 0x17e44c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e448) {
            ctx->pc = 0x17E460u;
            goto label_17e460;
        }
    }
    ctx->pc = 0x17E450u;
    // 0x17e450: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17e454: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E454u;
    {
        const bool branch_taken_0x17e454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e454) {
            ctx->pc = 0x17E478u;
            goto label_17e478;
        }
    }
    ctx->pc = 0x17E45Cu;
    // 0x17e45c: 0x0  nop
    ctx->pc = 0x17e45cu;
    // NOP
label_17e460:
    // 0x17e460: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E460u;
    SET_GPR_U32(ctx, 31, 0x17E468u);
    ctx->pc = 0x17E464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E460u;
            // 0x17e464: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E468u; }
        if (ctx->pc != 0x17E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E468u; }
        if (ctx->pc != 0x17E468u) { return; }
    }
    ctx->pc = 0x17E468u;
    // 0x17e468: 0xc065dd4  jal         func_197750
    ctx->pc = 0x17E468u;
    SET_GPR_U32(ctx, 31, 0x17E470u);
    ctx->pc = 0x17E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E468u;
            // 0x17e46c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197750u;
    if (runtime->hasFunction(0x197750u)) {
        auto targetFn = runtime->lookupFunction(0x197750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E470u; }
        if (ctx->pc != 0x17E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultKeySetting_0x197750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E470u; }
        if (ctx->pc != 0x17E470u) { return; }
    }
    ctx->pc = 0x17E470u;
    // 0x17e470: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17E470u;
    {
        const bool branch_taken_0x17e470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e470) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E478u;
label_17e478:
    // 0x17e478: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e47c: 0x8c222410  lw          $v0, 0x2410($at)
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17e480: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E480u;
    {
        const bool branch_taken_0x17e480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E480u;
            // 0x17e484: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e480) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E488u;
    // 0x17e488: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E488u;
    SET_GPR_U32(ctx, 31, 0x17E490u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E490u; }
        if (ctx->pc != 0x17E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E490u; }
        if (ctx->pc != 0x17E490u) { return; }
    }
    ctx->pc = 0x17E490u;
    // 0x17e490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E490u;
    {
        const bool branch_taken_0x17e490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E490u;
            // 0x17e494: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e490) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E498u;
label_17e498:
    // 0x17e498: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e49c: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x17e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17e4a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E4A0u;
    {
        const bool branch_taken_0x17e4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4A0u;
            // 0x17e4a4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4a0) {
            ctx->pc = 0x17E4B8u;
            goto label_17e4b8;
        }
    }
    ctx->pc = 0x17E4A8u;
    // 0x17e4a8: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x17e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17e4ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E4ACu;
    {
        const bool branch_taken_0x17e4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4ac) {
            ctx->pc = 0x17E4C8u;
            goto label_17e4c8;
        }
    }
    ctx->pc = 0x17E4B4u;
    // 0x17e4b4: 0x0  nop
    ctx->pc = 0x17e4b4u;
    // NOP
label_17e4b8:
    // 0x17e4b8: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E4B8u;
    SET_GPR_U32(ctx, 31, 0x17E4C0u);
    ctx->pc = 0x17E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4B8u;
            // 0x17e4bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C0u; }
        if (ctx->pc != 0x17E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C0u; }
        if (ctx->pc != 0x17E4C0u) { return; }
    }
    ctx->pc = 0x17E4C0u;
    // 0x17e4c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17e4c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4c4: 0x0  nop
    ctx->pc = 0x17e4c4u;
    // NOP
label_17e4c8:
    // 0x17e4c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e4cc: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e4d0: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x17e4d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x17e4d4: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x17E4D4u;
    {
        const bool branch_taken_0x17e4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4D4u;
            // 0x17e4d8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4d4) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E4DCu;
    // 0x17e4dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e4e0: 0x24631fe0  addiu       $v1, $v1, 0x1FE0
    ctx->pc = 0x17e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8160));
    // 0x17e4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e4e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17e4ec: 0x400008  jr          $v0
    ctx->pc = 0x17E4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E4F8u: goto label_17e4f8;
            case 0x17E678u: goto label_17e678;
            case 0x17E6D0u: goto label_17e6d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17E4F4u;
    // 0x17e4f4: 0x0  nop
    ctx->pc = 0x17e4f4u;
    // NOP
label_17e4f8:
    // 0x17e4f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e4fc: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17e500: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E500u;
    {
        const bool branch_taken_0x17e500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E500u;
            // 0x17e504: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e500) {
            ctx->pc = 0x17E528u;
            goto label_17e528;
        }
    }
    ctx->pc = 0x17E508u;
    // 0x17e508: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E508u;
    SET_GPR_U32(ctx, 31, 0x17E510u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E510u; }
        if (ctx->pc != 0x17E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E510u; }
        if (ctx->pc != 0x17E510u) { return; }
    }
    ctx->pc = 0x17E510u;
    // 0x17e510: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e514: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e518: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E518u;
    SET_GPR_U32(ctx, 31, 0x17E520u);
    ctx->pc = 0x17E51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E518u;
            // 0x17e51c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E520u; }
        if (ctx->pc != 0x17E520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E520u; }
        if (ctx->pc != 0x17E520u) { return; }
    }
    ctx->pc = 0x17E520u;
    // 0x17e520: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x17E520u;
    {
        const bool branch_taken_0x17e520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e520) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E528u;
label_17e528:
    // 0x17e528: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e52c: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17e530: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E530u;
    {
        const bool branch_taken_0x17e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E530u;
            // 0x17e534: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e530) {
            ctx->pc = 0x17E558u;
            goto label_17e558;
        }
    }
    ctx->pc = 0x17E538u;
    // 0x17e538: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E538u;
    SET_GPR_U32(ctx, 31, 0x17E540u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E540u; }
        if (ctx->pc != 0x17E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E540u; }
        if (ctx->pc != 0x17E540u) { return; }
    }
    ctx->pc = 0x17E540u;
    // 0x17e540: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e544: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e548: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E548u;
    SET_GPR_U32(ctx, 31, 0x17E550u);
    ctx->pc = 0x17E54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E548u;
            // 0x17e54c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E550u; }
        if (ctx->pc != 0x17E550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E550u; }
        if (ctx->pc != 0x17E550u) { return; }
    }
    ctx->pc = 0x17E550u;
    // 0x17e550: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x17E550u;
    {
        const bool branch_taken_0x17e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e550) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E558u;
label_17e558:
    // 0x17e558: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e55c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17e560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E560u;
    {
        const bool branch_taken_0x17e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E560u;
            // 0x17e564: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e560) {
            ctx->pc = 0x17E588u;
            goto label_17e588;
        }
    }
    ctx->pc = 0x17E568u;
    // 0x17e568: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E568u;
    SET_GPR_U32(ctx, 31, 0x17E570u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E570u; }
        if (ctx->pc != 0x17E570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E570u; }
        if (ctx->pc != 0x17E570u) { return; }
    }
    ctx->pc = 0x17E570u;
    // 0x17e570: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e574: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e578: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E578u;
    SET_GPR_U32(ctx, 31, 0x17E580u);
    ctx->pc = 0x17E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E578u;
            // 0x17e57c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E580u; }
        if (ctx->pc != 0x17E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E580u; }
        if (ctx->pc != 0x17E580u) { return; }
    }
    ctx->pc = 0x17E580u;
    // 0x17e580: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x17E580u;
    {
        const bool branch_taken_0x17e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e580) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E588u;
label_17e588:
    // 0x17e588: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e58c: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x17e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x17e590: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E590u;
    {
        const bool branch_taken_0x17e590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E590u;
            // 0x17e594: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e590) {
            ctx->pc = 0x17E5B8u;
            goto label_17e5b8;
        }
    }
    ctx->pc = 0x17E598u;
    // 0x17e598: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E598u;
    SET_GPR_U32(ctx, 31, 0x17E5A0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5A0u; }
        if (ctx->pc != 0x17E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5A0u; }
        if (ctx->pc != 0x17E5A0u) { return; }
    }
    ctx->pc = 0x17E5A0u;
    // 0x17e5a0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e5a4: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e5a8: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E5A8u;
    SET_GPR_U32(ctx, 31, 0x17E5B0u);
    ctx->pc = 0x17E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5A8u;
            // 0x17e5ac: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5B0u; }
        if (ctx->pc != 0x17E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5B0u; }
        if (ctx->pc != 0x17E5B0u) { return; }
    }
    ctx->pc = 0x17E5B0u;
    // 0x17e5b0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x17E5B0u;
    {
        const bool branch_taken_0x17e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5b0) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E5B8u;
label_17e5b8:
    // 0x17e5b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e5bc: 0x8c222368  lw          $v0, 0x2368($at)
    ctx->pc = 0x17e5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9064)));
    // 0x17e5c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E5C0u;
    {
        const bool branch_taken_0x17e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5C0u;
            // 0x17e5c4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5c0) {
            ctx->pc = 0x17E5E8u;
            goto label_17e5e8;
        }
    }
    ctx->pc = 0x17E5C8u;
    // 0x17e5c8: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E5C8u;
    SET_GPR_U32(ctx, 31, 0x17E5D0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5D0u; }
        if (ctx->pc != 0x17E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5D0u; }
        if (ctx->pc != 0x17E5D0u) { return; }
    }
    ctx->pc = 0x17E5D0u;
    // 0x17e5d0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e5d4: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e5d8: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E5D8u;
    SET_GPR_U32(ctx, 31, 0x17E5E0u);
    ctx->pc = 0x17E5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5D8u;
            // 0x17e5dc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5E0u; }
        if (ctx->pc != 0x17E5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5E0u; }
        if (ctx->pc != 0x17E5E0u) { return; }
    }
    ctx->pc = 0x17E5E0u;
    // 0x17e5e0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x17E5E0u;
    {
        const bool branch_taken_0x17e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5e0) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E5E8u;
label_17e5e8:
    // 0x17e5e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e5ec: 0x8c222360  lw          $v0, 0x2360($at)
    ctx->pc = 0x17e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9056)));
    // 0x17e5f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E5F0u;
    {
        const bool branch_taken_0x17e5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5F0u;
            // 0x17e5f4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f0) {
            ctx->pc = 0x17E618u;
            goto label_17e618;
        }
    }
    ctx->pc = 0x17E5F8u;
    // 0x17e5f8: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E5F8u;
    SET_GPR_U32(ctx, 31, 0x17E600u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E600u; }
        if (ctx->pc != 0x17E600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E600u; }
        if (ctx->pc != 0x17E600u) { return; }
    }
    ctx->pc = 0x17E600u;
    // 0x17e600: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e604: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e608: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E608u;
    SET_GPR_U32(ctx, 31, 0x17E610u);
    ctx->pc = 0x17E60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E608u;
            // 0x17e60c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E610u; }
        if (ctx->pc != 0x17E610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E610u; }
        if (ctx->pc != 0x17E610u) { return; }
    }
    ctx->pc = 0x17E610u;
    // 0x17e610: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x17E610u;
    {
        const bool branch_taken_0x17e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e610) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E618u;
label_17e618:
    // 0x17e618: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e61c: 0x8c222358  lw          $v0, 0x2358($at)
    ctx->pc = 0x17e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9048)));
    // 0x17e620: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17E620u;
    {
        const bool branch_taken_0x17e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E620u;
            // 0x17e624: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e620) {
            ctx->pc = 0x17E648u;
            goto label_17e648;
        }
    }
    ctx->pc = 0x17E628u;
    // 0x17e628: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E628u;
    SET_GPR_U32(ctx, 31, 0x17E630u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E630u; }
        if (ctx->pc != 0x17E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E630u; }
        if (ctx->pc != 0x17E630u) { return; }
    }
    ctx->pc = 0x17E630u;
    // 0x17e630: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e634: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e638: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E638u;
    SET_GPR_U32(ctx, 31, 0x17E640u);
    ctx->pc = 0x17E63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E638u;
            // 0x17e63c: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E640u; }
        if (ctx->pc != 0x17E640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E640u; }
        if (ctx->pc != 0x17E640u) { return; }
    }
    ctx->pc = 0x17E640u;
    // 0x17e640: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x17E640u;
    {
        const bool branch_taken_0x17e640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e640) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E648u;
label_17e648:
    // 0x17e648: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e64c: 0x8c222350  lw          $v0, 0x2350($at)
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9040)));
    // 0x17e650: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17E650u;
    {
        const bool branch_taken_0x17e650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E650u;
            // 0x17e654: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e650) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E658u;
    // 0x17e658: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E658u;
    SET_GPR_U32(ctx, 31, 0x17E660u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E660u; }
        if (ctx->pc != 0x17E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E660u; }
        if (ctx->pc != 0x17E660u) { return; }
    }
    ctx->pc = 0x17E660u;
    // 0x17e660: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e664: 0x8c242810  lw          $a0, 0x2810($at)
    ctx->pc = 0x17e664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e668: 0xc065d04  jal         func_197410
    ctx->pc = 0x17E668u;
    SET_GPR_U32(ctx, 31, 0x17E670u);
    ctx->pc = 0x17E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E668u;
            // 0x17e66c: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197410u;
    if (runtime->hasFunction(0x197410u)) {
        auto targetFn = runtime->lookupFunction(0x197410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
        if (ctx->pc != 0x17E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyAssignChanged2p_0x197410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E670u; }
        if (ctx->pc != 0x17E670u) { return; }
    }
    ctx->pc = 0x17E670u;
    // 0x17e670: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17E670u;
    {
        const bool branch_taken_0x17e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e670) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E678u;
label_17e678:
    // 0x17e678: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e67c: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17e680: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E680u;
    {
        const bool branch_taken_0x17e680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E680u;
            // 0x17e684: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e680) {
            ctx->pc = 0x17E698u;
            goto label_17e698;
        }
    }
    ctx->pc = 0x17E688u;
    // 0x17e688: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17e68c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E68Cu;
    {
        const bool branch_taken_0x17e68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e68c) {
            ctx->pc = 0x17E6B0u;
            goto label_17e6b0;
        }
    }
    ctx->pc = 0x17E694u;
    // 0x17e694: 0x0  nop
    ctx->pc = 0x17e694u;
    // NOP
label_17e698:
    // 0x17e698: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E698u;
    SET_GPR_U32(ctx, 31, 0x17E6A0u);
    ctx->pc = 0x17E69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E698u;
            // 0x17e69c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6A0u; }
        if (ctx->pc != 0x17E6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6A0u; }
        if (ctx->pc != 0x17E6A0u) { return; }
    }
    ctx->pc = 0x17E6A0u;
    // 0x17e6a0: 0xc065dd4  jal         func_197750
    ctx->pc = 0x17E6A0u;
    SET_GPR_U32(ctx, 31, 0x17E6A8u);
    ctx->pc = 0x17E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6A0u;
            // 0x17e6a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197750u;
    if (runtime->hasFunction(0x197750u)) {
        auto targetFn = runtime->lookupFunction(0x197750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6A8u; }
        if (ctx->pc != 0x17E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultKeySetting_0x197750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6A8u; }
        if (ctx->pc != 0x17E6A8u) { return; }
    }
    ctx->pc = 0x17E6A8u;
    // 0x17e6a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17E6A8u;
    {
        const bool branch_taken_0x17e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6a8) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E6B0u;
label_17e6b0:
    // 0x17e6b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e6b4: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17e6b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17E6B8u;
    {
        const bool branch_taken_0x17e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6B8u;
            // 0x17e6bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6b8) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E6C0u;
    // 0x17e6c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E6C0u;
    SET_GPR_U32(ctx, 31, 0x17E6C8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6C8u; }
        if (ctx->pc != 0x17E6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6C8u; }
        if (ctx->pc != 0x17E6C8u) { return; }
    }
    ctx->pc = 0x17E6C8u;
    // 0x17e6c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17E6C8u;
    {
        const bool branch_taken_0x17e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6C8u;
            // 0x17e6cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6c8) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E6D0u;
label_17e6d0:
    // 0x17e6d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17e6d4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17e6d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E6D8u;
    {
        const bool branch_taken_0x17e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6D8u;
            // 0x17e6dc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e6d8) {
            ctx->pc = 0x17E6F0u;
            goto label_17e6f0;
        }
    }
    ctx->pc = 0x17E6E0u;
    // 0x17e6e0: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17e6e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E6E4u;
    {
        const bool branch_taken_0x17e6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6e4) {
            ctx->pc = 0x17E700u;
            goto label_17e700;
        }
    }
    ctx->pc = 0x17E6ECu;
    // 0x17e6ec: 0x0  nop
    ctx->pc = 0x17e6ecu;
    // NOP
label_17e6f0:
    // 0x17e6f0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17E6F0u;
    SET_GPR_U32(ctx, 31, 0x17E6F8u);
    ctx->pc = 0x17E6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6F0u;
            // 0x17e6f4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6F8u; }
        if (ctx->pc != 0x17E6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E6F8u; }
        if (ctx->pc != 0x17E6F8u) { return; }
    }
    ctx->pc = 0x17E6F8u;
    // 0x17e6f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17e6f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e6fc: 0x0  nop
    ctx->pc = 0x17e6fcu;
    // NOP
label_17e700:
    // 0x17e700: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17e700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17e704: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17e704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17e708: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x17e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x17e70c: 0x24c61e40  addiu       $a2, $a2, 0x1E40
    ctx->pc = 0x17e70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7744));
    // 0x17e710: 0xc060a44  jal         func_182910
    ctx->pc = 0x17E710u;
    SET_GPR_U32(ctx, 31, 0x17E718u);
    ctx->pc = 0x17E714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E710u;
            // 0x17e714: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E718u; }
        if (ctx->pc != 0x17E718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E718u; }
        if (ctx->pc != 0x17E718u) { return; }
    }
    ctx->pc = 0x17E718u;
    // 0x17e718: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e71c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17e71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17e720: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17e720u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e724: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17e724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17e728: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17e72c: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17e730: 0x24c61fd0  addiu       $a2, $a2, 0x1FD0
    ctx->pc = 0x17e730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8144));
    // 0x17e734: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17e734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e738: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17e738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e73c: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17E73Cu;
    SET_GPR_U32(ctx, 31, 0x17E744u);
    ctx->pc = 0x17E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E73Cu;
            // 0x17e740: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E744u; }
        if (ctx->pc != 0x17E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E744u; }
        if (ctx->pc != 0x17E744u) { return; }
    }
    ctx->pc = 0x17E744u;
    // 0x17e744: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x17e744u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x17e748: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e74c: 0x2631a210  addiu       $s1, $s1, -0x5DF0
    ctx->pc = 0x17e74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943248));
    // 0x17e750: 0x2410fffa  addiu       $s0, $zero, -0x6
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17e754: 0x0  nop
    ctx->pc = 0x17e754u;
    // NOP
label_17e758:
    // 0x17e758: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e75c: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17e760: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E760u;
    {
        const bool branch_taken_0x17e760 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E760u;
            // 0x17e764: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e760) {
            ctx->pc = 0x17E798u;
            goto label_17e798;
        }
    }
    ctx->pc = 0x17E768u;
    // 0x17e768: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17e76c: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17e76cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e770: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17e770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17e774: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x17e774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e77c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e780: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17e780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e784: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17E784u;
    SET_GPR_U32(ctx, 31, 0x17E78Cu);
    ctx->pc = 0x17E788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E784u;
            // 0x17e788: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E78Cu; }
        if (ctx->pc != 0x17E78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E78Cu; }
        if (ctx->pc != 0x17E78Cu) { return; }
    }
    ctx->pc = 0x17E78Cu;
    // 0x17e78c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17E78Cu;
    {
        const bool branch_taken_0x17e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e78c) {
            ctx->pc = 0x17E7C0u;
            goto label_17e7c0;
        }
    }
    ctx->pc = 0x17E794u;
    // 0x17e794: 0x0  nop
    ctx->pc = 0x17e794u;
    // NOP
label_17e798:
    // 0x17e798: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e79c: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17e79cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e7a0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17e7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17e7a4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x17e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e7a8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17e7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7b0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17e7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e7b4: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17e7b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17e7b8: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17E7B8u;
    SET_GPR_U32(ctx, 31, 0x17E7C0u);
    ctx->pc = 0x17E7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7B8u;
            // 0x17e7bc: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7C0u; }
        if (ctx->pc != 0x17E7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7C0u; }
        if (ctx->pc != 0x17E7C0u) { return; }
    }
    ctx->pc = 0x17E7C0u;
label_17e7c0:
    // 0x17e7c0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E7C0u;
    {
        const bool branch_taken_0x17e7c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7C0u;
            // 0x17e7c4: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7c0) {
            ctx->pc = 0x17E7E0u;
            goto label_17e7e0;
        }
    }
    ctx->pc = 0x17E7C8u;
    // 0x17e7c8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x17e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17e7cc: 0x8c261624  lw          $a2, 0x1624($at)
    ctx->pc = 0x17e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5668)));
    // 0x17e7d0: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E7D0u;
    SET_GPR_U32(ctx, 31, 0x17E7D8u);
    ctx->pc = 0x17E7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7D0u;
            // 0x17e7d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7D8u; }
        if (ctx->pc != 0x17E7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7D8u; }
        if (ctx->pc != 0x17E7D8u) { return; }
    }
    ctx->pc = 0x17E7D8u;
    // 0x17e7d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17E7D8u;
    {
        const bool branch_taken_0x17e7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e7d8) {
            ctx->pc = 0x17E878u;
            goto label_17e878;
        }
    }
    ctx->pc = 0x17E7E0u;
label_17e7e0:
    // 0x17e7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e7e4: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E7E4u;
    {
        const bool branch_taken_0x17e7e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7E4u;
            // 0x17e7e8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e7e4) {
            ctx->pc = 0x17E808u;
            goto label_17e808;
        }
    }
    ctx->pc = 0x17E7ECu;
    // 0x17e7ec: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x17e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17e7f0: 0x8c261628  lw          $a2, 0x1628($at)
    ctx->pc = 0x17e7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5672)));
    // 0x17e7f4: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E7F4u;
    SET_GPR_U32(ctx, 31, 0x17E7FCu);
    ctx->pc = 0x17E7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7F4u;
            // 0x17e7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7FCu; }
        if (ctx->pc != 0x17E7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7FCu; }
        if (ctx->pc != 0x17E7FCu) { return; }
    }
    ctx->pc = 0x17E7FCu;
    // 0x17e7fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17E7FCu;
    {
        const bool branch_taken_0x17e7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e7fc) {
            ctx->pc = 0x17E878u;
            goto label_17e878;
        }
    }
    ctx->pc = 0x17E804u;
    // 0x17e804: 0x0  nop
    ctx->pc = 0x17e804u;
    // NOP
label_17e808:
    // 0x17e808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e80c: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E80Cu;
    {
        const bool branch_taken_0x17e80c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E80Cu;
            // 0x17e810: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e80c) {
            ctx->pc = 0x17E830u;
            goto label_17e830;
        }
    }
    ctx->pc = 0x17E814u;
    // 0x17e814: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x17e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17e818: 0x8c26162c  lw          $a2, 0x162C($at)
    ctx->pc = 0x17e818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5676)));
    // 0x17e81c: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E81Cu;
    SET_GPR_U32(ctx, 31, 0x17E824u);
    ctx->pc = 0x17E820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E81Cu;
            // 0x17e820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E824u; }
        if (ctx->pc != 0x17E824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E824u; }
        if (ctx->pc != 0x17E824u) { return; }
    }
    ctx->pc = 0x17E824u;
    // 0x17e824: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17E824u;
    {
        const bool branch_taken_0x17e824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e824) {
            ctx->pc = 0x17E878u;
            goto label_17e878;
        }
    }
    ctx->pc = 0x17E82Cu;
    // 0x17e82c: 0x0  nop
    ctx->pc = 0x17e82cu;
    // NOP
label_17e830:
    // 0x17e830: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17e830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e834: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E834u;
    {
        const bool branch_taken_0x17e834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E834u;
            // 0x17e838: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e834) {
            ctx->pc = 0x17E858u;
            goto label_17e858;
        }
    }
    ctx->pc = 0x17E83Cu;
    // 0x17e83c: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x17e83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17e840: 0x8c261630  lw          $a2, 0x1630($at)
    ctx->pc = 0x17e840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5680)));
    // 0x17e844: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E844u;
    SET_GPR_U32(ctx, 31, 0x17E84Cu);
    ctx->pc = 0x17E848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E844u;
            // 0x17e848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E84Cu; }
        if (ctx->pc != 0x17E84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E84Cu; }
        if (ctx->pc != 0x17E84Cu) { return; }
    }
    ctx->pc = 0x17E84Cu;
    // 0x17e84c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E84Cu;
    {
        const bool branch_taken_0x17e84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e84c) {
            ctx->pc = 0x17E878u;
            goto label_17e878;
        }
    }
    ctx->pc = 0x17E854u;
    // 0x17e854: 0x0  nop
    ctx->pc = 0x17e854u;
    // NOP
label_17e858:
    // 0x17e858: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e85c: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E85Cu;
    {
        const bool branch_taken_0x17e85c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E85Cu;
            // 0x17e860: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e85c) {
            ctx->pc = 0x17E878u;
            goto label_17e878;
        }
    }
    ctx->pc = 0x17E864u;
    // 0x17e864: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x17e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17e868: 0x8c261634  lw          $a2, 0x1634($at)
    ctx->pc = 0x17e868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5684)));
    // 0x17e86c: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E86Cu;
    SET_GPR_U32(ctx, 31, 0x17E874u);
    ctx->pc = 0x17E870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E86Cu;
            // 0x17e870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E874u; }
        if (ctx->pc != 0x17E874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E874u; }
        if (ctx->pc != 0x17E874u) { return; }
    }
    ctx->pc = 0x17E874u;
    // 0x17e874: 0x0  nop
    ctx->pc = 0x17e874u;
    // NOP
label_17e878:
    // 0x17e878: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17e878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17e87c: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x17e87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17e880: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17e880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17e884: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x17E884u;
    {
        const bool branch_taken_0x17e884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E884u;
            // 0x17e888: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e884) {
            ctx->pc = 0x17E758u;
            goto label_17e758;
        }
    }
    ctx->pc = 0x17E88Cu;
    // 0x17e88c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e890: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17e890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17e894: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17e894u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e898: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17e898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17e89c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8a0: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17e8a4: 0x24c61fd8  addiu       $a2, $a2, 0x1FD8
    ctx->pc = 0x17e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8152));
    // 0x17e8a8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17e8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e8ac: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17e8acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8b0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17E8B0u;
    SET_GPR_U32(ctx, 31, 0x17E8B8u);
    ctx->pc = 0x17E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8B0u;
            // 0x17e8b4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8B8u; }
        if (ctx->pc != 0x17E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8B8u; }
        if (ctx->pc != 0x17E8B8u) { return; }
    }
    ctx->pc = 0x17E8B8u;
    // 0x17e8b8: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x17e8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x17e8bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17e8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8c0: 0x2652a210  addiu       $s2, $s2, -0x5DF0
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943248));
    // 0x17e8c4: 0x2411fffa  addiu       $s1, $zero, -0x6
    ctx->pc = 0x17e8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_17e8c8:
    // 0x17e8c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e8cc: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17e8d0: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17E8D0u;
    {
        const bool branch_taken_0x17e8d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8D0u;
            // 0x17e8d4: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8d0) {
            ctx->pc = 0x17E908u;
            goto label_17e908;
        }
    }
    ctx->pc = 0x17E8D8u;
    // 0x17e8d8: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17e8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17e8dc: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17e8dcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e8e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8e4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17e8e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8ec: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17e8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e8f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17e8f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8f4: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17E8F4u;
    SET_GPR_U32(ctx, 31, 0x17E8FCu);
    ctx->pc = 0x17E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8F4u;
            // 0x17e8f8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8FCu; }
        if (ctx->pc != 0x17E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8FCu; }
        if (ctx->pc != 0x17E8FCu) { return; }
    }
    ctx->pc = 0x17E8FCu;
    // 0x17e8fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17E8FCu;
    {
        const bool branch_taken_0x17e8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8fc) {
            ctx->pc = 0x17E930u;
            goto label_17e930;
        }
    }
    ctx->pc = 0x17E904u;
    // 0x17e904: 0x0  nop
    ctx->pc = 0x17e904u;
    // NOP
label_17e908:
    // 0x17e908: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17e908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17e90c: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17e90cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17e910: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17e910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17e914: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17e914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17e918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e91c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e920: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17e920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17e924: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17e924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17e928: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17E928u;
    SET_GPR_U32(ctx, 31, 0x17E930u);
    ctx->pc = 0x17E92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E928u;
            // 0x17e92c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E930u; }
        if (ctx->pc != 0x17E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E930u; }
        if (ctx->pc != 0x17E930u) { return; }
    }
    ctx->pc = 0x17E930u;
label_17e930:
    // 0x17e930: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E930u;
    {
        const bool branch_taken_0x17e930 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E930u;
            // 0x17e934: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e930) {
            ctx->pc = 0x17E950u;
            goto label_17e950;
        }
    }
    ctx->pc = 0x17E938u;
    // 0x17e938: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17e938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17e93c: 0x8c261638  lw          $a2, 0x1638($at)
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5688)));
    // 0x17e940: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E940u;
    SET_GPR_U32(ctx, 31, 0x17E948u);
    ctx->pc = 0x17E944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E940u;
            // 0x17e944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E948u; }
        if (ctx->pc != 0x17E948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E948u; }
        if (ctx->pc != 0x17E948u) { return; }
    }
    ctx->pc = 0x17E948u;
    // 0x17e948: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17E948u;
    {
        const bool branch_taken_0x17e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e948) {
            ctx->pc = 0x17E9E8u;
            goto label_17e9e8;
        }
    }
    ctx->pc = 0x17E950u;
label_17e950:
    // 0x17e950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e954: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E954u;
    {
        const bool branch_taken_0x17e954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E954u;
            // 0x17e958: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e954) {
            ctx->pc = 0x17E978u;
            goto label_17e978;
        }
    }
    ctx->pc = 0x17E95Cu;
    // 0x17e95c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17e960: 0x8c26163c  lw          $a2, 0x163C($at)
    ctx->pc = 0x17e960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5692)));
    // 0x17e964: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E964u;
    SET_GPR_U32(ctx, 31, 0x17E96Cu);
    ctx->pc = 0x17E968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E964u;
            // 0x17e968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E96Cu; }
        if (ctx->pc != 0x17E96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E96Cu; }
        if (ctx->pc != 0x17E96Cu) { return; }
    }
    ctx->pc = 0x17E96Cu;
    // 0x17e96c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x17E96Cu;
    {
        const bool branch_taken_0x17e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e96c) {
            ctx->pc = 0x17E9E8u;
            goto label_17e9e8;
        }
    }
    ctx->pc = 0x17E974u;
    // 0x17e974: 0x0  nop
    ctx->pc = 0x17e974u;
    // NOP
label_17e978:
    // 0x17e978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e97c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E97Cu;
    {
        const bool branch_taken_0x17e97c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E97Cu;
            // 0x17e980: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e97c) {
            ctx->pc = 0x17E9A0u;
            goto label_17e9a0;
        }
    }
    ctx->pc = 0x17E984u;
    // 0x17e984: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17e988: 0x8c261640  lw          $a2, 0x1640($at)
    ctx->pc = 0x17e988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5696)));
    // 0x17e98c: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E98Cu;
    SET_GPR_U32(ctx, 31, 0x17E994u);
    ctx->pc = 0x17E990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E98Cu;
            // 0x17e990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E994u; }
        if (ctx->pc != 0x17E994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E994u; }
        if (ctx->pc != 0x17E994u) { return; }
    }
    ctx->pc = 0x17E994u;
    // 0x17e994: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17E994u;
    {
        const bool branch_taken_0x17e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e994) {
            ctx->pc = 0x17E9E8u;
            goto label_17e9e8;
        }
    }
    ctx->pc = 0x17E99Cu;
    // 0x17e99c: 0x0  nop
    ctx->pc = 0x17e99cu;
    // NOP
label_17e9a0:
    // 0x17e9a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17e9a4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E9A4u;
    {
        const bool branch_taken_0x17e9a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9A4u;
            // 0x17e9a8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9a4) {
            ctx->pc = 0x17E9C8u;
            goto label_17e9c8;
        }
    }
    ctx->pc = 0x17E9ACu;
    // 0x17e9ac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17e9b0: 0x8c261644  lw          $a2, 0x1644($at)
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5700)));
    // 0x17e9b4: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E9B4u;
    SET_GPR_U32(ctx, 31, 0x17E9BCu);
    ctx->pc = 0x17E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9B4u;
            // 0x17e9b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9BCu; }
        if (ctx->pc != 0x17E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9BCu; }
        if (ctx->pc != 0x17E9BCu) { return; }
    }
    ctx->pc = 0x17E9BCu;
    // 0x17e9bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E9BCu;
    {
        const bool branch_taken_0x17e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9bc) {
            ctx->pc = 0x17E9E8u;
            goto label_17e9e8;
        }
    }
    ctx->pc = 0x17E9C4u;
    // 0x17e9c4: 0x0  nop
    ctx->pc = 0x17e9c4u;
    // NOP
label_17e9c8:
    // 0x17e9c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17e9cc: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17E9CCu;
    {
        const bool branch_taken_0x17e9cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9CCu;
            // 0x17e9d0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9cc) {
            ctx->pc = 0x17E9E8u;
            goto label_17e9e8;
        }
    }
    ctx->pc = 0x17E9D4u;
    // 0x17e9d4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17e9d8: 0x8c261648  lw          $a2, 0x1648($at)
    ctx->pc = 0x17e9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5704)));
    // 0x17e9dc: 0xc060868  jal         func_1821A0
    ctx->pc = 0x17E9DCu;
    SET_GPR_U32(ctx, 31, 0x17E9E4u);
    ctx->pc = 0x17E9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9DCu;
            // 0x17e9e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1821A0u;
    if (runtime->hasFunction(0x1821A0u)) {
        auto targetFn = runtime->lookupFunction(0x1821A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9E4u; }
        if (ctx->pc != 0x17E9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintButton_0x1821a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9E4u; }
        if (ctx->pc != 0x17E9E4u) { return; }
    }
    ctx->pc = 0x17E9E4u;
    // 0x17e9e4: 0x0  nop
    ctx->pc = 0x17e9e4u;
    // NOP
label_17e9e8:
    // 0x17e9e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17e9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17e9ec: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x17e9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17e9f0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17e9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17e9f4: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x17E9F4u;
    {
        const bool branch_taken_0x17e9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9F4u;
            // 0x17e9f8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9f4) {
            ctx->pc = 0x17E8C8u;
            goto label_17e8c8;
        }
    }
    ctx->pc = 0x17E9FCu;
    // 0x17e9fc: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x17e9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x17ea00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ea00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea04: 0x2652a190  addiu       $s2, $s2, -0x5E70
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943120));
    // 0x17ea08: 0x2411fff8  addiu       $s1, $zero, -0x8
    ctx->pc = 0x17ea08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17ea0c: 0x0  nop
    ctx->pc = 0x17ea0cu;
    // NOP
label_17ea10:
    // 0x17ea10: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ea10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ea14: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17ea18: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17EA18u;
    {
        const bool branch_taken_0x17ea18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA18u;
            // 0x17ea1c: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea18) {
            ctx->pc = 0x17EA50u;
            goto label_17ea50;
        }
    }
    ctx->pc = 0x17EA20u;
    // 0x17ea20: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17ea20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17ea24: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17ea24u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17ea28: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17ea2c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ea30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea34: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17ea34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ea38: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17ea38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea3c: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EA3Cu;
    SET_GPR_U32(ctx, 31, 0x17EA44u);
    ctx->pc = 0x17EA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA3Cu;
            // 0x17ea40: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA44u; }
        if (ctx->pc != 0x17EA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA44u; }
        if (ctx->pc != 0x17EA44u) { return; }
    }
    ctx->pc = 0x17EA44u;
    // 0x17ea44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17EA44u;
    {
        const bool branch_taken_0x17ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ea44) {
            ctx->pc = 0x17EA78u;
            goto label_17ea78;
        }
    }
    ctx->pc = 0x17EA4Cu;
    // 0x17ea4c: 0x0  nop
    ctx->pc = 0x17ea4cu;
    // NOP
label_17ea50:
    // 0x17ea50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ea50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ea54: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17ea54u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17ea58: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17ea58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17ea5c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x17ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17ea60: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17ea64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea68: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17ea68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ea6c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17ea6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17ea70: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EA70u;
    SET_GPR_U32(ctx, 31, 0x17EA78u);
    ctx->pc = 0x17EA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA70u;
            // 0x17ea74: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA78u; }
        if (ctx->pc != 0x17EA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA78u; }
        if (ctx->pc != 0x17EA78u) { return; }
    }
    ctx->pc = 0x17EA78u;
label_17ea78:
    // 0x17ea78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17ea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17ea7c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x17ea7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17ea80: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17ea80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17ea84: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17EA84u;
    {
        const bool branch_taken_0x17ea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA84u;
            // 0x17ea88: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea84) {
            ctx->pc = 0x17EA10u;
            goto label_17ea10;
        }
    }
    ctx->pc = 0x17EA8Cu;
    // 0x17ea8c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ea8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ea90: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17ea94: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17EA94u;
    {
        const bool branch_taken_0x17ea94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA94u;
            // 0x17ea98: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea94) {
            ctx->pc = 0x17EAE0u;
            goto label_17eae0;
        }
    }
    ctx->pc = 0x17EA9Cu;
    // 0x17ea9c: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17ea9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17eaa0: 0x8c231614  lw          $v1, 0x1614($at)
    ctx->pc = 0x17eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5652)));
    // 0x17eaa4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17eaa8: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x17eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x17eaac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17eab0: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17eab4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17eab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17eab8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17eab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17eac0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17eac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eac8: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17eac8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17eacc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17eaccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ead0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EAD0u;
    SET_GPR_U32(ctx, 31, 0x17EAD8u);
    ctx->pc = 0x17EAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EAD0u;
            // 0x17ead4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EAD8u; }
        if (ctx->pc != 0x17EAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EAD8u; }
        if (ctx->pc != 0x17EAD8u) { return; }
    }
    ctx->pc = 0x17EAD8u;
    // 0x17ead8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17EAD8u;
    {
        const bool branch_taken_0x17ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ead8) {
            ctx->pc = 0x17EB20u;
            goto label_17eb20;
        }
    }
    ctx->pc = 0x17EAE0u;
label_17eae0:
    // 0x17eae0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17eae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17eae4: 0x8c231614  lw          $v1, 0x1614($at)
    ctx->pc = 0x17eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5652)));
    // 0x17eae8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17eaec: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17eaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17eaf0: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x17eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x17eaf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17eaf8: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17eafc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17eafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17eb00: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17eb00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17eb08: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17eb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eb10: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17eb10u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17eb14: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eb18: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EB18u;
    SET_GPR_U32(ctx, 31, 0x17EB20u);
    ctx->pc = 0x17EB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB18u;
            // 0x17eb1c: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB20u; }
        if (ctx->pc != 0x17EB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB20u; }
        if (ctx->pc != 0x17EB20u) { return; }
    }
    ctx->pc = 0x17EB20u;
label_17eb20:
    // 0x17eb20: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17eb24: 0x8c2327f0  lw          $v1, 0x27F0($at)
    ctx->pc = 0x17eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17eb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eb2c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17EB2Cu;
    {
        const bool branch_taken_0x17eb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB2Cu;
            // 0x17eb30: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb2c) {
            ctx->pc = 0x17EB78u;
            goto label_17eb78;
        }
    }
    ctx->pc = 0x17EB34u;
    // 0x17eb34: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17eb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17eb38: 0x8c231618  lw          $v1, 0x1618($at)
    ctx->pc = 0x17eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x17eb3c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17eb40: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x17eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x17eb44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17eb48: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x17eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17eb4c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17eb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17eb50: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17eb50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17eb58: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17eb5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eb60: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17eb60u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17eb64: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17eb64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17eb68: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EB68u;
    SET_GPR_U32(ctx, 31, 0x17EB70u);
    ctx->pc = 0x17EB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB68u;
            // 0x17eb6c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB70u; }
        if (ctx->pc != 0x17EB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB70u; }
        if (ctx->pc != 0x17EB70u) { return; }
    }
    ctx->pc = 0x17EB70u;
    // 0x17eb70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17EB70u;
    {
        const bool branch_taken_0x17eb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eb70) {
            ctx->pc = 0x17EBB8u;
            goto label_17ebb8;
        }
    }
    ctx->pc = 0x17EB78u;
label_17eb78:
    // 0x17eb78: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17eb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17eb7c: 0x8c231618  lw          $v1, 0x1618($at)
    ctx->pc = 0x17eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x17eb80: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17eb84: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17eb88: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x17eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x17eb8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17eb90: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x17eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17eb94: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17eb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17eb98: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17eb98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17eba0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17eba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eba8: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17eba8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17ebac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ebb0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EBB0u;
    SET_GPR_U32(ctx, 31, 0x17EBB8u);
    ctx->pc = 0x17EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBB0u;
            // 0x17ebb4: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBB8u; }
        if (ctx->pc != 0x17EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBB8u; }
        if (ctx->pc != 0x17EBB8u) { return; }
    }
    ctx->pc = 0x17EBB8u;
label_17ebb8:
    // 0x17ebb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ebb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ebbc: 0x8c2327f0  lw          $v1, 0x27F0($at)
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17ebc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ebc4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17EBC4u;
    {
        const bool branch_taken_0x17ebc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBC4u;
            // 0x17ebc8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebc4) {
            ctx->pc = 0x17EC10u;
            goto label_17ec10;
        }
    }
    ctx->pc = 0x17EBCCu;
    // 0x17ebcc: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17ebccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17ebd0: 0x8c23161c  lw          $v1, 0x161C($at)
    ctx->pc = 0x17ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x17ebd4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17ebd8: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x17ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x17ebdc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ebe0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17ebe4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ebe8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17ebe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ebf0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ebf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ebf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ebf8: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17ebf8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17ebfc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ec00: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EC00u;
    SET_GPR_U32(ctx, 31, 0x17EC08u);
    ctx->pc = 0x17EC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC00u;
            // 0x17ec04: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC08u; }
        if (ctx->pc != 0x17EC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC08u; }
        if (ctx->pc != 0x17EC08u) { return; }
    }
    ctx->pc = 0x17EC08u;
    // 0x17ec08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17EC08u;
    {
        const bool branch_taken_0x17ec08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec08) {
            ctx->pc = 0x17EC50u;
            goto label_17ec50;
        }
    }
    ctx->pc = 0x17EC10u;
label_17ec10:
    // 0x17ec10: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17ec14: 0x8c23161c  lw          $v1, 0x161C($at)
    ctx->pc = 0x17ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x17ec18: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17ec1c: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17ec1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17ec20: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x17ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x17ec24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ec28: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x17ec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17ec2c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17ec2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17ec30: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17ec30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17ec38: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ec3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ec40: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17ec40u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17ec44: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ec48: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17EC48u;
    SET_GPR_U32(ctx, 31, 0x17EC50u);
    ctx->pc = 0x17EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC48u;
            // 0x17ec4c: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC50u; }
        if (ctx->pc != 0x17EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC50u; }
        if (ctx->pc != 0x17EC50u) { return; }
    }
    ctx->pc = 0x17EC50u;
label_17ec50:
    // 0x17ec50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ec50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ec54: 0xc060134  jal         func_1804D0
    ctx->pc = 0x17EC54u;
    SET_GPR_U32(ctx, 31, 0x17EC5Cu);
    ctx->pc = 0x17EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC54u;
            // 0x17ec58: 0x8c242808  lw          $a0, 0x2808($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1804D0u;
    if (runtime->hasFunction(0x1804D0u)) {
        auto targetFn = runtime->lookupFunction(0x1804D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC5Cu; }
        if (ctx->pc != 0x17EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw1p_0x1804d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC5Cu; }
        if (ctx->pc != 0x17EC5Cu) { return; }
    }
    ctx->pc = 0x17EC5Cu;
    // 0x17ec5c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ec5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ec60: 0xc0600a8  jal         func_1802A0
    ctx->pc = 0x17EC60u;
    SET_GPR_U32(ctx, 31, 0x17EC68u);
    ctx->pc = 0x17EC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC60u;
            // 0x17ec64: 0x8c242810  lw          $a0, 0x2810($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1802A0u;
    if (runtime->hasFunction(0x1802A0u)) {
        auto targetFn = runtime->lookupFunction(0x1802A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC68u; }
        if (ctx->pc != 0x17EC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw2p_0x1802a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC68u; }
        if (ctx->pc != 0x17EC68u) { return; }
    }
    ctx->pc = 0x17EC68u;
    // 0x17ec68: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17EC68u;
    SET_GPR_U32(ctx, 31, 0x17EC70u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC70u; }
        if (ctx->pc != 0x17EC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC70u; }
        if (ctx->pc != 0x17EC70u) { return; }
    }
    ctx->pc = 0x17EC70u;
    // 0x17ec70: 0x1660fd21  bnez        $s3, . + 4 + (-0x2DF << 2)
    ctx->pc = 0x17EC70u;
    {
        const bool branch_taken_0x17ec70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ec70) {
            ctx->pc = 0x17E0F8u;
            goto label_17e0f8;
        }
    }
    ctx->pc = 0x17EC78u;
    // 0x17ec78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17ec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17ec7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17ec7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ec80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ec80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ec84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ec84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ec88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC8Cu;
            // 0x17ec90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E0F8u: goto label_17e0f8;
            case 0x17E130u: goto label_17e130;
            case 0x17E150u: goto label_17e150;
            case 0x17E198u: goto label_17e198;
            case 0x17E1A0u: goto label_17e1a0;
            case 0x17E1E8u: goto label_17e1e8;
            case 0x17E1F0u: goto label_17e1f0;
            case 0x17E238u: goto label_17e238;
            case 0x17E240u: goto label_17e240;
            case 0x17E288u: goto label_17e288;
            case 0x17E290u: goto label_17e290;
            case 0x17E2C0u: goto label_17e2c0;
            case 0x17E2F0u: goto label_17e2f0;
            case 0x17E320u: goto label_17e320;
            case 0x17E350u: goto label_17e350;
            case 0x17E380u: goto label_17e380;
            case 0x17E3B0u: goto label_17e3b0;
            case 0x17E3E0u: goto label_17e3e0;
            case 0x17E410u: goto label_17e410;
            case 0x17E440u: goto label_17e440;
            case 0x17E460u: goto label_17e460;
            case 0x17E478u: goto label_17e478;
            case 0x17E498u: goto label_17e498;
            case 0x17E4B8u: goto label_17e4b8;
            case 0x17E4C8u: goto label_17e4c8;
            case 0x17E4F8u: goto label_17e4f8;
            case 0x17E528u: goto label_17e528;
            case 0x17E558u: goto label_17e558;
            case 0x17E588u: goto label_17e588;
            case 0x17E5B8u: goto label_17e5b8;
            case 0x17E5E8u: goto label_17e5e8;
            case 0x17E618u: goto label_17e618;
            case 0x17E648u: goto label_17e648;
            case 0x17E678u: goto label_17e678;
            case 0x17E698u: goto label_17e698;
            case 0x17E6B0u: goto label_17e6b0;
            case 0x17E6D0u: goto label_17e6d0;
            case 0x17E6F0u: goto label_17e6f0;
            case 0x17E700u: goto label_17e700;
            case 0x17E758u: goto label_17e758;
            case 0x17E798u: goto label_17e798;
            case 0x17E7C0u: goto label_17e7c0;
            case 0x17E7E0u: goto label_17e7e0;
            case 0x17E808u: goto label_17e808;
            case 0x17E830u: goto label_17e830;
            case 0x17E858u: goto label_17e858;
            case 0x17E878u: goto label_17e878;
            case 0x17E8C8u: goto label_17e8c8;
            case 0x17E908u: goto label_17e908;
            case 0x17E930u: goto label_17e930;
            case 0x17E950u: goto label_17e950;
            case 0x17E978u: goto label_17e978;
            case 0x17E9A0u: goto label_17e9a0;
            case 0x17E9C8u: goto label_17e9c8;
            case 0x17E9E8u: goto label_17e9e8;
            case 0x17EA10u: goto label_17ea10;
            case 0x17EA50u: goto label_17ea50;
            case 0x17EA78u: goto label_17ea78;
            case 0x17EAE0u: goto label_17eae0;
            case 0x17EB20u: goto label_17eb20;
            case 0x17EB78u: goto label_17eb78;
            case 0x17EBB8u: goto label_17ebb8;
            case 0x17EC10u: goto label_17ec10;
            case 0x17EC50u: goto label_17ec50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EC94u;
}
