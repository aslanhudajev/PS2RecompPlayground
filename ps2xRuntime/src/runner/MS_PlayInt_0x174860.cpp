#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MS_PlayInt
// Address: 0x174860 - 0x174954
void MS_PlayInt_0x174860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MS_PlayInt_0x174860");
#endif

    ctx->pc = 0x174860u;

    // 0x174860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174864: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17486c: 0x24841cb0  addiu       $a0, $a0, 0x1CB0
    ctx->pc = 0x17486cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    // 0x174870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174874: 0xc05d258  jal         func_174960
    ctx->pc = 0x174874u;
    SET_GPR_U32(ctx, 31, 0x17487Cu);
    ctx->pc = 0x174878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174874u;
            // 0x174878: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174960u;
    if (runtime->hasFunction(0x174960u)) {
        auto targetFn = runtime->lookupFunction(0x174960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17487Cu; }
        if (ctx->pc != 0x17487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load_File_0x174960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17487Cu; }
        if (ctx->pc != 0x17487Cu) { return; }
    }
    ctx->pc = 0x17487Cu;
    // 0x17487c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17487cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174880: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x174880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174888: 0xc05c914  jal         func_172450
    ctx->pc = 0x174888u;
    SET_GPR_U32(ctx, 31, 0x174890u);
    ctx->pc = 0x17488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174888u;
            // 0x17488c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172450u;
    if (runtime->hasFunction(0x172450u)) {
        auto targetFn = runtime->lookupFunction(0x172450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174890u; }
        if (ctx->pc != 0x174890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetMIHInfo_0x172450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174890u; }
        if (ctx->pc != 0x174890u) { return; }
    }
    ctx->pc = 0x174890u;
    // 0x174890: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x174890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174894: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174898: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17489c: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x17489cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1748a0: 0xc05ca8c  jal         func_172A30
    ctx->pc = 0x1748A0u;
    SET_GPR_U32(ctx, 31, 0x1748A8u);
    ctx->pc = 0x1748A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748A0u;
            // 0x1748a4: 0xac2227a0  sw          $v0, 0x27A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172A30u;
    if (runtime->hasFunction(0x172A30u)) {
        auto targetFn = runtime->lookupFunction(0x172A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748A8u; }
        if (ctx->pc != 0x1748A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_HzToSPU_0x172a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748A8u; }
        if (ctx->pc != 0x1748A8u) { return; }
    }
    ctx->pc = 0x1748A8u;
    // 0x1748a8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1748ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1748acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748b0: 0xa42227a8  sh          $v0, 0x27A8($at)
    ctx->pc = 0x1748b0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 10152), (uint16_t)GPR_U32(ctx, 2));
    // 0x1748b4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1748b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1748b8: 0x8c2227a0  lw          $v0, 0x27A0($at)
    ctx->pc = 0x1748b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10144)));
    // 0x1748bc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1748bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1748c0: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x1748C0u;
    SET_GPR_U32(ctx, 31, 0x1748C8u);
    ctx->pc = 0x1748C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748C0u;
            // 0x1748c4: 0x28040  sll         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748C8u; }
        if (ctx->pc != 0x1748C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748C8u; }
        if (ctx->pc != 0x1748C8u) { return; }
    }
    ctx->pc = 0x1748C8u;
    // 0x1748c8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1748c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1748cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1748ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748d0: 0x24841cd0  addiu       $a0, $a0, 0x1CD0
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7376));
    // 0x1748d4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1748D4u;
    SET_GPR_U32(ctx, 31, 0x1748DCu);
    ctx->pc = 0x1748D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748D4u;
            // 0x1748d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748DCu; }
        if (ctx->pc != 0x1748DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748DCu; }
        if (ctx->pc != 0x1748DCu) { return; }
    }
    ctx->pc = 0x1748DCu;
    // 0x1748dc: 0x3c02000d  lui         $v0, 0xD
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13 << 16));
    // 0x1748e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1748e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1748e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1748e8: 0xc05cca4  jal         func_173290
    ctx->pc = 0x1748E8u;
    SET_GPR_U32(ctx, 31, 0x1748F0u);
    ctx->pc = 0x1748ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748E8u;
            // 0x1748ec: 0x34456d50  ori         $a1, $v0, 0x6D50 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27984u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173290u;
    if (runtime->hasFunction(0x173290u)) {
        auto targetFn = runtime->lookupFunction(0x173290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F0u; }
        if (ctx->pc != 0x1748F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AllocateStreamBuffer_0x173290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F0u; }
        if (ctx->pc != 0x1748F0u) { return; }
    }
    ctx->pc = 0x1748F0u;
    // 0x1748f0: 0xc05ccc0  jal         func_173300
    ctx->pc = 0x1748F0u;
    SET_GPR_U32(ctx, 31, 0x1748F8u);
    ctx->pc = 0x1748F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1748F0u;
            // 0x1748f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F8u; }
        if (ctx->pc != 0x1748F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetMaxStreamLimit_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1748F8u; }
        if (ctx->pc != 0x1748F8u) { return; }
    }
    ctx->pc = 0x1748F8u;
    // 0x1748f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1748f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1748fc: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x1748fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x174900: 0xac202780  sw          $zero, 0x2780($at)
    ctx->pc = 0x174900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10112), GPR_U32(ctx, 0));
    // 0x174904: 0x26101d00  addiu       $s0, $s0, 0x1D00
    ctx->pc = 0x174904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7424));
    // 0x174908: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17490c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17490cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174910: 0x24841b80  addiu       $a0, $a0, 0x1B80
    ctx->pc = 0x174910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
    // 0x174914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17491c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17491Cu;
    SET_GPR_U32(ctx, 31, 0x174924u);
    ctx->pc = 0x174920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17491Cu;
            // 0x174920: 0xac202788  sw          $zero, 0x2788($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174924u; }
        if (ctx->pc != 0x174924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174924u; }
        if (ctx->pc != 0x174924u) { return; }
    }
    ctx->pc = 0x174924u;
    // 0x174924: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17492c: 0x8c242780  lw          $a0, 0x2780($at)
    ctx->pc = 0x17492cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10112)));
    // 0x174930: 0xc05ca70  jal         func_1729C0
    ctx->pc = 0x174930u;
    SET_GPR_U32(ctx, 31, 0x174938u);
    ctx->pc = 0x174934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174930u;
            // 0x174934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1729C0u;
    if (runtime->hasFunction(0x1729C0u)) {
        auto targetFn = runtime->lookupFunction(0x1729C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174938u; }
        if (ctx->pc != 0x174938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_CreateFileInfo_0x1729c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174938u; }
        if (ctx->pc != 0x174938u) { return; }
    }
    ctx->pc = 0x174938u;
    // 0x174938: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x174938u;
    SET_GPR_U32(ctx, 31, 0x174940u);
    ctx->pc = 0x17493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174938u;
            // 0x17493c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174940u; }
        if (ctx->pc != 0x174940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174940u; }
        if (ctx->pc != 0x174940u) { return; }
    }
    ctx->pc = 0x174940u;
    // 0x174940: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17494c: 0x3e00008  jr          $ra
    ctx->pc = 0x17494Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17494Cu;
            // 0x174950: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x174954u;
}
