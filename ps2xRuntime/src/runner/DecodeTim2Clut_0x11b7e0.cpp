#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DecodeTim2Clut
// Address: 0x11b7e0 - 0x11bb80
void DecodeTim2Clut_0x11b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DecodeTim2Clut_0x11b7e0");
#endif

    ctx->pc = 0x11b7e0u;

    // 0x11b7e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11b7e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11b7e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11b7ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11b7f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11b7f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11b7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11b7fc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11b800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b804: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11b808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b80c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11b810: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11b810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11b814: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x11B814u;
    SET_GPR_U32(ctx, 31, 0x11B81Cu);
    ctx->pc = 0x11B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B814u;
            // 0x11b818: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B81Cu; }
        if (ctx->pc != 0x11B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B81Cu; }
        if (ctx->pc != 0x11B81Cu) { return; }
    }
    ctx->pc = 0x11B81Cu;
    // 0x11b81c: 0x92430012  lbu         $v1, 0x12($s2)
    ctx->pc = 0x11b81cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x11b820: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x11B820u;
    {
        const bool branch_taken_0x11b820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B820u;
            // 0x11b824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b820) {
            ctx->pc = 0x11BB58u;
            goto label_11bb58;
        }
    }
    ctx->pc = 0x11B828u;
    // 0x11b828: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x11b828u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11b82c: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x11b82cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)63u)));
    // 0x11b830: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x11b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11b834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b838: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11b83c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x11b83cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b840: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B840u;
    {
        const bool branch_taken_0x11b840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x11B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B840u;
            // 0x11b844: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b840) {
            ctx->pc = 0x11B854u;
            goto label_11b854;
        }
    }
    ctx->pc = 0x11B848u;
    // 0x11b848: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x11b848u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)2u)));
    // 0x11b84c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11b84cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b850: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x11b850u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_11b854:
    // 0x11b854: 0x92430013  lbu         $v1, 0x13($s2)
    ctx->pc = 0x11b854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x11b858: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11b85c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B85Cu;
    {
        const bool branch_taken_0x11b85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B85Cu;
            // 0x11b860: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b85c) {
            ctx->pc = 0x11B870u;
            goto label_11b870;
        }
    }
    ctx->pc = 0x11B864u;
    // 0x11b864: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x11b864u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x11b868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11B868u;
    {
        const bool branch_taken_0x11b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B868u;
            // 0x11b86c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b868) {
            ctx->pc = 0x11B88Cu;
            goto label_11b88c;
        }
    }
    ctx->pc = 0x11B870u;
label_11b870:
    // 0x11b870: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B870u;
    {
        const bool branch_taken_0x11b870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b870) {
            ctx->pc = 0x11B874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B870u;
            // 0x11b874: 0x9642000e  lhu         $v0, 0xE($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B888u;
            goto label_11b888;
        }
    }
    ctx->pc = 0x11B878u;
    // 0x11b878: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11B878u;
    SET_GPR_U32(ctx, 31, 0x11B880u);
    ctx->pc = 0x11B87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B878u;
            // 0x11b87c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B880u; }
        if (ctx->pc != 0x11B880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B880u; }
        if (ctx->pc != 0x11B880u) { return; }
    }
    ctx->pc = 0x11B880u;
    // 0x11b880: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x11B880u;
    {
        const bool branch_taken_0x11b880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B880u;
            // 0x11b884: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b880) {
            ctx->pc = 0x11BB5Cu;
            goto label_11bb5c;
        }
    }
    ctx->pc = 0x11B888u;
label_11b888:
    // 0x11b888: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11b88c:
    // 0x11b88c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11B88Cu;
    {
        const bool branch_taken_0x11b88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b88c) {
            ctx->pc = 0x11B890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B88Cu;
            // 0x11b890: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B894u;
            goto label_11b894;
        }
    }
    ctx->pc = 0x11B894u;
label_11b894:
    // 0x11b894: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x11b894u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11b898: 0x1012  mflo        $v0
    ctx->pc = 0x11b898u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x11b89c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8a0: 0xc0444d4  jal         func_111350
    ctx->pc = 0x11B8A0u;
    SET_GPR_U32(ctx, 31, 0x11B8A8u);
    ctx->pc = 0x11B8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8A0u;
            // 0x11b8a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111350u;
    if (runtime->hasFunction(0x111350u)) {
        auto targetFn = runtime->lookupFunction(0x111350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8A8u; }
        if (ctx->pc != 0x11B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsBlockSize_0x111350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8A8u; }
        if (ctx->pc != 0x11B8A8u) { return; }
    }
    ctx->pc = 0x11B8A8u;
    // 0x11b8a8: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11B8A8u;
    SET_GPR_U32(ctx, 31, 0x11B8B0u);
    ctx->pc = 0x11B188u;
    if (runtime->hasFunction(0x11B188u)) {
        auto targetFn = runtime->lookupFunction(0x11B188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8B0u; }
        if (ctx->pc != 0x11B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getLocalCbp_0x11b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8B0u; }
        if (ctx->pc != 0x11B8B0u) { return; }
    }
    ctx->pc = 0x11B8B0u;
    // 0x11b8b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11b8b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8b4: 0x92430013  lbu         $v1, 0x13($s2)
    ctx->pc = 0x11b8b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
    // 0x11b8b8: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x11b8b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x11b8bc: 0x24044204  addiu       $a0, $zero, 0x4204
    ctx->pc = 0x11b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16900));
    // 0x11b8c0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x11b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x11b8c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x11b8c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11b8c8: 0x1064003d  beq         $v1, $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11B8C8u;
    {
        const bool branch_taken_0x11b8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8C8u;
            // 0x11b8cc: 0x28624205  slti        $v0, $v1, 0x4205 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16901) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c8) {
            ctx->pc = 0x11B9C0u;
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11B8D0u;
    // 0x11b8d0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11B8D0u;
    {
        const bool branch_taken_0x11b8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8D0u;
            // 0x11b8d4: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d0) {
            ctx->pc = 0x11B954u;
            goto label_11b954;
        }
    }
    ctx->pc = 0x11B8D8u;
    // 0x11b8d8: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x11B8D8u;
    {
        const bool branch_taken_0x11b8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8D8u;
            // 0x11b8dc: 0x28620206  slti        $v0, $v1, 0x206 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)518) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8d8) {
            ctx->pc = 0x11B9C0u;
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11B8E0u;
    // 0x11b8e0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B8E0u;
    {
        const bool branch_taken_0x11b8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8E0u;
            // 0x11b8e4: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e0) {
            ctx->pc = 0x11B91Cu;
            goto label_11b91c;
        }
    }
    ctx->pc = 0x11B8E8u;
    // 0x11b8e8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11B8E8u;
    {
        const bool branch_taken_0x11b8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8E8u;
            // 0x11b8ec: 0x28620106  slti        $v0, $v1, 0x106 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)262) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e8) {
            ctx->pc = 0x11B9C0u;
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11B8F0u;
    // 0x11b8f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B8F0u;
    {
        const bool branch_taken_0x11b8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8F0u;
            // 0x11b8f4: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f0) {
            ctx->pc = 0x11B908u;
            goto label_11b908;
        }
    }
    ctx->pc = 0x11B8F8u;
    // 0x11b8f8: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x11B8F8u;
    {
        const bool branch_taken_0x11b8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8F8u;
            // 0x11b8fc: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8f8) {
            ctx->pc = 0x11BA04u;
            goto label_11ba04;
        }
    }
    ctx->pc = 0x11B900u;
    // 0x11b900: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x11B900u;
    {
        const bool branch_taken_0x11b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B900u;
            // 0x11b904: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b900) {
            ctx->pc = 0x11BA9Cu;
            goto label_11ba9c;
        }
    }
    ctx->pc = 0x11B908u;
label_11b908:
    // 0x11b908: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x11b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x11b90c: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11B90Cu;
    {
        const bool branch_taken_0x11b90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B90Cu;
            // 0x11b910: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b90c) {
            ctx->pc = 0x11BA04u;
            goto label_11ba04;
        }
    }
    ctx->pc = 0x11B914u;
    // 0x11b914: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x11B914u;
    {
        const bool branch_taken_0x11b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B914u;
            // 0x11b918: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b914) {
            ctx->pc = 0x11BA9Cu;
            goto label_11ba9c;
        }
    }
    ctx->pc = 0x11B91Cu;
label_11b91c:
    // 0x11b91c: 0x24020305  addiu       $v0, $zero, 0x305
    ctx->pc = 0x11b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
    // 0x11b920: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11B920u;
    {
        const bool branch_taken_0x11b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B920u;
            // 0x11b924: 0x28620306  slti        $v0, $v1, 0x306 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)774) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b920) {
            ctx->pc = 0x11B9C0u;
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11B928u;
    // 0x11b928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B928u;
    {
        const bool branch_taken_0x11b928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B928u;
            // 0x11b92c: 0x24020304  addiu       $v0, $zero, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b928) {
            ctx->pc = 0x11B940u;
            goto label_11b940;
        }
    }
    ctx->pc = 0x11B930u;
    // 0x11b930: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x11B930u;
    {
        const bool branch_taken_0x11b930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B930u;
            // 0x11b934: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b930) {
            ctx->pc = 0x11BA04u;
            goto label_11ba04;
        }
    }
    ctx->pc = 0x11B938u;
    // 0x11b938: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x11B938u;
    {
        const bool branch_taken_0x11b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B938u;
            // 0x11b93c: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b938) {
            ctx->pc = 0x11BA9Cu;
            goto label_11ba9c;
        }
    }
    ctx->pc = 0x11B940u;
label_11b940:
    // 0x11b940: 0x24024104  addiu       $v0, $zero, 0x4104
    ctx->pc = 0x11b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16644));
    // 0x11b944: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11B944u;
    {
        const bool branch_taken_0x11b944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B944u;
            // 0x11b948: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b944) {
            ctx->pc = 0x11B9C0u;
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11B94Cu;
    // 0x11b94c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x11B94Cu;
    {
        const bool branch_taken_0x11b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B94Cu;
            // 0x11b950: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b94c) {
            ctx->pc = 0x11BA9Cu;
            goto label_11ba9c;
        }
    }
    ctx->pc = 0x11B954u;
label_11b954:
    // 0x11b954: 0x34028205  ori         $v0, $zero, 0x8205
    ctx->pc = 0x11b954u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33285u)));
    // 0x11b958: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11b958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11b95c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11B95Cu;
    {
        const bool branch_taken_0x11b95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B95Cu;
            // 0x11b960: 0x34028305  ori         $v0, $zero, 0x8305 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33541u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b95c) {
            ctx->pc = 0x11B99Cu;
            goto label_11b99c;
        }
    }
    ctx->pc = 0x11B964u;
    // 0x11b964: 0x34028204  ori         $v0, $zero, 0x8204
    ctx->pc = 0x11b964u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33284u)));
    // 0x11b968: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11b968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11b96c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x11B96Cu;
    {
        const bool branch_taken_0x11b96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B96Cu;
            // 0x11b970: 0x24024304  addiu       $v0, $zero, 0x4304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b96c) {
            ctx->pc = 0x11BA04u;
            goto label_11ba04;
        }
    }
    ctx->pc = 0x11B974u;
    // 0x11b974: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B974u;
    {
        const bool branch_taken_0x11b974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B974u;
            // 0x11b978: 0x28624304  slti        $v0, $v1, 0x4304 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17156) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b974) {
            ctx->pc = 0x11B9C0u;
            goto label_11b9c0;
        }
    }
    ctx->pc = 0x11B97Cu;
    // 0x11b97c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x11B97Cu;
    {
        const bool branch_taken_0x11b97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B97Cu;
            // 0x11b980: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b97c) {
            ctx->pc = 0x11BA98u;
            goto label_11ba98;
        }
    }
    ctx->pc = 0x11B984u;
    // 0x11b984: 0x34028105  ori         $v0, $zero, 0x8105
    ctx->pc = 0x11b984u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33029u)));
    // 0x11b988: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11b988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11b98c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x11B98Cu;
    {
        const bool branch_taken_0x11b98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B98Cu;
            // 0x11b990: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b98c) {
            ctx->pc = 0x11BA98u;
            goto label_11ba98;
        }
    }
    ctx->pc = 0x11B994u;
    // 0x11b994: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B994u;
    {
        const bool branch_taken_0x11b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B994u;
            // 0x11b998: 0x34028104  ori         $v0, $zero, 0x8104 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33028u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b994) {
            ctx->pc = 0x11B9ACu;
            goto label_11b9ac;
        }
    }
    ctx->pc = 0x11B99Cu;
label_11b99c:
    // 0x11b99c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11b99cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11b9a0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11B9A0u;
    {
        const bool branch_taken_0x11b9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9A0u;
            // 0x11b9a4: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9a0) {
            ctx->pc = 0x11BA98u;
            goto label_11ba98;
        }
    }
    ctx->pc = 0x11B9A8u;
    // 0x11b9a8: 0x34028304  ori         $v0, $zero, 0x8304
    ctx->pc = 0x11b9a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33540u)));
label_11b9ac:
    // 0x11b9ac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11b9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11b9b0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x11B9B0u;
    {
        const bool branch_taken_0x11b9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9B0u;
            // 0x11b9b4: 0x26c20010  addiu       $v0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9b0) {
            ctx->pc = 0x11BA98u;
            goto label_11ba98;
        }
    }
    ctx->pc = 0x11B9B8u;
    // 0x11b9b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11B9B8u;
    {
        const bool branch_taken_0x11b9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9B8u;
            // 0x11b9bc: 0x9642000e  lhu         $v0, 0xE($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9b8) {
            ctx->pc = 0x11BA08u;
            goto label_11ba08;
        }
    }
    ctx->pc = 0x11B9C0u;
label_11b9c0:
    // 0x11b9c0: 0x9648000e  lhu         $t0, 0xE($s2)
    ctx->pc = 0x11b9c0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x11b9c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x11b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x11b9c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11b9cc: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x11b9ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9d0: 0xac6272c0  sw          $v0, 0x72C0($v1)
    ctx->pc = 0x11b9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29376), GPR_U32(ctx, 2));
    // 0x11b9d4: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x11b9d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11b9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11b9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b9e4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x11b9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11b9e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b9e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9ec: 0xc046bc4  jal         func_11AF10
    ctx->pc = 0x11B9ECu;
    SET_GPR_U32(ctx, 31, 0x11B9F4u);
    ctx->pc = 0x11B9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9ECu;
            // 0x11b9f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AF10u;
    if (runtime->hasFunction(0x11AF10u)) {
        auto targetFn = runtime->lookupFunction(0x11AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9F4u; }
        if (ctx->pc != 0x11B9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeTim2TexturePacket_0x11af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9F4u; }
        if (ctx->pc != 0x11B9F4u) { return; }
    }
    ctx->pc = 0x11B9F4u;
    // 0x11b9f4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11B9F4u;
    {
        const bool branch_taken_0x11b9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9F4u;
            // 0x11b9f8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9f4) {
            ctx->pc = 0x11BA94u;
            goto label_11ba94;
        }
    }
    ctx->pc = 0x11B9FCu;
    // 0x11b9fc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x11B9FCu;
    {
        const bool branch_taken_0x11b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9FCu;
            // 0x11ba00: 0xdfb60070  ld          $s6, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b9fc) {
            ctx->pc = 0x11BB60u;
            goto label_11bb60;
        }
    }
    ctx->pc = 0x11BA04u;
label_11ba04:
    // 0x11ba04: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x11ba04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_11ba08:
    // 0x11ba08: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11ba0c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11BA0Cu;
    {
        const bool branch_taken_0x11ba0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA0Cu;
            // 0x11ba10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba0c) {
            ctx->pc = 0x11BA94u;
            goto label_11ba94;
        }
    }
    ctx->pc = 0x11BA14u;
    // 0x11ba14: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x11ba14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x11ba18: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x11ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11ba1c: 0x0  nop
    ctx->pc = 0x11ba1cu;
    // NOP
label_11ba20:
    // 0x11ba20: 0x32090001  andi        $t1, $s0, 0x1
    ctx->pc = 0x11ba20u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x11ba24: 0x105043  sra         $t2, $s0, 1
    ctx->pc = 0x11ba24u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 16), 1));
    // 0x11ba28: 0xae6272c0  sw          $v0, 0x72C0($s3)
    ctx->pc = 0x11ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 29376), GPR_U32(ctx, 2));
    // 0x11ba2c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x11ba2cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x11ba30: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x11ba30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x11ba34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11ba34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x11ba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ba40: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x11ba40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11ba44: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x11ba44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ba48: 0xc046bc4  jal         func_11AF10
    ctx->pc = 0x11BA48u;
    SET_GPR_U32(ctx, 31, 0x11BA50u);
    ctx->pc = 0x11BA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA48u;
            // 0x11ba4c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AF10u;
    if (runtime->hasFunction(0x11AF10u)) {
        auto targetFn = runtime->lookupFunction(0x11AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA50u; }
        if (ctx->pc != 0x11BA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeTim2TexturePacket_0x11af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA50u; }
        if (ctx->pc != 0x11BA50u) { return; }
    }
    ctx->pc = 0x11BA50u;
    // 0x11ba50: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x11BA50u;
    {
        const bool branch_taken_0x11ba50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA50u;
            // 0x11ba54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba50) {
            ctx->pc = 0x11BB58u;
            goto label_11bb58;
        }
    }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x11ba58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x11ba5c: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x11ba5cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x11ba60: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA60u;
    {
        const bool branch_taken_0x11ba60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA60u;
            // 0x11ba64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba60) {
            ctx->pc = 0x11BA70u;
            goto label_11ba70;
        }
    }
    ctx->pc = 0x11BA68u;
    // 0x11ba68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA68u;
    {
        const bool branch_taken_0x11ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA68u;
            // 0x11ba6c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba68) {
            ctx->pc = 0x11BA7Cu;
            goto label_11ba7c;
        }
    }
    ctx->pc = 0x11BA70u;
label_11ba70:
    // 0x11ba70: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11BA70u;
    {
        const bool branch_taken_0x11ba70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ba70) {
            ctx->pc = 0x11BA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA70u;
            // 0x11ba74: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BA7Cu;
            goto label_11ba7c;
        }
    }
    ctx->pc = 0x11BA78u;
    // 0x11ba78: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x11ba78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_11ba7c:
    // 0x11ba7c: 0x9642000e  lhu         $v0, 0xE($s2)
    ctx->pc = 0x11ba7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x11ba80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ba84: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x11ba88: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11ba88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ba8c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x11BA8Cu;
    {
        const bool branch_taken_0x11ba8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA8Cu;
            // 0x11ba90: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba8c) {
            ctx->pc = 0x11BA20u;
            goto label_11ba20;
        }
    }
    ctx->pc = 0x11BA94u;
label_11ba94:
    // 0x11ba94: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_11ba98:
    // 0x11ba98: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x11ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_11ba9c:
    // 0x11ba9c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11baa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11baa4: 0xc046b62  jal         func_11AD88
    ctx->pc = 0x11BAA4u;
    SET_GPR_U32(ctx, 31, 0x11BAACu);
    ctx->pc = 0x11BAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAA4u;
            // 0x11baa8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD88u;
    if (runtime->hasFunction(0x11AD88u)) {
        auto targetFn = runtime->lookupFunction(0x11AD88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAACu; }
        if (ctx->pc != 0x11BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getPackedData_0x11ad88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAACu; }
        if (ctx->pc != 0x11BAACu) { return; }
    }
    ctx->pc = 0x11BAACu;
    // 0x11baac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x11baacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bab0: 0x3c04ff87  lui         $a0, 0xFF87
    ctx->pc = 0x11bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65415 << 16));
    // 0x11bab4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11bab4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bab8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11bab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x11babc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11babcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bac0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11bac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x11bac4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11bac4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bac8: 0xdd030000  ld          $v1, 0x0($t0)
    ctx->pc = 0x11bac8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11bacc: 0x142cfc  dsll32      $a1, $s4, 19
    ctx->pc = 0x11baccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 19));
    // 0x11bad0: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x11bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x11bad4: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x11bad4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)31u)));
    // 0x11bad8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x11bad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x11badc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x11badcu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bae0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x11bae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x11bae4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x11bae4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bae8: 0x32a23fff  andi        $v0, $s5, 0x3FFF
    ctx->pc = 0x11bae8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)16383u)));
    // 0x11baec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11baecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11baf0: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x11baf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x11baf4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11baf4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11baf8: 0x3c07ff7f  lui         $a3, 0xFF7F
    ctx->pc = 0x11baf8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65407 << 16));
    // 0x11bafc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x11bafcu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bb00: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x11bb00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x11bb04: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x11bb04u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bb08: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x11bb08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x11bb0c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x11bb0cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bb10: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x11bb10u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x11bb14: 0x3c05e0ff  lui         $a1, 0xE0FF
    ctx->pc = 0x11bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57599 << 16));
    // 0x11bb18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x11bb18u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bb1c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x11bb1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x11bb20: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x11bb20u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bb24: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x11bb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x11bb28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x11bb28u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bb2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x11bb2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11bb30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bb34: 0x630fa  dsrl        $a2, $a2, 3
    ctx->pc = 0x11bb34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 3);
    // 0x11bb38: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x11bb38u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x11bb3c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x11bb3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x11bb40: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x11bb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x11bb44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11bb44u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x11bb48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11bb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb4c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x11bb4cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x11bb50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11bb50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11bb54: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x11bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
label_11bb58:
    // 0x11bb58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11bb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11bb5c:
    // 0x11bb5c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11bb5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11bb60:
    // 0x11bb60: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11bb60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11bb64: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11bb64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bb68: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11bb68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bb6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11bb6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bb70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11bb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bb74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11bb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bb78: 0x3e00008  jr          $ra
    ctx->pc = 0x11BB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB78u;
            // 0x11bb7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B854u: goto label_11b854;
            case 0x11B870u: goto label_11b870;
            case 0x11B888u: goto label_11b888;
            case 0x11B88Cu: goto label_11b88c;
            case 0x11B894u: goto label_11b894;
            case 0x11B908u: goto label_11b908;
            case 0x11B91Cu: goto label_11b91c;
            case 0x11B940u: goto label_11b940;
            case 0x11B954u: goto label_11b954;
            case 0x11B99Cu: goto label_11b99c;
            case 0x11B9ACu: goto label_11b9ac;
            case 0x11B9C0u: goto label_11b9c0;
            case 0x11BA04u: goto label_11ba04;
            case 0x11BA08u: goto label_11ba08;
            case 0x11BA20u: goto label_11ba20;
            case 0x11BA70u: goto label_11ba70;
            case 0x11BA7Cu: goto label_11ba7c;
            case 0x11BA94u: goto label_11ba94;
            case 0x11BA98u: goto label_11ba98;
            case 0x11BA9Cu: goto label_11ba9c;
            case 0x11BB58u: goto label_11bb58;
            case 0x11BB5Cu: goto label_11bb5c;
            case 0x11BB60u: goto label_11bb60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BB80u;
}
