#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_02Hit
// Address: 0x1cc4a0 - 0x1cc604
void Enex1_02Hit_0x1cc4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_02Hit_0x1cc4a0");
#endif

    ctx->pc = 0x1cc4a0u;

    // 0x1cc4a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cc4a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cc4a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cc4ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cc4b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cc4b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc4b8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1cc4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cc4bc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1cc4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cc4c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1cc4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc4c4: 0x18800048  blez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1CC4C4u;
    {
        const bool branch_taken_0x1cc4c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1CC4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4C4u;
            // 0x1cc4c8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4c4) {
            ctx->pc = 0x1CC5E8u;
            goto label_1cc5e8;
        }
    }
    ctx->pc = 0x1CC4CCu;
    // 0x1cc4cc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1cc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cc4d0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1cc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc4d4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1cc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1cc4d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc4dc: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CC4DCu;
    {
        const bool branch_taken_0x1cc4dc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1cc4dc) {
            ctx->pc = 0x1CC5E8u;
            goto label_1cc5e8;
        }
    }
    ctx->pc = 0x1CC4E4u;
    // 0x1cc4e4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1cc4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cc4e8: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x1cc4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1cc4ec: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1cc4f0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1cc4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cc4f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc4f8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1cc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1cc4fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1cc4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cc500: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1cc500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc504: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1cc504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cc508: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1CC508u;
    SET_GPR_U32(ctx, 31, 0x1CC510u);
    ctx->pc = 0x1CC50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC508u;
            // 0x1cc50c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC510u; }
        if (ctx->pc != 0x1CC510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC510u; }
        if (ctx->pc != 0x1CC510u) { return; }
    }
    ctx->pc = 0x1CC510u;
    // 0x1cc510: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cc514: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cc514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc518: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC518u;
    {
        const bool branch_taken_0x1cc518 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CC51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC518u;
            // 0x1cc51c: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc518) {
            ctx->pc = 0x1CC528u;
            goto label_1cc528;
        }
    }
    ctx->pc = 0x1CC520u;
    // 0x1cc520: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cc524: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cc524u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cc528:
    // 0x1cc528: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1cc528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cc52c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CC52Cu;
    {
        const bool branch_taken_0x1cc52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc52c) {
            ctx->pc = 0x1CC5C0u;
            goto label_1cc5c0;
        }
    }
    ctx->pc = 0x1CC534u;
    // 0x1cc534: 0x0  nop
    ctx->pc = 0x1cc534u;
    // NOP
label_1cc538:
    // 0x1cc538: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1CC538u;
    SET_GPR_U32(ctx, 31, 0x1CC540u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC540u; }
        if (ctx->pc != 0x1CC540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC540u; }
        if (ctx->pc != 0x1CC540u) { return; }
    }
    ctx->pc = 0x1CC540u;
    // 0x1cc540: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1cc544: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cc548: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cc548u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1cc54c: 0x0  nop
    ctx->pc = 0x1cc54cu;
    // NOP
    // 0x1cc550: 0x0  nop
    ctx->pc = 0x1cc550u;
    // NOP
    // 0x1cc554: 0x1010  mfhi        $v0
    ctx->pc = 0x1cc554u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cc558: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1CC558u;
    SET_GPR_U32(ctx, 31, 0x1CC560u);
    ctx->pc = 0x1CC55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC558u;
            // 0x1cc55c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC560u; }
        if (ctx->pc != 0x1CC560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC560u; }
        if (ctx->pc != 0x1CC560u) { return; }
    }
    ctx->pc = 0x1CC560u;
    // 0x1cc560: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1cc560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1cc564: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cc568: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cc568u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1cc56c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc570: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc574: 0x0  nop
    ctx->pc = 0x1cc574u;
    // NOP
    // 0x1cc578: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cc578u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1cc57c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cc580: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cc584: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1cc584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cc588: 0x1810  mfhi        $v1
    ctx->pc = 0x1cc588u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cc58c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1cc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cc590: 0xc065944  jal         func_196510
    ctx->pc = 0x1CC590u;
    SET_GPR_U32(ctx, 31, 0x1CC598u);
    ctx->pc = 0x1CC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC590u;
            // 0x1cc594: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC598u; }
        if (ctx->pc != 0x1CC598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC598u; }
        if (ctx->pc != 0x1CC598u) { return; }
    }
    ctx->pc = 0x1CC598u;
    // 0x1cc598: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1cc59c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc5a0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC5A0u;
    {
        const bool branch_taken_0x1cc5a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CC5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5A0u;
            // 0x1cc5a4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5a0) {
            ctx->pc = 0x1CC5B0u;
            goto label_1cc5b0;
        }
    }
    ctx->pc = 0x1CC5A8u;
    // 0x1cc5a8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1cc5ac: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1cc5b0:
    // 0x1cc5b0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1cc5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1cc5b4: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1CC5B4u;
    {
        const bool branch_taken_0x1cc5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5b4) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC5BCu;
    // 0x1cc5bc: 0x0  nop
    ctx->pc = 0x1cc5bcu;
    // NOP
label_1cc5c0:
    // 0x1cc5c0: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1cc5c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1cc5c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC5C4u;
    {
        const bool branch_taken_0x1cc5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5c4) {
            ctx->pc = 0x1CC5E8u;
            goto label_1cc5e8;
        }
    }
    ctx->pc = 0x1CC5CCu;
    // 0x1cc5cc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1cc5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cc5d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc5d4: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1cc5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cc5d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc5dc: 0xc065944  jal         func_196510
    ctx->pc = 0x1CC5DCu;
    SET_GPR_U32(ctx, 31, 0x1CC5E4u);
    ctx->pc = 0x1CC5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5DCu;
            // 0x1cc5e0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5E4u; }
        if (ctx->pc != 0x1CC5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5E4u; }
        if (ctx->pc != 0x1CC5E4u) { return; }
    }
    ctx->pc = 0x1CC5E4u;
    // 0x1cc5e4: 0x0  nop
    ctx->pc = 0x1cc5e4u;
    // NOP
label_1cc5e8:
    // 0x1cc5e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc5ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc5ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc5f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc5f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc5f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc5f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5FCu;
            // 0x1cc600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC528u: goto label_1cc528;
            case 0x1CC538u: goto label_1cc538;
            case 0x1CC5B0u: goto label_1cc5b0;
            case 0x1CC5C0u: goto label_1cc5c0;
            case 0x1CC5E8u: goto label_1cc5e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC604u;
}
