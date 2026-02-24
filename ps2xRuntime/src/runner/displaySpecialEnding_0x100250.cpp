#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: displaySpecialEnding
// Address: 0x100250 - 0x1004e4
void displaySpecialEnding_0x100250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("displaySpecialEnding_0x100250");
#endif

    ctx->pc = 0x100250u;

    // 0x100250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x100254: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x100254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x100258: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x100258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10025c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x100260: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x100264: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x100268: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x100268u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x10026c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100270: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_100278:
    // 0x100278: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100278u;
    SET_GPR_U32(ctx, 31, 0x100280u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100280u; }
        if (ctx->pc != 0x100280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100280u; }
        if (ctx->pc != 0x100280u) { return; }
    }
    ctx->pc = 0x100280u;
    // 0x100280: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100280u;
    SET_GPR_U32(ctx, 31, 0x100288u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100288u; }
        if (ctx->pc != 0x100288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100288u; }
        if (ctx->pc != 0x100288u) { return; }
    }
    ctx->pc = 0x100288u;
    // 0x100288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10028c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100290: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100294: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x100294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100298: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x10029c: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1002a0: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x1002A0u;
    SET_GPR_U32(ctx, 31, 0x1002A8u);
    ctx->pc = 0x1002A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002A0u;
            // 0x1002a4: 0x264a2a90  addiu       $t2, $s2, 0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 10896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002A8u; }
        if (ctx->pc != 0x1002A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002A8u; }
        if (ctx->pc != 0x1002A8u) { return; }
    }
    ctx->pc = 0x1002A8u;
    // 0x1002a8: 0xc04295e  jal         func_10A578
    ctx->pc = 0x1002A8u;
    SET_GPR_U32(ctx, 31, 0x1002B0u);
    ctx->pc = 0x1002ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002A8u;
            // 0x1002ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002B0u; }
        if (ctx->pc != 0x1002B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002B0u; }
        if (ctx->pc != 0x1002B0u) { return; }
    }
    ctx->pc = 0x1002B0u;
    // 0x1002b0: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x1002B0u;
    SET_GPR_U32(ctx, 31, 0x1002B8u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002B8u; }
        if (ctx->pc != 0x1002B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002B8u; }
        if (ctx->pc != 0x1002B8u) { return; }
    }
    ctx->pc = 0x1002B8u;
    // 0x1002b8: 0xc042378  jal         func_108DE0
    ctx->pc = 0x1002B8u;
    SET_GPR_U32(ctx, 31, 0x1002C0u);
    ctx->pc = 0x1002BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002B8u;
            // 0x1002bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (runtime->hasFunction(0x108DE0u)) {
        auto targetFn = runtime->lookupFunction(0x108DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002C0u; }
        if (ctx->pc != 0x1002C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002C0u; }
        if (ctx->pc != 0x1002C0u) { return; }
    }
    ctx->pc = 0x1002C0u;
    // 0x1002c0: 0xc0414e2  jal         func_105388
    ctx->pc = 0x1002C0u;
    SET_GPR_U32(ctx, 31, 0x1002C8u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002C8u; }
        if (ctx->pc != 0x1002C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002C8u; }
        if (ctx->pc != 0x1002C8u) { return; }
    }
    ctx->pc = 0x1002C8u;
    // 0x1002c8: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x1002c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x1002cc: 0x2842007f  slti        $v0, $v0, 0x7F
    ctx->pc = 0x1002ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x1002d0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1002D0u;
    {
        const bool branch_taken_0x1002d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002d0) {
            ctx->pc = 0x100278u;
            goto label_100278;
        }
    }
    ctx->pc = 0x1002D8u;
label_1002d8:
    // 0x1002d8: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1002D8u;
    SET_GPR_U32(ctx, 31, 0x1002E0u);
    ctx->pc = 0x1002DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002D8u;
            // 0x1002dc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002E0u; }
        if (ctx->pc != 0x1002E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002E0u; }
        if (ctx->pc != 0x1002E0u) { return; }
    }
    ctx->pc = 0x1002E0u;
    // 0x1002e0: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x1002E0u;
    SET_GPR_U32(ctx, 31, 0x1002E8u);
    ctx->pc = 0x1002E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002E0u;
            // 0x1002e4: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002E8u; }
        if (ctx->pc != 0x1002E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002E8u; }
        if (ctx->pc != 0x1002E8u) { return; }
    }
    ctx->pc = 0x1002E8u;
    // 0x1002e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1002ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1002f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1002f4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1002f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1002f8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1002f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1002fc: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x1002fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100300: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100300u;
    SET_GPR_U32(ctx, 31, 0x100308u);
    ctx->pc = 0x100304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100300u;
            // 0x100304: 0x264a2a90  addiu       $t2, $s2, 0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 10896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100308u; }
        if (ctx->pc != 0x100308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100308u; }
        if (ctx->pc != 0x100308u) { return; }
    }
    ctx->pc = 0x100308u;
    // 0x100308: 0xc04295e  jal         func_10A578
    ctx->pc = 0x100308u;
    SET_GPR_U32(ctx, 31, 0x100310u);
    ctx->pc = 0x10030Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100308u;
            // 0x10030c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100310u; }
        if (ctx->pc != 0x100310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100310u; }
        if (ctx->pc != 0x100310u) { return; }
    }
    ctx->pc = 0x100310u;
    // 0x100310: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x100310u;
    SET_GPR_U32(ctx, 31, 0x100318u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100318u; }
        if (ctx->pc != 0x100318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100318u; }
        if (ctx->pc != 0x100318u) { return; }
    }
    ctx->pc = 0x100318u;
    // 0x100318: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100318u;
    SET_GPR_U32(ctx, 31, 0x100320u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100320u; }
        if (ctx->pc != 0x100320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100320u; }
        if (ctx->pc != 0x100320u) { return; }
    }
    ctx->pc = 0x100320u;
    // 0x100320: 0x2a0200fa  slti        $v0, $s0, 0xFA
    ctx->pc = 0x100320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x100324: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x100324u;
    {
        const bool branch_taken_0x100324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100324u;
            // 0x100328: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100324) {
            ctx->pc = 0x1002D8u;
            goto label_1002d8;
        }
    }
    ctx->pc = 0x10032Cu;
    // 0x10032c: 0xaf82814c  sw          $v0, -0x7EB4($gp)
    ctx->pc = 0x10032cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
label_100330:
    // 0x100330: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100330u;
    SET_GPR_U32(ctx, 31, 0x100338u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100338u; }
        if (ctx->pc != 0x100338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100338u; }
        if (ctx->pc != 0x100338u) { return; }
    }
    ctx->pc = 0x100338u;
    // 0x100338: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100338u;
    SET_GPR_U32(ctx, 31, 0x100340u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100340u; }
        if (ctx->pc != 0x100340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100340u; }
        if (ctx->pc != 0x100340u) { return; }
    }
    ctx->pc = 0x100340u;
    // 0x100340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100348: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10034c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x10034cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100350: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x100354: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x100354u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100358: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100358u;
    SET_GPR_U32(ctx, 31, 0x100360u);
    ctx->pc = 0x10035Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100358u;
            // 0x10035c: 0x264a2a90  addiu       $t2, $s2, 0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 10896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100360u; }
        if (ctx->pc != 0x100360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100360u; }
        if (ctx->pc != 0x100360u) { return; }
    }
    ctx->pc = 0x100360u;
    // 0x100360: 0xc04295e  jal         func_10A578
    ctx->pc = 0x100360u;
    SET_GPR_U32(ctx, 31, 0x100368u);
    ctx->pc = 0x100364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100360u;
            // 0x100364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100368u; }
        if (ctx->pc != 0x100368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100368u; }
        if (ctx->pc != 0x100368u) { return; }
    }
    ctx->pc = 0x100368u;
    // 0x100368: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x100368u;
    SET_GPR_U32(ctx, 31, 0x100370u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100370u; }
        if (ctx->pc != 0x100370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100370u; }
        if (ctx->pc != 0x100370u) { return; }
    }
    ctx->pc = 0x100370u;
    // 0x100370: 0xc04238e  jal         func_108E38
    ctx->pc = 0x100370u;
    SET_GPR_U32(ctx, 31, 0x100378u);
    ctx->pc = 0x100374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100370u;
            // 0x100374: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100378u; }
        if (ctx->pc != 0x100378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100378u; }
        if (ctx->pc != 0x100378u) { return; }
    }
    ctx->pc = 0x100378u;
    // 0x100378: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100378u;
    SET_GPR_U32(ctx, 31, 0x100380u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100380u; }
        if (ctx->pc != 0x100380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100380u; }
        if (ctx->pc != 0x100380u) { return; }
    }
    ctx->pc = 0x100380u;
    // 0x100380: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x100384: 0x1c40ffea  bgtz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x100384u;
    {
        const bool branch_taken_0x100384 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x100384) {
            ctx->pc = 0x100330u;
            goto label_100330;
        }
    }
    ctx->pc = 0x10038Cu;
    // 0x10038c: 0xc042cf4  jal         func_10B3D0
    ctx->pc = 0x10038Cu;
    SET_GPR_U32(ctx, 31, 0x100394u);
    ctx->pc = 0x10B3D0u;
    if (runtime->hasFunction(0x10B3D0u)) {
        auto targetFn = runtime->lookupFunction(0x10B3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100394u; }
        if (ctx->pc != 0x100394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSound_0x10b3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100394u; }
        if (ctx->pc != 0x100394u) { return; }
    }
    ctx->pc = 0x100394u;
    // 0x100394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x100398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10039c: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x10039cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x1003a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1003a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a4: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x1003a4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32639u)));
    // 0x1003a8: 0xc04003a  jal         func_1000E8
    ctx->pc = 0x1003A8u;
    SET_GPR_U32(ctx, 31, 0x1003B0u);
    ctx->pc = 0x1003ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003A8u;
            // 0x1003ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000E8u;
    if (runtime->hasFunction(0x1000E8u)) {
        auto targetFn = runtime->lookupFunction(0x1000E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003B0u; }
        if (ctx->pc != 0x1003B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003B0u; }
        if (ctx->pc != 0x1003B0u) { return; }
    }
    ctx->pc = 0x1003B0u;
    // 0x1003b0: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x1003b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x1003b4: 0x0  nop
    ctx->pc = 0x1003b4u;
    // NOP
label_1003b8:
    // 0x1003b8: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1003B8u;
    SET_GPR_U32(ctx, 31, 0x1003C0u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003C0u; }
        if (ctx->pc != 0x1003C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003C0u; }
        if (ctx->pc != 0x1003C0u) { return; }
    }
    ctx->pc = 0x1003C0u;
    // 0x1003c0: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x1003C0u;
    SET_GPR_U32(ctx, 31, 0x1003C8u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003C8u; }
        if (ctx->pc != 0x1003C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003C8u; }
        if (ctx->pc != 0x1003C8u) { return; }
    }
    ctx->pc = 0x1003C8u;
    // 0x1003c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1003c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1003ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003d0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1003d4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1003d8: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1003d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1003dc: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1003e0: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x1003E0u;
    SET_GPR_U32(ctx, 31, 0x1003E8u);
    ctx->pc = 0x1003E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003E0u;
            // 0x1003e4: 0x266a2aa0  addiu       $t2, $s3, 0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 10912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003E8u; }
        if (ctx->pc != 0x1003E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003E8u; }
        if (ctx->pc != 0x1003E8u) { return; }
    }
    ctx->pc = 0x1003E8u;
    // 0x1003e8: 0xc04295e  jal         func_10A578
    ctx->pc = 0x1003E8u;
    SET_GPR_U32(ctx, 31, 0x1003F0u);
    ctx->pc = 0x1003ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003E8u;
            // 0x1003ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003F0u; }
        if (ctx->pc != 0x1003F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003F0u; }
        if (ctx->pc != 0x1003F0u) { return; }
    }
    ctx->pc = 0x1003F0u;
    // 0x1003f0: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x1003F0u;
    SET_GPR_U32(ctx, 31, 0x1003F8u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003F8u; }
        if (ctx->pc != 0x1003F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1003F8u; }
        if (ctx->pc != 0x1003F8u) { return; }
    }
    ctx->pc = 0x1003F8u;
    // 0x1003f8: 0xc042378  jal         func_108DE0
    ctx->pc = 0x1003F8u;
    SET_GPR_U32(ctx, 31, 0x100400u);
    ctx->pc = 0x1003FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1003F8u;
            // 0x1003fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (runtime->hasFunction(0x108DE0u)) {
        auto targetFn = runtime->lookupFunction(0x108DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100400u; }
        if (ctx->pc != 0x100400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100400u; }
        if (ctx->pc != 0x100400u) { return; }
    }
    ctx->pc = 0x100400u;
    // 0x100400: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100400u;
    SET_GPR_U32(ctx, 31, 0x100408u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100408u; }
        if (ctx->pc != 0x100408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100408u; }
        if (ctx->pc != 0x100408u) { return; }
    }
    ctx->pc = 0x100408u;
    // 0x100408: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x10040c: 0x2842007f  slti        $v0, $v0, 0x7F
    ctx->pc = 0x10040cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x100410: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x100410u;
    {
        const bool branch_taken_0x100410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100410u;
            // 0x100414: 0x241000f9  addiu       $s0, $zero, 0xF9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100410) {
            ctx->pc = 0x1003B8u;
            goto label_1003b8;
        }
    }
    ctx->pc = 0x100418u;
label_100418:
    // 0x100418: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100418u;
    SET_GPR_U32(ctx, 31, 0x100420u);
    ctx->pc = 0x10041Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100418u;
            // 0x10041c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100420u; }
        if (ctx->pc != 0x100420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100420u; }
        if (ctx->pc != 0x100420u) { return; }
    }
    ctx->pc = 0x100420u;
    // 0x100420: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100420u;
    SET_GPR_U32(ctx, 31, 0x100428u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100428u; }
        if (ctx->pc != 0x100428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100428u; }
        if (ctx->pc != 0x100428u) { return; }
    }
    ctx->pc = 0x100428u;
    // 0x100428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10042c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100430: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100434: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x100434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100438: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x10043c: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100440: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100440u;
    SET_GPR_U32(ctx, 31, 0x100448u);
    ctx->pc = 0x100444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100440u;
            // 0x100444: 0x266a2aa0  addiu       $t2, $s3, 0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 10912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100448u; }
        if (ctx->pc != 0x100448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100448u; }
        if (ctx->pc != 0x100448u) { return; }
    }
    ctx->pc = 0x100448u;
    // 0x100448: 0xc04295e  jal         func_10A578
    ctx->pc = 0x100448u;
    SET_GPR_U32(ctx, 31, 0x100450u);
    ctx->pc = 0x10044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100448u;
            // 0x10044c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100450u; }
        if (ctx->pc != 0x100450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100450u; }
        if (ctx->pc != 0x100450u) { return; }
    }
    ctx->pc = 0x100450u;
    // 0x100450: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x100450u;
    SET_GPR_U32(ctx, 31, 0x100458u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100458u; }
        if (ctx->pc != 0x100458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100458u; }
        if (ctx->pc != 0x100458u) { return; }
    }
    ctx->pc = 0x100458u;
    // 0x100458: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100458u;
    SET_GPR_U32(ctx, 31, 0x100460u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100460u; }
        if (ctx->pc != 0x100460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100460u; }
        if (ctx->pc != 0x100460u) { return; }
    }
    ctx->pc = 0x100460u;
    // 0x100460: 0x601ffed  bgez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x100460u;
    {
        const bool branch_taken_0x100460 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x100464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100460u;
            // 0x100464: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100460) {
            ctx->pc = 0x100418u;
            goto label_100418;
        }
    }
    ctx->pc = 0x100468u;
    // 0x100468: 0xaf82814c  sw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
    // 0x10046c: 0x0  nop
    ctx->pc = 0x10046cu;
    // NOP
label_100470:
    // 0x100470: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100470u;
    SET_GPR_U32(ctx, 31, 0x100478u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100478u; }
        if (ctx->pc != 0x100478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100478u; }
        if (ctx->pc != 0x100478u) { return; }
    }
    ctx->pc = 0x100478u;
    // 0x100478: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100478u;
    SET_GPR_U32(ctx, 31, 0x100480u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100480u; }
        if (ctx->pc != 0x100480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100480u; }
        if (ctx->pc != 0x100480u) { return; }
    }
    ctx->pc = 0x100480u;
    // 0x100480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100488: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10048c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x10048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100490: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x100494: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x100494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100498: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100498u;
    SET_GPR_U32(ctx, 31, 0x1004A0u);
    ctx->pc = 0x10049Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100498u;
            // 0x10049c: 0x266a2aa0  addiu       $t2, $s3, 0x2AA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 10912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004A0u; }
        if (ctx->pc != 0x1004A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004A0u; }
        if (ctx->pc != 0x1004A0u) { return; }
    }
    ctx->pc = 0x1004A0u;
    // 0x1004a0: 0xc04295e  jal         func_10A578
    ctx->pc = 0x1004A0u;
    SET_GPR_U32(ctx, 31, 0x1004A8u);
    ctx->pc = 0x1004A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1004A0u;
            // 0x1004a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004A8u; }
        if (ctx->pc != 0x1004A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004A8u; }
        if (ctx->pc != 0x1004A8u) { return; }
    }
    ctx->pc = 0x1004A8u;
    // 0x1004a8: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x1004A8u;
    SET_GPR_U32(ctx, 31, 0x1004B0u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004B0u; }
        if (ctx->pc != 0x1004B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004B0u; }
        if (ctx->pc != 0x1004B0u) { return; }
    }
    ctx->pc = 0x1004B0u;
    // 0x1004b0: 0xc04238e  jal         func_108E38
    ctx->pc = 0x1004B0u;
    SET_GPR_U32(ctx, 31, 0x1004B8u);
    ctx->pc = 0x1004B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1004B0u;
            // 0x1004b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004B8u; }
        if (ctx->pc != 0x1004B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004B8u; }
        if (ctx->pc != 0x1004B8u) { return; }
    }
    ctx->pc = 0x1004B8u;
    // 0x1004b8: 0xc0414e2  jal         func_105388
    ctx->pc = 0x1004B8u;
    SET_GPR_U32(ctx, 31, 0x1004C0u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004C0u; }
        if (ctx->pc != 0x1004C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1004C0u; }
        if (ctx->pc != 0x1004C0u) { return; }
    }
    ctx->pc = 0x1004C0u;
    // 0x1004c0: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x1004c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x1004c4: 0x1c40ffea  bgtz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1004C4u;
    {
        const bool branch_taken_0x1004c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1004C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004C4u;
            // 0x1004c8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004c4) {
            ctx->pc = 0x100470u;
            goto label_100470;
        }
    }
    ctx->pc = 0x1004CCu;
    // 0x1004cc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1004ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1004d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1004d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1004d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1004d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1004d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1004dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1004DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004DCu;
            // 0x1004e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100278u: goto label_100278;
            case 0x1002D8u: goto label_1002d8;
            case 0x100330u: goto label_100330;
            case 0x1003B8u: goto label_1003b8;
            case 0x100418u: goto label_100418;
            case 0x100470u: goto label_100470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1004E4u;
}
