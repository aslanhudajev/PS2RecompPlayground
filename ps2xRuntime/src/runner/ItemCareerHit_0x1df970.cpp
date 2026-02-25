#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemCareerHit
// Address: 0x1df970 - 0x1dfadc
void ItemCareerHit_0x1df970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemCareerHit_0x1df970");
#endif

    ctx->pc = 0x1df970u;

    // 0x1df970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1df974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1df974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1df978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1df97c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df988: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1df98c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1df98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1df990: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df994: 0x1880004a  blez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1DF994u;
    {
        const bool branch_taken_0x1df994 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DF998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF994u;
            // 0x1df998: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df994) {
            ctx->pc = 0x1DFAC0u;
            goto label_1dfac0;
        }
    }
    ctx->pc = 0x1DF99Cu;
    // 0x1df99c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1df99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1df9a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1df9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1df9a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1df9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1df9a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1df9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df9ac: 0x1c600044  bgtz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1DF9ACu;
    {
        const bool branch_taken_0x1df9ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1df9ac) {
            ctx->pc = 0x1DFAC0u;
            goto label_1dfac0;
        }
    }
    ctx->pc = 0x1DF9B4u;
    // 0x1df9b4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1df9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1df9b8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1df9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1df9bc: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1df9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1df9c0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1df9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df9c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1df9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df9c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1df9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df9cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1df9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1df9d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1df9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1df9d4: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1df9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1df9d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1df9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1df9dc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1df9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1df9e0: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1df9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1df9e4: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1DF9E4u;
    SET_GPR_U32(ctx, 31, 0x1DF9ECu);
    ctx->pc = 0x1DF9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9E4u;
            // 0x1df9e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9ECu; }
        if (ctx->pc != 0x1DF9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9ECu; }
        if (ctx->pc != 0x1DF9ECu) { return; }
    }
    ctx->pc = 0x1DF9ECu;
    // 0x1df9ec: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1df9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1df9f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1df9f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9f4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF9F4u;
    {
        const bool branch_taken_0x1df9f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1DF9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9F4u;
            // 0x1df9f8: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9f4) {
            ctx->pc = 0x1DFA04u;
            goto label_1dfa04;
        }
    }
    ctx->pc = 0x1DF9FCu;
    // 0x1df9fc: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1df9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1dfa00: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1dfa00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1dfa04:
    // 0x1dfa04: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1dfa04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dfa08: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1DFA08u;
    {
        const bool branch_taken_0x1dfa08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa08) {
            ctx->pc = 0x1DFA98u;
            goto label_1dfa98;
        }
    }
    ctx->pc = 0x1DFA10u;
label_1dfa10:
    // 0x1dfa10: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DFA10u;
    SET_GPR_U32(ctx, 31, 0x1DFA18u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA18u; }
        if (ctx->pc != 0x1DFA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA18u; }
        if (ctx->pc != 0x1DFA18u) { return; }
    }
    ctx->pc = 0x1DFA18u;
    // 0x1dfa18: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1dfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1dfa1c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1dfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1dfa20: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1dfa20u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1dfa24: 0x0  nop
    ctx->pc = 0x1dfa24u;
    // NOP
    // 0x1dfa28: 0x0  nop
    ctx->pc = 0x1dfa28u;
    // NOP
    // 0x1dfa2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1dfa2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dfa30: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DFA30u;
    SET_GPR_U32(ctx, 31, 0x1DFA38u);
    ctx->pc = 0x1DFA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA30u;
            // 0x1dfa34: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA38u; }
        if (ctx->pc != 0x1DFA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA38u; }
        if (ctx->pc != 0x1DFA38u) { return; }
    }
    ctx->pc = 0x1DFA38u;
    // 0x1dfa38: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1dfa3c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1dfa40: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1dfa40u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1dfa44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dfa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dfa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dfa4c: 0x0  nop
    ctx->pc = 0x1dfa4cu;
    // NOP
    // 0x1dfa50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1dfa50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1dfa54: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1dfa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dfa58: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1dfa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dfa5c: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1dfa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1dfa60: 0x1810  mfhi        $v1
    ctx->pc = 0x1dfa60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1dfa64: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1dfa68: 0xc065944  jal         func_196510
    ctx->pc = 0x1DFA68u;
    SET_GPR_U32(ctx, 31, 0x1DFA70u);
    ctx->pc = 0x1DFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA68u;
            // 0x1dfa6c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA70u; }
        if (ctx->pc != 0x1DFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA70u; }
        if (ctx->pc != 0x1DFA70u) { return; }
    }
    ctx->pc = 0x1DFA70u;
    // 0x1dfa70: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1dfa74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1dfa78: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA78u;
    {
        const bool branch_taken_0x1dfa78 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA78u;
            // 0x1dfa7c: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa78) {
            ctx->pc = 0x1DFA88u;
            goto label_1dfa88;
        }
    }
    ctx->pc = 0x1DFA80u;
    // 0x1dfa80: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1dfa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1dfa84: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1dfa84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1dfa88:
    // 0x1dfa88: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1dfa88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dfa8c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1DFA8Cu;
    {
        const bool branch_taken_0x1dfa8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa8c) {
            ctx->pc = 0x1DFA10u;
            goto label_1dfa10;
        }
    }
    ctx->pc = 0x1DFA94u;
    // 0x1dfa94: 0x0  nop
    ctx->pc = 0x1dfa94u;
    // NOP
label_1dfa98:
    // 0x1dfa98: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1dfa98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1dfa9c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFA9Cu;
    {
        const bool branch_taken_0x1dfa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa9c) {
            ctx->pc = 0x1DFAC0u;
            goto label_1dfac0;
        }
    }
    ctx->pc = 0x1DFAA4u;
    // 0x1dfaa4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dfaa8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dfaa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dfaac: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dfab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfab4: 0xc065944  jal         func_196510
    ctx->pc = 0x1DFAB4u;
    SET_GPR_U32(ctx, 31, 0x1DFABCu);
    ctx->pc = 0x1DFAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAB4u;
            // 0x1dfab8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFABCu; }
        if (ctx->pc != 0x1DFABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFABCu; }
        if (ctx->pc != 0x1DFABCu) { return; }
    }
    ctx->pc = 0x1DFABCu;
    // 0x1dfabc: 0x0  nop
    ctx->pc = 0x1dfabcu;
    // NOP
label_1dfac0:
    // 0x1dfac0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dfac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dfac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAD4u;
            // 0x1dfad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFA04u: goto label_1dfa04;
            case 0x1DFA10u: goto label_1dfa10;
            case 0x1DFA88u: goto label_1dfa88;
            case 0x1DFA98u: goto label_1dfa98;
            case 0x1DFAC0u: goto label_1dfac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFADCu;
}
