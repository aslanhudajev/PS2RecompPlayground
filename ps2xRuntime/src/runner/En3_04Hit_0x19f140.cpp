#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_04Hit
// Address: 0x19f140 - 0x19f29c
void En3_04Hit_0x19f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_04Hit_0x19f140");
#endif

    ctx->pc = 0x19f140u;

    // 0x19f140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f14c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f158: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x19f158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f15c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x19f15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19f160: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x19f160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19f164: 0x18800046  blez        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x19F164u;
    {
        const bool branch_taken_0x19f164 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19F168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F164u;
            // 0x19f168: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f164) {
            ctx->pc = 0x19F280u;
            goto label_19f280;
        }
    }
    ctx->pc = 0x19F16Cu;
    // 0x19f16c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x19f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x19f170: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x19f170u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19f174: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19f174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x19f178: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x19f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19f17c: 0x1c600040  bgtz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x19F17Cu;
    {
        const bool branch_taken_0x19f17c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19f17c) {
            ctx->pc = 0x19F280u;
            goto label_19f280;
        }
    }
    ctx->pc = 0x19F184u;
    // 0x19f184: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x19f184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19f188: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x19f188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x19f18c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x19f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x19f190: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x19f190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f198: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x19f198u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x19f19c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19f1a0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x19f1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19f1a4: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x19f1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19f1a8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x19F1A8u;
    SET_GPR_U32(ctx, 31, 0x19F1B0u);
    ctx->pc = 0x19F1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1A8u;
            // 0x19f1ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1B0u; }
        if (ctx->pc != 0x19F1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1B0u; }
        if (ctx->pc != 0x19F1B0u) { return; }
    }
    ctx->pc = 0x19F1B0u;
    // 0x19f1b0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x19f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19f1b4: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x19f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x19f1b8: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x19f1b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43691u)));
    // 0x19f1bc: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x19f1bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f1c0: 0x0  nop
    ctx->pc = 0x19f1c0u;
    // NOP
    // 0x19f1c4: 0x0  nop
    ctx->pc = 0x19f1c4u;
    // NOP
    // 0x19f1c8: 0x1810  mfhi        $v1
    ctx->pc = 0x19f1c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19f1cc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x19f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19f1d0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19f1d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f1d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f1d8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19f1d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19f1dc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x19F1DCu;
    {
        const bool branch_taken_0x19f1dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1DCu;
            // 0x19f1e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1dc) {
            ctx->pc = 0x19F280u;
            goto label_19f280;
        }
    }
    ctx->pc = 0x19F1E4u;
    // 0x19f1e4: 0x0  nop
    ctx->pc = 0x19f1e4u;
    // NOP
label_19f1e8:
    // 0x19f1e8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x19F1E8u;
    SET_GPR_U32(ctx, 31, 0x19F1F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1F0u; }
        if (ctx->pc != 0x19F1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1F0u; }
        if (ctx->pc != 0x19F1F0u) { return; }
    }
    ctx->pc = 0x19F1F0u;
    // 0x19f1f0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x19f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19f1f4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x19f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19f1f8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19f1f8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x19f1fc: 0x0  nop
    ctx->pc = 0x19f1fcu;
    // NOP
    // 0x19f200: 0x0  nop
    ctx->pc = 0x19f200u;
    // NOP
    // 0x19f204: 0x1010  mfhi        $v0
    ctx->pc = 0x19f204u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19f208: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x19F208u;
    SET_GPR_U32(ctx, 31, 0x19F210u);
    ctx->pc = 0x19F20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F208u;
            // 0x19f20c: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F210u; }
        if (ctx->pc != 0x19F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F210u; }
        if (ctx->pc != 0x19F210u) { return; }
    }
    ctx->pc = 0x19F210u;
    // 0x19f210: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x19f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19f214: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x19f214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19f218: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19f218u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x19f21c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19f220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19f224: 0x0  nop
    ctx->pc = 0x19f224u;
    // NOP
    // 0x19f228: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19f228u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x19f22c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x19f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x19f230: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x19f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19f234: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19f238: 0x1810  mfhi        $v1
    ctx->pc = 0x19f238u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19f23c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x19f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x19f240: 0xc065944  jal         func_196510
    ctx->pc = 0x19F240u;
    SET_GPR_U32(ctx, 31, 0x19F248u);
    ctx->pc = 0x19F244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F240u;
            // 0x19f244: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F248u; }
        if (ctx->pc != 0x19F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F248u; }
        if (ctx->pc != 0x19F248u) { return; }
    }
    ctx->pc = 0x19F248u;
    // 0x19f248: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x19f248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x19f24c: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x19f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x19f250: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x19f250u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43691u)));
    // 0x19f254: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19f254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19f258: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x19f258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f25c: 0x0  nop
    ctx->pc = 0x19f25cu;
    // NOP
    // 0x19f260: 0x0  nop
    ctx->pc = 0x19f260u;
    // NOP
    // 0x19f264: 0x1810  mfhi        $v1
    ctx->pc = 0x19f264u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19f268: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x19f268u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19f26c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19f26cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19f270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f274: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x19f274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19f278: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x19F278u;
    {
        const bool branch_taken_0x19f278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f278) {
            ctx->pc = 0x19F1E8u;
            goto label_19f1e8;
        }
    }
    ctx->pc = 0x19F280u;
label_19f280:
    // 0x19f280: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f284: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f28c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f294: 0x3e00008  jr          $ra
    ctx->pc = 0x19F294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F294u;
            // 0x19f298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F1E8u: goto label_19f1e8;
            case 0x19F280u: goto label_19f280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F29Cu;
}
