#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_02Hit
// Address: 0x18e2a0 - 0x18e3dc
void En2_02Hit_0x18e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_02Hit_0x18e2a0");
#endif

    ctx->pc = 0x18e2a0u;

    // 0x18e2a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18e2a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18e2a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18e2ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e2b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e2b8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x18e2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18e2bc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x18e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18e2c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x18e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18e2c4: 0x1880003e  blez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x18E2C4u;
    {
        const bool branch_taken_0x18e2c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18E2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E2C4u;
            // 0x18e2c8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2c4) {
            ctx->pc = 0x18E3C0u;
            goto label_18e3c0;
        }
    }
    ctx->pc = 0x18E2CCu;
    // 0x18e2cc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x18e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x18e2d0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x18e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18e2d4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x18e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18e2d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x18e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18e2dc: 0x1c600038  bgtz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x18E2DCu;
    {
        const bool branch_taken_0x18e2dc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18e2dc) {
            ctx->pc = 0x18E3C0u;
            goto label_18e3c0;
        }
    }
    ctx->pc = 0x18E2E4u;
    // 0x18e2e4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18e2e8: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x18e2ec: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x18e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x18e2f0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x18e2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18e2f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e2f8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x18e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x18e2fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18e300: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x18e300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18e304: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x18e304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18e308: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x18E308u;
    SET_GPR_U32(ctx, 31, 0x18E310u);
    ctx->pc = 0x18E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E308u;
            // 0x18e30c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E310u; }
        if (ctx->pc != 0x18E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E310u; }
        if (ctx->pc != 0x18E310u) { return; }
    }
    ctx->pc = 0x18E310u;
    // 0x18e310: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18e314: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18e314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e318: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E318u;
    {
        const bool branch_taken_0x18e318 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E318u;
            // 0x18e31c: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e318) {
            ctx->pc = 0x18E328u;
            goto label_18e328;
        }
    }
    ctx->pc = 0x18E320u;
    // 0x18e320: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x18e324: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x18e324u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_18e328:
    // 0x18e328: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x18e328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e32c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x18E32Cu;
    {
        const bool branch_taken_0x18e32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e32c) {
            ctx->pc = 0x18E3C0u;
            goto label_18e3c0;
        }
    }
    ctx->pc = 0x18E334u;
    // 0x18e334: 0x0  nop
    ctx->pc = 0x18e334u;
    // NOP
label_18e338:
    // 0x18e338: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18E338u;
    SET_GPR_U32(ctx, 31, 0x18E340u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E340u; }
        if (ctx->pc != 0x18E340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E340u; }
        if (ctx->pc != 0x18E340u) { return; }
    }
    ctx->pc = 0x18E340u;
    // 0x18e340: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x18e340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x18e344: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x18e344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18e348: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18e348u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18e34c: 0x0  nop
    ctx->pc = 0x18e34cu;
    // NOP
    // 0x18e350: 0x0  nop
    ctx->pc = 0x18e350u;
    // NOP
    // 0x18e354: 0x1010  mfhi        $v0
    ctx->pc = 0x18e354u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18e358: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x18E358u;
    SET_GPR_U32(ctx, 31, 0x18E360u);
    ctx->pc = 0x18E35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E358u;
            // 0x18e35c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E360u; }
        if (ctx->pc != 0x18E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E360u; }
        if (ctx->pc != 0x18E360u) { return; }
    }
    ctx->pc = 0x18E360u;
    // 0x18e360: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x18e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x18e364: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x18e364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x18e368: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18e368u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x18e36c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e370: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18e370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18e374: 0x0  nop
    ctx->pc = 0x18e374u;
    // NOP
    // 0x18e378: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18e378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18e37c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x18e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18e380: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18e384: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x18e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18e388: 0x1810  mfhi        $v1
    ctx->pc = 0x18e388u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18e38c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x18e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18e390: 0xc065944  jal         func_196510
    ctx->pc = 0x18E390u;
    SET_GPR_U32(ctx, 31, 0x18E398u);
    ctx->pc = 0x18E394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E390u;
            // 0x18e394: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E398u; }
        if (ctx->pc != 0x18E398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E398u; }
        if (ctx->pc != 0x18E398u) { return; }
    }
    ctx->pc = 0x18E398u;
    // 0x18e398: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x18e398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x18e39c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e39cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18e3a0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E3A0u;
    {
        const bool branch_taken_0x18e3a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18E3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3A0u;
            // 0x18e3a4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3a0) {
            ctx->pc = 0x18E3B0u;
            goto label_18e3b0;
        }
    }
    ctx->pc = 0x18E3A8u;
    // 0x18e3a8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x18e3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x18e3ac: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x18e3acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_18e3b0:
    // 0x18e3b0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x18e3b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e3b4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x18E3B4u;
    {
        const bool branch_taken_0x18e3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3b4) {
            ctx->pc = 0x18E338u;
            goto label_18e338;
        }
    }
    ctx->pc = 0x18E3BCu;
    // 0x18e3bc: 0x0  nop
    ctx->pc = 0x18e3bcu;
    // NOP
label_18e3c0:
    // 0x18e3c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18e3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e3c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18e3c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e3c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e3c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e3cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e3ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x18E3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E3D4u;
            // 0x18e3d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E328u: goto label_18e328;
            case 0x18E338u: goto label_18e338;
            case 0x18E3B0u: goto label_18e3b0;
            case 0x18E3C0u: goto label_18e3c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E3DCu;
}
