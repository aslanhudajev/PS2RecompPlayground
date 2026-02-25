#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: checkModelVersion
// Address: 0x10ad70 - 0x10ae10
void checkModelVersion_0x10ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("checkModelVersion_0x10ad70");
#endif

    ctx->pc = 0x10ad70u;

    // 0x10ad70: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x10ad74: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x10ad78: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x10ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x10ad7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ad80: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x10ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x10ad84: 0x2484cf98  addiu       $a0, $a0, -0x3068
    ctx->pc = 0x10ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954904));
    // 0x10ad88: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10ad88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10ad8c: 0xc04cb80  jal         func_132E00
    ctx->pc = 0x10AD8Cu;
    SET_GPR_U32(ctx, 31, 0x10AD94u);
    ctx->pc = 0x10AD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD8Cu;
            // 0x10ad90: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E00u;
    if (runtime->hasFunction(0x132E00u)) {
        auto targetFn = runtime->lookupFunction(0x132E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD94u; }
        if (ctx->pc != 0x10AD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x132e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AD94u; }
        if (ctx->pc != 0x10AD94u) { return; }
    }
    ctx->pc = 0x10AD94u;
    // 0x10ad94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ad94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ad98: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AD98u;
    {
        const bool branch_taken_0x10ad98 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10AD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AD98u;
            // 0x10ad9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad98) {
            ctx->pc = 0x10ADA8u;
            goto label_10ada8;
        }
    }
    ctx->pc = 0x10ADA0u;
    // 0x10ada0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10ADA0u;
    {
        const bool branch_taken_0x10ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADA0u;
            // 0x10ada4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ada0) {
            ctx->pc = 0x10ADF8u;
            goto label_10adf8;
        }
    }
    ctx->pc = 0x10ADA8u;
label_10ada8:
    // 0x10ada8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10ADA8u;
    {
        const bool branch_taken_0x10ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADA8u;
            // 0x10adac: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ada8) {
            ctx->pc = 0x10ADB4u;
            goto label_10adb4;
        }
    }
    ctx->pc = 0x10ADB0u;
label_10adb0:
    // 0x10adb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10adb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10adb4:
    // 0x10adb4: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x10adb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x10adb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10ADB8u;
    {
        const bool branch_taken_0x10adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADB8u;
            // 0x10adbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10adb8) {
            ctx->pc = 0x10ADD8u;
            goto label_10add8;
        }
    }
    ctx->pc = 0x10ADC0u;
    // 0x10adc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10adc4: 0xc04cd10  jal         func_133440
    ctx->pc = 0x10ADC4u;
    SET_GPR_U32(ctx, 31, 0x10ADCCu);
    ctx->pc = 0x10ADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADC4u;
            // 0x10adc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133440u;
    if (runtime->hasFunction(0x133440u)) {
        auto targetFn = runtime->lookupFunction(0x133440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADCCu; }
        if (ctx->pc != 0x10ADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x133440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADCCu; }
        if (ctx->pc != 0x10ADCCu) { return; }
    }
    ctx->pc = 0x10ADCCu;
    // 0x10adcc: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x10adccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10add0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10ADD0u;
    {
        const bool branch_taken_0x10add0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADD0u;
            // 0x10add4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10add0) {
            ctx->pc = 0x10ADB0u;
            goto label_10adb0;
        }
    }
    ctx->pc = 0x10ADD8u;
label_10add8:
    // 0x10add8: 0xc04cc22  jal         func_133088
    ctx->pc = 0x10ADD8u;
    SET_GPR_U32(ctx, 31, 0x10ADE0u);
    ctx->pc = 0x10ADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADD8u;
            // 0x10addc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133088u;
    if (runtime->hasFunction(0x133088u)) {
        auto targetFn = runtime->lookupFunction(0x133088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADE0u; }
        if (ctx->pc != 0x10ADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x133088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADE0u; }
        if (ctx->pc != 0x10ADE0u) { return; }
    }
    ctx->pc = 0x10ADE0u;
    // 0x10ade0: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x10ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x10ade4: 0xc04e078  jal         func_1381E0
    ctx->pc = 0x10ADE4u;
    SET_GPR_U32(ctx, 31, 0x10ADECu);
    ctx->pc = 0x10ADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ADE4u;
            // 0x10ade8: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381E0u;
    if (runtime->hasFunction(0x1381E0u)) {
        auto targetFn = runtime->lookupFunction(0x1381E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADECu; }
        if (ctx->pc != 0x10ADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x1381e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ADECu; }
        if (ctx->pc != 0x10ADECu) { return; }
    }
    ctx->pc = 0x10ADECu;
    // 0x10adec: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x10adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x10adf0: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x10adf0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)22128u)));
    // 0x10adf4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x10adf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10adf8:
    // 0x10adf8: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x10adf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10adfc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10adfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10ae00: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10ae00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10ae04: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10ae04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AE08u;
            // 0x10ae0c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10ADA8u: goto label_10ada8;
            case 0x10ADB0u: goto label_10adb0;
            case 0x10ADB4u: goto label_10adb4;
            case 0x10ADD8u: goto label_10add8;
            case 0x10ADF8u: goto label_10adf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10AE10u;
}
