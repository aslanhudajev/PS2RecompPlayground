#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En2_02Move
// Address: 0x18e560 - 0x18f8b4
void En2_02Move_0x18e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En2_02Move_0x18e560");
#endif

    ctx->pc = 0x18e560u;

label_18e560:
    // 0x18e560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18e564:
    // 0x18e564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18e568:
    // 0x18e568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18e56c:
    // 0x18e56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18e570:
    // 0x18e570: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18e574:
    // 0x18e574: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x18e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e578:
    // 0x18e578: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x18e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e57c:
    // 0x18e57c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18e580:
    // 0x18e580: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x18e580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_18e584:
    // 0x18e584: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18e584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18e588:
    // 0x18e588: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x18e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e58c:
    // 0x18e58c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x18e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e590:
    // 0x18e590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18e594:
    // 0x18e594: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x18e594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_18e598:
    // 0x18e598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18e59c:
    // 0x18e59c: 0xc48100e4  lwc1        $f1, 0xE4($a0)
    ctx->pc = 0x18e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e5a0:
    // 0x18e5a0: 0xc4400114  lwc1        $f0, 0x114($v0)
    ctx->pc = 0x18e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5a4:
    // 0x18e5a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18e5a8:
    // 0x18e5a8: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x18e5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_18e5ac:
    // 0x18e5ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18e5b0:
    // 0x18e5b0: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x18e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e5b4:
    // 0x18e5b4: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x18e5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5b8:
    // 0x18e5b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18e5bc:
    // 0x18e5bc: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x18e5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_18e5c0:
    // 0x18e5c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18e5c4:
    // 0x18e5c4: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x18e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e5c8:
    // 0x18e5c8: 0xc4400118  lwc1        $f0, 0x118($v0)
    ctx->pc = 0x18e5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e5cc:
    // 0x18e5cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18e5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18e5d0:
    // 0x18e5d0: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x18e5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_18e5d4:
    // 0x18e5d4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x18e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18e5d8:
    // 0x18e5d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_18e5dc:
    if (ctx->pc == 0x18E5DCu) {
        ctx->pc = 0x18E5DCu;
            // 0x18e5dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18E5E0u;
        goto label_18e5e0;
    }
    ctx->pc = 0x18E5D8u;
    {
        const bool branch_taken_0x18e5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E5D8u;
            // 0x18e5dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5d8) {
            ctx->pc = 0x18E648u;
            goto label_18e648;
        }
    }
    ctx->pc = 0x18E5E0u;
label_18e5e0:
    // 0x18e5e0: 0xc050bb4  jal         func_142ED0
label_18e5e4:
    if (ctx->pc == 0x18E5E4u) {
        ctx->pc = 0x18E5E8u;
        goto label_18e5e8;
    }
    ctx->pc = 0x18E5E0u;
    SET_GPR_U32(ctx, 31, 0x18E5E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5E8u; }
        if (ctx->pc != 0x18E5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E5E8u; }
        if (ctx->pc != 0x18E5E8u) { return; }
    }
    ctx->pc = 0x18E5E8u;
label_18e5e8:
    // 0x18e5e8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18e5ec:
    // 0x18e5ec: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18e5f0:
    // 0x18e5f0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18e5f0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18e5f4:
    // 0x18e5f4: 0x0  nop
    ctx->pc = 0x18e5f4u;
    // NOP
label_18e5f8:
    // 0x18e5f8: 0x0  nop
    ctx->pc = 0x18e5f8u;
    // NOP
label_18e5fc:
    // 0x18e5fc: 0x1010  mfhi        $v0
    ctx->pc = 0x18e5fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18e600:
    // 0x18e600: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18e604:
    // 0x18e604: 0xc050bb4  jal         func_142ED0
label_18e608:
    if (ctx->pc == 0x18E608u) {
        ctx->pc = 0x18E608u;
            // 0x18e608: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x18E60Cu;
        goto label_18e60c;
    }
    ctx->pc = 0x18E604u;
    SET_GPR_U32(ctx, 31, 0x18E60Cu);
    ctx->pc = 0x18E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E604u;
            // 0x18e608: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E60Cu; }
        if (ctx->pc != 0x18E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E60Cu; }
        if (ctx->pc != 0x18E60Cu) { return; }
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18e610:
    // 0x18e610: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x18e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18e614:
    // 0x18e614: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18e614u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18e618:
    // 0x18e618: 0x0  nop
    ctx->pc = 0x18e618u;
    // NOP
label_18e61c:
    // 0x18e61c: 0x0  nop
    ctx->pc = 0x18e61cu;
    // NOP
label_18e620:
    // 0x18e620: 0x1010  mfhi        $v0
    ctx->pc = 0x18e620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18e624:
    // 0x18e624: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18e624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18e628:
    // 0x18e628: 0xc050bb4  jal         func_142ED0
label_18e62c:
    if (ctx->pc == 0x18E62Cu) {
        ctx->pc = 0x18E62Cu;
            // 0x18e62c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x18E630u;
        goto label_18e630;
    }
    ctx->pc = 0x18E628u;
    SET_GPR_U32(ctx, 31, 0x18E630u);
    ctx->pc = 0x18E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E628u;
            // 0x18e62c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E630u; }
        if (ctx->pc != 0x18E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E630u; }
        if (ctx->pc != 0x18E630u) { return; }
    }
    ctx->pc = 0x18E630u;
label_18e630:
    // 0x18e630: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x18e630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18e634:
    // 0x18e634: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18e634u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18e638:
    // 0x18e638: 0x0  nop
    ctx->pc = 0x18e638u;
    // NOP
label_18e63c:
    // 0x18e63c: 0x0  nop
    ctx->pc = 0x18e63cu;
    // NOP
label_18e640:
    // 0x18e640: 0x1010  mfhi        $v0
    ctx->pc = 0x18e640u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18e644:
    // 0x18e644: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x18e644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_18e648:
    // 0x18e648: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_18e64c:
    // 0x18e64c: 0x184001ce  blez        $v0, . + 4 + (0x1CE << 2)
label_18e650:
    if (ctx->pc == 0x18E650u) {
        ctx->pc = 0x18E654u;
        goto label_18e654;
    }
    ctx->pc = 0x18E64Cu;
    {
        const bool branch_taken_0x18e64c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18e64c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E654u;
label_18e654:
    // 0x18e654: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x18e654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_18e658:
    // 0x18e658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e65c:
    // 0x18e65c: 0x106200e8  beq         $v1, $v0, . + 4 + (0xE8 << 2)
label_18e660:
    if (ctx->pc == 0x18E660u) {
        ctx->pc = 0x18E664u;
        goto label_18e664;
    }
    ctx->pc = 0x18E65Cu;
    {
        const bool branch_taken_0x18e65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e65c) {
            ctx->pc = 0x18EA00u;
            goto label_18ea00;
        }
    }
    ctx->pc = 0x18E664u;
label_18e664:
    // 0x18e664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_18e668:
    if (ctx->pc == 0x18E668u) {
        ctx->pc = 0x18E66Cu;
        goto label_18e66c;
    }
    ctx->pc = 0x18E664u;
    {
        const bool branch_taken_0x18e664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e664) {
            ctx->pc = 0x18E678u;
            goto label_18e678;
        }
    }
    ctx->pc = 0x18E66Cu;
label_18e66c:
    // 0x18e66c: 0x100001c6  b           . + 4 + (0x1C6 << 2)
label_18e670:
    if (ctx->pc == 0x18E670u) {
        ctx->pc = 0x18E674u;
        goto label_18e674;
    }
    ctx->pc = 0x18E66Cu;
    {
        const bool branch_taken_0x18e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e66c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E674u;
label_18e674:
    // 0x18e674: 0x0  nop
    ctx->pc = 0x18e674u;
    // NOP
label_18e678:
    // 0x18e678: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18e67c:
    // 0x18e67c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x18e67cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_18e680:
    // 0x18e680: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_18e684:
    if (ctx->pc == 0x18E684u) {
        ctx->pc = 0x18E688u;
        goto label_18e688;
    }
    ctx->pc = 0x18E680u;
    {
        const bool branch_taken_0x18e680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e680) {
            ctx->pc = 0x18E7C0u;
            goto label_18e7c0;
        }
    }
    ctx->pc = 0x18E688u;
label_18e688:
    // 0x18e688: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e68c:
    // 0x18e68c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e690:
    // 0x18e690: 0x0  nop
    ctx->pc = 0x18e690u;
    // NOP
label_18e694:
    // 0x18e694: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e698:
    // 0x18e698: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18e69c:
    if (ctx->pc == 0x18E69Cu) {
        ctx->pc = 0x18E69Cu;
            // 0x18e69c: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->pc = 0x18E6A0u;
        goto label_18e6a0;
    }
    ctx->pc = 0x18E698u;
    {
        const bool branch_taken_0x18e698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E698u;
            // 0x18e69c: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e698) {
            ctx->pc = 0x18E6B8u;
            goto label_18e6b8;
        }
    }
    ctx->pc = 0x18E6A0u;
label_18e6a0:
    // 0x18e6a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18e6a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18e6a4:
    // 0x18e6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e6a8:
    // 0x18e6a8: 0x0  nop
    ctx->pc = 0x18e6a8u;
    // NOP
label_18e6ac:
    // 0x18e6ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18e6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18e6b0:
    // 0x18e6b0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x18e6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_18e6b4:
    // 0x18e6b4: 0x0  nop
    ctx->pc = 0x18e6b4u;
    // NOP
label_18e6b8:
    // 0x18e6b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x18e6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e6bc:
    // 0x18e6bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e6bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e6c0:
    // 0x18e6c0: 0x0  nop
    ctx->pc = 0x18e6c0u;
    // NOP
label_18e6c4:
    // 0x18e6c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e6c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e6c8:
    // 0x18e6c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18e6cc:
    if (ctx->pc == 0x18E6CCu) {
        ctx->pc = 0x18E6CCu;
            // 0x18e6cc: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x18E6D0u;
        goto label_18e6d0;
    }
    ctx->pc = 0x18E6C8u;
    {
        const bool branch_taken_0x18e6c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6C8u;
            // 0x18e6cc: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6c8) {
            ctx->pc = 0x18E6E8u;
            goto label_18e6e8;
        }
    }
    ctx->pc = 0x18E6D0u;
label_18e6d0:
    // 0x18e6d0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18e6d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18e6d4:
    // 0x18e6d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e6d8:
    // 0x18e6d8: 0x0  nop
    ctx->pc = 0x18e6d8u;
    // NOP
label_18e6dc:
    // 0x18e6dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e6e0:
    // 0x18e6e0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x18e6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_18e6e4:
    // 0x18e6e4: 0x0  nop
    ctx->pc = 0x18e6e4u;
    // NOP
label_18e6e8:
    // 0x18e6e8: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x18e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e6ec:
    // 0x18e6ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18e6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e6f0:
    // 0x18e6f0: 0x0  nop
    ctx->pc = 0x18e6f0u;
    // NOP
label_18e6f4:
    // 0x18e6f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e6f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e6f8:
    // 0x18e6f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18e6fc:
    if (ctx->pc == 0x18E6FCu) {
        ctx->pc = 0x18E6FCu;
            // 0x18e6fc: 0x3c023b44  lui         $v0, 0x3B44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
        ctx->pc = 0x18E700u;
        goto label_18e700;
    }
    ctx->pc = 0x18E6F8u;
    {
        const bool branch_taken_0x18e6f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E6F8u;
            // 0x18e6fc: 0x3c023b44  lui         $v0, 0x3B44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6f8) {
            ctx->pc = 0x18E718u;
            goto label_18e718;
        }
    }
    ctx->pc = 0x18E700u;
label_18e700:
    // 0x18e700: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x18e700u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_18e704:
    // 0x18e704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e708:
    // 0x18e708: 0x0  nop
    ctx->pc = 0x18e708u;
    // NOP
label_18e70c:
    // 0x18e70c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e70cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e710:
    // 0x18e710: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x18e710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_18e714:
    // 0x18e714: 0x0  nop
    ctx->pc = 0x18e714u;
    // NOP
label_18e718:
    // 0x18e718: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18e71c:
    // 0x18e71c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x18e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_18e720:
    // 0x18e720: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18e724:
    if (ctx->pc == 0x18E724u) {
        ctx->pc = 0x18E724u;
            // 0x18e724: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x18E728u;
        goto label_18e728;
    }
    ctx->pc = 0x18E720u;
    {
        const bool branch_taken_0x18e720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E720u;
            // 0x18e724: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e720) {
            ctx->pc = 0x18E730u;
            goto label_18e730;
        }
    }
    ctx->pc = 0x18E728u;
label_18e728:
    // 0x18e728: 0x14620197  bne         $v1, $v0, . + 4 + (0x197 << 2)
label_18e72c:
    if (ctx->pc == 0x18E72Cu) {
        ctx->pc = 0x18E730u;
        goto label_18e730;
    }
    ctx->pc = 0x18E728u;
    {
        const bool branch_taken_0x18e728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18e728) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E730u;
label_18e730:
    // 0x18e730: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18e734:
    // 0x18e734: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18e734u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18e738:
    // 0x18e738: 0x0  nop
    ctx->pc = 0x18e738u;
    // NOP
label_18e73c:
    // 0x18e73c: 0x0  nop
    ctx->pc = 0x18e73cu;
    // NOP
label_18e740:
    // 0x18e740: 0x1010  mfhi        $v0
    ctx->pc = 0x18e740u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18e744:
    // 0x18e744: 0x14400190  bnez        $v0, . + 4 + (0x190 << 2)
label_18e748:
    if (ctx->pc == 0x18E748u) {
        ctx->pc = 0x18E74Cu;
        goto label_18e74c;
    }
    ctx->pc = 0x18E744u;
    {
        const bool branch_taken_0x18e744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e744) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E74Cu;
label_18e74c:
    // 0x18e74c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e750:
    // 0x18e750: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x18e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_18e754:
    // 0x18e754: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x18e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18e758:
    // 0x18e758: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e75c:
    // 0x18e75c: 0xc063e60  jal         func_18F980
label_18e760:
    if (ctx->pc == 0x18E760u) {
        ctx->pc = 0x18E760u;
            // 0x18e760: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x18E764u;
        goto label_18e764;
    }
    ctx->pc = 0x18E75Cu;
    SET_GPR_U32(ctx, 31, 0x18E764u);
    ctx->pc = 0x18E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E75Cu;
            // 0x18e760: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F980u;
    if (runtime->hasFunction(0x18F980u)) {
        auto targetFn = runtime->lookupFunction(0x18F980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E764u; }
        if (ctx->pc != 0x18E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x18f980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E764u; }
        if (ctx->pc != 0x18E764u) { return; }
    }
    ctx->pc = 0x18E764u;
label_18e764:
    // 0x18e764: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18e768:
    // 0x18e768: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18e76c:
    // 0x18e76c: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x18e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_18e770:
    // 0x18e770: 0xc0655a0  jal         func_195680
label_18e774:
    if (ctx->pc == 0x18E774u) {
        ctx->pc = 0x18E774u;
            // 0x18e774: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18E778u;
        goto label_18e778;
    }
    ctx->pc = 0x18E770u;
    SET_GPR_U32(ctx, 31, 0x18E778u);
    ctx->pc = 0x18E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E770u;
            // 0x18e774: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E778u; }
        if (ctx->pc != 0x18E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E778u; }
        if (ctx->pc != 0x18E778u) { return; }
    }
    ctx->pc = 0x18E778u;
label_18e778:
    // 0x18e778: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18e778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18e77c:
    // 0x18e77c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18e780:
    // 0x18e780: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x18e780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_18e784:
    // 0x18e784: 0xc065590  jal         func_195640
label_18e788:
    if (ctx->pc == 0x18E788u) {
        ctx->pc = 0x18E788u;
            // 0x18e788: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18E78Cu;
        goto label_18e78c;
    }
    ctx->pc = 0x18E784u;
    SET_GPR_U32(ctx, 31, 0x18E78Cu);
    ctx->pc = 0x18E788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E784u;
            // 0x18e788: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E78Cu; }
        if (ctx->pc != 0x18E78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E78Cu; }
        if (ctx->pc != 0x18E78Cu) { return; }
    }
    ctx->pc = 0x18E78Cu;
label_18e78c:
    // 0x18e78c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18e790:
    // 0x18e790: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18e794:
    // 0x18e794: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x18e794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_18e798:
    // 0x18e798: 0xc0655a0  jal         func_195680
label_18e79c:
    if (ctx->pc == 0x18E79Cu) {
        ctx->pc = 0x18E79Cu;
            // 0x18e79c: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18E7A0u;
        goto label_18e7a0;
    }
    ctx->pc = 0x18E798u;
    SET_GPR_U32(ctx, 31, 0x18E7A0u);
    ctx->pc = 0x18E79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E798u;
            // 0x18e79c: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7A0u; }
        if (ctx->pc != 0x18E7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7A0u; }
        if (ctx->pc != 0x18E7A0u) { return; }
    }
    ctx->pc = 0x18E7A0u;
label_18e7a0:
    // 0x18e7a0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18e7a4:
    // 0x18e7a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18e7a8:
    // 0x18e7a8: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x18e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_18e7ac:
    // 0x18e7ac: 0xc065590  jal         func_195640
label_18e7b0:
    if (ctx->pc == 0x18E7B0u) {
        ctx->pc = 0x18E7B0u;
            // 0x18e7b0: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18E7B4u;
        goto label_18e7b4;
    }
    ctx->pc = 0x18E7ACu;
    SET_GPR_U32(ctx, 31, 0x18E7B4u);
    ctx->pc = 0x18E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7ACu;
            // 0x18e7b0: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7B4u; }
        if (ctx->pc != 0x18E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E7B4u; }
        if (ctx->pc != 0x18E7B4u) { return; }
    }
    ctx->pc = 0x18E7B4u;
label_18e7b4:
    // 0x18e7b4: 0x10000174  b           . + 4 + (0x174 << 2)
label_18e7b8:
    if (ctx->pc == 0x18E7B8u) {
        ctx->pc = 0x18E7BCu;
        goto label_18e7bc;
    }
    ctx->pc = 0x18E7B4u;
    {
        const bool branch_taken_0x18e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e7b4) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E7BCu;
label_18e7bc:
    // 0x18e7bc: 0x0  nop
    ctx->pc = 0x18e7bcu;
    // NOP
label_18e7c0:
    // 0x18e7c0: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x18e7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
label_18e7c4:
    // 0x18e7c4: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
label_18e7c8:
    if (ctx->pc == 0x18E7C8u) {
        ctx->pc = 0x18E7C8u;
            // 0x18e7c8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x18E7CCu;
        goto label_18e7cc;
    }
    ctx->pc = 0x18E7C4u;
    {
        const bool branch_taken_0x18e7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E7C4u;
            // 0x18e7c8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e7c4) {
            ctx->pc = 0x18E9C8u;
            goto label_18e9c8;
        }
    }
    ctx->pc = 0x18E7CCu;
label_18e7cc:
    // 0x18e7cc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x18e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18e7d0:
    // 0x18e7d0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x18e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_18e7d4:
    // 0x18e7d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18e7d8:
    // 0x18e7d8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18e7dc:
    // 0x18e7dc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_18e7e0:
    // 0x18e7e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18e7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_18e7e4:
    // 0x18e7e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e7e8:
    // 0x18e7e8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x18e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_18e7ec:
    // 0x18e7ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e7f0:
    // 0x18e7f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_18e7f4:
    // 0x18e7f4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18e7f8:
    // 0x18e7f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e7fc:
    // 0x18e7fc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_18e800:
    // 0x18e800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e804:
    // 0x18e804: 0x0  nop
    ctx->pc = 0x18e804u;
    // NOP
label_18e808:
    // 0x18e808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18e808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18e80c:
    // 0x18e80c: 0xc04b6ee  jal         func_12DBB8
label_18e810:
    if (ctx->pc == 0x18E810u) {
        ctx->pc = 0x18E810u;
            // 0x18e810: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x18E814u;
        goto label_18e814;
    }
    ctx->pc = 0x18E80Cu;
    SET_GPR_U32(ctx, 31, 0x18E814u);
    ctx->pc = 0x18E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E80Cu;
            // 0x18e810: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E814u; }
        if (ctx->pc != 0x18E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E814u; }
        if (ctx->pc != 0x18E814u) { return; }
    }
    ctx->pc = 0x18E814u;
label_18e814:
    // 0x18e814: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e818:
    // 0x18e818: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x18e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e81c:
    // 0x18e81c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x18e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e820:
    // 0x18e820: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18e820u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18e824:
    // 0x18e824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18e824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e828:
    // 0x18e828: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18e82c:
    if (ctx->pc == 0x18E82Cu) {
        ctx->pc = 0x18E82Cu;
            // 0x18e82c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x18E830u;
        goto label_18e830;
    }
    ctx->pc = 0x18E828u;
    {
        const bool branch_taken_0x18e828 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E828u;
            // 0x18e82c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e828) {
            ctx->pc = 0x18E838u;
            goto label_18e838;
        }
    }
    ctx->pc = 0x18E830u;
label_18e830:
    // 0x18e830: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18e830u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18e834:
    // 0x18e834: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x18e834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_18e838:
    // 0x18e838: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e83c:
    // 0x18e83c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x18e83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18e840:
    // 0x18e840: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x18e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e844:
    // 0x18e844: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18e844u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18e848:
    // 0x18e848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18e848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18e84c:
    // 0x18e84c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_18e850:
    if (ctx->pc == 0x18E850u) {
        ctx->pc = 0x18E850u;
            // 0x18e850: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x18E854u;
        goto label_18e854;
    }
    ctx->pc = 0x18E84Cu;
    {
        const bool branch_taken_0x18e84c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E84Cu;
            // 0x18e850: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e84c) {
            ctx->pc = 0x18E860u;
            goto label_18e860;
        }
    }
    ctx->pc = 0x18E854u;
label_18e854:
    // 0x18e854: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18e854u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18e858:
    // 0x18e858: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x18e858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_18e85c:
    // 0x18e85c: 0x0  nop
    ctx->pc = 0x18e85cu;
    // NOP
label_18e860:
    // 0x18e860: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18e860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18e864:
    // 0x18e864: 0x240200c3  addiu       $v0, $zero, 0xC3
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_18e868:
    // 0x18e868: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
label_18e86c:
    if (ctx->pc == 0x18E86Cu) {
        ctx->pc = 0x18E86Cu;
            // 0x18e86c: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x18E870u;
        goto label_18e870;
    }
    ctx->pc = 0x18E868u;
    {
        const bool branch_taken_0x18e868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E868u;
            // 0x18e86c: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e868) {
            ctx->pc = 0x18E9B0u;
            goto label_18e9b0;
        }
    }
    ctx->pc = 0x18E870u;
label_18e870:
    // 0x18e870: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_18e874:
    if (ctx->pc == 0x18E874u) {
        ctx->pc = 0x18E878u;
        goto label_18e878;
    }
    ctx->pc = 0x18E870u;
    {
        const bool branch_taken_0x18e870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e870) {
            ctx->pc = 0x18E980u;
            goto label_18e980;
        }
    }
    ctx->pc = 0x18E878u;
label_18e878:
    // 0x18e878: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_18e87c:
    // 0x18e87c: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_18e880:
    if (ctx->pc == 0x18E880u) {
        ctx->pc = 0x18E880u;
            // 0x18e880: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->pc = 0x18E884u;
        goto label_18e884;
    }
    ctx->pc = 0x18E87Cu;
    {
        const bool branch_taken_0x18e87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E87Cu;
            // 0x18e880: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e87c) {
            ctx->pc = 0x18E958u;
            goto label_18e958;
        }
    }
    ctx->pc = 0x18E884u;
label_18e884:
    // 0x18e884: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_18e888:
    if (ctx->pc == 0x18E888u) {
        ctx->pc = 0x18E88Cu;
        goto label_18e88c;
    }
    ctx->pc = 0x18E884u;
    {
        const bool branch_taken_0x18e884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e884) {
            ctx->pc = 0x18E928u;
            goto label_18e928;
        }
    }
    ctx->pc = 0x18E88Cu;
label_18e88c:
    // 0x18e88c: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x18e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_18e890:
    // 0x18e890: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_18e894:
    if (ctx->pc == 0x18E894u) {
        ctx->pc = 0x18E894u;
            // 0x18e894: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x18E898u;
        goto label_18e898;
    }
    ctx->pc = 0x18E890u;
    {
        const bool branch_taken_0x18e890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E890u;
            // 0x18e894: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e890) {
            ctx->pc = 0x18E900u;
            goto label_18e900;
        }
    }
    ctx->pc = 0x18E898u;
label_18e898:
    // 0x18e898: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_18e89c:
    if (ctx->pc == 0x18E89Cu) {
        ctx->pc = 0x18E8A0u;
        goto label_18e8a0;
    }
    ctx->pc = 0x18E898u;
    {
        const bool branch_taken_0x18e898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e898) {
            ctx->pc = 0x18E8D0u;
            goto label_18e8d0;
        }
    }
    ctx->pc = 0x18E8A0u;
label_18e8a0:
    // 0x18e8a0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x18e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_18e8a4:
    // 0x18e8a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18e8a8:
    if (ctx->pc == 0x18E8A8u) {
        ctx->pc = 0x18E8ACu;
        goto label_18e8ac;
    }
    ctx->pc = 0x18E8A4u;
    {
        const bool branch_taken_0x18e8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e8a4) {
            ctx->pc = 0x18E8B8u;
            goto label_18e8b8;
        }
    }
    ctx->pc = 0x18E8ACu;
label_18e8ac:
    // 0x18e8ac: 0x10000136  b           . + 4 + (0x136 << 2)
label_18e8b0:
    if (ctx->pc == 0x18E8B0u) {
        ctx->pc = 0x18E8B4u;
        goto label_18e8b4;
    }
    ctx->pc = 0x18E8ACu;
    {
        const bool branch_taken_0x18e8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8ac) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E8B4u;
label_18e8b4:
    // 0x18e8b4: 0x0  nop
    ctx->pc = 0x18e8b4u;
    // NOP
label_18e8b8:
    // 0x18e8b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e8bc:
    // 0x18e8bc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e8c0:
    // 0x18e8c0: 0xc063e30  jal         func_18F8C0
label_18e8c4:
    if (ctx->pc == 0x18E8C4u) {
        ctx->pc = 0x18E8C4u;
            // 0x18e8c4: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E8C8u;
        goto label_18e8c8;
    }
    ctx->pc = 0x18E8C0u;
    SET_GPR_U32(ctx, 31, 0x18E8C8u);
    ctx->pc = 0x18E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8C0u;
            // 0x18e8c4: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8C8u; }
        if (ctx->pc != 0x18E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8C8u; }
        if (ctx->pc != 0x18E8C8u) { return; }
    }
    ctx->pc = 0x18E8C8u;
label_18e8c8:
    // 0x18e8c8: 0x1000012f  b           . + 4 + (0x12F << 2)
label_18e8cc:
    if (ctx->pc == 0x18E8CCu) {
        ctx->pc = 0x18E8D0u;
        goto label_18e8d0;
    }
    ctx->pc = 0x18E8C8u;
    {
        const bool branch_taken_0x18e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8c8) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E8D0u;
label_18e8d0:
    // 0x18e8d0: 0xc065d00  jal         func_197400
label_18e8d4:
    if (ctx->pc == 0x18E8D4u) {
        ctx->pc = 0x18E8D8u;
        goto label_18e8d8;
    }
    ctx->pc = 0x18E8D0u;
    SET_GPR_U32(ctx, 31, 0x18E8D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8D8u; }
        if (ctx->pc != 0x18E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8D8u; }
        if (ctx->pc != 0x18E8D8u) { return; }
    }
    ctx->pc = 0x18E8D8u;
label_18e8d8:
    // 0x18e8d8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18e8d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18e8dc:
    // 0x18e8dc: 0x1420012a  bnez        $at, . + 4 + (0x12A << 2)
label_18e8e0:
    if (ctx->pc == 0x18E8E0u) {
        ctx->pc = 0x18E8E4u;
        goto label_18e8e4;
    }
    ctx->pc = 0x18E8DCu;
    {
        const bool branch_taken_0x18e8dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e8dc) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E8E4u;
label_18e8e4:
    // 0x18e8e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e8e8:
    // 0x18e8e8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e8ec:
    // 0x18e8ec: 0xc063e30  jal         func_18F8C0
label_18e8f0:
    if (ctx->pc == 0x18E8F0u) {
        ctx->pc = 0x18E8F0u;
            // 0x18e8f0: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E8F4u;
        goto label_18e8f4;
    }
    ctx->pc = 0x18E8ECu;
    SET_GPR_U32(ctx, 31, 0x18E8F4u);
    ctx->pc = 0x18E8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E8ECu;
            // 0x18e8f0: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8F4u; }
        if (ctx->pc != 0x18E8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E8F4u; }
        if (ctx->pc != 0x18E8F4u) { return; }
    }
    ctx->pc = 0x18E8F4u;
label_18e8f4:
    // 0x18e8f4: 0x10000124  b           . + 4 + (0x124 << 2)
label_18e8f8:
    if (ctx->pc == 0x18E8F8u) {
        ctx->pc = 0x18E8FCu;
        goto label_18e8fc;
    }
    ctx->pc = 0x18E8F4u;
    {
        const bool branch_taken_0x18e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e8f4) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E8FCu;
label_18e8fc:
    // 0x18e8fc: 0x0  nop
    ctx->pc = 0x18e8fcu;
    // NOP
label_18e900:
    // 0x18e900: 0xc065d00  jal         func_197400
label_18e904:
    if (ctx->pc == 0x18E904u) {
        ctx->pc = 0x18E908u;
        goto label_18e908;
    }
    ctx->pc = 0x18E900u;
    SET_GPR_U32(ctx, 31, 0x18E908u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E908u; }
        if (ctx->pc != 0x18E908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E908u; }
        if (ctx->pc != 0x18E908u) { return; }
    }
    ctx->pc = 0x18E908u;
label_18e908:
    // 0x18e908: 0x1840011f  blez        $v0, . + 4 + (0x11F << 2)
label_18e90c:
    if (ctx->pc == 0x18E90Cu) {
        ctx->pc = 0x18E910u;
        goto label_18e910;
    }
    ctx->pc = 0x18E908u;
    {
        const bool branch_taken_0x18e908 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18e908) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E910u;
label_18e910:
    // 0x18e910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e914:
    // 0x18e914: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e918:
    // 0x18e918: 0xc063e30  jal         func_18F8C0
label_18e91c:
    if (ctx->pc == 0x18E91Cu) {
        ctx->pc = 0x18E91Cu;
            // 0x18e91c: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E920u;
        goto label_18e920;
    }
    ctx->pc = 0x18E918u;
    SET_GPR_U32(ctx, 31, 0x18E920u);
    ctx->pc = 0x18E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E918u;
            // 0x18e91c: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E920u; }
        if (ctx->pc != 0x18E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E920u; }
        if (ctx->pc != 0x18E920u) { return; }
    }
    ctx->pc = 0x18E920u;
label_18e920:
    // 0x18e920: 0x10000119  b           . + 4 + (0x119 << 2)
label_18e924:
    if (ctx->pc == 0x18E924u) {
        ctx->pc = 0x18E928u;
        goto label_18e928;
    }
    ctx->pc = 0x18E920u;
    {
        const bool branch_taken_0x18e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e920) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E928u;
label_18e928:
    // 0x18e928: 0xc065d00  jal         func_197400
label_18e92c:
    if (ctx->pc == 0x18E92Cu) {
        ctx->pc = 0x18E930u;
        goto label_18e930;
    }
    ctx->pc = 0x18E928u;
    SET_GPR_U32(ctx, 31, 0x18E930u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E930u; }
        if (ctx->pc != 0x18E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E930u; }
        if (ctx->pc != 0x18E930u) { return; }
    }
    ctx->pc = 0x18E930u;
label_18e930:
    // 0x18e930: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18e930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18e934:
    // 0x18e934: 0x14200114  bnez        $at, . + 4 + (0x114 << 2)
label_18e938:
    if (ctx->pc == 0x18E938u) {
        ctx->pc = 0x18E93Cu;
        goto label_18e93c;
    }
    ctx->pc = 0x18E934u;
    {
        const bool branch_taken_0x18e934 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e934) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E93Cu;
label_18e93c:
    // 0x18e93c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e940:
    // 0x18e940: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e944:
    // 0x18e944: 0xc063e30  jal         func_18F8C0
label_18e948:
    if (ctx->pc == 0x18E948u) {
        ctx->pc = 0x18E948u;
            // 0x18e948: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E94Cu;
        goto label_18e94c;
    }
    ctx->pc = 0x18E944u;
    SET_GPR_U32(ctx, 31, 0x18E94Cu);
    ctx->pc = 0x18E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E944u;
            // 0x18e948: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E94Cu; }
        if (ctx->pc != 0x18E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E94Cu; }
        if (ctx->pc != 0x18E94Cu) { return; }
    }
    ctx->pc = 0x18E94Cu;
label_18e94c:
    // 0x18e94c: 0x1000010e  b           . + 4 + (0x10E << 2)
label_18e950:
    if (ctx->pc == 0x18E950u) {
        ctx->pc = 0x18E954u;
        goto label_18e954;
    }
    ctx->pc = 0x18E94Cu;
    {
        const bool branch_taken_0x18e94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e94c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E954u;
label_18e954:
    // 0x18e954: 0x0  nop
    ctx->pc = 0x18e954u;
    // NOP
label_18e958:
    // 0x18e958: 0xc065d00  jal         func_197400
label_18e95c:
    if (ctx->pc == 0x18E95Cu) {
        ctx->pc = 0x18E960u;
        goto label_18e960;
    }
    ctx->pc = 0x18E958u;
    SET_GPR_U32(ctx, 31, 0x18E960u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E960u; }
        if (ctx->pc != 0x18E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E960u; }
        if (ctx->pc != 0x18E960u) { return; }
    }
    ctx->pc = 0x18E960u;
label_18e960:
    // 0x18e960: 0x18400109  blez        $v0, . + 4 + (0x109 << 2)
label_18e964:
    if (ctx->pc == 0x18E964u) {
        ctx->pc = 0x18E968u;
        goto label_18e968;
    }
    ctx->pc = 0x18E960u;
    {
        const bool branch_taken_0x18e960 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18e960) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E968u;
label_18e968:
    // 0x18e968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e96c:
    // 0x18e96c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e970:
    // 0x18e970: 0xc063e30  jal         func_18F8C0
label_18e974:
    if (ctx->pc == 0x18E974u) {
        ctx->pc = 0x18E974u;
            // 0x18e974: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E978u;
        goto label_18e978;
    }
    ctx->pc = 0x18E970u;
    SET_GPR_U32(ctx, 31, 0x18E978u);
    ctx->pc = 0x18E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E970u;
            // 0x18e974: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E978u; }
        if (ctx->pc != 0x18E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E978u; }
        if (ctx->pc != 0x18E978u) { return; }
    }
    ctx->pc = 0x18E978u;
label_18e978:
    // 0x18e978: 0x10000103  b           . + 4 + (0x103 << 2)
label_18e97c:
    if (ctx->pc == 0x18E97Cu) {
        ctx->pc = 0x18E980u;
        goto label_18e980;
    }
    ctx->pc = 0x18E978u;
    {
        const bool branch_taken_0x18e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e978) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E980u;
label_18e980:
    // 0x18e980: 0xc065d00  jal         func_197400
label_18e984:
    if (ctx->pc == 0x18E984u) {
        ctx->pc = 0x18E988u;
        goto label_18e988;
    }
    ctx->pc = 0x18E980u;
    SET_GPR_U32(ctx, 31, 0x18E988u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E988u; }
        if (ctx->pc != 0x18E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E988u; }
        if (ctx->pc != 0x18E988u) { return; }
    }
    ctx->pc = 0x18E988u;
label_18e988:
    // 0x18e988: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18e988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18e98c:
    // 0x18e98c: 0x142000fe  bnez        $at, . + 4 + (0xFE << 2)
label_18e990:
    if (ctx->pc == 0x18E990u) {
        ctx->pc = 0x18E994u;
        goto label_18e994;
    }
    ctx->pc = 0x18E98Cu;
    {
        const bool branch_taken_0x18e98c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e98c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E994u;
label_18e994:
    // 0x18e994: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e998:
    // 0x18e998: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e99c:
    // 0x18e99c: 0xc063e30  jal         func_18F8C0
label_18e9a0:
    if (ctx->pc == 0x18E9A0u) {
        ctx->pc = 0x18E9A0u;
            // 0x18e9a0: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E9A4u;
        goto label_18e9a4;
    }
    ctx->pc = 0x18E99Cu;
    SET_GPR_U32(ctx, 31, 0x18E9A4u);
    ctx->pc = 0x18E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E99Cu;
            // 0x18e9a0: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9A4u; }
        if (ctx->pc != 0x18E9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9A4u; }
        if (ctx->pc != 0x18E9A4u) { return; }
    }
    ctx->pc = 0x18E9A4u;
label_18e9a4:
    // 0x18e9a4: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_18e9a8:
    if (ctx->pc == 0x18E9A8u) {
        ctx->pc = 0x18E9ACu;
        goto label_18e9ac;
    }
    ctx->pc = 0x18E9A4u;
    {
        const bool branch_taken_0x18e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9a4) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E9ACu;
label_18e9ac:
    // 0x18e9ac: 0x0  nop
    ctx->pc = 0x18e9acu;
    // NOP
label_18e9b0:
    // 0x18e9b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e9b4:
    // 0x18e9b4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18e9b8:
    // 0x18e9b8: 0xc063e30  jal         func_18F8C0
label_18e9bc:
    if (ctx->pc == 0x18E9BCu) {
        ctx->pc = 0x18E9BCu;
            // 0x18e9bc: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18E9C0u;
        goto label_18e9c0;
    }
    ctx->pc = 0x18E9B8u;
    SET_GPR_U32(ctx, 31, 0x18E9C0u);
    ctx->pc = 0x18E9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9B8u;
            // 0x18e9bc: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9C0u; }
        if (ctx->pc != 0x18E9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E9C0u; }
        if (ctx->pc != 0x18E9C0u) { return; }
    }
    ctx->pc = 0x18E9C0u;
label_18e9c0:
    // 0x18e9c0: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_18e9c4:
    if (ctx->pc == 0x18E9C4u) {
        ctx->pc = 0x18E9C8u;
        goto label_18e9c8;
    }
    ctx->pc = 0x18E9C0u;
    {
        const bool branch_taken_0x18e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e9c0) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18E9C8u;
label_18e9c8:
    // 0x18e9c8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x18e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_18e9cc:
    // 0x18e9cc: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x18e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18e9d0:
    // 0x18e9d0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x18e9d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_18e9d4:
    // 0x18e9d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18e9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18e9d8:
    // 0x18e9d8: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x18e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
label_18e9dc:
    // 0x18e9dc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x18e9dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_18e9e0:
    // 0x18e9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18e9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e9e4:
    // 0x18e9e4: 0x0  nop
    ctx->pc = 0x18e9e4u;
    // NOP
label_18e9e8:
    // 0x18e9e8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18e9e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18e9ec:
    // 0x18e9ec: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x18e9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_18e9f0:
    // 0x18e9f0: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x18e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e9f4:
    // 0x18e9f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18e9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18e9f8:
    // 0x18e9f8: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_18e9fc:
    if (ctx->pc == 0x18E9FCu) {
        ctx->pc = 0x18E9FCu;
            // 0x18e9fc: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x18EA00u;
        goto label_18ea00;
    }
    ctx->pc = 0x18E9F8u;
    {
        const bool branch_taken_0x18e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E9F8u;
            // 0x18e9fc: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9f8) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EA00u;
label_18ea00:
    // 0x18ea00: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18ea04:
    // 0x18ea04: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x18ea04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_18ea08:
    // 0x18ea08: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
label_18ea0c:
    if (ctx->pc == 0x18EA0Cu) {
        ctx->pc = 0x18EA10u;
        goto label_18ea10;
    }
    ctx->pc = 0x18EA08u;
    {
        const bool branch_taken_0x18ea08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ea08) {
            ctx->pc = 0x18EB48u;
            goto label_18eb48;
        }
    }
    ctx->pc = 0x18EA10u;
label_18ea10:
    // 0x18ea10: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18ea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ea14:
    // 0x18ea14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ea14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea18:
    // 0x18ea18: 0x0  nop
    ctx->pc = 0x18ea18u;
    // NOP
label_18ea1c:
    // 0x18ea1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ea1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ea20:
    // 0x18ea20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18ea24:
    if (ctx->pc == 0x18EA24u) {
        ctx->pc = 0x18EA24u;
            // 0x18ea24: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->pc = 0x18EA28u;
        goto label_18ea28;
    }
    ctx->pc = 0x18EA20u;
    {
        const bool branch_taken_0x18ea20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA20u;
            // 0x18ea24: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea20) {
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18EA28u;
label_18ea28:
    // 0x18ea28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18ea28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18ea2c:
    // 0x18ea2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea30:
    // 0x18ea30: 0x0  nop
    ctx->pc = 0x18ea30u;
    // NOP
label_18ea34:
    // 0x18ea34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ea34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ea38:
    // 0x18ea38: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x18ea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_18ea3c:
    // 0x18ea3c: 0x0  nop
    ctx->pc = 0x18ea3cu;
    // NOP
label_18ea40:
    // 0x18ea40: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x18ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ea44:
    // 0x18ea44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ea44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea48:
    // 0x18ea48: 0x0  nop
    ctx->pc = 0x18ea48u;
    // NOP
label_18ea4c:
    // 0x18ea4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ea4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ea50:
    // 0x18ea50: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18ea54:
    if (ctx->pc == 0x18EA54u) {
        ctx->pc = 0x18EA54u;
            // 0x18ea54: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x18EA58u;
        goto label_18ea58;
    }
    ctx->pc = 0x18EA50u;
    {
        const bool branch_taken_0x18ea50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA50u;
            // 0x18ea54: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea50) {
            ctx->pc = 0x18EA70u;
            goto label_18ea70;
        }
    }
    ctx->pc = 0x18EA58u;
label_18ea58:
    // 0x18ea58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18ea58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18ea5c:
    // 0x18ea5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea60:
    // 0x18ea60: 0x0  nop
    ctx->pc = 0x18ea60u;
    // NOP
label_18ea64:
    // 0x18ea64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ea64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ea68:
    // 0x18ea68: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x18ea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_18ea6c:
    // 0x18ea6c: 0x0  nop
    ctx->pc = 0x18ea6cu;
    // NOP
label_18ea70:
    // 0x18ea70: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x18ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ea74:
    // 0x18ea74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ea74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea78:
    // 0x18ea78: 0x0  nop
    ctx->pc = 0x18ea78u;
    // NOP
label_18ea7c:
    // 0x18ea7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ea7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ea80:
    // 0x18ea80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18ea84:
    if (ctx->pc == 0x18EA84u) {
        ctx->pc = 0x18EA84u;
            // 0x18ea84: 0x3c023b44  lui         $v0, 0x3B44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
        ctx->pc = 0x18EA88u;
        goto label_18ea88;
    }
    ctx->pc = 0x18EA80u;
    {
        const bool branch_taken_0x18ea80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA80u;
            // 0x18ea84: 0x3c023b44  lui         $v0, 0x3B44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea80) {
            ctx->pc = 0x18EAA0u;
            goto label_18eaa0;
        }
    }
    ctx->pc = 0x18EA88u;
label_18ea88:
    // 0x18ea88: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x18ea88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_18ea8c:
    // 0x18ea8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ea8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ea90:
    // 0x18ea90: 0x0  nop
    ctx->pc = 0x18ea90u;
    // NOP
label_18ea94:
    // 0x18ea94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ea94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18ea98:
    // 0x18ea98: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x18ea98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_18ea9c:
    // 0x18ea9c: 0x0  nop
    ctx->pc = 0x18ea9cu;
    // NOP
label_18eaa0:
    // 0x18eaa0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18eaa4:
    // 0x18eaa4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x18eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_18eaa8:
    // 0x18eaa8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_18eaac:
    if (ctx->pc == 0x18EAACu) {
        ctx->pc = 0x18EAACu;
            // 0x18eaac: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x18EAB0u;
        goto label_18eab0;
    }
    ctx->pc = 0x18EAA8u;
    {
        const bool branch_taken_0x18eaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAA8u;
            // 0x18eaac: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eaa8) {
            ctx->pc = 0x18EAB8u;
            goto label_18eab8;
        }
    }
    ctx->pc = 0x18EAB0u;
label_18eab0:
    // 0x18eab0: 0x146200b5  bne         $v1, $v0, . + 4 + (0xB5 << 2)
label_18eab4:
    if (ctx->pc == 0x18EAB4u) {
        ctx->pc = 0x18EAB8u;
        goto label_18eab8;
    }
    ctx->pc = 0x18EAB0u;
    {
        const bool branch_taken_0x18eab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18eab0) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EAB8u;
label_18eab8:
    // 0x18eab8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18eabc:
    // 0x18eabc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18eabcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18eac0:
    // 0x18eac0: 0x0  nop
    ctx->pc = 0x18eac0u;
    // NOP
label_18eac4:
    // 0x18eac4: 0x0  nop
    ctx->pc = 0x18eac4u;
    // NOP
label_18eac8:
    // 0x18eac8: 0x1010  mfhi        $v0
    ctx->pc = 0x18eac8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18eacc:
    // 0x18eacc: 0x144000ae  bnez        $v0, . + 4 + (0xAE << 2)
label_18ead0:
    if (ctx->pc == 0x18EAD0u) {
        ctx->pc = 0x18EAD4u;
        goto label_18ead4;
    }
    ctx->pc = 0x18EACCu;
    {
        const bool branch_taken_0x18eacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18eacc) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EAD4u;
label_18ead4:
    // 0x18ead4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ead8:
    // 0x18ead8: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x18ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_18eadc:
    // 0x18eadc: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x18eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18eae0:
    // 0x18eae0: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18eae4:
    // 0x18eae4: 0xc063e60  jal         func_18F980
label_18eae8:
    if (ctx->pc == 0x18EAE8u) {
        ctx->pc = 0x18EAE8u;
            // 0x18eae8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x18EAECu;
        goto label_18eaec;
    }
    ctx->pc = 0x18EAE4u;
    SET_GPR_U32(ctx, 31, 0x18EAECu);
    ctx->pc = 0x18EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAE4u;
            // 0x18eae8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F980u;
    if (runtime->hasFunction(0x18F980u)) {
        auto targetFn = runtime->lookupFunction(0x18F980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAECu; }
        if (ctx->pc != 0x18EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x18f980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAECu; }
        if (ctx->pc != 0x18EAECu) { return; }
    }
    ctx->pc = 0x18EAECu;
label_18eaec:
    // 0x18eaec: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18eaf0:
    // 0x18eaf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18eaf4:
    // 0x18eaf4: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x18eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_18eaf8:
    // 0x18eaf8: 0xc0655a0  jal         func_195680
label_18eafc:
    if (ctx->pc == 0x18EAFCu) {
        ctx->pc = 0x18EAFCu;
            // 0x18eafc: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18EB00u;
        goto label_18eb00;
    }
    ctx->pc = 0x18EAF8u;
    SET_GPR_U32(ctx, 31, 0x18EB00u);
    ctx->pc = 0x18EAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAF8u;
            // 0x18eafc: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB00u; }
        if (ctx->pc != 0x18EB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB00u; }
        if (ctx->pc != 0x18EB00u) { return; }
    }
    ctx->pc = 0x18EB00u;
label_18eb00:
    // 0x18eb00: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18eb04:
    // 0x18eb04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18eb08:
    // 0x18eb08: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x18eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_18eb0c:
    // 0x18eb0c: 0xc065590  jal         func_195640
label_18eb10:
    if (ctx->pc == 0x18EB10u) {
        ctx->pc = 0x18EB10u;
            // 0x18eb10: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18EB14u;
        goto label_18eb14;
    }
    ctx->pc = 0x18EB0Cu;
    SET_GPR_U32(ctx, 31, 0x18EB14u);
    ctx->pc = 0x18EB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB0Cu;
            // 0x18eb10: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB14u; }
        if (ctx->pc != 0x18EB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB14u; }
        if (ctx->pc != 0x18EB14u) { return; }
    }
    ctx->pc = 0x18EB14u;
label_18eb14:
    // 0x18eb14: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18eb18:
    // 0x18eb18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18eb1c:
    // 0x18eb1c: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x18eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_18eb20:
    // 0x18eb20: 0xc0655a0  jal         func_195680
label_18eb24:
    if (ctx->pc == 0x18EB24u) {
        ctx->pc = 0x18EB24u;
            // 0x18eb24: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18EB28u;
        goto label_18eb28;
    }
    ctx->pc = 0x18EB20u;
    SET_GPR_U32(ctx, 31, 0x18EB28u);
    ctx->pc = 0x18EB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB20u;
            // 0x18eb24: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB28u; }
        if (ctx->pc != 0x18EB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB28u; }
        if (ctx->pc != 0x18EB28u) { return; }
    }
    ctx->pc = 0x18EB28u;
label_18eb28:
    // 0x18eb28: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x18eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18eb2c:
    // 0x18eb2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18eb30:
    // 0x18eb30: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_18eb34:
    // 0x18eb34: 0xc065590  jal         func_195640
label_18eb38:
    if (ctx->pc == 0x18EB38u) {
        ctx->pc = 0x18EB38u;
            // 0x18eb38: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x18EB3Cu;
        goto label_18eb3c;
    }
    ctx->pc = 0x18EB34u;
    SET_GPR_U32(ctx, 31, 0x18EB3Cu);
    ctx->pc = 0x18EB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB34u;
            // 0x18eb38: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB3Cu; }
        if (ctx->pc != 0x18EB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB3Cu; }
        if (ctx->pc != 0x18EB3Cu) { return; }
    }
    ctx->pc = 0x18EB3Cu;
label_18eb3c:
    // 0x18eb3c: 0x10000092  b           . + 4 + (0x92 << 2)
label_18eb40:
    if (ctx->pc == 0x18EB40u) {
        ctx->pc = 0x18EB44u;
        goto label_18eb44;
    }
    ctx->pc = 0x18EB3Cu;
    {
        const bool branch_taken_0x18eb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eb3c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EB44u;
label_18eb44:
    // 0x18eb44: 0x0  nop
    ctx->pc = 0x18eb44u;
    // NOP
label_18eb48:
    // 0x18eb48: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x18eb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
label_18eb4c:
    // 0x18eb4c: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
label_18eb50:
    if (ctx->pc == 0x18EB50u) {
        ctx->pc = 0x18EB50u;
            // 0x18eb50: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x18EB54u;
        goto label_18eb54;
    }
    ctx->pc = 0x18EB4Cu;
    {
        const bool branch_taken_0x18eb4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB4Cu;
            // 0x18eb50: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb4c) {
            ctx->pc = 0x18ED50u;
            goto label_18ed50;
        }
    }
    ctx->pc = 0x18EB54u;
label_18eb54:
    // 0x18eb54: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18eb58:
    // 0x18eb58: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x18eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_18eb5c:
    // 0x18eb5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x18eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18eb60:
    // 0x18eb60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x18eb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18eb64:
    // 0x18eb64: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_18eb68:
    // 0x18eb68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18eb68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_18eb6c:
    // 0x18eb6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18eb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eb70:
    // 0x18eb70: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x18eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_18eb74:
    // 0x18eb74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18eb74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18eb78:
    // 0x18eb78: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x18eb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_18eb7c:
    // 0x18eb7c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18eb80:
    // 0x18eb80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18eb84:
    // 0x18eb84: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_18eb88:
    // 0x18eb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18eb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eb8c:
    // 0x18eb8c: 0x0  nop
    ctx->pc = 0x18eb8cu;
    // NOP
label_18eb90:
    // 0x18eb90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18eb90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18eb94:
    // 0x18eb94: 0xc04b6ee  jal         func_12DBB8
label_18eb98:
    if (ctx->pc == 0x18EB98u) {
        ctx->pc = 0x18EB98u;
            // 0x18eb98: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x18EB9Cu;
        goto label_18eb9c;
    }
    ctx->pc = 0x18EB94u;
    SET_GPR_U32(ctx, 31, 0x18EB9Cu);
    ctx->pc = 0x18EB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EB94u;
            // 0x18eb98: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB9Cu; }
        if (ctx->pc != 0x18EB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB9Cu; }
        if (ctx->pc != 0x18EB9Cu) { return; }
    }
    ctx->pc = 0x18EB9Cu;
label_18eb9c:
    // 0x18eb9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18eba0:
    // 0x18eba0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x18eba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18eba4:
    // 0x18eba4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x18eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18eba8:
    // 0x18eba8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18eba8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18ebac:
    // 0x18ebac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ebacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ebb0:
    // 0x18ebb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18ebb4:
    if (ctx->pc == 0x18EBB4u) {
        ctx->pc = 0x18EBB4u;
            // 0x18ebb4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x18EBB8u;
        goto label_18ebb8;
    }
    ctx->pc = 0x18EBB0u;
    {
        const bool branch_taken_0x18ebb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBB0u;
            // 0x18ebb4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebb0) {
            ctx->pc = 0x18EBC0u;
            goto label_18ebc0;
        }
    }
    ctx->pc = 0x18EBB8u;
label_18ebb8:
    // 0x18ebb8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18ebb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18ebbc:
    // 0x18ebbc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x18ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_18ebc0:
    // 0x18ebc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ebc4:
    // 0x18ebc4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x18ebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ebc8:
    // 0x18ebc8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x18ebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ebcc:
    // 0x18ebcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x18ebccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_18ebd0:
    // 0x18ebd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ebd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ebd4:
    // 0x18ebd4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_18ebd8:
    if (ctx->pc == 0x18EBD8u) {
        ctx->pc = 0x18EBD8u;
            // 0x18ebd8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x18EBDCu;
        goto label_18ebdc;
    }
    ctx->pc = 0x18EBD4u;
    {
        const bool branch_taken_0x18ebd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBD4u;
            // 0x18ebd8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebd4) {
            ctx->pc = 0x18EBE8u;
            goto label_18ebe8;
        }
    }
    ctx->pc = 0x18EBDCu;
label_18ebdc:
    // 0x18ebdc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x18ebdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_18ebe0:
    // 0x18ebe0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x18ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_18ebe4:
    // 0x18ebe4: 0x0  nop
    ctx->pc = 0x18ebe4u;
    // NOP
label_18ebe8:
    // 0x18ebe8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18ebec:
    // 0x18ebec: 0x240200c3  addiu       $v0, $zero, 0xC3
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
label_18ebf0:
    // 0x18ebf0: 0x10620051  beq         $v1, $v0, . + 4 + (0x51 << 2)
label_18ebf4:
    if (ctx->pc == 0x18EBF4u) {
        ctx->pc = 0x18EBF4u;
            // 0x18ebf4: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x18EBF8u;
        goto label_18ebf8;
    }
    ctx->pc = 0x18EBF0u;
    {
        const bool branch_taken_0x18ebf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EBF0u;
            // 0x18ebf4: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebf0) {
            ctx->pc = 0x18ED38u;
            goto label_18ed38;
        }
    }
    ctx->pc = 0x18EBF8u;
label_18ebf8:
    // 0x18ebf8: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_18ebfc:
    if (ctx->pc == 0x18EBFCu) {
        ctx->pc = 0x18EC00u;
        goto label_18ec00;
    }
    ctx->pc = 0x18EBF8u;
    {
        const bool branch_taken_0x18ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ebf8) {
            ctx->pc = 0x18ED08u;
            goto label_18ed08;
        }
    }
    ctx->pc = 0x18EC00u;
label_18ec00:
    // 0x18ec00: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x18ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_18ec04:
    // 0x18ec04: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_18ec08:
    if (ctx->pc == 0x18EC08u) {
        ctx->pc = 0x18EC08u;
            // 0x18ec08: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->pc = 0x18EC0Cu;
        goto label_18ec0c;
    }
    ctx->pc = 0x18EC04u;
    {
        const bool branch_taken_0x18ec04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC04u;
            // 0x18ec08: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec04) {
            ctx->pc = 0x18ECE0u;
            goto label_18ece0;
        }
    }
    ctx->pc = 0x18EC0Cu;
label_18ec0c:
    // 0x18ec0c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_18ec10:
    if (ctx->pc == 0x18EC10u) {
        ctx->pc = 0x18EC14u;
        goto label_18ec14;
    }
    ctx->pc = 0x18EC0Cu;
    {
        const bool branch_taken_0x18ec0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ec0c) {
            ctx->pc = 0x18ECB0u;
            goto label_18ecb0;
        }
    }
    ctx->pc = 0x18EC14u;
label_18ec14:
    // 0x18ec14: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x18ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_18ec18:
    // 0x18ec18: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_18ec1c:
    if (ctx->pc == 0x18EC1Cu) {
        ctx->pc = 0x18EC1Cu;
            // 0x18ec1c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x18EC20u;
        goto label_18ec20;
    }
    ctx->pc = 0x18EC18u;
    {
        const bool branch_taken_0x18ec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC18u;
            // 0x18ec1c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec18) {
            ctx->pc = 0x18EC88u;
            goto label_18ec88;
        }
    }
    ctx->pc = 0x18EC20u;
label_18ec20:
    // 0x18ec20: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_18ec24:
    if (ctx->pc == 0x18EC24u) {
        ctx->pc = 0x18EC28u;
        goto label_18ec28;
    }
    ctx->pc = 0x18EC20u;
    {
        const bool branch_taken_0x18ec20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ec20) {
            ctx->pc = 0x18EC58u;
            goto label_18ec58;
        }
    }
    ctx->pc = 0x18EC28u;
label_18ec28:
    // 0x18ec28: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x18ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_18ec2c:
    // 0x18ec2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18ec30:
    if (ctx->pc == 0x18EC30u) {
        ctx->pc = 0x18EC34u;
        goto label_18ec34;
    }
    ctx->pc = 0x18EC2Cu;
    {
        const bool branch_taken_0x18ec2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ec2c) {
            ctx->pc = 0x18EC40u;
            goto label_18ec40;
        }
    }
    ctx->pc = 0x18EC34u;
label_18ec34:
    // 0x18ec34: 0x10000054  b           . + 4 + (0x54 << 2)
label_18ec38:
    if (ctx->pc == 0x18EC38u) {
        ctx->pc = 0x18EC3Cu;
        goto label_18ec3c;
    }
    ctx->pc = 0x18EC34u;
    {
        const bool branch_taken_0x18ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec34) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EC3Cu;
label_18ec3c:
    // 0x18ec3c: 0x0  nop
    ctx->pc = 0x18ec3cu;
    // NOP
label_18ec40:
    // 0x18ec40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ec44:
    // 0x18ec44: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18ec48:
    // 0x18ec48: 0xc063e30  jal         func_18F8C0
label_18ec4c:
    if (ctx->pc == 0x18EC4Cu) {
        ctx->pc = 0x18EC4Cu;
            // 0x18ec4c: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18EC50u;
        goto label_18ec50;
    }
    ctx->pc = 0x18EC48u;
    SET_GPR_U32(ctx, 31, 0x18EC50u);
    ctx->pc = 0x18EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC48u;
            // 0x18ec4c: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC50u; }
        if (ctx->pc != 0x18EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC50u; }
        if (ctx->pc != 0x18EC50u) { return; }
    }
    ctx->pc = 0x18EC50u;
label_18ec50:
    // 0x18ec50: 0x1000004d  b           . + 4 + (0x4D << 2)
label_18ec54:
    if (ctx->pc == 0x18EC54u) {
        ctx->pc = 0x18EC58u;
        goto label_18ec58;
    }
    ctx->pc = 0x18EC50u;
    {
        const bool branch_taken_0x18ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec50) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EC58u;
label_18ec58:
    // 0x18ec58: 0xc065d00  jal         func_197400
label_18ec5c:
    if (ctx->pc == 0x18EC5Cu) {
        ctx->pc = 0x18EC60u;
        goto label_18ec60;
    }
    ctx->pc = 0x18EC58u;
    SET_GPR_U32(ctx, 31, 0x18EC60u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC60u; }
        if (ctx->pc != 0x18EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC60u; }
        if (ctx->pc != 0x18EC60u) { return; }
    }
    ctx->pc = 0x18EC60u;
label_18ec60:
    // 0x18ec60: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18ec60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18ec64:
    // 0x18ec64: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
label_18ec68:
    if (ctx->pc == 0x18EC68u) {
        ctx->pc = 0x18EC6Cu;
        goto label_18ec6c;
    }
    ctx->pc = 0x18EC64u;
    {
        const bool branch_taken_0x18ec64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ec64) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EC6Cu;
label_18ec6c:
    // 0x18ec6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ec70:
    // 0x18ec70: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18ec74:
    // 0x18ec74: 0xc063e30  jal         func_18F8C0
label_18ec78:
    if (ctx->pc == 0x18EC78u) {
        ctx->pc = 0x18EC78u;
            // 0x18ec78: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18EC7Cu;
        goto label_18ec7c;
    }
    ctx->pc = 0x18EC74u;
    SET_GPR_U32(ctx, 31, 0x18EC7Cu);
    ctx->pc = 0x18EC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EC74u;
            // 0x18ec78: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC7Cu; }
        if (ctx->pc != 0x18EC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC7Cu; }
        if (ctx->pc != 0x18EC7Cu) { return; }
    }
    ctx->pc = 0x18EC7Cu;
label_18ec7c:
    // 0x18ec7c: 0x10000042  b           . + 4 + (0x42 << 2)
label_18ec80:
    if (ctx->pc == 0x18EC80u) {
        ctx->pc = 0x18EC84u;
        goto label_18ec84;
    }
    ctx->pc = 0x18EC7Cu;
    {
        const bool branch_taken_0x18ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ec7c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EC84u;
label_18ec84:
    // 0x18ec84: 0x0  nop
    ctx->pc = 0x18ec84u;
    // NOP
label_18ec88:
    // 0x18ec88: 0xc065d00  jal         func_197400
label_18ec8c:
    if (ctx->pc == 0x18EC8Cu) {
        ctx->pc = 0x18EC90u;
        goto label_18ec90;
    }
    ctx->pc = 0x18EC88u;
    SET_GPR_U32(ctx, 31, 0x18EC90u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC90u; }
        if (ctx->pc != 0x18EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EC90u; }
        if (ctx->pc != 0x18EC90u) { return; }
    }
    ctx->pc = 0x18EC90u;
label_18ec90:
    // 0x18ec90: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_18ec94:
    if (ctx->pc == 0x18EC94u) {
        ctx->pc = 0x18EC98u;
        goto label_18ec98;
    }
    ctx->pc = 0x18EC90u;
    {
        const bool branch_taken_0x18ec90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18ec90) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18EC98u;
label_18ec98:
    // 0x18ec98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ec9c:
    // 0x18ec9c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18eca0:
    // 0x18eca0: 0xc063e30  jal         func_18F8C0
label_18eca4:
    if (ctx->pc == 0x18ECA4u) {
        ctx->pc = 0x18ECA4u;
            // 0x18eca4: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18ECA8u;
        goto label_18eca8;
    }
    ctx->pc = 0x18ECA0u;
    SET_GPR_U32(ctx, 31, 0x18ECA8u);
    ctx->pc = 0x18ECA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECA0u;
            // 0x18eca4: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECA8u; }
        if (ctx->pc != 0x18ECA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECA8u; }
        if (ctx->pc != 0x18ECA8u) { return; }
    }
    ctx->pc = 0x18ECA8u;
label_18eca8:
    // 0x18eca8: 0x10000037  b           . + 4 + (0x37 << 2)
label_18ecac:
    if (ctx->pc == 0x18ECACu) {
        ctx->pc = 0x18ECB0u;
        goto label_18ecb0;
    }
    ctx->pc = 0x18ECA8u;
    {
        const bool branch_taken_0x18eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eca8) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ECB0u;
label_18ecb0:
    // 0x18ecb0: 0xc065d00  jal         func_197400
label_18ecb4:
    if (ctx->pc == 0x18ECB4u) {
        ctx->pc = 0x18ECB8u;
        goto label_18ecb8;
    }
    ctx->pc = 0x18ECB0u;
    SET_GPR_U32(ctx, 31, 0x18ECB8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECB8u; }
        if (ctx->pc != 0x18ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECB8u; }
        if (ctx->pc != 0x18ECB8u) { return; }
    }
    ctx->pc = 0x18ECB8u;
label_18ecb8:
    // 0x18ecb8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18ecb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18ecbc:
    // 0x18ecbc: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
label_18ecc0:
    if (ctx->pc == 0x18ECC0u) {
        ctx->pc = 0x18ECC4u;
        goto label_18ecc4;
    }
    ctx->pc = 0x18ECBCu;
    {
        const bool branch_taken_0x18ecbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ecbc) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ECC4u;
label_18ecc4:
    // 0x18ecc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ecc8:
    // 0x18ecc8: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18eccc:
    // 0x18eccc: 0xc063e30  jal         func_18F8C0
label_18ecd0:
    if (ctx->pc == 0x18ECD0u) {
        ctx->pc = 0x18ECD0u;
            // 0x18ecd0: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18ECD4u;
        goto label_18ecd4;
    }
    ctx->pc = 0x18ECCCu;
    SET_GPR_U32(ctx, 31, 0x18ECD4u);
    ctx->pc = 0x18ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECCCu;
            // 0x18ecd0: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECD4u; }
        if (ctx->pc != 0x18ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECD4u; }
        if (ctx->pc != 0x18ECD4u) { return; }
    }
    ctx->pc = 0x18ECD4u;
label_18ecd4:
    // 0x18ecd4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_18ecd8:
    if (ctx->pc == 0x18ECD8u) {
        ctx->pc = 0x18ECDCu;
        goto label_18ecdc;
    }
    ctx->pc = 0x18ECD4u;
    {
        const bool branch_taken_0x18ecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecd4) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ECDCu;
label_18ecdc:
    // 0x18ecdc: 0x0  nop
    ctx->pc = 0x18ecdcu;
    // NOP
label_18ece0:
    // 0x18ece0: 0xc065d00  jal         func_197400
label_18ece4:
    if (ctx->pc == 0x18ECE4u) {
        ctx->pc = 0x18ECE8u;
        goto label_18ece8;
    }
    ctx->pc = 0x18ECE0u;
    SET_GPR_U32(ctx, 31, 0x18ECE8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECE8u; }
        if (ctx->pc != 0x18ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ECE8u; }
        if (ctx->pc != 0x18ECE8u) { return; }
    }
    ctx->pc = 0x18ECE8u;
label_18ece8:
    // 0x18ece8: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
label_18ecec:
    if (ctx->pc == 0x18ECECu) {
        ctx->pc = 0x18ECF0u;
        goto label_18ecf0;
    }
    ctx->pc = 0x18ECE8u;
    {
        const bool branch_taken_0x18ece8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18ece8) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ECF0u;
label_18ecf0:
    // 0x18ecf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ecf4:
    // 0x18ecf4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18ecf8:
    // 0x18ecf8: 0xc063e30  jal         func_18F8C0
label_18ecfc:
    if (ctx->pc == 0x18ECFCu) {
        ctx->pc = 0x18ECFCu;
            // 0x18ecfc: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18ED00u;
        goto label_18ed00;
    }
    ctx->pc = 0x18ECF8u;
    SET_GPR_U32(ctx, 31, 0x18ED00u);
    ctx->pc = 0x18ECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ECF8u;
            // 0x18ecfc: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED00u; }
        if (ctx->pc != 0x18ED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED00u; }
        if (ctx->pc != 0x18ED00u) { return; }
    }
    ctx->pc = 0x18ED00u;
label_18ed00:
    // 0x18ed00: 0x10000021  b           . + 4 + (0x21 << 2)
label_18ed04:
    if (ctx->pc == 0x18ED04u) {
        ctx->pc = 0x18ED08u;
        goto label_18ed08;
    }
    ctx->pc = 0x18ED00u;
    {
        const bool branch_taken_0x18ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed00) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED08u;
label_18ed08:
    // 0x18ed08: 0xc065d00  jal         func_197400
label_18ed0c:
    if (ctx->pc == 0x18ED0Cu) {
        ctx->pc = 0x18ED10u;
        goto label_18ed10;
    }
    ctx->pc = 0x18ED08u;
    SET_GPR_U32(ctx, 31, 0x18ED10u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED10u; }
        if (ctx->pc != 0x18ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED10u; }
        if (ctx->pc != 0x18ED10u) { return; }
    }
    ctx->pc = 0x18ED10u;
label_18ed10:
    // 0x18ed10: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18ed10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18ed14:
    // 0x18ed14: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_18ed18:
    if (ctx->pc == 0x18ED18u) {
        ctx->pc = 0x18ED1Cu;
        goto label_18ed1c;
    }
    ctx->pc = 0x18ED14u;
    {
        const bool branch_taken_0x18ed14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed14) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED1Cu;
label_18ed1c:
    // 0x18ed1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ed20:
    // 0x18ed20: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18ed24:
    // 0x18ed24: 0xc063e30  jal         func_18F8C0
label_18ed28:
    if (ctx->pc == 0x18ED28u) {
        ctx->pc = 0x18ED28u;
            // 0x18ed28: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18ED2Cu;
        goto label_18ed2c;
    }
    ctx->pc = 0x18ED24u;
    SET_GPR_U32(ctx, 31, 0x18ED2Cu);
    ctx->pc = 0x18ED28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED24u;
            // 0x18ed28: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED2Cu; }
        if (ctx->pc != 0x18ED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED2Cu; }
        if (ctx->pc != 0x18ED2Cu) { return; }
    }
    ctx->pc = 0x18ED2Cu;
label_18ed2c:
    // 0x18ed2c: 0x10000016  b           . + 4 + (0x16 << 2)
label_18ed30:
    if (ctx->pc == 0x18ED30u) {
        ctx->pc = 0x18ED34u;
        goto label_18ed34;
    }
    ctx->pc = 0x18ED2Cu;
    {
        const bool branch_taken_0x18ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed2c) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED34u;
label_18ed34:
    // 0x18ed34: 0x0  nop
    ctx->pc = 0x18ed34u;
    // NOP
label_18ed38:
    // 0x18ed38: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ed3c:
    // 0x18ed3c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18ed40:
    // 0x18ed40: 0xc063e30  jal         func_18F8C0
label_18ed44:
    if (ctx->pc == 0x18ED44u) {
        ctx->pc = 0x18ED44u;
            // 0x18ed44: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x18ED48u;
        goto label_18ed48;
    }
    ctx->pc = 0x18ED40u;
    SET_GPR_U32(ctx, 31, 0x18ED48u);
    ctx->pc = 0x18ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ED40u;
            // 0x18ed44: 0xc44c0120  lwc1        $f12, 0x120($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F8C0u;
    if (runtime->hasFunction(0x18F8C0u)) {
        auto targetFn = runtime->lookupFunction(0x18F8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED48u; }
        if (ctx->pc != 0x18ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn2_Shot_0x18f8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ED48u; }
        if (ctx->pc != 0x18ED48u) { return; }
    }
    ctx->pc = 0x18ED48u;
label_18ed48:
    // 0x18ed48: 0x1000000f  b           . + 4 + (0xF << 2)
label_18ed4c:
    if (ctx->pc == 0x18ED4Cu) {
        ctx->pc = 0x18ED50u;
        goto label_18ed50;
    }
    ctx->pc = 0x18ED48u;
    {
        const bool branch_taken_0x18ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed48) {
            ctx->pc = 0x18ED88u;
            goto label_18ed88;
        }
    }
    ctx->pc = 0x18ED50u;
label_18ed50:
    // 0x18ed50: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x18ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_18ed54:
    // 0x18ed54: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x18ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18ed58:
    // 0x18ed58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x18ed58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_18ed5c:
    // 0x18ed5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18ed5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ed60:
    // 0x18ed60: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x18ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
label_18ed64:
    // 0x18ed64: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x18ed64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_18ed68:
    // 0x18ed68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ed68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ed6c:
    // 0x18ed6c: 0x0  nop
    ctx->pc = 0x18ed6cu;
    // NOP
label_18ed70:
    // 0x18ed70: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x18ed70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_18ed74:
    // 0x18ed74: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x18ed74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_18ed78:
    // 0x18ed78: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x18ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ed7c:
    // 0x18ed7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ed7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ed80:
    // 0x18ed80: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x18ed80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_18ed84:
    // 0x18ed84: 0x0  nop
    ctx->pc = 0x18ed84u;
    // NOP
label_18ed88:
    // 0x18ed88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ed8c:
    // 0x18ed8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18ed90:
    // 0x18ed90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ed90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ed94:
    // 0x18ed94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ed94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ed98:
    // 0x18ed98: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x18ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ed9c:
    // 0x18ed9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ed9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18eda0:
    // 0x18eda0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18eda4:
    if (ctx->pc == 0x18EDA4u) {
        ctx->pc = 0x18EDA4u;
            // 0x18eda4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x18EDA8u;
        goto label_18eda8;
    }
    ctx->pc = 0x18EDA0u;
    {
        const bool branch_taken_0x18eda0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDA0u;
            // 0x18eda4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eda0) {
            ctx->pc = 0x18EDC0u;
            goto label_18edc0;
        }
    }
    ctx->pc = 0x18EDA8u;
label_18eda8:
    // 0x18eda8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18edac:
    // 0x18edac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18edacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18edb0:
    // 0x18edb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18edb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18edb4:
    // 0x18edb4: 0x0  nop
    ctx->pc = 0x18edb4u;
    // NOP
label_18edb8:
    // 0x18edb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18edb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18edbc:
    // 0x18edbc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18edbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18edc0:
    // 0x18edc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18edc4:
    // 0x18edc4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18edc8:
    // 0x18edc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18edc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18edcc:
    // 0x18edcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18edccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18edd0:
    // 0x18edd0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x18edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18edd4:
    // 0x18edd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18edd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18edd8:
    // 0x18edd8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18eddc:
    if (ctx->pc == 0x18EDDCu) {
        ctx->pc = 0x18EDDCu;
            // 0x18eddc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x18EDE0u;
        goto label_18ede0;
    }
    ctx->pc = 0x18EDD8u;
    {
        const bool branch_taken_0x18edd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EDD8u;
            // 0x18eddc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edd8) {
            ctx->pc = 0x18EDF8u;
            goto label_18edf8;
        }
    }
    ctx->pc = 0x18EDE0u;
label_18ede0:
    // 0x18ede0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ede4:
    // 0x18ede4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ede4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ede8:
    // 0x18ede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18edec:
    // 0x18edec: 0x0  nop
    ctx->pc = 0x18edecu;
    // NOP
label_18edf0:
    // 0x18edf0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18edf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18edf4:
    // 0x18edf4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18edf8:
    // 0x18edf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18edfc:
    // 0x18edfc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18ee00:
    // 0x18ee00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ee00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ee04:
    // 0x18ee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ee08:
    // 0x18ee08: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x18ee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ee0c:
    // 0x18ee0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ee0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ee10:
    // 0x18ee10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18ee14:
    if (ctx->pc == 0x18EE14u) {
        ctx->pc = 0x18EE14u;
            // 0x18ee14: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x18EE18u;
        goto label_18ee18;
    }
    ctx->pc = 0x18EE10u;
    {
        const bool branch_taken_0x18ee10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE10u;
            // 0x18ee14: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee10) {
            ctx->pc = 0x18EE30u;
            goto label_18ee30;
        }
    }
    ctx->pc = 0x18EE18u;
label_18ee18:
    // 0x18ee18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ee1c:
    // 0x18ee1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ee1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ee20:
    // 0x18ee20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ee24:
    // 0x18ee24: 0x0  nop
    ctx->pc = 0x18ee24u;
    // NOP
label_18ee28:
    // 0x18ee28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ee28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ee2c:
    // 0x18ee2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18ee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18ee30:
    // 0x18ee30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ee34:
    // 0x18ee34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18ee38:
    // 0x18ee38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ee38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ee3c:
    // 0x18ee3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ee40:
    // 0x18ee40: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x18ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ee44:
    // 0x18ee44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ee44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ee48:
    // 0x18ee48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18ee4c:
    if (ctx->pc == 0x18EE4Cu) {
        ctx->pc = 0x18EE4Cu;
            // 0x18ee4c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x18EE50u;
        goto label_18ee50;
    }
    ctx->pc = 0x18EE48u;
    {
        const bool branch_taken_0x18ee48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE48u;
            // 0x18ee4c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee48) {
            ctx->pc = 0x18EE68u;
            goto label_18ee68;
        }
    }
    ctx->pc = 0x18EE50u;
label_18ee50:
    // 0x18ee50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ee54:
    // 0x18ee54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ee54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ee58:
    // 0x18ee58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ee5c:
    // 0x18ee5c: 0x0  nop
    ctx->pc = 0x18ee5cu;
    // NOP
label_18ee60:
    // 0x18ee60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18ee60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18ee64:
    // 0x18ee64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18ee68:
    // 0x18ee68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ee6c:
    // 0x18ee6c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18ee70:
    // 0x18ee70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ee70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ee74:
    // 0x18ee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ee78:
    // 0x18ee78: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x18ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ee7c:
    // 0x18ee7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ee7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ee80:
    // 0x18ee80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18ee84:
    if (ctx->pc == 0x18EE84u) {
        ctx->pc = 0x18EE84u;
            // 0x18ee84: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x18EE88u;
        goto label_18ee88;
    }
    ctx->pc = 0x18EE80u;
    {
        const bool branch_taken_0x18ee80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EE80u;
            // 0x18ee84: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee80) {
            ctx->pc = 0x18EEA0u;
            goto label_18eea0;
        }
    }
    ctx->pc = 0x18EE88u;
label_18ee88:
    // 0x18ee88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18ee8c:
    // 0x18ee8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18ee8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18ee90:
    // 0x18ee90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ee90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ee94:
    // 0x18ee94: 0x0  nop
    ctx->pc = 0x18ee94u;
    // NOP
label_18ee98:
    // 0x18ee98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18ee98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18ee9c:
    // 0x18ee9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18ee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18eea0:
    // 0x18eea0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18eea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18eea4:
    // 0x18eea4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18eea8:
    // 0x18eea8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18eea8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18eeac:
    // 0x18eeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18eeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eeb0:
    // 0x18eeb0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x18eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18eeb4:
    // 0x18eeb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18eeb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18eeb8:
    // 0x18eeb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_18eebc:
    if (ctx->pc == 0x18EEBCu) {
        ctx->pc = 0x18EEBCu;
            // 0x18eebc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x18EEC0u;
        goto label_18eec0;
    }
    ctx->pc = 0x18EEB8u;
    {
        const bool branch_taken_0x18eeb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEB8u;
            // 0x18eebc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eeb8) {
            ctx->pc = 0x18EED8u;
            goto label_18eed8;
        }
    }
    ctx->pc = 0x18EEC0u;
label_18eec0:
    // 0x18eec0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18eec4:
    // 0x18eec4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18eec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_18eec8:
    // 0x18eec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18eec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18eecc:
    // 0x18eecc: 0x0  nop
    ctx->pc = 0x18eeccu;
    // NOP
label_18eed0:
    // 0x18eed0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18eed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18eed4:
    // 0x18eed4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x18eed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_18eed8:
    // 0x18eed8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18eedc:
    // 0x18eedc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x18eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_18eee0:
    // 0x18eee0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x18eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18eee4:
    // 0x18eee4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x18eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18eee8:
    // 0x18eee8: 0xc063e60  jal         func_18F980
label_18eeec:
    if (ctx->pc == 0x18EEECu) {
        ctx->pc = 0x18EEECu;
            // 0x18eeec: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x18EEF0u;
        goto label_18eef0;
    }
    ctx->pc = 0x18EEE8u;
    SET_GPR_U32(ctx, 31, 0x18EEF0u);
    ctx->pc = 0x18EEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEE8u;
            // 0x18eeec: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F980u;
    if (runtime->hasFunction(0x18F980u)) {
        auto targetFn = runtime->lookupFunction(0x18F980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EEF0u; }
        if (ctx->pc != 0x18EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x18f980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EEF0u; }
        if (ctx->pc != 0x18EEF0u) { return; }
    }
    ctx->pc = 0x18EEF0u;
label_18eef0:
    // 0x18eef0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18eef4:
    // 0x18eef4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x18eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_18eef8:
    // 0x18eef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18eefc:
    // 0x18eefc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x18eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_18ef00:
    // 0x18ef00: 0xc04b788  jal         func_12DE20
label_18ef04:
    if (ctx->pc == 0x18EF04u) {
        ctx->pc = 0x18EF04u;
            // 0x18ef04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x18EF08u;
        goto label_18ef08;
    }
    ctx->pc = 0x18EF00u;
    SET_GPR_U32(ctx, 31, 0x18EF08u);
    ctx->pc = 0x18EF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF00u;
            // 0x18ef04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF08u; }
        if (ctx->pc != 0x18EF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF08u; }
        if (ctx->pc != 0x18EF08u) { return; }
    }
    ctx->pc = 0x18EF08u;
label_18ef08:
    // 0x18ef08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ef0c:
    // 0x18ef0c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x18ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18ef10:
    // 0x18ef10: 0xc04b7da  jal         func_12DF68
label_18ef14:
    if (ctx->pc == 0x18EF14u) {
        ctx->pc = 0x18EF14u;
            // 0x18ef14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18EF18u;
        goto label_18ef18;
    }
    ctx->pc = 0x18EF10u;
    SET_GPR_U32(ctx, 31, 0x18EF18u);
    ctx->pc = 0x18EF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF10u;
            // 0x18ef14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF18u; }
        if (ctx->pc != 0x18EF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF18u; }
        if (ctx->pc != 0x18EF18u) { return; }
    }
    ctx->pc = 0x18EF18u;
label_18ef18:
    // 0x18ef18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ef1c:
    // 0x18ef1c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x18ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18ef20:
    // 0x18ef20: 0xc04b804  jal         func_12E010
label_18ef24:
    if (ctx->pc == 0x18EF24u) {
        ctx->pc = 0x18EF24u;
            // 0x18ef24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18EF28u;
        goto label_18ef28;
    }
    ctx->pc = 0x18EF20u;
    SET_GPR_U32(ctx, 31, 0x18EF28u);
    ctx->pc = 0x18EF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF20u;
            // 0x18ef24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF28u; }
        if (ctx->pc != 0x18EF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF28u; }
        if (ctx->pc != 0x18EF28u) { return; }
    }
    ctx->pc = 0x18EF28u;
label_18ef28:
    // 0x18ef28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ef2c:
    // 0x18ef2c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x18ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18ef30:
    // 0x18ef30: 0xc04b7b0  jal         func_12DEC0
label_18ef34:
    if (ctx->pc == 0x18EF34u) {
        ctx->pc = 0x18EF34u;
            // 0x18ef34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18EF38u;
        goto label_18ef38;
    }
    ctx->pc = 0x18EF30u;
    SET_GPR_U32(ctx, 31, 0x18EF38u);
    ctx->pc = 0x18EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF30u;
            // 0x18ef34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF38u; }
        if (ctx->pc != 0x18EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF38u; }
        if (ctx->pc != 0x18EF38u) { return; }
    }
    ctx->pc = 0x18EF38u;
label_18ef38:
    // 0x18ef38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18ef3c:
    // 0x18ef3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18ef3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ef40:
    // 0x18ef40: 0xc04b75e  jal         func_12DD78
label_18ef44:
    if (ctx->pc == 0x18EF44u) {
        ctx->pc = 0x18EF44u;
            // 0x18ef44: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x18EF48u;
        goto label_18ef48;
    }
    ctx->pc = 0x18EF40u;
    SET_GPR_U32(ctx, 31, 0x18EF48u);
    ctx->pc = 0x18EF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF40u;
            // 0x18ef44: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF48u; }
        if (ctx->pc != 0x18EF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF48u; }
        if (ctx->pc != 0x18EF48u) { return; }
    }
    ctx->pc = 0x18EF48u;
label_18ef48:
    // 0x18ef48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_18ef4c:
    // 0x18ef4c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18ef50:
    // 0x18ef50: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18ef50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18ef54:
    // 0x18ef54: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_18ef58:
    if (ctx->pc == 0x18EF58u) {
        ctx->pc = 0x18EF5Cu;
        goto label_18ef5c;
    }
    ctx->pc = 0x18EF54u;
    {
        const bool branch_taken_0x18ef54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef54) {
            ctx->pc = 0x18EFA8u;
            goto label_18efa8;
        }
    }
    ctx->pc = 0x18EF5Cu;
label_18ef5c:
    // 0x18ef5c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x18ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_18ef60:
    // 0x18ef60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18ef64:
    if (ctx->pc == 0x18EF64u) {
        ctx->pc = 0x18EF68u;
        goto label_18ef68;
    }
    ctx->pc = 0x18EF60u;
    {
        const bool branch_taken_0x18ef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef60) {
            ctx->pc = 0x18EF78u;
            goto label_18ef78;
        }
    }
    ctx->pc = 0x18EF68u;
label_18ef68:
    // 0x18ef68: 0xc0604f0  jal         func_1813C0
label_18ef6c:
    if (ctx->pc == 0x18EF6Cu) {
        ctx->pc = 0x18EF6Cu;
            // 0x18ef6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x18EF70u;
        goto label_18ef70;
    }
    ctx->pc = 0x18EF68u;
    SET_GPR_U32(ctx, 31, 0x18EF70u);
    ctx->pc = 0x18EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF68u;
            // 0x18ef6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF70u; }
        if (ctx->pc != 0x18EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF70u; }
        if (ctx->pc != 0x18EF70u) { return; }
    }
    ctx->pc = 0x18EF70u;
label_18ef70:
    // 0x18ef70: 0x10000003  b           . + 4 + (0x3 << 2)
label_18ef74:
    if (ctx->pc == 0x18EF74u) {
        ctx->pc = 0x18EF78u;
        goto label_18ef78;
    }
    ctx->pc = 0x18EF70u;
    {
        const bool branch_taken_0x18ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef70) {
            ctx->pc = 0x18EF80u;
            goto label_18ef80;
        }
    }
    ctx->pc = 0x18EF78u;
label_18ef78:
    // 0x18ef78: 0xc0604dc  jal         func_181370
label_18ef7c:
    if (ctx->pc == 0x18EF7Cu) {
        ctx->pc = 0x18EF7Cu;
            // 0x18ef7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x18EF80u;
        goto label_18ef80;
    }
    ctx->pc = 0x18EF78u;
    SET_GPR_U32(ctx, 31, 0x18EF80u);
    ctx->pc = 0x18EF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF78u;
            // 0x18ef7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF80u; }
        if (ctx->pc != 0x18EF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EF80u; }
        if (ctx->pc != 0x18EF80u) { return; }
    }
    ctx->pc = 0x18EF80u;
label_18ef80:
    // 0x18ef80: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x18ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_18ef84:
    // 0x18ef84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_18ef88:
    if (ctx->pc == 0x18EF88u) {
        ctx->pc = 0x18EF8Cu;
        goto label_18ef8c;
    }
    ctx->pc = 0x18EF84u;
    {
        const bool branch_taken_0x18ef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef84) {
            ctx->pc = 0x18EF98u;
            goto label_18ef98;
        }
    }
    ctx->pc = 0x18EF8Cu;
label_18ef8c:
    // 0x18ef8c: 0x10000022  b           . + 4 + (0x22 << 2)
label_18ef90:
    if (ctx->pc == 0x18EF90u) {
        ctx->pc = 0x18EF90u;
            // 0x18ef90: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x18EF94u;
        goto label_18ef94;
    }
    ctx->pc = 0x18EF8Cu;
    {
        const bool branch_taken_0x18ef8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF8Cu;
            // 0x18ef90: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef8c) {
            ctx->pc = 0x18F018u;
            goto label_18f018;
        }
    }
    ctx->pc = 0x18EF94u;
label_18ef94:
    // 0x18ef94: 0x0  nop
    ctx->pc = 0x18ef94u;
    // NOP
label_18ef98:
    // 0x18ef98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ef9c:
    // 0x18ef9c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_18efa0:
    if (ctx->pc == 0x18EFA0u) {
        ctx->pc = 0x18EFA0u;
            // 0x18efa0: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x18EFA4u;
        goto label_18efa4;
    }
    ctx->pc = 0x18EF9Cu;
    {
        const bool branch_taken_0x18ef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EF9Cu;
            // 0x18efa0: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef9c) {
            ctx->pc = 0x18F018u;
            goto label_18f018;
        }
    }
    ctx->pc = 0x18EFA4u;
label_18efa4:
    // 0x18efa4: 0x0  nop
    ctx->pc = 0x18efa4u;
    // NOP
label_18efa8:
    // 0x18efa8: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x18efa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_18efac:
    // 0x18efac: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_18efb0:
    if (ctx->pc == 0x18EFB0u) {
        ctx->pc = 0x18EFB4u;
        goto label_18efb4;
    }
    ctx->pc = 0x18EFACu;
    {
        const bool branch_taken_0x18efac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18efac) {
            ctx->pc = 0x18F008u;
            goto label_18f008;
        }
    }
    ctx->pc = 0x18EFB4u;
label_18efb4:
    // 0x18efb4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x18efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18efb8:
    // 0x18efb8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18efbc:
    // 0x18efbc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18efbcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18efc0:
    // 0x18efc0: 0x0  nop
    ctx->pc = 0x18efc0u;
    // NOP
label_18efc4:
    // 0x18efc4: 0x0  nop
    ctx->pc = 0x18efc4u;
    // NOP
label_18efc8:
    // 0x18efc8: 0x1010  mfhi        $v0
    ctx->pc = 0x18efc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18efcc:
    // 0x18efcc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_18efd0:
    if (ctx->pc == 0x18EFD0u) {
        ctx->pc = 0x18EFD4u;
        goto label_18efd4;
    }
    ctx->pc = 0x18EFCCu;
    {
        const bool branch_taken_0x18efcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18efcc) {
            ctx->pc = 0x18F008u;
            goto label_18f008;
        }
    }
    ctx->pc = 0x18EFD4u;
label_18efd4:
    // 0x18efd4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18efd8:
    // 0x18efd8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_18efdc:
    // 0x18efdc: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_18efe0:
    // 0x18efe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18efe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18efe4:
    // 0x18efe4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18efe8:
    // 0x18efe8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18efe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18efec:
    // 0x18efec: 0xc0536d8  jal         func_14DB60
label_18eff0:
    if (ctx->pc == 0x18EFF0u) {
        ctx->pc = 0x18EFF0u;
            // 0x18eff0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x18EFF4u;
        goto label_18eff4;
    }
    ctx->pc = 0x18EFECu;
    SET_GPR_U32(ctx, 31, 0x18EFF4u);
    ctx->pc = 0x18EFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFECu;
            // 0x18eff0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFF4u; }
        if (ctx->pc != 0x18EFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFF4u; }
        if (ctx->pc != 0x18EFF4u) { return; }
    }
    ctx->pc = 0x18EFF4u;
label_18eff4:
    // 0x18eff4: 0xc060500  jal         func_181400
label_18eff8:
    if (ctx->pc == 0x18EFF8u) {
        ctx->pc = 0x18EFF8u;
            // 0x18eff8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x18EFFCu;
        goto label_18effc;
    }
    ctx->pc = 0x18EFF4u;
    SET_GPR_U32(ctx, 31, 0x18EFFCu);
    ctx->pc = 0x18EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EFF4u;
            // 0x18eff8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFFCu; }
        if (ctx->pc != 0x18EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EFFCu; }
        if (ctx->pc != 0x18EFFCu) { return; }
    }
    ctx->pc = 0x18EFFCu;
label_18effc:
    // 0x18effc: 0x10000004  b           . + 4 + (0x4 << 2)
label_18f000:
    if (ctx->pc == 0x18F000u) {
        ctx->pc = 0x18F004u;
        goto label_18f004;
    }
    ctx->pc = 0x18EFFCu;
    {
        const bool branch_taken_0x18effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18effc) {
            ctx->pc = 0x18F010u;
            goto label_18f010;
        }
    }
    ctx->pc = 0x18F004u;
label_18f004:
    // 0x18f004: 0x0  nop
    ctx->pc = 0x18f004u;
    // NOP
label_18f008:
    // 0x18f008: 0xc0604dc  jal         func_181370
label_18f00c:
    if (ctx->pc == 0x18F00Cu) {
        ctx->pc = 0x18F00Cu;
            // 0x18f00c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x18F010u;
        goto label_18f010;
    }
    ctx->pc = 0x18F008u;
    SET_GPR_U32(ctx, 31, 0x18F010u);
    ctx->pc = 0x18F00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F008u;
            // 0x18f00c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F010u; }
        if (ctx->pc != 0x18F010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F010u; }
        if (ctx->pc != 0x18F010u) { return; }
    }
    ctx->pc = 0x18F010u;
label_18f010:
    // 0x18f010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f014:
    // 0x18f014: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x18f014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_18f018:
    // 0x18f018: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_18f01c:
    // 0x18f01c: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_18f020:
    // 0x18f020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f024:
    // 0x18f024: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18f024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_18f028:
    // 0x18f028: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18f02c:
    // 0x18f02c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_18f030:
    // 0x18f030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f034:
    // 0x18f034: 0x0  nop
    ctx->pc = 0x18f034u;
    // NOP
label_18f038:
    // 0x18f038: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18f038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18f03c:
    // 0x18f03c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x18f03cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_18f040:
    // 0x18f040: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18f044:
    // 0x18f044: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_18f048:
    // 0x18f048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f04c:
    // 0x18f04c: 0x0  nop
    ctx->pc = 0x18f04cu;
    // NOP
label_18f050:
    // 0x18f050: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18f050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18f054:
    // 0x18f054: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x18f054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_18f058:
    // 0x18f058: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x18f058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_18f05c:
    // 0x18f05c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x18f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_18f060:
    // 0x18f060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f064:
    // 0x18f064: 0x0  nop
    ctx->pc = 0x18f064u;
    // NOP
label_18f068:
    // 0x18f068: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18f068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18f06c:
    // 0x18f06c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x18f06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_18f070:
    // 0x18f070: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_18f074:
    // 0x18f074: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x18f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_18f078:
    // 0x18f078: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f07c:
    // 0x18f07c: 0x0  nop
    ctx->pc = 0x18f07cu;
    // NOP
label_18f080:
    // 0x18f080: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18f080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18f084:
    // 0x18f084: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x18f084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_18f088:
    // 0x18f088: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x18f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_18f08c:
    // 0x18f08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f090:
    // 0x18f090: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x18f090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_18f094:
    // 0x18f094: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f098:
    // 0x18f098: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x18f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f09c:
    // 0x18f09c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18f09cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18f0a0:
    // 0x18f0a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_18f0a4:
    if (ctx->pc == 0x18F0A4u) {
        ctx->pc = 0x18F0A8u;
        goto label_18f0a8;
    }
    ctx->pc = 0x18F0A0u;
    {
        const bool branch_taken_0x18f0a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f0a0) {
            ctx->pc = 0x18F0C0u;
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F0A8u;
label_18f0a8:
    // 0x18f0a8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x18f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_18f0ac:
    // 0x18f0ac: 0x40f809  jalr        $v0
label_18f0b0:
    if (ctx->pc == 0x18F0B0u) {
        ctx->pc = 0x18F0B0u;
            // 0x18f0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F0B4u;
        goto label_18f0b4;
    }
    ctx->pc = 0x18F0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F0B4u);
        ctx->pc = 0x18F0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0ACu;
            // 0x18f0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E560u: goto label_18e560;
            case 0x18E564u: goto label_18e564;
            case 0x18E568u: goto label_18e568;
            case 0x18E56Cu: goto label_18e56c;
            case 0x18E570u: goto label_18e570;
            case 0x18E574u: goto label_18e574;
            case 0x18E578u: goto label_18e578;
            case 0x18E57Cu: goto label_18e57c;
            case 0x18E580u: goto label_18e580;
            case 0x18E584u: goto label_18e584;
            case 0x18E588u: goto label_18e588;
            case 0x18E58Cu: goto label_18e58c;
            case 0x18E590u: goto label_18e590;
            case 0x18E594u: goto label_18e594;
            case 0x18E598u: goto label_18e598;
            case 0x18E59Cu: goto label_18e59c;
            case 0x18E5A0u: goto label_18e5a0;
            case 0x18E5A4u: goto label_18e5a4;
            case 0x18E5A8u: goto label_18e5a8;
            case 0x18E5ACu: goto label_18e5ac;
            case 0x18E5B0u: goto label_18e5b0;
            case 0x18E5B4u: goto label_18e5b4;
            case 0x18E5B8u: goto label_18e5b8;
            case 0x18E5BCu: goto label_18e5bc;
            case 0x18E5C0u: goto label_18e5c0;
            case 0x18E5C4u: goto label_18e5c4;
            case 0x18E5C8u: goto label_18e5c8;
            case 0x18E5CCu: goto label_18e5cc;
            case 0x18E5D0u: goto label_18e5d0;
            case 0x18E5D4u: goto label_18e5d4;
            case 0x18E5D8u: goto label_18e5d8;
            case 0x18E5DCu: goto label_18e5dc;
            case 0x18E5E0u: goto label_18e5e0;
            case 0x18E5E4u: goto label_18e5e4;
            case 0x18E5E8u: goto label_18e5e8;
            case 0x18E5ECu: goto label_18e5ec;
            case 0x18E5F0u: goto label_18e5f0;
            case 0x18E5F4u: goto label_18e5f4;
            case 0x18E5F8u: goto label_18e5f8;
            case 0x18E5FCu: goto label_18e5fc;
            case 0x18E600u: goto label_18e600;
            case 0x18E604u: goto label_18e604;
            case 0x18E608u: goto label_18e608;
            case 0x18E60Cu: goto label_18e60c;
            case 0x18E610u: goto label_18e610;
            case 0x18E614u: goto label_18e614;
            case 0x18E618u: goto label_18e618;
            case 0x18E61Cu: goto label_18e61c;
            case 0x18E620u: goto label_18e620;
            case 0x18E624u: goto label_18e624;
            case 0x18E628u: goto label_18e628;
            case 0x18E62Cu: goto label_18e62c;
            case 0x18E630u: goto label_18e630;
            case 0x18E634u: goto label_18e634;
            case 0x18E638u: goto label_18e638;
            case 0x18E63Cu: goto label_18e63c;
            case 0x18E640u: goto label_18e640;
            case 0x18E644u: goto label_18e644;
            case 0x18E648u: goto label_18e648;
            case 0x18E64Cu: goto label_18e64c;
            case 0x18E650u: goto label_18e650;
            case 0x18E654u: goto label_18e654;
            case 0x18E658u: goto label_18e658;
            case 0x18E65Cu: goto label_18e65c;
            case 0x18E660u: goto label_18e660;
            case 0x18E664u: goto label_18e664;
            case 0x18E668u: goto label_18e668;
            case 0x18E66Cu: goto label_18e66c;
            case 0x18E670u: goto label_18e670;
            case 0x18E674u: goto label_18e674;
            case 0x18E678u: goto label_18e678;
            case 0x18E67Cu: goto label_18e67c;
            case 0x18E680u: goto label_18e680;
            case 0x18E684u: goto label_18e684;
            case 0x18E688u: goto label_18e688;
            case 0x18E68Cu: goto label_18e68c;
            case 0x18E690u: goto label_18e690;
            case 0x18E694u: goto label_18e694;
            case 0x18E698u: goto label_18e698;
            case 0x18E69Cu: goto label_18e69c;
            case 0x18E6A0u: goto label_18e6a0;
            case 0x18E6A4u: goto label_18e6a4;
            case 0x18E6A8u: goto label_18e6a8;
            case 0x18E6ACu: goto label_18e6ac;
            case 0x18E6B0u: goto label_18e6b0;
            case 0x18E6B4u: goto label_18e6b4;
            case 0x18E6B8u: goto label_18e6b8;
            case 0x18E6BCu: goto label_18e6bc;
            case 0x18E6C0u: goto label_18e6c0;
            case 0x18E6C4u: goto label_18e6c4;
            case 0x18E6C8u: goto label_18e6c8;
            case 0x18E6CCu: goto label_18e6cc;
            case 0x18E6D0u: goto label_18e6d0;
            case 0x18E6D4u: goto label_18e6d4;
            case 0x18E6D8u: goto label_18e6d8;
            case 0x18E6DCu: goto label_18e6dc;
            case 0x18E6E0u: goto label_18e6e0;
            case 0x18E6E4u: goto label_18e6e4;
            case 0x18E6E8u: goto label_18e6e8;
            case 0x18E6ECu: goto label_18e6ec;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E6F8u: goto label_18e6f8;
            case 0x18E6FCu: goto label_18e6fc;
            case 0x18E700u: goto label_18e700;
            case 0x18E704u: goto label_18e704;
            case 0x18E708u: goto label_18e708;
            case 0x18E70Cu: goto label_18e70c;
            case 0x18E710u: goto label_18e710;
            case 0x18E714u: goto label_18e714;
            case 0x18E718u: goto label_18e718;
            case 0x18E71Cu: goto label_18e71c;
            case 0x18E720u: goto label_18e720;
            case 0x18E724u: goto label_18e724;
            case 0x18E728u: goto label_18e728;
            case 0x18E72Cu: goto label_18e72c;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E738u: goto label_18e738;
            case 0x18E73Cu: goto label_18e73c;
            case 0x18E740u: goto label_18e740;
            case 0x18E744u: goto label_18e744;
            case 0x18E748u: goto label_18e748;
            case 0x18E74Cu: goto label_18e74c;
            case 0x18E750u: goto label_18e750;
            case 0x18E754u: goto label_18e754;
            case 0x18E758u: goto label_18e758;
            case 0x18E75Cu: goto label_18e75c;
            case 0x18E760u: goto label_18e760;
            case 0x18E764u: goto label_18e764;
            case 0x18E768u: goto label_18e768;
            case 0x18E76Cu: goto label_18e76c;
            case 0x18E770u: goto label_18e770;
            case 0x18E774u: goto label_18e774;
            case 0x18E778u: goto label_18e778;
            case 0x18E77Cu: goto label_18e77c;
            case 0x18E780u: goto label_18e780;
            case 0x18E784u: goto label_18e784;
            case 0x18E788u: goto label_18e788;
            case 0x18E78Cu: goto label_18e78c;
            case 0x18E790u: goto label_18e790;
            case 0x18E794u: goto label_18e794;
            case 0x18E798u: goto label_18e798;
            case 0x18E79Cu: goto label_18e79c;
            case 0x18E7A0u: goto label_18e7a0;
            case 0x18E7A4u: goto label_18e7a4;
            case 0x18E7A8u: goto label_18e7a8;
            case 0x18E7ACu: goto label_18e7ac;
            case 0x18E7B0u: goto label_18e7b0;
            case 0x18E7B4u: goto label_18e7b4;
            case 0x18E7B8u: goto label_18e7b8;
            case 0x18E7BCu: goto label_18e7bc;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7C8u: goto label_18e7c8;
            case 0x18E7CCu: goto label_18e7cc;
            case 0x18E7D0u: goto label_18e7d0;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E7DCu: goto label_18e7dc;
            case 0x18E7E0u: goto label_18e7e0;
            case 0x18E7E4u: goto label_18e7e4;
            case 0x18E7E8u: goto label_18e7e8;
            case 0x18E7ECu: goto label_18e7ec;
            case 0x18E7F0u: goto label_18e7f0;
            case 0x18E7F4u: goto label_18e7f4;
            case 0x18E7F8u: goto label_18e7f8;
            case 0x18E7FCu: goto label_18e7fc;
            case 0x18E800u: goto label_18e800;
            case 0x18E804u: goto label_18e804;
            case 0x18E808u: goto label_18e808;
            case 0x18E80Cu: goto label_18e80c;
            case 0x18E810u: goto label_18e810;
            case 0x18E814u: goto label_18e814;
            case 0x18E818u: goto label_18e818;
            case 0x18E81Cu: goto label_18e81c;
            case 0x18E820u: goto label_18e820;
            case 0x18E824u: goto label_18e824;
            case 0x18E828u: goto label_18e828;
            case 0x18E82Cu: goto label_18e82c;
            case 0x18E830u: goto label_18e830;
            case 0x18E834u: goto label_18e834;
            case 0x18E838u: goto label_18e838;
            case 0x18E83Cu: goto label_18e83c;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E848u: goto label_18e848;
            case 0x18E84Cu: goto label_18e84c;
            case 0x18E850u: goto label_18e850;
            case 0x18E854u: goto label_18e854;
            case 0x18E858u: goto label_18e858;
            case 0x18E85Cu: goto label_18e85c;
            case 0x18E860u: goto label_18e860;
            case 0x18E864u: goto label_18e864;
            case 0x18E868u: goto label_18e868;
            case 0x18E86Cu: goto label_18e86c;
            case 0x18E870u: goto label_18e870;
            case 0x18E874u: goto label_18e874;
            case 0x18E878u: goto label_18e878;
            case 0x18E87Cu: goto label_18e87c;
            case 0x18E880u: goto label_18e880;
            case 0x18E884u: goto label_18e884;
            case 0x18E888u: goto label_18e888;
            case 0x18E88Cu: goto label_18e88c;
            case 0x18E890u: goto label_18e890;
            case 0x18E894u: goto label_18e894;
            case 0x18E898u: goto label_18e898;
            case 0x18E89Cu: goto label_18e89c;
            case 0x18E8A0u: goto label_18e8a0;
            case 0x18E8A4u: goto label_18e8a4;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8ACu: goto label_18e8ac;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8B4u: goto label_18e8b4;
            case 0x18E8B8u: goto label_18e8b8;
            case 0x18E8BCu: goto label_18e8bc;
            case 0x18E8C0u: goto label_18e8c0;
            case 0x18E8C4u: goto label_18e8c4;
            case 0x18E8C8u: goto label_18e8c8;
            case 0x18E8CCu: goto label_18e8cc;
            case 0x18E8D0u: goto label_18e8d0;
            case 0x18E8D4u: goto label_18e8d4;
            case 0x18E8D8u: goto label_18e8d8;
            case 0x18E8DCu: goto label_18e8dc;
            case 0x18E8E0u: goto label_18e8e0;
            case 0x18E8E4u: goto label_18e8e4;
            case 0x18E8E8u: goto label_18e8e8;
            case 0x18E8ECu: goto label_18e8ec;
            case 0x18E8F0u: goto label_18e8f0;
            case 0x18E8F4u: goto label_18e8f4;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E8FCu: goto label_18e8fc;
            case 0x18E900u: goto label_18e900;
            case 0x18E904u: goto label_18e904;
            case 0x18E908u: goto label_18e908;
            case 0x18E90Cu: goto label_18e90c;
            case 0x18E910u: goto label_18e910;
            case 0x18E914u: goto label_18e914;
            case 0x18E918u: goto label_18e918;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E920u: goto label_18e920;
            case 0x18E924u: goto label_18e924;
            case 0x18E928u: goto label_18e928;
            case 0x18E92Cu: goto label_18e92c;
            case 0x18E930u: goto label_18e930;
            case 0x18E934u: goto label_18e934;
            case 0x18E938u: goto label_18e938;
            case 0x18E93Cu: goto label_18e93c;
            case 0x18E940u: goto label_18e940;
            case 0x18E944u: goto label_18e944;
            case 0x18E948u: goto label_18e948;
            case 0x18E94Cu: goto label_18e94c;
            case 0x18E950u: goto label_18e950;
            case 0x18E954u: goto label_18e954;
            case 0x18E958u: goto label_18e958;
            case 0x18E95Cu: goto label_18e95c;
            case 0x18E960u: goto label_18e960;
            case 0x18E964u: goto label_18e964;
            case 0x18E968u: goto label_18e968;
            case 0x18E96Cu: goto label_18e96c;
            case 0x18E970u: goto label_18e970;
            case 0x18E974u: goto label_18e974;
            case 0x18E978u: goto label_18e978;
            case 0x18E97Cu: goto label_18e97c;
            case 0x18E980u: goto label_18e980;
            case 0x18E984u: goto label_18e984;
            case 0x18E988u: goto label_18e988;
            case 0x18E98Cu: goto label_18e98c;
            case 0x18E990u: goto label_18e990;
            case 0x18E994u: goto label_18e994;
            case 0x18E998u: goto label_18e998;
            case 0x18E99Cu: goto label_18e99c;
            case 0x18E9A0u: goto label_18e9a0;
            case 0x18E9A4u: goto label_18e9a4;
            case 0x18E9A8u: goto label_18e9a8;
            case 0x18E9ACu: goto label_18e9ac;
            case 0x18E9B0u: goto label_18e9b0;
            case 0x18E9B4u: goto label_18e9b4;
            case 0x18E9B8u: goto label_18e9b8;
            case 0x18E9BCu: goto label_18e9bc;
            case 0x18E9C0u: goto label_18e9c0;
            case 0x18E9C4u: goto label_18e9c4;
            case 0x18E9C8u: goto label_18e9c8;
            case 0x18E9CCu: goto label_18e9cc;
            case 0x18E9D0u: goto label_18e9d0;
            case 0x18E9D4u: goto label_18e9d4;
            case 0x18E9D8u: goto label_18e9d8;
            case 0x18E9DCu: goto label_18e9dc;
            case 0x18E9E0u: goto label_18e9e0;
            case 0x18E9E4u: goto label_18e9e4;
            case 0x18E9E8u: goto label_18e9e8;
            case 0x18E9ECu: goto label_18e9ec;
            case 0x18E9F0u: goto label_18e9f0;
            case 0x18E9F4u: goto label_18e9f4;
            case 0x18E9F8u: goto label_18e9f8;
            case 0x18E9FCu: goto label_18e9fc;
            case 0x18EA00u: goto label_18ea00;
            case 0x18EA04u: goto label_18ea04;
            case 0x18EA08u: goto label_18ea08;
            case 0x18EA0Cu: goto label_18ea0c;
            case 0x18EA10u: goto label_18ea10;
            case 0x18EA14u: goto label_18ea14;
            case 0x18EA18u: goto label_18ea18;
            case 0x18EA1Cu: goto label_18ea1c;
            case 0x18EA20u: goto label_18ea20;
            case 0x18EA24u: goto label_18ea24;
            case 0x18EA28u: goto label_18ea28;
            case 0x18EA2Cu: goto label_18ea2c;
            case 0x18EA30u: goto label_18ea30;
            case 0x18EA34u: goto label_18ea34;
            case 0x18EA38u: goto label_18ea38;
            case 0x18EA3Cu: goto label_18ea3c;
            case 0x18EA40u: goto label_18ea40;
            case 0x18EA44u: goto label_18ea44;
            case 0x18EA48u: goto label_18ea48;
            case 0x18EA4Cu: goto label_18ea4c;
            case 0x18EA50u: goto label_18ea50;
            case 0x18EA54u: goto label_18ea54;
            case 0x18EA58u: goto label_18ea58;
            case 0x18EA5Cu: goto label_18ea5c;
            case 0x18EA60u: goto label_18ea60;
            case 0x18EA64u: goto label_18ea64;
            case 0x18EA68u: goto label_18ea68;
            case 0x18EA6Cu: goto label_18ea6c;
            case 0x18EA70u: goto label_18ea70;
            case 0x18EA74u: goto label_18ea74;
            case 0x18EA78u: goto label_18ea78;
            case 0x18EA7Cu: goto label_18ea7c;
            case 0x18EA80u: goto label_18ea80;
            case 0x18EA84u: goto label_18ea84;
            case 0x18EA88u: goto label_18ea88;
            case 0x18EA8Cu: goto label_18ea8c;
            case 0x18EA90u: goto label_18ea90;
            case 0x18EA94u: goto label_18ea94;
            case 0x18EA98u: goto label_18ea98;
            case 0x18EA9Cu: goto label_18ea9c;
            case 0x18EAA0u: goto label_18eaa0;
            case 0x18EAA4u: goto label_18eaa4;
            case 0x18EAA8u: goto label_18eaa8;
            case 0x18EAACu: goto label_18eaac;
            case 0x18EAB0u: goto label_18eab0;
            case 0x18EAB4u: goto label_18eab4;
            case 0x18EAB8u: goto label_18eab8;
            case 0x18EABCu: goto label_18eabc;
            case 0x18EAC0u: goto label_18eac0;
            case 0x18EAC4u: goto label_18eac4;
            case 0x18EAC8u: goto label_18eac8;
            case 0x18EACCu: goto label_18eacc;
            case 0x18EAD0u: goto label_18ead0;
            case 0x18EAD4u: goto label_18ead4;
            case 0x18EAD8u: goto label_18ead8;
            case 0x18EADCu: goto label_18eadc;
            case 0x18EAE0u: goto label_18eae0;
            case 0x18EAE4u: goto label_18eae4;
            case 0x18EAE8u: goto label_18eae8;
            case 0x18EAECu: goto label_18eaec;
            case 0x18EAF0u: goto label_18eaf0;
            case 0x18EAF4u: goto label_18eaf4;
            case 0x18EAF8u: goto label_18eaf8;
            case 0x18EAFCu: goto label_18eafc;
            case 0x18EB00u: goto label_18eb00;
            case 0x18EB04u: goto label_18eb04;
            case 0x18EB08u: goto label_18eb08;
            case 0x18EB0Cu: goto label_18eb0c;
            case 0x18EB10u: goto label_18eb10;
            case 0x18EB14u: goto label_18eb14;
            case 0x18EB18u: goto label_18eb18;
            case 0x18EB1Cu: goto label_18eb1c;
            case 0x18EB20u: goto label_18eb20;
            case 0x18EB24u: goto label_18eb24;
            case 0x18EB28u: goto label_18eb28;
            case 0x18EB2Cu: goto label_18eb2c;
            case 0x18EB30u: goto label_18eb30;
            case 0x18EB34u: goto label_18eb34;
            case 0x18EB38u: goto label_18eb38;
            case 0x18EB3Cu: goto label_18eb3c;
            case 0x18EB40u: goto label_18eb40;
            case 0x18EB44u: goto label_18eb44;
            case 0x18EB48u: goto label_18eb48;
            case 0x18EB4Cu: goto label_18eb4c;
            case 0x18EB50u: goto label_18eb50;
            case 0x18EB54u: goto label_18eb54;
            case 0x18EB58u: goto label_18eb58;
            case 0x18EB5Cu: goto label_18eb5c;
            case 0x18EB60u: goto label_18eb60;
            case 0x18EB64u: goto label_18eb64;
            case 0x18EB68u: goto label_18eb68;
            case 0x18EB6Cu: goto label_18eb6c;
            case 0x18EB70u: goto label_18eb70;
            case 0x18EB74u: goto label_18eb74;
            case 0x18EB78u: goto label_18eb78;
            case 0x18EB7Cu: goto label_18eb7c;
            case 0x18EB80u: goto label_18eb80;
            case 0x18EB84u: goto label_18eb84;
            case 0x18EB88u: goto label_18eb88;
            case 0x18EB8Cu: goto label_18eb8c;
            case 0x18EB90u: goto label_18eb90;
            case 0x18EB94u: goto label_18eb94;
            case 0x18EB98u: goto label_18eb98;
            case 0x18EB9Cu: goto label_18eb9c;
            case 0x18EBA0u: goto label_18eba0;
            case 0x18EBA4u: goto label_18eba4;
            case 0x18EBA8u: goto label_18eba8;
            case 0x18EBACu: goto label_18ebac;
            case 0x18EBB0u: goto label_18ebb0;
            case 0x18EBB4u: goto label_18ebb4;
            case 0x18EBB8u: goto label_18ebb8;
            case 0x18EBBCu: goto label_18ebbc;
            case 0x18EBC0u: goto label_18ebc0;
            case 0x18EBC4u: goto label_18ebc4;
            case 0x18EBC8u: goto label_18ebc8;
            case 0x18EBCCu: goto label_18ebcc;
            case 0x18EBD0u: goto label_18ebd0;
            case 0x18EBD4u: goto label_18ebd4;
            case 0x18EBD8u: goto label_18ebd8;
            case 0x18EBDCu: goto label_18ebdc;
            case 0x18EBE0u: goto label_18ebe0;
            case 0x18EBE4u: goto label_18ebe4;
            case 0x18EBE8u: goto label_18ebe8;
            case 0x18EBECu: goto label_18ebec;
            case 0x18EBF0u: goto label_18ebf0;
            case 0x18EBF4u: goto label_18ebf4;
            case 0x18EBF8u: goto label_18ebf8;
            case 0x18EBFCu: goto label_18ebfc;
            case 0x18EC00u: goto label_18ec00;
            case 0x18EC04u: goto label_18ec04;
            case 0x18EC08u: goto label_18ec08;
            case 0x18EC0Cu: goto label_18ec0c;
            case 0x18EC10u: goto label_18ec10;
            case 0x18EC14u: goto label_18ec14;
            case 0x18EC18u: goto label_18ec18;
            case 0x18EC1Cu: goto label_18ec1c;
            case 0x18EC20u: goto label_18ec20;
            case 0x18EC24u: goto label_18ec24;
            case 0x18EC28u: goto label_18ec28;
            case 0x18EC2Cu: goto label_18ec2c;
            case 0x18EC30u: goto label_18ec30;
            case 0x18EC34u: goto label_18ec34;
            case 0x18EC38u: goto label_18ec38;
            case 0x18EC3Cu: goto label_18ec3c;
            case 0x18EC40u: goto label_18ec40;
            case 0x18EC44u: goto label_18ec44;
            case 0x18EC48u: goto label_18ec48;
            case 0x18EC4Cu: goto label_18ec4c;
            case 0x18EC50u: goto label_18ec50;
            case 0x18EC54u: goto label_18ec54;
            case 0x18EC58u: goto label_18ec58;
            case 0x18EC5Cu: goto label_18ec5c;
            case 0x18EC60u: goto label_18ec60;
            case 0x18EC64u: goto label_18ec64;
            case 0x18EC68u: goto label_18ec68;
            case 0x18EC6Cu: goto label_18ec6c;
            case 0x18EC70u: goto label_18ec70;
            case 0x18EC74u: goto label_18ec74;
            case 0x18EC78u: goto label_18ec78;
            case 0x18EC7Cu: goto label_18ec7c;
            case 0x18EC80u: goto label_18ec80;
            case 0x18EC84u: goto label_18ec84;
            case 0x18EC88u: goto label_18ec88;
            case 0x18EC8Cu: goto label_18ec8c;
            case 0x18EC90u: goto label_18ec90;
            case 0x18EC94u: goto label_18ec94;
            case 0x18EC98u: goto label_18ec98;
            case 0x18EC9Cu: goto label_18ec9c;
            case 0x18ECA0u: goto label_18eca0;
            case 0x18ECA4u: goto label_18eca4;
            case 0x18ECA8u: goto label_18eca8;
            case 0x18ECACu: goto label_18ecac;
            case 0x18ECB0u: goto label_18ecb0;
            case 0x18ECB4u: goto label_18ecb4;
            case 0x18ECB8u: goto label_18ecb8;
            case 0x18ECBCu: goto label_18ecbc;
            case 0x18ECC0u: goto label_18ecc0;
            case 0x18ECC4u: goto label_18ecc4;
            case 0x18ECC8u: goto label_18ecc8;
            case 0x18ECCCu: goto label_18eccc;
            case 0x18ECD0u: goto label_18ecd0;
            case 0x18ECD4u: goto label_18ecd4;
            case 0x18ECD8u: goto label_18ecd8;
            case 0x18ECDCu: goto label_18ecdc;
            case 0x18ECE0u: goto label_18ece0;
            case 0x18ECE4u: goto label_18ece4;
            case 0x18ECE8u: goto label_18ece8;
            case 0x18ECECu: goto label_18ecec;
            case 0x18ECF0u: goto label_18ecf0;
            case 0x18ECF4u: goto label_18ecf4;
            case 0x18ECF8u: goto label_18ecf8;
            case 0x18ECFCu: goto label_18ecfc;
            case 0x18ED00u: goto label_18ed00;
            case 0x18ED04u: goto label_18ed04;
            case 0x18ED08u: goto label_18ed08;
            case 0x18ED0Cu: goto label_18ed0c;
            case 0x18ED10u: goto label_18ed10;
            case 0x18ED14u: goto label_18ed14;
            case 0x18ED18u: goto label_18ed18;
            case 0x18ED1Cu: goto label_18ed1c;
            case 0x18ED20u: goto label_18ed20;
            case 0x18ED24u: goto label_18ed24;
            case 0x18ED28u: goto label_18ed28;
            case 0x18ED2Cu: goto label_18ed2c;
            case 0x18ED30u: goto label_18ed30;
            case 0x18ED34u: goto label_18ed34;
            case 0x18ED38u: goto label_18ed38;
            case 0x18ED3Cu: goto label_18ed3c;
            case 0x18ED40u: goto label_18ed40;
            case 0x18ED44u: goto label_18ed44;
            case 0x18ED48u: goto label_18ed48;
            case 0x18ED4Cu: goto label_18ed4c;
            case 0x18ED50u: goto label_18ed50;
            case 0x18ED54u: goto label_18ed54;
            case 0x18ED58u: goto label_18ed58;
            case 0x18ED5Cu: goto label_18ed5c;
            case 0x18ED60u: goto label_18ed60;
            case 0x18ED64u: goto label_18ed64;
            case 0x18ED68u: goto label_18ed68;
            case 0x18ED6Cu: goto label_18ed6c;
            case 0x18ED70u: goto label_18ed70;
            case 0x18ED74u: goto label_18ed74;
            case 0x18ED78u: goto label_18ed78;
            case 0x18ED7Cu: goto label_18ed7c;
            case 0x18ED80u: goto label_18ed80;
            case 0x18ED84u: goto label_18ed84;
            case 0x18ED88u: goto label_18ed88;
            case 0x18ED8Cu: goto label_18ed8c;
            case 0x18ED90u: goto label_18ed90;
            case 0x18ED94u: goto label_18ed94;
            case 0x18ED98u: goto label_18ed98;
            case 0x18ED9Cu: goto label_18ed9c;
            case 0x18EDA0u: goto label_18eda0;
            case 0x18EDA4u: goto label_18eda4;
            case 0x18EDA8u: goto label_18eda8;
            case 0x18EDACu: goto label_18edac;
            case 0x18EDB0u: goto label_18edb0;
            case 0x18EDB4u: goto label_18edb4;
            case 0x18EDB8u: goto label_18edb8;
            case 0x18EDBCu: goto label_18edbc;
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EDC4u: goto label_18edc4;
            case 0x18EDC8u: goto label_18edc8;
            case 0x18EDCCu: goto label_18edcc;
            case 0x18EDD0u: goto label_18edd0;
            case 0x18EDD4u: goto label_18edd4;
            case 0x18EDD8u: goto label_18edd8;
            case 0x18EDDCu: goto label_18eddc;
            case 0x18EDE0u: goto label_18ede0;
            case 0x18EDE4u: goto label_18ede4;
            case 0x18EDE8u: goto label_18ede8;
            case 0x18EDECu: goto label_18edec;
            case 0x18EDF0u: goto label_18edf0;
            case 0x18EDF4u: goto label_18edf4;
            case 0x18EDF8u: goto label_18edf8;
            case 0x18EDFCu: goto label_18edfc;
            case 0x18EE00u: goto label_18ee00;
            case 0x18EE04u: goto label_18ee04;
            case 0x18EE08u: goto label_18ee08;
            case 0x18EE0Cu: goto label_18ee0c;
            case 0x18EE10u: goto label_18ee10;
            case 0x18EE14u: goto label_18ee14;
            case 0x18EE18u: goto label_18ee18;
            case 0x18EE1Cu: goto label_18ee1c;
            case 0x18EE20u: goto label_18ee20;
            case 0x18EE24u: goto label_18ee24;
            case 0x18EE28u: goto label_18ee28;
            case 0x18EE2Cu: goto label_18ee2c;
            case 0x18EE30u: goto label_18ee30;
            case 0x18EE34u: goto label_18ee34;
            case 0x18EE38u: goto label_18ee38;
            case 0x18EE3Cu: goto label_18ee3c;
            case 0x18EE40u: goto label_18ee40;
            case 0x18EE44u: goto label_18ee44;
            case 0x18EE48u: goto label_18ee48;
            case 0x18EE4Cu: goto label_18ee4c;
            case 0x18EE50u: goto label_18ee50;
            case 0x18EE54u: goto label_18ee54;
            case 0x18EE58u: goto label_18ee58;
            case 0x18EE5Cu: goto label_18ee5c;
            case 0x18EE60u: goto label_18ee60;
            case 0x18EE64u: goto label_18ee64;
            case 0x18EE68u: goto label_18ee68;
            case 0x18EE6Cu: goto label_18ee6c;
            case 0x18EE70u: goto label_18ee70;
            case 0x18EE74u: goto label_18ee74;
            case 0x18EE78u: goto label_18ee78;
            case 0x18EE7Cu: goto label_18ee7c;
            case 0x18EE80u: goto label_18ee80;
            case 0x18EE84u: goto label_18ee84;
            case 0x18EE88u: goto label_18ee88;
            case 0x18EE8Cu: goto label_18ee8c;
            case 0x18EE90u: goto label_18ee90;
            case 0x18EE94u: goto label_18ee94;
            case 0x18EE98u: goto label_18ee98;
            case 0x18EE9Cu: goto label_18ee9c;
            case 0x18EEA0u: goto label_18eea0;
            case 0x18EEA4u: goto label_18eea4;
            case 0x18EEA8u: goto label_18eea8;
            case 0x18EEACu: goto label_18eeac;
            case 0x18EEB0u: goto label_18eeb0;
            case 0x18EEB4u: goto label_18eeb4;
            case 0x18EEB8u: goto label_18eeb8;
            case 0x18EEBCu: goto label_18eebc;
            case 0x18EEC0u: goto label_18eec0;
            case 0x18EEC4u: goto label_18eec4;
            case 0x18EEC8u: goto label_18eec8;
            case 0x18EECCu: goto label_18eecc;
            case 0x18EED0u: goto label_18eed0;
            case 0x18EED4u: goto label_18eed4;
            case 0x18EED8u: goto label_18eed8;
            case 0x18EEDCu: goto label_18eedc;
            case 0x18EEE0u: goto label_18eee0;
            case 0x18EEE4u: goto label_18eee4;
            case 0x18EEE8u: goto label_18eee8;
            case 0x18EEECu: goto label_18eeec;
            case 0x18EEF0u: goto label_18eef0;
            case 0x18EEF4u: goto label_18eef4;
            case 0x18EEF8u: goto label_18eef8;
            case 0x18EEFCu: goto label_18eefc;
            case 0x18EF00u: goto label_18ef00;
            case 0x18EF04u: goto label_18ef04;
            case 0x18EF08u: goto label_18ef08;
            case 0x18EF0Cu: goto label_18ef0c;
            case 0x18EF10u: goto label_18ef10;
            case 0x18EF14u: goto label_18ef14;
            case 0x18EF18u: goto label_18ef18;
            case 0x18EF1Cu: goto label_18ef1c;
            case 0x18EF20u: goto label_18ef20;
            case 0x18EF24u: goto label_18ef24;
            case 0x18EF28u: goto label_18ef28;
            case 0x18EF2Cu: goto label_18ef2c;
            case 0x18EF30u: goto label_18ef30;
            case 0x18EF34u: goto label_18ef34;
            case 0x18EF38u: goto label_18ef38;
            case 0x18EF3Cu: goto label_18ef3c;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF44u: goto label_18ef44;
            case 0x18EF48u: goto label_18ef48;
            case 0x18EF4Cu: goto label_18ef4c;
            case 0x18EF50u: goto label_18ef50;
            case 0x18EF54u: goto label_18ef54;
            case 0x18EF58u: goto label_18ef58;
            case 0x18EF5Cu: goto label_18ef5c;
            case 0x18EF60u: goto label_18ef60;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF68u: goto label_18ef68;
            case 0x18EF6Cu: goto label_18ef6c;
            case 0x18EF70u: goto label_18ef70;
            case 0x18EF74u: goto label_18ef74;
            case 0x18EF78u: goto label_18ef78;
            case 0x18EF7Cu: goto label_18ef7c;
            case 0x18EF80u: goto label_18ef80;
            case 0x18EF84u: goto label_18ef84;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EF8Cu: goto label_18ef8c;
            case 0x18EF90u: goto label_18ef90;
            case 0x18EF94u: goto label_18ef94;
            case 0x18EF98u: goto label_18ef98;
            case 0x18EF9Cu: goto label_18ef9c;
            case 0x18EFA0u: goto label_18efa0;
            case 0x18EFA4u: goto label_18efa4;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFACu: goto label_18efac;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18EFB8u: goto label_18efb8;
            case 0x18EFBCu: goto label_18efbc;
            case 0x18EFC0u: goto label_18efc0;
            case 0x18EFC4u: goto label_18efc4;
            case 0x18EFC8u: goto label_18efc8;
            case 0x18EFCCu: goto label_18efcc;
            case 0x18EFD0u: goto label_18efd0;
            case 0x18EFD4u: goto label_18efd4;
            case 0x18EFD8u: goto label_18efd8;
            case 0x18EFDCu: goto label_18efdc;
            case 0x18EFE0u: goto label_18efe0;
            case 0x18EFE4u: goto label_18efe4;
            case 0x18EFE8u: goto label_18efe8;
            case 0x18EFECu: goto label_18efec;
            case 0x18EFF0u: goto label_18eff0;
            case 0x18EFF4u: goto label_18eff4;
            case 0x18EFF8u: goto label_18eff8;
            case 0x18EFFCu: goto label_18effc;
            case 0x18F000u: goto label_18f000;
            case 0x18F004u: goto label_18f004;
            case 0x18F008u: goto label_18f008;
            case 0x18F00Cu: goto label_18f00c;
            case 0x18F010u: goto label_18f010;
            case 0x18F014u: goto label_18f014;
            case 0x18F018u: goto label_18f018;
            case 0x18F01Cu: goto label_18f01c;
            case 0x18F020u: goto label_18f020;
            case 0x18F024u: goto label_18f024;
            case 0x18F028u: goto label_18f028;
            case 0x18F02Cu: goto label_18f02c;
            case 0x18F030u: goto label_18f030;
            case 0x18F034u: goto label_18f034;
            case 0x18F038u: goto label_18f038;
            case 0x18F03Cu: goto label_18f03c;
            case 0x18F040u: goto label_18f040;
            case 0x18F044u: goto label_18f044;
            case 0x18F048u: goto label_18f048;
            case 0x18F04Cu: goto label_18f04c;
            case 0x18F050u: goto label_18f050;
            case 0x18F054u: goto label_18f054;
            case 0x18F058u: goto label_18f058;
            case 0x18F05Cu: goto label_18f05c;
            case 0x18F060u: goto label_18f060;
            case 0x18F064u: goto label_18f064;
            case 0x18F068u: goto label_18f068;
            case 0x18F06Cu: goto label_18f06c;
            case 0x18F070u: goto label_18f070;
            case 0x18F074u: goto label_18f074;
            case 0x18F078u: goto label_18f078;
            case 0x18F07Cu: goto label_18f07c;
            case 0x18F080u: goto label_18f080;
            case 0x18F084u: goto label_18f084;
            case 0x18F088u: goto label_18f088;
            case 0x18F08Cu: goto label_18f08c;
            case 0x18F090u: goto label_18f090;
            case 0x18F094u: goto label_18f094;
            case 0x18F098u: goto label_18f098;
            case 0x18F09Cu: goto label_18f09c;
            case 0x18F0A0u: goto label_18f0a0;
            case 0x18F0A4u: goto label_18f0a4;
            case 0x18F0A8u: goto label_18f0a8;
            case 0x18F0ACu: goto label_18f0ac;
            case 0x18F0B0u: goto label_18f0b0;
            case 0x18F0B4u: goto label_18f0b4;
            case 0x18F0B8u: goto label_18f0b8;
            case 0x18F0BCu: goto label_18f0bc;
            case 0x18F0C0u: goto label_18f0c0;
            case 0x18F0C4u: goto label_18f0c4;
            case 0x18F0C8u: goto label_18f0c8;
            case 0x18F0CCu: goto label_18f0cc;
            case 0x18F0D0u: goto label_18f0d0;
            case 0x18F0D4u: goto label_18f0d4;
            case 0x18F0D8u: goto label_18f0d8;
            case 0x18F0DCu: goto label_18f0dc;
            case 0x18F0E0u: goto label_18f0e0;
            case 0x18F0E4u: goto label_18f0e4;
            case 0x18F0E8u: goto label_18f0e8;
            case 0x18F0ECu: goto label_18f0ec;
            case 0x18F0F0u: goto label_18f0f0;
            case 0x18F0F4u: goto label_18f0f4;
            case 0x18F0F8u: goto label_18f0f8;
            case 0x18F0FCu: goto label_18f0fc;
            case 0x18F100u: goto label_18f100;
            case 0x18F104u: goto label_18f104;
            case 0x18F108u: goto label_18f108;
            case 0x18F10Cu: goto label_18f10c;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F118u: goto label_18f118;
            case 0x18F11Cu: goto label_18f11c;
            case 0x18F120u: goto label_18f120;
            case 0x18F124u: goto label_18f124;
            case 0x18F128u: goto label_18f128;
            case 0x18F12Cu: goto label_18f12c;
            case 0x18F130u: goto label_18f130;
            case 0x18F134u: goto label_18f134;
            case 0x18F138u: goto label_18f138;
            case 0x18F13Cu: goto label_18f13c;
            case 0x18F140u: goto label_18f140;
            case 0x18F144u: goto label_18f144;
            case 0x18F148u: goto label_18f148;
            case 0x18F14Cu: goto label_18f14c;
            case 0x18F150u: goto label_18f150;
            case 0x18F154u: goto label_18f154;
            case 0x18F158u: goto label_18f158;
            case 0x18F15Cu: goto label_18f15c;
            case 0x18F160u: goto label_18f160;
            case 0x18F164u: goto label_18f164;
            case 0x18F168u: goto label_18f168;
            case 0x18F16Cu: goto label_18f16c;
            case 0x18F170u: goto label_18f170;
            case 0x18F174u: goto label_18f174;
            case 0x18F178u: goto label_18f178;
            case 0x18F17Cu: goto label_18f17c;
            case 0x18F180u: goto label_18f180;
            case 0x18F184u: goto label_18f184;
            case 0x18F188u: goto label_18f188;
            case 0x18F18Cu: goto label_18f18c;
            case 0x18F190u: goto label_18f190;
            case 0x18F194u: goto label_18f194;
            case 0x18F198u: goto label_18f198;
            case 0x18F19Cu: goto label_18f19c;
            case 0x18F1A0u: goto label_18f1a0;
            case 0x18F1A4u: goto label_18f1a4;
            case 0x18F1A8u: goto label_18f1a8;
            case 0x18F1ACu: goto label_18f1ac;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F1B4u: goto label_18f1b4;
            case 0x18F1B8u: goto label_18f1b8;
            case 0x18F1BCu: goto label_18f1bc;
            case 0x18F1C0u: goto label_18f1c0;
            case 0x18F1C4u: goto label_18f1c4;
            case 0x18F1C8u: goto label_18f1c8;
            case 0x18F1CCu: goto label_18f1cc;
            case 0x18F1D0u: goto label_18f1d0;
            case 0x18F1D4u: goto label_18f1d4;
            case 0x18F1D8u: goto label_18f1d8;
            case 0x18F1DCu: goto label_18f1dc;
            case 0x18F1E0u: goto label_18f1e0;
            case 0x18F1E4u: goto label_18f1e4;
            case 0x18F1E8u: goto label_18f1e8;
            case 0x18F1ECu: goto label_18f1ec;
            case 0x18F1F0u: goto label_18f1f0;
            case 0x18F1F4u: goto label_18f1f4;
            case 0x18F1F8u: goto label_18f1f8;
            case 0x18F1FCu: goto label_18f1fc;
            case 0x18F200u: goto label_18f200;
            case 0x18F204u: goto label_18f204;
            case 0x18F208u: goto label_18f208;
            case 0x18F20Cu: goto label_18f20c;
            case 0x18F210u: goto label_18f210;
            case 0x18F214u: goto label_18f214;
            case 0x18F218u: goto label_18f218;
            case 0x18F21Cu: goto label_18f21c;
            case 0x18F220u: goto label_18f220;
            case 0x18F224u: goto label_18f224;
            case 0x18F228u: goto label_18f228;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F230u: goto label_18f230;
            case 0x18F234u: goto label_18f234;
            case 0x18F238u: goto label_18f238;
            case 0x18F23Cu: goto label_18f23c;
            case 0x18F240u: goto label_18f240;
            case 0x18F244u: goto label_18f244;
            case 0x18F248u: goto label_18f248;
            case 0x18F24Cu: goto label_18f24c;
            case 0x18F250u: goto label_18f250;
            case 0x18F254u: goto label_18f254;
            case 0x18F258u: goto label_18f258;
            case 0x18F25Cu: goto label_18f25c;
            case 0x18F260u: goto label_18f260;
            case 0x18F264u: goto label_18f264;
            case 0x18F268u: goto label_18f268;
            case 0x18F26Cu: goto label_18f26c;
            case 0x18F270u: goto label_18f270;
            case 0x18F274u: goto label_18f274;
            case 0x18F278u: goto label_18f278;
            case 0x18F27Cu: goto label_18f27c;
            case 0x18F280u: goto label_18f280;
            case 0x18F284u: goto label_18f284;
            case 0x18F288u: goto label_18f288;
            case 0x18F28Cu: goto label_18f28c;
            case 0x18F290u: goto label_18f290;
            case 0x18F294u: goto label_18f294;
            case 0x18F298u: goto label_18f298;
            case 0x18F29Cu: goto label_18f29c;
            case 0x18F2A0u: goto label_18f2a0;
            case 0x18F2A4u: goto label_18f2a4;
            case 0x18F2A8u: goto label_18f2a8;
            case 0x18F2ACu: goto label_18f2ac;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B4u: goto label_18f2b4;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F2BCu: goto label_18f2bc;
            case 0x18F2C0u: goto label_18f2c0;
            case 0x18F2C4u: goto label_18f2c4;
            case 0x18F2C8u: goto label_18f2c8;
            case 0x18F2CCu: goto label_18f2cc;
            case 0x18F2D0u: goto label_18f2d0;
            case 0x18F2D4u: goto label_18f2d4;
            case 0x18F2D8u: goto label_18f2d8;
            case 0x18F2DCu: goto label_18f2dc;
            case 0x18F2E0u: goto label_18f2e0;
            case 0x18F2E4u: goto label_18f2e4;
            case 0x18F2E8u: goto label_18f2e8;
            case 0x18F2ECu: goto label_18f2ec;
            case 0x18F2F0u: goto label_18f2f0;
            case 0x18F2F4u: goto label_18f2f4;
            case 0x18F2F8u: goto label_18f2f8;
            case 0x18F2FCu: goto label_18f2fc;
            case 0x18F300u: goto label_18f300;
            case 0x18F304u: goto label_18f304;
            case 0x18F308u: goto label_18f308;
            case 0x18F30Cu: goto label_18f30c;
            case 0x18F310u: goto label_18f310;
            case 0x18F314u: goto label_18f314;
            case 0x18F318u: goto label_18f318;
            case 0x18F31Cu: goto label_18f31c;
            case 0x18F320u: goto label_18f320;
            case 0x18F324u: goto label_18f324;
            case 0x18F328u: goto label_18f328;
            case 0x18F32Cu: goto label_18f32c;
            case 0x18F330u: goto label_18f330;
            case 0x18F334u: goto label_18f334;
            case 0x18F338u: goto label_18f338;
            case 0x18F33Cu: goto label_18f33c;
            case 0x18F340u: goto label_18f340;
            case 0x18F344u: goto label_18f344;
            case 0x18F348u: goto label_18f348;
            case 0x18F34Cu: goto label_18f34c;
            case 0x18F350u: goto label_18f350;
            case 0x18F354u: goto label_18f354;
            case 0x18F358u: goto label_18f358;
            case 0x18F35Cu: goto label_18f35c;
            case 0x18F360u: goto label_18f360;
            case 0x18F364u: goto label_18f364;
            case 0x18F368u: goto label_18f368;
            case 0x18F36Cu: goto label_18f36c;
            case 0x18F370u: goto label_18f370;
            case 0x18F374u: goto label_18f374;
            case 0x18F378u: goto label_18f378;
            case 0x18F37Cu: goto label_18f37c;
            case 0x18F380u: goto label_18f380;
            case 0x18F384u: goto label_18f384;
            case 0x18F388u: goto label_18f388;
            case 0x18F38Cu: goto label_18f38c;
            case 0x18F390u: goto label_18f390;
            case 0x18F394u: goto label_18f394;
            case 0x18F398u: goto label_18f398;
            case 0x18F39Cu: goto label_18f39c;
            case 0x18F3A0u: goto label_18f3a0;
            case 0x18F3A4u: goto label_18f3a4;
            case 0x18F3A8u: goto label_18f3a8;
            case 0x18F3ACu: goto label_18f3ac;
            case 0x18F3B0u: goto label_18f3b0;
            case 0x18F3B4u: goto label_18f3b4;
            case 0x18F3B8u: goto label_18f3b8;
            case 0x18F3BCu: goto label_18f3bc;
            case 0x18F3C0u: goto label_18f3c0;
            case 0x18F3C4u: goto label_18f3c4;
            case 0x18F3C8u: goto label_18f3c8;
            case 0x18F3CCu: goto label_18f3cc;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F3D4u: goto label_18f3d4;
            case 0x18F3D8u: goto label_18f3d8;
            case 0x18F3DCu: goto label_18f3dc;
            case 0x18F3E0u: goto label_18f3e0;
            case 0x18F3E4u: goto label_18f3e4;
            case 0x18F3E8u: goto label_18f3e8;
            case 0x18F3ECu: goto label_18f3ec;
            case 0x18F3F0u: goto label_18f3f0;
            case 0x18F3F4u: goto label_18f3f4;
            case 0x18F3F8u: goto label_18f3f8;
            case 0x18F3FCu: goto label_18f3fc;
            case 0x18F400u: goto label_18f400;
            case 0x18F404u: goto label_18f404;
            case 0x18F408u: goto label_18f408;
            case 0x18F40Cu: goto label_18f40c;
            case 0x18F410u: goto label_18f410;
            case 0x18F414u: goto label_18f414;
            case 0x18F418u: goto label_18f418;
            case 0x18F41Cu: goto label_18f41c;
            case 0x18F420u: goto label_18f420;
            case 0x18F424u: goto label_18f424;
            case 0x18F428u: goto label_18f428;
            case 0x18F42Cu: goto label_18f42c;
            case 0x18F430u: goto label_18f430;
            case 0x18F434u: goto label_18f434;
            case 0x18F438u: goto label_18f438;
            case 0x18F43Cu: goto label_18f43c;
            case 0x18F440u: goto label_18f440;
            case 0x18F444u: goto label_18f444;
            case 0x18F448u: goto label_18f448;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            case 0x18F458u: goto label_18f458;
            case 0x18F45Cu: goto label_18f45c;
            case 0x18F460u: goto label_18f460;
            case 0x18F464u: goto label_18f464;
            case 0x18F468u: goto label_18f468;
            case 0x18F46Cu: goto label_18f46c;
            case 0x18F470u: goto label_18f470;
            case 0x18F474u: goto label_18f474;
            case 0x18F478u: goto label_18f478;
            case 0x18F47Cu: goto label_18f47c;
            case 0x18F480u: goto label_18f480;
            case 0x18F484u: goto label_18f484;
            case 0x18F488u: goto label_18f488;
            case 0x18F48Cu: goto label_18f48c;
            case 0x18F490u: goto label_18f490;
            case 0x18F494u: goto label_18f494;
            case 0x18F498u: goto label_18f498;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4A0u: goto label_18f4a0;
            case 0x18F4A4u: goto label_18f4a4;
            case 0x18F4A8u: goto label_18f4a8;
            case 0x18F4ACu: goto label_18f4ac;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4B8u: goto label_18f4b8;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F4C0u: goto label_18f4c0;
            case 0x18F4C4u: goto label_18f4c4;
            case 0x18F4C8u: goto label_18f4c8;
            case 0x18F4CCu: goto label_18f4cc;
            case 0x18F4D0u: goto label_18f4d0;
            case 0x18F4D4u: goto label_18f4d4;
            case 0x18F4D8u: goto label_18f4d8;
            case 0x18F4DCu: goto label_18f4dc;
            case 0x18F4E0u: goto label_18f4e0;
            case 0x18F4E4u: goto label_18f4e4;
            case 0x18F4E8u: goto label_18f4e8;
            case 0x18F4ECu: goto label_18f4ec;
            case 0x18F4F0u: goto label_18f4f0;
            case 0x18F4F4u: goto label_18f4f4;
            case 0x18F4F8u: goto label_18f4f8;
            case 0x18F4FCu: goto label_18f4fc;
            case 0x18F500u: goto label_18f500;
            case 0x18F504u: goto label_18f504;
            case 0x18F508u: goto label_18f508;
            case 0x18F50Cu: goto label_18f50c;
            case 0x18F510u: goto label_18f510;
            case 0x18F514u: goto label_18f514;
            case 0x18F518u: goto label_18f518;
            case 0x18F51Cu: goto label_18f51c;
            case 0x18F520u: goto label_18f520;
            case 0x18F524u: goto label_18f524;
            case 0x18F528u: goto label_18f528;
            case 0x18F52Cu: goto label_18f52c;
            case 0x18F530u: goto label_18f530;
            case 0x18F534u: goto label_18f534;
            case 0x18F538u: goto label_18f538;
            case 0x18F53Cu: goto label_18f53c;
            case 0x18F540u: goto label_18f540;
            case 0x18F544u: goto label_18f544;
            case 0x18F548u: goto label_18f548;
            case 0x18F54Cu: goto label_18f54c;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F558u: goto label_18f558;
            case 0x18F55Cu: goto label_18f55c;
            case 0x18F560u: goto label_18f560;
            case 0x18F564u: goto label_18f564;
            case 0x18F568u: goto label_18f568;
            case 0x18F56Cu: goto label_18f56c;
            case 0x18F570u: goto label_18f570;
            case 0x18F574u: goto label_18f574;
            case 0x18F578u: goto label_18f578;
            case 0x18F57Cu: goto label_18f57c;
            case 0x18F580u: goto label_18f580;
            case 0x18F584u: goto label_18f584;
            case 0x18F588u: goto label_18f588;
            case 0x18F58Cu: goto label_18f58c;
            case 0x18F590u: goto label_18f590;
            case 0x18F594u: goto label_18f594;
            case 0x18F598u: goto label_18f598;
            case 0x18F59Cu: goto label_18f59c;
            case 0x18F5A0u: goto label_18f5a0;
            case 0x18F5A4u: goto label_18f5a4;
            case 0x18F5A8u: goto label_18f5a8;
            case 0x18F5ACu: goto label_18f5ac;
            case 0x18F5B0u: goto label_18f5b0;
            case 0x18F5B4u: goto label_18f5b4;
            case 0x18F5B8u: goto label_18f5b8;
            case 0x18F5BCu: goto label_18f5bc;
            case 0x18F5C0u: goto label_18f5c0;
            case 0x18F5C4u: goto label_18f5c4;
            case 0x18F5C8u: goto label_18f5c8;
            case 0x18F5CCu: goto label_18f5cc;
            case 0x18F5D0u: goto label_18f5d0;
            case 0x18F5D4u: goto label_18f5d4;
            case 0x18F5D8u: goto label_18f5d8;
            case 0x18F5DCu: goto label_18f5dc;
            case 0x18F5E0u: goto label_18f5e0;
            case 0x18F5E4u: goto label_18f5e4;
            case 0x18F5E8u: goto label_18f5e8;
            case 0x18F5ECu: goto label_18f5ec;
            case 0x18F5F0u: goto label_18f5f0;
            case 0x18F5F4u: goto label_18f5f4;
            case 0x18F5F8u: goto label_18f5f8;
            case 0x18F5FCu: goto label_18f5fc;
            case 0x18F600u: goto label_18f600;
            case 0x18F604u: goto label_18f604;
            case 0x18F608u: goto label_18f608;
            case 0x18F60Cu: goto label_18f60c;
            case 0x18F610u: goto label_18f610;
            case 0x18F614u: goto label_18f614;
            case 0x18F618u: goto label_18f618;
            case 0x18F61Cu: goto label_18f61c;
            case 0x18F620u: goto label_18f620;
            case 0x18F624u: goto label_18f624;
            case 0x18F628u: goto label_18f628;
            case 0x18F62Cu: goto label_18f62c;
            case 0x18F630u: goto label_18f630;
            case 0x18F634u: goto label_18f634;
            case 0x18F638u: goto label_18f638;
            case 0x18F63Cu: goto label_18f63c;
            case 0x18F640u: goto label_18f640;
            case 0x18F644u: goto label_18f644;
            case 0x18F648u: goto label_18f648;
            case 0x18F64Cu: goto label_18f64c;
            case 0x18F650u: goto label_18f650;
            case 0x18F654u: goto label_18f654;
            case 0x18F658u: goto label_18f658;
            case 0x18F65Cu: goto label_18f65c;
            case 0x18F660u: goto label_18f660;
            case 0x18F664u: goto label_18f664;
            case 0x18F668u: goto label_18f668;
            case 0x18F66Cu: goto label_18f66c;
            case 0x18F670u: goto label_18f670;
            case 0x18F674u: goto label_18f674;
            case 0x18F678u: goto label_18f678;
            case 0x18F67Cu: goto label_18f67c;
            case 0x18F680u: goto label_18f680;
            case 0x18F684u: goto label_18f684;
            case 0x18F688u: goto label_18f688;
            case 0x18F68Cu: goto label_18f68c;
            case 0x18F690u: goto label_18f690;
            case 0x18F694u: goto label_18f694;
            case 0x18F698u: goto label_18f698;
            case 0x18F69Cu: goto label_18f69c;
            case 0x18F6A0u: goto label_18f6a0;
            case 0x18F6A4u: goto label_18f6a4;
            case 0x18F6A8u: goto label_18f6a8;
            case 0x18F6ACu: goto label_18f6ac;
            case 0x18F6B0u: goto label_18f6b0;
            case 0x18F6B4u: goto label_18f6b4;
            case 0x18F6B8u: goto label_18f6b8;
            case 0x18F6BCu: goto label_18f6bc;
            case 0x18F6C0u: goto label_18f6c0;
            case 0x18F6C4u: goto label_18f6c4;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F6D0u: goto label_18f6d0;
            case 0x18F6D4u: goto label_18f6d4;
            case 0x18F6D8u: goto label_18f6d8;
            case 0x18F6DCu: goto label_18f6dc;
            case 0x18F6E0u: goto label_18f6e0;
            case 0x18F6E4u: goto label_18f6e4;
            case 0x18F6E8u: goto label_18f6e8;
            case 0x18F6ECu: goto label_18f6ec;
            case 0x18F6F0u: goto label_18f6f0;
            case 0x18F6F4u: goto label_18f6f4;
            case 0x18F6F8u: goto label_18f6f8;
            case 0x18F6FCu: goto label_18f6fc;
            case 0x18F700u: goto label_18f700;
            case 0x18F704u: goto label_18f704;
            case 0x18F708u: goto label_18f708;
            case 0x18F70Cu: goto label_18f70c;
            case 0x18F710u: goto label_18f710;
            case 0x18F714u: goto label_18f714;
            case 0x18F718u: goto label_18f718;
            case 0x18F71Cu: goto label_18f71c;
            case 0x18F720u: goto label_18f720;
            case 0x18F724u: goto label_18f724;
            case 0x18F728u: goto label_18f728;
            case 0x18F72Cu: goto label_18f72c;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F738u: goto label_18f738;
            case 0x18F73Cu: goto label_18f73c;
            case 0x18F740u: goto label_18f740;
            case 0x18F744u: goto label_18f744;
            case 0x18F748u: goto label_18f748;
            case 0x18F74Cu: goto label_18f74c;
            case 0x18F750u: goto label_18f750;
            case 0x18F754u: goto label_18f754;
            case 0x18F758u: goto label_18f758;
            case 0x18F75Cu: goto label_18f75c;
            case 0x18F760u: goto label_18f760;
            case 0x18F764u: goto label_18f764;
            case 0x18F768u: goto label_18f768;
            case 0x18F76Cu: goto label_18f76c;
            case 0x18F770u: goto label_18f770;
            case 0x18F774u: goto label_18f774;
            case 0x18F778u: goto label_18f778;
            case 0x18F77Cu: goto label_18f77c;
            case 0x18F780u: goto label_18f780;
            case 0x18F784u: goto label_18f784;
            case 0x18F788u: goto label_18f788;
            case 0x18F78Cu: goto label_18f78c;
            case 0x18F790u: goto label_18f790;
            case 0x18F794u: goto label_18f794;
            case 0x18F798u: goto label_18f798;
            case 0x18F79Cu: goto label_18f79c;
            case 0x18F7A0u: goto label_18f7a0;
            case 0x18F7A4u: goto label_18f7a4;
            case 0x18F7A8u: goto label_18f7a8;
            case 0x18F7ACu: goto label_18f7ac;
            case 0x18F7B0u: goto label_18f7b0;
            case 0x18F7B4u: goto label_18f7b4;
            case 0x18F7B8u: goto label_18f7b8;
            case 0x18F7BCu: goto label_18f7bc;
            case 0x18F7C0u: goto label_18f7c0;
            case 0x18F7C4u: goto label_18f7c4;
            case 0x18F7C8u: goto label_18f7c8;
            case 0x18F7CCu: goto label_18f7cc;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F7D4u: goto label_18f7d4;
            case 0x18F7D8u: goto label_18f7d8;
            case 0x18F7DCu: goto label_18f7dc;
            case 0x18F7E0u: goto label_18f7e0;
            case 0x18F7E4u: goto label_18f7e4;
            case 0x18F7E8u: goto label_18f7e8;
            case 0x18F7ECu: goto label_18f7ec;
            case 0x18F7F0u: goto label_18f7f0;
            case 0x18F7F4u: goto label_18f7f4;
            case 0x18F7F8u: goto label_18f7f8;
            case 0x18F7FCu: goto label_18f7fc;
            case 0x18F800u: goto label_18f800;
            case 0x18F804u: goto label_18f804;
            case 0x18F808u: goto label_18f808;
            case 0x18F80Cu: goto label_18f80c;
            case 0x18F810u: goto label_18f810;
            case 0x18F814u: goto label_18f814;
            case 0x18F818u: goto label_18f818;
            case 0x18F81Cu: goto label_18f81c;
            case 0x18F820u: goto label_18f820;
            case 0x18F824u: goto label_18f824;
            case 0x18F828u: goto label_18f828;
            case 0x18F82Cu: goto label_18f82c;
            case 0x18F830u: goto label_18f830;
            case 0x18F834u: goto label_18f834;
            case 0x18F838u: goto label_18f838;
            case 0x18F83Cu: goto label_18f83c;
            case 0x18F840u: goto label_18f840;
            case 0x18F844u: goto label_18f844;
            case 0x18F848u: goto label_18f848;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F850u: goto label_18f850;
            case 0x18F854u: goto label_18f854;
            case 0x18F858u: goto label_18f858;
            case 0x18F85Cu: goto label_18f85c;
            case 0x18F860u: goto label_18f860;
            case 0x18F864u: goto label_18f864;
            case 0x18F868u: goto label_18f868;
            case 0x18F86Cu: goto label_18f86c;
            case 0x18F870u: goto label_18f870;
            case 0x18F874u: goto label_18f874;
            case 0x18F878u: goto label_18f878;
            case 0x18F87Cu: goto label_18f87c;
            case 0x18F880u: goto label_18f880;
            case 0x18F884u: goto label_18f884;
            case 0x18F888u: goto label_18f888;
            case 0x18F88Cu: goto label_18f88c;
            case 0x18F890u: goto label_18f890;
            case 0x18F894u: goto label_18f894;
            case 0x18F898u: goto label_18f898;
            case 0x18F89Cu: goto label_18f89c;
            case 0x18F8A0u: goto label_18f8a0;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8A8u: goto label_18f8a8;
            case 0x18F8ACu: goto label_18f8ac;
            case 0x18F8B0u: goto label_18f8b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F0B4u; }
            if (ctx->pc != 0x18F0B4u) { return; }
        }
    }
    ctx->pc = 0x18F0B4u;
label_18f0b4:
    // 0x18f0b4: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_18f0b8:
    if (ctx->pc == 0x18F0B8u) {
        ctx->pc = 0x18F0BCu;
        goto label_18f0bc;
    }
    ctx->pc = 0x18F0B4u;
    {
        const bool branch_taken_0x18f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0b4) {
            ctx->pc = 0x18F8A0u;
            goto label_18f8a0;
        }
    }
    ctx->pc = 0x18F0BCu;
label_18f0bc:
    // 0x18f0bc: 0x0  nop
    ctx->pc = 0x18f0bcu;
    // NOP
label_18f0c0:
    // 0x18f0c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_18f0c4:
    // 0x18f0c4: 0x1c4001ee  bgtz        $v0, . + 4 + (0x1EE << 2)
label_18f0c8:
    if (ctx->pc == 0x18F0C8u) {
        ctx->pc = 0x18F0CCu;
        goto label_18f0cc;
    }
    ctx->pc = 0x18F0C4u;
    {
        const bool branch_taken_0x18f0c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x18f0c4) {
            ctx->pc = 0x18F880u;
            goto label_18f880;
        }
    }
    ctx->pc = 0x18F0CCu;
label_18f0cc:
    // 0x18f0cc: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x18f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_18f0d0:
    // 0x18f0d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f0d4:
    // 0x18f0d4: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x18f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_18f0d8:
    // 0x18f0d8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x18f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_18f0dc:
    // 0x18f0dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18f0e0:
    // 0x18f0e0: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_18f0e4:
    // 0x18f0e4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_18f0e8:
    // 0x18f0e8: 0xc0604b0  jal         func_1812C0
label_18f0ec:
    if (ctx->pc == 0x18F0ECu) {
        ctx->pc = 0x18F0ECu;
            // 0x18f0ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x18F0F0u;
        goto label_18f0f0;
    }
    ctx->pc = 0x18F0E8u;
    SET_GPR_U32(ctx, 31, 0x18F0F0u);
    ctx->pc = 0x18F0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F0E8u;
            // 0x18f0ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F0F0u; }
        if (ctx->pc != 0x18F0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F0F0u; }
        if (ctx->pc != 0x18F0F0u) { return; }
    }
    ctx->pc = 0x18F0F0u;
label_18f0f0:
    // 0x18f0f0: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x18f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f0f4:
    // 0x18f0f4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x18f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_18f0f8:
    // 0x18f0f8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x18f0f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_18f0fc:
    // 0x18f0fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f100:
    // 0x18f100: 0x0  nop
    ctx->pc = 0x18f100u;
    // NOP
label_18f104:
    // 0x18f104: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18f108:
    // 0x18f108: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x18f108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_18f10c:
    // 0x18f10c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x18f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f110:
    // 0x18f110: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18f110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18f114:
    // 0x18f114: 0xc050ba4  jal         func_142E90
label_18f118:
    if (ctx->pc == 0x18F118u) {
        ctx->pc = 0x18F118u;
            // 0x18f118: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x18F11Cu;
        goto label_18f11c;
    }
    ctx->pc = 0x18F114u;
    SET_GPR_U32(ctx, 31, 0x18F11Cu);
    ctx->pc = 0x18F118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F114u;
            // 0x18f118: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F11Cu; }
        if (ctx->pc != 0x18F11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F11Cu; }
        if (ctx->pc != 0x18F11Cu) { return; }
    }
    ctx->pc = 0x18F11Cu;
label_18f11c:
    // 0x18f11c: 0xc040d72  jal         func_1035C8
label_18f120:
    if (ctx->pc == 0x18F120u) {
        ctx->pc = 0x18F120u;
            // 0x18f120: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x18F124u;
        goto label_18f124;
    }
    ctx->pc = 0x18F11Cu;
    SET_GPR_U32(ctx, 31, 0x18F124u);
    ctx->pc = 0x18F120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F11Cu;
            // 0x18f120: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F124u; }
        if (ctx->pc != 0x18F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F124u; }
        if (ctx->pc != 0x18F124u) { return; }
    }
    ctx->pc = 0x18F124u;
label_18f124:
    // 0x18f124: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x18f124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_18f128:
    // 0x18f128: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x18f128u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_18f12c:
    // 0x18f12c: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x18f12cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_18f130:
    // 0x18f130: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18f130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_18f134:
    // 0x18f134: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18f134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_18f138:
    // 0x18f138: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x18f138u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_18f13c:
    // 0x18f13c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18f13cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_18f140:
    // 0x18f140: 0xc040880  jal         func_102200
label_18f144:
    if (ctx->pc == 0x18F144u) {
        ctx->pc = 0x18F144u;
            // 0x18f144: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F148u;
        goto label_18f148;
    }
    ctx->pc = 0x18F140u;
    SET_GPR_U32(ctx, 31, 0x18F148u);
    ctx->pc = 0x18F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F140u;
            // 0x18f144: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F148u; }
        if (ctx->pc != 0x18F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F148u; }
        if (ctx->pc != 0x18F148u) { return; }
    }
    ctx->pc = 0x18F148u;
label_18f148:
    // 0x18f148: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_18f14c:
    // 0x18f14c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x18f14cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_18f150:
    // 0x18f150: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x18f150u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_18f154:
    // 0x18f154: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_18f158:
    // 0x18f158: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18f158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_18f15c:
    // 0x18f15c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x18f15cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_18f160:
    // 0x18f160: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18f160u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_18f164:
    // 0x18f164: 0xc040866  jal         func_102198
label_18f168:
    if (ctx->pc == 0x18F168u) {
        ctx->pc = 0x18F168u;
            // 0x18f168: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F16Cu;
        goto label_18f16c;
    }
    ctx->pc = 0x18F164u;
    SET_GPR_U32(ctx, 31, 0x18F16Cu);
    ctx->pc = 0x18F168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F164u;
            // 0x18f168: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F16Cu; }
        if (ctx->pc != 0x18F16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F16Cu; }
        if (ctx->pc != 0x18F16Cu) { return; }
    }
    ctx->pc = 0x18F16Cu;
label_18f16c:
    // 0x18f16c: 0xc040a74  jal         func_1029D0
label_18f170:
    if (ctx->pc == 0x18F170u) {
        ctx->pc = 0x18F170u;
            // 0x18f170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F174u;
        goto label_18f174;
    }
    ctx->pc = 0x18F16Cu;
    SET_GPR_U32(ctx, 31, 0x18F174u);
    ctx->pc = 0x18F170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F16Cu;
            // 0x18f170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F174u; }
        if (ctx->pc != 0x18F174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F174u; }
        if (ctx->pc != 0x18F174u) { return; }
    }
    ctx->pc = 0x18F174u;
label_18f174:
    // 0x18f174: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x18f174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f178:
    // 0x18f178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18f17c:
    // 0x18f17c: 0xc050ba4  jal         func_142E90
label_18f180:
    if (ctx->pc == 0x18F180u) {
        ctx->pc = 0x18F180u;
            // 0x18f180: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x18F184u;
        goto label_18f184;
    }
    ctx->pc = 0x18F17Cu;
    SET_GPR_U32(ctx, 31, 0x18F184u);
    ctx->pc = 0x18F180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F17Cu;
            // 0x18f180: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F184u; }
        if (ctx->pc != 0x18F184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F184u; }
        if (ctx->pc != 0x18F184u) { return; }
    }
    ctx->pc = 0x18F184u;
label_18f184:
    // 0x18f184: 0xc040d72  jal         func_1035C8
label_18f188:
    if (ctx->pc == 0x18F188u) {
        ctx->pc = 0x18F188u;
            // 0x18f188: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x18F18Cu;
        goto label_18f18c;
    }
    ctx->pc = 0x18F184u;
    SET_GPR_U32(ctx, 31, 0x18F18Cu);
    ctx->pc = 0x18F188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F184u;
            // 0x18f188: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F18Cu; }
        if (ctx->pc != 0x18F18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F18Cu; }
        if (ctx->pc != 0x18F18Cu) { return; }
    }
    ctx->pc = 0x18F18Cu;
label_18f18c:
    // 0x18f18c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x18f18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_18f190:
    // 0x18f190: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x18f190u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_18f194:
    // 0x18f194: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x18f194u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_18f198:
    // 0x18f198: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_18f19c:
    // 0x18f19c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18f19cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_18f1a0:
    // 0x18f1a0: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x18f1a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_18f1a4:
    // 0x18f1a4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18f1a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_18f1a8:
    // 0x18f1a8: 0xc040880  jal         func_102200
label_18f1ac:
    if (ctx->pc == 0x18F1ACu) {
        ctx->pc = 0x18F1ACu;
            // 0x18f1ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F1B0u;
        goto label_18f1b0;
    }
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1A8u;
            // 0x18f1ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1B0u; }
        if (ctx->pc != 0x18F1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1B0u; }
        if (ctx->pc != 0x18F1B0u) { return; }
    }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x18f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_18f1b4:
    // 0x18f1b4: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x18f1b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_18f1b8:
    // 0x18f1b8: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x18f1b8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_18f1bc:
    // 0x18f1bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_18f1c0:
    // 0x18f1c0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18f1c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_18f1c4:
    // 0x18f1c4: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x18f1c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_18f1c8:
    // 0x18f1c8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18f1c8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_18f1cc:
    // 0x18f1cc: 0xc040866  jal         func_102198
label_18f1d0:
    if (ctx->pc == 0x18F1D0u) {
        ctx->pc = 0x18F1D0u;
            // 0x18f1d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F1D4u;
        goto label_18f1d4;
    }
    ctx->pc = 0x18F1CCu;
    SET_GPR_U32(ctx, 31, 0x18F1D4u);
    ctx->pc = 0x18F1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1CCu;
            // 0x18f1d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D4u; }
        if (ctx->pc != 0x18F1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1D4u; }
        if (ctx->pc != 0x18F1D4u) { return; }
    }
    ctx->pc = 0x18F1D4u;
label_18f1d4:
    // 0x18f1d4: 0xc040a74  jal         func_1029D0
label_18f1d8:
    if (ctx->pc == 0x18F1D8u) {
        ctx->pc = 0x18F1D8u;
            // 0x18f1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F1DCu;
        goto label_18f1dc;
    }
    ctx->pc = 0x18F1D4u;
    SET_GPR_U32(ctx, 31, 0x18F1DCu);
    ctx->pc = 0x18F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F1D4u;
            // 0x18f1d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1DCu; }
        if (ctx->pc != 0x18F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F1DCu; }
        if (ctx->pc != 0x18F1DCu) { return; }
    }
    ctx->pc = 0x18F1DCu;
label_18f1dc:
    // 0x18f1dc: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x18f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f1e0:
    // 0x18f1e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f1e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18f1e4:
    // 0x18f1e4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x18f1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_18f1e8:
    // 0x18f1e8: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x18f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_18f1ec:
    // 0x18f1ec: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x18f1ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_18f1f0:
    // 0x18f1f0: 0x142001ab  bnez        $at, . + 4 + (0x1AB << 2)
label_18f1f4:
    if (ctx->pc == 0x18F1F4u) {
        ctx->pc = 0x18F1F8u;
        goto label_18f1f8;
    }
    ctx->pc = 0x18F1F0u;
    {
        const bool branch_taken_0x18f1f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f1f0) {
            ctx->pc = 0x18F8A0u;
            goto label_18f8a0;
        }
    }
    ctx->pc = 0x18F1F8u;
label_18f1f8:
    // 0x18f1f8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x18f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f1fc:
    // 0x18f1fc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x18f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_18f200:
    // 0x18f200: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x18f200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f204:
    // 0x18f204: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18f204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_18f208:
    // 0x18f208: 0xc05d080  jal         func_174200
label_18f20c:
    if (ctx->pc == 0x18F20Cu) {
        ctx->pc = 0x18F20Cu;
            // 0x18f20c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x18F210u;
        goto label_18f210;
    }
    ctx->pc = 0x18F208u;
    SET_GPR_U32(ctx, 31, 0x18F210u);
    ctx->pc = 0x18F20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F208u;
            // 0x18f20c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F210u; }
        if (ctx->pc != 0x18F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F210u; }
        if (ctx->pc != 0x18F210u) { return; }
    }
    ctx->pc = 0x18F210u;
label_18f210:
    // 0x18f210: 0xc050bb4  jal         func_142ED0
label_18f214:
    if (ctx->pc == 0x18F214u) {
        ctx->pc = 0x18F218u;
        goto label_18f218;
    }
    ctx->pc = 0x18F210u;
    SET_GPR_U32(ctx, 31, 0x18F218u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F218u; }
        if (ctx->pc != 0x18F218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F218u; }
        if (ctx->pc != 0x18F218u) { return; }
    }
    ctx->pc = 0x18F218u;
label_18f218:
    // 0x18f218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f218u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_18f21c:
    // 0x18f21c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18f220:
    if (ctx->pc == 0x18F220u) {
        ctx->pc = 0x18F224u;
        goto label_18f224;
    }
    ctx->pc = 0x18F21Cu;
    {
        const bool branch_taken_0x18f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f21c) {
            ctx->pc = 0x18F240u;
            goto label_18f240;
        }
    }
    ctx->pc = 0x18F224u;
label_18f224:
    // 0x18f224: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x18f224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f228:
    // 0x18f228: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_18f22c:
    // 0x18f22c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x18f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f230:
    // 0x18f230: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18f230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_18f234:
    // 0x18f234: 0xc05d080  jal         func_174200
label_18f238:
    if (ctx->pc == 0x18F238u) {
        ctx->pc = 0x18F238u;
            // 0x18f238: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x18F23Cu;
        goto label_18f23c;
    }
    ctx->pc = 0x18F234u;
    SET_GPR_U32(ctx, 31, 0x18F23Cu);
    ctx->pc = 0x18F238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F234u;
            // 0x18f238: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F23Cu; }
        if (ctx->pc != 0x18F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F23Cu; }
        if (ctx->pc != 0x18F23Cu) { return; }
    }
    ctx->pc = 0x18F23Cu;
label_18f23c:
    // 0x18f23c: 0x0  nop
    ctx->pc = 0x18f23cu;
    // NOP
label_18f240:
    // 0x18f240: 0xc050bb4  jal         func_142ED0
label_18f244:
    if (ctx->pc == 0x18F244u) {
        ctx->pc = 0x18F248u;
        goto label_18f248;
    }
    ctx->pc = 0x18F240u;
    SET_GPR_U32(ctx, 31, 0x18F248u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F248u; }
        if (ctx->pc != 0x18F248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F248u; }
        if (ctx->pc != 0x18F248u) { return; }
    }
    ctx->pc = 0x18F248u;
label_18f248:
    // 0x18f248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18f248u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_18f24c:
    // 0x18f24c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_18f250:
    if (ctx->pc == 0x18F250u) {
        ctx->pc = 0x18F254u;
        goto label_18f254;
    }
    ctx->pc = 0x18F24Cu;
    {
        const bool branch_taken_0x18f24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f24c) {
            ctx->pc = 0x18F270u;
            goto label_18f270;
        }
    }
    ctx->pc = 0x18F254u;
label_18f254:
    // 0x18f254: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x18f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f258:
    // 0x18f258: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x18f258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_18f25c:
    // 0x18f25c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x18f25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f260:
    // 0x18f260: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x18f260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_18f264:
    // 0x18f264: 0xc05d080  jal         func_174200
label_18f268:
    if (ctx->pc == 0x18F268u) {
        ctx->pc = 0x18F268u;
            // 0x18f268: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x18F26Cu;
        goto label_18f26c;
    }
    ctx->pc = 0x18F264u;
    SET_GPR_U32(ctx, 31, 0x18F26Cu);
    ctx->pc = 0x18F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F264u;
            // 0x18f268: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F26Cu; }
        if (ctx->pc != 0x18F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F26Cu; }
        if (ctx->pc != 0x18F26Cu) { return; }
    }
    ctx->pc = 0x18F26Cu;
label_18f26c:
    // 0x18f26c: 0x0  nop
    ctx->pc = 0x18f26cu;
    // NOP
label_18f270:
    // 0x18f270: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x18f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_18f274:
    // 0x18f274: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f278:
    // 0x18f278: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f27c:
    // 0x18f27c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x18f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f280:
    // 0x18f280: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18f280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f284:
    // 0x18f284: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f288:
    // 0x18f288: 0x0  nop
    ctx->pc = 0x18f288u;
    // NOP
label_18f28c:
    // 0x18f28c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x18f28cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18f290:
    // 0x18f290: 0xc053708  jal         func_14DC20
label_18f294:
    if (ctx->pc == 0x18F294u) {
        ctx->pc = 0x18F294u;
            // 0x18f294: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x18F298u;
        goto label_18f298;
    }
    ctx->pc = 0x18F290u;
    SET_GPR_U32(ctx, 31, 0x18F298u);
    ctx->pc = 0x18F294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F290u;
            // 0x18f294: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F298u; }
        if (ctx->pc != 0x18F298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F298u; }
        if (ctx->pc != 0x18F298u) { return; }
    }
    ctx->pc = 0x18F298u;
label_18f298:
    // 0x18f298: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18f298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f29c:
    // 0x18f29c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x18f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_18f2a0:
    // 0x18f2a0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x18f2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f2a4:
    // 0x18f2a4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f2a8:
    // 0x18f2a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f2ac:
    // 0x18f2ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f2b0:
    // 0x18f2b0: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x18f2b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18f2b4:
    // 0x18f2b4: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x18f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_18f2b8:
    // 0x18f2b8: 0x2445fffb  addiu       $a1, $v0, -0x5
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_18f2bc:
    // 0x18f2bc: 0xc053708  jal         func_14DC20
label_18f2c0:
    if (ctx->pc == 0x18F2C0u) {
        ctx->pc = 0x18F2C0u;
            // 0x18f2c0: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x18F2C4u;
        goto label_18f2c4;
    }
    ctx->pc = 0x18F2BCu;
    SET_GPR_U32(ctx, 31, 0x18F2C4u);
    ctx->pc = 0x18F2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2BCu;
            // 0x18f2c0: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2C4u; }
        if (ctx->pc != 0x18F2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2C4u; }
        if (ctx->pc != 0x18F2C4u) { return; }
    }
    ctx->pc = 0x18F2C4u;
label_18f2c4:
    // 0x18f2c4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f2c8:
    // 0x18f2c8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x18f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_18f2cc:
    // 0x18f2cc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x18f2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f2d0:
    // 0x18f2d0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f2d4:
    // 0x18f2d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f2d8:
    // 0x18f2d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f2dc:
    // 0x18f2dc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x18f2dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18f2e0:
    // 0x18f2e0: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x18f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_18f2e4:
    // 0x18f2e4: 0x2445fffb  addiu       $a1, $v0, -0x5
    ctx->pc = 0x18f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_18f2e8:
    // 0x18f2e8: 0xc053708  jal         func_14DC20
label_18f2ec:
    if (ctx->pc == 0x18F2ECu) {
        ctx->pc = 0x18F2ECu;
            // 0x18f2ec: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x18F2F0u;
        goto label_18f2f0;
    }
    ctx->pc = 0x18F2E8u;
    SET_GPR_U32(ctx, 31, 0x18F2F0u);
    ctx->pc = 0x18F2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2E8u;
            // 0x18f2ec: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2F0u; }
        if (ctx->pc != 0x18F2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F2F0u; }
        if (ctx->pc != 0x18F2F0u) { return; }
    }
    ctx->pc = 0x18F2F0u;
label_18f2f0:
    // 0x18f2f0: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f2f4:
    // 0x18f2f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x18f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_18f2f8:
    // 0x18f2f8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x18f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f2fc:
    // 0x18f2fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f300:
    // 0x18f300: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f304:
    // 0x18f304: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f308:
    // 0x18f308: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x18f308u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18f30c:
    // 0x18f30c: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x18f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_18f310:
    // 0x18f310: 0x2445fff6  addiu       $a1, $v0, -0xA
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_18f314:
    // 0x18f314: 0xc053708  jal         func_14DC20
label_18f318:
    if (ctx->pc == 0x18F318u) {
        ctx->pc = 0x18F318u;
            // 0x18f318: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x18F31Cu;
        goto label_18f31c;
    }
    ctx->pc = 0x18F314u;
    SET_GPR_U32(ctx, 31, 0x18F31Cu);
    ctx->pc = 0x18F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F314u;
            // 0x18f318: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F31Cu; }
        if (ctx->pc != 0x18F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F31Cu; }
        if (ctx->pc != 0x18F31Cu) { return; }
    }
    ctx->pc = 0x18F31Cu;
label_18f31c:
    // 0x18f31c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x18f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18f320:
    // 0x18f320: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x18f320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_18f324:
    // 0x18f324: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x18f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18f328:
    // 0x18f328: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f32c:
    // 0x18f32c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18f32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18f330:
    // 0x18f330: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f334:
    // 0x18f334: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x18f334u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_18f338:
    // 0x18f338: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x18f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_18f33c:
    // 0x18f33c: 0x2445fff6  addiu       $a1, $v0, -0xA
    ctx->pc = 0x18f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_18f340:
    // 0x18f340: 0xc053708  jal         func_14DC20
label_18f344:
    if (ctx->pc == 0x18F344u) {
        ctx->pc = 0x18F344u;
            // 0x18f344: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x18F348u;
        goto label_18f348;
    }
    ctx->pc = 0x18F340u;
    SET_GPR_U32(ctx, 31, 0x18F348u);
    ctx->pc = 0x18F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F340u;
            // 0x18f344: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F348u; }
        if (ctx->pc != 0x18F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F348u; }
        if (ctx->pc != 0x18F348u) { return; }
    }
    ctx->pc = 0x18F348u;
label_18f348:
    // 0x18f348: 0xc050bb4  jal         func_142ED0
label_18f34c:
    if (ctx->pc == 0x18F34Cu) {
        ctx->pc = 0x18F350u;
        goto label_18f350;
    }
    ctx->pc = 0x18F348u;
    SET_GPR_U32(ctx, 31, 0x18F350u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F350u; }
        if (ctx->pc != 0x18F350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F350u; }
        if (ctx->pc != 0x18F350u) { return; }
    }
    ctx->pc = 0x18F350u;
label_18f350:
    // 0x18f350: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f354:
    // 0x18f354: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f358:
    // 0x18f358: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f358u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f35c:
    // 0x18f35c: 0x0  nop
    ctx->pc = 0x18f35cu;
    // NOP
label_18f360:
    // 0x18f360: 0x0  nop
    ctx->pc = 0x18f360u;
    // NOP
label_18f364:
    // 0x18f364: 0x1010  mfhi        $v0
    ctx->pc = 0x18f364u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f368:
    // 0x18f368: 0xc050bb4  jal         func_142ED0
label_18f36c:
    if (ctx->pc == 0x18F36Cu) {
        ctx->pc = 0x18F36Cu;
            // 0x18f36c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F370u;
        goto label_18f370;
    }
    ctx->pc = 0x18F368u;
    SET_GPR_U32(ctx, 31, 0x18F370u);
    ctx->pc = 0x18F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F368u;
            // 0x18f36c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F370u; }
        if (ctx->pc != 0x18F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F370u; }
        if (ctx->pc != 0x18F370u) { return; }
    }
    ctx->pc = 0x18F370u;
label_18f370:
    // 0x18f370: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f374:
    // 0x18f374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f378:
    // 0x18f378: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f378u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f37c:
    // 0x18f37c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_18f380:
    // 0x18f380: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f384:
    // 0x18f384: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f388:
    // 0x18f388: 0x1010  mfhi        $v0
    ctx->pc = 0x18f388u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f38c:
    // 0x18f38c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f38cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f390:
    // 0x18f390: 0xc053740  jal         func_14DD00
label_18f394:
    if (ctx->pc == 0x18F394u) {
        ctx->pc = 0x18F394u;
            // 0x18f394: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F398u;
        goto label_18f398;
    }
    ctx->pc = 0x18F390u;
    SET_GPR_U32(ctx, 31, 0x18F398u);
    ctx->pc = 0x18F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F390u;
            // 0x18f394: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F398u; }
        if (ctx->pc != 0x18F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F398u; }
        if (ctx->pc != 0x18F398u) { return; }
    }
    ctx->pc = 0x18F398u;
label_18f398:
    // 0x18f398: 0xc050bb4  jal         func_142ED0
label_18f39c:
    if (ctx->pc == 0x18F39Cu) {
        ctx->pc = 0x18F3A0u;
        goto label_18f3a0;
    }
    ctx->pc = 0x18F398u;
    SET_GPR_U32(ctx, 31, 0x18F3A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3A0u; }
        if (ctx->pc != 0x18F3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3A0u; }
        if (ctx->pc != 0x18F3A0u) { return; }
    }
    ctx->pc = 0x18F3A0u;
label_18f3a0:
    // 0x18f3a0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f3a4:
    // 0x18f3a4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f3a8:
    // 0x18f3a8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f3a8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f3ac:
    // 0x18f3ac: 0x0  nop
    ctx->pc = 0x18f3acu;
    // NOP
label_18f3b0:
    // 0x18f3b0: 0x0  nop
    ctx->pc = 0x18f3b0u;
    // NOP
label_18f3b4:
    // 0x18f3b4: 0x1010  mfhi        $v0
    ctx->pc = 0x18f3b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f3b8:
    // 0x18f3b8: 0xc050bb4  jal         func_142ED0
label_18f3bc:
    if (ctx->pc == 0x18F3BCu) {
        ctx->pc = 0x18F3BCu;
            // 0x18f3bc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F3C0u;
        goto label_18f3c0;
    }
    ctx->pc = 0x18F3B8u;
    SET_GPR_U32(ctx, 31, 0x18F3C0u);
    ctx->pc = 0x18F3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3B8u;
            // 0x18f3bc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3C0u; }
        if (ctx->pc != 0x18F3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3C0u; }
        if (ctx->pc != 0x18F3C0u) { return; }
    }
    ctx->pc = 0x18F3C0u;
label_18f3c0:
    // 0x18f3c0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f3c4:
    // 0x18f3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f3c8:
    // 0x18f3c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f3c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f3cc:
    // 0x18f3cc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_18f3d0:
    // 0x18f3d0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f3d4:
    // 0x18f3d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f3d8:
    // 0x18f3d8: 0x1010  mfhi        $v0
    ctx->pc = 0x18f3d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f3dc:
    // 0x18f3dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f3dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f3e0:
    // 0x18f3e0: 0xc053740  jal         func_14DD00
label_18f3e4:
    if (ctx->pc == 0x18F3E4u) {
        ctx->pc = 0x18F3E4u;
            // 0x18f3e4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F3E8u;
        goto label_18f3e8;
    }
    ctx->pc = 0x18F3E0u;
    SET_GPR_U32(ctx, 31, 0x18F3E8u);
    ctx->pc = 0x18F3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F3E0u;
            // 0x18f3e4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3E8u; }
        if (ctx->pc != 0x18F3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3E8u; }
        if (ctx->pc != 0x18F3E8u) { return; }
    }
    ctx->pc = 0x18F3E8u;
label_18f3e8:
    // 0x18f3e8: 0xc050bb4  jal         func_142ED0
label_18f3ec:
    if (ctx->pc == 0x18F3ECu) {
        ctx->pc = 0x18F3F0u;
        goto label_18f3f0;
    }
    ctx->pc = 0x18F3E8u;
    SET_GPR_U32(ctx, 31, 0x18F3F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3F0u; }
        if (ctx->pc != 0x18F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F3F0u; }
        if (ctx->pc != 0x18F3F0u) { return; }
    }
    ctx->pc = 0x18F3F0u;
label_18f3f0:
    // 0x18f3f0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f3f4:
    // 0x18f3f4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f3f8:
    // 0x18f3f8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f3f8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f3fc:
    // 0x18f3fc: 0x0  nop
    ctx->pc = 0x18f3fcu;
    // NOP
label_18f400:
    // 0x18f400: 0x0  nop
    ctx->pc = 0x18f400u;
    // NOP
label_18f404:
    // 0x18f404: 0x1010  mfhi        $v0
    ctx->pc = 0x18f404u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f408:
    // 0x18f408: 0xc050bb4  jal         func_142ED0
label_18f40c:
    if (ctx->pc == 0x18F40Cu) {
        ctx->pc = 0x18F40Cu;
            // 0x18f40c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F410u;
        goto label_18f410;
    }
    ctx->pc = 0x18F408u;
    SET_GPR_U32(ctx, 31, 0x18F410u);
    ctx->pc = 0x18F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F408u;
            // 0x18f40c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F410u; }
        if (ctx->pc != 0x18F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F410u; }
        if (ctx->pc != 0x18F410u) { return; }
    }
    ctx->pc = 0x18F410u;
label_18f410:
    // 0x18f410: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f414:
    // 0x18f414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f418:
    // 0x18f418: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f418u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f41c:
    // 0x18f41c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_18f420:
    // 0x18f420: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f424:
    // 0x18f424: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f428:
    // 0x18f428: 0x1010  mfhi        $v0
    ctx->pc = 0x18f428u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f42c:
    // 0x18f42c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f42cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f430:
    // 0x18f430: 0xc053740  jal         func_14DD00
label_18f434:
    if (ctx->pc == 0x18F434u) {
        ctx->pc = 0x18F434u;
            // 0x18f434: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F438u;
        goto label_18f438;
    }
    ctx->pc = 0x18F430u;
    SET_GPR_U32(ctx, 31, 0x18F438u);
    ctx->pc = 0x18F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F430u;
            // 0x18f434: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F438u; }
        if (ctx->pc != 0x18F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F438u; }
        if (ctx->pc != 0x18F438u) { return; }
    }
    ctx->pc = 0x18F438u;
label_18f438:
    // 0x18f438: 0xc050bb4  jal         func_142ED0
label_18f43c:
    if (ctx->pc == 0x18F43Cu) {
        ctx->pc = 0x18F440u;
        goto label_18f440;
    }
    ctx->pc = 0x18F438u;
    SET_GPR_U32(ctx, 31, 0x18F440u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F440u; }
        if (ctx->pc != 0x18F440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F440u; }
        if (ctx->pc != 0x18F440u) { return; }
    }
    ctx->pc = 0x18F440u;
label_18f440:
    // 0x18f440: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f444:
    // 0x18f444: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f448:
    // 0x18f448: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f448u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f44c:
    // 0x18f44c: 0x0  nop
    ctx->pc = 0x18f44cu;
    // NOP
label_18f450:
    // 0x18f450: 0x0  nop
    ctx->pc = 0x18f450u;
    // NOP
label_18f454:
    // 0x18f454: 0x1010  mfhi        $v0
    ctx->pc = 0x18f454u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f458:
    // 0x18f458: 0xc050bb4  jal         func_142ED0
label_18f45c:
    if (ctx->pc == 0x18F45Cu) {
        ctx->pc = 0x18F45Cu;
            // 0x18f45c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F460u;
        goto label_18f460;
    }
    ctx->pc = 0x18F458u;
    SET_GPR_U32(ctx, 31, 0x18F460u);
    ctx->pc = 0x18F45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F458u;
            // 0x18f45c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F460u; }
        if (ctx->pc != 0x18F460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F460u; }
        if (ctx->pc != 0x18F460u) { return; }
    }
    ctx->pc = 0x18F460u;
label_18f460:
    // 0x18f460: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f464:
    // 0x18f464: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18f464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f468:
    // 0x18f468: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f468u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f46c:
    // 0x18f46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f470:
    // 0x18f470: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x18f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_18f474:
    // 0x18f474: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x18f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_18f478:
    // 0x18f478: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18f478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18f47c:
    // 0x18f47c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18f47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f480:
    // 0x18f480: 0x1010  mfhi        $v0
    ctx->pc = 0x18f480u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f484:
    // 0x18f484: 0xc053740  jal         func_14DD00
label_18f488:
    if (ctx->pc == 0x18F488u) {
        ctx->pc = 0x18F488u;
            // 0x18f488: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F48Cu;
        goto label_18f48c;
    }
    ctx->pc = 0x18F484u;
    SET_GPR_U32(ctx, 31, 0x18F48Cu);
    ctx->pc = 0x18F488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F484u;
            // 0x18f488: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F48Cu; }
        if (ctx->pc != 0x18F48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F48Cu; }
        if (ctx->pc != 0x18F48Cu) { return; }
    }
    ctx->pc = 0x18F48Cu;
label_18f48c:
    // 0x18f48c: 0xc050bb4  jal         func_142ED0
label_18f490:
    if (ctx->pc == 0x18F490u) {
        ctx->pc = 0x18F494u;
        goto label_18f494;
    }
    ctx->pc = 0x18F48Cu;
    SET_GPR_U32(ctx, 31, 0x18F494u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F494u; }
        if (ctx->pc != 0x18F494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F494u; }
        if (ctx->pc != 0x18F494u) { return; }
    }
    ctx->pc = 0x18F494u;
label_18f494:
    // 0x18f494: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f498:
    // 0x18f498: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f49c:
    // 0x18f49c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f49cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f4a0:
    // 0x18f4a0: 0x0  nop
    ctx->pc = 0x18f4a0u;
    // NOP
label_18f4a4:
    // 0x18f4a4: 0x0  nop
    ctx->pc = 0x18f4a4u;
    // NOP
label_18f4a8:
    // 0x18f4a8: 0x1010  mfhi        $v0
    ctx->pc = 0x18f4a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f4ac:
    // 0x18f4ac: 0xc050bb4  jal         func_142ED0
label_18f4b0:
    if (ctx->pc == 0x18F4B0u) {
        ctx->pc = 0x18F4B0u;
            // 0x18f4b0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F4B4u;
        goto label_18f4b4;
    }
    ctx->pc = 0x18F4ACu;
    SET_GPR_U32(ctx, 31, 0x18F4B4u);
    ctx->pc = 0x18F4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4ACu;
            // 0x18f4b0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4B4u; }
        if (ctx->pc != 0x18F4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4B4u; }
        if (ctx->pc != 0x18F4B4u) { return; }
    }
    ctx->pc = 0x18F4B4u;
label_18f4b4:
    // 0x18f4b4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f4b8:
    // 0x18f4b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f4bc:
    // 0x18f4bc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f4bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f4c0:
    // 0x18f4c0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x18f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_18f4c4:
    // 0x18f4c4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f4c8:
    // 0x18f4c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f4cc:
    // 0x18f4cc: 0x1010  mfhi        $v0
    ctx->pc = 0x18f4ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f4d0:
    // 0x18f4d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f4d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f4d4:
    // 0x18f4d4: 0xc053740  jal         func_14DD00
label_18f4d8:
    if (ctx->pc == 0x18F4D8u) {
        ctx->pc = 0x18F4D8u;
            // 0x18f4d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F4DCu;
        goto label_18f4dc;
    }
    ctx->pc = 0x18F4D4u;
    SET_GPR_U32(ctx, 31, 0x18F4DCu);
    ctx->pc = 0x18F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4D4u;
            // 0x18f4d8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4DCu; }
        if (ctx->pc != 0x18F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4DCu; }
        if (ctx->pc != 0x18F4DCu) { return; }
    }
    ctx->pc = 0x18F4DCu;
label_18f4dc:
    // 0x18f4dc: 0xc050bb4  jal         func_142ED0
label_18f4e0:
    if (ctx->pc == 0x18F4E0u) {
        ctx->pc = 0x18F4E4u;
        goto label_18f4e4;
    }
    ctx->pc = 0x18F4DCu;
    SET_GPR_U32(ctx, 31, 0x18F4E4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4E4u; }
        if (ctx->pc != 0x18F4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F4E4u; }
        if (ctx->pc != 0x18F4E4u) { return; }
    }
    ctx->pc = 0x18F4E4u;
label_18f4e4:
    // 0x18f4e4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f4e8:
    // 0x18f4e8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f4ec:
    // 0x18f4ec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f4ecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f4f0:
    // 0x18f4f0: 0x0  nop
    ctx->pc = 0x18f4f0u;
    // NOP
label_18f4f4:
    // 0x18f4f4: 0x0  nop
    ctx->pc = 0x18f4f4u;
    // NOP
label_18f4f8:
    // 0x18f4f8: 0x1010  mfhi        $v0
    ctx->pc = 0x18f4f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f4fc:
    // 0x18f4fc: 0xc050bb4  jal         func_142ED0
label_18f500:
    if (ctx->pc == 0x18F500u) {
        ctx->pc = 0x18F500u;
            // 0x18f500: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F504u;
        goto label_18f504;
    }
    ctx->pc = 0x18F4FCu;
    SET_GPR_U32(ctx, 31, 0x18F504u);
    ctx->pc = 0x18F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F4FCu;
            // 0x18f500: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F504u; }
        if (ctx->pc != 0x18F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F504u; }
        if (ctx->pc != 0x18F504u) { return; }
    }
    ctx->pc = 0x18F504u;
label_18f504:
    // 0x18f504: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f508:
    // 0x18f508: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f50c:
    // 0x18f50c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f50cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f510:
    // 0x18f510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f514:
    // 0x18f514: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x18f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_18f518:
    // 0x18f518: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_18f51c:
    // 0x18f51c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18f520:
    // 0x18f520: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18f520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f524:
    // 0x18f524: 0x1010  mfhi        $v0
    ctx->pc = 0x18f524u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f528:
    // 0x18f528: 0xc053740  jal         func_14DD00
label_18f52c:
    if (ctx->pc == 0x18F52Cu) {
        ctx->pc = 0x18F52Cu;
            // 0x18f52c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F530u;
        goto label_18f530;
    }
    ctx->pc = 0x18F528u;
    SET_GPR_U32(ctx, 31, 0x18F530u);
    ctx->pc = 0x18F52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F528u;
            // 0x18f52c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F530u; }
        if (ctx->pc != 0x18F530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F530u; }
        if (ctx->pc != 0x18F530u) { return; }
    }
    ctx->pc = 0x18F530u;
label_18f530:
    // 0x18f530: 0xc050bb4  jal         func_142ED0
label_18f534:
    if (ctx->pc == 0x18F534u) {
        ctx->pc = 0x18F538u;
        goto label_18f538;
    }
    ctx->pc = 0x18F530u;
    SET_GPR_U32(ctx, 31, 0x18F538u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F538u; }
        if (ctx->pc != 0x18F538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F538u; }
        if (ctx->pc != 0x18F538u) { return; }
    }
    ctx->pc = 0x18F538u;
label_18f538:
    // 0x18f538: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f53c:
    // 0x18f53c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f540:
    // 0x18f540: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f540u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f544:
    // 0x18f544: 0x0  nop
    ctx->pc = 0x18f544u;
    // NOP
label_18f548:
    // 0x18f548: 0x0  nop
    ctx->pc = 0x18f548u;
    // NOP
label_18f54c:
    // 0x18f54c: 0x1010  mfhi        $v0
    ctx->pc = 0x18f54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f550:
    // 0x18f550: 0xc050bb4  jal         func_142ED0
label_18f554:
    if (ctx->pc == 0x18F554u) {
        ctx->pc = 0x18F554u;
            // 0x18f554: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F558u;
        goto label_18f558;
    }
    ctx->pc = 0x18F550u;
    SET_GPR_U32(ctx, 31, 0x18F558u);
    ctx->pc = 0x18F554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F550u;
            // 0x18f554: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F558u; }
        if (ctx->pc != 0x18F558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F558u; }
        if (ctx->pc != 0x18F558u) { return; }
    }
    ctx->pc = 0x18F558u;
label_18f558:
    // 0x18f558: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f55c:
    // 0x18f55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f560:
    // 0x18f560: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f560u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f564:
    // 0x18f564: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x18f564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_18f568:
    // 0x18f568: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f56c:
    // 0x18f56c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f570:
    // 0x18f570: 0x1010  mfhi        $v0
    ctx->pc = 0x18f570u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f574:
    // 0x18f574: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f574u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f578:
    // 0x18f578: 0xc053740  jal         func_14DD00
label_18f57c:
    if (ctx->pc == 0x18F57Cu) {
        ctx->pc = 0x18F57Cu;
            // 0x18f57c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F580u;
        goto label_18f580;
    }
    ctx->pc = 0x18F578u;
    SET_GPR_U32(ctx, 31, 0x18F580u);
    ctx->pc = 0x18F57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F578u;
            // 0x18f57c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F580u; }
        if (ctx->pc != 0x18F580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F580u; }
        if (ctx->pc != 0x18F580u) { return; }
    }
    ctx->pc = 0x18F580u;
label_18f580:
    // 0x18f580: 0xc050bb4  jal         func_142ED0
label_18f584:
    if (ctx->pc == 0x18F584u) {
        ctx->pc = 0x18F588u;
        goto label_18f588;
    }
    ctx->pc = 0x18F580u;
    SET_GPR_U32(ctx, 31, 0x18F588u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F588u; }
        if (ctx->pc != 0x18F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F588u; }
        if (ctx->pc != 0x18F588u) { return; }
    }
    ctx->pc = 0x18F588u;
label_18f588:
    // 0x18f588: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f58c:
    // 0x18f58c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f590:
    // 0x18f590: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f590u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f594:
    // 0x18f594: 0x0  nop
    ctx->pc = 0x18f594u;
    // NOP
label_18f598:
    // 0x18f598: 0x0  nop
    ctx->pc = 0x18f598u;
    // NOP
label_18f59c:
    // 0x18f59c: 0x1010  mfhi        $v0
    ctx->pc = 0x18f59cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f5a0:
    // 0x18f5a0: 0xc050bb4  jal         func_142ED0
label_18f5a4:
    if (ctx->pc == 0x18F5A4u) {
        ctx->pc = 0x18F5A4u;
            // 0x18f5a4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F5A8u;
        goto label_18f5a8;
    }
    ctx->pc = 0x18F5A0u;
    SET_GPR_U32(ctx, 31, 0x18F5A8u);
    ctx->pc = 0x18F5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5A0u;
            // 0x18f5a4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5A8u; }
        if (ctx->pc != 0x18F5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5A8u; }
        if (ctx->pc != 0x18F5A8u) { return; }
    }
    ctx->pc = 0x18F5A8u;
label_18f5a8:
    // 0x18f5a8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f5ac:
    // 0x18f5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f5b0:
    // 0x18f5b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f5b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f5b4:
    // 0x18f5b4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x18f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_18f5b8:
    // 0x18f5b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f5bc:
    // 0x18f5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f5c0:
    // 0x18f5c0: 0x1010  mfhi        $v0
    ctx->pc = 0x18f5c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f5c4:
    // 0x18f5c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f5c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f5c8:
    // 0x18f5c8: 0xc053740  jal         func_14DD00
label_18f5cc:
    if (ctx->pc == 0x18F5CCu) {
        ctx->pc = 0x18F5CCu;
            // 0x18f5cc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F5D0u;
        goto label_18f5d0;
    }
    ctx->pc = 0x18F5C8u;
    SET_GPR_U32(ctx, 31, 0x18F5D0u);
    ctx->pc = 0x18F5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5C8u;
            // 0x18f5cc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5D0u; }
        if (ctx->pc != 0x18F5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5D0u; }
        if (ctx->pc != 0x18F5D0u) { return; }
    }
    ctx->pc = 0x18F5D0u;
label_18f5d0:
    // 0x18f5d0: 0xc050bb4  jal         func_142ED0
label_18f5d4:
    if (ctx->pc == 0x18F5D4u) {
        ctx->pc = 0x18F5D8u;
        goto label_18f5d8;
    }
    ctx->pc = 0x18F5D0u;
    SET_GPR_U32(ctx, 31, 0x18F5D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5D8u; }
        if (ctx->pc != 0x18F5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5D8u; }
        if (ctx->pc != 0x18F5D8u) { return; }
    }
    ctx->pc = 0x18F5D8u;
label_18f5d8:
    // 0x18f5d8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f5dc:
    // 0x18f5dc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f5e0:
    // 0x18f5e0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f5e0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f5e4:
    // 0x18f5e4: 0x0  nop
    ctx->pc = 0x18f5e4u;
    // NOP
label_18f5e8:
    // 0x18f5e8: 0x0  nop
    ctx->pc = 0x18f5e8u;
    // NOP
label_18f5ec:
    // 0x18f5ec: 0x1010  mfhi        $v0
    ctx->pc = 0x18f5ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f5f0:
    // 0x18f5f0: 0xc050bb4  jal         func_142ED0
label_18f5f4:
    if (ctx->pc == 0x18F5F4u) {
        ctx->pc = 0x18F5F4u;
            // 0x18f5f4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F5F8u;
        goto label_18f5f8;
    }
    ctx->pc = 0x18F5F0u;
    SET_GPR_U32(ctx, 31, 0x18F5F8u);
    ctx->pc = 0x18F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F5F0u;
            // 0x18f5f4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5F8u; }
        if (ctx->pc != 0x18F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F5F8u; }
        if (ctx->pc != 0x18F5F8u) { return; }
    }
    ctx->pc = 0x18F5F8u;
label_18f5f8:
    // 0x18f5f8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f5fc:
    // 0x18f5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f600:
    // 0x18f600: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f600u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f604:
    // 0x18f604: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x18f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_18f608:
    // 0x18f608: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f60c:
    // 0x18f60c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f610:
    // 0x18f610: 0x1010  mfhi        $v0
    ctx->pc = 0x18f610u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f614:
    // 0x18f614: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f614u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f618:
    // 0x18f618: 0xc053740  jal         func_14DD00
label_18f61c:
    if (ctx->pc == 0x18F61Cu) {
        ctx->pc = 0x18F61Cu;
            // 0x18f61c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F620u;
        goto label_18f620;
    }
    ctx->pc = 0x18F618u;
    SET_GPR_U32(ctx, 31, 0x18F620u);
    ctx->pc = 0x18F61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F618u;
            // 0x18f61c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F620u; }
        if (ctx->pc != 0x18F620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F620u; }
        if (ctx->pc != 0x18F620u) { return; }
    }
    ctx->pc = 0x18F620u;
label_18f620:
    // 0x18f620: 0xc050bb4  jal         func_142ED0
label_18f624:
    if (ctx->pc == 0x18F624u) {
        ctx->pc = 0x18F628u;
        goto label_18f628;
    }
    ctx->pc = 0x18F620u;
    SET_GPR_U32(ctx, 31, 0x18F628u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F628u; }
        if (ctx->pc != 0x18F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F628u; }
        if (ctx->pc != 0x18F628u) { return; }
    }
    ctx->pc = 0x18F628u;
label_18f628:
    // 0x18f628: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f62c:
    // 0x18f62c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f630:
    // 0x18f630: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f630u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f634:
    // 0x18f634: 0x0  nop
    ctx->pc = 0x18f634u;
    // NOP
label_18f638:
    // 0x18f638: 0x0  nop
    ctx->pc = 0x18f638u;
    // NOP
label_18f63c:
    // 0x18f63c: 0x1010  mfhi        $v0
    ctx->pc = 0x18f63cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f640:
    // 0x18f640: 0xc050bb4  jal         func_142ED0
label_18f644:
    if (ctx->pc == 0x18F644u) {
        ctx->pc = 0x18F644u;
            // 0x18f644: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F648u;
        goto label_18f648;
    }
    ctx->pc = 0x18F640u;
    SET_GPR_U32(ctx, 31, 0x18F648u);
    ctx->pc = 0x18F644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F640u;
            // 0x18f644: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F648u; }
        if (ctx->pc != 0x18F648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F648u; }
        if (ctx->pc != 0x18F648u) { return; }
    }
    ctx->pc = 0x18F648u;
label_18f648:
    // 0x18f648: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f64c:
    // 0x18f64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f650:
    // 0x18f650: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f650u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f654:
    // 0x18f654: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x18f654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_18f658:
    // 0x18f658: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f65c:
    // 0x18f65c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f660:
    // 0x18f660: 0x1010  mfhi        $v0
    ctx->pc = 0x18f660u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f664:
    // 0x18f664: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f668:
    // 0x18f668: 0xc053740  jal         func_14DD00
label_18f66c:
    if (ctx->pc == 0x18F66Cu) {
        ctx->pc = 0x18F66Cu;
            // 0x18f66c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F670u;
        goto label_18f670;
    }
    ctx->pc = 0x18F668u;
    SET_GPR_U32(ctx, 31, 0x18F670u);
    ctx->pc = 0x18F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F668u;
            // 0x18f66c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F670u; }
        if (ctx->pc != 0x18F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F670u; }
        if (ctx->pc != 0x18F670u) { return; }
    }
    ctx->pc = 0x18F670u;
label_18f670:
    // 0x18f670: 0xc050bb4  jal         func_142ED0
label_18f674:
    if (ctx->pc == 0x18F674u) {
        ctx->pc = 0x18F678u;
        goto label_18f678;
    }
    ctx->pc = 0x18F670u;
    SET_GPR_U32(ctx, 31, 0x18F678u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F678u; }
        if (ctx->pc != 0x18F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F678u; }
        if (ctx->pc != 0x18F678u) { return; }
    }
    ctx->pc = 0x18F678u;
label_18f678:
    // 0x18f678: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f67c:
    // 0x18f67c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f680:
    // 0x18f680: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f680u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f684:
    // 0x18f684: 0x0  nop
    ctx->pc = 0x18f684u;
    // NOP
label_18f688:
    // 0x18f688: 0x0  nop
    ctx->pc = 0x18f688u;
    // NOP
label_18f68c:
    // 0x18f68c: 0x1010  mfhi        $v0
    ctx->pc = 0x18f68cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f690:
    // 0x18f690: 0xc050bb4  jal         func_142ED0
label_18f694:
    if (ctx->pc == 0x18F694u) {
        ctx->pc = 0x18F694u;
            // 0x18f694: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F698u;
        goto label_18f698;
    }
    ctx->pc = 0x18F690u;
    SET_GPR_U32(ctx, 31, 0x18F698u);
    ctx->pc = 0x18F694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F690u;
            // 0x18f694: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F698u; }
        if (ctx->pc != 0x18F698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F698u; }
        if (ctx->pc != 0x18F698u) { return; }
    }
    ctx->pc = 0x18F698u;
label_18f698:
    // 0x18f698: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f69c:
    // 0x18f69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f6a0:
    // 0x18f6a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f6a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f6a4:
    // 0x18f6a4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_18f6a8:
    // 0x18f6a8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f6ac:
    // 0x18f6ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f6b0:
    // 0x18f6b0: 0x1010  mfhi        $v0
    ctx->pc = 0x18f6b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f6b4:
    // 0x18f6b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f6b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f6b8:
    // 0x18f6b8: 0xc053740  jal         func_14DD00
label_18f6bc:
    if (ctx->pc == 0x18F6BCu) {
        ctx->pc = 0x18F6BCu;
            // 0x18f6bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F6C0u;
        goto label_18f6c0;
    }
    ctx->pc = 0x18F6B8u;
    SET_GPR_U32(ctx, 31, 0x18F6C0u);
    ctx->pc = 0x18F6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6B8u;
            // 0x18f6bc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6C0u; }
        if (ctx->pc != 0x18F6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6C0u; }
        if (ctx->pc != 0x18F6C0u) { return; }
    }
    ctx->pc = 0x18F6C0u;
label_18f6c0:
    // 0x18f6c0: 0xc050bb4  jal         func_142ED0
label_18f6c4:
    if (ctx->pc == 0x18F6C4u) {
        ctx->pc = 0x18F6C8u;
        goto label_18f6c8;
    }
    ctx->pc = 0x18F6C0u;
    SET_GPR_U32(ctx, 31, 0x18F6C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6C8u; }
        if (ctx->pc != 0x18F6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6C8u; }
        if (ctx->pc != 0x18F6C8u) { return; }
    }
    ctx->pc = 0x18F6C8u;
label_18f6c8:
    // 0x18f6c8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f6cc:
    // 0x18f6cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f6d0:
    // 0x18f6d0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f6d0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f6d4:
    // 0x18f6d4: 0x0  nop
    ctx->pc = 0x18f6d4u;
    // NOP
label_18f6d8:
    // 0x18f6d8: 0x0  nop
    ctx->pc = 0x18f6d8u;
    // NOP
label_18f6dc:
    // 0x18f6dc: 0x1010  mfhi        $v0
    ctx->pc = 0x18f6dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f6e0:
    // 0x18f6e0: 0xc050bb4  jal         func_142ED0
label_18f6e4:
    if (ctx->pc == 0x18F6E4u) {
        ctx->pc = 0x18F6E4u;
            // 0x18f6e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F6E8u;
        goto label_18f6e8;
    }
    ctx->pc = 0x18F6E0u;
    SET_GPR_U32(ctx, 31, 0x18F6E8u);
    ctx->pc = 0x18F6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F6E0u;
            // 0x18f6e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6E8u; }
        if (ctx->pc != 0x18F6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F6E8u; }
        if (ctx->pc != 0x18F6E8u) { return; }
    }
    ctx->pc = 0x18F6E8u;
label_18f6e8:
    // 0x18f6e8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f6ec:
    // 0x18f6ec: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f6f0:
    // 0x18f6f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f6f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f6f4:
    // 0x18f6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f6f8:
    // 0x18f6f8: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_18f6fc:
    // 0x18f6fc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x18f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_18f700:
    // 0x18f700: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18f700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18f704:
    // 0x18f704: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18f704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f708:
    // 0x18f708: 0x1010  mfhi        $v0
    ctx->pc = 0x18f708u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f70c:
    // 0x18f70c: 0xc053740  jal         func_14DD00
label_18f710:
    if (ctx->pc == 0x18F710u) {
        ctx->pc = 0x18F710u;
            // 0x18f710: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F714u;
        goto label_18f714;
    }
    ctx->pc = 0x18F70Cu;
    SET_GPR_U32(ctx, 31, 0x18F714u);
    ctx->pc = 0x18F710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F70Cu;
            // 0x18f710: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F714u; }
        if (ctx->pc != 0x18F714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F714u; }
        if (ctx->pc != 0x18F714u) { return; }
    }
    ctx->pc = 0x18F714u;
label_18f714:
    // 0x18f714: 0xc050bb4  jal         func_142ED0
label_18f718:
    if (ctx->pc == 0x18F718u) {
        ctx->pc = 0x18F71Cu;
        goto label_18f71c;
    }
    ctx->pc = 0x18F714u;
    SET_GPR_U32(ctx, 31, 0x18F71Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F71Cu; }
        if (ctx->pc != 0x18F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F71Cu; }
        if (ctx->pc != 0x18F71Cu) { return; }
    }
    ctx->pc = 0x18F71Cu;
label_18f71c:
    // 0x18f71c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f720:
    // 0x18f720: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f724:
    // 0x18f724: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f724u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f728:
    // 0x18f728: 0x0  nop
    ctx->pc = 0x18f728u;
    // NOP
label_18f72c:
    // 0x18f72c: 0x0  nop
    ctx->pc = 0x18f72cu;
    // NOP
label_18f730:
    // 0x18f730: 0x1010  mfhi        $v0
    ctx->pc = 0x18f730u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f734:
    // 0x18f734: 0xc050bb4  jal         func_142ED0
label_18f738:
    if (ctx->pc == 0x18F738u) {
        ctx->pc = 0x18F738u;
            // 0x18f738: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F73Cu;
        goto label_18f73c;
    }
    ctx->pc = 0x18F734u;
    SET_GPR_U32(ctx, 31, 0x18F73Cu);
    ctx->pc = 0x18F738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F734u;
            // 0x18f738: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F73Cu; }
        if (ctx->pc != 0x18F73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F73Cu; }
        if (ctx->pc != 0x18F73Cu) { return; }
    }
    ctx->pc = 0x18F73Cu;
label_18f73c:
    // 0x18f73c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f740:
    // 0x18f740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f744:
    // 0x18f744: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f744u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f748:
    // 0x18f748: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_18f74c:
    // 0x18f74c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f750:
    // 0x18f750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f754:
    // 0x18f754: 0x1010  mfhi        $v0
    ctx->pc = 0x18f754u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f758:
    // 0x18f758: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f758u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f75c:
    // 0x18f75c: 0xc053740  jal         func_14DD00
label_18f760:
    if (ctx->pc == 0x18F760u) {
        ctx->pc = 0x18F760u;
            // 0x18f760: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F764u;
        goto label_18f764;
    }
    ctx->pc = 0x18F75Cu;
    SET_GPR_U32(ctx, 31, 0x18F764u);
    ctx->pc = 0x18F760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F75Cu;
            // 0x18f760: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F764u; }
        if (ctx->pc != 0x18F764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F764u; }
        if (ctx->pc != 0x18F764u) { return; }
    }
    ctx->pc = 0x18F764u;
label_18f764:
    // 0x18f764: 0xc050bb4  jal         func_142ED0
label_18f768:
    if (ctx->pc == 0x18F768u) {
        ctx->pc = 0x18F76Cu;
        goto label_18f76c;
    }
    ctx->pc = 0x18F764u;
    SET_GPR_U32(ctx, 31, 0x18F76Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F76Cu; }
        if (ctx->pc != 0x18F76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F76Cu; }
        if (ctx->pc != 0x18F76Cu) { return; }
    }
    ctx->pc = 0x18F76Cu;
label_18f76c:
    // 0x18f76c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f770:
    // 0x18f770: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f774:
    // 0x18f774: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f774u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f778:
    // 0x18f778: 0x0  nop
    ctx->pc = 0x18f778u;
    // NOP
label_18f77c:
    // 0x18f77c: 0x0  nop
    ctx->pc = 0x18f77cu;
    // NOP
label_18f780:
    // 0x18f780: 0x1010  mfhi        $v0
    ctx->pc = 0x18f780u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f784:
    // 0x18f784: 0xc050bb4  jal         func_142ED0
label_18f788:
    if (ctx->pc == 0x18F788u) {
        ctx->pc = 0x18F788u;
            // 0x18f788: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F78Cu;
        goto label_18f78c;
    }
    ctx->pc = 0x18F784u;
    SET_GPR_U32(ctx, 31, 0x18F78Cu);
    ctx->pc = 0x18F788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F784u;
            // 0x18f788: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F78Cu; }
        if (ctx->pc != 0x18F78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F78Cu; }
        if (ctx->pc != 0x18F78Cu) { return; }
    }
    ctx->pc = 0x18F78Cu;
label_18f78c:
    // 0x18f78c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f790:
    // 0x18f790: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18f790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f794:
    // 0x18f794: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f794u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f798:
    // 0x18f798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f79c:
    // 0x18f79c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x18f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_18f7a0:
    // 0x18f7a0: 0x3c03c020  lui         $v1, 0xC020
    ctx->pc = 0x18f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49184 << 16));
label_18f7a4:
    // 0x18f7a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x18f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18f7a8:
    // 0x18f7a8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x18f7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f7ac:
    // 0x18f7ac: 0x1010  mfhi        $v0
    ctx->pc = 0x18f7acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f7b0:
    // 0x18f7b0: 0xc053740  jal         func_14DD00
label_18f7b4:
    if (ctx->pc == 0x18F7B4u) {
        ctx->pc = 0x18F7B4u;
            // 0x18f7b4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F7B8u;
        goto label_18f7b8;
    }
    ctx->pc = 0x18F7B0u;
    SET_GPR_U32(ctx, 31, 0x18F7B8u);
    ctx->pc = 0x18F7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7B0u;
            // 0x18f7b4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B8u; }
        if (ctx->pc != 0x18F7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7B8u; }
        if (ctx->pc != 0x18F7B8u) { return; }
    }
    ctx->pc = 0x18F7B8u;
label_18f7b8:
    // 0x18f7b8: 0xc050bb4  jal         func_142ED0
label_18f7bc:
    if (ctx->pc == 0x18F7BCu) {
        ctx->pc = 0x18F7C0u;
        goto label_18f7c0;
    }
    ctx->pc = 0x18F7B8u;
    SET_GPR_U32(ctx, 31, 0x18F7C0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        if (ctx->pc != 0x18F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7C0u; }
        if (ctx->pc != 0x18F7C0u) { return; }
    }
    ctx->pc = 0x18F7C0u;
label_18f7c0:
    // 0x18f7c0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f7c4:
    // 0x18f7c4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f7c8:
    // 0x18f7c8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f7c8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f7cc:
    // 0x18f7cc: 0x0  nop
    ctx->pc = 0x18f7ccu;
    // NOP
label_18f7d0:
    // 0x18f7d0: 0x0  nop
    ctx->pc = 0x18f7d0u;
    // NOP
label_18f7d4:
    // 0x18f7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x18f7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f7d8:
    // 0x18f7d8: 0xc050bb4  jal         func_142ED0
label_18f7dc:
    if (ctx->pc == 0x18F7DCu) {
        ctx->pc = 0x18F7DCu;
            // 0x18f7dc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F7E0u;
        goto label_18f7e0;
    }
    ctx->pc = 0x18F7D8u;
    SET_GPR_U32(ctx, 31, 0x18F7E0u);
    ctx->pc = 0x18F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F7D8u;
            // 0x18f7dc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7E0u; }
        if (ctx->pc != 0x18F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F7E0u; }
        if (ctx->pc != 0x18F7E0u) { return; }
    }
    ctx->pc = 0x18F7E0u;
label_18f7e0:
    // 0x18f7e0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f7e4:
    // 0x18f7e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f7e8:
    // 0x18f7e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f7e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f7ec:
    // 0x18f7ec: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_18f7f0:
    // 0x18f7f0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f7f4:
    // 0x18f7f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f7f8:
    // 0x18f7f8: 0x1010  mfhi        $v0
    ctx->pc = 0x18f7f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f7fc:
    // 0x18f7fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f7fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f800:
    // 0x18f800: 0xc053740  jal         func_14DD00
label_18f804:
    if (ctx->pc == 0x18F804u) {
        ctx->pc = 0x18F804u;
            // 0x18f804: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F808u;
        goto label_18f808;
    }
    ctx->pc = 0x18F800u;
    SET_GPR_U32(ctx, 31, 0x18F808u);
    ctx->pc = 0x18F804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F800u;
            // 0x18f804: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F808u; }
        if (ctx->pc != 0x18F808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F808u; }
        if (ctx->pc != 0x18F808u) { return; }
    }
    ctx->pc = 0x18F808u;
label_18f808:
    // 0x18f808: 0xc050bb4  jal         func_142ED0
label_18f80c:
    if (ctx->pc == 0x18F80Cu) {
        ctx->pc = 0x18F810u;
        goto label_18f810;
    }
    ctx->pc = 0x18F808u;
    SET_GPR_U32(ctx, 31, 0x18F810u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F810u; }
        if (ctx->pc != 0x18F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F810u; }
        if (ctx->pc != 0x18F810u) { return; }
    }
    ctx->pc = 0x18F810u;
label_18f810:
    // 0x18f810: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x18f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_18f814:
    // 0x18f814: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x18f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f818:
    // 0x18f818: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x18f818u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f81c:
    // 0x18f81c: 0x0  nop
    ctx->pc = 0x18f81cu;
    // NOP
label_18f820:
    // 0x18f820: 0x0  nop
    ctx->pc = 0x18f820u;
    // NOP
label_18f824:
    // 0x18f824: 0x1010  mfhi        $v0
    ctx->pc = 0x18f824u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f828:
    // 0x18f828: 0xc050bb4  jal         func_142ED0
label_18f82c:
    if (ctx->pc == 0x18F82Cu) {
        ctx->pc = 0x18F82Cu;
            // 0x18f82c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F830u;
        goto label_18f830;
    }
    ctx->pc = 0x18F828u;
    SET_GPR_U32(ctx, 31, 0x18F830u);
    ctx->pc = 0x18F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F828u;
            // 0x18f82c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F830u; }
        if (ctx->pc != 0x18F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F830u; }
        if (ctx->pc != 0x18F830u) { return; }
    }
    ctx->pc = 0x18F830u;
label_18f830:
    // 0x18f830: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x18f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_18f834:
    // 0x18f834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f838:
    // 0x18f838: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x18f838u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_18f83c:
    // 0x18f83c: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x18f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_18f840:
    // 0x18f840: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x18f840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f844:
    // 0x18f844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18f844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18f848:
    // 0x18f848: 0x1010  mfhi        $v0
    ctx->pc = 0x18f848u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18f84c:
    // 0x18f84c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x18f84cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_18f850:
    // 0x18f850: 0xc053740  jal         func_14DD00
label_18f854:
    if (ctx->pc == 0x18F854u) {
        ctx->pc = 0x18F854u;
            // 0x18f854: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x18F858u;
        goto label_18f858;
    }
    ctx->pc = 0x18F850u;
    SET_GPR_U32(ctx, 31, 0x18F858u);
    ctx->pc = 0x18F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F850u;
            // 0x18f854: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F858u; }
        if (ctx->pc != 0x18F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F858u; }
        if (ctx->pc != 0x18F858u) { return; }
    }
    ctx->pc = 0x18F858u;
label_18f858:
    // 0x18f858: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x18f858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_18f85c:
    // 0x18f85c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x18f85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18f860:
    // 0x18f860: 0xc07b0ac  jal         func_1EC2B0
label_18f864:
    if (ctx->pc == 0x18F864u) {
        ctx->pc = 0x18F864u;
            // 0x18f864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18F868u;
        goto label_18f868;
    }
    ctx->pc = 0x18F860u;
    SET_GPR_U32(ctx, 31, 0x18F868u);
    ctx->pc = 0x18F864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F860u;
            // 0x18f864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F868u; }
        if (ctx->pc != 0x18F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F868u; }
        if (ctx->pc != 0x18F868u) { return; }
    }
    ctx->pc = 0x18F868u;
label_18f868:
    // 0x18f868: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x18f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_18f86c:
    // 0x18f86c: 0x40f809  jalr        $v0
label_18f870:
    if (ctx->pc == 0x18F870u) {
        ctx->pc = 0x18F870u;
            // 0x18f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F874u;
        goto label_18f874;
    }
    ctx->pc = 0x18F86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F874u);
        ctx->pc = 0x18F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F86Cu;
            // 0x18f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E560u: goto label_18e560;
            case 0x18E564u: goto label_18e564;
            case 0x18E568u: goto label_18e568;
            case 0x18E56Cu: goto label_18e56c;
            case 0x18E570u: goto label_18e570;
            case 0x18E574u: goto label_18e574;
            case 0x18E578u: goto label_18e578;
            case 0x18E57Cu: goto label_18e57c;
            case 0x18E580u: goto label_18e580;
            case 0x18E584u: goto label_18e584;
            case 0x18E588u: goto label_18e588;
            case 0x18E58Cu: goto label_18e58c;
            case 0x18E590u: goto label_18e590;
            case 0x18E594u: goto label_18e594;
            case 0x18E598u: goto label_18e598;
            case 0x18E59Cu: goto label_18e59c;
            case 0x18E5A0u: goto label_18e5a0;
            case 0x18E5A4u: goto label_18e5a4;
            case 0x18E5A8u: goto label_18e5a8;
            case 0x18E5ACu: goto label_18e5ac;
            case 0x18E5B0u: goto label_18e5b0;
            case 0x18E5B4u: goto label_18e5b4;
            case 0x18E5B8u: goto label_18e5b8;
            case 0x18E5BCu: goto label_18e5bc;
            case 0x18E5C0u: goto label_18e5c0;
            case 0x18E5C4u: goto label_18e5c4;
            case 0x18E5C8u: goto label_18e5c8;
            case 0x18E5CCu: goto label_18e5cc;
            case 0x18E5D0u: goto label_18e5d0;
            case 0x18E5D4u: goto label_18e5d4;
            case 0x18E5D8u: goto label_18e5d8;
            case 0x18E5DCu: goto label_18e5dc;
            case 0x18E5E0u: goto label_18e5e0;
            case 0x18E5E4u: goto label_18e5e4;
            case 0x18E5E8u: goto label_18e5e8;
            case 0x18E5ECu: goto label_18e5ec;
            case 0x18E5F0u: goto label_18e5f0;
            case 0x18E5F4u: goto label_18e5f4;
            case 0x18E5F8u: goto label_18e5f8;
            case 0x18E5FCu: goto label_18e5fc;
            case 0x18E600u: goto label_18e600;
            case 0x18E604u: goto label_18e604;
            case 0x18E608u: goto label_18e608;
            case 0x18E60Cu: goto label_18e60c;
            case 0x18E610u: goto label_18e610;
            case 0x18E614u: goto label_18e614;
            case 0x18E618u: goto label_18e618;
            case 0x18E61Cu: goto label_18e61c;
            case 0x18E620u: goto label_18e620;
            case 0x18E624u: goto label_18e624;
            case 0x18E628u: goto label_18e628;
            case 0x18E62Cu: goto label_18e62c;
            case 0x18E630u: goto label_18e630;
            case 0x18E634u: goto label_18e634;
            case 0x18E638u: goto label_18e638;
            case 0x18E63Cu: goto label_18e63c;
            case 0x18E640u: goto label_18e640;
            case 0x18E644u: goto label_18e644;
            case 0x18E648u: goto label_18e648;
            case 0x18E64Cu: goto label_18e64c;
            case 0x18E650u: goto label_18e650;
            case 0x18E654u: goto label_18e654;
            case 0x18E658u: goto label_18e658;
            case 0x18E65Cu: goto label_18e65c;
            case 0x18E660u: goto label_18e660;
            case 0x18E664u: goto label_18e664;
            case 0x18E668u: goto label_18e668;
            case 0x18E66Cu: goto label_18e66c;
            case 0x18E670u: goto label_18e670;
            case 0x18E674u: goto label_18e674;
            case 0x18E678u: goto label_18e678;
            case 0x18E67Cu: goto label_18e67c;
            case 0x18E680u: goto label_18e680;
            case 0x18E684u: goto label_18e684;
            case 0x18E688u: goto label_18e688;
            case 0x18E68Cu: goto label_18e68c;
            case 0x18E690u: goto label_18e690;
            case 0x18E694u: goto label_18e694;
            case 0x18E698u: goto label_18e698;
            case 0x18E69Cu: goto label_18e69c;
            case 0x18E6A0u: goto label_18e6a0;
            case 0x18E6A4u: goto label_18e6a4;
            case 0x18E6A8u: goto label_18e6a8;
            case 0x18E6ACu: goto label_18e6ac;
            case 0x18E6B0u: goto label_18e6b0;
            case 0x18E6B4u: goto label_18e6b4;
            case 0x18E6B8u: goto label_18e6b8;
            case 0x18E6BCu: goto label_18e6bc;
            case 0x18E6C0u: goto label_18e6c0;
            case 0x18E6C4u: goto label_18e6c4;
            case 0x18E6C8u: goto label_18e6c8;
            case 0x18E6CCu: goto label_18e6cc;
            case 0x18E6D0u: goto label_18e6d0;
            case 0x18E6D4u: goto label_18e6d4;
            case 0x18E6D8u: goto label_18e6d8;
            case 0x18E6DCu: goto label_18e6dc;
            case 0x18E6E0u: goto label_18e6e0;
            case 0x18E6E4u: goto label_18e6e4;
            case 0x18E6E8u: goto label_18e6e8;
            case 0x18E6ECu: goto label_18e6ec;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E6F8u: goto label_18e6f8;
            case 0x18E6FCu: goto label_18e6fc;
            case 0x18E700u: goto label_18e700;
            case 0x18E704u: goto label_18e704;
            case 0x18E708u: goto label_18e708;
            case 0x18E70Cu: goto label_18e70c;
            case 0x18E710u: goto label_18e710;
            case 0x18E714u: goto label_18e714;
            case 0x18E718u: goto label_18e718;
            case 0x18E71Cu: goto label_18e71c;
            case 0x18E720u: goto label_18e720;
            case 0x18E724u: goto label_18e724;
            case 0x18E728u: goto label_18e728;
            case 0x18E72Cu: goto label_18e72c;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E738u: goto label_18e738;
            case 0x18E73Cu: goto label_18e73c;
            case 0x18E740u: goto label_18e740;
            case 0x18E744u: goto label_18e744;
            case 0x18E748u: goto label_18e748;
            case 0x18E74Cu: goto label_18e74c;
            case 0x18E750u: goto label_18e750;
            case 0x18E754u: goto label_18e754;
            case 0x18E758u: goto label_18e758;
            case 0x18E75Cu: goto label_18e75c;
            case 0x18E760u: goto label_18e760;
            case 0x18E764u: goto label_18e764;
            case 0x18E768u: goto label_18e768;
            case 0x18E76Cu: goto label_18e76c;
            case 0x18E770u: goto label_18e770;
            case 0x18E774u: goto label_18e774;
            case 0x18E778u: goto label_18e778;
            case 0x18E77Cu: goto label_18e77c;
            case 0x18E780u: goto label_18e780;
            case 0x18E784u: goto label_18e784;
            case 0x18E788u: goto label_18e788;
            case 0x18E78Cu: goto label_18e78c;
            case 0x18E790u: goto label_18e790;
            case 0x18E794u: goto label_18e794;
            case 0x18E798u: goto label_18e798;
            case 0x18E79Cu: goto label_18e79c;
            case 0x18E7A0u: goto label_18e7a0;
            case 0x18E7A4u: goto label_18e7a4;
            case 0x18E7A8u: goto label_18e7a8;
            case 0x18E7ACu: goto label_18e7ac;
            case 0x18E7B0u: goto label_18e7b0;
            case 0x18E7B4u: goto label_18e7b4;
            case 0x18E7B8u: goto label_18e7b8;
            case 0x18E7BCu: goto label_18e7bc;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7C8u: goto label_18e7c8;
            case 0x18E7CCu: goto label_18e7cc;
            case 0x18E7D0u: goto label_18e7d0;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E7DCu: goto label_18e7dc;
            case 0x18E7E0u: goto label_18e7e0;
            case 0x18E7E4u: goto label_18e7e4;
            case 0x18E7E8u: goto label_18e7e8;
            case 0x18E7ECu: goto label_18e7ec;
            case 0x18E7F0u: goto label_18e7f0;
            case 0x18E7F4u: goto label_18e7f4;
            case 0x18E7F8u: goto label_18e7f8;
            case 0x18E7FCu: goto label_18e7fc;
            case 0x18E800u: goto label_18e800;
            case 0x18E804u: goto label_18e804;
            case 0x18E808u: goto label_18e808;
            case 0x18E80Cu: goto label_18e80c;
            case 0x18E810u: goto label_18e810;
            case 0x18E814u: goto label_18e814;
            case 0x18E818u: goto label_18e818;
            case 0x18E81Cu: goto label_18e81c;
            case 0x18E820u: goto label_18e820;
            case 0x18E824u: goto label_18e824;
            case 0x18E828u: goto label_18e828;
            case 0x18E82Cu: goto label_18e82c;
            case 0x18E830u: goto label_18e830;
            case 0x18E834u: goto label_18e834;
            case 0x18E838u: goto label_18e838;
            case 0x18E83Cu: goto label_18e83c;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E848u: goto label_18e848;
            case 0x18E84Cu: goto label_18e84c;
            case 0x18E850u: goto label_18e850;
            case 0x18E854u: goto label_18e854;
            case 0x18E858u: goto label_18e858;
            case 0x18E85Cu: goto label_18e85c;
            case 0x18E860u: goto label_18e860;
            case 0x18E864u: goto label_18e864;
            case 0x18E868u: goto label_18e868;
            case 0x18E86Cu: goto label_18e86c;
            case 0x18E870u: goto label_18e870;
            case 0x18E874u: goto label_18e874;
            case 0x18E878u: goto label_18e878;
            case 0x18E87Cu: goto label_18e87c;
            case 0x18E880u: goto label_18e880;
            case 0x18E884u: goto label_18e884;
            case 0x18E888u: goto label_18e888;
            case 0x18E88Cu: goto label_18e88c;
            case 0x18E890u: goto label_18e890;
            case 0x18E894u: goto label_18e894;
            case 0x18E898u: goto label_18e898;
            case 0x18E89Cu: goto label_18e89c;
            case 0x18E8A0u: goto label_18e8a0;
            case 0x18E8A4u: goto label_18e8a4;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8ACu: goto label_18e8ac;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8B4u: goto label_18e8b4;
            case 0x18E8B8u: goto label_18e8b8;
            case 0x18E8BCu: goto label_18e8bc;
            case 0x18E8C0u: goto label_18e8c0;
            case 0x18E8C4u: goto label_18e8c4;
            case 0x18E8C8u: goto label_18e8c8;
            case 0x18E8CCu: goto label_18e8cc;
            case 0x18E8D0u: goto label_18e8d0;
            case 0x18E8D4u: goto label_18e8d4;
            case 0x18E8D8u: goto label_18e8d8;
            case 0x18E8DCu: goto label_18e8dc;
            case 0x18E8E0u: goto label_18e8e0;
            case 0x18E8E4u: goto label_18e8e4;
            case 0x18E8E8u: goto label_18e8e8;
            case 0x18E8ECu: goto label_18e8ec;
            case 0x18E8F0u: goto label_18e8f0;
            case 0x18E8F4u: goto label_18e8f4;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E8FCu: goto label_18e8fc;
            case 0x18E900u: goto label_18e900;
            case 0x18E904u: goto label_18e904;
            case 0x18E908u: goto label_18e908;
            case 0x18E90Cu: goto label_18e90c;
            case 0x18E910u: goto label_18e910;
            case 0x18E914u: goto label_18e914;
            case 0x18E918u: goto label_18e918;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E920u: goto label_18e920;
            case 0x18E924u: goto label_18e924;
            case 0x18E928u: goto label_18e928;
            case 0x18E92Cu: goto label_18e92c;
            case 0x18E930u: goto label_18e930;
            case 0x18E934u: goto label_18e934;
            case 0x18E938u: goto label_18e938;
            case 0x18E93Cu: goto label_18e93c;
            case 0x18E940u: goto label_18e940;
            case 0x18E944u: goto label_18e944;
            case 0x18E948u: goto label_18e948;
            case 0x18E94Cu: goto label_18e94c;
            case 0x18E950u: goto label_18e950;
            case 0x18E954u: goto label_18e954;
            case 0x18E958u: goto label_18e958;
            case 0x18E95Cu: goto label_18e95c;
            case 0x18E960u: goto label_18e960;
            case 0x18E964u: goto label_18e964;
            case 0x18E968u: goto label_18e968;
            case 0x18E96Cu: goto label_18e96c;
            case 0x18E970u: goto label_18e970;
            case 0x18E974u: goto label_18e974;
            case 0x18E978u: goto label_18e978;
            case 0x18E97Cu: goto label_18e97c;
            case 0x18E980u: goto label_18e980;
            case 0x18E984u: goto label_18e984;
            case 0x18E988u: goto label_18e988;
            case 0x18E98Cu: goto label_18e98c;
            case 0x18E990u: goto label_18e990;
            case 0x18E994u: goto label_18e994;
            case 0x18E998u: goto label_18e998;
            case 0x18E99Cu: goto label_18e99c;
            case 0x18E9A0u: goto label_18e9a0;
            case 0x18E9A4u: goto label_18e9a4;
            case 0x18E9A8u: goto label_18e9a8;
            case 0x18E9ACu: goto label_18e9ac;
            case 0x18E9B0u: goto label_18e9b0;
            case 0x18E9B4u: goto label_18e9b4;
            case 0x18E9B8u: goto label_18e9b8;
            case 0x18E9BCu: goto label_18e9bc;
            case 0x18E9C0u: goto label_18e9c0;
            case 0x18E9C4u: goto label_18e9c4;
            case 0x18E9C8u: goto label_18e9c8;
            case 0x18E9CCu: goto label_18e9cc;
            case 0x18E9D0u: goto label_18e9d0;
            case 0x18E9D4u: goto label_18e9d4;
            case 0x18E9D8u: goto label_18e9d8;
            case 0x18E9DCu: goto label_18e9dc;
            case 0x18E9E0u: goto label_18e9e0;
            case 0x18E9E4u: goto label_18e9e4;
            case 0x18E9E8u: goto label_18e9e8;
            case 0x18E9ECu: goto label_18e9ec;
            case 0x18E9F0u: goto label_18e9f0;
            case 0x18E9F4u: goto label_18e9f4;
            case 0x18E9F8u: goto label_18e9f8;
            case 0x18E9FCu: goto label_18e9fc;
            case 0x18EA00u: goto label_18ea00;
            case 0x18EA04u: goto label_18ea04;
            case 0x18EA08u: goto label_18ea08;
            case 0x18EA0Cu: goto label_18ea0c;
            case 0x18EA10u: goto label_18ea10;
            case 0x18EA14u: goto label_18ea14;
            case 0x18EA18u: goto label_18ea18;
            case 0x18EA1Cu: goto label_18ea1c;
            case 0x18EA20u: goto label_18ea20;
            case 0x18EA24u: goto label_18ea24;
            case 0x18EA28u: goto label_18ea28;
            case 0x18EA2Cu: goto label_18ea2c;
            case 0x18EA30u: goto label_18ea30;
            case 0x18EA34u: goto label_18ea34;
            case 0x18EA38u: goto label_18ea38;
            case 0x18EA3Cu: goto label_18ea3c;
            case 0x18EA40u: goto label_18ea40;
            case 0x18EA44u: goto label_18ea44;
            case 0x18EA48u: goto label_18ea48;
            case 0x18EA4Cu: goto label_18ea4c;
            case 0x18EA50u: goto label_18ea50;
            case 0x18EA54u: goto label_18ea54;
            case 0x18EA58u: goto label_18ea58;
            case 0x18EA5Cu: goto label_18ea5c;
            case 0x18EA60u: goto label_18ea60;
            case 0x18EA64u: goto label_18ea64;
            case 0x18EA68u: goto label_18ea68;
            case 0x18EA6Cu: goto label_18ea6c;
            case 0x18EA70u: goto label_18ea70;
            case 0x18EA74u: goto label_18ea74;
            case 0x18EA78u: goto label_18ea78;
            case 0x18EA7Cu: goto label_18ea7c;
            case 0x18EA80u: goto label_18ea80;
            case 0x18EA84u: goto label_18ea84;
            case 0x18EA88u: goto label_18ea88;
            case 0x18EA8Cu: goto label_18ea8c;
            case 0x18EA90u: goto label_18ea90;
            case 0x18EA94u: goto label_18ea94;
            case 0x18EA98u: goto label_18ea98;
            case 0x18EA9Cu: goto label_18ea9c;
            case 0x18EAA0u: goto label_18eaa0;
            case 0x18EAA4u: goto label_18eaa4;
            case 0x18EAA8u: goto label_18eaa8;
            case 0x18EAACu: goto label_18eaac;
            case 0x18EAB0u: goto label_18eab0;
            case 0x18EAB4u: goto label_18eab4;
            case 0x18EAB8u: goto label_18eab8;
            case 0x18EABCu: goto label_18eabc;
            case 0x18EAC0u: goto label_18eac0;
            case 0x18EAC4u: goto label_18eac4;
            case 0x18EAC8u: goto label_18eac8;
            case 0x18EACCu: goto label_18eacc;
            case 0x18EAD0u: goto label_18ead0;
            case 0x18EAD4u: goto label_18ead4;
            case 0x18EAD8u: goto label_18ead8;
            case 0x18EADCu: goto label_18eadc;
            case 0x18EAE0u: goto label_18eae0;
            case 0x18EAE4u: goto label_18eae4;
            case 0x18EAE8u: goto label_18eae8;
            case 0x18EAECu: goto label_18eaec;
            case 0x18EAF0u: goto label_18eaf0;
            case 0x18EAF4u: goto label_18eaf4;
            case 0x18EAF8u: goto label_18eaf8;
            case 0x18EAFCu: goto label_18eafc;
            case 0x18EB00u: goto label_18eb00;
            case 0x18EB04u: goto label_18eb04;
            case 0x18EB08u: goto label_18eb08;
            case 0x18EB0Cu: goto label_18eb0c;
            case 0x18EB10u: goto label_18eb10;
            case 0x18EB14u: goto label_18eb14;
            case 0x18EB18u: goto label_18eb18;
            case 0x18EB1Cu: goto label_18eb1c;
            case 0x18EB20u: goto label_18eb20;
            case 0x18EB24u: goto label_18eb24;
            case 0x18EB28u: goto label_18eb28;
            case 0x18EB2Cu: goto label_18eb2c;
            case 0x18EB30u: goto label_18eb30;
            case 0x18EB34u: goto label_18eb34;
            case 0x18EB38u: goto label_18eb38;
            case 0x18EB3Cu: goto label_18eb3c;
            case 0x18EB40u: goto label_18eb40;
            case 0x18EB44u: goto label_18eb44;
            case 0x18EB48u: goto label_18eb48;
            case 0x18EB4Cu: goto label_18eb4c;
            case 0x18EB50u: goto label_18eb50;
            case 0x18EB54u: goto label_18eb54;
            case 0x18EB58u: goto label_18eb58;
            case 0x18EB5Cu: goto label_18eb5c;
            case 0x18EB60u: goto label_18eb60;
            case 0x18EB64u: goto label_18eb64;
            case 0x18EB68u: goto label_18eb68;
            case 0x18EB6Cu: goto label_18eb6c;
            case 0x18EB70u: goto label_18eb70;
            case 0x18EB74u: goto label_18eb74;
            case 0x18EB78u: goto label_18eb78;
            case 0x18EB7Cu: goto label_18eb7c;
            case 0x18EB80u: goto label_18eb80;
            case 0x18EB84u: goto label_18eb84;
            case 0x18EB88u: goto label_18eb88;
            case 0x18EB8Cu: goto label_18eb8c;
            case 0x18EB90u: goto label_18eb90;
            case 0x18EB94u: goto label_18eb94;
            case 0x18EB98u: goto label_18eb98;
            case 0x18EB9Cu: goto label_18eb9c;
            case 0x18EBA0u: goto label_18eba0;
            case 0x18EBA4u: goto label_18eba4;
            case 0x18EBA8u: goto label_18eba8;
            case 0x18EBACu: goto label_18ebac;
            case 0x18EBB0u: goto label_18ebb0;
            case 0x18EBB4u: goto label_18ebb4;
            case 0x18EBB8u: goto label_18ebb8;
            case 0x18EBBCu: goto label_18ebbc;
            case 0x18EBC0u: goto label_18ebc0;
            case 0x18EBC4u: goto label_18ebc4;
            case 0x18EBC8u: goto label_18ebc8;
            case 0x18EBCCu: goto label_18ebcc;
            case 0x18EBD0u: goto label_18ebd0;
            case 0x18EBD4u: goto label_18ebd4;
            case 0x18EBD8u: goto label_18ebd8;
            case 0x18EBDCu: goto label_18ebdc;
            case 0x18EBE0u: goto label_18ebe0;
            case 0x18EBE4u: goto label_18ebe4;
            case 0x18EBE8u: goto label_18ebe8;
            case 0x18EBECu: goto label_18ebec;
            case 0x18EBF0u: goto label_18ebf0;
            case 0x18EBF4u: goto label_18ebf4;
            case 0x18EBF8u: goto label_18ebf8;
            case 0x18EBFCu: goto label_18ebfc;
            case 0x18EC00u: goto label_18ec00;
            case 0x18EC04u: goto label_18ec04;
            case 0x18EC08u: goto label_18ec08;
            case 0x18EC0Cu: goto label_18ec0c;
            case 0x18EC10u: goto label_18ec10;
            case 0x18EC14u: goto label_18ec14;
            case 0x18EC18u: goto label_18ec18;
            case 0x18EC1Cu: goto label_18ec1c;
            case 0x18EC20u: goto label_18ec20;
            case 0x18EC24u: goto label_18ec24;
            case 0x18EC28u: goto label_18ec28;
            case 0x18EC2Cu: goto label_18ec2c;
            case 0x18EC30u: goto label_18ec30;
            case 0x18EC34u: goto label_18ec34;
            case 0x18EC38u: goto label_18ec38;
            case 0x18EC3Cu: goto label_18ec3c;
            case 0x18EC40u: goto label_18ec40;
            case 0x18EC44u: goto label_18ec44;
            case 0x18EC48u: goto label_18ec48;
            case 0x18EC4Cu: goto label_18ec4c;
            case 0x18EC50u: goto label_18ec50;
            case 0x18EC54u: goto label_18ec54;
            case 0x18EC58u: goto label_18ec58;
            case 0x18EC5Cu: goto label_18ec5c;
            case 0x18EC60u: goto label_18ec60;
            case 0x18EC64u: goto label_18ec64;
            case 0x18EC68u: goto label_18ec68;
            case 0x18EC6Cu: goto label_18ec6c;
            case 0x18EC70u: goto label_18ec70;
            case 0x18EC74u: goto label_18ec74;
            case 0x18EC78u: goto label_18ec78;
            case 0x18EC7Cu: goto label_18ec7c;
            case 0x18EC80u: goto label_18ec80;
            case 0x18EC84u: goto label_18ec84;
            case 0x18EC88u: goto label_18ec88;
            case 0x18EC8Cu: goto label_18ec8c;
            case 0x18EC90u: goto label_18ec90;
            case 0x18EC94u: goto label_18ec94;
            case 0x18EC98u: goto label_18ec98;
            case 0x18EC9Cu: goto label_18ec9c;
            case 0x18ECA0u: goto label_18eca0;
            case 0x18ECA4u: goto label_18eca4;
            case 0x18ECA8u: goto label_18eca8;
            case 0x18ECACu: goto label_18ecac;
            case 0x18ECB0u: goto label_18ecb0;
            case 0x18ECB4u: goto label_18ecb4;
            case 0x18ECB8u: goto label_18ecb8;
            case 0x18ECBCu: goto label_18ecbc;
            case 0x18ECC0u: goto label_18ecc0;
            case 0x18ECC4u: goto label_18ecc4;
            case 0x18ECC8u: goto label_18ecc8;
            case 0x18ECCCu: goto label_18eccc;
            case 0x18ECD0u: goto label_18ecd0;
            case 0x18ECD4u: goto label_18ecd4;
            case 0x18ECD8u: goto label_18ecd8;
            case 0x18ECDCu: goto label_18ecdc;
            case 0x18ECE0u: goto label_18ece0;
            case 0x18ECE4u: goto label_18ece4;
            case 0x18ECE8u: goto label_18ece8;
            case 0x18ECECu: goto label_18ecec;
            case 0x18ECF0u: goto label_18ecf0;
            case 0x18ECF4u: goto label_18ecf4;
            case 0x18ECF8u: goto label_18ecf8;
            case 0x18ECFCu: goto label_18ecfc;
            case 0x18ED00u: goto label_18ed00;
            case 0x18ED04u: goto label_18ed04;
            case 0x18ED08u: goto label_18ed08;
            case 0x18ED0Cu: goto label_18ed0c;
            case 0x18ED10u: goto label_18ed10;
            case 0x18ED14u: goto label_18ed14;
            case 0x18ED18u: goto label_18ed18;
            case 0x18ED1Cu: goto label_18ed1c;
            case 0x18ED20u: goto label_18ed20;
            case 0x18ED24u: goto label_18ed24;
            case 0x18ED28u: goto label_18ed28;
            case 0x18ED2Cu: goto label_18ed2c;
            case 0x18ED30u: goto label_18ed30;
            case 0x18ED34u: goto label_18ed34;
            case 0x18ED38u: goto label_18ed38;
            case 0x18ED3Cu: goto label_18ed3c;
            case 0x18ED40u: goto label_18ed40;
            case 0x18ED44u: goto label_18ed44;
            case 0x18ED48u: goto label_18ed48;
            case 0x18ED4Cu: goto label_18ed4c;
            case 0x18ED50u: goto label_18ed50;
            case 0x18ED54u: goto label_18ed54;
            case 0x18ED58u: goto label_18ed58;
            case 0x18ED5Cu: goto label_18ed5c;
            case 0x18ED60u: goto label_18ed60;
            case 0x18ED64u: goto label_18ed64;
            case 0x18ED68u: goto label_18ed68;
            case 0x18ED6Cu: goto label_18ed6c;
            case 0x18ED70u: goto label_18ed70;
            case 0x18ED74u: goto label_18ed74;
            case 0x18ED78u: goto label_18ed78;
            case 0x18ED7Cu: goto label_18ed7c;
            case 0x18ED80u: goto label_18ed80;
            case 0x18ED84u: goto label_18ed84;
            case 0x18ED88u: goto label_18ed88;
            case 0x18ED8Cu: goto label_18ed8c;
            case 0x18ED90u: goto label_18ed90;
            case 0x18ED94u: goto label_18ed94;
            case 0x18ED98u: goto label_18ed98;
            case 0x18ED9Cu: goto label_18ed9c;
            case 0x18EDA0u: goto label_18eda0;
            case 0x18EDA4u: goto label_18eda4;
            case 0x18EDA8u: goto label_18eda8;
            case 0x18EDACu: goto label_18edac;
            case 0x18EDB0u: goto label_18edb0;
            case 0x18EDB4u: goto label_18edb4;
            case 0x18EDB8u: goto label_18edb8;
            case 0x18EDBCu: goto label_18edbc;
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EDC4u: goto label_18edc4;
            case 0x18EDC8u: goto label_18edc8;
            case 0x18EDCCu: goto label_18edcc;
            case 0x18EDD0u: goto label_18edd0;
            case 0x18EDD4u: goto label_18edd4;
            case 0x18EDD8u: goto label_18edd8;
            case 0x18EDDCu: goto label_18eddc;
            case 0x18EDE0u: goto label_18ede0;
            case 0x18EDE4u: goto label_18ede4;
            case 0x18EDE8u: goto label_18ede8;
            case 0x18EDECu: goto label_18edec;
            case 0x18EDF0u: goto label_18edf0;
            case 0x18EDF4u: goto label_18edf4;
            case 0x18EDF8u: goto label_18edf8;
            case 0x18EDFCu: goto label_18edfc;
            case 0x18EE00u: goto label_18ee00;
            case 0x18EE04u: goto label_18ee04;
            case 0x18EE08u: goto label_18ee08;
            case 0x18EE0Cu: goto label_18ee0c;
            case 0x18EE10u: goto label_18ee10;
            case 0x18EE14u: goto label_18ee14;
            case 0x18EE18u: goto label_18ee18;
            case 0x18EE1Cu: goto label_18ee1c;
            case 0x18EE20u: goto label_18ee20;
            case 0x18EE24u: goto label_18ee24;
            case 0x18EE28u: goto label_18ee28;
            case 0x18EE2Cu: goto label_18ee2c;
            case 0x18EE30u: goto label_18ee30;
            case 0x18EE34u: goto label_18ee34;
            case 0x18EE38u: goto label_18ee38;
            case 0x18EE3Cu: goto label_18ee3c;
            case 0x18EE40u: goto label_18ee40;
            case 0x18EE44u: goto label_18ee44;
            case 0x18EE48u: goto label_18ee48;
            case 0x18EE4Cu: goto label_18ee4c;
            case 0x18EE50u: goto label_18ee50;
            case 0x18EE54u: goto label_18ee54;
            case 0x18EE58u: goto label_18ee58;
            case 0x18EE5Cu: goto label_18ee5c;
            case 0x18EE60u: goto label_18ee60;
            case 0x18EE64u: goto label_18ee64;
            case 0x18EE68u: goto label_18ee68;
            case 0x18EE6Cu: goto label_18ee6c;
            case 0x18EE70u: goto label_18ee70;
            case 0x18EE74u: goto label_18ee74;
            case 0x18EE78u: goto label_18ee78;
            case 0x18EE7Cu: goto label_18ee7c;
            case 0x18EE80u: goto label_18ee80;
            case 0x18EE84u: goto label_18ee84;
            case 0x18EE88u: goto label_18ee88;
            case 0x18EE8Cu: goto label_18ee8c;
            case 0x18EE90u: goto label_18ee90;
            case 0x18EE94u: goto label_18ee94;
            case 0x18EE98u: goto label_18ee98;
            case 0x18EE9Cu: goto label_18ee9c;
            case 0x18EEA0u: goto label_18eea0;
            case 0x18EEA4u: goto label_18eea4;
            case 0x18EEA8u: goto label_18eea8;
            case 0x18EEACu: goto label_18eeac;
            case 0x18EEB0u: goto label_18eeb0;
            case 0x18EEB4u: goto label_18eeb4;
            case 0x18EEB8u: goto label_18eeb8;
            case 0x18EEBCu: goto label_18eebc;
            case 0x18EEC0u: goto label_18eec0;
            case 0x18EEC4u: goto label_18eec4;
            case 0x18EEC8u: goto label_18eec8;
            case 0x18EECCu: goto label_18eecc;
            case 0x18EED0u: goto label_18eed0;
            case 0x18EED4u: goto label_18eed4;
            case 0x18EED8u: goto label_18eed8;
            case 0x18EEDCu: goto label_18eedc;
            case 0x18EEE0u: goto label_18eee0;
            case 0x18EEE4u: goto label_18eee4;
            case 0x18EEE8u: goto label_18eee8;
            case 0x18EEECu: goto label_18eeec;
            case 0x18EEF0u: goto label_18eef0;
            case 0x18EEF4u: goto label_18eef4;
            case 0x18EEF8u: goto label_18eef8;
            case 0x18EEFCu: goto label_18eefc;
            case 0x18EF00u: goto label_18ef00;
            case 0x18EF04u: goto label_18ef04;
            case 0x18EF08u: goto label_18ef08;
            case 0x18EF0Cu: goto label_18ef0c;
            case 0x18EF10u: goto label_18ef10;
            case 0x18EF14u: goto label_18ef14;
            case 0x18EF18u: goto label_18ef18;
            case 0x18EF1Cu: goto label_18ef1c;
            case 0x18EF20u: goto label_18ef20;
            case 0x18EF24u: goto label_18ef24;
            case 0x18EF28u: goto label_18ef28;
            case 0x18EF2Cu: goto label_18ef2c;
            case 0x18EF30u: goto label_18ef30;
            case 0x18EF34u: goto label_18ef34;
            case 0x18EF38u: goto label_18ef38;
            case 0x18EF3Cu: goto label_18ef3c;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF44u: goto label_18ef44;
            case 0x18EF48u: goto label_18ef48;
            case 0x18EF4Cu: goto label_18ef4c;
            case 0x18EF50u: goto label_18ef50;
            case 0x18EF54u: goto label_18ef54;
            case 0x18EF58u: goto label_18ef58;
            case 0x18EF5Cu: goto label_18ef5c;
            case 0x18EF60u: goto label_18ef60;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF68u: goto label_18ef68;
            case 0x18EF6Cu: goto label_18ef6c;
            case 0x18EF70u: goto label_18ef70;
            case 0x18EF74u: goto label_18ef74;
            case 0x18EF78u: goto label_18ef78;
            case 0x18EF7Cu: goto label_18ef7c;
            case 0x18EF80u: goto label_18ef80;
            case 0x18EF84u: goto label_18ef84;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EF8Cu: goto label_18ef8c;
            case 0x18EF90u: goto label_18ef90;
            case 0x18EF94u: goto label_18ef94;
            case 0x18EF98u: goto label_18ef98;
            case 0x18EF9Cu: goto label_18ef9c;
            case 0x18EFA0u: goto label_18efa0;
            case 0x18EFA4u: goto label_18efa4;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFACu: goto label_18efac;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18EFB8u: goto label_18efb8;
            case 0x18EFBCu: goto label_18efbc;
            case 0x18EFC0u: goto label_18efc0;
            case 0x18EFC4u: goto label_18efc4;
            case 0x18EFC8u: goto label_18efc8;
            case 0x18EFCCu: goto label_18efcc;
            case 0x18EFD0u: goto label_18efd0;
            case 0x18EFD4u: goto label_18efd4;
            case 0x18EFD8u: goto label_18efd8;
            case 0x18EFDCu: goto label_18efdc;
            case 0x18EFE0u: goto label_18efe0;
            case 0x18EFE4u: goto label_18efe4;
            case 0x18EFE8u: goto label_18efe8;
            case 0x18EFECu: goto label_18efec;
            case 0x18EFF0u: goto label_18eff0;
            case 0x18EFF4u: goto label_18eff4;
            case 0x18EFF8u: goto label_18eff8;
            case 0x18EFFCu: goto label_18effc;
            case 0x18F000u: goto label_18f000;
            case 0x18F004u: goto label_18f004;
            case 0x18F008u: goto label_18f008;
            case 0x18F00Cu: goto label_18f00c;
            case 0x18F010u: goto label_18f010;
            case 0x18F014u: goto label_18f014;
            case 0x18F018u: goto label_18f018;
            case 0x18F01Cu: goto label_18f01c;
            case 0x18F020u: goto label_18f020;
            case 0x18F024u: goto label_18f024;
            case 0x18F028u: goto label_18f028;
            case 0x18F02Cu: goto label_18f02c;
            case 0x18F030u: goto label_18f030;
            case 0x18F034u: goto label_18f034;
            case 0x18F038u: goto label_18f038;
            case 0x18F03Cu: goto label_18f03c;
            case 0x18F040u: goto label_18f040;
            case 0x18F044u: goto label_18f044;
            case 0x18F048u: goto label_18f048;
            case 0x18F04Cu: goto label_18f04c;
            case 0x18F050u: goto label_18f050;
            case 0x18F054u: goto label_18f054;
            case 0x18F058u: goto label_18f058;
            case 0x18F05Cu: goto label_18f05c;
            case 0x18F060u: goto label_18f060;
            case 0x18F064u: goto label_18f064;
            case 0x18F068u: goto label_18f068;
            case 0x18F06Cu: goto label_18f06c;
            case 0x18F070u: goto label_18f070;
            case 0x18F074u: goto label_18f074;
            case 0x18F078u: goto label_18f078;
            case 0x18F07Cu: goto label_18f07c;
            case 0x18F080u: goto label_18f080;
            case 0x18F084u: goto label_18f084;
            case 0x18F088u: goto label_18f088;
            case 0x18F08Cu: goto label_18f08c;
            case 0x18F090u: goto label_18f090;
            case 0x18F094u: goto label_18f094;
            case 0x18F098u: goto label_18f098;
            case 0x18F09Cu: goto label_18f09c;
            case 0x18F0A0u: goto label_18f0a0;
            case 0x18F0A4u: goto label_18f0a4;
            case 0x18F0A8u: goto label_18f0a8;
            case 0x18F0ACu: goto label_18f0ac;
            case 0x18F0B0u: goto label_18f0b0;
            case 0x18F0B4u: goto label_18f0b4;
            case 0x18F0B8u: goto label_18f0b8;
            case 0x18F0BCu: goto label_18f0bc;
            case 0x18F0C0u: goto label_18f0c0;
            case 0x18F0C4u: goto label_18f0c4;
            case 0x18F0C8u: goto label_18f0c8;
            case 0x18F0CCu: goto label_18f0cc;
            case 0x18F0D0u: goto label_18f0d0;
            case 0x18F0D4u: goto label_18f0d4;
            case 0x18F0D8u: goto label_18f0d8;
            case 0x18F0DCu: goto label_18f0dc;
            case 0x18F0E0u: goto label_18f0e0;
            case 0x18F0E4u: goto label_18f0e4;
            case 0x18F0E8u: goto label_18f0e8;
            case 0x18F0ECu: goto label_18f0ec;
            case 0x18F0F0u: goto label_18f0f0;
            case 0x18F0F4u: goto label_18f0f4;
            case 0x18F0F8u: goto label_18f0f8;
            case 0x18F0FCu: goto label_18f0fc;
            case 0x18F100u: goto label_18f100;
            case 0x18F104u: goto label_18f104;
            case 0x18F108u: goto label_18f108;
            case 0x18F10Cu: goto label_18f10c;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F118u: goto label_18f118;
            case 0x18F11Cu: goto label_18f11c;
            case 0x18F120u: goto label_18f120;
            case 0x18F124u: goto label_18f124;
            case 0x18F128u: goto label_18f128;
            case 0x18F12Cu: goto label_18f12c;
            case 0x18F130u: goto label_18f130;
            case 0x18F134u: goto label_18f134;
            case 0x18F138u: goto label_18f138;
            case 0x18F13Cu: goto label_18f13c;
            case 0x18F140u: goto label_18f140;
            case 0x18F144u: goto label_18f144;
            case 0x18F148u: goto label_18f148;
            case 0x18F14Cu: goto label_18f14c;
            case 0x18F150u: goto label_18f150;
            case 0x18F154u: goto label_18f154;
            case 0x18F158u: goto label_18f158;
            case 0x18F15Cu: goto label_18f15c;
            case 0x18F160u: goto label_18f160;
            case 0x18F164u: goto label_18f164;
            case 0x18F168u: goto label_18f168;
            case 0x18F16Cu: goto label_18f16c;
            case 0x18F170u: goto label_18f170;
            case 0x18F174u: goto label_18f174;
            case 0x18F178u: goto label_18f178;
            case 0x18F17Cu: goto label_18f17c;
            case 0x18F180u: goto label_18f180;
            case 0x18F184u: goto label_18f184;
            case 0x18F188u: goto label_18f188;
            case 0x18F18Cu: goto label_18f18c;
            case 0x18F190u: goto label_18f190;
            case 0x18F194u: goto label_18f194;
            case 0x18F198u: goto label_18f198;
            case 0x18F19Cu: goto label_18f19c;
            case 0x18F1A0u: goto label_18f1a0;
            case 0x18F1A4u: goto label_18f1a4;
            case 0x18F1A8u: goto label_18f1a8;
            case 0x18F1ACu: goto label_18f1ac;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F1B4u: goto label_18f1b4;
            case 0x18F1B8u: goto label_18f1b8;
            case 0x18F1BCu: goto label_18f1bc;
            case 0x18F1C0u: goto label_18f1c0;
            case 0x18F1C4u: goto label_18f1c4;
            case 0x18F1C8u: goto label_18f1c8;
            case 0x18F1CCu: goto label_18f1cc;
            case 0x18F1D0u: goto label_18f1d0;
            case 0x18F1D4u: goto label_18f1d4;
            case 0x18F1D8u: goto label_18f1d8;
            case 0x18F1DCu: goto label_18f1dc;
            case 0x18F1E0u: goto label_18f1e0;
            case 0x18F1E4u: goto label_18f1e4;
            case 0x18F1E8u: goto label_18f1e8;
            case 0x18F1ECu: goto label_18f1ec;
            case 0x18F1F0u: goto label_18f1f0;
            case 0x18F1F4u: goto label_18f1f4;
            case 0x18F1F8u: goto label_18f1f8;
            case 0x18F1FCu: goto label_18f1fc;
            case 0x18F200u: goto label_18f200;
            case 0x18F204u: goto label_18f204;
            case 0x18F208u: goto label_18f208;
            case 0x18F20Cu: goto label_18f20c;
            case 0x18F210u: goto label_18f210;
            case 0x18F214u: goto label_18f214;
            case 0x18F218u: goto label_18f218;
            case 0x18F21Cu: goto label_18f21c;
            case 0x18F220u: goto label_18f220;
            case 0x18F224u: goto label_18f224;
            case 0x18F228u: goto label_18f228;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F230u: goto label_18f230;
            case 0x18F234u: goto label_18f234;
            case 0x18F238u: goto label_18f238;
            case 0x18F23Cu: goto label_18f23c;
            case 0x18F240u: goto label_18f240;
            case 0x18F244u: goto label_18f244;
            case 0x18F248u: goto label_18f248;
            case 0x18F24Cu: goto label_18f24c;
            case 0x18F250u: goto label_18f250;
            case 0x18F254u: goto label_18f254;
            case 0x18F258u: goto label_18f258;
            case 0x18F25Cu: goto label_18f25c;
            case 0x18F260u: goto label_18f260;
            case 0x18F264u: goto label_18f264;
            case 0x18F268u: goto label_18f268;
            case 0x18F26Cu: goto label_18f26c;
            case 0x18F270u: goto label_18f270;
            case 0x18F274u: goto label_18f274;
            case 0x18F278u: goto label_18f278;
            case 0x18F27Cu: goto label_18f27c;
            case 0x18F280u: goto label_18f280;
            case 0x18F284u: goto label_18f284;
            case 0x18F288u: goto label_18f288;
            case 0x18F28Cu: goto label_18f28c;
            case 0x18F290u: goto label_18f290;
            case 0x18F294u: goto label_18f294;
            case 0x18F298u: goto label_18f298;
            case 0x18F29Cu: goto label_18f29c;
            case 0x18F2A0u: goto label_18f2a0;
            case 0x18F2A4u: goto label_18f2a4;
            case 0x18F2A8u: goto label_18f2a8;
            case 0x18F2ACu: goto label_18f2ac;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B4u: goto label_18f2b4;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F2BCu: goto label_18f2bc;
            case 0x18F2C0u: goto label_18f2c0;
            case 0x18F2C4u: goto label_18f2c4;
            case 0x18F2C8u: goto label_18f2c8;
            case 0x18F2CCu: goto label_18f2cc;
            case 0x18F2D0u: goto label_18f2d0;
            case 0x18F2D4u: goto label_18f2d4;
            case 0x18F2D8u: goto label_18f2d8;
            case 0x18F2DCu: goto label_18f2dc;
            case 0x18F2E0u: goto label_18f2e0;
            case 0x18F2E4u: goto label_18f2e4;
            case 0x18F2E8u: goto label_18f2e8;
            case 0x18F2ECu: goto label_18f2ec;
            case 0x18F2F0u: goto label_18f2f0;
            case 0x18F2F4u: goto label_18f2f4;
            case 0x18F2F8u: goto label_18f2f8;
            case 0x18F2FCu: goto label_18f2fc;
            case 0x18F300u: goto label_18f300;
            case 0x18F304u: goto label_18f304;
            case 0x18F308u: goto label_18f308;
            case 0x18F30Cu: goto label_18f30c;
            case 0x18F310u: goto label_18f310;
            case 0x18F314u: goto label_18f314;
            case 0x18F318u: goto label_18f318;
            case 0x18F31Cu: goto label_18f31c;
            case 0x18F320u: goto label_18f320;
            case 0x18F324u: goto label_18f324;
            case 0x18F328u: goto label_18f328;
            case 0x18F32Cu: goto label_18f32c;
            case 0x18F330u: goto label_18f330;
            case 0x18F334u: goto label_18f334;
            case 0x18F338u: goto label_18f338;
            case 0x18F33Cu: goto label_18f33c;
            case 0x18F340u: goto label_18f340;
            case 0x18F344u: goto label_18f344;
            case 0x18F348u: goto label_18f348;
            case 0x18F34Cu: goto label_18f34c;
            case 0x18F350u: goto label_18f350;
            case 0x18F354u: goto label_18f354;
            case 0x18F358u: goto label_18f358;
            case 0x18F35Cu: goto label_18f35c;
            case 0x18F360u: goto label_18f360;
            case 0x18F364u: goto label_18f364;
            case 0x18F368u: goto label_18f368;
            case 0x18F36Cu: goto label_18f36c;
            case 0x18F370u: goto label_18f370;
            case 0x18F374u: goto label_18f374;
            case 0x18F378u: goto label_18f378;
            case 0x18F37Cu: goto label_18f37c;
            case 0x18F380u: goto label_18f380;
            case 0x18F384u: goto label_18f384;
            case 0x18F388u: goto label_18f388;
            case 0x18F38Cu: goto label_18f38c;
            case 0x18F390u: goto label_18f390;
            case 0x18F394u: goto label_18f394;
            case 0x18F398u: goto label_18f398;
            case 0x18F39Cu: goto label_18f39c;
            case 0x18F3A0u: goto label_18f3a0;
            case 0x18F3A4u: goto label_18f3a4;
            case 0x18F3A8u: goto label_18f3a8;
            case 0x18F3ACu: goto label_18f3ac;
            case 0x18F3B0u: goto label_18f3b0;
            case 0x18F3B4u: goto label_18f3b4;
            case 0x18F3B8u: goto label_18f3b8;
            case 0x18F3BCu: goto label_18f3bc;
            case 0x18F3C0u: goto label_18f3c0;
            case 0x18F3C4u: goto label_18f3c4;
            case 0x18F3C8u: goto label_18f3c8;
            case 0x18F3CCu: goto label_18f3cc;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F3D4u: goto label_18f3d4;
            case 0x18F3D8u: goto label_18f3d8;
            case 0x18F3DCu: goto label_18f3dc;
            case 0x18F3E0u: goto label_18f3e0;
            case 0x18F3E4u: goto label_18f3e4;
            case 0x18F3E8u: goto label_18f3e8;
            case 0x18F3ECu: goto label_18f3ec;
            case 0x18F3F0u: goto label_18f3f0;
            case 0x18F3F4u: goto label_18f3f4;
            case 0x18F3F8u: goto label_18f3f8;
            case 0x18F3FCu: goto label_18f3fc;
            case 0x18F400u: goto label_18f400;
            case 0x18F404u: goto label_18f404;
            case 0x18F408u: goto label_18f408;
            case 0x18F40Cu: goto label_18f40c;
            case 0x18F410u: goto label_18f410;
            case 0x18F414u: goto label_18f414;
            case 0x18F418u: goto label_18f418;
            case 0x18F41Cu: goto label_18f41c;
            case 0x18F420u: goto label_18f420;
            case 0x18F424u: goto label_18f424;
            case 0x18F428u: goto label_18f428;
            case 0x18F42Cu: goto label_18f42c;
            case 0x18F430u: goto label_18f430;
            case 0x18F434u: goto label_18f434;
            case 0x18F438u: goto label_18f438;
            case 0x18F43Cu: goto label_18f43c;
            case 0x18F440u: goto label_18f440;
            case 0x18F444u: goto label_18f444;
            case 0x18F448u: goto label_18f448;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            case 0x18F458u: goto label_18f458;
            case 0x18F45Cu: goto label_18f45c;
            case 0x18F460u: goto label_18f460;
            case 0x18F464u: goto label_18f464;
            case 0x18F468u: goto label_18f468;
            case 0x18F46Cu: goto label_18f46c;
            case 0x18F470u: goto label_18f470;
            case 0x18F474u: goto label_18f474;
            case 0x18F478u: goto label_18f478;
            case 0x18F47Cu: goto label_18f47c;
            case 0x18F480u: goto label_18f480;
            case 0x18F484u: goto label_18f484;
            case 0x18F488u: goto label_18f488;
            case 0x18F48Cu: goto label_18f48c;
            case 0x18F490u: goto label_18f490;
            case 0x18F494u: goto label_18f494;
            case 0x18F498u: goto label_18f498;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4A0u: goto label_18f4a0;
            case 0x18F4A4u: goto label_18f4a4;
            case 0x18F4A8u: goto label_18f4a8;
            case 0x18F4ACu: goto label_18f4ac;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4B8u: goto label_18f4b8;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F4C0u: goto label_18f4c0;
            case 0x18F4C4u: goto label_18f4c4;
            case 0x18F4C8u: goto label_18f4c8;
            case 0x18F4CCu: goto label_18f4cc;
            case 0x18F4D0u: goto label_18f4d0;
            case 0x18F4D4u: goto label_18f4d4;
            case 0x18F4D8u: goto label_18f4d8;
            case 0x18F4DCu: goto label_18f4dc;
            case 0x18F4E0u: goto label_18f4e0;
            case 0x18F4E4u: goto label_18f4e4;
            case 0x18F4E8u: goto label_18f4e8;
            case 0x18F4ECu: goto label_18f4ec;
            case 0x18F4F0u: goto label_18f4f0;
            case 0x18F4F4u: goto label_18f4f4;
            case 0x18F4F8u: goto label_18f4f8;
            case 0x18F4FCu: goto label_18f4fc;
            case 0x18F500u: goto label_18f500;
            case 0x18F504u: goto label_18f504;
            case 0x18F508u: goto label_18f508;
            case 0x18F50Cu: goto label_18f50c;
            case 0x18F510u: goto label_18f510;
            case 0x18F514u: goto label_18f514;
            case 0x18F518u: goto label_18f518;
            case 0x18F51Cu: goto label_18f51c;
            case 0x18F520u: goto label_18f520;
            case 0x18F524u: goto label_18f524;
            case 0x18F528u: goto label_18f528;
            case 0x18F52Cu: goto label_18f52c;
            case 0x18F530u: goto label_18f530;
            case 0x18F534u: goto label_18f534;
            case 0x18F538u: goto label_18f538;
            case 0x18F53Cu: goto label_18f53c;
            case 0x18F540u: goto label_18f540;
            case 0x18F544u: goto label_18f544;
            case 0x18F548u: goto label_18f548;
            case 0x18F54Cu: goto label_18f54c;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F558u: goto label_18f558;
            case 0x18F55Cu: goto label_18f55c;
            case 0x18F560u: goto label_18f560;
            case 0x18F564u: goto label_18f564;
            case 0x18F568u: goto label_18f568;
            case 0x18F56Cu: goto label_18f56c;
            case 0x18F570u: goto label_18f570;
            case 0x18F574u: goto label_18f574;
            case 0x18F578u: goto label_18f578;
            case 0x18F57Cu: goto label_18f57c;
            case 0x18F580u: goto label_18f580;
            case 0x18F584u: goto label_18f584;
            case 0x18F588u: goto label_18f588;
            case 0x18F58Cu: goto label_18f58c;
            case 0x18F590u: goto label_18f590;
            case 0x18F594u: goto label_18f594;
            case 0x18F598u: goto label_18f598;
            case 0x18F59Cu: goto label_18f59c;
            case 0x18F5A0u: goto label_18f5a0;
            case 0x18F5A4u: goto label_18f5a4;
            case 0x18F5A8u: goto label_18f5a8;
            case 0x18F5ACu: goto label_18f5ac;
            case 0x18F5B0u: goto label_18f5b0;
            case 0x18F5B4u: goto label_18f5b4;
            case 0x18F5B8u: goto label_18f5b8;
            case 0x18F5BCu: goto label_18f5bc;
            case 0x18F5C0u: goto label_18f5c0;
            case 0x18F5C4u: goto label_18f5c4;
            case 0x18F5C8u: goto label_18f5c8;
            case 0x18F5CCu: goto label_18f5cc;
            case 0x18F5D0u: goto label_18f5d0;
            case 0x18F5D4u: goto label_18f5d4;
            case 0x18F5D8u: goto label_18f5d8;
            case 0x18F5DCu: goto label_18f5dc;
            case 0x18F5E0u: goto label_18f5e0;
            case 0x18F5E4u: goto label_18f5e4;
            case 0x18F5E8u: goto label_18f5e8;
            case 0x18F5ECu: goto label_18f5ec;
            case 0x18F5F0u: goto label_18f5f0;
            case 0x18F5F4u: goto label_18f5f4;
            case 0x18F5F8u: goto label_18f5f8;
            case 0x18F5FCu: goto label_18f5fc;
            case 0x18F600u: goto label_18f600;
            case 0x18F604u: goto label_18f604;
            case 0x18F608u: goto label_18f608;
            case 0x18F60Cu: goto label_18f60c;
            case 0x18F610u: goto label_18f610;
            case 0x18F614u: goto label_18f614;
            case 0x18F618u: goto label_18f618;
            case 0x18F61Cu: goto label_18f61c;
            case 0x18F620u: goto label_18f620;
            case 0x18F624u: goto label_18f624;
            case 0x18F628u: goto label_18f628;
            case 0x18F62Cu: goto label_18f62c;
            case 0x18F630u: goto label_18f630;
            case 0x18F634u: goto label_18f634;
            case 0x18F638u: goto label_18f638;
            case 0x18F63Cu: goto label_18f63c;
            case 0x18F640u: goto label_18f640;
            case 0x18F644u: goto label_18f644;
            case 0x18F648u: goto label_18f648;
            case 0x18F64Cu: goto label_18f64c;
            case 0x18F650u: goto label_18f650;
            case 0x18F654u: goto label_18f654;
            case 0x18F658u: goto label_18f658;
            case 0x18F65Cu: goto label_18f65c;
            case 0x18F660u: goto label_18f660;
            case 0x18F664u: goto label_18f664;
            case 0x18F668u: goto label_18f668;
            case 0x18F66Cu: goto label_18f66c;
            case 0x18F670u: goto label_18f670;
            case 0x18F674u: goto label_18f674;
            case 0x18F678u: goto label_18f678;
            case 0x18F67Cu: goto label_18f67c;
            case 0x18F680u: goto label_18f680;
            case 0x18F684u: goto label_18f684;
            case 0x18F688u: goto label_18f688;
            case 0x18F68Cu: goto label_18f68c;
            case 0x18F690u: goto label_18f690;
            case 0x18F694u: goto label_18f694;
            case 0x18F698u: goto label_18f698;
            case 0x18F69Cu: goto label_18f69c;
            case 0x18F6A0u: goto label_18f6a0;
            case 0x18F6A4u: goto label_18f6a4;
            case 0x18F6A8u: goto label_18f6a8;
            case 0x18F6ACu: goto label_18f6ac;
            case 0x18F6B0u: goto label_18f6b0;
            case 0x18F6B4u: goto label_18f6b4;
            case 0x18F6B8u: goto label_18f6b8;
            case 0x18F6BCu: goto label_18f6bc;
            case 0x18F6C0u: goto label_18f6c0;
            case 0x18F6C4u: goto label_18f6c4;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F6D0u: goto label_18f6d0;
            case 0x18F6D4u: goto label_18f6d4;
            case 0x18F6D8u: goto label_18f6d8;
            case 0x18F6DCu: goto label_18f6dc;
            case 0x18F6E0u: goto label_18f6e0;
            case 0x18F6E4u: goto label_18f6e4;
            case 0x18F6E8u: goto label_18f6e8;
            case 0x18F6ECu: goto label_18f6ec;
            case 0x18F6F0u: goto label_18f6f0;
            case 0x18F6F4u: goto label_18f6f4;
            case 0x18F6F8u: goto label_18f6f8;
            case 0x18F6FCu: goto label_18f6fc;
            case 0x18F700u: goto label_18f700;
            case 0x18F704u: goto label_18f704;
            case 0x18F708u: goto label_18f708;
            case 0x18F70Cu: goto label_18f70c;
            case 0x18F710u: goto label_18f710;
            case 0x18F714u: goto label_18f714;
            case 0x18F718u: goto label_18f718;
            case 0x18F71Cu: goto label_18f71c;
            case 0x18F720u: goto label_18f720;
            case 0x18F724u: goto label_18f724;
            case 0x18F728u: goto label_18f728;
            case 0x18F72Cu: goto label_18f72c;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F738u: goto label_18f738;
            case 0x18F73Cu: goto label_18f73c;
            case 0x18F740u: goto label_18f740;
            case 0x18F744u: goto label_18f744;
            case 0x18F748u: goto label_18f748;
            case 0x18F74Cu: goto label_18f74c;
            case 0x18F750u: goto label_18f750;
            case 0x18F754u: goto label_18f754;
            case 0x18F758u: goto label_18f758;
            case 0x18F75Cu: goto label_18f75c;
            case 0x18F760u: goto label_18f760;
            case 0x18F764u: goto label_18f764;
            case 0x18F768u: goto label_18f768;
            case 0x18F76Cu: goto label_18f76c;
            case 0x18F770u: goto label_18f770;
            case 0x18F774u: goto label_18f774;
            case 0x18F778u: goto label_18f778;
            case 0x18F77Cu: goto label_18f77c;
            case 0x18F780u: goto label_18f780;
            case 0x18F784u: goto label_18f784;
            case 0x18F788u: goto label_18f788;
            case 0x18F78Cu: goto label_18f78c;
            case 0x18F790u: goto label_18f790;
            case 0x18F794u: goto label_18f794;
            case 0x18F798u: goto label_18f798;
            case 0x18F79Cu: goto label_18f79c;
            case 0x18F7A0u: goto label_18f7a0;
            case 0x18F7A4u: goto label_18f7a4;
            case 0x18F7A8u: goto label_18f7a8;
            case 0x18F7ACu: goto label_18f7ac;
            case 0x18F7B0u: goto label_18f7b0;
            case 0x18F7B4u: goto label_18f7b4;
            case 0x18F7B8u: goto label_18f7b8;
            case 0x18F7BCu: goto label_18f7bc;
            case 0x18F7C0u: goto label_18f7c0;
            case 0x18F7C4u: goto label_18f7c4;
            case 0x18F7C8u: goto label_18f7c8;
            case 0x18F7CCu: goto label_18f7cc;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F7D4u: goto label_18f7d4;
            case 0x18F7D8u: goto label_18f7d8;
            case 0x18F7DCu: goto label_18f7dc;
            case 0x18F7E0u: goto label_18f7e0;
            case 0x18F7E4u: goto label_18f7e4;
            case 0x18F7E8u: goto label_18f7e8;
            case 0x18F7ECu: goto label_18f7ec;
            case 0x18F7F0u: goto label_18f7f0;
            case 0x18F7F4u: goto label_18f7f4;
            case 0x18F7F8u: goto label_18f7f8;
            case 0x18F7FCu: goto label_18f7fc;
            case 0x18F800u: goto label_18f800;
            case 0x18F804u: goto label_18f804;
            case 0x18F808u: goto label_18f808;
            case 0x18F80Cu: goto label_18f80c;
            case 0x18F810u: goto label_18f810;
            case 0x18F814u: goto label_18f814;
            case 0x18F818u: goto label_18f818;
            case 0x18F81Cu: goto label_18f81c;
            case 0x18F820u: goto label_18f820;
            case 0x18F824u: goto label_18f824;
            case 0x18F828u: goto label_18f828;
            case 0x18F82Cu: goto label_18f82c;
            case 0x18F830u: goto label_18f830;
            case 0x18F834u: goto label_18f834;
            case 0x18F838u: goto label_18f838;
            case 0x18F83Cu: goto label_18f83c;
            case 0x18F840u: goto label_18f840;
            case 0x18F844u: goto label_18f844;
            case 0x18F848u: goto label_18f848;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F850u: goto label_18f850;
            case 0x18F854u: goto label_18f854;
            case 0x18F858u: goto label_18f858;
            case 0x18F85Cu: goto label_18f85c;
            case 0x18F860u: goto label_18f860;
            case 0x18F864u: goto label_18f864;
            case 0x18F868u: goto label_18f868;
            case 0x18F86Cu: goto label_18f86c;
            case 0x18F870u: goto label_18f870;
            case 0x18F874u: goto label_18f874;
            case 0x18F878u: goto label_18f878;
            case 0x18F87Cu: goto label_18f87c;
            case 0x18F880u: goto label_18f880;
            case 0x18F884u: goto label_18f884;
            case 0x18F888u: goto label_18f888;
            case 0x18F88Cu: goto label_18f88c;
            case 0x18F890u: goto label_18f890;
            case 0x18F894u: goto label_18f894;
            case 0x18F898u: goto label_18f898;
            case 0x18F89Cu: goto label_18f89c;
            case 0x18F8A0u: goto label_18f8a0;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8A8u: goto label_18f8a8;
            case 0x18F8ACu: goto label_18f8ac;
            case 0x18F8B0u: goto label_18f8b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18F874u; }
            if (ctx->pc != 0x18F874u) { return; }
        }
    }
    ctx->pc = 0x18F874u;
label_18f874:
    // 0x18f874: 0x1000000a  b           . + 4 + (0xA << 2)
label_18f878:
    if (ctx->pc == 0x18F878u) {
        ctx->pc = 0x18F87Cu;
        goto label_18f87c;
    }
    ctx->pc = 0x18F874u;
    {
        const bool branch_taken_0x18f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f874) {
            ctx->pc = 0x18F8A0u;
            goto label_18f8a0;
        }
    }
    ctx->pc = 0x18F87Cu;
label_18f87c:
    // 0x18f87c: 0x0  nop
    ctx->pc = 0x18f87cu;
    // NOP
label_18f880:
    // 0x18f880: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
label_18f884:
    // 0x18f884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x18f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18f888:
    // 0x18f888: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x18f888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_18f88c:
    // 0x18f88c: 0x24c6e2a0  addiu       $a2, $a2, -0x1D60
    ctx->pc = 0x18f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959776));
label_18f890:
    // 0x18f890: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18f890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f894:
    // 0x18f894: 0xc053ca4  jal         func_14F290
label_18f898:
    if (ctx->pc == 0x18F898u) {
        ctx->pc = 0x18F898u;
            // 0x18f898: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18F89Cu;
        goto label_18f89c;
    }
    ctx->pc = 0x18F894u;
    SET_GPR_U32(ctx, 31, 0x18F89Cu);
    ctx->pc = 0x18F898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F894u;
            // 0x18f898: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F89Cu; }
        if (ctx->pc != 0x18F89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F89Cu; }
        if (ctx->pc != 0x18F89Cu) { return; }
    }
    ctx->pc = 0x18F89Cu;
label_18f89c:
    // 0x18f89c: 0x0  nop
    ctx->pc = 0x18f89cu;
    // NOP
label_18f8a0:
    // 0x18f8a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18f8a4:
    // 0x18f8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f8a8:
    // 0x18f8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18f8ac:
    // 0x18f8ac: 0x3e00008  jr          $ra
label_18f8b0:
    if (ctx->pc == 0x18F8B0u) {
        ctx->pc = 0x18F8B0u;
            // 0x18f8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x18F8B4u;
        goto label_fallthrough_0x18f8ac;
    }
    ctx->pc = 0x18F8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F8ACu;
            // 0x18f8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E560u: goto label_18e560;
            case 0x18E564u: goto label_18e564;
            case 0x18E568u: goto label_18e568;
            case 0x18E56Cu: goto label_18e56c;
            case 0x18E570u: goto label_18e570;
            case 0x18E574u: goto label_18e574;
            case 0x18E578u: goto label_18e578;
            case 0x18E57Cu: goto label_18e57c;
            case 0x18E580u: goto label_18e580;
            case 0x18E584u: goto label_18e584;
            case 0x18E588u: goto label_18e588;
            case 0x18E58Cu: goto label_18e58c;
            case 0x18E590u: goto label_18e590;
            case 0x18E594u: goto label_18e594;
            case 0x18E598u: goto label_18e598;
            case 0x18E59Cu: goto label_18e59c;
            case 0x18E5A0u: goto label_18e5a0;
            case 0x18E5A4u: goto label_18e5a4;
            case 0x18E5A8u: goto label_18e5a8;
            case 0x18E5ACu: goto label_18e5ac;
            case 0x18E5B0u: goto label_18e5b0;
            case 0x18E5B4u: goto label_18e5b4;
            case 0x18E5B8u: goto label_18e5b8;
            case 0x18E5BCu: goto label_18e5bc;
            case 0x18E5C0u: goto label_18e5c0;
            case 0x18E5C4u: goto label_18e5c4;
            case 0x18E5C8u: goto label_18e5c8;
            case 0x18E5CCu: goto label_18e5cc;
            case 0x18E5D0u: goto label_18e5d0;
            case 0x18E5D4u: goto label_18e5d4;
            case 0x18E5D8u: goto label_18e5d8;
            case 0x18E5DCu: goto label_18e5dc;
            case 0x18E5E0u: goto label_18e5e0;
            case 0x18E5E4u: goto label_18e5e4;
            case 0x18E5E8u: goto label_18e5e8;
            case 0x18E5ECu: goto label_18e5ec;
            case 0x18E5F0u: goto label_18e5f0;
            case 0x18E5F4u: goto label_18e5f4;
            case 0x18E5F8u: goto label_18e5f8;
            case 0x18E5FCu: goto label_18e5fc;
            case 0x18E600u: goto label_18e600;
            case 0x18E604u: goto label_18e604;
            case 0x18E608u: goto label_18e608;
            case 0x18E60Cu: goto label_18e60c;
            case 0x18E610u: goto label_18e610;
            case 0x18E614u: goto label_18e614;
            case 0x18E618u: goto label_18e618;
            case 0x18E61Cu: goto label_18e61c;
            case 0x18E620u: goto label_18e620;
            case 0x18E624u: goto label_18e624;
            case 0x18E628u: goto label_18e628;
            case 0x18E62Cu: goto label_18e62c;
            case 0x18E630u: goto label_18e630;
            case 0x18E634u: goto label_18e634;
            case 0x18E638u: goto label_18e638;
            case 0x18E63Cu: goto label_18e63c;
            case 0x18E640u: goto label_18e640;
            case 0x18E644u: goto label_18e644;
            case 0x18E648u: goto label_18e648;
            case 0x18E64Cu: goto label_18e64c;
            case 0x18E650u: goto label_18e650;
            case 0x18E654u: goto label_18e654;
            case 0x18E658u: goto label_18e658;
            case 0x18E65Cu: goto label_18e65c;
            case 0x18E660u: goto label_18e660;
            case 0x18E664u: goto label_18e664;
            case 0x18E668u: goto label_18e668;
            case 0x18E66Cu: goto label_18e66c;
            case 0x18E670u: goto label_18e670;
            case 0x18E674u: goto label_18e674;
            case 0x18E678u: goto label_18e678;
            case 0x18E67Cu: goto label_18e67c;
            case 0x18E680u: goto label_18e680;
            case 0x18E684u: goto label_18e684;
            case 0x18E688u: goto label_18e688;
            case 0x18E68Cu: goto label_18e68c;
            case 0x18E690u: goto label_18e690;
            case 0x18E694u: goto label_18e694;
            case 0x18E698u: goto label_18e698;
            case 0x18E69Cu: goto label_18e69c;
            case 0x18E6A0u: goto label_18e6a0;
            case 0x18E6A4u: goto label_18e6a4;
            case 0x18E6A8u: goto label_18e6a8;
            case 0x18E6ACu: goto label_18e6ac;
            case 0x18E6B0u: goto label_18e6b0;
            case 0x18E6B4u: goto label_18e6b4;
            case 0x18E6B8u: goto label_18e6b8;
            case 0x18E6BCu: goto label_18e6bc;
            case 0x18E6C0u: goto label_18e6c0;
            case 0x18E6C4u: goto label_18e6c4;
            case 0x18E6C8u: goto label_18e6c8;
            case 0x18E6CCu: goto label_18e6cc;
            case 0x18E6D0u: goto label_18e6d0;
            case 0x18E6D4u: goto label_18e6d4;
            case 0x18E6D8u: goto label_18e6d8;
            case 0x18E6DCu: goto label_18e6dc;
            case 0x18E6E0u: goto label_18e6e0;
            case 0x18E6E4u: goto label_18e6e4;
            case 0x18E6E8u: goto label_18e6e8;
            case 0x18E6ECu: goto label_18e6ec;
            case 0x18E6F0u: goto label_18e6f0;
            case 0x18E6F4u: goto label_18e6f4;
            case 0x18E6F8u: goto label_18e6f8;
            case 0x18E6FCu: goto label_18e6fc;
            case 0x18E700u: goto label_18e700;
            case 0x18E704u: goto label_18e704;
            case 0x18E708u: goto label_18e708;
            case 0x18E70Cu: goto label_18e70c;
            case 0x18E710u: goto label_18e710;
            case 0x18E714u: goto label_18e714;
            case 0x18E718u: goto label_18e718;
            case 0x18E71Cu: goto label_18e71c;
            case 0x18E720u: goto label_18e720;
            case 0x18E724u: goto label_18e724;
            case 0x18E728u: goto label_18e728;
            case 0x18E72Cu: goto label_18e72c;
            case 0x18E730u: goto label_18e730;
            case 0x18E734u: goto label_18e734;
            case 0x18E738u: goto label_18e738;
            case 0x18E73Cu: goto label_18e73c;
            case 0x18E740u: goto label_18e740;
            case 0x18E744u: goto label_18e744;
            case 0x18E748u: goto label_18e748;
            case 0x18E74Cu: goto label_18e74c;
            case 0x18E750u: goto label_18e750;
            case 0x18E754u: goto label_18e754;
            case 0x18E758u: goto label_18e758;
            case 0x18E75Cu: goto label_18e75c;
            case 0x18E760u: goto label_18e760;
            case 0x18E764u: goto label_18e764;
            case 0x18E768u: goto label_18e768;
            case 0x18E76Cu: goto label_18e76c;
            case 0x18E770u: goto label_18e770;
            case 0x18E774u: goto label_18e774;
            case 0x18E778u: goto label_18e778;
            case 0x18E77Cu: goto label_18e77c;
            case 0x18E780u: goto label_18e780;
            case 0x18E784u: goto label_18e784;
            case 0x18E788u: goto label_18e788;
            case 0x18E78Cu: goto label_18e78c;
            case 0x18E790u: goto label_18e790;
            case 0x18E794u: goto label_18e794;
            case 0x18E798u: goto label_18e798;
            case 0x18E79Cu: goto label_18e79c;
            case 0x18E7A0u: goto label_18e7a0;
            case 0x18E7A4u: goto label_18e7a4;
            case 0x18E7A8u: goto label_18e7a8;
            case 0x18E7ACu: goto label_18e7ac;
            case 0x18E7B0u: goto label_18e7b0;
            case 0x18E7B4u: goto label_18e7b4;
            case 0x18E7B8u: goto label_18e7b8;
            case 0x18E7BCu: goto label_18e7bc;
            case 0x18E7C0u: goto label_18e7c0;
            case 0x18E7C4u: goto label_18e7c4;
            case 0x18E7C8u: goto label_18e7c8;
            case 0x18E7CCu: goto label_18e7cc;
            case 0x18E7D0u: goto label_18e7d0;
            case 0x18E7D4u: goto label_18e7d4;
            case 0x18E7D8u: goto label_18e7d8;
            case 0x18E7DCu: goto label_18e7dc;
            case 0x18E7E0u: goto label_18e7e0;
            case 0x18E7E4u: goto label_18e7e4;
            case 0x18E7E8u: goto label_18e7e8;
            case 0x18E7ECu: goto label_18e7ec;
            case 0x18E7F0u: goto label_18e7f0;
            case 0x18E7F4u: goto label_18e7f4;
            case 0x18E7F8u: goto label_18e7f8;
            case 0x18E7FCu: goto label_18e7fc;
            case 0x18E800u: goto label_18e800;
            case 0x18E804u: goto label_18e804;
            case 0x18E808u: goto label_18e808;
            case 0x18E80Cu: goto label_18e80c;
            case 0x18E810u: goto label_18e810;
            case 0x18E814u: goto label_18e814;
            case 0x18E818u: goto label_18e818;
            case 0x18E81Cu: goto label_18e81c;
            case 0x18E820u: goto label_18e820;
            case 0x18E824u: goto label_18e824;
            case 0x18E828u: goto label_18e828;
            case 0x18E82Cu: goto label_18e82c;
            case 0x18E830u: goto label_18e830;
            case 0x18E834u: goto label_18e834;
            case 0x18E838u: goto label_18e838;
            case 0x18E83Cu: goto label_18e83c;
            case 0x18E840u: goto label_18e840;
            case 0x18E844u: goto label_18e844;
            case 0x18E848u: goto label_18e848;
            case 0x18E84Cu: goto label_18e84c;
            case 0x18E850u: goto label_18e850;
            case 0x18E854u: goto label_18e854;
            case 0x18E858u: goto label_18e858;
            case 0x18E85Cu: goto label_18e85c;
            case 0x18E860u: goto label_18e860;
            case 0x18E864u: goto label_18e864;
            case 0x18E868u: goto label_18e868;
            case 0x18E86Cu: goto label_18e86c;
            case 0x18E870u: goto label_18e870;
            case 0x18E874u: goto label_18e874;
            case 0x18E878u: goto label_18e878;
            case 0x18E87Cu: goto label_18e87c;
            case 0x18E880u: goto label_18e880;
            case 0x18E884u: goto label_18e884;
            case 0x18E888u: goto label_18e888;
            case 0x18E88Cu: goto label_18e88c;
            case 0x18E890u: goto label_18e890;
            case 0x18E894u: goto label_18e894;
            case 0x18E898u: goto label_18e898;
            case 0x18E89Cu: goto label_18e89c;
            case 0x18E8A0u: goto label_18e8a0;
            case 0x18E8A4u: goto label_18e8a4;
            case 0x18E8A8u: goto label_18e8a8;
            case 0x18E8ACu: goto label_18e8ac;
            case 0x18E8B0u: goto label_18e8b0;
            case 0x18E8B4u: goto label_18e8b4;
            case 0x18E8B8u: goto label_18e8b8;
            case 0x18E8BCu: goto label_18e8bc;
            case 0x18E8C0u: goto label_18e8c0;
            case 0x18E8C4u: goto label_18e8c4;
            case 0x18E8C8u: goto label_18e8c8;
            case 0x18E8CCu: goto label_18e8cc;
            case 0x18E8D0u: goto label_18e8d0;
            case 0x18E8D4u: goto label_18e8d4;
            case 0x18E8D8u: goto label_18e8d8;
            case 0x18E8DCu: goto label_18e8dc;
            case 0x18E8E0u: goto label_18e8e0;
            case 0x18E8E4u: goto label_18e8e4;
            case 0x18E8E8u: goto label_18e8e8;
            case 0x18E8ECu: goto label_18e8ec;
            case 0x18E8F0u: goto label_18e8f0;
            case 0x18E8F4u: goto label_18e8f4;
            case 0x18E8F8u: goto label_18e8f8;
            case 0x18E8FCu: goto label_18e8fc;
            case 0x18E900u: goto label_18e900;
            case 0x18E904u: goto label_18e904;
            case 0x18E908u: goto label_18e908;
            case 0x18E90Cu: goto label_18e90c;
            case 0x18E910u: goto label_18e910;
            case 0x18E914u: goto label_18e914;
            case 0x18E918u: goto label_18e918;
            case 0x18E91Cu: goto label_18e91c;
            case 0x18E920u: goto label_18e920;
            case 0x18E924u: goto label_18e924;
            case 0x18E928u: goto label_18e928;
            case 0x18E92Cu: goto label_18e92c;
            case 0x18E930u: goto label_18e930;
            case 0x18E934u: goto label_18e934;
            case 0x18E938u: goto label_18e938;
            case 0x18E93Cu: goto label_18e93c;
            case 0x18E940u: goto label_18e940;
            case 0x18E944u: goto label_18e944;
            case 0x18E948u: goto label_18e948;
            case 0x18E94Cu: goto label_18e94c;
            case 0x18E950u: goto label_18e950;
            case 0x18E954u: goto label_18e954;
            case 0x18E958u: goto label_18e958;
            case 0x18E95Cu: goto label_18e95c;
            case 0x18E960u: goto label_18e960;
            case 0x18E964u: goto label_18e964;
            case 0x18E968u: goto label_18e968;
            case 0x18E96Cu: goto label_18e96c;
            case 0x18E970u: goto label_18e970;
            case 0x18E974u: goto label_18e974;
            case 0x18E978u: goto label_18e978;
            case 0x18E97Cu: goto label_18e97c;
            case 0x18E980u: goto label_18e980;
            case 0x18E984u: goto label_18e984;
            case 0x18E988u: goto label_18e988;
            case 0x18E98Cu: goto label_18e98c;
            case 0x18E990u: goto label_18e990;
            case 0x18E994u: goto label_18e994;
            case 0x18E998u: goto label_18e998;
            case 0x18E99Cu: goto label_18e99c;
            case 0x18E9A0u: goto label_18e9a0;
            case 0x18E9A4u: goto label_18e9a4;
            case 0x18E9A8u: goto label_18e9a8;
            case 0x18E9ACu: goto label_18e9ac;
            case 0x18E9B0u: goto label_18e9b0;
            case 0x18E9B4u: goto label_18e9b4;
            case 0x18E9B8u: goto label_18e9b8;
            case 0x18E9BCu: goto label_18e9bc;
            case 0x18E9C0u: goto label_18e9c0;
            case 0x18E9C4u: goto label_18e9c4;
            case 0x18E9C8u: goto label_18e9c8;
            case 0x18E9CCu: goto label_18e9cc;
            case 0x18E9D0u: goto label_18e9d0;
            case 0x18E9D4u: goto label_18e9d4;
            case 0x18E9D8u: goto label_18e9d8;
            case 0x18E9DCu: goto label_18e9dc;
            case 0x18E9E0u: goto label_18e9e0;
            case 0x18E9E4u: goto label_18e9e4;
            case 0x18E9E8u: goto label_18e9e8;
            case 0x18E9ECu: goto label_18e9ec;
            case 0x18E9F0u: goto label_18e9f0;
            case 0x18E9F4u: goto label_18e9f4;
            case 0x18E9F8u: goto label_18e9f8;
            case 0x18E9FCu: goto label_18e9fc;
            case 0x18EA00u: goto label_18ea00;
            case 0x18EA04u: goto label_18ea04;
            case 0x18EA08u: goto label_18ea08;
            case 0x18EA0Cu: goto label_18ea0c;
            case 0x18EA10u: goto label_18ea10;
            case 0x18EA14u: goto label_18ea14;
            case 0x18EA18u: goto label_18ea18;
            case 0x18EA1Cu: goto label_18ea1c;
            case 0x18EA20u: goto label_18ea20;
            case 0x18EA24u: goto label_18ea24;
            case 0x18EA28u: goto label_18ea28;
            case 0x18EA2Cu: goto label_18ea2c;
            case 0x18EA30u: goto label_18ea30;
            case 0x18EA34u: goto label_18ea34;
            case 0x18EA38u: goto label_18ea38;
            case 0x18EA3Cu: goto label_18ea3c;
            case 0x18EA40u: goto label_18ea40;
            case 0x18EA44u: goto label_18ea44;
            case 0x18EA48u: goto label_18ea48;
            case 0x18EA4Cu: goto label_18ea4c;
            case 0x18EA50u: goto label_18ea50;
            case 0x18EA54u: goto label_18ea54;
            case 0x18EA58u: goto label_18ea58;
            case 0x18EA5Cu: goto label_18ea5c;
            case 0x18EA60u: goto label_18ea60;
            case 0x18EA64u: goto label_18ea64;
            case 0x18EA68u: goto label_18ea68;
            case 0x18EA6Cu: goto label_18ea6c;
            case 0x18EA70u: goto label_18ea70;
            case 0x18EA74u: goto label_18ea74;
            case 0x18EA78u: goto label_18ea78;
            case 0x18EA7Cu: goto label_18ea7c;
            case 0x18EA80u: goto label_18ea80;
            case 0x18EA84u: goto label_18ea84;
            case 0x18EA88u: goto label_18ea88;
            case 0x18EA8Cu: goto label_18ea8c;
            case 0x18EA90u: goto label_18ea90;
            case 0x18EA94u: goto label_18ea94;
            case 0x18EA98u: goto label_18ea98;
            case 0x18EA9Cu: goto label_18ea9c;
            case 0x18EAA0u: goto label_18eaa0;
            case 0x18EAA4u: goto label_18eaa4;
            case 0x18EAA8u: goto label_18eaa8;
            case 0x18EAACu: goto label_18eaac;
            case 0x18EAB0u: goto label_18eab0;
            case 0x18EAB4u: goto label_18eab4;
            case 0x18EAB8u: goto label_18eab8;
            case 0x18EABCu: goto label_18eabc;
            case 0x18EAC0u: goto label_18eac0;
            case 0x18EAC4u: goto label_18eac4;
            case 0x18EAC8u: goto label_18eac8;
            case 0x18EACCu: goto label_18eacc;
            case 0x18EAD0u: goto label_18ead0;
            case 0x18EAD4u: goto label_18ead4;
            case 0x18EAD8u: goto label_18ead8;
            case 0x18EADCu: goto label_18eadc;
            case 0x18EAE0u: goto label_18eae0;
            case 0x18EAE4u: goto label_18eae4;
            case 0x18EAE8u: goto label_18eae8;
            case 0x18EAECu: goto label_18eaec;
            case 0x18EAF0u: goto label_18eaf0;
            case 0x18EAF4u: goto label_18eaf4;
            case 0x18EAF8u: goto label_18eaf8;
            case 0x18EAFCu: goto label_18eafc;
            case 0x18EB00u: goto label_18eb00;
            case 0x18EB04u: goto label_18eb04;
            case 0x18EB08u: goto label_18eb08;
            case 0x18EB0Cu: goto label_18eb0c;
            case 0x18EB10u: goto label_18eb10;
            case 0x18EB14u: goto label_18eb14;
            case 0x18EB18u: goto label_18eb18;
            case 0x18EB1Cu: goto label_18eb1c;
            case 0x18EB20u: goto label_18eb20;
            case 0x18EB24u: goto label_18eb24;
            case 0x18EB28u: goto label_18eb28;
            case 0x18EB2Cu: goto label_18eb2c;
            case 0x18EB30u: goto label_18eb30;
            case 0x18EB34u: goto label_18eb34;
            case 0x18EB38u: goto label_18eb38;
            case 0x18EB3Cu: goto label_18eb3c;
            case 0x18EB40u: goto label_18eb40;
            case 0x18EB44u: goto label_18eb44;
            case 0x18EB48u: goto label_18eb48;
            case 0x18EB4Cu: goto label_18eb4c;
            case 0x18EB50u: goto label_18eb50;
            case 0x18EB54u: goto label_18eb54;
            case 0x18EB58u: goto label_18eb58;
            case 0x18EB5Cu: goto label_18eb5c;
            case 0x18EB60u: goto label_18eb60;
            case 0x18EB64u: goto label_18eb64;
            case 0x18EB68u: goto label_18eb68;
            case 0x18EB6Cu: goto label_18eb6c;
            case 0x18EB70u: goto label_18eb70;
            case 0x18EB74u: goto label_18eb74;
            case 0x18EB78u: goto label_18eb78;
            case 0x18EB7Cu: goto label_18eb7c;
            case 0x18EB80u: goto label_18eb80;
            case 0x18EB84u: goto label_18eb84;
            case 0x18EB88u: goto label_18eb88;
            case 0x18EB8Cu: goto label_18eb8c;
            case 0x18EB90u: goto label_18eb90;
            case 0x18EB94u: goto label_18eb94;
            case 0x18EB98u: goto label_18eb98;
            case 0x18EB9Cu: goto label_18eb9c;
            case 0x18EBA0u: goto label_18eba0;
            case 0x18EBA4u: goto label_18eba4;
            case 0x18EBA8u: goto label_18eba8;
            case 0x18EBACu: goto label_18ebac;
            case 0x18EBB0u: goto label_18ebb0;
            case 0x18EBB4u: goto label_18ebb4;
            case 0x18EBB8u: goto label_18ebb8;
            case 0x18EBBCu: goto label_18ebbc;
            case 0x18EBC0u: goto label_18ebc0;
            case 0x18EBC4u: goto label_18ebc4;
            case 0x18EBC8u: goto label_18ebc8;
            case 0x18EBCCu: goto label_18ebcc;
            case 0x18EBD0u: goto label_18ebd0;
            case 0x18EBD4u: goto label_18ebd4;
            case 0x18EBD8u: goto label_18ebd8;
            case 0x18EBDCu: goto label_18ebdc;
            case 0x18EBE0u: goto label_18ebe0;
            case 0x18EBE4u: goto label_18ebe4;
            case 0x18EBE8u: goto label_18ebe8;
            case 0x18EBECu: goto label_18ebec;
            case 0x18EBF0u: goto label_18ebf0;
            case 0x18EBF4u: goto label_18ebf4;
            case 0x18EBF8u: goto label_18ebf8;
            case 0x18EBFCu: goto label_18ebfc;
            case 0x18EC00u: goto label_18ec00;
            case 0x18EC04u: goto label_18ec04;
            case 0x18EC08u: goto label_18ec08;
            case 0x18EC0Cu: goto label_18ec0c;
            case 0x18EC10u: goto label_18ec10;
            case 0x18EC14u: goto label_18ec14;
            case 0x18EC18u: goto label_18ec18;
            case 0x18EC1Cu: goto label_18ec1c;
            case 0x18EC20u: goto label_18ec20;
            case 0x18EC24u: goto label_18ec24;
            case 0x18EC28u: goto label_18ec28;
            case 0x18EC2Cu: goto label_18ec2c;
            case 0x18EC30u: goto label_18ec30;
            case 0x18EC34u: goto label_18ec34;
            case 0x18EC38u: goto label_18ec38;
            case 0x18EC3Cu: goto label_18ec3c;
            case 0x18EC40u: goto label_18ec40;
            case 0x18EC44u: goto label_18ec44;
            case 0x18EC48u: goto label_18ec48;
            case 0x18EC4Cu: goto label_18ec4c;
            case 0x18EC50u: goto label_18ec50;
            case 0x18EC54u: goto label_18ec54;
            case 0x18EC58u: goto label_18ec58;
            case 0x18EC5Cu: goto label_18ec5c;
            case 0x18EC60u: goto label_18ec60;
            case 0x18EC64u: goto label_18ec64;
            case 0x18EC68u: goto label_18ec68;
            case 0x18EC6Cu: goto label_18ec6c;
            case 0x18EC70u: goto label_18ec70;
            case 0x18EC74u: goto label_18ec74;
            case 0x18EC78u: goto label_18ec78;
            case 0x18EC7Cu: goto label_18ec7c;
            case 0x18EC80u: goto label_18ec80;
            case 0x18EC84u: goto label_18ec84;
            case 0x18EC88u: goto label_18ec88;
            case 0x18EC8Cu: goto label_18ec8c;
            case 0x18EC90u: goto label_18ec90;
            case 0x18EC94u: goto label_18ec94;
            case 0x18EC98u: goto label_18ec98;
            case 0x18EC9Cu: goto label_18ec9c;
            case 0x18ECA0u: goto label_18eca0;
            case 0x18ECA4u: goto label_18eca4;
            case 0x18ECA8u: goto label_18eca8;
            case 0x18ECACu: goto label_18ecac;
            case 0x18ECB0u: goto label_18ecb0;
            case 0x18ECB4u: goto label_18ecb4;
            case 0x18ECB8u: goto label_18ecb8;
            case 0x18ECBCu: goto label_18ecbc;
            case 0x18ECC0u: goto label_18ecc0;
            case 0x18ECC4u: goto label_18ecc4;
            case 0x18ECC8u: goto label_18ecc8;
            case 0x18ECCCu: goto label_18eccc;
            case 0x18ECD0u: goto label_18ecd0;
            case 0x18ECD4u: goto label_18ecd4;
            case 0x18ECD8u: goto label_18ecd8;
            case 0x18ECDCu: goto label_18ecdc;
            case 0x18ECE0u: goto label_18ece0;
            case 0x18ECE4u: goto label_18ece4;
            case 0x18ECE8u: goto label_18ece8;
            case 0x18ECECu: goto label_18ecec;
            case 0x18ECF0u: goto label_18ecf0;
            case 0x18ECF4u: goto label_18ecf4;
            case 0x18ECF8u: goto label_18ecf8;
            case 0x18ECFCu: goto label_18ecfc;
            case 0x18ED00u: goto label_18ed00;
            case 0x18ED04u: goto label_18ed04;
            case 0x18ED08u: goto label_18ed08;
            case 0x18ED0Cu: goto label_18ed0c;
            case 0x18ED10u: goto label_18ed10;
            case 0x18ED14u: goto label_18ed14;
            case 0x18ED18u: goto label_18ed18;
            case 0x18ED1Cu: goto label_18ed1c;
            case 0x18ED20u: goto label_18ed20;
            case 0x18ED24u: goto label_18ed24;
            case 0x18ED28u: goto label_18ed28;
            case 0x18ED2Cu: goto label_18ed2c;
            case 0x18ED30u: goto label_18ed30;
            case 0x18ED34u: goto label_18ed34;
            case 0x18ED38u: goto label_18ed38;
            case 0x18ED3Cu: goto label_18ed3c;
            case 0x18ED40u: goto label_18ed40;
            case 0x18ED44u: goto label_18ed44;
            case 0x18ED48u: goto label_18ed48;
            case 0x18ED4Cu: goto label_18ed4c;
            case 0x18ED50u: goto label_18ed50;
            case 0x18ED54u: goto label_18ed54;
            case 0x18ED58u: goto label_18ed58;
            case 0x18ED5Cu: goto label_18ed5c;
            case 0x18ED60u: goto label_18ed60;
            case 0x18ED64u: goto label_18ed64;
            case 0x18ED68u: goto label_18ed68;
            case 0x18ED6Cu: goto label_18ed6c;
            case 0x18ED70u: goto label_18ed70;
            case 0x18ED74u: goto label_18ed74;
            case 0x18ED78u: goto label_18ed78;
            case 0x18ED7Cu: goto label_18ed7c;
            case 0x18ED80u: goto label_18ed80;
            case 0x18ED84u: goto label_18ed84;
            case 0x18ED88u: goto label_18ed88;
            case 0x18ED8Cu: goto label_18ed8c;
            case 0x18ED90u: goto label_18ed90;
            case 0x18ED94u: goto label_18ed94;
            case 0x18ED98u: goto label_18ed98;
            case 0x18ED9Cu: goto label_18ed9c;
            case 0x18EDA0u: goto label_18eda0;
            case 0x18EDA4u: goto label_18eda4;
            case 0x18EDA8u: goto label_18eda8;
            case 0x18EDACu: goto label_18edac;
            case 0x18EDB0u: goto label_18edb0;
            case 0x18EDB4u: goto label_18edb4;
            case 0x18EDB8u: goto label_18edb8;
            case 0x18EDBCu: goto label_18edbc;
            case 0x18EDC0u: goto label_18edc0;
            case 0x18EDC4u: goto label_18edc4;
            case 0x18EDC8u: goto label_18edc8;
            case 0x18EDCCu: goto label_18edcc;
            case 0x18EDD0u: goto label_18edd0;
            case 0x18EDD4u: goto label_18edd4;
            case 0x18EDD8u: goto label_18edd8;
            case 0x18EDDCu: goto label_18eddc;
            case 0x18EDE0u: goto label_18ede0;
            case 0x18EDE4u: goto label_18ede4;
            case 0x18EDE8u: goto label_18ede8;
            case 0x18EDECu: goto label_18edec;
            case 0x18EDF0u: goto label_18edf0;
            case 0x18EDF4u: goto label_18edf4;
            case 0x18EDF8u: goto label_18edf8;
            case 0x18EDFCu: goto label_18edfc;
            case 0x18EE00u: goto label_18ee00;
            case 0x18EE04u: goto label_18ee04;
            case 0x18EE08u: goto label_18ee08;
            case 0x18EE0Cu: goto label_18ee0c;
            case 0x18EE10u: goto label_18ee10;
            case 0x18EE14u: goto label_18ee14;
            case 0x18EE18u: goto label_18ee18;
            case 0x18EE1Cu: goto label_18ee1c;
            case 0x18EE20u: goto label_18ee20;
            case 0x18EE24u: goto label_18ee24;
            case 0x18EE28u: goto label_18ee28;
            case 0x18EE2Cu: goto label_18ee2c;
            case 0x18EE30u: goto label_18ee30;
            case 0x18EE34u: goto label_18ee34;
            case 0x18EE38u: goto label_18ee38;
            case 0x18EE3Cu: goto label_18ee3c;
            case 0x18EE40u: goto label_18ee40;
            case 0x18EE44u: goto label_18ee44;
            case 0x18EE48u: goto label_18ee48;
            case 0x18EE4Cu: goto label_18ee4c;
            case 0x18EE50u: goto label_18ee50;
            case 0x18EE54u: goto label_18ee54;
            case 0x18EE58u: goto label_18ee58;
            case 0x18EE5Cu: goto label_18ee5c;
            case 0x18EE60u: goto label_18ee60;
            case 0x18EE64u: goto label_18ee64;
            case 0x18EE68u: goto label_18ee68;
            case 0x18EE6Cu: goto label_18ee6c;
            case 0x18EE70u: goto label_18ee70;
            case 0x18EE74u: goto label_18ee74;
            case 0x18EE78u: goto label_18ee78;
            case 0x18EE7Cu: goto label_18ee7c;
            case 0x18EE80u: goto label_18ee80;
            case 0x18EE84u: goto label_18ee84;
            case 0x18EE88u: goto label_18ee88;
            case 0x18EE8Cu: goto label_18ee8c;
            case 0x18EE90u: goto label_18ee90;
            case 0x18EE94u: goto label_18ee94;
            case 0x18EE98u: goto label_18ee98;
            case 0x18EE9Cu: goto label_18ee9c;
            case 0x18EEA0u: goto label_18eea0;
            case 0x18EEA4u: goto label_18eea4;
            case 0x18EEA8u: goto label_18eea8;
            case 0x18EEACu: goto label_18eeac;
            case 0x18EEB0u: goto label_18eeb0;
            case 0x18EEB4u: goto label_18eeb4;
            case 0x18EEB8u: goto label_18eeb8;
            case 0x18EEBCu: goto label_18eebc;
            case 0x18EEC0u: goto label_18eec0;
            case 0x18EEC4u: goto label_18eec4;
            case 0x18EEC8u: goto label_18eec8;
            case 0x18EECCu: goto label_18eecc;
            case 0x18EED0u: goto label_18eed0;
            case 0x18EED4u: goto label_18eed4;
            case 0x18EED8u: goto label_18eed8;
            case 0x18EEDCu: goto label_18eedc;
            case 0x18EEE0u: goto label_18eee0;
            case 0x18EEE4u: goto label_18eee4;
            case 0x18EEE8u: goto label_18eee8;
            case 0x18EEECu: goto label_18eeec;
            case 0x18EEF0u: goto label_18eef0;
            case 0x18EEF4u: goto label_18eef4;
            case 0x18EEF8u: goto label_18eef8;
            case 0x18EEFCu: goto label_18eefc;
            case 0x18EF00u: goto label_18ef00;
            case 0x18EF04u: goto label_18ef04;
            case 0x18EF08u: goto label_18ef08;
            case 0x18EF0Cu: goto label_18ef0c;
            case 0x18EF10u: goto label_18ef10;
            case 0x18EF14u: goto label_18ef14;
            case 0x18EF18u: goto label_18ef18;
            case 0x18EF1Cu: goto label_18ef1c;
            case 0x18EF20u: goto label_18ef20;
            case 0x18EF24u: goto label_18ef24;
            case 0x18EF28u: goto label_18ef28;
            case 0x18EF2Cu: goto label_18ef2c;
            case 0x18EF30u: goto label_18ef30;
            case 0x18EF34u: goto label_18ef34;
            case 0x18EF38u: goto label_18ef38;
            case 0x18EF3Cu: goto label_18ef3c;
            case 0x18EF40u: goto label_18ef40;
            case 0x18EF44u: goto label_18ef44;
            case 0x18EF48u: goto label_18ef48;
            case 0x18EF4Cu: goto label_18ef4c;
            case 0x18EF50u: goto label_18ef50;
            case 0x18EF54u: goto label_18ef54;
            case 0x18EF58u: goto label_18ef58;
            case 0x18EF5Cu: goto label_18ef5c;
            case 0x18EF60u: goto label_18ef60;
            case 0x18EF64u: goto label_18ef64;
            case 0x18EF68u: goto label_18ef68;
            case 0x18EF6Cu: goto label_18ef6c;
            case 0x18EF70u: goto label_18ef70;
            case 0x18EF74u: goto label_18ef74;
            case 0x18EF78u: goto label_18ef78;
            case 0x18EF7Cu: goto label_18ef7c;
            case 0x18EF80u: goto label_18ef80;
            case 0x18EF84u: goto label_18ef84;
            case 0x18EF88u: goto label_18ef88;
            case 0x18EF8Cu: goto label_18ef8c;
            case 0x18EF90u: goto label_18ef90;
            case 0x18EF94u: goto label_18ef94;
            case 0x18EF98u: goto label_18ef98;
            case 0x18EF9Cu: goto label_18ef9c;
            case 0x18EFA0u: goto label_18efa0;
            case 0x18EFA4u: goto label_18efa4;
            case 0x18EFA8u: goto label_18efa8;
            case 0x18EFACu: goto label_18efac;
            case 0x18EFB0u: goto label_18efb0;
            case 0x18EFB4u: goto label_18efb4;
            case 0x18EFB8u: goto label_18efb8;
            case 0x18EFBCu: goto label_18efbc;
            case 0x18EFC0u: goto label_18efc0;
            case 0x18EFC4u: goto label_18efc4;
            case 0x18EFC8u: goto label_18efc8;
            case 0x18EFCCu: goto label_18efcc;
            case 0x18EFD0u: goto label_18efd0;
            case 0x18EFD4u: goto label_18efd4;
            case 0x18EFD8u: goto label_18efd8;
            case 0x18EFDCu: goto label_18efdc;
            case 0x18EFE0u: goto label_18efe0;
            case 0x18EFE4u: goto label_18efe4;
            case 0x18EFE8u: goto label_18efe8;
            case 0x18EFECu: goto label_18efec;
            case 0x18EFF0u: goto label_18eff0;
            case 0x18EFF4u: goto label_18eff4;
            case 0x18EFF8u: goto label_18eff8;
            case 0x18EFFCu: goto label_18effc;
            case 0x18F000u: goto label_18f000;
            case 0x18F004u: goto label_18f004;
            case 0x18F008u: goto label_18f008;
            case 0x18F00Cu: goto label_18f00c;
            case 0x18F010u: goto label_18f010;
            case 0x18F014u: goto label_18f014;
            case 0x18F018u: goto label_18f018;
            case 0x18F01Cu: goto label_18f01c;
            case 0x18F020u: goto label_18f020;
            case 0x18F024u: goto label_18f024;
            case 0x18F028u: goto label_18f028;
            case 0x18F02Cu: goto label_18f02c;
            case 0x18F030u: goto label_18f030;
            case 0x18F034u: goto label_18f034;
            case 0x18F038u: goto label_18f038;
            case 0x18F03Cu: goto label_18f03c;
            case 0x18F040u: goto label_18f040;
            case 0x18F044u: goto label_18f044;
            case 0x18F048u: goto label_18f048;
            case 0x18F04Cu: goto label_18f04c;
            case 0x18F050u: goto label_18f050;
            case 0x18F054u: goto label_18f054;
            case 0x18F058u: goto label_18f058;
            case 0x18F05Cu: goto label_18f05c;
            case 0x18F060u: goto label_18f060;
            case 0x18F064u: goto label_18f064;
            case 0x18F068u: goto label_18f068;
            case 0x18F06Cu: goto label_18f06c;
            case 0x18F070u: goto label_18f070;
            case 0x18F074u: goto label_18f074;
            case 0x18F078u: goto label_18f078;
            case 0x18F07Cu: goto label_18f07c;
            case 0x18F080u: goto label_18f080;
            case 0x18F084u: goto label_18f084;
            case 0x18F088u: goto label_18f088;
            case 0x18F08Cu: goto label_18f08c;
            case 0x18F090u: goto label_18f090;
            case 0x18F094u: goto label_18f094;
            case 0x18F098u: goto label_18f098;
            case 0x18F09Cu: goto label_18f09c;
            case 0x18F0A0u: goto label_18f0a0;
            case 0x18F0A4u: goto label_18f0a4;
            case 0x18F0A8u: goto label_18f0a8;
            case 0x18F0ACu: goto label_18f0ac;
            case 0x18F0B0u: goto label_18f0b0;
            case 0x18F0B4u: goto label_18f0b4;
            case 0x18F0B8u: goto label_18f0b8;
            case 0x18F0BCu: goto label_18f0bc;
            case 0x18F0C0u: goto label_18f0c0;
            case 0x18F0C4u: goto label_18f0c4;
            case 0x18F0C8u: goto label_18f0c8;
            case 0x18F0CCu: goto label_18f0cc;
            case 0x18F0D0u: goto label_18f0d0;
            case 0x18F0D4u: goto label_18f0d4;
            case 0x18F0D8u: goto label_18f0d8;
            case 0x18F0DCu: goto label_18f0dc;
            case 0x18F0E0u: goto label_18f0e0;
            case 0x18F0E4u: goto label_18f0e4;
            case 0x18F0E8u: goto label_18f0e8;
            case 0x18F0ECu: goto label_18f0ec;
            case 0x18F0F0u: goto label_18f0f0;
            case 0x18F0F4u: goto label_18f0f4;
            case 0x18F0F8u: goto label_18f0f8;
            case 0x18F0FCu: goto label_18f0fc;
            case 0x18F100u: goto label_18f100;
            case 0x18F104u: goto label_18f104;
            case 0x18F108u: goto label_18f108;
            case 0x18F10Cu: goto label_18f10c;
            case 0x18F110u: goto label_18f110;
            case 0x18F114u: goto label_18f114;
            case 0x18F118u: goto label_18f118;
            case 0x18F11Cu: goto label_18f11c;
            case 0x18F120u: goto label_18f120;
            case 0x18F124u: goto label_18f124;
            case 0x18F128u: goto label_18f128;
            case 0x18F12Cu: goto label_18f12c;
            case 0x18F130u: goto label_18f130;
            case 0x18F134u: goto label_18f134;
            case 0x18F138u: goto label_18f138;
            case 0x18F13Cu: goto label_18f13c;
            case 0x18F140u: goto label_18f140;
            case 0x18F144u: goto label_18f144;
            case 0x18F148u: goto label_18f148;
            case 0x18F14Cu: goto label_18f14c;
            case 0x18F150u: goto label_18f150;
            case 0x18F154u: goto label_18f154;
            case 0x18F158u: goto label_18f158;
            case 0x18F15Cu: goto label_18f15c;
            case 0x18F160u: goto label_18f160;
            case 0x18F164u: goto label_18f164;
            case 0x18F168u: goto label_18f168;
            case 0x18F16Cu: goto label_18f16c;
            case 0x18F170u: goto label_18f170;
            case 0x18F174u: goto label_18f174;
            case 0x18F178u: goto label_18f178;
            case 0x18F17Cu: goto label_18f17c;
            case 0x18F180u: goto label_18f180;
            case 0x18F184u: goto label_18f184;
            case 0x18F188u: goto label_18f188;
            case 0x18F18Cu: goto label_18f18c;
            case 0x18F190u: goto label_18f190;
            case 0x18F194u: goto label_18f194;
            case 0x18F198u: goto label_18f198;
            case 0x18F19Cu: goto label_18f19c;
            case 0x18F1A0u: goto label_18f1a0;
            case 0x18F1A4u: goto label_18f1a4;
            case 0x18F1A8u: goto label_18f1a8;
            case 0x18F1ACu: goto label_18f1ac;
            case 0x18F1B0u: goto label_18f1b0;
            case 0x18F1B4u: goto label_18f1b4;
            case 0x18F1B8u: goto label_18f1b8;
            case 0x18F1BCu: goto label_18f1bc;
            case 0x18F1C0u: goto label_18f1c0;
            case 0x18F1C4u: goto label_18f1c4;
            case 0x18F1C8u: goto label_18f1c8;
            case 0x18F1CCu: goto label_18f1cc;
            case 0x18F1D0u: goto label_18f1d0;
            case 0x18F1D4u: goto label_18f1d4;
            case 0x18F1D8u: goto label_18f1d8;
            case 0x18F1DCu: goto label_18f1dc;
            case 0x18F1E0u: goto label_18f1e0;
            case 0x18F1E4u: goto label_18f1e4;
            case 0x18F1E8u: goto label_18f1e8;
            case 0x18F1ECu: goto label_18f1ec;
            case 0x18F1F0u: goto label_18f1f0;
            case 0x18F1F4u: goto label_18f1f4;
            case 0x18F1F8u: goto label_18f1f8;
            case 0x18F1FCu: goto label_18f1fc;
            case 0x18F200u: goto label_18f200;
            case 0x18F204u: goto label_18f204;
            case 0x18F208u: goto label_18f208;
            case 0x18F20Cu: goto label_18f20c;
            case 0x18F210u: goto label_18f210;
            case 0x18F214u: goto label_18f214;
            case 0x18F218u: goto label_18f218;
            case 0x18F21Cu: goto label_18f21c;
            case 0x18F220u: goto label_18f220;
            case 0x18F224u: goto label_18f224;
            case 0x18F228u: goto label_18f228;
            case 0x18F22Cu: goto label_18f22c;
            case 0x18F230u: goto label_18f230;
            case 0x18F234u: goto label_18f234;
            case 0x18F238u: goto label_18f238;
            case 0x18F23Cu: goto label_18f23c;
            case 0x18F240u: goto label_18f240;
            case 0x18F244u: goto label_18f244;
            case 0x18F248u: goto label_18f248;
            case 0x18F24Cu: goto label_18f24c;
            case 0x18F250u: goto label_18f250;
            case 0x18F254u: goto label_18f254;
            case 0x18F258u: goto label_18f258;
            case 0x18F25Cu: goto label_18f25c;
            case 0x18F260u: goto label_18f260;
            case 0x18F264u: goto label_18f264;
            case 0x18F268u: goto label_18f268;
            case 0x18F26Cu: goto label_18f26c;
            case 0x18F270u: goto label_18f270;
            case 0x18F274u: goto label_18f274;
            case 0x18F278u: goto label_18f278;
            case 0x18F27Cu: goto label_18f27c;
            case 0x18F280u: goto label_18f280;
            case 0x18F284u: goto label_18f284;
            case 0x18F288u: goto label_18f288;
            case 0x18F28Cu: goto label_18f28c;
            case 0x18F290u: goto label_18f290;
            case 0x18F294u: goto label_18f294;
            case 0x18F298u: goto label_18f298;
            case 0x18F29Cu: goto label_18f29c;
            case 0x18F2A0u: goto label_18f2a0;
            case 0x18F2A4u: goto label_18f2a4;
            case 0x18F2A8u: goto label_18f2a8;
            case 0x18F2ACu: goto label_18f2ac;
            case 0x18F2B0u: goto label_18f2b0;
            case 0x18F2B4u: goto label_18f2b4;
            case 0x18F2B8u: goto label_18f2b8;
            case 0x18F2BCu: goto label_18f2bc;
            case 0x18F2C0u: goto label_18f2c0;
            case 0x18F2C4u: goto label_18f2c4;
            case 0x18F2C8u: goto label_18f2c8;
            case 0x18F2CCu: goto label_18f2cc;
            case 0x18F2D0u: goto label_18f2d0;
            case 0x18F2D4u: goto label_18f2d4;
            case 0x18F2D8u: goto label_18f2d8;
            case 0x18F2DCu: goto label_18f2dc;
            case 0x18F2E0u: goto label_18f2e0;
            case 0x18F2E4u: goto label_18f2e4;
            case 0x18F2E8u: goto label_18f2e8;
            case 0x18F2ECu: goto label_18f2ec;
            case 0x18F2F0u: goto label_18f2f0;
            case 0x18F2F4u: goto label_18f2f4;
            case 0x18F2F8u: goto label_18f2f8;
            case 0x18F2FCu: goto label_18f2fc;
            case 0x18F300u: goto label_18f300;
            case 0x18F304u: goto label_18f304;
            case 0x18F308u: goto label_18f308;
            case 0x18F30Cu: goto label_18f30c;
            case 0x18F310u: goto label_18f310;
            case 0x18F314u: goto label_18f314;
            case 0x18F318u: goto label_18f318;
            case 0x18F31Cu: goto label_18f31c;
            case 0x18F320u: goto label_18f320;
            case 0x18F324u: goto label_18f324;
            case 0x18F328u: goto label_18f328;
            case 0x18F32Cu: goto label_18f32c;
            case 0x18F330u: goto label_18f330;
            case 0x18F334u: goto label_18f334;
            case 0x18F338u: goto label_18f338;
            case 0x18F33Cu: goto label_18f33c;
            case 0x18F340u: goto label_18f340;
            case 0x18F344u: goto label_18f344;
            case 0x18F348u: goto label_18f348;
            case 0x18F34Cu: goto label_18f34c;
            case 0x18F350u: goto label_18f350;
            case 0x18F354u: goto label_18f354;
            case 0x18F358u: goto label_18f358;
            case 0x18F35Cu: goto label_18f35c;
            case 0x18F360u: goto label_18f360;
            case 0x18F364u: goto label_18f364;
            case 0x18F368u: goto label_18f368;
            case 0x18F36Cu: goto label_18f36c;
            case 0x18F370u: goto label_18f370;
            case 0x18F374u: goto label_18f374;
            case 0x18F378u: goto label_18f378;
            case 0x18F37Cu: goto label_18f37c;
            case 0x18F380u: goto label_18f380;
            case 0x18F384u: goto label_18f384;
            case 0x18F388u: goto label_18f388;
            case 0x18F38Cu: goto label_18f38c;
            case 0x18F390u: goto label_18f390;
            case 0x18F394u: goto label_18f394;
            case 0x18F398u: goto label_18f398;
            case 0x18F39Cu: goto label_18f39c;
            case 0x18F3A0u: goto label_18f3a0;
            case 0x18F3A4u: goto label_18f3a4;
            case 0x18F3A8u: goto label_18f3a8;
            case 0x18F3ACu: goto label_18f3ac;
            case 0x18F3B0u: goto label_18f3b0;
            case 0x18F3B4u: goto label_18f3b4;
            case 0x18F3B8u: goto label_18f3b8;
            case 0x18F3BCu: goto label_18f3bc;
            case 0x18F3C0u: goto label_18f3c0;
            case 0x18F3C4u: goto label_18f3c4;
            case 0x18F3C8u: goto label_18f3c8;
            case 0x18F3CCu: goto label_18f3cc;
            case 0x18F3D0u: goto label_18f3d0;
            case 0x18F3D4u: goto label_18f3d4;
            case 0x18F3D8u: goto label_18f3d8;
            case 0x18F3DCu: goto label_18f3dc;
            case 0x18F3E0u: goto label_18f3e0;
            case 0x18F3E4u: goto label_18f3e4;
            case 0x18F3E8u: goto label_18f3e8;
            case 0x18F3ECu: goto label_18f3ec;
            case 0x18F3F0u: goto label_18f3f0;
            case 0x18F3F4u: goto label_18f3f4;
            case 0x18F3F8u: goto label_18f3f8;
            case 0x18F3FCu: goto label_18f3fc;
            case 0x18F400u: goto label_18f400;
            case 0x18F404u: goto label_18f404;
            case 0x18F408u: goto label_18f408;
            case 0x18F40Cu: goto label_18f40c;
            case 0x18F410u: goto label_18f410;
            case 0x18F414u: goto label_18f414;
            case 0x18F418u: goto label_18f418;
            case 0x18F41Cu: goto label_18f41c;
            case 0x18F420u: goto label_18f420;
            case 0x18F424u: goto label_18f424;
            case 0x18F428u: goto label_18f428;
            case 0x18F42Cu: goto label_18f42c;
            case 0x18F430u: goto label_18f430;
            case 0x18F434u: goto label_18f434;
            case 0x18F438u: goto label_18f438;
            case 0x18F43Cu: goto label_18f43c;
            case 0x18F440u: goto label_18f440;
            case 0x18F444u: goto label_18f444;
            case 0x18F448u: goto label_18f448;
            case 0x18F44Cu: goto label_18f44c;
            case 0x18F450u: goto label_18f450;
            case 0x18F454u: goto label_18f454;
            case 0x18F458u: goto label_18f458;
            case 0x18F45Cu: goto label_18f45c;
            case 0x18F460u: goto label_18f460;
            case 0x18F464u: goto label_18f464;
            case 0x18F468u: goto label_18f468;
            case 0x18F46Cu: goto label_18f46c;
            case 0x18F470u: goto label_18f470;
            case 0x18F474u: goto label_18f474;
            case 0x18F478u: goto label_18f478;
            case 0x18F47Cu: goto label_18f47c;
            case 0x18F480u: goto label_18f480;
            case 0x18F484u: goto label_18f484;
            case 0x18F488u: goto label_18f488;
            case 0x18F48Cu: goto label_18f48c;
            case 0x18F490u: goto label_18f490;
            case 0x18F494u: goto label_18f494;
            case 0x18F498u: goto label_18f498;
            case 0x18F49Cu: goto label_18f49c;
            case 0x18F4A0u: goto label_18f4a0;
            case 0x18F4A4u: goto label_18f4a4;
            case 0x18F4A8u: goto label_18f4a8;
            case 0x18F4ACu: goto label_18f4ac;
            case 0x18F4B0u: goto label_18f4b0;
            case 0x18F4B4u: goto label_18f4b4;
            case 0x18F4B8u: goto label_18f4b8;
            case 0x18F4BCu: goto label_18f4bc;
            case 0x18F4C0u: goto label_18f4c0;
            case 0x18F4C4u: goto label_18f4c4;
            case 0x18F4C8u: goto label_18f4c8;
            case 0x18F4CCu: goto label_18f4cc;
            case 0x18F4D0u: goto label_18f4d0;
            case 0x18F4D4u: goto label_18f4d4;
            case 0x18F4D8u: goto label_18f4d8;
            case 0x18F4DCu: goto label_18f4dc;
            case 0x18F4E0u: goto label_18f4e0;
            case 0x18F4E4u: goto label_18f4e4;
            case 0x18F4E8u: goto label_18f4e8;
            case 0x18F4ECu: goto label_18f4ec;
            case 0x18F4F0u: goto label_18f4f0;
            case 0x18F4F4u: goto label_18f4f4;
            case 0x18F4F8u: goto label_18f4f8;
            case 0x18F4FCu: goto label_18f4fc;
            case 0x18F500u: goto label_18f500;
            case 0x18F504u: goto label_18f504;
            case 0x18F508u: goto label_18f508;
            case 0x18F50Cu: goto label_18f50c;
            case 0x18F510u: goto label_18f510;
            case 0x18F514u: goto label_18f514;
            case 0x18F518u: goto label_18f518;
            case 0x18F51Cu: goto label_18f51c;
            case 0x18F520u: goto label_18f520;
            case 0x18F524u: goto label_18f524;
            case 0x18F528u: goto label_18f528;
            case 0x18F52Cu: goto label_18f52c;
            case 0x18F530u: goto label_18f530;
            case 0x18F534u: goto label_18f534;
            case 0x18F538u: goto label_18f538;
            case 0x18F53Cu: goto label_18f53c;
            case 0x18F540u: goto label_18f540;
            case 0x18F544u: goto label_18f544;
            case 0x18F548u: goto label_18f548;
            case 0x18F54Cu: goto label_18f54c;
            case 0x18F550u: goto label_18f550;
            case 0x18F554u: goto label_18f554;
            case 0x18F558u: goto label_18f558;
            case 0x18F55Cu: goto label_18f55c;
            case 0x18F560u: goto label_18f560;
            case 0x18F564u: goto label_18f564;
            case 0x18F568u: goto label_18f568;
            case 0x18F56Cu: goto label_18f56c;
            case 0x18F570u: goto label_18f570;
            case 0x18F574u: goto label_18f574;
            case 0x18F578u: goto label_18f578;
            case 0x18F57Cu: goto label_18f57c;
            case 0x18F580u: goto label_18f580;
            case 0x18F584u: goto label_18f584;
            case 0x18F588u: goto label_18f588;
            case 0x18F58Cu: goto label_18f58c;
            case 0x18F590u: goto label_18f590;
            case 0x18F594u: goto label_18f594;
            case 0x18F598u: goto label_18f598;
            case 0x18F59Cu: goto label_18f59c;
            case 0x18F5A0u: goto label_18f5a0;
            case 0x18F5A4u: goto label_18f5a4;
            case 0x18F5A8u: goto label_18f5a8;
            case 0x18F5ACu: goto label_18f5ac;
            case 0x18F5B0u: goto label_18f5b0;
            case 0x18F5B4u: goto label_18f5b4;
            case 0x18F5B8u: goto label_18f5b8;
            case 0x18F5BCu: goto label_18f5bc;
            case 0x18F5C0u: goto label_18f5c0;
            case 0x18F5C4u: goto label_18f5c4;
            case 0x18F5C8u: goto label_18f5c8;
            case 0x18F5CCu: goto label_18f5cc;
            case 0x18F5D0u: goto label_18f5d0;
            case 0x18F5D4u: goto label_18f5d4;
            case 0x18F5D8u: goto label_18f5d8;
            case 0x18F5DCu: goto label_18f5dc;
            case 0x18F5E0u: goto label_18f5e0;
            case 0x18F5E4u: goto label_18f5e4;
            case 0x18F5E8u: goto label_18f5e8;
            case 0x18F5ECu: goto label_18f5ec;
            case 0x18F5F0u: goto label_18f5f0;
            case 0x18F5F4u: goto label_18f5f4;
            case 0x18F5F8u: goto label_18f5f8;
            case 0x18F5FCu: goto label_18f5fc;
            case 0x18F600u: goto label_18f600;
            case 0x18F604u: goto label_18f604;
            case 0x18F608u: goto label_18f608;
            case 0x18F60Cu: goto label_18f60c;
            case 0x18F610u: goto label_18f610;
            case 0x18F614u: goto label_18f614;
            case 0x18F618u: goto label_18f618;
            case 0x18F61Cu: goto label_18f61c;
            case 0x18F620u: goto label_18f620;
            case 0x18F624u: goto label_18f624;
            case 0x18F628u: goto label_18f628;
            case 0x18F62Cu: goto label_18f62c;
            case 0x18F630u: goto label_18f630;
            case 0x18F634u: goto label_18f634;
            case 0x18F638u: goto label_18f638;
            case 0x18F63Cu: goto label_18f63c;
            case 0x18F640u: goto label_18f640;
            case 0x18F644u: goto label_18f644;
            case 0x18F648u: goto label_18f648;
            case 0x18F64Cu: goto label_18f64c;
            case 0x18F650u: goto label_18f650;
            case 0x18F654u: goto label_18f654;
            case 0x18F658u: goto label_18f658;
            case 0x18F65Cu: goto label_18f65c;
            case 0x18F660u: goto label_18f660;
            case 0x18F664u: goto label_18f664;
            case 0x18F668u: goto label_18f668;
            case 0x18F66Cu: goto label_18f66c;
            case 0x18F670u: goto label_18f670;
            case 0x18F674u: goto label_18f674;
            case 0x18F678u: goto label_18f678;
            case 0x18F67Cu: goto label_18f67c;
            case 0x18F680u: goto label_18f680;
            case 0x18F684u: goto label_18f684;
            case 0x18F688u: goto label_18f688;
            case 0x18F68Cu: goto label_18f68c;
            case 0x18F690u: goto label_18f690;
            case 0x18F694u: goto label_18f694;
            case 0x18F698u: goto label_18f698;
            case 0x18F69Cu: goto label_18f69c;
            case 0x18F6A0u: goto label_18f6a0;
            case 0x18F6A4u: goto label_18f6a4;
            case 0x18F6A8u: goto label_18f6a8;
            case 0x18F6ACu: goto label_18f6ac;
            case 0x18F6B0u: goto label_18f6b0;
            case 0x18F6B4u: goto label_18f6b4;
            case 0x18F6B8u: goto label_18f6b8;
            case 0x18F6BCu: goto label_18f6bc;
            case 0x18F6C0u: goto label_18f6c0;
            case 0x18F6C4u: goto label_18f6c4;
            case 0x18F6C8u: goto label_18f6c8;
            case 0x18F6CCu: goto label_18f6cc;
            case 0x18F6D0u: goto label_18f6d0;
            case 0x18F6D4u: goto label_18f6d4;
            case 0x18F6D8u: goto label_18f6d8;
            case 0x18F6DCu: goto label_18f6dc;
            case 0x18F6E0u: goto label_18f6e0;
            case 0x18F6E4u: goto label_18f6e4;
            case 0x18F6E8u: goto label_18f6e8;
            case 0x18F6ECu: goto label_18f6ec;
            case 0x18F6F0u: goto label_18f6f0;
            case 0x18F6F4u: goto label_18f6f4;
            case 0x18F6F8u: goto label_18f6f8;
            case 0x18F6FCu: goto label_18f6fc;
            case 0x18F700u: goto label_18f700;
            case 0x18F704u: goto label_18f704;
            case 0x18F708u: goto label_18f708;
            case 0x18F70Cu: goto label_18f70c;
            case 0x18F710u: goto label_18f710;
            case 0x18F714u: goto label_18f714;
            case 0x18F718u: goto label_18f718;
            case 0x18F71Cu: goto label_18f71c;
            case 0x18F720u: goto label_18f720;
            case 0x18F724u: goto label_18f724;
            case 0x18F728u: goto label_18f728;
            case 0x18F72Cu: goto label_18f72c;
            case 0x18F730u: goto label_18f730;
            case 0x18F734u: goto label_18f734;
            case 0x18F738u: goto label_18f738;
            case 0x18F73Cu: goto label_18f73c;
            case 0x18F740u: goto label_18f740;
            case 0x18F744u: goto label_18f744;
            case 0x18F748u: goto label_18f748;
            case 0x18F74Cu: goto label_18f74c;
            case 0x18F750u: goto label_18f750;
            case 0x18F754u: goto label_18f754;
            case 0x18F758u: goto label_18f758;
            case 0x18F75Cu: goto label_18f75c;
            case 0x18F760u: goto label_18f760;
            case 0x18F764u: goto label_18f764;
            case 0x18F768u: goto label_18f768;
            case 0x18F76Cu: goto label_18f76c;
            case 0x18F770u: goto label_18f770;
            case 0x18F774u: goto label_18f774;
            case 0x18F778u: goto label_18f778;
            case 0x18F77Cu: goto label_18f77c;
            case 0x18F780u: goto label_18f780;
            case 0x18F784u: goto label_18f784;
            case 0x18F788u: goto label_18f788;
            case 0x18F78Cu: goto label_18f78c;
            case 0x18F790u: goto label_18f790;
            case 0x18F794u: goto label_18f794;
            case 0x18F798u: goto label_18f798;
            case 0x18F79Cu: goto label_18f79c;
            case 0x18F7A0u: goto label_18f7a0;
            case 0x18F7A4u: goto label_18f7a4;
            case 0x18F7A8u: goto label_18f7a8;
            case 0x18F7ACu: goto label_18f7ac;
            case 0x18F7B0u: goto label_18f7b0;
            case 0x18F7B4u: goto label_18f7b4;
            case 0x18F7B8u: goto label_18f7b8;
            case 0x18F7BCu: goto label_18f7bc;
            case 0x18F7C0u: goto label_18f7c0;
            case 0x18F7C4u: goto label_18f7c4;
            case 0x18F7C8u: goto label_18f7c8;
            case 0x18F7CCu: goto label_18f7cc;
            case 0x18F7D0u: goto label_18f7d0;
            case 0x18F7D4u: goto label_18f7d4;
            case 0x18F7D8u: goto label_18f7d8;
            case 0x18F7DCu: goto label_18f7dc;
            case 0x18F7E0u: goto label_18f7e0;
            case 0x18F7E4u: goto label_18f7e4;
            case 0x18F7E8u: goto label_18f7e8;
            case 0x18F7ECu: goto label_18f7ec;
            case 0x18F7F0u: goto label_18f7f0;
            case 0x18F7F4u: goto label_18f7f4;
            case 0x18F7F8u: goto label_18f7f8;
            case 0x18F7FCu: goto label_18f7fc;
            case 0x18F800u: goto label_18f800;
            case 0x18F804u: goto label_18f804;
            case 0x18F808u: goto label_18f808;
            case 0x18F80Cu: goto label_18f80c;
            case 0x18F810u: goto label_18f810;
            case 0x18F814u: goto label_18f814;
            case 0x18F818u: goto label_18f818;
            case 0x18F81Cu: goto label_18f81c;
            case 0x18F820u: goto label_18f820;
            case 0x18F824u: goto label_18f824;
            case 0x18F828u: goto label_18f828;
            case 0x18F82Cu: goto label_18f82c;
            case 0x18F830u: goto label_18f830;
            case 0x18F834u: goto label_18f834;
            case 0x18F838u: goto label_18f838;
            case 0x18F83Cu: goto label_18f83c;
            case 0x18F840u: goto label_18f840;
            case 0x18F844u: goto label_18f844;
            case 0x18F848u: goto label_18f848;
            case 0x18F84Cu: goto label_18f84c;
            case 0x18F850u: goto label_18f850;
            case 0x18F854u: goto label_18f854;
            case 0x18F858u: goto label_18f858;
            case 0x18F85Cu: goto label_18f85c;
            case 0x18F860u: goto label_18f860;
            case 0x18F864u: goto label_18f864;
            case 0x18F868u: goto label_18f868;
            case 0x18F86Cu: goto label_18f86c;
            case 0x18F870u: goto label_18f870;
            case 0x18F874u: goto label_18f874;
            case 0x18F878u: goto label_18f878;
            case 0x18F87Cu: goto label_18f87c;
            case 0x18F880u: goto label_18f880;
            case 0x18F884u: goto label_18f884;
            case 0x18F888u: goto label_18f888;
            case 0x18F88Cu: goto label_18f88c;
            case 0x18F890u: goto label_18f890;
            case 0x18F894u: goto label_18f894;
            case 0x18F898u: goto label_18f898;
            case 0x18F89Cu: goto label_18f89c;
            case 0x18F8A0u: goto label_18f8a0;
            case 0x18F8A4u: goto label_18f8a4;
            case 0x18F8A8u: goto label_18f8a8;
            case 0x18F8ACu: goto label_18f8ac;
            case 0x18F8B0u: goto label_18f8b0;
            default: break;
        }
        return;
    }
label_fallthrough_0x18f8ac:
    ctx->pc = 0x18F8B4u;
}
