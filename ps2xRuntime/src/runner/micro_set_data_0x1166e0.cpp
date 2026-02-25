#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: micro_set_data
// Address: 0x1166e0 - 0x1167f8
void micro_set_data_0x1166e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("micro_set_data_0x1166e0");
#endif

    ctx->pc = 0x1166e0u;

    // 0x1166e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1166e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1166e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1166e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1166e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1166e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1166ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1166ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1166f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1166f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1166f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1166f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1166fc: 0xc044550  jal         func_111540
    ctx->pc = 0x1166FCu;
    SET_GPR_U32(ctx, 31, 0x116704u);
    ctx->pc = 0x116700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1166FCu;
            // 0x116700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111540u;
    if (runtime->hasFunction(0x111540u)) {
        auto targetFn = runtime->lookupFunction(0x111540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116704u; }
        if (ctx->pc != 0x116704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsGeneralStatus_0x111540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116704u; }
        if (ctx->pc != 0x116704u) { return; }
    }
    ctx->pc = 0x116704u;
    // 0x116704: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x116704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116708: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11670c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11670Cu;
    {
        const bool branch_taken_0x11670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11670c) {
            ctx->pc = 0x116710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11670Cu;
            // 0x116710: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11674Cu;
            goto label_11674c;
        }
    }
    ctx->pc = 0x116714u;
    // 0x116714: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x116714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x116718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11671c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11671cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x116720: 0xe64100cc  swc1        $f1, 0xCC($s2)
    ctx->pc = 0x116720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
    // 0x116724: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x116724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116728: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x116728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11672c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11672cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x116730: 0x0  nop
    ctx->pc = 0x116730u;
    // NOP
    // 0x116734: 0x0  nop
    ctx->pc = 0x116734u;
    // NOP
    // 0x116738: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x116738u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x11673c: 0xe64200d0  swc1        $f2, 0xD0($s2)
    ctx->pc = 0x11673cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x116740: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x116740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116744: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x116744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x116748: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_11674c:
    // 0x11674c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x11674cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x116750: 0x24080412  addiu       $t0, $zero, 0x412
    ctx->pc = 0x116750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x116754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x116754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116758: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x116758u;
    {
        const bool branch_taken_0x116758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11675Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116758u;
            // 0x11675c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116758) {
            ctx->pc = 0x1167C8u;
            goto label_1167c8;
        }
    }
    ctx->pc = 0x116760u;
    // 0x116760: 0xdce20038  ld          $v0, 0x38($a3)
    ctx->pc = 0x116760u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x116764: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x116764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x116768: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116768u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x11676c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116770: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116774u;
    {
        const bool branch_taken_0x116774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116774u;
            // 0x116778: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116774) {
            ctx->pc = 0x116794u;
            goto label_116794;
        }
    }
    ctx->pc = 0x11677Cu;
    // 0x11677c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x11677cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x116780: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x116780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x116784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116788u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x11678c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11678Cu;
    {
        const bool branch_taken_0x11678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11678Cu;
            // 0x116790: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11678c) {
            ctx->pc = 0x11679Cu;
            goto label_11679c;
        }
    }
    ctx->pc = 0x116794u;
label_116794:
    // 0x116794: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x116798: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x116798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11679c:
    // 0x11679c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1167a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1167a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2u)));
    // 0x1167a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1167A4u;
    {
        const bool branch_taken_0x1167a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1167A4u;
            // 0x1167a8: 0x91700  sll         $v0, $t1, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167a4) {
            ctx->pc = 0x1167B8u;
            goto label_1167b8;
        }
    }
    ctx->pc = 0x1167ACu;
    // 0x1167ac: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1167b0: 0x2408412e  addiu       $t0, $zero, 0x412E
    ctx->pc = 0x1167b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16686));
    // 0x1167b4: 0x91700  sll         $v0, $t1, 28
    ctx->pc = 0x1167b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 28));
label_1167b8:
    // 0x1167b8: 0xae280018  sw          $t0, 0x18($s1)
    ctx->pc = 0x1167b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 8));
    // 0x1167bc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1167bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1167c0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1167c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1167c4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1167c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1167c8:
    // 0x1167c8: 0xdce20038  ld          $v0, 0x38($a3)
    ctx->pc = 0x1167c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1167cc: 0x34c30040  ori         $v1, $a2, 0x40
    ctx->pc = 0x1167ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)64u)));
    // 0x1167d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1167d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1167d4: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x1167d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x1167d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1167d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1167dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1167dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1167e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1167e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1167e4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1167e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1167e8: 0xae4600d8  sw          $a2, 0xD8($s2)
    ctx->pc = 0x1167e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 6));
    // 0x1167ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1167ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1167f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1167F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1167F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1167F0u;
            // 0x1167f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11674Cu: goto label_11674c;
            case 0x116794u: goto label_116794;
            case 0x11679Cu: goto label_11679c;
            case 0x1167B8u: goto label_1167b8;
            case 0x1167C8u: goto label_1167c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1167F8u;
}
