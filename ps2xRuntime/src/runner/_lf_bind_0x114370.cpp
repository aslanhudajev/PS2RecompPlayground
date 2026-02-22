#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lf_bind
// Address: 0x114370 - 0x114470
void _lf_bind_0x114370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114370u;

    // 0x114370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x114370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114374: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x114374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x114378: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x114378u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x11437c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114380: 0x8e42fbd0  lw          $v0, -0x430($s2)
    ctx->pc = 0x114380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966224)));
    // 0x114384: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x114384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x114388: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x114388u;
    {
        const bool branch_taken_0x114388 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114388u;
            // 0x11438c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114388) {
            ctx->pc = 0x114454u;
            goto label_114454;
        }
    }
    ctx->pc = 0x114390u;
    // 0x114390: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x114390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
    // 0x114394: 0x26309e40  addiu       $s0, $s1, -0x61C0
    ctx->pc = 0x114394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942272));
label_114398:
    // 0x114398: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x114398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143a0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x1143a0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)6u)));
    // 0x1143a4: 0xc0440ac  jal         func_1102B0
    ctx->pc = 0x1143A4u;
    SET_GPR_U32(ctx, 31, 0x1143ACu);
    ctx->pc = 0x1143A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1143A4u;
            // 0x1143a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102B0u;
    if (runtime->hasFunction(0x1102B0u)) {
        auto targetFn = runtime->lookupFunction(0x1102B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143ACu; }
        if (ctx->pc != 0x1143ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1102b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143ACu; }
        if (ctx->pc != 0x1143ACu) { return; }
    }
    ctx->pc = 0x1143ACu;
    // 0x1143ac: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1143ACu;
    {
        const bool branch_taken_0x1143ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1143ac) {
            ctx->pc = 0x1143B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1143ACu;
            // 0x1143b0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1143BCu;
            goto label_1143bc;
        }
    }
    ctx->pc = 0x1143B4u;
    // 0x1143b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1143B4u;
    {
        const bool branch_taken_0x1143b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143B4u;
            // 0x1143b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143b4) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x1143BCu;
label_1143bc:
    // 0x1143bc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1143BCu;
    {
        const bool branch_taken_0x1143bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143BCu;
            // 0x1143c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143bc) {
            ctx->pc = 0x114424u;
            goto label_114424;
        }
    }
    ctx->pc = 0x1143C4u;
    // 0x1143c4: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
    // 0x1143c8: 0xae40fbd0  sw          $zero, -0x430($s2)
    ctx->pc = 0x1143c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966224), GPR_U32(ctx, 0));
    // 0x1143cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1143ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1143d0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1143d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1143d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1143d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1143d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1143dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143e0: 0x26299c40  addiu       $t1, $s1, -0x63C0
    ctx->pc = 0x1143e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x1143e4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1143e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1143e8: 0xc044120  jal         func_110480
    ctx->pc = 0x1143E8u;
    SET_GPR_U32(ctx, 31, 0x1143F0u);
    ctx->pc = 0x1143ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1143E8u;
            // 0x1143ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110480u;
    if (runtime->hasFunction(0x110480u)) {
        auto targetFn = runtime->lookupFunction(0x110480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143F0u; }
        if (ctx->pc != 0x1143F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x110480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143F0u; }
        if (ctx->pc != 0x1143F0u) { return; }
    }
    ctx->pc = 0x1143F0u;
    // 0x1143f0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1143F0u;
    {
        const bool branch_taken_0x1143f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1143F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143F0u;
            // 0x1143f4: 0x3c030018  lui         $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143f0) {
            ctx->pc = 0x114404u;
            goto label_114404;
        }
    }
    ctx->pc = 0x1143F8u;
    // 0x1143f8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1143fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1143FCu;
    {
        const bool branch_taken_0x1143fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143FCu;
            // 0x114400: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143fc) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x114404u;
label_114404:
    // 0x114404: 0x26279c40  addiu       $a3, $s1, -0x63C0
    ctx->pc = 0x114404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941760));
    // 0x114408: 0x24669e68  addiu       $a2, $v1, -0x6198
    ctx->pc = 0x114408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942312));
    // 0x11440c: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x11440cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x114410: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x114410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x114414: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x114414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x114418: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x114418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x11441c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11441Cu;
    {
        const bool branch_taken_0x11441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11441Cu;
            // 0x114420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11441c) {
            ctx->pc = 0x114458u;
            goto label_114458;
        }
    }
    ctx->pc = 0x114424u;
label_114424:
    // 0x114424: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x114424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x114428: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11442c: 0x0  nop
    ctx->pc = 0x11442cu;
    // NOP
label_114430:
    // 0x114430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x114434: 0x0  nop
    ctx->pc = 0x114434u;
    // NOP
    // 0x114438: 0x0  nop
    ctx->pc = 0x114438u;
    // NOP
    // 0x11443c: 0x0  nop
    ctx->pc = 0x11443cu;
    // NOP
    // 0x114440: 0x0  nop
    ctx->pc = 0x114440u;
    // NOP
    // 0x114444: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x114444u;
    {
        const bool branch_taken_0x114444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x114444) {
            ctx->pc = 0x114430u;
            goto label_114430;
        }
    }
    ctx->pc = 0x11444Cu;
    // 0x11444c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x11444Cu;
    {
        const bool branch_taken_0x11444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11444Cu;
            // 0x114450: 0x26309e40  addiu       $s0, $s1, -0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11444c) {
            ctx->pc = 0x114398u;
            goto label_114398;
        }
    }
    ctx->pc = 0x114454u;
label_114454:
    // 0x114454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114458:
    // 0x114458: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x114458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11445c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11445cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114460: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x114460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114464: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x114464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114468: 0x3e00008  jr          $ra
    ctx->pc = 0x114468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114468u;
            // 0x11446c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114398u: goto label_114398;
            case 0x1143BCu: goto label_1143bc;
            case 0x114404u: goto label_114404;
            case 0x114424u: goto label_114424;
            case 0x114430u: goto label_114430;
            case 0x114454u: goto label_114454;
            case 0x114458u: goto label_114458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114470u;
}
