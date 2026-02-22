#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceExtension
// Address: 0x1207b0 - 0x120914
void _sequenceExtension_0x1207b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1207b0u;

    // 0x1207b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1207b4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1207b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1207b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1207bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1207bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1207c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1207c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1207c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1207c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1207cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1207ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1207d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1207d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1207d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1207d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1207d8: 0xc0489e2  jal         func_122788
    ctx->pc = 0x1207D8u;
    SET_GPR_U32(ctx, 31, 0x1207E0u);
    ctx->pc = 0x1207DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1207D8u;
            // 0x1207dc: 0xac5020b0  sw          $s0, 0x20B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8368), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122788u;
    if (runtime->hasFunction(0x122788u)) {
        auto targetFn = runtime->lookupFunction(0x122788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207E0u; }
        if (ctx->pc != 0x1207E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x122788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207E0u; }
        if (ctx->pc != 0x1207E0u) { return; }
    }
    ctx->pc = 0x1207E0u;
    // 0x1207e0: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x1207E0u;
    SET_GPR_U32(ctx, 31, 0x1207E8u);
    ctx->pc = 0x1207E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1207E0u;
            // 0x1207e4: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207E8u; }
        if (ctx->pc != 0x1207E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1207E8u; }
        if (ctx->pc != 0x1207E8u) { return; }
    }
    ctx->pc = 0x1207E8u;
    // 0x1207e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1207e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207ec: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x1207ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x1207f0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1207f4: 0x111442  srl         $v0, $s1, 17
    ctx->pc = 0x1207f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 17));
    // 0x1207f8: 0x30740fff  andi        $s4, $v1, 0xFFF
    ctx->pc = 0x1207f8u;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4095u)));
    // 0x1207fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1207fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x120800: 0x112342  srl         $a0, $s1, 13
    ctx->pc = 0x120800u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 13));
    // 0x120804: 0x111bc2  srl         $v1, $s1, 15
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
    // 0x120808: 0x30930003  andi        $s3, $a0, 0x3
    ctx->pc = 0x120808u;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
    // 0x12080c: 0x30720003  andi        $s2, $v1, 0x3
    ctx->pc = 0x12080cu;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x120810: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120810u;
    {
        const bool branch_taken_0x120810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x120814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120810u;
            // 0x120814: 0xaca2194c  sw          $v0, 0x194C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120810) {
            ctx->pc = 0x120824u;
            goto label_120824;
        }
    }
    ctx->pc = 0x120818u;
    // 0x120818: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x12081c: 0xc048006  jal         func_120018
    ctx->pc = 0x12081Cu;
    SET_GPR_U32(ctx, 31, 0x120824u);
    ctx->pc = 0x120820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12081Cu;
            // 0x120820: 0x24844d00  addiu       $a0, $a0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120824u; }
        if (ctx->pc != 0x120824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120824u; }
        if (ctx->pc != 0x120824u) { return; }
    }
    ctx->pc = 0x120824u;
label_120824:
    // 0x120824: 0x112502  srl         $a0, $s1, 20
    ctx->pc = 0x120824u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 20));
    // 0x120828: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x120828u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x12082c: 0x1114c2  srl         $v0, $s1, 19
    ctx->pc = 0x12082cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 19));
    // 0x120830: 0xae041944  sw          $a0, 0x1944($s0)
    ctx->pc = 0x120830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6468), GPR_U32(ctx, 4));
    // 0x120834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x120834u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x120838: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x12083c: 0xac621948  sw          $v0, 0x1948($v1)
    ctx->pc = 0x12083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6472), GPR_U32(ctx, 2));
    // 0x120840: 0xc048fdc  jal         func_123F70
    ctx->pc = 0x120840u;
    SET_GPR_U32(ctx, 31, 0x120848u);
    ctx->pc = 0x120844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120840u;
            // 0x120844: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123F70u;
    if (runtime->hasFunction(0x123F70u)) {
        auto targetFn = runtime->lookupFunction(0x123F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120848u; }
        if (ctx->pc != 0x120848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120848u; }
        if (ctx->pc != 0x120848u) { return; }
    }
    ctx->pc = 0x120848u;
    // 0x120848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12084c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x12084cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x120850: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x120850u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)31u)));
    // 0x120854: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x120858: 0x1121c2  srl         $a0, $s1, 7
    ctx->pc = 0x120858u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 7));
    // 0x12085c: 0x8e081944  lw          $t0, 0x1944($s0)
    ctx->pc = 0x12085cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6468)));
    // 0x120860: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x120860u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x120864: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x120864u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x120868: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x12086c: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x12086cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x120870: 0xacc21958  sw          $v0, 0x1958($a2)
    ctx->pc = 0x120870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6488), GPR_U32(ctx, 2));
    // 0x120874: 0x118202  srl         $s0, $s1, 8
    ctx->pc = 0x120874u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x120878: 0xaca31954  sw          $v1, 0x1954($a1)
    ctx->pc = 0x120878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6484), GPR_U32(ctx, 3));
    // 0x12087c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x12087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x120880: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120880u;
    {
        const bool branch_taken_0x120880 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x120884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120880u;
            // 0x120884: 0xace41950  sw          $a0, 0x1950($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120880) {
            ctx->pc = 0x12089Cu;
            goto label_12089c;
        }
    }
    ctx->pc = 0x120888u;
    // 0x120888: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x12088c: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12088Cu;
    {
        const bool branch_taken_0x12088c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x120890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12088Cu;
            // 0x120890: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12088c) {
            ctx->pc = 0x12089Cu;
            goto label_12089c;
        }
    }
    ctx->pc = 0x120894u;
    // 0x120894: 0xc048006  jal         func_120018
    ctx->pc = 0x120894u;
    SET_GPR_U32(ctx, 31, 0x12089Cu);
    ctx->pc = 0x120898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120894u;
            // 0x120898: 0x24844d28  addiu       $a0, $a0, 0x4D28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12089Cu; }
        if (ctx->pc != 0x12089Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12089Cu; }
        if (ctx->pc != 0x12089Cu) { return; }
    }
    ctx->pc = 0x12089Cu;
label_12089c:
    // 0x12089c: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x12089cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x1208a0: 0x3c0d0017  lui         $t5, 0x17
    ctx->pc = 0x1208a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)23 << 16));
    // 0x1208a4: 0x8d851920  lw          $a1, 0x1920($t4)
    ctx->pc = 0x1208a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6432)));
    // 0x1208a8: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x1208ac: 0x8da31924  lw          $v1, 0x1924($t5)
    ctx->pc = 0x1208acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 6436)));
    // 0x1208b0: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x1208b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
    // 0x1208b4: 0x8d671938  lw          $a3, 0x1938($t3)
    ctx->pc = 0x1208b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 6456)));
    // 0x1208b8: 0x144480  sll         $t0, $s4, 18
    ctx->pc = 0x1208b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 18));
    // 0x1208bc: 0x8d46193c  lw          $a2, 0x193C($t2)
    ctx->pc = 0x1208bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 6460)));
    // 0x1208c0: 0x104a80  sll         $t1, $s0, 10
    ctx->pc = 0x1208c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 10));
    // 0x1208c4: 0x122300  sll         $a0, $s2, 12
    ctx->pc = 0x1208c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x1208c8: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1208c8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4095u)));
    // 0x1208cc: 0x131300  sll         $v0, $s3, 12
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x1208d0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1208d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4095u)));
    // 0x1208d4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1208d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x1208d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1208d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1208dc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1208dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1208e0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x1208e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1208e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1208e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1208e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1208e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1208ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1208ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1208f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1208f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1208f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1208f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1208f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1208f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208fc: 0xad841920  sw          $a0, 0x1920($t4)
    ctx->pc = 0x1208fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6432), GPR_U32(ctx, 4));
    // 0x120900: 0xada21924  sw          $v0, 0x1924($t5)
    ctx->pc = 0x120900u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6436), GPR_U32(ctx, 2));
    // 0x120904: 0xad671938  sw          $a3, 0x1938($t3)
    ctx->pc = 0x120904u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 6456), GPR_U32(ctx, 7));
    // 0x120908: 0xad46193c  sw          $a2, 0x193C($t2)
    ctx->pc = 0x120908u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 6460), GPR_U32(ctx, 6));
    // 0x12090c: 0x3e00008  jr          $ra
    ctx->pc = 0x12090Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12090Cu;
            // 0x120910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120824u: goto label_120824;
            case 0x12089Cu: goto label_12089c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120914u;
}
