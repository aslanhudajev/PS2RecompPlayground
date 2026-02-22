#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _motionVectors
// Address: 0x123720 - 0x12389c
void _motionVectors_0x123720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123720u;

    // 0x123720: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x123720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x123724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123728: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x123728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x12372c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x12372cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x123730: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x123730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123734: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x123734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x123738: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x123738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12373c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12373cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123740: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x123740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123744: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x123744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123748: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x123748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12374c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12374cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123750: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x123750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123754: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x123754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12375c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x123760: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x123760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123764: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x123764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123768: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12376c: 0x1502000c  bne         $t0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12376Cu;
    {
        const bool branch_taken_0x12376c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x123770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12376Cu;
            // 0x123770: 0x8fb700a8  lw          $s7, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12376c) {
            ctx->pc = 0x1237A0u;
            goto label_1237a0;
        }
    }
    ctx->pc = 0x123774u;
    // 0x123774: 0x55200030  bnel        $t1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x123774u;
    {
        const bool branch_taken_0x123774 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x123774) {
            ctx->pc = 0x123778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123774u;
            // 0x123778: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x12377Cu;
    // 0x12377c: 0x5640002e  bnel        $s2, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x12377Cu;
    {
        const bool branch_taken_0x12377c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x12377c) {
            ctx->pc = 0x123780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12377Cu;
            // 0x123780: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123838u;
            goto label_123838;
        }
    }
    ctx->pc = 0x123784u;
    // 0x123784: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x123784u;
    SET_GPR_U32(ctx, 31, 0x12378Cu);
    ctx->pc = 0x123788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123784u;
            // 0x123788: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12378Cu; }
        if (ctx->pc != 0x12378Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12378Cu; }
        if (ctx->pc != 0x12378Cu) { return; }
    }
    ctx->pc = 0x12378Cu;
    // 0x12378c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x12378cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x123790: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x123790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x123794: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x123794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x123798: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x123798u;
    {
        const bool branch_taken_0x123798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123798u;
            // 0x12379c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123798) {
            ctx->pc = 0x123834u;
            goto label_123834;
        }
    }
    ctx->pc = 0x1237A0u;
label_1237a0:
    // 0x1237a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1237a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1237a4: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1237A4u;
    SET_GPR_U32(ctx, 31, 0x1237ACu);
    ctx->pc = 0x1237A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1237A4u;
            // 0x1237a8: 0x1088c0  sll         $s1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237ACu; }
        if (ctx->pc != 0x1237ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237ACu; }
        if (ctx->pc != 0x1237ACu) { return; }
    }
    ctx->pc = 0x1237ACu;
    // 0x1237ac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1237acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1237b0: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1237b4: 0x21e8021  addu        $s0, $s0, $fp
    ctx->pc = 0x1237b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x1237b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1237b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1237bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1237c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1237c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237c4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1237c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1237c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237cc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1237ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237d0: 0xc048e28  jal         func_1238A0
    ctx->pc = 0x1237D0u;
    SET_GPR_U32(ctx, 31, 0x1237D8u);
    ctx->pc = 0x1237D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1237D0u;
            // 0x1237d4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238A0u;
    if (runtime->hasFunction(0x1238A0u)) {
        auto targetFn = runtime->lookupFunction(0x1238A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237D8u; }
        if (ctx->pc != 0x1237D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x1238a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237D8u; }
        if (ctx->pc != 0x1237D8u) { return; }
    }
    ctx->pc = 0x1237D8u;
    // 0x1237d8: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1237D8u;
    SET_GPR_U32(ctx, 31, 0x1237E0u);
    ctx->pc = 0x1237DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1237D8u;
            // 0x1237dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237E0u; }
        if (ctx->pc != 0x1237E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1237E0u; }
        if (ctx->pc != 0x1237E0u) { return; }
    }
    ctx->pc = 0x1237E0u;
    // 0x1237e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1237e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1237e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1237e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1237e8: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1237ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1237ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1237f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1237f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237f8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1237f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237fc: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1237fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123800: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x123800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x123804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x123804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123808: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x123808u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12380c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x12380cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123810: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x123810u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x123814: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x123814u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123818: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x123818u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12381c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12381cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123820: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123824: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x123824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12382c: 0x8048e28  j           func_1238A0
    ctx->pc = 0x12382Cu;
    ctx->pc = 0x123830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12382Cu;
            // 0x123830: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238A0u;
    if (runtime->hasFunction(0x1238A0u)) {
        auto targetFn = runtime->lookupFunction(0x1238A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _motionVector_0x1238a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x123834u;
label_123834:
    // 0x123834: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x123834u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_123838:
    // 0x123838: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x123838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12383c: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x123840: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x123840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123844: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x123844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123848: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x123848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12384c: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x12384cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x123850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123854: 0xc048e28  jal         func_1238A0
    ctx->pc = 0x123854u;
    SET_GPR_U32(ctx, 31, 0x12385Cu);
    ctx->pc = 0x123858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123854u;
            // 0x123858: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238A0u;
    if (runtime->hasFunction(0x1238A0u)) {
        auto targetFn = runtime->lookupFunction(0x1238A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12385Cu; }
        if (ctx->pc != 0x12385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x1238a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12385Cu; }
        if (ctx->pc != 0x12385Cu) { return; }
    }
    ctx->pc = 0x12385Cu;
    // 0x12385c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123860: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x123864: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x123864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x123868: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x123868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x12386c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12386cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x123870: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x123870u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x123874: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x123874u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x123878: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x123878u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12387c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x12387cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x123880: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x123880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123884: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x123884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123888: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12388c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12388cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123894: 0x3e00008  jr          $ra
    ctx->pc = 0x123894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123894u;
            // 0x123898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1237A0u: goto label_1237a0;
            case 0x123834u: goto label_123834;
            case 0x123838u: goto label_123838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12389Cu;
}
