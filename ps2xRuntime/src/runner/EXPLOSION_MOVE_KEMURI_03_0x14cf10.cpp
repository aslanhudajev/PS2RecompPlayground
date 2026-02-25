#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EXPLOSION_MOVE_KEMURI_03
// Address: 0x14cf10 - 0x14d024
void EXPLOSION_MOVE_KEMURI_03_0x14cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EXPLOSION_MOVE_KEMURI_03_0x14cf10");
#endif

    ctx->pc = 0x14cf10u;

    // 0x14cf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cf14: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x14cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x14cf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cf1c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x14cf1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x14cf20: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x14cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14cf24: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x14cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cf28: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14cf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cf2c: 0x0  nop
    ctx->pc = 0x14cf2cu;
    // NOP
    // 0x14cf30: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14cf30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14cf34: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14cf38: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x14cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14cf3c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x14cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cf40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14cf40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14cf44: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x14cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x14cf48: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x14cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cf4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14cf4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14cf50: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14cf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14cf54: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x14cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cf58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14cf58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14cf5c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14cf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14cf60: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x14cf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x14cf64: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x14cf64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x14cf68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF68u;
    {
        const bool branch_taken_0x14cf68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cf68) {
            ctx->pc = 0x14CF78u;
            goto label_14cf78;
        }
    }
    ctx->pc = 0x14CF70u;
    // 0x14cf70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14cf74: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x14cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_14cf78:
    // 0x14cf78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x14cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14cf7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14cf80: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x14cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x14cf84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x14cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14cf88: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x14cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14cf8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14cf90: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x14cf90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14cf94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14CF94u;
    {
        const bool branch_taken_0x14cf94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cf94) {
            ctx->pc = 0x14CFB0u;
            goto label_14cfb0;
        }
    }
    ctx->pc = 0x14CF9Cu;
    // 0x14cf9c: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14CF9Cu;
    SET_GPR_U32(ctx, 31, 0x14CFA4u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFA4u; }
        if (ctx->pc != 0x14CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CFA4u; }
        if (ctx->pc != 0x14CFA4u) { return; }
    }
    ctx->pc = 0x14CFA4u;
    // 0x14cfa4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14CFA4u;
    {
        const bool branch_taken_0x14cfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cfa4) {
            ctx->pc = 0x14D018u;
            goto label_14d018;
        }
    }
    ctx->pc = 0x14CFACu;
    // 0x14cfac: 0x0  nop
    ctx->pc = 0x14cfacu;
    // NOP
label_14cfb0:
    // 0x14cfb0: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x14cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x14cfb4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x14cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cfb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cfbc: 0x0  nop
    ctx->pc = 0x14cfbcu;
    // NOP
    // 0x14cfc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14cfc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cfc4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14CFC4u;
    {
        const bool branch_taken_0x14cfc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFC4u;
            // 0x14cfc8: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfc4) {
            ctx->pc = 0x14D010u;
            goto label_14d010;
        }
    }
    ctx->pc = 0x14CFCCu;
    // 0x14cfcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cfd0: 0x0  nop
    ctx->pc = 0x14cfd0u;
    // NOP
    // 0x14cfd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14cfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cfd8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14CFD8u;
    {
        const bool branch_taken_0x14cfd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cfd8) {
            ctx->pc = 0x14D010u;
            goto label_14d010;
        }
    }
    ctx->pc = 0x14CFE0u;
    // 0x14cfe0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x14cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cfe4: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x14cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x14cfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cfec: 0x0  nop
    ctx->pc = 0x14cfecu;
    // NOP
    // 0x14cff0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14cff0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14cff4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x14CFF4u;
    {
        const bool branch_taken_0x14cff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14CFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CFF4u;
            // 0x14cff8: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cff4) {
            ctx->pc = 0x14D010u;
            goto label_14d010;
        }
    }
    ctx->pc = 0x14CFFCu;
    // 0x14cffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14cffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d000: 0x0  nop
    ctx->pc = 0x14d000u;
    // NOP
    // 0x14d004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14d004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d008: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x14D008u;
    {
        const bool branch_taken_0x14d008 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d008) {
            ctx->pc = 0x14D018u;
            goto label_14d018;
        }
    }
    ctx->pc = 0x14D010u;
label_14d010:
    // 0x14d010: 0xc053be4  jal         func_14EF90
    ctx->pc = 0x14D010u;
    SET_GPR_U32(ctx, 31, 0x14D018u);
    ctx->pc = 0x14EF90u;
    if (runtime->hasFunction(0x14EF90u)) {
        auto targetFn = runtime->lookupFunction(0x14EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D018u; }
        if (ctx->pc != 0x14D018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionFree_0x14ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D018u; }
        if (ctx->pc != 0x14D018u) { return; }
    }
    ctx->pc = 0x14D018u;
label_14d018:
    // 0x14d018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d01c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D01Cu;
            // 0x14d020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CF78u: goto label_14cf78;
            case 0x14CFB0u: goto label_14cfb0;
            case 0x14D010u: goto label_14d010;
            case 0x14D018u: goto label_14d018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14D024u;
}
