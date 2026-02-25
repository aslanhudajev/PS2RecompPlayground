#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pictureCodingExtension
// Address: 0x1287d0 - 0x1289c0
void _pictureCodingExtension_0x1287d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pictureCodingExtension_0x1287d0");
#endif

    ctx->pc = 0x1287d0u;

    // 0x1287d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1287d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1287d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1287d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1287d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1287d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1287dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1287dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1287e0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x1287E0u;
    SET_GPR_U32(ctx, 31, 0x1287E8u);
    ctx->pc = 0x1287E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1287E0u;
            // 0x1287e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287E8u; }
        if (ctx->pc != 0x1287E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287E8u; }
        if (ctx->pc != 0x1287E8u) { return; }
    }
    ctx->pc = 0x1287E8u;
    // 0x1287e8: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x1287e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x1287ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1287ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1287f0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x1287F0u;
    SET_GPR_U32(ctx, 31, 0x1287F8u);
    ctx->pc = 0x1287F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1287F0u;
            // 0x1287f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287F8u; }
        if (ctx->pc != 0x1287F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1287F8u; }
        if (ctx->pc != 0x1287F8u) { return; }
    }
    ctx->pc = 0x1287F8u;
    // 0x1287f8: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x1287f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x1287fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1287fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128800: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128800u;
    SET_GPR_U32(ctx, 31, 0x128808u);
    ctx->pc = 0x128804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128800u;
            // 0x128804: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128808u; }
        if (ctx->pc != 0x128808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128808u; }
        if (ctx->pc != 0x128808u) { return; }
    }
    ctx->pc = 0x128808u;
    // 0x128808: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x128808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x12880c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128810: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128810u;
    SET_GPR_U32(ctx, 31, 0x128818u);
    ctx->pc = 0x128814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128810u;
            // 0x128814: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128818u; }
        if (ctx->pc != 0x128818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128818u; }
        if (ctx->pc != 0x128818u) { return; }
    }
    ctx->pc = 0x128818u;
    // 0x128818: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x128818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x12881c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128820: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128820u;
    SET_GPR_U32(ctx, 31, 0x128828u);
    ctx->pc = 0x128824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128820u;
            // 0x128824: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128828u; }
        if (ctx->pc != 0x128828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128828u; }
        if (ctx->pc != 0x128828u) { return; }
    }
    ctx->pc = 0x128828u;
    // 0x128828: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x128828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x12882c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x12882cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x128830: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x128830u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)8208u)));
    // 0x128834: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x128834u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x128838: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x128838u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10000000
    // 0x12883c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x12883cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x128840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x128844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128848: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x128848u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x12884c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12884cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x128850: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128850u;
    SET_GPR_U32(ctx, 31, 0x128858u);
    ctx->pc = 0x128854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128850u;
            // 0x128854: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128858u; }
        if (ctx->pc != 0x128858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128858u; }
        if (ctx->pc != 0x128858u) { return; }
    }
    ctx->pc = 0x128858u;
    // 0x128858: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x128858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12885c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x12885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x128860: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x128860u;
    {
        const bool branch_taken_0x128860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128860u;
            // 0x128864: 0xae030174  sw          $v1, 0x174($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128860) {
            ctx->pc = 0x12886Cu;
            goto label_12886c;
        }
    }
    ctx->pc = 0x128868u;
    // 0x128868: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x128868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_12886c:
    // 0x12886c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128870: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128870u;
    SET_GPR_U32(ctx, 31, 0x128878u);
    ctx->pc = 0x128874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128870u;
            // 0x128874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128878u; }
        if (ctx->pc != 0x128878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128878u; }
        if (ctx->pc != 0x128878u) { return; }
    }
    ctx->pc = 0x128878u;
    // 0x128878: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x128878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x12887c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128880: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128880u;
    SET_GPR_U32(ctx, 31, 0x128888u);
    ctx->pc = 0x128884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128880u;
            // 0x128884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128888u; }
        if (ctx->pc != 0x128888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128888u; }
        if (ctx->pc != 0x128888u) { return; }
    }
    ctx->pc = 0x128888u;
    // 0x128888: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x128888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x12888c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128890: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128890u;
    SET_GPR_U32(ctx, 31, 0x128898u);
    ctx->pc = 0x128894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128890u;
            // 0x128894: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128898u; }
        if (ctx->pc != 0x128898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128898u; }
        if (ctx->pc != 0x128898u) { return; }
    }
    ctx->pc = 0x128898u;
    // 0x128898: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x128898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x12889c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288a0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x1288A0u;
    SET_GPR_U32(ctx, 31, 0x1288A8u);
    ctx->pc = 0x1288A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1288A0u;
            // 0x1288a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288A8u; }
        if (ctx->pc != 0x1288A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288A8u; }
        if (ctx->pc != 0x1288A8u) { return; }
    }
    ctx->pc = 0x1288A8u;
    // 0x1288a8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1288a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1288ac: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1288acu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x1288b0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x1288b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x1288b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1288b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1288b8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x1288b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x1288bc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1288bcu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x1288c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1288c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1288c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1288c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1288c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1288cc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1288ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1288d0: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x1288D0u;
    SET_GPR_U32(ctx, 31, 0x1288D8u);
    ctx->pc = 0x1288D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1288D0u;
            // 0x1288d4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288D8u; }
        if (ctx->pc != 0x1288D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1288D8u; }
        if (ctx->pc != 0x1288D8u) { return; }
    }
    ctx->pc = 0x1288D8u;
    // 0x1288d8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1288d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1288dc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1288dcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x1288e0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1288e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1288e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1288e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1288e8: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x1288e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x1288ec: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1288ecu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x1288f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1288f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1288f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1288f4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x1288f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1288f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1288fc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1288fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x128900: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128900u;
    SET_GPR_U32(ctx, 31, 0x128908u);
    ctx->pc = 0x128904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128900u;
            // 0x128904: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128908u; }
        if (ctx->pc != 0x128908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128908u; }
        if (ctx->pc != 0x128908u) { return; }
    }
    ctx->pc = 0x128908u;
    // 0x128908: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x128908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x12890c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x12890cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x128910: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x128910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x128914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x128914u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x128918: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x128918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x12891c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x12891cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x128920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128924: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x128924u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x128928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12892c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x12892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x128930: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128930u;
    SET_GPR_U32(ctx, 31, 0x128938u);
    ctx->pc = 0x128934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128930u;
            // 0x128934: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128938u; }
        if (ctx->pc != 0x128938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128938u; }
        if (ctx->pc != 0x128938u) { return; }
    }
    ctx->pc = 0x128938u;
    // 0x128938: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x128938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x12893c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128940: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128940u;
    SET_GPR_U32(ctx, 31, 0x128948u);
    ctx->pc = 0x128944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128940u;
            // 0x128944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128948u; }
        if (ctx->pc != 0x128948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128948u; }
        if (ctx->pc != 0x128948u) { return; }
    }
    ctx->pc = 0x128948u;
    // 0x128948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12894c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12894Cu;
    SET_GPR_U32(ctx, 31, 0x128954u);
    ctx->pc = 0x128950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12894Cu;
            // 0x128950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128954u; }
        if (ctx->pc != 0x128954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128954u; }
        if (ctx->pc != 0x128954u) { return; }
    }
    ctx->pc = 0x128954u;
    // 0x128954: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x128954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x128958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12895c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12895Cu;
    SET_GPR_U32(ctx, 31, 0x128964u);
    ctx->pc = 0x128960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12895Cu;
            // 0x128960: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128964u; }
        if (ctx->pc != 0x128964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128964u; }
        if (ctx->pc != 0x128964u) { return; }
    }
    ctx->pc = 0x128964u;
    // 0x128964: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x128964u;
    {
        const bool branch_taken_0x128964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128964u;
            // 0x128968: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128964) {
            ctx->pc = 0x1289B4u;
            goto label_1289b4;
        }
    }
    ctx->pc = 0x12896Cu;
    // 0x12896c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128970: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128970u;
    SET_GPR_U32(ctx, 31, 0x128978u);
    ctx->pc = 0x128974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128970u;
            // 0x128974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128978u; }
        if (ctx->pc != 0x128978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128978u; }
        if (ctx->pc != 0x128978u) { return; }
    }
    ctx->pc = 0x128978u;
    // 0x128978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12897c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12897Cu;
    SET_GPR_U32(ctx, 31, 0x128984u);
    ctx->pc = 0x128980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12897Cu;
            // 0x128980: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128984u; }
        if (ctx->pc != 0x128984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128984u; }
        if (ctx->pc != 0x128984u) { return; }
    }
    ctx->pc = 0x128984u;
    // 0x128984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128988: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128988u;
    SET_GPR_U32(ctx, 31, 0x128990u);
    ctx->pc = 0x12898Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128988u;
            // 0x12898c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128990u; }
        if (ctx->pc != 0x128990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128990u; }
        if (ctx->pc != 0x128990u) { return; }
    }
    ctx->pc = 0x128990u;
    // 0x128990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128994: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128994u;
    SET_GPR_U32(ctx, 31, 0x12899Cu);
    ctx->pc = 0x128998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128994u;
            // 0x128998: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12899Cu; }
        if (ctx->pc != 0x12899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12899Cu; }
        if (ctx->pc != 0x12899Cu) { return; }
    }
    ctx->pc = 0x12899Cu;
    // 0x12899c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1289a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1289a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1289a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1289a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1289a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1289ac: 0x804a0a6  j           func_128298
    ctx->pc = 0x1289ACu;
    ctx->pc = 0x1289B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1289ACu;
            // 0x1289b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _nextBit_0x128298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1289B4u;
label_1289b4:
    // 0x1289b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1289b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1289b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1289B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1289BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1289B8u;
            // 0x1289bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12886Cu: goto label_12886c;
            case 0x1289B4u: goto label_1289b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1289C0u;
}
