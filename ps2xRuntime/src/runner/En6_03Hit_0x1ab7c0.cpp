#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_03Hit
// Address: 0x1ab7c0 - 0x1ab92c
void En6_03Hit_0x1ab7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_03Hit_0x1ab7c0");
#endif

    ctx->pc = 0x1ab7c0u;

    // 0x1ab7c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ab7c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ab7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ab7c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ab7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ab7cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ab7d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ab7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab7d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ab7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab7d8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1ab7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ab7dc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1ab7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ab7e0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1ab7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ab7e4: 0x1880004a  blez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1AB7E4u;
    {
        const bool branch_taken_0x1ab7e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AB7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7E4u;
            // 0x1ab7e8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7e4) {
            ctx->pc = 0x1AB910u;
            goto label_1ab910;
        }
    }
    ctx->pc = 0x1AB7ECu;
    // 0x1ab7ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1ab7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1ab7f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ab7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ab7f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1ab7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1ab7f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1ab7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ab7fc: 0x1c600044  bgtz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1AB7FCu;
    {
        const bool branch_taken_0x1ab7fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ab7fc) {
            ctx->pc = 0x1AB910u;
            goto label_1ab910;
        }
    }
    ctx->pc = 0x1AB804u;
    // 0x1ab804: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1ab804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ab808: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1ab808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1ab80c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ab810: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ab814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab818: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ab818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ab81c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ab81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ab820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ab824: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1ab824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1ab828: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab82c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ab830: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1ab830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ab834: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1AB834u;
    SET_GPR_U32(ctx, 31, 0x1AB83Cu);
    ctx->pc = 0x1AB838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB834u;
            // 0x1ab838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB83Cu; }
        if (ctx->pc != 0x1AB83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB83Cu; }
        if (ctx->pc != 0x1AB83Cu) { return; }
    }
    ctx->pc = 0x1AB83Cu;
    // 0x1ab83c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1ab83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ab840: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ab840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab844: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB844u;
    {
        const bool branch_taken_0x1ab844 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AB848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB844u;
            // 0x1ab848: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab844) {
            ctx->pc = 0x1AB854u;
            goto label_1ab854;
        }
    }
    ctx->pc = 0x1AB84Cu;
    // 0x1ab84c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1ab84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1ab850: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ab850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1ab854:
    // 0x1ab854: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1ab854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ab858: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AB858u;
    {
        const bool branch_taken_0x1ab858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab858) {
            ctx->pc = 0x1AB8E8u;
            goto label_1ab8e8;
        }
    }
    ctx->pc = 0x1AB860u;
label_1ab860:
    // 0x1ab860: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1AB860u;
    SET_GPR_U32(ctx, 31, 0x1AB868u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB868u; }
        if (ctx->pc != 0x1AB868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB868u; }
        if (ctx->pc != 0x1AB868u) { return; }
    }
    ctx->pc = 0x1AB868u;
    // 0x1ab868: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1ab868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1ab86c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1ab86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ab870: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ab870u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ab874: 0x0  nop
    ctx->pc = 0x1ab874u;
    // NOP
    // 0x1ab878: 0x0  nop
    ctx->pc = 0x1ab878u;
    // NOP
    // 0x1ab87c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ab87cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ab880: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1AB880u;
    SET_GPR_U32(ctx, 31, 0x1AB888u);
    ctx->pc = 0x1AB884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB880u;
            // 0x1ab884: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB888u; }
        if (ctx->pc != 0x1AB888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB888u; }
        if (ctx->pc != 0x1AB888u) { return; }
    }
    ctx->pc = 0x1AB888u;
    // 0x1ab888: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1ab88c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1ab88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ab890: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ab890u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ab894: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab898: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab89c: 0x0  nop
    ctx->pc = 0x1ab89cu;
    // NOP
    // 0x1ab8a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ab8a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1ab8a4: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ab8a8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ab8ac: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1ab8b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1ab8b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ab8b4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ab8b8: 0xc065944  jal         func_196510
    ctx->pc = 0x1AB8B8u;
    SET_GPR_U32(ctx, 31, 0x1AB8C0u);
    ctx->pc = 0x1AB8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8B8u;
            // 0x1ab8bc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8C0u; }
        if (ctx->pc != 0x1AB8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8C0u; }
        if (ctx->pc != 0x1AB8C0u) { return; }
    }
    ctx->pc = 0x1AB8C0u;
    // 0x1ab8c0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1ab8c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ab8c8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB8C8u;
    {
        const bool branch_taken_0x1ab8c8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AB8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8C8u;
            // 0x1ab8cc: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8c8) {
            ctx->pc = 0x1AB8D8u;
            goto label_1ab8d8;
        }
    }
    ctx->pc = 0x1AB8D0u;
    // 0x1ab8d0: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1ab8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1ab8d4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ab8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1ab8d8:
    // 0x1ab8d8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1ab8d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ab8dc: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1AB8DCu;
    {
        const bool branch_taken_0x1ab8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab8dc) {
            ctx->pc = 0x1AB860u;
            goto label_1ab860;
        }
    }
    ctx->pc = 0x1AB8E4u;
    // 0x1ab8e4: 0x0  nop
    ctx->pc = 0x1ab8e4u;
    // NOP
label_1ab8e8:
    // 0x1ab8e8: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1ab8e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1ab8ec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB8ECu;
    {
        const bool branch_taken_0x1ab8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab8ec) {
            ctx->pc = 0x1AB910u;
            goto label_1ab910;
        }
    }
    ctx->pc = 0x1AB8F4u;
    // 0x1ab8f4: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1ab8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ab8f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab8fc: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1ab8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ab900: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab904: 0xc065944  jal         func_196510
    ctx->pc = 0x1AB904u;
    SET_GPR_U32(ctx, 31, 0x1AB90Cu);
    ctx->pc = 0x1AB908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB904u;
            // 0x1ab908: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB90Cu; }
        if (ctx->pc != 0x1AB90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB90Cu; }
        if (ctx->pc != 0x1AB90Cu) { return; }
    }
    ctx->pc = 0x1AB90Cu;
    // 0x1ab90c: 0x0  nop
    ctx->pc = 0x1ab90cu;
    // NOP
label_1ab910:
    // 0x1ab910: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ab910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ab914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ab914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab918: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ab918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab91c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab924: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB924u;
            // 0x1ab928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB854u: goto label_1ab854;
            case 0x1AB860u: goto label_1ab860;
            case 0x1AB8D8u: goto label_1ab8d8;
            case 0x1AB8E8u: goto label_1ab8e8;
            case 0x1AB910u: goto label_1ab910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB92Cu;
}
