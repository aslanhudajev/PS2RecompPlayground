#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateMissile2
// Address: 0x1534f0 - 0x153714
void CreateMissile2_0x1534f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateMissile2_0x1534f0");
#endif

    ctx->pc = 0x1534f0u;

    // 0x1534f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1534f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1534f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1534f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1534f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1534f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1534fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1534fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x153500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153508: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15350c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15350cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153510: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153510u;
    SET_GPR_U32(ctx, 31, 0x153518u);
    ctx->pc = 0x153514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153510u;
            // 0x153514: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153518u; }
        if (ctx->pc != 0x153518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153518u; }
        if (ctx->pc != 0x153518u) { return; }
    }
    ctx->pc = 0x153518u;
    // 0x153518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15351c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15351cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153520: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x153520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x153524: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x153528: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x153528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x15352c: 0x712823  subu        $a1, $v1, $s1
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x153530: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x153534: 0x3c034ec4  lui         $v1, 0x4EC4
    ctx->pc = 0x153534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20164 << 16));
    // 0x153538: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x153538u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15353c: 0x3463ec4f  ori         $v1, $v1, 0xEC4F
    ctx->pc = 0x15353cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)60495u)));
    // 0x153540: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x153540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x153544: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x153548: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x153548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x15354c: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x153550: 0x1810  mfhi        $v1
    ctx->pc = 0x153550u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x153554: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x153558: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x153558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15355c: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
    // 0x153560: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x153560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x153564: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153564u;
    {
        const bool branch_taken_0x153564 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153564u;
            // 0x153568: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153564) {
            ctx->pc = 0x153574u;
            goto label_153574;
        }
    }
    ctx->pc = 0x15356Cu;
    // 0x15356c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153570: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x153570u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_153574:
    // 0x153574: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x153574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
    // 0x153578: 0x26140004  addiu       $s4, $s0, 0x4
    ctx->pc = 0x153578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x15357c: 0xae740014  sw          $s4, 0x14($s3)
    ctx->pc = 0x15357cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 20));
    // 0x153580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153584: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153584u;
    SET_GPR_U32(ctx, 31, 0x15358Cu);
    ctx->pc = 0x153588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153584u;
            // 0x153588: 0xae620030  sw          $v0, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15358Cu; }
        if (ctx->pc != 0x15358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15358Cu; }
        if (ctx->pc != 0x15358Cu) { return; }
    }
    ctx->pc = 0x15358Cu;
    // 0x15358c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x15358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x153590: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x153590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153594: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x153594u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153598: 0x0  nop
    ctx->pc = 0x153598u;
    // NOP
    // 0x15359c: 0x0  nop
    ctx->pc = 0x15359cu;
    // NOP
    // 0x1535a0: 0x2010  mfhi        $a0
    ctx->pc = 0x1535a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1535a4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1535a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1535a8: 0xae640038  sw          $a0, 0x38($s3)
    ctx->pc = 0x1535a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 4));
    // 0x1535ac: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x1535acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x1535b0: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x1535B0u;
    SET_GPR_U32(ctx, 31, 0x1535B8u);
    ctx->pc = 0x1535B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1535B0u;
            // 0x1535b4: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1535B8u; }
        if (ctx->pc != 0x1535B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1535B8u; }
        if (ctx->pc != 0x1535B8u) { return; }
    }
    ctx->pc = 0x1535B8u;
    // 0x1535b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1535b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1535bc: 0x101823  negu        $v1, $s0
    ctx->pc = 0x1535bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1535c0: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1535c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1535c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1535c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535c8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1535c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1535cc: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1535ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1535d0: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x1535d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1535d4: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1535d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1535d8: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1535d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1535dc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1535dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1535e0: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1535e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1535e4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1535e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1535e8: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x1535e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x1535ec: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1535ECu;
    SET_GPR_U32(ctx, 31, 0x1535F4u);
    ctx->pc = 0x1535F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1535ECu;
            // 0x1535f0: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1535F4u; }
        if (ctx->pc != 0x1535F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1535F4u; }
        if (ctx->pc != 0x1535F4u) { return; }
    }
    ctx->pc = 0x1535F4u;
    // 0x1535f4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1535f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1535f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1535fc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1535fcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153600: 0x0  nop
    ctx->pc = 0x153600u;
    // NOP
    // 0x153604: 0x0  nop
    ctx->pc = 0x153604u;
    // NOP
    // 0x153608: 0x2010  mfhi        $a0
    ctx->pc = 0x153608u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15360c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x153610: 0xae640038  sw          $a0, 0x38($s3)
    ctx->pc = 0x153610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 4));
    // 0x153614: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x153614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x153618: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153618u;
    SET_GPR_U32(ctx, 31, 0x153620u);
    ctx->pc = 0x15361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153618u;
            // 0x15361c: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153620u; }
        if (ctx->pc != 0x153620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153620u; }
        if (ctx->pc != 0x153620u) { return; }
    }
    ctx->pc = 0x153620u;
    // 0x153620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153624: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x153624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x153628: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x153628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x15362c: 0x26140006  addiu       $s4, $s0, 0x6
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x153630: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x153630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x153634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153638: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x153638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x15363c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x15363cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x153640: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x153640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x153644: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x153644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x153648: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x153648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x15364c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x15364cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x153650: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x153650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x153654: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x153654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x153658: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153658u;
    SET_GPR_U32(ctx, 31, 0x153660u);
    ctx->pc = 0x15365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153658u;
            // 0x15365c: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153660u; }
        if (ctx->pc != 0x153660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153660u; }
        if (ctx->pc != 0x153660u) { return; }
    }
    ctx->pc = 0x153660u;
    // 0x153660: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x153664: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x153664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153668: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x153668u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15366c: 0x0  nop
    ctx->pc = 0x15366cu;
    // NOP
    // 0x153670: 0x0  nop
    ctx->pc = 0x153670u;
    // NOP
    // 0x153674: 0x2010  mfhi        $a0
    ctx->pc = 0x153674u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x153678: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15367c: 0xae640038  sw          $a0, 0x38($s3)
    ctx->pc = 0x15367cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 4));
    // 0x153680: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x153680u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x153684: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153684u;
    SET_GPR_U32(ctx, 31, 0x15368Cu);
    ctx->pc = 0x153688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153684u;
            // 0x153688: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15368Cu; }
        if (ctx->pc != 0x15368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15368Cu; }
        if (ctx->pc != 0x15368Cu) { return; }
    }
    ctx->pc = 0x15368Cu;
    // 0x15368c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153690: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x153694: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x153694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x153698: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15369c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x15369cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1536a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1536a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536a4: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x1536a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1536a8: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1536ac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1536acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1536b0: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1536b4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1536b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1536b8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1536b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1536bc: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1536bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1536c0: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x1536c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x1536c4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1536C4u;
    SET_GPR_U32(ctx, 31, 0x1536CCu);
    ctx->pc = 0x1536C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1536C4u;
            // 0x1536c8: 0xac450030  sw          $a1, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1536CCu; }
        if (ctx->pc != 0x1536CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1536CCu; }
        if (ctx->pc != 0x1536CCu) { return; }
    }
    ctx->pc = 0x1536CCu;
    // 0x1536cc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1536d0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1536d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1536d4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1536d4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1536d8: 0x0  nop
    ctx->pc = 0x1536d8u;
    // NOP
    // 0x1536dc: 0x0  nop
    ctx->pc = 0x1536dcu;
    // NOP
    // 0x1536e0: 0x2810  mfhi        $a1
    ctx->pc = 0x1536e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1536e4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1536e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1536e8: 0xae650038  sw          $a1, 0x38($s3)
    ctx->pc = 0x1536e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 5));
    // 0x1536ec: 0xae640034  sw          $a0, 0x34($s3)
    ctx->pc = 0x1536ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 4));
    // 0x1536f0: 0xae63003c  sw          $v1, 0x3C($s3)
    ctx->pc = 0x1536f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 3));
    // 0x1536f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1536f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1536f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1536f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1536fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1536fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15370c: 0x3e00008  jr          $ra
    ctx->pc = 0x15370Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15370Cu;
            // 0x153710: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153574u: goto label_153574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153714u;
}
