#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeFrameMakeSubPacket
// Address: 0x1183f0 - 0x118484
void ShapeFrameMakeSubPacket_0x1183f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeFrameMakeSubPacket_0x1183f0");
#endif

    ctx->pc = 0x1183f0u;

    // 0x1183f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1183f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1183f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1183f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1183f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1183fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1183fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118404: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x118404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x118408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x118408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11840c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x11840cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118410: 0xc0435bc  jal         func_10D6F0
    ctx->pc = 0x118410u;
    SET_GPR_U32(ctx, 31, 0x118418u);
    ctx->pc = 0x118414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118410u;
            // 0x118414: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D6F0u;
    if (runtime->hasFunction(0x10D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118418u; }
        if (ctx->pc != 0x118418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemAlign_0x10d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118418u; }
        if (ctx->pc != 0x118418u) { return; }
    }
    ctx->pc = 0x118418u;
    // 0x118418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118418u;
    {
        const bool branch_taken_0x118418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118418u;
            // 0x11841c: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118418) {
            ctx->pc = 0x118430u;
            goto label_118430;
        }
    }
    ctx->pc = 0x118420u;
    // 0x118420: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x118420u;
    SET_GPR_U32(ctx, 31, 0x118428u);
    ctx->pc = 0x118424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118420u;
            // 0x118424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118428u; }
        if (ctx->pc != 0x118428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118428u; }
        if (ctx->pc != 0x118428u) { return; }
    }
    ctx->pc = 0x118428u;
    // 0x118428: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x118428u;
    {
        const bool branch_taken_0x118428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118428u;
            // 0x11842c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118428) {
            ctx->pc = 0x118474u;
            goto label_118474;
        }
    }
    ctx->pc = 0x118430u;
label_118430:
    // 0x118430: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118434: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x118434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x118438: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x118438u;
    {
        const bool branch_taken_0x118438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118438u;
            // 0x11843c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118438) {
            ctx->pc = 0x11846Cu;
            goto label_11846c;
        }
    }
    ctx->pc = 0x118440u;
    // 0x118440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118444: 0x0  nop
    ctx->pc = 0x118444u;
    // NOP
label_118448:
    // 0x118448: 0xc0460b8  jal         func_1182E0
    ctx->pc = 0x118448u;
    SET_GPR_U32(ctx, 31, 0x118450u);
    ctx->pc = 0x11844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118448u;
            // 0x11844c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1182E0u;
    if (runtime->hasFunction(0x1182E0u)) {
        auto targetFn = runtime->lookupFunction(0x1182E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118450u; }
        if (ctx->pc != 0x118450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeMakeShapePacket_0x1182e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118450u; }
        if (ctx->pc != 0x118450u) { return; }
    }
    ctx->pc = 0x118450u;
    // 0x118450: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118450u;
    {
        const bool branch_taken_0x118450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118450u;
            // 0x118454: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118450) {
            ctx->pc = 0x118470u;
            goto label_118470;
        }
    }
    ctx->pc = 0x118458u;
    // 0x118458: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x118458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11845c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x11845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x118460: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x118460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118464: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118464u;
    {
        const bool branch_taken_0x118464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118464u;
            // 0x118468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118464) {
            ctx->pc = 0x118448u;
            goto label_118448;
        }
    }
    ctx->pc = 0x11846Cu;
label_11846c:
    // 0x11846c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11846cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118470:
    // 0x118470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_118474:
    // 0x118474: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11847c: 0x3e00008  jr          $ra
    ctx->pc = 0x11847Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11847Cu;
            // 0x118480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118430u: goto label_118430;
            case 0x118448u: goto label_118448;
            case 0x11846Cu: goto label_11846c;
            case 0x118470u: goto label_118470;
            case 0x118474u: goto label_118474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118484u;
}
