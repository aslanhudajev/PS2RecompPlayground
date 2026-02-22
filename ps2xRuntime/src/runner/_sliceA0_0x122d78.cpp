#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sliceA0
// Address: 0x122d78 - 0x122e9c
void _sliceA0_0x122d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122d78u;

    // 0x122d78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x122d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122d7c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x122d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122d80: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x122d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x122d84: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x122d84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x122d88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x122d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122d8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x122d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122d94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x122d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x122d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122d9c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x122d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122da0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x122da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x122da4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x122da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122da8: 0xc049036  jal         func_1240D8
    ctx->pc = 0x122DA8u;
    SET_GPR_U32(ctx, 31, 0x122DB0u);
    ctx->pc = 0x122DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DA8u;
            // 0x122dac: 0xae801908  sw          $zero, 0x1908($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 6408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1240D8u;
    if (runtime->hasFunction(0x1240D8u)) {
        auto targetFn = runtime->lookupFunction(0x1240D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DB0u; }
        if (ctx->pc != 0x122DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1240d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DB0u; }
        if (ctx->pc != 0x122DB0u) { return; }
    }
    ctx->pc = 0x122DB0u;
    // 0x122db0: 0xc048f48  jal         func_123D20
    ctx->pc = 0x122DB0u;
    SET_GPR_U32(ctx, 31, 0x122DB8u);
    ctx->pc = 0x122DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DB0u;
            // 0x122db4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123D20u;
    if (runtime->hasFunction(0x123D20u)) {
        auto targetFn = runtime->lookupFunction(0x123D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DB8u; }
        if (ctx->pc != 0x122DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DB8u; }
        if (ctx->pc != 0x122DB8u) { return; }
    }
    ctx->pc = 0x122DB8u;
    // 0x122db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dbc: 0x2622feff  addiu       $v0, $s1, -0x101
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967039));
    // 0x122dc0: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x122dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x122dc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x122DC4u;
    {
        const bool branch_taken_0x122dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122DC4u;
            // 0x122dc8: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dc4) {
            ctx->pc = 0x122DE0u;
            goto label_122de0;
        }
    }
    ctx->pc = 0x122DCCu;
    // 0x122dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dd0: 0xc047ffa  jal         func_11FFE8
    ctx->pc = 0x122DD0u;
    SET_GPR_U32(ctx, 31, 0x122DD8u);
    ctx->pc = 0x122DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DD0u;
            // 0x122dd4: 0x24844f18  addiu       $a0, $a0, 0x4F18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11FFE8u;
    if (runtime->hasFunction(0x11FFE8u)) {
        auto targetFn = runtime->lookupFunction(0x11FFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DD8u; }
        if (ctx->pc != 0x122DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DD8u; }
        if (ctx->pc != 0x122DD8u) { return; }
    }
    ctx->pc = 0x122DD8u;
    // 0x122dd8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x122DD8u;
    {
        const bool branch_taken_0x122dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122DD8u;
            // 0x122ddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dd8) {
            ctx->pc = 0x122E78u;
            goto label_122e78;
        }
    }
    ctx->pc = 0x122DE0u;
label_122de0:
    // 0x122de0: 0xc048f96  jal         func_123E58
    ctx->pc = 0x122DE0u;
    SET_GPR_U32(ctx, 31, 0x122DE8u);
    ctx->pc = 0x122DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DE0u;
            // 0x122de4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123E58u;
    if (runtime->hasFunction(0x123E58u)) {
        auto targetFn = runtime->lookupFunction(0x123E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DE8u; }
        if (ctx->pc != 0x122DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DE8u; }
        if (ctx->pc != 0x122DE8u) { return; }
    }
    ctx->pc = 0x122DE8u;
    // 0x122de8: 0xc049050  jal         func_124140
    ctx->pc = 0x122DE8u;
    SET_GPR_U32(ctx, 31, 0x122DF0u);
    ctx->pc = 0x124140u;
    if (runtime->hasFunction(0x124140u)) {
        auto targetFn = runtime->lookupFunction(0x124140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DF0u; }
        if (ctx->pc != 0x122DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sliceB_0x124140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DF0u; }
        if (ctx->pc != 0x122DF0u) { return; }
    }
    ctx->pc = 0x122DF0u;
    // 0x122df0: 0xc048ad0  jal         func_122B40
    ctx->pc = 0x122DF0u;
    SET_GPR_U32(ctx, 31, 0x122DF8u);
    ctx->pc = 0x122DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122DF0u;
            // 0x122df4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122B40u;
    if (runtime->hasFunction(0x122B40u)) {
        auto targetFn = runtime->lookupFunction(0x122B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DF8u; }
        if (ctx->pc != 0x122DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x122b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122DF8u; }
        if (ctx->pc != 0x122DF8u) { return; }
    }
    ctx->pc = 0x122DF8u;
    // 0x122df8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x122df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dfc: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x122dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x122e00: 0x8e821908  lw          $v0, 0x1908($s4)
    ctx->pc = 0x122e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6408)));
    // 0x122e04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x122E04u;
    {
        const bool branch_taken_0x122e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E04u;
            // 0x122e08: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e04) {
            ctx->pc = 0x122E1Cu;
            goto label_122e1c;
        }
    }
    ctx->pc = 0x122E0Cu;
    // 0x122e0c: 0xc048006  jal         func_120018
    ctx->pc = 0x122E0Cu;
    SET_GPR_U32(ctx, 31, 0x122E14u);
    ctx->pc = 0x122E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x122E0Cu;
            // 0x122e10: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120018u;
    if (runtime->hasFunction(0x120018u)) {
        auto targetFn = runtime->lookupFunction(0x120018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122E14u; }
        if (ctx->pc != 0x122E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122E14u; }
        if (ctx->pc != 0x122E14u) { return; }
    }
    ctx->pc = 0x122E14u;
    // 0x122e14: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x122E14u;
    {
        const bool branch_taken_0x122e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E14u;
            // 0x122e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e14) {
            ctx->pc = 0x122E78u;
            goto label_122e78;
        }
    }
    ctx->pc = 0x122E1Cu;
label_122e1c:
    // 0x122e1c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x122e1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)255u)));
    // 0x122e20: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x122e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x122e24: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x122e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x122e28: 0x8c851928  lw          $a1, 0x1928($a0)
    ctx->pc = 0x122e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6440)));
    // 0x122e2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x122e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122e30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122e34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122e38: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x122e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x122e3c: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x122e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x122e40: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x122e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x122e44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x122e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x122e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x122e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e4c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x122e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x122e50: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x122e50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x122e54: 0xacc41a3c  sw          $a0, 0x1A3C($a2)
    ctx->pc = 0x122e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6716), GPR_U32(ctx, 4));
    // 0x122e58: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x122e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x122e5c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x122e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x122e60: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x122e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x122e64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x122e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x122e68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x122e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x122e6c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x122e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x122e70: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x122e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x122e74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x122e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_122e78:
    // 0x122e78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122e7c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x122e7cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122e80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x122e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122e84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x122e84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122e88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x122e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122e8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x122e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122e90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122e94: 0x3e00008  jr          $ra
    ctx->pc = 0x122E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x122E94u;
            // 0x122e98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122DE0u: goto label_122de0;
            case 0x122E1Cu: goto label_122e1c;
            case 0x122E78u: goto label_122e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122E9Cu;
}
