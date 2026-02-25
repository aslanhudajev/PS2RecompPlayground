#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Hermite
// Address: 0x119e58 - 0x119fcc
void Hermite_0x119e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Hermite_0x119e58");
#endif

    ctx->pc = 0x119e58u;

    // 0x119e58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x119e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x119e5c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x119e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119e64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119e68: 0x2535fff0  addiu       $s5, $t1, -0x10
    ctx->pc = 0x119e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x119e6c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x119e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x119e70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x119e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x119e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x119e78: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x119e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119e7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119e80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119e88: 0x8d28fff0  lw          $t0, -0x10($t1)
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967280)));
    // 0x119e8c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119E8Cu;
    {
        const bool branch_taken_0x119e8c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x119E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E8Cu;
            // 0x119e90: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e8c) {
            ctx->pc = 0x119EA0u;
            goto label_119ea0;
        }
    }
    ctx->pc = 0x119E94u;
    // 0x119e94: 0x24021200  addiu       $v0, $zero, 0x1200
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x119e98: 0x24081200  addiu       $t0, $zero, 0x1200
    ctx->pc = 0x119e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x119e9c: 0xad22fff0  sw          $v0, -0x10($t1)
    ctx->pc = 0x119e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967280), GPR_U32(ctx, 2));
label_119ea0:
    // 0x119ea0: 0x31070200  andi        $a3, $t0, 0x200
    ctx->pc = 0x119ea0u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)512u)));
    // 0x119ea4: 0x3104fc00  andi        $a0, $t0, 0xFC00
    ctx->pc = 0x119ea4u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)64512u)));
    // 0x119ea8: 0x7182b  sltu        $v1, $zero, $a3
    ctx->pc = 0x119ea8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x119eac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x119eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x119eb0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x119eb4: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x119eb4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 5)));
    // 0x119eb8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x119eb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x119ebc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x119ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x119ec0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x119ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x119ec4: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x119ec4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x119ec8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x119ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x119ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119ed0: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x119ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x119ed4: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x119ED4u;
    {
        const bool branch_taken_0x119ed4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x119ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119ED4u;
            // 0x119ed8: 0x698021  addu        $s0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ed4) {
            ctx->pc = 0x119F14u;
            goto label_119f14;
        }
    }
    ctx->pc = 0x119EDCu;
    // 0x119edc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x119edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ee0: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x119ee0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
    // 0x119ee4: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x119ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119ee8:
    // 0x119ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x119eecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119ef0: 0x2684fcc0  addiu       $a0, $s4, -0x340
    ctx->pc = 0x119ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966464));
    // 0x119ef4: 0xc046780  jal         func_119E00
    ctx->pc = 0x119EF4u;
    SET_GPR_U32(ctx, 31, 0x119EFCu);
    ctx->pc = 0x119EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EF4u;
            // 0x119ef8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E00u;
    if (runtime->hasFunction(0x119E00u)) {
        auto targetFn = runtime->lookupFunction(0x119E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EFCu; }
        if (ctx->pc != 0x119EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spline_0x119e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EFCu; }
        if (ctx->pc != 0x119EFCu) { return; }
    }
    ctx->pc = 0x119EFCu;
    // 0x119efc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x119efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x119f00: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x119f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x119f04: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x119f08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119F08u;
    {
        const bool branch_taken_0x119f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F08u;
            // 0x119f0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f08) {
            ctx->pc = 0x119EE8u;
            goto label_119ee8;
        }
    }
    ctx->pc = 0x119F10u;
    // 0x119f10: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x119f10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_119f14:
    // 0x119f14: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x119f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x119f18: 0x3062fc00  andi        $v0, $v1, 0xFC00
    ctx->pc = 0x119f18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64512u)));
    // 0x119f1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x119F1Cu;
    {
        const bool branch_taken_0x119f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F1Cu;
            // 0x119f20: 0x3c140021  lui         $s4, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f1c) {
            ctx->pc = 0x119F60u;
            goto label_119f60;
        }
    }
    ctx->pc = 0x119F24u;
    // 0x119f24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x119f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f28: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x119f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x119f2c: 0x0  nop
    ctx->pc = 0x119f2cu;
    // NOP
label_119f30:
    // 0x119f30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x119f34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119f38: 0x2684fcc0  addiu       $a0, $s4, -0x340
    ctx->pc = 0x119f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966464));
    // 0x119f3c: 0xc046780  jal         func_119E00
    ctx->pc = 0x119F3Cu;
    SET_GPR_U32(ctx, 31, 0x119F44u);
    ctx->pc = 0x119F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F3Cu;
            // 0x119f40: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E00u;
    if (runtime->hasFunction(0x119E00u)) {
        auto targetFn = runtime->lookupFunction(0x119E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F44u; }
        if (ctx->pc != 0x119F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spline_0x119e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F44u; }
        if (ctx->pc != 0x119F44u) { return; }
    }
    ctx->pc = 0x119F44u;
    // 0x119f44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x119f48: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x119f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x119f4c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x119f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x119f50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119F50u;
    {
        const bool branch_taken_0x119f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F50u;
            // 0x119f54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f50) {
            ctx->pc = 0x119F30u;
            goto label_119f30;
        }
    }
    ctx->pc = 0x119F58u;
    // 0x119f58: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x119f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x119f5c: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x119f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_119f60:
    // 0x119f60: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x119f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x119f64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x119f64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x119f68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x119F68u;
    {
        const bool branch_taken_0x119f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F68u;
            // 0x119f6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f68) {
            ctx->pc = 0x119FA4u;
            goto label_119fa4;
        }
    }
    ctx->pc = 0x119F70u;
    // 0x119f70: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x119f70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
    // 0x119f74: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x119f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_119f78:
    // 0x119f78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x119f7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x119f80: 0x2684fcc0  addiu       $a0, $s4, -0x340
    ctx->pc = 0x119f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966464));
    // 0x119f84: 0xc046780  jal         func_119E00
    ctx->pc = 0x119F84u;
    SET_GPR_U32(ctx, 31, 0x119F8Cu);
    ctx->pc = 0x119F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F84u;
            // 0x119f88: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119E00u;
    if (runtime->hasFunction(0x119E00u)) {
        auto targetFn = runtime->lookupFunction(0x119E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F8Cu; }
        if (ctx->pc != 0x119F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spline_0x119e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F8Cu; }
        if (ctx->pc != 0x119F8Cu) { return; }
    }
    ctx->pc = 0x119F8Cu;
    // 0x119f8c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x119f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x119f90: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x119f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x119f94: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x119f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x119f98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x119F98u;
    {
        const bool branch_taken_0x119f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F98u;
            // 0x119f9c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f98) {
            ctx->pc = 0x119F78u;
            goto label_119f78;
        }
    }
    ctx->pc = 0x119FA0u;
    // 0x119fa0: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x119fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_119fa4:
    // 0x119fa4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x119fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119fa8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x119fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119fac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x119facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119fb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119fb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119fb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119fc0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x119fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x119FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FC4u;
            // 0x119fc8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119EA0u: goto label_119ea0;
            case 0x119EE8u: goto label_119ee8;
            case 0x119F14u: goto label_119f14;
            case 0x119F30u: goto label_119f30;
            case 0x119F60u: goto label_119f60;
            case 0x119F78u: goto label_119f78;
            case 0x119FA4u: goto label_119fa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119FCCu;
}
