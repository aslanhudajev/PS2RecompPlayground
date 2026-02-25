#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRomLoad
// Address: 0x141330 - 0x141494
void wrsRomLoad_0x141330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRomLoad_0x141330");
#endif

    ctx->pc = 0x141330u;

    // 0x141330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x141334: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x141334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x141338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x141338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14133c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x141340: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x141340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x141344: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x141344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14134c: 0x24632304  addiu       $v1, $v1, 0x2304
    ctx->pc = 0x14134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8964));
    // 0x141350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x141350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x141354: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x141358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14135c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x14135cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x141360: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x141364: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141368: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x141368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x14136c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x141370: 0x244222c0  addiu       $v0, $v0, 0x22C0
    ctx->pc = 0x141370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8896));
    // 0x141374: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x141374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141378: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14137c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x14137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x141380: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x141380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141384: 0x292c0  sll         $s2, $v0, 11
    ctx->pc = 0x141384u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x141388: 0xc050788  jal         func_141E20
    ctx->pc = 0x141388u;
    SET_GPR_U32(ctx, 31, 0x141390u);
    ctx->pc = 0x14138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141388u;
            // 0x14138c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E20u;
    if (runtime->hasFunction(0x141E20u)) {
        auto targetFn = runtime->lookupFunction(0x141E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141390u; }
        if (ctx->pc != 0x141390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMalloc_0x141e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141390u; }
        if (ctx->pc != 0x141390u) { return; }
    }
    ctx->pc = 0x141390u;
    // 0x141390: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x141390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x141394: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x141394u;
    {
        const bool branch_taken_0x141394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141394u;
            // 0x141398: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141394) {
            ctx->pc = 0x1413C0u;
            goto label_1413c0;
        }
    }
    ctx->pc = 0x14139Cu;
    // 0x14139c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413a0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1413A0u;
    SET_GPR_U32(ctx, 31, 0x1413A8u);
    ctx->pc = 0x1413A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1413A0u;
            // 0x1413a4: 0x24840340  addiu       $a0, $a0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413A8u; }
        if (ctx->pc != 0x1413A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413A8u; }
        if (ctx->pc != 0x1413A8u) { return; }
    }
    ctx->pc = 0x1413A8u;
    // 0x1413a8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1413ac: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1413b0: 0x24840370  addiu       $a0, $a0, 0x370
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    // 0x1413b4: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x1413b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1413b8: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1413B8u;
    SET_GPR_U32(ctx, 31, 0x1413C0u);
    ctx->pc = 0x1413BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1413B8u;
            // 0x1413bc: 0x24c60380  addiu       $a2, $a2, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413C0u; }
        if (ctx->pc != 0x1413C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413C0u; }
        if (ctx->pc != 0x1413C0u) { return; }
    }
    ctx->pc = 0x1413C0u;
label_1413c0:
    // 0x1413c0: 0x26320044  addiu       $s2, $s1, 0x44
    ctx->pc = 0x1413c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x1413c4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1413c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1413c8:
    // 0x1413c8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1413c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1413cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1413ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1413d0: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1413d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1413d4: 0x8c227860  lw          $v0, 0x7860($at)
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30816)));
    // 0x1413d8: 0x24e794a8  addiu       $a3, $a3, -0x6B58
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939816));
    // 0x1413dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1413dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1413e0: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x1413e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1413e4: 0xc0412fc  jal         func_104BF0
    ctx->pc = 0x1413E4u;
    SET_GPR_U32(ctx, 31, 0x1413ECu);
    ctx->pc = 0x1413E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1413E4u;
            // 0x1413e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104BF0u;
    if (runtime->hasFunction(0x104BF0u)) {
        auto targetFn = runtime->lookupFunction(0x104BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413ECu; }
        if (ctx->pc != 0x1413ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdRead_0x104bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1413ECu; }
        if (ctx->pc != 0x1413ECu) { return; }
    }
    ctx->pc = 0x1413ECu;
    // 0x1413ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1413ECu;
    {
        const bool branch_taken_0x1413ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1413ec) {
            ctx->pc = 0x141428u;
            goto label_141428;
        }
    }
    ctx->pc = 0x1413F4u;
    // 0x1413f4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1413F4u;
    {
        const bool branch_taken_0x1413f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1413f4) {
            ctx->pc = 0x1413C8u;
            goto label_1413c8;
        }
    }
    ctx->pc = 0x1413FCu;
    // 0x1413fc: 0x0  nop
    ctx->pc = 0x1413fcu;
    // NOP
label_141400:
    // 0x141400: 0xc0413a0  jal         func_104E80
    ctx->pc = 0x141400u;
    SET_GPR_U32(ctx, 31, 0x141408u);
    ctx->pc = 0x104E80u;
    if (runtime->hasFunction(0x104E80u)) {
        auto targetFn = runtime->lookupFunction(0x104E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141408u; }
        if (ctx->pc != 0x141408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x104e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141408u; }
        if (ctx->pc != 0x141408u) { return; }
    }
    ctx->pc = 0x141408u;
    // 0x141408: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141408u;
    {
        const bool branch_taken_0x141408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141408) {
            ctx->pc = 0x141428u;
            goto label_141428;
        }
    }
    ctx->pc = 0x141410u;
    // 0x141410: 0xc0413c6  jal         func_104F18
    ctx->pc = 0x141410u;
    SET_GPR_U32(ctx, 31, 0x141418u);
    ctx->pc = 0x104F18u;
    if (runtime->hasFunction(0x104F18u)) {
        auto targetFn = runtime->lookupFunction(0x104F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141418u; }
        if (ctx->pc != 0x141418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdBreak_0x104f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141418u; }
        if (ctx->pc != 0x141418u) { return; }
    }
    ctx->pc = 0x141418u;
    // 0x141418: 0xc041078  jal         func_1041E0
    ctx->pc = 0x141418u;
    SET_GPR_U32(ctx, 31, 0x141420u);
    ctx->pc = 0x14141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141418u;
            // 0x14141c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E0u;
    if (runtime->hasFunction(0x1041E0u)) {
        auto targetFn = runtime->lookupFunction(0x1041E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141420u; }
        if (ctx->pc != 0x141420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x1041e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141420u; }
        if (ctx->pc != 0x141420u) { return; }
    }
    ctx->pc = 0x141420u;
    // 0x141420: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x141420u;
    SET_GPR_U32(ctx, 31, 0x141428u);
    ctx->pc = 0x141424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141420u;
            // 0x141424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141428u; }
        if (ctx->pc != 0x141428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141428u; }
        if (ctx->pc != 0x141428u) { return; }
    }
    ctx->pc = 0x141428u;
label_141428:
    // 0x141428: 0xc041078  jal         func_1041E0
    ctx->pc = 0x141428u;
    SET_GPR_U32(ctx, 31, 0x141430u);
    ctx->pc = 0x14142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141428u;
            // 0x14142c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E0u;
    if (runtime->hasFunction(0x1041E0u)) {
        auto targetFn = runtime->lookupFunction(0x1041E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141430u; }
        if (ctx->pc != 0x141430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x1041e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141430u; }
        if (ctx->pc != 0x141430u) { return; }
    }
    ctx->pc = 0x141430u;
    // 0x141430: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x141430u;
    {
        const bool branch_taken_0x141430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141430) {
            ctx->pc = 0x141400u;
            goto label_141400;
        }
    }
    ctx->pc = 0x141438u;
    // 0x141438: 0xc0413a0  jal         func_104E80
    ctx->pc = 0x141438u;
    SET_GPR_U32(ctx, 31, 0x141440u);
    ctx->pc = 0x104E80u;
    if (runtime->hasFunction(0x104E80u)) {
        auto targetFn = runtime->lookupFunction(0x104E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141440u; }
        if (ctx->pc != 0x141440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdGetError_0x104e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141440u; }
        if (ctx->pc != 0x141440u) { return; }
    }
    ctx->pc = 0x141440u;
    // 0x141440: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x141440u;
    {
        const bool branch_taken_0x141440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141440) {
            ctx->pc = 0x141478u;
            goto label_141478;
        }
    }
    ctx->pc = 0x141448u;
    // 0x141448: 0xc0413c6  jal         func_104F18
    ctx->pc = 0x141448u;
    SET_GPR_U32(ctx, 31, 0x141450u);
    ctx->pc = 0x104F18u;
    if (runtime->hasFunction(0x104F18u)) {
        auto targetFn = runtime->lookupFunction(0x104F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141450u; }
        if (ctx->pc != 0x141450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdBreak_0x104f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141450u; }
        if (ctx->pc != 0x141450u) { return; }
    }
    ctx->pc = 0x141450u;
    // 0x141450: 0xc041078  jal         func_1041E0
    ctx->pc = 0x141450u;
    SET_GPR_U32(ctx, 31, 0x141458u);
    ctx->pc = 0x141454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141450u;
            // 0x141454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1041E0u;
    if (runtime->hasFunction(0x1041E0u)) {
        auto targetFn = runtime->lookupFunction(0x1041E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141458u; }
        if (ctx->pc != 0x141458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x1041e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141458u; }
        if (ctx->pc != 0x141458u) { return; }
    }
    ctx->pc = 0x141458u;
    // 0x141458: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x141458u;
    SET_GPR_U32(ctx, 31, 0x141460u);
    ctx->pc = 0x14145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141458u;
            // 0x14145c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141460u; }
        if (ctx->pc != 0x141460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141460u; }
        if (ctx->pc != 0x141460u) { return; }
    }
    ctx->pc = 0x141460u;
    // 0x141460: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x141460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141468: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x141468u;
    SET_GPR_U32(ctx, 31, 0x141470u);
    ctx->pc = 0x14146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141468u;
            // 0x14146c: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141470u; }
        if (ctx->pc != 0x141470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141470u; }
        if (ctx->pc != 0x141470u) { return; }
    }
    ctx->pc = 0x141470u;
    // 0x141470: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x141470u;
    {
        const bool branch_taken_0x141470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141470) {
            ctx->pc = 0x1413C8u;
            goto label_1413c8;
        }
    }
    ctx->pc = 0x141478u;
label_141478:
    // 0x141478: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x14147c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14147cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x141480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14148c: 0x3e00008  jr          $ra
    ctx->pc = 0x14148Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14148Cu;
            // 0x141490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1413C0u: goto label_1413c0;
            case 0x1413C8u: goto label_1413c8;
            case 0x141400u: goto label_141400;
            case 0x141428u: goto label_141428;
            case 0x141478u: goto label_141478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141494u;
}
