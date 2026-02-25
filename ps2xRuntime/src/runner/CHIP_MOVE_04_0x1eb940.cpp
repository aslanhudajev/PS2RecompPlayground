#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CHIP_MOVE_04
// Address: 0x1eb940 - 0x1ebb20
void CHIP_MOVE_04_0x1eb940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CHIP_MOVE_04_0x1eb940");
#endif

    ctx->pc = 0x1eb940u;

    // 0x1eb940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb944: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1eb944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1eb948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eb94c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x1eb94cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1eb950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb954: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eb954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb958: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1eb958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb95c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb960: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1eb960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1eb964: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1eb964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb968: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb96c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1eb96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1eb970: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1eb970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb974: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1eb974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb978: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb97c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1eb97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1eb980: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1eb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb984: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1eb984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb98c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1eb98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1eb990: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1eb990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1eb994: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB994u;
    {
        const bool branch_taken_0x1eb994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB994u;
            // 0x1eb998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb994) {
            ctx->pc = 0x1EB9B8u;
            goto label_1eb9b8;
        }
    }
    ctx->pc = 0x1EB99Cu;
    // 0x1eb99c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1eb99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb9a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1eb9a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb9a8: 0x0  nop
    ctx->pc = 0x1eb9a8u;
    // NOP
    // 0x1eb9ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb9acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb9b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB9B0u;
    {
        const bool branch_taken_0x1eb9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9B0u;
            // 0x1eb9b4: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9b0) {
            ctx->pc = 0x1EB9D0u;
            goto label_1eb9d0;
        }
    }
    ctx->pc = 0x1EB9B8u;
label_1eb9b8:
    // 0x1eb9b8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1eb9bc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1eb9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb9c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb9c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb9c4: 0x0  nop
    ctx->pc = 0x1eb9c4u;
    // NOP
    // 0x1eb9c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb9cc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1eb9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1eb9d0:
    // 0x1eb9d0: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1eb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1eb9d4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1eb9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb9dc: 0x0  nop
    ctx->pc = 0x1eb9dcu;
    // NOP
    // 0x1eb9e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eb9e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb9e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB9E4u;
    {
        const bool branch_taken_0x1eb9e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9E4u;
            // 0x1eb9e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9e4) {
            ctx->pc = 0x1EB9F8u;
            goto label_1eb9f8;
        }
    }
    ctx->pc = 0x1EB9ECu;
    // 0x1eb9ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EB9ECu;
    {
        const bool branch_taken_0x1eb9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB9ECu;
            // 0x1eb9f0: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9ec) {
            ctx->pc = 0x1EBA18u;
            goto label_1eba18;
        }
    }
    ctx->pc = 0x1EB9F4u;
    // 0x1eb9f4: 0x0  nop
    ctx->pc = 0x1eb9f4u;
    // NOP
label_1eb9f8:
    // 0x1eb9f8: 0x3c03c0c0  lui         $v1, 0xC0C0
    ctx->pc = 0x1eb9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
    // 0x1eb9fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb9fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba00: 0x0  nop
    ctx->pc = 0x1eba00u;
    // NOP
    // 0x1eba04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eba04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eba08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBA08u;
    {
        const bool branch_taken_0x1eba08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eba08) {
            ctx->pc = 0x1EBA18u;
            goto label_1eba18;
        }
    }
    ctx->pc = 0x1EBA10u;
    // 0x1eba10: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1eba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1eba14: 0x0  nop
    ctx->pc = 0x1eba14u;
    // NOP
label_1eba18:
    // 0x1eba18: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1eba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1eba1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBA1Cu;
    {
        const bool branch_taken_0x1eba1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eba1c) {
            ctx->pc = 0x1EBA48u;
            goto label_1eba48;
        }
    }
    ctx->pc = 0x1EBA24u;
    // 0x1eba24: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1eba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eba28: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1eba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1eba2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1eba2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1eba30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eba30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba34: 0x0  nop
    ctx->pc = 0x1eba34u;
    // NOP
    // 0x1eba38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eba38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eba3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBA3Cu;
    {
        const bool branch_taken_0x1eba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA3Cu;
            // 0x1eba40: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba3c) {
            ctx->pc = 0x1EBA68u;
            goto label_1eba68;
        }
    }
    ctx->pc = 0x1EBA44u;
    // 0x1eba44: 0x0  nop
    ctx->pc = 0x1eba44u;
    // NOP
label_1eba48:
    // 0x1eba48: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1eba48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1eba4c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1eba4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eba50: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1eba50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1eba54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eba54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba58: 0x0  nop
    ctx->pc = 0x1eba58u;
    // NOP
    // 0x1eba5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eba5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eba60: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1eba60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1eba64: 0x0  nop
    ctx->pc = 0x1eba64u;
    // NOP
label_1eba68:
    // 0x1eba68: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1eba68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x1eba6c: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1eba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eba70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eba70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba74: 0x0  nop
    ctx->pc = 0x1eba74u;
    // NOP
    // 0x1eba78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eba78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eba7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBA7Cu;
    {
        const bool branch_taken_0x1eba7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EBA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA7Cu;
            // 0x1eba80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba7c) {
            ctx->pc = 0x1EBA90u;
            goto label_1eba90;
        }
    }
    ctx->pc = 0x1EBA84u;
    // 0x1eba84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EBA84u;
    {
        const bool branch_taken_0x1eba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBA84u;
            // 0x1eba88: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba84) {
            ctx->pc = 0x1EBAB0u;
            goto label_1ebab0;
        }
    }
    ctx->pc = 0x1EBA8Cu;
    // 0x1eba8c: 0x0  nop
    ctx->pc = 0x1eba8cu;
    // NOP
label_1eba90:
    // 0x1eba90: 0x3c03c0c0  lui         $v1, 0xC0C0
    ctx->pc = 0x1eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49344 << 16));
    // 0x1eba94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eba94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba98: 0x0  nop
    ctx->pc = 0x1eba98u;
    // NOP
    // 0x1eba9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eba9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebaa0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBAA0u;
    {
        const bool branch_taken_0x1ebaa0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebaa0) {
            ctx->pc = 0x1EBAB0u;
            goto label_1ebab0;
        }
    }
    ctx->pc = 0x1EBAA8u;
    // 0x1ebaa8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ebaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ebaac: 0x0  nop
    ctx->pc = 0x1ebaacu;
    // NOP
label_1ebab0:
    // 0x1ebab0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebab4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ebab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ebab8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ebab8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ebabc: 0x0  nop
    ctx->pc = 0x1ebabcu;
    // NOP
    // 0x1ebac0: 0x0  nop
    ctx->pc = 0x1ebac0u;
    // NOP
    // 0x1ebac4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ebac4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ebac8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBAC8u;
    {
        const bool branch_taken_0x1ebac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebac8) {
            ctx->pc = 0x1EBAF0u;
            goto label_1ebaf0;
        }
    }
    ctx->pc = 0x1EBAD0u;
    // 0x1ebad0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ebad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebad4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ebad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebad8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ebadc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ebadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ebae0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ebae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ebae4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ebae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ebae8: 0xc0536ac  jal         func_14DAB0
    ctx->pc = 0x1EBAE8u;
    SET_GPR_U32(ctx, 31, 0x1EBAF0u);
    ctx->pc = 0x14DAB0u;
    if (runtime->hasFunction(0x14DAB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAF0u; }
        if (ctx->pc != 0x1EBAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChibi_0x14dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAF0u; }
        if (ctx->pc != 0x1EBAF0u) { return; }
    }
    ctx->pc = 0x1EBAF0u;
label_1ebaf0:
    // 0x1ebaf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebaf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ebaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ebaf8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ebaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ebafc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ebb00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBB00u;
    {
        const bool branch_taken_0x1ebb00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EBB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB00u;
            // 0x1ebb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb00) {
            ctx->pc = 0x1EBB10u;
            goto label_1ebb10;
        }
    }
    ctx->pc = 0x1EBB08u;
    // 0x1ebb08: 0xc07b398  jal         func_1ECE60
    ctx->pc = 0x1EBB08u;
    SET_GPR_U32(ctx, 31, 0x1EBB10u);
    ctx->pc = 0x1ECE60u;
    if (runtime->hasFunction(0x1ECE60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB10u; }
        if (ctx->pc != 0x1EBB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipFree_0x1ece60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB10u; }
        if (ctx->pc != 0x1EBB10u) { return; }
    }
    ctx->pc = 0x1EBB10u;
label_1ebb10:
    // 0x1ebb10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebb18: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBB18u;
            // 0x1ebb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB9B8u: goto label_1eb9b8;
            case 0x1EB9D0u: goto label_1eb9d0;
            case 0x1EB9F8u: goto label_1eb9f8;
            case 0x1EBA18u: goto label_1eba18;
            case 0x1EBA48u: goto label_1eba48;
            case 0x1EBA68u: goto label_1eba68;
            case 0x1EBA90u: goto label_1eba90;
            case 0x1EBAB0u: goto label_1ebab0;
            case 0x1EBAF0u: goto label_1ebaf0;
            case 0x1EBB10u: goto label_1ebb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBB20u;
}
