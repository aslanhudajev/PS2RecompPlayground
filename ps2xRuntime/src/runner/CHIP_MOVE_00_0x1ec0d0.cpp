#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CHIP_MOVE_00
// Address: 0x1ec0d0 - 0x1ec2b0
void CHIP_MOVE_00_0x1ec0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CHIP_MOVE_00_0x1ec0d0");
#endif

    ctx->pc = 0x1ec0d0u;

    // 0x1ec0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec0d4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x1ec0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x1ec0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec0dc: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x1ec0dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1ec0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec0e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec0e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec0e8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1ec0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec0ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec0f0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ec0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ec0f4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1ec0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec0f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec0f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec0fc: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1ec0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ec100: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ec100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec104: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1ec104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec10c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ec10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ec110: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1ec110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec114: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ec114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec11c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ec11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ec120: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1ec120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1ec124: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EC124u;
    {
        const bool branch_taken_0x1ec124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC124u;
            // 0x1ec128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec124) {
            ctx->pc = 0x1EC150u;
            goto label_1ec150;
        }
    }
    ctx->pc = 0x1EC12Cu;
    // 0x1ec12c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ec12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec130: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1ec130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1ec134: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ec134u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ec138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec13c: 0x0  nop
    ctx->pc = 0x1ec13cu;
    // NOP
    // 0x1ec140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec144: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC144u;
    {
        const bool branch_taken_0x1ec144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC144u;
            // 0x1ec148: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec144) {
            ctx->pc = 0x1EC170u;
            goto label_1ec170;
        }
    }
    ctx->pc = 0x1EC14Cu;
    // 0x1ec14c: 0x0  nop
    ctx->pc = 0x1ec14cu;
    // NOP
label_1ec150:
    // 0x1ec150: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1ec150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1ec154: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ec154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec158: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1ec158u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1ec15c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec15cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec160: 0x0  nop
    ctx->pc = 0x1ec160u;
    // NOP
    // 0x1ec164: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec168: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1ec168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ec16c: 0x0  nop
    ctx->pc = 0x1ec16cu;
    // NOP
label_1ec170:
    // 0x1ec170: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ec170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1ec174: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ec174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec17c: 0x0  nop
    ctx->pc = 0x1ec17cu;
    // NOP
    // 0x1ec180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec184: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC184u;
    {
        const bool branch_taken_0x1ec184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC184u;
            // 0x1ec188: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec184) {
            ctx->pc = 0x1EC198u;
            goto label_1ec198;
        }
    }
    ctx->pc = 0x1EC18Cu;
    // 0x1ec18c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC18Cu;
    {
        const bool branch_taken_0x1ec18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC18Cu;
            // 0x1ec190: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec18c) {
            ctx->pc = 0x1EC1B8u;
            goto label_1ec1b8;
        }
    }
    ctx->pc = 0x1EC194u;
    // 0x1ec194: 0x0  nop
    ctx->pc = 0x1ec194u;
    // NOP
label_1ec198:
    // 0x1ec198: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x1ec198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
    // 0x1ec19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec1a0: 0x0  nop
    ctx->pc = 0x1ec1a0u;
    // NOP
    // 0x1ec1a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec1a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC1A8u;
    {
        const bool branch_taken_0x1ec1a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec1a8) {
            ctx->pc = 0x1EC1B8u;
            goto label_1ec1b8;
        }
    }
    ctx->pc = 0x1EC1B0u;
    // 0x1ec1b0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ec1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ec1b4: 0x0  nop
    ctx->pc = 0x1ec1b4u;
    // NOP
label_1ec1b8:
    // 0x1ec1b8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ec1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ec1bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC1BCu;
    {
        const bool branch_taken_0x1ec1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec1bc) {
            ctx->pc = 0x1EC1E0u;
            goto label_1ec1e0;
        }
    }
    ctx->pc = 0x1EC1C4u;
    // 0x1ec1c4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ec1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec1c8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ec1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec1cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec1d0: 0x0  nop
    ctx->pc = 0x1ec1d0u;
    // NOP
    // 0x1ec1d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec1d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec1d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC1D8u;
    {
        const bool branch_taken_0x1ec1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1D8u;
            // 0x1ec1dc: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1d8) {
            ctx->pc = 0x1EC1F8u;
            goto label_1ec1f8;
        }
    }
    ctx->pc = 0x1EC1E0u;
label_1ec1e0:
    // 0x1ec1e0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ec1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ec1e4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ec1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec1e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec1ec: 0x0  nop
    ctx->pc = 0x1ec1ecu;
    // NOP
    // 0x1ec1f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec1f4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1ec1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1ec1f8:
    // 0x1ec1f8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1ec1fc: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ec1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec204: 0x0  nop
    ctx->pc = 0x1ec204u;
    // NOP
    // 0x1ec208: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ec208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec20c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC20Cu;
    {
        const bool branch_taken_0x1ec20c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EC210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC20Cu;
            // 0x1ec210: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec20c) {
            ctx->pc = 0x1EC220u;
            goto label_1ec220;
        }
    }
    ctx->pc = 0x1EC214u;
    // 0x1ec214: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC214u;
    {
        const bool branch_taken_0x1ec214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC214u;
            // 0x1ec218: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec214) {
            ctx->pc = 0x1EC240u;
            goto label_1ec240;
        }
    }
    ctx->pc = 0x1EC21Cu;
    // 0x1ec21c: 0x0  nop
    ctx->pc = 0x1ec21cu;
    // NOP
label_1ec220:
    // 0x1ec220: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x1ec220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
    // 0x1ec224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec228: 0x0  nop
    ctx->pc = 0x1ec228u;
    // NOP
    // 0x1ec22c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec230: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC230u;
    {
        const bool branch_taken_0x1ec230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec230) {
            ctx->pc = 0x1EC240u;
            goto label_1ec240;
        }
    }
    ctx->pc = 0x1EC238u;
    // 0x1ec238: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ec238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ec23c: 0x0  nop
    ctx->pc = 0x1ec23cu;
    // NOP
label_1ec240:
    // 0x1ec240: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ec240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec244: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ec244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec248: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ec248u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ec24c: 0x0  nop
    ctx->pc = 0x1ec24cu;
    // NOP
    // 0x1ec250: 0x0  nop
    ctx->pc = 0x1ec250u;
    // NOP
    // 0x1ec254: 0x1810  mfhi        $v1
    ctx->pc = 0x1ec254u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ec258: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC258u;
    {
        const bool branch_taken_0x1ec258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec258) {
            ctx->pc = 0x1EC280u;
            goto label_1ec280;
        }
    }
    ctx->pc = 0x1EC260u;
    // 0x1ec260: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1ec260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec264: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1ec264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec268: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1ec26c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec26cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec270: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ec270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ec274: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1ec274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1ec278: 0xc0536ac  jal         func_14DAB0
    ctx->pc = 0x1EC278u;
    SET_GPR_U32(ctx, 31, 0x1EC280u);
    ctx->pc = 0x14DAB0u;
    if (runtime->hasFunction(0x14DAB0u)) {
        auto targetFn = runtime->lookupFunction(0x14DAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC280u; }
        if (ctx->pc != 0x1EC280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChibi_0x14dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC280u; }
        if (ctx->pc != 0x1EC280u) { return; }
    }
    ctx->pc = 0x1EC280u;
label_1ec280:
    // 0x1ec280: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec284: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ec284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ec288: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1ec28c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ec28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec290: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC290u;
    {
        const bool branch_taken_0x1ec290 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC290u;
            // 0x1ec294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec290) {
            ctx->pc = 0x1EC2A0u;
            goto label_1ec2a0;
        }
    }
    ctx->pc = 0x1EC298u;
    // 0x1ec298: 0xc07b398  jal         func_1ECE60
    ctx->pc = 0x1EC298u;
    SET_GPR_U32(ctx, 31, 0x1EC2A0u);
    ctx->pc = 0x1ECE60u;
    if (runtime->hasFunction(0x1ECE60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2A0u; }
        if (ctx->pc != 0x1EC2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipFree_0x1ece60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2A0u; }
        if (ctx->pc != 0x1EC2A0u) { return; }
    }
    ctx->pc = 0x1EC2A0u;
label_1ec2a0:
    // 0x1ec2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec2a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2A8u;
            // 0x1ec2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC150u: goto label_1ec150;
            case 0x1EC170u: goto label_1ec170;
            case 0x1EC198u: goto label_1ec198;
            case 0x1EC1B8u: goto label_1ec1b8;
            case 0x1EC1E0u: goto label_1ec1e0;
            case 0x1EC1F8u: goto label_1ec1f8;
            case 0x1EC220u: goto label_1ec220;
            case 0x1EC240u: goto label_1ec240;
            case 0x1EC280u: goto label_1ec280;
            case 0x1EC2A0u: goto label_1ec2a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC2B0u;
}
