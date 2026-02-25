#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _d2b
// Address: 0x13c480 - 0x13c5fc
void _d2b_0x13c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_d2b_0x13c480");
#endif

    ctx->pc = 0x13c480u;

    // 0x13c480: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13c484: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13c488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13c488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c48c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x13c48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x13c490: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x13c490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x13c494: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x13c494u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c498: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x13c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x13c49c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13c49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13c4a4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x13c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x13c4a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13c4ac: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x13C4ACu;
    SET_GPR_U32(ctx, 31, 0x13C4B4u);
    ctx->pc = 0x13C4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4ACu;
            // 0x13c4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4B4u; }
        if (ctx->pc != 0x13C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C4B4u; }
        if (ctx->pc != 0x13C4B4u) { return; }
    }
    ctx->pc = 0x13C4B4u;
    // 0x13c4b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c4b8: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x13c4b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x13c4bc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x13c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x13c4c0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x13c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x13c4c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c4c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c4c8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x13c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13c4cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13c4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13c4d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x13c4d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x13c4d4: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x13c4d4u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x13c4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c4dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c4dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c4e0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x13c4e0u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x13c4e4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x13c4e4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x13c4e8: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x13c4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13c4ec: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x13c4ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x13c4f0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C4F0u;
    {
        const bool branch_taken_0x13c4f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C4F0u;
            // 0x13c4f4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c4f0) {
            ctx->pc = 0x13C504u;
            goto label_13c504;
        }
    }
    ctx->pc = 0x13C4F8u;
    // 0x13c4f8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x13c4fc: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x13c4fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x13c500: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x13c500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_13c504:
    // 0x13c504: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x13c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x13c508: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13c508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13c50c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13C50Cu;
    {
        const bool branch_taken_0x13c50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C50Cu;
            // 0x13c510: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c50c) {
            ctx->pc = 0x13C574u;
            goto label_13c574;
        }
    }
    ctx->pc = 0x13C514u;
    // 0x13c514: 0xc04eeb4  jal         func_13BAD0
    ctx->pc = 0x13C514u;
    SET_GPR_U32(ctx, 31, 0x13C51Cu);
    ctx->pc = 0x13C518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C514u;
            // 0x13c518: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BAD0u;
    if (runtime->hasFunction(0x13BAD0u)) {
        auto targetFn = runtime->lookupFunction(0x13BAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C51Cu; }
        if (ctx->pc != 0x13C51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x13bad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C51Cu; }
        if (ctx->pc != 0x13C51Cu) { return; }
    }
    ctx->pc = 0x13C51Cu;
    // 0x13c51c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13c51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c520: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13C520u;
    {
        const bool branch_taken_0x13c520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C520u;
            // 0x13c524: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c520) {
            ctx->pc = 0x13C54Cu;
            goto label_13c54c;
        }
    }
    ctx->pc = 0x13C528u;
    // 0x13c528: 0x52023  negu        $a0, $a1
    ctx->pc = 0x13c528u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x13c52c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c530: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x13c530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x13c534: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13c534u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13c538: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x13c538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x13c53c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x13c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13c540: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x13c540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x13c544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13C544u;
    {
        const bool branch_taken_0x13c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C544u;
            // 0x13c548: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c544) {
            ctx->pc = 0x13C554u;
            goto label_13c554;
        }
    }
    ctx->pc = 0x13C54Cu;
label_13c54c:
    // 0x13c54c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c550: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x13c550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_13c554:
    // 0x13c554: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x13c554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13c558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c55c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c560: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x13c560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x13c564: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x13c564u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x13c568: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x13c568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c56c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C56Cu;
    {
        const bool branch_taken_0x13c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C56Cu;
            // 0x13c570: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c56c) {
            ctx->pc = 0x13C594u;
            goto label_13c594;
        }
    }
    ctx->pc = 0x13C574u;
label_13c574:
    // 0x13c574: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x13c574u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
    // 0x13c578: 0xc04eeb4  jal         func_13BAD0
    ctx->pc = 0x13C578u;
    SET_GPR_U32(ctx, 31, 0x13C580u);
    ctx->pc = 0x13C57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C578u;
            // 0x13c57c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BAD0u;
    if (runtime->hasFunction(0x13BAD0u)) {
        auto targetFn = runtime->lookupFunction(0x13BAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C580u; }
        if (ctx->pc != 0x13C580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x13bad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C580u; }
        if (ctx->pc != 0x13C580u) { return; }
    }
    ctx->pc = 0x13C580u;
    // 0x13c580: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13c584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c588: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x13c588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x13c58c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x13c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13c590: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x13c590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_13c594:
    // 0x13c594: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C594u;
    {
        const bool branch_taken_0x13c594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C594u;
            // 0x13c598: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c594) {
            ctx->pc = 0x13C5B0u;
            goto label_13c5b0;
        }
    }
    ctx->pc = 0x13C59Cu;
    // 0x13c59c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x13c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13c5a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13c5a4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x13c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13c5a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13C5A8u;
    {
        const bool branch_taken_0x13c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5A8u;
            // 0x13c5ac: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5a8) {
            ctx->pc = 0x13C5D0u;
            goto label_13c5d0;
        }
    }
    ctx->pc = 0x13C5B0u;
label_13c5b0:
    // 0x13c5b0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x13c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x13c5b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13c5b8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x13c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x13c5bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13c5c0: 0xc04ee92  jal         func_13BA48
    ctx->pc = 0x13C5C0u;
    SET_GPR_U32(ctx, 31, 0x13C5C8u);
    ctx->pc = 0x13C5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5C0u;
            // 0x13c5c4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BA48u;
    if (runtime->hasFunction(0x13BA48u)) {
        auto targetFn = runtime->lookupFunction(0x13BA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5C8u; }
        if (ctx->pc != 0x13C5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x13ba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C5C8u; }
        if (ctx->pc != 0x13C5C8u) { return; }
    }
    ctx->pc = 0x13C5C8u;
    // 0x13c5c8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x13c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x13c5cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13c5d0:
    // 0x13c5d0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x13c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x13c5d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13c5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c5d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13c5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c5dc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x13c5dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c5e0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13c5e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c5e4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x13c5e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c5e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13c5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c5ec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x13c5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c5f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13c5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C5F4u;
            // 0x13c5f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C504u: goto label_13c504;
            case 0x13C54Cu: goto label_13c54c;
            case 0x13C554u: goto label_13c554;
            case 0x13C574u: goto label_13c574;
            case 0x13C594u: goto label_13c594;
            case 0x13C5B0u: goto label_13c5b0;
            case 0x13C5D0u: goto label_13c5d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C5FCu;
}
