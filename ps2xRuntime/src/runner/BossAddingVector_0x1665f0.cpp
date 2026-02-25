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
// Address: 0x1665f0 - 0x166924
void BossAddingVector_0x1665f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossAddingVector_0x1665f0");
#endif

    ctx->pc = 0x1665f0u;

    // 0x1665f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1665f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1665f4: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1665f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1665f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1665fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1665fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166608: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x166608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16660c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x16660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x166610: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x166610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166614: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x166614u;
    {
        const bool branch_taken_0x166614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x166618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166614u;
            // 0x166618: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166614) {
            ctx->pc = 0x166678u;
            goto label_166678;
        }
    }
    ctx->pc = 0x16661Cu;
    // 0x16661c: 0x3c033fb9  lui         $v1, 0x3FB9
    ctx->pc = 0x16661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
    // 0x166620: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x166620u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166624: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x166624u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x166628: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x166628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x16662c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16662cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x166630: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x166630u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166634: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166634u;
    SET_GPR_U32(ctx, 31, 0x16663Cu);
    ctx->pc = 0x166638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166634u;
            // 0x166638: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16663Cu; }
        if (ctx->pc != 0x16663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16663Cu; }
        if (ctx->pc != 0x16663Cu) { return; }
    }
    ctx->pc = 0x16663Cu;
    // 0x16663c: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x16663Cu;
    SET_GPR_U32(ctx, 31, 0x166644u);
    ctx->pc = 0x166640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16663Cu;
            // 0x166640: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166644u; }
        if (ctx->pc != 0x166644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166644u; }
        if (ctx->pc != 0x166644u) { return; }
    }
    ctx->pc = 0x166644u;
    // 0x166644: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x166644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x166648: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x166648u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x16664c: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x16664cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x166650: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x166650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x166654: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166658: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x166658u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x16665c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x16665cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x166660: 0xc040880  jal         func_102200
    ctx->pc = 0x166660u;
    SET_GPR_U32(ctx, 31, 0x166668u);
    ctx->pc = 0x166664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166660u;
            // 0x166664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166668u; }
        if (ctx->pc != 0x166668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166668u; }
        if (ctx->pc != 0x166668u) { return; }
    }
    ctx->pc = 0x166668u;
    // 0x166668: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166668u;
    SET_GPR_U32(ctx, 31, 0x166670u);
    ctx->pc = 0x16666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166668u;
            // 0x16666c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166670u; }
        if (ctx->pc != 0x166670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166670u; }
        if (ctx->pc != 0x166670u) { return; }
    }
    ctx->pc = 0x166670u;
    // 0x166670: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x166670u;
    {
        const bool branch_taken_0x166670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166670u;
            // 0x166674: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166670) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166678u;
label_166678:
    // 0x166678: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16667c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16667cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166680: 0x0  nop
    ctx->pc = 0x166680u;
    // NOP
    // 0x166684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x166684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166688: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x166688u;
    {
        const bool branch_taken_0x166688 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166688u;
            // 0x16668c: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166688) {
            ctx->pc = 0x1666F8u;
            goto label_1666f8;
        }
    }
    ctx->pc = 0x166690u;
    // 0x166690: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x166690u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166694: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x166694u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x166698: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x166698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x16669c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x16669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1666a0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1666a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1666a4: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1666A4u;
    SET_GPR_U32(ctx, 31, 0x1666ACu);
    ctx->pc = 0x1666A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666A4u;
            // 0x1666a8: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666ACu; }
        if (ctx->pc != 0x1666ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666ACu; }
        if (ctx->pc != 0x1666ACu) { return; }
    }
    ctx->pc = 0x1666ACu;
    // 0x1666ac: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1666ACu;
    SET_GPR_U32(ctx, 31, 0x1666B4u);
    ctx->pc = 0x1666B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666ACu;
            // 0x1666b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666B4u; }
        if (ctx->pc != 0x1666B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666B4u; }
        if (ctx->pc != 0x1666B4u) { return; }
    }
    ctx->pc = 0x1666B4u;
    // 0x1666b4: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1666b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1666b8: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1666b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1666bc: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1666bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1666c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1666c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1666c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1666c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1666c8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1666c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1666cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1666ccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1666d0: 0xc040880  jal         func_102200
    ctx->pc = 0x1666D0u;
    SET_GPR_U32(ctx, 31, 0x1666D8u);
    ctx->pc = 0x1666D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666D0u;
            // 0x1666d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666D8u; }
        if (ctx->pc != 0x1666D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666D8u; }
        if (ctx->pc != 0x1666D8u) { return; }
    }
    ctx->pc = 0x1666D8u;
    // 0x1666d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1666d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1666dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1666dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1666e0: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1666e0u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1666e4: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1666E4u;
    SET_GPR_U32(ctx, 31, 0x1666ECu);
    ctx->pc = 0x1666E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666E4u;
            // 0x1666e8: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666ECu; }
        if (ctx->pc != 0x1666ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666ECu; }
        if (ctx->pc != 0x1666ECu) { return; }
    }
    ctx->pc = 0x1666ECu;
    // 0x1666ec: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1666ECu;
    {
        const bool branch_taken_0x1666ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1666F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1666ECu;
            // 0x1666f0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1666ec) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x1666F4u;
    // 0x1666f4: 0x0  nop
    ctx->pc = 0x1666f4u;
    // NOP
label_1666f8:
    // 0x1666f8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1666F8u;
    SET_GPR_U32(ctx, 31, 0x166700u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166700u; }
        if (ctx->pc != 0x166700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166700u; }
        if (ctx->pc != 0x166700u) { return; }
    }
    ctx->pc = 0x166700u;
    // 0x166700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166700u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x166704: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x166704u;
    {
        const bool branch_taken_0x166704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166704u;
            // 0x166708: 0x3c033fb9  lui         $v1, 0x3FB9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16313 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166704) {
            ctx->pc = 0x166768u;
            goto label_166768;
        }
    }
    ctx->pc = 0x16670Cu;
    // 0x16670c: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x16670cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166710: 0x34639999  ori         $v1, $v1, 0x9999
    ctx->pc = 0x166710u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39321u)));
    // 0x166714: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x166714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x166718: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16671c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16671cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166720: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166720u;
    SET_GPR_U32(ctx, 31, 0x166728u);
    ctx->pc = 0x166724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166720u;
            // 0x166724: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166728u; }
        if (ctx->pc != 0x166728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166728u; }
        if (ctx->pc != 0x166728u) { return; }
    }
    ctx->pc = 0x166728u;
    // 0x166728: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x166728u;
    SET_GPR_U32(ctx, 31, 0x166730u);
    ctx->pc = 0x16672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166728u;
            // 0x16672c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166730u; }
        if (ctx->pc != 0x166730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166730u; }
        if (ctx->pc != 0x166730u) { return; }
    }
    ctx->pc = 0x166730u;
    // 0x166730: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x166734: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x166734u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166738: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x166738u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x16673c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16673cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x166740: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166744: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x166744u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x166748: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x166748u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x16674c: 0xc040880  jal         func_102200
    ctx->pc = 0x16674Cu;
    SET_GPR_U32(ctx, 31, 0x166754u);
    ctx->pc = 0x166750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16674Cu;
            // 0x166750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166754u; }
        if (ctx->pc != 0x166754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166754u; }
        if (ctx->pc != 0x166754u) { return; }
    }
    ctx->pc = 0x166754u;
    // 0x166754: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166754u;
    SET_GPR_U32(ctx, 31, 0x16675Cu);
    ctx->pc = 0x166758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166754u;
            // 0x166758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16675Cu; }
        if (ctx->pc != 0x16675Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16675Cu; }
        if (ctx->pc != 0x16675Cu) { return; }
    }
    ctx->pc = 0x16675Cu;
    // 0x16675c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16675Cu;
    {
        const bool branch_taken_0x16675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16675Cu;
            // 0x166760: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16675c) {
            ctx->pc = 0x1667D0u;
            goto label_1667d0;
        }
    }
    ctx->pc = 0x166764u;
    // 0x166764: 0x0  nop
    ctx->pc = 0x166764u;
    // NOP
label_166768:
    // 0x166768: 0x3c023fb9  lui         $v0, 0x3FB9
    ctx->pc = 0x166768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16313 << 16));
    // 0x16676c: 0x34439999  ori         $v1, $v0, 0x9999
    ctx->pc = 0x16676cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39321u)));
    // 0x166770: 0x34029999  ori         $v0, $zero, 0x9999
    ctx->pc = 0x166770u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166774: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x166778: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x166778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x16677c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x16677cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x166780: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166780u;
    SET_GPR_U32(ctx, 31, 0x166788u);
    ctx->pc = 0x166784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166780u;
            // 0x166784: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166788u; }
        if (ctx->pc != 0x166788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166788u; }
        if (ctx->pc != 0x166788u) { return; }
    }
    ctx->pc = 0x166788u;
    // 0x166788: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x166788u;
    SET_GPR_U32(ctx, 31, 0x166790u);
    ctx->pc = 0x16678Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166788u;
            // 0x16678c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166790u; }
        if (ctx->pc != 0x166790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166790u; }
        if (ctx->pc != 0x166790u) { return; }
    }
    ctx->pc = 0x166790u;
    // 0x166790: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x166794: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x166794u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166798: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x166798u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x16679c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x16679cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1667a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1667a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1667a4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1667a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1667a8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1667a8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1667ac: 0xc040880  jal         func_102200
    ctx->pc = 0x1667ACu;
    SET_GPR_U32(ctx, 31, 0x1667B4u);
    ctx->pc = 0x1667B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1667ACu;
            // 0x1667b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667B4u; }
        if (ctx->pc != 0x1667B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667B4u; }
        if (ctx->pc != 0x1667B4u) { return; }
    }
    ctx->pc = 0x1667B4u;
    // 0x1667b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1667b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1667b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1667b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1667bc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1667bcu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1667c0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1667C0u;
    SET_GPR_U32(ctx, 31, 0x1667C8u);
    ctx->pc = 0x1667C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1667C0u;
            // 0x1667c4: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667C8u; }
        if (ctx->pc != 0x1667C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667C8u; }
        if (ctx->pc != 0x1667C8u) { return; }
    }
    ctx->pc = 0x1667C8u;
    // 0x1667c8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1667c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1667cc: 0x0  nop
    ctx->pc = 0x1667ccu;
    // NOP
label_1667d0:
    // 0x1667d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1667d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1667d4: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1667d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1667d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1667d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1667dc: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1667dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1667e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1667e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1667e4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1667E4u;
    {
        const bool branch_taken_0x1667e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1667e4) {
            ctx->pc = 0x166830u;
            goto label_166830;
        }
    }
    ctx->pc = 0x1667ECu;
    // 0x1667ec: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1667ECu;
    SET_GPR_U32(ctx, 31, 0x1667F4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667F4u; }
        if (ctx->pc != 0x1667F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667F4u; }
        if (ctx->pc != 0x1667F4u) { return; }
    }
    ctx->pc = 0x1667F4u;
    // 0x1667f4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1667F4u;
    SET_GPR_U32(ctx, 31, 0x1667FCu);
    ctx->pc = 0x1667F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1667F4u;
            // 0x1667f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667FCu; }
        if (ctx->pc != 0x1667FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1667FCu; }
        if (ctx->pc != 0x1667FCu) { return; }
    }
    ctx->pc = 0x1667FCu;
    // 0x1667fc: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1667fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x166800: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x166800u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166804: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x166804u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x166808: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x166808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x16680c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x16680cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x166810: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x166810u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x166814: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x166814u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x166818: 0xc040880  jal         func_102200
    ctx->pc = 0x166818u;
    SET_GPR_U32(ctx, 31, 0x166820u);
    ctx->pc = 0x16681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166818u;
            // 0x16681c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166820u; }
        if (ctx->pc != 0x166820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166820u; }
        if (ctx->pc != 0x166820u) { return; }
    }
    ctx->pc = 0x166820u;
    // 0x166820: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166820u;
    SET_GPR_U32(ctx, 31, 0x166828u);
    ctx->pc = 0x166824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166820u;
            // 0x166824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166828u; }
        if (ctx->pc != 0x166828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166828u; }
        if (ctx->pc != 0x166828u) { return; }
    }
    ctx->pc = 0x166828u;
    // 0x166828: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x166828u;
    {
        const bool branch_taken_0x166828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16682Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166828u;
            // 0x16682c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166828) {
            ctx->pc = 0x166910u;
            goto label_166910;
        }
    }
    ctx->pc = 0x166830u;
label_166830:
    // 0x166830: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x166830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x166834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x166834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166838: 0x0  nop
    ctx->pc = 0x166838u;
    // NOP
    // 0x16683c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16683cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x166840: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x166840u;
    {
        const bool branch_taken_0x166840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x166840) {
            ctx->pc = 0x166898u;
            goto label_166898;
        }
    }
    ctx->pc = 0x166848u;
    // 0x166848: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x166848u;
    SET_GPR_U32(ctx, 31, 0x166850u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166850u; }
        if (ctx->pc != 0x166850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166850u; }
        if (ctx->pc != 0x166850u) { return; }
    }
    ctx->pc = 0x166850u;
    // 0x166850: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 31, 0x166858u);
    ctx->pc = 0x166854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166850u;
            // 0x166854: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166858u; }
        if (ctx->pc != 0x166858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166858u; }
        if (ctx->pc != 0x166858u) { return; }
    }
    ctx->pc = 0x166858u;
    // 0x166858: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x16685c: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x16685cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x166860: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x166860u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x166864: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x166864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x166868: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x166868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x16686c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x16686cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x166870: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x166870u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x166874: 0xc040880  jal         func_102200
    ctx->pc = 0x166874u;
    SET_GPR_U32(ctx, 31, 0x16687Cu);
    ctx->pc = 0x166878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166874u;
            // 0x166878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16687Cu; }
        if (ctx->pc != 0x16687Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16687Cu; }
        if (ctx->pc != 0x16687Cu) { return; }
    }
    ctx->pc = 0x16687Cu;
    // 0x16687c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x166880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x166880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x166884: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x166884u;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x166888: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166888u;
    SET_GPR_U32(ctx, 31, 0x166890u);
    ctx->pc = 0x16688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166888u;
            // 0x16688c: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166890u; }
        if (ctx->pc != 0x166890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166890u; }
        if (ctx->pc != 0x166890u) { return; }
    }
    ctx->pc = 0x166890u;
    // 0x166890: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x166890u;
    {
        const bool branch_taken_0x166890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166890u;
            // 0x166894: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166890) {
            ctx->pc = 0x166910u;
            goto label_166910;
        }
    }
    ctx->pc = 0x166898u;
label_166898:
    // 0x166898: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x166898u;
    SET_GPR_U32(ctx, 31, 0x1668A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668A0u; }
        if (ctx->pc != 0x1668A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668A0u; }
        if (ctx->pc != 0x1668A0u) { return; }
    }
    ctx->pc = 0x1668A0u;
    // 0x1668a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1668a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1668a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1668A4u;
    {
        const bool branch_taken_0x1668a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668a4) {
            ctx->pc = 0x1668D8u;
            goto label_1668d8;
        }
    }
    ctx->pc = 0x1668ACu;
    // 0x1668ac: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1668ACu;
    SET_GPR_U32(ctx, 31, 0x1668B4u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668B4u; }
        if (ctx->pc != 0x1668B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668B4u; }
        if (ctx->pc != 0x1668B4u) { return; }
    }
    ctx->pc = 0x1668B4u;
    // 0x1668b4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1668B4u;
    SET_GPR_U32(ctx, 31, 0x1668BCu);
    ctx->pc = 0x1668B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668B4u;
            // 0x1668b8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668BCu; }
        if (ctx->pc != 0x1668BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668BCu; }
        if (ctx->pc != 0x1668BCu) { return; }
    }
    ctx->pc = 0x1668BCu;
    // 0x1668bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1668bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668c0: 0xc040880  jal         func_102200
    ctx->pc = 0x1668C0u;
    SET_GPR_U32(ctx, 31, 0x1668C8u);
    ctx->pc = 0x1668C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668C0u;
            // 0x1668c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668C8u; }
        if (ctx->pc != 0x1668C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668C8u; }
        if (ctx->pc != 0x1668C8u) { return; }
    }
    ctx->pc = 0x1668C8u;
    // 0x1668c8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1668C8u;
    SET_GPR_U32(ctx, 31, 0x1668D0u);
    ctx->pc = 0x1668CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668C8u;
            // 0x1668cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668D0u; }
        if (ctx->pc != 0x1668D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668D0u; }
        if (ctx->pc != 0x1668D0u) { return; }
    }
    ctx->pc = 0x1668D0u;
    // 0x1668d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1668D0u;
    {
        const bool branch_taken_0x1668d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1668D0u;
            // 0x1668d4: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668d0) {
            ctx->pc = 0x166910u;
            goto label_166910;
        }
    }
    ctx->pc = 0x1668D8u;
label_1668d8:
    // 0x1668d8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1668D8u;
    SET_GPR_U32(ctx, 31, 0x1668E0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668E0u; }
        if (ctx->pc != 0x1668E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668E0u; }
        if (ctx->pc != 0x1668E0u) { return; }
    }
    ctx->pc = 0x1668E0u;
    // 0x1668e0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1668E0u;
    SET_GPR_U32(ctx, 31, 0x1668E8u);
    ctx->pc = 0x1668E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668E0u;
            // 0x1668e4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668E8u; }
        if (ctx->pc != 0x1668E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668E8u; }
        if (ctx->pc != 0x1668E8u) { return; }
    }
    ctx->pc = 0x1668E8u;
    // 0x1668e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1668e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668ec: 0xc040880  jal         func_102200
    ctx->pc = 0x1668ECu;
    SET_GPR_U32(ctx, 31, 0x1668F4u);
    ctx->pc = 0x1668F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668ECu;
            // 0x1668f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668F4u; }
        if (ctx->pc != 0x1668F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668F4u; }
        if (ctx->pc != 0x1668F4u) { return; }
    }
    ctx->pc = 0x1668F4u;
    // 0x1668f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1668f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1668f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1668f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1668fc: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1668fcu;
    SET_GPR_VEC(ctx, 3, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x166900: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x166900u;
    SET_GPR_U32(ctx, 31, 0x166908u);
    ctx->pc = 0x166904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166900u;
            // 0x166904: 0x432026  xor         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166908u; }
        if (ctx->pc != 0x166908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166908u; }
        if (ctx->pc != 0x166908u) { return; }
    }
    ctx->pc = 0x166908u;
    // 0x166908: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x166908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x16690c: 0x0  nop
    ctx->pc = 0x16690cu;
    // NOP
label_166910:
    // 0x166910: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16691c: 0x3e00008  jr          $ra
    ctx->pc = 0x16691Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16691Cu;
            // 0x166920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166678u: goto label_166678;
            case 0x1666F8u: goto label_1666f8;
            case 0x166768u: goto label_166768;
            case 0x1667D0u: goto label_1667d0;
            case 0x166830u: goto label_166830;
            case 0x166898u: goto label_166898;
            case 0x1668D8u: goto label_1668d8;
            case 0x166910u: goto label_166910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166924u;
}
