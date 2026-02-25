#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_03Hit
// Address: 0x1b1530 - 0x1b1694
void En7_03Hit_0x1b1530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_03Hit_0x1b1530");
#endif

    ctx->pc = 0x1b1530u;

    // 0x1b1530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b1534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b1538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b153c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1548: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x1b1548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b154c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1b154cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1b1550: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1b1550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b1554: 0x18800048  blez        $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1B1554u;
    {
        const bool branch_taken_0x1b1554 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B1558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1554u;
            // 0x1b1558: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1554) {
            ctx->pc = 0x1B1678u;
            goto label_1b1678;
        }
    }
    ctx->pc = 0x1B155Cu;
    // 0x1b155c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1b155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b1560: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b1564: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b1564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b1568: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b156c: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B156Cu;
    {
        const bool branch_taken_0x1b156c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1b156c) {
            ctx->pc = 0x1B1678u;
            goto label_1b1678;
        }
    }
    ctx->pc = 0x1B1574u;
    // 0x1b1574: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1b1574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1578: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1b1578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1b157c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1b1580: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b1580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b1584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1588: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1b1588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1b158c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b158cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b1590: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b1594: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1b1594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b1598: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1B1598u;
    SET_GPR_U32(ctx, 31, 0x1B15A0u);
    ctx->pc = 0x1B159Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1598u;
            // 0x1b159c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15A0u; }
        if (ctx->pc != 0x1B15A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15A0u; }
        if (ctx->pc != 0x1B15A0u) { return; }
    }
    ctx->pc = 0x1B15A0u;
    // 0x1b15a0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b15a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b15a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B15A8u;
    {
        const bool branch_taken_0x1b15a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B15ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15A8u;
            // 0x1b15ac: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15a8) {
            ctx->pc = 0x1B15B8u;
            goto label_1b15b8;
        }
    }
    ctx->pc = 0x1B15B0u;
    // 0x1b15b0: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1b15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1b15b4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1b15b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1b15b8:
    // 0x1b15b8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1b15b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b15bc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B15BCu;
    {
        const bool branch_taken_0x1b15bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15bc) {
            ctx->pc = 0x1B1650u;
            goto label_1b1650;
        }
    }
    ctx->pc = 0x1B15C4u;
    // 0x1b15c4: 0x0  nop
    ctx->pc = 0x1b15c4u;
    // NOP
label_1b15c8:
    // 0x1b15c8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B15C8u;
    SET_GPR_U32(ctx, 31, 0x1B15D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15D0u; }
        if (ctx->pc != 0x1B15D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15D0u; }
        if (ctx->pc != 0x1B15D0u) { return; }
    }
    ctx->pc = 0x1B15D0u;
    // 0x1b15d0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1b15d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1b15d4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b15d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b15d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b15dc: 0x0  nop
    ctx->pc = 0x1b15dcu;
    // NOP
    // 0x1b15e0: 0x0  nop
    ctx->pc = 0x1b15e0u;
    // NOP
    // 0x1b15e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b15e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b15e8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1B15E8u;
    SET_GPR_U32(ctx, 31, 0x1B15F0u);
    ctx->pc = 0x1B15ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15E8u;
            // 0x1b15ec: 0x629023  subu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15F0u; }
        if (ctx->pc != 0x1B15F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15F0u; }
        if (ctx->pc != 0x1B15F0u) { return; }
    }
    ctx->pc = 0x1B15F0u;
    // 0x1b15f0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1b15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1b15f4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1b15f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b15f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b15f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b15fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b15fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1600: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1604: 0x0  nop
    ctx->pc = 0x1b1604u;
    // NOP
    // 0x1b1608: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b1608u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1b160c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1b160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b1610: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b1610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b1614: 0x722821  addu        $a1, $v1, $s2
    ctx->pc = 0x1b1614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b1618: 0x1810  mfhi        $v1
    ctx->pc = 0x1b1618u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b161c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1b161cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b1620: 0xc065944  jal         func_196510
    ctx->pc = 0x1B1620u;
    SET_GPR_U32(ctx, 31, 0x1B1628u);
    ctx->pc = 0x1B1624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1620u;
            // 0x1b1624: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1628u; }
        if (ctx->pc != 0x1B1628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1628u; }
        if (ctx->pc != 0x1B1628u) { return; }
    }
    ctx->pc = 0x1B1628u;
    // 0x1b1628: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1b1628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b162c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b162cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b1630: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1630u;
    {
        const bool branch_taken_0x1b1630 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B1634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1630u;
            // 0x1b1634: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1630) {
            ctx->pc = 0x1B1640u;
            goto label_1b1640;
        }
    }
    ctx->pc = 0x1B1638u;
    // 0x1b1638: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x1b1638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x1b163c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1b163cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1b1640:
    // 0x1b1640: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1b1640u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b1644: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B1644u;
    {
        const bool branch_taken_0x1b1644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1644) {
            ctx->pc = 0x1B15C8u;
            goto label_1b15c8;
        }
    }
    ctx->pc = 0x1B164Cu;
    // 0x1b164c: 0x0  nop
    ctx->pc = 0x1b164cu;
    // NOP
label_1b1650:
    // 0x1b1650: 0x288300ff  slti        $v1, $a0, 0xFF
    ctx->pc = 0x1b1650u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x1b1654: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1654u;
    {
        const bool branch_taken_0x1b1654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1654) {
            ctx->pc = 0x1B1678u;
            goto label_1b1678;
        }
    }
    ctx->pc = 0x1B165Cu;
    // 0x1b165c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1b165cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b1660: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1664: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1b1664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b1668: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b1668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b166c: 0xc065944  jal         func_196510
    ctx->pc = 0x1B166Cu;
    SET_GPR_U32(ctx, 31, 0x1B1674u);
    ctx->pc = 0x1B1670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B166Cu;
            // 0x1b1670: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1674u; }
        if (ctx->pc != 0x1B1674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1674u; }
        if (ctx->pc != 0x1B1674u) { return; }
    }
    ctx->pc = 0x1B1674u;
    // 0x1b1674: 0x0  nop
    ctx->pc = 0x1b1674u;
    // NOP
label_1b1678:
    // 0x1b1678: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b1678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b167c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b167cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b168c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B168Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B168Cu;
            // 0x1b1690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B15B8u: goto label_1b15b8;
            case 0x1B15C8u: goto label_1b15c8;
            case 0x1B1640u: goto label_1b1640;
            case 0x1B1650u: goto label_1b1650;
            case 0x1B1678u: goto label_1b1678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1694u;
}
