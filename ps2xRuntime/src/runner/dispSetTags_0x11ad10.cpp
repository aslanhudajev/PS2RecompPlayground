#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dispSetTags
// Address: 0x11ad10 - 0x11b194
void dispSetTags_0x11ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dispSetTags_0x11ad10");
#endif

    ctx->pc = 0x11ad10u;

    // 0x11ad10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11ad14: 0x3c0d0fff  lui         $t5, 0xFFF
    ctx->pc = 0x11ad14u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4095 << 16));
    // 0x11ad18: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x11ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x11ad1c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11ad1cu;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 13), _mm_cvtsi32_si128((int)65535u)));
    // 0x11ad20: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x11ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x11ad24: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x11ad24u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 13)));
    // 0x11ad28: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x11ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x11ad2c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x11ad2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ad30: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x11ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x11ad34: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x11ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x11ad38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ad38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad3c: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x11ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x11ad40: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x11ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x11ad44: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x11ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x11ad48: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x11ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
    // 0x11ad4c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x11ad4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x11ad50: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11ad54: 0x8fb10128  lw          $s1, 0x128($sp)
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x11ad58: 0x8c8e0034  lw          $t6, 0x34($a0)
    ctx->pc = 0x11ad58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11ad5c: 0x111fc2  srl         $v1, $s1, 31
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x11ad60: 0x11a103  sra         $s4, $s1, 4
    ctx->pc = 0x11ad60u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 17), 4));
    // 0x11ad64: 0x25cc001f  addiu       $t4, $t6, 0x1F
    ctx->pc = 0x11ad64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 31));
    // 0x11ad68: 0x25c2003e  addiu       $v0, $t6, 0x3E
    ctx->pc = 0x11ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 62));
    // 0x11ad6c: 0x2ac202a  slt         $a0, $s5, $t4
    ctx->pc = 0x11ad6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x11ad70: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11ad74: 0x184100b  movn        $v0, $t4, $a0
    ctx->pc = 0x11ad74u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x11ad78: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x11ad78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x11ad7c: 0x27943  sra         $t7, $v0, 5
    ctx->pc = 0x11ad7cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 5));
    // 0x11ad80: 0xe6040  sll         $t4, $t6, 1
    ctx->pc = 0x11ad80u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x11ad84: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x11ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x11ad88: 0xf2180  sll         $a0, $t7, 6
    ctx->pc = 0x11ad88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 6));
    // 0x11ad8c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x11ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x11ad90: 0x3c100  sll         $t8, $v1, 4
    ctx->pc = 0x11ad90u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11ad94: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x11ad94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11ad98: 0x2f103  sra         $fp, $v0, 4
    ctx->pc = 0x11ad98u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 4));
    // 0x11ad9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11ada0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x11ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x11ada4: 0xa26825  or          $t5, $a1, $v0
    ctx->pc = 0x11ada4u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x11ada8: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x11ada8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adac: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x11adacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x11adb0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x11adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x11adb4: 0xafb20038  sw          $s2, 0x38($sp)
    ctx->pc = 0x11adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 18));
    // 0x11adb8: 0x14e0007f  bnez        $a3, . + 4 + (0x7F << 2)
    ctx->pc = 0x11ADB8u;
    {
        const bool branch_taken_0x11adb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ADB8u;
            // 0x11adbc: 0xafb8003c  sw          $t8, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adb8) {
            ctx->pc = 0x11AFB8u;
            goto label_11afb8;
        }
    }
    ctx->pc = 0x11ADC0u;
    // 0x11adc0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x11adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11adc4: 0xe5140  sll         $t2, $t6, 5
    ctx->pc = 0x11adc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
    // 0x11adc8: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x11adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11adcc: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x11adccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x11add0: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x11add0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11add4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x11add4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x11add8: 0xc3900  sll         $a3, $t4, 4
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x11addc: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x11addcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x11ade0: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x11ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x11ade4: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x11ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x11ade8: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x11ade8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11adec: 0x2610007e  addiu       $s0, $s0, 0x7E
    ctx->pc = 0x11adecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
    // 0x11adf0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x11adf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x11adf4: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x11adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x11adf8: 0x108183  sra         $s0, $s0, 6
    ctx->pc = 0x11adf8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
    // 0x11adfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11ae00: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x11ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x11ae04: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x11ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x11ae08: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x11ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x11ae0c: 0x108980  sll         $s1, $s0, 6
    ctx->pc = 0x11ae0cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11ae10: 0xafaa0064  sw          $t2, 0x64($sp)
    ctx->pc = 0x11ae10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 10));
    // 0x11ae14: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x11ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae18: 0x1f18818  mult        $s1, $t7, $s1
    ctx->pc = 0x11ae18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11ae1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ae1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ae20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ae24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae28: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x11ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x11ae2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11ae2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ae30: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x11ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x11ae34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ae34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae38: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x11ae38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ae3c: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x11ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    // 0x11ae40: 0xafb8006c  sw          $t8, 0x6C($sp)
    ctx->pc = 0x11ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 24));
    // 0x11ae44: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x11ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x11ae48: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x11ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x11ae4c: 0xc046d0e  jal         func_11B438
    ctx->pc = 0x11AE4Cu;
    SET_GPR_U32(ctx, 31, 0x11AE54u);
    ctx->pc = 0x11AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE4Cu;
            // 0x11ae50: 0xafb20048  sw          $s2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B438u;
    if (runtime->hasFunction(0x11B438u)) {
        auto targetFn = runtime->lookupFunction(0x11B438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE54u; }
        if (ctx->pc != 0x11AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setDMAscTag_0x11b438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE54u; }
        if (ctx->pc != 0x11AE54u) { return; }
    }
    ctx->pc = 0x11AE54u;
    // 0x11ae54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae58: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11ae5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ae60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ae60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ae64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ae68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ae6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae70: 0xc046d24  jal         func_11B490
    ctx->pc = 0x11AE70u;
    SET_GPR_U32(ctx, 31, 0x11AE78u);
    ctx->pc = 0x11AE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE70u;
            // 0x11ae74: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B490u;
    if (runtime->hasFunction(0x11B490u)) {
        auto targetFn = runtime->lookupFunction(0x11B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE78u; }
        if (ctx->pc != 0x11AE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE78u; }
        if (ctx->pc != 0x11AE78u) { return; }
    }
    ctx->pc = 0x11AE78u;
    // 0x11ae78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ae7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ae80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae84: 0xc046e6c  jal         func_11B9B0
    ctx->pc = 0x11AE84u;
    SET_GPR_U32(ctx, 31, 0x11AE8Cu);
    ctx->pc = 0x11AE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE84u;
            // 0x11ae88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B9B0u;
    if (runtime->hasFunction(0x11B9B0u)) {
        auto targetFn = runtime->lookupFunction(0x11B9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE8Cu; }
        if (ctx->pc != 0x11AE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setBITBLTBUF_0x11b9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE8Cu; }
        if (ctx->pc != 0x11AE8Cu) { return; }
    }
    ctx->pc = 0x11AE8Cu;
    // 0x11ae8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x11ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11ae94: 0xc046e84  jal         func_11BA10
    ctx->pc = 0x11AE94u;
    SET_GPR_U32(ctx, 31, 0x11AE9Cu);
    ctx->pc = 0x11AE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE94u;
            // 0x11ae98: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA10u;
    if (runtime->hasFunction(0x11BA10u)) {
        auto targetFn = runtime->lookupFunction(0x11BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE9Cu; }
        if (ctx->pc != 0x11AE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTRXREG_0x11ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE9Cu; }
        if (ctx->pc != 0x11AE9Cu) { return; }
    }
    ctx->pc = 0x11AE9Cu;
    // 0x11ae9c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x11ae9cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aea0: 0x1bc00060  blez        $fp, . + 4 + (0x60 << 2)
    ctx->pc = 0x11AEA0u;
    {
        const bool branch_taken_0x11aea0 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x11AEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEA0u;
            // 0x11aea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aea0) {
            ctx->pc = 0x11B024u;
            goto label_11b024;
        }
    }
    ctx->pc = 0x11AEA8u;
    // 0x11aea8: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x11aea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11aeac: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x11aeacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aeb0: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x11aeb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11aeb4: 0x0  nop
    ctx->pc = 0x11aeb4u;
    // NOP
label_11aeb8:
    // 0x11aeb8: 0x1a800038  blez        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x11AEB8u;
    {
        const bool branch_taken_0x11aeb8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x11AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEB8u;
            // 0x11aebc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeb8) {
            ctx->pc = 0x11AF9Cu;
            goto label_11af9c;
        }
    }
    ctx->pc = 0x11AEC0u;
    // 0x11aec0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11aec4: 0x69100  sll         $s2, $a2, 4
    ctx->pc = 0x11aec4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x11aec8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x11aec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aecc: 0x0  nop
    ctx->pc = 0x11aeccu;
    // NOP
label_11aed0:
    // 0x11aed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11aed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11aed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aedc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11aedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11aee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aee4: 0xc046d0e  jal         func_11B438
    ctx->pc = 0x11AEE4u;
    SET_GPR_U32(ctx, 31, 0x11AEECu);
    ctx->pc = 0x11AEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEE4u;
            // 0x11aee8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B438u;
    if (runtime->hasFunction(0x11B438u)) {
        auto targetFn = runtime->lookupFunction(0x11B438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEECu; }
        if (ctx->pc != 0x11AEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setDMAscTag_0x11b438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEECu; }
        if (ctx->pc != 0x11AEECu) { return; }
    }
    ctx->pc = 0x11AEECu;
    // 0x11aeec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aef0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11aef4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11aef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aefc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11aefcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11af00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11af04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af08: 0xc046d24  jal         func_11B490
    ctx->pc = 0x11AF08u;
    SET_GPR_U32(ctx, 31, 0x11AF10u);
    ctx->pc = 0x11AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF08u;
            // 0x11af0c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B490u;
    if (runtime->hasFunction(0x11B490u)) {
        auto targetFn = runtime->lookupFunction(0x11B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF10u; }
        if (ctx->pc != 0x11AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF10u; }
        if (ctx->pc != 0x11AF10u) { return; }
    }
    ctx->pc = 0x11AF10u;
    // 0x11af10: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x11af10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11af14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af1c: 0xc046e78  jal         func_11B9E0
    ctx->pc = 0x11AF1Cu;
    SET_GPR_U32(ctx, 31, 0x11AF24u);
    ctx->pc = 0x11AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF1Cu;
            // 0x11af20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B9E0u;
    if (runtime->hasFunction(0x11B9E0u)) {
        auto targetFn = runtime->lookupFunction(0x11B9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF24u; }
        if (ctx->pc != 0x11AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTRXPOS_0x11b9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF24u; }
        if (ctx->pc != 0x11AF24u) { return; }
    }
    ctx->pc = 0x11AF24u;
    // 0x11af24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11af24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11af28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af2c: 0xc046e90  jal         func_11BA40
    ctx->pc = 0x11AF2Cu;
    SET_GPR_U32(ctx, 31, 0x11AF34u);
    ctx->pc = 0x11AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF2Cu;
            // 0x11af30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA40u;
    if (runtime->hasFunction(0x11BA40u)) {
        auto targetFn = runtime->lookupFunction(0x11BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF34u; }
        if (ctx->pc != 0x11AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTRXDIR_0x11ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF34u; }
        if (ctx->pc != 0x11AF34u) { return; }
    }
    ctx->pc = 0x11AF34u;
    // 0x11af34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11af38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11af3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af40: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11af40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11af44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11af44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11af48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11af4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af50: 0xc046d24  jal         func_11B490
    ctx->pc = 0x11AF50u;
    SET_GPR_U32(ctx, 31, 0x11AF58u);
    ctx->pc = 0x11AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF50u;
            // 0x11af54: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B490u;
    if (runtime->hasFunction(0x11B490u)) {
        auto targetFn = runtime->lookupFunction(0x11B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF58u; }
        if (ctx->pc != 0x11AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF58u; }
        if (ctx->pc != 0x11AF58u) { return; }
    }
    ctx->pc = 0x11AF58u;
    // 0x11af58: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x11af58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x11af5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11af5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x11af60u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x11af64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11af64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af68: 0x2663024  and         $a2, $s3, $a2
    ctx->pc = 0x11af68u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 19), GPR_VEC(ctx, 6)));
    // 0x11af6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11af6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af70: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11af70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11af74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11af74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af78: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x11af78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11af7c: 0xc046d0e  jal         func_11B438
    ctx->pc = 0x11AF7Cu;
    SET_GPR_U32(ctx, 31, 0x11AF84u);
    ctx->pc = 0x11AF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF7Cu;
            // 0x11af80: 0x26730400  addiu       $s3, $s3, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B438u;
    if (runtime->hasFunction(0x11B438u)) {
        auto targetFn = runtime->lookupFunction(0x11B438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF84u; }
        if (ctx->pc != 0x11AF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setDMAscTag_0x11b438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF84u; }
        if (ctx->pc != 0x11AF84u) { return; }
    }
    ctx->pc = 0x11AF84u;
    // 0x11af84: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x11af84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af88: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x11af88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11af8c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x11AF8Cu;
    {
        const bool branch_taken_0x11af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF8Cu;
            // 0x11af90: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af8c) {
            ctx->pc = 0x11AED0u;
            goto label_11aed0;
        }
    }
    ctx->pc = 0x11AF94u;
    // 0x11af94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AF94u;
    {
        const bool branch_taken_0x11af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF94u;
            // 0x11af98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af94) {
            ctx->pc = 0x11AFA4u;
            goto label_11afa4;
        }
    }
    ctx->pc = 0x11AF9Cu;
label_11af9c:
    // 0x11af9c: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x11af9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11afa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11afa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11afa4:
    // 0x11afa4: 0xde102a  slt         $v0, $a2, $fp
    ctx->pc = 0x11afa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x11afa8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x11AFA8u;
    {
        const bool branch_taken_0x11afa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFA8u;
            // 0x11afac: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afa8) {
            ctx->pc = 0x11AEB8u;
            goto label_11aeb8;
        }
    }
    ctx->pc = 0x11AFB0u;
    // 0x11afb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11AFB0u;
    {
        const bool branch_taken_0x11afb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFB0u;
            // 0x11afb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afb0) {
            ctx->pc = 0x11B038u;
            goto label_11b038;
        }
    }
    ctx->pc = 0x11AFB8u;
label_11afb8:
    // 0x11afb8: 0xf1940  sll         $v1, $t7, 5
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
    // 0x11afbc: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x11afc0: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x11afc4: 0xe2140  sll         $a0, $t6, 5
    ctx->pc = 0x11afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 5));
    // 0x11afc8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x11afc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11afcc: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x11afccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x11afd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11afd4: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x11afd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x11afd8: 0xb4900  sll         $t1, $t3, 4
    ctx->pc = 0x11afd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x11afdc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x11afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x11afe0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11afe4: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x11afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x11afe8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x11afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x11afec: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11aff0: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x11aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x11aff4: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x11aff4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aff8: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x11aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x11affc: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11b000: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x11b000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x11b004: 0xafa9005c  sw          $t1, 0x5C($sp)
    ctx->pc = 0x11b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 9));
    // 0x11b008: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x11b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x11b00c: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x11b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x11b010: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x11b010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    // 0x11b014: 0xafb8006c  sw          $t8, 0x6C($sp)
    ctx->pc = 0x11b014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 24));
    // 0x11b018: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x11b018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x11b01c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B01Cu;
    {
        const bool branch_taken_0x11b01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B01Cu;
            // 0x11b020: 0xafb20048  sw          $s2, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b01c) {
            ctx->pc = 0x11B030u;
            goto label_11b030;
        }
    }
    ctx->pc = 0x11B024u;
label_11b024:
    // 0x11b024: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x11b024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11b028: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x11b028u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11b02c: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x11b02cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_11b030:
    // 0x11b030: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x11b030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b038:
    // 0x11b038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b03c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b040: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x11b040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11b044: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b048: 0xc046d0e  jal         func_11B438
    ctx->pc = 0x11B048u;
    SET_GPR_U32(ctx, 31, 0x11B050u);
    ctx->pc = 0x11B04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B048u;
            // 0x11b04c: 0x240a0010  addiu       $t2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B438u;
    if (runtime->hasFunction(0x11B438u)) {
        auto targetFn = runtime->lookupFunction(0x11B438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B050u; }
        if (ctx->pc != 0x11B050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setDMAscTag_0x11b438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B050u; }
        if (ctx->pc != 0x11B050u) { return; }
    }
    ctx->pc = 0x11B050u;
    // 0x11b050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b054: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11b054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11b058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11b058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b05c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b05cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b060: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b064: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b064u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b068: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11b068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b06c: 0xc046d24  jal         func_11B490
    ctx->pc = 0x11B06Cu;
    SET_GPR_U32(ctx, 31, 0x11B074u);
    ctx->pc = 0x11B070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B06Cu;
            // 0x11b070: 0x240b000f  addiu       $t3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B490u;
    if (runtime->hasFunction(0x11B490u)) {
        auto targetFn = runtime->lookupFunction(0x11B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B074u; }
        if (ctx->pc != 0x11B074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B074u; }
        if (ctx->pc != 0x11B074u) { return; }
    }
    ctx->pc = 0x11B074u;
    // 0x11b074: 0xc046d46  jal         func_11B518
    ctx->pc = 0x11B074u;
    SET_GPR_U32(ctx, 31, 0x11B07Cu);
    ctx->pc = 0x11B078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B074u;
            // 0x11b078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B518u;
    if (runtime->hasFunction(0x11B518u)) {
        auto targetFn = runtime->lookupFunction(0x11B518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B07Cu; }
        if (ctx->pc != 0x11B07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTEXFLUSH_0x11b518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B07Cu; }
        if (ctx->pc != 0x11B07Cu) { return; }
    }
    ctx->pc = 0x11B07Cu;
    // 0x11b07c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b08c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b094: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b098: 0xc046d4e  jal         func_11B538
    ctx->pc = 0x11B098u;
    SET_GPR_U32(ctx, 31, 0x11B0A0u);
    ctx->pc = 0x11B09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B098u;
            // 0x11b09c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B538u;
    if (runtime->hasFunction(0x11B538u)) {
        auto targetFn = runtime->lookupFunction(0x11B538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0A0u; }
        if (ctx->pc != 0x11B0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTEX1_1_0x11b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0A0u; }
        if (ctx->pc != 0x11B0A0u) { return; }
    }
    ctx->pc = 0x11B0A0u;
    // 0x11b0a0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x11b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b0a4: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x11b0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b0a8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x11b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11b0ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b0acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0b0: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x11b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x11b0b4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x11b0b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b0b8: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x11b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x11b0bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b0c0: 0x24c7003f  addiu       $a3, $a2, 0x3F
    ctx->pc = 0x11b0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x11b0c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0c8: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x11b0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11b0cc: 0x24a8001f  addiu       $t0, $a1, 0x1F
    ctx->pc = 0x11b0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x11b0d0: 0x24c6007e  addiu       $a2, $a2, 0x7E
    ctx->pc = 0x11b0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x11b0d4: 0x68182a  slt         $v1, $v1, $t0
    ctx->pc = 0x11b0d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11b0d8: 0xe2300b  movn        $a2, $a3, $v0
    ctx->pc = 0x11b0d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x11b0dc: 0x24a5003e  addiu       $a1, $a1, 0x3E
    ctx->pc = 0x11b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 62));
    // 0x11b0e0: 0x103280b  movn        $a1, $t0, $v1
    ctx->pc = 0x11b0e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x11b0e4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x11b0e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x11b0e8: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x11b0e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x11b0ec: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x11b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x11b0f0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x11b0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11b0f4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b0f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11b0fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b100: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11b100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11b104: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x11b104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11b108: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x11b108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x11b10c: 0x2812  mflo        $a1
    ctx->pc = 0x11b10cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x11b110: 0xc046d68  jal         func_11B5A0
    ctx->pc = 0x11B110u;
    SET_GPR_U32(ctx, 31, 0x11B118u);
    ctx->pc = 0x11B114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B110u;
            // 0x11b114: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B5A0u;
    if (runtime->hasFunction(0x11B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x11B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B118u; }
        if (ctx->pc != 0x11B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTEX0_1_0x11b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B118u; }
        if (ctx->pc != 0x11B118u) { return; }
    }
    ctx->pc = 0x11B118u;
    // 0x11b118: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x11b118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b120: 0xc046cb2  jal         func_11B2C8
    ctx->pc = 0x11B120u;
    SET_GPR_U32(ctx, 31, 0x11B128u);
    ctx->pc = 0x11B124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B120u;
            // 0x11b124: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2C8u;
    if (runtime->hasFunction(0x11B2C8u)) {
        auto targetFn = runtime->lookupFunction(0x11B2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B128u; }
        if (ctx->pc != 0x11B128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexRect_0x11b2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B128u; }
        if (ctx->pc != 0x11B128u) { return; }
    }
    ctx->pc = 0x11B128u;
    // 0x11b128: 0xc046d46  jal         func_11B518
    ctx->pc = 0x11B128u;
    SET_GPR_U32(ctx, 31, 0x11B130u);
    ctx->pc = 0x11B12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B128u;
            // 0x11b12c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B518u;
    if (runtime->hasFunction(0x11B518u)) {
        auto targetFn = runtime->lookupFunction(0x11B518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B130u; }
        if (ctx->pc != 0x11B130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTEXFLUSH_0x11b518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B130u; }
        if (ctx->pc != 0x11B130u) { return; }
    }
    ctx->pc = 0x11B130u;
    // 0x11b130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b13c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b140: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11b140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b144: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b148: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b14c: 0xc046d4e  jal         func_11B538
    ctx->pc = 0x11B14Cu;
    SET_GPR_U32(ctx, 31, 0x11B154u);
    ctx->pc = 0x11B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B14Cu;
            // 0x11b150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B538u;
    if (runtime->hasFunction(0x11B538u)) {
        auto targetFn = runtime->lookupFunction(0x11B538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B154u; }
        if (ctx->pc != 0x11B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTEX1_1_0x11b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B154u; }
        if (ctx->pc != 0x11B154u) { return; }
    }
    ctx->pc = 0x11B154u;
    // 0x11b154: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x11b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b158: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x11b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b15c: 0xc046cb2  jal         func_11B2C8
    ctx->pc = 0x11B15Cu;
    SET_GPR_U32(ctx, 31, 0x11B164u);
    ctx->pc = 0x11B160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B15Cu;
            // 0x11b160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2C8u;
    if (runtime->hasFunction(0x11B2C8u)) {
        auto targetFn = runtime->lookupFunction(0x11B2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B164u; }
        if (ctx->pc != 0x11B164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexRect_0x11b2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B164u; }
        if (ctx->pc != 0x11B164u) { return; }
    }
    ctx->pc = 0x11B164u;
    // 0x11b164: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x11b164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11b168: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x11b168u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x11b16c: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x11b16cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11b170: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x11b170u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11b174: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x11b174u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11b178: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x11b178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11b17c: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x11b17cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11b180: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x11b180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11b184: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x11b184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11b188: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11b188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11b18c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B18Cu;
            // 0x11b190: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AEB8u: goto label_11aeb8;
            case 0x11AED0u: goto label_11aed0;
            case 0x11AF9Cu: goto label_11af9c;
            case 0x11AFA4u: goto label_11afa4;
            case 0x11AFB8u: goto label_11afb8;
            case 0x11B024u: goto label_11b024;
            case 0x11B030u: goto label_11b030;
            case 0x11B038u: goto label_11b038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B194u;
}
