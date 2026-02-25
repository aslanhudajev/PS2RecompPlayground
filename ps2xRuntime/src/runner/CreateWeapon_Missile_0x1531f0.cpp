#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateWeapon_Missile
// Address: 0x1531f0 - 0x15336c
void CreateWeapon_Missile_0x1531f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateWeapon_Missile_0x1531f0");
#endif

    ctx->pc = 0x1531f0u;

    // 0x1531f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1531f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1531f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1531f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1531f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1531f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1531fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1531fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x153200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153208: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x153208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15320c: 0x0  nop
    ctx->pc = 0x15320cu;
    // NOP
label_153210:
    // 0x153210: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153210u;
    SET_GPR_U32(ctx, 31, 0x153218u);
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153218u; }
        if (ctx->pc != 0x153218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153218u; }
        if (ctx->pc != 0x153218u) { return; }
    }
    ctx->pc = 0x153218u;
    // 0x153218: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15321c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15321cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153220: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x153220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x153224: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x153224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x153228: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x15322c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x153230: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x153230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x153234: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x153234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x153238: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15323c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x15323Cu;
    SET_GPR_U32(ctx, 31, 0x153244u);
    ctx->pc = 0x153240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15323Cu;
            // 0x153240: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153244u; }
        if (ctx->pc != 0x153244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153244u; }
        if (ctx->pc != 0x153244u) { return; }
    }
    ctx->pc = 0x153244u;
    // 0x153244: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x153244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x153248: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x153248u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15324c: 0x0  nop
    ctx->pc = 0x15324cu;
    // NOP
    // 0x153250: 0x0  nop
    ctx->pc = 0x153250u;
    // NOP
    // 0x153254: 0x1010  mfhi        $v0
    ctx->pc = 0x153254u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x153258: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153258u;
    SET_GPR_U32(ctx, 31, 0x153260u);
    ctx->pc = 0x15325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153258u;
            // 0x15325c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153260u; }
        if (ctx->pc != 0x153260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153260u; }
        if (ctx->pc != 0x153260u) { return; }
    }
    ctx->pc = 0x153260u;
    // 0x153260: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x153260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x153264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153268: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x153268u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15326c: 0x0  nop
    ctx->pc = 0x15326cu;
    // NOP
    // 0x153270: 0x0  nop
    ctx->pc = 0x153270u;
    // NOP
    // 0x153274: 0x1010  mfhi        $v0
    ctx->pc = 0x153274u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x153278: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x153278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x15327c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x153280: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153280u;
    SET_GPR_U32(ctx, 31, 0x153288u);
    ctx->pc = 0x153284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153280u;
            // 0x153284: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153288u; }
        if (ctx->pc != 0x153288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153288u; }
        if (ctx->pc != 0x153288u) { return; }
    }
    ctx->pc = 0x153288u;
    // 0x153288: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x153288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15328c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153290: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x153290u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153294: 0x0  nop
    ctx->pc = 0x153294u;
    // NOP
    // 0x153298: 0x0  nop
    ctx->pc = 0x153298u;
    // NOP
    // 0x15329c: 0x2010  mfhi        $a0
    ctx->pc = 0x15329cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1532a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1532a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1532a4: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x1532a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x1532a8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1532a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1532ac: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x1532ACu;
    SET_GPR_U32(ctx, 31, 0x1532B4u);
    ctx->pc = 0x1532B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1532ACu;
            // 0x1532b0: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532B4u; }
        if (ctx->pc != 0x1532B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532B4u; }
        if (ctx->pc != 0x1532B4u) { return; }
    }
    ctx->pc = 0x1532B4u;
    // 0x1532b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1532b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1532b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1532b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1532bc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1532bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1532c0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1532c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1532c4: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1532c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1532c8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1532c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1532cc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1532ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1532d0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x1532d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1532d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1532d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1532d8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1532D8u;
    SET_GPR_U32(ctx, 31, 0x1532E0u);
    ctx->pc = 0x1532DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1532D8u;
            // 0x1532dc: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532E0u; }
        if (ctx->pc != 0x1532E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1532E0u; }
        if (ctx->pc != 0x1532E0u) { return; }
    }
    ctx->pc = 0x1532E0u;
    // 0x1532e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1532e4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1532e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1532e8: 0x0  nop
    ctx->pc = 0x1532e8u;
    // NOP
    // 0x1532ec: 0x0  nop
    ctx->pc = 0x1532ecu;
    // NOP
    // 0x1532f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1532f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1532f4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1532f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1532f8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1532F8u;
    SET_GPR_U32(ctx, 31, 0x153300u);
    ctx->pc = 0x1532FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1532F8u;
            // 0x1532fc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153300u; }
        if (ctx->pc != 0x153300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153300u; }
        if (ctx->pc != 0x153300u) { return; }
    }
    ctx->pc = 0x153300u;
    // 0x153300: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x153300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x153304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153308: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x153308u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x15330c: 0x0  nop
    ctx->pc = 0x15330cu;
    // NOP
    // 0x153310: 0x0  nop
    ctx->pc = 0x153310u;
    // NOP
    // 0x153314: 0x1010  mfhi        $v0
    ctx->pc = 0x153314u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x153318: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x153318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x15331c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15331cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x153320: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x153320u;
    SET_GPR_U32(ctx, 31, 0x153328u);
    ctx->pc = 0x153324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153320u;
            // 0x153324: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153328u; }
        if (ctx->pc != 0x153328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153328u; }
        if (ctx->pc != 0x153328u) { return; }
    }
    ctx->pc = 0x153328u;
    // 0x153328: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15332c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x153330: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x153330u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153334: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x153338: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x153338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15333c: 0x3010  mfhi        $a2
    ctx->pc = 0x15333cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x153340: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x153340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153344: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x153344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x153348: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x153348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x15334c: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x15334Cu;
    {
        const bool branch_taken_0x15334c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15334Cu;
            // 0x153350: 0xae04003c  sw          $a0, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15334c) {
            ctx->pc = 0x153210u;
            goto label_153210;
        }
    }
    ctx->pc = 0x153354u;
    // 0x153354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x153354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x153358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15335c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15335cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153364: 0x3e00008  jr          $ra
    ctx->pc = 0x153364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153364u;
            // 0x153368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153210u: goto label_153210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15336Cu;
}
