#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSoundBatchPoll
// Address: 0x10b820 - 0x10b9dc
void InitSoundBatchPoll_0x10b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b820u;

    // 0x10b820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b824: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10b824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b82c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x10B82Cu;
    {
        const bool branch_taken_0x10b82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B82Cu;
            // 0x10b830: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b82c) {
            ctx->pc = 0x10B8A8u;
            goto label_10b8a8;
        }
    }
    ctx->pc = 0x10B834u;
    // 0x10b834: 0xc045044  jal         func_114110
    ctx->pc = 0x10B834u;
    SET_GPR_U32(ctx, 31, 0x10B83Cu);
    ctx->pc = 0x114110u;
    if (runtime->hasFunction(0x114110u)) {
        auto targetFn = runtime->lookupFunction(0x114110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B83Cu; }
        if (ctx->pc != 0x10B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B83Cu; }
        if (ctx->pc != 0x10B83Cu) { return; }
    }
    ctx->pc = 0x10B83Cu;
    // 0x10b83c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B83Cu;
    {
        const bool branch_taken_0x10b83c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10B840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B83Cu;
            // 0x10b840: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b83c) {
            ctx->pc = 0x10B84Cu;
            goto label_10b84c;
        }
    }
    ctx->pc = 0x10B844u;
    // 0x10b844: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B844u;
    SET_GPR_U32(ctx, 31, 0x10B84Cu);
    ctx->pc = 0x10B848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B844u;
            // 0x10b848: 0x24843938  addiu       $a0, $a0, 0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B84Cu; }
        if (ctx->pc != 0x10B84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B84Cu; }
        if (ctx->pc != 0x10B84Cu) { return; }
    }
    ctx->pc = 0x10B84Cu;
label_10b84c:
    // 0x10b84c: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x10B84Cu;
    SET_GPR_U32(ctx, 31, 0x10B854u);
    ctx->pc = 0x10B850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B84Cu;
            // 0x10b850: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B854u; }
        if (ctx->pc != 0x10B854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B854u; }
        if (ctx->pc != 0x10B854u) { return; }
    }
    ctx->pc = 0x10B854u;
    // 0x10b854: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B854u;
    {
        const bool branch_taken_0x10b854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10b854) {
            ctx->pc = 0x10B858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B854u;
            // 0x10b858: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B870u;
            goto label_10b870;
        }
    }
    ctx->pc = 0x10B85Cu;
    // 0x10b85c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b860: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B860u;
    SET_GPR_U32(ctx, 31, 0x10B868u);
    ctx->pc = 0x10B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B860u;
            // 0x10b864: 0x248438b0  addiu       $a0, $a0, 0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B868u; }
        if (ctx->pc != 0x10B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B868u; }
        if (ctx->pc != 0x10B868u) { return; }
    }
    ctx->pc = 0x10B868u;
    // 0x10b868: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x10B868u;
    {
        const bool branch_taken_0x10b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B868u;
            // 0x10b86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b868) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B870u;
label_10b870:
    // 0x10b870: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x10b870u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x10b874: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B874u;
    SET_GPR_U32(ctx, 31, 0x10B87Cu);
    ctx->pc = 0x10B878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B874u;
            // 0x10b878: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B87Cu; }
        if (ctx->pc != 0x10B87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B87Cu; }
        if (ctx->pc != 0x10B87Cu) { return; }
    }
    ctx->pc = 0x10B87Cu;
    // 0x10b87c: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B87Cu;
    {
        const bool branch_taken_0x10b87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B87Cu;
            // 0x10b880: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b87c) {
            ctx->pc = 0x10B898u;
            goto label_10b898;
        }
    }
    ctx->pc = 0x10B884u;
    // 0x10b884: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b888: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B888u;
    SET_GPR_U32(ctx, 31, 0x10B890u);
    ctx->pc = 0x10B88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B888u;
            // 0x10b88c: 0x248438d0  addiu       $a0, $a0, 0x38D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B890u; }
        if (ctx->pc != 0x10B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B890u; }
        if (ctx->pc != 0x10B890u) { return; }
    }
    ctx->pc = 0x10B890u;
    // 0x10b890: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x10B890u;
    {
        const bool branch_taken_0x10b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B890u;
            // 0x10b894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b890) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B898u;
label_10b898:
    // 0x10b898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b89c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x10b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x10b8a0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x10B8A0u;
    {
        const bool branch_taken_0x10b8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8A0u;
            // 0x10b8a4: 0xaf838390  sw          $v1, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8a0) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B8A8u;
label_10b8a8:
    // 0x10b8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b8ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B8ACu;
    {
        const bool branch_taken_0x10b8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8ACu;
            // 0x10b8b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8ac) {
            ctx->pc = 0x10B8C8u;
            goto label_10b8c8;
        }
    }
    ctx->pc = 0x10B8B4u;
    // 0x10b8b4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10b8b8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b8bc: 0x8c45f040  lw          $a1, -0xFC0($v0)
    ctx->pc = 0x10b8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963264)));
    // 0x10b8c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10B8C0u;
    {
        const bool branch_taken_0x10b8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8C0u;
            // 0x10b8c4: 0x248439c0  addiu       $a0, $a0, 0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8c0) {
            ctx->pc = 0x10B998u;
            goto label_10b998;
        }
    }
    ctx->pc = 0x10B8C8u;
label_10b8c8:
    // 0x10b8c8: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10B8C8u;
    {
        const bool branch_taken_0x10b8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8C8u;
            // 0x10b8cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8c8) {
            ctx->pc = 0x10B97Cu;
            goto label_10b97c;
        }
    }
    ctx->pc = 0x10B8D0u;
    // 0x10b8d0: 0xc043948  jal         func_10E520
    ctx->pc = 0x10B8D0u;
    SET_GPR_U32(ctx, 31, 0x10B8D8u);
    ctx->pc = 0x10B8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8D0u;
            // 0x10b8d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D8u; }
        if (ctx->pc != 0x10B8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D8u; }
        if (ctx->pc != 0x10B8D8u) { return; }
    }
    ctx->pc = 0x10B8D8u;
    // 0x10b8d8: 0xc045066  jal         func_114198
    ctx->pc = 0x10B8D8u;
    SET_GPR_U32(ctx, 31, 0x10B8E0u);
    ctx->pc = 0x10B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8D8u;
            // 0x10b8dc: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E0u; }
        if (ctx->pc != 0x10B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E0u; }
        if (ctx->pc != 0x10B8E0u) { return; }
    }
    ctx->pc = 0x10B8E0u;
    // 0x10b8e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B8E0u;
    {
        const bool branch_taken_0x10b8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8E0u;
            // 0x10b8e4: 0xaf82838c  sw          $v0, -0x7C74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8e0) {
            ctx->pc = 0x10B8FCu;
            goto label_10b8fc;
        }
    }
    ctx->pc = 0x10B8E8u;
    // 0x10b8e8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b8ec: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B8ECu;
    SET_GPR_U32(ctx, 31, 0x10B8F4u);
    ctx->pc = 0x10B8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8ECu;
            // 0x10b8f0: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8F4u; }
        if (ctx->pc != 0x10B8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8F4u; }
        if (ctx->pc != 0x10B8F4u) { return; }
    }
    ctx->pc = 0x10B8F4u;
    // 0x10b8f4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x10B8F4u;
    {
        const bool branch_taken_0x10b8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8F4u;
            // 0x10b8f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f4) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B8FCu;
label_10b8fc:
    // 0x10b8fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b904: 0x248435e0  addiu       $a0, $a0, 0x35E0
    ctx->pc = 0x10b904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10b908: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B908u;
    SET_GPR_U32(ctx, 31, 0x10B910u);
    ctx->pc = 0x10B90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B908u;
            // 0x10b90c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B910u; }
        if (ctx->pc != 0x10B910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B910u; }
        if (ctx->pc != 0x10B910u) { return; }
    }
    ctx->pc = 0x10B910u;
    // 0x10b910: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b914: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10b918: 0x2484f000  addiu       $a0, $a0, -0x1000
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
    // 0x10b91c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x10b920: 0xc045c60  jal         func_117180
    ctx->pc = 0x10B920u;
    SET_GPR_U32(ctx, 31, 0x10B928u);
    ctx->pc = 0x10B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B920u;
            // 0x10b924: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117180u;
    if (runtime->hasFunction(0x117180u)) {
        auto targetFn = runtime->lookupFunction(0x117180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B928u; }
        if (ctx->pc != 0x10B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B928u; }
        if (ctx->pc != 0x10B928u) { return; }
    }
    ctx->pc = 0x10B928u;
    // 0x10b928: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B928u;
            // 0x10b92c: 0x8f86838c  lw          $a2, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B940u;
            goto label_10b940;
        }
    }
    ctx->pc = 0x10B930u;
    // 0x10b930: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b934: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B934u;
    SET_GPR_U32(ctx, 31, 0x10B93Cu);
    ctx->pc = 0x10B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B934u;
            // 0x10b938: 0x24843600  addiu       $a0, $a0, 0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B93Cu; }
        if (ctx->pc != 0x10B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B93Cu; }
        if (ctx->pc != 0x10B93Cu) { return; }
    }
    ctx->pc = 0x10B93Cu;
    // 0x10b93c: 0x8f86838c  lw          $a2, -0x7C74($gp)
    ctx->pc = 0x10b93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_10b940:
    // 0x10b940: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b944: 0x340580b0  ori         $a1, $zero, 0x80B0
    ctx->pc = 0x10b944u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32944u)));
    // 0x10b948: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b94c: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B94Cu;
    SET_GPR_U32(ctx, 31, 0x10B954u);
    ctx->pc = 0x10B950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B94Cu;
            // 0x10b950: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B954u; }
        if (ctx->pc != 0x10B954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B954u; }
        if (ctx->pc != 0x10B954u) { return; }
    }
    ctx->pc = 0x10B954u;
    // 0x10b954: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B954u;
            // 0x10b958: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B96Cu;
            goto label_10b96c;
        }
    }
    ctx->pc = 0x10B95Cu;
    // 0x10b95c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b960: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B960u;
    SET_GPR_U32(ctx, 31, 0x10B968u);
    ctx->pc = 0x10B964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B960u;
            // 0x10b964: 0x24843958  addiu       $a0, $a0, 0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B968u; }
        if (ctx->pc != 0x10B968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B968u; }
        if (ctx->pc != 0x10B968u) { return; }
    }
    ctx->pc = 0x10B968u;
    // 0x10b968: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10b968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10b96c:
    // 0x10b96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b970: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b974: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10B974u;
    {
        const bool branch_taken_0x10b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B974u;
            // 0x10b978: 0xaf838390  sw          $v1, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b974) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B97Cu;
label_10b97c:
    // 0x10b97c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B97Cu;
    {
        const bool branch_taken_0x10b97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B97Cu;
            // 0x10b980: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b97c) {
            ctx->pc = 0x10B9A8u;
            goto label_10b9a8;
        }
    }
    ctx->pc = 0x10B984u;
    // 0x10b984: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x10b984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10b988: 0x8c45f040  lw          $a1, -0xFC0($v0)
    ctx->pc = 0x10b988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963264)));
    // 0x10b98c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B98Cu;
    {
        const bool branch_taken_0x10b98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B98Cu;
            // 0x10b990: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b98c) {
            ctx->pc = 0x10B9A8u;
            goto label_10b9a8;
        }
    }
    ctx->pc = 0x10B994u;
    // 0x10b994: 0x248439e8  addiu       $a0, $a0, 0x39E8
    ctx->pc = 0x10b994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14824));
label_10b998:
    // 0x10b998: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B998u;
    SET_GPR_U32(ctx, 31, 0x10B9A0u);
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9A0u; }
        if (ctx->pc != 0x10B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9A0u; }
        if (ctx->pc != 0x10B9A0u) { return; }
    }
    ctx->pc = 0x10B9A0u;
    // 0x10b9a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10B9A0u;
    {
        const bool branch_taken_0x10b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9A0u;
            // 0x10b9a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9a0) {
            ctx->pc = 0x10B9CCu;
            goto label_10b9cc;
        }
    }
    ctx->pc = 0x10B9A8u;
label_10b9a8:
    // 0x10b9a8: 0xc045082  jal         func_114208
    ctx->pc = 0x10B9A8u;
    SET_GPR_U32(ctx, 31, 0x10B9B0u);
    ctx->pc = 0x10B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9A8u;
            // 0x10b9ac: 0x8f84838c  lw          $a0, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114208u;
    if (runtime->hasFunction(0x114208u)) {
        auto targetFn = runtime->lookupFunction(0x114208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9B0u; }
        if (ctx->pc != 0x10B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9B0u; }
        if (ctx->pc != 0x10B9B0u) { return; }
    }
    ctx->pc = 0x10B9B0u;
    // 0x10b9b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B9B0u;
    {
        const bool branch_taken_0x10b9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b9b0) {
            ctx->pc = 0x10B9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9B0u;
            // 0x10b9b4: 0xaf808390  sw          $zero, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B9C8u;
            goto label_10b9c8;
        }
    }
    ctx->pc = 0x10B9B8u;
    // 0x10b9b8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b9bc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B9BCu;
    SET_GPR_U32(ctx, 31, 0x10B9C4u);
    ctx->pc = 0x10B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9BCu;
            // 0x10b9c0: 0x24843688  addiu       $a0, $a0, 0x3688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9C4u; }
        if (ctx->pc != 0x10B9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B9C4u; }
        if (ctx->pc != 0x10B9C4u) { return; }
    }
    ctx->pc = 0x10B9C4u;
    // 0x10b9c4: 0xaf808390  sw          $zero, -0x7C70($gp)
    ctx->pc = 0x10b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10b9c8:
    // 0x10b9c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10b9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b9cc:
    // 0x10b9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b9d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b9d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B9D4u;
            // 0x10b9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B84Cu: goto label_10b84c;
            case 0x10B870u: goto label_10b870;
            case 0x10B898u: goto label_10b898;
            case 0x10B8A8u: goto label_10b8a8;
            case 0x10B8C8u: goto label_10b8c8;
            case 0x10B8FCu: goto label_10b8fc;
            case 0x10B940u: goto label_10b940;
            case 0x10B96Cu: goto label_10b96c;
            case 0x10B97Cu: goto label_10b97c;
            case 0x10B998u: goto label_10b998;
            case 0x10B9A8u: goto label_10b9a8;
            case 0x10B9C8u: goto label_10b9c8;
            case 0x10B9CCu: goto label_10b9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B9DCu;
}
