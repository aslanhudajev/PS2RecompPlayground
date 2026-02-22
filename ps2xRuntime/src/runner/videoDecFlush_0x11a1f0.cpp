#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecFlush
// Address: 0x11a1f0 - 0x11a2bc
void videoDecFlush_0x11a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a1f0u;

    // 0x11a1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a1f4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x11a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x11a1f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11a1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11a1fc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x11a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a200: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a208: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x11a208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x11a20c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x11a210: 0x244b5f20  addiu       $t3, $v0, 0x5F20
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
    // 0x11a214: 0x89630003  lwl         $v1, 0x3($t3)
    ctx->pc = 0x11a214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x11a218: 0x99630000  lwr         $v1, 0x0($t3)
    ctx->pc = 0x11a218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x11a21c: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x11a21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11a220: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x11a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11a224: 0xc046836  jal         func_11A0D8
    ctx->pc = 0x11A224u;
    SET_GPR_U32(ctx, 31, 0x11A22Cu);
    ctx->pc = 0x11A228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A224u;
            // 0x11a228: 0x27a8001c  addiu       $t0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0D8u;
    if (runtime->hasFunction(0x11A0D8u)) {
        auto targetFn = runtime->lookupFunction(0x11A0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A22Cu; }
        if (ctx->pc != 0x11A22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x11a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A22Cu; }
        if (ctx->pc != 0x11A22Cu) { return; }
    }
    ctx->pc = 0x11A22Cu;
    // 0x11a22c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x11a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11a230: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x11a230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11a234: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11a238: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x11a238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11a23c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11A23Cu;
    {
        const bool branch_taken_0x11a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A23Cu;
            // 0x11a240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a23c) {
            ctx->pc = 0x11A2ACu;
            goto label_11a2ac;
        }
    }
    ctx->pc = 0x11A244u;
    // 0x11a244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a248: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11a24c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x11a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11a250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a250u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11a254: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x11a254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x11a258: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11a258u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11a25c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11a25cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x11a260: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x11a260u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x11a264: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11a264u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x11a268: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x11a268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a26c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11a26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a270: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11a270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a274: 0xc0469e6  jal         func_11A798
    ctx->pc = 0x11A274u;
    SET_GPR_U32(ctx, 31, 0x11A27Cu);
    ctx->pc = 0x11A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A274u;
            // 0x11a278: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A798u;
    if (runtime->hasFunction(0x11A798u)) {
        auto targetFn = runtime->lookupFunction(0x11A798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A27Cu; }
        if (ctx->pc != 0x11A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cpy2area_0x11a798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A27Cu; }
        if (ctx->pc != 0x11A27Cu) { return; }
    }
    ctx->pc = 0x11A27Cu;
    // 0x11a27c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x11a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x11a280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a284: 0xc046838  jal         func_11A0E0
    ctx->pc = 0x11A284u;
    SET_GPR_U32(ctx, 31, 0x11A28Cu);
    ctx->pc = 0x11A288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A284u;
            // 0x11a288: 0x2484e5c8  addiu       $a0, $a0, -0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A0E0u;
    if (runtime->hasFunction(0x11A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A28Cu; }
        if (ctx->pc != 0x11A28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x11a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A28Cu; }
        if (ctx->pc != 0x11A28Cu) { return; }
    }
    ctx->pc = 0x11A28Cu;
    // 0x11a28c: 0xc0472bc  jal         func_11CAF0
    ctx->pc = 0x11A28Cu;
    SET_GPR_U32(ctx, 31, 0x11A294u);
    ctx->pc = 0x11A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A28Cu;
            // 0x11a290: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CAF0u;
    if (runtime->hasFunction(0x11CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x11CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
        if (ctx->pc != 0x11A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufFlush_0x11caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
        if (ctx->pc != 0x11A294u) { return; }
    }
    ctx->pc = 0x11A294u;
    // 0x11a294: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x11a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x11a298: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11A298u;
    {
        const bool branch_taken_0x11a298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A298u;
            // 0x11a29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a298) {
            ctx->pc = 0x11A2ACu;
            goto label_11a2ac;
        }
    }
    ctx->pc = 0x11A2A0u;
    // 0x11a2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a2a4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x11a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x11a2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a2ac:
    // 0x11a2ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a2b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11a2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11A2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2B4u;
            // 0x11a2b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A2ACu: goto label_11a2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A2BCu;
}
