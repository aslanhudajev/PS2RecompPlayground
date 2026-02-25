#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_01Hit
// Address: 0x1c99a0 - 0x1c9b0c
void Enex1_01Hit_0x1c99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_01Hit_0x1c99a0");
#endif

    ctx->pc = 0x1c99a0u;

    // 0x1c99a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c99a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c99a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c99a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c99ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c99acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c99b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c99b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c99b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c99b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c99b8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1c99b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c99bc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1c99bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c99c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1c99c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c99c4: 0x1880004a  blez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C99C4u;
    {
        const bool branch_taken_0x1c99c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C99C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99C4u;
            // 0x1c99c8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c4) {
            ctx->pc = 0x1C9AF0u;
            goto label_1c9af0;
        }
    }
    ctx->pc = 0x1C99CCu;
    // 0x1c99cc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1c99ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c99d0: 0x14830047  bne         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C99D0u;
    {
        const bool branch_taken_0x1c99d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c99d0) {
            ctx->pc = 0x1C9AF0u;
            goto label_1c9af0;
        }
    }
    ctx->pc = 0x1C99D8u;
    // 0x1c99d8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c99dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c99e0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1c99e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1c99e4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c99e8: 0x1c600041  bgtz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C99E8u;
    {
        const bool branch_taken_0x1c99e8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c99e8) {
            ctx->pc = 0x1C9AF0u;
            goto label_1c9af0;
        }
    }
    ctx->pc = 0x1C99F0u;
    // 0x1c99f0: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c99f4: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1c99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1c99f8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1c99fc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1c99fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c9a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9a04: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1c9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1c9a08: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1c9a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c9a0c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c9a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9a10: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1c9a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c9a14: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1C9A14u;
    SET_GPR_U32(ctx, 31, 0x1C9A1Cu);
    ctx->pc = 0x1C9A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A14u;
            // 0x1c9a18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A1Cu; }
        if (ctx->pc != 0x1C9A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A1Cu; }
        if (ctx->pc != 0x1C9A1Cu) { return; }
    }
    ctx->pc = 0x1C9A1Cu;
    // 0x1c9a1c: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1c9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c9a20: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1c9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x1c9a24: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1c9a24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43691u)));
    // 0x1c9a28: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1c9a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c9a2c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1c9a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1c9a30: 0x0  nop
    ctx->pc = 0x1c9a30u;
    // NOP
    // 0x1c9a34: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9a34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c9a3c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1c9a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c9a40: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C9A40u;
    {
        const bool branch_taken_0x1c9a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A40u;
            // 0x1c9a44: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a40) {
            ctx->pc = 0x1C9AC8u;
            goto label_1c9ac8;
        }
    }
    ctx->pc = 0x1C9A48u;
label_1c9a48:
    // 0x1c9a48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C9A48u;
    SET_GPR_U32(ctx, 31, 0x1C9A50u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A50u; }
        if (ctx->pc != 0x1C9A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A50u; }
        if (ctx->pc != 0x1C9A50u) { return; }
    }
    ctx->pc = 0x1C9A50u;
    // 0x1c9a50: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x1c9a50u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)127u)));
    // 0x1c9a54: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1c9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c9a58: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C9A58u;
    SET_GPR_U32(ctx, 31, 0x1C9A60u);
    ctx->pc = 0x1C9A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A58u;
            // 0x1c9a5c: 0x439023  subu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A60u; }
        if (ctx->pc != 0x1C9A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A60u; }
        if (ctx->pc != 0x1C9A60u) { return; }
    }
    ctx->pc = 0x1C9A60u;
    // 0x1c9a60: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1c9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c9a64: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1c9a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c9a68: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c9a68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c9a6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a74: 0x0  nop
    ctx->pc = 0x1c9a74u;
    // NOP
    // 0x1c9a78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c9a78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c9a7c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1c9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c9a80: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c9a84: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c9a88: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9a88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9a8c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1c9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c9a90: 0xc065944  jal         func_196510
    ctx->pc = 0x1C9A90u;
    SET_GPR_U32(ctx, 31, 0x1C9A98u);
    ctx->pc = 0x1C9A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A90u;
            // 0x1c9a94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A98u; }
        if (ctx->pc != 0x1C9A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A98u; }
        if (ctx->pc != 0x1C9A98u) { return; }
    }
    ctx->pc = 0x1C9A98u;
    // 0x1c9a98: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1c9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c9a9c: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x1c9aa0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1c9aa0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43691u)));
    // 0x1c9aa4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c9aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c9aa8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1c9aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c9aac: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1c9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1c9ab0: 0x0  nop
    ctx->pc = 0x1c9ab0u;
    // NOP
    // 0x1c9ab4: 0x1810  mfhi        $v1
    ctx->pc = 0x1c9ab4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c9ab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c9abc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1c9abcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c9ac0: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C9AC0u;
    {
        const bool branch_taken_0x1c9ac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9ac0) {
            ctx->pc = 0x1C9A48u;
            goto label_1c9a48;
        }
    }
    ctx->pc = 0x1C9AC8u;
label_1c9ac8:
    // 0x1c9ac8: 0x28a300ff  slti        $v1, $a1, 0xFF
    ctx->pc = 0x1c9ac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1c9acc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9ACCu;
    {
        const bool branch_taken_0x1c9acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9acc) {
            ctx->pc = 0x1C9AF0u;
            goto label_1c9af0;
        }
    }
    ctx->pc = 0x1C9AD4u;
    // 0x1c9ad4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c9ad8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9adc: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1c9adcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c9ae0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c9ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9ae4: 0xc065944  jal         func_196510
    ctx->pc = 0x1C9AE4u;
    SET_GPR_U32(ctx, 31, 0x1C9AECu);
    ctx->pc = 0x1C9AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AE4u;
            // 0x1c9ae8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AECu; }
        if (ctx->pc != 0x1C9AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9AECu; }
        if (ctx->pc != 0x1C9AECu) { return; }
    }
    ctx->pc = 0x1C9AECu;
    // 0x1c9aec: 0x0  nop
    ctx->pc = 0x1c9aecu;
    // NOP
label_1c9af0:
    // 0x1c9af0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c9af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c9af4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c9af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c9af8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c9af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B04u;
            // 0x1c9b08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9A48u: goto label_1c9a48;
            case 0x1C9AC8u: goto label_1c9ac8;
            case 0x1C9AF0u: goto label_1c9af0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9B0Cu;
}
