#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _SetEntryByPos
// Address: 0x120db8 - 0x120f78
void ps2__SetEntryByPos_0x120db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__SetEntryByPos_0x120db8");
#endif

    ctx->pc = 0x120db8u;

    // 0x120db8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120dbc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x120dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x120dc0: 0x3c137fff  lui         $s3, 0x7FFF
    ctx->pc = 0x120dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32767 << 16));
    // 0x120dc4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x120dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x120dc8: 0x3c158101  lui         $s5, 0x8101
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)33025 << 16));
    // 0x120dcc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x120dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x120dd0: 0x36b5006f  ori         $s5, $s5, 0x6F
    ctx->pc = 0x120dd0u;
    SET_GPR_VEC(ctx, 21, PS2_POR(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)111u)));
    // 0x120dd4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x120dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x120dd8: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x120dd8u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)65535u)));
    // 0x120ddc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120de0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x120de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120de4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x120de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x120de8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x120de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120dec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x120decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120df0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x120df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120df4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x120df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x120df8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x120df8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120dfc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x120dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x120e00: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x120e00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e04: 0x0  nop
    ctx->pc = 0x120e04u;
    // NOP
label_120e08:
    // 0x120e08: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x120e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x120e0c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x120E0Cu;
    {
        const bool branch_taken_0x120e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E0Cu;
            // 0x120e10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e0c) {
            ctx->pc = 0x120F18u;
            goto label_120f18;
        }
    }
    ctx->pc = 0x120E14u;
    // 0x120e14: 0x3c140023  lui         $s4, 0x23
    ctx->pc = 0x120e14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)35 << 16));
    // 0x120e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e1c: 0x26934a80  addiu       $s3, $s4, 0x4A80
    ctx->pc = 0x120e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 19072));
    // 0x120e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x120e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x120e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e28: 0xc048e38  jal         func_1238E0
    ctx->pc = 0x120E28u;
    SET_GPR_U32(ctx, 31, 0x120E30u);
    ctx->pc = 0x120E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120E28u;
            // 0x120e2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238E0u;
    if (runtime->hasFunction(0x1238E0u)) {
        auto targetFn = runtime->lookupFunction(0x1238E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120E30u; }
        if (ctx->pc != 0x120E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpReadUserClust_0x1238e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120E30u; }
        if (ctx->pc != 0x120E30u) { return; }
    }
    ctx->pc = 0x120E30u;
    // 0x120e30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x120E30u;
    {
        const bool branch_taken_0x120e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E30u;
            // 0x120e34: 0x111a40  sll         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e30) {
            ctx->pc = 0x120E48u;
            goto label_120e48;
        }
    }
    ctx->pc = 0x120E38u;
    // 0x120e38: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x120e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x120e3c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x120E3Cu;
    {
        const bool branch_taken_0x120e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E3Cu;
            // 0x120e40: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)111u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e3c) {
            ctx->pc = 0x120F50u;
            goto label_120f50;
        }
    }
    ctx->pc = 0x120E44u;
    // 0x120e44: 0x0  nop
    ctx->pc = 0x120e44u;
    // NOP
label_120e48:
    // 0x120e48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x120e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e4c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x120e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x120e50: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x120e50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x120e54: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x120e54u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x120e58: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x120E58u;
    {
        const bool branch_taken_0x120e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120E58u;
            // 0x120e5c: 0x24a20200  addiu       $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e58) {
            ctx->pc = 0x120EC0u;
            goto label_120ec0;
        }
    }
    ctx->pc = 0x120E60u;
label_120e60:
    // 0x120e60: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x120e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x120e64: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x120e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x120e68: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x120e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x120e6c: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x120e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x120e70: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x120e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x120e74: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x120e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x120e78: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x120e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x120e7c: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x120e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x120e80: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x120e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e84: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x120e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e88: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x120e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e8c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x120e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e90: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x120e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e94: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x120e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e98: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x120e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120e9c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x120e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120ea0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x120ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x120ea4: 0x0  nop
    ctx->pc = 0x120ea4u;
    // NOP
    // 0x120ea8: 0x0  nop
    ctx->pc = 0x120ea8u;
    // NOP
    // 0x120eac: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x120EACu;
    {
        const bool branch_taken_0x120eac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x120EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120EACu;
            // 0x120eb0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eac) {
            ctx->pc = 0x120E60u;
            goto label_120e60;
        }
    }
    ctx->pc = 0x120EB4u;
    // 0x120eb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x120EB4u;
    {
        const bool branch_taken_0x120eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120EB4u;
            // 0x120eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eb4) {
            ctx->pc = 0x120EF8u;
            goto label_120ef8;
        }
    }
    ctx->pc = 0x120EBCu;
    // 0x120ebc: 0x0  nop
    ctx->pc = 0x120ebcu;
    // NOP
label_120ec0:
    // 0x120ec0: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x120ec0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x120ec4: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x120ec4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x120ec8: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x120ec8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x120ecc: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x120eccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x120ed0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x120ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x120ed4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x120ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x120ed8: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x120ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x120edc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x120edcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x120ee0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x120ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x120ee4: 0x0  nop
    ctx->pc = 0x120ee4u;
    // NOP
    // 0x120ee8: 0x0  nop
    ctx->pc = 0x120ee8u;
    // NOP
    // 0x120eec: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x120EECu;
    {
        const bool branch_taken_0x120eec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x120EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120EECu;
            // 0x120ef0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eec) {
            ctx->pc = 0x120EC0u;
            goto label_120ec0;
        }
    }
    ctx->pc = 0x120EF4u;
    // 0x120ef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120ef8:
    // 0x120ef8: 0x26854a80  addiu       $a1, $s4, 0x4A80
    ctx->pc = 0x120ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 19072));
    // 0x120efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x120efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f00: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x120F00u;
    SET_GPR_U32(ctx, 31, 0x120F08u);
    ctx->pc = 0x120F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120F00u;
            // 0x120f04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (runtime->hasFunction(0x1238F8u)) {
        auto targetFn = runtime->lookupFunction(0x1238F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F08u; }
        if (ctx->pc != 0x120F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpWriteUserClust_0x1238f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F08u; }
        if (ctx->pc != 0x120F08u) { return; }
    }
    ctx->pc = 0x120F08u;
    // 0x120f08: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x120f08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x120f0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x120F0Cu;
    {
        const bool branch_taken_0x120f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120F0Cu;
            // 0x120f10: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f0c) {
            ctx->pc = 0x120F50u;
            goto label_120f50;
        }
    }
    ctx->pc = 0x120F14u;
    // 0x120f14: 0x0  nop
    ctx->pc = 0x120f14u;
    // NOP
label_120f18:
    // 0x120f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f1c: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x120F1Cu;
    SET_GPR_U32(ctx, 31, 0x120F24u);
    ctx->pc = 0x120F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x120F1Cu;
            // 0x120f20: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (runtime->hasFunction(0x11F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F24u; }
        if (ctx->pc != 0x120F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetNextClust_0x11f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x120F24u; }
        if (ctx->pc != 0x120F24u) { return; }
    }
    ctx->pc = 0x120F24u;
    // 0x120f24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x120f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x120F2Cu;
    {
        const bool branch_taken_0x120f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120F2Cu;
            // 0x120f30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f2c) {
            ctx->pc = 0x120F50u;
            goto label_120f50;
        }
    }
    ctx->pc = 0x120F34u;
    // 0x120f34: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x120f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x120f38: 0x12140005  beq         $s0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x120F38u;
    {
        const bool branch_taken_0x120f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x120F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120F38u;
            // 0x120f3c: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)111u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f38) {
            ctx->pc = 0x120F50u;
            goto label_120f50;
        }
    }
    ctx->pc = 0x120F40u;
    // 0x120f40: 0x2138024  and         $s0, $s0, $s3
    ctx->pc = 0x120f40u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 19)));
    // 0x120f44: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x120F44u;
    {
        const bool branch_taken_0x120f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120F44u;
            // 0x120f48: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f44) {
            ctx->pc = 0x120E08u;
            goto label_120e08;
        }
    }
    ctx->pc = 0x120F4Cu;
    // 0x120f4c: 0x0  nop
    ctx->pc = 0x120f4cu;
    // NOP
label_120f50:
    // 0x120f50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x120f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120f54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x120f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120f58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x120f58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120f5c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x120f5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120f60: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x120f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120f64: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x120f64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120f68: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x120f68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120f6c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x120f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120f70: 0x3e00008  jr          $ra
    ctx->pc = 0x120F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120F70u;
            // 0x120f74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x120E08u: goto label_120e08;
            case 0x120E48u: goto label_120e48;
            case 0x120E60u: goto label_120e60;
            case 0x120EC0u: goto label_120ec0;
            case 0x120EF8u: goto label_120ef8;
            case 0x120F18u: goto label_120f18;
            case 0x120F50u: goto label_120f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x120F78u;
}
