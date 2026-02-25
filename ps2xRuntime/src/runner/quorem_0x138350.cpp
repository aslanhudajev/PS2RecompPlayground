#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: quorem
// Address: 0x138350 - 0x138564
void quorem_0x138350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("quorem_0x138350");
#endif

    ctx->pc = 0x138350u;

    // 0x138350: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x138350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x138354: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x138354u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138358: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x138358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13835c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x138360: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x138360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138364: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x138364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x138368: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x138368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x13836c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x138370: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x138370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x138374: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x138374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x138378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13837c: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x13837cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x138380: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x138380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x138384: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x138384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x138388: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x138388u;
    {
        const bool branch_taken_0x138388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13838Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138388u;
            // 0x13838c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138388) {
            ctx->pc = 0x13853Cu;
            goto label_13853c;
        }
    }
    ctx->pc = 0x138390u;
    // 0x138390: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x138394: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x138394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x138398: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13839c: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x13839cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1383a0: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1383a4: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x1383a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1383a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1383ac: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x1383acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1383b0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1383b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1383b8: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x1383b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x1383bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1383BCu;
    {
        const bool branch_taken_0x1383bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383bc) {
            ctx->pc = 0x1383C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1383BCu;
            // 0x1383c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1383C4u;
            goto label_1383c4;
        }
    }
    ctx->pc = 0x1383C4u;
label_1383c4:
    // 0x1383c4: 0xa812  mflo        $s5
    ctx->pc = 0x1383c4u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x1383c8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1383c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383cc: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1383CCu;
    {
        const bool branch_taken_0x1383cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1383CCu;
            // 0x1383d0: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383cc) {
            ctx->pc = 0x138478u;
            goto label_138478;
        }
    }
    ctx->pc = 0x1383D4u;
    // 0x1383d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1383d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1383d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383dc: 0x0  nop
    ctx->pc = 0x1383dcu;
    // NOP
label_1383e0:
    // 0x1383e0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1383e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1383e4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1383e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1383e8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1383e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1383ec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1383ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x1383f0: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x1383f0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1383f4: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x1383f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1383f8: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1383f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1383fc: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x1383fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x138400: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x138400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x138404: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x138404u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x138408: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x138408u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)65535u)));
    // 0x13840c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x13840cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x138410: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x138410u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x138414: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x138414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x138418: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x138418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x13841c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x13841cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x138420: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x138420u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x138424: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x138424u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x138428: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x138428u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13842c: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x138430: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x138430u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x138434: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x138434u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x138438: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x13843c: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x13843cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x138440: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x138440u;
    {
        const bool branch_taken_0x138440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x138444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138440u;
            // 0x138444: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138440) {
            ctx->pc = 0x1383E0u;
            goto label_1383e0;
        }
    }
    ctx->pc = 0x138448u;
    // 0x138448: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x138448u;
    {
        const bool branch_taken_0x138448 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x13844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138448u;
            // 0x13844c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138448) {
            ctx->pc = 0x13847Cu;
            goto label_13847c;
        }
    }
    ctx->pc = 0x138450u;
    // 0x138450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138450u;
    {
        const bool branch_taken_0x138450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138450u;
            // 0x138454: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138450) {
            ctx->pc = 0x13845Cu;
            goto label_13845c;
        }
    }
    ctx->pc = 0x138458u;
label_138458:
    // 0x138458: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_13845c:
    // 0x13845c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x13845cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x138460: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x138460u;
    {
        const bool branch_taken_0x138460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138460) {
            ctx->pc = 0x138464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138460u;
            // 0x138464: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138478u;
            goto label_138478;
        }
    }
    ctx->pc = 0x138468u;
    // 0x138468: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13846c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13846Cu;
    {
        const bool branch_taken_0x13846c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13846Cu;
            // 0x138470: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13846c) {
            ctx->pc = 0x138458u;
            goto label_138458;
        }
    }
    ctx->pc = 0x138474u;
    // 0x138474: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x138474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_138478:
    // 0x138478: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x138478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_13847c:
    // 0x13847c: 0xc04f01c  jal         func_13C070
    ctx->pc = 0x13847Cu;
    SET_GPR_U32(ctx, 31, 0x138484u);
    ctx->pc = 0x138480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13847Cu;
            // 0x138480: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C070u;
    if (runtime->hasFunction(0x13C070u)) {
        auto targetFn = runtime->lookupFunction(0x13C070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138484u; }
        if (ctx->pc != 0x138484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x13c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138484u; }
        if (ctx->pc != 0x138484u) { return; }
    }
    ctx->pc = 0x138484u;
    // 0x138484: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x138484u;
    {
        const bool branch_taken_0x138484 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x138488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138484u;
            // 0x138488: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138484) {
            ctx->pc = 0x138538u;
            goto label_138538;
        }
    }
    ctx->pc = 0x13848Cu;
    // 0x13848c: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x13848cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x138490: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x138490u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x138494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138498: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x138498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13849c: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x13849cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1384a0:
    // 0x1384a0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x1384a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1384a4: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1384a8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1384a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1384ac: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1384acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x1384b0: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x1384b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1384b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1384b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1384b8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1384b8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1384bc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1384bcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x1384c0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1384c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1384c4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1384c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1384c8: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x1384c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1384cc: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1384ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1384d0: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x1384d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65535u)));
    // 0x1384d4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1384d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1384d8: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x1384d8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1384dc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1384e0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1384e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1384e4: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x1384e4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1384e8: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x1384e8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1384ec: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1384ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1384f0: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x1384f0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1384f4: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x1384f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x1384f8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1384F8u;
    {
        const bool branch_taken_0x1384f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384F8u;
            // 0x1384fc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384f8) {
            ctx->pc = 0x1384A0u;
            goto label_1384a0;
        }
    }
    ctx->pc = 0x138500u;
    // 0x138500: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x138500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x138504: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x138504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x138508: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x138508u;
    {
        const bool branch_taken_0x138508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138508u;
            // 0x13850c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138508) {
            ctx->pc = 0x13853Cu;
            goto label_13853c;
        }
    }
    ctx->pc = 0x138510u;
    // 0x138510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138510u;
    {
        const bool branch_taken_0x138510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138510u;
            // 0x138514: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138510) {
            ctx->pc = 0x13851Cu;
            goto label_13851c;
        }
    }
    ctx->pc = 0x138518u;
label_138518:
    // 0x138518: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x138518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_13851c:
    // 0x13851c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x13851cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x138520: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x138520u;
    {
        const bool branch_taken_0x138520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138520) {
            ctx->pc = 0x138524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138520u;
            // 0x138524: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138538u;
            goto label_138538;
        }
    }
    ctx->pc = 0x138528u;
    // 0x138528: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13852c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13852Cu;
    {
        const bool branch_taken_0x13852c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13852c) {
            ctx->pc = 0x138530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13852Cu;
            // 0x138530: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138518u;
            goto label_138518;
        }
    }
    ctx->pc = 0x138534u;
    // 0x138534: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x138534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_138538:
    // 0x138538: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x138538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13853c:
    // 0x13853c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13853cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138540: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x138540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138544: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x138544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138548: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x138548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13854c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13854cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138550: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x138550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138554: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x138554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13855c: 0x3e00008  jr          $ra
    ctx->pc = 0x13855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13855Cu;
            // 0x138560: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1383C4u: goto label_1383c4;
            case 0x1383E0u: goto label_1383e0;
            case 0x138458u: goto label_138458;
            case 0x13845Cu: goto label_13845c;
            case 0x138478u: goto label_138478;
            case 0x13847Cu: goto label_13847c;
            case 0x1384A0u: goto label_1384a0;
            case 0x138518u: goto label_138518;
            case 0x13851Cu: goto label_13851c;
            case 0x138538u: goto label_138538;
            case 0x13853Cu: goto label_13853c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138564u;
}
