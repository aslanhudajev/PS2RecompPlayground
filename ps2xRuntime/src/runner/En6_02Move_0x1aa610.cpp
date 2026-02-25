#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_02Move
// Address: 0x1aa610 - 0x1ab604
void En6_02Move_0x1aa610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_02Move_0x1aa610");
#endif

    ctx->pc = 0x1aa610u;

label_1aa610:
    // 0x1aa610: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1aa610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1aa614:
    // 0x1aa614: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1aa618:
    // 0x1aa618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aa61c:
    // 0x1aa61c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa61cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa620:
    // 0x1aa620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1aa624:
    // 0x1aa624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa628:
    // 0x1aa628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1aa62c:
    // 0x1aa62c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa630:
    // 0x1aa630: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1aa630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aa634:
    // 0x1aa634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa638:
    // 0x1aa638: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1aa638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa63c:
    // 0x1aa63c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aa63cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aa640:
    // 0x1aa640: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1aa640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1aa644:
    // 0x1aa644: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa648:
    // 0x1aa648: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1aa648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aa64c:
    // 0x1aa64c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1aa64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa650:
    // 0x1aa650: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aa650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aa654:
    // 0x1aa654: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1aa654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1aa658:
    // 0x1aa658: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aa658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa65c:
    // 0x1aa65c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1aa65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aa660:
    // 0x1aa660: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1aa660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa664:
    // 0x1aa664: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aa664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aa668:
    // 0x1aa668: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1aa668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1aa66c:
    // 0x1aa66c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa670:
    // 0x1aa670: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1aa670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aa674:
    // 0x1aa674: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1aa674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa678:
    // 0x1aa678: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aa678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aa67c:
    // 0x1aa67c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1aa67cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1aa680:
    // 0x1aa680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aa680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa684:
    // 0x1aa684: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1aa684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aa688:
    // 0x1aa688: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aa688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa68c:
    // 0x1aa68c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1aa68cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1aa690:
    // 0x1aa690: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1aa690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1aa694:
    // 0x1aa694: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1aa694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa698:
    // 0x1aa698: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1aa698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa69c:
    // 0x1aa69c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa6a0:
    // 0x1aa6a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1aa6a4:
    if (ctx->pc == 0x1AA6A4u) {
        ctx->pc = 0x1AA6A4u;
            // 0x1aa6a4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1AA6A8u;
        goto label_1aa6a8;
    }
    ctx->pc = 0x1AA6A0u;
    {
        const bool branch_taken_0x1aa6a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6A0u;
            // 0x1aa6a4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6a0) {
            ctx->pc = 0x1AA6C0u;
            goto label_1aa6c0;
        }
    }
    ctx->pc = 0x1AA6A8u;
label_1aa6a8:
    // 0x1aa6a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aa6ac:
    // 0x1aa6ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa6acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa6b0:
    // 0x1aa6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa6b4:
    // 0x1aa6b4: 0x0  nop
    ctx->pc = 0x1aa6b4u;
    // NOP
label_1aa6b8:
    // 0x1aa6b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aa6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aa6bc:
    // 0x1aa6bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1aa6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1aa6c0:
    // 0x1aa6c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa6c4:
    // 0x1aa6c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1aa6c8:
    // 0x1aa6c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa6c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa6cc:
    // 0x1aa6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa6d0:
    // 0x1aa6d0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1aa6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa6d4:
    // 0x1aa6d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa6d8:
    // 0x1aa6d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1aa6dc:
    if (ctx->pc == 0x1AA6DCu) {
        ctx->pc = 0x1AA6DCu;
            // 0x1aa6dc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1AA6E0u;
        goto label_1aa6e0;
    }
    ctx->pc = 0x1AA6D8u;
    {
        const bool branch_taken_0x1aa6d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6D8u;
            // 0x1aa6dc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6d8) {
            ctx->pc = 0x1AA6F8u;
            goto label_1aa6f8;
        }
    }
    ctx->pc = 0x1AA6E0u;
label_1aa6e0:
    // 0x1aa6e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aa6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aa6e4:
    // 0x1aa6e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa6e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa6e8:
    // 0x1aa6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa6ec:
    // 0x1aa6ec: 0x0  nop
    ctx->pc = 0x1aa6ecu;
    // NOP
label_1aa6f0:
    // 0x1aa6f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa6f4:
    // 0x1aa6f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aa6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aa6f8:
    // 0x1aa6f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa6fc:
    // 0x1aa6fc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1aa700:
    // 0x1aa700: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa700u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa704:
    // 0x1aa704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa708:
    // 0x1aa708: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1aa708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa70c:
    // 0x1aa70c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa710:
    // 0x1aa710: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1aa714:
    if (ctx->pc == 0x1AA714u) {
        ctx->pc = 0x1AA714u;
            // 0x1aa714: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AA718u;
        goto label_1aa718;
    }
    ctx->pc = 0x1AA710u;
    {
        const bool branch_taken_0x1aa710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA710u;
            // 0x1aa714: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa710) {
            ctx->pc = 0x1AA730u;
            goto label_1aa730;
        }
    }
    ctx->pc = 0x1AA718u;
label_1aa718:
    // 0x1aa718: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aa718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aa71c:
    // 0x1aa71c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa71cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa720:
    // 0x1aa720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa724:
    // 0x1aa724: 0x0  nop
    ctx->pc = 0x1aa724u;
    // NOP
label_1aa728:
    // 0x1aa728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aa728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aa72c:
    // 0x1aa72c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aa72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aa730:
    // 0x1aa730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa734:
    // 0x1aa734: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1aa738:
    // 0x1aa738: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa738u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa73c:
    // 0x1aa73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa740:
    // 0x1aa740: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1aa740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa744:
    // 0x1aa744: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa748:
    // 0x1aa748: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1aa74c:
    if (ctx->pc == 0x1AA74Cu) {
        ctx->pc = 0x1AA74Cu;
            // 0x1aa74c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AA750u;
        goto label_1aa750;
    }
    ctx->pc = 0x1AA748u;
    {
        const bool branch_taken_0x1aa748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA748u;
            // 0x1aa74c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa748) {
            ctx->pc = 0x1AA768u;
            goto label_1aa768;
        }
    }
    ctx->pc = 0x1AA750u;
label_1aa750:
    // 0x1aa750: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aa750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aa754:
    // 0x1aa754: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa754u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa758:
    // 0x1aa758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa75c:
    // 0x1aa75c: 0x0  nop
    ctx->pc = 0x1aa75cu;
    // NOP
label_1aa760:
    // 0x1aa760: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa764:
    // 0x1aa764: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aa764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aa768:
    // 0x1aa768: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa76c:
    // 0x1aa76c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1aa770:
    // 0x1aa770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa770u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa774:
    // 0x1aa774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa778:
    // 0x1aa778: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1aa778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa77c:
    // 0x1aa77c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa77cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa780:
    // 0x1aa780: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1aa784:
    if (ctx->pc == 0x1AA784u) {
        ctx->pc = 0x1AA784u;
            // 0x1aa784: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AA788u;
        goto label_1aa788;
    }
    ctx->pc = 0x1AA780u;
    {
        const bool branch_taken_0x1aa780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA780u;
            // 0x1aa784: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa780) {
            ctx->pc = 0x1AA7A0u;
            goto label_1aa7a0;
        }
    }
    ctx->pc = 0x1AA788u;
label_1aa788:
    // 0x1aa788: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aa788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aa78c:
    // 0x1aa78c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa78cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa790:
    // 0x1aa790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa794:
    // 0x1aa794: 0x0  nop
    ctx->pc = 0x1aa794u;
    // NOP
label_1aa798:
    // 0x1aa798: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aa798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aa79c:
    // 0x1aa79c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aa79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aa7a0:
    // 0x1aa7a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aa7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa7a4:
    // 0x1aa7a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1aa7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1aa7a8:
    // 0x1aa7a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa7a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa7ac:
    // 0x1aa7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa7b0:
    // 0x1aa7b0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1aa7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa7b4:
    // 0x1aa7b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa7b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa7b8:
    // 0x1aa7b8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1aa7bc:
    if (ctx->pc == 0x1AA7BCu) {
        ctx->pc = 0x1AA7BCu;
            // 0x1aa7bc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AA7C0u;
        goto label_1aa7c0;
    }
    ctx->pc = 0x1AA7B8u;
    {
        const bool branch_taken_0x1aa7b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7B8u;
            // 0x1aa7bc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7b8) {
            ctx->pc = 0x1AA7D8u;
            goto label_1aa7d8;
        }
    }
    ctx->pc = 0x1AA7C0u;
label_1aa7c0:
    // 0x1aa7c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aa7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1aa7c4:
    // 0x1aa7c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aa7c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1aa7c8:
    // 0x1aa7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa7cc:
    // 0x1aa7cc: 0x0  nop
    ctx->pc = 0x1aa7ccu;
    // NOP
label_1aa7d0:
    // 0x1aa7d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa7d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa7d4:
    // 0x1aa7d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aa7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1aa7d8:
    // 0x1aa7d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa7dc:
    // 0x1aa7dc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1aa7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1aa7e0:
    // 0x1aa7e0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1aa7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aa7e4:
    // 0x1aa7e4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1aa7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1aa7e8:
    // 0x1aa7e8: 0xc06ad84  jal         func_1AB610
label_1aa7ec:
    if (ctx->pc == 0x1AA7ECu) {
        ctx->pc = 0x1AA7ECu;
            // 0x1aa7ec: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1AA7F0u;
        goto label_1aa7f0;
    }
    ctx->pc = 0x1AA7E8u;
    SET_GPR_U32(ctx, 31, 0x1AA7F0u);
    ctx->pc = 0x1AA7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7E8u;
            // 0x1aa7ec: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB610u;
    if (runtime->hasFunction(0x1AB610u)) {
        auto targetFn = runtime->lookupFunction(0x1AB610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7F0u; }
        if (ctx->pc != 0x1AA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1ab610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7F0u; }
        if (ctx->pc != 0x1AA7F0u) { return; }
    }
    ctx->pc = 0x1AA7F0u;
label_1aa7f0:
    // 0x1aa7f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1aa7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1aa7f4:
    // 0x1aa7f4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1aa7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1aa7f8:
    // 0x1aa7f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1aa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aa7fc:
    // 0x1aa7fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1aa7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1aa800:
    // 0x1aa800: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1aa804:
    // 0x1aa804: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1aa804u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1aa808:
    // 0x1aa808: 0x102002d3  beqz        $at, . + 4 + (0x2D3 << 2)
label_1aa80c:
    if (ctx->pc == 0x1AA80Cu) {
        ctx->pc = 0x1AA80Cu;
            // 0x1aa80c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1AA810u;
        goto label_1aa810;
    }
    ctx->pc = 0x1AA808u;
    {
        const bool branch_taken_0x1aa808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA808u;
            // 0x1aa80c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa808) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AA810u;
label_1aa810:
    // 0x1aa810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa814:
    // 0x1aa814: 0x246329d0  addiu       $v1, $v1, 0x29D0
    ctx->pc = 0x1aa814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10704));
label_1aa818:
    // 0x1aa818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa81c:
    // 0x1aa81c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aa81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa820:
    // 0x1aa820: 0x400008  jr          $v0
label_1aa824:
    if (ctx->pc == 0x1AA824u) {
        ctx->pc = 0x1AA828u;
        goto label_1aa828;
    }
    ctx->pc = 0x1AA820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA828u: goto label_1aa828;
            case 0x1AAC70u: goto label_1aac70;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AAEC8u: goto label_1aaec8;
            case 0x1AB240u: goto label_1ab240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA828u;
label_1aa828:
    // 0x1aa828: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1aa828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1aa82c:
    // 0x1aa82c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
label_1aa830:
    if (ctx->pc == 0x1AA830u) {
        ctx->pc = 0x1AA834u;
        goto label_1aa834;
    }
    ctx->pc = 0x1AA82Cu;
    {
        const bool branch_taken_0x1aa82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa82c) {
            ctx->pc = 0x1AA948u;
            goto label_1aa948;
        }
    }
    ctx->pc = 0x1AA834u;
label_1aa834:
    // 0x1aa834: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aa834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa838:
    // 0x1aa838: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1aa838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1aa83c:
    // 0x1aa83c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aa83cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aa840:
    // 0x1aa840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa844:
    // 0x1aa844: 0x0  nop
    ctx->pc = 0x1aa844u;
    // NOP
label_1aa848:
    // 0x1aa848: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa84c:
    // 0x1aa84c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1aa84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1aa850:
    // 0x1aa850: 0xc040d72  jal         func_1035C8
label_1aa854:
    if (ctx->pc == 0x1AA854u) {
        ctx->pc = 0x1AA854u;
            // 0x1aa854: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1AA858u;
        goto label_1aa858;
    }
    ctx->pc = 0x1AA850u;
    SET_GPR_U32(ctx, 31, 0x1AA858u);
    ctx->pc = 0x1AA854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA850u;
            // 0x1aa854: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA858u; }
        if (ctx->pc != 0x1AA858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA858u; }
        if (ctx->pc != 0x1AA858u) { return; }
    }
    ctx->pc = 0x1AA858u;
label_1aa858:
    // 0x1aa858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aa858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa85c:
    // 0x1aa85c: 0xc040078  jal         func_1001E0
label_1aa860:
    if (ctx->pc == 0x1AA860u) {
        ctx->pc = 0x1AA860u;
            // 0x1aa860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA864u;
        goto label_1aa864;
    }
    ctx->pc = 0x1AA85Cu;
    SET_GPR_U32(ctx, 31, 0x1AA864u);
    ctx->pc = 0x1AA860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA85Cu;
            // 0x1aa860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA864u; }
        if (ctx->pc != 0x1AA864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA864u; }
        if (ctx->pc != 0x1AA864u) { return; }
    }
    ctx->pc = 0x1AA864u;
label_1aa864:
    // 0x1aa864: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1aa868:
    if (ctx->pc == 0x1AA868u) {
        ctx->pc = 0x1AA86Cu;
        goto label_1aa86c;
    }
    ctx->pc = 0x1AA864u;
    {
        const bool branch_taken_0x1aa864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa864) {
            ctx->pc = 0x1AA888u;
            goto label_1aa888;
        }
    }
    ctx->pc = 0x1AA86Cu;
label_1aa86c:
    // 0x1aa86c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1aa86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa870:
    // 0x1aa870: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1aa874:
    // 0x1aa874: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aa874u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aa878:
    // 0x1aa878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa87c:
    // 0x1aa87c: 0x0  nop
    ctx->pc = 0x1aa87cu;
    // NOP
label_1aa880:
    // 0x1aa880: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa884:
    // 0x1aa884: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1aa884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1aa888:
    // 0x1aa888: 0xc040d72  jal         func_1035C8
label_1aa88c:
    if (ctx->pc == 0x1AA88Cu) {
        ctx->pc = 0x1AA88Cu;
            // 0x1aa88c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1AA890u;
        goto label_1aa890;
    }
    ctx->pc = 0x1AA888u;
    SET_GPR_U32(ctx, 31, 0x1AA890u);
    ctx->pc = 0x1AA88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA888u;
            // 0x1aa88c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA890u; }
        if (ctx->pc != 0x1AA890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA890u; }
        if (ctx->pc != 0x1AA890u) { return; }
    }
    ctx->pc = 0x1AA890u;
label_1aa890:
    // 0x1aa890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aa890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa894:
    // 0x1aa894: 0xc04008c  jal         func_100230
label_1aa898:
    if (ctx->pc == 0x1AA898u) {
        ctx->pc = 0x1AA898u;
            // 0x1aa898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA89Cu;
        goto label_1aa89c;
    }
    ctx->pc = 0x1AA894u;
    SET_GPR_U32(ctx, 31, 0x1AA89Cu);
    ctx->pc = 0x1AA898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA894u;
            // 0x1aa898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA89Cu; }
        if (ctx->pc != 0x1AA89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA89Cu; }
        if (ctx->pc != 0x1AA89Cu) { return; }
    }
    ctx->pc = 0x1AA89Cu;
label_1aa89c:
    // 0x1aa89c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1aa8a0:
    if (ctx->pc == 0x1AA8A0u) {
        ctx->pc = 0x1AA8A4u;
        goto label_1aa8a4;
    }
    ctx->pc = 0x1AA89Cu;
    {
        const bool branch_taken_0x1aa89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa89c) {
            ctx->pc = 0x1AA8C0u;
            goto label_1aa8c0;
        }
    }
    ctx->pc = 0x1AA8A4u;
label_1aa8a4:
    // 0x1aa8a4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1aa8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa8a8:
    // 0x1aa8a8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1aa8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1aa8ac:
    // 0x1aa8ac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aa8acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aa8b0:
    // 0x1aa8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa8b4:
    // 0x1aa8b4: 0x0  nop
    ctx->pc = 0x1aa8b4u;
    // NOP
label_1aa8b8:
    // 0x1aa8b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aa8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aa8bc:
    // 0x1aa8bc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1aa8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1aa8c0:
    // 0x1aa8c0: 0xc040d72  jal         func_1035C8
label_1aa8c4:
    if (ctx->pc == 0x1AA8C4u) {
        ctx->pc = 0x1AA8C4u;
            // 0x1aa8c4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1AA8C8u;
        goto label_1aa8c8;
    }
    ctx->pc = 0x1AA8C0u;
    SET_GPR_U32(ctx, 31, 0x1AA8C8u);
    ctx->pc = 0x1AA8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8C0u;
            // 0x1aa8c4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8C8u; }
        if (ctx->pc != 0x1AA8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8C8u; }
        if (ctx->pc != 0x1AA8C8u) { return; }
    }
    ctx->pc = 0x1AA8C8u;
label_1aa8c8:
    // 0x1aa8c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aa8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8cc:
    // 0x1aa8cc: 0xc040078  jal         func_1001E0
label_1aa8d0:
    if (ctx->pc == 0x1AA8D0u) {
        ctx->pc = 0x1AA8D0u;
            // 0x1aa8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8D4u;
        goto label_1aa8d4;
    }
    ctx->pc = 0x1AA8CCu;
    SET_GPR_U32(ctx, 31, 0x1AA8D4u);
    ctx->pc = 0x1AA8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8CCu;
            // 0x1aa8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8D4u; }
        if (ctx->pc != 0x1AA8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8D4u; }
        if (ctx->pc != 0x1AA8D4u) { return; }
    }
    ctx->pc = 0x1AA8D4u;
label_1aa8d4:
    // 0x1aa8d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aa8d8:
    if (ctx->pc == 0x1AA8D8u) {
        ctx->pc = 0x1AA8DCu;
        goto label_1aa8dc;
    }
    ctx->pc = 0x1AA8D4u;
    {
        const bool branch_taken_0x1aa8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8d4) {
            ctx->pc = 0x1AA900u;
            goto label_1aa900;
        }
    }
    ctx->pc = 0x1AA8DCu;
label_1aa8dc:
    // 0x1aa8dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aa8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa8e0:
    // 0x1aa8e0: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1aa8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1aa8e4:
    // 0x1aa8e4: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1aa8e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1aa8e8:
    // 0x1aa8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa8ec:
    // 0x1aa8ec: 0x0  nop
    ctx->pc = 0x1aa8ecu;
    // NOP
label_1aa8f0:
    // 0x1aa8f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aa8f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa8f4:
    // 0x1aa8f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1aa8f8:
    if (ctx->pc == 0x1AA8F8u) {
        ctx->pc = 0x1AA8F8u;
            // 0x1aa8f8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AA8FCu;
        goto label_1aa8fc;
    }
    ctx->pc = 0x1AA8F4u;
    {
        const bool branch_taken_0x1aa8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8F4u;
            // 0x1aa8f8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8f4) {
            ctx->pc = 0x1AA910u;
            goto label_1aa910;
        }
    }
    ctx->pc = 0x1AA8FCu;
label_1aa8fc:
    // 0x1aa8fc: 0x0  nop
    ctx->pc = 0x1aa8fcu;
    // NOP
label_1aa900:
    // 0x1aa900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa904:
    // 0x1aa904: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1aa904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1aa908:
    // 0x1aa908: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1aa908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1aa90c:
    // 0x1aa90c: 0x0  nop
    ctx->pc = 0x1aa90cu;
    // NOP
label_1aa910:
    // 0x1aa910: 0xc065d00  jal         func_197400
label_1aa914:
    if (ctx->pc == 0x1AA914u) {
        ctx->pc = 0x1AA918u;
        goto label_1aa918;
    }
    ctx->pc = 0x1AA910u;
    SET_GPR_U32(ctx, 31, 0x1AA918u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA918u; }
        if (ctx->pc != 0x1AA918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA918u; }
        if (ctx->pc != 0x1AA918u) { return; }
    }
    ctx->pc = 0x1AA918u;
label_1aa918:
    // 0x1aa918: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa91c:
    // 0x1aa91c: 0x1443028e  bne         $v0, $v1, . + 4 + (0x28E << 2)
label_1aa920:
    if (ctx->pc == 0x1AA920u) {
        ctx->pc = 0x1AA924u;
        goto label_1aa924;
    }
    ctx->pc = 0x1AA91Cu;
    {
        const bool branch_taken_0x1aa91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa91c) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AA924u;
label_1aa924:
    // 0x1aa924: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aa924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aa928:
    // 0x1aa928: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aa92c:
    // 0x1aa92c: 0x1462028a  bne         $v1, $v0, . + 4 + (0x28A << 2)
label_1aa930:
    if (ctx->pc == 0x1AA930u) {
        ctx->pc = 0x1AA934u;
        goto label_1aa934;
    }
    ctx->pc = 0x1AA92Cu;
    {
        const bool branch_taken_0x1aa92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa92c) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AA934u;
label_1aa934:
    // 0x1aa934: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aa938:
    // 0x1aa938: 0xc06560c  jal         func_195830
label_1aa93c:
    if (ctx->pc == 0x1AA93Cu) {
        ctx->pc = 0x1AA93Cu;
            // 0x1aa93c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AA940u;
        goto label_1aa940;
    }
    ctx->pc = 0x1AA938u;
    SET_GPR_U32(ctx, 31, 0x1AA940u);
    ctx->pc = 0x1AA93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA938u;
            // 0x1aa93c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA940u; }
        if (ctx->pc != 0x1AA940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA940u; }
        if (ctx->pc != 0x1AA940u) { return; }
    }
    ctx->pc = 0x1AA940u;
label_1aa940:
    // 0x1aa940: 0x10000285  b           . + 4 + (0x285 << 2)
label_1aa944:
    if (ctx->pc == 0x1AA944u) {
        ctx->pc = 0x1AA948u;
        goto label_1aa948;
    }
    ctx->pc = 0x1AA940u;
    {
        const bool branch_taken_0x1aa940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa940) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AA948u;
label_1aa948:
    // 0x1aa948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa94c:
    // 0x1aa94c: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_1aa950:
    if (ctx->pc == 0x1AA950u) {
        ctx->pc = 0x1AA950u;
            // 0x1aa950: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1AA954u;
        goto label_1aa954;
    }
    ctx->pc = 0x1AA94Cu;
    {
        const bool branch_taken_0x1aa94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA94Cu;
            // 0x1aa950: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa94c) {
            ctx->pc = 0x1AAAA0u;
            goto label_1aaaa0;
        }
    }
    ctx->pc = 0x1AA954u;
label_1aa954:
    // 0x1aa954: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1aa954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aa958:
    // 0x1aa958: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1aa958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1aa95c:
    // 0x1aa95c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aa960:
    // 0x1aa960: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1aa960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aa964:
    // 0x1aa964: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1aa964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1aa968:
    // 0x1aa968: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1aa968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1aa96c:
    // 0x1aa96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa970:
    // 0x1aa970: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1aa970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1aa974:
    // 0x1aa974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aa978:
    // 0x1aa978: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1aa978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1aa97c:
    // 0x1aa97c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1aa97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aa980:
    // 0x1aa980: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aa980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa984:
    // 0x1aa984: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1aa984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1aa988:
    // 0x1aa988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aa988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aa98c:
    // 0x1aa98c: 0x0  nop
    ctx->pc = 0x1aa98cu;
    // NOP
label_1aa990:
    // 0x1aa990: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aa990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aa994:
    // 0x1aa994: 0xc04b6ee  jal         func_12DBB8
label_1aa998:
    if (ctx->pc == 0x1AA998u) {
        ctx->pc = 0x1AA998u;
            // 0x1aa998: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1AA99Cu;
        goto label_1aa99c;
    }
    ctx->pc = 0x1AA994u;
    SET_GPR_U32(ctx, 31, 0x1AA99Cu);
    ctx->pc = 0x1AA998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA994u;
            // 0x1aa998: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA99Cu; }
        if (ctx->pc != 0x1AA99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA99Cu; }
        if (ctx->pc != 0x1AA99Cu) { return; }
    }
    ctx->pc = 0x1AA99Cu;
label_1aa99c:
    // 0x1aa99c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa9a0:
    // 0x1aa9a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aa9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa9a4:
    // 0x1aa9a4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aa9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa9a8:
    // 0x1aa9a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aa9a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aa9ac:
    // 0x1aa9ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa9acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa9b0:
    // 0x1aa9b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1aa9b4:
    if (ctx->pc == 0x1AA9B4u) {
        ctx->pc = 0x1AA9B4u;
            // 0x1aa9b4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1AA9B8u;
        goto label_1aa9b8;
    }
    ctx->pc = 0x1AA9B0u;
    {
        const bool branch_taken_0x1aa9b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9B0u;
            // 0x1aa9b4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9b0) {
            ctx->pc = 0x1AA9C0u;
            goto label_1aa9c0;
        }
    }
    ctx->pc = 0x1AA9B8u;
label_1aa9b8:
    // 0x1aa9b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aa9b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aa9bc:
    // 0x1aa9bc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1aa9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1aa9c0:
    // 0x1aa9c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa9c4:
    // 0x1aa9c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aa9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa9c8:
    // 0x1aa9c8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aa9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa9cc:
    // 0x1aa9cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aa9ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aa9d0:
    // 0x1aa9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa9d4:
    // 0x1aa9d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1aa9d8:
    if (ctx->pc == 0x1AA9D8u) {
        ctx->pc = 0x1AA9D8u;
            // 0x1aa9d8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1AA9DCu;
        goto label_1aa9dc;
    }
    ctx->pc = 0x1AA9D4u;
    {
        const bool branch_taken_0x1aa9d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9D4u;
            // 0x1aa9d8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9d4) {
            ctx->pc = 0x1AA9E8u;
            goto label_1aa9e8;
        }
    }
    ctx->pc = 0x1AA9DCu;
label_1aa9dc:
    // 0x1aa9dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aa9dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aa9e0:
    // 0x1aa9e0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1aa9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1aa9e4:
    // 0x1aa9e4: 0x0  nop
    ctx->pc = 0x1aa9e4u;
    // NOP
label_1aa9e8:
    // 0x1aa9e8: 0xc065d00  jal         func_197400
label_1aa9ec:
    if (ctx->pc == 0x1AA9ECu) {
        ctx->pc = 0x1AA9F0u;
        goto label_1aa9f0;
    }
    ctx->pc = 0x1AA9E8u;
    SET_GPR_U32(ctx, 31, 0x1AA9F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9F0u; }
        if (ctx->pc != 0x1AA9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9F0u; }
        if (ctx->pc != 0x1AA9F0u) { return; }
    }
    ctx->pc = 0x1AA9F0u;
label_1aa9f0:
    // 0x1aa9f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa9f4:
    // 0x1aa9f4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1aa9f8:
    if (ctx->pc == 0x1AA9F8u) {
        ctx->pc = 0x1AA9FCu;
        goto label_1aa9fc;
    }
    ctx->pc = 0x1AA9F4u;
    {
        const bool branch_taken_0x1aa9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa9f4) {
            ctx->pc = 0x1AAA18u;
            goto label_1aaa18;
        }
    }
    ctx->pc = 0x1AA9FCu;
label_1aa9fc:
    // 0x1aa9fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aa9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaa00:
    // 0x1aaa00: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1aaa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aaa04:
    // 0x1aaa04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1aaa08:
    if (ctx->pc == 0x1AAA08u) {
        ctx->pc = 0x1AAA0Cu;
        goto label_1aaa0c;
    }
    ctx->pc = 0x1AAA04u;
    {
        const bool branch_taken_0x1aaa04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaa04) {
            ctx->pc = 0x1AAA18u;
            goto label_1aaa18;
        }
    }
    ctx->pc = 0x1AAA0Cu;
label_1aaa0c:
    // 0x1aaa0c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aaa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aaa10:
    // 0x1aaa10: 0xc06560c  jal         func_195830
label_1aaa14:
    if (ctx->pc == 0x1AAA14u) {
        ctx->pc = 0x1AAA14u;
            // 0x1aaa14: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAA18u;
        goto label_1aaa18;
    }
    ctx->pc = 0x1AAA10u;
    SET_GPR_U32(ctx, 31, 0x1AAA18u);
    ctx->pc = 0x1AAA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA10u;
            // 0x1aaa14: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA18u; }
        if (ctx->pc != 0x1AAA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA18u; }
        if (ctx->pc != 0x1AAA18u) { return; }
    }
    ctx->pc = 0x1AAA18u;
label_1aaa18:
    // 0x1aaa18: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aaa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaa1c:
    // 0x1aaa1c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1aaa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1aaa20:
    // 0x1aaa20: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1aaa24:
    if (ctx->pc == 0x1AAA24u) {
        ctx->pc = 0x1AAA28u;
        goto label_1aaa28;
    }
    ctx->pc = 0x1AAA20u;
    {
        const bool branch_taken_0x1aaa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaa20) {
            ctx->pc = 0x1AAA50u;
            goto label_1aaa50;
        }
    }
    ctx->pc = 0x1AAA28u;
label_1aaa28:
    // 0x1aaa28: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1aaa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1aaa2c:
    // 0x1aaa2c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aaa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aaa30:
    // 0x1aaa30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aaa30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aaa34:
    // 0x1aaa34: 0xc0655b0  jal         func_1956C0
label_1aaa38:
    if (ctx->pc == 0x1AAA38u) {
        ctx->pc = 0x1AAA38u;
            // 0x1aaa38: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAA3Cu;
        goto label_1aaa3c;
    }
    ctx->pc = 0x1AAA34u;
    SET_GPR_U32(ctx, 31, 0x1AAA3Cu);
    ctx->pc = 0x1AAA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA34u;
            // 0x1aaa38: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA3Cu; }
        if (ctx->pc != 0x1AAA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA3Cu; }
        if (ctx->pc != 0x1AAA3Cu) { return; }
    }
    ctx->pc = 0x1AAA3Cu;
label_1aaa3c:
    // 0x1aaa3c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1aaa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_1aaa40:
    // 0x1aaa40: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aaa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aaa44:
    // 0x1aaa44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aaa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aaa48:
    // 0x1aaa48: 0xc0655b0  jal         func_1956C0
label_1aaa4c:
    if (ctx->pc == 0x1AAA4Cu) {
        ctx->pc = 0x1AAA4Cu;
            // 0x1aaa4c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAA50u;
        goto label_1aaa50;
    }
    ctx->pc = 0x1AAA48u;
    SET_GPR_U32(ctx, 31, 0x1AAA50u);
    ctx->pc = 0x1AAA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA48u;
            // 0x1aaa4c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA50u; }
        if (ctx->pc != 0x1AAA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA50u; }
        if (ctx->pc != 0x1AAA50u) { return; }
    }
    ctx->pc = 0x1AAA50u;
label_1aaa50:
    // 0x1aaa50: 0xc065d00  jal         func_197400
label_1aaa54:
    if (ctx->pc == 0x1AAA54u) {
        ctx->pc = 0x1AAA58u;
        goto label_1aaa58;
    }
    ctx->pc = 0x1AAA50u;
    SET_GPR_U32(ctx, 31, 0x1AAA58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA58u; }
        if (ctx->pc != 0x1AAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA58u; }
        if (ctx->pc != 0x1AAA58u) { return; }
    }
    ctx->pc = 0x1AAA58u;
label_1aaa58:
    // 0x1aaa58: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1aaa58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1aaa5c:
    // 0x1aaa5c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1aaa60:
    if (ctx->pc == 0x1AAA60u) {
        ctx->pc = 0x1AAA64u;
        goto label_1aaa64;
    }
    ctx->pc = 0x1AAA5Cu;
    {
        const bool branch_taken_0x1aaa5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaa5c) {
            ctx->pc = 0x1AAA80u;
            goto label_1aaa80;
        }
    }
    ctx->pc = 0x1AAA64u;
label_1aaa64:
    // 0x1aaa64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aaa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaa68:
    // 0x1aaa68: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1aaa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1aaa6c:
    // 0x1aaa6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1aaa70:
    if (ctx->pc == 0x1AAA70u) {
        ctx->pc = 0x1AAA74u;
        goto label_1aaa74;
    }
    ctx->pc = 0x1AAA6Cu;
    {
        const bool branch_taken_0x1aaa6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaa6c) {
            ctx->pc = 0x1AAA80u;
            goto label_1aaa80;
        }
    }
    ctx->pc = 0x1AAA74u;
label_1aaa74:
    // 0x1aaa74: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aaa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aaa78:
    // 0x1aaa78: 0xc06560c  jal         func_195830
label_1aaa7c:
    if (ctx->pc == 0x1AAA7Cu) {
        ctx->pc = 0x1AAA7Cu;
            // 0x1aaa7c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAA80u;
        goto label_1aaa80;
    }
    ctx->pc = 0x1AAA78u;
    SET_GPR_U32(ctx, 31, 0x1AAA80u);
    ctx->pc = 0x1AAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA78u;
            // 0x1aaa7c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA80u; }
        if (ctx->pc != 0x1AAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA80u; }
        if (ctx->pc != 0x1AAA80u) { return; }
    }
    ctx->pc = 0x1AAA80u;
label_1aaa80:
    // 0x1aaa80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1aaa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaa84:
    // 0x1aaa84: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1aaa84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1aaa88:
    // 0x1aaa88: 0x14200233  bnez        $at, . + 4 + (0x233 << 2)
label_1aaa8c:
    if (ctx->pc == 0x1AAA8Cu) {
        ctx->pc = 0x1AAA8Cu;
            // 0x1aaa8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AAA90u;
        goto label_1aaa90;
    }
    ctx->pc = 0x1AAA88u;
    {
        const bool branch_taken_0x1aaa88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA88u;
            // 0x1aaa8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa88) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAA90u;
label_1aaa90:
    // 0x1aaa90: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1aaa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1aaa94:
    // 0x1aaa94: 0x10000230  b           . + 4 + (0x230 << 2)
label_1aaa98:
    if (ctx->pc == 0x1AAA98u) {
        ctx->pc = 0x1AAA98u;
            // 0x1aaa98: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1AAA9Cu;
        goto label_1aaa9c;
    }
    ctx->pc = 0x1AAA94u;
    {
        const bool branch_taken_0x1aaa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA94u;
            // 0x1aaa98: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa94) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAA9Cu;
label_1aaa9c:
    // 0x1aaa9c: 0x0  nop
    ctx->pc = 0x1aaa9cu;
    // NOP
label_1aaaa0:
    // 0x1aaaa0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aaaa4:
    // 0x1aaaa4: 0x1462022c  bne         $v1, $v0, . + 4 + (0x22C << 2)
label_1aaaa8:
    if (ctx->pc == 0x1AAAA8u) {
        ctx->pc = 0x1AAAA8u;
            // 0x1aaaa8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1AAAACu;
        goto label_1aaaac;
    }
    ctx->pc = 0x1AAAA4u;
    {
        const bool branch_taken_0x1aaaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAA4u;
            // 0x1aaaa8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaaa4) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAAACu;
label_1aaaac:
    // 0x1aaaac: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1aaaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aaab0:
    // 0x1aaab0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1aaab4:
    // 0x1aaab4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aaab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aaab8:
    // 0x1aaab8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1aaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaabc:
    // 0x1aaabc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1aaabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1aaac0:
    // 0x1aaac0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1aaac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1aaac4:
    // 0x1aaac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aaac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aaac8:
    // 0x1aaac8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1aaacc:
    // 0x1aaacc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aaaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aaad0:
    // 0x1aaad0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1aaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1aaad4:
    // 0x1aaad4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aaad8:
    // 0x1aaad8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aaadc:
    // 0x1aaadc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1aaadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1aaae0:
    // 0x1aaae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aaae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aaae4:
    // 0x1aaae4: 0x0  nop
    ctx->pc = 0x1aaae4u;
    // NOP
label_1aaae8:
    // 0x1aaae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aaae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aaaec:
    // 0x1aaaec: 0xc04b6ee  jal         func_12DBB8
label_1aaaf0:
    if (ctx->pc == 0x1AAAF0u) {
        ctx->pc = 0x1AAAF0u;
            // 0x1aaaf0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1AAAF4u;
        goto label_1aaaf4;
    }
    ctx->pc = 0x1AAAECu;
    SET_GPR_U32(ctx, 31, 0x1AAAF4u);
    ctx->pc = 0x1AAAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAECu;
            // 0x1aaaf0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAF4u; }
        if (ctx->pc != 0x1AAAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAF4u; }
        if (ctx->pc != 0x1AAAF4u) { return; }
    }
    ctx->pc = 0x1AAAF4u;
label_1aaaf4:
    // 0x1aaaf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aaaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aaaf8:
    // 0x1aaaf8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aaaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aaafc:
    // 0x1aaafc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aaafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aab00:
    // 0x1aab00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aab00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aab04:
    // 0x1aab04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aab04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aab08:
    // 0x1aab08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1aab0c:
    if (ctx->pc == 0x1AAB0Cu) {
        ctx->pc = 0x1AAB0Cu;
            // 0x1aab0c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1AAB10u;
        goto label_1aab10;
    }
    ctx->pc = 0x1AAB08u;
    {
        const bool branch_taken_0x1aab08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB08u;
            // 0x1aab0c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab08) {
            ctx->pc = 0x1AAB18u;
            goto label_1aab18;
        }
    }
    ctx->pc = 0x1AAB10u;
label_1aab10:
    // 0x1aab10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aab10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aab14:
    // 0x1aab14: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1aab14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1aab18:
    // 0x1aab18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aab1c:
    // 0x1aab1c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aab20:
    // 0x1aab20: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aab24:
    // 0x1aab24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aab24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aab28:
    // 0x1aab28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aab28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aab2c:
    // 0x1aab2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1aab30:
    if (ctx->pc == 0x1AAB30u) {
        ctx->pc = 0x1AAB30u;
            // 0x1aab30: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1AAB34u;
        goto label_1aab34;
    }
    ctx->pc = 0x1AAB2Cu;
    {
        const bool branch_taken_0x1aab2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB2Cu;
            // 0x1aab30: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab2c) {
            ctx->pc = 0x1AAB40u;
            goto label_1aab40;
        }
    }
    ctx->pc = 0x1AAB34u;
label_1aab34:
    // 0x1aab34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aab34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aab38:
    // 0x1aab38: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1aab38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1aab3c:
    // 0x1aab3c: 0x0  nop
    ctx->pc = 0x1aab3cu;
    // NOP
label_1aab40:
    // 0x1aab40: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x1aab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_1aab44:
    // 0x1aab44: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1aab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aab48:
    // 0x1aab48: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1aab48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1aab4c:
    // 0x1aab4c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1aab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1aab50:
    // 0x1aab50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aab50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1aab54:
    // 0x1aab54: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1aab54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1aab58:
    // 0x1aab58: 0xc040d72  jal         func_1035C8
label_1aab5c:
    if (ctx->pc == 0x1AAB5Cu) {
        ctx->pc = 0x1AAB5Cu;
            // 0x1aab5c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1AAB60u;
        goto label_1aab60;
    }
    ctx->pc = 0x1AAB58u;
    SET_GPR_U32(ctx, 31, 0x1AAB60u);
    ctx->pc = 0x1AAB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB58u;
            // 0x1aab5c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB60u; }
        if (ctx->pc != 0x1AAB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB60u; }
        if (ctx->pc != 0x1AAB60u) { return; }
    }
    ctx->pc = 0x1AAB60u;
label_1aab60:
    // 0x1aab60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aab64:
    // 0x1aab64: 0xc040880  jal         func_102200
label_1aab68:
    if (ctx->pc == 0x1AAB68u) {
        ctx->pc = 0x1AAB68u;
            // 0x1aab68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB6Cu;
        goto label_1aab6c;
    }
    ctx->pc = 0x1AAB64u;
    SET_GPR_U32(ctx, 31, 0x1AAB6Cu);
    ctx->pc = 0x1AAB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB64u;
            // 0x1aab68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB6Cu; }
        if (ctx->pc != 0x1AAB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB6Cu; }
        if (ctx->pc != 0x1AAB6Cu) { return; }
    }
    ctx->pc = 0x1AAB6Cu;
label_1aab6c:
    // 0x1aab6c: 0xc040a74  jal         func_1029D0
label_1aab70:
    if (ctx->pc == 0x1AAB70u) {
        ctx->pc = 0x1AAB70u;
            // 0x1aab70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB74u;
        goto label_1aab74;
    }
    ctx->pc = 0x1AAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB74u);
    ctx->pc = 0x1AAB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB6Cu;
            // 0x1aab70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB74u; }
        if (ctx->pc != 0x1AAB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB74u; }
        if (ctx->pc != 0x1AAB74u) { return; }
    }
    ctx->pc = 0x1AAB74u;
label_1aab74:
    // 0x1aab74: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1aab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aab78:
    // 0x1aab78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1aab78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aab7c:
    // 0x1aab7c: 0x0  nop
    ctx->pc = 0x1aab7cu;
    // NOP
label_1aab80:
    // 0x1aab80: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1aab80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1aab84:
    // 0x1aab84: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1aab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1aab88:
    // 0x1aab88: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1aab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aab8c:
    // 0x1aab8c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1aab8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aab90:
    // 0x1aab90: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1aab94:
    if (ctx->pc == 0x1AAB94u) {
        ctx->pc = 0x1AAB94u;
            // 0x1aab94: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->pc = 0x1AAB98u;
        goto label_1aab98;
    }
    ctx->pc = 0x1AAB90u;
    {
        const bool branch_taken_0x1aab90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB90u;
            // 0x1aab94: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab90) {
            ctx->pc = 0x1AABD8u;
            goto label_1aabd8;
        }
    }
    ctx->pc = 0x1AAB98u;
label_1aab98:
    // 0x1aab98: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1aab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1aab9c:
    // 0x1aab9c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x1aab9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_1aaba0:
    // 0x1aaba0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1aaba0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1aaba4:
    // 0x1aaba4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aaba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1aaba8:
    // 0x1aaba8: 0xc040d72  jal         func_1035C8
label_1aabac:
    if (ctx->pc == 0x1AABACu) {
        ctx->pc = 0x1AABACu;
            // 0x1aabac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1AABB0u;
        goto label_1aabb0;
    }
    ctx->pc = 0x1AABA8u;
    SET_GPR_U32(ctx, 31, 0x1AABB0u);
    ctx->pc = 0x1AABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABA8u;
            // 0x1aabac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABB0u; }
        if (ctx->pc != 0x1AABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABB0u; }
        if (ctx->pc != 0x1AABB0u) { return; }
    }
    ctx->pc = 0x1AABB0u;
label_1aabb0:
    // 0x1aabb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aabb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aabb4:
    // 0x1aabb4: 0xc040880  jal         func_102200
label_1aabb8:
    if (ctx->pc == 0x1AABB8u) {
        ctx->pc = 0x1AABB8u;
            // 0x1aabb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AABBCu;
        goto label_1aabbc;
    }
    ctx->pc = 0x1AABB4u;
    SET_GPR_U32(ctx, 31, 0x1AABBCu);
    ctx->pc = 0x1AABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABB4u;
            // 0x1aabb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABBCu; }
        if (ctx->pc != 0x1AABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABBCu; }
        if (ctx->pc != 0x1AABBCu) { return; }
    }
    ctx->pc = 0x1AABBCu;
label_1aabbc:
    // 0x1aabbc: 0xc040a74  jal         func_1029D0
label_1aabc0:
    if (ctx->pc == 0x1AABC0u) {
        ctx->pc = 0x1AABC0u;
            // 0x1aabc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AABC4u;
        goto label_1aabc4;
    }
    ctx->pc = 0x1AABBCu;
    SET_GPR_U32(ctx, 31, 0x1AABC4u);
    ctx->pc = 0x1AABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABBCu;
            // 0x1aabc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABC4u; }
        if (ctx->pc != 0x1AABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABC4u; }
        if (ctx->pc != 0x1AABC4u) { return; }
    }
    ctx->pc = 0x1AABC4u;
label_1aabc4:
    // 0x1aabc4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aabc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aabc8:
    // 0x1aabc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aabc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aabcc:
    // 0x1aabcc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1aabd0:
    if (ctx->pc == 0x1AABD0u) {
        ctx->pc = 0x1AABD0u;
            // 0x1aabd0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AABD4u;
        goto label_1aabd4;
    }
    ctx->pc = 0x1AABCCu;
    {
        const bool branch_taken_0x1aabcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AABD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABCCu;
            // 0x1aabd0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabcc) {
            ctx->pc = 0x1AAC18u;
            goto label_1aac18;
        }
    }
    ctx->pc = 0x1AABD4u;
label_1aabd4:
    // 0x1aabd4: 0x0  nop
    ctx->pc = 0x1aabd4u;
    // NOP
label_1aabd8:
    // 0x1aabd8: 0xc040d72  jal         func_1035C8
label_1aabdc:
    if (ctx->pc == 0x1AABDCu) {
        ctx->pc = 0x1AABDCu;
            // 0x1aabdc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x1AABE0u;
        goto label_1aabe0;
    }
    ctx->pc = 0x1AABD8u;
    SET_GPR_U32(ctx, 31, 0x1AABE0u);
    ctx->pc = 0x1AABDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABD8u;
            // 0x1aabdc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABE0u; }
        if (ctx->pc != 0x1AABE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABE0u; }
        if (ctx->pc != 0x1AABE0u) { return; }
    }
    ctx->pc = 0x1AABE0u;
label_1aabe0:
    // 0x1aabe0: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1aabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
label_1aabe4:
    // 0x1aabe4: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1aabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
label_1aabe8:
    // 0x1aabe8: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1aabe8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
label_1aabec:
    // 0x1aabec: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1aabecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
label_1aabf0:
    // 0x1aabf0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1aabf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1aabf4:
    // 0x1aabf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aabf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aabf8:
    // 0x1aabf8: 0xc040880  jal         func_102200
label_1aabfc:
    if (ctx->pc == 0x1AABFCu) {
        ctx->pc = 0x1AABFCu;
            // 0x1aabfc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->pc = 0x1AAC00u;
        goto label_1aac00;
    }
    ctx->pc = 0x1AABF8u;
    SET_GPR_U32(ctx, 31, 0x1AAC00u);
    ctx->pc = 0x1AABFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABF8u;
            // 0x1aabfc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC00u; }
        if (ctx->pc != 0x1AAC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC00u; }
        if (ctx->pc != 0x1AAC00u) { return; }
    }
    ctx->pc = 0x1AAC00u;
label_1aac00:
    // 0x1aac00: 0xc040a74  jal         func_1029D0
label_1aac04:
    if (ctx->pc == 0x1AAC04u) {
        ctx->pc = 0x1AAC04u;
            // 0x1aac04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC08u;
        goto label_1aac08;
    }
    ctx->pc = 0x1AAC00u;
    SET_GPR_U32(ctx, 31, 0x1AAC08u);
    ctx->pc = 0x1AAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC00u;
            // 0x1aac04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC08u; }
        if (ctx->pc != 0x1AAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC08u; }
        if (ctx->pc != 0x1AAC08u) { return; }
    }
    ctx->pc = 0x1AAC08u;
label_1aac08:
    // 0x1aac08: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aac0c:
    // 0x1aac0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aac0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aac10:
    // 0x1aac10: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1aac10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1aac14:
    // 0x1aac14: 0x0  nop
    ctx->pc = 0x1aac14u;
    // NOP
label_1aac18:
    // 0x1aac18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aac1c:
    // 0x1aac1c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1aac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aac20:
    // 0x1aac20: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1aac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aac24:
    // 0x1aac24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aac24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1aac28:
    // 0x1aac28: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1aac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1aac2c:
    // 0x1aac2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aac30:
    // 0x1aac30: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aac34:
    // 0x1aac34: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1aac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aac38:
    // 0x1aac38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aac38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1aac3c:
    // 0x1aac3c: 0xc065d00  jal         func_197400
label_1aac40:
    if (ctx->pc == 0x1AAC40u) {
        ctx->pc = 0x1AAC40u;
            // 0x1aac40: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->pc = 0x1AAC44u;
        goto label_1aac44;
    }
    ctx->pc = 0x1AAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC44u);
    ctx->pc = 0x1AAC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC3Cu;
            // 0x1aac40: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC44u; }
        if (ctx->pc != 0x1AAC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC44u; }
        if (ctx->pc != 0x1AAC44u) { return; }
    }
    ctx->pc = 0x1AAC44u;
label_1aac44:
    // 0x1aac44: 0x184001c4  blez        $v0, . + 4 + (0x1C4 << 2)
label_1aac48:
    if (ctx->pc == 0x1AAC48u) {
        ctx->pc = 0x1AAC4Cu;
        goto label_1aac4c;
    }
    ctx->pc = 0x1AAC44u;
    {
        const bool branch_taken_0x1aac44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aac44) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAC4Cu;
label_1aac4c:
    // 0x1aac4c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aac50:
    // 0x1aac50: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aac54:
    // 0x1aac54: 0x146201c0  bne         $v1, $v0, . + 4 + (0x1C0 << 2)
label_1aac58:
    if (ctx->pc == 0x1AAC58u) {
        ctx->pc = 0x1AAC5Cu;
        goto label_1aac5c;
    }
    ctx->pc = 0x1AAC54u;
    {
        const bool branch_taken_0x1aac54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aac54) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAC5Cu;
label_1aac5c:
    // 0x1aac5c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aac60:
    // 0x1aac60: 0xc06560c  jal         func_195830
label_1aac64:
    if (ctx->pc == 0x1AAC64u) {
        ctx->pc = 0x1AAC64u;
            // 0x1aac64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAC68u;
        goto label_1aac68;
    }
    ctx->pc = 0x1AAC60u;
    SET_GPR_U32(ctx, 31, 0x1AAC68u);
    ctx->pc = 0x1AAC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC60u;
            // 0x1aac64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC68u; }
        if (ctx->pc != 0x1AAC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC68u; }
        if (ctx->pc != 0x1AAC68u) { return; }
    }
    ctx->pc = 0x1AAC68u;
label_1aac68:
    // 0x1aac68: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_1aac6c:
    if (ctx->pc == 0x1AAC6Cu) {
        ctx->pc = 0x1AAC70u;
        goto label_1aac70;
    }
    ctx->pc = 0x1AAC68u;
    {
        const bool branch_taken_0x1aac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aac68) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAC70u;
label_1aac70:
    // 0x1aac70: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
label_1aac74:
    // 0x1aac74: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1aac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aac78:
    // 0x1aac78: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1aac78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
label_1aac7c:
    // 0x1aac7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aac7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aac80:
    // 0x1aac80: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1aac80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_1aac84:
    // 0x1aac84: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aac84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aac88:
    // 0x1aac88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aac88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aac8c:
    // 0x1aac8c: 0x0  nop
    ctx->pc = 0x1aac8cu;
    // NOP
label_1aac90:
    // 0x1aac90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1aac90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1aac94:
    // 0x1aac94: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1aac94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1aac98:
    // 0x1aac98: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aac9c:
    // 0x1aac9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aac9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aaca0:
    // 0x1aaca0: 0xc065d00  jal         func_197400
label_1aaca4:
    if (ctx->pc == 0x1AACA4u) {
        ctx->pc = 0x1AACA4u;
            // 0x1aaca4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AACA8u;
        goto label_1aaca8;
    }
    ctx->pc = 0x1AACA0u;
    SET_GPR_U32(ctx, 31, 0x1AACA8u);
    ctx->pc = 0x1AACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACA0u;
            // 0x1aaca4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACA8u; }
        if (ctx->pc != 0x1AACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACA8u; }
        if (ctx->pc != 0x1AACA8u) { return; }
    }
    ctx->pc = 0x1AACA8u;
label_1aaca8:
    // 0x1aaca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aaca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aacac:
    // 0x1aacac: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1aacb0:
    if (ctx->pc == 0x1AACB0u) {
        ctx->pc = 0x1AACB4u;
        goto label_1aacb4;
    }
    ctx->pc = 0x1AACACu;
    {
        const bool branch_taken_0x1aacac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aacac) {
            ctx->pc = 0x1AACD0u;
            goto label_1aacd0;
        }
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aacb8:
    // 0x1aacb8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1aacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1aacbc:
    // 0x1aacbc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1aacc0:
    if (ctx->pc == 0x1AACC0u) {
        ctx->pc = 0x1AACC4u;
        goto label_1aacc4;
    }
    ctx->pc = 0x1AACBCu;
    {
        const bool branch_taken_0x1aacbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aacbc) {
            ctx->pc = 0x1AACD0u;
            goto label_1aacd0;
        }
    }
    ctx->pc = 0x1AACC4u;
label_1aacc4:
    // 0x1aacc4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aacc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aacc8:
    // 0x1aacc8: 0xc06560c  jal         func_195830
label_1aaccc:
    if (ctx->pc == 0x1AACCCu) {
        ctx->pc = 0x1AACCCu;
            // 0x1aaccc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AACD0u;
        goto label_1aacd0;
    }
    ctx->pc = 0x1AACC8u;
    SET_GPR_U32(ctx, 31, 0x1AACD0u);
    ctx->pc = 0x1AACCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACC8u;
            // 0x1aaccc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACD0u; }
        if (ctx->pc != 0x1AACD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACD0u; }
        if (ctx->pc != 0x1AACD0u) { return; }
    }
    ctx->pc = 0x1AACD0u;
label_1aacd0:
    // 0x1aacd0: 0xc065d00  jal         func_197400
label_1aacd4:
    if (ctx->pc == 0x1AACD4u) {
        ctx->pc = 0x1AACD8u;
        goto label_1aacd8;
    }
    ctx->pc = 0x1AACD0u;
    SET_GPR_U32(ctx, 31, 0x1AACD8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACD8u; }
        if (ctx->pc != 0x1AACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACD8u; }
        if (ctx->pc != 0x1AACD8u) { return; }
    }
    ctx->pc = 0x1AACD8u;
label_1aacd8:
    // 0x1aacd8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1aacdc:
    if (ctx->pc == 0x1AACDCu) {
        ctx->pc = 0x1AACE0u;
        goto label_1aace0;
    }
    ctx->pc = 0x1AACD8u;
    {
        const bool branch_taken_0x1aacd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aacd8) {
            ctx->pc = 0x1AAD00u;
            goto label_1aad00;
        }
    }
    ctx->pc = 0x1AACE0u;
label_1aace0:
    // 0x1aace0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aace0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aace4:
    // 0x1aace4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1aace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1aace8:
    // 0x1aace8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aacec:
    if (ctx->pc == 0x1AACECu) {
        ctx->pc = 0x1AACF0u;
        goto label_1aacf0;
    }
    ctx->pc = 0x1AACE8u;
    {
        const bool branch_taken_0x1aace8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aace8) {
            ctx->pc = 0x1AAD00u;
            goto label_1aad00;
        }
    }
    ctx->pc = 0x1AACF0u;
label_1aacf0:
    // 0x1aacf0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aacf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aacf4:
    // 0x1aacf4: 0xc06560c  jal         func_195830
label_1aacf8:
    if (ctx->pc == 0x1AACF8u) {
        ctx->pc = 0x1AACF8u;
            // 0x1aacf8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AACFCu;
        goto label_1aacfc;
    }
    ctx->pc = 0x1AACF4u;
    SET_GPR_U32(ctx, 31, 0x1AACFCu);
    ctx->pc = 0x1AACF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACF4u;
            // 0x1aacf8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACFCu; }
        if (ctx->pc != 0x1AACFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACFCu; }
        if (ctx->pc != 0x1AACFCu) { return; }
    }
    ctx->pc = 0x1AACFCu;
label_1aacfc:
    // 0x1aacfc: 0x0  nop
    ctx->pc = 0x1aacfcu;
    // NOP
label_1aad00:
    // 0x1aad00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aad04:
    // 0x1aad04: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1aad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1aad08:
    // 0x1aad08: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aad0c:
    if (ctx->pc == 0x1AAD0Cu) {
        ctx->pc = 0x1AAD10u;
        goto label_1aad10;
    }
    ctx->pc = 0x1AAD08u;
    {
        const bool branch_taken_0x1aad08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aad08) {
            ctx->pc = 0x1AAD20u;
            goto label_1aad20;
        }
    }
    ctx->pc = 0x1AAD10u;
label_1aad10:
    // 0x1aad10: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aad10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aad14:
    // 0x1aad14: 0xc06560c  jal         func_195830
label_1aad18:
    if (ctx->pc == 0x1AAD18u) {
        ctx->pc = 0x1AAD18u;
            // 0x1aad18: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAD1Cu;
        goto label_1aad1c;
    }
    ctx->pc = 0x1AAD14u;
    SET_GPR_U32(ctx, 31, 0x1AAD1Cu);
    ctx->pc = 0x1AAD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD14u;
            // 0x1aad18: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD1Cu; }
        if (ctx->pc != 0x1AAD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD1Cu; }
        if (ctx->pc != 0x1AAD1Cu) { return; }
    }
    ctx->pc = 0x1AAD1Cu;
label_1aad1c:
    // 0x1aad1c: 0x0  nop
    ctx->pc = 0x1aad1cu;
    // NOP
label_1aad20:
    // 0x1aad20: 0xc065d00  jal         func_197400
label_1aad24:
    if (ctx->pc == 0x1AAD24u) {
        ctx->pc = 0x1AAD28u;
        goto label_1aad28;
    }
    ctx->pc = 0x1AAD20u;
    SET_GPR_U32(ctx, 31, 0x1AAD28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD28u; }
        if (ctx->pc != 0x1AAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD28u; }
        if (ctx->pc != 0x1AAD28u) { return; }
    }
    ctx->pc = 0x1AAD28u;
label_1aad28:
    // 0x1aad28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aad2c:
    // 0x1aad2c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1aad30:
    if (ctx->pc == 0x1AAD30u) {
        ctx->pc = 0x1AAD34u;
        goto label_1aad34;
    }
    ctx->pc = 0x1AAD2Cu;
    {
        const bool branch_taken_0x1aad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aad2c) {
            ctx->pc = 0x1AAD50u;
            goto label_1aad50;
        }
    }
    ctx->pc = 0x1AAD34u;
label_1aad34:
    // 0x1aad34: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aad34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aad38:
    // 0x1aad38: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1aad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1aad3c:
    // 0x1aad3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1aad40:
    if (ctx->pc == 0x1AAD40u) {
        ctx->pc = 0x1AAD44u;
        goto label_1aad44;
    }
    ctx->pc = 0x1AAD3Cu;
    {
        const bool branch_taken_0x1aad3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aad3c) {
            ctx->pc = 0x1AAD50u;
            goto label_1aad50;
        }
    }
    ctx->pc = 0x1AAD44u;
label_1aad44:
    // 0x1aad44: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aad44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aad48:
    // 0x1aad48: 0xc06560c  jal         func_195830
label_1aad4c:
    if (ctx->pc == 0x1AAD4Cu) {
        ctx->pc = 0x1AAD4Cu;
            // 0x1aad4c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAD50u;
        goto label_1aad50;
    }
    ctx->pc = 0x1AAD48u;
    SET_GPR_U32(ctx, 31, 0x1AAD50u);
    ctx->pc = 0x1AAD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD48u;
            // 0x1aad4c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD50u; }
        if (ctx->pc != 0x1AAD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD50u; }
        if (ctx->pc != 0x1AAD50u) { return; }
    }
    ctx->pc = 0x1AAD50u;
label_1aad50:
    // 0x1aad50: 0xc065d00  jal         func_197400
label_1aad54:
    if (ctx->pc == 0x1AAD54u) {
        ctx->pc = 0x1AAD58u;
        goto label_1aad58;
    }
    ctx->pc = 0x1AAD50u;
    SET_GPR_U32(ctx, 31, 0x1AAD58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD58u; }
        if (ctx->pc != 0x1AAD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD58u; }
        if (ctx->pc != 0x1AAD58u) { return; }
    }
    ctx->pc = 0x1AAD58u;
label_1aad58:
    // 0x1aad58: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1aad5c:
    if (ctx->pc == 0x1AAD5Cu) {
        ctx->pc = 0x1AAD60u;
        goto label_1aad60;
    }
    ctx->pc = 0x1AAD58u;
    {
        const bool branch_taken_0x1aad58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aad58) {
            ctx->pc = 0x1AAD80u;
            goto label_1aad80;
        }
    }
    ctx->pc = 0x1AAD60u;
label_1aad60:
    // 0x1aad60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aad64:
    // 0x1aad64: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1aad64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1aad68:
    // 0x1aad68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aad6c:
    if (ctx->pc == 0x1AAD6Cu) {
        ctx->pc = 0x1AAD70u;
        goto label_1aad70;
    }
    ctx->pc = 0x1AAD68u;
    {
        const bool branch_taken_0x1aad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aad68) {
            ctx->pc = 0x1AAD80u;
            goto label_1aad80;
        }
    }
    ctx->pc = 0x1AAD70u;
label_1aad70:
    // 0x1aad70: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aad74:
    // 0x1aad74: 0xc06560c  jal         func_195830
label_1aad78:
    if (ctx->pc == 0x1AAD78u) {
        ctx->pc = 0x1AAD78u;
            // 0x1aad78: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAD7Cu;
        goto label_1aad7c;
    }
    ctx->pc = 0x1AAD74u;
    SET_GPR_U32(ctx, 31, 0x1AAD7Cu);
    ctx->pc = 0x1AAD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD74u;
            // 0x1aad78: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD7Cu; }
        if (ctx->pc != 0x1AAD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD7Cu; }
        if (ctx->pc != 0x1AAD7Cu) { return; }
    }
    ctx->pc = 0x1AAD7Cu;
label_1aad7c:
    // 0x1aad7c: 0x0  nop
    ctx->pc = 0x1aad7cu;
    // NOP
label_1aad80:
    // 0x1aad80: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aad84:
    // 0x1aad84: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1aad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1aad88:
    // 0x1aad88: 0x14620173  bne         $v1, $v0, . + 4 + (0x173 << 2)
label_1aad8c:
    if (ctx->pc == 0x1AAD8Cu) {
        ctx->pc = 0x1AAD90u;
        goto label_1aad90;
    }
    ctx->pc = 0x1AAD88u;
    {
        const bool branch_taken_0x1aad88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aad88) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAD90u;
label_1aad90:
    // 0x1aad90: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aad94:
    // 0x1aad94: 0xc06560c  jal         func_195830
label_1aad98:
    if (ctx->pc == 0x1AAD98u) {
        ctx->pc = 0x1AAD98u;
            // 0x1aad98: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAD9Cu;
        goto label_1aad9c;
    }
    ctx->pc = 0x1AAD94u;
    SET_GPR_U32(ctx, 31, 0x1AAD9Cu);
    ctx->pc = 0x1AAD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD94u;
            // 0x1aad98: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD9Cu; }
        if (ctx->pc != 0x1AAD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD9Cu; }
        if (ctx->pc != 0x1AAD9Cu) { return; }
    }
    ctx->pc = 0x1AAD9Cu;
label_1aad9c:
    // 0x1aad9c: 0x1000016e  b           . + 4 + (0x16E << 2)
label_1aada0:
    if (ctx->pc == 0x1AADA0u) {
        ctx->pc = 0x1AADA4u;
        goto label_1aada4;
    }
    ctx->pc = 0x1AAD9Cu;
    {
        const bool branch_taken_0x1aad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aad9c) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AADA4u;
label_1aada4:
    // 0x1aada4: 0x0  nop
    ctx->pc = 0x1aada4u;
    // NOP
label_1aada8:
    // 0x1aada8: 0x3c023f85  lui         $v0, 0x3F85
    ctx->pc = 0x1aada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
label_1aadac:
    // 0x1aadac: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1aadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aadb0:
    // 0x1aadb0: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1aadb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
label_1aadb4:
    // 0x1aadb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aadb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aadb8:
    // 0x1aadb8: 0x0  nop
    ctx->pc = 0x1aadb8u;
    // NOP
label_1aadbc:
    // 0x1aadbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1aadbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1aadc0:
    // 0x1aadc0: 0xc065d00  jal         func_197400
label_1aadc4:
    if (ctx->pc == 0x1AADC4u) {
        ctx->pc = 0x1AADC4u;
            // 0x1aadc4: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x1AADC8u;
        goto label_1aadc8;
    }
    ctx->pc = 0x1AADC0u;
    SET_GPR_U32(ctx, 31, 0x1AADC8u);
    ctx->pc = 0x1AADC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADC0u;
            // 0x1aadc4: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADC8u; }
        if (ctx->pc != 0x1AADC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADC8u; }
        if (ctx->pc != 0x1AADC8u) { return; }
    }
    ctx->pc = 0x1AADC8u;
label_1aadc8:
    // 0x1aadc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aadcc:
    // 0x1aadcc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1aadd0:
    if (ctx->pc == 0x1AADD0u) {
        ctx->pc = 0x1AADD4u;
        goto label_1aadd4;
    }
    ctx->pc = 0x1AADCCu;
    {
        const bool branch_taken_0x1aadcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aadcc) {
            ctx->pc = 0x1AADF0u;
            goto label_1aadf0;
        }
    }
    ctx->pc = 0x1AADD4u;
label_1aadd4:
    // 0x1aadd4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aadd8:
    // 0x1aadd8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1aadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1aaddc:
    // 0x1aaddc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1aade0:
    if (ctx->pc == 0x1AADE0u) {
        ctx->pc = 0x1AADE4u;
        goto label_1aade4;
    }
    ctx->pc = 0x1AADDCu;
    {
        const bool branch_taken_0x1aaddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaddc) {
            ctx->pc = 0x1AADF0u;
            goto label_1aadf0;
        }
    }
    ctx->pc = 0x1AADE4u;
label_1aade4:
    // 0x1aade4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aade4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aade8:
    // 0x1aade8: 0xc06560c  jal         func_195830
label_1aadec:
    if (ctx->pc == 0x1AADECu) {
        ctx->pc = 0x1AADECu;
            // 0x1aadec: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AADF0u;
        goto label_1aadf0;
    }
    ctx->pc = 0x1AADE8u;
    SET_GPR_U32(ctx, 31, 0x1AADF0u);
    ctx->pc = 0x1AADECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADE8u;
            // 0x1aadec: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF0u; }
        if (ctx->pc != 0x1AADF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF0u; }
        if (ctx->pc != 0x1AADF0u) { return; }
    }
    ctx->pc = 0x1AADF0u;
label_1aadf0:
    // 0x1aadf0: 0xc065d00  jal         func_197400
label_1aadf4:
    if (ctx->pc == 0x1AADF4u) {
        ctx->pc = 0x1AADF8u;
        goto label_1aadf8;
    }
    ctx->pc = 0x1AADF0u;
    SET_GPR_U32(ctx, 31, 0x1AADF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF8u; }
        if (ctx->pc != 0x1AADF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF8u; }
        if (ctx->pc != 0x1AADF8u) { return; }
    }
    ctx->pc = 0x1AADF8u;
label_1aadf8:
    // 0x1aadf8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1aadfc:
    if (ctx->pc == 0x1AADFCu) {
        ctx->pc = 0x1AAE00u;
        goto label_1aae00;
    }
    ctx->pc = 0x1AADF8u;
    {
        const bool branch_taken_0x1aadf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aadf8) {
            ctx->pc = 0x1AAE20u;
            goto label_1aae20;
        }
    }
    ctx->pc = 0x1AAE00u;
label_1aae00:
    // 0x1aae00: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aae04:
    // 0x1aae04: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1aae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1aae08:
    // 0x1aae08: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aae0c:
    if (ctx->pc == 0x1AAE0Cu) {
        ctx->pc = 0x1AAE10u;
        goto label_1aae10;
    }
    ctx->pc = 0x1AAE08u;
    {
        const bool branch_taken_0x1aae08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aae08) {
            ctx->pc = 0x1AAE20u;
            goto label_1aae20;
        }
    }
    ctx->pc = 0x1AAE10u;
label_1aae10:
    // 0x1aae10: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aae14:
    // 0x1aae14: 0xc06560c  jal         func_195830
label_1aae18:
    if (ctx->pc == 0x1AAE18u) {
        ctx->pc = 0x1AAE18u;
            // 0x1aae18: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAE1Cu;
        goto label_1aae1c;
    }
    ctx->pc = 0x1AAE14u;
    SET_GPR_U32(ctx, 31, 0x1AAE1Cu);
    ctx->pc = 0x1AAE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE14u;
            // 0x1aae18: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE1Cu; }
        if (ctx->pc != 0x1AAE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE1Cu; }
        if (ctx->pc != 0x1AAE1Cu) { return; }
    }
    ctx->pc = 0x1AAE1Cu;
label_1aae1c:
    // 0x1aae1c: 0x0  nop
    ctx->pc = 0x1aae1cu;
    // NOP
label_1aae20:
    // 0x1aae20: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aae24:
    // 0x1aae24: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1aae28:
    // 0x1aae28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aae2c:
    if (ctx->pc == 0x1AAE2Cu) {
        ctx->pc = 0x1AAE30u;
        goto label_1aae30;
    }
    ctx->pc = 0x1AAE28u;
    {
        const bool branch_taken_0x1aae28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aae28) {
            ctx->pc = 0x1AAE40u;
            goto label_1aae40;
        }
    }
    ctx->pc = 0x1AAE30u;
label_1aae30:
    // 0x1aae30: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aae30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aae34:
    // 0x1aae34: 0xc06560c  jal         func_195830
label_1aae38:
    if (ctx->pc == 0x1AAE38u) {
        ctx->pc = 0x1AAE38u;
            // 0x1aae38: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAE3Cu;
        goto label_1aae3c;
    }
    ctx->pc = 0x1AAE34u;
    SET_GPR_U32(ctx, 31, 0x1AAE3Cu);
    ctx->pc = 0x1AAE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE34u;
            // 0x1aae38: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE3Cu; }
        if (ctx->pc != 0x1AAE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE3Cu; }
        if (ctx->pc != 0x1AAE3Cu) { return; }
    }
    ctx->pc = 0x1AAE3Cu;
label_1aae3c:
    // 0x1aae3c: 0x0  nop
    ctx->pc = 0x1aae3cu;
    // NOP
label_1aae40:
    // 0x1aae40: 0xc065d00  jal         func_197400
label_1aae44:
    if (ctx->pc == 0x1AAE44u) {
        ctx->pc = 0x1AAE48u;
        goto label_1aae48;
    }
    ctx->pc = 0x1AAE40u;
    SET_GPR_U32(ctx, 31, 0x1AAE48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE48u; }
        if (ctx->pc != 0x1AAE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE48u; }
        if (ctx->pc != 0x1AAE48u) { return; }
    }
    ctx->pc = 0x1AAE48u;
label_1aae48:
    // 0x1aae48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aae4c:
    // 0x1aae4c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1aae50:
    if (ctx->pc == 0x1AAE50u) {
        ctx->pc = 0x1AAE54u;
        goto label_1aae54;
    }
    ctx->pc = 0x1AAE4Cu;
    {
        const bool branch_taken_0x1aae4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aae4c) {
            ctx->pc = 0x1AAE70u;
            goto label_1aae70;
        }
    }
    ctx->pc = 0x1AAE54u;
label_1aae54:
    // 0x1aae54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aae58:
    // 0x1aae58: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1aae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1aae5c:
    // 0x1aae5c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1aae60:
    if (ctx->pc == 0x1AAE60u) {
        ctx->pc = 0x1AAE64u;
        goto label_1aae64;
    }
    ctx->pc = 0x1AAE5Cu;
    {
        const bool branch_taken_0x1aae5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aae5c) {
            ctx->pc = 0x1AAE70u;
            goto label_1aae70;
        }
    }
    ctx->pc = 0x1AAE64u;
label_1aae64:
    // 0x1aae64: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aae64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aae68:
    // 0x1aae68: 0xc06560c  jal         func_195830
label_1aae6c:
    if (ctx->pc == 0x1AAE6Cu) {
        ctx->pc = 0x1AAE6Cu;
            // 0x1aae6c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAE70u;
        goto label_1aae70;
    }
    ctx->pc = 0x1AAE68u;
    SET_GPR_U32(ctx, 31, 0x1AAE70u);
    ctx->pc = 0x1AAE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE68u;
            // 0x1aae6c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE70u; }
        if (ctx->pc != 0x1AAE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE70u; }
        if (ctx->pc != 0x1AAE70u) { return; }
    }
    ctx->pc = 0x1AAE70u;
label_1aae70:
    // 0x1aae70: 0xc065d00  jal         func_197400
label_1aae74:
    if (ctx->pc == 0x1AAE74u) {
        ctx->pc = 0x1AAE78u;
        goto label_1aae78;
    }
    ctx->pc = 0x1AAE70u;
    SET_GPR_U32(ctx, 31, 0x1AAE78u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE78u; }
        if (ctx->pc != 0x1AAE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE78u; }
        if (ctx->pc != 0x1AAE78u) { return; }
    }
    ctx->pc = 0x1AAE78u;
label_1aae78:
    // 0x1aae78: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1aae7c:
    if (ctx->pc == 0x1AAE7Cu) {
        ctx->pc = 0x1AAE80u;
        goto label_1aae80;
    }
    ctx->pc = 0x1AAE78u;
    {
        const bool branch_taken_0x1aae78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1aae78) {
            ctx->pc = 0x1AAEA0u;
            goto label_1aaea0;
        }
    }
    ctx->pc = 0x1AAE80u;
label_1aae80:
    // 0x1aae80: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aae84:
    // 0x1aae84: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1aae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1aae88:
    // 0x1aae88: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1aae8c:
    if (ctx->pc == 0x1AAE8Cu) {
        ctx->pc = 0x1AAE90u;
        goto label_1aae90;
    }
    ctx->pc = 0x1AAE88u;
    {
        const bool branch_taken_0x1aae88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aae88) {
            ctx->pc = 0x1AAEA0u;
            goto label_1aaea0;
        }
    }
    ctx->pc = 0x1AAE90u;
label_1aae90:
    // 0x1aae90: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aae90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aae94:
    // 0x1aae94: 0xc06560c  jal         func_195830
label_1aae98:
    if (ctx->pc == 0x1AAE98u) {
        ctx->pc = 0x1AAE98u;
            // 0x1aae98: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAE9Cu;
        goto label_1aae9c;
    }
    ctx->pc = 0x1AAE94u;
    SET_GPR_U32(ctx, 31, 0x1AAE9Cu);
    ctx->pc = 0x1AAE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE94u;
            // 0x1aae98: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE9Cu; }
        if (ctx->pc != 0x1AAE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE9Cu; }
        if (ctx->pc != 0x1AAE9Cu) { return; }
    }
    ctx->pc = 0x1AAE9Cu;
label_1aae9c:
    // 0x1aae9c: 0x0  nop
    ctx->pc = 0x1aae9cu;
    // NOP
label_1aaea0:
    // 0x1aaea0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aaea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaea4:
    // 0x1aaea4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1aaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1aaea8:
    // 0x1aaea8: 0x1462012b  bne         $v1, $v0, . + 4 + (0x12B << 2)
label_1aaeac:
    if (ctx->pc == 0x1AAEACu) {
        ctx->pc = 0x1AAEB0u;
        goto label_1aaeb0;
    }
    ctx->pc = 0x1AAEA8u;
    {
        const bool branch_taken_0x1aaea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaea8) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAEB0u;
label_1aaeb0:
    // 0x1aaeb0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aaeb4:
    // 0x1aaeb4: 0xc06560c  jal         func_195830
label_1aaeb8:
    if (ctx->pc == 0x1AAEB8u) {
        ctx->pc = 0x1AAEB8u;
            // 0x1aaeb8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAEBCu;
        goto label_1aaebc;
    }
    ctx->pc = 0x1AAEB4u;
    SET_GPR_U32(ctx, 31, 0x1AAEBCu);
    ctx->pc = 0x1AAEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEB4u;
            // 0x1aaeb8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEBCu; }
        if (ctx->pc != 0x1AAEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEBCu; }
        if (ctx->pc != 0x1AAEBCu) { return; }
    }
    ctx->pc = 0x1AAEBCu;
label_1aaebc:
    // 0x1aaebc: 0x10000126  b           . + 4 + (0x126 << 2)
label_1aaec0:
    if (ctx->pc == 0x1AAEC0u) {
        ctx->pc = 0x1AAEC4u;
        goto label_1aaec4;
    }
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAEC4u;
label_1aaec4:
    // 0x1aaec4: 0x0  nop
    ctx->pc = 0x1aaec4u;
    // NOP
label_1aaec8:
    // 0x1aaec8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1aaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1aaecc:
    // 0x1aaecc: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1aaed0:
    if (ctx->pc == 0x1AAED0u) {
        ctx->pc = 0x1AAED4u;
        goto label_1aaed4;
    }
    ctx->pc = 0x1AAECCu;
    {
        const bool branch_taken_0x1aaecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaecc) {
            ctx->pc = 0x1AAF70u;
            goto label_1aaf70;
        }
    }
    ctx->pc = 0x1AAED4u;
label_1aaed4:
    // 0x1aaed4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aaed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aaed8:
    // 0x1aaed8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1aaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1aaedc:
    // 0x1aaedc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aaedcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aaee0:
    // 0x1aaee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aaee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aaee4:
    // 0x1aaee4: 0x0  nop
    ctx->pc = 0x1aaee4u;
    // NOP
label_1aaee8:
    // 0x1aaee8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1aaee8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aaeec:
    // 0x1aaeec: 0xc040d72  jal         func_1035C8
label_1aaef0:
    if (ctx->pc == 0x1AAEF0u) {
        ctx->pc = 0x1AAEF0u;
            // 0x1aaef0: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AAEF4u;
        goto label_1aaef4;
    }
    ctx->pc = 0x1AAEECu;
    SET_GPR_U32(ctx, 31, 0x1AAEF4u);
    ctx->pc = 0x1AAEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEECu;
            // 0x1aaef0: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEF4u; }
        if (ctx->pc != 0x1AAEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEF4u; }
        if (ctx->pc != 0x1AAEF4u) { return; }
    }
    ctx->pc = 0x1AAEF4u;
label_1aaef4:
    // 0x1aaef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aaef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aaef8:
    // 0x1aaef8: 0xc040078  jal         func_1001E0
label_1aaefc:
    if (ctx->pc == 0x1AAEFCu) {
        ctx->pc = 0x1AAEFCu;
            // 0x1aaefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF00u;
        goto label_1aaf00;
    }
    ctx->pc = 0x1AAEF8u;
    SET_GPR_U32(ctx, 31, 0x1AAF00u);
    ctx->pc = 0x1AAEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEF8u;
            // 0x1aaefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF00u; }
        if (ctx->pc != 0x1AAF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF00u; }
        if (ctx->pc != 0x1AAF00u) { return; }
    }
    ctx->pc = 0x1AAF00u;
label_1aaf00:
    // 0x1aaf00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1aaf04:
    if (ctx->pc == 0x1AAF04u) {
        ctx->pc = 0x1AAF08u;
        goto label_1aaf08;
    }
    ctx->pc = 0x1AAF00u;
    {
        const bool branch_taken_0x1aaf00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf00) {
            ctx->pc = 0x1AAF28u;
            goto label_1aaf28;
        }
    }
    ctx->pc = 0x1AAF08u;
label_1aaf08:
    // 0x1aaf08: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1aaf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aaf0c:
    // 0x1aaf0c: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1aaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1aaf10:
    // 0x1aaf10: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1aaf10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1aaf14:
    // 0x1aaf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aaf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aaf18:
    // 0x1aaf18: 0x0  nop
    ctx->pc = 0x1aaf18u;
    // NOP
label_1aaf1c:
    // 0x1aaf1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1aaf1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aaf20:
    // 0x1aaf20: 0x10000005  b           . + 4 + (0x5 << 2)
label_1aaf24:
    if (ctx->pc == 0x1AAF24u) {
        ctx->pc = 0x1AAF24u;
            // 0x1aaf24: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AAF28u;
        goto label_1aaf28;
    }
    ctx->pc = 0x1AAF20u;
    {
        const bool branch_taken_0x1aaf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF20u;
            // 0x1aaf24: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf20) {
            ctx->pc = 0x1AAF38u;
            goto label_1aaf38;
        }
    }
    ctx->pc = 0x1AAF28u;
label_1aaf28:
    // 0x1aaf28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaf2c:
    // 0x1aaf2c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1aaf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1aaf30:
    // 0x1aaf30: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1aaf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1aaf34:
    // 0x1aaf34: 0x0  nop
    ctx->pc = 0x1aaf34u;
    // NOP
label_1aaf38:
    // 0x1aaf38: 0xc065d00  jal         func_197400
label_1aaf3c:
    if (ctx->pc == 0x1AAF3Cu) {
        ctx->pc = 0x1AAF40u;
        goto label_1aaf40;
    }
    ctx->pc = 0x1AAF38u;
    SET_GPR_U32(ctx, 31, 0x1AAF40u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF40u; }
        if (ctx->pc != 0x1AAF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF40u; }
        if (ctx->pc != 0x1AAF40u) { return; }
    }
    ctx->pc = 0x1AAF40u;
label_1aaf40:
    // 0x1aaf40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aaf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aaf44:
    // 0x1aaf44: 0x14430104  bne         $v0, $v1, . + 4 + (0x104 << 2)
label_1aaf48:
    if (ctx->pc == 0x1AAF48u) {
        ctx->pc = 0x1AAF4Cu;
        goto label_1aaf4c;
    }
    ctx->pc = 0x1AAF44u;
    {
        const bool branch_taken_0x1aaf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aaf44) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAF4Cu;
label_1aaf4c:
    // 0x1aaf4c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1aaf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aaf50:
    // 0x1aaf50: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1aaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1aaf54:
    // 0x1aaf54: 0x14620100  bne         $v1, $v0, . + 4 + (0x100 << 2)
label_1aaf58:
    if (ctx->pc == 0x1AAF58u) {
        ctx->pc = 0x1AAF5Cu;
        goto label_1aaf5c;
    }
    ctx->pc = 0x1AAF54u;
    {
        const bool branch_taken_0x1aaf54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aaf54) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAF5Cu;
label_1aaf5c:
    // 0x1aaf5c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1aaf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1aaf60:
    // 0x1aaf60: 0xc06560c  jal         func_195830
label_1aaf64:
    if (ctx->pc == 0x1AAF64u) {
        ctx->pc = 0x1AAF64u;
            // 0x1aaf64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AAF68u;
        goto label_1aaf68;
    }
    ctx->pc = 0x1AAF60u;
    SET_GPR_U32(ctx, 31, 0x1AAF68u);
    ctx->pc = 0x1AAF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF60u;
            // 0x1aaf64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF68u; }
        if (ctx->pc != 0x1AAF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF68u; }
        if (ctx->pc != 0x1AAF68u) { return; }
    }
    ctx->pc = 0x1AAF68u;
label_1aaf68:
    // 0x1aaf68: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1aaf6c:
    if (ctx->pc == 0x1AAF6Cu) {
        ctx->pc = 0x1AAF70u;
        goto label_1aaf70;
    }
    ctx->pc = 0x1AAF68u;
    {
        const bool branch_taken_0x1aaf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf68) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AAF70u;
label_1aaf70:
    // 0x1aaf70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aaf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaf74:
    // 0x1aaf74: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
label_1aaf78:
    if (ctx->pc == 0x1AAF78u) {
        ctx->pc = 0x1AAF78u;
            // 0x1aaf78: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1AAF7Cu;
        goto label_1aaf7c;
    }
    ctx->pc = 0x1AAF74u;
    {
        const bool branch_taken_0x1aaf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF74u;
            // 0x1aaf78: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf74) {
            ctx->pc = 0x1AB148u;
            goto label_1ab148;
        }
    }
    ctx->pc = 0x1AAF7Cu;
label_1aaf7c:
    // 0x1aaf7c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1aaf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aaf80:
    // 0x1aaf80: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1aaf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1aaf84:
    // 0x1aaf84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aaf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aaf88:
    // 0x1aaf88: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1aaf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1aaf8c:
    // 0x1aaf8c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1aaf90:
    // 0x1aaf90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1aaf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1aaf94:
    // 0x1aaf94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aaf94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aaf98:
    // 0x1aaf98: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1aaf9c:
    // 0x1aaf9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aaf9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aafa0:
    // 0x1aafa0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1aafa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1aafa4:
    // 0x1aafa4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aafa8:
    // 0x1aafa8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1aafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aafac:
    // 0x1aafac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1aafacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1aafb0:
    // 0x1aafb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aafb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aafb4:
    // 0x1aafb4: 0x0  nop
    ctx->pc = 0x1aafb4u;
    // NOP
label_1aafb8:
    // 0x1aafb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aafb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aafbc:
    // 0x1aafbc: 0xc04b6ee  jal         func_12DBB8
label_1aafc0:
    if (ctx->pc == 0x1AAFC0u) {
        ctx->pc = 0x1AAFC0u;
            // 0x1aafc0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1AAFC4u;
        goto label_1aafc4;
    }
    ctx->pc = 0x1AAFBCu;
    SET_GPR_U32(ctx, 31, 0x1AAFC4u);
    ctx->pc = 0x1AAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFBCu;
            // 0x1aafc0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFC4u; }
        if (ctx->pc != 0x1AAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFC4u; }
        if (ctx->pc != 0x1AAFC4u) { return; }
    }
    ctx->pc = 0x1AAFC4u;
label_1aafc4:
    // 0x1aafc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aafc8:
    // 0x1aafc8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aafc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aafcc:
    // 0x1aafcc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aafccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aafd0:
    // 0x1aafd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aafd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aafd4:
    // 0x1aafd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aafd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aafd8:
    // 0x1aafd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1aafdc:
    if (ctx->pc == 0x1AAFDCu) {
        ctx->pc = 0x1AAFDCu;
            // 0x1aafdc: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1AAFE0u;
        goto label_1aafe0;
    }
    ctx->pc = 0x1AAFD8u;
    {
        const bool branch_taken_0x1aafd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFD8u;
            // 0x1aafdc: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafd8) {
            ctx->pc = 0x1AAFE8u;
            goto label_1aafe8;
        }
    }
    ctx->pc = 0x1AAFE0u;
label_1aafe0:
    // 0x1aafe0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1aafe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1aafe4:
    // 0x1aafe4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1aafe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1aafe8:
    // 0x1aafe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aafec:
    // 0x1aafec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aaff0:
    // 0x1aaff0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1aaff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aaff4:
    // 0x1aaff4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aaff4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1aaff8:
    // 0x1aaff8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aaff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aaffc:
    // 0x1aaffc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1ab000:
    if (ctx->pc == 0x1AB000u) {
        ctx->pc = 0x1AB000u;
            // 0x1ab000: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1AB004u;
        goto label_1ab004;
    }
    ctx->pc = 0x1AAFFCu;
    {
        const bool branch_taken_0x1aaffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFFCu;
            // 0x1ab000: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaffc) {
            ctx->pc = 0x1AB010u;
            goto label_1ab010;
        }
    }
    ctx->pc = 0x1AB004u;
label_1ab004:
    // 0x1ab004: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ab004u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ab008:
    // 0x1ab008: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1ab008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1ab00c:
    // 0x1ab00c: 0x0  nop
    ctx->pc = 0x1ab00cu;
    // NOP
label_1ab010:
    // 0x1ab010: 0xc065d00  jal         func_197400
label_1ab014:
    if (ctx->pc == 0x1AB014u) {
        ctx->pc = 0x1AB018u;
        goto label_1ab018;
    }
    ctx->pc = 0x1AB010u;
    SET_GPR_U32(ctx, 31, 0x1AB018u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB018u; }
        if (ctx->pc != 0x1AB018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB018u; }
        if (ctx->pc != 0x1AB018u) { return; }
    }
    ctx->pc = 0x1AB018u;
label_1ab018:
    // 0x1ab018: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab01c:
    // 0x1ab01c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1ab020:
    if (ctx->pc == 0x1AB020u) {
        ctx->pc = 0x1AB024u;
        goto label_1ab024;
    }
    ctx->pc = 0x1AB01Cu;
    {
        const bool branch_taken_0x1ab01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab01c) {
            ctx->pc = 0x1AB048u;
            goto label_1ab048;
        }
    }
    ctx->pc = 0x1AB024u;
label_1ab024:
    // 0x1ab024: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab028:
    // 0x1ab028: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ab028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ab02c:
    // 0x1ab02c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1ab030:
    if (ctx->pc == 0x1AB030u) {
        ctx->pc = 0x1AB034u;
        goto label_1ab034;
    }
    ctx->pc = 0x1AB02Cu;
    {
        const bool branch_taken_0x1ab02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab02c) {
            ctx->pc = 0x1AB048u;
            goto label_1ab048;
        }
    }
    ctx->pc = 0x1AB034u;
label_1ab034:
    // 0x1ab034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab038:
    // 0x1ab038: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab03c:
    // 0x1ab03c: 0xc0655b0  jal         func_1956C0
label_1ab040:
    if (ctx->pc == 0x1AB040u) {
        ctx->pc = 0x1AB040u;
            // 0x1ab040: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB044u;
        goto label_1ab044;
    }
    ctx->pc = 0x1AB03Cu;
    SET_GPR_U32(ctx, 31, 0x1AB044u);
    ctx->pc = 0x1AB040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB03Cu;
            // 0x1ab040: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB044u; }
        if (ctx->pc != 0x1AB044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB044u; }
        if (ctx->pc != 0x1AB044u) { return; }
    }
    ctx->pc = 0x1AB044u;
label_1ab044:
    // 0x1ab044: 0x0  nop
    ctx->pc = 0x1ab044u;
    // NOP
label_1ab048:
    // 0x1ab048: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab04c:
    // 0x1ab04c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ab04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ab050:
    // 0x1ab050: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab054:
    if (ctx->pc == 0x1AB054u) {
        ctx->pc = 0x1AB058u;
        goto label_1ab058;
    }
    ctx->pc = 0x1AB050u;
    {
        const bool branch_taken_0x1ab050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab050) {
            ctx->pc = 0x1AB068u;
            goto label_1ab068;
        }
    }
    ctx->pc = 0x1AB058u;
label_1ab058:
    // 0x1ab058: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab05c:
    // 0x1ab05c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab060:
    // 0x1ab060: 0xc0655b0  jal         func_1956C0
label_1ab064:
    if (ctx->pc == 0x1AB064u) {
        ctx->pc = 0x1AB064u;
            // 0x1ab064: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB068u;
        goto label_1ab068;
    }
    ctx->pc = 0x1AB060u;
    SET_GPR_U32(ctx, 31, 0x1AB068u);
    ctx->pc = 0x1AB064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB060u;
            // 0x1ab064: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB068u; }
        if (ctx->pc != 0x1AB068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB068u; }
        if (ctx->pc != 0x1AB068u) { return; }
    }
    ctx->pc = 0x1AB068u;
label_1ab068:
    // 0x1ab068: 0xc065d00  jal         func_197400
label_1ab06c:
    if (ctx->pc == 0x1AB06Cu) {
        ctx->pc = 0x1AB070u;
        goto label_1ab070;
    }
    ctx->pc = 0x1AB068u;
    SET_GPR_U32(ctx, 31, 0x1AB070u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB070u; }
        if (ctx->pc != 0x1AB070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB070u; }
        if (ctx->pc != 0x1AB070u) { return; }
    }
    ctx->pc = 0x1AB070u;
label_1ab070:
    // 0x1ab070: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1ab070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ab074:
    // 0x1ab074: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1ab078:
    if (ctx->pc == 0x1AB078u) {
        ctx->pc = 0x1AB07Cu;
        goto label_1ab07c;
    }
    ctx->pc = 0x1AB074u;
    {
        const bool branch_taken_0x1ab074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab074) {
            ctx->pc = 0x1AB0A0u;
            goto label_1ab0a0;
        }
    }
    ctx->pc = 0x1AB07Cu;
label_1ab07c:
    // 0x1ab07c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab080:
    // 0x1ab080: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ab080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1ab084:
    // 0x1ab084: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1ab088:
    if (ctx->pc == 0x1AB088u) {
        ctx->pc = 0x1AB08Cu;
        goto label_1ab08c;
    }
    ctx->pc = 0x1AB084u;
    {
        const bool branch_taken_0x1ab084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab084) {
            ctx->pc = 0x1AB0A0u;
            goto label_1ab0a0;
        }
    }
    ctx->pc = 0x1AB08Cu;
label_1ab08c:
    // 0x1ab08c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab090:
    // 0x1ab090: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab094:
    // 0x1ab094: 0xc0655b0  jal         func_1956C0
label_1ab098:
    if (ctx->pc == 0x1AB098u) {
        ctx->pc = 0x1AB098u;
            // 0x1ab098: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB09Cu;
        goto label_1ab09c;
    }
    ctx->pc = 0x1AB094u;
    SET_GPR_U32(ctx, 31, 0x1AB09Cu);
    ctx->pc = 0x1AB098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB094u;
            // 0x1ab098: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB09Cu; }
        if (ctx->pc != 0x1AB09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB09Cu; }
        if (ctx->pc != 0x1AB09Cu) { return; }
    }
    ctx->pc = 0x1AB09Cu;
label_1ab09c:
    // 0x1ab09c: 0x0  nop
    ctx->pc = 0x1ab09cu;
    // NOP
label_1ab0a0:
    // 0x1ab0a0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab0a4:
    // 0x1ab0a4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1ab0a8:
    // 0x1ab0a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab0ac:
    if (ctx->pc == 0x1AB0ACu) {
        ctx->pc = 0x1AB0B0u;
        goto label_1ab0b0;
    }
    ctx->pc = 0x1AB0A8u;
    {
        const bool branch_taken_0x1ab0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab0a8) {
            ctx->pc = 0x1AB0C0u;
            goto label_1ab0c0;
        }
    }
    ctx->pc = 0x1AB0B0u;
label_1ab0b0:
    // 0x1ab0b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab0b4:
    // 0x1ab0b4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab0b8:
    // 0x1ab0b8: 0xc0655b0  jal         func_1956C0
label_1ab0bc:
    if (ctx->pc == 0x1AB0BCu) {
        ctx->pc = 0x1AB0BCu;
            // 0x1ab0bc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB0C0u;
        goto label_1ab0c0;
    }
    ctx->pc = 0x1AB0B8u;
    SET_GPR_U32(ctx, 31, 0x1AB0C0u);
    ctx->pc = 0x1AB0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0B8u;
            // 0x1ab0bc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0C0u; }
        if (ctx->pc != 0x1AB0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0C0u; }
        if (ctx->pc != 0x1AB0C0u) { return; }
    }
    ctx->pc = 0x1AB0C0u;
label_1ab0c0:
    // 0x1ab0c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ab0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab0c4:
    // 0x1ab0c4: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
label_1ab0c8:
    // 0x1ab0c8: 0x142000a3  bnez        $at, . + 4 + (0xA3 << 2)
label_1ab0cc:
    if (ctx->pc == 0x1AB0CCu) {
        ctx->pc = 0x1AB0CCu;
            // 0x1ab0cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AB0D0u;
        goto label_1ab0d0;
    }
    ctx->pc = 0x1AB0C8u;
    {
        const bool branch_taken_0x1ab0c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0C8u;
            // 0x1ab0cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0c8) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB0D0u;
label_1ab0d0:
    // 0x1ab0d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ab0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ab0d4:
    // 0x1ab0d4: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1ab0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1ab0d8:
    // 0x1ab0d8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ab0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1ab0dc:
    // 0x1ab0dc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ab0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ab0e0:
    // 0x1ab0e0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1ab0e4:
    if (ctx->pc == 0x1AB0E4u) {
        ctx->pc = 0x1AB0E8u;
        goto label_1ab0e8;
    }
    ctx->pc = 0x1AB0E0u;
    {
        const bool branch_taken_0x1ab0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab0e0) {
            ctx->pc = 0x1AB118u;
            goto label_1ab118;
        }
    }
    ctx->pc = 0x1AB0E8u;
label_1ab0e8:
    // 0x1ab0e8: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x1ab0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
label_1ab0ec:
    // 0x1ab0ec: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1ab0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_1ab0f0:
    // 0x1ab0f0: 0x3464c28f  ori         $a0, $v1, 0xC28F
    ctx->pc = 0x1ab0f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
label_1ab0f4:
    // 0x1ab0f4: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x1ab0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
label_1ab0f8:
    // 0x1ab0f8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1ab0f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ab0fc:
    // 0x1ab0fc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1ab0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1ab100:
    // 0x1ab100: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1ab100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
label_1ab104:
    // 0x1ab104: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1ab104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_1ab108:
    // 0x1ab108: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1ab108u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1ab10c:
    // 0x1ab10c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ab10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1ab110:
    // 0x1ab110: 0x10000091  b           . + 4 + (0x91 << 2)
label_1ab114:
    if (ctx->pc == 0x1AB114u) {
        ctx->pc = 0x1AB114u;
            // 0x1ab114: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB118u;
        goto label_1ab118;
    }
    ctx->pc = 0x1AB110u;
    {
        const bool branch_taken_0x1ab110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB110u;
            // 0x1ab114: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab110) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB118u;
label_1ab118:
    // 0x1ab118: 0x3c02bd75  lui         $v0, 0xBD75
    ctx->pc = 0x1ab118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48501 << 16));
label_1ab11c:
    // 0x1ab11c: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1ab11cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1ab120:
    // 0x1ab120: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1ab120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1ab124:
    // 0x1ab124: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ab124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ab128:
    // 0x1ab128: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1ab128u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ab12c:
    // 0x1ab12c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1ab12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1ab130:
    // 0x1ab130: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1ab130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
label_1ab134:
    // 0x1ab134: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1ab134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_1ab138:
    // 0x1ab138: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1ab138u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1ab13c:
    // 0x1ab13c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1ab13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1ab140:
    // 0x1ab140: 0x10000085  b           . + 4 + (0x85 << 2)
label_1ab144:
    if (ctx->pc == 0x1AB144u) {
        ctx->pc = 0x1AB144u;
            // 0x1ab144: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB148u;
        goto label_1ab148;
    }
    ctx->pc = 0x1AB140u;
    {
        const bool branch_taken_0x1ab140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB140u;
            // 0x1ab144: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab140) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB148u;
label_1ab148:
    // 0x1ab148: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab14c:
    // 0x1ab14c: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
label_1ab150:
    if (ctx->pc == 0x1AB150u) {
        ctx->pc = 0x1AB154u;
        goto label_1ab154;
    }
    ctx->pc = 0x1AB14Cu;
    {
        const bool branch_taken_0x1ab14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab14c) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB154u;
label_1ab154:
    // 0x1ab154: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ab154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab158:
    // 0x1ab158: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x1ab158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
label_1ab15c:
    // 0x1ab15c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1ab15cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ab160:
    // 0x1ab160: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ab160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ab164:
    // 0x1ab164: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1ab164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1ab168:
    // 0x1ab168: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ab168u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ab16c:
    // 0x1ab16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ab16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab170:
    // 0x1ab170: 0x0  nop
    ctx->pc = 0x1ab170u;
    // NOP
label_1ab174:
    // 0x1ab174: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ab174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ab178:
    // 0x1ab178: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ab178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ab17c:
    // 0x1ab17c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ab17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab180:
    // 0x1ab180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ab180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ab184:
    // 0x1ab184: 0xc065d00  jal         func_197400
label_1ab188:
    if (ctx->pc == 0x1AB188u) {
        ctx->pc = 0x1AB188u;
            // 0x1ab188: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AB18Cu;
        goto label_1ab18c;
    }
    ctx->pc = 0x1AB184u;
    SET_GPR_U32(ctx, 31, 0x1AB18Cu);
    ctx->pc = 0x1AB188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB184u;
            // 0x1ab188: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB18Cu; }
        if (ctx->pc != 0x1AB18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB18Cu; }
        if (ctx->pc != 0x1AB18Cu) { return; }
    }
    ctx->pc = 0x1AB18Cu;
label_1ab18c:
    // 0x1ab18c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab190:
    // 0x1ab190: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1ab194:
    if (ctx->pc == 0x1AB194u) {
        ctx->pc = 0x1AB198u;
        goto label_1ab198;
    }
    ctx->pc = 0x1AB190u;
    {
        const bool branch_taken_0x1ab190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab190) {
            ctx->pc = 0x1AB1B8u;
            goto label_1ab1b8;
        }
    }
    ctx->pc = 0x1AB198u;
label_1ab198:
    // 0x1ab198: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab19c:
    // 0x1ab19c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ab1a0:
    // 0x1ab1a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab1a4:
    if (ctx->pc == 0x1AB1A4u) {
        ctx->pc = 0x1AB1A8u;
        goto label_1ab1a8;
    }
    ctx->pc = 0x1AB1A0u;
    {
        const bool branch_taken_0x1ab1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab1a0) {
            ctx->pc = 0x1AB1B8u;
            goto label_1ab1b8;
        }
    }
    ctx->pc = 0x1AB1A8u;
label_1ab1a8:
    // 0x1ab1a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab1ac:
    // 0x1ab1ac: 0xc06560c  jal         func_195830
label_1ab1b0:
    if (ctx->pc == 0x1AB1B0u) {
        ctx->pc = 0x1AB1B0u;
            // 0x1ab1b0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB1B4u;
        goto label_1ab1b4;
    }
    ctx->pc = 0x1AB1ACu;
    SET_GPR_U32(ctx, 31, 0x1AB1B4u);
    ctx->pc = 0x1AB1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1ACu;
            // 0x1ab1b0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1B4u; }
        if (ctx->pc != 0x1AB1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1B4u; }
        if (ctx->pc != 0x1AB1B4u) { return; }
    }
    ctx->pc = 0x1AB1B4u;
label_1ab1b4:
    // 0x1ab1b4: 0x0  nop
    ctx->pc = 0x1ab1b4u;
    // NOP
label_1ab1b8:
    // 0x1ab1b8: 0xc065d00  jal         func_197400
label_1ab1bc:
    if (ctx->pc == 0x1AB1BCu) {
        ctx->pc = 0x1AB1C0u;
        goto label_1ab1c0;
    }
    ctx->pc = 0x1AB1B8u;
    SET_GPR_U32(ctx, 31, 0x1AB1C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1C0u; }
        if (ctx->pc != 0x1AB1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1C0u; }
        if (ctx->pc != 0x1AB1C0u) { return; }
    }
    ctx->pc = 0x1AB1C0u;
label_1ab1c0:
    // 0x1ab1c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab1c4:
    // 0x1ab1c4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1ab1c8:
    if (ctx->pc == 0x1AB1C8u) {
        ctx->pc = 0x1AB1CCu;
        goto label_1ab1cc;
    }
    ctx->pc = 0x1AB1C4u;
    {
        const bool branch_taken_0x1ab1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab1c4) {
            ctx->pc = 0x1AB1E8u;
            goto label_1ab1e8;
        }
    }
    ctx->pc = 0x1AB1CCu;
label_1ab1cc:
    // 0x1ab1cc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab1d0:
    // 0x1ab1d0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1ab1d4:
    // 0x1ab1d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ab1d8:
    if (ctx->pc == 0x1AB1D8u) {
        ctx->pc = 0x1AB1DCu;
        goto label_1ab1dc;
    }
    ctx->pc = 0x1AB1D4u;
    {
        const bool branch_taken_0x1ab1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab1d4) {
            ctx->pc = 0x1AB1E8u;
            goto label_1ab1e8;
        }
    }
    ctx->pc = 0x1AB1DCu;
label_1ab1dc:
    // 0x1ab1dc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab1e0:
    // 0x1ab1e0: 0xc06560c  jal         func_195830
label_1ab1e4:
    if (ctx->pc == 0x1AB1E4u) {
        ctx->pc = 0x1AB1E4u;
            // 0x1ab1e4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB1E8u;
        goto label_1ab1e8;
    }
    ctx->pc = 0x1AB1E0u;
    SET_GPR_U32(ctx, 31, 0x1AB1E8u);
    ctx->pc = 0x1AB1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1E0u;
            // 0x1ab1e4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1E8u; }
        if (ctx->pc != 0x1AB1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1E8u; }
        if (ctx->pc != 0x1AB1E8u) { return; }
    }
    ctx->pc = 0x1AB1E8u;
label_1ab1e8:
    // 0x1ab1e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab1ec:
    // 0x1ab1ec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ab1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ab1f0:
    // 0x1ab1f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab1f4:
    if (ctx->pc == 0x1AB1F4u) {
        ctx->pc = 0x1AB1F8u;
        goto label_1ab1f8;
    }
    ctx->pc = 0x1AB1F0u;
    {
        const bool branch_taken_0x1ab1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab1f0) {
            ctx->pc = 0x1AB208u;
            goto label_1ab208;
        }
    }
    ctx->pc = 0x1AB1F8u;
label_1ab1f8:
    // 0x1ab1f8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab1fc:
    // 0x1ab1fc: 0xc06560c  jal         func_195830
label_1ab200:
    if (ctx->pc == 0x1AB200u) {
        ctx->pc = 0x1AB200u;
            // 0x1ab200: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB204u;
        goto label_1ab204;
    }
    ctx->pc = 0x1AB1FCu;
    SET_GPR_U32(ctx, 31, 0x1AB204u);
    ctx->pc = 0x1AB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1FCu;
            // 0x1ab200: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB204u; }
        if (ctx->pc != 0x1AB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB204u; }
        if (ctx->pc != 0x1AB204u) { return; }
    }
    ctx->pc = 0x1AB204u;
label_1ab204:
    // 0x1ab204: 0x0  nop
    ctx->pc = 0x1ab204u;
    // NOP
label_1ab208:
    // 0x1ab208: 0xc065d00  jal         func_197400
label_1ab20c:
    if (ctx->pc == 0x1AB20Cu) {
        ctx->pc = 0x1AB210u;
        goto label_1ab210;
    }
    ctx->pc = 0x1AB208u;
    SET_GPR_U32(ctx, 31, 0x1AB210u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB210u; }
        if (ctx->pc != 0x1AB210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB210u; }
        if (ctx->pc != 0x1AB210u) { return; }
    }
    ctx->pc = 0x1AB210u;
label_1ab210:
    // 0x1ab210: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1ab210u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ab214:
    // 0x1ab214: 0x14200050  bnez        $at, . + 4 + (0x50 << 2)
label_1ab218:
    if (ctx->pc == 0x1AB218u) {
        ctx->pc = 0x1AB21Cu;
        goto label_1ab21c;
    }
    ctx->pc = 0x1AB214u;
    {
        const bool branch_taken_0x1ab214 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab214) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB21Cu;
label_1ab21c:
    // 0x1ab21c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab220:
    // 0x1ab220: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1ab224:
    // 0x1ab224: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_1ab228:
    if (ctx->pc == 0x1AB228u) {
        ctx->pc = 0x1AB22Cu;
        goto label_1ab22c;
    }
    ctx->pc = 0x1AB224u;
    {
        const bool branch_taken_0x1ab224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab224) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB22Cu;
label_1ab22c:
    // 0x1ab22c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab230:
    // 0x1ab230: 0xc06560c  jal         func_195830
label_1ab234:
    if (ctx->pc == 0x1AB234u) {
        ctx->pc = 0x1AB234u;
            // 0x1ab234: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB238u;
        goto label_1ab238;
    }
    ctx->pc = 0x1AB230u;
    SET_GPR_U32(ctx, 31, 0x1AB238u);
    ctx->pc = 0x1AB234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB230u;
            // 0x1ab234: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB238u; }
        if (ctx->pc != 0x1AB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB238u; }
        if (ctx->pc != 0x1AB238u) { return; }
    }
    ctx->pc = 0x1AB238u;
label_1ab238:
    // 0x1ab238: 0x10000047  b           . + 4 + (0x47 << 2)
label_1ab23c:
    if (ctx->pc == 0x1AB23Cu) {
        ctx->pc = 0x1AB240u;
        goto label_1ab240;
    }
    ctx->pc = 0x1AB238u;
    {
        const bool branch_taken_0x1ab238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab238) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB240u;
label_1ab240:
    // 0x1ab240: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1ab244:
    // 0x1ab244: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ab244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab248:
    // 0x1ab248: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1ab248u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1ab24c:
    // 0x1ab24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab250:
    // 0x1ab250: 0x0  nop
    ctx->pc = 0x1ab250u;
    // NOP
label_1ab254:
    // 0x1ab254: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ab254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ab258:
    // 0x1ab258: 0xc065d00  jal         func_197400
label_1ab25c:
    if (ctx->pc == 0x1AB25Cu) {
        ctx->pc = 0x1AB25Cu;
            // 0x1ab25c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AB260u;
        goto label_1ab260;
    }
    ctx->pc = 0x1AB258u;
    SET_GPR_U32(ctx, 31, 0x1AB260u);
    ctx->pc = 0x1AB25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB258u;
            // 0x1ab25c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB260u; }
        if (ctx->pc != 0x1AB260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB260u; }
        if (ctx->pc != 0x1AB260u) { return; }
    }
    ctx->pc = 0x1AB260u;
label_1ab260:
    // 0x1ab260: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab264:
    // 0x1ab264: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1ab268:
    if (ctx->pc == 0x1AB268u) {
        ctx->pc = 0x1AB26Cu;
        goto label_1ab26c;
    }
    ctx->pc = 0x1AB264u;
    {
        const bool branch_taken_0x1ab264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab264) {
            ctx->pc = 0x1AB288u;
            goto label_1ab288;
        }
    }
    ctx->pc = 0x1AB26Cu;
label_1ab26c:
    // 0x1ab26c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab270:
    // 0x1ab270: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ab270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ab274:
    // 0x1ab274: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ab278:
    if (ctx->pc == 0x1AB278u) {
        ctx->pc = 0x1AB27Cu;
        goto label_1ab27c;
    }
    ctx->pc = 0x1AB274u;
    {
        const bool branch_taken_0x1ab274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab274) {
            ctx->pc = 0x1AB288u;
            goto label_1ab288;
        }
    }
    ctx->pc = 0x1AB27Cu;
label_1ab27c:
    // 0x1ab27c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab280:
    // 0x1ab280: 0xc06560c  jal         func_195830
label_1ab284:
    if (ctx->pc == 0x1AB284u) {
        ctx->pc = 0x1AB284u;
            // 0x1ab284: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB288u;
        goto label_1ab288;
    }
    ctx->pc = 0x1AB280u;
    SET_GPR_U32(ctx, 31, 0x1AB288u);
    ctx->pc = 0x1AB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB280u;
            // 0x1ab284: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB288u; }
        if (ctx->pc != 0x1AB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB288u; }
        if (ctx->pc != 0x1AB288u) { return; }
    }
    ctx->pc = 0x1AB288u;
label_1ab288:
    // 0x1ab288: 0xc065d00  jal         func_197400
label_1ab28c:
    if (ctx->pc == 0x1AB28Cu) {
        ctx->pc = 0x1AB290u;
        goto label_1ab290;
    }
    ctx->pc = 0x1AB288u;
    SET_GPR_U32(ctx, 31, 0x1AB290u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB290u; }
        if (ctx->pc != 0x1AB290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB290u; }
        if (ctx->pc != 0x1AB290u) { return; }
    }
    ctx->pc = 0x1AB290u;
label_1ab290:
    // 0x1ab290: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1ab294:
    if (ctx->pc == 0x1AB294u) {
        ctx->pc = 0x1AB298u;
        goto label_1ab298;
    }
    ctx->pc = 0x1AB290u;
    {
        const bool branch_taken_0x1ab290 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ab290) {
            ctx->pc = 0x1AB2B8u;
            goto label_1ab2b8;
        }
    }
    ctx->pc = 0x1AB298u;
label_1ab298:
    // 0x1ab298: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab29c:
    // 0x1ab29c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1ab29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1ab2a0:
    // 0x1ab2a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab2a4:
    if (ctx->pc == 0x1AB2A4u) {
        ctx->pc = 0x1AB2A8u;
        goto label_1ab2a8;
    }
    ctx->pc = 0x1AB2A0u;
    {
        const bool branch_taken_0x1ab2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab2a0) {
            ctx->pc = 0x1AB2B8u;
            goto label_1ab2b8;
        }
    }
    ctx->pc = 0x1AB2A8u;
label_1ab2a8:
    // 0x1ab2a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab2ac:
    // 0x1ab2ac: 0xc06560c  jal         func_195830
label_1ab2b0:
    if (ctx->pc == 0x1AB2B0u) {
        ctx->pc = 0x1AB2B0u;
            // 0x1ab2b0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB2B4u;
        goto label_1ab2b4;
    }
    ctx->pc = 0x1AB2ACu;
    SET_GPR_U32(ctx, 31, 0x1AB2B4u);
    ctx->pc = 0x1AB2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2ACu;
            // 0x1ab2b0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2B4u; }
        if (ctx->pc != 0x1AB2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2B4u; }
        if (ctx->pc != 0x1AB2B4u) { return; }
    }
    ctx->pc = 0x1AB2B4u;
label_1ab2b4:
    // 0x1ab2b4: 0x0  nop
    ctx->pc = 0x1ab2b4u;
    // NOP
label_1ab2b8:
    // 0x1ab2b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab2bc:
    // 0x1ab2bc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ab2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1ab2c0:
    // 0x1ab2c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab2c4:
    if (ctx->pc == 0x1AB2C4u) {
        ctx->pc = 0x1AB2C8u;
        goto label_1ab2c8;
    }
    ctx->pc = 0x1AB2C0u;
    {
        const bool branch_taken_0x1ab2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab2c0) {
            ctx->pc = 0x1AB2D8u;
            goto label_1ab2d8;
        }
    }
    ctx->pc = 0x1AB2C8u;
label_1ab2c8:
    // 0x1ab2c8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab2cc:
    // 0x1ab2cc: 0xc06560c  jal         func_195830
label_1ab2d0:
    if (ctx->pc == 0x1AB2D0u) {
        ctx->pc = 0x1AB2D0u;
            // 0x1ab2d0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB2D4u;
        goto label_1ab2d4;
    }
    ctx->pc = 0x1AB2CCu;
    SET_GPR_U32(ctx, 31, 0x1AB2D4u);
    ctx->pc = 0x1AB2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2CCu;
            // 0x1ab2d0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2D4u; }
        if (ctx->pc != 0x1AB2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2D4u; }
        if (ctx->pc != 0x1AB2D4u) { return; }
    }
    ctx->pc = 0x1AB2D4u;
label_1ab2d4:
    // 0x1ab2d4: 0x0  nop
    ctx->pc = 0x1ab2d4u;
    // NOP
label_1ab2d8:
    // 0x1ab2d8: 0xc065d00  jal         func_197400
label_1ab2dc:
    if (ctx->pc == 0x1AB2DCu) {
        ctx->pc = 0x1AB2E0u;
        goto label_1ab2e0;
    }
    ctx->pc = 0x1AB2D8u;
    SET_GPR_U32(ctx, 31, 0x1AB2E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2E0u; }
        if (ctx->pc != 0x1AB2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2E0u; }
        if (ctx->pc != 0x1AB2E0u) { return; }
    }
    ctx->pc = 0x1AB2E0u;
label_1ab2e0:
    // 0x1ab2e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab2e4:
    // 0x1ab2e4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1ab2e8:
    if (ctx->pc == 0x1AB2E8u) {
        ctx->pc = 0x1AB2ECu;
        goto label_1ab2ec;
    }
    ctx->pc = 0x1AB2E4u;
    {
        const bool branch_taken_0x1ab2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ab2e4) {
            ctx->pc = 0x1AB308u;
            goto label_1ab308;
        }
    }
    ctx->pc = 0x1AB2ECu;
label_1ab2ec:
    // 0x1ab2ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab2f0:
    // 0x1ab2f0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1ab2f4:
    // 0x1ab2f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ab2f8:
    if (ctx->pc == 0x1AB2F8u) {
        ctx->pc = 0x1AB2FCu;
        goto label_1ab2fc;
    }
    ctx->pc = 0x1AB2F4u;
    {
        const bool branch_taken_0x1ab2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab2f4) {
            ctx->pc = 0x1AB308u;
            goto label_1ab308;
        }
    }
    ctx->pc = 0x1AB2FCu;
label_1ab2fc:
    // 0x1ab2fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab300:
    // 0x1ab300: 0xc06560c  jal         func_195830
label_1ab304:
    if (ctx->pc == 0x1AB304u) {
        ctx->pc = 0x1AB304u;
            // 0x1ab304: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB308u;
        goto label_1ab308;
    }
    ctx->pc = 0x1AB300u;
    SET_GPR_U32(ctx, 31, 0x1AB308u);
    ctx->pc = 0x1AB304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB300u;
            // 0x1ab304: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB308u; }
        if (ctx->pc != 0x1AB308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB308u; }
        if (ctx->pc != 0x1AB308u) { return; }
    }
    ctx->pc = 0x1AB308u;
label_1ab308:
    // 0x1ab308: 0xc065d00  jal         func_197400
label_1ab30c:
    if (ctx->pc == 0x1AB30Cu) {
        ctx->pc = 0x1AB310u;
        goto label_1ab310;
    }
    ctx->pc = 0x1AB308u;
    SET_GPR_U32(ctx, 31, 0x1AB310u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB310u; }
        if (ctx->pc != 0x1AB310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB310u; }
        if (ctx->pc != 0x1AB310u) { return; }
    }
    ctx->pc = 0x1AB310u;
label_1ab310:
    // 0x1ab310: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1ab314:
    if (ctx->pc == 0x1AB314u) {
        ctx->pc = 0x1AB318u;
        goto label_1ab318;
    }
    ctx->pc = 0x1AB310u;
    {
        const bool branch_taken_0x1ab310 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ab310) {
            ctx->pc = 0x1AB338u;
            goto label_1ab338;
        }
    }
    ctx->pc = 0x1AB318u;
label_1ab318:
    // 0x1ab318: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab31c:
    // 0x1ab31c: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1ab31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1ab320:
    // 0x1ab320: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab324:
    if (ctx->pc == 0x1AB324u) {
        ctx->pc = 0x1AB328u;
        goto label_1ab328;
    }
    ctx->pc = 0x1AB320u;
    {
        const bool branch_taken_0x1ab320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab320) {
            ctx->pc = 0x1AB338u;
            goto label_1ab338;
        }
    }
    ctx->pc = 0x1AB328u;
label_1ab328:
    // 0x1ab328: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab32c:
    // 0x1ab32c: 0xc06560c  jal         func_195830
label_1ab330:
    if (ctx->pc == 0x1AB330u) {
        ctx->pc = 0x1AB330u;
            // 0x1ab330: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB334u;
        goto label_1ab334;
    }
    ctx->pc = 0x1AB32Cu;
    SET_GPR_U32(ctx, 31, 0x1AB334u);
    ctx->pc = 0x1AB330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB32Cu;
            // 0x1ab330: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB334u; }
        if (ctx->pc != 0x1AB334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB334u; }
        if (ctx->pc != 0x1AB334u) { return; }
    }
    ctx->pc = 0x1AB334u;
label_1ab334:
    // 0x1ab334: 0x0  nop
    ctx->pc = 0x1ab334u;
    // NOP
label_1ab338:
    // 0x1ab338: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ab338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab33c:
    // 0x1ab33c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ab33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1ab340:
    // 0x1ab340: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ab344:
    if (ctx->pc == 0x1AB344u) {
        ctx->pc = 0x1AB348u;
        goto label_1ab348;
    }
    ctx->pc = 0x1AB340u;
    {
        const bool branch_taken_0x1ab340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab340) {
            ctx->pc = 0x1AB358u;
            goto label_1ab358;
        }
    }
    ctx->pc = 0x1AB348u;
label_1ab348:
    // 0x1ab348: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1ab348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab34c:
    // 0x1ab34c: 0xc06560c  jal         func_195830
label_1ab350:
    if (ctx->pc == 0x1AB350u) {
        ctx->pc = 0x1AB350u;
            // 0x1ab350: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1AB354u;
        goto label_1ab354;
    }
    ctx->pc = 0x1AB34Cu;
    SET_GPR_U32(ctx, 31, 0x1AB354u);
    ctx->pc = 0x1AB350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB34Cu;
            // 0x1ab350: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB354u; }
        if (ctx->pc != 0x1AB354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB354u; }
        if (ctx->pc != 0x1AB354u) { return; }
    }
    ctx->pc = 0x1AB354u;
label_1ab354:
    // 0x1ab354: 0x0  nop
    ctx->pc = 0x1ab354u;
    // NOP
label_1ab358:
    // 0x1ab358: 0xc04b788  jal         func_12DE20
label_1ab35c:
    if (ctx->pc == 0x1AB35Cu) {
        ctx->pc = 0x1AB35Cu;
            // 0x1ab35c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AB360u;
        goto label_1ab360;
    }
    ctx->pc = 0x1AB358u;
    SET_GPR_U32(ctx, 31, 0x1AB360u);
    ctx->pc = 0x1AB35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB358u;
            // 0x1ab35c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB360u; }
        if (ctx->pc != 0x1AB360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB360u; }
        if (ctx->pc != 0x1AB360u) { return; }
    }
    ctx->pc = 0x1AB360u;
label_1ab360:
    // 0x1ab360: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ab360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab364:
    // 0x1ab364: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1ab364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ab368:
    // 0x1ab368: 0xc04b7da  jal         func_12DF68
label_1ab36c:
    if (ctx->pc == 0x1AB36Cu) {
        ctx->pc = 0x1AB36Cu;
            // 0x1ab36c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB370u;
        goto label_1ab370;
    }
    ctx->pc = 0x1AB368u;
    SET_GPR_U32(ctx, 31, 0x1AB370u);
    ctx->pc = 0x1AB36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB368u;
            // 0x1ab36c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB370u; }
        if (ctx->pc != 0x1AB370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB370u; }
        if (ctx->pc != 0x1AB370u) { return; }
    }
    ctx->pc = 0x1AB370u;
label_1ab370:
    // 0x1ab370: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab374:
    // 0x1ab374: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1ab374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ab378:
    // 0x1ab378: 0xc04b804  jal         func_12E010
label_1ab37c:
    if (ctx->pc == 0x1AB37Cu) {
        ctx->pc = 0x1AB37Cu;
            // 0x1ab37c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB380u;
        goto label_1ab380;
    }
    ctx->pc = 0x1AB378u;
    SET_GPR_U32(ctx, 31, 0x1AB380u);
    ctx->pc = 0x1AB37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB378u;
            // 0x1ab37c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB380u; }
        if (ctx->pc != 0x1AB380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB380u; }
        if (ctx->pc != 0x1AB380u) { return; }
    }
    ctx->pc = 0x1AB380u;
label_1ab380:
    // 0x1ab380: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ab380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab384:
    // 0x1ab384: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1ab384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ab388:
    // 0x1ab388: 0xc04b7b0  jal         func_12DEC0
label_1ab38c:
    if (ctx->pc == 0x1AB38Cu) {
        ctx->pc = 0x1AB38Cu;
            // 0x1ab38c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB390u;
        goto label_1ab390;
    }
    ctx->pc = 0x1AB388u;
    SET_GPR_U32(ctx, 31, 0x1AB390u);
    ctx->pc = 0x1AB38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB388u;
            // 0x1ab38c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB390u; }
        if (ctx->pc != 0x1AB390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB390u; }
        if (ctx->pc != 0x1AB390u) { return; }
    }
    ctx->pc = 0x1AB390u;
label_1ab390:
    // 0x1ab390: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ab390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab394:
    // 0x1ab394: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ab394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab398:
    // 0x1ab398: 0xc04b75e  jal         func_12DD78
label_1ab39c:
    if (ctx->pc == 0x1AB39Cu) {
        ctx->pc = 0x1AB39Cu;
            // 0x1ab39c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1AB3A0u;
        goto label_1ab3a0;
    }
    ctx->pc = 0x1AB398u;
    SET_GPR_U32(ctx, 31, 0x1AB3A0u);
    ctx->pc = 0x1AB39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB398u;
            // 0x1ab39c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A0u; }
        if (ctx->pc != 0x1AB3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3A0u; }
        if (ctx->pc != 0x1AB3A0u) { return; }
    }
    ctx->pc = 0x1AB3A0u;
label_1ab3a0:
    // 0x1ab3a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ab3a4:
    // 0x1ab3a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ab3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ab3a8:
    // 0x1ab3a8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ab3a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ab3ac:
    // 0x1ab3ac: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1ab3b0:
    if (ctx->pc == 0x1AB3B0u) {
        ctx->pc = 0x1AB3B4u;
        goto label_1ab3b4;
    }
    ctx->pc = 0x1AB3ACu;
    {
        const bool branch_taken_0x1ab3ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab3ac) {
            ctx->pc = 0x1AB400u;
            goto label_1ab400;
        }
    }
    ctx->pc = 0x1AB3B4u;
label_1ab3b4:
    // 0x1ab3b4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ab3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ab3b8:
    // 0x1ab3b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ab3bc:
    if (ctx->pc == 0x1AB3BCu) {
        ctx->pc = 0x1AB3C0u;
        goto label_1ab3c0;
    }
    ctx->pc = 0x1AB3B8u;
    {
        const bool branch_taken_0x1ab3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab3b8) {
            ctx->pc = 0x1AB3D0u;
            goto label_1ab3d0;
        }
    }
    ctx->pc = 0x1AB3C0u;
label_1ab3c0:
    // 0x1ab3c0: 0xc0604f0  jal         func_1813C0
label_1ab3c4:
    if (ctx->pc == 0x1AB3C4u) {
        ctx->pc = 0x1AB3C4u;
            // 0x1ab3c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AB3C8u;
        goto label_1ab3c8;
    }
    ctx->pc = 0x1AB3C0u;
    SET_GPR_U32(ctx, 31, 0x1AB3C8u);
    ctx->pc = 0x1AB3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3C0u;
            // 0x1ab3c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3C8u; }
        if (ctx->pc != 0x1AB3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3C8u; }
        if (ctx->pc != 0x1AB3C8u) { return; }
    }
    ctx->pc = 0x1AB3C8u;
label_1ab3c8:
    // 0x1ab3c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ab3cc:
    if (ctx->pc == 0x1AB3CCu) {
        ctx->pc = 0x1AB3D0u;
        goto label_1ab3d0;
    }
    ctx->pc = 0x1AB3C8u;
    {
        const bool branch_taken_0x1ab3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab3c8) {
            ctx->pc = 0x1AB3D8u;
            goto label_1ab3d8;
        }
    }
    ctx->pc = 0x1AB3D0u;
label_1ab3d0:
    // 0x1ab3d0: 0xc0604dc  jal         func_181370
label_1ab3d4:
    if (ctx->pc == 0x1AB3D4u) {
        ctx->pc = 0x1AB3D4u;
            // 0x1ab3d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AB3D8u;
        goto label_1ab3d8;
    }
    ctx->pc = 0x1AB3D0u;
    SET_GPR_U32(ctx, 31, 0x1AB3D8u);
    ctx->pc = 0x1AB3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3D0u;
            // 0x1ab3d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D8u; }
        if (ctx->pc != 0x1AB3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D8u; }
        if (ctx->pc != 0x1AB3D8u) { return; }
    }
    ctx->pc = 0x1AB3D8u;
label_1ab3d8:
    // 0x1ab3d8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ab3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ab3dc:
    // 0x1ab3dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ab3e0:
    if (ctx->pc == 0x1AB3E0u) {
        ctx->pc = 0x1AB3E4u;
        goto label_1ab3e4;
    }
    ctx->pc = 0x1AB3DCu;
    {
        const bool branch_taken_0x1ab3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab3dc) {
            ctx->pc = 0x1AB3F0u;
            goto label_1ab3f0;
        }
    }
    ctx->pc = 0x1AB3E4u;
label_1ab3e4:
    // 0x1ab3e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ab3e8:
    if (ctx->pc == 0x1AB3E8u) {
        ctx->pc = 0x1AB3E8u;
            // 0x1ab3e8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB3ECu;
        goto label_1ab3ec;
    }
    ctx->pc = 0x1AB3E4u;
    {
        const bool branch_taken_0x1ab3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3E4u;
            // 0x1ab3e8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3e4) {
            ctx->pc = 0x1AB410u;
            goto label_1ab410;
        }
    }
    ctx->pc = 0x1AB3ECu;
label_1ab3ec:
    // 0x1ab3ec: 0x0  nop
    ctx->pc = 0x1ab3ecu;
    // NOP
label_1ab3f0:
    // 0x1ab3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab3f4:
    // 0x1ab3f4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ab3f8:
    if (ctx->pc == 0x1AB3F8u) {
        ctx->pc = 0x1AB3F8u;
            // 0x1ab3f8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB3FCu;
        goto label_1ab3fc;
    }
    ctx->pc = 0x1AB3F4u;
    {
        const bool branch_taken_0x1ab3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3F4u;
            // 0x1ab3f8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab3f4) {
            ctx->pc = 0x1AB410u;
            goto label_1ab410;
        }
    }
    ctx->pc = 0x1AB3FCu;
label_1ab3fc:
    // 0x1ab3fc: 0x0  nop
    ctx->pc = 0x1ab3fcu;
    // NOP
label_1ab400:
    // 0x1ab400: 0xc0604dc  jal         func_181370
label_1ab404:
    if (ctx->pc == 0x1AB404u) {
        ctx->pc = 0x1AB404u;
            // 0x1ab404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AB408u;
        goto label_1ab408;
    }
    ctx->pc = 0x1AB400u;
    SET_GPR_U32(ctx, 31, 0x1AB408u);
    ctx->pc = 0x1AB404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB400u;
            // 0x1ab404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB408u; }
        if (ctx->pc != 0x1AB408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB408u; }
        if (ctx->pc != 0x1AB408u) { return; }
    }
    ctx->pc = 0x1AB408u;
label_1ab408:
    // 0x1ab408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab40c:
    // 0x1ab40c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1ab40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1ab410:
    // 0x1ab410: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ab410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ab414:
    // 0x1ab414: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ab414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1ab418:
    // 0x1ab418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ab418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab41c:
    // 0x1ab41c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ab41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1ab420:
    // 0x1ab420: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1ab420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1ab424:
    // 0x1ab424: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1ab424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1ab428:
    // 0x1ab428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab42c:
    // 0x1ab42c: 0x0  nop
    ctx->pc = 0x1ab42cu;
    // NOP
label_1ab430:
    // 0x1ab430: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ab434:
    // 0x1ab434: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1ab434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1ab438:
    // 0x1ab438: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ab438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab43c:
    // 0x1ab43c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1ab43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1ab440:
    // 0x1ab440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab444:
    // 0x1ab444: 0x0  nop
    ctx->pc = 0x1ab444u;
    // NOP
label_1ab448:
    // 0x1ab448: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ab44c:
    // 0x1ab44c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1ab44cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1ab450:
    // 0x1ab450: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1ab450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1ab454:
    // 0x1ab454: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1ab458:
    // 0x1ab458: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab45c:
    // 0x1ab45c: 0x0  nop
    ctx->pc = 0x1ab45cu;
    // NOP
label_1ab460:
    // 0x1ab460: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ab464:
    // 0x1ab464: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1ab464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1ab468:
    // 0x1ab468: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ab468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1ab46c:
    // 0x1ab46c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ab46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1ab470:
    // 0x1ab470: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab474:
    // 0x1ab474: 0x0  nop
    ctx->pc = 0x1ab474u;
    // NOP
label_1ab478:
    // 0x1ab478: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ab478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ab47c:
    // 0x1ab47c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1ab47cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1ab480:
    // 0x1ab480: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ab484:
    // 0x1ab484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ab488:
    // 0x1ab488: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ab488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ab48c:
    // 0x1ab48c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ab48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab490:
    // 0x1ab490: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1ab490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab494:
    // 0x1ab494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ab494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab498:
    // 0x1ab498: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1ab49c:
    if (ctx->pc == 0x1AB49Cu) {
        ctx->pc = 0x1AB49Cu;
            // 0x1ab49c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1AB4A0u;
        goto label_1ab4a0;
    }
    ctx->pc = 0x1AB498u;
    {
        const bool branch_taken_0x1ab498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB498u;
            // 0x1ab49c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab498) {
            ctx->pc = 0x1AB4E8u;
            goto label_1ab4e8;
        }
    }
    ctx->pc = 0x1AB4A0u;
label_1ab4a0:
    // 0x1ab4a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ab4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab4a4:
    // 0x1ab4a4: 0x0  nop
    ctx->pc = 0x1ab4a4u;
    // NOP
label_1ab4a8:
    // 0x1ab4a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ab4a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab4ac:
    // 0x1ab4ac: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1ab4b0:
    if (ctx->pc == 0x1AB4B0u) {
        ctx->pc = 0x1AB4B4u;
        goto label_1ab4b4;
    }
    ctx->pc = 0x1AB4ACu;
    {
        const bool branch_taken_0x1ab4ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab4ac) {
            ctx->pc = 0x1AB4E8u;
            goto label_1ab4e8;
        }
    }
    ctx->pc = 0x1AB4B4u;
label_1ab4b4:
    // 0x1ab4b4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1ab4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab4b8:
    // 0x1ab4b8: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_1ab4bc:
    // 0x1ab4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ab4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab4c0:
    // 0x1ab4c0: 0x0  nop
    ctx->pc = 0x1ab4c0u;
    // NOP
label_1ab4c4:
    // 0x1ab4c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ab4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab4c8:
    // 0x1ab4c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ab4cc:
    if (ctx->pc == 0x1AB4CCu) {
        ctx->pc = 0x1AB4CCu;
            // 0x1ab4cc: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->pc = 0x1AB4D0u;
        goto label_1ab4d0;
    }
    ctx->pc = 0x1AB4C8u;
    {
        const bool branch_taken_0x1ab4c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4C8u;
            // 0x1ab4cc: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4c8) {
            ctx->pc = 0x1AB4E8u;
            goto label_1ab4e8;
        }
    }
    ctx->pc = 0x1AB4D0u;
label_1ab4d0:
    // 0x1ab4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ab4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ab4d4:
    // 0x1ab4d4: 0x0  nop
    ctx->pc = 0x1ab4d4u;
    // NOP
label_1ab4d8:
    // 0x1ab4d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ab4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ab4dc:
    // 0x1ab4dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1ab4e0:
    if (ctx->pc == 0x1AB4E0u) {
        ctx->pc = 0x1AB4E4u;
        goto label_1ab4e4;
    }
    ctx->pc = 0x1AB4DCu;
    {
        const bool branch_taken_0x1ab4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab4dc) {
            ctx->pc = 0x1AB500u;
            goto label_1ab500;
        }
    }
    ctx->pc = 0x1AB4E4u;
label_1ab4e4:
    // 0x1ab4e4: 0x0  nop
    ctx->pc = 0x1ab4e4u;
    // NOP
label_1ab4e8:
    // 0x1ab4e8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ab4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ab4ec:
    // 0x1ab4ec: 0x40f809  jalr        $v0
label_1ab4f0:
    if (ctx->pc == 0x1AB4F0u) {
        ctx->pc = 0x1AB4F0u;
            // 0x1ab4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB4F4u;
        goto label_1ab4f4;
    }
    ctx->pc = 0x1AB4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB4F4u);
        ctx->pc = 0x1AB4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4ECu;
            // 0x1ab4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA610u: goto label_1aa610;
            case 0x1AA614u: goto label_1aa614;
            case 0x1AA618u: goto label_1aa618;
            case 0x1AA61Cu: goto label_1aa61c;
            case 0x1AA620u: goto label_1aa620;
            case 0x1AA624u: goto label_1aa624;
            case 0x1AA628u: goto label_1aa628;
            case 0x1AA62Cu: goto label_1aa62c;
            case 0x1AA630u: goto label_1aa630;
            case 0x1AA634u: goto label_1aa634;
            case 0x1AA638u: goto label_1aa638;
            case 0x1AA63Cu: goto label_1aa63c;
            case 0x1AA640u: goto label_1aa640;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA648u: goto label_1aa648;
            case 0x1AA64Cu: goto label_1aa64c;
            case 0x1AA650u: goto label_1aa650;
            case 0x1AA654u: goto label_1aa654;
            case 0x1AA658u: goto label_1aa658;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA660u: goto label_1aa660;
            case 0x1AA664u: goto label_1aa664;
            case 0x1AA668u: goto label_1aa668;
            case 0x1AA66Cu: goto label_1aa66c;
            case 0x1AA670u: goto label_1aa670;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA678u: goto label_1aa678;
            case 0x1AA67Cu: goto label_1aa67c;
            case 0x1AA680u: goto label_1aa680;
            case 0x1AA684u: goto label_1aa684;
            case 0x1AA688u: goto label_1aa688;
            case 0x1AA68Cu: goto label_1aa68c;
            case 0x1AA690u: goto label_1aa690;
            case 0x1AA694u: goto label_1aa694;
            case 0x1AA698u: goto label_1aa698;
            case 0x1AA69Cu: goto label_1aa69c;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6A4u: goto label_1aa6a4;
            case 0x1AA6A8u: goto label_1aa6a8;
            case 0x1AA6ACu: goto label_1aa6ac;
            case 0x1AA6B0u: goto label_1aa6b0;
            case 0x1AA6B4u: goto label_1aa6b4;
            case 0x1AA6B8u: goto label_1aa6b8;
            case 0x1AA6BCu: goto label_1aa6bc;
            case 0x1AA6C0u: goto label_1aa6c0;
            case 0x1AA6C4u: goto label_1aa6c4;
            case 0x1AA6C8u: goto label_1aa6c8;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6D0u: goto label_1aa6d0;
            case 0x1AA6D4u: goto label_1aa6d4;
            case 0x1AA6D8u: goto label_1aa6d8;
            case 0x1AA6DCu: goto label_1aa6dc;
            case 0x1AA6E0u: goto label_1aa6e0;
            case 0x1AA6E4u: goto label_1aa6e4;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA6ECu: goto label_1aa6ec;
            case 0x1AA6F0u: goto label_1aa6f0;
            case 0x1AA6F4u: goto label_1aa6f4;
            case 0x1AA6F8u: goto label_1aa6f8;
            case 0x1AA6FCu: goto label_1aa6fc;
            case 0x1AA700u: goto label_1aa700;
            case 0x1AA704u: goto label_1aa704;
            case 0x1AA708u: goto label_1aa708;
            case 0x1AA70Cu: goto label_1aa70c;
            case 0x1AA710u: goto label_1aa710;
            case 0x1AA714u: goto label_1aa714;
            case 0x1AA718u: goto label_1aa718;
            case 0x1AA71Cu: goto label_1aa71c;
            case 0x1AA720u: goto label_1aa720;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA728u: goto label_1aa728;
            case 0x1AA72Cu: goto label_1aa72c;
            case 0x1AA730u: goto label_1aa730;
            case 0x1AA734u: goto label_1aa734;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA73Cu: goto label_1aa73c;
            case 0x1AA740u: goto label_1aa740;
            case 0x1AA744u: goto label_1aa744;
            case 0x1AA748u: goto label_1aa748;
            case 0x1AA74Cu: goto label_1aa74c;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA754u: goto label_1aa754;
            case 0x1AA758u: goto label_1aa758;
            case 0x1AA75Cu: goto label_1aa75c;
            case 0x1AA760u: goto label_1aa760;
            case 0x1AA764u: goto label_1aa764;
            case 0x1AA768u: goto label_1aa768;
            case 0x1AA76Cu: goto label_1aa76c;
            case 0x1AA770u: goto label_1aa770;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA778u: goto label_1aa778;
            case 0x1AA77Cu: goto label_1aa77c;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA784u: goto label_1aa784;
            case 0x1AA788u: goto label_1aa788;
            case 0x1AA78Cu: goto label_1aa78c;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA794u: goto label_1aa794;
            case 0x1AA798u: goto label_1aa798;
            case 0x1AA79Cu: goto label_1aa79c;
            case 0x1AA7A0u: goto label_1aa7a0;
            case 0x1AA7A4u: goto label_1aa7a4;
            case 0x1AA7A8u: goto label_1aa7a8;
            case 0x1AA7ACu: goto label_1aa7ac;
            case 0x1AA7B0u: goto label_1aa7b0;
            case 0x1AA7B4u: goto label_1aa7b4;
            case 0x1AA7B8u: goto label_1aa7b8;
            case 0x1AA7BCu: goto label_1aa7bc;
            case 0x1AA7C0u: goto label_1aa7c0;
            case 0x1AA7C4u: goto label_1aa7c4;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA7CCu: goto label_1aa7cc;
            case 0x1AA7D0u: goto label_1aa7d0;
            case 0x1AA7D4u: goto label_1aa7d4;
            case 0x1AA7D8u: goto label_1aa7d8;
            case 0x1AA7DCu: goto label_1aa7dc;
            case 0x1AA7E0u: goto label_1aa7e0;
            case 0x1AA7E4u: goto label_1aa7e4;
            case 0x1AA7E8u: goto label_1aa7e8;
            case 0x1AA7ECu: goto label_1aa7ec;
            case 0x1AA7F0u: goto label_1aa7f0;
            case 0x1AA7F4u: goto label_1aa7f4;
            case 0x1AA7F8u: goto label_1aa7f8;
            case 0x1AA7FCu: goto label_1aa7fc;
            case 0x1AA800u: goto label_1aa800;
            case 0x1AA804u: goto label_1aa804;
            case 0x1AA808u: goto label_1aa808;
            case 0x1AA80Cu: goto label_1aa80c;
            case 0x1AA810u: goto label_1aa810;
            case 0x1AA814u: goto label_1aa814;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA81Cu: goto label_1aa81c;
            case 0x1AA820u: goto label_1aa820;
            case 0x1AA824u: goto label_1aa824;
            case 0x1AA828u: goto label_1aa828;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA830u: goto label_1aa830;
            case 0x1AA834u: goto label_1aa834;
            case 0x1AA838u: goto label_1aa838;
            case 0x1AA83Cu: goto label_1aa83c;
            case 0x1AA840u: goto label_1aa840;
            case 0x1AA844u: goto label_1aa844;
            case 0x1AA848u: goto label_1aa848;
            case 0x1AA84Cu: goto label_1aa84c;
            case 0x1AA850u: goto label_1aa850;
            case 0x1AA854u: goto label_1aa854;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA85Cu: goto label_1aa85c;
            case 0x1AA860u: goto label_1aa860;
            case 0x1AA864u: goto label_1aa864;
            case 0x1AA868u: goto label_1aa868;
            case 0x1AA86Cu: goto label_1aa86c;
            case 0x1AA870u: goto label_1aa870;
            case 0x1AA874u: goto label_1aa874;
            case 0x1AA878u: goto label_1aa878;
            case 0x1AA87Cu: goto label_1aa87c;
            case 0x1AA880u: goto label_1aa880;
            case 0x1AA884u: goto label_1aa884;
            case 0x1AA888u: goto label_1aa888;
            case 0x1AA88Cu: goto label_1aa88c;
            case 0x1AA890u: goto label_1aa890;
            case 0x1AA894u: goto label_1aa894;
            case 0x1AA898u: goto label_1aa898;
            case 0x1AA89Cu: goto label_1aa89c;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8A4u: goto label_1aa8a4;
            case 0x1AA8A8u: goto label_1aa8a8;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA8B4u: goto label_1aa8b4;
            case 0x1AA8B8u: goto label_1aa8b8;
            case 0x1AA8BCu: goto label_1aa8bc;
            case 0x1AA8C0u: goto label_1aa8c0;
            case 0x1AA8C4u: goto label_1aa8c4;
            case 0x1AA8C8u: goto label_1aa8c8;
            case 0x1AA8CCu: goto label_1aa8cc;
            case 0x1AA8D0u: goto label_1aa8d0;
            case 0x1AA8D4u: goto label_1aa8d4;
            case 0x1AA8D8u: goto label_1aa8d8;
            case 0x1AA8DCu: goto label_1aa8dc;
            case 0x1AA8E0u: goto label_1aa8e0;
            case 0x1AA8E4u: goto label_1aa8e4;
            case 0x1AA8E8u: goto label_1aa8e8;
            case 0x1AA8ECu: goto label_1aa8ec;
            case 0x1AA8F0u: goto label_1aa8f0;
            case 0x1AA8F4u: goto label_1aa8f4;
            case 0x1AA8F8u: goto label_1aa8f8;
            case 0x1AA8FCu: goto label_1aa8fc;
            case 0x1AA900u: goto label_1aa900;
            case 0x1AA904u: goto label_1aa904;
            case 0x1AA908u: goto label_1aa908;
            case 0x1AA90Cu: goto label_1aa90c;
            case 0x1AA910u: goto label_1aa910;
            case 0x1AA914u: goto label_1aa914;
            case 0x1AA918u: goto label_1aa918;
            case 0x1AA91Cu: goto label_1aa91c;
            case 0x1AA920u: goto label_1aa920;
            case 0x1AA924u: goto label_1aa924;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA92Cu: goto label_1aa92c;
            case 0x1AA930u: goto label_1aa930;
            case 0x1AA934u: goto label_1aa934;
            case 0x1AA938u: goto label_1aa938;
            case 0x1AA93Cu: goto label_1aa93c;
            case 0x1AA940u: goto label_1aa940;
            case 0x1AA944u: goto label_1aa944;
            case 0x1AA948u: goto label_1aa948;
            case 0x1AA94Cu: goto label_1aa94c;
            case 0x1AA950u: goto label_1aa950;
            case 0x1AA954u: goto label_1aa954;
            case 0x1AA958u: goto label_1aa958;
            case 0x1AA95Cu: goto label_1aa95c;
            case 0x1AA960u: goto label_1aa960;
            case 0x1AA964u: goto label_1aa964;
            case 0x1AA968u: goto label_1aa968;
            case 0x1AA96Cu: goto label_1aa96c;
            case 0x1AA970u: goto label_1aa970;
            case 0x1AA974u: goto label_1aa974;
            case 0x1AA978u: goto label_1aa978;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA980u: goto label_1aa980;
            case 0x1AA984u: goto label_1aa984;
            case 0x1AA988u: goto label_1aa988;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AA994u: goto label_1aa994;
            case 0x1AA998u: goto label_1aa998;
            case 0x1AA99Cu: goto label_1aa99c;
            case 0x1AA9A0u: goto label_1aa9a0;
            case 0x1AA9A4u: goto label_1aa9a4;
            case 0x1AA9A8u: goto label_1aa9a8;
            case 0x1AA9ACu: goto label_1aa9ac;
            case 0x1AA9B0u: goto label_1aa9b0;
            case 0x1AA9B4u: goto label_1aa9b4;
            case 0x1AA9B8u: goto label_1aa9b8;
            case 0x1AA9BCu: goto label_1aa9bc;
            case 0x1AA9C0u: goto label_1aa9c0;
            case 0x1AA9C4u: goto label_1aa9c4;
            case 0x1AA9C8u: goto label_1aa9c8;
            case 0x1AA9CCu: goto label_1aa9cc;
            case 0x1AA9D0u: goto label_1aa9d0;
            case 0x1AA9D4u: goto label_1aa9d4;
            case 0x1AA9D8u: goto label_1aa9d8;
            case 0x1AA9DCu: goto label_1aa9dc;
            case 0x1AA9E0u: goto label_1aa9e0;
            case 0x1AA9E4u: goto label_1aa9e4;
            case 0x1AA9E8u: goto label_1aa9e8;
            case 0x1AA9ECu: goto label_1aa9ec;
            case 0x1AA9F0u: goto label_1aa9f0;
            case 0x1AA9F4u: goto label_1aa9f4;
            case 0x1AA9F8u: goto label_1aa9f8;
            case 0x1AA9FCu: goto label_1aa9fc;
            case 0x1AAA00u: goto label_1aaa00;
            case 0x1AAA04u: goto label_1aaa04;
            case 0x1AAA08u: goto label_1aaa08;
            case 0x1AAA0Cu: goto label_1aaa0c;
            case 0x1AAA10u: goto label_1aaa10;
            case 0x1AAA14u: goto label_1aaa14;
            case 0x1AAA18u: goto label_1aaa18;
            case 0x1AAA1Cu: goto label_1aaa1c;
            case 0x1AAA20u: goto label_1aaa20;
            case 0x1AAA24u: goto label_1aaa24;
            case 0x1AAA28u: goto label_1aaa28;
            case 0x1AAA2Cu: goto label_1aaa2c;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA38u: goto label_1aaa38;
            case 0x1AAA3Cu: goto label_1aaa3c;
            case 0x1AAA40u: goto label_1aaa40;
            case 0x1AAA44u: goto label_1aaa44;
            case 0x1AAA48u: goto label_1aaa48;
            case 0x1AAA4Cu: goto label_1aaa4c;
            case 0x1AAA50u: goto label_1aaa50;
            case 0x1AAA54u: goto label_1aaa54;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA5Cu: goto label_1aaa5c;
            case 0x1AAA60u: goto label_1aaa60;
            case 0x1AAA64u: goto label_1aaa64;
            case 0x1AAA68u: goto label_1aaa68;
            case 0x1AAA6Cu: goto label_1aaa6c;
            case 0x1AAA70u: goto label_1aaa70;
            case 0x1AAA74u: goto label_1aaa74;
            case 0x1AAA78u: goto label_1aaa78;
            case 0x1AAA7Cu: goto label_1aaa7c;
            case 0x1AAA80u: goto label_1aaa80;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA88u: goto label_1aaa88;
            case 0x1AAA8Cu: goto label_1aaa8c;
            case 0x1AAA90u: goto label_1aaa90;
            case 0x1AAA94u: goto label_1aaa94;
            case 0x1AAA98u: goto label_1aaa98;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAA0u: goto label_1aaaa0;
            case 0x1AAAA4u: goto label_1aaaa4;
            case 0x1AAAA8u: goto label_1aaaa8;
            case 0x1AAAACu: goto label_1aaaac;
            case 0x1AAAB0u: goto label_1aaab0;
            case 0x1AAAB4u: goto label_1aaab4;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAABCu: goto label_1aaabc;
            case 0x1AAAC0u: goto label_1aaac0;
            case 0x1AAAC4u: goto label_1aaac4;
            case 0x1AAAC8u: goto label_1aaac8;
            case 0x1AAACCu: goto label_1aaacc;
            case 0x1AAAD0u: goto label_1aaad0;
            case 0x1AAAD4u: goto label_1aaad4;
            case 0x1AAAD8u: goto label_1aaad8;
            case 0x1AAADCu: goto label_1aaadc;
            case 0x1AAAE0u: goto label_1aaae0;
            case 0x1AAAE4u: goto label_1aaae4;
            case 0x1AAAE8u: goto label_1aaae8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAAF0u: goto label_1aaaf0;
            case 0x1AAAF4u: goto label_1aaaf4;
            case 0x1AAAF8u: goto label_1aaaf8;
            case 0x1AAAFCu: goto label_1aaafc;
            case 0x1AAB00u: goto label_1aab00;
            case 0x1AAB04u: goto label_1aab04;
            case 0x1AAB08u: goto label_1aab08;
            case 0x1AAB0Cu: goto label_1aab0c;
            case 0x1AAB10u: goto label_1aab10;
            case 0x1AAB14u: goto label_1aab14;
            case 0x1AAB18u: goto label_1aab18;
            case 0x1AAB1Cu: goto label_1aab1c;
            case 0x1AAB20u: goto label_1aab20;
            case 0x1AAB24u: goto label_1aab24;
            case 0x1AAB28u: goto label_1aab28;
            case 0x1AAB2Cu: goto label_1aab2c;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB38u: goto label_1aab38;
            case 0x1AAB3Cu: goto label_1aab3c;
            case 0x1AAB40u: goto label_1aab40;
            case 0x1AAB44u: goto label_1aab44;
            case 0x1AAB48u: goto label_1aab48;
            case 0x1AAB4Cu: goto label_1aab4c;
            case 0x1AAB50u: goto label_1aab50;
            case 0x1AAB54u: goto label_1aab54;
            case 0x1AAB58u: goto label_1aab58;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AAB60u: goto label_1aab60;
            case 0x1AAB64u: goto label_1aab64;
            case 0x1AAB68u: goto label_1aab68;
            case 0x1AAB6Cu: goto label_1aab6c;
            case 0x1AAB70u: goto label_1aab70;
            case 0x1AAB74u: goto label_1aab74;
            case 0x1AAB78u: goto label_1aab78;
            case 0x1AAB7Cu: goto label_1aab7c;
            case 0x1AAB80u: goto label_1aab80;
            case 0x1AAB84u: goto label_1aab84;
            case 0x1AAB88u: goto label_1aab88;
            case 0x1AAB8Cu: goto label_1aab8c;
            case 0x1AAB90u: goto label_1aab90;
            case 0x1AAB94u: goto label_1aab94;
            case 0x1AAB98u: goto label_1aab98;
            case 0x1AAB9Cu: goto label_1aab9c;
            case 0x1AABA0u: goto label_1aaba0;
            case 0x1AABA4u: goto label_1aaba4;
            case 0x1AABA8u: goto label_1aaba8;
            case 0x1AABACu: goto label_1aabac;
            case 0x1AABB0u: goto label_1aabb0;
            case 0x1AABB4u: goto label_1aabb4;
            case 0x1AABB8u: goto label_1aabb8;
            case 0x1AABBCu: goto label_1aabbc;
            case 0x1AABC0u: goto label_1aabc0;
            case 0x1AABC4u: goto label_1aabc4;
            case 0x1AABC8u: goto label_1aabc8;
            case 0x1AABCCu: goto label_1aabcc;
            case 0x1AABD0u: goto label_1aabd0;
            case 0x1AABD4u: goto label_1aabd4;
            case 0x1AABD8u: goto label_1aabd8;
            case 0x1AABDCu: goto label_1aabdc;
            case 0x1AABE0u: goto label_1aabe0;
            case 0x1AABE4u: goto label_1aabe4;
            case 0x1AABE8u: goto label_1aabe8;
            case 0x1AABECu: goto label_1aabec;
            case 0x1AABF0u: goto label_1aabf0;
            case 0x1AABF4u: goto label_1aabf4;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC00u: goto label_1aac00;
            case 0x1AAC04u: goto label_1aac04;
            case 0x1AAC08u: goto label_1aac08;
            case 0x1AAC0Cu: goto label_1aac0c;
            case 0x1AAC10u: goto label_1aac10;
            case 0x1AAC14u: goto label_1aac14;
            case 0x1AAC18u: goto label_1aac18;
            case 0x1AAC1Cu: goto label_1aac1c;
            case 0x1AAC20u: goto label_1aac20;
            case 0x1AAC24u: goto label_1aac24;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC2Cu: goto label_1aac2c;
            case 0x1AAC30u: goto label_1aac30;
            case 0x1AAC34u: goto label_1aac34;
            case 0x1AAC38u: goto label_1aac38;
            case 0x1AAC3Cu: goto label_1aac3c;
            case 0x1AAC40u: goto label_1aac40;
            case 0x1AAC44u: goto label_1aac44;
            case 0x1AAC48u: goto label_1aac48;
            case 0x1AAC4Cu: goto label_1aac4c;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC54u: goto label_1aac54;
            case 0x1AAC58u: goto label_1aac58;
            case 0x1AAC5Cu: goto label_1aac5c;
            case 0x1AAC60u: goto label_1aac60;
            case 0x1AAC64u: goto label_1aac64;
            case 0x1AAC68u: goto label_1aac68;
            case 0x1AAC6Cu: goto label_1aac6c;
            case 0x1AAC70u: goto label_1aac70;
            case 0x1AAC74u: goto label_1aac74;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC7Cu: goto label_1aac7c;
            case 0x1AAC80u: goto label_1aac80;
            case 0x1AAC84u: goto label_1aac84;
            case 0x1AAC88u: goto label_1aac88;
            case 0x1AAC8Cu: goto label_1aac8c;
            case 0x1AAC90u: goto label_1aac90;
            case 0x1AAC94u: goto label_1aac94;
            case 0x1AAC98u: goto label_1aac98;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACA0u: goto label_1aaca0;
            case 0x1AACA4u: goto label_1aaca4;
            case 0x1AACA8u: goto label_1aaca8;
            case 0x1AACACu: goto label_1aacac;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACB4u: goto label_1aacb4;
            case 0x1AACB8u: goto label_1aacb8;
            case 0x1AACBCu: goto label_1aacbc;
            case 0x1AACC0u: goto label_1aacc0;
            case 0x1AACC4u: goto label_1aacc4;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACCCu: goto label_1aaccc;
            case 0x1AACD0u: goto label_1aacd0;
            case 0x1AACD4u: goto label_1aacd4;
            case 0x1AACD8u: goto label_1aacd8;
            case 0x1AACDCu: goto label_1aacdc;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            case 0x1AACECu: goto label_1aacec;
            case 0x1AACF0u: goto label_1aacf0;
            case 0x1AACF4u: goto label_1aacf4;
            case 0x1AACF8u: goto label_1aacf8;
            case 0x1AACFCu: goto label_1aacfc;
            case 0x1AAD00u: goto label_1aad00;
            case 0x1AAD04u: goto label_1aad04;
            case 0x1AAD08u: goto label_1aad08;
            case 0x1AAD0Cu: goto label_1aad0c;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD14u: goto label_1aad14;
            case 0x1AAD18u: goto label_1aad18;
            case 0x1AAD1Cu: goto label_1aad1c;
            case 0x1AAD20u: goto label_1aad20;
            case 0x1AAD24u: goto label_1aad24;
            case 0x1AAD28u: goto label_1aad28;
            case 0x1AAD2Cu: goto label_1aad2c;
            case 0x1AAD30u: goto label_1aad30;
            case 0x1AAD34u: goto label_1aad34;
            case 0x1AAD38u: goto label_1aad38;
            case 0x1AAD3Cu: goto label_1aad3c;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD44u: goto label_1aad44;
            case 0x1AAD48u: goto label_1aad48;
            case 0x1AAD4Cu: goto label_1aad4c;
            case 0x1AAD50u: goto label_1aad50;
            case 0x1AAD54u: goto label_1aad54;
            case 0x1AAD58u: goto label_1aad58;
            case 0x1AAD5Cu: goto label_1aad5c;
            case 0x1AAD60u: goto label_1aad60;
            case 0x1AAD64u: goto label_1aad64;
            case 0x1AAD68u: goto label_1aad68;
            case 0x1AAD6Cu: goto label_1aad6c;
            case 0x1AAD70u: goto label_1aad70;
            case 0x1AAD74u: goto label_1aad74;
            case 0x1AAD78u: goto label_1aad78;
            case 0x1AAD7Cu: goto label_1aad7c;
            case 0x1AAD80u: goto label_1aad80;
            case 0x1AAD84u: goto label_1aad84;
            case 0x1AAD88u: goto label_1aad88;
            case 0x1AAD8Cu: goto label_1aad8c;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AAD94u: goto label_1aad94;
            case 0x1AAD98u: goto label_1aad98;
            case 0x1AAD9Cu: goto label_1aad9c;
            case 0x1AADA0u: goto label_1aada0;
            case 0x1AADA4u: goto label_1aada4;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AADACu: goto label_1aadac;
            case 0x1AADB0u: goto label_1aadb0;
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AADB8u: goto label_1aadb8;
            case 0x1AADBCu: goto label_1aadbc;
            case 0x1AADC0u: goto label_1aadc0;
            case 0x1AADC4u: goto label_1aadc4;
            case 0x1AADC8u: goto label_1aadc8;
            case 0x1AADCCu: goto label_1aadcc;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADD4u: goto label_1aadd4;
            case 0x1AADD8u: goto label_1aadd8;
            case 0x1AADDCu: goto label_1aaddc;
            case 0x1AADE0u: goto label_1aade0;
            case 0x1AADE4u: goto label_1aade4;
            case 0x1AADE8u: goto label_1aade8;
            case 0x1AADECu: goto label_1aadec;
            case 0x1AADF0u: goto label_1aadf0;
            case 0x1AADF4u: goto label_1aadf4;
            case 0x1AADF8u: goto label_1aadf8;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE00u: goto label_1aae00;
            case 0x1AAE04u: goto label_1aae04;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE10u: goto label_1aae10;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE18u: goto label_1aae18;
            case 0x1AAE1Cu: goto label_1aae1c;
            case 0x1AAE20u: goto label_1aae20;
            case 0x1AAE24u: goto label_1aae24;
            case 0x1AAE28u: goto label_1aae28;
            case 0x1AAE2Cu: goto label_1aae2c;
            case 0x1AAE30u: goto label_1aae30;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE38u: goto label_1aae38;
            case 0x1AAE3Cu: goto label_1aae3c;
            case 0x1AAE40u: goto label_1aae40;
            case 0x1AAE44u: goto label_1aae44;
            case 0x1AAE48u: goto label_1aae48;
            case 0x1AAE4Cu: goto label_1aae4c;
            case 0x1AAE50u: goto label_1aae50;
            case 0x1AAE54u: goto label_1aae54;
            case 0x1AAE58u: goto label_1aae58;
            case 0x1AAE5Cu: goto label_1aae5c;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE64u: goto label_1aae64;
            case 0x1AAE68u: goto label_1aae68;
            case 0x1AAE6Cu: goto label_1aae6c;
            case 0x1AAE70u: goto label_1aae70;
            case 0x1AAE74u: goto label_1aae74;
            case 0x1AAE78u: goto label_1aae78;
            case 0x1AAE7Cu: goto label_1aae7c;
            case 0x1AAE80u: goto label_1aae80;
            case 0x1AAE84u: goto label_1aae84;
            case 0x1AAE88u: goto label_1aae88;
            case 0x1AAE8Cu: goto label_1aae8c;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAE94u: goto label_1aae94;
            case 0x1AAE98u: goto label_1aae98;
            case 0x1AAE9Cu: goto label_1aae9c;
            case 0x1AAEA0u: goto label_1aaea0;
            case 0x1AAEA4u: goto label_1aaea4;
            case 0x1AAEA8u: goto label_1aaea8;
            case 0x1AAEACu: goto label_1aaeac;
            case 0x1AAEB0u: goto label_1aaeb0;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEB8u: goto label_1aaeb8;
            case 0x1AAEBCu: goto label_1aaebc;
            case 0x1AAEC0u: goto label_1aaec0;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEC8u: goto label_1aaec8;
            case 0x1AAECCu: goto label_1aaecc;
            case 0x1AAED0u: goto label_1aaed0;
            case 0x1AAED4u: goto label_1aaed4;
            case 0x1AAED8u: goto label_1aaed8;
            case 0x1AAEDCu: goto label_1aaedc;
            case 0x1AAEE0u: goto label_1aaee0;
            case 0x1AAEE4u: goto label_1aaee4;
            case 0x1AAEE8u: goto label_1aaee8;
            case 0x1AAEECu: goto label_1aaeec;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAEF4u: goto label_1aaef4;
            case 0x1AAEF8u: goto label_1aaef8;
            case 0x1AAEFCu: goto label_1aaefc;
            case 0x1AAF00u: goto label_1aaf00;
            case 0x1AAF04u: goto label_1aaf04;
            case 0x1AAF08u: goto label_1aaf08;
            case 0x1AAF0Cu: goto label_1aaf0c;
            case 0x1AAF10u: goto label_1aaf10;
            case 0x1AAF14u: goto label_1aaf14;
            case 0x1AAF18u: goto label_1aaf18;
            case 0x1AAF1Cu: goto label_1aaf1c;
            case 0x1AAF20u: goto label_1aaf20;
            case 0x1AAF24u: goto label_1aaf24;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF2Cu: goto label_1aaf2c;
            case 0x1AAF30u: goto label_1aaf30;
            case 0x1AAF34u: goto label_1aaf34;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF3Cu: goto label_1aaf3c;
            case 0x1AAF40u: goto label_1aaf40;
            case 0x1AAF44u: goto label_1aaf44;
            case 0x1AAF48u: goto label_1aaf48;
            case 0x1AAF4Cu: goto label_1aaf4c;
            case 0x1AAF50u: goto label_1aaf50;
            case 0x1AAF54u: goto label_1aaf54;
            case 0x1AAF58u: goto label_1aaf58;
            case 0x1AAF5Cu: goto label_1aaf5c;
            case 0x1AAF60u: goto label_1aaf60;
            case 0x1AAF64u: goto label_1aaf64;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF6Cu: goto label_1aaf6c;
            case 0x1AAF70u: goto label_1aaf70;
            case 0x1AAF74u: goto label_1aaf74;
            case 0x1AAF78u: goto label_1aaf78;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF80u: goto label_1aaf80;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAF8Cu: goto label_1aaf8c;
            case 0x1AAF90u: goto label_1aaf90;
            case 0x1AAF94u: goto label_1aaf94;
            case 0x1AAF98u: goto label_1aaf98;
            case 0x1AAF9Cu: goto label_1aaf9c;
            case 0x1AAFA0u: goto label_1aafa0;
            case 0x1AAFA4u: goto label_1aafa4;
            case 0x1AAFA8u: goto label_1aafa8;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFB0u: goto label_1aafb0;
            case 0x1AAFB4u: goto label_1aafb4;
            case 0x1AAFB8u: goto label_1aafb8;
            case 0x1AAFBCu: goto label_1aafbc;
            case 0x1AAFC0u: goto label_1aafc0;
            case 0x1AAFC4u: goto label_1aafc4;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFCCu: goto label_1aafcc;
            case 0x1AAFD0u: goto label_1aafd0;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFD8u: goto label_1aafd8;
            case 0x1AAFDCu: goto label_1aafdc;
            case 0x1AAFE0u: goto label_1aafe0;
            case 0x1AAFE4u: goto label_1aafe4;
            case 0x1AAFE8u: goto label_1aafe8;
            case 0x1AAFECu: goto label_1aafec;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AAFF4u: goto label_1aaff4;
            case 0x1AAFF8u: goto label_1aaff8;
            case 0x1AAFFCu: goto label_1aaffc;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB004u: goto label_1ab004;
            case 0x1AB008u: goto label_1ab008;
            case 0x1AB00Cu: goto label_1ab00c;
            case 0x1AB010u: goto label_1ab010;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB01Cu: goto label_1ab01c;
            case 0x1AB020u: goto label_1ab020;
            case 0x1AB024u: goto label_1ab024;
            case 0x1AB028u: goto label_1ab028;
            case 0x1AB02Cu: goto label_1ab02c;
            case 0x1AB030u: goto label_1ab030;
            case 0x1AB034u: goto label_1ab034;
            case 0x1AB038u: goto label_1ab038;
            case 0x1AB03Cu: goto label_1ab03c;
            case 0x1AB040u: goto label_1ab040;
            case 0x1AB044u: goto label_1ab044;
            case 0x1AB048u: goto label_1ab048;
            case 0x1AB04Cu: goto label_1ab04c;
            case 0x1AB050u: goto label_1ab050;
            case 0x1AB054u: goto label_1ab054;
            case 0x1AB058u: goto label_1ab058;
            case 0x1AB05Cu: goto label_1ab05c;
            case 0x1AB060u: goto label_1ab060;
            case 0x1AB064u: goto label_1ab064;
            case 0x1AB068u: goto label_1ab068;
            case 0x1AB06Cu: goto label_1ab06c;
            case 0x1AB070u: goto label_1ab070;
            case 0x1AB074u: goto label_1ab074;
            case 0x1AB078u: goto label_1ab078;
            case 0x1AB07Cu: goto label_1ab07c;
            case 0x1AB080u: goto label_1ab080;
            case 0x1AB084u: goto label_1ab084;
            case 0x1AB088u: goto label_1ab088;
            case 0x1AB08Cu: goto label_1ab08c;
            case 0x1AB090u: goto label_1ab090;
            case 0x1AB094u: goto label_1ab094;
            case 0x1AB098u: goto label_1ab098;
            case 0x1AB09Cu: goto label_1ab09c;
            case 0x1AB0A0u: goto label_1ab0a0;
            case 0x1AB0A4u: goto label_1ab0a4;
            case 0x1AB0A8u: goto label_1ab0a8;
            case 0x1AB0ACu: goto label_1ab0ac;
            case 0x1AB0B0u: goto label_1ab0b0;
            case 0x1AB0B4u: goto label_1ab0b4;
            case 0x1AB0B8u: goto label_1ab0b8;
            case 0x1AB0BCu: goto label_1ab0bc;
            case 0x1AB0C0u: goto label_1ab0c0;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0C8u: goto label_1ab0c8;
            case 0x1AB0CCu: goto label_1ab0cc;
            case 0x1AB0D0u: goto label_1ab0d0;
            case 0x1AB0D4u: goto label_1ab0d4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB0E0u: goto label_1ab0e0;
            case 0x1AB0E4u: goto label_1ab0e4;
            case 0x1AB0E8u: goto label_1ab0e8;
            case 0x1AB0ECu: goto label_1ab0ec;
            case 0x1AB0F0u: goto label_1ab0f0;
            case 0x1AB0F4u: goto label_1ab0f4;
            case 0x1AB0F8u: goto label_1ab0f8;
            case 0x1AB0FCu: goto label_1ab0fc;
            case 0x1AB100u: goto label_1ab100;
            case 0x1AB104u: goto label_1ab104;
            case 0x1AB108u: goto label_1ab108;
            case 0x1AB10Cu: goto label_1ab10c;
            case 0x1AB110u: goto label_1ab110;
            case 0x1AB114u: goto label_1ab114;
            case 0x1AB118u: goto label_1ab118;
            case 0x1AB11Cu: goto label_1ab11c;
            case 0x1AB120u: goto label_1ab120;
            case 0x1AB124u: goto label_1ab124;
            case 0x1AB128u: goto label_1ab128;
            case 0x1AB12Cu: goto label_1ab12c;
            case 0x1AB130u: goto label_1ab130;
            case 0x1AB134u: goto label_1ab134;
            case 0x1AB138u: goto label_1ab138;
            case 0x1AB13Cu: goto label_1ab13c;
            case 0x1AB140u: goto label_1ab140;
            case 0x1AB144u: goto label_1ab144;
            case 0x1AB148u: goto label_1ab148;
            case 0x1AB14Cu: goto label_1ab14c;
            case 0x1AB150u: goto label_1ab150;
            case 0x1AB154u: goto label_1ab154;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB15Cu: goto label_1ab15c;
            case 0x1AB160u: goto label_1ab160;
            case 0x1AB164u: goto label_1ab164;
            case 0x1AB168u: goto label_1ab168;
            case 0x1AB16Cu: goto label_1ab16c;
            case 0x1AB170u: goto label_1ab170;
            case 0x1AB174u: goto label_1ab174;
            case 0x1AB178u: goto label_1ab178;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB184u: goto label_1ab184;
            case 0x1AB188u: goto label_1ab188;
            case 0x1AB18Cu: goto label_1ab18c;
            case 0x1AB190u: goto label_1ab190;
            case 0x1AB194u: goto label_1ab194;
            case 0x1AB198u: goto label_1ab198;
            case 0x1AB19Cu: goto label_1ab19c;
            case 0x1AB1A0u: goto label_1ab1a0;
            case 0x1AB1A4u: goto label_1ab1a4;
            case 0x1AB1A8u: goto label_1ab1a8;
            case 0x1AB1ACu: goto label_1ab1ac;
            case 0x1AB1B0u: goto label_1ab1b0;
            case 0x1AB1B4u: goto label_1ab1b4;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C0u: goto label_1ab1c0;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1C8u: goto label_1ab1c8;
            case 0x1AB1CCu: goto label_1ab1cc;
            case 0x1AB1D0u: goto label_1ab1d0;
            case 0x1AB1D4u: goto label_1ab1d4;
            case 0x1AB1D8u: goto label_1ab1d8;
            case 0x1AB1DCu: goto label_1ab1dc;
            case 0x1AB1E0u: goto label_1ab1e0;
            case 0x1AB1E4u: goto label_1ab1e4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB1ECu: goto label_1ab1ec;
            case 0x1AB1F0u: goto label_1ab1f0;
            case 0x1AB1F4u: goto label_1ab1f4;
            case 0x1AB1F8u: goto label_1ab1f8;
            case 0x1AB1FCu: goto label_1ab1fc;
            case 0x1AB200u: goto label_1ab200;
            case 0x1AB204u: goto label_1ab204;
            case 0x1AB208u: goto label_1ab208;
            case 0x1AB20Cu: goto label_1ab20c;
            case 0x1AB210u: goto label_1ab210;
            case 0x1AB214u: goto label_1ab214;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB21Cu: goto label_1ab21c;
            case 0x1AB220u: goto label_1ab220;
            case 0x1AB224u: goto label_1ab224;
            case 0x1AB228u: goto label_1ab228;
            case 0x1AB22Cu: goto label_1ab22c;
            case 0x1AB230u: goto label_1ab230;
            case 0x1AB234u: goto label_1ab234;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB23Cu: goto label_1ab23c;
            case 0x1AB240u: goto label_1ab240;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB248u: goto label_1ab248;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB250u: goto label_1ab250;
            case 0x1AB254u: goto label_1ab254;
            case 0x1AB258u: goto label_1ab258;
            case 0x1AB25Cu: goto label_1ab25c;
            case 0x1AB260u: goto label_1ab260;
            case 0x1AB264u: goto label_1ab264;
            case 0x1AB268u: goto label_1ab268;
            case 0x1AB26Cu: goto label_1ab26c;
            case 0x1AB270u: goto label_1ab270;
            case 0x1AB274u: goto label_1ab274;
            case 0x1AB278u: goto label_1ab278;
            case 0x1AB27Cu: goto label_1ab27c;
            case 0x1AB280u: goto label_1ab280;
            case 0x1AB284u: goto label_1ab284;
            case 0x1AB288u: goto label_1ab288;
            case 0x1AB28Cu: goto label_1ab28c;
            case 0x1AB290u: goto label_1ab290;
            case 0x1AB294u: goto label_1ab294;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB29Cu: goto label_1ab29c;
            case 0x1AB2A0u: goto label_1ab2a0;
            case 0x1AB2A4u: goto label_1ab2a4;
            case 0x1AB2A8u: goto label_1ab2a8;
            case 0x1AB2ACu: goto label_1ab2ac;
            case 0x1AB2B0u: goto label_1ab2b0;
            case 0x1AB2B4u: goto label_1ab2b4;
            case 0x1AB2B8u: goto label_1ab2b8;
            case 0x1AB2BCu: goto label_1ab2bc;
            case 0x1AB2C0u: goto label_1ab2c0;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2C8u: goto label_1ab2c8;
            case 0x1AB2CCu: goto label_1ab2cc;
            case 0x1AB2D0u: goto label_1ab2d0;
            case 0x1AB2D4u: goto label_1ab2d4;
            case 0x1AB2D8u: goto label_1ab2d8;
            case 0x1AB2DCu: goto label_1ab2dc;
            case 0x1AB2E0u: goto label_1ab2e0;
            case 0x1AB2E4u: goto label_1ab2e4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB2F0u: goto label_1ab2f0;
            case 0x1AB2F4u: goto label_1ab2f4;
            case 0x1AB2F8u: goto label_1ab2f8;
            case 0x1AB2FCu: goto label_1ab2fc;
            case 0x1AB300u: goto label_1ab300;
            case 0x1AB304u: goto label_1ab304;
            case 0x1AB308u: goto label_1ab308;
            case 0x1AB30Cu: goto label_1ab30c;
            case 0x1AB310u: goto label_1ab310;
            case 0x1AB314u: goto label_1ab314;
            case 0x1AB318u: goto label_1ab318;
            case 0x1AB31Cu: goto label_1ab31c;
            case 0x1AB320u: goto label_1ab320;
            case 0x1AB324u: goto label_1ab324;
            case 0x1AB328u: goto label_1ab328;
            case 0x1AB32Cu: goto label_1ab32c;
            case 0x1AB330u: goto label_1ab330;
            case 0x1AB334u: goto label_1ab334;
            case 0x1AB338u: goto label_1ab338;
            case 0x1AB33Cu: goto label_1ab33c;
            case 0x1AB340u: goto label_1ab340;
            case 0x1AB344u: goto label_1ab344;
            case 0x1AB348u: goto label_1ab348;
            case 0x1AB34Cu: goto label_1ab34c;
            case 0x1AB350u: goto label_1ab350;
            case 0x1AB354u: goto label_1ab354;
            case 0x1AB358u: goto label_1ab358;
            case 0x1AB35Cu: goto label_1ab35c;
            case 0x1AB360u: goto label_1ab360;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB368u: goto label_1ab368;
            case 0x1AB36Cu: goto label_1ab36c;
            case 0x1AB370u: goto label_1ab370;
            case 0x1AB374u: goto label_1ab374;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB380u: goto label_1ab380;
            case 0x1AB384u: goto label_1ab384;
            case 0x1AB388u: goto label_1ab388;
            case 0x1AB38Cu: goto label_1ab38c;
            case 0x1AB390u: goto label_1ab390;
            case 0x1AB394u: goto label_1ab394;
            case 0x1AB398u: goto label_1ab398;
            case 0x1AB39Cu: goto label_1ab39c;
            case 0x1AB3A0u: goto label_1ab3a0;
            case 0x1AB3A4u: goto label_1ab3a4;
            case 0x1AB3A8u: goto label_1ab3a8;
            case 0x1AB3ACu: goto label_1ab3ac;
            case 0x1AB3B0u: goto label_1ab3b0;
            case 0x1AB3B4u: goto label_1ab3b4;
            case 0x1AB3B8u: goto label_1ab3b8;
            case 0x1AB3BCu: goto label_1ab3bc;
            case 0x1AB3C0u: goto label_1ab3c0;
            case 0x1AB3C4u: goto label_1ab3c4;
            case 0x1AB3C8u: goto label_1ab3c8;
            case 0x1AB3CCu: goto label_1ab3cc;
            case 0x1AB3D0u: goto label_1ab3d0;
            case 0x1AB3D4u: goto label_1ab3d4;
            case 0x1AB3D8u: goto label_1ab3d8;
            case 0x1AB3DCu: goto label_1ab3dc;
            case 0x1AB3E0u: goto label_1ab3e0;
            case 0x1AB3E4u: goto label_1ab3e4;
            case 0x1AB3E8u: goto label_1ab3e8;
            case 0x1AB3ECu: goto label_1ab3ec;
            case 0x1AB3F0u: goto label_1ab3f0;
            case 0x1AB3F4u: goto label_1ab3f4;
            case 0x1AB3F8u: goto label_1ab3f8;
            case 0x1AB3FCu: goto label_1ab3fc;
            case 0x1AB400u: goto label_1ab400;
            case 0x1AB404u: goto label_1ab404;
            case 0x1AB408u: goto label_1ab408;
            case 0x1AB40Cu: goto label_1ab40c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB414u: goto label_1ab414;
            case 0x1AB418u: goto label_1ab418;
            case 0x1AB41Cu: goto label_1ab41c;
            case 0x1AB420u: goto label_1ab420;
            case 0x1AB424u: goto label_1ab424;
            case 0x1AB428u: goto label_1ab428;
            case 0x1AB42Cu: goto label_1ab42c;
            case 0x1AB430u: goto label_1ab430;
            case 0x1AB434u: goto label_1ab434;
            case 0x1AB438u: goto label_1ab438;
            case 0x1AB43Cu: goto label_1ab43c;
            case 0x1AB440u: goto label_1ab440;
            case 0x1AB444u: goto label_1ab444;
            case 0x1AB448u: goto label_1ab448;
            case 0x1AB44Cu: goto label_1ab44c;
            case 0x1AB450u: goto label_1ab450;
            case 0x1AB454u: goto label_1ab454;
            case 0x1AB458u: goto label_1ab458;
            case 0x1AB45Cu: goto label_1ab45c;
            case 0x1AB460u: goto label_1ab460;
            case 0x1AB464u: goto label_1ab464;
            case 0x1AB468u: goto label_1ab468;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB470u: goto label_1ab470;
            case 0x1AB474u: goto label_1ab474;
            case 0x1AB478u: goto label_1ab478;
            case 0x1AB47Cu: goto label_1ab47c;
            case 0x1AB480u: goto label_1ab480;
            case 0x1AB484u: goto label_1ab484;
            case 0x1AB488u: goto label_1ab488;
            case 0x1AB48Cu: goto label_1ab48c;
            case 0x1AB490u: goto label_1ab490;
            case 0x1AB494u: goto label_1ab494;
            case 0x1AB498u: goto label_1ab498;
            case 0x1AB49Cu: goto label_1ab49c;
            case 0x1AB4A0u: goto label_1ab4a0;
            case 0x1AB4A4u: goto label_1ab4a4;
            case 0x1AB4A8u: goto label_1ab4a8;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4B0u: goto label_1ab4b0;
            case 0x1AB4B4u: goto label_1ab4b4;
            case 0x1AB4B8u: goto label_1ab4b8;
            case 0x1AB4BCu: goto label_1ab4bc;
            case 0x1AB4C0u: goto label_1ab4c0;
            case 0x1AB4C4u: goto label_1ab4c4;
            case 0x1AB4C8u: goto label_1ab4c8;
            case 0x1AB4CCu: goto label_1ab4cc;
            case 0x1AB4D0u: goto label_1ab4d0;
            case 0x1AB4D4u: goto label_1ab4d4;
            case 0x1AB4D8u: goto label_1ab4d8;
            case 0x1AB4DCu: goto label_1ab4dc;
            case 0x1AB4E0u: goto label_1ab4e0;
            case 0x1AB4E4u: goto label_1ab4e4;
            case 0x1AB4E8u: goto label_1ab4e8;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB4F0u: goto label_1ab4f0;
            case 0x1AB4F4u: goto label_1ab4f4;
            case 0x1AB4F8u: goto label_1ab4f8;
            case 0x1AB4FCu: goto label_1ab4fc;
            case 0x1AB500u: goto label_1ab500;
            case 0x1AB504u: goto label_1ab504;
            case 0x1AB508u: goto label_1ab508;
            case 0x1AB50Cu: goto label_1ab50c;
            case 0x1AB510u: goto label_1ab510;
            case 0x1AB514u: goto label_1ab514;
            case 0x1AB518u: goto label_1ab518;
            case 0x1AB51Cu: goto label_1ab51c;
            case 0x1AB520u: goto label_1ab520;
            case 0x1AB524u: goto label_1ab524;
            case 0x1AB528u: goto label_1ab528;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB530u: goto label_1ab530;
            case 0x1AB534u: goto label_1ab534;
            case 0x1AB538u: goto label_1ab538;
            case 0x1AB53Cu: goto label_1ab53c;
            case 0x1AB540u: goto label_1ab540;
            case 0x1AB544u: goto label_1ab544;
            case 0x1AB548u: goto label_1ab548;
            case 0x1AB54Cu: goto label_1ab54c;
            case 0x1AB550u: goto label_1ab550;
            case 0x1AB554u: goto label_1ab554;
            case 0x1AB558u: goto label_1ab558;
            case 0x1AB55Cu: goto label_1ab55c;
            case 0x1AB560u: goto label_1ab560;
            case 0x1AB564u: goto label_1ab564;
            case 0x1AB568u: goto label_1ab568;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB570u: goto label_1ab570;
            case 0x1AB574u: goto label_1ab574;
            case 0x1AB578u: goto label_1ab578;
            case 0x1AB57Cu: goto label_1ab57c;
            case 0x1AB580u: goto label_1ab580;
            case 0x1AB584u: goto label_1ab584;
            case 0x1AB588u: goto label_1ab588;
            case 0x1AB58Cu: goto label_1ab58c;
            case 0x1AB590u: goto label_1ab590;
            case 0x1AB594u: goto label_1ab594;
            case 0x1AB598u: goto label_1ab598;
            case 0x1AB59Cu: goto label_1ab59c;
            case 0x1AB5A0u: goto label_1ab5a0;
            case 0x1AB5A4u: goto label_1ab5a4;
            case 0x1AB5A8u: goto label_1ab5a8;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5B0u: goto label_1ab5b0;
            case 0x1AB5B4u: goto label_1ab5b4;
            case 0x1AB5B8u: goto label_1ab5b8;
            case 0x1AB5BCu: goto label_1ab5bc;
            case 0x1AB5C0u: goto label_1ab5c0;
            case 0x1AB5C4u: goto label_1ab5c4;
            case 0x1AB5C8u: goto label_1ab5c8;
            case 0x1AB5CCu: goto label_1ab5cc;
            case 0x1AB5D0u: goto label_1ab5d0;
            case 0x1AB5D4u: goto label_1ab5d4;
            case 0x1AB5D8u: goto label_1ab5d8;
            case 0x1AB5DCu: goto label_1ab5dc;
            case 0x1AB5E0u: goto label_1ab5e0;
            case 0x1AB5E4u: goto label_1ab5e4;
            case 0x1AB5E8u: goto label_1ab5e8;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB5F0u: goto label_1ab5f0;
            case 0x1AB5F4u: goto label_1ab5f4;
            case 0x1AB5F8u: goto label_1ab5f8;
            case 0x1AB5FCu: goto label_1ab5fc;
            case 0x1AB600u: goto label_1ab600;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4F4u; }
            if (ctx->pc != 0x1AB4F4u) { return; }
        }
    }
    ctx->pc = 0x1AB4F4u;
label_1ab4f4:
    // 0x1ab4f4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1ab4f8:
    if (ctx->pc == 0x1AB4F8u) {
        ctx->pc = 0x1AB4FCu;
        goto label_1ab4fc;
    }
    ctx->pc = 0x1AB4F4u;
    {
        const bool branch_taken_0x1ab4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4f4) {
            ctx->pc = 0x1AB5F0u;
            goto label_1ab5f0;
        }
    }
    ctx->pc = 0x1AB4FCu;
label_1ab4fc:
    // 0x1ab4fc: 0x0  nop
    ctx->pc = 0x1ab4fcu;
    // NOP
label_1ab500:
    // 0x1ab500: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ab500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ab504:
    // 0x1ab504: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1ab508:
    if (ctx->pc == 0x1AB508u) {
        ctx->pc = 0x1AB50Cu;
        goto label_1ab50c;
    }
    ctx->pc = 0x1AB504u;
    {
        const bool branch_taken_0x1ab504 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ab504) {
            ctx->pc = 0x1AB5D0u;
            goto label_1ab5d0;
        }
    }
    ctx->pc = 0x1AB50Cu;
label_1ab50c:
    // 0x1ab50c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ab50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab510:
    // 0x1ab510: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1ab510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1ab514:
    // 0x1ab514: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ab514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab518:
    // 0x1ab518: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ab518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ab51c:
    // 0x1ab51c: 0xc05d080  jal         func_174200
label_1ab520:
    if (ctx->pc == 0x1AB520u) {
        ctx->pc = 0x1AB520u;
            // 0x1ab520: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AB524u;
        goto label_1ab524;
    }
    ctx->pc = 0x1AB51Cu;
    SET_GPR_U32(ctx, 31, 0x1AB524u);
    ctx->pc = 0x1AB520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB51Cu;
            // 0x1ab520: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB524u; }
        if (ctx->pc != 0x1AB524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB524u; }
        if (ctx->pc != 0x1AB524u) { return; }
    }
    ctx->pc = 0x1AB524u;
label_1ab524:
    // 0x1ab524: 0xc050bb4  jal         func_142ED0
label_1ab528:
    if (ctx->pc == 0x1AB528u) {
        ctx->pc = 0x1AB52Cu;
        goto label_1ab52c;
    }
    ctx->pc = 0x1AB524u;
    SET_GPR_U32(ctx, 31, 0x1AB52Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB52Cu; }
        if (ctx->pc != 0x1AB52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB52Cu; }
        if (ctx->pc != 0x1AB52Cu) { return; }
    }
    ctx->pc = 0x1AB52Cu;
label_1ab52c:
    // 0x1ab52c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab52cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ab530:
    // 0x1ab530: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1ab534:
    if (ctx->pc == 0x1AB534u) {
        ctx->pc = 0x1AB538u;
        goto label_1ab538;
    }
    ctx->pc = 0x1AB530u;
    {
        const bool branch_taken_0x1ab530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab530) {
            ctx->pc = 0x1AB550u;
            goto label_1ab550;
        }
    }
    ctx->pc = 0x1AB538u;
label_1ab538:
    // 0x1ab538: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ab538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab53c:
    // 0x1ab53c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1ab53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1ab540:
    // 0x1ab540: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ab540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab544:
    // 0x1ab544: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ab544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ab548:
    // 0x1ab548: 0xc05d080  jal         func_174200
label_1ab54c:
    if (ctx->pc == 0x1AB54Cu) {
        ctx->pc = 0x1AB54Cu;
            // 0x1ab54c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AB550u;
        goto label_1ab550;
    }
    ctx->pc = 0x1AB548u;
    SET_GPR_U32(ctx, 31, 0x1AB550u);
    ctx->pc = 0x1AB54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB548u;
            // 0x1ab54c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB550u; }
        if (ctx->pc != 0x1AB550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB550u; }
        if (ctx->pc != 0x1AB550u) { return; }
    }
    ctx->pc = 0x1AB550u;
label_1ab550:
    // 0x1ab550: 0xc050bb4  jal         func_142ED0
label_1ab554:
    if (ctx->pc == 0x1AB554u) {
        ctx->pc = 0x1AB558u;
        goto label_1ab558;
    }
    ctx->pc = 0x1AB550u;
    SET_GPR_U32(ctx, 31, 0x1AB558u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB558u; }
        if (ctx->pc != 0x1AB558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB558u; }
        if (ctx->pc != 0x1AB558u) { return; }
    }
    ctx->pc = 0x1AB558u;
label_1ab558:
    // 0x1ab558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab558u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ab55c:
    // 0x1ab55c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ab560:
    if (ctx->pc == 0x1AB560u) {
        ctx->pc = 0x1AB564u;
        goto label_1ab564;
    }
    ctx->pc = 0x1AB55Cu;
    {
        const bool branch_taken_0x1ab55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab55c) {
            ctx->pc = 0x1AB580u;
            goto label_1ab580;
        }
    }
    ctx->pc = 0x1AB564u;
label_1ab564:
    // 0x1ab564: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ab564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab568:
    // 0x1ab568: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1ab568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1ab56c:
    // 0x1ab56c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ab56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab570:
    // 0x1ab570: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ab570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ab574:
    // 0x1ab574: 0xc05d080  jal         func_174200
label_1ab578:
    if (ctx->pc == 0x1AB578u) {
        ctx->pc = 0x1AB578u;
            // 0x1ab578: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AB57Cu;
        goto label_1ab57c;
    }
    ctx->pc = 0x1AB574u;
    SET_GPR_U32(ctx, 31, 0x1AB57Cu);
    ctx->pc = 0x1AB578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB574u;
            // 0x1ab578: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB57Cu; }
        if (ctx->pc != 0x1AB57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB57Cu; }
        if (ctx->pc != 0x1AB57Cu) { return; }
    }
    ctx->pc = 0x1AB57Cu;
label_1ab57c:
    // 0x1ab57c: 0x0  nop
    ctx->pc = 0x1ab57cu;
    // NOP
label_1ab580:
    // 0x1ab580: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ab580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ab584:
    // 0x1ab584: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ab584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab588:
    // 0x1ab588: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ab588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ab58c:
    // 0x1ab58c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ab58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab590:
    // 0x1ab590: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ab590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ab594:
    // 0x1ab594: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ab594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ab598:
    // 0x1ab598: 0x0  nop
    ctx->pc = 0x1ab598u;
    // NOP
label_1ab59c:
    // 0x1ab59c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1ab59cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1ab5a0:
    // 0x1ab5a0: 0xc053740  jal         func_14DD00
label_1ab5a4:
    if (ctx->pc == 0x1AB5A4u) {
        ctx->pc = 0x1AB5A4u;
            // 0x1ab5a4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1AB5A8u;
        goto label_1ab5a8;
    }
    ctx->pc = 0x1AB5A0u;
    SET_GPR_U32(ctx, 31, 0x1AB5A8u);
    ctx->pc = 0x1AB5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5A0u;
            // 0x1ab5a4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5A8u; }
        if (ctx->pc != 0x1AB5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5A8u; }
        if (ctx->pc != 0x1AB5A8u) { return; }
    }
    ctx->pc = 0x1AB5A8u;
label_1ab5a8:
    // 0x1ab5a8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ab5ac:
    // 0x1ab5ac: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1ab5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ab5b0:
    // 0x1ab5b0: 0xc07b0fc  jal         func_1EC3F0
label_1ab5b4:
    if (ctx->pc == 0x1AB5B4u) {
        ctx->pc = 0x1AB5B4u;
            // 0x1ab5b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AB5B8u;
        goto label_1ab5b8;
    }
    ctx->pc = 0x1AB5B0u;
    SET_GPR_U32(ctx, 31, 0x1AB5B8u);
    ctx->pc = 0x1AB5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5B0u;
            // 0x1ab5b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5B8u; }
        if (ctx->pc != 0x1AB5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5B8u; }
        if (ctx->pc != 0x1AB5B8u) { return; }
    }
    ctx->pc = 0x1AB5B8u;
label_1ab5b8:
    // 0x1ab5b8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ab5bc:
    // 0x1ab5bc: 0x40f809  jalr        $v0
label_1ab5c0:
    if (ctx->pc == 0x1AB5C0u) {
        ctx->pc = 0x1AB5C0u;
            // 0x1ab5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5C4u;
        goto label_1ab5c4;
    }
    ctx->pc = 0x1AB5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB5C4u);
        ctx->pc = 0x1AB5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5BCu;
            // 0x1ab5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA610u: goto label_1aa610;
            case 0x1AA614u: goto label_1aa614;
            case 0x1AA618u: goto label_1aa618;
            case 0x1AA61Cu: goto label_1aa61c;
            case 0x1AA620u: goto label_1aa620;
            case 0x1AA624u: goto label_1aa624;
            case 0x1AA628u: goto label_1aa628;
            case 0x1AA62Cu: goto label_1aa62c;
            case 0x1AA630u: goto label_1aa630;
            case 0x1AA634u: goto label_1aa634;
            case 0x1AA638u: goto label_1aa638;
            case 0x1AA63Cu: goto label_1aa63c;
            case 0x1AA640u: goto label_1aa640;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA648u: goto label_1aa648;
            case 0x1AA64Cu: goto label_1aa64c;
            case 0x1AA650u: goto label_1aa650;
            case 0x1AA654u: goto label_1aa654;
            case 0x1AA658u: goto label_1aa658;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA660u: goto label_1aa660;
            case 0x1AA664u: goto label_1aa664;
            case 0x1AA668u: goto label_1aa668;
            case 0x1AA66Cu: goto label_1aa66c;
            case 0x1AA670u: goto label_1aa670;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA678u: goto label_1aa678;
            case 0x1AA67Cu: goto label_1aa67c;
            case 0x1AA680u: goto label_1aa680;
            case 0x1AA684u: goto label_1aa684;
            case 0x1AA688u: goto label_1aa688;
            case 0x1AA68Cu: goto label_1aa68c;
            case 0x1AA690u: goto label_1aa690;
            case 0x1AA694u: goto label_1aa694;
            case 0x1AA698u: goto label_1aa698;
            case 0x1AA69Cu: goto label_1aa69c;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6A4u: goto label_1aa6a4;
            case 0x1AA6A8u: goto label_1aa6a8;
            case 0x1AA6ACu: goto label_1aa6ac;
            case 0x1AA6B0u: goto label_1aa6b0;
            case 0x1AA6B4u: goto label_1aa6b4;
            case 0x1AA6B8u: goto label_1aa6b8;
            case 0x1AA6BCu: goto label_1aa6bc;
            case 0x1AA6C0u: goto label_1aa6c0;
            case 0x1AA6C4u: goto label_1aa6c4;
            case 0x1AA6C8u: goto label_1aa6c8;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6D0u: goto label_1aa6d0;
            case 0x1AA6D4u: goto label_1aa6d4;
            case 0x1AA6D8u: goto label_1aa6d8;
            case 0x1AA6DCu: goto label_1aa6dc;
            case 0x1AA6E0u: goto label_1aa6e0;
            case 0x1AA6E4u: goto label_1aa6e4;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA6ECu: goto label_1aa6ec;
            case 0x1AA6F0u: goto label_1aa6f0;
            case 0x1AA6F4u: goto label_1aa6f4;
            case 0x1AA6F8u: goto label_1aa6f8;
            case 0x1AA6FCu: goto label_1aa6fc;
            case 0x1AA700u: goto label_1aa700;
            case 0x1AA704u: goto label_1aa704;
            case 0x1AA708u: goto label_1aa708;
            case 0x1AA70Cu: goto label_1aa70c;
            case 0x1AA710u: goto label_1aa710;
            case 0x1AA714u: goto label_1aa714;
            case 0x1AA718u: goto label_1aa718;
            case 0x1AA71Cu: goto label_1aa71c;
            case 0x1AA720u: goto label_1aa720;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA728u: goto label_1aa728;
            case 0x1AA72Cu: goto label_1aa72c;
            case 0x1AA730u: goto label_1aa730;
            case 0x1AA734u: goto label_1aa734;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA73Cu: goto label_1aa73c;
            case 0x1AA740u: goto label_1aa740;
            case 0x1AA744u: goto label_1aa744;
            case 0x1AA748u: goto label_1aa748;
            case 0x1AA74Cu: goto label_1aa74c;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA754u: goto label_1aa754;
            case 0x1AA758u: goto label_1aa758;
            case 0x1AA75Cu: goto label_1aa75c;
            case 0x1AA760u: goto label_1aa760;
            case 0x1AA764u: goto label_1aa764;
            case 0x1AA768u: goto label_1aa768;
            case 0x1AA76Cu: goto label_1aa76c;
            case 0x1AA770u: goto label_1aa770;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA778u: goto label_1aa778;
            case 0x1AA77Cu: goto label_1aa77c;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA784u: goto label_1aa784;
            case 0x1AA788u: goto label_1aa788;
            case 0x1AA78Cu: goto label_1aa78c;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA794u: goto label_1aa794;
            case 0x1AA798u: goto label_1aa798;
            case 0x1AA79Cu: goto label_1aa79c;
            case 0x1AA7A0u: goto label_1aa7a0;
            case 0x1AA7A4u: goto label_1aa7a4;
            case 0x1AA7A8u: goto label_1aa7a8;
            case 0x1AA7ACu: goto label_1aa7ac;
            case 0x1AA7B0u: goto label_1aa7b0;
            case 0x1AA7B4u: goto label_1aa7b4;
            case 0x1AA7B8u: goto label_1aa7b8;
            case 0x1AA7BCu: goto label_1aa7bc;
            case 0x1AA7C0u: goto label_1aa7c0;
            case 0x1AA7C4u: goto label_1aa7c4;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA7CCu: goto label_1aa7cc;
            case 0x1AA7D0u: goto label_1aa7d0;
            case 0x1AA7D4u: goto label_1aa7d4;
            case 0x1AA7D8u: goto label_1aa7d8;
            case 0x1AA7DCu: goto label_1aa7dc;
            case 0x1AA7E0u: goto label_1aa7e0;
            case 0x1AA7E4u: goto label_1aa7e4;
            case 0x1AA7E8u: goto label_1aa7e8;
            case 0x1AA7ECu: goto label_1aa7ec;
            case 0x1AA7F0u: goto label_1aa7f0;
            case 0x1AA7F4u: goto label_1aa7f4;
            case 0x1AA7F8u: goto label_1aa7f8;
            case 0x1AA7FCu: goto label_1aa7fc;
            case 0x1AA800u: goto label_1aa800;
            case 0x1AA804u: goto label_1aa804;
            case 0x1AA808u: goto label_1aa808;
            case 0x1AA80Cu: goto label_1aa80c;
            case 0x1AA810u: goto label_1aa810;
            case 0x1AA814u: goto label_1aa814;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA81Cu: goto label_1aa81c;
            case 0x1AA820u: goto label_1aa820;
            case 0x1AA824u: goto label_1aa824;
            case 0x1AA828u: goto label_1aa828;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA830u: goto label_1aa830;
            case 0x1AA834u: goto label_1aa834;
            case 0x1AA838u: goto label_1aa838;
            case 0x1AA83Cu: goto label_1aa83c;
            case 0x1AA840u: goto label_1aa840;
            case 0x1AA844u: goto label_1aa844;
            case 0x1AA848u: goto label_1aa848;
            case 0x1AA84Cu: goto label_1aa84c;
            case 0x1AA850u: goto label_1aa850;
            case 0x1AA854u: goto label_1aa854;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA85Cu: goto label_1aa85c;
            case 0x1AA860u: goto label_1aa860;
            case 0x1AA864u: goto label_1aa864;
            case 0x1AA868u: goto label_1aa868;
            case 0x1AA86Cu: goto label_1aa86c;
            case 0x1AA870u: goto label_1aa870;
            case 0x1AA874u: goto label_1aa874;
            case 0x1AA878u: goto label_1aa878;
            case 0x1AA87Cu: goto label_1aa87c;
            case 0x1AA880u: goto label_1aa880;
            case 0x1AA884u: goto label_1aa884;
            case 0x1AA888u: goto label_1aa888;
            case 0x1AA88Cu: goto label_1aa88c;
            case 0x1AA890u: goto label_1aa890;
            case 0x1AA894u: goto label_1aa894;
            case 0x1AA898u: goto label_1aa898;
            case 0x1AA89Cu: goto label_1aa89c;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8A4u: goto label_1aa8a4;
            case 0x1AA8A8u: goto label_1aa8a8;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA8B4u: goto label_1aa8b4;
            case 0x1AA8B8u: goto label_1aa8b8;
            case 0x1AA8BCu: goto label_1aa8bc;
            case 0x1AA8C0u: goto label_1aa8c0;
            case 0x1AA8C4u: goto label_1aa8c4;
            case 0x1AA8C8u: goto label_1aa8c8;
            case 0x1AA8CCu: goto label_1aa8cc;
            case 0x1AA8D0u: goto label_1aa8d0;
            case 0x1AA8D4u: goto label_1aa8d4;
            case 0x1AA8D8u: goto label_1aa8d8;
            case 0x1AA8DCu: goto label_1aa8dc;
            case 0x1AA8E0u: goto label_1aa8e0;
            case 0x1AA8E4u: goto label_1aa8e4;
            case 0x1AA8E8u: goto label_1aa8e8;
            case 0x1AA8ECu: goto label_1aa8ec;
            case 0x1AA8F0u: goto label_1aa8f0;
            case 0x1AA8F4u: goto label_1aa8f4;
            case 0x1AA8F8u: goto label_1aa8f8;
            case 0x1AA8FCu: goto label_1aa8fc;
            case 0x1AA900u: goto label_1aa900;
            case 0x1AA904u: goto label_1aa904;
            case 0x1AA908u: goto label_1aa908;
            case 0x1AA90Cu: goto label_1aa90c;
            case 0x1AA910u: goto label_1aa910;
            case 0x1AA914u: goto label_1aa914;
            case 0x1AA918u: goto label_1aa918;
            case 0x1AA91Cu: goto label_1aa91c;
            case 0x1AA920u: goto label_1aa920;
            case 0x1AA924u: goto label_1aa924;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA92Cu: goto label_1aa92c;
            case 0x1AA930u: goto label_1aa930;
            case 0x1AA934u: goto label_1aa934;
            case 0x1AA938u: goto label_1aa938;
            case 0x1AA93Cu: goto label_1aa93c;
            case 0x1AA940u: goto label_1aa940;
            case 0x1AA944u: goto label_1aa944;
            case 0x1AA948u: goto label_1aa948;
            case 0x1AA94Cu: goto label_1aa94c;
            case 0x1AA950u: goto label_1aa950;
            case 0x1AA954u: goto label_1aa954;
            case 0x1AA958u: goto label_1aa958;
            case 0x1AA95Cu: goto label_1aa95c;
            case 0x1AA960u: goto label_1aa960;
            case 0x1AA964u: goto label_1aa964;
            case 0x1AA968u: goto label_1aa968;
            case 0x1AA96Cu: goto label_1aa96c;
            case 0x1AA970u: goto label_1aa970;
            case 0x1AA974u: goto label_1aa974;
            case 0x1AA978u: goto label_1aa978;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA980u: goto label_1aa980;
            case 0x1AA984u: goto label_1aa984;
            case 0x1AA988u: goto label_1aa988;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AA994u: goto label_1aa994;
            case 0x1AA998u: goto label_1aa998;
            case 0x1AA99Cu: goto label_1aa99c;
            case 0x1AA9A0u: goto label_1aa9a0;
            case 0x1AA9A4u: goto label_1aa9a4;
            case 0x1AA9A8u: goto label_1aa9a8;
            case 0x1AA9ACu: goto label_1aa9ac;
            case 0x1AA9B0u: goto label_1aa9b0;
            case 0x1AA9B4u: goto label_1aa9b4;
            case 0x1AA9B8u: goto label_1aa9b8;
            case 0x1AA9BCu: goto label_1aa9bc;
            case 0x1AA9C0u: goto label_1aa9c0;
            case 0x1AA9C4u: goto label_1aa9c4;
            case 0x1AA9C8u: goto label_1aa9c8;
            case 0x1AA9CCu: goto label_1aa9cc;
            case 0x1AA9D0u: goto label_1aa9d0;
            case 0x1AA9D4u: goto label_1aa9d4;
            case 0x1AA9D8u: goto label_1aa9d8;
            case 0x1AA9DCu: goto label_1aa9dc;
            case 0x1AA9E0u: goto label_1aa9e0;
            case 0x1AA9E4u: goto label_1aa9e4;
            case 0x1AA9E8u: goto label_1aa9e8;
            case 0x1AA9ECu: goto label_1aa9ec;
            case 0x1AA9F0u: goto label_1aa9f0;
            case 0x1AA9F4u: goto label_1aa9f4;
            case 0x1AA9F8u: goto label_1aa9f8;
            case 0x1AA9FCu: goto label_1aa9fc;
            case 0x1AAA00u: goto label_1aaa00;
            case 0x1AAA04u: goto label_1aaa04;
            case 0x1AAA08u: goto label_1aaa08;
            case 0x1AAA0Cu: goto label_1aaa0c;
            case 0x1AAA10u: goto label_1aaa10;
            case 0x1AAA14u: goto label_1aaa14;
            case 0x1AAA18u: goto label_1aaa18;
            case 0x1AAA1Cu: goto label_1aaa1c;
            case 0x1AAA20u: goto label_1aaa20;
            case 0x1AAA24u: goto label_1aaa24;
            case 0x1AAA28u: goto label_1aaa28;
            case 0x1AAA2Cu: goto label_1aaa2c;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA38u: goto label_1aaa38;
            case 0x1AAA3Cu: goto label_1aaa3c;
            case 0x1AAA40u: goto label_1aaa40;
            case 0x1AAA44u: goto label_1aaa44;
            case 0x1AAA48u: goto label_1aaa48;
            case 0x1AAA4Cu: goto label_1aaa4c;
            case 0x1AAA50u: goto label_1aaa50;
            case 0x1AAA54u: goto label_1aaa54;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA5Cu: goto label_1aaa5c;
            case 0x1AAA60u: goto label_1aaa60;
            case 0x1AAA64u: goto label_1aaa64;
            case 0x1AAA68u: goto label_1aaa68;
            case 0x1AAA6Cu: goto label_1aaa6c;
            case 0x1AAA70u: goto label_1aaa70;
            case 0x1AAA74u: goto label_1aaa74;
            case 0x1AAA78u: goto label_1aaa78;
            case 0x1AAA7Cu: goto label_1aaa7c;
            case 0x1AAA80u: goto label_1aaa80;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA88u: goto label_1aaa88;
            case 0x1AAA8Cu: goto label_1aaa8c;
            case 0x1AAA90u: goto label_1aaa90;
            case 0x1AAA94u: goto label_1aaa94;
            case 0x1AAA98u: goto label_1aaa98;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAA0u: goto label_1aaaa0;
            case 0x1AAAA4u: goto label_1aaaa4;
            case 0x1AAAA8u: goto label_1aaaa8;
            case 0x1AAAACu: goto label_1aaaac;
            case 0x1AAAB0u: goto label_1aaab0;
            case 0x1AAAB4u: goto label_1aaab4;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAABCu: goto label_1aaabc;
            case 0x1AAAC0u: goto label_1aaac0;
            case 0x1AAAC4u: goto label_1aaac4;
            case 0x1AAAC8u: goto label_1aaac8;
            case 0x1AAACCu: goto label_1aaacc;
            case 0x1AAAD0u: goto label_1aaad0;
            case 0x1AAAD4u: goto label_1aaad4;
            case 0x1AAAD8u: goto label_1aaad8;
            case 0x1AAADCu: goto label_1aaadc;
            case 0x1AAAE0u: goto label_1aaae0;
            case 0x1AAAE4u: goto label_1aaae4;
            case 0x1AAAE8u: goto label_1aaae8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAAF0u: goto label_1aaaf0;
            case 0x1AAAF4u: goto label_1aaaf4;
            case 0x1AAAF8u: goto label_1aaaf8;
            case 0x1AAAFCu: goto label_1aaafc;
            case 0x1AAB00u: goto label_1aab00;
            case 0x1AAB04u: goto label_1aab04;
            case 0x1AAB08u: goto label_1aab08;
            case 0x1AAB0Cu: goto label_1aab0c;
            case 0x1AAB10u: goto label_1aab10;
            case 0x1AAB14u: goto label_1aab14;
            case 0x1AAB18u: goto label_1aab18;
            case 0x1AAB1Cu: goto label_1aab1c;
            case 0x1AAB20u: goto label_1aab20;
            case 0x1AAB24u: goto label_1aab24;
            case 0x1AAB28u: goto label_1aab28;
            case 0x1AAB2Cu: goto label_1aab2c;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB38u: goto label_1aab38;
            case 0x1AAB3Cu: goto label_1aab3c;
            case 0x1AAB40u: goto label_1aab40;
            case 0x1AAB44u: goto label_1aab44;
            case 0x1AAB48u: goto label_1aab48;
            case 0x1AAB4Cu: goto label_1aab4c;
            case 0x1AAB50u: goto label_1aab50;
            case 0x1AAB54u: goto label_1aab54;
            case 0x1AAB58u: goto label_1aab58;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AAB60u: goto label_1aab60;
            case 0x1AAB64u: goto label_1aab64;
            case 0x1AAB68u: goto label_1aab68;
            case 0x1AAB6Cu: goto label_1aab6c;
            case 0x1AAB70u: goto label_1aab70;
            case 0x1AAB74u: goto label_1aab74;
            case 0x1AAB78u: goto label_1aab78;
            case 0x1AAB7Cu: goto label_1aab7c;
            case 0x1AAB80u: goto label_1aab80;
            case 0x1AAB84u: goto label_1aab84;
            case 0x1AAB88u: goto label_1aab88;
            case 0x1AAB8Cu: goto label_1aab8c;
            case 0x1AAB90u: goto label_1aab90;
            case 0x1AAB94u: goto label_1aab94;
            case 0x1AAB98u: goto label_1aab98;
            case 0x1AAB9Cu: goto label_1aab9c;
            case 0x1AABA0u: goto label_1aaba0;
            case 0x1AABA4u: goto label_1aaba4;
            case 0x1AABA8u: goto label_1aaba8;
            case 0x1AABACu: goto label_1aabac;
            case 0x1AABB0u: goto label_1aabb0;
            case 0x1AABB4u: goto label_1aabb4;
            case 0x1AABB8u: goto label_1aabb8;
            case 0x1AABBCu: goto label_1aabbc;
            case 0x1AABC0u: goto label_1aabc0;
            case 0x1AABC4u: goto label_1aabc4;
            case 0x1AABC8u: goto label_1aabc8;
            case 0x1AABCCu: goto label_1aabcc;
            case 0x1AABD0u: goto label_1aabd0;
            case 0x1AABD4u: goto label_1aabd4;
            case 0x1AABD8u: goto label_1aabd8;
            case 0x1AABDCu: goto label_1aabdc;
            case 0x1AABE0u: goto label_1aabe0;
            case 0x1AABE4u: goto label_1aabe4;
            case 0x1AABE8u: goto label_1aabe8;
            case 0x1AABECu: goto label_1aabec;
            case 0x1AABF0u: goto label_1aabf0;
            case 0x1AABF4u: goto label_1aabf4;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC00u: goto label_1aac00;
            case 0x1AAC04u: goto label_1aac04;
            case 0x1AAC08u: goto label_1aac08;
            case 0x1AAC0Cu: goto label_1aac0c;
            case 0x1AAC10u: goto label_1aac10;
            case 0x1AAC14u: goto label_1aac14;
            case 0x1AAC18u: goto label_1aac18;
            case 0x1AAC1Cu: goto label_1aac1c;
            case 0x1AAC20u: goto label_1aac20;
            case 0x1AAC24u: goto label_1aac24;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC2Cu: goto label_1aac2c;
            case 0x1AAC30u: goto label_1aac30;
            case 0x1AAC34u: goto label_1aac34;
            case 0x1AAC38u: goto label_1aac38;
            case 0x1AAC3Cu: goto label_1aac3c;
            case 0x1AAC40u: goto label_1aac40;
            case 0x1AAC44u: goto label_1aac44;
            case 0x1AAC48u: goto label_1aac48;
            case 0x1AAC4Cu: goto label_1aac4c;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC54u: goto label_1aac54;
            case 0x1AAC58u: goto label_1aac58;
            case 0x1AAC5Cu: goto label_1aac5c;
            case 0x1AAC60u: goto label_1aac60;
            case 0x1AAC64u: goto label_1aac64;
            case 0x1AAC68u: goto label_1aac68;
            case 0x1AAC6Cu: goto label_1aac6c;
            case 0x1AAC70u: goto label_1aac70;
            case 0x1AAC74u: goto label_1aac74;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC7Cu: goto label_1aac7c;
            case 0x1AAC80u: goto label_1aac80;
            case 0x1AAC84u: goto label_1aac84;
            case 0x1AAC88u: goto label_1aac88;
            case 0x1AAC8Cu: goto label_1aac8c;
            case 0x1AAC90u: goto label_1aac90;
            case 0x1AAC94u: goto label_1aac94;
            case 0x1AAC98u: goto label_1aac98;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACA0u: goto label_1aaca0;
            case 0x1AACA4u: goto label_1aaca4;
            case 0x1AACA8u: goto label_1aaca8;
            case 0x1AACACu: goto label_1aacac;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACB4u: goto label_1aacb4;
            case 0x1AACB8u: goto label_1aacb8;
            case 0x1AACBCu: goto label_1aacbc;
            case 0x1AACC0u: goto label_1aacc0;
            case 0x1AACC4u: goto label_1aacc4;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACCCu: goto label_1aaccc;
            case 0x1AACD0u: goto label_1aacd0;
            case 0x1AACD4u: goto label_1aacd4;
            case 0x1AACD8u: goto label_1aacd8;
            case 0x1AACDCu: goto label_1aacdc;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            case 0x1AACECu: goto label_1aacec;
            case 0x1AACF0u: goto label_1aacf0;
            case 0x1AACF4u: goto label_1aacf4;
            case 0x1AACF8u: goto label_1aacf8;
            case 0x1AACFCu: goto label_1aacfc;
            case 0x1AAD00u: goto label_1aad00;
            case 0x1AAD04u: goto label_1aad04;
            case 0x1AAD08u: goto label_1aad08;
            case 0x1AAD0Cu: goto label_1aad0c;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD14u: goto label_1aad14;
            case 0x1AAD18u: goto label_1aad18;
            case 0x1AAD1Cu: goto label_1aad1c;
            case 0x1AAD20u: goto label_1aad20;
            case 0x1AAD24u: goto label_1aad24;
            case 0x1AAD28u: goto label_1aad28;
            case 0x1AAD2Cu: goto label_1aad2c;
            case 0x1AAD30u: goto label_1aad30;
            case 0x1AAD34u: goto label_1aad34;
            case 0x1AAD38u: goto label_1aad38;
            case 0x1AAD3Cu: goto label_1aad3c;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD44u: goto label_1aad44;
            case 0x1AAD48u: goto label_1aad48;
            case 0x1AAD4Cu: goto label_1aad4c;
            case 0x1AAD50u: goto label_1aad50;
            case 0x1AAD54u: goto label_1aad54;
            case 0x1AAD58u: goto label_1aad58;
            case 0x1AAD5Cu: goto label_1aad5c;
            case 0x1AAD60u: goto label_1aad60;
            case 0x1AAD64u: goto label_1aad64;
            case 0x1AAD68u: goto label_1aad68;
            case 0x1AAD6Cu: goto label_1aad6c;
            case 0x1AAD70u: goto label_1aad70;
            case 0x1AAD74u: goto label_1aad74;
            case 0x1AAD78u: goto label_1aad78;
            case 0x1AAD7Cu: goto label_1aad7c;
            case 0x1AAD80u: goto label_1aad80;
            case 0x1AAD84u: goto label_1aad84;
            case 0x1AAD88u: goto label_1aad88;
            case 0x1AAD8Cu: goto label_1aad8c;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AAD94u: goto label_1aad94;
            case 0x1AAD98u: goto label_1aad98;
            case 0x1AAD9Cu: goto label_1aad9c;
            case 0x1AADA0u: goto label_1aada0;
            case 0x1AADA4u: goto label_1aada4;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AADACu: goto label_1aadac;
            case 0x1AADB0u: goto label_1aadb0;
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AADB8u: goto label_1aadb8;
            case 0x1AADBCu: goto label_1aadbc;
            case 0x1AADC0u: goto label_1aadc0;
            case 0x1AADC4u: goto label_1aadc4;
            case 0x1AADC8u: goto label_1aadc8;
            case 0x1AADCCu: goto label_1aadcc;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADD4u: goto label_1aadd4;
            case 0x1AADD8u: goto label_1aadd8;
            case 0x1AADDCu: goto label_1aaddc;
            case 0x1AADE0u: goto label_1aade0;
            case 0x1AADE4u: goto label_1aade4;
            case 0x1AADE8u: goto label_1aade8;
            case 0x1AADECu: goto label_1aadec;
            case 0x1AADF0u: goto label_1aadf0;
            case 0x1AADF4u: goto label_1aadf4;
            case 0x1AADF8u: goto label_1aadf8;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE00u: goto label_1aae00;
            case 0x1AAE04u: goto label_1aae04;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE10u: goto label_1aae10;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE18u: goto label_1aae18;
            case 0x1AAE1Cu: goto label_1aae1c;
            case 0x1AAE20u: goto label_1aae20;
            case 0x1AAE24u: goto label_1aae24;
            case 0x1AAE28u: goto label_1aae28;
            case 0x1AAE2Cu: goto label_1aae2c;
            case 0x1AAE30u: goto label_1aae30;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE38u: goto label_1aae38;
            case 0x1AAE3Cu: goto label_1aae3c;
            case 0x1AAE40u: goto label_1aae40;
            case 0x1AAE44u: goto label_1aae44;
            case 0x1AAE48u: goto label_1aae48;
            case 0x1AAE4Cu: goto label_1aae4c;
            case 0x1AAE50u: goto label_1aae50;
            case 0x1AAE54u: goto label_1aae54;
            case 0x1AAE58u: goto label_1aae58;
            case 0x1AAE5Cu: goto label_1aae5c;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE64u: goto label_1aae64;
            case 0x1AAE68u: goto label_1aae68;
            case 0x1AAE6Cu: goto label_1aae6c;
            case 0x1AAE70u: goto label_1aae70;
            case 0x1AAE74u: goto label_1aae74;
            case 0x1AAE78u: goto label_1aae78;
            case 0x1AAE7Cu: goto label_1aae7c;
            case 0x1AAE80u: goto label_1aae80;
            case 0x1AAE84u: goto label_1aae84;
            case 0x1AAE88u: goto label_1aae88;
            case 0x1AAE8Cu: goto label_1aae8c;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAE94u: goto label_1aae94;
            case 0x1AAE98u: goto label_1aae98;
            case 0x1AAE9Cu: goto label_1aae9c;
            case 0x1AAEA0u: goto label_1aaea0;
            case 0x1AAEA4u: goto label_1aaea4;
            case 0x1AAEA8u: goto label_1aaea8;
            case 0x1AAEACu: goto label_1aaeac;
            case 0x1AAEB0u: goto label_1aaeb0;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEB8u: goto label_1aaeb8;
            case 0x1AAEBCu: goto label_1aaebc;
            case 0x1AAEC0u: goto label_1aaec0;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEC8u: goto label_1aaec8;
            case 0x1AAECCu: goto label_1aaecc;
            case 0x1AAED0u: goto label_1aaed0;
            case 0x1AAED4u: goto label_1aaed4;
            case 0x1AAED8u: goto label_1aaed8;
            case 0x1AAEDCu: goto label_1aaedc;
            case 0x1AAEE0u: goto label_1aaee0;
            case 0x1AAEE4u: goto label_1aaee4;
            case 0x1AAEE8u: goto label_1aaee8;
            case 0x1AAEECu: goto label_1aaeec;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAEF4u: goto label_1aaef4;
            case 0x1AAEF8u: goto label_1aaef8;
            case 0x1AAEFCu: goto label_1aaefc;
            case 0x1AAF00u: goto label_1aaf00;
            case 0x1AAF04u: goto label_1aaf04;
            case 0x1AAF08u: goto label_1aaf08;
            case 0x1AAF0Cu: goto label_1aaf0c;
            case 0x1AAF10u: goto label_1aaf10;
            case 0x1AAF14u: goto label_1aaf14;
            case 0x1AAF18u: goto label_1aaf18;
            case 0x1AAF1Cu: goto label_1aaf1c;
            case 0x1AAF20u: goto label_1aaf20;
            case 0x1AAF24u: goto label_1aaf24;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF2Cu: goto label_1aaf2c;
            case 0x1AAF30u: goto label_1aaf30;
            case 0x1AAF34u: goto label_1aaf34;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF3Cu: goto label_1aaf3c;
            case 0x1AAF40u: goto label_1aaf40;
            case 0x1AAF44u: goto label_1aaf44;
            case 0x1AAF48u: goto label_1aaf48;
            case 0x1AAF4Cu: goto label_1aaf4c;
            case 0x1AAF50u: goto label_1aaf50;
            case 0x1AAF54u: goto label_1aaf54;
            case 0x1AAF58u: goto label_1aaf58;
            case 0x1AAF5Cu: goto label_1aaf5c;
            case 0x1AAF60u: goto label_1aaf60;
            case 0x1AAF64u: goto label_1aaf64;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF6Cu: goto label_1aaf6c;
            case 0x1AAF70u: goto label_1aaf70;
            case 0x1AAF74u: goto label_1aaf74;
            case 0x1AAF78u: goto label_1aaf78;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF80u: goto label_1aaf80;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAF8Cu: goto label_1aaf8c;
            case 0x1AAF90u: goto label_1aaf90;
            case 0x1AAF94u: goto label_1aaf94;
            case 0x1AAF98u: goto label_1aaf98;
            case 0x1AAF9Cu: goto label_1aaf9c;
            case 0x1AAFA0u: goto label_1aafa0;
            case 0x1AAFA4u: goto label_1aafa4;
            case 0x1AAFA8u: goto label_1aafa8;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFB0u: goto label_1aafb0;
            case 0x1AAFB4u: goto label_1aafb4;
            case 0x1AAFB8u: goto label_1aafb8;
            case 0x1AAFBCu: goto label_1aafbc;
            case 0x1AAFC0u: goto label_1aafc0;
            case 0x1AAFC4u: goto label_1aafc4;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFCCu: goto label_1aafcc;
            case 0x1AAFD0u: goto label_1aafd0;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFD8u: goto label_1aafd8;
            case 0x1AAFDCu: goto label_1aafdc;
            case 0x1AAFE0u: goto label_1aafe0;
            case 0x1AAFE4u: goto label_1aafe4;
            case 0x1AAFE8u: goto label_1aafe8;
            case 0x1AAFECu: goto label_1aafec;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AAFF4u: goto label_1aaff4;
            case 0x1AAFF8u: goto label_1aaff8;
            case 0x1AAFFCu: goto label_1aaffc;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB004u: goto label_1ab004;
            case 0x1AB008u: goto label_1ab008;
            case 0x1AB00Cu: goto label_1ab00c;
            case 0x1AB010u: goto label_1ab010;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB01Cu: goto label_1ab01c;
            case 0x1AB020u: goto label_1ab020;
            case 0x1AB024u: goto label_1ab024;
            case 0x1AB028u: goto label_1ab028;
            case 0x1AB02Cu: goto label_1ab02c;
            case 0x1AB030u: goto label_1ab030;
            case 0x1AB034u: goto label_1ab034;
            case 0x1AB038u: goto label_1ab038;
            case 0x1AB03Cu: goto label_1ab03c;
            case 0x1AB040u: goto label_1ab040;
            case 0x1AB044u: goto label_1ab044;
            case 0x1AB048u: goto label_1ab048;
            case 0x1AB04Cu: goto label_1ab04c;
            case 0x1AB050u: goto label_1ab050;
            case 0x1AB054u: goto label_1ab054;
            case 0x1AB058u: goto label_1ab058;
            case 0x1AB05Cu: goto label_1ab05c;
            case 0x1AB060u: goto label_1ab060;
            case 0x1AB064u: goto label_1ab064;
            case 0x1AB068u: goto label_1ab068;
            case 0x1AB06Cu: goto label_1ab06c;
            case 0x1AB070u: goto label_1ab070;
            case 0x1AB074u: goto label_1ab074;
            case 0x1AB078u: goto label_1ab078;
            case 0x1AB07Cu: goto label_1ab07c;
            case 0x1AB080u: goto label_1ab080;
            case 0x1AB084u: goto label_1ab084;
            case 0x1AB088u: goto label_1ab088;
            case 0x1AB08Cu: goto label_1ab08c;
            case 0x1AB090u: goto label_1ab090;
            case 0x1AB094u: goto label_1ab094;
            case 0x1AB098u: goto label_1ab098;
            case 0x1AB09Cu: goto label_1ab09c;
            case 0x1AB0A0u: goto label_1ab0a0;
            case 0x1AB0A4u: goto label_1ab0a4;
            case 0x1AB0A8u: goto label_1ab0a8;
            case 0x1AB0ACu: goto label_1ab0ac;
            case 0x1AB0B0u: goto label_1ab0b0;
            case 0x1AB0B4u: goto label_1ab0b4;
            case 0x1AB0B8u: goto label_1ab0b8;
            case 0x1AB0BCu: goto label_1ab0bc;
            case 0x1AB0C0u: goto label_1ab0c0;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0C8u: goto label_1ab0c8;
            case 0x1AB0CCu: goto label_1ab0cc;
            case 0x1AB0D0u: goto label_1ab0d0;
            case 0x1AB0D4u: goto label_1ab0d4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB0E0u: goto label_1ab0e0;
            case 0x1AB0E4u: goto label_1ab0e4;
            case 0x1AB0E8u: goto label_1ab0e8;
            case 0x1AB0ECu: goto label_1ab0ec;
            case 0x1AB0F0u: goto label_1ab0f0;
            case 0x1AB0F4u: goto label_1ab0f4;
            case 0x1AB0F8u: goto label_1ab0f8;
            case 0x1AB0FCu: goto label_1ab0fc;
            case 0x1AB100u: goto label_1ab100;
            case 0x1AB104u: goto label_1ab104;
            case 0x1AB108u: goto label_1ab108;
            case 0x1AB10Cu: goto label_1ab10c;
            case 0x1AB110u: goto label_1ab110;
            case 0x1AB114u: goto label_1ab114;
            case 0x1AB118u: goto label_1ab118;
            case 0x1AB11Cu: goto label_1ab11c;
            case 0x1AB120u: goto label_1ab120;
            case 0x1AB124u: goto label_1ab124;
            case 0x1AB128u: goto label_1ab128;
            case 0x1AB12Cu: goto label_1ab12c;
            case 0x1AB130u: goto label_1ab130;
            case 0x1AB134u: goto label_1ab134;
            case 0x1AB138u: goto label_1ab138;
            case 0x1AB13Cu: goto label_1ab13c;
            case 0x1AB140u: goto label_1ab140;
            case 0x1AB144u: goto label_1ab144;
            case 0x1AB148u: goto label_1ab148;
            case 0x1AB14Cu: goto label_1ab14c;
            case 0x1AB150u: goto label_1ab150;
            case 0x1AB154u: goto label_1ab154;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB15Cu: goto label_1ab15c;
            case 0x1AB160u: goto label_1ab160;
            case 0x1AB164u: goto label_1ab164;
            case 0x1AB168u: goto label_1ab168;
            case 0x1AB16Cu: goto label_1ab16c;
            case 0x1AB170u: goto label_1ab170;
            case 0x1AB174u: goto label_1ab174;
            case 0x1AB178u: goto label_1ab178;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB184u: goto label_1ab184;
            case 0x1AB188u: goto label_1ab188;
            case 0x1AB18Cu: goto label_1ab18c;
            case 0x1AB190u: goto label_1ab190;
            case 0x1AB194u: goto label_1ab194;
            case 0x1AB198u: goto label_1ab198;
            case 0x1AB19Cu: goto label_1ab19c;
            case 0x1AB1A0u: goto label_1ab1a0;
            case 0x1AB1A4u: goto label_1ab1a4;
            case 0x1AB1A8u: goto label_1ab1a8;
            case 0x1AB1ACu: goto label_1ab1ac;
            case 0x1AB1B0u: goto label_1ab1b0;
            case 0x1AB1B4u: goto label_1ab1b4;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C0u: goto label_1ab1c0;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1C8u: goto label_1ab1c8;
            case 0x1AB1CCu: goto label_1ab1cc;
            case 0x1AB1D0u: goto label_1ab1d0;
            case 0x1AB1D4u: goto label_1ab1d4;
            case 0x1AB1D8u: goto label_1ab1d8;
            case 0x1AB1DCu: goto label_1ab1dc;
            case 0x1AB1E0u: goto label_1ab1e0;
            case 0x1AB1E4u: goto label_1ab1e4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB1ECu: goto label_1ab1ec;
            case 0x1AB1F0u: goto label_1ab1f0;
            case 0x1AB1F4u: goto label_1ab1f4;
            case 0x1AB1F8u: goto label_1ab1f8;
            case 0x1AB1FCu: goto label_1ab1fc;
            case 0x1AB200u: goto label_1ab200;
            case 0x1AB204u: goto label_1ab204;
            case 0x1AB208u: goto label_1ab208;
            case 0x1AB20Cu: goto label_1ab20c;
            case 0x1AB210u: goto label_1ab210;
            case 0x1AB214u: goto label_1ab214;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB21Cu: goto label_1ab21c;
            case 0x1AB220u: goto label_1ab220;
            case 0x1AB224u: goto label_1ab224;
            case 0x1AB228u: goto label_1ab228;
            case 0x1AB22Cu: goto label_1ab22c;
            case 0x1AB230u: goto label_1ab230;
            case 0x1AB234u: goto label_1ab234;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB23Cu: goto label_1ab23c;
            case 0x1AB240u: goto label_1ab240;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB248u: goto label_1ab248;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB250u: goto label_1ab250;
            case 0x1AB254u: goto label_1ab254;
            case 0x1AB258u: goto label_1ab258;
            case 0x1AB25Cu: goto label_1ab25c;
            case 0x1AB260u: goto label_1ab260;
            case 0x1AB264u: goto label_1ab264;
            case 0x1AB268u: goto label_1ab268;
            case 0x1AB26Cu: goto label_1ab26c;
            case 0x1AB270u: goto label_1ab270;
            case 0x1AB274u: goto label_1ab274;
            case 0x1AB278u: goto label_1ab278;
            case 0x1AB27Cu: goto label_1ab27c;
            case 0x1AB280u: goto label_1ab280;
            case 0x1AB284u: goto label_1ab284;
            case 0x1AB288u: goto label_1ab288;
            case 0x1AB28Cu: goto label_1ab28c;
            case 0x1AB290u: goto label_1ab290;
            case 0x1AB294u: goto label_1ab294;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB29Cu: goto label_1ab29c;
            case 0x1AB2A0u: goto label_1ab2a0;
            case 0x1AB2A4u: goto label_1ab2a4;
            case 0x1AB2A8u: goto label_1ab2a8;
            case 0x1AB2ACu: goto label_1ab2ac;
            case 0x1AB2B0u: goto label_1ab2b0;
            case 0x1AB2B4u: goto label_1ab2b4;
            case 0x1AB2B8u: goto label_1ab2b8;
            case 0x1AB2BCu: goto label_1ab2bc;
            case 0x1AB2C0u: goto label_1ab2c0;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2C8u: goto label_1ab2c8;
            case 0x1AB2CCu: goto label_1ab2cc;
            case 0x1AB2D0u: goto label_1ab2d0;
            case 0x1AB2D4u: goto label_1ab2d4;
            case 0x1AB2D8u: goto label_1ab2d8;
            case 0x1AB2DCu: goto label_1ab2dc;
            case 0x1AB2E0u: goto label_1ab2e0;
            case 0x1AB2E4u: goto label_1ab2e4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB2F0u: goto label_1ab2f0;
            case 0x1AB2F4u: goto label_1ab2f4;
            case 0x1AB2F8u: goto label_1ab2f8;
            case 0x1AB2FCu: goto label_1ab2fc;
            case 0x1AB300u: goto label_1ab300;
            case 0x1AB304u: goto label_1ab304;
            case 0x1AB308u: goto label_1ab308;
            case 0x1AB30Cu: goto label_1ab30c;
            case 0x1AB310u: goto label_1ab310;
            case 0x1AB314u: goto label_1ab314;
            case 0x1AB318u: goto label_1ab318;
            case 0x1AB31Cu: goto label_1ab31c;
            case 0x1AB320u: goto label_1ab320;
            case 0x1AB324u: goto label_1ab324;
            case 0x1AB328u: goto label_1ab328;
            case 0x1AB32Cu: goto label_1ab32c;
            case 0x1AB330u: goto label_1ab330;
            case 0x1AB334u: goto label_1ab334;
            case 0x1AB338u: goto label_1ab338;
            case 0x1AB33Cu: goto label_1ab33c;
            case 0x1AB340u: goto label_1ab340;
            case 0x1AB344u: goto label_1ab344;
            case 0x1AB348u: goto label_1ab348;
            case 0x1AB34Cu: goto label_1ab34c;
            case 0x1AB350u: goto label_1ab350;
            case 0x1AB354u: goto label_1ab354;
            case 0x1AB358u: goto label_1ab358;
            case 0x1AB35Cu: goto label_1ab35c;
            case 0x1AB360u: goto label_1ab360;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB368u: goto label_1ab368;
            case 0x1AB36Cu: goto label_1ab36c;
            case 0x1AB370u: goto label_1ab370;
            case 0x1AB374u: goto label_1ab374;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB380u: goto label_1ab380;
            case 0x1AB384u: goto label_1ab384;
            case 0x1AB388u: goto label_1ab388;
            case 0x1AB38Cu: goto label_1ab38c;
            case 0x1AB390u: goto label_1ab390;
            case 0x1AB394u: goto label_1ab394;
            case 0x1AB398u: goto label_1ab398;
            case 0x1AB39Cu: goto label_1ab39c;
            case 0x1AB3A0u: goto label_1ab3a0;
            case 0x1AB3A4u: goto label_1ab3a4;
            case 0x1AB3A8u: goto label_1ab3a8;
            case 0x1AB3ACu: goto label_1ab3ac;
            case 0x1AB3B0u: goto label_1ab3b0;
            case 0x1AB3B4u: goto label_1ab3b4;
            case 0x1AB3B8u: goto label_1ab3b8;
            case 0x1AB3BCu: goto label_1ab3bc;
            case 0x1AB3C0u: goto label_1ab3c0;
            case 0x1AB3C4u: goto label_1ab3c4;
            case 0x1AB3C8u: goto label_1ab3c8;
            case 0x1AB3CCu: goto label_1ab3cc;
            case 0x1AB3D0u: goto label_1ab3d0;
            case 0x1AB3D4u: goto label_1ab3d4;
            case 0x1AB3D8u: goto label_1ab3d8;
            case 0x1AB3DCu: goto label_1ab3dc;
            case 0x1AB3E0u: goto label_1ab3e0;
            case 0x1AB3E4u: goto label_1ab3e4;
            case 0x1AB3E8u: goto label_1ab3e8;
            case 0x1AB3ECu: goto label_1ab3ec;
            case 0x1AB3F0u: goto label_1ab3f0;
            case 0x1AB3F4u: goto label_1ab3f4;
            case 0x1AB3F8u: goto label_1ab3f8;
            case 0x1AB3FCu: goto label_1ab3fc;
            case 0x1AB400u: goto label_1ab400;
            case 0x1AB404u: goto label_1ab404;
            case 0x1AB408u: goto label_1ab408;
            case 0x1AB40Cu: goto label_1ab40c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB414u: goto label_1ab414;
            case 0x1AB418u: goto label_1ab418;
            case 0x1AB41Cu: goto label_1ab41c;
            case 0x1AB420u: goto label_1ab420;
            case 0x1AB424u: goto label_1ab424;
            case 0x1AB428u: goto label_1ab428;
            case 0x1AB42Cu: goto label_1ab42c;
            case 0x1AB430u: goto label_1ab430;
            case 0x1AB434u: goto label_1ab434;
            case 0x1AB438u: goto label_1ab438;
            case 0x1AB43Cu: goto label_1ab43c;
            case 0x1AB440u: goto label_1ab440;
            case 0x1AB444u: goto label_1ab444;
            case 0x1AB448u: goto label_1ab448;
            case 0x1AB44Cu: goto label_1ab44c;
            case 0x1AB450u: goto label_1ab450;
            case 0x1AB454u: goto label_1ab454;
            case 0x1AB458u: goto label_1ab458;
            case 0x1AB45Cu: goto label_1ab45c;
            case 0x1AB460u: goto label_1ab460;
            case 0x1AB464u: goto label_1ab464;
            case 0x1AB468u: goto label_1ab468;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB470u: goto label_1ab470;
            case 0x1AB474u: goto label_1ab474;
            case 0x1AB478u: goto label_1ab478;
            case 0x1AB47Cu: goto label_1ab47c;
            case 0x1AB480u: goto label_1ab480;
            case 0x1AB484u: goto label_1ab484;
            case 0x1AB488u: goto label_1ab488;
            case 0x1AB48Cu: goto label_1ab48c;
            case 0x1AB490u: goto label_1ab490;
            case 0x1AB494u: goto label_1ab494;
            case 0x1AB498u: goto label_1ab498;
            case 0x1AB49Cu: goto label_1ab49c;
            case 0x1AB4A0u: goto label_1ab4a0;
            case 0x1AB4A4u: goto label_1ab4a4;
            case 0x1AB4A8u: goto label_1ab4a8;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4B0u: goto label_1ab4b0;
            case 0x1AB4B4u: goto label_1ab4b4;
            case 0x1AB4B8u: goto label_1ab4b8;
            case 0x1AB4BCu: goto label_1ab4bc;
            case 0x1AB4C0u: goto label_1ab4c0;
            case 0x1AB4C4u: goto label_1ab4c4;
            case 0x1AB4C8u: goto label_1ab4c8;
            case 0x1AB4CCu: goto label_1ab4cc;
            case 0x1AB4D0u: goto label_1ab4d0;
            case 0x1AB4D4u: goto label_1ab4d4;
            case 0x1AB4D8u: goto label_1ab4d8;
            case 0x1AB4DCu: goto label_1ab4dc;
            case 0x1AB4E0u: goto label_1ab4e0;
            case 0x1AB4E4u: goto label_1ab4e4;
            case 0x1AB4E8u: goto label_1ab4e8;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB4F0u: goto label_1ab4f0;
            case 0x1AB4F4u: goto label_1ab4f4;
            case 0x1AB4F8u: goto label_1ab4f8;
            case 0x1AB4FCu: goto label_1ab4fc;
            case 0x1AB500u: goto label_1ab500;
            case 0x1AB504u: goto label_1ab504;
            case 0x1AB508u: goto label_1ab508;
            case 0x1AB50Cu: goto label_1ab50c;
            case 0x1AB510u: goto label_1ab510;
            case 0x1AB514u: goto label_1ab514;
            case 0x1AB518u: goto label_1ab518;
            case 0x1AB51Cu: goto label_1ab51c;
            case 0x1AB520u: goto label_1ab520;
            case 0x1AB524u: goto label_1ab524;
            case 0x1AB528u: goto label_1ab528;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB530u: goto label_1ab530;
            case 0x1AB534u: goto label_1ab534;
            case 0x1AB538u: goto label_1ab538;
            case 0x1AB53Cu: goto label_1ab53c;
            case 0x1AB540u: goto label_1ab540;
            case 0x1AB544u: goto label_1ab544;
            case 0x1AB548u: goto label_1ab548;
            case 0x1AB54Cu: goto label_1ab54c;
            case 0x1AB550u: goto label_1ab550;
            case 0x1AB554u: goto label_1ab554;
            case 0x1AB558u: goto label_1ab558;
            case 0x1AB55Cu: goto label_1ab55c;
            case 0x1AB560u: goto label_1ab560;
            case 0x1AB564u: goto label_1ab564;
            case 0x1AB568u: goto label_1ab568;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB570u: goto label_1ab570;
            case 0x1AB574u: goto label_1ab574;
            case 0x1AB578u: goto label_1ab578;
            case 0x1AB57Cu: goto label_1ab57c;
            case 0x1AB580u: goto label_1ab580;
            case 0x1AB584u: goto label_1ab584;
            case 0x1AB588u: goto label_1ab588;
            case 0x1AB58Cu: goto label_1ab58c;
            case 0x1AB590u: goto label_1ab590;
            case 0x1AB594u: goto label_1ab594;
            case 0x1AB598u: goto label_1ab598;
            case 0x1AB59Cu: goto label_1ab59c;
            case 0x1AB5A0u: goto label_1ab5a0;
            case 0x1AB5A4u: goto label_1ab5a4;
            case 0x1AB5A8u: goto label_1ab5a8;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5B0u: goto label_1ab5b0;
            case 0x1AB5B4u: goto label_1ab5b4;
            case 0x1AB5B8u: goto label_1ab5b8;
            case 0x1AB5BCu: goto label_1ab5bc;
            case 0x1AB5C0u: goto label_1ab5c0;
            case 0x1AB5C4u: goto label_1ab5c4;
            case 0x1AB5C8u: goto label_1ab5c8;
            case 0x1AB5CCu: goto label_1ab5cc;
            case 0x1AB5D0u: goto label_1ab5d0;
            case 0x1AB5D4u: goto label_1ab5d4;
            case 0x1AB5D8u: goto label_1ab5d8;
            case 0x1AB5DCu: goto label_1ab5dc;
            case 0x1AB5E0u: goto label_1ab5e0;
            case 0x1AB5E4u: goto label_1ab5e4;
            case 0x1AB5E8u: goto label_1ab5e8;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB5F0u: goto label_1ab5f0;
            case 0x1AB5F4u: goto label_1ab5f4;
            case 0x1AB5F8u: goto label_1ab5f8;
            case 0x1AB5FCu: goto label_1ab5fc;
            case 0x1AB600u: goto label_1ab600;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5C4u; }
            if (ctx->pc != 0x1AB5C4u) { return; }
        }
    }
    ctx->pc = 0x1AB5C4u;
label_1ab5c4:
    // 0x1ab5c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ab5c8:
    if (ctx->pc == 0x1AB5C8u) {
        ctx->pc = 0x1AB5CCu;
        goto label_1ab5cc;
    }
    ctx->pc = 0x1AB5C4u;
    {
        const bool branch_taken_0x1ab5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab5c4) {
            ctx->pc = 0x1AB5F0u;
            goto label_1ab5f0;
        }
    }
    ctx->pc = 0x1AB5CCu;
label_1ab5cc:
    // 0x1ab5cc: 0x0  nop
    ctx->pc = 0x1ab5ccu;
    // NOP
label_1ab5d0:
    // 0x1ab5d0: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1ab5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1ab5d4:
    // 0x1ab5d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ab5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ab5d8:
    // 0x1ab5d8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1ab5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1ab5dc:
    // 0x1ab5dc: 0x24c6a3d0  addiu       $a2, $a2, -0x5C30
    ctx->pc = 0x1ab5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943696));
label_1ab5e0:
    // 0x1ab5e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ab5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5e4:
    // 0x1ab5e4: 0xc053ca4  jal         func_14F290
label_1ab5e8:
    if (ctx->pc == 0x1AB5E8u) {
        ctx->pc = 0x1AB5E8u;
            // 0x1ab5e8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5ECu;
        goto label_1ab5ec;
    }
    ctx->pc = 0x1AB5E4u;
    SET_GPR_U32(ctx, 31, 0x1AB5ECu);
    ctx->pc = 0x1AB5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5E4u;
            // 0x1ab5e8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5ECu; }
        if (ctx->pc != 0x1AB5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5ECu; }
        if (ctx->pc != 0x1AB5ECu) { return; }
    }
    ctx->pc = 0x1AB5ECu;
label_1ab5ec:
    // 0x1ab5ec: 0x0  nop
    ctx->pc = 0x1ab5ecu;
    // NOP
label_1ab5f0:
    // 0x1ab5f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab5f4:
    // 0x1ab5f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ab5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab5f8:
    // 0x1ab5f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ab5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab5fc:
    // 0x1ab5fc: 0x3e00008  jr          $ra
label_1ab600:
    if (ctx->pc == 0x1AB600u) {
        ctx->pc = 0x1AB600u;
            // 0x1ab600: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1AB604u;
        goto label_fallthrough_0x1ab5fc;
    }
    ctx->pc = 0x1AB5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5FCu;
            // 0x1ab600: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA610u: goto label_1aa610;
            case 0x1AA614u: goto label_1aa614;
            case 0x1AA618u: goto label_1aa618;
            case 0x1AA61Cu: goto label_1aa61c;
            case 0x1AA620u: goto label_1aa620;
            case 0x1AA624u: goto label_1aa624;
            case 0x1AA628u: goto label_1aa628;
            case 0x1AA62Cu: goto label_1aa62c;
            case 0x1AA630u: goto label_1aa630;
            case 0x1AA634u: goto label_1aa634;
            case 0x1AA638u: goto label_1aa638;
            case 0x1AA63Cu: goto label_1aa63c;
            case 0x1AA640u: goto label_1aa640;
            case 0x1AA644u: goto label_1aa644;
            case 0x1AA648u: goto label_1aa648;
            case 0x1AA64Cu: goto label_1aa64c;
            case 0x1AA650u: goto label_1aa650;
            case 0x1AA654u: goto label_1aa654;
            case 0x1AA658u: goto label_1aa658;
            case 0x1AA65Cu: goto label_1aa65c;
            case 0x1AA660u: goto label_1aa660;
            case 0x1AA664u: goto label_1aa664;
            case 0x1AA668u: goto label_1aa668;
            case 0x1AA66Cu: goto label_1aa66c;
            case 0x1AA670u: goto label_1aa670;
            case 0x1AA674u: goto label_1aa674;
            case 0x1AA678u: goto label_1aa678;
            case 0x1AA67Cu: goto label_1aa67c;
            case 0x1AA680u: goto label_1aa680;
            case 0x1AA684u: goto label_1aa684;
            case 0x1AA688u: goto label_1aa688;
            case 0x1AA68Cu: goto label_1aa68c;
            case 0x1AA690u: goto label_1aa690;
            case 0x1AA694u: goto label_1aa694;
            case 0x1AA698u: goto label_1aa698;
            case 0x1AA69Cu: goto label_1aa69c;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6A4u: goto label_1aa6a4;
            case 0x1AA6A8u: goto label_1aa6a8;
            case 0x1AA6ACu: goto label_1aa6ac;
            case 0x1AA6B0u: goto label_1aa6b0;
            case 0x1AA6B4u: goto label_1aa6b4;
            case 0x1AA6B8u: goto label_1aa6b8;
            case 0x1AA6BCu: goto label_1aa6bc;
            case 0x1AA6C0u: goto label_1aa6c0;
            case 0x1AA6C4u: goto label_1aa6c4;
            case 0x1AA6C8u: goto label_1aa6c8;
            case 0x1AA6CCu: goto label_1aa6cc;
            case 0x1AA6D0u: goto label_1aa6d0;
            case 0x1AA6D4u: goto label_1aa6d4;
            case 0x1AA6D8u: goto label_1aa6d8;
            case 0x1AA6DCu: goto label_1aa6dc;
            case 0x1AA6E0u: goto label_1aa6e0;
            case 0x1AA6E4u: goto label_1aa6e4;
            case 0x1AA6E8u: goto label_1aa6e8;
            case 0x1AA6ECu: goto label_1aa6ec;
            case 0x1AA6F0u: goto label_1aa6f0;
            case 0x1AA6F4u: goto label_1aa6f4;
            case 0x1AA6F8u: goto label_1aa6f8;
            case 0x1AA6FCu: goto label_1aa6fc;
            case 0x1AA700u: goto label_1aa700;
            case 0x1AA704u: goto label_1aa704;
            case 0x1AA708u: goto label_1aa708;
            case 0x1AA70Cu: goto label_1aa70c;
            case 0x1AA710u: goto label_1aa710;
            case 0x1AA714u: goto label_1aa714;
            case 0x1AA718u: goto label_1aa718;
            case 0x1AA71Cu: goto label_1aa71c;
            case 0x1AA720u: goto label_1aa720;
            case 0x1AA724u: goto label_1aa724;
            case 0x1AA728u: goto label_1aa728;
            case 0x1AA72Cu: goto label_1aa72c;
            case 0x1AA730u: goto label_1aa730;
            case 0x1AA734u: goto label_1aa734;
            case 0x1AA738u: goto label_1aa738;
            case 0x1AA73Cu: goto label_1aa73c;
            case 0x1AA740u: goto label_1aa740;
            case 0x1AA744u: goto label_1aa744;
            case 0x1AA748u: goto label_1aa748;
            case 0x1AA74Cu: goto label_1aa74c;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA754u: goto label_1aa754;
            case 0x1AA758u: goto label_1aa758;
            case 0x1AA75Cu: goto label_1aa75c;
            case 0x1AA760u: goto label_1aa760;
            case 0x1AA764u: goto label_1aa764;
            case 0x1AA768u: goto label_1aa768;
            case 0x1AA76Cu: goto label_1aa76c;
            case 0x1AA770u: goto label_1aa770;
            case 0x1AA774u: goto label_1aa774;
            case 0x1AA778u: goto label_1aa778;
            case 0x1AA77Cu: goto label_1aa77c;
            case 0x1AA780u: goto label_1aa780;
            case 0x1AA784u: goto label_1aa784;
            case 0x1AA788u: goto label_1aa788;
            case 0x1AA78Cu: goto label_1aa78c;
            case 0x1AA790u: goto label_1aa790;
            case 0x1AA794u: goto label_1aa794;
            case 0x1AA798u: goto label_1aa798;
            case 0x1AA79Cu: goto label_1aa79c;
            case 0x1AA7A0u: goto label_1aa7a0;
            case 0x1AA7A4u: goto label_1aa7a4;
            case 0x1AA7A8u: goto label_1aa7a8;
            case 0x1AA7ACu: goto label_1aa7ac;
            case 0x1AA7B0u: goto label_1aa7b0;
            case 0x1AA7B4u: goto label_1aa7b4;
            case 0x1AA7B8u: goto label_1aa7b8;
            case 0x1AA7BCu: goto label_1aa7bc;
            case 0x1AA7C0u: goto label_1aa7c0;
            case 0x1AA7C4u: goto label_1aa7c4;
            case 0x1AA7C8u: goto label_1aa7c8;
            case 0x1AA7CCu: goto label_1aa7cc;
            case 0x1AA7D0u: goto label_1aa7d0;
            case 0x1AA7D4u: goto label_1aa7d4;
            case 0x1AA7D8u: goto label_1aa7d8;
            case 0x1AA7DCu: goto label_1aa7dc;
            case 0x1AA7E0u: goto label_1aa7e0;
            case 0x1AA7E4u: goto label_1aa7e4;
            case 0x1AA7E8u: goto label_1aa7e8;
            case 0x1AA7ECu: goto label_1aa7ec;
            case 0x1AA7F0u: goto label_1aa7f0;
            case 0x1AA7F4u: goto label_1aa7f4;
            case 0x1AA7F8u: goto label_1aa7f8;
            case 0x1AA7FCu: goto label_1aa7fc;
            case 0x1AA800u: goto label_1aa800;
            case 0x1AA804u: goto label_1aa804;
            case 0x1AA808u: goto label_1aa808;
            case 0x1AA80Cu: goto label_1aa80c;
            case 0x1AA810u: goto label_1aa810;
            case 0x1AA814u: goto label_1aa814;
            case 0x1AA818u: goto label_1aa818;
            case 0x1AA81Cu: goto label_1aa81c;
            case 0x1AA820u: goto label_1aa820;
            case 0x1AA824u: goto label_1aa824;
            case 0x1AA828u: goto label_1aa828;
            case 0x1AA82Cu: goto label_1aa82c;
            case 0x1AA830u: goto label_1aa830;
            case 0x1AA834u: goto label_1aa834;
            case 0x1AA838u: goto label_1aa838;
            case 0x1AA83Cu: goto label_1aa83c;
            case 0x1AA840u: goto label_1aa840;
            case 0x1AA844u: goto label_1aa844;
            case 0x1AA848u: goto label_1aa848;
            case 0x1AA84Cu: goto label_1aa84c;
            case 0x1AA850u: goto label_1aa850;
            case 0x1AA854u: goto label_1aa854;
            case 0x1AA858u: goto label_1aa858;
            case 0x1AA85Cu: goto label_1aa85c;
            case 0x1AA860u: goto label_1aa860;
            case 0x1AA864u: goto label_1aa864;
            case 0x1AA868u: goto label_1aa868;
            case 0x1AA86Cu: goto label_1aa86c;
            case 0x1AA870u: goto label_1aa870;
            case 0x1AA874u: goto label_1aa874;
            case 0x1AA878u: goto label_1aa878;
            case 0x1AA87Cu: goto label_1aa87c;
            case 0x1AA880u: goto label_1aa880;
            case 0x1AA884u: goto label_1aa884;
            case 0x1AA888u: goto label_1aa888;
            case 0x1AA88Cu: goto label_1aa88c;
            case 0x1AA890u: goto label_1aa890;
            case 0x1AA894u: goto label_1aa894;
            case 0x1AA898u: goto label_1aa898;
            case 0x1AA89Cu: goto label_1aa89c;
            case 0x1AA8A0u: goto label_1aa8a0;
            case 0x1AA8A4u: goto label_1aa8a4;
            case 0x1AA8A8u: goto label_1aa8a8;
            case 0x1AA8ACu: goto label_1aa8ac;
            case 0x1AA8B0u: goto label_1aa8b0;
            case 0x1AA8B4u: goto label_1aa8b4;
            case 0x1AA8B8u: goto label_1aa8b8;
            case 0x1AA8BCu: goto label_1aa8bc;
            case 0x1AA8C0u: goto label_1aa8c0;
            case 0x1AA8C4u: goto label_1aa8c4;
            case 0x1AA8C8u: goto label_1aa8c8;
            case 0x1AA8CCu: goto label_1aa8cc;
            case 0x1AA8D0u: goto label_1aa8d0;
            case 0x1AA8D4u: goto label_1aa8d4;
            case 0x1AA8D8u: goto label_1aa8d8;
            case 0x1AA8DCu: goto label_1aa8dc;
            case 0x1AA8E0u: goto label_1aa8e0;
            case 0x1AA8E4u: goto label_1aa8e4;
            case 0x1AA8E8u: goto label_1aa8e8;
            case 0x1AA8ECu: goto label_1aa8ec;
            case 0x1AA8F0u: goto label_1aa8f0;
            case 0x1AA8F4u: goto label_1aa8f4;
            case 0x1AA8F8u: goto label_1aa8f8;
            case 0x1AA8FCu: goto label_1aa8fc;
            case 0x1AA900u: goto label_1aa900;
            case 0x1AA904u: goto label_1aa904;
            case 0x1AA908u: goto label_1aa908;
            case 0x1AA90Cu: goto label_1aa90c;
            case 0x1AA910u: goto label_1aa910;
            case 0x1AA914u: goto label_1aa914;
            case 0x1AA918u: goto label_1aa918;
            case 0x1AA91Cu: goto label_1aa91c;
            case 0x1AA920u: goto label_1aa920;
            case 0x1AA924u: goto label_1aa924;
            case 0x1AA928u: goto label_1aa928;
            case 0x1AA92Cu: goto label_1aa92c;
            case 0x1AA930u: goto label_1aa930;
            case 0x1AA934u: goto label_1aa934;
            case 0x1AA938u: goto label_1aa938;
            case 0x1AA93Cu: goto label_1aa93c;
            case 0x1AA940u: goto label_1aa940;
            case 0x1AA944u: goto label_1aa944;
            case 0x1AA948u: goto label_1aa948;
            case 0x1AA94Cu: goto label_1aa94c;
            case 0x1AA950u: goto label_1aa950;
            case 0x1AA954u: goto label_1aa954;
            case 0x1AA958u: goto label_1aa958;
            case 0x1AA95Cu: goto label_1aa95c;
            case 0x1AA960u: goto label_1aa960;
            case 0x1AA964u: goto label_1aa964;
            case 0x1AA968u: goto label_1aa968;
            case 0x1AA96Cu: goto label_1aa96c;
            case 0x1AA970u: goto label_1aa970;
            case 0x1AA974u: goto label_1aa974;
            case 0x1AA978u: goto label_1aa978;
            case 0x1AA97Cu: goto label_1aa97c;
            case 0x1AA980u: goto label_1aa980;
            case 0x1AA984u: goto label_1aa984;
            case 0x1AA988u: goto label_1aa988;
            case 0x1AA98Cu: goto label_1aa98c;
            case 0x1AA990u: goto label_1aa990;
            case 0x1AA994u: goto label_1aa994;
            case 0x1AA998u: goto label_1aa998;
            case 0x1AA99Cu: goto label_1aa99c;
            case 0x1AA9A0u: goto label_1aa9a0;
            case 0x1AA9A4u: goto label_1aa9a4;
            case 0x1AA9A8u: goto label_1aa9a8;
            case 0x1AA9ACu: goto label_1aa9ac;
            case 0x1AA9B0u: goto label_1aa9b0;
            case 0x1AA9B4u: goto label_1aa9b4;
            case 0x1AA9B8u: goto label_1aa9b8;
            case 0x1AA9BCu: goto label_1aa9bc;
            case 0x1AA9C0u: goto label_1aa9c0;
            case 0x1AA9C4u: goto label_1aa9c4;
            case 0x1AA9C8u: goto label_1aa9c8;
            case 0x1AA9CCu: goto label_1aa9cc;
            case 0x1AA9D0u: goto label_1aa9d0;
            case 0x1AA9D4u: goto label_1aa9d4;
            case 0x1AA9D8u: goto label_1aa9d8;
            case 0x1AA9DCu: goto label_1aa9dc;
            case 0x1AA9E0u: goto label_1aa9e0;
            case 0x1AA9E4u: goto label_1aa9e4;
            case 0x1AA9E8u: goto label_1aa9e8;
            case 0x1AA9ECu: goto label_1aa9ec;
            case 0x1AA9F0u: goto label_1aa9f0;
            case 0x1AA9F4u: goto label_1aa9f4;
            case 0x1AA9F8u: goto label_1aa9f8;
            case 0x1AA9FCu: goto label_1aa9fc;
            case 0x1AAA00u: goto label_1aaa00;
            case 0x1AAA04u: goto label_1aaa04;
            case 0x1AAA08u: goto label_1aaa08;
            case 0x1AAA0Cu: goto label_1aaa0c;
            case 0x1AAA10u: goto label_1aaa10;
            case 0x1AAA14u: goto label_1aaa14;
            case 0x1AAA18u: goto label_1aaa18;
            case 0x1AAA1Cu: goto label_1aaa1c;
            case 0x1AAA20u: goto label_1aaa20;
            case 0x1AAA24u: goto label_1aaa24;
            case 0x1AAA28u: goto label_1aaa28;
            case 0x1AAA2Cu: goto label_1aaa2c;
            case 0x1AAA30u: goto label_1aaa30;
            case 0x1AAA34u: goto label_1aaa34;
            case 0x1AAA38u: goto label_1aaa38;
            case 0x1AAA3Cu: goto label_1aaa3c;
            case 0x1AAA40u: goto label_1aaa40;
            case 0x1AAA44u: goto label_1aaa44;
            case 0x1AAA48u: goto label_1aaa48;
            case 0x1AAA4Cu: goto label_1aaa4c;
            case 0x1AAA50u: goto label_1aaa50;
            case 0x1AAA54u: goto label_1aaa54;
            case 0x1AAA58u: goto label_1aaa58;
            case 0x1AAA5Cu: goto label_1aaa5c;
            case 0x1AAA60u: goto label_1aaa60;
            case 0x1AAA64u: goto label_1aaa64;
            case 0x1AAA68u: goto label_1aaa68;
            case 0x1AAA6Cu: goto label_1aaa6c;
            case 0x1AAA70u: goto label_1aaa70;
            case 0x1AAA74u: goto label_1aaa74;
            case 0x1AAA78u: goto label_1aaa78;
            case 0x1AAA7Cu: goto label_1aaa7c;
            case 0x1AAA80u: goto label_1aaa80;
            case 0x1AAA84u: goto label_1aaa84;
            case 0x1AAA88u: goto label_1aaa88;
            case 0x1AAA8Cu: goto label_1aaa8c;
            case 0x1AAA90u: goto label_1aaa90;
            case 0x1AAA94u: goto label_1aaa94;
            case 0x1AAA98u: goto label_1aaa98;
            case 0x1AAA9Cu: goto label_1aaa9c;
            case 0x1AAAA0u: goto label_1aaaa0;
            case 0x1AAAA4u: goto label_1aaaa4;
            case 0x1AAAA8u: goto label_1aaaa8;
            case 0x1AAAACu: goto label_1aaaac;
            case 0x1AAAB0u: goto label_1aaab0;
            case 0x1AAAB4u: goto label_1aaab4;
            case 0x1AAAB8u: goto label_1aaab8;
            case 0x1AAABCu: goto label_1aaabc;
            case 0x1AAAC0u: goto label_1aaac0;
            case 0x1AAAC4u: goto label_1aaac4;
            case 0x1AAAC8u: goto label_1aaac8;
            case 0x1AAACCu: goto label_1aaacc;
            case 0x1AAAD0u: goto label_1aaad0;
            case 0x1AAAD4u: goto label_1aaad4;
            case 0x1AAAD8u: goto label_1aaad8;
            case 0x1AAADCu: goto label_1aaadc;
            case 0x1AAAE0u: goto label_1aaae0;
            case 0x1AAAE4u: goto label_1aaae4;
            case 0x1AAAE8u: goto label_1aaae8;
            case 0x1AAAECu: goto label_1aaaec;
            case 0x1AAAF0u: goto label_1aaaf0;
            case 0x1AAAF4u: goto label_1aaaf4;
            case 0x1AAAF8u: goto label_1aaaf8;
            case 0x1AAAFCu: goto label_1aaafc;
            case 0x1AAB00u: goto label_1aab00;
            case 0x1AAB04u: goto label_1aab04;
            case 0x1AAB08u: goto label_1aab08;
            case 0x1AAB0Cu: goto label_1aab0c;
            case 0x1AAB10u: goto label_1aab10;
            case 0x1AAB14u: goto label_1aab14;
            case 0x1AAB18u: goto label_1aab18;
            case 0x1AAB1Cu: goto label_1aab1c;
            case 0x1AAB20u: goto label_1aab20;
            case 0x1AAB24u: goto label_1aab24;
            case 0x1AAB28u: goto label_1aab28;
            case 0x1AAB2Cu: goto label_1aab2c;
            case 0x1AAB30u: goto label_1aab30;
            case 0x1AAB34u: goto label_1aab34;
            case 0x1AAB38u: goto label_1aab38;
            case 0x1AAB3Cu: goto label_1aab3c;
            case 0x1AAB40u: goto label_1aab40;
            case 0x1AAB44u: goto label_1aab44;
            case 0x1AAB48u: goto label_1aab48;
            case 0x1AAB4Cu: goto label_1aab4c;
            case 0x1AAB50u: goto label_1aab50;
            case 0x1AAB54u: goto label_1aab54;
            case 0x1AAB58u: goto label_1aab58;
            case 0x1AAB5Cu: goto label_1aab5c;
            case 0x1AAB60u: goto label_1aab60;
            case 0x1AAB64u: goto label_1aab64;
            case 0x1AAB68u: goto label_1aab68;
            case 0x1AAB6Cu: goto label_1aab6c;
            case 0x1AAB70u: goto label_1aab70;
            case 0x1AAB74u: goto label_1aab74;
            case 0x1AAB78u: goto label_1aab78;
            case 0x1AAB7Cu: goto label_1aab7c;
            case 0x1AAB80u: goto label_1aab80;
            case 0x1AAB84u: goto label_1aab84;
            case 0x1AAB88u: goto label_1aab88;
            case 0x1AAB8Cu: goto label_1aab8c;
            case 0x1AAB90u: goto label_1aab90;
            case 0x1AAB94u: goto label_1aab94;
            case 0x1AAB98u: goto label_1aab98;
            case 0x1AAB9Cu: goto label_1aab9c;
            case 0x1AABA0u: goto label_1aaba0;
            case 0x1AABA4u: goto label_1aaba4;
            case 0x1AABA8u: goto label_1aaba8;
            case 0x1AABACu: goto label_1aabac;
            case 0x1AABB0u: goto label_1aabb0;
            case 0x1AABB4u: goto label_1aabb4;
            case 0x1AABB8u: goto label_1aabb8;
            case 0x1AABBCu: goto label_1aabbc;
            case 0x1AABC0u: goto label_1aabc0;
            case 0x1AABC4u: goto label_1aabc4;
            case 0x1AABC8u: goto label_1aabc8;
            case 0x1AABCCu: goto label_1aabcc;
            case 0x1AABD0u: goto label_1aabd0;
            case 0x1AABD4u: goto label_1aabd4;
            case 0x1AABD8u: goto label_1aabd8;
            case 0x1AABDCu: goto label_1aabdc;
            case 0x1AABE0u: goto label_1aabe0;
            case 0x1AABE4u: goto label_1aabe4;
            case 0x1AABE8u: goto label_1aabe8;
            case 0x1AABECu: goto label_1aabec;
            case 0x1AABF0u: goto label_1aabf0;
            case 0x1AABF4u: goto label_1aabf4;
            case 0x1AABF8u: goto label_1aabf8;
            case 0x1AABFCu: goto label_1aabfc;
            case 0x1AAC00u: goto label_1aac00;
            case 0x1AAC04u: goto label_1aac04;
            case 0x1AAC08u: goto label_1aac08;
            case 0x1AAC0Cu: goto label_1aac0c;
            case 0x1AAC10u: goto label_1aac10;
            case 0x1AAC14u: goto label_1aac14;
            case 0x1AAC18u: goto label_1aac18;
            case 0x1AAC1Cu: goto label_1aac1c;
            case 0x1AAC20u: goto label_1aac20;
            case 0x1AAC24u: goto label_1aac24;
            case 0x1AAC28u: goto label_1aac28;
            case 0x1AAC2Cu: goto label_1aac2c;
            case 0x1AAC30u: goto label_1aac30;
            case 0x1AAC34u: goto label_1aac34;
            case 0x1AAC38u: goto label_1aac38;
            case 0x1AAC3Cu: goto label_1aac3c;
            case 0x1AAC40u: goto label_1aac40;
            case 0x1AAC44u: goto label_1aac44;
            case 0x1AAC48u: goto label_1aac48;
            case 0x1AAC4Cu: goto label_1aac4c;
            case 0x1AAC50u: goto label_1aac50;
            case 0x1AAC54u: goto label_1aac54;
            case 0x1AAC58u: goto label_1aac58;
            case 0x1AAC5Cu: goto label_1aac5c;
            case 0x1AAC60u: goto label_1aac60;
            case 0x1AAC64u: goto label_1aac64;
            case 0x1AAC68u: goto label_1aac68;
            case 0x1AAC6Cu: goto label_1aac6c;
            case 0x1AAC70u: goto label_1aac70;
            case 0x1AAC74u: goto label_1aac74;
            case 0x1AAC78u: goto label_1aac78;
            case 0x1AAC7Cu: goto label_1aac7c;
            case 0x1AAC80u: goto label_1aac80;
            case 0x1AAC84u: goto label_1aac84;
            case 0x1AAC88u: goto label_1aac88;
            case 0x1AAC8Cu: goto label_1aac8c;
            case 0x1AAC90u: goto label_1aac90;
            case 0x1AAC94u: goto label_1aac94;
            case 0x1AAC98u: goto label_1aac98;
            case 0x1AAC9Cu: goto label_1aac9c;
            case 0x1AACA0u: goto label_1aaca0;
            case 0x1AACA4u: goto label_1aaca4;
            case 0x1AACA8u: goto label_1aaca8;
            case 0x1AACACu: goto label_1aacac;
            case 0x1AACB0u: goto label_1aacb0;
            case 0x1AACB4u: goto label_1aacb4;
            case 0x1AACB8u: goto label_1aacb8;
            case 0x1AACBCu: goto label_1aacbc;
            case 0x1AACC0u: goto label_1aacc0;
            case 0x1AACC4u: goto label_1aacc4;
            case 0x1AACC8u: goto label_1aacc8;
            case 0x1AACCCu: goto label_1aaccc;
            case 0x1AACD0u: goto label_1aacd0;
            case 0x1AACD4u: goto label_1aacd4;
            case 0x1AACD8u: goto label_1aacd8;
            case 0x1AACDCu: goto label_1aacdc;
            case 0x1AACE0u: goto label_1aace0;
            case 0x1AACE4u: goto label_1aace4;
            case 0x1AACE8u: goto label_1aace8;
            case 0x1AACECu: goto label_1aacec;
            case 0x1AACF0u: goto label_1aacf0;
            case 0x1AACF4u: goto label_1aacf4;
            case 0x1AACF8u: goto label_1aacf8;
            case 0x1AACFCu: goto label_1aacfc;
            case 0x1AAD00u: goto label_1aad00;
            case 0x1AAD04u: goto label_1aad04;
            case 0x1AAD08u: goto label_1aad08;
            case 0x1AAD0Cu: goto label_1aad0c;
            case 0x1AAD10u: goto label_1aad10;
            case 0x1AAD14u: goto label_1aad14;
            case 0x1AAD18u: goto label_1aad18;
            case 0x1AAD1Cu: goto label_1aad1c;
            case 0x1AAD20u: goto label_1aad20;
            case 0x1AAD24u: goto label_1aad24;
            case 0x1AAD28u: goto label_1aad28;
            case 0x1AAD2Cu: goto label_1aad2c;
            case 0x1AAD30u: goto label_1aad30;
            case 0x1AAD34u: goto label_1aad34;
            case 0x1AAD38u: goto label_1aad38;
            case 0x1AAD3Cu: goto label_1aad3c;
            case 0x1AAD40u: goto label_1aad40;
            case 0x1AAD44u: goto label_1aad44;
            case 0x1AAD48u: goto label_1aad48;
            case 0x1AAD4Cu: goto label_1aad4c;
            case 0x1AAD50u: goto label_1aad50;
            case 0x1AAD54u: goto label_1aad54;
            case 0x1AAD58u: goto label_1aad58;
            case 0x1AAD5Cu: goto label_1aad5c;
            case 0x1AAD60u: goto label_1aad60;
            case 0x1AAD64u: goto label_1aad64;
            case 0x1AAD68u: goto label_1aad68;
            case 0x1AAD6Cu: goto label_1aad6c;
            case 0x1AAD70u: goto label_1aad70;
            case 0x1AAD74u: goto label_1aad74;
            case 0x1AAD78u: goto label_1aad78;
            case 0x1AAD7Cu: goto label_1aad7c;
            case 0x1AAD80u: goto label_1aad80;
            case 0x1AAD84u: goto label_1aad84;
            case 0x1AAD88u: goto label_1aad88;
            case 0x1AAD8Cu: goto label_1aad8c;
            case 0x1AAD90u: goto label_1aad90;
            case 0x1AAD94u: goto label_1aad94;
            case 0x1AAD98u: goto label_1aad98;
            case 0x1AAD9Cu: goto label_1aad9c;
            case 0x1AADA0u: goto label_1aada0;
            case 0x1AADA4u: goto label_1aada4;
            case 0x1AADA8u: goto label_1aada8;
            case 0x1AADACu: goto label_1aadac;
            case 0x1AADB0u: goto label_1aadb0;
            case 0x1AADB4u: goto label_1aadb4;
            case 0x1AADB8u: goto label_1aadb8;
            case 0x1AADBCu: goto label_1aadbc;
            case 0x1AADC0u: goto label_1aadc0;
            case 0x1AADC4u: goto label_1aadc4;
            case 0x1AADC8u: goto label_1aadc8;
            case 0x1AADCCu: goto label_1aadcc;
            case 0x1AADD0u: goto label_1aadd0;
            case 0x1AADD4u: goto label_1aadd4;
            case 0x1AADD8u: goto label_1aadd8;
            case 0x1AADDCu: goto label_1aaddc;
            case 0x1AADE0u: goto label_1aade0;
            case 0x1AADE4u: goto label_1aade4;
            case 0x1AADE8u: goto label_1aade8;
            case 0x1AADECu: goto label_1aadec;
            case 0x1AADF0u: goto label_1aadf0;
            case 0x1AADF4u: goto label_1aadf4;
            case 0x1AADF8u: goto label_1aadf8;
            case 0x1AADFCu: goto label_1aadfc;
            case 0x1AAE00u: goto label_1aae00;
            case 0x1AAE04u: goto label_1aae04;
            case 0x1AAE08u: goto label_1aae08;
            case 0x1AAE0Cu: goto label_1aae0c;
            case 0x1AAE10u: goto label_1aae10;
            case 0x1AAE14u: goto label_1aae14;
            case 0x1AAE18u: goto label_1aae18;
            case 0x1AAE1Cu: goto label_1aae1c;
            case 0x1AAE20u: goto label_1aae20;
            case 0x1AAE24u: goto label_1aae24;
            case 0x1AAE28u: goto label_1aae28;
            case 0x1AAE2Cu: goto label_1aae2c;
            case 0x1AAE30u: goto label_1aae30;
            case 0x1AAE34u: goto label_1aae34;
            case 0x1AAE38u: goto label_1aae38;
            case 0x1AAE3Cu: goto label_1aae3c;
            case 0x1AAE40u: goto label_1aae40;
            case 0x1AAE44u: goto label_1aae44;
            case 0x1AAE48u: goto label_1aae48;
            case 0x1AAE4Cu: goto label_1aae4c;
            case 0x1AAE50u: goto label_1aae50;
            case 0x1AAE54u: goto label_1aae54;
            case 0x1AAE58u: goto label_1aae58;
            case 0x1AAE5Cu: goto label_1aae5c;
            case 0x1AAE60u: goto label_1aae60;
            case 0x1AAE64u: goto label_1aae64;
            case 0x1AAE68u: goto label_1aae68;
            case 0x1AAE6Cu: goto label_1aae6c;
            case 0x1AAE70u: goto label_1aae70;
            case 0x1AAE74u: goto label_1aae74;
            case 0x1AAE78u: goto label_1aae78;
            case 0x1AAE7Cu: goto label_1aae7c;
            case 0x1AAE80u: goto label_1aae80;
            case 0x1AAE84u: goto label_1aae84;
            case 0x1AAE88u: goto label_1aae88;
            case 0x1AAE8Cu: goto label_1aae8c;
            case 0x1AAE90u: goto label_1aae90;
            case 0x1AAE94u: goto label_1aae94;
            case 0x1AAE98u: goto label_1aae98;
            case 0x1AAE9Cu: goto label_1aae9c;
            case 0x1AAEA0u: goto label_1aaea0;
            case 0x1AAEA4u: goto label_1aaea4;
            case 0x1AAEA8u: goto label_1aaea8;
            case 0x1AAEACu: goto label_1aaeac;
            case 0x1AAEB0u: goto label_1aaeb0;
            case 0x1AAEB4u: goto label_1aaeb4;
            case 0x1AAEB8u: goto label_1aaeb8;
            case 0x1AAEBCu: goto label_1aaebc;
            case 0x1AAEC0u: goto label_1aaec0;
            case 0x1AAEC4u: goto label_1aaec4;
            case 0x1AAEC8u: goto label_1aaec8;
            case 0x1AAECCu: goto label_1aaecc;
            case 0x1AAED0u: goto label_1aaed0;
            case 0x1AAED4u: goto label_1aaed4;
            case 0x1AAED8u: goto label_1aaed8;
            case 0x1AAEDCu: goto label_1aaedc;
            case 0x1AAEE0u: goto label_1aaee0;
            case 0x1AAEE4u: goto label_1aaee4;
            case 0x1AAEE8u: goto label_1aaee8;
            case 0x1AAEECu: goto label_1aaeec;
            case 0x1AAEF0u: goto label_1aaef0;
            case 0x1AAEF4u: goto label_1aaef4;
            case 0x1AAEF8u: goto label_1aaef8;
            case 0x1AAEFCu: goto label_1aaefc;
            case 0x1AAF00u: goto label_1aaf00;
            case 0x1AAF04u: goto label_1aaf04;
            case 0x1AAF08u: goto label_1aaf08;
            case 0x1AAF0Cu: goto label_1aaf0c;
            case 0x1AAF10u: goto label_1aaf10;
            case 0x1AAF14u: goto label_1aaf14;
            case 0x1AAF18u: goto label_1aaf18;
            case 0x1AAF1Cu: goto label_1aaf1c;
            case 0x1AAF20u: goto label_1aaf20;
            case 0x1AAF24u: goto label_1aaf24;
            case 0x1AAF28u: goto label_1aaf28;
            case 0x1AAF2Cu: goto label_1aaf2c;
            case 0x1AAF30u: goto label_1aaf30;
            case 0x1AAF34u: goto label_1aaf34;
            case 0x1AAF38u: goto label_1aaf38;
            case 0x1AAF3Cu: goto label_1aaf3c;
            case 0x1AAF40u: goto label_1aaf40;
            case 0x1AAF44u: goto label_1aaf44;
            case 0x1AAF48u: goto label_1aaf48;
            case 0x1AAF4Cu: goto label_1aaf4c;
            case 0x1AAF50u: goto label_1aaf50;
            case 0x1AAF54u: goto label_1aaf54;
            case 0x1AAF58u: goto label_1aaf58;
            case 0x1AAF5Cu: goto label_1aaf5c;
            case 0x1AAF60u: goto label_1aaf60;
            case 0x1AAF64u: goto label_1aaf64;
            case 0x1AAF68u: goto label_1aaf68;
            case 0x1AAF6Cu: goto label_1aaf6c;
            case 0x1AAF70u: goto label_1aaf70;
            case 0x1AAF74u: goto label_1aaf74;
            case 0x1AAF78u: goto label_1aaf78;
            case 0x1AAF7Cu: goto label_1aaf7c;
            case 0x1AAF80u: goto label_1aaf80;
            case 0x1AAF84u: goto label_1aaf84;
            case 0x1AAF88u: goto label_1aaf88;
            case 0x1AAF8Cu: goto label_1aaf8c;
            case 0x1AAF90u: goto label_1aaf90;
            case 0x1AAF94u: goto label_1aaf94;
            case 0x1AAF98u: goto label_1aaf98;
            case 0x1AAF9Cu: goto label_1aaf9c;
            case 0x1AAFA0u: goto label_1aafa0;
            case 0x1AAFA4u: goto label_1aafa4;
            case 0x1AAFA8u: goto label_1aafa8;
            case 0x1AAFACu: goto label_1aafac;
            case 0x1AAFB0u: goto label_1aafb0;
            case 0x1AAFB4u: goto label_1aafb4;
            case 0x1AAFB8u: goto label_1aafb8;
            case 0x1AAFBCu: goto label_1aafbc;
            case 0x1AAFC0u: goto label_1aafc0;
            case 0x1AAFC4u: goto label_1aafc4;
            case 0x1AAFC8u: goto label_1aafc8;
            case 0x1AAFCCu: goto label_1aafcc;
            case 0x1AAFD0u: goto label_1aafd0;
            case 0x1AAFD4u: goto label_1aafd4;
            case 0x1AAFD8u: goto label_1aafd8;
            case 0x1AAFDCu: goto label_1aafdc;
            case 0x1AAFE0u: goto label_1aafe0;
            case 0x1AAFE4u: goto label_1aafe4;
            case 0x1AAFE8u: goto label_1aafe8;
            case 0x1AAFECu: goto label_1aafec;
            case 0x1AAFF0u: goto label_1aaff0;
            case 0x1AAFF4u: goto label_1aaff4;
            case 0x1AAFF8u: goto label_1aaff8;
            case 0x1AAFFCu: goto label_1aaffc;
            case 0x1AB000u: goto label_1ab000;
            case 0x1AB004u: goto label_1ab004;
            case 0x1AB008u: goto label_1ab008;
            case 0x1AB00Cu: goto label_1ab00c;
            case 0x1AB010u: goto label_1ab010;
            case 0x1AB014u: goto label_1ab014;
            case 0x1AB018u: goto label_1ab018;
            case 0x1AB01Cu: goto label_1ab01c;
            case 0x1AB020u: goto label_1ab020;
            case 0x1AB024u: goto label_1ab024;
            case 0x1AB028u: goto label_1ab028;
            case 0x1AB02Cu: goto label_1ab02c;
            case 0x1AB030u: goto label_1ab030;
            case 0x1AB034u: goto label_1ab034;
            case 0x1AB038u: goto label_1ab038;
            case 0x1AB03Cu: goto label_1ab03c;
            case 0x1AB040u: goto label_1ab040;
            case 0x1AB044u: goto label_1ab044;
            case 0x1AB048u: goto label_1ab048;
            case 0x1AB04Cu: goto label_1ab04c;
            case 0x1AB050u: goto label_1ab050;
            case 0x1AB054u: goto label_1ab054;
            case 0x1AB058u: goto label_1ab058;
            case 0x1AB05Cu: goto label_1ab05c;
            case 0x1AB060u: goto label_1ab060;
            case 0x1AB064u: goto label_1ab064;
            case 0x1AB068u: goto label_1ab068;
            case 0x1AB06Cu: goto label_1ab06c;
            case 0x1AB070u: goto label_1ab070;
            case 0x1AB074u: goto label_1ab074;
            case 0x1AB078u: goto label_1ab078;
            case 0x1AB07Cu: goto label_1ab07c;
            case 0x1AB080u: goto label_1ab080;
            case 0x1AB084u: goto label_1ab084;
            case 0x1AB088u: goto label_1ab088;
            case 0x1AB08Cu: goto label_1ab08c;
            case 0x1AB090u: goto label_1ab090;
            case 0x1AB094u: goto label_1ab094;
            case 0x1AB098u: goto label_1ab098;
            case 0x1AB09Cu: goto label_1ab09c;
            case 0x1AB0A0u: goto label_1ab0a0;
            case 0x1AB0A4u: goto label_1ab0a4;
            case 0x1AB0A8u: goto label_1ab0a8;
            case 0x1AB0ACu: goto label_1ab0ac;
            case 0x1AB0B0u: goto label_1ab0b0;
            case 0x1AB0B4u: goto label_1ab0b4;
            case 0x1AB0B8u: goto label_1ab0b8;
            case 0x1AB0BCu: goto label_1ab0bc;
            case 0x1AB0C0u: goto label_1ab0c0;
            case 0x1AB0C4u: goto label_1ab0c4;
            case 0x1AB0C8u: goto label_1ab0c8;
            case 0x1AB0CCu: goto label_1ab0cc;
            case 0x1AB0D0u: goto label_1ab0d0;
            case 0x1AB0D4u: goto label_1ab0d4;
            case 0x1AB0D8u: goto label_1ab0d8;
            case 0x1AB0DCu: goto label_1ab0dc;
            case 0x1AB0E0u: goto label_1ab0e0;
            case 0x1AB0E4u: goto label_1ab0e4;
            case 0x1AB0E8u: goto label_1ab0e8;
            case 0x1AB0ECu: goto label_1ab0ec;
            case 0x1AB0F0u: goto label_1ab0f0;
            case 0x1AB0F4u: goto label_1ab0f4;
            case 0x1AB0F8u: goto label_1ab0f8;
            case 0x1AB0FCu: goto label_1ab0fc;
            case 0x1AB100u: goto label_1ab100;
            case 0x1AB104u: goto label_1ab104;
            case 0x1AB108u: goto label_1ab108;
            case 0x1AB10Cu: goto label_1ab10c;
            case 0x1AB110u: goto label_1ab110;
            case 0x1AB114u: goto label_1ab114;
            case 0x1AB118u: goto label_1ab118;
            case 0x1AB11Cu: goto label_1ab11c;
            case 0x1AB120u: goto label_1ab120;
            case 0x1AB124u: goto label_1ab124;
            case 0x1AB128u: goto label_1ab128;
            case 0x1AB12Cu: goto label_1ab12c;
            case 0x1AB130u: goto label_1ab130;
            case 0x1AB134u: goto label_1ab134;
            case 0x1AB138u: goto label_1ab138;
            case 0x1AB13Cu: goto label_1ab13c;
            case 0x1AB140u: goto label_1ab140;
            case 0x1AB144u: goto label_1ab144;
            case 0x1AB148u: goto label_1ab148;
            case 0x1AB14Cu: goto label_1ab14c;
            case 0x1AB150u: goto label_1ab150;
            case 0x1AB154u: goto label_1ab154;
            case 0x1AB158u: goto label_1ab158;
            case 0x1AB15Cu: goto label_1ab15c;
            case 0x1AB160u: goto label_1ab160;
            case 0x1AB164u: goto label_1ab164;
            case 0x1AB168u: goto label_1ab168;
            case 0x1AB16Cu: goto label_1ab16c;
            case 0x1AB170u: goto label_1ab170;
            case 0x1AB174u: goto label_1ab174;
            case 0x1AB178u: goto label_1ab178;
            case 0x1AB17Cu: goto label_1ab17c;
            case 0x1AB180u: goto label_1ab180;
            case 0x1AB184u: goto label_1ab184;
            case 0x1AB188u: goto label_1ab188;
            case 0x1AB18Cu: goto label_1ab18c;
            case 0x1AB190u: goto label_1ab190;
            case 0x1AB194u: goto label_1ab194;
            case 0x1AB198u: goto label_1ab198;
            case 0x1AB19Cu: goto label_1ab19c;
            case 0x1AB1A0u: goto label_1ab1a0;
            case 0x1AB1A4u: goto label_1ab1a4;
            case 0x1AB1A8u: goto label_1ab1a8;
            case 0x1AB1ACu: goto label_1ab1ac;
            case 0x1AB1B0u: goto label_1ab1b0;
            case 0x1AB1B4u: goto label_1ab1b4;
            case 0x1AB1B8u: goto label_1ab1b8;
            case 0x1AB1BCu: goto label_1ab1bc;
            case 0x1AB1C0u: goto label_1ab1c0;
            case 0x1AB1C4u: goto label_1ab1c4;
            case 0x1AB1C8u: goto label_1ab1c8;
            case 0x1AB1CCu: goto label_1ab1cc;
            case 0x1AB1D0u: goto label_1ab1d0;
            case 0x1AB1D4u: goto label_1ab1d4;
            case 0x1AB1D8u: goto label_1ab1d8;
            case 0x1AB1DCu: goto label_1ab1dc;
            case 0x1AB1E0u: goto label_1ab1e0;
            case 0x1AB1E4u: goto label_1ab1e4;
            case 0x1AB1E8u: goto label_1ab1e8;
            case 0x1AB1ECu: goto label_1ab1ec;
            case 0x1AB1F0u: goto label_1ab1f0;
            case 0x1AB1F4u: goto label_1ab1f4;
            case 0x1AB1F8u: goto label_1ab1f8;
            case 0x1AB1FCu: goto label_1ab1fc;
            case 0x1AB200u: goto label_1ab200;
            case 0x1AB204u: goto label_1ab204;
            case 0x1AB208u: goto label_1ab208;
            case 0x1AB20Cu: goto label_1ab20c;
            case 0x1AB210u: goto label_1ab210;
            case 0x1AB214u: goto label_1ab214;
            case 0x1AB218u: goto label_1ab218;
            case 0x1AB21Cu: goto label_1ab21c;
            case 0x1AB220u: goto label_1ab220;
            case 0x1AB224u: goto label_1ab224;
            case 0x1AB228u: goto label_1ab228;
            case 0x1AB22Cu: goto label_1ab22c;
            case 0x1AB230u: goto label_1ab230;
            case 0x1AB234u: goto label_1ab234;
            case 0x1AB238u: goto label_1ab238;
            case 0x1AB23Cu: goto label_1ab23c;
            case 0x1AB240u: goto label_1ab240;
            case 0x1AB244u: goto label_1ab244;
            case 0x1AB248u: goto label_1ab248;
            case 0x1AB24Cu: goto label_1ab24c;
            case 0x1AB250u: goto label_1ab250;
            case 0x1AB254u: goto label_1ab254;
            case 0x1AB258u: goto label_1ab258;
            case 0x1AB25Cu: goto label_1ab25c;
            case 0x1AB260u: goto label_1ab260;
            case 0x1AB264u: goto label_1ab264;
            case 0x1AB268u: goto label_1ab268;
            case 0x1AB26Cu: goto label_1ab26c;
            case 0x1AB270u: goto label_1ab270;
            case 0x1AB274u: goto label_1ab274;
            case 0x1AB278u: goto label_1ab278;
            case 0x1AB27Cu: goto label_1ab27c;
            case 0x1AB280u: goto label_1ab280;
            case 0x1AB284u: goto label_1ab284;
            case 0x1AB288u: goto label_1ab288;
            case 0x1AB28Cu: goto label_1ab28c;
            case 0x1AB290u: goto label_1ab290;
            case 0x1AB294u: goto label_1ab294;
            case 0x1AB298u: goto label_1ab298;
            case 0x1AB29Cu: goto label_1ab29c;
            case 0x1AB2A0u: goto label_1ab2a0;
            case 0x1AB2A4u: goto label_1ab2a4;
            case 0x1AB2A8u: goto label_1ab2a8;
            case 0x1AB2ACu: goto label_1ab2ac;
            case 0x1AB2B0u: goto label_1ab2b0;
            case 0x1AB2B4u: goto label_1ab2b4;
            case 0x1AB2B8u: goto label_1ab2b8;
            case 0x1AB2BCu: goto label_1ab2bc;
            case 0x1AB2C0u: goto label_1ab2c0;
            case 0x1AB2C4u: goto label_1ab2c4;
            case 0x1AB2C8u: goto label_1ab2c8;
            case 0x1AB2CCu: goto label_1ab2cc;
            case 0x1AB2D0u: goto label_1ab2d0;
            case 0x1AB2D4u: goto label_1ab2d4;
            case 0x1AB2D8u: goto label_1ab2d8;
            case 0x1AB2DCu: goto label_1ab2dc;
            case 0x1AB2E0u: goto label_1ab2e0;
            case 0x1AB2E4u: goto label_1ab2e4;
            case 0x1AB2E8u: goto label_1ab2e8;
            case 0x1AB2ECu: goto label_1ab2ec;
            case 0x1AB2F0u: goto label_1ab2f0;
            case 0x1AB2F4u: goto label_1ab2f4;
            case 0x1AB2F8u: goto label_1ab2f8;
            case 0x1AB2FCu: goto label_1ab2fc;
            case 0x1AB300u: goto label_1ab300;
            case 0x1AB304u: goto label_1ab304;
            case 0x1AB308u: goto label_1ab308;
            case 0x1AB30Cu: goto label_1ab30c;
            case 0x1AB310u: goto label_1ab310;
            case 0x1AB314u: goto label_1ab314;
            case 0x1AB318u: goto label_1ab318;
            case 0x1AB31Cu: goto label_1ab31c;
            case 0x1AB320u: goto label_1ab320;
            case 0x1AB324u: goto label_1ab324;
            case 0x1AB328u: goto label_1ab328;
            case 0x1AB32Cu: goto label_1ab32c;
            case 0x1AB330u: goto label_1ab330;
            case 0x1AB334u: goto label_1ab334;
            case 0x1AB338u: goto label_1ab338;
            case 0x1AB33Cu: goto label_1ab33c;
            case 0x1AB340u: goto label_1ab340;
            case 0x1AB344u: goto label_1ab344;
            case 0x1AB348u: goto label_1ab348;
            case 0x1AB34Cu: goto label_1ab34c;
            case 0x1AB350u: goto label_1ab350;
            case 0x1AB354u: goto label_1ab354;
            case 0x1AB358u: goto label_1ab358;
            case 0x1AB35Cu: goto label_1ab35c;
            case 0x1AB360u: goto label_1ab360;
            case 0x1AB364u: goto label_1ab364;
            case 0x1AB368u: goto label_1ab368;
            case 0x1AB36Cu: goto label_1ab36c;
            case 0x1AB370u: goto label_1ab370;
            case 0x1AB374u: goto label_1ab374;
            case 0x1AB378u: goto label_1ab378;
            case 0x1AB37Cu: goto label_1ab37c;
            case 0x1AB380u: goto label_1ab380;
            case 0x1AB384u: goto label_1ab384;
            case 0x1AB388u: goto label_1ab388;
            case 0x1AB38Cu: goto label_1ab38c;
            case 0x1AB390u: goto label_1ab390;
            case 0x1AB394u: goto label_1ab394;
            case 0x1AB398u: goto label_1ab398;
            case 0x1AB39Cu: goto label_1ab39c;
            case 0x1AB3A0u: goto label_1ab3a0;
            case 0x1AB3A4u: goto label_1ab3a4;
            case 0x1AB3A8u: goto label_1ab3a8;
            case 0x1AB3ACu: goto label_1ab3ac;
            case 0x1AB3B0u: goto label_1ab3b0;
            case 0x1AB3B4u: goto label_1ab3b4;
            case 0x1AB3B8u: goto label_1ab3b8;
            case 0x1AB3BCu: goto label_1ab3bc;
            case 0x1AB3C0u: goto label_1ab3c0;
            case 0x1AB3C4u: goto label_1ab3c4;
            case 0x1AB3C8u: goto label_1ab3c8;
            case 0x1AB3CCu: goto label_1ab3cc;
            case 0x1AB3D0u: goto label_1ab3d0;
            case 0x1AB3D4u: goto label_1ab3d4;
            case 0x1AB3D8u: goto label_1ab3d8;
            case 0x1AB3DCu: goto label_1ab3dc;
            case 0x1AB3E0u: goto label_1ab3e0;
            case 0x1AB3E4u: goto label_1ab3e4;
            case 0x1AB3E8u: goto label_1ab3e8;
            case 0x1AB3ECu: goto label_1ab3ec;
            case 0x1AB3F0u: goto label_1ab3f0;
            case 0x1AB3F4u: goto label_1ab3f4;
            case 0x1AB3F8u: goto label_1ab3f8;
            case 0x1AB3FCu: goto label_1ab3fc;
            case 0x1AB400u: goto label_1ab400;
            case 0x1AB404u: goto label_1ab404;
            case 0x1AB408u: goto label_1ab408;
            case 0x1AB40Cu: goto label_1ab40c;
            case 0x1AB410u: goto label_1ab410;
            case 0x1AB414u: goto label_1ab414;
            case 0x1AB418u: goto label_1ab418;
            case 0x1AB41Cu: goto label_1ab41c;
            case 0x1AB420u: goto label_1ab420;
            case 0x1AB424u: goto label_1ab424;
            case 0x1AB428u: goto label_1ab428;
            case 0x1AB42Cu: goto label_1ab42c;
            case 0x1AB430u: goto label_1ab430;
            case 0x1AB434u: goto label_1ab434;
            case 0x1AB438u: goto label_1ab438;
            case 0x1AB43Cu: goto label_1ab43c;
            case 0x1AB440u: goto label_1ab440;
            case 0x1AB444u: goto label_1ab444;
            case 0x1AB448u: goto label_1ab448;
            case 0x1AB44Cu: goto label_1ab44c;
            case 0x1AB450u: goto label_1ab450;
            case 0x1AB454u: goto label_1ab454;
            case 0x1AB458u: goto label_1ab458;
            case 0x1AB45Cu: goto label_1ab45c;
            case 0x1AB460u: goto label_1ab460;
            case 0x1AB464u: goto label_1ab464;
            case 0x1AB468u: goto label_1ab468;
            case 0x1AB46Cu: goto label_1ab46c;
            case 0x1AB470u: goto label_1ab470;
            case 0x1AB474u: goto label_1ab474;
            case 0x1AB478u: goto label_1ab478;
            case 0x1AB47Cu: goto label_1ab47c;
            case 0x1AB480u: goto label_1ab480;
            case 0x1AB484u: goto label_1ab484;
            case 0x1AB488u: goto label_1ab488;
            case 0x1AB48Cu: goto label_1ab48c;
            case 0x1AB490u: goto label_1ab490;
            case 0x1AB494u: goto label_1ab494;
            case 0x1AB498u: goto label_1ab498;
            case 0x1AB49Cu: goto label_1ab49c;
            case 0x1AB4A0u: goto label_1ab4a0;
            case 0x1AB4A4u: goto label_1ab4a4;
            case 0x1AB4A8u: goto label_1ab4a8;
            case 0x1AB4ACu: goto label_1ab4ac;
            case 0x1AB4B0u: goto label_1ab4b0;
            case 0x1AB4B4u: goto label_1ab4b4;
            case 0x1AB4B8u: goto label_1ab4b8;
            case 0x1AB4BCu: goto label_1ab4bc;
            case 0x1AB4C0u: goto label_1ab4c0;
            case 0x1AB4C4u: goto label_1ab4c4;
            case 0x1AB4C8u: goto label_1ab4c8;
            case 0x1AB4CCu: goto label_1ab4cc;
            case 0x1AB4D0u: goto label_1ab4d0;
            case 0x1AB4D4u: goto label_1ab4d4;
            case 0x1AB4D8u: goto label_1ab4d8;
            case 0x1AB4DCu: goto label_1ab4dc;
            case 0x1AB4E0u: goto label_1ab4e0;
            case 0x1AB4E4u: goto label_1ab4e4;
            case 0x1AB4E8u: goto label_1ab4e8;
            case 0x1AB4ECu: goto label_1ab4ec;
            case 0x1AB4F0u: goto label_1ab4f0;
            case 0x1AB4F4u: goto label_1ab4f4;
            case 0x1AB4F8u: goto label_1ab4f8;
            case 0x1AB4FCu: goto label_1ab4fc;
            case 0x1AB500u: goto label_1ab500;
            case 0x1AB504u: goto label_1ab504;
            case 0x1AB508u: goto label_1ab508;
            case 0x1AB50Cu: goto label_1ab50c;
            case 0x1AB510u: goto label_1ab510;
            case 0x1AB514u: goto label_1ab514;
            case 0x1AB518u: goto label_1ab518;
            case 0x1AB51Cu: goto label_1ab51c;
            case 0x1AB520u: goto label_1ab520;
            case 0x1AB524u: goto label_1ab524;
            case 0x1AB528u: goto label_1ab528;
            case 0x1AB52Cu: goto label_1ab52c;
            case 0x1AB530u: goto label_1ab530;
            case 0x1AB534u: goto label_1ab534;
            case 0x1AB538u: goto label_1ab538;
            case 0x1AB53Cu: goto label_1ab53c;
            case 0x1AB540u: goto label_1ab540;
            case 0x1AB544u: goto label_1ab544;
            case 0x1AB548u: goto label_1ab548;
            case 0x1AB54Cu: goto label_1ab54c;
            case 0x1AB550u: goto label_1ab550;
            case 0x1AB554u: goto label_1ab554;
            case 0x1AB558u: goto label_1ab558;
            case 0x1AB55Cu: goto label_1ab55c;
            case 0x1AB560u: goto label_1ab560;
            case 0x1AB564u: goto label_1ab564;
            case 0x1AB568u: goto label_1ab568;
            case 0x1AB56Cu: goto label_1ab56c;
            case 0x1AB570u: goto label_1ab570;
            case 0x1AB574u: goto label_1ab574;
            case 0x1AB578u: goto label_1ab578;
            case 0x1AB57Cu: goto label_1ab57c;
            case 0x1AB580u: goto label_1ab580;
            case 0x1AB584u: goto label_1ab584;
            case 0x1AB588u: goto label_1ab588;
            case 0x1AB58Cu: goto label_1ab58c;
            case 0x1AB590u: goto label_1ab590;
            case 0x1AB594u: goto label_1ab594;
            case 0x1AB598u: goto label_1ab598;
            case 0x1AB59Cu: goto label_1ab59c;
            case 0x1AB5A0u: goto label_1ab5a0;
            case 0x1AB5A4u: goto label_1ab5a4;
            case 0x1AB5A8u: goto label_1ab5a8;
            case 0x1AB5ACu: goto label_1ab5ac;
            case 0x1AB5B0u: goto label_1ab5b0;
            case 0x1AB5B4u: goto label_1ab5b4;
            case 0x1AB5B8u: goto label_1ab5b8;
            case 0x1AB5BCu: goto label_1ab5bc;
            case 0x1AB5C0u: goto label_1ab5c0;
            case 0x1AB5C4u: goto label_1ab5c4;
            case 0x1AB5C8u: goto label_1ab5c8;
            case 0x1AB5CCu: goto label_1ab5cc;
            case 0x1AB5D0u: goto label_1ab5d0;
            case 0x1AB5D4u: goto label_1ab5d4;
            case 0x1AB5D8u: goto label_1ab5d8;
            case 0x1AB5DCu: goto label_1ab5dc;
            case 0x1AB5E0u: goto label_1ab5e0;
            case 0x1AB5E4u: goto label_1ab5e4;
            case 0x1AB5E8u: goto label_1ab5e8;
            case 0x1AB5ECu: goto label_1ab5ec;
            case 0x1AB5F0u: goto label_1ab5f0;
            case 0x1AB5F4u: goto label_1ab5f4;
            case 0x1AB5F8u: goto label_1ab5f8;
            case 0x1AB5FCu: goto label_1ab5fc;
            case 0x1AB600u: goto label_1ab600;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ab5fc:
    ctx->pc = 0x1AB604u;
}
