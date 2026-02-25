#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeFrameMakePacket
// Address: 0x118488 - 0x118648
void ShapeFrameMakePacket_0x118488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeFrameMakePacket_0x118488");
#endif

    ctx->pc = 0x118488u;

    // 0x118488: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11848c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118490: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x118490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x118494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118498: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11849c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1184a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1184a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1184a4: 0xc043b36  jal         func_10ECD8
    ctx->pc = 0x1184A4u;
    SET_GPR_U32(ctx, 31, 0x1184ACu);
    ctx->pc = 0x1184A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184A4u;
            // 0x1184a8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ECD8u;
    if (runtime->hasFunction(0x10ECD8u)) {
        auto targetFn = runtime->lookupFunction(0x10ECD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184ACu; }
        if (ctx->pc != 0x1184ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_DynamicChainStart_0x10ecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184ACu; }
        if (ctx->pc != 0x1184ACu) { return; }
    }
    ctx->pc = 0x1184ACu;
    // 0x1184ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1184acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184b0: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1184B0u;
    {
        const bool branch_taken_0x1184b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1184B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1184B0u;
            // 0x1184b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184b0) {
            ctx->pc = 0x11862Cu;
            goto label_11862c;
        }
    }
    ctx->pc = 0x1184B8u;
    // 0x1184b8: 0x3c140021  lui         $s4, 0x21
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)33 << 16));
    // 0x1184bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1184bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1184c0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1184c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1184c4: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x1184c4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)32769u)));
    // 0x1184c8: 0x2682fc20  addiu       $v0, $s4, -0x3E0
    ctx->pc = 0x1184c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966304));
    // 0x1184cc: 0xfe84fc20  sd          $a0, -0x3E0($s4)
    ctx->pc = 0x1184ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294966304), GPR_U64(ctx, 4));
    // 0x1184d0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1184d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1184d4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1184d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1184d8: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x1184d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x1184dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1184dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184e0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1184e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1184e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1184e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1184e8: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1184E8u;
    SET_GPR_U32(ctx, 31, 0x1184F0u);
    ctx->pc = 0x1184ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184E8u;
            // 0x1184ec: 0xfc400010  sd          $zero, 0x10($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184F0u; }
        if (ctx->pc != 0x1184F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184F0u; }
        if (ctx->pc != 0x1184F0u) { return; }
    }
    ctx->pc = 0x1184F0u;
    // 0x1184f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1184f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184f4: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1184F4u;
    {
        const bool branch_taken_0x1184f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1184F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1184F4u;
            // 0x1184f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184f4) {
            ctx->pc = 0x11862Cu;
            goto label_11862c;
        }
    }
    ctx->pc = 0x1184FCu;
    // 0x1184fc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1184fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x118500: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x118500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x118504: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x118504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118508: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x118508u;
    {
        const bool branch_taken_0x118508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118508u;
            // 0x11850c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118508) {
            ctx->pc = 0x1185C8u;
            goto label_1185c8;
        }
    }
    ctx->pc = 0x118510u;
    // 0x118510: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x118510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x118514: 0x0  nop
    ctx->pc = 0x118514u;
    // NOP
label_118518:
    // 0x118518: 0xc0471a4  jal         func_11C690
    ctx->pc = 0x118518u;
    SET_GPR_U32(ctx, 31, 0x118520u);
    ctx->pc = 0x11851Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118518u;
            // 0x11851c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C690u;
    if (runtime->hasFunction(0x11C690u)) {
        auto targetFn = runtime->lookupFunction(0x11C690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118520u; }
        if (ctx->pc != 0x118520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMatrix_0x11c690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118520u; }
        if (ctx->pc != 0x118520u) { return; }
    }
    ctx->pc = 0x118520u;
    // 0x118520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118524: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x118524u;
    {
        const bool branch_taken_0x118524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x118524) {
            ctx->pc = 0x118528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118524u;
            // 0x118528: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118540u;
            goto label_118540;
        }
    }
    ctx->pc = 0x11852Cu;
    // 0x11852c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x118530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x118530u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x118534: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x118534u;
    {
        const bool branch_taken_0x118534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118534) {
            ctx->pc = 0x118538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118534u;
            // 0x118538: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1185B4u;
            goto label_1185b4;
        }
    }
    ctx->pc = 0x11853Cu;
    // 0x11853c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x11853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_118540:
    // 0x118540: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x118540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x118544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118548: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x118548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11854c: 0x50930007  beql        $a0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x11854Cu;
    {
        const bool branch_taken_0x11854c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x11854c) {
            ctx->pc = 0x118550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11854Cu;
            // 0x118550: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11856Cu;
            goto label_11856c;
        }
    }
    ctx->pc = 0x118554u;
    // 0x118554: 0xc043de4  jal         func_10F790
    ctx->pc = 0x118554u;
    SET_GPR_U32(ctx, 31, 0x11855Cu);
    ctx->pc = 0x10F790u;
    if (runtime->hasFunction(0x10F790u)) {
        auto targetFn = runtime->lookupFunction(0x10F790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11855Cu; }
        if (ctx->pc != 0x11855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_CallID_0x10f790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11855Cu; }
        if (ctx->pc != 0x11855Cu) { return; }
    }
    ctx->pc = 0x11855Cu;
    // 0x11855c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11855cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118560: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x118560u;
    {
        const bool branch_taken_0x118560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118560u;
            // 0x118564: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118560) {
            ctx->pc = 0x118628u;
            goto label_118628;
        }
    }
    ctx->pc = 0x118568u;
    // 0x118568: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x118568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11856c:
    // 0x11856c: 0x10530010  beq         $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x11856Cu;
    {
        const bool branch_taken_0x11856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x118570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11856Cu;
            // 0x118570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11856c) {
            ctx->pc = 0x1185B0u;
            goto label_1185b0;
        }
    }
    ctx->pc = 0x118574u;
    // 0x118574: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x118574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x118578: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x118578u;
    SET_GPR_U32(ctx, 31, 0x118580u);
    ctx->pc = 0x11857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118578u;
            // 0x11857c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118580u; }
        if (ctx->pc != 0x118580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118580u; }
        if (ctx->pc != 0x118580u) { return; }
    }
    ctx->pc = 0x118580u;
    // 0x118580: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118584: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x118584u;
    {
        const bool branch_taken_0x118584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x118588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118584u;
            // 0x118588: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118584) {
            ctx->pc = 0x118628u;
            goto label_118628;
        }
    }
    ctx->pc = 0x11858Cu;
    // 0x11858c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11858cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x118590: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x118590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x118594: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x118598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11859c: 0xc043de4  jal         func_10F790
    ctx->pc = 0x11859Cu;
    SET_GPR_U32(ctx, 31, 0x1185A4u);
    ctx->pc = 0x1185A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11859Cu;
            // 0x1185a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F790u;
    if (runtime->hasFunction(0x10F790u)) {
        auto targetFn = runtime->lookupFunction(0x10F790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1185A4u; }
        if (ctx->pc != 0x1185A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_CallID_0x10f790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1185A4u; }
        if (ctx->pc != 0x1185A4u) { return; }
    }
    ctx->pc = 0x1185A4u;
    // 0x1185a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1185a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185a8: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1185A8u;
    {
        const bool branch_taken_0x1185a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1185ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1185A8u;
            // 0x1185ac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185a8) {
            ctx->pc = 0x118628u;
            goto label_118628;
        }
    }
    ctx->pc = 0x1185B0u;
label_1185b0:
    // 0x1185b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1185b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1185b4:
    // 0x1185b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1185b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1185b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1185bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1185bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1185c0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1185C0u;
    {
        const bool branch_taken_0x1185c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1185c0) {
            ctx->pc = 0x118518u;
            goto label_118518;
        }
    }
    ctx->pc = 0x1185C8u;
label_1185c8:
    // 0x1185c8: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x1185C8u;
    SET_GPR_U32(ctx, 31, 0x1185D0u);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1185D0u; }
        if (ctx->pc != 0x1185D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1185D0u; }
        if (ctx->pc != 0x1185D0u) { return; }
    }
    ctx->pc = 0x1185D0u;
    // 0x1185d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1185d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185d4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1185D4u;
    {
        const bool branch_taken_0x1185d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1185D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1185D4u;
            // 0x1185d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1185d4) {
            ctx->pc = 0x11862Cu;
            goto label_11862c;
        }
    }
    ctx->pc = 0x1185DCu;
    // 0x1185dc: 0x2682fc20  addiu       $v0, $s4, -0x3E0
    ctx->pc = 0x1185dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966304));
    // 0x1185e0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1185e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1185e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1185e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1185ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1185ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1185f0: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x1185f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32769u)));
    // 0x1185f4: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1185f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1185f8: 0xfc440028  sd          $a0, 0x28($v0)
    ctx->pc = 0x1185f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
    // 0x1185fc: 0xfc450030  sd          $a1, 0x30($v0)
    ctx->pc = 0x1185fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x118600: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x118600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x118604: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x118604u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x118608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x118608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11860c: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x11860Cu;
    SET_GPR_U32(ctx, 31, 0x118614u);
    ctx->pc = 0x118610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11860Cu;
            // 0x118610: 0xfc460038  sd          $a2, 0x38($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118614u; }
        if (ctx->pc != 0x118614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118614u; }
        if (ctx->pc != 0x118614u) { return; }
    }
    ctx->pc = 0x118614u;
    // 0x118614: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x118614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118618: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118618u;
    {
        const bool branch_taken_0x118618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118618u;
            // 0x11861c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118618) {
            ctx->pc = 0x11862Cu;
            goto label_11862c;
        }
    }
    ctx->pc = 0x118620u;
    // 0x118620: 0xc043b54  jal         func_10ED50
    ctx->pc = 0x118620u;
    SET_GPR_U32(ctx, 31, 0x118628u);
    ctx->pc = 0x10ED50u;
    if (runtime->hasFunction(0x10ED50u)) {
        auto targetFn = runtime->lookupFunction(0x10ED50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118628u; }
        if (ctx->pc != 0x118628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_DynamicChainEnd_0x10ed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118628u; }
        if (ctx->pc != 0x118628u) { return; }
    }
    ctx->pc = 0x118628u;
label_118628:
    // 0x118628: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11862c:
    // 0x11862c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11862cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118630: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x118630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118634: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118638: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11863c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11863cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118640: 0x3e00008  jr          $ra
    ctx->pc = 0x118640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118640u;
            // 0x118644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118518u: goto label_118518;
            case 0x118540u: goto label_118540;
            case 0x11856Cu: goto label_11856c;
            case 0x1185B0u: goto label_1185b0;
            case 0x1185B4u: goto label_1185b4;
            case 0x1185C8u: goto label_1185c8;
            case 0x118628u: goto label_118628;
            case 0x11862Cu: goto label_11862c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118648u;
}
