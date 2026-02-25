#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En5_03Hit
// Address: 0x1b5870 - 0x1b59d4
void En5_03Hit_0x1b5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En5_03Hit_0x1b5870");
#endif

    ctx->pc = 0x1b5870u;

    // 0x1b5870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5874: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b5874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b5878: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b587c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b5880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5888: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b5888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b588c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b588cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b5890: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b5894: 0x18800048  blez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1B5894u;
    {
        const bool branch_taken_0x1b5894 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B5898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5894u;
            // 0x1b5898: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5894) {
            ctx->pc = 0x1B59B8u;
            goto label_1b59b8;
        }
    }
    ctx->pc = 0x1B589Cu;
    // 0x1b589c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b58a0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b58a4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b58a8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b58a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b58ac: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B58ACu;
    {
        const bool branch_taken_0x1b58ac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b58ac) {
            ctx->pc = 0x1B59B8u;
            goto label_1b59b8;
        }
    }
    ctx->pc = 0x1B58B4u;
    // 0x1b58b4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b58b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b58b8: 0x24030dac  addiu       $v1, $zero, 0xDAC
    ctx->pc = 0x1b58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3500));
    // 0x1b58bc: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b58c0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b58c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b58c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b58c8: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b58cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b58d0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b58d4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b58d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b58d8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B58D8u;
    SET_GPR_U32(ctx, 31, 0x1B58E0u);
    ctx->pc = 0x1B58DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58D8u;
            // 0x1b58dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58E0u; }
        if (ctx->pc != 0x1B58E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58E0u; }
        if (ctx->pc != 0x1B58E0u) { return; }
    }
    ctx->pc = 0x1B58E0u;
    // 0x1b58e0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1b58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b58e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b58e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58e8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B58E8u;
    {
        const bool branch_taken_0x1b58e8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B58ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58E8u;
            // 0x1b58ec: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58e8) {
            ctx->pc = 0x1B58F8u;
            goto label_1b58f8;
        }
    }
    ctx->pc = 0x1B58F0u;
    // 0x1b58f0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1b58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1b58f4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b58f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1b58f8:
    // 0x1b58f8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1b58f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b58fc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B58FCu;
    {
        const bool branch_taken_0x1b58fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b58fc) {
            ctx->pc = 0x1B5990u;
            goto label_1b5990;
        }
    }
    ctx->pc = 0x1B5904u;
    // 0x1b5904: 0x0  nop
    ctx->pc = 0x1b5904u;
    // NOP
label_1b5908:
    // 0x1b5908: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B5908u;
    SET_GPR_U32(ctx, 31, 0x1B5910u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5910u; }
        if (ctx->pc != 0x1B5910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5910u; }
        if (ctx->pc != 0x1B5910u) { return; }
    }
    ctx->pc = 0x1B5910u;
    // 0x1b5910: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1b5910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1b5914: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1b5914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b5918: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b5918u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b591c: 0x0  nop
    ctx->pc = 0x1b591cu;
    // NOP
    // 0x1b5920: 0x0  nop
    ctx->pc = 0x1b5920u;
    // NOP
    // 0x1b5924: 0x1010  mfhi        $v0
    ctx->pc = 0x1b5924u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b5928: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B5928u;
    SET_GPR_U32(ctx, 31, 0x1B5930u);
    ctx->pc = 0x1B592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5928u;
            // 0x1b592c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5930u; }
        if (ctx->pc != 0x1B5930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5930u; }
        if (ctx->pc != 0x1B5930u) { return; }
    }
    ctx->pc = 0x1B5930u;
    // 0x1b5930: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1b5930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1b5934: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b5938: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b5938u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b593c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b593cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5940: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b5940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5944: 0x0  nop
    ctx->pc = 0x1b5944u;
    // NOP
    // 0x1b5948: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b5948u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b594c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1b594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b5950: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b5950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b5954: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1b5954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b5958: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5958u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b595c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1b595cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b5960: 0xc065944  jal         func_196510
    ctx->pc = 0x1B5960u;
    SET_GPR_U32(ctx, 31, 0x1B5968u);
    ctx->pc = 0x1B5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5960u;
            // 0x1b5964: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5968u; }
        if (ctx->pc != 0x1B5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5968u; }
        if (ctx->pc != 0x1B5968u) { return; }
    }
    ctx->pc = 0x1B5968u;
    // 0x1b5968: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1b5968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b596c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b596cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b5970: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5970u;
    {
        const bool branch_taken_0x1b5970 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B5974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5970u;
            // 0x1b5974: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5970) {
            ctx->pc = 0x1B5980u;
            goto label_1b5980;
        }
    }
    ctx->pc = 0x1B5978u;
    // 0x1b5978: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1b5978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1b597c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1b597cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1b5980:
    // 0x1b5980: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1b5980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b5984: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B5984u;
    {
        const bool branch_taken_0x1b5984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5984) {
            ctx->pc = 0x1B5908u;
            goto label_1b5908;
        }
    }
    ctx->pc = 0x1B598Cu;
    // 0x1b598c: 0x0  nop
    ctx->pc = 0x1b598cu;
    // NOP
label_1b5990:
    // 0x1b5990: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1b5990u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1b5994: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5994u;
    {
        const bool branch_taken_0x1b5994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5994) {
            ctx->pc = 0x1B59B8u;
            goto label_1b59b8;
        }
    }
    ctx->pc = 0x1B599Cu;
    // 0x1b599c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1b599cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b59a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b59a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b59a4: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1b59a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b59a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b59ac: 0xc065944  jal         func_196510
    ctx->pc = 0x1B59ACu;
    SET_GPR_U32(ctx, 31, 0x1B59B4u);
    ctx->pc = 0x1B59B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59ACu;
            // 0x1b59b0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59B4u; }
        if (ctx->pc != 0x1B59B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B59B4u; }
        if (ctx->pc != 0x1B59B4u) { return; }
    }
    ctx->pc = 0x1B59B4u;
    // 0x1b59b4: 0x0  nop
    ctx->pc = 0x1b59b4u;
    // NOP
label_1b59b8:
    // 0x1b59b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b59b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b59bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b59bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b59c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b59c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b59c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b59c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b59c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b59c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b59cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B59CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B59D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B59CCu;
            // 0x1b59d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B58F8u: goto label_1b58f8;
            case 0x1B5908u: goto label_1b5908;
            case 0x1B5980u: goto label_1b5980;
            case 0x1B5990u: goto label_1b5990;
            case 0x1B59B8u: goto label_1b59b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B59D4u;
}
