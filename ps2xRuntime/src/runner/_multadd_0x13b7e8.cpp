#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _multadd
// Address: 0x13b7e8 - 0x13b8fc
void _multadd_0x13b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_multadd_0x13b7e8");
#endif

    ctx->pc = 0x13b7e8u;

    // 0x13b7e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13b7ec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x13b7ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13b7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13b7f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13b7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13b7fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13b7fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b800: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13b800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13b804: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13b804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b808: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x13b80c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13b80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b814: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x13b814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13b818: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13b81c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x13b81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b820: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x13b820u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b824: 0x0  nop
    ctx->pc = 0x13b824u;
    // NOP
label_13b828:
    // 0x13b828: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x13b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13b82c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13b82cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13b830: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x13b830u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x13b834: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x13b834u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x13b838: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x13b838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b83c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x13b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x13b840: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x13b840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x13b844: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x13b844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13b848: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x13b848u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x13b84c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b850: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x13b850u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x13b854: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x13b854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x13b858: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x13b858u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x13b85c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13b860: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x13b860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x13b864: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13B864u;
    {
        const bool branch_taken_0x13b864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B864u;
            // 0x13b868: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b864) {
            ctx->pc = 0x13B828u;
            goto label_13b828;
        }
    }
    ctx->pc = 0x13B86Cu;
    // 0x13b86c: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x13B86Cu;
    {
        const bool branch_taken_0x13b86c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B86Cu;
            // 0x13b870: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b86c) {
            ctx->pc = 0x13B8DCu;
            goto label_13b8dc;
        }
    }
    ctx->pc = 0x13B874u;
    // 0x13b874: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x13b874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13b878: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x13b878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13b87c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13B87Cu;
    {
        const bool branch_taken_0x13b87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B87Cu;
            // 0x13b880: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b87c) {
            ctx->pc = 0x13B8C8u;
            goto label_13b8c8;
        }
    }
    ctx->pc = 0x13B884u;
    // 0x13b884: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13b884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13b888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b88c: 0xc04edc4  jal         func_13B710
    ctx->pc = 0x13B88Cu;
    SET_GPR_U32(ctx, 31, 0x13B894u);
    ctx->pc = 0x13B890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B88Cu;
            // 0x13b890: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B710u;
    if (runtime->hasFunction(0x13B710u)) {
        auto targetFn = runtime->lookupFunction(0x13B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B894u; }
        if (ctx->pc != 0x13B894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x13b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B894u; }
        if (ctx->pc != 0x13B894u) { return; }
    }
    ctx->pc = 0x13B894u;
    // 0x13b894: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x13b894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13b898: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b89c: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x13b89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x13b8a0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x13b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13b8a4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x13b8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13b8a8: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x13B8A8u;
    SET_GPR_U32(ctx, 31, 0x13B8B0u);
    ctx->pc = 0x13B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8A8u;
            // 0x13b8ac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8B0u; }
        if (ctx->pc != 0x13B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8B0u; }
        if (ctx->pc != 0x13B8B0u) { return; }
    }
    ctx->pc = 0x13B8B0u;
    // 0x13b8b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8b4: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x13B8B4u;
    SET_GPR_U32(ctx, 31, 0x13B8BCu);
    ctx->pc = 0x13B8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8B4u;
            // 0x13b8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8BCu; }
        if (ctx->pc != 0x13B8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B8BCu; }
        if (ctx->pc != 0x13B8BCu) { return; }
    }
    ctx->pc = 0x13B8BCu;
    // 0x13b8bc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13b8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b8c0: 0x262a0014  addiu       $t2, $s1, 0x14
    ctx->pc = 0x13b8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x13b8c4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_13b8c8:
    // 0x13b8c8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x13b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x13b8cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13b8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13b8d0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x13b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x13b8d4: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x13b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x13b8d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13b8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b8dc:
    // 0x13b8dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b8e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13b8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b8e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13b8e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b8e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13b8e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b8ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13b8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b8f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13B8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B8F4u;
            // 0x13b8f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B828u: goto label_13b828;
            case 0x13B8C8u: goto label_13b8c8;
            case 0x13B8DCu: goto label_13b8dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B8FCu;
}
