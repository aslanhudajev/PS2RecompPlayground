#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_SetStreamChild_Int
// Address: 0x172520 - 0x172698
void SOUND_SetStreamChild_Int_0x172520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_SetStreamChild_Int_0x172520");
#endif

    ctx->pc = 0x172520u;

    // 0x172520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x172520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x172524: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172528: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x172528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17252c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x172530: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172534: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x172534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172538: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17253c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17253cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x172544: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x172544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17254c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17254cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172554: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x172554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17255c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x17255cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172560: 0x8c220a68  lw          $v0, 0xA68($at)
    ctx->pc = 0x172560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x172564: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x172564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x172568: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x172568u;
    {
        const bool branch_taken_0x172568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172568u;
            // 0x17256c: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172568) {
            ctx->pc = 0x1725B0u;
            goto label_1725b0;
        }
    }
    ctx->pc = 0x172570u;
    // 0x172570: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172574: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172574u;
    SET_GPR_U32(ctx, 31, 0x17257Cu);
    ctx->pc = 0x172578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172574u;
            // 0x172578: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17257Cu; }
        if (ctx->pc != 0x17257Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17257Cu; }
        if (ctx->pc != 0x17257Cu) { return; }
    }
    ctx->pc = 0x17257Cu;
    // 0x17257c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17257cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172580: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172584: 0x8c220a68  lw          $v0, 0xA68($at)
    ctx->pc = 0x172584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x172588: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x172588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17258c: 0x248415c0  addiu       $a0, $a0, 0x15C0
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5568));
    // 0x172590: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172590u;
    SET_GPR_U32(ctx, 31, 0x172598u);
    ctx->pc = 0x172594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172590u;
            // 0x172594: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172598u; }
        if (ctx->pc != 0x172598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172598u; }
        if (ctx->pc != 0x172598u) { return; }
    }
    ctx->pc = 0x172598u;
    // 0x172598: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17259c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17259Cu;
    SET_GPR_U32(ctx, 31, 0x1725A4u);
    ctx->pc = 0x1725A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17259Cu;
            // 0x1725a0: 0x248415f0  addiu       $a0, $a0, 0x15F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725A4u; }
        if (ctx->pc != 0x1725A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725A4u; }
        if (ctx->pc != 0x1725A4u) { return; }
    }
    ctx->pc = 0x1725A4u;
    // 0x1725a4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1725A4u;
    {
        const bool branch_taken_0x1725a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1725a4) {
            ctx->pc = 0x172670u;
            goto label_172670;
        }
    }
    ctx->pc = 0x1725ACu;
    // 0x1725ac: 0x0  nop
    ctx->pc = 0x1725acu;
    // NOP
label_1725b0:
    // 0x1725b0: 0x2ea10030  sltiu       $at, $s5, 0x30
    ctx->pc = 0x1725b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1725b4: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1725B4u;
    {
        const bool branch_taken_0x1725b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1725B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1725B4u;
            // 0x1725b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725b4) {
            ctx->pc = 0x1725E0u;
            goto label_1725e0;
        }
    }
    ctx->pc = 0x1725BCu;
    // 0x1725bc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1725BCu;
    SET_GPR_U32(ctx, 31, 0x1725C4u);
    ctx->pc = 0x1725C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725BCu;
            // 0x1725c0: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725C4u; }
        if (ctx->pc != 0x1725C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725C4u; }
        if (ctx->pc != 0x1725C4u) { return; }
    }
    ctx->pc = 0x1725C4u;
    // 0x1725c4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1725c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1725c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1725c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725cc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1725CCu;
    SET_GPR_U32(ctx, 31, 0x1725D4u);
    ctx->pc = 0x1725D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725CCu;
            // 0x1725d0: 0x24841630  addiu       $a0, $a0, 0x1630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725D4u; }
        if (ctx->pc != 0x1725D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725D4u; }
        if (ctx->pc != 0x1725D4u) { return; }
    }
    ctx->pc = 0x1725D4u;
    // 0x1725d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1725D4u;
    {
        const bool branch_taken_0x1725d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1725d4) {
            ctx->pc = 0x172670u;
            goto label_172670;
        }
    }
    ctx->pc = 0x1725DCu;
    // 0x1725dc: 0x0  nop
    ctx->pc = 0x1725dcu;
    // NOP
label_1725e0:
    // 0x1725e0: 0x2e810030  sltiu       $at, $s4, 0x30
    ctx->pc = 0x1725e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1725e4: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1725E4u;
    {
        const bool branch_taken_0x1725e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1725E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1725E4u;
            // 0x1725e8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725e4) {
            ctx->pc = 0x172610u;
            goto label_172610;
        }
    }
    ctx->pc = 0x1725ECu;
    // 0x1725ec: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1725ECu;
    SET_GPR_U32(ctx, 31, 0x1725F4u);
    ctx->pc = 0x1725F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725ECu;
            // 0x1725f0: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725F4u; }
        if (ctx->pc != 0x1725F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725F4u; }
        if (ctx->pc != 0x1725F4u) { return; }
    }
    ctx->pc = 0x1725F4u;
    // 0x1725f4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1725f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1725f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1725f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1725FCu;
    SET_GPR_U32(ctx, 31, 0x172604u);
    ctx->pc = 0x172600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1725FCu;
            // 0x172600: 0x24841660  addiu       $a0, $a0, 0x1660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172604u; }
        if (ctx->pc != 0x172604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172604u; }
        if (ctx->pc != 0x172604u) { return; }
    }
    ctx->pc = 0x172604u;
    // 0x172604: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x172604u;
    {
        const bool branch_taken_0x172604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172604) {
            ctx->pc = 0x172670u;
            goto label_172670;
        }
    }
    ctx->pc = 0x17260Cu;
    // 0x17260c: 0x0  nop
    ctx->pc = 0x17260cu;
    // NOP
label_172610:
    // 0x172610: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x172610u;
    SET_GPR_U32(ctx, 31, 0x172618u);
    ctx->pc = 0x172614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172610u;
            // 0x172614: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172618u; }
        if (ctx->pc != 0x172618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172618u; }
        if (ctx->pc != 0x172618u) { return; }
    }
    ctx->pc = 0x172618u;
    // 0x172618: 0x161200  sll         $v0, $s6, 8
    ctx->pc = 0x172618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x17261c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x17261cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x172620: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x172620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x172624: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x172624u;
    SET_GPR_U32(ctx, 31, 0x17262Cu);
    ctx->pc = 0x172628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172624u;
            // 0x172628: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17262Cu; }
        if (ctx->pc != 0x17262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17262Cu; }
        if (ctx->pc != 0x17262Cu) { return; }
    }
    ctx->pc = 0x17262Cu;
    // 0x17262c: 0x14243c  dsll32      $a0, $s4, 16
    ctx->pc = 0x17262cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 16));
    // 0x172630: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x172630u;
    SET_GPR_U32(ctx, 31, 0x172638u);
    ctx->pc = 0x172634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172630u;
            // 0x172634: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172638u; }
        if (ctx->pc != 0x172638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172638u; }
        if (ctx->pc != 0x172638u) { return; }
    }
    ctx->pc = 0x172638u;
    // 0x172638: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x172638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x17263c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17263Cu;
    SET_GPR_U32(ctx, 31, 0x172644u);
    ctx->pc = 0x172640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17263Cu;
            // 0x172640: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172644u; }
        if (ctx->pc != 0x172644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172644u; }
        if (ctx->pc != 0x172644u) { return; }
    }
    ctx->pc = 0x172644u;
    // 0x172644: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x172644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x172648: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x172648u;
    SET_GPR_U32(ctx, 31, 0x172650u);
    ctx->pc = 0x17264Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172648u;
            // 0x17264c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172650u; }
        if (ctx->pc != 0x172650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172650u; }
        if (ctx->pc != 0x172650u) { return; }
    }
    ctx->pc = 0x172650u;
    // 0x172650: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x172650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x172654: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x172654u;
    SET_GPR_U32(ctx, 31, 0x17265Cu);
    ctx->pc = 0x172658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172654u;
            // 0x172658: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17265Cu; }
        if (ctx->pc != 0x17265Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17265Cu; }
        if (ctx->pc != 0x17265Cu) { return; }
    }
    ctx->pc = 0x17265Cu;
    // 0x17265c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x17265Cu;
    SET_GPR_U32(ctx, 31, 0x172664u);
    ctx->pc = 0x172660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17265Cu;
            // 0x172660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172664u; }
        if (ctx->pc != 0x172664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172664u; }
        if (ctx->pc != 0x172664u) { return; }
    }
    ctx->pc = 0x172664u;
    // 0x172664: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x172664u;
    SET_GPR_U32(ctx, 31, 0x17266Cu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17266Cu; }
        if (ctx->pc != 0x17266Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17266Cu; }
        if (ctx->pc != 0x17266Cu) { return; }
    }
    ctx->pc = 0x17266Cu;
    // 0x17266c: 0x0  nop
    ctx->pc = 0x17266cu;
    // NOP
label_172670:
    // 0x172670: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x172670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172674: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x172674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x172678: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x172678u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17267c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17267cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172680: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x172680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17268c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17268cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172690: 0x3e00008  jr          $ra
    ctx->pc = 0x172690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172690u;
            // 0x172694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1725B0u: goto label_1725b0;
            case 0x1725E0u: goto label_1725e0;
            case 0x172610u: goto label_172610;
            case 0x172670u: goto label_172670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172698u;
}
