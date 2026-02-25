#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeMakeVertexPacket
// Address: 0x117a90 - 0x117c24
void ShapeMakeVertexPacket_0x117a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeMakeVertexPacket_0x117a90");
#endif

    ctx->pc = 0x117a90u;

    // 0x117a90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x117a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x117a94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aa4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x117aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x117aa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117aac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x117aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x117ab0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x117ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ab4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x117ab8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117abc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x117abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x117ac0: 0xc047188  jal         func_11C620
    ctx->pc = 0x117AC0u;
    SET_GPR_U32(ctx, 31, 0x117AC8u);
    ctx->pc = 0x117AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AC0u;
            // 0x117ac4: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C620u;
    if (runtime->hasFunction(0x11C620u)) {
        auto targetFn = runtime->lookupFunction(0x11C620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AC8u; }
        if (ctx->pc != 0x117AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryVertex_0x11c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AC8u; }
        if (ctx->pc != 0x117AC8u) { return; }
    }
    ctx->pc = 0x117AC8u;
    // 0x117ac8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117acc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ad0: 0xc04718c  jal         func_11C630
    ctx->pc = 0x117AD0u;
    SET_GPR_U32(ctx, 31, 0x117AD8u);
    ctx->pc = 0x117AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AD0u;
            // 0x117ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C630u;
    if (runtime->hasFunction(0x11C630u)) {
        auto targetFn = runtime->lookupFunction(0x11C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AD8u; }
        if (ctx->pc != 0x117AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryNormal_0x11c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AD8u; }
        if (ctx->pc != 0x117AD8u) { return; }
    }
    ctx->pc = 0x117AD8u;
    // 0x117ad8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117adc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x117adcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ae0: 0xc047194  jal         func_11C650
    ctx->pc = 0x117AE0u;
    SET_GPR_U32(ctx, 31, 0x117AE8u);
    ctx->pc = 0x117AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AE0u;
            // 0x117ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C650u;
    if (runtime->hasFunction(0x11C650u)) {
        auto targetFn = runtime->lookupFunction(0x11C650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE8u; }
        if (ctx->pc != 0x117AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryST_0x11c650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE8u; }
        if (ctx->pc != 0x117AE8u) { return; }
    }
    ctx->pc = 0x117AE8u;
    // 0x117ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x117aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117af0: 0xc04719c  jal         func_11C670
    ctx->pc = 0x117AF0u;
    SET_GPR_U32(ctx, 31, 0x117AF8u);
    ctx->pc = 0x117AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117AF0u;
            // 0x117af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C670u;
    if (runtime->hasFunction(0x11C670u)) {
        auto targetFn = runtime->lookupFunction(0x11C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AF8u; }
        if (ctx->pc != 0x117AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryColor_0x11c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AF8u; }
        if (ctx->pc != 0x117AF8u) { return; }
    }
    ctx->pc = 0x117AF8u;
    // 0x117af8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x117AF8u;
    {
        const bool branch_taken_0x117af8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x117AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117AF8u;
            // 0x117afc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117af8) {
            ctx->pc = 0x117B18u;
            goto label_117b18;
        }
    }
    ctx->pc = 0x117B00u;
    // 0x117b00: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x117B00u;
    {
        const bool branch_taken_0x117b00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b00) {
            ctx->pc = 0x117B18u;
            goto label_117b18;
        }
    }
    ctx->pc = 0x117B08u;
    // 0x117b08: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x117B08u;
    {
        const bool branch_taken_0x117b08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b08) {
            ctx->pc = 0x117B18u;
            goto label_117b18;
        }
    }
    ctx->pc = 0x117B10u;
    // 0x117b10: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x117B10u;
    {
        const bool branch_taken_0x117b10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x117b10) {
            ctx->pc = 0x117B28u;
            goto label_117b28;
        }
    }
    ctx->pc = 0x117B18u;
label_117b18:
    // 0x117b18: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117B18u;
    SET_GPR_U32(ctx, 31, 0x117B20u);
    ctx->pc = 0x117B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B18u;
            // 0x117b1c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B20u; }
        if (ctx->pc != 0x117B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B20u; }
        if (ctx->pc != 0x117B20u) { return; }
    }
    ctx->pc = 0x117B20u;
    // 0x117b20: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x117B20u;
    {
        const bool branch_taken_0x117b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B20u;
            // 0x117b24: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b20) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117B28u;
label_117b28:
    // 0x117b28: 0xc045e2e  jal         func_1178B8
    ctx->pc = 0x117B28u;
    SET_GPR_U32(ctx, 31, 0x117B30u);
    ctx->pc = 0x117B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B28u;
            // 0x117b2c: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1178B8u;
    if (runtime->hasFunction(0x1178B8u)) {
        auto targetFn = runtime->lookupFunction(0x1178B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B30u; }
        if (ctx->pc != 0x117B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1GetIptr_0x1178b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B30u; }
        if (ctx->pc != 0x117B30u) { return; }
    }
    ctx->pc = 0x117B30u;
    // 0x117b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117b38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117b38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x117b3c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117B3Cu;
    {
        const bool branch_taken_0x117b3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x117B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B3Cu;
            // 0x117b40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b3c) {
            ctx->pc = 0x117B54u;
            goto label_117b54;
        }
    }
    ctx->pc = 0x117B44u;
    // 0x117b44: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117B44u;
    SET_GPR_U32(ctx, 31, 0x117B4Cu);
    ctx->pc = 0x117B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B44u;
            // 0x117b48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B4Cu; }
        if (ctx->pc != 0x117B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B4Cu; }
        if (ctx->pc != 0x117B4Cu) { return; }
    }
    ctx->pc = 0x117B4Cu;
    // 0x117b4c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x117B4Cu;
    {
        const bool branch_taken_0x117b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B4Cu;
            // 0x117b50: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b4c) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117B54u;
label_117b54:
    // 0x117b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117b60: 0xc043e78  jal         func_10F9E0
    ctx->pc = 0x117B60u;
    SET_GPR_U32(ctx, 31, 0x117B68u);
    ctx->pc = 0x117B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B60u;
            // 0x117b64: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9E0u;
    if (runtime->hasFunction(0x10F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B68u; }
        if (ctx->pc != 0x117B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadStep_0x10f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B68u; }
        if (ctx->pc != 0x117B68u) { return; }
    }
    ctx->pc = 0x117B68u;
    // 0x117b68: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117b68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b6c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x117B6Cu;
    {
        const bool branch_taken_0x117b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B6Cu;
            // 0x117b70: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b6c) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117B74u;
    // 0x117b74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x117b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b78: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x117b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117b7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117b84: 0xc043e78  jal         func_10F9E0
    ctx->pc = 0x117B84u;
    SET_GPR_U32(ctx, 31, 0x117B8Cu);
    ctx->pc = 0x117B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117B84u;
            // 0x117b88: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9E0u;
    if (runtime->hasFunction(0x10F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B8Cu; }
        if (ctx->pc != 0x117B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadStep_0x10f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117B8Cu; }
        if (ctx->pc != 0x117B8Cu) { return; }
    }
    ctx->pc = 0x117B8Cu;
    // 0x117b8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b90: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x117B90u;
    {
        const bool branch_taken_0x117b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117B90u;
            // 0x117b94: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b90) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117B98u;
    // 0x117b98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x117b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b9c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x117b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x117ba0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ba4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117ba8: 0xc043e78  jal         func_10F9E0
    ctx->pc = 0x117BA8u;
    SET_GPR_U32(ctx, 31, 0x117BB0u);
    ctx->pc = 0x117BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BA8u;
            // 0x117bac: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9E0u;
    if (runtime->hasFunction(0x10F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BB0u; }
        if (ctx->pc != 0x117BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadStep_0x10f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BB0u; }
        if (ctx->pc != 0x117BB0u) { return; }
    }
    ctx->pc = 0x117BB0u;
    // 0x117bb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bb4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x117BB4u;
    {
        const bool branch_taken_0x117bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BB4u;
            // 0x117bb8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bb4) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117BBCu;
    // 0x117bbc: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x117bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x117bc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117bcc: 0xc043e78  jal         func_10F9E0
    ctx->pc = 0x117BCCu;
    SET_GPR_U32(ctx, 31, 0x117BD4u);
    ctx->pc = 0x117BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117BCCu;
            // 0x117bd0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9E0u;
    if (runtime->hasFunction(0x10F9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10F9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BD4u; }
        if (ctx->pc != 0x117BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadStep_0x10f9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BD4u; }
        if (ctx->pc != 0x117BD4u) { return; }
    }
    ctx->pc = 0x117BD4u;
    // 0x117bd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bd8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x117BD8u;
    {
        const bool branch_taken_0x117bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BD8u;
            // 0x117bdc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bd8) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117BE0u;
    // 0x117be0: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x117BE0u;
    {
        const bool branch_taken_0x117be0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BE0u;
            // 0x117be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117be0) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117BE8u;
    // 0x117be8: 0xc043c9a  jal         func_10F268
    ctx->pc = 0x117BE8u;
    SET_GPR_U32(ctx, 31, 0x117BF0u);
    ctx->pc = 0x10F268u;
    if (runtime->hasFunction(0x10F268u)) {
        auto targetFn = runtime->lookupFunction(0x10F268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BF0u; }
        if (ctx->pc != 0x117BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ContinueMicro_0x10f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117BF0u; }
        if (ctx->pc != 0x117BF0u) { return; }
    }
    ctx->pc = 0x117BF0u;
    // 0x117bf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117bf4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x117BF4u;
    {
        const bool branch_taken_0x117bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117BF4u;
            // 0x117bf8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bf4) {
            ctx->pc = 0x117C00u;
            goto label_117c00;
        }
    }
    ctx->pc = 0x117BFCu;
    // 0x117bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117c00:
    // 0x117c00: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x117c00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117c04: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x117c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117c08: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117c08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117c0c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117c0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117c10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117c10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117c14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x117C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C1Cu;
            // 0x117c20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117B18u: goto label_117b18;
            case 0x117B28u: goto label_117b28;
            case 0x117B54u: goto label_117b54;
            case 0x117C00u: goto label_117c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117C24u;
}
