#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSoundBatch
// Address: 0x10b510 - 0x10b65c
void InitSoundBatch_0x10b510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b510u;

    // 0x10b510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b518: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b51c: 0xc045044  jal         func_114110
    ctx->pc = 0x10B51Cu;
    SET_GPR_U32(ctx, 31, 0x10B524u);
    ctx->pc = 0x10B520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B51Cu;
            // 0x10b520: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114110u;
    if (runtime->hasFunction(0x114110u)) {
        auto targetFn = runtime->lookupFunction(0x114110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B524u; }
        if (ctx->pc != 0x10B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B524u; }
        if (ctx->pc != 0x10B524u) { return; }
    }
    ctx->pc = 0x10B524u;
    // 0x10b524: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B524u;
    {
        const bool branch_taken_0x10b524 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10B528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B524u;
            // 0x10b528: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b524) {
            ctx->pc = 0x10B534u;
            goto label_10b534;
        }
    }
    ctx->pc = 0x10B52Cu;
    // 0x10b52c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B52Cu;
    SET_GPR_U32(ctx, 31, 0x10B534u);
    ctx->pc = 0x10B530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B52Cu;
            // 0x10b530: 0x24843938  addiu       $a0, $a0, 0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B534u; }
        if (ctx->pc != 0x10B534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B534u; }
        if (ctx->pc != 0x10B534u) { return; }
    }
    ctx->pc = 0x10B534u;
label_10b534:
    // 0x10b534: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x10B534u;
    SET_GPR_U32(ctx, 31, 0x10B53Cu);
    ctx->pc = 0x10B538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B534u;
            // 0x10b538: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B53Cu; }
        if (ctx->pc != 0x10B53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B53Cu; }
        if (ctx->pc != 0x10B53Cu) { return; }
    }
    ctx->pc = 0x10B53Cu;
    // 0x10b53c: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B53Cu;
    {
        const bool branch_taken_0x10b53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B53Cu;
            // 0x10b540: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b53c) {
            ctx->pc = 0x10B560u;
            goto label_10b560;
        }
    }
    ctx->pc = 0x10B544u;
    // 0x10b544: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b54c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b550: 0x248438b0  addiu       $a0, $a0, 0x38B0
    ctx->pc = 0x10b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14512));
    // 0x10b554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b558: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B558u;
    ctx->pc = 0x10B55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B558u;
            // 0x10b55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B560u;
label_10b560:
    // 0x10b560: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x10b560u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x10b564: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B564u;
    SET_GPR_U32(ctx, 31, 0x10B56Cu);
    ctx->pc = 0x10B568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B564u;
            // 0x10b568: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B56Cu; }
        if (ctx->pc != 0x10B56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B56Cu; }
        if (ctx->pc != 0x10B56Cu) { return; }
    }
    ctx->pc = 0x10B56Cu;
    // 0x10b56c: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B56Cu;
    {
        const bool branch_taken_0x10b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B56Cu;
            // 0x10b570: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b56c) {
            ctx->pc = 0x10B58Cu;
            goto label_10b58c;
        }
    }
    ctx->pc = 0x10B574u;
    // 0x10b574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b578: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b57c: 0x248438d0  addiu       $a0, $a0, 0x38D0
    ctx->pc = 0x10b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
    // 0x10b580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b584: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B584u;
    ctx->pc = 0x10B588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B584u;
            // 0x10b588: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B58Cu;
label_10b58c:
    // 0x10b58c: 0xc043948  jal         func_10E520
    ctx->pc = 0x10B58Cu;
    SET_GPR_U32(ctx, 31, 0x10B594u);
    ctx->pc = 0x10B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B58Cu;
            // 0x10b590: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B594u; }
        if (ctx->pc != 0x10B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B594u; }
        if (ctx->pc != 0x10B594u) { return; }
    }
    ctx->pc = 0x10B594u;
    // 0x10b594: 0xc045066  jal         func_114198
    ctx->pc = 0x10B594u;
    SET_GPR_U32(ctx, 31, 0x10B59Cu);
    ctx->pc = 0x10B598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B594u;
            // 0x10b598: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B59Cu; }
        if (ctx->pc != 0x10B59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B59Cu; }
        if (ctx->pc != 0x10B59Cu) { return; }
    }
    ctx->pc = 0x10B59Cu;
    // 0x10b59c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10b59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5a0: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B5A0u;
    {
        const bool branch_taken_0x10b5a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b5a0) {
            ctx->pc = 0x10B5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5A0u;
            // 0x10b5a4: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B5C4u;
            goto label_10b5c4;
        }
    }
    ctx->pc = 0x10B5A8u;
    // 0x10b5a8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b5ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b5b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b5b4: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x10b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x10b5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5bc: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B5BCu;
    ctx->pc = 0x10B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5BCu;
            // 0x10b5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B5C4u;
label_10b5c4:
    // 0x10b5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5c8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B5C8u;
    SET_GPR_U32(ctx, 31, 0x10B5D0u);
    ctx->pc = 0x10B5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5C8u;
            // 0x10b5cc: 0x248435e0  addiu       $a0, $a0, 0x35E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5D0u; }
        if (ctx->pc != 0x10B5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5D0u; }
        if (ctx->pc != 0x10B5D0u) { return; }
    }
    ctx->pc = 0x10B5D0u;
    // 0x10b5d0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b5d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5d8: 0x2484efc0  addiu       $a0, $a0, -0x1040
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    // 0x10b5dc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x10b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10b5e0: 0xc045c60  jal         func_117180
    ctx->pc = 0x10B5E0u;
    SET_GPR_U32(ctx, 31, 0x10B5E8u);
    ctx->pc = 0x10B5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5E0u;
            // 0x10b5e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117180u;
    if (runtime->hasFunction(0x117180u)) {
        auto targetFn = runtime->lookupFunction(0x117180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5E8u; }
        if (ctx->pc != 0x10B5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5E8u; }
        if (ctx->pc != 0x10B5E8u) { return; }
    }
    ctx->pc = 0x10B5E8u;
    // 0x10b5e8: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B5E8u;
    {
        const bool branch_taken_0x10b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x10b5e8) {
            ctx->pc = 0x10B5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5E8u;
            // 0x10b5ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B600u;
            goto label_10b600;
        }
    }
    ctx->pc = 0x10B5F0u;
    // 0x10b5f0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b5f4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B5F4u;
    SET_GPR_U32(ctx, 31, 0x10B5FCu);
    ctx->pc = 0x10B5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B5F4u;
            // 0x10b5f8: 0x24843600  addiu       $a0, $a0, 0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5FCu; }
        if (ctx->pc != 0x10B5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B5FCu; }
        if (ctx->pc != 0x10B5FCu) { return; }
    }
    ctx->pc = 0x10B5FCu;
    // 0x10b5fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b600:
    // 0x10b600: 0x340580b0  ori         $a1, $zero, 0x80B0
    ctx->pc = 0x10b600u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32944u)));
    // 0x10b604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10b604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b60c: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B60Cu;
    SET_GPR_U32(ctx, 31, 0x10B614u);
    ctx->pc = 0x10B610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B60Cu;
            // 0x10b610: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B614u; }
        if (ctx->pc != 0x10B614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B614u; }
        if (ctx->pc != 0x10B614u) { return; }
    }
    ctx->pc = 0x10B614u;
    // 0x10b614: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B614u;
    {
        const bool branch_taken_0x10b614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B614u;
            // 0x10b618: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b614) {
            ctx->pc = 0x10B624u;
            goto label_10b624;
        }
    }
    ctx->pc = 0x10B61Cu;
    // 0x10b61c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B61Cu;
    SET_GPR_U32(ctx, 31, 0x10B624u);
    ctx->pc = 0x10B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B61Cu;
            // 0x10b620: 0x24843958  addiu       $a0, $a0, 0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B624u; }
        if (ctx->pc != 0x10B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B624u; }
        if (ctx->pc != 0x10B624u) { return; }
    }
    ctx->pc = 0x10B624u;
label_10b624:
    // 0x10b624: 0xc045082  jal         func_114208
    ctx->pc = 0x10B624u;
    SET_GPR_U32(ctx, 31, 0x10B62Cu);
    ctx->pc = 0x10B628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B624u;
            // 0x10b628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114208u;
    if (runtime->hasFunction(0x114208u)) {
        auto targetFn = runtime->lookupFunction(0x114208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B62Cu; }
        if (ctx->pc != 0x10B62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B62Cu; }
        if (ctx->pc != 0x10B62Cu) { return; }
    }
    ctx->pc = 0x10B62Cu;
    // 0x10b62c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B62Cu;
    {
        const bool branch_taken_0x10b62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B62Cu;
            // 0x10b630: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b62c) {
            ctx->pc = 0x10B64Cu;
            goto label_10b64c;
        }
    }
    ctx->pc = 0x10B634u;
    // 0x10b634: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b638: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b63c: 0x24843688  addiu       $a0, $a0, 0x3688
    ctx->pc = 0x10b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13960));
    // 0x10b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b644: 0x804ace4  j           func_12B390
    ctx->pc = 0x10B644u;
    ctx->pc = 0x10B648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B644u;
            // 0x10b648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x12b390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B64Cu;
label_10b64c:
    // 0x10b64c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b64cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b654: 0x3e00008  jr          $ra
    ctx->pc = 0x10B654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B654u;
            // 0x10b658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B534u: goto label_10b534;
            case 0x10B560u: goto label_10b560;
            case 0x10B58Cu: goto label_10b58c;
            case 0x10B5C4u: goto label_10b5c4;
            case 0x10B600u: goto label_10b600;
            case 0x10B624u: goto label_10b624;
            case 0x10B64Cu: goto label_10b64c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B65Cu;
}
