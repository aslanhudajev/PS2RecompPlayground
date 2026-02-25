#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeFrameMakePacketInStatic
// Address: 0x118648 - 0x118808
void ShapeFrameMakePacketInStatic_0x118648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeFrameMakePacketInStatic_0x118648");
#endif

    ctx->pc = 0x118648u;

    // 0x118648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11864c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118650: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x118650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x118654: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x118654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118658: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11865c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118660: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118664: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x118664u;
    SET_GPR_U32(ctx, 31, 0x11866Cu);
    ctx->pc = 0x118668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118664u;
            // 0x118668: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11866Cu; }
        if (ctx->pc != 0x11866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11866Cu; }
        if (ctx->pc != 0x11866Cu) { return; }
    }
    ctx->pc = 0x11866Cu;
    // 0x11866c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11866cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118670: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x118670u;
    {
        const bool branch_taken_0x118670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118670u;
            // 0x118674: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118670) {
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x118678u;
    // 0x118678: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x118678u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
    // 0x11867c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11867cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x118680: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x118680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x118684: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x118684u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)32769u)));
    // 0x118688: 0x2682fc20  addiu       $v0, $s4, -0x3E0
    ctx->pc = 0x118688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966304));
    // 0x11868c: 0xfe84fc20  sd          $a0, -0x3E0($s4)
    ctx->pc = 0x11868cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294966304), GPR_U64(ctx, 4));
    // 0x118690: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x118690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x118694: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x118694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x118698: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x118698u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x11869c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186a0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1186a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1186a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1186a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1186a8: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1186A8u;
    SET_GPR_U32(ctx, 31, 0x1186B0u);
    ctx->pc = 0x1186ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186A8u;
            // 0x1186ac: 0xfc400010  sd          $zero, 0x10($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186B0u; }
        if (ctx->pc != 0x1186B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186B0u; }
        if (ctx->pc != 0x1186B0u) { return; }
    }
    ctx->pc = 0x1186B0u;
    // 0x1186b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1186b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186b4: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1186B4u;
    {
        const bool branch_taken_0x1186b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1186B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186B4u;
            // 0x1186b8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186b4) {
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x1186BCu;
    // 0x1186bc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1186bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1186c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1186c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1186c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1186c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1186c8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1186C8u;
    {
        const bool branch_taken_0x1186c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186C8u;
            // 0x1186cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186c8) {
            ctx->pc = 0x118788u;
            goto label_118788;
        }
    }
    ctx->pc = 0x1186D0u;
    // 0x1186d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1186d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1186d4: 0x0  nop
    ctx->pc = 0x1186d4u;
    // NOP
label_1186d8:
    // 0x1186d8: 0xc0471a4  jal         func_11C690
    ctx->pc = 0x1186D8u;
    SET_GPR_U32(ctx, 31, 0x1186E0u);
    ctx->pc = 0x1186DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1186D8u;
            // 0x1186dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C690u;
    if (runtime->hasFunction(0x11C690u)) {
        auto targetFn = runtime->lookupFunction(0x11C690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186E0u; }
        if (ctx->pc != 0x1186E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMatrix_0x11c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1186E0u; }
        if (ctx->pc != 0x1186E0u) { return; }
    }
    ctx->pc = 0x1186E0u;
    // 0x1186e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1186e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186e4: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1186E4u;
    {
        const bool branch_taken_0x1186e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1186e4) {
            ctx->pc = 0x1186E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1186E4u;
            // 0x1186e8: 0x8e430034  lw          $v1, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118700u;
            goto label_118700;
        }
    }
    ctx->pc = 0x1186ECu;
    // 0x1186ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1186ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1186f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1186f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1186f4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1186F4u;
    {
        const bool branch_taken_0x1186f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1186f4) {
            ctx->pc = 0x1186F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1186F4u;
            // 0x1186f8: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118774u;
            goto label_118774;
        }
    }
    ctx->pc = 0x1186FCu;
    // 0x1186fc: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1186fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_118700:
    // 0x118700: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x118700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118704: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118708: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x118708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11870c: 0x50930007  beql        $a0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x11870Cu;
    {
        const bool branch_taken_0x11870c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x11870c) {
            ctx->pc = 0x118710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11870Cu;
            // 0x118710: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11872Cu;
            goto label_11872c;
        }
    }
    ctx->pc = 0x118714u;
    // 0x118714: 0xc043de4  jal         func_10F790
    ctx->pc = 0x118714u;
    SET_GPR_U32(ctx, 31, 0x11871Cu);
    ctx->pc = 0x10F790u;
    if (runtime->hasFunction(0x10F790u)) {
        auto targetFn = runtime->lookupFunction(0x10F790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11871Cu; }
        if (ctx->pc != 0x11871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_CallID_0x10f790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11871Cu; }
        if (ctx->pc != 0x11871Cu) { return; }
    }
    ctx->pc = 0x11871Cu;
    // 0x11871c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11871cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118720: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x118720u;
    {
        const bool branch_taken_0x118720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118720u;
            // 0x118724: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118720) {
            ctx->pc = 0x1187E8u;
            goto label_1187e8;
        }
    }
    ctx->pc = 0x118728u;
    // 0x118728: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x118728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11872c:
    // 0x11872c: 0x10530010  beq         $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x11872Cu;
    {
        const bool branch_taken_0x11872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x118730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11872Cu;
            // 0x118730: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11872c) {
            ctx->pc = 0x118770u;
            goto label_118770;
        }
    }
    ctx->pc = 0x118734u;
    // 0x118734: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x118734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x118738: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x118738u;
    SET_GPR_U32(ctx, 31, 0x118740u);
    ctx->pc = 0x11873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118738u;
            // 0x11873c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118740u; }
        if (ctx->pc != 0x118740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118740u; }
        if (ctx->pc != 0x118740u) { return; }
    }
    ctx->pc = 0x118740u;
    // 0x118740: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118744: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x118744u;
    {
        const bool branch_taken_0x118744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118744u;
            // 0x118748: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118744) {
            ctx->pc = 0x1187E8u;
            goto label_1187e8;
        }
    }
    ctx->pc = 0x11874Cu;
    // 0x11874c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x118750: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x118750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x118754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x118758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11875c: 0xc043de4  jal         func_10F790
    ctx->pc = 0x11875Cu;
    SET_GPR_U32(ctx, 31, 0x118764u);
    ctx->pc = 0x118760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11875Cu;
            // 0x118760: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F790u;
    if (runtime->hasFunction(0x10F790u)) {
        auto targetFn = runtime->lookupFunction(0x10F790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118764u; }
        if (ctx->pc != 0x118764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_CallID_0x10f790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118764u; }
        if (ctx->pc != 0x118764u) { return; }
    }
    ctx->pc = 0x118764u;
    // 0x118764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118768: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x118768u;
    {
        const bool branch_taken_0x118768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11876Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118768u;
            // 0x11876c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118768) {
            ctx->pc = 0x1187E8u;
            goto label_1187e8;
        }
    }
    ctx->pc = 0x118770u;
label_118770:
    // 0x118770: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x118770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_118774:
    // 0x118774: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x118778: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x118778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11877c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11877cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118780: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x118780u;
    {
        const bool branch_taken_0x118780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118780) {
            ctx->pc = 0x1186D8u;
            goto label_1186d8;
        }
    }
    ctx->pc = 0x118788u;
label_118788:
    // 0x118788: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x118788u;
    SET_GPR_U32(ctx, 31, 0x118790u);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118790u; }
        if (ctx->pc != 0x118790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118790u; }
        if (ctx->pc != 0x118790u) { return; }
    }
    ctx->pc = 0x118790u;
    // 0x118790: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118794: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x118794u;
    {
        const bool branch_taken_0x118794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118794u;
            // 0x118798: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118794) {
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x11879Cu;
    // 0x11879c: 0x2682fc20  addiu       $v0, $s4, -0x3E0
    ctx->pc = 0x11879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966304));
    // 0x1187a0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1187a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1187a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1187a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1187a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1187a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1187ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1187acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1187b0: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x1187b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32769u)));
    // 0x1187b4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1187b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1187b8: 0xfc440028  sd          $a0, 0x28($v0)
    ctx->pc = 0x1187b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x1187bc: 0xfc450030  sd          $a1, 0x30($v0)
    ctx->pc = 0x1187bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x1187c0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1187c4: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x1187c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x1187c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1187c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1187cc: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1187CCu;
    SET_GPR_U32(ctx, 31, 0x1187D4u);
    ctx->pc = 0x1187D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187CCu;
            // 0x1187d0: 0xfc460038  sd          $a2, 0x38($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187D4u; }
        if (ctx->pc != 0x1187D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187D4u; }
        if (ctx->pc != 0x1187D4u) { return; }
    }
    ctx->pc = 0x1187D4u;
    // 0x1187d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1187d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1187d8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1187D8u;
    {
        const bool branch_taken_0x1187d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1187DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1187D8u;
            // 0x1187dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187d8) {
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x1187E0u;
    // 0x1187e0: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1187E0u;
    SET_GPR_U32(ctx, 31, 0x1187E8u);
    ctx->pc = 0x1187E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1187E0u;
            // 0x1187e4: 0x2644003c  addiu       $a0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187E8u; }
        if (ctx->pc != 0x1187E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1187E8u; }
        if (ctx->pc != 0x1187E8u) { return; }
    }
    ctx->pc = 0x1187E8u;
label_1187e8:
    // 0x1187e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1187e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1187ec:
    // 0x1187ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1187ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1187f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1187f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1187f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1187f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1187f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1187f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1187fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1187fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118800: 0x3e00008  jr          $ra
    ctx->pc = 0x118800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118800u;
            // 0x118804: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1186D8u: goto label_1186d8;
            case 0x118700u: goto label_118700;
            case 0x11872Cu: goto label_11872c;
            case 0x118770u: goto label_118770;
            case 0x118774u: goto label_118774;
            case 0x118788u: goto label_118788;
            case 0x1187E8u: goto label_1187e8;
            case 0x1187ECu: goto label_1187ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118808u;
}
