#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_04Hit
// Address: 0x1e73c0 - 0x1e74fc
void En1_04Hit_0x1e73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_04Hit_0x1e73c0");
#endif

    ctx->pc = 0x1e73c0u;

    // 0x1e73c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e73c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e73c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e73c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e73c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e73cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e73d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e73d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e73d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e73d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e73d8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1e73d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e73dc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1e73dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e73e0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e73e4: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E73E4u;
    {
        const bool branch_taken_0x1e73e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E73E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E73E4u;
            // 0x1e73e8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e73e4) {
            ctx->pc = 0x1E74E0u;
            goto label_1e74e0;
        }
    }
    ctx->pc = 0x1E73ECu;
    // 0x1e73ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e73f0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e73f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1e73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1e73f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e73f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e73fc: 0x1c600038  bgtz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E73FCu;
    {
        const bool branch_taken_0x1e73fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1e73fc) {
            ctx->pc = 0x1E74E0u;
            goto label_1e74e0;
        }
    }
    ctx->pc = 0x1E7404u;
    // 0x1e7404: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1e7404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e7408: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x1e7408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1e740c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1e740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1e7410: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1e7410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e7414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7418: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1e7418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1e741c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e741cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e7420: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1e7420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e7424: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1e7424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e7428: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1E7428u;
    SET_GPR_U32(ctx, 31, 0x1E7430u);
    ctx->pc = 0x1E742Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7428u;
            // 0x1e742c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7430u; }
        if (ctx->pc != 0x1E7430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7430u; }
        if (ctx->pc != 0x1E7430u) { return; }
    }
    ctx->pc = 0x1E7430u;
    // 0x1e7430: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e7430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e7434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e7434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7438: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7438u;
    {
        const bool branch_taken_0x1e7438 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7438u;
            // 0x1e743c: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7438) {
            ctx->pc = 0x1E7448u;
            goto label_1e7448;
        }
    }
    ctx->pc = 0x1E7440u;
    // 0x1e7440: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1e7440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e7444: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e7444u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1e7448:
    // 0x1e7448: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1e7448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e744c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E744Cu;
    {
        const bool branch_taken_0x1e744c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e744c) {
            ctx->pc = 0x1E74E0u;
            goto label_1e74e0;
        }
    }
    ctx->pc = 0x1E7454u;
    // 0x1e7454: 0x0  nop
    ctx->pc = 0x1e7454u;
    // NOP
label_1e7458:
    // 0x1e7458: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E7458u;
    SET_GPR_U32(ctx, 31, 0x1E7460u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7460u; }
        if (ctx->pc != 0x1E7460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7460u; }
        if (ctx->pc != 0x1E7460u) { return; }
    }
    ctx->pc = 0x1E7460u;
    // 0x1e7460: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1e7460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e7464: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e7468: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e7468u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e746c: 0x0  nop
    ctx->pc = 0x1e746cu;
    // NOP
    // 0x1e7470: 0x0  nop
    ctx->pc = 0x1e7470u;
    // NOP
    // 0x1e7474: 0x1010  mfhi        $v0
    ctx->pc = 0x1e7474u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e7478: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E7478u;
    SET_GPR_U32(ctx, 31, 0x1E7480u);
    ctx->pc = 0x1E747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7478u;
            // 0x1e747c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7480u; }
        if (ctx->pc != 0x1E7480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7480u; }
        if (ctx->pc != 0x1E7480u) { return; }
    }
    ctx->pc = 0x1E7480u;
    // 0x1e7480: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e7480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e7484: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1e7484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e7488: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e7488u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e748c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e7490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e7494: 0x0  nop
    ctx->pc = 0x1e7494u;
    // NOP
    // 0x1e7498: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e7498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e749c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e74a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1e74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e74a4: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1e74a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e74a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1e74a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e74ac: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1e74acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e74b0: 0xc065944  jal         func_196510
    ctx->pc = 0x1E74B0u;
    SET_GPR_U32(ctx, 31, 0x1E74B8u);
    ctx->pc = 0x1E74B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74B0u;
            // 0x1e74b4: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74B8u; }
        if (ctx->pc != 0x1E74B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74B8u; }
        if (ctx->pc != 0x1E74B8u) { return; }
    }
    ctx->pc = 0x1E74B8u;
    // 0x1e74b8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e74b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e74bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e74bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e74c0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E74C0u;
    {
        const bool branch_taken_0x1e74c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E74C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74C0u;
            // 0x1e74c4: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74c0) {
            ctx->pc = 0x1E74D0u;
            goto label_1e74d0;
        }
    }
    ctx->pc = 0x1E74C8u;
    // 0x1e74c8: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e74cc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e74ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1e74d0:
    // 0x1e74d0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1e74d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e74d4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1E74D4u;
    {
        const bool branch_taken_0x1e74d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e74d4) {
            ctx->pc = 0x1E7458u;
            goto label_1e7458;
        }
    }
    ctx->pc = 0x1E74DCu;
    // 0x1e74dc: 0x0  nop
    ctx->pc = 0x1e74dcu;
    // NOP
label_1e74e0:
    // 0x1e74e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e74e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e74e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e74e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e74e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e74e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e74ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e74ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e74f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e74f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e74f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E74F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E74F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74F4u;
            // 0x1e74f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7448u: goto label_1e7448;
            case 0x1E7458u: goto label_1e7458;
            case 0x1E74D0u: goto label_1e74d0;
            case 0x1E74E0u: goto label_1e74e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E74FCu;
}
