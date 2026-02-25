#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage1mapGenerate
// Address: 0x147830 - 0x147a44
void stage1mapGenerate_0x147830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage1mapGenerate_0x147830");
#endif

    ctx->pc = 0x147830u;

    // 0x147830: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x147830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x147834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x147834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x147838: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14783c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147840: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147844: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x147848: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x147848u;
    SET_GPR_U32(ctx, 31, 0x147850u);
    ctx->pc = 0x14784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147848u;
            // 0x14784c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147850u; }
        if (ctx->pc != 0x147850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147850u; }
        if (ctx->pc != 0x147850u) { return; }
    }
    ctx->pc = 0x147850u;
    // 0x147850: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x147850u;
    SET_GPR_U32(ctx, 31, 0x147858u);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147858u; }
        if (ctx->pc != 0x147858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147858u; }
        if (ctx->pc != 0x147858u) { return; }
    }
    ctx->pc = 0x147858u;
    // 0x147858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14785c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147860: 0x16230015  bne         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x147860u;
    {
        const bool branch_taken_0x147860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x147864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147860u;
            // 0x147864: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147860) {
            ctx->pc = 0x1478B8u;
            goto label_1478b8;
        }
    }
    ctx->pc = 0x147868u;
    // 0x147868: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x147868u;
    SET_GPR_U32(ctx, 31, 0x147870u);
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147870u; }
        if (ctx->pc != 0x147870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147870u; }
        if (ctx->pc != 0x147870u) { return; }
    }
    ctx->pc = 0x147870u;
    // 0x147870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147874: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x147874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x147878: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x147878u;
    SET_GPR_U32(ctx, 31, 0x147880u);
    ctx->pc = 0x14787Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147878u;
            // 0x14787c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147880u; }
        if (ctx->pc != 0x147880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147880u; }
        if (ctx->pc != 0x147880u) { return; }
    }
    ctx->pc = 0x147880u;
    // 0x147880: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x147880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x147884: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x147884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x147888: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14788c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x147890: 0x24e78070  addiu       $a3, $a3, -0x7F90
    ctx->pc = 0x147890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934640));
    // 0x147894: 0xc0520cc  jal         func_148330
    ctx->pc = 0x147894u;
    SET_GPR_U32(ctx, 31, 0x14789Cu);
    ctx->pc = 0x147898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147894u;
            // 0x147898: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14789Cu; }
        if (ctx->pc != 0x14789Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14789Cu; }
        if (ctx->pc != 0x14789Cu) { return; }
    }
    ctx->pc = 0x14789Cu;
    // 0x14789c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14789cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x1478a0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1478a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1478a4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1478a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1478a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1478ac: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1478ACu;
    SET_GPR_U32(ctx, 31, 0x1478B4u);
    ctx->pc = 0x1478B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1478ACu;
            // 0x1478b0: 0x24e78070  addiu       $a3, $a3, -0x7F90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294934640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478B4u; }
        if (ctx->pc != 0x1478B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478B4u; }
        if (ctx->pc != 0x1478B4u) { return; }
    }
    ctx->pc = 0x1478B4u;
    // 0x1478b4: 0x0  nop
    ctx->pc = 0x1478b4u;
    // NOP
label_1478b8:
    // 0x1478b8: 0x2a210bb8  slti        $at, $s1, 0xBB8
    ctx->pc = 0x1478b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x1478bc: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1478BCu;
    {
        const bool branch_taken_0x1478bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478BCu;
            // 0x1478c0: 0x27b00034  addiu       $s0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478bc) {
            ctx->pc = 0x1479E0u;
            goto label_1479e0;
        }
    }
    ctx->pc = 0x1478C4u;
    // 0x1478c4: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1478c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1478c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1478cc: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1478ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1478d0: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x1478d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1478d4: 0x0  nop
    ctx->pc = 0x1478d4u;
    // NOP
    // 0x1478d8: 0x0  nop
    ctx->pc = 0x1478d8u;
    // NOP
    // 0x1478dc: 0x1810  mfhi        $v1
    ctx->pc = 0x1478dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1478e0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1478E0u;
    {
        const bool branch_taken_0x1478e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1478E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478E0u;
            // 0x1478e4: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478e0) {
            ctx->pc = 0x147948u;
            goto label_147948;
        }
    }
    ctx->pc = 0x1478E8u;
    // 0x1478e8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1478e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1478ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1478ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1478f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1478f4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1478F4u;
    SET_GPR_U32(ctx, 31, 0x1478FCu);
    ctx->pc = 0x1478F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1478F4u;
            // 0x1478f8: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478FCu; }
        if (ctx->pc != 0x1478FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478FCu; }
        if (ctx->pc != 0x1478FCu) { return; }
    }
    ctx->pc = 0x1478FCu;
    // 0x1478fc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1478fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x147900: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x147900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x147904: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147908: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14790c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14790Cu;
    SET_GPR_U32(ctx, 31, 0x147914u);
    ctx->pc = 0x147910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14790Cu;
            // 0x147910: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147914u; }
        if (ctx->pc != 0x147914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147914u; }
        if (ctx->pc != 0x147914u) { return; }
    }
    ctx->pc = 0x147914u;
    // 0x147914: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x147914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x147918: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x147918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14791c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147920: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x147924: 0xc0520cc  jal         func_148330
    ctx->pc = 0x147924u;
    SET_GPR_U32(ctx, 31, 0x14792Cu);
    ctx->pc = 0x147928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147924u;
            // 0x147928: 0x24e77db0  addiu       $a3, $a3, 0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14792Cu; }
        if (ctx->pc != 0x14792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14792Cu; }
        if (ctx->pc != 0x14792Cu) { return; }
    }
    ctx->pc = 0x14792Cu;
    // 0x14792c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14792cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x147930: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x147930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x147934: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147938: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14793c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14793Cu;
    SET_GPR_U32(ctx, 31, 0x147944u);
    ctx->pc = 0x147940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14793Cu;
            // 0x147940: 0x24e77db0  addiu       $a3, $a3, 0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147944u; }
        if (ctx->pc != 0x147944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147944u; }
        if (ctx->pc != 0x147944u) { return; }
    }
    ctx->pc = 0x147944u;
    // 0x147944: 0x0  nop
    ctx->pc = 0x147944u;
    // NOP
label_147948:
    // 0x147948: 0x24030af0  addiu       $v1, $zero, 0xAF0
    ctx->pc = 0x147948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2800));
    // 0x14794c: 0x1623000a  bne         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14794Cu;
    {
        const bool branch_taken_0x14794c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14794c) {
            ctx->pc = 0x147978u;
            goto label_147978;
        }
    }
    ctx->pc = 0x147954u;
    // 0x147954: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x147954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x147958: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x147958u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14795c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x147960: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x147960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x147964: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147968: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14796c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14796Cu;
    SET_GPR_U32(ctx, 31, 0x147974u);
    ctx->pc = 0x147970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14796Cu;
            // 0x147970: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147974u; }
        if (ctx->pc != 0x147974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147974u; }
        if (ctx->pc != 0x147974u) { return; }
    }
    ctx->pc = 0x147974u;
    // 0x147974: 0x0  nop
    ctx->pc = 0x147974u;
    // NOP
label_147978:
    // 0x147978: 0x24030b86  addiu       $v1, $zero, 0xB86
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2950));
    // 0x14797c: 0x1623002c  bne         $s1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x14797Cu;
    {
        const bool branch_taken_0x14797c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x147980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14797Cu;
            // 0x147980: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14797c) {
            ctx->pc = 0x147A30u;
            goto label_147a30;
        }
    }
    ctx->pc = 0x147984u;
    // 0x147984: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x147984u;
    SET_GPR_U32(ctx, 31, 0x14798Cu);
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14798Cu; }
        if (ctx->pc != 0x14798Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14798Cu; }
        if (ctx->pc != 0x14798Cu) { return; }
    }
    ctx->pc = 0x14798Cu;
    // 0x14798c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147990: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x147990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x147994: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x147994u;
    SET_GPR_U32(ctx, 31, 0x14799Cu);
    ctx->pc = 0x147998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147994u;
            // 0x147998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14799Cu; }
        if (ctx->pc != 0x14799Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14799Cu; }
        if (ctx->pc != 0x14799Cu) { return; }
    }
    ctx->pc = 0x14799Cu;
    // 0x14799c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x14799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1479a0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1479a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1479a4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1479a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1479a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1479a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1479ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1479acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1479b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1479b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1479b4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1479B4u;
    SET_GPR_U32(ctx, 31, 0x1479BCu);
    ctx->pc = 0x1479B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1479B4u;
            // 0x1479b8: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479BCu; }
        if (ctx->pc != 0x1479BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479BCu; }
        if (ctx->pc != 0x1479BCu) { return; }
    }
    ctx->pc = 0x1479BCu;
    // 0x1479bc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1479bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1479c0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1479c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1479c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1479c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1479c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1479cc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1479CCu;
    SET_GPR_U32(ctx, 31, 0x1479D4u);
    ctx->pc = 0x1479D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1479CCu;
            // 0x1479d0: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479D4u; }
        if (ctx->pc != 0x1479D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479D4u; }
        if (ctx->pc != 0x1479D4u) { return; }
    }
    ctx->pc = 0x1479D4u;
    // 0x1479d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1479D4u;
    {
        const bool branch_taken_0x1479d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479d4) {
            ctx->pc = 0x147A30u;
            goto label_147a30;
        }
    }
    ctx->pc = 0x1479DCu;
    // 0x1479dc: 0x0  nop
    ctx->pc = 0x1479dcu;
    // NOP
label_1479e0:
    // 0x1479e0: 0x3c03c3af  lui         $v1, 0xC3AF
    ctx->pc = 0x1479e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50095 << 16));
    // 0x1479e4: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x1479e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x1479e8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1479e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1479ec: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x1479ecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1479f0: 0x0  nop
    ctx->pc = 0x1479f0u;
    // NOP
    // 0x1479f4: 0x0  nop
    ctx->pc = 0x1479f4u;
    // NOP
    // 0x1479f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1479f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1479fc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1479FCu;
    {
        const bool branch_taken_0x1479fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1479FCu;
            // 0x147a00: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479fc) {
            ctx->pc = 0x147A30u;
            goto label_147a30;
        }
    }
    ctx->pc = 0x147A04u;
    // 0x147a04: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x147a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x147a08: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147a0c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x147a10: 0xc0520cc  jal         func_148330
    ctx->pc = 0x147A10u;
    SET_GPR_U32(ctx, 31, 0x147A18u);
    ctx->pc = 0x147A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A10u;
            // 0x147a14: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A18u; }
        if (ctx->pc != 0x147A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A18u; }
        if (ctx->pc != 0x147A18u) { return; }
    }
    ctx->pc = 0x147A18u;
    // 0x147a18: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x147a1c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x147a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x147a20: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x147a24: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x147a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x147a28: 0xc0520cc  jal         func_148330
    ctx->pc = 0x147A28u;
    SET_GPR_U32(ctx, 31, 0x147A30u);
    ctx->pc = 0x147A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A28u;
            // 0x147a2c: 0x24e77f30  addiu       $a3, $a3, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A30u; }
        if (ctx->pc != 0x147A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A30u; }
        if (ctx->pc != 0x147A30u) { return; }
    }
    ctx->pc = 0x147A30u;
label_147a30:
    // 0x147a30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x147a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x147A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A3Cu;
            // 0x147a40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1478B8u: goto label_1478b8;
            case 0x147948u: goto label_147948;
            case 0x147978u: goto label_147978;
            case 0x1479E0u: goto label_1479e0;
            case 0x147A30u: goto label_147a30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147A44u;
}
