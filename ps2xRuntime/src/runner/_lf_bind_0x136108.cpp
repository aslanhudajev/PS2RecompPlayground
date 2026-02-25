#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lf_bind
// Address: 0x136108 - 0x136208
void _lf_bind_0x136108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lf_bind_0x136108");
#endif

    ctx->pc = 0x136108u;

    // 0x136108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x136108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13610c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x136110: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x136110u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
    // 0x136114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x136118: 0x8e4204c0  lw          $v0, 0x4C0($s2)
    ctx->pc = 0x136118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1216)));
    // 0x13611c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x13611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x136120: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x136120u;
    {
        const bool branch_taken_0x136120 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x136124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136120u;
            // 0x136124: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136120) {
            ctx->pc = 0x1361ECu;
            goto label_1361ec;
        }
    }
    ctx->pc = 0x136128u;
    // 0x136128: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x136128u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x13612c: 0x26306380  addiu       $s0, $s1, 0x6380
    ctx->pc = 0x13612cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 25472));
label_136130:
    // 0x136130: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x136130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x136134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136138: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x136138u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)6u)));
    // 0x13613c: 0xc04c6fa  jal         func_131BE8
    ctx->pc = 0x13613Cu;
    SET_GPR_U32(ctx, 31, 0x136144u);
    ctx->pc = 0x136140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13613Cu;
            // 0x136140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131BE8u;
    if (runtime->hasFunction(0x131BE8u)) {
        auto targetFn = runtime->lookupFunction(0x131BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136144u; }
        if (ctx->pc != 0x136144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x131be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136144u; }
        if (ctx->pc != 0x136144u) { return; }
    }
    ctx->pc = 0x136144u;
    // 0x136144: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136144u;
    {
        const bool branch_taken_0x136144 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x136144) {
            ctx->pc = 0x136148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136144u;
            // 0x136148: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136154u;
            goto label_136154;
        }
    }
    ctx->pc = 0x13614Cu;
    // 0x13614c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13614Cu;
    {
        const bool branch_taken_0x13614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13614Cu;
            // 0x136150: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13614c) {
            ctx->pc = 0x1361F0u;
            goto label_1361f0;
        }
    }
    ctx->pc = 0x136154u;
label_136154:
    // 0x136154: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x136154u;
    {
        const bool branch_taken_0x136154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136154u;
            // 0x136158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136154) {
            ctx->pc = 0x1361BCu;
            goto label_1361bc;
        }
    }
    ctx->pc = 0x13615Cu;
    // 0x13615c: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x13615cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x136160: 0xae4004c0  sw          $zero, 0x4C0($s2)
    ctx->pc = 0x136160u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1216), GPR_U32(ctx, 0));
    // 0x136164: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x136164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x136168: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13616c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13616cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136174: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136178: 0x26296180  addiu       $t1, $s1, 0x6180
    ctx->pc = 0x136178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 24960));
    // 0x13617c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x13617cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x136180: 0xc04c76e  jal         func_131DB8
    ctx->pc = 0x136180u;
    SET_GPR_U32(ctx, 31, 0x136188u);
    ctx->pc = 0x136184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136180u;
            // 0x136184: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131DB8u;
    if (runtime->hasFunction(0x131DB8u)) {
        auto targetFn = runtime->lookupFunction(0x131DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136188u; }
        if (ctx->pc != 0x136188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x131db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136188u; }
        if (ctx->pc != 0x136188u) { return; }
    }
    ctx->pc = 0x136188u;
    // 0x136188: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x136188u;
    {
        const bool branch_taken_0x136188 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136188u;
            // 0x13618c: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136188) {
            ctx->pc = 0x13619Cu;
            goto label_13619c;
        }
    }
    ctx->pc = 0x136190u;
    // 0x136190: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x136190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x136194: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x136194u;
    {
        const bool branch_taken_0x136194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136194u;
            // 0x136198: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136194) {
            ctx->pc = 0x1361F0u;
            goto label_1361f0;
        }
    }
    ctx->pc = 0x13619Cu;
label_13619c:
    // 0x13619c: 0x26276180  addiu       $a3, $s1, 0x6180
    ctx->pc = 0x13619cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24960));
    // 0x1361a0: 0x246663a8  addiu       $a2, $v1, 0x63A8
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 25512));
    // 0x1361a4: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x1361a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1361a8: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x1361a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1361ac: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x1361acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1361b0: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x1361b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1361b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1361B4u;
    {
        const bool branch_taken_0x1361b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361B4u;
            // 0x1361b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361b4) {
            ctx->pc = 0x1361F0u;
            goto label_1361f0;
        }
    }
    ctx->pc = 0x1361BCu;
label_1361bc:
    // 0x1361bc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1361bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1361c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1361c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1361c4: 0x0  nop
    ctx->pc = 0x1361c4u;
    // NOP
label_1361c8:
    // 0x1361c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1361cc: 0x0  nop
    ctx->pc = 0x1361ccu;
    // NOP
    // 0x1361d0: 0x0  nop
    ctx->pc = 0x1361d0u;
    // NOP
    // 0x1361d4: 0x0  nop
    ctx->pc = 0x1361d4u;
    // NOP
    // 0x1361d8: 0x0  nop
    ctx->pc = 0x1361d8u;
    // NOP
    // 0x1361dc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1361DCu;
    {
        const bool branch_taken_0x1361dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1361dc) {
            ctx->pc = 0x1361C8u;
            goto label_1361c8;
        }
    }
    ctx->pc = 0x1361E4u;
    // 0x1361e4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1361E4u;
    {
        const bool branch_taken_0x1361e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361E4u;
            // 0x1361e8: 0x26306380  addiu       $s0, $s1, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 25472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361e4) {
            ctx->pc = 0x136130u;
            goto label_136130;
        }
    }
    ctx->pc = 0x1361ECu;
label_1361ec:
    // 0x1361ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1361ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1361f0:
    // 0x1361f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1361f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1361f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1361f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1361f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1361f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1361fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1361fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136200: 0x3e00008  jr          $ra
    ctx->pc = 0x136200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136200u;
            // 0x136204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x136130u: goto label_136130;
            case 0x136154u: goto label_136154;
            case 0x13619Cu: goto label_13619c;
            case 0x1361BCu: goto label_1361bc;
            case 0x1361C8u: goto label_1361c8;
            case 0x1361ECu: goto label_1361ec;
            case 0x1361F0u: goto label_1361f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x136208u;
}
