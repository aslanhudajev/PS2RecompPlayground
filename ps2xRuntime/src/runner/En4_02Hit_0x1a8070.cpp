#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_02Hit
// Address: 0x1a8070 - 0x1a81ac
void En4_02Hit_0x1a8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_02Hit_0x1a8070");
#endif

    ctx->pc = 0x1a8070u;

    // 0x1a8070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8074: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a8078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a8078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a807c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a8080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a8084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a8088: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1a8088u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a808c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a808cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a8090: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a8094: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A8094u;
    {
        const bool branch_taken_0x1a8094 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A8098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8094u;
            // 0x1a8098: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8094) {
            ctx->pc = 0x1A8190u;
            goto label_1a8190;
        }
    }
    ctx->pc = 0x1A809Cu;
    // 0x1a809c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a80a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a80a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1a80a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1a80a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a80ac: 0x1c600038  bgtz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A80ACu;
    {
        const bool branch_taken_0x1a80ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a80ac) {
            ctx->pc = 0x1A8190u;
            goto label_1a8190;
        }
    }
    ctx->pc = 0x1A80B4u;
    // 0x1a80b4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a80b8: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1a80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1a80bc: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a80c0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a80c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a80c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a80c8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a80cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a80d0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a80d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a80d4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1a80d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a80d8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A80D8u;
    SET_GPR_U32(ctx, 31, 0x1A80E0u);
    ctx->pc = 0x1A80DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80D8u;
            // 0x1a80dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80E0u; }
        if (ctx->pc != 0x1A80E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A80E0u; }
        if (ctx->pc != 0x1A80E0u) { return; }
    }
    ctx->pc = 0x1A80E0u;
    // 0x1a80e0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1a80e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a80e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a80e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80e8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A80E8u;
    {
        const bool branch_taken_0x1a80e8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A80ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80E8u;
            // 0x1a80ec: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e8) {
            ctx->pc = 0x1A80F8u;
            goto label_1a80f8;
        }
    }
    ctx->pc = 0x1A80F0u;
    // 0x1a80f0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1a80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1a80f4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1a80f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1a80f8:
    // 0x1a80f8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1a80f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a80fc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A80FCu;
    {
        const bool branch_taken_0x1a80fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a80fc) {
            ctx->pc = 0x1A8190u;
            goto label_1a8190;
        }
    }
    ctx->pc = 0x1A8104u;
    // 0x1a8104: 0x0  nop
    ctx->pc = 0x1a8104u;
    // NOP
label_1a8108:
    // 0x1a8108: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A8108u;
    SET_GPR_U32(ctx, 31, 0x1A8110u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8110u; }
        if (ctx->pc != 0x1A8110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8110u; }
        if (ctx->pc != 0x1A8110u) { return; }
    }
    ctx->pc = 0x1A8110u;
    // 0x1a8110: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1a8110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1a8114: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1a8114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a8118: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8118u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a811c: 0x0  nop
    ctx->pc = 0x1a811cu;
    // NOP
    // 0x1a8120: 0x0  nop
    ctx->pc = 0x1a8120u;
    // NOP
    // 0x1a8124: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8124u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a8128: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1A8128u;
    SET_GPR_U32(ctx, 31, 0x1A8130u);
    ctx->pc = 0x1A812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8128u;
            // 0x1a812c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8130u; }
        if (ctx->pc != 0x1A8130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8130u; }
        if (ctx->pc != 0x1A8130u) { return; }
    }
    ctx->pc = 0x1A8130u;
    // 0x1a8130: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1a8134: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1a8134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a8138: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8138u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1a813c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a813cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8140: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a8140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a8144: 0x0  nop
    ctx->pc = 0x1a8144u;
    // NOP
    // 0x1a8148: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a8148u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a814c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1a814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a8150: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1a8154: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1a8154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1a8158: 0x1810  mfhi        $v1
    ctx->pc = 0x1a8158u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a815c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1a815cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a8160: 0xc065944  jal         func_196510
    ctx->pc = 0x1A8160u;
    SET_GPR_U32(ctx, 31, 0x1A8168u);
    ctx->pc = 0x1A8164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8160u;
            // 0x1a8164: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8168u; }
        if (ctx->pc != 0x1A8168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8168u; }
        if (ctx->pc != 0x1A8168u) { return; }
    }
    ctx->pc = 0x1A8168u;
    // 0x1a8168: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1a8168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a816c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a816cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a8170: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8170u;
    {
        const bool branch_taken_0x1a8170 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A8174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8170u;
            // 0x1a8174: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8170) {
            ctx->pc = 0x1A8180u;
            goto label_1a8180;
        }
    }
    ctx->pc = 0x1A8178u;
    // 0x1a8178: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1a817c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1a817cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1a8180:
    // 0x1a8180: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1a8180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8184: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1A8184u;
    {
        const bool branch_taken_0x1a8184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8184) {
            ctx->pc = 0x1A8108u;
            goto label_1a8108;
        }
    }
    ctx->pc = 0x1A818Cu;
    // 0x1a818c: 0x0  nop
    ctx->pc = 0x1a818cu;
    // NOP
label_1a8190:
    // 0x1a8190: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a819c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a819cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a81a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a81a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a81a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A81A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A81A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A81A4u;
            // 0x1a81a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A80F8u: goto label_1a80f8;
            case 0x1A8108u: goto label_1a8108;
            case 0x1A8180u: goto label_1a8180;
            case 0x1A8190u: goto label_1a8190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A81ACu;
}
