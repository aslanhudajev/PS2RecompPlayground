#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage5mapGenerate
// Address: 0x144680 - 0x144b00
void stage5mapGenerate_0x144680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage5mapGenerate_0x144680");
#endif

    ctx->pc = 0x144680u;

    // 0x144680: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x144680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x144684: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144688: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x144688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14468c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144690: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144698: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14469c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14469Cu;
    SET_GPR_U32(ctx, 31, 0x1446A4u);
    ctx->pc = 0x1446A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14469Cu;
            // 0x1446a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446A4u; }
        if (ctx->pc != 0x1446A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446A4u; }
        if (ctx->pc != 0x1446A4u) { return; }
    }
    ctx->pc = 0x1446A4u;
    // 0x1446a4: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1446A4u;
    SET_GPR_U32(ctx, 31, 0x1446ACu);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446ACu; }
        if (ctx->pc != 0x1446ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1446ACu; }
        if (ctx->pc != 0x1446ACu) { return; }
    }
    ctx->pc = 0x1446ACu;
    // 0x1446ac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1446acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1446b0: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x1446b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x1446b4: 0xc4239c88  lwc1        $f3, -0x6378($at)
    ctx->pc = 0x1446b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1446b8: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1446b8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x1446bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1446bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1446c0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1446c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1446c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1446c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1446c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1446c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1446ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1446d0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1446d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1446d4: 0xc4219c80  lwc1        $f1, -0x6380($at)
    ctx->pc = 0x1446d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1446d8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1446d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1446dc: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x1446dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1446e0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1446e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1446e4: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x1446e4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x1446e8: 0xe4239c88  swc1        $f3, -0x6378($at)
    ctx->pc = 0x1446e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941832), bits); }
    // 0x1446ec: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1446ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1446f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1446f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1446f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1446F4u;
    {
        const bool branch_taken_0x1446f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1446F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446F4u;
            // 0x1446f8: 0xe4229c80  swc1        $f2, -0x6380($at) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446f4) {
            ctx->pc = 0x144718u;
            goto label_144718;
        }
    }
    ctx->pc = 0x1446FCu;
    // 0x1446fc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1446fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x144700: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144704: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144704u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14470c: 0x0  nop
    ctx->pc = 0x14470cu;
    // NOP
    // 0x144710: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x144714: 0xe4209c88  swc1        $f0, -0x6378($at)
    ctx->pc = 0x144714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941832), bits); }
label_144718:
    // 0x144718: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14471c: 0xc4219c80  lwc1        $f1, -0x6380($at)
    ctx->pc = 0x14471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144720: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x144720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x144724: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144724u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14472c: 0x0  nop
    ctx->pc = 0x14472cu;
    // NOP
    // 0x144730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x144730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144734: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x144734u;
    {
        const bool branch_taken_0x144734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x144738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144734u;
            // 0x144738: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144734) {
            ctx->pc = 0x144758u;
            goto label_144758;
        }
    }
    ctx->pc = 0x14473Cu;
    // 0x14473c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144740: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144740u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144748: 0x0  nop
    ctx->pc = 0x144748u;
    // NOP
    // 0x14474c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14474cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x144750: 0xe4209c80  swc1        $f0, -0x6380($at)
    ctx->pc = 0x144750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941824), bits); }
    // 0x144754: 0x0  nop
    ctx->pc = 0x144754u;
    // NOP
label_144758:
    // 0x144758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x144758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14475c: 0x1623001c  bne         $s1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x14475Cu;
    {
        const bool branch_taken_0x14475c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x144760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14475Cu;
            // 0x144760: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14475c) {
            ctx->pc = 0x1447D0u;
            goto label_1447d0;
        }
    }
    ctx->pc = 0x144764u;
    // 0x144764: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x144764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x144768: 0x27b20044  addiu       $s2, $sp, 0x44
    ctx->pc = 0x144768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x14476c: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x14476cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x144770: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x144770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x144774: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x144774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x144778: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14477c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14477cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144780: 0x24e75480  addiu       $a3, $a3, 0x5480
    ctx->pc = 0x144780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21632));
    // 0x144784: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144784u;
    SET_GPR_U32(ctx, 31, 0x14478Cu);
    ctx->pc = 0x144788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144784u;
            // 0x144788: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14478Cu; }
        if (ctx->pc != 0x14478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14478Cu; }
        if (ctx->pc != 0x14478Cu) { return; }
    }
    ctx->pc = 0x14478Cu;
    // 0x14478c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14478cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x144790: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x144790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x144794: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x144794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x144798: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x144798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14479c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x14479cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1447a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1447a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1447a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1447a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1447a8: 0x24e75480  addiu       $a3, $a3, 0x5480
    ctx->pc = 0x1447a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21632));
    // 0x1447ac: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1447ACu;
    SET_GPR_U32(ctx, 31, 0x1447B4u);
    ctx->pc = 0x1447B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1447ACu;
            // 0x1447b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447B4u; }
        if (ctx->pc != 0x1447B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447B4u; }
        if (ctx->pc != 0x1447B4u) { return; }
    }
    ctx->pc = 0x1447B4u;
    // 0x1447b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1447b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1447b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1447b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1447bc: 0xac209c88  sw          $zero, -0x6378($at)
    ctx->pc = 0x1447bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941832), GPR_U32(ctx, 0));
    // 0x1447c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1447c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1447c4: 0xac239c20  sw          $v1, -0x63E0($at)
    ctx->pc = 0x1447c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941728), GPR_U32(ctx, 3));
    // 0x1447c8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1447c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1447cc: 0xac209c80  sw          $zero, -0x6380($at)
    ctx->pc = 0x1447ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941824), GPR_U32(ctx, 0));
label_1447d0:
    // 0x1447d0: 0x240304b0  addiu       $v1, $zero, 0x4B0
    ctx->pc = 0x1447d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x1447d4: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x1447d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1447d8: 0x0  nop
    ctx->pc = 0x1447d8u;
    // NOP
    // 0x1447dc: 0x0  nop
    ctx->pc = 0x1447dcu;
    // NOP
    // 0x1447e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1447e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1447e4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1447E4u;
    {
        const bool branch_taken_0x1447e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1447E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1447E4u;
            // 0x1447e8: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447e4) {
            ctx->pc = 0x144858u;
            goto label_144858;
        }
    }
    ctx->pc = 0x1447ECu;
    // 0x1447ec: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x1447f0: 0x8c239c20  lw          $v1, -0x63E0($at)
    ctx->pc = 0x1447f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941728)));
    // 0x1447f4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1447f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1447f8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1447f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1447fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1447fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144800: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x144800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x144804: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x144804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x144808: 0x24429578  addiu       $v0, $v0, -0x6A88
    ctx->pc = 0x144808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940024));
    // 0x14480c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x14480cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x144810: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x144814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x144818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14481c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144820: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144820u;
    SET_GPR_U32(ctx, 31, 0x144828u);
    ctx->pc = 0x144824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144820u;
            // 0x144824: 0x24e75480  addiu       $a3, $a3, 0x5480 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144828u; }
        if (ctx->pc != 0x144828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144828u; }
        if (ctx->pc != 0x144828u) { return; }
    }
    ctx->pc = 0x144828u;
    // 0x144828: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14482c: 0x8c239c20  lw          $v1, -0x63E0($at)
    ctx->pc = 0x14482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941728)));
    // 0x144830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144834: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144838: 0xac239c20  sw          $v1, -0x63E0($at)
    ctx->pc = 0x144838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941728), GPR_U32(ctx, 3));
    // 0x14483c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14483cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144840: 0x8c239c20  lw          $v1, -0x63E0($at)
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941728)));
    // 0x144844: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x144844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x144848: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x144848u;
    {
        const bool branch_taken_0x144848 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144848u;
            // 0x14484c: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144848) {
            ctx->pc = 0x144858u;
            goto label_144858;
        }
    }
    ctx->pc = 0x144850u;
    // 0x144850: 0xac209c20  sw          $zero, -0x63E0($at)
    ctx->pc = 0x144850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941728), GPR_U32(ctx, 0));
    // 0x144854: 0x0  nop
    ctx->pc = 0x144854u;
    // NOP
label_144858:
    // 0x144858: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x144858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x14485c: 0x16230038  bne         $s1, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x14485Cu;
    {
        const bool branch_taken_0x14485c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14485c) {
            ctx->pc = 0x144940u;
            goto label_144940;
        }
    }
    ctx->pc = 0x144864u;
    // 0x144864: 0x3c02bf1d  lui         $v0, 0xBF1D
    ctx->pc = 0x144864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48925 << 16));
    // 0x144868: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x144868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x14486c: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x14486cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x144870: 0x34422f1b  ori         $v0, $v0, 0x2F1B
    ctx->pc = 0x144870u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)12059u)));
    // 0x144874: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x144874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x144878: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x144878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14487c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x14487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x144880: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x144880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x144884: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x144884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x144888: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x144888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x14488c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14488cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x144890: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144894: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144898: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144898u;
    SET_GPR_U32(ctx, 31, 0x1448A0u);
    ctx->pc = 0x14489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144898u;
            // 0x14489c: 0x24e75420  addiu       $a3, $a3, 0x5420 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448A0u; }
        if (ctx->pc != 0x1448A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448A0u; }
        if (ctx->pc != 0x1448A0u) { return; }
    }
    ctx->pc = 0x1448A0u;
    // 0x1448a0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1448a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1448a4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1448a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1448a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1448a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1448ac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1448acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1448b0: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1448B0u;
    SET_GPR_U32(ctx, 31, 0x1448B8u);
    ctx->pc = 0x1448B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448B0u;
            // 0x1448b4: 0x24e75350  addiu       $a3, $a3, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448B8u; }
        if (ctx->pc != 0x1448B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448B8u; }
        if (ctx->pc != 0x1448B8u) { return; }
    }
    ctx->pc = 0x1448B8u;
    // 0x1448b8: 0x3c02c528  lui         $v0, 0xC528
    ctx->pc = 0x1448b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50472 << 16));
    // 0x1448bc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1448bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1448c0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1448c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49152u)));
    // 0x1448c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1448c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1448c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1448cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1448ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1448d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1448d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1448d4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1448D4u;
    SET_GPR_U32(ctx, 31, 0x1448DCu);
    ctx->pc = 0x1448D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448D4u;
            // 0x1448d8: 0x24e75050  addiu       $a3, $a3, 0x5050 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448DCu; }
        if (ctx->pc != 0x1448DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448DCu; }
        if (ctx->pc != 0x1448DCu) { return; }
    }
    ctx->pc = 0x1448DCu;
    // 0x1448dc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1448dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1448e0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1448e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1448e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1448e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1448e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1448e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1448ec: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1448ECu;
    SET_GPR_U32(ctx, 31, 0x1448F4u);
    ctx->pc = 0x1448F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448ECu;
            // 0x1448f0: 0x24e74e90  addiu       $a3, $a3, 0x4E90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448F4u; }
        if (ctx->pc != 0x1448F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448F4u; }
        if (ctx->pc != 0x1448F4u) { return; }
    }
    ctx->pc = 0x1448F4u;
    // 0x1448f4: 0x3c02c54b  lui         $v0, 0xC54B
    ctx->pc = 0x1448f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50507 << 16));
    // 0x1448f8: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1448f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1448fc: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1448fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x144900: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x144900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x144904: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x144908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14490c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14490cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144910: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144910u;
    SET_GPR_U32(ctx, 31, 0x144918u);
    ctx->pc = 0x144914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144910u;
            // 0x144914: 0x24e74cd0  addiu       $a3, $a3, 0x4CD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144918u; }
        if (ctx->pc != 0x144918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144918u; }
        if (ctx->pc != 0x144918u) { return; }
    }
    ctx->pc = 0x144918u;
    // 0x144918: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x144918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14491c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x14491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x144920: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144924: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144928: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144928u;
    SET_GPR_U32(ctx, 31, 0x144930u);
    ctx->pc = 0x14492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144928u;
            // 0x14492c: 0x24e74b10  addiu       $a3, $a3, 0x4B10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144930u; }
        if (ctx->pc != 0x144930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144930u; }
        if (ctx->pc != 0x144930u) { return; }
    }
    ctx->pc = 0x144930u;
    // 0x144930: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144934: 0xac209c28  sw          $zero, -0x63D8($at)
    ctx->pc = 0x144934u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941736), GPR_U32(ctx, 0));
    // 0x144938: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14493c: 0xac209c30  sw          $zero, -0x63D0($at)
    ctx->pc = 0x14493cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941744), GPR_U32(ctx, 0));
label_144940:
    // 0x144940: 0x2a2309b0  slti        $v1, $s1, 0x9B0
    ctx->pc = 0x144940u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2480) ? 1 : 0);
    // 0x144944: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x144944u;
    {
        const bool branch_taken_0x144944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144944u;
            // 0x144948: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144944) {
            ctx->pc = 0x144A10u;
            goto label_144a10;
        }
    }
    ctx->pc = 0x14494Cu;
    // 0x14494c: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x14494cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x144950: 0x0  nop
    ctx->pc = 0x144950u;
    // NOP
    // 0x144954: 0x0  nop
    ctx->pc = 0x144954u;
    // NOP
    // 0x144958: 0x1810  mfhi        $v1
    ctx->pc = 0x144958u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14495c: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x14495Cu;
    {
        const bool branch_taken_0x14495c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14495c) {
            ctx->pc = 0x144A10u;
            goto label_144a10;
        }
    }
    ctx->pc = 0x144964u;
    // 0x144964: 0x3c02c49c  lui         $v0, 0xC49C
    ctx->pc = 0x144964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50332 << 16));
    // 0x144968: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14496c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14496cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16384u)));
    // 0x144970: 0x8c239c28  lw          $v1, -0x63D8($at)
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941736)));
    // 0x144974: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x144974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x144978: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x144978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14497c: 0x3c02bf1d  lui         $v0, 0xBF1D
    ctx->pc = 0x14497cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48925 << 16));
    // 0x144980: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x144980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x144984: 0x34422f1b  ori         $v0, $v0, 0x2F1B
    ctx->pc = 0x144984u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)12059u)));
    // 0x144988: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x144988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x14498c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x14498cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x144990: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144994: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x144998: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14499c: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x14499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x1449a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1449a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1449a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1449a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1449a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1449a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1449ac: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1449ACu;
    SET_GPR_U32(ctx, 31, 0x1449B4u);
    ctx->pc = 0x1449B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1449ACu;
            // 0x1449b0: 0x24e752c0  addiu       $a3, $a3, 0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449B4u; }
        if (ctx->pc != 0x1449B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449B4u; }
        if (ctx->pc != 0x1449B4u) { return; }
    }
    ctx->pc = 0x1449B4u;
    // 0x1449b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1449b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1449b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1449b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1449bc: 0x8c239c28  lw          $v1, -0x63D8($at)
    ctx->pc = 0x1449bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941736)));
    // 0x1449c0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1449c4: 0x24429584  addiu       $v0, $v0, -0x6A7C
    ctx->pc = 0x1449c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940036));
    // 0x1449c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1449c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1449cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1449d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1449d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1449d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1449d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1449d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1449d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1449dc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1449DCu;
    SET_GPR_U32(ctx, 31, 0x1449E4u);
    ctx->pc = 0x1449E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1449DCu;
            // 0x1449e0: 0x24e752c0  addiu       $a3, $a3, 0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449E4u; }
        if (ctx->pc != 0x1449E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1449E4u; }
        if (ctx->pc != 0x1449E4u) { return; }
    }
    ctx->pc = 0x1449E4u;
    // 0x1449e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1449e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1449e8: 0x8c239c28  lw          $v1, -0x63D8($at)
    ctx->pc = 0x1449e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941736)));
    // 0x1449ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1449ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1449f0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1449f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1449f4: 0xac239c28  sw          $v1, -0x63D8($at)
    ctx->pc = 0x1449f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941736), GPR_U32(ctx, 3));
    // 0x1449f8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1449f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1449fc: 0x8c239c28  lw          $v1, -0x63D8($at)
    ctx->pc = 0x1449fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941736)));
    // 0x144a00: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x144a00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x144a04: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x144A04u;
    {
        const bool branch_taken_0x144a04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A04u;
            // 0x144a08: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a04) {
            ctx->pc = 0x144A10u;
            goto label_144a10;
        }
    }
    ctx->pc = 0x144A0Cu;
    // 0x144a0c: 0xac209c28  sw          $zero, -0x63D8($at)
    ctx->pc = 0x144a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941736), GPR_U32(ctx, 0));
label_144a10:
    // 0x144a10: 0x2a2308c0  slti        $v1, $s1, 0x8C0
    ctx->pc = 0x144a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2240) ? 1 : 0);
    // 0x144a14: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x144A14u;
    {
        const bool branch_taken_0x144a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A14u;
            // 0x144a18: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a14) {
            ctx->pc = 0x144AE8u;
            goto label_144ae8;
        }
    }
    ctx->pc = 0x144A1Cu;
    // 0x144a1c: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x144a1cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x144a20: 0x0  nop
    ctx->pc = 0x144a20u;
    // NOP
    // 0x144a24: 0x0  nop
    ctx->pc = 0x144a24u;
    // NOP
    // 0x144a28: 0x1810  mfhi        $v1
    ctx->pc = 0x144a28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x144a2c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x144A2Cu;
    {
        const bool branch_taken_0x144a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144a2c) {
            ctx->pc = 0x144AE8u;
            goto label_144ae8;
        }
    }
    ctx->pc = 0x144A34u;
    // 0x144a34: 0x3c02bf1d  lui         $v0, 0xBF1D
    ctx->pc = 0x144a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48925 << 16));
    // 0x144a38: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144a3c: 0x34422f1b  ori         $v0, $v0, 0x2F1B
    ctx->pc = 0x144a3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)12059u)));
    // 0x144a40: 0x8c239c30  lw          $v1, -0x63D0($at)
    ctx->pc = 0x144a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941744)));
    // 0x144a44: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x144a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x144a48: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x144a48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x144a4c: 0x3c02c506  lui         $v0, 0xC506
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50438 << 16));
    // 0x144a50: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x144a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x144a54: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x144a54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24576u)));
    // 0x144a58: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x144a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x144a5c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x144a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x144a60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144a64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x144a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x144a68: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144a6c: 0x24429590  addiu       $v0, $v0, -0x6A70
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940048));
    // 0x144a70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x144a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x144a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144a78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144a7c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144A7Cu;
    SET_GPR_U32(ctx, 31, 0x144A84u);
    ctx->pc = 0x144A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A7Cu;
            // 0x144a80: 0x24e75230  addiu       $a3, $a3, 0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A84u; }
        if (ctx->pc != 0x144A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A84u; }
        if (ctx->pc != 0x144A84u) { return; }
    }
    ctx->pc = 0x144A84u;
    // 0x144a84: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144a88: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x144a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x144a8c: 0x8c239c30  lw          $v1, -0x63D0($at)
    ctx->pc = 0x144a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941744)));
    // 0x144a90: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x144a90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x144a94: 0x24429594  addiu       $v0, $v0, -0x6A6C
    ctx->pc = 0x144a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940052));
    // 0x144a98: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x144a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x144a9c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x144a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144aa0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x144aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x144aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144aa8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144aac: 0xc0520cc  jal         func_148330
    ctx->pc = 0x144AACu;
    SET_GPR_U32(ctx, 31, 0x144AB4u);
    ctx->pc = 0x144AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144AACu;
            // 0x144ab0: 0x24e75230  addiu       $a3, $a3, 0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AB4u; }
        if (ctx->pc != 0x144AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AB4u; }
        if (ctx->pc != 0x144AB4u) { return; }
    }
    ctx->pc = 0x144AB4u;
    // 0x144ab4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144ab8: 0x8c239c30  lw          $v1, -0x63D0($at)
    ctx->pc = 0x144ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941744)));
    // 0x144abc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144ac0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144ac4: 0xac239c30  sw          $v1, -0x63D0($at)
    ctx->pc = 0x144ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941744), GPR_U32(ctx, 3));
    // 0x144ac8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144acc: 0x8c239c30  lw          $v1, -0x63D0($at)
    ctx->pc = 0x144accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941744)));
    // 0x144ad0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x144ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x144ad4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x144AD4u;
    {
        const bool branch_taken_0x144ad4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AD4u;
            // 0x144ad8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ad4) {
            ctx->pc = 0x144AE8u;
            goto label_144ae8;
        }
    }
    ctx->pc = 0x144ADCu;
    // 0x144adc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x144ae0: 0xac239c30  sw          $v1, -0x63D0($at)
    ctx->pc = 0x144ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941744), GPR_U32(ctx, 3));
    // 0x144ae4: 0x0  nop
    ctx->pc = 0x144ae4u;
    // NOP
label_144ae8:
    // 0x144ae8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x144ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144af8: 0x3e00008  jr          $ra
    ctx->pc = 0x144AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AF8u;
            // 0x144afc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144718u: goto label_144718;
            case 0x144758u: goto label_144758;
            case 0x1447D0u: goto label_1447d0;
            case 0x144858u: goto label_144858;
            case 0x144940u: goto label_144940;
            case 0x144A10u: goto label_144a10;
            case 0x144AE8u: goto label_144ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144B00u;
}
