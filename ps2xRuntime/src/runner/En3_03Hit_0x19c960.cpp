#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_03Hit
// Address: 0x19c960 - 0x19cacc
void En3_03Hit_0x19c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_03Hit_0x19c960");
#endif

    ctx->pc = 0x19c960u;

    // 0x19c960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c978: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19c97c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x19c97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19c980: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19c984: 0x1880004a  blez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x19C984u;
    {
        const bool branch_taken_0x19c984 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C984u;
            // 0x19c988: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c984) {
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19C98Cu;
    // 0x19c98c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x19c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19c990: 0x14830047  bne         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x19C990u;
    {
        const bool branch_taken_0x19c990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c990) {
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19C998u;
    // 0x19c998: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19c99c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x19c99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19c9a0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x19c9a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19c9a8: 0x1c600041  bgtz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x19C9A8u;
    {
        const bool branch_taken_0x19c9a8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19c9a8) {
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19C9B0u;
    // 0x19c9b0: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c9b4: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x19c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x19c9b8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x19c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x19c9bc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x19c9bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19c9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c9c4: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x19c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x19c9c8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x19c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c9cc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x19c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c9d0: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x19c9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c9d4: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x19C9D4u;
    SET_GPR_U32(ctx, 31, 0x19C9DCu);
    ctx->pc = 0x19C9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C9D4u;
            // 0x19c9d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9DCu; }
        if (ctx->pc != 0x19C9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C9DCu; }
        if (ctx->pc != 0x19C9DCu) { return; }
    }
    ctx->pc = 0x19C9DCu;
    // 0x19c9dc: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19c9e0: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x19c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x19c9e4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x19c9e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43691u)));
    // 0x19c9e8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x19c9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19c9ec: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x19c9f0: 0x0  nop
    ctx->pc = 0x19c9f0u;
    // NOP
    // 0x19c9f4: 0x1810  mfhi        $v1
    ctx->pc = 0x19c9f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19c9f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c9fc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19c9fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ca00: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x19CA00u;
    {
        const bool branch_taken_0x19ca00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA00u;
            // 0x19ca04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca00) {
            ctx->pc = 0x19CA88u;
            goto label_19ca88;
        }
    }
    ctx->pc = 0x19CA08u;
label_19ca08:
    // 0x19ca08: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x19CA08u;
    SET_GPR_U32(ctx, 31, 0x19CA10u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA10u; }
        if (ctx->pc != 0x19CA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA10u; }
        if (ctx->pc != 0x19CA10u) { return; }
    }
    ctx->pc = 0x19CA10u;
    // 0x19ca10: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x19ca10u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)127u)));
    // 0x19ca14: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x19ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19ca18: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x19CA18u;
    SET_GPR_U32(ctx, 31, 0x19CA20u);
    ctx->pc = 0x19CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA18u;
            // 0x19ca1c: 0x439023  subu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA20u; }
        if (ctx->pc != 0x19CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA20u; }
        if (ctx->pc != 0x19CA20u) { return; }
    }
    ctx->pc = 0x19CA20u;
    // 0x19ca20: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x19ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19ca24: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x19ca24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19ca28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19ca28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x19ca2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19ca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ca30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ca34: 0x0  nop
    ctx->pc = 0x19ca34u;
    // NOP
    // 0x19ca38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19ca38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x19ca3c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x19ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x19ca40: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19ca44: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x19ca44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19ca48: 0x1810  mfhi        $v1
    ctx->pc = 0x19ca48u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19ca4c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x19ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19ca50: 0xc065944  jal         func_196510
    ctx->pc = 0x19CA50u;
    SET_GPR_U32(ctx, 31, 0x19CA58u);
    ctx->pc = 0x19CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA50u;
            // 0x19ca54: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA58u; }
        if (ctx->pc != 0x19CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA58u; }
        if (ctx->pc != 0x19CA58u) { return; }
    }
    ctx->pc = 0x19CA58u;
    // 0x19ca58: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19ca5c: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x19ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x19ca60: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x19ca60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43691u)));
    // 0x19ca64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19ca68: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x19ca68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19ca6c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x19ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x19ca70: 0x0  nop
    ctx->pc = 0x19ca70u;
    // NOP
    // 0x19ca74: 0x1810  mfhi        $v1
    ctx->pc = 0x19ca74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19ca78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ca7c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x19ca7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ca80: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x19CA80u;
    {
        const bool branch_taken_0x19ca80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ca80) {
            ctx->pc = 0x19CA08u;
            goto label_19ca08;
        }
    }
    ctx->pc = 0x19CA88u;
label_19ca88:
    // 0x19ca88: 0x28a300ff  slti        $v1, $a1, 0xFF
    ctx->pc = 0x19ca88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x19ca8c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CA8Cu;
    {
        const bool branch_taken_0x19ca8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ca8c) {
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19CA94u;
    // 0x19ca94: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x19ca94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x19ca98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ca98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ca9c: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x19ca9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19caa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19caa4: 0xc065944  jal         func_196510
    ctx->pc = 0x19CAA4u;
    SET_GPR_U32(ctx, 31, 0x19CAACu);
    ctx->pc = 0x19CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAA4u;
            // 0x19caa8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAACu; }
        if (ctx->pc != 0x19CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAACu; }
        if (ctx->pc != 0x19CAACu) { return; }
    }
    ctx->pc = 0x19CAACu;
    // 0x19caac: 0x0  nop
    ctx->pc = 0x19caacu;
    // NOP
label_19cab0:
    // 0x19cab0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19cab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19cab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAC4u;
            // 0x19cac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CA08u: goto label_19ca08;
            case 0x19CA88u: goto label_19ca88;
            case 0x19CAB0u: goto label_19cab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CACCu;
}
