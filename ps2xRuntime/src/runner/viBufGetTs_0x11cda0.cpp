#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufGetTs
// Address: 0x11cda0 - 0x11cf2c
void viBufGetTs_0x11cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufGetTs_0x11cda0");
#endif

    ctx->pc = 0x11cda0u;

    // 0x11cda0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11cda4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11cda8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11cdac: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x11cdacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46096u)));
    // 0x11cdb0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11cdb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11cdb8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11cdbc: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x11cdbcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8224u)));
    // 0x11cdc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11cdc4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11cdc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11cdcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11cdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11cdd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11cdd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cddc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x11cddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cde0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cde4: 0x8e510038  lw          $s1, 0x38($s2)
    ctx->pc = 0x11cde4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x11cde8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x11cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x11cdec: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x11cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11cdf0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x11cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x11cdf4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x11cdf4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
    // 0x11cdf8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11cdf8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x11cdfc: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x11cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11ce00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ce04: 0x59ac0  sll         $s3, $a1, 11
    ctx->pc = 0x11ce04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x11ce08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11ce0c: 0x3231007f  andi        $s1, $s1, 0x7F
    ctx->pc = 0x11ce0cu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)127u)));
    // 0x11ce10: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11CE10u;
    SET_GPR_U32(ctx, 31, 0x11CE18u);
    ctx->pc = 0x11CE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE10u;
            // 0x11ce14: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE18u; }
        if (ctx->pc != 0x11CE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CE18u; }
        if (ctx->pc != 0x11CE18u) { return; }
    }
    ctx->pc = 0x11CE18u;
    // 0x11ce18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ce1c: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x11ce1cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x11ce20: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x11ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
    // 0x11ce24: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x11ce24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11ce28: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x11ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x11ce2c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x11ce2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x11ce30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ce34: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CE34u;
    {
        const bool branch_taken_0x11ce34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce34) {
            ctx->pc = 0x11CE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE34u;
            // 0x11ce38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CE3Cu;
            goto label_11ce3c;
        }
    }
    ctx->pc = 0x11CE3Cu;
label_11ce3c:
    // 0x11ce3c: 0x8e4a0058  lw          $t2, 0x58($s2)
    ctx->pc = 0x11ce3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11ce40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ce40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce44: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x11ce44u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ce48: 0x213001b  divu        $zero, $s0, $s3
    ctx->pc = 0x11ce48u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x11ce4c: 0x1810  mfhi        $v1
    ctx->pc = 0x11ce4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11ce50: 0x1940002a  blez        $t2, . + 4 + (0x2A << 2)
    ctx->pc = 0x11CE50u;
    {
        const bool branch_taken_0x11ce50 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x11CE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE50u;
            // 0x11ce54: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce50) {
            ctx->pc = 0x11CEFCu;
            goto label_11cefc;
        }
    }
    ctx->pc = 0x11CE58u;
    // 0x11ce58: 0x8e480054  lw          $t0, 0x54($s2)
    ctx->pc = 0x11ce58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x11ce5c: 0x8a6023  subu        $t4, $a0, $t2
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x11ce60: 0x8e4b0050  lw          $t3, 0x50($s2)
    ctx->pc = 0x11ce60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x11ce64: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x11ce64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x11ce68: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x11ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x11ce6c: 0x0  nop
    ctx->pc = 0x11ce6cu;
    // NOP
label_11ce70:
    // 0x11ce70: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x11ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ce74: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x11ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11ce78: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11CE78u;
    {
        const bool branch_taken_0x11ce78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce78) {
            ctx->pc = 0x11CE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11CE78u;
            // 0x11ce7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11CE80u;
            goto label_11ce80;
        }
    }
    ctx->pc = 0x11CE80u;
label_11ce80:
    // 0x11ce80: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x11ce80u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11ce84: 0x2010  mfhi        $a0
    ctx->pc = 0x11ce84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x11ce88: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x11ce88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11ce8c: 0x4b3821  addu        $a3, $v0, $t3
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x11ce90: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x11ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x11ce94: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x11ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x11ce98: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x11ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11ce9c: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x11ce9cu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11cea0: 0x1010  mfhi        $v0
    ctx->pc = 0x11cea0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11cea4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11cea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11cea8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11CEA8u;
    {
        const bool branch_taken_0x11cea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEA8u;
            // 0x11ceac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cea8) {
            ctx->pc = 0x11CEE4u;
            goto label_11cee4;
        }
    }
    ctx->pc = 0x11CEB0u;
    // 0x11ceb0: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11ceb4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ceb8: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x11ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x11cebc: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x11cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x11cec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cec4: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x11cec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11cec8: 0xdce50008  ld          $a1, 0x8($a3)
    ctx->pc = 0x11cec8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11cecc: 0x283100a  movz        $v0, $s4, $v1
    ctx->pc = 0x11ceccu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
    // 0x11ced0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x11ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11ced4: 0xfea50008  sd          $a1, 0x8($s5)
    ctx->pc = 0x11ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 5));
    // 0x11ced8: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x11ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x11cedc: 0xae440058  sw          $a0, 0x58($s2)
    ctx->pc = 0x11cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
    // 0x11cee0: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x11cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
label_11cee4:
    // 0x11cee4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11cee8: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x11cee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11ceec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CEECu;
    {
        const bool branch_taken_0x11ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ceec) {
            ctx->pc = 0x11CEFCu;
            goto label_11cefc;
        }
    }
    ctx->pc = 0x11CEF4u;
    // 0x11cef4: 0x1280ffde  beqz        $s4, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11CEF4u;
    {
        const bool branch_taken_0x11cef4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEF4u;
            // 0x11cef8: 0x1881021  addu        $v0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cef4) {
            ctx->pc = 0x11CE70u;
            goto label_11ce70;
        }
    }
    ctx->pc = 0x11CEFCu;
label_11cefc:
    // 0x11cefc: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x11CEFCu;
    SET_GPR_U32(ctx, 31, 0x11CF04u);
    ctx->pc = 0x11CF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEFCu;
            // 0x11cf00: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF04u; }
        if (ctx->pc != 0x11CF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF04u; }
        if (ctx->pc != 0x11CF04u) { return; }
    }
    ctx->pc = 0x11CF04u;
    // 0x11cf04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11cf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cf0c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11cf0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11cf10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11cf10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11cf14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11cf14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cf18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11cf18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cf1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11cf1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cf20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf24: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF24u;
            // 0x11cf28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CE3Cu: goto label_11ce3c;
            case 0x11CE70u: goto label_11ce70;
            case 0x11CE80u: goto label_11ce80;
            case 0x11CEE4u: goto label_11cee4;
            case 0x11CEFCu: goto label_11cefc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11CF2Cu;
}
