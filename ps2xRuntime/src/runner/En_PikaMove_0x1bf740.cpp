#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En_PikaMove
// Address: 0x1bf740 - 0x1bf970
void En_PikaMove_0x1bf740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En_PikaMove_0x1bf740");
#endif

    ctx->pc = 0x1bf740u;

label_1bf740:
    // 0x1bf740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bf744:
    // 0x1bf744: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1bf748:
    // 0x1bf748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bf74c:
    // 0x1bf74c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf74cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf750:
    // 0x1bf750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bf754:
    // 0x1bf754: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf758:
    // 0x1bf758: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1bf758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf75c:
    // 0x1bf75c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1bf75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bf760:
    // 0x1bf760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf764:
    // 0x1bf764: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x1bf764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf768:
    // 0x1bf768: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bf768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1bf76c:
    // 0x1bf76c: 0xe4a10114  swc1        $f1, 0x114($a1)
    ctx->pc = 0x1bf76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 276), bits); }
label_1bf770:
    // 0x1bf770: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bf770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf774:
    // 0x1bf774: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1bf774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bf778:
    // 0x1bf778: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1bf778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf77c:
    // 0x1bf77c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bf77cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1bf780:
    // 0x1bf780: 0xe4610110  swc1        $f1, 0x110($v1)
    ctx->pc = 0x1bf780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_1bf784:
    // 0x1bf784: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf788:
    // 0x1bf788: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1bf788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bf78c:
    // 0x1bf78c: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1bf78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf790:
    // 0x1bf790: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bf790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1bf794:
    // 0x1bf794: 0xe4610118  swc1        $f1, 0x118($v1)
    ctx->pc = 0x1bf794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 280), bits); }
label_1bf798:
    // 0x1bf798: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bf798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf79c:
    // 0x1bf79c: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1bf79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf7a0:
    // 0x1bf7a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf7a4:
    // 0x1bf7a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1bf7a8:
    if (ctx->pc == 0x1BF7A8u) {
        ctx->pc = 0x1BF7A8u;
            // 0x1bf7a8: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1BF7ACu;
        goto label_1bf7ac;
    }
    ctx->pc = 0x1BF7A4u;
    {
        const bool branch_taken_0x1bf7a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7A4u;
            // 0x1bf7a8: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7a4) {
            ctx->pc = 0x1BF7C8u;
            goto label_1bf7c8;
        }
    }
    ctx->pc = 0x1BF7ACu;
label_1bf7ac:
    // 0x1bf7ac: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1bf7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1bf7b0:
    // 0x1bf7b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf7b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf7b4:
    // 0x1bf7b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf7b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf7b8:
    // 0x1bf7b8: 0x0  nop
    ctx->pc = 0x1bf7b8u;
    // NOP
label_1bf7bc:
    // 0x1bf7bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf7bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bf7c0:
    // 0x1bf7c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bf7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bf7c4:
    // 0x1bf7c4: 0x0  nop
    ctx->pc = 0x1bf7c4u;
    // NOP
label_1bf7c8:
    // 0x1bf7c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf7cc:
    // 0x1bf7cc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bf7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1bf7d0:
    // 0x1bf7d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf7d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf7d4:
    // 0x1bf7d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf7d8:
    // 0x1bf7d8: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x1bf7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf7dc:
    // 0x1bf7dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bf7dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf7e0:
    // 0x1bf7e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1bf7e4:
    if (ctx->pc == 0x1BF7E4u) {
        ctx->pc = 0x1BF7E4u;
            // 0x1bf7e4: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->pc = 0x1BF7E8u;
        goto label_1bf7e8;
    }
    ctx->pc = 0x1BF7E0u;
    {
        const bool branch_taken_0x1bf7e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF7E0u;
            // 0x1bf7e4: 0x24850114  addiu       $a1, $a0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7e0) {
            ctx->pc = 0x1BF800u;
            goto label_1bf800;
        }
    }
    ctx->pc = 0x1BF7E8u;
label_1bf7e8:
    // 0x1bf7e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1bf7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1bf7ec:
    // 0x1bf7ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf7ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf7f0:
    // 0x1bf7f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf7f4:
    // 0x1bf7f4: 0x0  nop
    ctx->pc = 0x1bf7f4u;
    // NOP
label_1bf7f8:
    // 0x1bf7f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bf7f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bf7fc:
    // 0x1bf7fc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bf7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1bf800:
    // 0x1bf800: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf804:
    // 0x1bf804: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1bf804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1bf808:
    // 0x1bf808: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf808u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf80c:
    // 0x1bf80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf810:
    // 0x1bf810: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1bf810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf814:
    // 0x1bf814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf818:
    // 0x1bf818: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bf81c:
    if (ctx->pc == 0x1BF81Cu) {
        ctx->pc = 0x1BF81Cu;
            // 0x1bf81c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->pc = 0x1BF820u;
        goto label_1bf820;
    }
    ctx->pc = 0x1BF818u;
    {
        const bool branch_taken_0x1bf818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF818u;
            // 0x1bf81c: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf818) {
            ctx->pc = 0x1BF838u;
            goto label_1bf838;
        }
    }
    ctx->pc = 0x1BF820u;
label_1bf820:
    // 0x1bf820: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1bf820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1bf824:
    // 0x1bf824: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf824u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf828:
    // 0x1bf828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf82c:
    // 0x1bf82c: 0x0  nop
    ctx->pc = 0x1bf82cu;
    // NOP
label_1bf830:
    // 0x1bf830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bf834:
    // 0x1bf834: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bf834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1bf838:
    // 0x1bf838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf83c:
    // 0x1bf83c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bf83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1bf840:
    // 0x1bf840: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf840u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf844:
    // 0x1bf844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf848:
    // 0x1bf848: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x1bf848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf84c:
    // 0x1bf84c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bf84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf850:
    // 0x1bf850: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1bf854:
    if (ctx->pc == 0x1BF854u) {
        ctx->pc = 0x1BF854u;
            // 0x1bf854: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->pc = 0x1BF858u;
        goto label_1bf858;
    }
    ctx->pc = 0x1BF850u;
    {
        const bool branch_taken_0x1bf850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF850u;
            // 0x1bf854: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf850) {
            ctx->pc = 0x1BF870u;
            goto label_1bf870;
        }
    }
    ctx->pc = 0x1BF858u;
label_1bf858:
    // 0x1bf858: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1bf85c:
    // 0x1bf85c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf85cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf860:
    // 0x1bf860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf864:
    // 0x1bf864: 0x0  nop
    ctx->pc = 0x1bf864u;
    // NOP
label_1bf868:
    // 0x1bf868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bf868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bf86c:
    // 0x1bf86c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bf86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1bf870:
    // 0x1bf870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf874:
    // 0x1bf874: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1bf874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1bf878:
    // 0x1bf878: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf878u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf87c:
    // 0x1bf87c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf880:
    // 0x1bf880: 0xc4810118  lwc1        $f1, 0x118($a0)
    ctx->pc = 0x1bf880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf884:
    // 0x1bf884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf888:
    // 0x1bf888: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bf88c:
    if (ctx->pc == 0x1BF88Cu) {
        ctx->pc = 0x1BF88Cu;
            // 0x1bf88c: 0x24850118  addiu       $a1, $a0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
        ctx->pc = 0x1BF890u;
        goto label_1bf890;
    }
    ctx->pc = 0x1BF888u;
    {
        const bool branch_taken_0x1bf888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF888u;
            // 0x1bf88c: 0x24850118  addiu       $a1, $a0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf888) {
            ctx->pc = 0x1BF8A8u;
            goto label_1bf8a8;
        }
    }
    ctx->pc = 0x1BF890u;
label_1bf890:
    // 0x1bf890: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1bf894:
    // 0x1bf894: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf894u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf898:
    // 0x1bf898: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf89c:
    // 0x1bf89c: 0x0  nop
    ctx->pc = 0x1bf89cu;
    // NOP
label_1bf8a0:
    // 0x1bf8a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bf8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bf8a4:
    // 0x1bf8a4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bf8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1bf8a8:
    // 0x1bf8a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf8ac:
    // 0x1bf8ac: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1bf8b0:
    // 0x1bf8b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf8b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf8b4:
    // 0x1bf8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf8b8:
    // 0x1bf8b8: 0xc4810118  lwc1        $f1, 0x118($a0)
    ctx->pc = 0x1bf8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf8bc:
    // 0x1bf8bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bf8bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf8c0:
    // 0x1bf8c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1bf8c4:
    if (ctx->pc == 0x1BF8C4u) {
        ctx->pc = 0x1BF8C4u;
            // 0x1bf8c4: 0x24850118  addiu       $a1, $a0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
        ctx->pc = 0x1BF8C8u;
        goto label_1bf8c8;
    }
    ctx->pc = 0x1BF8C0u;
    {
        const bool branch_taken_0x1bf8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8C0u;
            // 0x1bf8c4: 0x24850118  addiu       $a1, $a0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8c0) {
            ctx->pc = 0x1BF8E0u;
            goto label_1bf8e0;
        }
    }
    ctx->pc = 0x1BF8C8u;
label_1bf8c8:
    // 0x1bf8c8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1bf8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1bf8cc:
    // 0x1bf8cc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1bf8ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
label_1bf8d0:
    // 0x1bf8d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf8d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf8d4:
    // 0x1bf8d4: 0x0  nop
    ctx->pc = 0x1bf8d4u;
    // NOP
label_1bf8d8:
    // 0x1bf8d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bf8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1bf8dc:
    // 0x1bf8dc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bf8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1bf8e0:
    // 0x1bf8e0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1bf8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1bf8e4:
    // 0x1bf8e4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1bf8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1bf8e8:
    // 0x1bf8e8: 0xc04b788  jal         func_12DE20
label_1bf8ec:
    if (ctx->pc == 0x1BF8ECu) {
        ctx->pc = 0x1BF8ECu;
            // 0x1bf8ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BF8F0u;
        goto label_1bf8f0;
    }
    ctx->pc = 0x1BF8E8u;
    SET_GPR_U32(ctx, 31, 0x1BF8F0u);
    ctx->pc = 0x1BF8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8E8u;
            // 0x1bf8ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8F0u; }
        if (ctx->pc != 0x1BF8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF8F0u; }
        if (ctx->pc != 0x1BF8F0u) { return; }
    }
    ctx->pc = 0x1BF8F0u;
label_1bf8f0:
    // 0x1bf8f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf8f4:
    // 0x1bf8f4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1bf8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf8f8:
    // 0x1bf8f8: 0xc04b7da  jal         func_12DF68
label_1bf8fc:
    if (ctx->pc == 0x1BF8FCu) {
        ctx->pc = 0x1BF8FCu;
            // 0x1bf8fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF900u;
        goto label_1bf900;
    }
    ctx->pc = 0x1BF8F8u;
    SET_GPR_U32(ctx, 31, 0x1BF900u);
    ctx->pc = 0x1BF8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF8F8u;
            // 0x1bf8fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF900u; }
        if (ctx->pc != 0x1BF900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF900u; }
        if (ctx->pc != 0x1BF900u) { return; }
    }
    ctx->pc = 0x1BF900u;
label_1bf900:
    // 0x1bf900: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf904:
    // 0x1bf904: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1bf904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf908:
    // 0x1bf908: 0xc04b804  jal         func_12E010
label_1bf90c:
    if (ctx->pc == 0x1BF90Cu) {
        ctx->pc = 0x1BF90Cu;
            // 0x1bf90c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF910u;
        goto label_1bf910;
    }
    ctx->pc = 0x1BF908u;
    SET_GPR_U32(ctx, 31, 0x1BF910u);
    ctx->pc = 0x1BF90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF908u;
            // 0x1bf90c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF910u; }
        if (ctx->pc != 0x1BF910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF910u; }
        if (ctx->pc != 0x1BF910u) { return; }
    }
    ctx->pc = 0x1BF910u;
label_1bf910:
    // 0x1bf910: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf914:
    // 0x1bf914: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1bf914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bf918:
    // 0x1bf918: 0xc04b7b0  jal         func_12DEC0
label_1bf91c:
    if (ctx->pc == 0x1BF91Cu) {
        ctx->pc = 0x1BF91Cu;
            // 0x1bf91c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF920u;
        goto label_1bf920;
    }
    ctx->pc = 0x1BF918u;
    SET_GPR_U32(ctx, 31, 0x1BF920u);
    ctx->pc = 0x1BF91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF918u;
            // 0x1bf91c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF920u; }
        if (ctx->pc != 0x1BF920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF920u; }
        if (ctx->pc != 0x1BF920u) { return; }
    }
    ctx->pc = 0x1BF920u;
label_1bf920:
    // 0x1bf920: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bf920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf924:
    // 0x1bf924: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bf924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf928:
    // 0x1bf928: 0xc04b75e  jal         func_12DD78
label_1bf92c:
    if (ctx->pc == 0x1BF92Cu) {
        ctx->pc = 0x1BF92Cu;
            // 0x1bf92c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1BF930u;
        goto label_1bf930;
    }
    ctx->pc = 0x1BF928u;
    SET_GPR_U32(ctx, 31, 0x1BF930u);
    ctx->pc = 0x1BF92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF928u;
            // 0x1bf92c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF930u; }
        if (ctx->pc != 0x1BF930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF930u; }
        if (ctx->pc != 0x1BF930u) { return; }
    }
    ctx->pc = 0x1BF930u;
label_1bf930:
    // 0x1bf930: 0xc0604dc  jal         func_181370
label_1bf934:
    if (ctx->pc == 0x1BF934u) {
        ctx->pc = 0x1BF934u;
            // 0x1bf934: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BF938u;
        goto label_1bf938;
    }
    ctx->pc = 0x1BF930u;
    SET_GPR_U32(ctx, 31, 0x1BF938u);
    ctx->pc = 0x1BF934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF930u;
            // 0x1bf934: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF938u; }
        if (ctx->pc != 0x1BF938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF938u; }
        if (ctx->pc != 0x1BF938u) { return; }
    }
    ctx->pc = 0x1BF938u;
label_1bf938:
    // 0x1bf938: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1bf93c:
    // 0x1bf93c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bf93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bf940:
    // 0x1bf940: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1bf940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_1bf944:
    // 0x1bf944: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bf944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1bf948:
    // 0x1bf948: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1bf94c:
    if (ctx->pc == 0x1BF94Cu) {
        ctx->pc = 0x1BF950u;
        goto label_1bf950;
    }
    ctx->pc = 0x1BF948u;
    {
        const bool branch_taken_0x1bf948 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bf948) {
            ctx->pc = 0x1BF960u;
            goto label_1bf960;
        }
    }
    ctx->pc = 0x1BF950u;
label_1bf950:
    // 0x1bf950: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1bf954:
    // 0x1bf954: 0x40f809  jalr        $v0
label_1bf958:
    if (ctx->pc == 0x1BF958u) {
        ctx->pc = 0x1BF958u;
            // 0x1bf958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BF95Cu;
        goto label_1bf95c;
    }
    ctx->pc = 0x1BF954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF95Cu);
        ctx->pc = 0x1BF958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF954u;
            // 0x1bf958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF740u: goto label_1bf740;
            case 0x1BF744u: goto label_1bf744;
            case 0x1BF748u: goto label_1bf748;
            case 0x1BF74Cu: goto label_1bf74c;
            case 0x1BF750u: goto label_1bf750;
            case 0x1BF754u: goto label_1bf754;
            case 0x1BF758u: goto label_1bf758;
            case 0x1BF75Cu: goto label_1bf75c;
            case 0x1BF760u: goto label_1bf760;
            case 0x1BF764u: goto label_1bf764;
            case 0x1BF768u: goto label_1bf768;
            case 0x1BF76Cu: goto label_1bf76c;
            case 0x1BF770u: goto label_1bf770;
            case 0x1BF774u: goto label_1bf774;
            case 0x1BF778u: goto label_1bf778;
            case 0x1BF77Cu: goto label_1bf77c;
            case 0x1BF780u: goto label_1bf780;
            case 0x1BF784u: goto label_1bf784;
            case 0x1BF788u: goto label_1bf788;
            case 0x1BF78Cu: goto label_1bf78c;
            case 0x1BF790u: goto label_1bf790;
            case 0x1BF794u: goto label_1bf794;
            case 0x1BF798u: goto label_1bf798;
            case 0x1BF79Cu: goto label_1bf79c;
            case 0x1BF7A0u: goto label_1bf7a0;
            case 0x1BF7A4u: goto label_1bf7a4;
            case 0x1BF7A8u: goto label_1bf7a8;
            case 0x1BF7ACu: goto label_1bf7ac;
            case 0x1BF7B0u: goto label_1bf7b0;
            case 0x1BF7B4u: goto label_1bf7b4;
            case 0x1BF7B8u: goto label_1bf7b8;
            case 0x1BF7BCu: goto label_1bf7bc;
            case 0x1BF7C0u: goto label_1bf7c0;
            case 0x1BF7C4u: goto label_1bf7c4;
            case 0x1BF7C8u: goto label_1bf7c8;
            case 0x1BF7CCu: goto label_1bf7cc;
            case 0x1BF7D0u: goto label_1bf7d0;
            case 0x1BF7D4u: goto label_1bf7d4;
            case 0x1BF7D8u: goto label_1bf7d8;
            case 0x1BF7DCu: goto label_1bf7dc;
            case 0x1BF7E0u: goto label_1bf7e0;
            case 0x1BF7E4u: goto label_1bf7e4;
            case 0x1BF7E8u: goto label_1bf7e8;
            case 0x1BF7ECu: goto label_1bf7ec;
            case 0x1BF7F0u: goto label_1bf7f0;
            case 0x1BF7F4u: goto label_1bf7f4;
            case 0x1BF7F8u: goto label_1bf7f8;
            case 0x1BF7FCu: goto label_1bf7fc;
            case 0x1BF800u: goto label_1bf800;
            case 0x1BF804u: goto label_1bf804;
            case 0x1BF808u: goto label_1bf808;
            case 0x1BF80Cu: goto label_1bf80c;
            case 0x1BF810u: goto label_1bf810;
            case 0x1BF814u: goto label_1bf814;
            case 0x1BF818u: goto label_1bf818;
            case 0x1BF81Cu: goto label_1bf81c;
            case 0x1BF820u: goto label_1bf820;
            case 0x1BF824u: goto label_1bf824;
            case 0x1BF828u: goto label_1bf828;
            case 0x1BF82Cu: goto label_1bf82c;
            case 0x1BF830u: goto label_1bf830;
            case 0x1BF834u: goto label_1bf834;
            case 0x1BF838u: goto label_1bf838;
            case 0x1BF83Cu: goto label_1bf83c;
            case 0x1BF840u: goto label_1bf840;
            case 0x1BF844u: goto label_1bf844;
            case 0x1BF848u: goto label_1bf848;
            case 0x1BF84Cu: goto label_1bf84c;
            case 0x1BF850u: goto label_1bf850;
            case 0x1BF854u: goto label_1bf854;
            case 0x1BF858u: goto label_1bf858;
            case 0x1BF85Cu: goto label_1bf85c;
            case 0x1BF860u: goto label_1bf860;
            case 0x1BF864u: goto label_1bf864;
            case 0x1BF868u: goto label_1bf868;
            case 0x1BF86Cu: goto label_1bf86c;
            case 0x1BF870u: goto label_1bf870;
            case 0x1BF874u: goto label_1bf874;
            case 0x1BF878u: goto label_1bf878;
            case 0x1BF87Cu: goto label_1bf87c;
            case 0x1BF880u: goto label_1bf880;
            case 0x1BF884u: goto label_1bf884;
            case 0x1BF888u: goto label_1bf888;
            case 0x1BF88Cu: goto label_1bf88c;
            case 0x1BF890u: goto label_1bf890;
            case 0x1BF894u: goto label_1bf894;
            case 0x1BF898u: goto label_1bf898;
            case 0x1BF89Cu: goto label_1bf89c;
            case 0x1BF8A0u: goto label_1bf8a0;
            case 0x1BF8A4u: goto label_1bf8a4;
            case 0x1BF8A8u: goto label_1bf8a8;
            case 0x1BF8ACu: goto label_1bf8ac;
            case 0x1BF8B0u: goto label_1bf8b0;
            case 0x1BF8B4u: goto label_1bf8b4;
            case 0x1BF8B8u: goto label_1bf8b8;
            case 0x1BF8BCu: goto label_1bf8bc;
            case 0x1BF8C0u: goto label_1bf8c0;
            case 0x1BF8C4u: goto label_1bf8c4;
            case 0x1BF8C8u: goto label_1bf8c8;
            case 0x1BF8CCu: goto label_1bf8cc;
            case 0x1BF8D0u: goto label_1bf8d0;
            case 0x1BF8D4u: goto label_1bf8d4;
            case 0x1BF8D8u: goto label_1bf8d8;
            case 0x1BF8DCu: goto label_1bf8dc;
            case 0x1BF8E0u: goto label_1bf8e0;
            case 0x1BF8E4u: goto label_1bf8e4;
            case 0x1BF8E8u: goto label_1bf8e8;
            case 0x1BF8ECu: goto label_1bf8ec;
            case 0x1BF8F0u: goto label_1bf8f0;
            case 0x1BF8F4u: goto label_1bf8f4;
            case 0x1BF8F8u: goto label_1bf8f8;
            case 0x1BF8FCu: goto label_1bf8fc;
            case 0x1BF900u: goto label_1bf900;
            case 0x1BF904u: goto label_1bf904;
            case 0x1BF908u: goto label_1bf908;
            case 0x1BF90Cu: goto label_1bf90c;
            case 0x1BF910u: goto label_1bf910;
            case 0x1BF914u: goto label_1bf914;
            case 0x1BF918u: goto label_1bf918;
            case 0x1BF91Cu: goto label_1bf91c;
            case 0x1BF920u: goto label_1bf920;
            case 0x1BF924u: goto label_1bf924;
            case 0x1BF928u: goto label_1bf928;
            case 0x1BF92Cu: goto label_1bf92c;
            case 0x1BF930u: goto label_1bf930;
            case 0x1BF934u: goto label_1bf934;
            case 0x1BF938u: goto label_1bf938;
            case 0x1BF93Cu: goto label_1bf93c;
            case 0x1BF940u: goto label_1bf940;
            case 0x1BF944u: goto label_1bf944;
            case 0x1BF948u: goto label_1bf948;
            case 0x1BF94Cu: goto label_1bf94c;
            case 0x1BF950u: goto label_1bf950;
            case 0x1BF954u: goto label_1bf954;
            case 0x1BF958u: goto label_1bf958;
            case 0x1BF95Cu: goto label_1bf95c;
            case 0x1BF960u: goto label_1bf960;
            case 0x1BF964u: goto label_1bf964;
            case 0x1BF968u: goto label_1bf968;
            case 0x1BF96Cu: goto label_1bf96c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BF95Cu; }
            if (ctx->pc != 0x1BF95Cu) { return; }
        }
    }
    ctx->pc = 0x1BF95Cu;
label_1bf95c:
    // 0x1bf95c: 0x0  nop
    ctx->pc = 0x1bf95cu;
    // NOP
label_1bf960:
    // 0x1bf960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bf964:
    // 0x1bf964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf968:
    // 0x1bf968: 0x3e00008  jr          $ra
label_1bf96c:
    if (ctx->pc == 0x1BF96Cu) {
        ctx->pc = 0x1BF96Cu;
            // 0x1bf96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BF970u;
        goto label_fallthrough_0x1bf968;
    }
    ctx->pc = 0x1BF968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF968u;
            // 0x1bf96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF740u: goto label_1bf740;
            case 0x1BF744u: goto label_1bf744;
            case 0x1BF748u: goto label_1bf748;
            case 0x1BF74Cu: goto label_1bf74c;
            case 0x1BF750u: goto label_1bf750;
            case 0x1BF754u: goto label_1bf754;
            case 0x1BF758u: goto label_1bf758;
            case 0x1BF75Cu: goto label_1bf75c;
            case 0x1BF760u: goto label_1bf760;
            case 0x1BF764u: goto label_1bf764;
            case 0x1BF768u: goto label_1bf768;
            case 0x1BF76Cu: goto label_1bf76c;
            case 0x1BF770u: goto label_1bf770;
            case 0x1BF774u: goto label_1bf774;
            case 0x1BF778u: goto label_1bf778;
            case 0x1BF77Cu: goto label_1bf77c;
            case 0x1BF780u: goto label_1bf780;
            case 0x1BF784u: goto label_1bf784;
            case 0x1BF788u: goto label_1bf788;
            case 0x1BF78Cu: goto label_1bf78c;
            case 0x1BF790u: goto label_1bf790;
            case 0x1BF794u: goto label_1bf794;
            case 0x1BF798u: goto label_1bf798;
            case 0x1BF79Cu: goto label_1bf79c;
            case 0x1BF7A0u: goto label_1bf7a0;
            case 0x1BF7A4u: goto label_1bf7a4;
            case 0x1BF7A8u: goto label_1bf7a8;
            case 0x1BF7ACu: goto label_1bf7ac;
            case 0x1BF7B0u: goto label_1bf7b0;
            case 0x1BF7B4u: goto label_1bf7b4;
            case 0x1BF7B8u: goto label_1bf7b8;
            case 0x1BF7BCu: goto label_1bf7bc;
            case 0x1BF7C0u: goto label_1bf7c0;
            case 0x1BF7C4u: goto label_1bf7c4;
            case 0x1BF7C8u: goto label_1bf7c8;
            case 0x1BF7CCu: goto label_1bf7cc;
            case 0x1BF7D0u: goto label_1bf7d0;
            case 0x1BF7D4u: goto label_1bf7d4;
            case 0x1BF7D8u: goto label_1bf7d8;
            case 0x1BF7DCu: goto label_1bf7dc;
            case 0x1BF7E0u: goto label_1bf7e0;
            case 0x1BF7E4u: goto label_1bf7e4;
            case 0x1BF7E8u: goto label_1bf7e8;
            case 0x1BF7ECu: goto label_1bf7ec;
            case 0x1BF7F0u: goto label_1bf7f0;
            case 0x1BF7F4u: goto label_1bf7f4;
            case 0x1BF7F8u: goto label_1bf7f8;
            case 0x1BF7FCu: goto label_1bf7fc;
            case 0x1BF800u: goto label_1bf800;
            case 0x1BF804u: goto label_1bf804;
            case 0x1BF808u: goto label_1bf808;
            case 0x1BF80Cu: goto label_1bf80c;
            case 0x1BF810u: goto label_1bf810;
            case 0x1BF814u: goto label_1bf814;
            case 0x1BF818u: goto label_1bf818;
            case 0x1BF81Cu: goto label_1bf81c;
            case 0x1BF820u: goto label_1bf820;
            case 0x1BF824u: goto label_1bf824;
            case 0x1BF828u: goto label_1bf828;
            case 0x1BF82Cu: goto label_1bf82c;
            case 0x1BF830u: goto label_1bf830;
            case 0x1BF834u: goto label_1bf834;
            case 0x1BF838u: goto label_1bf838;
            case 0x1BF83Cu: goto label_1bf83c;
            case 0x1BF840u: goto label_1bf840;
            case 0x1BF844u: goto label_1bf844;
            case 0x1BF848u: goto label_1bf848;
            case 0x1BF84Cu: goto label_1bf84c;
            case 0x1BF850u: goto label_1bf850;
            case 0x1BF854u: goto label_1bf854;
            case 0x1BF858u: goto label_1bf858;
            case 0x1BF85Cu: goto label_1bf85c;
            case 0x1BF860u: goto label_1bf860;
            case 0x1BF864u: goto label_1bf864;
            case 0x1BF868u: goto label_1bf868;
            case 0x1BF86Cu: goto label_1bf86c;
            case 0x1BF870u: goto label_1bf870;
            case 0x1BF874u: goto label_1bf874;
            case 0x1BF878u: goto label_1bf878;
            case 0x1BF87Cu: goto label_1bf87c;
            case 0x1BF880u: goto label_1bf880;
            case 0x1BF884u: goto label_1bf884;
            case 0x1BF888u: goto label_1bf888;
            case 0x1BF88Cu: goto label_1bf88c;
            case 0x1BF890u: goto label_1bf890;
            case 0x1BF894u: goto label_1bf894;
            case 0x1BF898u: goto label_1bf898;
            case 0x1BF89Cu: goto label_1bf89c;
            case 0x1BF8A0u: goto label_1bf8a0;
            case 0x1BF8A4u: goto label_1bf8a4;
            case 0x1BF8A8u: goto label_1bf8a8;
            case 0x1BF8ACu: goto label_1bf8ac;
            case 0x1BF8B0u: goto label_1bf8b0;
            case 0x1BF8B4u: goto label_1bf8b4;
            case 0x1BF8B8u: goto label_1bf8b8;
            case 0x1BF8BCu: goto label_1bf8bc;
            case 0x1BF8C0u: goto label_1bf8c0;
            case 0x1BF8C4u: goto label_1bf8c4;
            case 0x1BF8C8u: goto label_1bf8c8;
            case 0x1BF8CCu: goto label_1bf8cc;
            case 0x1BF8D0u: goto label_1bf8d0;
            case 0x1BF8D4u: goto label_1bf8d4;
            case 0x1BF8D8u: goto label_1bf8d8;
            case 0x1BF8DCu: goto label_1bf8dc;
            case 0x1BF8E0u: goto label_1bf8e0;
            case 0x1BF8E4u: goto label_1bf8e4;
            case 0x1BF8E8u: goto label_1bf8e8;
            case 0x1BF8ECu: goto label_1bf8ec;
            case 0x1BF8F0u: goto label_1bf8f0;
            case 0x1BF8F4u: goto label_1bf8f4;
            case 0x1BF8F8u: goto label_1bf8f8;
            case 0x1BF8FCu: goto label_1bf8fc;
            case 0x1BF900u: goto label_1bf900;
            case 0x1BF904u: goto label_1bf904;
            case 0x1BF908u: goto label_1bf908;
            case 0x1BF90Cu: goto label_1bf90c;
            case 0x1BF910u: goto label_1bf910;
            case 0x1BF914u: goto label_1bf914;
            case 0x1BF918u: goto label_1bf918;
            case 0x1BF91Cu: goto label_1bf91c;
            case 0x1BF920u: goto label_1bf920;
            case 0x1BF924u: goto label_1bf924;
            case 0x1BF928u: goto label_1bf928;
            case 0x1BF92Cu: goto label_1bf92c;
            case 0x1BF930u: goto label_1bf930;
            case 0x1BF934u: goto label_1bf934;
            case 0x1BF938u: goto label_1bf938;
            case 0x1BF93Cu: goto label_1bf93c;
            case 0x1BF940u: goto label_1bf940;
            case 0x1BF944u: goto label_1bf944;
            case 0x1BF948u: goto label_1bf948;
            case 0x1BF94Cu: goto label_1bf94c;
            case 0x1BF950u: goto label_1bf950;
            case 0x1BF954u: goto label_1bf954;
            case 0x1BF958u: goto label_1bf958;
            case 0x1BF95Cu: goto label_1bf95c;
            case 0x1BF960u: goto label_1bf960;
            case 0x1BF964u: goto label_1bf964;
            case 0x1BF968u: goto label_1bf968;
            case 0x1BF96Cu: goto label_1bf96c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1bf968:
    ctx->pc = 0x1BF970u;
}
