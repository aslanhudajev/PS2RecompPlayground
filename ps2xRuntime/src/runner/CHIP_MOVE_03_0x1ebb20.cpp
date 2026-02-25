#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CHIP_MOVE_03
// Address: 0x1ebb20 - 0x1ebd10
void CHIP_MOVE_03_0x1ebb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CHIP_MOVE_03_0x1ebb20");
#endif

    ctx->pc = 0x1ebb20u;

    // 0x1ebb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebb24: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1ebb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1ebb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ebb2c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x1ebb2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1ebb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebb34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebb38: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ebb40: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ebb44: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1ebb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ebb4c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1ebb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ebb50: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ebb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebb54: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebb5c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ebb60: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1ebb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebb64: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebb6c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ebb70: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1ebb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ebb74: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBB74u;
    {
        const bool branch_taken_0x1ebb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB74u;
            // 0x1ebb78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb74) {
            ctx->pc = 0x1EBBA0u;
            goto label_1ebba0;
        }
    }
    ctx->pc = 0x1EBB7Cu;
    // 0x1ebb7c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ebb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebb80: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1ebb84: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebb84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebb8c: 0x0  nop
    ctx->pc = 0x1ebb8cu;
    // NOP
    // 0x1ebb90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebb90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebb94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBB94u;
    {
        const bool branch_taken_0x1ebb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB94u;
            // 0x1ebb98: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb94) {
            ctx->pc = 0x1EBBC0u;
            goto label_1ebbc0;
        }
    }
    ctx->pc = 0x1EBB9Cu;
    // 0x1ebb9c: 0x0  nop
    ctx->pc = 0x1ebb9cu;
    // NOP
label_1ebba0:
    // 0x1ebba0: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1ebba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1ebba4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ebba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebba8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebba8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebbac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebbb0: 0x0  nop
    ctx->pc = 0x1ebbb0u;
    // NOP
    // 0x1ebbb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebbb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebbb8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1ebbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ebbbc: 0x0  nop
    ctx->pc = 0x1ebbbcu;
    // NOP
label_1ebbc0:
    // 0x1ebbc0: 0x3c0340b0  lui         $v1, 0x40B0
    ctx->pc = 0x1ebbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16560 << 16));
    // 0x1ebbc4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ebbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebbcc: 0x0  nop
    ctx->pc = 0x1ebbccu;
    // NOP
    // 0x1ebbd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebbd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebbd4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBBD4u;
    {
        const bool branch_taken_0x1ebbd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBD4u;
            // 0x1ebbd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbd4) {
            ctx->pc = 0x1EBBE8u;
            goto label_1ebbe8;
        }
    }
    ctx->pc = 0x1EBBDCu;
    // 0x1ebbdc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBBDCu;
    {
        const bool branch_taken_0x1ebbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBBDCu;
            // 0x1ebbe0: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebbdc) {
            ctx->pc = 0x1EBC08u;
            goto label_1ebc08;
        }
    }
    ctx->pc = 0x1EBBE4u;
    // 0x1ebbe4: 0x0  nop
    ctx->pc = 0x1ebbe4u;
    // NOP
label_1ebbe8:
    // 0x1ebbe8: 0x3c03c0b0  lui         $v1, 0xC0B0
    ctx->pc = 0x1ebbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49328 << 16));
    // 0x1ebbec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebbf0: 0x0  nop
    ctx->pc = 0x1ebbf0u;
    // NOP
    // 0x1ebbf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebbf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBBF8u;
    {
        const bool branch_taken_0x1ebbf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebbf8) {
            ctx->pc = 0x1EBC08u;
            goto label_1ebc08;
        }
    }
    ctx->pc = 0x1EBC00u;
    // 0x1ebc00: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ebc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ebc04: 0x0  nop
    ctx->pc = 0x1ebc04u;
    // NOP
label_1ebc08:
    // 0x1ebc08: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebc0c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBC0Cu;
    {
        const bool branch_taken_0x1ebc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc0c) {
            ctx->pc = 0x1EBC38u;
            goto label_1ebc38;
        }
    }
    ctx->pc = 0x1EBC14u;
    // 0x1ebc14: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ebc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebc18: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1ebc1c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebc1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebc20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebc20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc24: 0x0  nop
    ctx->pc = 0x1ebc24u;
    // NOP
    // 0x1ebc28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ebc28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebc2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBC2Cu;
    {
        const bool branch_taken_0x1ebc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC2Cu;
            // 0x1ebc30: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc2c) {
            ctx->pc = 0x1EBC58u;
            goto label_1ebc58;
        }
    }
    ctx->pc = 0x1EBC34u;
    // 0x1ebc34: 0x0  nop
    ctx->pc = 0x1ebc34u;
    // NOP
label_1ebc38:
    // 0x1ebc38: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1ebc3c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ebc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebc40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ebc40u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ebc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc48: 0x0  nop
    ctx->pc = 0x1ebc48u;
    // NOP
    // 0x1ebc4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ebc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebc50: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1ebc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1ebc54: 0x0  nop
    ctx->pc = 0x1ebc54u;
    // NOP
label_1ebc58:
    // 0x1ebc58: 0x3c0340b0  lui         $v1, 0x40B0
    ctx->pc = 0x1ebc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16560 << 16));
    // 0x1ebc5c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ebc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebc60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebc60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc64: 0x0  nop
    ctx->pc = 0x1ebc64u;
    // NOP
    // 0x1ebc68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebc68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebc6c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBC6Cu;
    {
        const bool branch_taken_0x1ebc6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC6Cu;
            // 0x1ebc70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc6c) {
            ctx->pc = 0x1EBC80u;
            goto label_1ebc80;
        }
    }
    ctx->pc = 0x1EBC74u;
    // 0x1ebc74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBC74u;
    {
        const bool branch_taken_0x1ebc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBC74u;
            // 0x1ebc78: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebc74) {
            ctx->pc = 0x1EBCA0u;
            goto label_1ebca0;
        }
    }
    ctx->pc = 0x1EBC7Cu;
    // 0x1ebc7c: 0x0  nop
    ctx->pc = 0x1ebc7cu;
    // NOP
label_1ebc80:
    // 0x1ebc80: 0x3c03c0b0  lui         $v1, 0xC0B0
    ctx->pc = 0x1ebc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49328 << 16));
    // 0x1ebc84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebc84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc88: 0x0  nop
    ctx->pc = 0x1ebc88u;
    // NOP
    // 0x1ebc8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebc8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebc90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBC90u;
    {
        const bool branch_taken_0x1ebc90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebc90) {
            ctx->pc = 0x1EBCA0u;
            goto label_1ebca0;
        }
    }
    ctx->pc = 0x1EBC98u;
    // 0x1ebc98: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ebc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ebc9c: 0x0  nop
    ctx->pc = 0x1ebc9cu;
    // NOP
label_1ebca0:
    // 0x1ebca0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebca4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ebca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ebca8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ebca8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ebcac: 0x0  nop
    ctx->pc = 0x1ebcacu;
    // NOP
    // 0x1ebcb0: 0x0  nop
    ctx->pc = 0x1ebcb0u;
    // NOP
    // 0x1ebcb4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ebcb4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ebcb8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBCB8u;
    {
        const bool branch_taken_0x1ebcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcb8) {
            ctx->pc = 0x1EBCE0u;
            goto label_1ebce0;
        }
    }
    ctx->pc = 0x1EBCC0u;
    // 0x1ebcc0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ebcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebcc4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ebcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebcc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebcc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ebccc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebcccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ebcd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ebcd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ebcd4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ebcd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ebcd8: 0xc0536ac  jal         func_14DAB0
    ctx->pc = 0x1EBCD8u;
    SET_GPR_U32(ctx, 31, 0x1EBCE0u);
    ctx->pc = 0x14DAB0u;
    if (runtime->hasFunction(0x14DAB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCE0u; }
        if (ctx->pc != 0x1EBCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChibi_0x14dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCE0u; }
        if (ctx->pc != 0x1EBCE0u) { return; }
    }
    ctx->pc = 0x1EBCE0u;
label_1ebce0:
    // 0x1ebce0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebce4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ebce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ebce8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ebce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ebcec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebcf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBCF0u;
    {
        const bool branch_taken_0x1ebcf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EBCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBCF0u;
            // 0x1ebcf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebcf0) {
            ctx->pc = 0x1EBD00u;
            goto label_1ebd00;
        }
    }
    ctx->pc = 0x1EBCF8u;
    // 0x1ebcf8: 0xc07b398  jal         func_1ECE60
    ctx->pc = 0x1EBCF8u;
    SET_GPR_U32(ctx, 31, 0x1EBD00u);
    ctx->pc = 0x1ECE60u;
    if (runtime->hasFunction(0x1ECE60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD00u; }
        if (ctx->pc != 0x1EBD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipFree_0x1ece60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBD00u; }
        if (ctx->pc != 0x1EBD00u) { return; }
    }
    ctx->pc = 0x1EBD00u;
label_1ebd00:
    // 0x1ebd00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebd04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebd08: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD08u;
            // 0x1ebd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBBA0u: goto label_1ebba0;
            case 0x1EBBC0u: goto label_1ebbc0;
            case 0x1EBBE8u: goto label_1ebbe8;
            case 0x1EBC08u: goto label_1ebc08;
            case 0x1EBC38u: goto label_1ebc38;
            case 0x1EBC58u: goto label_1ebc58;
            case 0x1EBC80u: goto label_1ebc80;
            case 0x1EBCA0u: goto label_1ebca0;
            case 0x1EBCE0u: goto label_1ebce0;
            case 0x1EBD00u: goto label_1ebd00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBD10u;
}
