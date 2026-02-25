#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_04Hit
// Address: 0x1a6990 - 0x1a6acc
void En4_04Hit_0x1a6990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_04Hit_0x1a6990");
#endif

    ctx->pc = 0x1a6990u;

    // 0x1a6990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a6994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a6994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a6998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a6998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a699c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a69a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a69a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a69a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a69a8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a69ac: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a69acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a69b0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a69b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a69b4: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A69B4u;
    {
        const bool branch_taken_0x1a69b4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A69B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69B4u;
            // 0x1a69b8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69b4) {
            ctx->pc = 0x1A6AB0u;
            goto label_1a6ab0;
        }
    }
    ctx->pc = 0x1A69BCu;
    // 0x1a69bc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a69c0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a69c4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a69c8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a69cc: 0x1c600038  bgtz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A69CCu;
    {
        const bool branch_taken_0x1a69cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a69cc) {
            ctx->pc = 0x1A6AB0u;
            goto label_1a6ab0;
        }
    }
    ctx->pc = 0x1A69D4u;
    // 0x1a69d4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a69d8: 0x240309c4  addiu       $v1, $zero, 0x9C4
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
    // 0x1a69dc: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a69e0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a69e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a69e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a69e8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a69ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a69ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a69f0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a69f4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a69f8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A69F8u;
    SET_GPR_U32(ctx, 31, 0x1A6A00u);
    ctx->pc = 0x1A69FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A69F8u;
            // 0x1a69fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A00u; }
        if (ctx->pc != 0x1A6A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A00u; }
        if (ctx->pc != 0x1A6A00u) { return; }
    }
    ctx->pc = 0x1A6A00u;
    // 0x1a6a00: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1a6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a6a04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a6a04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a08: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6A08u;
    {
        const bool branch_taken_0x1a6a08 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A6A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A08u;
            // 0x1a6a0c: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a08) {
            ctx->pc = 0x1A6A18u;
            goto label_1a6a18;
        }
    }
    ctx->pc = 0x1A6A10u;
    // 0x1a6a10: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1a6a14: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1a6a14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1a6a18:
    // 0x1a6a18: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1a6a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6a1c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A6A1Cu;
    {
        const bool branch_taken_0x1a6a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a1c) {
            ctx->pc = 0x1A6AB0u;
            goto label_1a6ab0;
        }
    }
    ctx->pc = 0x1A6A24u;
    // 0x1a6a24: 0x0  nop
    ctx->pc = 0x1a6a24u;
    // NOP
label_1a6a28:
    // 0x1a6a28: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A6A28u;
    SET_GPR_U32(ctx, 31, 0x1A6A30u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A30u; }
        if (ctx->pc != 0x1A6A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A30u; }
        if (ctx->pc != 0x1A6A30u) { return; }
    }
    ctx->pc = 0x1A6A30u;
    // 0x1a6a30: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a6a34: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a6a38: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a6a38u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6a3c: 0x0  nop
    ctx->pc = 0x1a6a3cu;
    // NOP
    // 0x1a6a40: 0x0  nop
    ctx->pc = 0x1a6a40u;
    // NOP
    // 0x1a6a44: 0x1010  mfhi        $v0
    ctx->pc = 0x1a6a44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a6a48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A6A48u;
    SET_GPR_U32(ctx, 31, 0x1A6A50u);
    ctx->pc = 0x1A6A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A48u;
            // 0x1a6a4c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A50u; }
        if (ctx->pc != 0x1A6A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A50u; }
        if (ctx->pc != 0x1A6A50u) { return; }
    }
    ctx->pc = 0x1A6A50u;
    // 0x1a6a50: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a6a54: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a6a58: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a6a58u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a6a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6a64: 0x0  nop
    ctx->pc = 0x1a6a64u;
    // NOP
    // 0x1a6a68: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6a68u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a6a6c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a6a70: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a6a74: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1a6a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a6a78: 0x1810  mfhi        $v1
    ctx->pc = 0x1a6a78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a6a7c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1a6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a6a80: 0xc065944  jal         func_196510
    ctx->pc = 0x1A6A80u;
    SET_GPR_U32(ctx, 31, 0x1A6A88u);
    ctx->pc = 0x1A6A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A80u;
            // 0x1a6a84: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A88u; }
        if (ctx->pc != 0x1A6A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6A88u; }
        if (ctx->pc != 0x1A6A88u) { return; }
    }
    ctx->pc = 0x1A6A88u;
    // 0x1a6a88: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a6a8c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a6a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a6a90: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6A90u;
    {
        const bool branch_taken_0x1a6a90 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A6A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6A90u;
            // 0x1a6a94: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a90) {
            ctx->pc = 0x1A6AA0u;
            goto label_1a6aa0;
        }
    }
    ctx->pc = 0x1A6A98u;
    // 0x1a6a98: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1a6a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1a6a9c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1a6a9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1a6aa0:
    // 0x1a6aa0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1a6aa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6aa4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A6AA4u;
    {
        const bool branch_taken_0x1a6aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6aa4) {
            ctx->pc = 0x1A6A28u;
            goto label_1a6a28;
        }
    }
    ctx->pc = 0x1A6AACu;
    // 0x1a6aac: 0x0  nop
    ctx->pc = 0x1a6aacu;
    // NOP
label_1a6ab0:
    // 0x1a6ab0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6ab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a6ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a6ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6AC4u;
            // 0x1a6ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6A18u: goto label_1a6a18;
            case 0x1A6A28u: goto label_1a6a28;
            case 0x1A6AA0u: goto label_1a6aa0;
            case 0x1A6AB0u: goto label_1a6ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6ACCu;
}
