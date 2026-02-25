#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_04Hit
// Address: 0x199870 - 0x1999ac
void En2_04Hit_0x199870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_04Hit_0x199870");
#endif

    ctx->pc = 0x199870u;

    // 0x199870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x199874: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x199874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x199878: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x199878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19987c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199888: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19988c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x19988cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x199890: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x199890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x199894: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x199894u;
    {
        const bool branch_taken_0x199894 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x199898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199894u;
            // 0x199898: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199894) {
            ctx->pc = 0x199990u;
            goto label_199990;
        }
    }
    ctx->pc = 0x19989Cu;
    // 0x19989c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1998a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1998a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1998a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1998a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1998ac: 0x1c600038  bgtz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1998ACu;
    {
        const bool branch_taken_0x1998ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1998ac) {
            ctx->pc = 0x199990u;
            goto label_199990;
        }
    }
    ctx->pc = 0x1998B4u;
    // 0x1998b4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1998b8: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x1998b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1998bc: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1998c0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1998c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1998c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1998c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1998c8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1998c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1998cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1998d0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1998d4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1998d8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1998D8u;
    SET_GPR_U32(ctx, 31, 0x1998E0u);
    ctx->pc = 0x1998DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1998D8u;
            // 0x1998dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998E0u; }
        if (ctx->pc != 0x1998E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1998E0u; }
        if (ctx->pc != 0x1998E0u) { return; }
    }
    ctx->pc = 0x1998E0u;
    // 0x1998e0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1998e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1998e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998e8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1998E8u;
    {
        const bool branch_taken_0x1998e8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1998ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998E8u;
            // 0x1998ec: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998e8) {
            ctx->pc = 0x1998F8u;
            goto label_1998f8;
        }
    }
    ctx->pc = 0x1998F0u;
    // 0x1998f0: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1998f4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1998f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1998f8:
    // 0x1998f8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1998f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1998fc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1998FCu;
    {
        const bool branch_taken_0x1998fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998fc) {
            ctx->pc = 0x199990u;
            goto label_199990;
        }
    }
    ctx->pc = 0x199904u;
    // 0x199904: 0x0  nop
    ctx->pc = 0x199904u;
    // NOP
label_199908:
    // 0x199908: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x199908u;
    SET_GPR_U32(ctx, 31, 0x199910u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199910u; }
        if (ctx->pc != 0x199910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199910u; }
        if (ctx->pc != 0x199910u) { return; }
    }
    ctx->pc = 0x199910u;
    // 0x199910: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x199910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x199914: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x199914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x199918: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x199918u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x19991c: 0x0  nop
    ctx->pc = 0x19991cu;
    // NOP
    // 0x199920: 0x0  nop
    ctx->pc = 0x199920u;
    // NOP
    // 0x199924: 0x1010  mfhi        $v0
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x199928: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x199928u;
    SET_GPR_U32(ctx, 31, 0x199930u);
    ctx->pc = 0x19992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199928u;
            // 0x19992c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199930u; }
        if (ctx->pc != 0x199930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199930u; }
        if (ctx->pc != 0x199930u) { return; }
    }
    ctx->pc = 0x199930u;
    // 0x199930: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x199930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x199934: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x199934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x199938: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x199938u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x19993c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199940: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x199940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x199944: 0x0  nop
    ctx->pc = 0x199944u;
    // NOP
    // 0x199948: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x199948u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x19994c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x199950: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x199954: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x199954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x199958: 0x1810  mfhi        $v1
    ctx->pc = 0x199958u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19995c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x19995cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x199960: 0xc065944  jal         func_196510
    ctx->pc = 0x199960u;
    SET_GPR_U32(ctx, 31, 0x199968u);
    ctx->pc = 0x199964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199960u;
            // 0x199964: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199968u; }
        if (ctx->pc != 0x199968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199968u; }
        if (ctx->pc != 0x199968u) { return; }
    }
    ctx->pc = 0x199968u;
    // 0x199968: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19996c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x199970: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199970u;
    {
        const bool branch_taken_0x199970 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x199974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199970u;
            // 0x199974: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199970) {
            ctx->pc = 0x199980u;
            goto label_199980;
        }
    }
    ctx->pc = 0x199978u;
    // 0x199978: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x199978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x19997c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x19997cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_199980:
    // 0x199980: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x199980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199984: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x199984u;
    {
        const bool branch_taken_0x199984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199984) {
            ctx->pc = 0x199908u;
            goto label_199908;
        }
    }
    ctx->pc = 0x19998Cu;
    // 0x19998c: 0x0  nop
    ctx->pc = 0x19998cu;
    // NOP
label_199990:
    // 0x199990: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x199990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19999c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19999cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1999a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1999a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1999a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1999A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1999A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1999A4u;
            // 0x1999a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1998F8u: goto label_1998f8;
            case 0x199908u: goto label_199908;
            case 0x199980u: goto label_199980;
            case 0x199990u: goto label_199990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1999ACu;
}
