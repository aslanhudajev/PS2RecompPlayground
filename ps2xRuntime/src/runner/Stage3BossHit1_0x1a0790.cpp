#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3BossHit1
// Address: 0x1a0790 - 0x1a08c0
void Stage3BossHit1_0x1a0790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3BossHit1_0x1a0790");
#endif

    ctx->pc = 0x1a0790u;

    // 0x1a0790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a079c: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a07a0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a07a4: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A07A4u;
    {
        const bool branch_taken_0x1a07a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A07A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07A4u;
            // 0x1a07a8: 0x8c870008  lw          $a3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07a4) {
            ctx->pc = 0x1A0838u;
            goto label_1a0838;
        }
    }
    ctx->pc = 0x1A07ACu;
    // 0x1a07ac: 0x14c00022  bnez        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A07ACu;
    {
        const bool branch_taken_0x1a07ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a07ac) {
            ctx->pc = 0x1A0838u;
            goto label_1a0838;
        }
    }
    ctx->pc = 0x1A07B4u;
    // 0x1a07b4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1a07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x1a07b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a07bc: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x1a07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x1a07c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A07C0u;
    {
        const bool branch_taken_0x1a07c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07C0u;
            // 0x1a07c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c0) {
            ctx->pc = 0x1A07E8u;
            goto label_1a07e8;
        }
    }
    ctx->pc = 0x1A07C8u;
    // 0x1a07c8: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1A07C8u;
    SET_GPR_U32(ctx, 31, 0x1A07D0u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07D0u; }
        if (ctx->pc != 0x1A07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07D0u; }
        if (ctx->pc != 0x1A07D0u) { return; }
    }
    ctx->pc = 0x1A07D0u;
    // 0x1a07d0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1a07d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1a07d4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x1a07d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x1a07d8: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x1a07d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)57344u)));
    // 0x1a07dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a07e0: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1a07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x1a07e4: 0x0  nop
    ctx->pc = 0x1a07e4u;
    // NOP
label_1a07e8:
    // 0x1a07e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a07e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1a07ec: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x1a07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1a07f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A07F0u;
    {
        const bool branch_taken_0x1a07f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07F0u;
            // 0x1a07f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07f0) {
            ctx->pc = 0x1A0818u;
            goto label_1a0818;
        }
    }
    ctx->pc = 0x1A07F8u;
    // 0x1a07f8: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x1A07F8u;
    SET_GPR_U32(ctx, 31, 0x1A0800u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0800u; }
        if (ctx->pc != 0x1A0800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0800u; }
        if (ctx->pc != 0x1A0800u) { return; }
    }
    ctx->pc = 0x1A0800u;
    // 0x1a0800: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1a0800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1a0804: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x1a0804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x1a0808: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x1a0808u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)57344u)));
    // 0x1a080c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0810: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x1a0810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x1a0814: 0x0  nop
    ctx->pc = 0x1a0814u;
    // NOP
label_1a0818:
    // 0x1a0818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a081c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a081cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0820: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x1a0820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1a0824: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A0824u;
    SET_GPR_U32(ctx, 31, 0x1A082Cu);
    ctx->pc = 0x1A0828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0824u;
            // 0x1a0828: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A082Cu; }
        if (ctx->pc != 0x1A082Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A082Cu; }
        if (ctx->pc != 0x1A082Cu) { return; }
    }
    ctx->pc = 0x1A082Cu;
    // 0x1a082c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A082Cu;
    {
        const bool branch_taken_0x1a082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a082c) {
            ctx->pc = 0x1A08B0u;
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A0834u;
    // 0x1a0834: 0x0  nop
    ctx->pc = 0x1a0834u;
    // NOP
label_1a0838:
    // 0x1a0838: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a083c: 0x1880001c  blez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A083Cu;
    {
        const bool branch_taken_0x1a083c = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1a083c) {
            ctx->pc = 0x1A08B0u;
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A0844u;
    // 0x1a0844: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1a0848: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A0848u;
    {
        const bool branch_taken_0x1a0848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0848) {
            ctx->pc = 0x1A08B0u;
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A0850u;
    // 0x1a0850: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1a0850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1a0854: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0858: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1a0858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1a085c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1a085cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1a0860: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0860u;
    {
        const bool branch_taken_0x1a0860 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a0860) {
            ctx->pc = 0x1A08B0u;
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A0868u;
    // 0x1a0868: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1a0868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a086c: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x1a086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1a0870: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1a0874: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a0874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1a0878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a087c: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1a087cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1a0880: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a0884: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a0884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a0888: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1a0888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1a088c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1A088Cu;
    SET_GPR_U32(ctx, 31, 0x1A0894u);
    ctx->pc = 0x1A0890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A088Cu;
            // 0x1a0890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0894u; }
        if (ctx->pc != 0x1A0894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0894u; }
        if (ctx->pc != 0x1A0894u) { return; }
    }
    ctx->pc = 0x1A0894u;
    // 0x1a0894: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0898: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1a089c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1a089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a08a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a08a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1a08a4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1A08A4u;
    SET_GPR_U32(ctx, 31, 0x1A08ACu);
    ctx->pc = 0x1A08A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08A4u;
            // 0x1a08a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08ACu; }
        if (ctx->pc != 0x1A08ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A08ACu; }
        if (ctx->pc != 0x1A08ACu) { return; }
    }
    ctx->pc = 0x1A08ACu;
    // 0x1a08ac: 0x0  nop
    ctx->pc = 0x1a08acu;
    // NOP
label_1a08b0:
    // 0x1a08b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a08b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a08b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a08b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08B8u;
            // 0x1a08bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A07E8u: goto label_1a07e8;
            case 0x1A0818u: goto label_1a0818;
            case 0x1A0838u: goto label_1a0838;
            case 0x1A08B0u: goto label_1a08b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A08C0u;
}
