#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTexRect
// Address: 0x11b2c8 - 0x11b384
void setTexRect_0x11b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b2c8u;

    // 0x11b2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b2cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11b2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b2d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11b2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11b2d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b2d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11b2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11b2dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11b2dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11b2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11b2e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11b2ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11b2f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11b2f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11b2f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11b2fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b300: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11B300u;
    SET_GPR_U32(ctx, 31, 0x11B308u);
    ctx->pc = 0x11B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B300u;
            // 0x11b304: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (runtime->hasFunction(0x11B640u)) {
        auto targetFn = runtime->lookupFunction(0x11B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B308u; }
        if (ctx->pc != 0x11B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPRIM_0x11b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B308u; }
        if (ctx->pc != 0x11B308u) { return; }
    }
    ctx->pc = 0x11B308u;
    // 0x11b308: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11b308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b30c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b310: 0xc046db2  jal         func_11B6C8
    ctx->pc = 0x11B310u;
    SET_GPR_U32(ctx, 31, 0x11B318u);
    ctx->pc = 0x11B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B310u;
            // 0x11b314: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C8u;
    if (runtime->hasFunction(0x11B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x11B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B318u; }
        if (ctx->pc != 0x11B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setUV_0x11b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B318u; }
        if (ctx->pc != 0x11B318u) { return; }
    }
    ctx->pc = 0x11B318u;
    // 0x11b318: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11b318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b31c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b320: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11b320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b324: 0xc046dd2  jal         func_11B748
    ctx->pc = 0x11B324u;
    SET_GPR_U32(ctx, 31, 0x11B32Cu);
    ctx->pc = 0x11B328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B324u;
            // 0x11b328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B748u;
    if (runtime->hasFunction(0x11B748u)) {
        auto targetFn = runtime->lookupFunction(0x11B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B32Cu; }
        if (ctx->pc != 0x11B32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setXYZ2_0x11b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B32Cu; }
        if (ctx->pc != 0x11B32Cu) { return; }
    }
    ctx->pc = 0x11B32Cu;
    // 0x11b32c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b330: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11b334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11b334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b338: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x11b338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11b33c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x11b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11b340: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x11b340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11b344: 0xc046db2  jal         func_11B6C8
    ctx->pc = 0x11B344u;
    SET_GPR_U32(ctx, 31, 0x11B34Cu);
    ctx->pc = 0x11B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B344u;
            // 0x11b348: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C8u;
    if (runtime->hasFunction(0x11B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x11B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B34Cu; }
        if (ctx->pc != 0x11B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setUV_0x11b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B34Cu; }
        if (ctx->pc != 0x11B34Cu) { return; }
    }
    ctx->pc = 0x11B34Cu;
    // 0x11b34c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b350: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11b354: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11b358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b35c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x11b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x11b360: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11b360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b364: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x11b364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11b368: 0xc046dd2  jal         func_11B748
    ctx->pc = 0x11B368u;
    SET_GPR_U32(ctx, 31, 0x11B370u);
    ctx->pc = 0x11B36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B368u;
            // 0x11b36c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B748u;
    if (runtime->hasFunction(0x11B748u)) {
        auto targetFn = runtime->lookupFunction(0x11B748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B370u; }
        if (ctx->pc != 0x11B370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setXYZ2_0x11b748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B370u; }
        if (ctx->pc != 0x11B370u) { return; }
    }
    ctx->pc = 0x11B370u;
    // 0x11b370: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b374: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11b374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b378: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11b378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B37Cu;
            // 0x11b380: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B384u;
}
