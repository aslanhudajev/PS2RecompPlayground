#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawHiscoresScreen
// Address: 0x101398 - 0x101878
void drawHiscoresScreen_0x101398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101398u;

    // 0x101398: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10139c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1013a0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1013a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1013a4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1013a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1013a8: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x1013a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x1013ac: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1013acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1013b0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013b4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1013b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1013b8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1013b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1013bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1013c0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1013c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1013c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1013c8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1013ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1013d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1013d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1013d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1013d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1013d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1013dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1013e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1013e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1013e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1013e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1013e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013ec: 0xaf808098  sw          $zero, -0x7F68($gp)
    ctx->pc = 0x1013ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934680), GPR_U32(ctx, 0));
    // 0x1013f0: 0xaf82816c  sw          $v0, -0x7E94($gp)
    ctx->pc = 0x1013f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934892), GPR_U32(ctx, 2));
    // 0x1013f4: 0xc04292e  jal         func_10A4B8
    ctx->pc = 0x1013F4u;
    SET_GPR_U32(ctx, 31, 0x1013FCu);
    ctx->pc = 0x1013F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1013F4u;
            // 0x1013f8: 0xaf8080ac  sw          $zero, -0x7F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A4B8u;
    if (runtime->hasFunction(0x10A4B8u)) {
        auto targetFn = runtime->lookupFunction(0x10A4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013FCu; }
        if (ctx->pc != 0x1013FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memInit_0x10a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013FCu; }
        if (ctx->pc != 0x1013FCu) { return; }
    }
    ctx->pc = 0x1013FCu;
    // 0x1013fc: 0xc0410c6  jal         func_104318
    ctx->pc = 0x1013FCu;
    SET_GPR_U32(ctx, 31, 0x101404u);
    ctx->pc = 0x104318u;
    if (runtime->hasFunction(0x104318u)) {
        auto targetFn = runtime->lookupFunction(0x104318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101404u; }
        if (ctx->pc != 0x101404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadPackage_0x104318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101404u; }
        if (ctx->pc != 0x101404u) { return; }
    }
    ctx->pc = 0x101404u;
    // 0x101404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x101404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x101408: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x101408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10140c: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x10140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x101410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101414: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x101414u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32639u)));
    // 0x101418: 0xc04003a  jal         func_1000E8
    ctx->pc = 0x101418u;
    SET_GPR_U32(ctx, 31, 0x101420u);
    ctx->pc = 0x10141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101418u;
            // 0x10141c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000E8u;
    if (runtime->hasFunction(0x1000E8u)) {
        auto targetFn = runtime->lookupFunction(0x1000E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101420u; }
        if (ctx->pc != 0x101420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101420u; }
        if (ctx->pc != 0x101420u) { return; }
    }
    ctx->pc = 0x101420u;
    // 0x101420: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x101420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x101424: 0x0  nop
    ctx->pc = 0x101424u;
    // NOP
label_101428:
    // 0x101428: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x101428u;
    SET_GPR_U32(ctx, 31, 0x101430u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101430u; }
        if (ctx->pc != 0x101430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101430u; }
        if (ctx->pc != 0x101430u) { return; }
    }
    ctx->pc = 0x101430u;
    // 0x101430: 0xc042074  jal         func_1081D0
    ctx->pc = 0x101430u;
    SET_GPR_U32(ctx, 31, 0x101438u);
    ctx->pc = 0x1081D0u;
    if (runtime->hasFunction(0x1081D0u)) {
        auto targetFn = runtime->lookupFunction(0x1081D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101438u; }
        if (ctx->pc != 0x101438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101438u; }
        if (ctx->pc != 0x101438u) { return; }
    }
    ctx->pc = 0x101438u;
    // 0x101438: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x101438u;
    SET_GPR_U32(ctx, 31, 0x101440u);
    ctx->pc = 0x1082E8u;
    if (runtime->hasFunction(0x1082E8u)) {
        auto targetFn = runtime->lookupFunction(0x1082E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101440u; }
        if (ctx->pc != 0x101440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101440u; }
        if (ctx->pc != 0x101440u) { return; }
    }
    ctx->pc = 0x101440u;
    // 0x101440: 0xc042378  jal         func_108DE0
    ctx->pc = 0x101440u;
    SET_GPR_U32(ctx, 31, 0x101448u);
    ctx->pc = 0x101444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101440u;
            // 0x101444: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (runtime->hasFunction(0x108DE0u)) {
        auto targetFn = runtime->lookupFunction(0x108DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101448u; }
        if (ctx->pc != 0x101448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101448u; }
        if (ctx->pc != 0x101448u) { return; }
    }
    ctx->pc = 0x101448u;
    // 0x101448: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101448u;
    SET_GPR_U32(ctx, 31, 0x101450u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101450u; }
        if (ctx->pc != 0x101450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101450u; }
        if (ctx->pc != 0x101450u) { return; }
    }
    ctx->pc = 0x101450u;
    // 0x101450: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x101450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101454: 0x2842007f  slti        $v0, $v0, 0x7F
    ctx->pc = 0x101454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x101458: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x101458u;
    {
        const bool branch_taken_0x101458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101458) {
            ctx->pc = 0x101428u;
            goto label_101428;
        }
    }
    ctx->pc = 0x101460u;
label_101460:
    // 0x101460: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x101460u;
    SET_GPR_U32(ctx, 31, 0x101468u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101468u; }
        if (ctx->pc != 0x101468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101468u; }
        if (ctx->pc != 0x101468u) { return; }
    }
    ctx->pc = 0x101468u;
    // 0x101468: 0xc042074  jal         func_1081D0
    ctx->pc = 0x101468u;
    SET_GPR_U32(ctx, 31, 0x101470u);
    ctx->pc = 0x1081D0u;
    if (runtime->hasFunction(0x1081D0u)) {
        auto targetFn = runtime->lookupFunction(0x1081D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101470u; }
        if (ctx->pc != 0x101470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101470u; }
        if (ctx->pc != 0x101470u) { return; }
    }
    ctx->pc = 0x101470u;
    // 0x101470: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x101470u;
    SET_GPR_U32(ctx, 31, 0x101478u);
    ctx->pc = 0x1082E8u;
    if (runtime->hasFunction(0x1082E8u)) {
        auto targetFn = runtime->lookupFunction(0x1082E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101478u; }
        if (ctx->pc != 0x101478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101478u; }
        if (ctx->pc != 0x101478u) { return; }
    }
    ctx->pc = 0x101478u;
    // 0x101478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10147c: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x10147Cu;
    SET_GPR_U32(ctx, 31, 0x101484u);
    ctx->pc = 0x101480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10147Cu;
            // 0x101480: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101484u; }
        if (ctx->pc != 0x101484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101484u; }
        if (ctx->pc != 0x101484u) { return; }
    }
    ctx->pc = 0x101484u;
    // 0x101484: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101484u;
    SET_GPR_U32(ctx, 31, 0x10148Cu);
    ctx->pc = 0x101488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101484u;
            // 0x101488: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10148Cu; }
        if (ctx->pc != 0x10148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10148Cu; }
        if (ctx->pc != 0x10148Cu) { return; }
    }
    ctx->pc = 0x10148Cu;
    // 0x10148c: 0x8f8280c0  lw          $v0, -0x7F40($gp)
    ctx->pc = 0x10148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x101490: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x101490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x101494: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x101494u;
    {
        const bool branch_taken_0x101494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101494) {
            ctx->pc = 0x101498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101494u;
            // 0x101498: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101460u;
            goto label_101460;
        }
    }
    ctx->pc = 0x10149Cu;
    // 0x10149c: 0x0  nop
    ctx->pc = 0x10149cu;
    // NOP
label_1014a0:
    // 0x1014a0: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1014A0u;
    SET_GPR_U32(ctx, 31, 0x1014A8u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A8u; }
        if (ctx->pc != 0x1014A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A8u; }
        if (ctx->pc != 0x1014A8u) { return; }
    }
    ctx->pc = 0x1014A8u;
    // 0x1014a8: 0xc042074  jal         func_1081D0
    ctx->pc = 0x1014A8u;
    SET_GPR_U32(ctx, 31, 0x1014B0u);
    ctx->pc = 0x1081D0u;
    if (runtime->hasFunction(0x1081D0u)) {
        auto targetFn = runtime->lookupFunction(0x1081D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B0u; }
        if (ctx->pc != 0x1014B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B0u; }
        if (ctx->pc != 0x1014B0u) { return; }
    }
    ctx->pc = 0x1014B0u;
    // 0x1014b0: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x1014B0u;
    SET_GPR_U32(ctx, 31, 0x1014B8u);
    ctx->pc = 0x1082E8u;
    if (runtime->hasFunction(0x1082E8u)) {
        auto targetFn = runtime->lookupFunction(0x1082E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B8u; }
        if (ctx->pc != 0x1014B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B8u; }
        if (ctx->pc != 0x1014B8u) { return; }
    }
    ctx->pc = 0x1014B8u;
    // 0x1014b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1014b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014bc: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x1014BCu;
    SET_GPR_U32(ctx, 31, 0x1014C4u);
    ctx->pc = 0x1014C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014BCu;
            // 0x1014c0: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014C4u; }
        if (ctx->pc != 0x1014C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014C4u; }
        if (ctx->pc != 0x1014C4u) { return; }
    }
    ctx->pc = 0x1014C4u;
    // 0x1014c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1014c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014c8: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x1014C8u;
    SET_GPR_U32(ctx, 31, 0x1014D0u);
    ctx->pc = 0x1014CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014C8u;
            // 0x1014cc: 0x240500af  addiu       $a1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D0u; }
        if (ctx->pc != 0x1014D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D0u; }
        if (ctx->pc != 0x1014D0u) { return; }
    }
    ctx->pc = 0x1014D0u;
    // 0x1014d0: 0xc0414e2  jal         func_105388
    ctx->pc = 0x1014D0u;
    SET_GPR_U32(ctx, 31, 0x1014D8u);
    ctx->pc = 0x1014D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1014D0u;
            // 0x1014d4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D8u; }
        if (ctx->pc != 0x1014D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D8u; }
        if (ctx->pc != 0x1014D8u) { return; }
    }
    ctx->pc = 0x1014D8u;
    // 0x1014d8: 0x8f8280bc  lw          $v0, -0x7F44($gp)
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x1014dc: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1014dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1014e0: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1014E0u;
    {
        const bool branch_taken_0x1014e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1014e0) {
            ctx->pc = 0x1014E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1014E0u;
            // 0x1014e4: 0x26350001  addiu       $s5, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1014A0u;
            goto label_1014a0;
        }
    }
    ctx->pc = 0x1014E8u;
label_1014e8:
    // 0x1014e8: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1014E8u;
    SET_GPR_U32(ctx, 31, 0x1014F0u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014F0u; }
        if (ctx->pc != 0x1014F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014F0u; }
        if (ctx->pc != 0x1014F0u) { return; }
    }
    ctx->pc = 0x1014F0u;
    // 0x1014f0: 0xc042074  jal         func_1081D0
    ctx->pc = 0x1014F0u;
    SET_GPR_U32(ctx, 31, 0x1014F8u);
    ctx->pc = 0x1081D0u;
    if (runtime->hasFunction(0x1081D0u)) {
        auto targetFn = runtime->lookupFunction(0x1081D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014F8u; }
        if (ctx->pc != 0x1014F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014F8u; }
        if (ctx->pc != 0x1014F8u) { return; }
    }
    ctx->pc = 0x1014F8u;
    // 0x1014f8: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x1014F8u;
    SET_GPR_U32(ctx, 31, 0x101500u);
    ctx->pc = 0x1082E8u;
    if (runtime->hasFunction(0x1082E8u)) {
        auto targetFn = runtime->lookupFunction(0x1082E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101500u; }
        if (ctx->pc != 0x101500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101500u; }
        if (ctx->pc != 0x101500u) { return; }
    }
    ctx->pc = 0x101500u;
    // 0x101500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101504: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x101504u;
    SET_GPR_U32(ctx, 31, 0x10150Cu);
    ctx->pc = 0x101508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101504u;
            // 0x101508: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10150Cu; }
        if (ctx->pc != 0x10150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10150Cu; }
        if (ctx->pc != 0x10150Cu) { return; }
    }
    ctx->pc = 0x10150Cu;
    // 0x10150c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101510: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x101510u;
    SET_GPR_U32(ctx, 31, 0x101518u);
    ctx->pc = 0x101514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101510u;
            // 0x101514: 0x240500af  addiu       $a1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101518u; }
        if (ctx->pc != 0x101518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101518u; }
        if (ctx->pc != 0x101518u) { return; }
    }
    ctx->pc = 0x101518u;
    // 0x101518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10151c: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x10151Cu;
    SET_GPR_U32(ctx, 31, 0x101524u);
    ctx->pc = 0x101520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10151Cu;
            // 0x101520: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101524u; }
        if (ctx->pc != 0x101524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101524u; }
        if (ctx->pc != 0x101524u) { return; }
    }
    ctx->pc = 0x101524u;
    // 0x101524: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101524u;
    SET_GPR_U32(ctx, 31, 0x10152Cu);
    ctx->pc = 0x101528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101524u;
            // 0x101528: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10152Cu; }
        if (ctx->pc != 0x10152Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10152Cu; }
        if (ctx->pc != 0x10152Cu) { return; }
    }
    ctx->pc = 0x10152Cu;
    // 0x10152c: 0x8f8280c8  lw          $v0, -0x7F38($gp)
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x101530: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x101530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x101534: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x101534u;
    {
        const bool branch_taken_0x101534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101534) {
            ctx->pc = 0x101538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101534u;
            // 0x101538: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1014E8u;
            goto label_1014e8;
        }
    }
    ctx->pc = 0x10153Cu;
    // 0x10153c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10153Cu;
    {
        const bool branch_taken_0x10153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10153c) {
            ctx->pc = 0x10154Cu;
            goto label_10154c;
        }
    }
    ctx->pc = 0x101544u;
    // 0x101544: 0x0  nop
    ctx->pc = 0x101544u;
    // NOP
label_101548:
    // 0x101548: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x101548u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10154c:
    // 0x10154c: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x10154Cu;
    SET_GPR_U32(ctx, 31, 0x101554u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101554u; }
        if (ctx->pc != 0x101554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101554u; }
        if (ctx->pc != 0x101554u) { return; }
    }
    ctx->pc = 0x101554u;
    // 0x101554: 0xc042074  jal         func_1081D0
    ctx->pc = 0x101554u;
    SET_GPR_U32(ctx, 31, 0x10155Cu);
    ctx->pc = 0x1081D0u;
    if (runtime->hasFunction(0x1081D0u)) {
        auto targetFn = runtime->lookupFunction(0x1081D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10155Cu; }
        if (ctx->pc != 0x10155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10155Cu; }
        if (ctx->pc != 0x10155Cu) { return; }
    }
    ctx->pc = 0x10155Cu;
    // 0x10155c: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x10155Cu;
    SET_GPR_U32(ctx, 31, 0x101564u);
    ctx->pc = 0x1082E8u;
    if (runtime->hasFunction(0x1082E8u)) {
        auto targetFn = runtime->lookupFunction(0x1082E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101564u; }
        if (ctx->pc != 0x101564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101564u; }
        if (ctx->pc != 0x101564u) { return; }
    }
    ctx->pc = 0x101564u;
    // 0x101564: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101568: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x101568u;
    SET_GPR_U32(ctx, 31, 0x101570u);
    ctx->pc = 0x10156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101568u;
            // 0x10156c: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101570u; }
        if (ctx->pc != 0x101570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101570u; }
        if (ctx->pc != 0x101570u) { return; }
    }
    ctx->pc = 0x101570u;
    // 0x101570: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101574: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x101574u;
    SET_GPR_U32(ctx, 31, 0x10157Cu);
    ctx->pc = 0x101578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101574u;
            // 0x101578: 0x240500af  addiu       $a1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10157Cu; }
        if (ctx->pc != 0x10157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10157Cu; }
        if (ctx->pc != 0x10157Cu) { return; }
    }
    ctx->pc = 0x10157Cu;
    // 0x10157c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101580: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 31, 0x101588u);
    ctx->pc = 0x101584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101580u;
            // 0x101584: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101588u; }
        if (ctx->pc != 0x101588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101588u; }
        if (ctx->pc != 0x101588u) { return; }
    }
    ctx->pc = 0x101588u;
    // 0x101588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10158c: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x10158Cu;
    SET_GPR_U32(ctx, 31, 0x101594u);
    ctx->pc = 0x101590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10158Cu;
            // 0x101590: 0x24050113  addiu       $a1, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101594u; }
        if (ctx->pc != 0x101594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101594u; }
        if (ctx->pc != 0x101594u) { return; }
    }
    ctx->pc = 0x101594u;
    // 0x101594: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101594u;
    SET_GPR_U32(ctx, 31, 0x10159Cu);
    ctx->pc = 0x101598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101594u;
            // 0x101598: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10159Cu; }
        if (ctx->pc != 0x10159Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10159Cu; }
        if (ctx->pc != 0x10159Cu) { return; }
    }
    ctx->pc = 0x10159Cu;
    // 0x10159c: 0x8f8280c4  lw          $v0, -0x7F3C($gp)
    ctx->pc = 0x10159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x1015a0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1015a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1015a4: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1015A4u;
    {
        const bool branch_taken_0x1015a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1015A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1015A4u;
            // 0x1015a8: 0x3c030014  lui         $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015a4) {
            ctx->pc = 0x101548u;
            goto label_101548;
        }
    }
    ctx->pc = 0x1015ACu;
    // 0x1015ac: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1015acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1015b0: 0x24505be8  addiu       $s0, $v0, 0x5BE8
    ctx->pc = 0x1015b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23528));
    // 0x1015b4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1015b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015b8: 0x2472e100  addiu       $s2, $v1, -0x1F00
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959360));
    // 0x1015bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1015c0:
    // 0x1015c0: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1015C0u;
    SET_GPR_U32(ctx, 31, 0x1015C8u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015C8u; }
        if (ctx->pc != 0x1015C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015C8u; }
        if (ctx->pc != 0x1015C8u) { return; }
    }
    ctx->pc = 0x1015C8u;
    // 0x1015c8: 0xc042074  jal         func_1081D0
    ctx->pc = 0x1015C8u;
    SET_GPR_U32(ctx, 31, 0x1015D0u);
    ctx->pc = 0x1081D0u;
    if (runtime->hasFunction(0x1081D0u)) {
        auto targetFn = runtime->lookupFunction(0x1081D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D0u; }
        if (ctx->pc != 0x1015D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D0u; }
        if (ctx->pc != 0x1015D0u) { return; }
    }
    ctx->pc = 0x1015D0u;
    // 0x1015d0: 0xc0420ba  jal         func_1082E8
    ctx->pc = 0x1015D0u;
    SET_GPR_U32(ctx, 31, 0x1015D8u);
    ctx->pc = 0x1082E8u;
    if (runtime->hasFunction(0x1082E8u)) {
        auto targetFn = runtime->lookupFunction(0x1082E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D8u; }
        if (ctx->pc != 0x1015D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D8u; }
        if (ctx->pc != 0x1015D8u) { return; }
    }
    ctx->pc = 0x1015D8u;
    // 0x1015d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1015dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1015dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1015e0: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x1015E0u;
    SET_GPR_U32(ctx, 31, 0x1015E8u);
    ctx->pc = 0x1015E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1015E0u;
            // 0x1015e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (runtime->hasFunction(0x10A4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10A4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015E8u; }
        if (ctx->pc != 0x1015E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetScale_0x10a4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015E8u; }
        if (ctx->pc != 0x1015E8u) { return; }
    }
    ctx->pc = 0x1015E8u;
    // 0x1015e8: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x1015e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x1015ec: 0xc042924  jal         func_10A490
    ctx->pc = 0x1015ECu;
    SET_GPR_U32(ctx, 31, 0x1015F4u);
    ctx->pc = 0x1015F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1015ECu;
            // 0x1015f0: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A490u;
    if (runtime->hasFunction(0x10A490u)) {
        auto targetFn = runtime->lookupFunction(0x10A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015F4u; }
        if (ctx->pc != 0x1015F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetColour_0x10a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015F4u; }
        if (ctx->pc != 0x1015F4u) { return; }
    }
    ctx->pc = 0x1015F4u;
    // 0x1015f4: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x1015F4u;
    SET_GPR_U32(ctx, 31, 0x1015FCu);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015FCu; }
        if (ctx->pc != 0x1015FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015FCu; }
        if (ctx->pc != 0x1015FCu) { return; }
    }
    ctx->pc = 0x1015FCu;
    // 0x1015fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1015fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101600: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x101600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x101604: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x101608: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10160c: 0xc04269a  jal         func_109A68
    ctx->pc = 0x10160Cu;
    SET_GPR_U32(ctx, 31, 0x101614u);
    ctx->pc = 0x101610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10160Cu;
            // 0x101610: 0x24475be0  addiu       $a3, $v0, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 23520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101614u; }
        if (ctx->pc != 0x101614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101614u; }
        if (ctx->pc != 0x101614u) { return; }
    }
    ctx->pc = 0x101614u;
    // 0x101614: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101614u;
    SET_GPR_U32(ctx, 31, 0x10161Cu);
    ctx->pc = 0x101618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101614u;
            // 0x101618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10161Cu; }
        if (ctx->pc != 0x10161Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10161Cu; }
        if (ctx->pc != 0x10161Cu) { return; }
    }
    ctx->pc = 0x10161Cu;
    // 0x10161c: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x10161Cu;
    SET_GPR_U32(ctx, 31, 0x101624u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101624u; }
        if (ctx->pc != 0x101624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101624u; }
        if (ctx->pc != 0x101624u) { return; }
    }
    ctx->pc = 0x101624u;
    // 0x101624: 0x8f8880c0  lw          $t0, -0x7F40($gp)
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x101628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10162c: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x101630: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x101630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x101634: 0xc04269a  jal         func_109A68
    ctx->pc = 0x101634u;
    SET_GPR_U32(ctx, 31, 0x10163Cu);
    ctx->pc = 0x101638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101634u;
            // 0x101638: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10163Cu; }
        if (ctx->pc != 0x10163Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10163Cu; }
        if (ctx->pc != 0x10163Cu) { return; }
    }
    ctx->pc = 0x10163Cu;
    // 0x10163c: 0xc04295e  jal         func_10A578
    ctx->pc = 0x10163Cu;
    SET_GPR_U32(ctx, 31, 0x101644u);
    ctx->pc = 0x101640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10163Cu;
            // 0x101640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101644u; }
        if (ctx->pc != 0x101644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101644u; }
        if (ctx->pc != 0x101644u) { return; }
    }
    ctx->pc = 0x101644u;
    // 0x101644: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101644u;
    SET_GPR_U32(ctx, 31, 0x10164Cu);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10164Cu; }
        if (ctx->pc != 0x10164Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10164Cu; }
        if (ctx->pc != 0x10164Cu) { return; }
    }
    ctx->pc = 0x10164Cu;
    // 0x10164c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101650: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x101650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x101654: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x101654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x101658: 0xc04269a  jal         func_109A68
    ctx->pc = 0x101658u;
    SET_GPR_U32(ctx, 31, 0x101660u);
    ctx->pc = 0x10165Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101658u;
            // 0x10165c: 0x27c75bf0  addiu       $a3, $fp, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101660u; }
        if (ctx->pc != 0x101660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101660u; }
        if (ctx->pc != 0x101660u) { return; }
    }
    ctx->pc = 0x101660u;
    // 0x101660: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101660u;
    SET_GPR_U32(ctx, 31, 0x101668u);
    ctx->pc = 0x101664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101660u;
            // 0x101664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101668u; }
        if (ctx->pc != 0x101668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101668u; }
        if (ctx->pc != 0x101668u) { return; }
    }
    ctx->pc = 0x101668u;
    // 0x101668: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101668u;
    SET_GPR_U32(ctx, 31, 0x101670u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101670u; }
        if (ctx->pc != 0x101670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101670u; }
        if (ctx->pc != 0x101670u) { return; }
    }
    ctx->pc = 0x101670u;
    // 0x101670: 0x8f8880bc  lw          $t0, -0x7F44($gp)
    ctx->pc = 0x101670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x101674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101678: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x101678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x10167c: 0x240600ae  addiu       $a2, $zero, 0xAE
    ctx->pc = 0x10167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x101680: 0xc04269a  jal         func_109A68
    ctx->pc = 0x101680u;
    SET_GPR_U32(ctx, 31, 0x101688u);
    ctx->pc = 0x101684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101680u;
            // 0x101684: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101688u; }
        if (ctx->pc != 0x101688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101688u; }
        if (ctx->pc != 0x101688u) { return; }
    }
    ctx->pc = 0x101688u;
    // 0x101688: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101688u;
    SET_GPR_U32(ctx, 31, 0x101690u);
    ctx->pc = 0x10168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101688u;
            // 0x10168c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101690u; }
        if (ctx->pc != 0x101690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101690u; }
        if (ctx->pc != 0x101690u) { return; }
    }
    ctx->pc = 0x101690u;
    // 0x101690: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101690u;
    SET_GPR_U32(ctx, 31, 0x101698u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101698u; }
        if (ctx->pc != 0x101698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101698u; }
        if (ctx->pc != 0x101698u) { return; }
    }
    ctx->pc = 0x101698u;
    // 0x101698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10169c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1016a0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1016a4: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1016a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1016a8: 0xc04269a  jal         func_109A68
    ctx->pc = 0x1016A8u;
    SET_GPR_U32(ctx, 31, 0x1016B0u);
    ctx->pc = 0x1016ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016A8u;
            // 0x1016ac: 0x24472ae8  addiu       $a3, $v0, 0x2AE8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B0u; }
        if (ctx->pc != 0x1016B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B0u; }
        if (ctx->pc != 0x1016B0u) { return; }
    }
    ctx->pc = 0x1016B0u;
    // 0x1016b0: 0xc04295e  jal         func_10A578
    ctx->pc = 0x1016B0u;
    SET_GPR_U32(ctx, 31, 0x1016B8u);
    ctx->pc = 0x1016B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016B0u;
            // 0x1016b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B8u; }
        if (ctx->pc != 0x1016B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B8u; }
        if (ctx->pc != 0x1016B8u) { return; }
    }
    ctx->pc = 0x1016B8u;
    // 0x1016b8: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x1016B8u;
    SET_GPR_U32(ctx, 31, 0x1016C0u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016C0u; }
        if (ctx->pc != 0x1016C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016C0u; }
        if (ctx->pc != 0x1016C0u) { return; }
    }
    ctx->pc = 0x1016C0u;
    // 0x1016c0: 0x8f8880c8  lw          $t0, -0x7F38($gp)
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1016c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1016c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c8: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x1016c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1016cc: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1016d0: 0xc04269a  jal         func_109A68
    ctx->pc = 0x1016D0u;
    SET_GPR_U32(ctx, 31, 0x1016D8u);
    ctx->pc = 0x1016D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016D0u;
            // 0x1016d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016D8u; }
        if (ctx->pc != 0x1016D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016D8u; }
        if (ctx->pc != 0x1016D8u) { return; }
    }
    ctx->pc = 0x1016D8u;
    // 0x1016d8: 0xc04295e  jal         func_10A578
    ctx->pc = 0x1016D8u;
    SET_GPR_U32(ctx, 31, 0x1016E0u);
    ctx->pc = 0x1016DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016D8u;
            // 0x1016dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016E0u; }
        if (ctx->pc != 0x1016E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016E0u; }
        if (ctx->pc != 0x1016E0u) { return; }
    }
    ctx->pc = 0x1016E0u;
    // 0x1016e0: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x1016E0u;
    SET_GPR_U32(ctx, 31, 0x1016E8u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016E8u; }
        if (ctx->pc != 0x1016E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016E8u; }
        if (ctx->pc != 0x1016E8u) { return; }
    }
    ctx->pc = 0x1016E8u;
    // 0x1016e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1016e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016ec: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1016ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1016f0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1016f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x1016f4: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1016f8: 0xc04269a  jal         func_109A68
    ctx->pc = 0x1016F8u;
    SET_GPR_U32(ctx, 31, 0x101700u);
    ctx->pc = 0x1016FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1016F8u;
            // 0x1016fc: 0x24472af8  addiu       $a3, $v0, 0x2AF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101700u; }
        if (ctx->pc != 0x101700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101700u; }
        if (ctx->pc != 0x101700u) { return; }
    }
    ctx->pc = 0x101700u;
    // 0x101700: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101700u;
    SET_GPR_U32(ctx, 31, 0x101708u);
    ctx->pc = 0x101704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101700u;
            // 0x101704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101708u; }
        if (ctx->pc != 0x101708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101708u; }
        if (ctx->pc != 0x101708u) { return; }
    }
    ctx->pc = 0x101708u;
    // 0x101708: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x101708u;
    SET_GPR_U32(ctx, 31, 0x101710u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101710u; }
        if (ctx->pc != 0x101710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101710u; }
        if (ctx->pc != 0x101710u) { return; }
    }
    ctx->pc = 0x101710u;
    // 0x101710: 0x8f8880c4  lw          $t0, -0x7F3C($gp)
    ctx->pc = 0x101710u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x101714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101718: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x10171c: 0x24060112  addiu       $a2, $zero, 0x112
    ctx->pc = 0x10171cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    // 0x101720: 0xc04269a  jal         func_109A68
    ctx->pc = 0x101720u;
    SET_GPR_U32(ctx, 31, 0x101728u);
    ctx->pc = 0x101724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101720u;
            // 0x101724: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109A68u;
    if (runtime->hasFunction(0x109A68u)) {
        auto targetFn = runtime->lookupFunction(0x109A68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101728u; }
        if (ctx->pc != 0x101728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101728u; }
        if (ctx->pc != 0x101728u) { return; }
    }
    ctx->pc = 0x101728u;
    // 0x101728: 0xc04295e  jal         func_10A578
    ctx->pc = 0x101728u;
    SET_GPR_U32(ctx, 31, 0x101730u);
    ctx->pc = 0x10172Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101728u;
            // 0x10172c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101730u; }
        if (ctx->pc != 0x101730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101730u; }
        if (ctx->pc != 0x101730u) { return; }
    }
    ctx->pc = 0x101730u;
    // 0x101730: 0x8f8280ac  lw          $v0, -0x7F54($gp)
    ctx->pc = 0x101730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x101734: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x101734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x101738: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x101738u;
    {
        const bool branch_taken_0x101738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101738u;
            // 0x10173c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101738) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x101740u;
    // 0x101740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101744: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x101744u;
    SET_GPR_U32(ctx, 31, 0x10174Cu);
    ctx->pc = 0x101748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101744u;
            // 0x101748: 0x2666e100  addiu       $a2, $s3, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10174Cu; }
        if (ctx->pc != 0x10174Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10174Cu; }
        if (ctx->pc != 0x10174Cu) { return; }
    }
    ctx->pc = 0x10174Cu;
    // 0x10174c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101750: 0xc04591e  jal         func_116478
    ctx->pc = 0x101750u;
    SET_GPR_U32(ctx, 31, 0x101758u);
    ctx->pc = 0x101754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101750u;
            // 0x101754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101758u; }
        if (ctx->pc != 0x101758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101758u; }
        if (ctx->pc != 0x101758u) { return; }
    }
    ctx->pc = 0x101758u;
    // 0x101758: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10175c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x101760: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101760u;
    {
        const bool branch_taken_0x101760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x101764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101760u;
            // 0x101764: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101760) {
            ctx->pc = 0x10177Cu;
            goto label_10177c;
        }
    }
    ctx->pc = 0x101768u;
    // 0x101768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x101768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10176c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10176Cu;
    {
        const bool branch_taken_0x10176c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10176c) {
            ctx->pc = 0x101770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10176Cu;
            // 0x101770: 0x92420002  lbu         $v0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101780u;
            goto label_101780;
        }
    }
    ctx->pc = 0x101774u;
    // 0x101774: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x101774u;
    {
        const bool branch_taken_0x101774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101774u;
            // 0x101778: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101774) {
            ctx->pc = 0x101790u;
            goto label_101790;
        }
    }
    ctx->pc = 0x10177Cu;
label_10177c:
    // 0x10177c: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x10177cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_101780:
    // 0x101780: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x101780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x101784: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x101788: 0x431027  nor         $v0, $v0, $v1
    ctx->pc = 0x101788u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10178c: 0xa7828112  sh          $v0, -0x7EEE($gp)
    ctx->pc = 0x10178cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 2));
label_101790:
    // 0x101790: 0x97828112  lhu         $v0, -0x7EEE($gp)
    ctx->pc = 0x101790u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x101794: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x101794u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)64u)));
    // 0x101798: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101798u;
    {
        const bool branch_taken_0x101798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10179Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101798u;
            // 0x10179c: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101798) {
            ctx->pc = 0x1017B8u;
            goto label_1017b8;
        }
    }
    ctx->pc = 0x1017A0u;
    // 0x1017a0: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1017a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1017a4: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x1017a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1017a8: 0x50510009  beql        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1017A8u;
    {
        const bool branch_taken_0x1017a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1017a8) {
            ctx->pc = 0x1017ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1017A8u;
            // 0x1017ac: 0xa4600012  sh          $zero, 0x12($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017B0u;
    // 0x1017b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1017B0u;
    {
        const bool branch_taken_0x1017b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1017b0) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017B8u;
label_1017b8:
    // 0x1017b8: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1017bc: 0x84620012  lh          $v0, 0x12($v1)
    ctx->pc = 0x1017bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1017c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1017C0u;
    {
        const bool branch_taken_0x1017c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1017c0) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017C8u;
    // 0x1017c8: 0xa4710012  sh          $s1, 0x12($v1)
    ctx->pc = 0x1017c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 17));
    // 0x1017cc: 0xaf918098  sw          $s1, -0x7F68($gp)
    ctx->pc = 0x1017ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934680), GPR_U32(ctx, 17));
label_1017d0:
    // 0x1017d0: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x1017D0u;
    SET_GPR_U32(ctx, 31, 0x1017D8u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017D8u; }
        if (ctx->pc != 0x1017D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017D8u; }
        if (ctx->pc != 0x1017D8u) { return; }
    }
    ctx->pc = 0x1017D8u;
    // 0x1017d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1017d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017dc: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x1017DCu;
    SET_GPR_U32(ctx, 31, 0x1017E4u);
    ctx->pc = 0x1017E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017DCu;
            // 0x1017e0: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017E4u; }
        if (ctx->pc != 0x1017E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017E4u; }
        if (ctx->pc != 0x1017E4u) { return; }
    }
    ctx->pc = 0x1017E4u;
    // 0x1017e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1017e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017e8: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017E8u;
            // 0x1017ec: 0x240500af  addiu       $a1, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017F0u; }
        if (ctx->pc != 0x1017F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017F0u; }
        if (ctx->pc != 0x1017F0u) { return; }
    }
    ctx->pc = 0x1017F0u;
    // 0x1017f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1017f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017f4: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x1017F4u;
    SET_GPR_U32(ctx, 31, 0x1017FCu);
    ctx->pc = 0x1017F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1017F4u;
            // 0x1017f8: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017FCu; }
        if (ctx->pc != 0x1017FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017FCu; }
        if (ctx->pc != 0x1017FCu) { return; }
    }
    ctx->pc = 0x1017FCu;
    // 0x1017fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1017fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101800: 0xc0420f0  jal         func_1083C0
    ctx->pc = 0x101800u;
    SET_GPR_U32(ctx, 31, 0x101808u);
    ctx->pc = 0x101804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101800u;
            // 0x101804: 0x24050113  addiu       $a1, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083C0u;
    if (runtime->hasFunction(0x1083C0u)) {
        auto targetFn = runtime->lookupFunction(0x1083C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101808u; }
        if (ctx->pc != 0x101808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101808u; }
        if (ctx->pc != 0x101808u) { return; }
    }
    ctx->pc = 0x101808u;
    // 0x101808: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101808u;
    SET_GPR_U32(ctx, 31, 0x101810u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101810u; }
        if (ctx->pc != 0x101810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101810u; }
        if (ctx->pc != 0x101810u) { return; }
    }
    ctx->pc = 0x101810u;
    // 0x101810: 0x8f8280ac  lw          $v0, -0x7F54($gp)
    ctx->pc = 0x101810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x101814: 0x8f838098  lw          $v1, -0x7F68($gp)
    ctx->pc = 0x101814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x101818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10181c: 0x1060ff68  beqz        $v1, . + 4 + (-0x98 << 2)
    ctx->pc = 0x10181Cu;
    {
        const bool branch_taken_0x10181c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10181Cu;
            // 0x101820: 0xaf8280ac  sw          $v0, -0x7F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10181c) {
            ctx->pc = 0x1015C0u;
            goto label_1015c0;
        }
    }
    ctx->pc = 0x101824u;
    // 0x101824: 0xaf80813c  sw          $zero, -0x7EC4($gp)
    ctx->pc = 0x101824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 0));
    // 0x101828: 0xaf8080a4  sw          $zero, -0x7F5C($gp)
    ctx->pc = 0x101828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 0));
    // 0x10182c: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x10182cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x101830: 0xaf80816c  sw          $zero, -0x7E94($gp)
    ctx->pc = 0x101830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934892), GPR_U32(ctx, 0));
    // 0x101834: 0xaf8080c4  sw          $zero, -0x7F3C($gp)
    ctx->pc = 0x101834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 0));
    // 0x101838: 0xaf8080c8  sw          $zero, -0x7F38($gp)
    ctx->pc = 0x101838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934728), GPR_U32(ctx, 0));
    // 0x10183c: 0xaf8080bc  sw          $zero, -0x7F44($gp)
    ctx->pc = 0x10183cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934716), GPR_U32(ctx, 0));
    // 0x101840: 0xc042896  jal         func_10A258
    ctx->pc = 0x101840u;
    SET_GPR_U32(ctx, 31, 0x101848u);
    ctx->pc = 0x101844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101840u;
            // 0x101844: 0xaf8080c0  sw          $zero, -0x7F40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A258u;
    if (runtime->hasFunction(0x10A258u)) {
        auto targetFn = runtime->lookupFunction(0x10A258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101848u; }
        if (ctx->pc != 0x101848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFree_0x10a258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101848u; }
        if (ctx->pc != 0x101848u) { return; }
    }
    ctx->pc = 0x101848u;
    // 0x101848: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x101848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10184c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10184cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101850: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x101850u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101854: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x101854u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101858: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x101858u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10185c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10185cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101860: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x101860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101864: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x101864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101868: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x101868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10186c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10186cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101870: 0x80410c6  j           func_104318
    ctx->pc = 0x101870u;
    ctx->pc = 0x101874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101870u;
            // 0x101874: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104318u;
    if (runtime->hasFunction(0x104318u)) {
        auto targetFn = runtime->lookupFunction(0x104318u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        loadPackage_0x104318(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x101878u;
}
