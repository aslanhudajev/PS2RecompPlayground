#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_03Hit
// Address: 0x1e62a0 - 0x1e63e4
void En1_03Hit_0x1e62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_03Hit_0x1e62a0");
#endif

    ctx->pc = 0x1e62a0u;

    // 0x1e62a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e62a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e62a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e62a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e62a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e62ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e62acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e62b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e62b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e62b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e62b8: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1e62b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e62bc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1e62bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e62c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1e62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e62c4: 0x18800040  blez        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1E62C4u;
    {
        const bool branch_taken_0x1e62c4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1E62C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62C4u;
            // 0x1e62c8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62c4) {
            ctx->pc = 0x1E63C8u;
            goto label_1e63c8;
        }
    }
    ctx->pc = 0x1E62CCu;
    // 0x1e62cc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1e62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1e62d0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1e62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e62d4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1e62d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1e62d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e62dc: 0x1c60003a  bgtz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E62DCu;
    {
        const bool branch_taken_0x1e62dc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1e62dc) {
            ctx->pc = 0x1E63C8u;
            goto label_1e63c8;
        }
    }
    ctx->pc = 0x1E62E4u;
    // 0x1e62e4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1e62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e62e8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1e62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1e62ec: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1e62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e62f0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e62f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e62f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e62fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e6300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6304: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1e6304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1e6308: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1e6308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e630c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1e630cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e6310: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1e6310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e6314: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1E6314u;
    SET_GPR_U32(ctx, 31, 0x1E631Cu);
    ctx->pc = 0x1E6318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6314u;
            // 0x1e6318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E631Cu; }
        if (ctx->pc != 0x1E631Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E631Cu; }
        if (ctx->pc != 0x1E631Cu) { return; }
    }
    ctx->pc = 0x1E631Cu;
    // 0x1e631c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e6320: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e6320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6324: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6324u;
    {
        const bool branch_taken_0x1e6324 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E6328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6324u;
            // 0x1e6328: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6324) {
            ctx->pc = 0x1E6334u;
            goto label_1e6334;
        }
    }
    ctx->pc = 0x1E632Cu;
    // 0x1e632c: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1e632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e6330: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e6330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1e6334:
    // 0x1e6334: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e6338: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E6338u;
    {
        const bool branch_taken_0x1e6338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6338) {
            ctx->pc = 0x1E63C8u;
            goto label_1e63c8;
        }
    }
    ctx->pc = 0x1E6340u;
label_1e6340:
    // 0x1e6340: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E6340u;
    SET_GPR_U32(ctx, 31, 0x1E6348u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6348u; }
        if (ctx->pc != 0x1E6348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6348u; }
        if (ctx->pc != 0x1E6348u) { return; }
    }
    ctx->pc = 0x1E6348u;
    // 0x1e6348: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1e6348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1e634c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e6350: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e6350u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e6354: 0x0  nop
    ctx->pc = 0x1e6354u;
    // NOP
    // 0x1e6358: 0x0  nop
    ctx->pc = 0x1e6358u;
    // NOP
    // 0x1e635c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e635cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e6360: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E6360u;
    SET_GPR_U32(ctx, 31, 0x1E6368u);
    ctx->pc = 0x1E6364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6360u;
            // 0x1e6364: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6368u; }
        if (ctx->pc != 0x1E6368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6368u; }
        if (ctx->pc != 0x1E6368u) { return; }
    }
    ctx->pc = 0x1E6368u;
    // 0x1e6368: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1e6368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1e636c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1e636cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e6370: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e6370u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e6374: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6378: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e6378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e637c: 0x0  nop
    ctx->pc = 0x1e637cu;
    // NOP
    // 0x1e6380: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e6380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e6384: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1e6384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1e6388: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1e6388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e638c: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1e638cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e6390: 0x1810  mfhi        $v1
    ctx->pc = 0x1e6390u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e6394: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1e6394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e6398: 0xc065944  jal         func_196510
    ctx->pc = 0x1E6398u;
    SET_GPR_U32(ctx, 31, 0x1E63A0u);
    ctx->pc = 0x1E639Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6398u;
            // 0x1e639c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63A0u; }
        if (ctx->pc != 0x1E63A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E63A0u; }
        if (ctx->pc != 0x1E63A0u) { return; }
    }
    ctx->pc = 0x1E63A0u;
    // 0x1e63a0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e63a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e63a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e63a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E63A8u;
    {
        const bool branch_taken_0x1e63a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E63ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63A8u;
            // 0x1e63ac: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63a8) {
            ctx->pc = 0x1E63B8u;
            goto label_1e63b8;
        }
    }
    ctx->pc = 0x1E63B0u;
    // 0x1e63b0: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x1e63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1e63b4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1e63b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1e63b8:
    // 0x1e63b8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1e63b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e63bc: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1E63BCu;
    {
        const bool branch_taken_0x1e63bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e63bc) {
            ctx->pc = 0x1E6340u;
            goto label_1e6340;
        }
    }
    ctx->pc = 0x1E63C4u;
    // 0x1e63c4: 0x0  nop
    ctx->pc = 0x1e63c4u;
    // NOP
label_1e63c8:
    // 0x1e63c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e63c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e63cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e63ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e63d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e63d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e63d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e63d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e63d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e63d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e63dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E63DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E63E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E63DCu;
            // 0x1e63e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6334u: goto label_1e6334;
            case 0x1E6340u: goto label_1e6340;
            case 0x1E63B8u: goto label_1e63b8;
            case 0x1E63C8u: goto label_1e63c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E63E4u;
}
