#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Ryushi
// Address: 0x195010 - 0x195134
void EnemyShotCreate_Ryushi_0x195010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Ryushi_0x195010");
#endif

    ctx->pc = 0x195010u;

    // 0x195010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x195014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x195018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19501c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195024: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x195024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195028: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19502c: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x19502Cu;
    SET_GPR_U32(ctx, 31, 0x195034u);
    ctx->pc = 0x195030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19502Cu;
            // 0x195030: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195034u; }
        if (ctx->pc != 0x195034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195034u; }
        if (ctx->pc != 0x195034u) { return; }
    }
    ctx->pc = 0x195034u;
    // 0x195034: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x195034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x195038: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19503c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19503cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x195040: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x195044: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x195044u;
    SET_GPR_U32(ctx, 31, 0x19504Cu);
    ctx->pc = 0x195048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195044u;
            // 0x195048: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19504Cu; }
        if (ctx->pc != 0x19504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19504Cu; }
        if (ctx->pc != 0x19504Cu) { return; }
    }
    ctx->pc = 0x19504Cu;
    // 0x19504c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x19504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x195050: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x195054: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x195054u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x195058: 0x0  nop
    ctx->pc = 0x195058u;
    // NOP
    // 0x19505c: 0x0  nop
    ctx->pc = 0x19505cu;
    // NOP
    // 0x195060: 0x1010  mfhi        $v0
    ctx->pc = 0x195060u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x195064: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x195064u;
    SET_GPR_U32(ctx, 31, 0x19506Cu);
    ctx->pc = 0x195068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195064u;
            // 0x195068: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19506Cu; }
        if (ctx->pc != 0x19506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19506Cu; }
        if (ctx->pc != 0x19506Cu) { return; }
    }
    ctx->pc = 0x19506Cu;
    // 0x19506c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x19506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x195070: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x195070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x195074: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x195074u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x195078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19507c: 0x0  nop
    ctx->pc = 0x19507cu;
    // NOP
    // 0x195080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195084: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x195084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x195088: 0x1810  mfhi        $v1
    ctx->pc = 0x195088u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x19508c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x195090: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195094: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x195098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19509c: 0x0  nop
    ctx->pc = 0x19509cu;
    // NOP
    // 0x1950a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1950a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1950a4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1950A4u;
    SET_GPR_U32(ctx, 31, 0x1950ACu);
    ctx->pc = 0x1950A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950A4u;
            // 0x1950a8: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950ACu; }
        if (ctx->pc != 0x1950ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950ACu; }
        if (ctx->pc != 0x1950ACu) { return; }
    }
    ctx->pc = 0x1950ACu;
    // 0x1950ac: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x1950acu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x1950b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1950b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1950b4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1950B4u;
    SET_GPR_U32(ctx, 31, 0x1950BCu);
    ctx->pc = 0x1950B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1950B4u;
            // 0x1950b8: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950BCu; }
        if (ctx->pc != 0x1950BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950BCu; }
        if (ctx->pc != 0x1950BCu) { return; }
    }
    ctx->pc = 0x1950BCu;
    // 0x1950bc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1950bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1950c0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x1950c0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x1950c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1950c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1950c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1950c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1950cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1950ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1950d0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1950d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1950d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1950d8: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x1950d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x1950dc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1950dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1950e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1950e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1950e4: 0x0  nop
    ctx->pc = 0x1950e4u;
    // NOP
    // 0x1950e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1950e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1950ec: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1950ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1950f0: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1950f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1950f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1950f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1950f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1950fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1950fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195100: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x195100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195104: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x195104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x195108: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x195108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x19510c: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x19510cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x195110: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x195110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x195114: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x195114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x195118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19511c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19511cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19512c: 0x3e00008  jr          $ra
    ctx->pc = 0x19512Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19512Cu;
            // 0x195130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195134u;
}
