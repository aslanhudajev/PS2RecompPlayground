#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Bezier
// Address: 0x119fd0 - 0x11a144
void Bezier_0x119fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Bezier_0x119fd0");
#endif

    ctx->pc = 0x119fd0u;

    // 0x119fd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x119fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x119fd4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x119fd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fd8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119fdc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119fe0: 0x2535fff0  addiu       $s5, $t1, -0x10
    ctx->pc = 0x119fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x119fe4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x119fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x119fe8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x119fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x119fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x119ff0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119ff4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119ff8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119ffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a000: 0x8d28fff0  lw          $t0, -0x10($t1)
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967280)));
    // 0x11a004: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A004u;
    {
        const bool branch_taken_0x11a004 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A004u;
            // 0x11a008: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a004) {
            ctx->pc = 0x11A018u;
            goto label_11a018;
        }
    }
    ctx->pc = 0x11A00Cu;
    // 0x11a00c: 0x24021200  addiu       $v0, $zero, 0x1200
    ctx->pc = 0x11a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x11a010: 0x24081200  addiu       $t0, $zero, 0x1200
    ctx->pc = 0x11a010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x11a014: 0xad22fff0  sw          $v0, -0x10($t1)
    ctx->pc = 0x11a014u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967280), GPR_U32(ctx, 2));
label_11a018:
    // 0x11a018: 0x31070200  andi        $a3, $t0, 0x200
    ctx->pc = 0x11a018u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)512u)));
    // 0x11a01c: 0x3104fc00  andi        $a0, $t0, 0xFC00
    ctx->pc = 0x11a01cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)64512u)));
    // 0x11a020: 0x7182b  sltu        $v1, $zero, $a3
    ctx->pc = 0x11a020u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x11a024: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x11a024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x11a028: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x11a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11a02c: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x11a02cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)));
    // 0x11a030: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x11a030u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x11a034: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x11a038: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x11a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11a03c: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x11a03cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11a040: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11a040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11a044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a048: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x11a048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a04c: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x11A04Cu;
    {
        const bool branch_taken_0x11a04c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A04Cu;
            // 0x11a050: 0x698021  addu        $s0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a04c) {
            ctx->pc = 0x11A08Cu;
            goto label_11a08c;
        }
    }
    ctx->pc = 0x11A054u;
    // 0x11a054: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11a054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a058: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x11a058u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
    // 0x11a05c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x11a05cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11a060:
    // 0x11a060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a068: 0x2684fd00  addiu       $a0, $s4, -0x300
    ctx->pc = 0x11a068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966528));
    // 0x11a06c: 0xc046780  jal         func_119E00
    ctx->pc = 0x11A06Cu;
    SET_GPR_U32(ctx, 31, 0x11A074u);
    ctx->pc = 0x11A070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A06Cu;
            // 0x11a070: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E00u;
    if (runtime->hasFunction(0x119E00u)) {
        auto targetFn = runtime->lookupFunction(0x119E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A074u; }
        if (ctx->pc != 0x11A074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spline_0x119e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A074u; }
        if (ctx->pc != 0x11A074u) { return; }
    }
    ctx->pc = 0x11A074u;
    // 0x11a074: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11a078: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x11a078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x11a07c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a080: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A080u;
    {
        const bool branch_taken_0x11a080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A080u;
            // 0x11a084: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a080) {
            ctx->pc = 0x11A060u;
            goto label_11a060;
        }
    }
    ctx->pc = 0x11A088u;
    // 0x11a088: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x11a088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_11a08c:
    // 0x11a08c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x11a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11a090: 0x3062fc00  andi        $v0, $v1, 0xFC00
    ctx->pc = 0x11a090u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64512u)));
    // 0x11a094: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A094u;
    {
        const bool branch_taken_0x11a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A094u;
            // 0x11a098: 0x3c140021  lui         $s4, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a094) {
            ctx->pc = 0x11A0D8u;
            goto label_11a0d8;
        }
    }
    ctx->pc = 0x11A09Cu;
    // 0x11a09c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11a09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0a0: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x11a0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x11a0a4: 0x0  nop
    ctx->pc = 0x11a0a4u;
    // NOP
label_11a0a8:
    // 0x11a0a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a0acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a0b0: 0x2684fd00  addiu       $a0, $s4, -0x300
    ctx->pc = 0x11a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966528));
    // 0x11a0b4: 0xc046780  jal         func_119E00
    ctx->pc = 0x11A0B4u;
    SET_GPR_U32(ctx, 31, 0x11A0BCu);
    ctx->pc = 0x11A0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0B4u;
            // 0x11a0b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E00u;
    if (runtime->hasFunction(0x119E00u)) {
        auto targetFn = runtime->lookupFunction(0x119E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0BCu; }
        if (ctx->pc != 0x11A0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spline_0x119e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0BCu; }
        if (ctx->pc != 0x11A0BCu) { return; }
    }
    ctx->pc = 0x11A0BCu;
    // 0x11a0bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x11a0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11a0c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x11a0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x11a0c4: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x11a0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a0c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A0C8u;
    {
        const bool branch_taken_0x11a0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0C8u;
            // 0x11a0cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0c8) {
            ctx->pc = 0x11A0A8u;
            goto label_11a0a8;
        }
    }
    ctx->pc = 0x11A0D0u;
    // 0x11a0d0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x11a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11a0d4: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x11a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_11a0d8:
    // 0x11a0d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11a0dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11a0dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11a0e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0E0u;
            // 0x11a0e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A11Cu;
            goto label_11a11c;
        }
    }
    ctx->pc = 0x11A0E8u;
    // 0x11a0e8: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
    // 0x11a0ec: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x11a0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_11a0f0:
    // 0x11a0f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11a0f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11a0f8: 0x2684fd00  addiu       $a0, $s4, -0x300
    ctx->pc = 0x11a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966528));
    // 0x11a0fc: 0xc046780  jal         func_119E00
    ctx->pc = 0x11A0FCu;
    SET_GPR_U32(ctx, 31, 0x11A104u);
    ctx->pc = 0x11A100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0FCu;
            // 0x11a100: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E00u;
    if (runtime->hasFunction(0x119E00u)) {
        auto targetFn = runtime->lookupFunction(0x119E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A104u; }
        if (ctx->pc != 0x11A104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spline_0x119e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A104u; }
        if (ctx->pc != 0x11A104u) { return; }
    }
    ctx->pc = 0x11A104u;
    // 0x11a104: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x11a104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x11a108: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x11a108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x11a10c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x11a10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11a110: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11A110u;
    {
        const bool branch_taken_0x11a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A110u;
            // 0x11a114: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a110) {
            ctx->pc = 0x11A0F0u;
            goto label_11a0f0;
        }
    }
    ctx->pc = 0x11A118u;
    // 0x11a118: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x11a118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_11a11c:
    // 0x11a11c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a120: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a124: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a128: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a12c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a138: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x11a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11a13c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A13Cu;
            // 0x11a140: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A018u: goto label_11a018;
            case 0x11A060u: goto label_11a060;
            case 0x11A08Cu: goto label_11a08c;
            case 0x11A0A8u: goto label_11a0a8;
            case 0x11A0D8u: goto label_11a0d8;
            case 0x11A0F0u: goto label_11a0f0;
            case 0x11A11Cu: goto label_11a11c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A144u;
}
