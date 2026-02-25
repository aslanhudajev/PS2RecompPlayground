#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _GetEntryByPos
// Address: 0x11f598 - 0x11f72c
void ps2__GetEntryByPos_0x11f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__GetEntryByPos_0x11f598");
#endif

    ctx->pc = 0x11f598u;

    // 0x11f598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f59c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f5a0: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x11f5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x11f5a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f5a8: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x11f5a8u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)65535u)));
    // 0x11f5ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11f5b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f5b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x11f5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11f5bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x11f5c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11f5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11f5cc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f5d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x11f5d4: 0x3c150023  lui         $s5, 0x23
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)35 << 16));
    // 0x11f5d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11f5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5dc: 0x0  nop
    ctx->pc = 0x11f5dcu;
    // NOP
label_11f5e0:
    // 0x11f5e0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x11f5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f5e4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x11F5E4u;
    {
        const bool branch_taken_0x11f5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F5E4u;
            // 0x11f5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5e4) {
            ctx->pc = 0x11F6D8u;
            goto label_11f6d8;
        }
    }
    ctx->pc = 0x11F5ECu;
    // 0x11f5ec: 0x26b24a80  addiu       $s2, $s5, 0x4A80
    ctx->pc = 0x11f5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 19072));
    // 0x11f5f0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11f5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f5f8: 0xc048e38  jal         func_1238E0
    ctx->pc = 0x11F5F8u;
    SET_GPR_U32(ctx, 31, 0x11F600u);
    ctx->pc = 0x11F5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F5F8u;
            // 0x11f5fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238E0u;
    if (runtime->hasFunction(0x1238E0u)) {
        auto targetFn = runtime->lookupFunction(0x1238E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F600u; }
        if (ctx->pc != 0x11F600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpReadUserClust_0x1238e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F600u; }
        if (ctx->pc != 0x11F600u) { return; }
    }
    ctx->pc = 0x11F600u;
    // 0x11f600: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F600u;
    {
        const bool branch_taken_0x11f600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F600u;
            // 0x11f604: 0x101a40  sll         $v1, $s0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f600) {
            ctx->pc = 0x11F618u;
            goto label_11f618;
        }
    }
    ctx->pc = 0x11F608u;
    // 0x11f608: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x11f608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x11f60c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x11F60Cu;
    {
        const bool branch_taken_0x11f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F60Cu;
            // 0x11f610: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)111u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f60c) {
            ctx->pc = 0x11F708u;
            goto label_11f708;
        }
    }
    ctx->pc = 0x11F614u;
    // 0x11f614: 0x0  nop
    ctx->pc = 0x11f614u;
    // NOP
label_11f618:
    // 0x11f618: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11f61c: 0x731025  or          $v0, $v1, $s3
    ctx->pc = 0x11f61cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 19)));
    // 0x11f620: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x11f620u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x11f624: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11F624u;
    {
        const bool branch_taken_0x11f624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F624u;
            // 0x11f628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f624) {
            ctx->pc = 0x11F690u;
            goto label_11f690;
        }
    }
    ctx->pc = 0x11F62Cu;
    // 0x11f62c: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x11f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_11f630:
    // 0x11f630: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x11f630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11f634: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x11f634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11f638: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x11f638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11f63c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x11f63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11f640: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x11f640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11f644: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x11f644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11f648: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x11f648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11f64c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x11f64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11f650: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x11f650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f654: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x11f654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f658: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x11f658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f65c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x11f65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f660: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x11f660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f664: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x11f664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f668: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x11f668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f66c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x11f66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f670: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11f670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11f674: 0x0  nop
    ctx->pc = 0x11f674u;
    // NOP
    // 0x11f678: 0x0  nop
    ctx->pc = 0x11f678u;
    // NOP
    // 0x11f67c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11F67Cu;
    {
        const bool branch_taken_0x11f67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F67Cu;
            // 0x11f680: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f67c) {
            ctx->pc = 0x11F630u;
            goto label_11f630;
        }
    }
    ctx->pc = 0x11F684u;
    // 0x11f684: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11F684u;
    {
        const bool branch_taken_0x11f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F684u;
            // 0x11f688: 0xa260005f  sb          $zero, 0x5F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f684) {
            ctx->pc = 0x11F6CCu;
            goto label_11f6cc;
        }
    }
    ctx->pc = 0x11F68Cu;
    // 0x11f68c: 0x0  nop
    ctx->pc = 0x11f68cu;
    // NOP
label_11f690:
    // 0x11f690: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x11f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_11f694:
    // 0x11f694: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x11f694u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f698: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x11f698u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11f69c: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x11f69cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11f6a0: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x11f6a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11f6a4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x11f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x11f6a8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x11f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x11f6ac: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x11f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x11f6b0: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x11f6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x11f6b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11f6b8: 0x0  nop
    ctx->pc = 0x11f6b8u;
    // NOP
    // 0x11f6bc: 0x0  nop
    ctx->pc = 0x11f6bcu;
    // NOP
    // 0x11f6c0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11F6C0u;
    {
        const bool branch_taken_0x11f6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6C0u;
            // 0x11f6c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6c0) {
            ctx->pc = 0x11F694u;
            goto label_11f694;
        }
    }
    ctx->pc = 0x11F6C8u;
    // 0x11f6c8: 0xa260005f  sb          $zero, 0x5F($s3)
    ctx->pc = 0x11f6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
label_11f6cc:
    // 0x11f6cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11F6CCu;
    {
        const bool branch_taken_0x11f6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6CCu;
            // 0x11f6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6cc) {
            ctx->pc = 0x11F708u;
            goto label_11f708;
        }
    }
    ctx->pc = 0x11F6D4u;
    // 0x11f6d4: 0x0  nop
    ctx->pc = 0x11f6d4u;
    // NOP
label_11f6d8:
    // 0x11f6d8: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11F6D8u;
    SET_GPR_U32(ctx, 31, 0x11F6E0u);
    ctx->pc = 0x11F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6D8u;
            // 0x11f6dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (runtime->hasFunction(0x11F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F6E0u; }
        if (ctx->pc != 0x11F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetNextClust_0x11f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F6E0u; }
        if (ctx->pc != 0x11F6E0u) { return; }
    }
    ctx->pc = 0x11F6E0u;
    // 0x11f6e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f6e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F6E8u;
    {
        const bool branch_taken_0x11f6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6E8u;
            // 0x11f6ec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6e8) {
            ctx->pc = 0x11F708u;
            goto label_11f708;
        }
    }
    ctx->pc = 0x11F6F0u;
    // 0x11f6f0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x11f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x11f6f4: 0x10b40004  beq         $a1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6F4u;
    {
        const bool branch_taken_0x11f6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        ctx->pc = 0x11F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6F4u;
            // 0x11f6f8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6f4) {
            ctx->pc = 0x11F708u;
            goto label_11f708;
        }
    }
    ctx->pc = 0x11F6FCu;
    // 0x11f6fc: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x11f6fcu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 18)));
    // 0x11f700: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x11F700u;
    {
        const bool branch_taken_0x11f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F700u;
            // 0x11f704: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f700) {
            ctx->pc = 0x11F5E0u;
            goto label_11f5e0;
        }
    }
    ctx->pc = 0x11F708u;
label_11f708:
    // 0x11f708: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f70c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11f70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11f710: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f714: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11f714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11f718: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11f718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f71c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11f71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11f720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f724: 0x3e00008  jr          $ra
    ctx->pc = 0x11F724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F724u;
            // 0x11f728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F5E0u: goto label_11f5e0;
            case 0x11F618u: goto label_11f618;
            case 0x11F630u: goto label_11f630;
            case 0x11F690u: goto label_11f690;
            case 0x11F694u: goto label_11f694;
            case 0x11F6CCu: goto label_11f6cc;
            case 0x11F6D8u: goto label_11f6d8;
            case 0x11F708u: goto label_11f708;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F72Cu;
}
