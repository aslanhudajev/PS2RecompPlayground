#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufRestartDMA
// Address: 0x189810 - 0x189b44
void viBufRestartDMA_0x189810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufRestartDMA_0x189810");
#endif

    ctx->pc = 0x189810u;

    // 0x189810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x189810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x189814: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x189814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x189818: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x189818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18981c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x189820: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x189824: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x189824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18982c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18983c: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x18983Cu;
    SET_GPR_U32(ctx, 31, 0x189844u);
    ctx->pc = 0x189840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18983Cu;
            // 0x189840: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189844u; }
        if (ctx->pc != 0x189844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189844u; }
        if (ctx->pc != 0x189844u) { return; }
    }
    ctx->pc = 0x189844u;
    // 0x189844: 0x8ec80038  lw          $t0, 0x38($s6)
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x189848: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x189848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x18984c: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x18984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x189850: 0x8ec5001c  lw          $a1, 0x1C($s6)
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x189854: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x189854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189858: 0x8ed30020  lw          $s3, 0x20($s6)
    ctx->pc = 0x189858u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x18985c: 0x82402  srl         $a0, $t0, 16
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x189860: 0x3117007f  andi        $s7, $t0, 0x7F
    ctx->pc = 0x189860u;
    SET_GPR_VEC(ctx, 23, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)127u)));
    // 0x189864: 0x30860003  andi        $a2, $a0, 0x3
    ctx->pc = 0x189864u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
    // 0x189868: 0x82202  srl         $a0, $t0, 8
    ctx->pc = 0x189868u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x18986c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x18986cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)15u)));
    // 0x189870: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x189874: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189878: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18987c: 0xa3a823  subu        $s5, $a1, $v1
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x189880: 0x2a7082b  sltu        $at, $s5, $a3
    ctx->pc = 0x189880u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x189884: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x189884u;
    {
        const bool branch_taken_0x189884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189884u;
            // 0x189888: 0x34520100  ori         $s2, $v0, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189884) {
            ctx->pc = 0x189950u;
            goto label_189950;
        }
    }
    ctx->pc = 0x18988Cu;
    // 0x18988c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x189890: 0xf51823  subu        $v1, $a3, $s5
    ctx->pc = 0x189890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x189894: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x189894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x189898: 0x3a102  srl         $s4, $v1, 4
    ctx->pc = 0x189898u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18989c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1898a0: 0xc061f94  jal         func_187E50
    ctx->pc = 0x1898A0u;
    SET_GPR_U32(ctx, 31, 0x1898A8u);
    ctx->pc = 0x1898A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1898A0u;
            // 0x1898a4: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1898A8u; }
        if (ctx->pc != 0x1898A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1898A8u; }
        if (ctx->pc != 0x1898A8u) { return; }
    }
    ctx->pc = 0x1898A8u;
    // 0x1898a8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1898a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1898ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1898acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898b0: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x1898b4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1898B4u;
    {
        const bool branch_taken_0x1898b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1898B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1898B4u;
            // 0x1898b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1898b4) {
            ctx->pc = 0x1898D8u;
            goto label_1898d8;
        }
    }
    ctx->pc = 0x1898BCu;
    // 0x1898bc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1898bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1898c0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1898c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1898c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1898c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1898C8u;
    {
        const bool branch_taken_0x1898c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1898c8) {
            ctx->pc = 0x1898D8u;
            goto label_1898d8;
        }
    }
    ctx->pc = 0x1898D0u;
    // 0x1898d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1898d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898d4: 0x0  nop
    ctx->pc = 0x1898d4u;
    // NOP
label_1898d8:
    // 0x1898d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1898d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1898dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1898dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1898e0: 0x8ec30028  lw          $v1, 0x28($s6)
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1898e4: 0x45200a  movz        $a0, $v0, $a1
    ctx->pc = 0x1898e4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1898e8: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1898ec: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x1898ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x1898f0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1898f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1898f4: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1898f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1898f8: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1898f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1898fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1898fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x189900: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x189904: 0x34720100  ori         $s2, $v1, 0x100
    ctx->pc = 0x189904u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
    // 0x189908: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x189908u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18990c: 0x0  nop
    ctx->pc = 0x18990cu;
    // NOP
    // 0x189910: 0x0  nop
    ctx->pc = 0x189910u;
    // NOP
    // 0x189914: 0x1810  mfhi        $v1
    ctx->pc = 0x189914u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x189918: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x189918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x18991c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18991Cu;
    {
        const bool branch_taken_0x18991c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18991c) {
            ctx->pc = 0x189938u;
            goto label_189938;
        }
    }
    ctx->pc = 0x189924u;
    // 0x189924: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x189928: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x189928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18992c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x18992Cu;
    {
        const bool branch_taken_0x18992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18992c) {
            ctx->pc = 0x189A38u;
            goto label_189a38;
        }
    }
    ctx->pc = 0x189934u;
    // 0x189934: 0x0  nop
    ctx->pc = 0x189934u;
    // NOP
label_189938:
    // 0x189938: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x189938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x18993c: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x18993cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x189940: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x189944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x189944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x189948: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x189948u;
    {
        const bool branch_taken_0x189948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189948u;
            // 0x18994c: 0xaec20010  sw          $v0, 0x10($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189948) {
            ctx->pc = 0x189A38u;
            goto label_189a38;
        }
    }
    ctx->pc = 0x189950u;
label_189950:
    // 0x189950: 0xc0628b8  jal         func_18A2E0
    ctx->pc = 0x189950u;
    SET_GPR_U32(ctx, 31, 0x189958u);
    ctx->pc = 0x189954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189950u;
            // 0x189954: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2E0u;
    if (runtime->hasFunction(0x18A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189958u; }
        if (ctx->pc != 0x189958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x18a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189958u; }
        if (ctx->pc != 0x189958u) { return; }
    }
    ctx->pc = 0x189958u;
    // 0x189958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x189958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18995c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189960: 0xc0628b8  jal         func_18A2E0
    ctx->pc = 0x189960u;
    SET_GPR_U32(ctx, 31, 0x189968u);
    ctx->pc = 0x189964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189960u;
            // 0x189964: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A2E0u;
    if (runtime->hasFunction(0x18A2E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189968u; }
        if (ctx->pc != 0x189968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getFIFOindex_0x18a2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189968u; }
        if (ctx->pc != 0x189968u) { return; }
    }
    ctx->pc = 0x189968u;
    // 0x189968: 0x12220033  beq         $s1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x189968u;
    {
        const bool branch_taken_0x189968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x18996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189968u;
            // 0x18996c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189968) {
            ctx->pc = 0x189A38u;
            goto label_189a38;
        }
    }
    ctx->pc = 0x189970u;
    // 0x189970: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x189974: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x189978: 0xc061f94  jal         func_187E50
    ctx->pc = 0x189978u;
    SET_GPR_U32(ctx, 31, 0x189980u);
    ctx->pc = 0x18997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189978u;
            // 0x18997c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189980u; }
        if (ctx->pc != 0x189980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189980u; }
        if (ctx->pc != 0x189980u) { return; }
    }
    ctx->pc = 0x189980u;
    // 0x189980: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189984: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x189984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189988: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x189988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x18998c: 0x112ac0  sll         $a1, $s1, 11
    ctx->pc = 0x18998cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x189990: 0x8ec7001c  lw          $a3, 0x1C($s6)
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x189994: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x189994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x189998: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x189998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x18999c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x18999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1899a0: 0x232c0  sll         $a2, $v0, 11
    ctx->pc = 0x1899a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1899a4: 0xb52823  subu        $a1, $a1, $s5
    ctx->pc = 0x1899a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x1899a8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1899ac: 0x5a102  srl         $s4, $a1, 4
    ctx->pc = 0x1899acu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1899b0: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x1899b0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x1899b4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1899b8: 0x0  nop
    ctx->pc = 0x1899b8u;
    // NOP
    // 0x1899bc: 0x3010  mfhi        $a2
    ctx->pc = 0x1899bcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1899c0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1899c0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1899c4: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1899c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1899c8: 0x0  nop
    ctx->pc = 0x1899c8u;
    // NOP
    // 0x1899cc: 0x2810  mfhi        $a1
    ctx->pc = 0x1899ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1899d0: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x1899d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x1899d4: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1899d8: 0x14c50002  bne         $a2, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1899D8u;
    {
        const bool branch_taken_0x1899d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1899DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1899D8u;
            // 0x1899dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899d8) {
            ctx->pc = 0x1899E4u;
            goto label_1899e4;
        }
    }
    ctx->pc = 0x1899E0u;
    // 0x1899e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1899e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1899e4:
    // 0x1899e4: 0x53f00  sll         $a3, $a1, 28
    ctx->pc = 0x1899e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 28));
    // 0x1899e8: 0x8ec60028  lw          $a2, 0x28($s6)
    ctx->pc = 0x1899e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x1899ec: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1899ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1899f0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1899f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1899f4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1899f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1899f8: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x1899f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
    // 0x1899fc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1899fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x189a00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x189a00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x189a04: 0x34520100  ori         $s2, $v0, 0x100
    ctx->pc = 0x189a04u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x189a08: 0x1010  mfhi        $v0
    ctx->pc = 0x189a08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x189a0c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x189a0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x189a10: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x189A10u;
    {
        const bool branch_taken_0x189a10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a10) {
            ctx->pc = 0x189A28u;
            goto label_189a28;
        }
    }
    ctx->pc = 0x189A18u;
    // 0x189a18: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x189a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189a1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189A1Cu;
    {
        const bool branch_taken_0x189a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a1c) {
            ctx->pc = 0x189A38u;
            goto label_189a38;
        }
    }
    ctx->pc = 0x189A24u;
    // 0x189a24: 0x0  nop
    ctx->pc = 0x189a24u;
    // NOP
label_189a28:
    // 0x189a28: 0xaed0000c  sw          $s0, 0xC($s6)
    ctx->pc = 0x189a28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 16));
    // 0x189a2c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x189a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x189a30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x189a34: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x189a34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_189a38:
    // 0x189a38: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x189a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x189a3c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x189A3Cu;
    {
        const bool branch_taken_0x189a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a3c) {
            ctx->pc = 0x189A70u;
            goto label_189a70;
        }
    }
    ctx->pc = 0x189A44u;
    // 0x189a44: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x189a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x189a48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189A48u;
    {
        const bool branch_taken_0x189a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189A48u;
            // 0x189a4c: 0x3c011001  lui         $at, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189a48) {
            ctx->pc = 0x189A70u;
            goto label_189a70;
        }
    }
    ctx->pc = 0x189A50u;
    // 0x189a50: 0xac23b010  sw          $v1, -0x4FF0($at)
    ctx->pc = 0x189a50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946832), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x189a54: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x189a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x189a58: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189a5c: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x189a5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x189a60: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x189a64: 0xc06289c  jal         func_18A270
    ctx->pc = 0x189A64u;
    SET_GPR_U32(ctx, 31, 0x189A6Cu);
    ctx->pc = 0x189A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189A64u;
            // 0x189a68: 0x34440100  ori         $a0, $v0, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A270u;
    if (runtime->hasFunction(0x18A270u)) {
        auto targetFn = runtime->lookupFunction(0x18A270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189A6Cu; }
        if (ctx->pc != 0x189A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x18a270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189A6Cu; }
        if (ctx->pc != 0x189A6Cu) { return; }
    }
    ctx->pc = 0x189A6Cu;
    // 0x189a6c: 0x0  nop
    ctx->pc = 0x189a6cu;
    // NOP
label_189a70:
    // 0x189a70: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x189a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x189a74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x189A74u;
    {
        const bool branch_taken_0x189a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a74) {
            ctx->pc = 0x189AC8u;
            goto label_189ac8;
        }
    }
    ctx->pc = 0x189A7Cu;
    // 0x189a7c: 0x0  nop
    ctx->pc = 0x189a7cu;
    // NOP
label_189a80:
    // 0x189a80: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189a84: 0x8c222010  lw          $v0, 0x2010($at)
    ctx->pc = 0x189a84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208))); // MMIO: 0x10002010
    // 0x189a88: 0x0  nop
    ctx->pc = 0x189a88u;
    // NOP
    // 0x189a8c: 0x0  nop
    ctx->pc = 0x189a8cu;
    // NOP
    // 0x189a90: 0x0  nop
    ctx->pc = 0x189a90u;
    // NOP
    // 0x189a94: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189A94u;
    {
        const bool branch_taken_0x189a94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x189a94) {
            ctx->pc = 0x189A80u;
            goto label_189a80;
        }
    }
    ctx->pc = 0x189A9Cu;
    // 0x189a9c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189aa0: 0xac372000  sw          $s7, 0x2000($at)
    ctx->pc = 0x189aa0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 23)); // MMIO: 0x10002000
    // 0x189aa4: 0x0  nop
    ctx->pc = 0x189aa4u;
    // NOP
label_189aa8:
    // 0x189aa8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189aac: 0x8c222010  lw          $v0, 0x2010($at)
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208))); // MMIO: 0x10002010
    // 0x189ab0: 0x0  nop
    ctx->pc = 0x189ab0u;
    // NOP
    // 0x189ab4: 0x0  nop
    ctx->pc = 0x189ab4u;
    // NOP
    // 0x189ab8: 0x0  nop
    ctx->pc = 0x189ab8u;
    // NOP
    // 0x189abc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189ABCu;
    {
        const bool branch_taken_0x189abc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x189abc) {
            ctx->pc = 0x189AA8u;
            goto label_189aa8;
        }
    }
    ctx->pc = 0x189AC4u;
    // 0x189ac4: 0x0  nop
    ctx->pc = 0x189ac4u;
    // NOP
label_189ac8:
    // 0x189ac8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189acc: 0xac35b410  sw          $s5, -0x4BF0($at)
    ctx->pc = 0x189accu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947856), GPR_U32(ctx, 21)); // MMIO: 0x1000b410
    // 0x189ad0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189ad4: 0xac33b430  sw          $s3, -0x4BD0($at)
    ctx->pc = 0x189ad4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 19)); // MMIO: 0x1000b430
    // 0x189ad8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189adc: 0xac34b420  sw          $s4, -0x4BE0($at)
    ctx->pc = 0x189adcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947872), GPR_U32(ctx, 20)); // MMIO: 0x1000b420
    // 0x189ae0: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x189ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x189ae4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189AE4u;
    {
        const bool branch_taken_0x189ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189AE4u;
            // 0x189ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ae4) {
            ctx->pc = 0x189AF8u;
            goto label_189af8;
        }
    }
    ctx->pc = 0x189AECu;
    // 0x189aec: 0xc062880  jal         func_18A200
    ctx->pc = 0x189AECu;
    SET_GPR_U32(ctx, 31, 0x189AF4u);
    ctx->pc = 0x18A200u;
    if (runtime->hasFunction(0x18A200u)) {
        auto targetFn = runtime->lookupFunction(0x18A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189AF4u; }
        if (ctx->pc != 0x189AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x18a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189AF4u; }
        if (ctx->pc != 0x189AF4u) { return; }
    }
    ctx->pc = 0x189AF4u;
    // 0x189af4: 0x0  nop
    ctx->pc = 0x189af4u;
    // NOP
label_189af8:
    // 0x189af8: 0x8ec3003c  lw          $v1, 0x3C($s6)
    ctx->pc = 0x189af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x189afc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189b04: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x189b04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x189b08: 0xaec20044  sw          $v0, 0x44($s6)
    ctx->pc = 0x189b08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 2));
    // 0x189b0c: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189B0Cu;
    SET_GPR_U32(ctx, 31, 0x189B14u);
    ctx->pc = 0x189B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B0Cu;
            // 0x189b10: 0x8ec40040  lw          $a0, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B14u; }
        if (ctx->pc != 0x189B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B14u; }
        if (ctx->pc != 0x189B14u) { return; }
    }
    ctx->pc = 0x189B14u;
    // 0x189b14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x189b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x189b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189b1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x189b1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189b20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x189b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189b24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x189b24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189b28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189b28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189b2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189b30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x189B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189B3Cu;
            // 0x189b40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1898D8u: goto label_1898d8;
            case 0x189938u: goto label_189938;
            case 0x189950u: goto label_189950;
            case 0x1899E4u: goto label_1899e4;
            case 0x189A28u: goto label_189a28;
            case 0x189A38u: goto label_189a38;
            case 0x189A70u: goto label_189a70;
            case 0x189A80u: goto label_189a80;
            case 0x189AA8u: goto label_189aa8;
            case 0x189AC8u: goto label_189ac8;
            case 0x189AF8u: goto label_189af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189B44u;
}
