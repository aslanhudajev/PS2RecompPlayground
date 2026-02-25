#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufCreate
// Address: 0x18ace0 - 0x18ae20
void voBufCreate_0x18ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufCreate_0x18ace0");
#endif

    ctx->pc = 0x18ace0u;

    // 0x18ace0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18ace4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x18ace4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x18ace8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x18ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x18acec: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x18acecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x18acf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18acf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18acf4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x18acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x18acf8: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x18ACF8u;
    {
        const bool branch_taken_0x18acf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ACF8u;
            // 0x18acfc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acf8) {
            ctx->pc = 0x18AE18u;
            goto label_18ae18;
        }
    }
    ctx->pc = 0x18AD00u;
    // 0x18ad00: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x18ad00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18ad04: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x18AD04u;
    {
        const bool branch_taken_0x18ad04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AD04u;
            // 0x18ad08: 0x24e5fff8  addiu       $a1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad04) {
            ctx->pc = 0x18ADC0u;
            goto label_18adc0;
        }
    }
    ctx->pc = 0x18AD0Cu;
    // 0x18ad0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18ad0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad10: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x18ad10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x18ad14: 0x35097200  ori         $t1, $t0, 0x7200
    ctx->pc = 0x18ad14u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)29184u)));
label_18ad18:
    // 0x18ad18: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad1c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x18ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18ad20: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x18ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x18ad24: 0xc5402a  slt         $t0, $a2, $a1
    ctx->pc = 0x18ad24u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18ad28: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad2c: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x18ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x18ad30: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad34: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad38: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18ad38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18ad3c: 0xac20ce40  sw          $zero, -0x31C0($at)
    ctx->pc = 0x18ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954560), GPR_U32(ctx, 0));
    // 0x18ad40: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad44: 0x3c01000a  lui         $at, 0xA
    ctx->pc = 0x18ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)10 << 16));
    // 0x18ad48: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad4c: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18ad4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18ad50: 0xac209c80  sw          $zero, -0x6380($at)
    ctx->pc = 0x18ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941824), GPR_U32(ctx, 0));
    // 0x18ad54: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad58: 0x3c01000e  lui         $at, 0xE
    ctx->pc = 0x18ad58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14 << 16));
    // 0x18ad5c: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad60: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18ad64: 0xac206ac0  sw          $zero, 0x6AC0($at)
    ctx->pc = 0x18ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27328), GPR_U32(ctx, 0));
    // 0x18ad68: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad6c: 0x3c010013  lui         $at, 0x13
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19 << 16));
    // 0x18ad70: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad74: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18ad74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18ad78: 0xac203900  sw          $zero, 0x3900($at)
    ctx->pc = 0x18ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14592), GPR_U32(ctx, 0));
    // 0x18ad7c: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad80: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x18ad80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x18ad84: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad88: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18ad88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18ad8c: 0xac200740  sw          $zero, 0x740($at)
    ctx->pc = 0x18ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1856), GPR_U32(ctx, 0));
    // 0x18ad90: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ad90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ad94: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x18ad94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x18ad98: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18ad98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18ad9c: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18ad9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18ada0: 0xac20d580  sw          $zero, -0x2A80($at)
    ctx->pc = 0x18ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956416), GPR_U32(ctx, 0));
    // 0x18ada4: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x18ada4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ada8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x18ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18adac: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x18adb0: 0x1410821  addu        $at, $t2, $at
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x18adb4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x18adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18adb8: 0x1500ffd7  bnez        $t0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18ADB8u;
    {
        const bool branch_taken_0x18adb8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADB8u;
            // 0x18adbc: 0xac20a3c0  sw          $zero, -0x5C40($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adb8) {
            ctx->pc = 0x18AD18u;
            goto label_18ad18;
        }
    }
    ctx->pc = 0x18ADC0u;
label_18adc0:
    // 0x18adc0: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x18adc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x18adc4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x18ADC4u;
    {
        const bool branch_taken_0x18adc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18ADC4u;
            // 0x18adc8: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adc4) {
            ctx->pc = 0x18AE18u;
            goto label_18ae18;
        }
    }
    ctx->pc = 0x18ADCCu;
    // 0x18adcc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18add0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18add0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18add4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18add8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18addc: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x18addcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18ade0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18ade4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18ade8: 0x34980  sll         $t1, $v1, 6
    ctx->pc = 0x18ade8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18adec: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x18adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x18adf0: 0x3465ce40  ori         $a1, $v1, 0xCE40
    ctx->pc = 0x18adf0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52800u)));
    // 0x18adf4: 0x0  nop
    ctx->pc = 0x18adf4u;
    // NOP
label_18adf8:
    // 0x18adf8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x18adf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18adfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18adfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18ae00: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x18ae00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x18ae04: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x18ae04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x18ae08: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x18ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x18ae0c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AE0Cu;
    {
        const bool branch_taken_0x18ae0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE0Cu;
            // 0x18ae10: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae0c) {
            ctx->pc = 0x18ADF8u;
            goto label_18adf8;
        }
    }
    ctx->pc = 0x18AE14u;
    // 0x18ae14: 0x0  nop
    ctx->pc = 0x18ae14u;
    // NOP
label_18ae18:
    // 0x18ae18: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AD18u: goto label_18ad18;
            case 0x18ADC0u: goto label_18adc0;
            case 0x18ADF8u: goto label_18adf8;
            case 0x18AE18u: goto label_18ae18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18AE20u;
}
