#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MS_BankLoad
// Address: 0x1746c0 - 0x174854
void MS_BankLoad_0x1746c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MS_BankLoad_0x1746c0");
#endif

    ctx->pc = 0x1746c0u;

    // 0x1746c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1746c4: 0x24045010  addiu       $a0, $zero, 0x5010
    ctx->pc = 0x1746c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x1746c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1746c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1746cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1746ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1746d0: 0xc05cc94  jal         func_173250
    ctx->pc = 0x1746D0u;
    SET_GPR_U32(ctx, 31, 0x1746D8u);
    ctx->pc = 0x1746D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1746D0u;
            // 0x1746d4: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173250u;
    if (runtime->hasFunction(0x173250u)) {
        auto targetFn = runtime->lookupFunction(0x173250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746D8u; }
        if (ctx->pc != 0x1746D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetSPUWriteAddress_0x173250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746D8u; }
        if (ctx->pc != 0x1746D8u) { return; }
    }
    ctx->pc = 0x1746D8u;
    // 0x1746d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1746d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1746dc: 0xc05d174  jal         func_1745D0
    ctx->pc = 0x1746DCu;
    SET_GPR_U32(ctx, 31, 0x1746E4u);
    ctx->pc = 0x1746E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1746DCu;
            // 0x1746e0: 0x8c2409e8  lw          $a0, 0x9E8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1745D0u;
    if (runtime->hasFunction(0x1745D0u)) {
        auto targetFn = runtime->lookupFunction(0x1745D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746E4u; }
        if (ctx->pc != 0x1746E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Patch_MSH_HeaderInfo_0x1745d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746E4u; }
        if (ctx->pc != 0x1746E4u) { return; }
    }
    ctx->pc = 0x1746E4u;
    // 0x1746e4: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1746e8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1746e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1746ec: 0x26311b20  addiu       $s1, $s1, 0x1B20
    ctx->pc = 0x1746ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6944));
    // 0x1746f0: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1746f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1746f4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1746F4u;
    SET_GPR_U32(ctx, 31, 0x1746FCu);
    ctx->pc = 0x1746F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1746F4u;
            // 0x1746f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746FCu; }
        if (ctx->pc != 0x1746FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1746FCu; }
        if (ctx->pc != 0x1746FCu) { return; }
    }
    ctx->pc = 0x1746FCu;
    // 0x1746fc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1746fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174704: 0x24841b80  addiu       $a0, $a0, 0x1B80
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
    // 0x174708: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174708u;
    SET_GPR_U32(ctx, 31, 0x174710u);
    ctx->pc = 0x17470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174708u;
            // 0x17470c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174710u; }
        if (ctx->pc != 0x174710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174710u; }
        if (ctx->pc != 0x174710u) { return; }
    }
    ctx->pc = 0x174710u;
    // 0x174710: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174718: 0xc05ca70  jal         func_1729C0
    ctx->pc = 0x174718u;
    SET_GPR_U32(ctx, 31, 0x174720u);
    ctx->pc = 0x17471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174718u;
            // 0x17471c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1729C0u;
    if (runtime->hasFunction(0x1729C0u)) {
        auto targetFn = runtime->lookupFunction(0x1729C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174720u; }
        if (ctx->pc != 0x174720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_CreateFileInfo_0x1729c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174720u; }
        if (ctx->pc != 0x174720u) { return; }
    }
    ctx->pc = 0x174720u;
    // 0x174720: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x174720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x174724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174728: 0x24055010  addiu       $a1, $zero, 0x5010
    ctx->pc = 0x174728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x17472c: 0xc05cca4  jal         func_173290
    ctx->pc = 0x17472Cu;
    SET_GPR_U32(ctx, 31, 0x174734u);
    ctx->pc = 0x174730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17472Cu;
            // 0x174730: 0x34466000  ori         $a2, $v0, 0x6000 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24576u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173290u;
    if (runtime->hasFunction(0x173290u)) {
        auto targetFn = runtime->lookupFunction(0x173290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174734u; }
        if (ctx->pc != 0x174734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AllocateStreamBuffer_0x173290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174734u; }
        if (ctx->pc != 0x174734u) { return; }
    }
    ctx->pc = 0x174734u;
    // 0x174734: 0xc05ccc0  jal         func_173300
    ctx->pc = 0x174734u;
    SET_GPR_U32(ctx, 31, 0x17473Cu);
    ctx->pc = 0x174738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174734u;
            // 0x174738: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17473Cu; }
        if (ctx->pc != 0x17473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_SetMaxStreamLimit_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17473Cu; }
        if (ctx->pc != 0x17473Cu) { return; }
    }
    ctx->pc = 0x17473Cu;
    // 0x17473c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17474c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17474cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174750: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174754: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x174754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x174758: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x174758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17475c: 0xc05cdf0  jal         func_1737C0
    ctx->pc = 0x17475Cu;
    SET_GPR_U32(ctx, 31, 0x174764u);
    ctx->pc = 0x174760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17475Cu;
            // 0x174760: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737C0u;
    if (runtime->hasFunction(0x1737C0u)) {
        auto targetFn = runtime->lookupFunction(0x1737C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174764u; }
        if (ctx->pc != 0x174764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_PlayStream_0x1737c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174764u; }
        if (ctx->pc != 0x174764u) { return; }
    }
    ctx->pc = 0x174764u;
    // 0x174764: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x174764u;
    SET_GPR_U32(ctx, 31, 0x17476Cu);
    ctx->pc = 0x174768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174764u;
            // 0x174768: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17476Cu; }
        if (ctx->pc != 0x17476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17476Cu; }
        if (ctx->pc != 0x17476Cu) { return; }
    }
    ctx->pc = 0x17476Cu;
    // 0x17476c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17476cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174770: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174770u;
    SET_GPR_U32(ctx, 31, 0x174778u);
    ctx->pc = 0x174774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174770u;
            // 0x174774: 0x24841bb0  addiu       $a0, $a0, 0x1BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174778u; }
        if (ctx->pc != 0x174778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174778u; }
        if (ctx->pc != 0x174778u) { return; }
    }
    ctx->pc = 0x174778u;
    // 0x174778: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17477c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17477cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174780: 0x8c2509e8  lw          $a1, 0x9E8($at)
    ctx->pc = 0x174780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2536)));
    // 0x174784: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174784u;
    SET_GPR_U32(ctx, 31, 0x17478Cu);
    ctx->pc = 0x174788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174784u;
            // 0x174788: 0x24841bd0  addiu       $a0, $a0, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17478Cu; }
        if (ctx->pc != 0x17478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17478Cu; }
        if (ctx->pc != 0x17478Cu) { return; }
    }
    ctx->pc = 0x17478Cu;
    // 0x17478c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x17478cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x174790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174794: 0xc05c8a8  jal         func_1722A0
    ctx->pc = 0x174794u;
    SET_GPR_U32(ctx, 31, 0x17479Cu);
    ctx->pc = 0x174798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174794u;
            // 0x174798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1722A0u;
    if (runtime->hasFunction(0x1722A0u)) {
        auto targetFn = runtime->lookupFunction(0x1722A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17479Cu; }
        if (ctx->pc != 0x17479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStreamInfo_0x1722a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17479Cu; }
        if (ctx->pc != 0x17479Cu) { return; }
    }
    ctx->pc = 0x17479Cu;
    // 0x17479c: 0x93a20051  lbu         $v0, 0x51($sp)
    ctx->pc = 0x17479cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 81)));
    // 0x1747a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1747A0u;
    {
        const bool branch_taken_0x1747a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1747a0) {
            ctx->pc = 0x1747F8u;
            goto label_1747f8;
        }
    }
    ctx->pc = 0x1747A8u;
label_1747a8:
    // 0x1747a8: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x1747A8u;
    SET_GPR_U32(ctx, 31, 0x1747B0u);
    ctx->pc = 0x1747ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747A8u;
            // 0x1747ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747B0u; }
        if (ctx->pc != 0x1747B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747B0u; }
        if (ctx->pc != 0x1747B0u) { return; }
    }
    ctx->pc = 0x1747B0u;
label_1747b0:
    // 0x1747b0: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x1747B0u;
    SET_GPR_U32(ctx, 31, 0x1747B8u);
    ctx->pc = 0x1747B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747B0u;
            // 0x1747b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747B8u; }
        if (ctx->pc != 0x1747B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747B8u; }
        if (ctx->pc != 0x1747B8u) { return; }
    }
    ctx->pc = 0x1747B8u;
    // 0x1747b8: 0x0  nop
    ctx->pc = 0x1747b8u;
    // NOP
    // 0x1747bc: 0x0  nop
    ctx->pc = 0x1747bcu;
    // NOP
    // 0x1747c0: 0x0  nop
    ctx->pc = 0x1747c0u;
    // NOP
    // 0x1747c4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1747C4u;
    {
        const bool branch_taken_0x1747c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1747c4) {
            ctx->pc = 0x1747B0u;
            goto label_1747b0;
        }
    }
    ctx->pc = 0x1747CCu;
    // 0x1747cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1747ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1747d0: 0x8c24a010  lw          $a0, -0x5FF0($at)
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942736)));
    // 0x1747d4: 0xc05cd28  jal         func_1734A0
    ctx->pc = 0x1747D4u;
    SET_GPR_U32(ctx, 31, 0x1747DCu);
    ctx->pc = 0x1747D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747D4u;
            // 0x1747d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A0u;
    if (runtime->hasFunction(0x1734A0u)) {
        auto targetFn = runtime->lookupFunction(0x1734A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747DCu; }
        if (ctx->pc != 0x1747DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStatus_0x1734a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747DCu; }
        if (ctx->pc != 0x1747DCu) { return; }
    }
    ctx->pc = 0x1747DCu;
    // 0x1747dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1747dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747e0: 0xc05c8a8  jal         func_1722A0
    ctx->pc = 0x1747E0u;
    SET_GPR_U32(ctx, 31, 0x1747E8u);
    ctx->pc = 0x1747E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747E0u;
            // 0x1747e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1722A0u;
    if (runtime->hasFunction(0x1722A0u)) {
        auto targetFn = runtime->lookupFunction(0x1722A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747E8u; }
        if (ctx->pc != 0x1747E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStreamInfo_0x1722a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747E8u; }
        if (ctx->pc != 0x1747E8u) { return; }
    }
    ctx->pc = 0x1747E8u;
    // 0x1747e8: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x1747e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1747ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1747ECu;
    {
        const bool branch_taken_0x1747ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747ec) {
            ctx->pc = 0x1747A8u;
            goto label_1747a8;
        }
    }
    ctx->pc = 0x1747F4u;
    // 0x1747f4: 0x0  nop
    ctx->pc = 0x1747f4u;
    // NOP
label_1747f8:
    // 0x1747f8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1747fc: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1747FCu;
    SET_GPR_U32(ctx, 31, 0x174804u);
    ctx->pc = 0x174800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1747FCu;
            // 0x174800: 0x24841c10  addiu       $a0, $a0, 0x1C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174804u; }
        if (ctx->pc != 0x174804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174804u; }
        if (ctx->pc != 0x174804u) { return; }
    }
    ctx->pc = 0x174804u;
    // 0x174804: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x174808: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17480c: 0x8c2509e8  lw          $a1, 0x9E8($at)
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2536)));
    // 0x174810: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174810u;
    SET_GPR_U32(ctx, 31, 0x174818u);
    ctx->pc = 0x174814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174810u;
            // 0x174814: 0x24841c30  addiu       $a0, $a0, 0x1C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174818u; }
        if (ctx->pc != 0x174818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174818u; }
        if (ctx->pc != 0x174818u) { return; }
    }
    ctx->pc = 0x174818u;
    // 0x174818: 0xc05ca60  jal         func_172980
    ctx->pc = 0x174818u;
    SET_GPR_U32(ctx, 31, 0x174820u);
    ctx->pc = 0x17481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174818u;
            // 0x17481c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172980u;
    if (runtime->hasFunction(0x172980u)) {
        auto targetFn = runtime->lookupFunction(0x172980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174820u; }
        if (ctx->pc != 0x174820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_FreeFileID_0x172980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174820u; }
        if (ctx->pc != 0x174820u) { return; }
    }
    ctx->pc = 0x174820u;
    // 0x174820: 0xc05ccd8  jal         func_173360
    ctx->pc = 0x174820u;
    SET_GPR_U32(ctx, 31, 0x174828u);
    ctx->pc = 0x174824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174820u;
            // 0x174824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173360u;
    if (runtime->hasFunction(0x173360u)) {
        auto targetFn = runtime->lookupFunction(0x173360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174828u; }
        if (ctx->pc != 0x174828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_CloseStreamBuffer_0x173360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174828u; }
        if (ctx->pc != 0x174828u) { return; }
    }
    ctx->pc = 0x174828u;
    // 0x174828: 0xc05caac  jal         func_172AB0
    ctx->pc = 0x174828u;
    SET_GPR_U32(ctx, 31, 0x174830u);
    ctx->pc = 0x17482Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174828u;
            // 0x17482c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172AB0u;
    if (runtime->hasFunction(0x172AB0u)) {
        auto targetFn = runtime->lookupFunction(0x172AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174830u; }
        if (ctx->pc != 0x174830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushIOPCommand_0x172ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174830u; }
        if (ctx->pc != 0x174830u) { return; }
    }
    ctx->pc = 0x174830u;
    // 0x174830: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x174830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x174834: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174838: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x174838u;
    SET_GPR_U32(ctx, 31, 0x174840u);
    ctx->pc = 0x17483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174838u;
            // 0x17483c: 0x24841c70  addiu       $a0, $a0, 0x1C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174840u; }
        if (ctx->pc != 0x174840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174840u; }
        if (ctx->pc != 0x174840u) { return; }
    }
    ctx->pc = 0x174840u;
    // 0x174840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174844: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x174844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174848: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x174848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17484c: 0x3e00008  jr          $ra
    ctx->pc = 0x17484Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17484Cu;
            // 0x174850: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1747A8u: goto label_1747a8;
            case 0x1747B0u: goto label_1747b0;
            case 0x1747F8u: goto label_1747f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174854u;
}
