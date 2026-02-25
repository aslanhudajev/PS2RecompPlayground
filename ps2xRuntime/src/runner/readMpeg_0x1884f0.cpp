#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readMpeg
// Address: 0x1884f0 - 0x1886e4
void readMpeg_0x1884f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readMpeg_0x1884f0");
#endif

    ctx->pc = 0x1884f0u;

    // 0x1884f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1884f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1884f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1884f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1884f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1884f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1884fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1884fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x188500: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x188500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188504: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18850c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18850cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188514: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x188514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18851c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18851cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188524: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x188524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x188528: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x188528u;
    {
        const bool branch_taken_0x188528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188528u;
            // 0x18852c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188528) {
            ctx->pc = 0x188618u;
            goto label_188618;
        }
    }
    ctx->pc = 0x188530u;
label_188530:
    // 0x188530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188534: 0xc062380  jal         func_188E00
    ctx->pc = 0x188534u;
    SET_GPR_U32(ctx, 31, 0x18853Cu);
    ctx->pc = 0x188538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188534u;
            // 0x188538: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E00u;
    if (runtime->hasFunction(0x188E00u)) {
        auto targetFn = runtime->lookupFunction(0x188E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18853Cu; }
        if (ctx->pc != 0x18853Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginPut_0x188e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18853Cu; }
        if (ctx->pc != 0x18853Cu) { return; }
    }
    ctx->pc = 0x18853Cu;
    // 0x18853c: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x18853Cu;
    {
        const bool branch_taken_0x18853c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x188540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18853Cu;
            // 0x188540: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18853c) {
            ctx->pc = 0x188570u;
            goto label_188570;
        }
    }
    ctx->pc = 0x188544u;
    // 0x188544: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x188544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x188548: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188548u;
    {
        const bool branch_taken_0x188548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188548) {
            ctx->pc = 0x188570u;
            goto label_188570;
        }
    }
    ctx->pc = 0x188550u;
    // 0x188550: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x188550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x188554: 0xc0623a0  jal         func_188E80
    ctx->pc = 0x188554u;
    SET_GPR_U32(ctx, 31, 0x18855Cu);
    ctx->pc = 0x188558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188554u;
            // 0x188558: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188E80u;
    if (runtime->hasFunction(0x188E80u)) {
        auto targetFn = runtime->lookupFunction(0x188E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18855Cu; }
        if (ctx->pc != 0x18855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileRead_0x188e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18855Cu; }
        if (ctx->pc != 0x18855Cu) { return; }
    }
    ctx->pc = 0x18855Cu;
    // 0x18855c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18855cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188564: 0xc06235c  jal         func_188D70
    ctx->pc = 0x188564u;
    SET_GPR_U32(ctx, 31, 0x18856Cu);
    ctx->pc = 0x188568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188564u;
            // 0x188568: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188D70u;
    if (runtime->hasFunction(0x188D70u)) {
        auto targetFn = runtime->lookupFunction(0x188D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18856Cu; }
        if (ctx->pc != 0x18856Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndPut_0x188d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18856Cu; }
        if (ctx->pc != 0x18856Cu) { return; }
    }
    ctx->pc = 0x18856Cu;
    // 0x18856c: 0x2358823  subu        $s1, $s1, $s5
    ctx->pc = 0x18856cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_188570:
    // 0x188570: 0xc062138  jal         func_1884E0
    ctx->pc = 0x188570u;
    SET_GPR_U32(ctx, 31, 0x188578u);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188578u; }
        if (ctx->pc != 0x188578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188578u; }
        if (ctx->pc != 0x188578u) { return; }
    }
    ctx->pc = 0x188578u;
    // 0x188578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18857c: 0xc062344  jal         func_188D10
    ctx->pc = 0x18857Cu;
    SET_GPR_U32(ctx, 31, 0x188584u);
    ctx->pc = 0x188580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18857Cu;
            // 0x188580: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188D10u;
    if (runtime->hasFunction(0x188D10u)) {
        auto targetFn = runtime->lookupFunction(0x188D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188584u; }
        if (ctx->pc != 0x188584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginGet_0x188d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188584u; }
        if (ctx->pc != 0x188584u) { return; }
    }
    ctx->pc = 0x188584u;
    // 0x188584: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x188584u;
    {
        const bool branch_taken_0x188584 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x188588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188584u;
            // 0x188588: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188584) {
            ctx->pc = 0x1885C0u;
            goto label_1885c0;
        }
    }
    ctx->pc = 0x18858Cu;
    // 0x18858c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x18858cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x188590: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x188590u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x188594: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x188594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188598: 0x8c280008  lw          $t0, 0x8($at)
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x18859c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18859cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885a0: 0xc04a9d6  jal         func_12A758
    ctx->pc = 0x1885A0u;
    SET_GPR_U32(ctx, 31, 0x1885A8u);
    ctx->pc = 0x1885A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885A0u;
            // 0x1885a4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A758u;
    if (runtime->hasFunction(0x12A758u)) {
        auto targetFn = runtime->lookupFunction(0x12A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885A8u; }
        if (ctx->pc != 0x1885A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDemuxPssRing_0x12a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885A8u; }
        if (ctx->pc != 0x1885A8u) { return; }
    }
    ctx->pc = 0x1885A8u;
    // 0x1885a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1885a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1885acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1885b0: 0xc062330  jal         func_188CC0
    ctx->pc = 0x1885B0u;
    SET_GPR_U32(ctx, 31, 0x1885B8u);
    ctx->pc = 0x1885B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885B0u;
            // 0x1885b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188CC0u;
    if (runtime->hasFunction(0x188CC0u)) {
        auto targetFn = runtime->lookupFunction(0x188CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885B8u; }
        if (ctx->pc != 0x1885B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndGet_0x188cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885B8u; }
        if (ctx->pc != 0x1885B8u) { return; }
    }
    ctx->pc = 0x1885B8u;
    // 0x1885b8: 0x2158023  subu        $s0, $s0, $s5
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1885bc: 0x0  nop
    ctx->pc = 0x1885bcu;
    // NOP
label_1885c0:
    // 0x1885c0: 0xc062044  jal         func_188110
    ctx->pc = 0x1885C0u;
    SET_GPR_U32(ctx, 31, 0x1885C8u);
    ctx->pc = 0x188110u;
    if (runtime->hasFunction(0x188110u)) {
        auto targetFn = runtime->lookupFunction(0x188110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885C8u; }
        if (ctx->pc != 0x1885C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        proceedAudio_0x188110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885C8u; }
        if (ctx->pc != 0x1885C8u) { return; }
    }
    ctx->pc = 0x1885C8u;
    // 0x1885c8: 0x16800013  bnez        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x1885C8u;
    {
        const bool branch_taken_0x1885c8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885C8u;
            // 0x1885cc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885c8) {
            ctx->pc = 0x188618u;
            goto label_188618;
        }
    }
    ctx->pc = 0x1885D0u;
    // 0x1885d0: 0xc062b28  jal         func_18ACA0
    ctx->pc = 0x1885D0u;
    SET_GPR_U32(ctx, 31, 0x1885D8u);
    ctx->pc = 0x1885D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1885D0u;
            // 0x1885d4: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ACA0u;
    if (runtime->hasFunction(0x18ACA0u)) {
        auto targetFn = runtime->lookupFunction(0x18ACA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D8u; }
        if (ctx->pc != 0x1885D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x18aca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885D8u; }
        if (ctx->pc != 0x1885D8u) { return; }
    }
    ctx->pc = 0x1885D8u;
    // 0x1885d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1885D8u;
    {
        const bool branch_taken_0x1885d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885d8) {
            ctx->pc = 0x188618u;
            goto label_188618;
        }
    }
    ctx->pc = 0x1885E0u;
    // 0x1885e0: 0xc06212c  jal         func_1884B0
    ctx->pc = 0x1885E0u;
    SET_GPR_U32(ctx, 31, 0x1885E8u);
    ctx->pc = 0x1884B0u;
    if (runtime->hasFunction(0x1884B0u)) {
        auto targetFn = runtime->lookupFunction(0x1884B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885E8u; }
        if (ctx->pc != 0x1885E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isAudioOK_0x1884b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885E8u; }
        if (ctx->pc != 0x1885E8u) { return; }
    }
    ctx->pc = 0x1885E8u;
    // 0x1885e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1885E8u;
    {
        const bool branch_taken_0x1885e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1885E8u;
            // 0x1885ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885e8) {
            ctx->pc = 0x188618u;
            goto label_188618;
        }
    }
    ctx->pc = 0x1885F0u;
    // 0x1885f0: 0xc061e24  jal         func_187890
    ctx->pc = 0x1885F0u;
    SET_GPR_U32(ctx, 31, 0x1885F8u);
    ctx->pc = 0x187890u;
    if (runtime->hasFunction(0x187890u)) {
        auto targetFn = runtime->lookupFunction(0x187890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885F8u; }
        if (ctx->pc != 0x1885F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        startDisplay_0x187890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1885F8u; }
        if (ctx->pc != 0x1885F8u) { return; }
    }
    ctx->pc = 0x1885F8u;
    // 0x1885f8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1885fc: 0x8c22a4c0  lw          $v0, -0x5B40($at)
    ctx->pc = 0x1885fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943936)));
    // 0x188600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188600u;
    {
        const bool branch_taken_0x188600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188600u;
            // 0x188604: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188600) {
            ctx->pc = 0x188610u;
            goto label_188610;
        }
    }
    ctx->pc = 0x188608u;
    // 0x188608: 0xc061d84  jal         func_187610
    ctx->pc = 0x188608u;
    SET_GPR_U32(ctx, 31, 0x188610u);
    ctx->pc = 0x18860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188608u;
            // 0x18860c: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187610u;
    if (runtime->hasFunction(0x187610u)) {
        auto targetFn = runtime->lookupFunction(0x187610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188610u; }
        if (ctx->pc != 0x188610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecStart_0x187610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188610u; }
        if (ctx->pc != 0x188610u) { return; }
    }
    ctx->pc = 0x188610u;
label_188610:
    // 0x188610: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188614: 0x0  nop
    ctx->pc = 0x188614u;
    // NOP
label_188618:
    // 0x188618: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x18861c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x18861Cu;
    {
        const bool branch_taken_0x18861c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x188620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18861Cu;
            // 0x188620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18861c) {
            ctx->pc = 0x188648u;
            goto label_188648;
        }
    }
    ctx->pc = 0x188624u;
    // 0x188624: 0xc062a54  jal         func_18A950
    ctx->pc = 0x188624u;
    SET_GPR_U32(ctx, 31, 0x18862Cu);
    ctx->pc = 0x18A950u;
    if (runtime->hasFunction(0x18A950u)) {
        auto targetFn = runtime->lookupFunction(0x18A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18862Cu; }
        if (ctx->pc != 0x18862Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x18a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18862Cu; }
        if (ctx->pc != 0x18862Cu) { return; }
    }
    ctx->pc = 0x18862Cu;
    // 0x18862c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188630: 0x1443ffbf  bne         $v0, $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x188630u;
    {
        const bool branch_taken_0x188630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x188630) {
            ctx->pc = 0x188530u;
            goto label_188530;
        }
    }
    ctx->pc = 0x188638u;
    // 0x188638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188638u;
    {
        const bool branch_taken_0x188638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188638) {
            ctx->pc = 0x188648u;
            goto label_188648;
        }
    }
    ctx->pc = 0x188640u;
label_188640:
    // 0x188640: 0xc062138  jal         func_1884E0
    ctx->pc = 0x188640u;
    SET_GPR_U32(ctx, 31, 0x188648u);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188648u; }
        if (ctx->pc != 0x188648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188648u; }
        if (ctx->pc != 0x188648u) { return; }
    }
    ctx->pc = 0x188648u;
label_188648:
    // 0x188648: 0xc062a04  jal         func_18A810
    ctx->pc = 0x188648u;
    SET_GPR_U32(ctx, 31, 0x188650u);
    ctx->pc = 0x18864Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188648u;
            // 0x18864c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A810u;
    if (runtime->hasFunction(0x18A810u)) {
        auto targetFn = runtime->lookupFunction(0x18A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188650u; }
        if (ctx->pc != 0x188650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecFlush_0x18a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188650u; }
        if (ctx->pc != 0x188650u) { return; }
    }
    ctx->pc = 0x188650u;
    // 0x188650: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x188650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x188654: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x188654u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x188658: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x188658u;
    {
        const bool branch_taken_0x188658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188658) {
            ctx->pc = 0x188640u;
            goto label_188640;
        }
    }
    ctx->pc = 0x188660u;
    // 0x188660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188660u;
    {
        const bool branch_taken_0x188660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188660) {
            ctx->pc = 0x188670u;
            goto label_188670;
        }
    }
    ctx->pc = 0x188668u;
label_188668:
    // 0x188668: 0xc062138  jal         func_1884E0
    ctx->pc = 0x188668u;
    SET_GPR_U32(ctx, 31, 0x188670u);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188670u; }
        if (ctx->pc != 0x188670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188670u; }
        if (ctx->pc != 0x188670u) { return; }
    }
    ctx->pc = 0x188670u;
label_188670:
    // 0x188670: 0xc062a54  jal         func_18A950
    ctx->pc = 0x188670u;
    SET_GPR_U32(ctx, 31, 0x188678u);
    ctx->pc = 0x188674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188670u;
            // 0x188674: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A950u;
    if (runtime->hasFunction(0x18A950u)) {
        auto targetFn = runtime->lookupFunction(0x18A950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188678u; }
        if (ctx->pc != 0x188678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecGetState_0x18a950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188678u; }
        if (ctx->pc != 0x188678u) { return; }
    }
    ctx->pc = 0x188678u;
    // 0x188678: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18867c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18867Cu;
    {
        const bool branch_taken_0x18867c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x188680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18867Cu;
            // 0x188680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18867c) {
            ctx->pc = 0x188698u;
            goto label_188698;
        }
    }
    ctx->pc = 0x188684u;
    // 0x188684: 0xc0629f4  jal         func_18A7D0
    ctx->pc = 0x188684u;
    SET_GPR_U32(ctx, 31, 0x18868Cu);
    ctx->pc = 0x18A7D0u;
    if (runtime->hasFunction(0x18A7D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18868Cu; }
        if (ctx->pc != 0x18868Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecIsFlushed_0x18a7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18868Cu; }
        if (ctx->pc != 0x18868Cu) { return; }
    }
    ctx->pc = 0x18868Cu;
    // 0x18868c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18868Cu;
    {
        const bool branch_taken_0x18868c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18868c) {
            ctx->pc = 0x188668u;
            goto label_188668;
        }
    }
    ctx->pc = 0x188694u;
    // 0x188694: 0x0  nop
    ctx->pc = 0x188694u;
    // NOP
label_188698:
    // 0x188698: 0xc061e1c  jal         func_187870
    ctx->pc = 0x188698u;
    SET_GPR_U32(ctx, 31, 0x1886A0u);
    ctx->pc = 0x187870u;
    if (runtime->hasFunction(0x187870u)) {
        auto targetFn = runtime->lookupFunction(0x187870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886A0u; }
        if (ctx->pc != 0x1886A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        endDisplay_0x187870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886A0u; }
        if (ctx->pc != 0x1886A0u) { return; }
    }
    ctx->pc = 0x1886A0u;
    // 0x1886a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1886a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1886a4: 0x8c22a4c0  lw          $v0, -0x5B40($at)
    ctx->pc = 0x1886a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943936)));
    // 0x1886a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1886A8u;
    {
        const bool branch_taken_0x1886a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886A8u;
            // 0x1886ac: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886a8) {
            ctx->pc = 0x1886B8u;
            goto label_1886b8;
        }
    }
    ctx->pc = 0x1886B0u;
    // 0x1886b0: 0xc061d70  jal         func_1875C0
    ctx->pc = 0x1886B0u;
    SET_GPR_U32(ctx, 31, 0x1886B8u);
    ctx->pc = 0x1886B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1886B0u;
            // 0x1886b4: 0x2484fda0  addiu       $a0, $a0, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1875C0u;
    if (runtime->hasFunction(0x1875C0u)) {
        auto targetFn = runtime->lookupFunction(0x1875C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886B8u; }
        if (ctx->pc != 0x1886B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecReset_0x1875c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1886B8u; }
        if (ctx->pc != 0x1886B8u) { return; }
    }
    ctx->pc = 0x1886B8u;
label_1886b8:
    // 0x1886b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1886b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1886bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1886bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1886c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1886c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1886c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1886c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1886c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1886c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1886cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1886ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1886d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1886d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1886d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1886d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1886d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1886d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1886dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1886DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886DCu;
            // 0x1886e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188530u: goto label_188530;
            case 0x188570u: goto label_188570;
            case 0x1885C0u: goto label_1885c0;
            case 0x188610u: goto label_188610;
            case 0x188618u: goto label_188618;
            case 0x188640u: goto label_188640;
            case 0x188648u: goto label_188648;
            case 0x188668u: goto label_188668;
            case 0x188670u: goto label_188670;
            case 0x188698u: goto label_188698;
            case 0x1886B8u: goto label_1886b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1886E4u;
}
