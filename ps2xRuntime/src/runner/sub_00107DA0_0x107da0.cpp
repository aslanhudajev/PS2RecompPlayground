#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_00107DA0
// Address: 0x107da0 - 0x107ef8
void sub_00107DA0_0x107da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00107DA0_0x107da0");
#endif

    ctx->pc = 0x107da0u;

    // 0x107da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x107da4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x107da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107da8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x107dac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x107dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x107db0: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x107db4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x107db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x107db8: 0x8e02f624  lw          $v0, -0x9DC($s0)
    ctx->pc = 0x107db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964772)));
    // 0x107dbc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x107dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107dc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107dc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x107dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x107dc8: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x107dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x107dcc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x107dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x107dd0: 0x246acc48  addiu       $t2, $v1, -0x33B8
    ctx->pc = 0x107dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954056));
    // 0x107dd4: 0x89440003  lwl         $a0, 0x3($t2)
    ctx->pc = 0x107dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x107dd8: 0x99440000  lwr         $a0, 0x0($t2)
    ctx->pc = 0x107dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x107ddc: 0x81470004  lb          $a3, 0x4($t2)
    ctx->pc = 0x107ddcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x107de0: 0x81490005  lb          $t1, 0x5($t2)
    ctx->pc = 0x107de0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x107de4: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x107de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x107de8: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x107de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x107dec: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x107decu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x107df0: 0xa3a90005  sb          $t1, 0x5($sp)
    ctx->pc = 0x107df0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x107df4: 0x81440006  lb          $a0, 0x6($t2)
    ctx->pc = 0x107df4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x107df8: 0xa3a40006  sb          $a0, 0x6($sp)
    ctx->pc = 0x107df8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x107dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x107e00: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x107e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e04: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x107e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x107e08: 0x3105f000  andi        $a1, $t0, 0xF000
    ctx->pc = 0x107e08u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)61440u)));
    // 0x107e0c: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x107e10: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x107E10u;
    {
        const bool branch_taken_0x107e10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x107E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E10u;
            // 0x107e14: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e10) {
            ctx->pc = 0x107E60u;
            goto label_107e60;
        }
    }
    ctx->pc = 0x107E18u;
    // 0x107e18: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x107e18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x107e1c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x107e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x107e20: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107E20u;
    {
        const bool branch_taken_0x107e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E20u;
            // 0x107e24: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e20) {
            ctx->pc = 0x107E40u;
            goto label_107e40;
        }
    }
    ctx->pc = 0x107E28u;
    // 0x107e28: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x107e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x107e2c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x107e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x107e30: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x107e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e34: 0x8c48f62c  lw          $t0, -0x9D4($v0)
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964780)));
    // 0x107e38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x107E38u;
    {
        const bool branch_taken_0x107e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E38u;
            // 0x107e3c: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e38) {
            ctx->pc = 0x107E88u;
            goto label_107e88;
        }
    }
    ctx->pc = 0x107E40u;
label_107e40:
    // 0x107e40: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107E40u;
    {
        const bool branch_taken_0x107e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E40u;
            // 0x107e44: 0x3103f000  andi        $v1, $t0, 0xF000 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)61440u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e40) {
            ctx->pc = 0x107E64u;
            goto label_107e64;
        }
    }
    ctx->pc = 0x107E48u;
    // 0x107e48: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x107e4c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x107e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x107e50: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x107e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e54: 0x8c48f62c  lw          $t0, -0x9D4($v0)
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964780)));
    // 0x107e58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107E58u;
    {
        const bool branch_taken_0x107e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E58u;
            // 0x107e5c: 0x2484cc68  addiu       $a0, $a0, -0x3398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e58) {
            ctx->pc = 0x107E88u;
            goto label_107e88;
        }
    }
    ctx->pc = 0x107E60u;
label_107e60:
    // 0x107e60: 0x3103f000  andi        $v1, $t0, 0xF000
    ctx->pc = 0x107e60u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)61440u)));
label_107e64:
    // 0x107e64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x107E64u;
    {
        const bool branch_taken_0x107e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E64u;
            // 0x107e68: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e64) {
            ctx->pc = 0x107E98u;
            goto label_107e98;
        }
    }
    ctx->pc = 0x107E6Cu;
    // 0x107e6c: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x107e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x107e70: 0x2442f628  addiu       $v0, $v0, -0x9D8
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964776));
    // 0x107e74: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x107e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x107e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x107e7c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x107e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107e80: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x107e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107e84: 0x2484cc80  addiu       $a0, $a0, -0x3380
    ctx->pc = 0x107e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954112));
label_107e88:
    // 0x107e88: 0xc04c340  jal         func_130D00
    ctx->pc = 0x107E88u;
    SET_GPR_U32(ctx, 31, 0x107E90u);
    ctx->pc = 0x107E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107E88u;
            // 0x107e8c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107E90u; }
        if (ctx->pc != 0x107E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107E90u; }
        if (ctx->pc != 0x107E90u) { return; }
    }
    ctx->pc = 0x107E90u;
    // 0x107e90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x107E90u;
    {
        const bool branch_taken_0x107e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E90u;
            // 0x107e94: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e90) {
            ctx->pc = 0x107ED4u;
            goto label_107ed4;
        }
    }
    ctx->pc = 0x107E98u;
label_107e98:
    // 0x107e98: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x107e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x107e9c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x107e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x107ea0: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x107ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x107ea4: 0x2463f658  addiu       $v1, $v1, -0x9A8
    ctx->pc = 0x107ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964824));
    // 0x107ea8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x107ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x107eac: 0x8c88f628  lw          $t0, -0x9D8($a0)
    ctx->pc = 0x107eacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964776)));
    // 0x107eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x107eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x107eb4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x107eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x107eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107ebc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x107ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ec0: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107ec4: 0x2484cc98  addiu       $a0, $a0, -0x3368
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954136));
    // 0x107ec8: 0xc04c340  jal         func_130D00
    ctx->pc = 0x107EC8u;
    SET_GPR_U32(ctx, 31, 0x107ED0u);
    ctx->pc = 0x107ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107EC8u;
            // 0x107ecc: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D00u;
    if (runtime->hasFunction(0x130D00u)) {
        auto targetFn = runtime->lookupFunction(0x130D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107ED0u; }
        if (ctx->pc != 0x107ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x130d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107ED0u; }
        if (ctx->pc != 0x107ED0u) { return; }
    }
    ctx->pc = 0x107ED0u;
    // 0x107ed0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_107ed4:
    // 0x107ed4: 0x8e23f624  lw          $v1, -0x9DC($s1)
    ctx->pc = 0x107ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294964772)));
    // 0x107ed8: 0x8c42f620  lw          $v0, -0x9E0($v0)
    ctx->pc = 0x107ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964768)));
    // 0x107edc: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x107EDCu;
    {
        const bool branch_taken_0x107edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x107edc) {
            ctx->pc = 0x107EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107EDCu;
            // 0x107ee0: 0xae02f624  sw          $v0, -0x9DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294964772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107EE4u;
            goto label_107ee4;
        }
    }
    ctx->pc = 0x107EE4u;
label_107ee4:
    // 0x107ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107ee8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107eec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x107EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107EF0u;
            // 0x107ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107E40u: goto label_107e40;
            case 0x107E60u: goto label_107e60;
            case 0x107E64u: goto label_107e64;
            case 0x107E88u: goto label_107e88;
            case 0x107E98u: goto label_107e98;
            case 0x107ED4u: goto label_107ed4;
            case 0x107EE4u: goto label_107ee4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107EF8u;
}
