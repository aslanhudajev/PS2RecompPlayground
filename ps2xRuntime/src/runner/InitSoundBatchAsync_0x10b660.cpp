#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitSoundBatchAsync
// Address: 0x10b660 - 0x10b81c
void InitSoundBatchAsync_0x10b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b660u;

    // 0x10b660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b664: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10b664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10b668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b66c: 0x2484c018  addiu       $a0, $a0, -0x3FE8
    ctx->pc = 0x10b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950936));
    // 0x10b670: 0xc045c7c  jal         func_1171F0
    ctx->pc = 0x10B670u;
    SET_GPR_U32(ctx, 31, 0x10B678u);
    ctx->pc = 0x10B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B670u;
            // 0x10b674: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171F0u;
    if (runtime->hasFunction(0x1171F0u)) {
        auto targetFn = runtime->lookupFunction(0x1171F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B678u; }
        if (ctx->pc != 0x10B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdCallBack_0x1171f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B678u; }
        if (ctx->pc != 0x10B678u) { return; }
    }
    ctx->pc = 0x10B678u;
    // 0x10b678: 0x8f858390  lw          $a1, -0x7C70($gp)
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b67c: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x10B67Cu;
    {
        const bool branch_taken_0x10b67c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B67Cu;
            // 0x10b680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b67c) {
            ctx->pc = 0x10B6E8u;
            goto label_10b6e8;
        }
    }
    ctx->pc = 0x10B684u;
    // 0x10b684: 0xc045044  jal         func_114110
    ctx->pc = 0x10B684u;
    SET_GPR_U32(ctx, 31, 0x10B68Cu);
    ctx->pc = 0x114110u;
    if (runtime->hasFunction(0x114110u)) {
        auto targetFn = runtime->lookupFunction(0x114110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B68Cu; }
        if (ctx->pc != 0x10B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B68Cu; }
        if (ctx->pc != 0x10B68Cu) { return; }
    }
    ctx->pc = 0x10B68Cu;
    // 0x10b68c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10B68Cu;
    {
        const bool branch_taken_0x10b68c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10B690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B68Cu;
            // 0x10b690: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b68c) {
            ctx->pc = 0x10B69Cu;
            goto label_10b69c;
        }
    }
    ctx->pc = 0x10B694u;
    // 0x10b694: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B694u;
    SET_GPR_U32(ctx, 31, 0x10B69Cu);
    ctx->pc = 0x10B698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B694u;
            // 0x10b698: 0x24843938  addiu       $a0, $a0, 0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B69Cu; }
        if (ctx->pc != 0x10B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B69Cu; }
        if (ctx->pc != 0x10B69Cu) { return; }
    }
    ctx->pc = 0x10B69Cu;
label_10b69c:
    // 0x10b69c: 0xc045c30  jal         func_1170C0
    ctx->pc = 0x10B69Cu;
    SET_GPR_U32(ctx, 31, 0x10B6A4u);
    ctx->pc = 0x10B6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B69Cu;
            // 0x10b6a0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1170C0u;
    if (runtime->hasFunction(0x1170C0u)) {
        auto targetFn = runtime->lookupFunction(0x1170C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6A4u; }
        if (ctx->pc != 0x10B6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x1170c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6A4u; }
        if (ctx->pc != 0x10B6A4u) { return; }
    }
    ctx->pc = 0x10B6A4u;
    // 0x10b6a4: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B6A4u;
    {
        const bool branch_taken_0x10b6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10b6a4) {
            ctx->pc = 0x10B6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6A4u;
            // 0x10b6a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B6C0u;
            goto label_10b6c0;
        }
    }
    ctx->pc = 0x10B6ACu;
    // 0x10b6ac: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b6b0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B6B0u;
    SET_GPR_U32(ctx, 31, 0x10B6B8u);
    ctx->pc = 0x10B6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6B0u;
            // 0x10b6b4: 0x248438b0  addiu       $a0, $a0, 0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6B8u; }
        if (ctx->pc != 0x10B6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6B8u; }
        if (ctx->pc != 0x10B6B8u) { return; }
    }
    ctx->pc = 0x10B6B8u;
    // 0x10b6b8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x10B6B8u;
    {
        const bool branch_taken_0x10b6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6B8u;
            // 0x10b6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6b8) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B6C0u;
label_10b6c0:
    // 0x10b6c0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x10b6c0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x10b6c4: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B6C4u;
    SET_GPR_U32(ctx, 31, 0x10B6CCu);
    ctx->pc = 0x10B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6C4u;
            // 0x10b6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6CCu; }
        if (ctx->pc != 0x10B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6CCu; }
        if (ctx->pc != 0x10B6CCu) { return; }
    }
    ctx->pc = 0x10B6CCu;
    // 0x10b6cc: 0x14500039  bne         $v0, $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x10B6CCu;
    {
        const bool branch_taken_0x10b6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6CCu;
            // 0x10b6d0: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6cc) {
            ctx->pc = 0x10B7B4u;
            goto label_10b7b4;
        }
    }
    ctx->pc = 0x10B6D4u;
    // 0x10b6d4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b6d8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B6D8u;
    SET_GPR_U32(ctx, 31, 0x10B6E0u);
    ctx->pc = 0x10B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6D8u;
            // 0x10b6dc: 0x248438d0  addiu       $a0, $a0, 0x38D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E0u; }
        if (ctx->pc != 0x10B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B6E0u; }
        if (ctx->pc != 0x10B6E0u) { return; }
    }
    ctx->pc = 0x10B6E0u;
    // 0x10b6e0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x10B6E0u;
    {
        const bool branch_taken_0x10b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6E0u;
            // 0x10b6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6e0) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B6E8u;
label_10b6e8:
    // 0x10b6e8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B6E8u;
    {
        const bool branch_taken_0x10b6e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6E8u;
            // 0x10b6ec: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6e8) {
            ctx->pc = 0x10B6FCu;
            goto label_10b6fc;
        }
    }
    ctx->pc = 0x10B6F0u;
    // 0x10b6f0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b6f4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x10B6F4u;
    {
        const bool branch_taken_0x10b6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6F4u;
            // 0x10b6f8: 0x24843980  addiu       $a0, $a0, 0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6f4) {
            ctx->pc = 0x10B7D0u;
            goto label_10b7d0;
        }
    }
    ctx->pc = 0x10B6FCu;
label_10b6fc:
    // 0x10b6fc: 0x24503998  addiu       $s0, $v0, 0x3998
    ctx->pc = 0x10b6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14744));
    // 0x10b700: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B700u;
    SET_GPR_U32(ctx, 31, 0x10B708u);
    ctx->pc = 0x10B704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B700u;
            // 0x10b704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B708u; }
        if (ctx->pc != 0x10B708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B708u; }
        if (ctx->pc != 0x10B708u) { return; }
    }
    ctx->pc = 0x10B708u;
    // 0x10b708: 0x8f858390  lw          $a1, -0x7C70($gp)
    ctx->pc = 0x10b708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10b70c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b710: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x10B710u;
    {
        const bool branch_taken_0x10b710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B710u;
            // 0x10b714: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b710) {
            ctx->pc = 0x10B7C4u;
            goto label_10b7c4;
        }
    }
    ctx->pc = 0x10B718u;
    // 0x10b718: 0xc043948  jal         func_10E520
    ctx->pc = 0x10B718u;
    SET_GPR_U32(ctx, 31, 0x10B720u);
    ctx->pc = 0x10B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B718u;
            // 0x10b71c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B720u; }
        if (ctx->pc != 0x10B720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B720u; }
        if (ctx->pc != 0x10B720u) { return; }
    }
    ctx->pc = 0x10B720u;
    // 0x10b720: 0xc045066  jal         func_114198
    ctx->pc = 0x10B720u;
    SET_GPR_U32(ctx, 31, 0x10B728u);
    ctx->pc = 0x10B724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B720u;
            // 0x10b724: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114198u;
    if (runtime->hasFunction(0x114198u)) {
        auto targetFn = runtime->lookupFunction(0x114198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B728u; }
        if (ctx->pc != 0x10B728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocIopHeap_0x114198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B728u; }
        if (ctx->pc != 0x10B728u) { return; }
    }
    ctx->pc = 0x10B728u;
    // 0x10b728: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B728u;
    {
        const bool branch_taken_0x10b728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B728u;
            // 0x10b72c: 0xaf82838c  sw          $v0, -0x7C74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b728) {
            ctx->pc = 0x10B744u;
            goto label_10b744;
        }
    }
    ctx->pc = 0x10B730u;
    // 0x10b730: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b734: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B734u;
    SET_GPR_U32(ctx, 31, 0x10B73Cu);
    ctx->pc = 0x10B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B734u;
            // 0x10b738: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B73Cu; }
        if (ctx->pc != 0x10B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B73Cu; }
        if (ctx->pc != 0x10B73Cu) { return; }
    }
    ctx->pc = 0x10B73Cu;
    // 0x10b73c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x10B73Cu;
    {
        const bool branch_taken_0x10b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B73Cu;
            // 0x10b740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b73c) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B744u;
label_10b744:
    // 0x10b744: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b74c: 0x248435e0  addiu       $a0, $a0, 0x35E0
    ctx->pc = 0x10b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
    // 0x10b750: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B750u;
    SET_GPR_U32(ctx, 31, 0x10B758u);
    ctx->pc = 0x10B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B750u;
            // 0x10b754: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B758u; }
        if (ctx->pc != 0x10B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B758u; }
        if (ctx->pc != 0x10B758u) { return; }
    }
    ctx->pc = 0x10B758u;
    // 0x10b758: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b75c: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x10b75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
    // 0x10b760: 0x2484efc0  addiu       $a0, $a0, -0x1040
    ctx->pc = 0x10b760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    // 0x10b764: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x10b764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10b768: 0xc045c60  jal         func_117180
    ctx->pc = 0x10B768u;
    SET_GPR_U32(ctx, 31, 0x10B770u);
    ctx->pc = 0x10B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B768u;
            // 0x10b76c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117180u;
    if (runtime->hasFunction(0x117180u)) {
        auto targetFn = runtime->lookupFunction(0x117180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B770u; }
        if (ctx->pc != 0x10B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdTransToIOP_0x117180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B770u; }
        if (ctx->pc != 0x10B770u) { return; }
    }
    ctx->pc = 0x10B770u;
    // 0x10b770: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B770u;
    {
        const bool branch_taken_0x10b770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B770u;
            // 0x10b774: 0x8f86838c  lw          $a2, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b770) {
            ctx->pc = 0x10B788u;
            goto label_10b788;
        }
    }
    ctx->pc = 0x10B778u;
    // 0x10b778: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b77c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B77Cu;
    SET_GPR_U32(ctx, 31, 0x10B784u);
    ctx->pc = 0x10B780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B77Cu;
            // 0x10b780: 0x24843600  addiu       $a0, $a0, 0x3600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B784u; }
        if (ctx->pc != 0x10B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B784u; }
        if (ctx->pc != 0x10B784u) { return; }
    }
    ctx->pc = 0x10B784u;
    // 0x10b784: 0x8f86838c  lw          $a2, -0x7C74($gp)
    ctx->pc = 0x10b784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_10b788:
    // 0x10b788: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b78c: 0x340580b0  ori         $a1, $zero, 0x80B0
    ctx->pc = 0x10b78cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32944u)));
    // 0x10b790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10b790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b794: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B794u;
    SET_GPR_U32(ctx, 31, 0x10B79Cu);
    ctx->pc = 0x10B798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B794u;
            // 0x10b798: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B79Cu; }
        if (ctx->pc != 0x10B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B79Cu; }
        if (ctx->pc != 0x10B79Cu) { return; }
    }
    ctx->pc = 0x10B79Cu;
    // 0x10b79c: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B79Cu;
    {
        const bool branch_taken_0x10b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B79Cu;
            // 0x10b7a0: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b79c) {
            ctx->pc = 0x10B7B4u;
            goto label_10b7b4;
        }
    }
    ctx->pc = 0x10B7A4u;
    // 0x10b7a4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b7a8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B7A8u;
    SET_GPR_U32(ctx, 31, 0x10B7B0u);
    ctx->pc = 0x10B7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7A8u;
            // 0x10b7ac: 0x24843958  addiu       $a0, $a0, 0x3958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7B0u; }
        if (ctx->pc != 0x10B7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7B0u; }
        if (ctx->pc != 0x10B7B0u) { return; }
    }
    ctx->pc = 0x10B7B0u;
    // 0x10b7b0: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10b7b4:
    // 0x10b7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b7b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10b7bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10B7BCu;
    {
        const bool branch_taken_0x10b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7BCu;
            // 0x10b7c0: 0xaf838390  sw          $v1, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7bc) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B7C4u;
label_10b7c4:
    // 0x10b7c4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B7C4u;
    {
        const bool branch_taken_0x10b7c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7C4u;
            // 0x10b7c8: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7c4) {
            ctx->pc = 0x10B7E0u;
            goto label_10b7e0;
        }
    }
    ctx->pc = 0x10B7CCu;
    // 0x10b7cc: 0x248439a8  addiu       $a0, $a0, 0x39A8
    ctx->pc = 0x10b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14760));
label_10b7d0:
    // 0x10b7d0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B7D0u;
    SET_GPR_U32(ctx, 31, 0x10B7D8u);
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7D8u; }
        if (ctx->pc != 0x10B7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7D8u; }
        if (ctx->pc != 0x10B7D8u) { return; }
    }
    ctx->pc = 0x10B7D8u;
    // 0x10b7d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10B7D8u;
    {
        const bool branch_taken_0x10b7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7D8u;
            // 0x10b7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7d8) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B7E0u;
label_10b7e0:
    // 0x10b7e0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B7E0u;
    SET_GPR_U32(ctx, 31, 0x10B7E8u);
    ctx->pc = 0x10B7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7E0u;
            // 0x10b7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7E8u; }
        if (ctx->pc != 0x10B7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7E8u; }
        if (ctx->pc != 0x10B7E8u) { return; }
    }
    ctx->pc = 0x10B7E8u;
    // 0x10b7e8: 0xc045082  jal         func_114208
    ctx->pc = 0x10B7E8u;
    SET_GPR_U32(ctx, 31, 0x10B7F0u);
    ctx->pc = 0x10B7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7E8u;
            // 0x10b7ec: 0x8f84838c  lw          $a0, -0x7C74($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114208u;
    if (runtime->hasFunction(0x114208u)) {
        auto targetFn = runtime->lookupFunction(0x114208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7F0u; }
        if (ctx->pc != 0x10B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B7F0u; }
        if (ctx->pc != 0x10B7F0u) { return; }
    }
    ctx->pc = 0x10B7F0u;
    // 0x10b7f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B7F0u;
    {
        const bool branch_taken_0x10b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b7f0) {
            ctx->pc = 0x10B7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7F0u;
            // 0x10b7f4: 0xaf808390  sw          $zero, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B808u;
            goto label_10b808;
        }
    }
    ctx->pc = 0x10B7F8u;
    // 0x10b7f8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10b7fc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B7FCu;
    SET_GPR_U32(ctx, 31, 0x10B804u);
    ctx->pc = 0x10B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B7FCu;
            // 0x10b800: 0x24843688  addiu       $a0, $a0, 0x3688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B804u; }
        if (ctx->pc != 0x10B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B804u; }
        if (ctx->pc != 0x10B804u) { return; }
    }
    ctx->pc = 0x10B804u;
    // 0x10b804: 0xaf808390  sw          $zero, -0x7C70($gp)
    ctx->pc = 0x10b804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10b808:
    // 0x10b808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10b808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b80c:
    // 0x10b80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b814: 0x3e00008  jr          $ra
    ctx->pc = 0x10B814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B814u;
            // 0x10b818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B69Cu: goto label_10b69c;
            case 0x10B6C0u: goto label_10b6c0;
            case 0x10B6E8u: goto label_10b6e8;
            case 0x10B6FCu: goto label_10b6fc;
            case 0x10B744u: goto label_10b744;
            case 0x10B788u: goto label_10b788;
            case 0x10B7B4u: goto label_10b7b4;
            case 0x10B7C4u: goto label_10b7c4;
            case 0x10B7D0u: goto label_10b7d0;
            case 0x10B7E0u: goto label_10b7e0;
            case 0x10B808u: goto label_10b808;
            case 0x10B80Cu: goto label_10b80c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B81Cu;
}
