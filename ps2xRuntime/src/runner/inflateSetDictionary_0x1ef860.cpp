#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflateSetDictionary
// Address: 0x1ef860 - 0x1ef934
void inflateSetDictionary_0x1ef860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflateSetDictionary_0x1ef860");
#endif

    ctx->pc = 0x1ef860u;

    // 0x1ef860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ef868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ef86c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ef86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ef870: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ef870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ef874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ef874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ef878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef87c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ef87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef880: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ef880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef884: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF884u;
    {
        const bool branch_taken_0x1ef884 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF884u;
            // 0x1ef888: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef884) {
            ctx->pc = 0x1EF8A8u;
            goto label_1ef8a8;
        }
    }
    ctx->pc = 0x1EF88Cu;
    // 0x1ef88c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1ef88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ef890: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EF890u;
    {
        const bool branch_taken_0x1ef890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF890u;
            // 0x1ef894: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef890) {
            ctx->pc = 0x1EF918u;
            goto label_1ef918;
        }
    }
    ctx->pc = 0x1EF898u;
    // 0x1ef898: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef89c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ef89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef8a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF8A0u;
    {
        const bool branch_taken_0x1ef8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EF8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8A0u;
            // 0x1ef8a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8a0) {
            ctx->pc = 0x1EF8B0u;
            goto label_1ef8b0;
        }
    }
    ctx->pc = 0x1EF8A8u;
label_1ef8a8:
    // 0x1ef8a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF8A8u;
    {
        const bool branch_taken_0x1ef8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8A8u;
            // 0x1ef8ac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8a8) {
            ctx->pc = 0x1EF918u;
            goto label_1ef918;
        }
    }
    ctx->pc = 0x1EF8B0u;
label_1ef8b0:
    // 0x1ef8b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ef8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8b4: 0xc07bb84  jal         func_1EEE10
    ctx->pc = 0x1EF8B4u;
    SET_GPR_U32(ctx, 31, 0x1EF8BCu);
    ctx->pc = 0x1EF8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8B4u;
            // 0x1ef8b8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE10u;
    if (runtime->hasFunction(0x1EEE10u)) {
        auto targetFn = runtime->lookupFunction(0x1EEE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8BCu; }
        if (ctx->pc != 0x1EF8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        adler32_0x1eee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8BCu; }
        if (ctx->pc != 0x1EF8BCu) { return; }
    }
    ctx->pc = 0x1EF8BCu;
    // 0x1ef8bc: 0xde230038  ld          $v1, 0x38($s1)
    ctx->pc = 0x1ef8bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ef8c0: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF8C0u;
    {
        const bool branch_taken_0x1ef8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8C0u;
            // 0x1ef8c4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8c0) {
            ctx->pc = 0x1EF918u;
            goto label_1ef918;
        }
    }
    ctx->pc = 0x1EF8C8u;
    // 0x1ef8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef8cc: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x1ef8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x1ef8d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ef8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ef8d4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1ef8d8: 0x701006  srlv        $v0, $s0, $v1
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x1ef8dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF8DCu;
    {
        const bool branch_taken_0x1ef8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8DCu;
            // 0x1ef8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8dc) {
            ctx->pc = 0x1EF8F4u;
            goto label_1ef8f4;
        }
    }
    ctx->pc = 0x1EF8E4u;
    // 0x1ef8e4: 0x628004  sllv        $s0, $v0, $v1
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1ef8e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ef8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ef8ec: 0x2701023  subu        $v0, $s3, $s0
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1ef8f0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1ef8f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1ef8f4:
    // 0x1ef8f4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ef8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ef8f8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ef8fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ef8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef900: 0xc07c1d9  jal         func_1F0764
    ctx->pc = 0x1EF900u;
    SET_GPR_U32(ctx, 31, 0x1EF908u);
    ctx->pc = 0x1EF904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF900u;
            // 0x1ef904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0764u;
    if (runtime->hasFunction(0x1F0764u)) {
        auto targetFn = runtime->lookupFunction(0x1F0764u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF908u; }
        if (ctx->pc != 0x1EF908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_set_dictionary_0x1f0764(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF908u; }
        if (ctx->pc != 0x1EF908u) { return; }
    }
    ctx->pc = 0x1EF908u;
    // 0x1ef908: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1ef908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ef90c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef910: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ef910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ef914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef918:
    // 0x1ef918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef91c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ef91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ef920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ef924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ef928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ef928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef92c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF92Cu;
            // 0x1ef930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF8A8u: goto label_1ef8a8;
            case 0x1EF8B0u: goto label_1ef8b0;
            case 0x1EF8F4u: goto label_1ef8f4;
            case 0x1EF918u: goto label_1ef918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF934u;
}
