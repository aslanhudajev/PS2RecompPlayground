#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: BossAddingVector
// Address: 0x1c7680 - 0x1c7984
void BossAddingVector_0x1c7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1c7680");
#endif

    ctx->pc = 0x1c7680u;

    // 0x1c7680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7684: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1c7684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1c7688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c768c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c768cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c7694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c769c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1c769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c76a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c76a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c76a4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1C76A4u;
    {
        const bool branch_taken_0x1c76a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C76A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76A4u;
            // 0x1c76a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76a4) {
            ctx->pc = 0x1C7708u;
            goto label_1c7708;
        }
    }
    ctx->pc = 0x1C76ACu;
    // 0x1c76ac: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x1c76acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x1c76b0: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c76b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c76b4: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1c76b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c76b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c76b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c76bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c76bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c76c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c76c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c76c4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C76C4u;
    SET_GPR_U32(ctx, 31, 0x1C76CCu);
    ctx->pc = 0x1C76C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76C4u;
            // 0x1c76c8: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76CCu; }
        if (ctx->pc != 0x1C76CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76CCu; }
        if (ctx->pc != 0x1C76CCu) { return; }
    }
    ctx->pc = 0x1C76CCu;
    // 0x1c76cc: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C76CCu;
    SET_GPR_U32(ctx, 31, 0x1C76D4u);
    ctx->pc = 0x1C76D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76CCu;
            // 0x1c76d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76D4u; }
        if (ctx->pc != 0x1C76D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76D4u; }
        if (ctx->pc != 0x1C76D4u) { return; }
    }
    ctx->pc = 0x1C76D4u;
    // 0x1c76d4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c76d8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c76d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c76dc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c76dcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c76e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c76e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c76e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c76e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c76e8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c76e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c76ec: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c76ecu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c76f0: 0xc040880  jal         func_102200
    ctx->pc = 0x1C76F0u;
    SET_GPR_U32(ctx, 31, 0x1C76F8u);
    ctx->pc = 0x1C76F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76F0u;
            // 0x1c76f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76F8u; }
        if (ctx->pc != 0x1C76F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C76F8u; }
        if (ctx->pc != 0x1C76F8u) { return; }
    }
    ctx->pc = 0x1C76F8u;
    // 0x1c76f8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C76F8u;
    SET_GPR_U32(ctx, 31, 0x1C7700u);
    ctx->pc = 0x1C76FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C76F8u;
            // 0x1c76fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7700u; }
        if (ctx->pc != 0x1C7700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7700u; }
        if (ctx->pc != 0x1C7700u) { return; }
    }
    ctx->pc = 0x1C7700u;
    // 0x1c7700: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C7700u;
    {
        const bool branch_taken_0x1c7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7700u;
            // 0x1c7704: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7700) {
            ctx->pc = 0x1C7860u;
            goto label_1c7860;
        }
    }
    ctx->pc = 0x1C7708u;
label_1c7708:
    // 0x1c7708: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c7708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c770c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c770cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7710: 0x0  nop
    ctx->pc = 0x1c7710u;
    // NOP
    // 0x1c7714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7718: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1C7718u;
    {
        const bool branch_taken_0x1c7718 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7718u;
            // 0x1c771c: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7718) {
            ctx->pc = 0x1C7788u;
            goto label_1c7788;
        }
    }
    ctx->pc = 0x1C7720u;
    // 0x1c7720: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c7720u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c7724: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1c7724u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c7728: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c7728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c772c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c772cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c7730: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c7730u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7734: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C7734u;
    SET_GPR_U32(ctx, 31, 0x1C773Cu);
    ctx->pc = 0x1C7738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7734u;
            // 0x1c7738: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C773Cu; }
        if (ctx->pc != 0x1C773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C773Cu; }
        if (ctx->pc != 0x1C773Cu) { return; }
    }
    ctx->pc = 0x1C773Cu;
    // 0x1c773c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C773Cu;
    SET_GPR_U32(ctx, 31, 0x1C7744u);
    ctx->pc = 0x1C7740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C773Cu;
            // 0x1c7740: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7744u; }
        if (ctx->pc != 0x1C7744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7744u; }
        if (ctx->pc != 0x1C7744u) { return; }
    }
    ctx->pc = 0x1C7744u;
    // 0x1c7744: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c7744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c7748: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c7748u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c774c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c774cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c7750: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c7750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c7754: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c7754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c7758: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c7758u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c775c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c775cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c7760: 0xc040880  jal         func_102200
    ctx->pc = 0x1C7760u;
    SET_GPR_U32(ctx, 31, 0x1C7768u);
    ctx->pc = 0x1C7764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7760u;
            // 0x1c7764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7768u; }
        if (ctx->pc != 0x1C7768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7768u; }
        if (ctx->pc != 0x1C7768u) { return; }
    }
    ctx->pc = 0x1C7768u;
    // 0x1c7768: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c7768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c776c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c776cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c7770: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c7770u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c7774: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C7774u;
    SET_GPR_U32(ctx, 31, 0x1C777Cu);
    ctx->pc = 0x1C7778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7774u;
            // 0x1c7778: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C777Cu; }
        if (ctx->pc != 0x1C777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C777Cu; }
        if (ctx->pc != 0x1C777Cu) { return; }
    }
    ctx->pc = 0x1C777Cu;
    // 0x1c777c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1C777Cu;
    {
        const bool branch_taken_0x1c777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C777Cu;
            // 0x1c7780: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c777c) {
            ctx->pc = 0x1C7860u;
            goto label_1c7860;
        }
    }
    ctx->pc = 0x1C7784u;
    // 0x1c7784: 0x0  nop
    ctx->pc = 0x1c7784u;
    // NOP
label_1c7788:
    // 0x1c7788: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C7788u;
    SET_GPR_U32(ctx, 31, 0x1C7790u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7790u; }
        if (ctx->pc != 0x1C7790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7790u; }
        if (ctx->pc != 0x1C7790u) { return; }
    }
    ctx->pc = 0x1C7790u;
    // 0x1c7790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7790u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c7794: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C7794u;
    {
        const bool branch_taken_0x1c7794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7794u;
            // 0x1c7798: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7794) {
            ctx->pc = 0x1C77F8u;
            goto label_1c77f8;
        }
    }
    ctx->pc = 0x1C779Cu;
    // 0x1c779c: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c779cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c77a0: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x1c77a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c77a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c77a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c77a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c77a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c77ac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c77acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c77b0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C77B0u;
    SET_GPR_U32(ctx, 31, 0x1C77B8u);
    ctx->pc = 0x1C77B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77B0u;
            // 0x1c77b4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77B8u; }
        if (ctx->pc != 0x1C77B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77B8u; }
        if (ctx->pc != 0x1C77B8u) { return; }
    }
    ctx->pc = 0x1C77B8u;
    // 0x1c77b8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C77B8u;
    SET_GPR_U32(ctx, 31, 0x1C77C0u);
    ctx->pc = 0x1C77BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77B8u;
            // 0x1c77bc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77C0u; }
        if (ctx->pc != 0x1C77C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77C0u; }
        if (ctx->pc != 0x1C77C0u) { return; }
    }
    ctx->pc = 0x1C77C0u;
    // 0x1c77c0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c77c4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c77c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c77c8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c77c8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c77cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c77ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c77d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c77d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c77d4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c77d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c77d8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c77d8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c77dc: 0xc040880  jal         func_102200
    ctx->pc = 0x1C77DCu;
    SET_GPR_U32(ctx, 31, 0x1C77E4u);
    ctx->pc = 0x1C77E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77DCu;
            // 0x1c77e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77E4u; }
        if (ctx->pc != 0x1C77E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77E4u; }
        if (ctx->pc != 0x1C77E4u) { return; }
    }
    ctx->pc = 0x1C77E4u;
    // 0x1c77e4: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C77E4u;
    SET_GPR_U32(ctx, 31, 0x1C77ECu);
    ctx->pc = 0x1C77E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77E4u;
            // 0x1c77e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77ECu; }
        if (ctx->pc != 0x1C77ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C77ECu; }
        if (ctx->pc != 0x1C77ECu) { return; }
    }
    ctx->pc = 0x1C77ECu;
    // 0x1c77ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C77ECu;
    {
        const bool branch_taken_0x1c77ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C77ECu;
            // 0x1c77f0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77ec) {
            ctx->pc = 0x1C7860u;
            goto label_1c7860;
        }
    }
    ctx->pc = 0x1C77F4u;
    // 0x1c77f4: 0x0  nop
    ctx->pc = 0x1c77f4u;
    // NOP
label_1c77f8:
    // 0x1c77f8: 0x3c023fb9  lui         $v0, 0x3FB9
    ctx->pc = 0x1c77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16313 << 16));
    // 0x1c77fc: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x1c77fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c7800: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x1c7800u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c7804: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c7804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c7808: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1c7808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1c780c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c780cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7810: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C7810u;
    SET_GPR_U32(ctx, 31, 0x1C7818u);
    ctx->pc = 0x1C7814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7810u;
            // 0x1c7814: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7818u; }
        if (ctx->pc != 0x1C7818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7818u; }
        if (ctx->pc != 0x1C7818u) { return; }
    }
    ctx->pc = 0x1C7818u;
    // 0x1c7818: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C7818u;
    SET_GPR_U32(ctx, 31, 0x1C7820u);
    ctx->pc = 0x1C781Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7818u;
            // 0x1c781c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7820u; }
        if (ctx->pc != 0x1C7820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7820u; }
        if (ctx->pc != 0x1C7820u) { return; }
    }
    ctx->pc = 0x1C7820u;
    // 0x1c7820: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1c7820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1c7824: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1c7824u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c7828: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1c7828u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1c782c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1c782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1c7830: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c7830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c7834: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1c7834u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c7838: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1c7838u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1c783c: 0xc040880  jal         func_102200
    ctx->pc = 0x1C783Cu;
    SET_GPR_U32(ctx, 31, 0x1C7844u);
    ctx->pc = 0x1C7840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C783Cu;
            // 0x1c7840: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7844u; }
        if (ctx->pc != 0x1C7844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7844u; }
        if (ctx->pc != 0x1C7844u) { return; }
    }
    ctx->pc = 0x1C7844u;
    // 0x1c7844: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c7844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c7848: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c7848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c784c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c784cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c7850: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C7850u;
    SET_GPR_U32(ctx, 31, 0x1C7858u);
    ctx->pc = 0x1C7854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7850u;
            // 0x1c7854: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7858u; }
        if (ctx->pc != 0x1C7858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7858u; }
        if (ctx->pc != 0x1C7858u) { return; }
    }
    ctx->pc = 0x1C7858u;
    // 0x1c7858: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1c7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1c785c: 0x0  nop
    ctx->pc = 0x1c785cu;
    // NOP
label_1c7860:
    // 0x1c7860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c7860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c7864: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1c7864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1c7868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c786c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7874: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1C7874u;
    {
        const bool branch_taken_0x1c7874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7874) {
            ctx->pc = 0x1C78A8u;
            goto label_1c78a8;
        }
    }
    ctx->pc = 0x1C787Cu;
    // 0x1c787c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C787Cu;
    SET_GPR_U32(ctx, 31, 0x1C7884u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7884u; }
        if (ctx->pc != 0x1C7884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7884u; }
        if (ctx->pc != 0x1C7884u) { return; }
    }
    ctx->pc = 0x1C7884u;
    // 0x1c7884: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C7884u;
    SET_GPR_U32(ctx, 31, 0x1C788Cu);
    ctx->pc = 0x1C7888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7884u;
            // 0x1c7888: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C788Cu; }
        if (ctx->pc != 0x1C788Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C788Cu; }
        if (ctx->pc != 0x1C788Cu) { return; }
    }
    ctx->pc = 0x1C788Cu;
    // 0x1c788c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7890: 0xc040880  jal         func_102200
    ctx->pc = 0x1C7890u;
    SET_GPR_U32(ctx, 31, 0x1C7898u);
    ctx->pc = 0x1C7894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7890u;
            // 0x1c7894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7898u; }
        if (ctx->pc != 0x1C7898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7898u; }
        if (ctx->pc != 0x1C7898u) { return; }
    }
    ctx->pc = 0x1C7898u;
    // 0x1c7898: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C7898u;
    SET_GPR_U32(ctx, 31, 0x1C78A0u);
    ctx->pc = 0x1C789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7898u;
            // 0x1c789c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78A0u; }
        if (ctx->pc != 0x1C78A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78A0u; }
        if (ctx->pc != 0x1C78A0u) { return; }
    }
    ctx->pc = 0x1C78A0u;
    // 0x1c78a0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C78A0u;
    {
        const bool branch_taken_0x1c78a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78A0u;
            // 0x1c78a4: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78a0) {
            ctx->pc = 0x1C7970u;
            goto label_1c7970;
        }
    }
    ctx->pc = 0x1C78A8u;
label_1c78a8:
    // 0x1c78a8: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1c78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1c78ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c78acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c78b0: 0x0  nop
    ctx->pc = 0x1c78b0u;
    // NOP
    // 0x1c78b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c78b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c78b8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1C78B8u;
    {
        const bool branch_taken_0x1c78b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c78b8) {
            ctx->pc = 0x1C78F8u;
            goto label_1c78f8;
        }
    }
    ctx->pc = 0x1C78C0u;
    // 0x1c78c0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C78C0u;
    SET_GPR_U32(ctx, 31, 0x1C78C8u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78C8u; }
        if (ctx->pc != 0x1C78C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78C8u; }
        if (ctx->pc != 0x1C78C8u) { return; }
    }
    ctx->pc = 0x1C78C8u;
    // 0x1c78c8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C78C8u;
    SET_GPR_U32(ctx, 31, 0x1C78D0u);
    ctx->pc = 0x1C78CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78C8u;
            // 0x1c78cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78D0u; }
        if (ctx->pc != 0x1C78D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78D0u; }
        if (ctx->pc != 0x1C78D0u) { return; }
    }
    ctx->pc = 0x1C78D0u;
    // 0x1c78d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78d4: 0xc040880  jal         func_102200
    ctx->pc = 0x1C78D4u;
    SET_GPR_U32(ctx, 31, 0x1C78DCu);
    ctx->pc = 0x1C78D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78D4u;
            // 0x1c78d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78DCu; }
        if (ctx->pc != 0x1C78DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78DCu; }
        if (ctx->pc != 0x1C78DCu) { return; }
    }
    ctx->pc = 0x1C78DCu;
    // 0x1c78dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c78e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c78e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c78e4: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c78e4u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c78e8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C78E8u;
    SET_GPR_U32(ctx, 31, 0x1C78F0u);
    ctx->pc = 0x1C78ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78E8u;
            // 0x1c78ec: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78F0u; }
        if (ctx->pc != 0x1C78F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C78F0u; }
        if (ctx->pc != 0x1C78F0u) { return; }
    }
    ctx->pc = 0x1C78F0u;
    // 0x1c78f0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C78F0u;
    {
        const bool branch_taken_0x1c78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C78F0u;
            // 0x1c78f4: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78f0) {
            ctx->pc = 0x1C7970u;
            goto label_1c7970;
        }
    }
    ctx->pc = 0x1C78F8u;
label_1c78f8:
    // 0x1c78f8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C78F8u;
    SET_GPR_U32(ctx, 31, 0x1C7900u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7900u; }
        if (ctx->pc != 0x1C7900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7900u; }
        if (ctx->pc != 0x1C7900u) { return; }
    }
    ctx->pc = 0x1C7900u;
    // 0x1c7900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7900u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c7904: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7904u;
    {
        const bool branch_taken_0x1c7904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7904) {
            ctx->pc = 0x1C7938u;
            goto label_1c7938;
        }
    }
    ctx->pc = 0x1C790Cu;
    // 0x1c790c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C790Cu;
    SET_GPR_U32(ctx, 31, 0x1C7914u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7914u; }
        if (ctx->pc != 0x1C7914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7914u; }
        if (ctx->pc != 0x1C7914u) { return; }
    }
    ctx->pc = 0x1C7914u;
    // 0x1c7914: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C7914u;
    SET_GPR_U32(ctx, 31, 0x1C791Cu);
    ctx->pc = 0x1C7918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7914u;
            // 0x1c7918: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C791Cu; }
        if (ctx->pc != 0x1C791Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C791Cu; }
        if (ctx->pc != 0x1C791Cu) { return; }
    }
    ctx->pc = 0x1C791Cu;
    // 0x1c791c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7920: 0xc040880  jal         func_102200
    ctx->pc = 0x1C7920u;
    SET_GPR_U32(ctx, 31, 0x1C7928u);
    ctx->pc = 0x1C7924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7920u;
            // 0x1c7924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7928u; }
        if (ctx->pc != 0x1C7928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7928u; }
        if (ctx->pc != 0x1C7928u) { return; }
    }
    ctx->pc = 0x1C7928u;
    // 0x1c7928: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C7928u;
    SET_GPR_U32(ctx, 31, 0x1C7930u);
    ctx->pc = 0x1C792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7928u;
            // 0x1c792c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7930u; }
        if (ctx->pc != 0x1C7930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7930u; }
        if (ctx->pc != 0x1C7930u) { return; }
    }
    ctx->pc = 0x1C7930u;
    // 0x1c7930: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C7930u;
    {
        const bool branch_taken_0x1c7930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7930u;
            // 0x1c7934: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7930) {
            ctx->pc = 0x1C7970u;
            goto label_1c7970;
        }
    }
    ctx->pc = 0x1C7938u;
label_1c7938:
    // 0x1c7938: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C7938u;
    SET_GPR_U32(ctx, 31, 0x1C7940u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7940u; }
        if (ctx->pc != 0x1C7940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7940u; }
        if (ctx->pc != 0x1C7940u) { return; }
    }
    ctx->pc = 0x1C7940u;
    // 0x1c7940: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C7940u;
    SET_GPR_U32(ctx, 31, 0x1C7948u);
    ctx->pc = 0x1C7944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7940u;
            // 0x1c7944: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7948u; }
        if (ctx->pc != 0x1C7948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7948u; }
        if (ctx->pc != 0x1C7948u) { return; }
    }
    ctx->pc = 0x1C7948u;
    // 0x1c7948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c794c: 0xc040880  jal         func_102200
    ctx->pc = 0x1C794Cu;
    SET_GPR_U32(ctx, 31, 0x1C7954u);
    ctx->pc = 0x1C7950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C794Cu;
            // 0x1c7950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7954u; }
        if (ctx->pc != 0x1C7954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7954u; }
        if (ctx->pc != 0x1C7954u) { return; }
    }
    ctx->pc = 0x1C7954u;
    // 0x1c7954: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1c7958: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c7958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c795c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1c795cu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1c7960: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1C7960u;
    SET_GPR_U32(ctx, 31, 0x1C7968u);
    ctx->pc = 0x1C7964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7960u;
            // 0x1c7964: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7968u; }
        if (ctx->pc != 0x1C7968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7968u; }
        if (ctx->pc != 0x1C7968u) { return; }
    }
    ctx->pc = 0x1C7968u;
    // 0x1c7968: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1c7968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1c796c: 0x0  nop
    ctx->pc = 0x1c796cu;
    // NOP
label_1c7970:
    // 0x1c7970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c7978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c797c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C797Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C797Cu;
            // 0x1c7980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7708u: goto label_1c7708;
            case 0x1C7788u: goto label_1c7788;
            case 0x1C77F8u: goto label_1c77f8;
            case 0x1C7860u: goto label_1c7860;
            case 0x1C78A8u: goto label_1c78a8;
            case 0x1C78F8u: goto label_1c78f8;
            case 0x1C7938u: goto label_1c7938;
            case 0x1C7970u: goto label_1c7970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7984u;
}
