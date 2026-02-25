#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetShare
// Address: 0x11a820 - 0x11a8dc
void SetShare_0x11a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetShare_0x11a820");
#endif

    ctx->pc = 0x11a820u;

    // 0x11a820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a824: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a830: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a834: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x11a834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11a838: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a83c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11A83Cu;
    {
        const bool branch_taken_0x11a83c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A83Cu;
            // 0x11a840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a83c) {
            ctx->pc = 0x11A87Cu;
            goto label_11a87c;
        }
    }
    ctx->pc = 0x11A844u;
    // 0x11a844: 0x0  nop
    ctx->pc = 0x11a844u;
    // NOP
label_11a848:
    // 0x11a848: 0xc047258  jal         func_11C960
    ctx->pc = 0x11A848u;
    SET_GPR_U32(ctx, 31, 0x11A850u);
    ctx->pc = 0x11A84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A848u;
            // 0x11a84c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C960u;
    if (runtime->hasFunction(0x11C960u)) {
        auto targetFn = runtime->lookupFunction(0x11C960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A850u; }
        if (ctx->pc != 0x11A850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetShare_0x11c960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A850u; }
        if (ctx->pc != 0x11A850u) { return; }
    }
    ctx->pc = 0x11A850u;
    // 0x11a850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11a850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11a854: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x11a854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11a858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a85c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11a860: 0xc0469dc  jal         func_11A770
    ctx->pc = 0x11A860u;
    SET_GPR_U32(ctx, 31, 0x11A868u);
    ctx->pc = 0x11A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A860u;
            // 0x11a864: 0x8e27000c  lw          $a3, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A770u;
    if (runtime->hasFunction(0x11A770u)) {
        auto targetFn = runtime->lookupFunction(0x11A770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A868u; }
        if (ctx->pc != 0x11A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeShare_0x11a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A868u; }
        if (ctx->pc != 0x11A868u) { return; }
    }
    ctx->pc = 0x11A868u;
    // 0x11a868: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x11a868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11a86c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a870: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11a870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a874: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11A874u;
    {
        const bool branch_taken_0x11a874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a874) {
            ctx->pc = 0x11A848u;
            goto label_11a848;
        }
    }
    ctx->pc = 0x11A87Cu;
label_11a87c:
    // 0x11a87c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x11a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x11a880: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a884: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11A884u;
    {
        const bool branch_taken_0x11a884 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A884u;
            // 0x11a888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a884) {
            ctx->pc = 0x11A8C4u;
            goto label_11a8c4;
        }
    }
    ctx->pc = 0x11A88Cu;
    // 0x11a88c: 0x0  nop
    ctx->pc = 0x11a88cu;
    // NOP
label_11a890:
    // 0x11a890: 0xc047258  jal         func_11C960
    ctx->pc = 0x11A890u;
    SET_GPR_U32(ctx, 31, 0x11A898u);
    ctx->pc = 0x11A894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A890u;
            // 0x11a894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C960u;
    if (runtime->hasFunction(0x11C960u)) {
        auto targetFn = runtime->lookupFunction(0x11C960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A898u; }
        if (ctx->pc != 0x11A898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetShare_0x11c960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A898u; }
        if (ctx->pc != 0x11A898u) { return; }
    }
    ctx->pc = 0x11A898u;
    // 0x11a898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11a898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11a89c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x11a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x11a8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8a4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x11a8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11a8a8: 0xc0469dc  jal         func_11A770
    ctx->pc = 0x11A8A8u;
    SET_GPR_U32(ctx, 31, 0x11A8B0u);
    ctx->pc = 0x11A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8A8u;
            // 0x11a8ac: 0x8e270010  lw          $a3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A770u;
    if (runtime->hasFunction(0x11A770u)) {
        auto targetFn = runtime->lookupFunction(0x11A770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A8B0u; }
        if (ctx->pc != 0x11A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeShare_0x11a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A8B0u; }
        if (ctx->pc != 0x11A8B0u) { return; }
    }
    ctx->pc = 0x11A8B0u;
    // 0x11a8b0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x11a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x11a8b4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a8b8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11a8b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a8bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11A8BCu;
    {
        const bool branch_taken_0x11a8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a8bc) {
            ctx->pc = 0x11A890u;
            goto label_11a890;
        }
    }
    ctx->pc = 0x11A8C4u;
label_11a8c4:
    // 0x11a8c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a8c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8D4u;
            // 0x11a8d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A848u: goto label_11a848;
            case 0x11A87Cu: goto label_11a87c;
            case 0x11A890u: goto label_11a890;
            case 0x11A8C4u: goto label_11a8c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A8DCu;
}
