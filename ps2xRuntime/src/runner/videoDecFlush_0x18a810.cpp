#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecFlush
// Address: 0x18a810 - 0x18a8ec
void videoDecFlush_0x18a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecFlush_0x18a810");
#endif

    ctx->pc = 0x18a810u;

    // 0x18a810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a814: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18a818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18a81c: 0x2463a4c8  addiu       $v1, $v1, -0x5B38
    ctx->pc = 0x18a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943944));
    // 0x18a820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a824: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x18a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18a828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a82c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x18a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x18a830: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x18a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18a834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a838: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18a83c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x18a83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18a840: 0x27a8003c  addiu       $t0, $sp, 0x3C
    ctx->pc = 0x18a840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x18a844: 0xc062a70  jal         func_18A9C0
    ctx->pc = 0x18A844u;
    SET_GPR_U32(ctx, 31, 0x18A84Cu);
    ctx->pc = 0x18A848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A844u;
            // 0x18a848: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9C0u;
    if (runtime->hasFunction(0x18A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A84Cu; }
        if (ctx->pc != 0x18A84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x18a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A84Cu; }
        if (ctx->pc != 0x18A84Cu) { return; }
    }
    ctx->pc = 0x18A84Cu;
    // 0x18a84c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a850: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x18a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18a854: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18a858: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x18a858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18a85c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A85Cu;
    {
        const bool branch_taken_0x18a85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A85Cu;
            // 0x18a860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a85c) {
            ctx->pc = 0x18A870u;
            goto label_18a870;
        }
    }
    ctx->pc = 0x18A864u;
    // 0x18a864: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18A864u;
    {
        const bool branch_taken_0x18a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a864) {
            ctx->pc = 0x18A8D8u;
            goto label_18a8d8;
        }
    }
    ctx->pc = 0x18A86Cu;
    // 0x18a86c: 0x0  nop
    ctx->pc = 0x18a86cu;
    // NOP
label_18a870:
    // 0x18a870: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x18A870u;
    SET_GPR_U32(ctx, 31, 0x18A878u);
    ctx->pc = 0x18A874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A870u;
            // 0x18a874: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A878u; }
        if (ctx->pc != 0x18A878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A878u; }
        if (ctx->pc != 0x18A878u) { return; }
    }
    ctx->pc = 0x18A878u;
    // 0x18a878: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x18a878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18a87c: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x18A87Cu;
    SET_GPR_U32(ctx, 31, 0x18A884u);
    ctx->pc = 0x18A880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A87Cu;
            // 0x18a880: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A884u; }
        if (ctx->pc != 0x18A884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A884u; }
        if (ctx->pc != 0x18A884u) { return; }
    }
    ctx->pc = 0x18A884u;
    // 0x18a884: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x18a884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a88c: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x18a88cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x18a890: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18a890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a894: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x18a894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x18a898: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x18a898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18a89c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18a89cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8a0: 0xc0628d0  jal         func_18A340
    ctx->pc = 0x18A8A0u;
    SET_GPR_U32(ctx, 31, 0x18A8A8u);
    ctx->pc = 0x18A8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8A0u;
            // 0x18a8a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A340u;
    if (runtime->hasFunction(0x18A340u)) {
        auto targetFn = runtime->lookupFunction(0x18A340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8A8u; }
        if (ctx->pc != 0x18A8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cpy2area_0x18a340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8A8u; }
        if (ctx->pc != 0x18A8A8u) { return; }
    }
    ctx->pc = 0x18A8A8u;
    // 0x18a8a8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x18a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18a8ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8b0: 0xc062a6c  jal         func_18A9B0
    ctx->pc = 0x18A8B0u;
    SET_GPR_U32(ctx, 31, 0x18A8B8u);
    ctx->pc = 0x18A8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8B0u;
            // 0x18a8b4: 0x2484fe00  addiu       $a0, $a0, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9B0u;
    if (runtime->hasFunction(0x18A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8B8u; }
        if (ctx->pc != 0x18A8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x18a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8B8u; }
        if (ctx->pc != 0x18A8B8u) { return; }
    }
    ctx->pc = 0x18A8B8u;
    // 0x18a8b8: 0xc0625c8  jal         func_189720
    ctx->pc = 0x18A8B8u;
    SET_GPR_U32(ctx, 31, 0x18A8C0u);
    ctx->pc = 0x18A8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8B8u;
            // 0x18a8bc: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189720u;
    if (runtime->hasFunction(0x189720u)) {
        auto targetFn = runtime->lookupFunction(0x189720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8C0u; }
        if (ctx->pc != 0x18A8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufFlush_0x189720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8C0u; }
        if (ctx->pc != 0x18A8C0u) { return; }
    }
    ctx->pc = 0x18A8C0u;
    // 0x18a8c0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x18a8c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A8C4u;
    {
        const bool branch_taken_0x18a8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8C4u;
            // 0x18a8c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8c4) {
            ctx->pc = 0x18A8D0u;
            goto label_18a8d0;
        }
    }
    ctx->pc = 0x18A8CCu;
    // 0x18a8cc: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x18a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_18a8d0:
    // 0x18a8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a8d4: 0x0  nop
    ctx->pc = 0x18a8d4u;
    // NOP
label_18a8d8:
    // 0x18a8d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A8E4u;
            // 0x18a8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A870u: goto label_18a870;
            case 0x18A8D0u: goto label_18a8d0;
            case 0x18A8D8u: goto label_18a8d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A8ECu;
}
