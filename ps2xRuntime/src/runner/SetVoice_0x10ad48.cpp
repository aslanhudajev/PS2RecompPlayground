#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVoice
// Address: 0x10ad48 - 0x10aea8
void SetVoice_0x10ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVoice_0x10ad48");
#endif

    ctx->pc = 0x10ad48u;

    // 0x10ad48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ad4c: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x10ad4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10ad50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ad54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ad58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10ad58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad5c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ad60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10ad60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ad68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AD68u;
    {
        const bool branch_taken_0x10ad68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD68u;
            // 0x10ad6c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad68) {
            ctx->pc = 0x10AD7Cu;
            goto label_10ad7c;
        }
    }
    ctx->pc = 0x10AD70u;
    // 0x10ad70: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x10ad74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10AD74u;
    {
        const bool branch_taken_0x10ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD74u;
            // 0x10ad78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad74) {
            ctx->pc = 0x10AD80u;
            goto label_10ad80;
        }
    }
    ctx->pc = 0x10AD7Cu;
label_10ad7c:
    // 0x10ad7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ad7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ad80:
    // 0x10ad80: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10ad84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad88: 0xc28025  or          $s0, $a2, $v0
    ctx->pc = 0x10ad88u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10ad8c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10ad8cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10ad90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10ad90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad94: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AD94u;
    SET_GPR_U32(ctx, 31, 0x10AD9Cu);
    ctx->pc = 0x10AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD94u;
            // 0x10ad98: 0x24071eff  addiu       $a3, $zero, 0x1EFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD9Cu; }
        if (ctx->pc != 0x10AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD9Cu; }
        if (ctx->pc != 0x10AD9Cu) { return; }
    }
    ctx->pc = 0x10AD9Cu;
    // 0x10ad9c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x10ad9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ada0: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ADA0u;
    {
        const bool branch_taken_0x10ada0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x10ada0) {
            ctx->pc = 0x10ADA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADA0u;
            // 0x10ada4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ADB8u;
            goto label_10adb8;
        }
    }
    ctx->pc = 0x10ADA8u;
    // 0x10ada8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10adac: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ADACu;
    SET_GPR_U32(ctx, 31, 0x10ADB4u);
    ctx->pc = 0x10ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADACu;
            // 0x10adb0: 0x24845eb0  addiu       $a0, $a0, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADB4u; }
        if (ctx->pc != 0x10ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADB4u; }
        if (ctx->pc != 0x10ADB4u) { return; }
    }
    ctx->pc = 0x10ADB4u;
    // 0x10adb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10adb8:
    // 0x10adb8: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10adb8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10adbc: 0x36060100  ori         $a2, $s0, 0x100
    ctx->pc = 0x10adbcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)256u)));
    // 0x10adc0: 0xc045c80  jal         func_117200
    ctx->pc = 0x10ADC0u;
    SET_GPR_U32(ctx, 31, 0x10ADC8u);
    ctx->pc = 0x10ADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADC0u;
            // 0x10adc4: 0x24071eff  addiu       $a3, $zero, 0x1EFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADC8u; }
        if (ctx->pc != 0x10ADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADC8u; }
        if (ctx->pc != 0x10ADC8u) { return; }
    }
    ctx->pc = 0x10ADC8u;
    // 0x10adc8: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ADC8u;
    {
        const bool branch_taken_0x10adc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10ADCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADC8u;
            // 0x10adcc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adc8) {
            ctx->pc = 0x10ADE0u;
            goto label_10ade0;
        }
    }
    ctx->pc = 0x10ADD0u;
    // 0x10add0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10add0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10add4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ADD4u;
    SET_GPR_U32(ctx, 31, 0x10ADDCu);
    ctx->pc = 0x10ADD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADD4u;
            // 0x10add8: 0x24845eb8  addiu       $a0, $a0, 0x5EB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADDCu; }
        if (ctx->pc != 0x10ADDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADDCu; }
        if (ctx->pc != 0x10ADDCu) { return; }
    }
    ctx->pc = 0x10ADDCu;
    // 0x10addc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10addcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10ade0:
    // 0x10ade0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ade4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10ade4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10ade8: 0xc045c80  jal         func_117200
    ctx->pc = 0x10ADE8u;
    SET_GPR_U32(ctx, 31, 0x10ADF0u);
    ctx->pc = 0x10ADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADE8u;
            // 0x10adec: 0x36060200  ori         $a2, $s0, 0x200 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)512u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADF0u; }
        if (ctx->pc != 0x10ADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADF0u; }
        if (ctx->pc != 0x10ADF0u) { return; }
    }
    ctx->pc = 0x10ADF0u;
    // 0x10adf0: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10ADF0u;
    {
        const bool branch_taken_0x10adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10ADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADF0u;
            // 0x10adf4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adf0) {
            ctx->pc = 0x10AE08u;
            goto label_10ae08;
        }
    }
    ctx->pc = 0x10ADF8u;
    // 0x10adf8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10adfc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10ADFCu;
    SET_GPR_U32(ctx, 31, 0x10AE04u);
    ctx->pc = 0x10AE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADFCu;
            // 0x10ae00: 0x24845ec0  addiu       $a0, $a0, 0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE04u; }
        if (ctx->pc != 0x10AE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE04u; }
        if (ctx->pc != 0x10AE04u) { return; }
    }
    ctx->pc = 0x10AE04u;
    // 0x10ae04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10ae04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10ae08:
    // 0x10ae08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae0c: 0x34058050  ori         $a1, $zero, 0x8050
    ctx->pc = 0x10ae0cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32848u)));
    // 0x10ae10: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AE10u;
    SET_GPR_U32(ctx, 31, 0x10AE18u);
    ctx->pc = 0x10AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE10u;
            // 0x10ae14: 0x36062040  ori         $a2, $s0, 0x2040 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE18u; }
        if (ctx->pc != 0x10AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE18u; }
        if (ctx->pc != 0x10AE18u) { return; }
    }
    ctx->pc = 0x10AE18u;
    // 0x10ae18: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AE18u;
    {
        const bool branch_taken_0x10ae18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x10ae18) {
            ctx->pc = 0x10AE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE18u;
            // 0x10ae1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AE30u;
            goto label_10ae30;
        }
    }
    ctx->pc = 0x10AE20u;
    // 0x10ae20: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ae24: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AE24u;
    SET_GPR_U32(ctx, 31, 0x10AE2Cu);
    ctx->pc = 0x10AE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE24u;
            // 0x10ae28: 0x24845ec8  addiu       $a0, $a0, 0x5EC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE2Cu; }
        if (ctx->pc != 0x10AE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE2Cu; }
        if (ctx->pc != 0x10AE2Cu) { return; }
    }
    ctx->pc = 0x10AE2Cu;
    // 0x10ae2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ae30:
    // 0x10ae30: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10ae30u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10ae34: 0x36060300  ori         $a2, $s0, 0x300
    ctx->pc = 0x10ae34u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)768u)));
    // 0x10ae38: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AE38u;
    SET_GPR_U32(ctx, 31, 0x10AE40u);
    ctx->pc = 0x10AE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE38u;
            // 0x10ae3c: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE40u; }
        if (ctx->pc != 0x10AE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE40u; }
        if (ctx->pc != 0x10AE40u) { return; }
    }
    ctx->pc = 0x10AE40u;
    // 0x10ae40: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AE40u;
    {
        const bool branch_taken_0x10ae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE40u;
            // 0x10ae44: 0x36060400  ori         $a2, $s0, 0x400 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1024u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae40) {
            ctx->pc = 0x10AE58u;
            goto label_10ae58;
        }
    }
    ctx->pc = 0x10AE48u;
    // 0x10ae48: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ae4c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AE4Cu;
    SET_GPR_U32(ctx, 31, 0x10AE54u);
    ctx->pc = 0x10AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE4Cu;
            // 0x10ae50: 0x24845ed0  addiu       $a0, $a0, 0x5ED0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE54u; }
        if (ctx->pc != 0x10AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE54u; }
        if (ctx->pc != 0x10AE54u) { return; }
    }
    ctx->pc = 0x10AE54u;
    // 0x10ae54: 0x36060400  ori         $a2, $s0, 0x400
    ctx->pc = 0x10ae54u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1024u)));
label_10ae58:
    // 0x10ae58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae5c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10ae5cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10ae60: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AE60u;
    SET_GPR_U32(ctx, 31, 0x10AE68u);
    ctx->pc = 0x10AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE60u;
            // 0x10ae64: 0x24071fc0  addiu       $a3, $zero, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE68u; }
        if (ctx->pc != 0x10AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AE68u; }
        if (ctx->pc != 0x10AE68u) { return; }
    }
    ctx->pc = 0x10AE68u;
    // 0x10ae68: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AE68u;
    {
        const bool branch_taken_0x10ae68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE68u;
            // 0x10ae6c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae68) {
            ctx->pc = 0x10AE90u;
            goto label_10ae90;
        }
    }
    ctx->pc = 0x10AE70u;
    // 0x10ae70: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10ae74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10ae74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ae78: 0x24845ed8  addiu       $a0, $a0, 0x5ED8
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24280));
    // 0x10ae7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ae7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ae80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ae80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ae84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae88: 0x804ace4  j           func_12B390
    ctx->pc = 0x10AE88u;
    ctx->pc = 0x10AE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE88u;
            // 0x10ae8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10AE90u;
label_10ae90:
    // 0x10ae90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10ae90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ae94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ae94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ae98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ae98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ae9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ae9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10aea0: 0x3e00008  jr          $ra
    ctx->pc = 0x10AEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AEA0u;
            // 0x10aea4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AD7Cu: goto label_10ad7c;
            case 0x10AD80u: goto label_10ad80;
            case 0x10ADB8u: goto label_10adb8;
            case 0x10ADE0u: goto label_10ade0;
            case 0x10AE08u: goto label_10ae08;
            case 0x10AE30u: goto label_10ae30;
            case 0x10AE58u: goto label_10ae58;
            case 0x10AE90u: goto label_10ae90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AEA8u;
}
