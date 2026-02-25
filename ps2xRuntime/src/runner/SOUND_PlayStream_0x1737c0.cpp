#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_PlayStream
// Address: 0x1737c0 - 0x1739c4
void SOUND_PlayStream_0x1737c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_PlayStream_0x1737c0");
#endif

    ctx->pc = 0x1737c0u;

    // 0x1737c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1737c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1737c4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1737c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1737c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1737c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1737cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1737ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1737d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1737d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1737d4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1737d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1737d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1737dc: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1737dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1737e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1737e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1737e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1737e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1737ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1737ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1737f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1737f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1737f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1737f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1737f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1737fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1737fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173804: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x173804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173808: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173808u;
    {
        const bool branch_taken_0x173808 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173808u;
            // 0x17380c: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173808) {
            ctx->pc = 0x173820u;
            goto label_173820;
        }
    }
    ctx->pc = 0x173810u;
    // 0x173810: 0xc05cdcc  jal         func_173730
    ctx->pc = 0x173810u;
    SET_GPR_U32(ctx, 31, 0x173818u);
    ctx->pc = 0x173730u;
    if (runtime->hasFunction(0x173730u)) {
        auto targetFn = runtime->lookupFunction(0x173730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173818u; }
        if (ctx->pc != 0x173818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_FindFreeStream_0x173730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173818u; }
        if (ctx->pc != 0x173818u) { return; }
    }
    ctx->pc = 0x173818u;
    // 0x173818: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x173818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17381c: 0x0  nop
    ctx->pc = 0x17381cu;
    // NOP
label_173820:
    // 0x173820: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x173820u;
    {
        const bool branch_taken_0x173820 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x173824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173820u;
            // 0x173824: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173820) {
            ctx->pc = 0x173848u;
            goto label_173848;
        }
    }
    ctx->pc = 0x173828u;
    // 0x173828: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173828u;
    SET_GPR_U32(ctx, 31, 0x173830u);
    ctx->pc = 0x17382Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173828u;
            // 0x17382c: 0x24841770  addiu       $a0, $a0, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173830u; }
        if (ctx->pc != 0x173830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173830u; }
        if (ctx->pc != 0x173830u) { return; }
    }
    ctx->pc = 0x173830u;
    // 0x173830: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173834: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173834u;
    SET_GPR_U32(ctx, 31, 0x17383Cu);
    ctx->pc = 0x173838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173834u;
            // 0x173838: 0x24841790  addiu       $a0, $a0, 0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17383Cu; }
        if (ctx->pc != 0x17383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17383Cu; }
        if (ctx->pc != 0x17383Cu) { return; }
    }
    ctx->pc = 0x17383Cu;
    // 0x17383c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x17383Cu;
    {
        const bool branch_taken_0x17383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17383Cu;
            // 0x173840: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17383c) {
            ctx->pc = 0x173998u;
            goto label_173998;
        }
    }
    ctx->pc = 0x173844u;
    // 0x173844: 0x0  nop
    ctx->pc = 0x173844u;
    // NOP
label_173848:
    // 0x173848: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17384c: 0x8c220a68  lw          $v0, 0xA68($at)
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x173850: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x173850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173854: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x173854u;
    {
        const bool branch_taken_0x173854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173854u;
            // 0x173858: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173854) {
            ctx->pc = 0x173888u;
            goto label_173888;
        }
    }
    ctx->pc = 0x17385Cu;
    // 0x17385c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17385Cu;
    SET_GPR_U32(ctx, 31, 0x173864u);
    ctx->pc = 0x173860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17385Cu;
            // 0x173860: 0x248417b0  addiu       $a0, $a0, 0x17B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173864u; }
        if (ctx->pc != 0x173864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173864u; }
        if (ctx->pc != 0x173864u) { return; }
    }
    ctx->pc = 0x173864u;
    // 0x173864: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173868: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x173868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17386c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17386Cu;
    SET_GPR_U32(ctx, 31, 0x173874u);
    ctx->pc = 0x173870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17386Cu;
            // 0x173870: 0x24841480  addiu       $a0, $a0, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173874u; }
        if (ctx->pc != 0x173874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173874u; }
        if (ctx->pc != 0x173874u) { return; }
    }
    ctx->pc = 0x173874u;
    // 0x173874: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173878: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173878u;
    SET_GPR_U32(ctx, 31, 0x173880u);
    ctx->pc = 0x17387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173878u;
            // 0x17387c: 0x248414a0  addiu       $a0, $a0, 0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173880u; }
        if (ctx->pc != 0x173880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173880u; }
        if (ctx->pc != 0x173880u) { return; }
    }
    ctx->pc = 0x173880u;
    // 0x173880: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x173880u;
    {
        const bool branch_taken_0x173880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173880u;
            // 0x173884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173880) {
            ctx->pc = 0x173998u;
            goto label_173998;
        }
    }
    ctx->pc = 0x173888u;
label_173888:
    // 0x173888: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17388c: 0x24630e90  addiu       $v1, $v1, 0xE90
    ctx->pc = 0x17388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3728));
    // 0x173890: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x173894: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x173898: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17389c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x17389cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1738a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1738a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1738a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1738a8: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1738A8u;
    {
        const bool branch_taken_0x1738a8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1738ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738A8u;
            // 0x1738ac: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738a8) {
            ctx->pc = 0x1738C0u;
            goto label_1738c0;
        }
    }
    ctx->pc = 0x1738B0u;
    // 0x1738b0: 0x2a610030  slti        $at, $s3, 0x30
    ctx->pc = 0x1738b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1738b4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1738B4u;
    {
        const bool branch_taken_0x1738b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1738b4) {
            ctx->pc = 0x1738C8u;
            goto label_1738c8;
        }
    }
    ctx->pc = 0x1738BCu;
    // 0x1738bc: 0x0  nop
    ctx->pc = 0x1738bcu;
    // NOP
label_1738c0:
    // 0x1738c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1738C0u;
    {
        const bool branch_taken_0x1738c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1738C0u;
            // 0x1738c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738c0) {
            ctx->pc = 0x173998u;
            goto label_173998;
        }
    }
    ctx->pc = 0x1738C8u;
label_1738c8:
    // 0x1738c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1738c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1738cc: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1738CCu;
    {
        const bool branch_taken_0x1738cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1738cc) {
            ctx->pc = 0x1738E0u;
            goto label_1738e0;
        }
    }
    ctx->pc = 0x1738D4u;
    // 0x1738d4: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1738D4u;
    {
        const bool branch_taken_0x1738d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1738d4) {
            ctx->pc = 0x173908u;
            goto label_173908;
        }
    }
    ctx->pc = 0x1738DCu;
    // 0x1738dc: 0x0  nop
    ctx->pc = 0x1738dcu;
    // NOP
label_1738e0:
    // 0x1738e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1738e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1738e4: 0x2442a020  addiu       $v0, $v0, -0x5FE0
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942752));
    // 0x1738e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1738e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1738ec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1738ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1738f0: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x1738f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x1738f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1738f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1738f8: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x1738f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1738fc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x173900: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173900u;
    {
        const bool branch_taken_0x173900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173900u;
            // 0x173904: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173900) {
            ctx->pc = 0x173918u;
            goto label_173918;
        }
    }
    ctx->pc = 0x173908u;
label_173908:
    // 0x173908: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x173908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17390c: 0x2442a020  addiu       $v0, $v0, -0x5FE0
    ctx->pc = 0x17390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942752));
    // 0x173910: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x173914: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x173914u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
label_173918:
    // 0x173918: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x173918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17391c: 0x141200  sll         $v0, $s4, 8
    ctx->pc = 0x17391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x173920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173924: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x173924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x173928: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x173928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x17392c: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x17392Cu;
    SET_GPR_U32(ctx, 31, 0x173934u);
    ctx->pc = 0x173930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17392Cu;
            // 0x173930: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173934u; }
        if (ctx->pc != 0x173934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173934u; }
        if (ctx->pc != 0x173934u) { return; }
    }
    ctx->pc = 0x173934u;
    // 0x173934: 0x15243c  dsll32      $a0, $s5, 16
    ctx->pc = 0x173934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 16));
    // 0x173938: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173938u;
    SET_GPR_U32(ctx, 31, 0x173940u);
    ctx->pc = 0x17393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173938u;
            // 0x17393c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173940u; }
        if (ctx->pc != 0x173940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173940u; }
        if (ctx->pc != 0x173940u) { return; }
    }
    ctx->pc = 0x173940u;
    // 0x173940: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x173944: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173944u;
    SET_GPR_U32(ctx, 31, 0x17394Cu);
    ctx->pc = 0x173948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173944u;
            // 0x173948: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17394Cu; }
        if (ctx->pc != 0x17394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17394Cu; }
        if (ctx->pc != 0x17394Cu) { return; }
    }
    ctx->pc = 0x17394Cu;
    // 0x17394c: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x17394cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x173950: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173950u;
    SET_GPR_U32(ctx, 31, 0x173958u);
    ctx->pc = 0x173954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173950u;
            // 0x173954: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173958u; }
        if (ctx->pc != 0x173958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173958u; }
        if (ctx->pc != 0x173958u) { return; }
    }
    ctx->pc = 0x173958u;
    // 0x173958: 0x16243c  dsll32      $a0, $s6, 16
    ctx->pc = 0x173958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 16));
    // 0x17395c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17395Cu;
    SET_GPR_U32(ctx, 31, 0x173964u);
    ctx->pc = 0x173960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17395Cu;
            // 0x173960: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173964u; }
        if (ctx->pc != 0x173964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173964u; }
        if (ctx->pc != 0x173964u) { return; }
    }
    ctx->pc = 0x173964u;
    // 0x173964: 0x17243c  dsll32      $a0, $s7, 16
    ctx->pc = 0x173964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 16));
    // 0x173968: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173968u;
    SET_GPR_U32(ctx, 31, 0x173970u);
    ctx->pc = 0x17396Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173968u;
            // 0x17396c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173970u; }
        if (ctx->pc != 0x173970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173970u; }
        if (ctx->pc != 0x173970u) { return; }
    }
    ctx->pc = 0x173970u;
    // 0x173970: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x173970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x173974: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173974u;
    SET_GPR_U32(ctx, 31, 0x17397Cu);
    ctx->pc = 0x173978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173974u;
            // 0x173978: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17397Cu; }
        if (ctx->pc != 0x17397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17397Cu; }
        if (ctx->pc != 0x17397Cu) { return; }
    }
    ctx->pc = 0x17397Cu;
    // 0x17397c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17397cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x173980: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x173980u;
    SET_GPR_U32(ctx, 31, 0x173988u);
    ctx->pc = 0x173984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173980u;
            // 0x173984: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173988u; }
        if (ctx->pc != 0x173988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173988u; }
        if (ctx->pc != 0x173988u) { return; }
    }
    ctx->pc = 0x173988u;
    // 0x173988: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x173988u;
    SET_GPR_U32(ctx, 31, 0x173990u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173990u; }
        if (ctx->pc != 0x173990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173990u; }
        if (ctx->pc != 0x173990u) { return; }
    }
    ctx->pc = 0x173990u;
    // 0x173990: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x173990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173994: 0x0  nop
    ctx->pc = 0x173994u;
    // NOP
label_173998:
    // 0x173998: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x173998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17399c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17399cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1739a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1739a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1739a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1739a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1739a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1739a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1739ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1739acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1739b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1739b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1739b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1739b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1739b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1739b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1739bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1739BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1739BCu;
            // 0x1739c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173820u: goto label_173820;
            case 0x173848u: goto label_173848;
            case 0x173888u: goto label_173888;
            case 0x1738C0u: goto label_1738c0;
            case 0x1738C8u: goto label_1738c8;
            case 0x1738E0u: goto label_1738e0;
            case 0x173908u: goto label_173908;
            case 0x173918u: goto label_173918;
            case 0x173998u: goto label_173998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1739C4u;
}
