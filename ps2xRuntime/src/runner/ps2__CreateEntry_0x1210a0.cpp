#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _CreateEntry
// Address: 0x1210a0 - 0x121598
void ps2__CreateEntry_0x1210a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__CreateEntry_0x1210a0");
#endif

    ctx->pc = 0x1210a0u;

    // 0x1210a0: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1210a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1210a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1210a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1210a8: 0xffb10418  sd          $s1, 0x418($sp)
    ctx->pc = 0x1210a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x1210ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1210acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210b0: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1210b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x1210b4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x1210b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x1210b8: 0x2e230001  sltiu       $v1, $s1, 0x1
    ctx->pc = 0x1210b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1210bc: 0x3442006f  ori         $v0, $v0, 0x6F
    ctx->pc = 0x1210bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)111u)));
    // 0x1210c0: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x1210c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x1210c4: 0xffb40430  sd          $s4, 0x430($sp)
    ctx->pc = 0x1210c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x1210c8: 0xffb60440  sd          $s6, 0x440($sp)
    ctx->pc = 0x1210c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 22));
    // 0x1210cc: 0xffbf0458  sd          $ra, 0x458($sp)
    ctx->pc = 0x1210ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1112), GPR_U64(ctx, 31));
    // 0x1210d0: 0xafa30400  sw          $v1, 0x400($sp)
    ctx->pc = 0x1210d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 3));
    // 0x1210d4: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x1210d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
    // 0x1210d8: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x1210d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x1210dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1210dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210e0: 0xffb30428  sd          $s3, 0x428($sp)
    ctx->pc = 0x1210e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x1210e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1210e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210e8: 0xffb50438  sd          $s5, 0x438($sp)
    ctx->pc = 0x1210e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 21));
    // 0x1210ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1210ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210f0: 0xffb70448  sd          $s7, 0x448($sp)
    ctx->pc = 0x1210f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 23));
    // 0x1210f4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1210f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1210f8: 0xffbe0450  sd          $fp, 0x450($sp)
    ctx->pc = 0x1210f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 30));
    // 0x1210fc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1210fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121100:
    // 0x121100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121104: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x121108: 0x24a54a80  addiu       $a1, $a1, 0x4A80
    ctx->pc = 0x121108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19072));
    // 0x12110c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12110cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121110: 0xc048e38  jal         func_1238E0
    ctx->pc = 0x121110u;
    SET_GPR_U32(ctx, 31, 0x121118u);
    ctx->pc = 0x121114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121110u;
            // 0x121114: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238E0u;
    if (runtime->hasFunction(0x1238E0u)) {
        auto targetFn = runtime->lookupFunction(0x1238E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121118u; }
        if (ctx->pc != 0x121118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpReadUserClust_0x1238e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121118u; }
        if (ctx->pc != 0x121118u) { return; }
    }
    ctx->pc = 0x121118u;
    // 0x121118: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121118u;
    {
        const bool branch_taken_0x121118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121118u;
            // 0x12111c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121118) {
            ctx->pc = 0x121130u;
            goto label_121130;
        }
    }
    ctx->pc = 0x121120u;
    // 0x121120: 0x8fa40404  lw          $a0, 0x404($sp)
    ctx->pc = 0x121120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x121124: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121128: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x121128u;
    {
        const bool branch_taken_0x121128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121128u;
            // 0x12112c: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121128) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121130u;
label_121130:
    // 0x121130: 0x3c100023  lui         $s0, 0x23
    ctx->pc = 0x121130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)35 << 16));
    // 0x121134: 0x26104a80  addiu       $s0, $s0, 0x4A80
    ctx->pc = 0x121134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19072));
    // 0x121138: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x121138u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x12113c: 0x0  nop
    ctx->pc = 0x12113cu;
    // NOP
label_121140:
    // 0x121140: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x121140u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x121144: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x121144u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x121148: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x121148u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12114c: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x12114Cu;
    {
        const bool branch_taken_0x12114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12114c) {
            ctx->pc = 0x121150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12114Cu;
            // 0x121150: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121218u;
            goto label_121218;
        }
    }
    ctx->pc = 0x121154u;
    // 0x121154: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x121158: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x121158u;
    SET_GPR_U32(ctx, 31, 0x121160u);
    ctx->pc = 0x12115Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121158u;
            // 0x12115c: 0x26c5f040  addiu       $a1, $s6, -0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121160u; }
        if (ctx->pc != 0x121160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121160u; }
        if (ctx->pc != 0x121160u) { return; }
    }
    ctx->pc = 0x121160u;
    // 0x121160: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x121160u;
    {
        const bool branch_taken_0x121160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121160) {
            ctx->pc = 0x121164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121160u;
            // 0x121164: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121214u;
            goto label_121214;
        }
    }
    ctx->pc = 0x121168u;
    // 0x121168: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x121168u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)7u)));
    // 0x12116c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x12116cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x121170: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x121170u;
    {
        const bool branch_taken_0x121170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121170u;
            // 0x121174: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121170) {
            ctx->pc = 0x1211D8u;
            goto label_1211d8;
        }
    }
    ctx->pc = 0x121178u;
    // 0x121178: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x121178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_12117c:
    // 0x12117c: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x12117cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x121180: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x121180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x121184: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x121184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x121188: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x121188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12118c: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x12118cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x121190: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x121190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x121194: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x121194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x121198: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x121198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x12119c: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x12119cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211a0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1211a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211a4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1211a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211a8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1211a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211ac: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1211acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211b0: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1211b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211b4: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1211b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211b8: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1211b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1211bc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1211bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1211c0: 0x0  nop
    ctx->pc = 0x1211c0u;
    // NOP
    // 0x1211c4: 0x0  nop
    ctx->pc = 0x1211c4u;
    // NOP
    // 0x1211c8: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1211C8u;
    {
        const bool branch_taken_0x1211c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1211CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1211C8u;
            // 0x1211cc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211c8) {
            ctx->pc = 0x12117Cu;
            goto label_12117c;
        }
    }
    ctx->pc = 0x1211D0u;
    // 0x1211d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1211D0u;
    {
        const bool branch_taken_0x1211d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1211D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1211D0u;
            // 0x1211d4: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1211d0) {
            ctx->pc = 0x121214u;
            goto label_121214;
        }
    }
    ctx->pc = 0x1211D8u;
label_1211d8:
    // 0x1211d8: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x1211d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_1211dc:
    // 0x1211dc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1211dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1211e0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1211e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1211e4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1211e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1211e8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1211e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1211ec: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1211ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1211f0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1211f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1211f4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1211f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1211f8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1211f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1211fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1211fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x121200: 0x0  nop
    ctx->pc = 0x121200u;
    // NOP
    // 0x121204: 0x0  nop
    ctx->pc = 0x121204u;
    // NOP
    // 0x121208: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x121208u;
    {
        const bool branch_taken_0x121208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12120Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121208u;
            // 0x12120c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121208) {
            ctx->pc = 0x1211DCu;
            goto label_1211dc;
        }
    }
    ctx->pc = 0x121210u;
    // 0x121210: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x121210u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_121214:
    // 0x121214: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x121214u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
label_121218:
    // 0x121218: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x121218u;
    {
        const bool branch_taken_0x121218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121218) {
            ctx->pc = 0x12121Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121218u;
            // 0x12121c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12122Cu;
            goto label_12122c;
        }
    }
    ctx->pc = 0x121220u;
    // 0x121220: 0x56400045  bnel        $s2, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x121220u;
    {
        const bool branch_taken_0x121220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x121220) {
            ctx->pc = 0x121224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121220u;
            // 0x121224: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121338u;
            goto label_121338;
        }
    }
    ctx->pc = 0x121228u;
    // 0x121228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12122c:
    // 0x12122c: 0x2e41025  or          $v0, $s7, $a0
    ctx->pc = 0x12122cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 23), GPR_VEC(ctx, 4)));
    // 0x121230: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x121230u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x121234: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x121234u;
    {
        const bool branch_taken_0x121234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121234u;
            // 0x121238: 0x2e0182d  daddu       $v1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121234) {
            ctx->pc = 0x1212A0u;
            goto label_1212a0;
        }
    }
    ctx->pc = 0x12123Cu;
    // 0x12123c: 0x26e20200  addiu       $v0, $s7, 0x200
    ctx->pc = 0x12123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 512));
label_121240:
    // 0x121240: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x121240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x121244: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x121244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x121248: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x121248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12124c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x12124cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x121250: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x121250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x121254: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x121254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x121258: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x121258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x12125c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x12125cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x121260: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x121260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121264: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x121264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121268: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x121268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12126c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x12126cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121270: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x121270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121274: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x121274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121278: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x121278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12127c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x12127cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121280: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x121284: 0x0  nop
    ctx->pc = 0x121284u;
    // NOP
    // 0x121288: 0x0  nop
    ctx->pc = 0x121288u;
    // NOP
    // 0x12128c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12128Cu;
    {
        const bool branch_taken_0x12128c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x121290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12128Cu;
            // 0x121290: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12128c) {
            ctx->pc = 0x121240u;
            goto label_121240;
        }
    }
    ctx->pc = 0x121294u;
    // 0x121294: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x121294u;
    {
        const bool branch_taken_0x121294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121294u;
            // 0x121298: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121294) {
            ctx->pc = 0x1212DCu;
            goto label_1212dc;
        }
    }
    ctx->pc = 0x12129Cu;
    // 0x12129c: 0x0  nop
    ctx->pc = 0x12129cu;
    // NOP
label_1212a0:
    // 0x1212a0: 0x26e20200  addiu       $v0, $s7, 0x200
    ctx->pc = 0x1212a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 512));
label_1212a4:
    // 0x1212a4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1212a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1212a8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1212a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1212ac: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1212acu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1212b0: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1212b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1212b4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1212b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1212b8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1212b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1212bc: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1212bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1212c0: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1212c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1212c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1212c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1212c8: 0x0  nop
    ctx->pc = 0x1212c8u;
    // NOP
    // 0x1212cc: 0x0  nop
    ctx->pc = 0x1212ccu;
    // NOP
    // 0x1212d0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1212D0u;
    {
        const bool branch_taken_0x1212d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1212D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212D0u;
            // 0x1212d4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212d0) {
            ctx->pc = 0x1212A4u;
            goto label_1212a4;
        }
    }
    ctx->pc = 0x1212D8u;
    // 0x1212d8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1212d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1212dc:
    // 0x1212dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1212dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212e0: 0x24454a80  addiu       $a1, $v0, 0x4A80
    ctx->pc = 0x1212e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19072));
    // 0x1212e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1212e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1212e8: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x1212E8u;
    SET_GPR_U32(ctx, 31, 0x1212F0u);
    ctx->pc = 0x1212ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1212E8u;
            // 0x1212ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (runtime->hasFunction(0x1238F8u)) {
        auto targetFn = runtime->lookupFunction(0x1238F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212F0u; }
        if (ctx->pc != 0x1212F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpWriteUserClust_0x1238f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1212F0u; }
        if (ctx->pc != 0x1212F0u) { return; }
    }
    ctx->pc = 0x1212F0u;
    // 0x1212f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1212F0u;
    {
        const bool branch_taken_0x1212f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1212F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212F0u;
            // 0x1212f4: 0x8fa30404  lw          $v1, 0x404($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212f0) {
            ctx->pc = 0x121308u;
            goto label_121308;
        }
    }
    ctx->pc = 0x1212F8u;
    // 0x1212f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1212f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1212fc: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1212FCu;
    {
        const bool branch_taken_0x1212fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1212FCu;
            // 0x121300: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1212fc) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121304u;
    // 0x121304: 0x0  nop
    ctx->pc = 0x121304u;
    // NOP
label_121308:
    // 0x121308: 0x56400091  bnel        $s2, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x121308u;
    {
        const bool branch_taken_0x121308 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x121308) {
            ctx->pc = 0x12130Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121308u;
            // 0x12130c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121550u;
            goto label_121550;
        }
    }
    ctx->pc = 0x121310u;
    // 0x121310: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x121310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x121314: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x121314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121318: 0x14c4007a  bne         $a2, $a0, . + 4 + (0x7A << 2)
    ctx->pc = 0x121318u;
    {
        const bool branch_taken_0x121318 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x12131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121318u;
            // 0x12131c: 0x8fa70214  lw          $a3, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121318) {
            ctx->pc = 0x121504u;
            goto label_121504;
        }
    }
    ctx->pc = 0x121320u;
    // 0x121320: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x121320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x121324: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121328: 0x34639002  ori         $v1, $v1, 0x9002
    ctx->pc = 0x121328u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)36866u)));
    // 0x12132c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x12132Cu;
    {
        const bool branch_taken_0x12132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12132Cu;
            // 0x121330: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12132c) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121334u;
    // 0x121334: 0x0  nop
    ctx->pc = 0x121334u;
    // NOP
label_121338:
    // 0x121338: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x121338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12133c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x12133cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x121340: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x121340u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x121344: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x121344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x121348: 0x1460ff7d  bnez        $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x121348u;
    {
        const bool branch_taken_0x121348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12134Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121348u;
            // 0x12134c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121348) {
            ctx->pc = 0x121140u;
            goto label_121140;
        }
    }
    ctx->pc = 0x121350u;
    // 0x121350: 0x8fa50400  lw          $a1, 0x400($sp)
    ctx->pc = 0x121350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x121354: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x121354u;
    {
        const bool branch_taken_0x121354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x121358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121354u;
            // 0x121358: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121354) {
            ctx->pc = 0x121380u;
            goto label_121380;
        }
    }
    ctx->pc = 0x12135Cu;
    // 0x12135c: 0x2bc20014  slti        $v0, $fp, 0x14
    ctx->pc = 0x12135cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x121360: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121360u;
    {
        const bool branch_taken_0x121360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121360u;
            // 0x121364: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121360) {
            ctx->pc = 0x121384u;
            goto label_121384;
        }
    }
    ctx->pc = 0x121368u;
    // 0x121368: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x121368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x12136c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x121370: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x121370u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23u)));
    // 0x121374: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x121374u;
    {
        const bool branch_taken_0x121374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121374u;
            // 0x121378: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121374) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x12137Cu;
    // 0x12137c: 0x0  nop
    ctx->pc = 0x12137cu;
    // NOP
label_121380:
    // 0x121380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_121384:
    // 0x121384: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121388: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x121388u;
    SET_GPR_U32(ctx, 31, 0x121390u);
    ctx->pc = 0x12138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121388u;
            // 0x12138c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (runtime->hasFunction(0x11F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121390u; }
        if (ctx->pc != 0x121390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetNextClust_0x11f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121390u; }
        if (ctx->pc != 0x121390u) { return; }
    }
    ctx->pc = 0x121390u;
    // 0x121390: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x121390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x121394: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121398: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x121398u;
    {
        const bool branch_taken_0x121398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12139Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121398u;
            // 0x12139c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121398) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x1213A0u;
    // 0x1213a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1213a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1213a4: 0x5626006c  bnel        $s1, $a2, . + 4 + (0x6C << 2)
    ctx->pc = 0x1213A4u;
    {
        const bool branch_taken_0x1213a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        if (branch_taken_0x1213a4) {
            ctx->pc = 0x1213A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1213A4u;
            // 0x1213a8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121558u;
            goto label_121558;
        }
    }
    ctx->pc = 0x1213ACu;
    // 0x1213ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1213acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213b0: 0xc047cde  jal         func_11F378
    ctx->pc = 0x1213B0u;
    SET_GPR_U32(ctx, 31, 0x1213B8u);
    ctx->pc = 0x1213B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1213B0u;
            // 0x1213b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F378u;
    if (runtime->hasFunction(0x11F378u)) {
        auto targetFn = runtime->lookupFunction(0x11F378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213B8u; }
        if (ctx->pc != 0x1213B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetFreeClust_0x11f378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213B8u; }
        if (ctx->pc != 0x1213B8u) { return; }
    }
    ctx->pc = 0x1213B8u;
    // 0x1213b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1213bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1213bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213c0: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1213C0u;
    {
        const bool branch_taken_0x1213c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1213C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1213C0u;
            // 0x1213c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213c0) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x1213C8u;
    // 0x1213c8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1213c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1213cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1213ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213d0: 0x2263025  or          $a2, $s1, $a2
    ctx->pc = 0x1213d0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 6)));
    // 0x1213d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1213d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213d8: 0xc047c8c  jal         func_11F230
    ctx->pc = 0x1213D8u;
    SET_GPR_U32(ctx, 31, 0x1213E0u);
    ctx->pc = 0x1213DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1213D8u;
            // 0x1213dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F230u;
    if (runtime->hasFunction(0x11F230u)) {
        auto targetFn = runtime->lookupFunction(0x11F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213E0u; }
        if (ctx->pc != 0x1213E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatWriteFatData_0x11f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1213E0u; }
        if (ctx->pc != 0x1213E0u) { return; }
    }
    ctx->pc = 0x1213E0u;
    // 0x1213e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1213e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1213e4: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x1213E4u;
    {
        const bool branch_taken_0x1213e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1213E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1213E4u;
            // 0x1213e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213e4) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x1213ECu;
    // 0x1213ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1213ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1213f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1213f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1213f8: 0xc047c8c  jal         func_11F230
    ctx->pc = 0x1213F8u;
    SET_GPR_U32(ctx, 31, 0x121400u);
    ctx->pc = 0x1213FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1213F8u;
            // 0x1213fc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F230u;
    if (runtime->hasFunction(0x11F230u)) {
        auto targetFn = runtime->lookupFunction(0x11F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121400u; }
        if (ctx->pc != 0x121400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatWriteFatData_0x11f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121400u; }
        if (ctx->pc != 0x121400u) { return; }
    }
    ctx->pc = 0x121400u;
    // 0x121400: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x121400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x121404: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x121404u;
    {
        const bool branch_taken_0x121404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x121408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121404u;
            // 0x121408: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121404) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x12140Cu;
    // 0x12140c: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x12140cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x121410: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x121410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121414: 0x24f04a80  addiu       $s0, $a3, 0x4A80
    ctx->pc = 0x121414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 19072));
    // 0x121418: 0xb01025  or          $v0, $a1, $s0
    ctx->pc = 0x121418u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 16)));
    // 0x12141c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x12141cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x121420: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x121420u;
    {
        const bool branch_taken_0x121420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121420u;
            // 0x121424: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121420) {
            ctx->pc = 0x121488u;
            goto label_121488;
        }
    }
    ctx->pc = 0x121428u;
    // 0x121428: 0x24a20200  addiu       $v0, $a1, 0x200
    ctx->pc = 0x121428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_12142c:
    // 0x12142c: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x12142cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x121430: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x121430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x121434: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x121434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x121438: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x121438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12143c: 0x68a60017  ldl         $a2, 0x17($a1)
    ctx->pc = 0x12143cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x121440: 0x6ca60010  ldr         $a2, 0x10($a1)
    ctx->pc = 0x121440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x121444: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x121444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x121448: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x121448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12144c: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x12144cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121450: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x121450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121454: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x121454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121458: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x121458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12145c: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x12145cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121460: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x121460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121464: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x121464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121468: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x121468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12146c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12146cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x121470: 0x0  nop
    ctx->pc = 0x121470u;
    // NOP
    // 0x121474: 0x0  nop
    ctx->pc = 0x121474u;
    // NOP
    // 0x121478: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x121478u;
    {
        const bool branch_taken_0x121478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121478u;
            // 0x12147c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121478) {
            ctx->pc = 0x12142Cu;
            goto label_12142c;
        }
    }
    ctx->pc = 0x121480u;
    // 0x121480: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x121480u;
    {
        const bool branch_taken_0x121480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121480u;
            // 0x121484: 0x3c080023  lui         $t0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121480) {
            ctx->pc = 0x1214C4u;
            goto label_1214c4;
        }
    }
    ctx->pc = 0x121488u;
label_121488:
    // 0x121488: 0x24a20200  addiu       $v0, $a1, 0x200
    ctx->pc = 0x121488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_12148c:
    // 0x12148c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x12148cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x121490: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x121490u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121494: 0xdca60010  ld          $a2, 0x10($a1)
    ctx->pc = 0x121494u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x121498: 0xdca70018  ld          $a3, 0x18($a1)
    ctx->pc = 0x121498u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x12149c: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x12149cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1214a0: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1214a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1214a4: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1214a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1214a8: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1214a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1214ac: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1214acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1214b0: 0x0  nop
    ctx->pc = 0x1214b0u;
    // NOP
    // 0x1214b4: 0x0  nop
    ctx->pc = 0x1214b4u;
    // NOP
    // 0x1214b8: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1214B8u;
    {
        const bool branch_taken_0x1214b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1214BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214B8u;
            // 0x1214bc: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214b8) {
            ctx->pc = 0x12148Cu;
            goto label_12148c;
        }
    }
    ctx->pc = 0x1214C0u;
    // 0x1214c0: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x1214c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_1214c4:
    // 0x1214c4: 0xa6000200  sh          $zero, 0x200($s0)
    ctx->pc = 0x1214c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 0));
    // 0x1214c8: 0x25054a80  addiu       $a1, $t0, 0x4A80
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 19072));
    // 0x1214cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1214ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1214d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214d4: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x1214D4u;
    SET_GPR_U32(ctx, 31, 0x1214DCu);
    ctx->pc = 0x1214D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1214D4u;
            // 0x1214d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (runtime->hasFunction(0x1238F8u)) {
        auto targetFn = runtime->lookupFunction(0x1238F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214DCu; }
        if (ctx->pc != 0x1214DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcpWriteUserClust_0x1238f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1214DCu; }
        if (ctx->pc != 0x1214DCu) { return; }
    }
    ctx->pc = 0x1214DCu;
    // 0x1214dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1214DCu;
    {
        const bool branch_taken_0x1214dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1214E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214DCu;
            // 0x1214e0: 0x8fa60210  lw          $a2, 0x210($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214dc) {
            ctx->pc = 0x1214F0u;
            goto label_1214f0;
        }
    }
    ctx->pc = 0x1214E4u;
    // 0x1214e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1214E4u;
    {
        const bool branch_taken_0x1214e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214E4u;
            // 0x1214e8: 0x8fa20404  lw          $v0, 0x404($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214e4) {
            ctx->pc = 0x121540u;
            goto label_121540;
        }
    }
    ctx->pc = 0x1214ECu;
    // 0x1214ec: 0x0  nop
    ctx->pc = 0x1214ecu;
    // NOP
label_1214f0:
    // 0x1214f0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x1214f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x1214f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1214f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1214f8: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1214F8u;
    {
        const bool branch_taken_0x1214f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1214FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1214F8u;
            // 0x1214fc: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36866u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214f8) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121500u;
    // 0x121500: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x121500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_121504:
    // 0x121504: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121508: 0xc047d66  jal         func_11F598
    ctx->pc = 0x121508u;
    SET_GPR_U32(ctx, 31, 0x121510u);
    ctx->pc = 0x12150Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121508u;
            // 0x12150c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F598u;
    if (runtime->hasFunction(0x11F598u)) {
        auto targetFn = runtime->lookupFunction(0x11F598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121510u; }
        if (ctx->pc != 0x121510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__GetEntryByPos_0x11f598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121510u; }
        if (ctx->pc != 0x121510u) { return; }
    }
    ctx->pc = 0x121510u;
    // 0x121510: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x121510u;
    {
        const bool branch_taken_0x121510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121510) {
            ctx->pc = 0x121514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121510u;
            // 0x121514: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121544u;
            goto label_121544;
        }
    }
    ctx->pc = 0x121518u;
    // 0x121518: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x121518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12151c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121520: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x121520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x121524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x121524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121528: 0x8fa70214  lw          $a3, 0x214($sp)
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x12152c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121530: 0xc04836e  jal         func_120DB8
    ctx->pc = 0x121530u;
    SET_GPR_U32(ctx, 31, 0x121538u);
    ctx->pc = 0x121534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121530u;
            // 0x121534: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120DB8u;
    if (runtime->hasFunction(0x120DB8u)) {
        auto targetFn = runtime->lookupFunction(0x120DB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121538u; }
        if (ctx->pc != 0x121538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetEntryByPos_0x120db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121538u; }
        if (ctx->pc != 0x121538u) { return; }
    }
    ctx->pc = 0x121538u;
    // 0x121538: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x121538u;
    {
        const bool branch_taken_0x121538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121538) {
            ctx->pc = 0x12153Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x121538u;
            // 0x12153c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x121550u;
            goto label_121550;
        }
    }
    ctx->pc = 0x121540u;
label_121540:
    // 0x121540: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x121540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_121544:
    // 0x121544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x121544u;
    {
        const bool branch_taken_0x121544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121544u;
            // 0x121548: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121544) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x12154Cu;
    // 0x12154c: 0x0  nop
    ctx->pc = 0x12154cu;
    // NOP
label_121550:
    // 0x121550: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x121550u;
    {
        const bool branch_taken_0x121550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121550u;
            // 0x121554: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121550) {
            ctx->pc = 0x121568u;
            goto label_121568;
        }
    }
    ctx->pc = 0x121558u;
label_121558:
    // 0x121558: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x121558u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12155c: 0x1000fee8  b           . + 4 + (-0x118 << 2)
    ctx->pc = 0x12155Cu;
    {
        const bool branch_taken_0x12155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12155Cu;
            // 0x121560: 0x2228824  and         $s1, $s1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12155c) {
            ctx->pc = 0x121100u;
            goto label_121100;
        }
    }
    ctx->pc = 0x121564u;
    // 0x121564: 0x0  nop
    ctx->pc = 0x121564u;
    // NOP
label_121568:
    // 0x121568: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x121568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x12156c: 0xdfb10418  ld          $s1, 0x418($sp)
    ctx->pc = 0x12156cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x121570: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x121570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x121574: 0xdfb30428  ld          $s3, 0x428($sp)
    ctx->pc = 0x121574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x121578: 0xdfb40430  ld          $s4, 0x430($sp)
    ctx->pc = 0x121578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x12157c: 0xdfb50438  ld          $s5, 0x438($sp)
    ctx->pc = 0x12157cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x121580: 0xdfb60440  ld          $s6, 0x440($sp)
    ctx->pc = 0x121580u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x121584: 0xdfb70448  ld          $s7, 0x448($sp)
    ctx->pc = 0x121584u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x121588: 0xdfbe0450  ld          $fp, 0x450($sp)
    ctx->pc = 0x121588u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x12158c: 0xdfbf0458  ld          $ra, 0x458($sp)
    ctx->pc = 0x12158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x121590: 0x3e00008  jr          $ra
    ctx->pc = 0x121590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121590u;
            // 0x121594: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121100u: goto label_121100;
            case 0x121130u: goto label_121130;
            case 0x121140u: goto label_121140;
            case 0x12117Cu: goto label_12117c;
            case 0x1211D8u: goto label_1211d8;
            case 0x1211DCu: goto label_1211dc;
            case 0x121214u: goto label_121214;
            case 0x121218u: goto label_121218;
            case 0x12122Cu: goto label_12122c;
            case 0x121240u: goto label_121240;
            case 0x1212A0u: goto label_1212a0;
            case 0x1212A4u: goto label_1212a4;
            case 0x1212DCu: goto label_1212dc;
            case 0x121308u: goto label_121308;
            case 0x121338u: goto label_121338;
            case 0x121380u: goto label_121380;
            case 0x121384u: goto label_121384;
            case 0x12142Cu: goto label_12142c;
            case 0x121488u: goto label_121488;
            case 0x12148Cu: goto label_12148c;
            case 0x1214C4u: goto label_1214c4;
            case 0x1214F0u: goto label_1214f0;
            case 0x121504u: goto label_121504;
            case 0x121540u: goto label_121540;
            case 0x121544u: goto label_121544;
            case 0x121550u: goto label_121550;
            case 0x121558u: goto label_121558;
            case 0x121568u: goto label_121568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121598u;
}
