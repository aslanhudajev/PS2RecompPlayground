#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sequenceExtension
// Address: 0x12c780 - 0x12c8b0
void _sequenceExtension_0x12c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sequenceExtension_0x12c780");
#endif

    ctx->pc = 0x12c780u;

    // 0x12c780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12c784: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12c788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c790: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x12c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12c794: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c798: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12c79c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12c7a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12c7a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12c7ac: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x12C7ACu;
    SET_GPR_U32(ctx, 31, 0x12C7B4u);
    ctx->pc = 0x12C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7ACu;
            // 0x12c7b0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (runtime->hasFunction(0x126AF8u)) {
        auto targetFn = runtime->lookupFunction(0x126AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7B4u; }
        if (ctx->pc != 0x12C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x126af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7B4u; }
        if (ctx->pc != 0x12C7B4u) { return; }
    }
    ctx->pc = 0x12C7B4u;
    // 0x12c7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7b8: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C7B8u;
    SET_GPR_U32(ctx, 31, 0x12C7C0u);
    ctx->pc = 0x12C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7B8u;
            // 0x12c7bc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7C0u; }
        if (ctx->pc != 0x12C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7C0u; }
        if (ctx->pc != 0x12C7C0u) { return; }
    }
    ctx->pc = 0x12C7C0u;
    // 0x12c7c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12c7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7c4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x12c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x12c7c8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x12c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x12c7cc: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x12c7ccu;
    SET_GPR_VEC(ctx, 21, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4095u)));
    // 0x12c7d0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x12c7d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x12c7d4: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x12c7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x12c7d8: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x12c7dc: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x12c7dcu;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
    // 0x12c7e0: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x12c7e0u;
    SET_GPR_VEC(ctx, 19, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
    // 0x12c7e4: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C7E4u;
    {
        const bool branch_taken_0x12c7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x12C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7E4u;
            // 0x12c7e8: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7e4) {
            ctx->pc = 0x12C7FCu;
            goto label_12c7fc;
        }
    }
    ctx->pc = 0x12C7ECu;
    // 0x12c7ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12c7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7f4: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12C7F4u;
    SET_GPR_U32(ctx, 31, 0x12C7FCu);
    ctx->pc = 0x12C7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C7F4u;
            // 0x12c7f8: 0x24a5f520  addiu       $a1, $a1, -0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7FCu; }
        if (ctx->pc != 0x12C7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7FCu; }
        if (ctx->pc != 0x12C7FCu) { return; }
    }
    ctx->pc = 0x12C7FCu;
label_12c7fc:
    // 0x12c7fc: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x12c800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c804: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12c804u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x12c808: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c80c: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x12c80cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
    // 0x12c810: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12C810u;
    SET_GPR_U32(ctx, 31, 0x12C818u);
    ctx->pc = 0x12C814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C810u;
            // 0x12c814: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C818u; }
        if (ctx->pc != 0x12C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C818u; }
        if (ctx->pc != 0x12C818u) { return; }
    }
    ctx->pc = 0x12C818u;
    // 0x12c818: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x12c818u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x12c81c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x12c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12c820: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C820u;
    {
        const bool branch_taken_0x12c820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C820u;
            // 0x12c824: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c820) {
            ctx->pc = 0x12C844u;
            goto label_12c844;
        }
    }
    ctx->pc = 0x12C828u;
    // 0x12c828: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C828u;
    {
        const bool branch_taken_0x12c828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C828u;
            // 0x12c82c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c828) {
            ctx->pc = 0x12C844u;
            goto label_12c844;
        }
    }
    ctx->pc = 0x12C830u;
    // 0x12c830: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C830u;
    {
        const bool branch_taken_0x12c830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C830u;
            // 0x12c834: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c830) {
            ctx->pc = 0x12C844u;
            goto label_12c844;
        }
    }
    ctx->pc = 0x12C838u;
    // 0x12c838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c83c: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12C83Cu;
    SET_GPR_U32(ctx, 31, 0x12C844u);
    ctx->pc = 0x12C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C83Cu;
            // 0x12c840: 0x24a5f548  addiu       $a1, $a1, -0xAB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C844u; }
        if (ctx->pc != 0x12C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C844u; }
        if (ctx->pc != 0x12C844u) { return; }
    }
    ctx->pc = 0x12C844u;
label_12c844:
    // 0x12c844: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x12c848: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x12c848u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x12c84c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x12c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x12c850: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x12c854: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x12c854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x12c858: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x12c858u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x12c85c: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x12c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x12c860: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x12c860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x12c864: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x12c864u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4095u)));
    // 0x12c868: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x12c868u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4095u)));
    // 0x12c86c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x12c86cu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x12c870: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12c870u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x12c874: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x12c878: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x12c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x12c87c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x12c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x12c880: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x12c880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
    // 0x12c884: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x12c884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
    // 0x12c888: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x12c888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
    // 0x12c88c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12c88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c890: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x12c890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c894: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12c894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c898: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12c898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c89c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12c89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c8a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12c8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C8A8u;
            // 0x12c8ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C7FCu: goto label_12c7fc;
            case 0x12C844u: goto label_12c844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C8B0u;
}
