#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setFlatRect
// Address: 0x11b388 - 0x11b438
void setFlatRect_0x11b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b388u;

    // 0x11b388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b38c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b390: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11b394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b398: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11b39c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11b39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b3a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11b3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b3ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11b3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11b3b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11b3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b3bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3c0: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B3C0u;
    SET_GPR_U32(ctx, 31, 0x11B3C8u);
    ctx->pc = 0x11B3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3C0u;
            // 0x11b3c4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (runtime->hasFunction(0x11B640u)) {
        auto targetFn = runtime->lookupFunction(0x11B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3C8u; }
        if (ctx->pc != 0x11B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPRIM_0x11b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3C8u; }
        if (ctx->pc != 0x11B3C8u) { return; }
    }
    ctx->pc = 0x11B3C8u;
    // 0x11b3c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b3d4: 0xc046dd2  jal         func_11B748
    ctx->pc = 0x11B3D4u;
    SET_GPR_U32(ctx, 31, 0x11B3DCu);
    ctx->pc = 0x11B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3D4u;
            // 0x11b3d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B748u;
    if (runtime->hasFunction(0x11B748u)) {
        auto targetFn = runtime->lookupFunction(0x11B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3DCu; }
        if (ctx->pc != 0x11B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setXYZ2_0x11b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3DCu; }
        if (ctx->pc != 0x11B3DCu) { return; }
    }
    ctx->pc = 0x11B3DCu;
    // 0x11b3dc: 0x113202  srl         $a2, $s1, 8
    ctx->pc = 0x11b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x11b3e0: 0x113c02  srl         $a3, $s1, 16
    ctx->pc = 0x11b3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x11b3e4: 0x114602  srl         $t0, $s1, 24
    ctx->pc = 0x11b3e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x11b3e8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x11b3e8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)255u)));
    // 0x11b3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3f0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x11b3f0u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)255u)));
    // 0x11b3f4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x11b3f4u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)255u)));
    // 0x11b3f8: 0xc046dbe  jal         func_11B6F8
    ctx->pc = 0x11B3F8u;
    SET_GPR_U32(ctx, 31, 0x11B400u);
    ctx->pc = 0x11B3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3F8u;
            // 0x11b3fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B6F8u;
    if (runtime->hasFunction(0x11B6F8u)) {
        auto targetFn = runtime->lookupFunction(0x11B6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B400u; }
        if (ctx->pc != 0x11B400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setRGBAQ_0x11b6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B400u; }
        if (ctx->pc != 0x11B400u) { return; }
    }
    ctx->pc = 0x11B400u;
    // 0x11b400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b404: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11b408: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b40c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b410: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x11b410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b414: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11b414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b418: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x11b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11b41c: 0xc046dd2  jal         func_11B748
    ctx->pc = 0x11B41Cu;
    SET_GPR_U32(ctx, 31, 0x11B424u);
    ctx->pc = 0x11B420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B41Cu;
            // 0x11b420: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B748u;
    if (runtime->hasFunction(0x11B748u)) {
        auto targetFn = runtime->lookupFunction(0x11B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B424u; }
        if (ctx->pc != 0x11B424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setXYZ2_0x11b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B424u; }
        if (ctx->pc != 0x11B424u) { return; }
    }
    ctx->pc = 0x11B424u;
    // 0x11b424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b428: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11b428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b42c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11b42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b430: 0x3e00008  jr          $ra
    ctx->pc = 0x11B430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B430u;
            // 0x11b434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B438u;
}
