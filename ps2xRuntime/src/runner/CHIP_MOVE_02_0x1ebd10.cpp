#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CHIP_MOVE_02
// Address: 0x1ebd10 - 0x1ebee0
void CHIP_MOVE_02_0x1ebd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CHIP_MOVE_02_0x1ebd10");
#endif

    ctx->pc = 0x1ebd10u;

    // 0x1ebd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ebd14: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1ebd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1ebd18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ebd1c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x1ebd1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1ebd20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebd24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebd24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebd28: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ebd30: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ebd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ebd34: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1ebd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ebd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ebd3c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1ebd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ebd40: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ebd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd44: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebd48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebd4c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ebd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ebd50: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1ebd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd54: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebd58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebd5c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ebd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ebd60: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1ebd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ebd64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBD64u;
    {
        const bool branch_taken_0x1ebd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD64u;
            // 0x1ebd68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd64) {
            ctx->pc = 0x1EBD90u;
            goto label_1ebd90;
        }
    }
    ctx->pc = 0x1EBD6Cu;
    // 0x1ebd6c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1ebd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd70: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1ebd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1ebd74: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1ebd74u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ebd78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebd78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebd7c: 0x0  nop
    ctx->pc = 0x1ebd7cu;
    // NOP
    // 0x1ebd80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ebd80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ebd84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBD84u;
    {
        const bool branch_taken_0x1ebd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBD84u;
            // 0x1ebd88: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd84) {
            ctx->pc = 0x1EBDB0u;
            goto label_1ebdb0;
        }
    }
    ctx->pc = 0x1EBD8Cu;
    // 0x1ebd8c: 0x0  nop
    ctx->pc = 0x1ebd8cu;
    // NOP
label_1ebd90:
    // 0x1ebd90: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1ebd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1ebd94: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1ebd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebd98: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1ebd98u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1ebd9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ebd9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebda0: 0x0  nop
    ctx->pc = 0x1ebda0u;
    // NOP
    // 0x1ebda4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebda8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1ebda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ebdac: 0x0  nop
    ctx->pc = 0x1ebdacu;
    // NOP
label_1ebdb0:
    // 0x1ebdb0: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1ebdb4: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1ebdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebdb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebdb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebdbc: 0x0  nop
    ctx->pc = 0x1ebdbcu;
    // NOP
    // 0x1ebdc0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ebdc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebdc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBDC4u;
    {
        const bool branch_taken_0x1ebdc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDC4u;
            // 0x1ebdc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdc4) {
            ctx->pc = 0x1EBDD8u;
            goto label_1ebdd8;
        }
    }
    ctx->pc = 0x1EBDCCu;
    // 0x1ebdcc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBDCCu;
    {
        const bool branch_taken_0x1ebdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBDCCu;
            // 0x1ebdd0: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebdcc) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBDD4u;
    // 0x1ebdd4: 0x0  nop
    ctx->pc = 0x1ebdd4u;
    // NOP
label_1ebdd8:
    // 0x1ebdd8: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x1ebdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
    // 0x1ebddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebde0: 0x0  nop
    ctx->pc = 0x1ebde0u;
    // NOP
    // 0x1ebde4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ebde4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebde8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBDE8u;
    {
        const bool branch_taken_0x1ebde8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebde8) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBDF0u;
    // 0x1ebdf0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ebdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ebdf4: 0x0  nop
    ctx->pc = 0x1ebdf4u;
    // NOP
label_1ebdf8:
    // 0x1ebdf8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ebdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ebdfc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBDFCu;
    {
        const bool branch_taken_0x1ebdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebdfc) {
            ctx->pc = 0x1EBE18u;
            goto label_1ebe18;
        }
    }
    ctx->pc = 0x1EBE04u;
    // 0x1ebe04: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1ebe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ebe08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ebe0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBE0Cu;
    {
        const bool branch_taken_0x1ebe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE0Cu;
            // 0x1ebe10: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe0c) {
            ctx->pc = 0x1EBE28u;
            goto label_1ebe28;
        }
    }
    ctx->pc = 0x1EBE14u;
    // 0x1ebe14: 0x0  nop
    ctx->pc = 0x1ebe14u;
    // NOP
label_1ebe18:
    // 0x1ebe18: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1ebe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ebe1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebe20: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1ebe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1ebe24: 0x0  nop
    ctx->pc = 0x1ebe24u;
    // NOP
label_1ebe28:
    // 0x1ebe28: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1ebe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1ebe2c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ebe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebe30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebe30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe34: 0x0  nop
    ctx->pc = 0x1ebe34u;
    // NOP
    // 0x1ebe38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebe38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe3c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBE3Cu;
    {
        const bool branch_taken_0x1ebe3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE3Cu;
            // 0x1ebe40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe3c) {
            ctx->pc = 0x1EBE50u;
            goto label_1ebe50;
        }
    }
    ctx->pc = 0x1EBE44u;
    // 0x1ebe44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBE44u;
    {
        const bool branch_taken_0x1ebe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE44u;
            // 0x1ebe48: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe44) {
            ctx->pc = 0x1EBE70u;
            goto label_1ebe70;
        }
    }
    ctx->pc = 0x1EBE4Cu;
    // 0x1ebe4c: 0x0  nop
    ctx->pc = 0x1ebe4cu;
    // NOP
label_1ebe50:
    // 0x1ebe50: 0x3c03c0a0  lui         $v1, 0xC0A0
    ctx->pc = 0x1ebe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49312 << 16));
    // 0x1ebe54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebe54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe58: 0x0  nop
    ctx->pc = 0x1ebe58u;
    // NOP
    // 0x1ebe5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebe5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBE60u;
    {
        const bool branch_taken_0x1ebe60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe60) {
            ctx->pc = 0x1EBE70u;
            goto label_1ebe70;
        }
    }
    ctx->pc = 0x1EBE68u;
    // 0x1ebe68: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ebe68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ebe6c: 0x0  nop
    ctx->pc = 0x1ebe6cu;
    // NOP
label_1ebe70:
    // 0x1ebe70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebe74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ebe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ebe78: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ebe78u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ebe7c: 0x0  nop
    ctx->pc = 0x1ebe7cu;
    // NOP
    // 0x1ebe80: 0x0  nop
    ctx->pc = 0x1ebe80u;
    // NOP
    // 0x1ebe84: 0x1810  mfhi        $v1
    ctx->pc = 0x1ebe84u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ebe88: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBE88u;
    {
        const bool branch_taken_0x1ebe88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe88) {
            ctx->pc = 0x1EBEB0u;
            goto label_1ebeb0;
        }
    }
    ctx->pc = 0x1EBE90u;
    // 0x1ebe90: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ebe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebe94: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ebe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebe98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ebe9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebe9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ebea0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ebea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ebea4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ebea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ebea8: 0xc0536ac  jal         func_14DAB0
    ctx->pc = 0x1EBEA8u;
    SET_GPR_U32(ctx, 31, 0x1EBEB0u);
    ctx->pc = 0x14DAB0u;
    if (runtime->hasFunction(0x14DAB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEB0u; }
        if (ctx->pc != 0x1EBEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChibi_0x14dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEB0u; }
        if (ctx->pc != 0x1EBEB0u) { return; }
    }
    ctx->pc = 0x1EBEB0u;
label_1ebeb0:
    // 0x1ebeb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebeb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ebeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ebeb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ebeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ebebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebec0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBEC0u;
    {
        const bool branch_taken_0x1ebec0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EBEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEC0u;
            // 0x1ebec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebec0) {
            ctx->pc = 0x1EBED0u;
            goto label_1ebed0;
        }
    }
    ctx->pc = 0x1EBEC8u;
    // 0x1ebec8: 0xc07b398  jal         func_1ECE60
    ctx->pc = 0x1EBEC8u;
    SET_GPR_U32(ctx, 31, 0x1EBED0u);
    ctx->pc = 0x1ECE60u;
    if (runtime->hasFunction(0x1ECE60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBED0u; }
        if (ctx->pc != 0x1EBED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipFree_0x1ece60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBED0u; }
        if (ctx->pc != 0x1EBED0u) { return; }
    }
    ctx->pc = 0x1EBED0u;
label_1ebed0:
    // 0x1ebed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebed8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBED8u;
            // 0x1ebedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBD90u: goto label_1ebd90;
            case 0x1EBDB0u: goto label_1ebdb0;
            case 0x1EBDD8u: goto label_1ebdd8;
            case 0x1EBDF8u: goto label_1ebdf8;
            case 0x1EBE18u: goto label_1ebe18;
            case 0x1EBE28u: goto label_1ebe28;
            case 0x1EBE50u: goto label_1ebe50;
            case 0x1EBE70u: goto label_1ebe70;
            case 0x1EBEB0u: goto label_1ebeb0;
            case 0x1EBED0u: goto label_1ebed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBEE0u;
}
