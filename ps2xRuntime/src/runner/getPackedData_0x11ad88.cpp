#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getPackedData
// Address: 0x11ad88 - 0x11add8
void getPackedData_0x11ad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getPackedData_0x11ad88");
#endif

    ctx->pc = 0x11ad88u;

    // 0x11ad88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ad8c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x11ad8cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)255u)));
    // 0x11ad90: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x11ad90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ad94: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x11ad94u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x11ad98: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x11ad98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ad9c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x11ad9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x11ada0: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x11ADA0u;
    {
        const bool branch_taken_0x11ada0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADA0u;
            // 0x11ada4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ada0) {
            ctx->pc = 0x11ADCCu;
            goto label_11adcc;
        }
    }
    ctx->pc = 0x11ADA8u;
    // 0x11ada8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x11ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11adac: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x11adacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_11adb0:
    // 0x11adb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11adb4: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x11adb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11adb8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ADB8u;
    {
        const bool branch_taken_0x11adb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x11ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADB8u;
            // 0x11adbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adb8) {
            ctx->pc = 0x11ADD0u;
            goto label_11add0;
        }
    }
    ctx->pc = 0x11ADC0u;
    // 0x11adc0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x11adc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11adc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11ADC4u;
    {
        const bool branch_taken_0x11adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADC4u;
            // 0x11adc8: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adc4) {
            ctx->pc = 0x11ADB0u;
            goto label_11adb0;
        }
    }
    ctx->pc = 0x11ADCCu;
label_11adcc:
    // 0x11adcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11adccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11add0:
    // 0x11add0: 0x3e00008  jr          $ra
    ctx->pc = 0x11ADD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ADB0u: goto label_11adb0;
            case 0x11ADCCu: goto label_11adcc;
            case 0x11ADD0u: goto label_11add0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ADD8u;
}
