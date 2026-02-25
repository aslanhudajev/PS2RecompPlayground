#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CHIP_MOVE_01
// Address: 0x1ebee0 - 0x1ec0d0
void CHIP_MOVE_01_0x1ebee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CHIP_MOVE_01_0x1ebee0");
#endif

    ctx->pc = 0x1ebee0u;

    // 0x1ebee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebee4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1ebee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1ebee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ebeec: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x1ebeecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1ebef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebef8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebefc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ebf00: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ebf04: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1ebf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebf08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ebf0c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1ebf0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ebf10: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ebf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf14: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebf18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebf1c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ebf20: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1ebf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf24: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebf28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebf28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebf2c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ebf30: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1ebf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ebf34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBF34u;
    {
        const bool branch_taken_0x1ebf34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF34u;
            // 0x1ebf38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf34) {
            ctx->pc = 0x1EBF60u;
            goto label_1ebf60;
        }
    }
    ctx->pc = 0x1EBF3Cu;
    // 0x1ebf3c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ebf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf40: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1ebf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1ebf44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebf44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebf48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebf48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf4c: 0x0  nop
    ctx->pc = 0x1ebf4cu;
    // NOP
    // 0x1ebf50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebf50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebf54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBF54u;
    {
        const bool branch_taken_0x1ebf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF54u;
            // 0x1ebf58: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf54) {
            ctx->pc = 0x1EBF80u;
            goto label_1ebf80;
        }
    }
    ctx->pc = 0x1EBF5Cu;
    // 0x1ebf5c: 0x0  nop
    ctx->pc = 0x1ebf5cu;
    // NOP
label_1ebf60:
    // 0x1ebf60: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1ebf60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1ebf64: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ebf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf68: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebf68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebf6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebf6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf70: 0x0  nop
    ctx->pc = 0x1ebf70u;
    // NOP
    // 0x1ebf74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebf74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebf78: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1ebf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ebf7c: 0x0  nop
    ctx->pc = 0x1ebf7cu;
    // NOP
label_1ebf80:
    // 0x1ebf80: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x1ebf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x1ebf84: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ebf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebf88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf8c: 0x0  nop
    ctx->pc = 0x1ebf8cu;
    // NOP
    // 0x1ebf90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebf90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebf94: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBF94u;
    {
        const bool branch_taken_0x1ebf94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF94u;
            // 0x1ebf98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf94) {
            ctx->pc = 0x1EBFA8u;
            goto label_1ebfa8;
        }
    }
    ctx->pc = 0x1EBF9Cu;
    // 0x1ebf9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBF9Cu;
    {
        const bool branch_taken_0x1ebf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF9Cu;
            // 0x1ebfa0: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf9c) {
            ctx->pc = 0x1EBFC8u;
            goto label_1ebfc8;
        }
    }
    ctx->pc = 0x1EBFA4u;
    // 0x1ebfa4: 0x0  nop
    ctx->pc = 0x1ebfa4u;
    // NOP
label_1ebfa8:
    // 0x1ebfa8: 0x3c03c090  lui         $v1, 0xC090
    ctx->pc = 0x1ebfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49296 << 16));
    // 0x1ebfac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebfacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfb0: 0x0  nop
    ctx->pc = 0x1ebfb0u;
    // NOP
    // 0x1ebfb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebfb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebfb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBFB8u;
    {
        const bool branch_taken_0x1ebfb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebfb8) {
            ctx->pc = 0x1EBFC8u;
            goto label_1ebfc8;
        }
    }
    ctx->pc = 0x1EBFC0u;
    // 0x1ebfc0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ebfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ebfc4: 0x0  nop
    ctx->pc = 0x1ebfc4u;
    // NOP
label_1ebfc8:
    // 0x1ebfc8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ebfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebfcc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBFCCu;
    {
        const bool branch_taken_0x1ebfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebfcc) {
            ctx->pc = 0x1EBFF8u;
            goto label_1ebff8;
        }
    }
    ctx->pc = 0x1EBFD4u;
    // 0x1ebfd4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ebfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebfd8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1ebfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1ebfdc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebfdcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfe4: 0x0  nop
    ctx->pc = 0x1ebfe4u;
    // NOP
    // 0x1ebfe8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebfe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebfec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBFECu;
    {
        const bool branch_taken_0x1ebfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFECu;
            // 0x1ebff0: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfec) {
            ctx->pc = 0x1EC018u;
            goto label_1ec018;
        }
    }
    ctx->pc = 0x1EBFF4u;
    // 0x1ebff4: 0x0  nop
    ctx->pc = 0x1ebff4u;
    // NOP
label_1ebff8:
    // 0x1ebff8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1ebff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1ebffc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ebffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec000: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ec000u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ec004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec008: 0x0  nop
    ctx->pc = 0x1ec008u;
    // NOP
    // 0x1ec00c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec010: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1ec010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1ec014: 0x0  nop
    ctx->pc = 0x1ec014u;
    // NOP
label_1ec018:
    // 0x1ec018: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x1ec018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x1ec01c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ec01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec024: 0x0  nop
    ctx->pc = 0x1ec024u;
    // NOP
    // 0x1ec028: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec02c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC02Cu;
    {
        const bool branch_taken_0x1ec02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC02Cu;
            // 0x1ec030: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec02c) {
            ctx->pc = 0x1EC040u;
            goto label_1ec040;
        }
    }
    ctx->pc = 0x1EC034u;
    // 0x1ec034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC034u;
    {
        const bool branch_taken_0x1ec034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC034u;
            // 0x1ec038: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec034) {
            ctx->pc = 0x1EC060u;
            goto label_1ec060;
        }
    }
    ctx->pc = 0x1EC03Cu;
    // 0x1ec03c: 0x0  nop
    ctx->pc = 0x1ec03cu;
    // NOP
label_1ec040:
    // 0x1ec040: 0x3c03c090  lui         $v1, 0xC090
    ctx->pc = 0x1ec040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49296 << 16));
    // 0x1ec044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec048: 0x0  nop
    ctx->pc = 0x1ec048u;
    // NOP
    // 0x1ec04c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec04cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec050: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC050u;
    {
        const bool branch_taken_0x1ec050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec050) {
            ctx->pc = 0x1EC060u;
            goto label_1ec060;
        }
    }
    ctx->pc = 0x1EC058u;
    // 0x1ec058: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ec058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ec05c: 0x0  nop
    ctx->pc = 0x1ec05cu;
    // NOP
label_1ec060:
    // 0x1ec060: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ec060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ec064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec068: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ec068u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ec06c: 0x0  nop
    ctx->pc = 0x1ec06cu;
    // NOP
    // 0x1ec070: 0x0  nop
    ctx->pc = 0x1ec070u;
    // NOP
    // 0x1ec074: 0x1810  mfhi        $v1
    ctx->pc = 0x1ec074u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ec078: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC078u;
    {
        const bool branch_taken_0x1ec078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec078) {
            ctx->pc = 0x1EC0A0u;
            goto label_1ec0a0;
        }
    }
    ctx->pc = 0x1EC080u;
    // 0x1ec080: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ec080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec084: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ec084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec088: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ec08c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec08cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec090: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ec090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ec094: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ec094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ec098: 0xc0536ac  jal         func_14DAB0
    ctx->pc = 0x1EC098u;
    SET_GPR_U32(ctx, 31, 0x1EC0A0u);
    ctx->pc = 0x14DAB0u;
    if (runtime->hasFunction(0x14DAB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0A0u; }
        if (ctx->pc != 0x1EC0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChibi_0x14dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0A0u; }
        if (ctx->pc != 0x1EC0A0u) { return; }
    }
    ctx->pc = 0x1EC0A0u;
label_1ec0a0:
    // 0x1ec0a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec0a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ec0a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ec0ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec0b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC0B0u;
    {
        const bool branch_taken_0x1ec0b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0B0u;
            // 0x1ec0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0b0) {
            ctx->pc = 0x1EC0C0u;
            goto label_1ec0c0;
        }
    }
    ctx->pc = 0x1EC0B8u;
    // 0x1ec0b8: 0xc07b398  jal         func_1ECE60
    ctx->pc = 0x1EC0B8u;
    SET_GPR_U32(ctx, 31, 0x1EC0C0u);
    ctx->pc = 0x1ECE60u;
    if (runtime->hasFunction(0x1ECE60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0C0u; }
        if (ctx->pc != 0x1EC0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipFree_0x1ece60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0C0u; }
        if (ctx->pc != 0x1EC0C0u) { return; }
    }
    ctx->pc = 0x1EC0C0u;
label_1ec0c0:
    // 0x1ec0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0C8u;
            // 0x1ec0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBF60u: goto label_1ebf60;
            case 0x1EBF80u: goto label_1ebf80;
            case 0x1EBFA8u: goto label_1ebfa8;
            case 0x1EBFC8u: goto label_1ebfc8;
            case 0x1EBFF8u: goto label_1ebff8;
            case 0x1EC018u: goto label_1ec018;
            case 0x1EC040u: goto label_1ec040;
            case 0x1EC060u: goto label_1ec060;
            case 0x1EC0A0u: goto label_1ec0a0;
            case 0x1EC0C0u: goto label_1ec0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC0D0u;
}
