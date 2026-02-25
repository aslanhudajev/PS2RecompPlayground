#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_03Move
// Address: 0x1abab0 - 0x1acab4
void En6_03Move_0x1abab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_03Move_0x1abab0");
#endif

    ctx->pc = 0x1abab0u;

label_1abab0:
    // 0x1abab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1abab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1abab4:
    // 0x1abab4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1abab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1abab8:
    // 0x1abab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ababc:
    // 0x1ababc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ababcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abac0:
    // 0x1abac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1abac4:
    // 0x1abac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abac8:
    // 0x1abac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1abacc:
    // 0x1abacc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1abaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abad0:
    // 0x1abad0: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1abad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1abad4:
    // 0x1abad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1abad8:
    // 0x1abad8: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1abad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abadc:
    // 0x1abadc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1abadcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1abae0:
    // 0x1abae0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1abae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1abae4:
    // 0x1abae4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abae8:
    // 0x1abae8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1abae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1abaec:
    // 0x1abaec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1abaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abaf0:
    // 0x1abaf0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1abaf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1abaf4:
    // 0x1abaf4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1abaf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1abaf8:
    // 0x1abaf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abafc:
    // 0x1abafc: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1abafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1abb00:
    // 0x1abb00: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1abb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abb04:
    // 0x1abb04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1abb04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1abb08:
    // 0x1abb08: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1abb08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1abb0c:
    // 0x1abb0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abb10:
    // 0x1abb10: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1abb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1abb14:
    // 0x1abb14: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1abb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abb18:
    // 0x1abb18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1abb18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1abb1c:
    // 0x1abb1c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1abb1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1abb20:
    // 0x1abb20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abb24:
    // 0x1abb24: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1abb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1abb28:
    // 0x1abb28: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1abb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abb2c:
    // 0x1abb2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1abb2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1abb30:
    // 0x1abb30: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1abb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1abb34:
    // 0x1abb34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1abb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1abb38:
    // 0x1abb38: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1abb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abb3c:
    // 0x1abb3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1abb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1abb40:
    // 0x1abb40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1abb44:
    if (ctx->pc == 0x1ABB44u) {
        ctx->pc = 0x1ABB44u;
            // 0x1abb44: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1ABB48u;
        goto label_1abb48;
    }
    ctx->pc = 0x1ABB40u;
    {
        const bool branch_taken_0x1abb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB40u;
            // 0x1abb44: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb40) {
            ctx->pc = 0x1ABB60u;
            goto label_1abb60;
        }
    }
    ctx->pc = 0x1ABB48u;
label_1abb48:
    // 0x1abb48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1abb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1abb4c:
    // 0x1abb4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abb4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abb50:
    // 0x1abb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abb54:
    // 0x1abb54: 0x0  nop
    ctx->pc = 0x1abb54u;
    // NOP
label_1abb58:
    // 0x1abb58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1abb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1abb5c:
    // 0x1abb5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1abb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1abb60:
    // 0x1abb60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abb64:
    // 0x1abb64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1abb68:
    // 0x1abb68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abb68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abb6c:
    // 0x1abb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abb70:
    // 0x1abb70: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1abb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abb74:
    // 0x1abb74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1abb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1abb78:
    // 0x1abb78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1abb7c:
    if (ctx->pc == 0x1ABB7Cu) {
        ctx->pc = 0x1ABB7Cu;
            // 0x1abb7c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1ABB80u;
        goto label_1abb80;
    }
    ctx->pc = 0x1ABB78u;
    {
        const bool branch_taken_0x1abb78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB78u;
            // 0x1abb7c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb78) {
            ctx->pc = 0x1ABB98u;
            goto label_1abb98;
        }
    }
    ctx->pc = 0x1ABB80u;
label_1abb80:
    // 0x1abb80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1abb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1abb84:
    // 0x1abb84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abb84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abb88:
    // 0x1abb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abb8c:
    // 0x1abb8c: 0x0  nop
    ctx->pc = 0x1abb8cu;
    // NOP
label_1abb90:
    // 0x1abb90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1abb90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1abb94:
    // 0x1abb94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1abb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1abb98:
    // 0x1abb98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abb9c:
    // 0x1abb9c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1abb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1abba0:
    // 0x1abba0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abba0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abba4:
    // 0x1abba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abba8:
    // 0x1abba8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1abba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abbac:
    // 0x1abbac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1abbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1abbb0:
    // 0x1abbb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1abbb4:
    if (ctx->pc == 0x1ABBB4u) {
        ctx->pc = 0x1ABBB4u;
            // 0x1abbb4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1ABBB8u;
        goto label_1abbb8;
    }
    ctx->pc = 0x1ABBB0u;
    {
        const bool branch_taken_0x1abbb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBB0u;
            // 0x1abbb4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbb0) {
            ctx->pc = 0x1ABBD0u;
            goto label_1abbd0;
        }
    }
    ctx->pc = 0x1ABBB8u;
label_1abbb8:
    // 0x1abbb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1abbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1abbbc:
    // 0x1abbbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abbbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abbc0:
    // 0x1abbc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abbc4:
    // 0x1abbc4: 0x0  nop
    ctx->pc = 0x1abbc4u;
    // NOP
label_1abbc8:
    // 0x1abbc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1abbc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1abbcc:
    // 0x1abbcc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1abbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1abbd0:
    // 0x1abbd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abbd4:
    // 0x1abbd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1abbd8:
    // 0x1abbd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abbd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abbdc:
    // 0x1abbdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abbdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abbe0:
    // 0x1abbe0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1abbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abbe4:
    // 0x1abbe4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1abbe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1abbe8:
    // 0x1abbe8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1abbec:
    if (ctx->pc == 0x1ABBECu) {
        ctx->pc = 0x1ABBECu;
            // 0x1abbec: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1ABBF0u;
        goto label_1abbf0;
    }
    ctx->pc = 0x1ABBE8u;
    {
        const bool branch_taken_0x1abbe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABBE8u;
            // 0x1abbec: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abbe8) {
            ctx->pc = 0x1ABC08u;
            goto label_1abc08;
        }
    }
    ctx->pc = 0x1ABBF0u;
label_1abbf0:
    // 0x1abbf0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1abbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1abbf4:
    // 0x1abbf4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abbf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abbf8:
    // 0x1abbf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abbf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abbfc:
    // 0x1abbfc: 0x0  nop
    ctx->pc = 0x1abbfcu;
    // NOP
label_1abc00:
    // 0x1abc00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1abc00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1abc04:
    // 0x1abc04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1abc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1abc08:
    // 0x1abc08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abc0c:
    // 0x1abc0c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1abc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1abc10:
    // 0x1abc10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abc10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abc14:
    // 0x1abc14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abc18:
    // 0x1abc18: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1abc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abc1c:
    // 0x1abc1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1abc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1abc20:
    // 0x1abc20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1abc24:
    if (ctx->pc == 0x1ABC24u) {
        ctx->pc = 0x1ABC24u;
            // 0x1abc24: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1ABC28u;
        goto label_1abc28;
    }
    ctx->pc = 0x1ABC20u;
    {
        const bool branch_taken_0x1abc20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC20u;
            // 0x1abc24: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc20) {
            ctx->pc = 0x1ABC40u;
            goto label_1abc40;
        }
    }
    ctx->pc = 0x1ABC28u;
label_1abc28:
    // 0x1abc28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1abc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1abc2c:
    // 0x1abc2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abc2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abc30:
    // 0x1abc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abc34:
    // 0x1abc34: 0x0  nop
    ctx->pc = 0x1abc34u;
    // NOP
label_1abc38:
    // 0x1abc38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1abc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1abc3c:
    // 0x1abc3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1abc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1abc40:
    // 0x1abc40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1abc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abc44:
    // 0x1abc44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1abc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1abc48:
    // 0x1abc48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abc48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abc4c:
    // 0x1abc4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abc50:
    // 0x1abc50: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1abc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abc54:
    // 0x1abc54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1abc54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1abc58:
    // 0x1abc58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1abc5c:
    if (ctx->pc == 0x1ABC5Cu) {
        ctx->pc = 0x1ABC5Cu;
            // 0x1abc5c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1ABC60u;
        goto label_1abc60;
    }
    ctx->pc = 0x1ABC58u;
    {
        const bool branch_taken_0x1abc58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC58u;
            // 0x1abc5c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abc58) {
            ctx->pc = 0x1ABC78u;
            goto label_1abc78;
        }
    }
    ctx->pc = 0x1ABC60u;
label_1abc60:
    // 0x1abc60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1abc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1abc64:
    // 0x1abc64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1abc64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1abc68:
    // 0x1abc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abc6c:
    // 0x1abc6c: 0x0  nop
    ctx->pc = 0x1abc6cu;
    // NOP
label_1abc70:
    // 0x1abc70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1abc70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1abc74:
    // 0x1abc74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1abc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1abc78:
    // 0x1abc78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1abc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1abc7c:
    // 0x1abc7c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1abc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1abc80:
    // 0x1abc80: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1abc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1abc84:
    // 0x1abc84: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1abc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1abc88:
    // 0x1abc88: 0xc06b2b0  jal         func_1ACAC0
label_1abc8c:
    if (ctx->pc == 0x1ABC8Cu) {
        ctx->pc = 0x1ABC8Cu;
            // 0x1abc8c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1ABC90u;
        goto label_1abc90;
    }
    ctx->pc = 0x1ABC88u;
    SET_GPR_U32(ctx, 31, 0x1ABC90u);
    ctx->pc = 0x1ABC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABC88u;
            // 0x1abc8c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACAC0u;
    if (runtime->hasFunction(0x1ACAC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ACAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC90u; }
        if (ctx->pc != 0x1ABC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1acac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABC90u; }
        if (ctx->pc != 0x1ABC90u) { return; }
    }
    ctx->pc = 0x1ABC90u;
label_1abc90:
    // 0x1abc90: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1abc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abc94:
    // 0x1abc94: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1abc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1abc98:
    // 0x1abc98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abc9c:
    // 0x1abc9c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1abc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1abca0:
    // 0x1abca0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1abca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abca4:
    // 0x1abca4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1abca8:
    if (ctx->pc == 0x1ABCA8u) {
        ctx->pc = 0x1ABCACu;
        goto label_1abcac;
    }
    ctx->pc = 0x1ABCA4u;
    {
        const bool branch_taken_0x1abca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abca4) {
            ctx->pc = 0x1ABD18u;
            goto label_1abd18;
        }
    }
    ctx->pc = 0x1ABCACu;
label_1abcac:
    // 0x1abcac: 0xc050bb4  jal         func_142ED0
label_1abcb0:
    if (ctx->pc == 0x1ABCB0u) {
        ctx->pc = 0x1ABCB4u;
        goto label_1abcb4;
    }
    ctx->pc = 0x1ABCACu;
    SET_GPR_U32(ctx, 31, 0x1ABCB4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCB4u; }
        if (ctx->pc != 0x1ABCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCB4u; }
        if (ctx->pc != 0x1ABCB4u) { return; }
    }
    ctx->pc = 0x1ABCB4u;
label_1abcb4:
    // 0x1abcb4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1abcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1abcb8:
    // 0x1abcb8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1abcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1abcbc:
    // 0x1abcbc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1abcbcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1abcc0:
    // 0x1abcc0: 0x0  nop
    ctx->pc = 0x1abcc0u;
    // NOP
label_1abcc4:
    // 0x1abcc4: 0x0  nop
    ctx->pc = 0x1abcc4u;
    // NOP
label_1abcc8:
    // 0x1abcc8: 0x1010  mfhi        $v0
    ctx->pc = 0x1abcc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1abccc:
    // 0x1abccc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1abcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1abcd0:
    // 0x1abcd0: 0xc050bb4  jal         func_142ED0
label_1abcd4:
    if (ctx->pc == 0x1ABCD4u) {
        ctx->pc = 0x1ABCD4u;
            // 0x1abcd4: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1ABCD8u;
        goto label_1abcd8;
    }
    ctx->pc = 0x1ABCD0u;
    SET_GPR_U32(ctx, 31, 0x1ABCD8u);
    ctx->pc = 0x1ABCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCD0u;
            // 0x1abcd4: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCD8u; }
        if (ctx->pc != 0x1ABCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCD8u; }
        if (ctx->pc != 0x1ABCD8u) { return; }
    }
    ctx->pc = 0x1ABCD8u;
label_1abcd8:
    // 0x1abcd8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1abcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1abcdc:
    // 0x1abcdc: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1abcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1abce0:
    // 0x1abce0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1abce0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1abce4:
    // 0x1abce4: 0x0  nop
    ctx->pc = 0x1abce4u;
    // NOP
label_1abce8:
    // 0x1abce8: 0x0  nop
    ctx->pc = 0x1abce8u;
    // NOP
label_1abcec:
    // 0x1abcec: 0x1010  mfhi        $v0
    ctx->pc = 0x1abcecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1abcf0:
    // 0x1abcf0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1abcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1abcf4:
    // 0x1abcf4: 0xc050bb4  jal         func_142ED0
label_1abcf8:
    if (ctx->pc == 0x1ABCF8u) {
        ctx->pc = 0x1ABCF8u;
            // 0x1abcf8: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1ABCFCu;
        goto label_1abcfc;
    }
    ctx->pc = 0x1ABCF4u;
    SET_GPR_U32(ctx, 31, 0x1ABCFCu);
    ctx->pc = 0x1ABCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABCF4u;
            // 0x1abcf8: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCFCu; }
        if (ctx->pc != 0x1ABCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABCFCu; }
        if (ctx->pc != 0x1ABCFCu) { return; }
    }
    ctx->pc = 0x1ABCFCu;
label_1abcfc:
    // 0x1abcfc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1abcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1abd00:
    // 0x1abd00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1abd00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1abd04:
    // 0x1abd04: 0x0  nop
    ctx->pc = 0x1abd04u;
    // NOP
label_1abd08:
    // 0x1abd08: 0x0  nop
    ctx->pc = 0x1abd08u;
    // NOP
label_1abd0c:
    // 0x1abd0c: 0x1010  mfhi        $v0
    ctx->pc = 0x1abd0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1abd10:
    // 0x1abd10: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1abd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1abd14:
    // 0x1abd14: 0x0  nop
    ctx->pc = 0x1abd14u;
    // NOP
label_1abd18:
    // 0x1abd18: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1abd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1abd1c:
    // 0x1abd1c: 0x184000ee  blez        $v0, . + 4 + (0xEE << 2)
label_1abd20:
    if (ctx->pc == 0x1ABD20u) {
        ctx->pc = 0x1ABD24u;
        goto label_1abd24;
    }
    ctx->pc = 0x1ABD1Cu;
    {
        const bool branch_taken_0x1abd1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1abd1c) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABD24u;
label_1abd24:
    // 0x1abd24: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1abd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1abd28:
    // 0x1abd28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abd2c:
    // 0x1abd2c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1abd30:
    if (ctx->pc == 0x1ABD30u) {
        ctx->pc = 0x1ABD34u;
        goto label_1abd34;
    }
    ctx->pc = 0x1ABD2Cu;
    {
        const bool branch_taken_0x1abd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1abd2c) {
            ctx->pc = 0x1ABD48u;
            goto label_1abd48;
        }
    }
    ctx->pc = 0x1ABD34u;
label_1abd34:
    // 0x1abd34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1abd38:
    if (ctx->pc == 0x1ABD38u) {
        ctx->pc = 0x1ABD3Cu;
        goto label_1abd3c;
    }
    ctx->pc = 0x1ABD34u;
    {
        const bool branch_taken_0x1abd34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abd34) {
            ctx->pc = 0x1ABD48u;
            goto label_1abd48;
        }
    }
    ctx->pc = 0x1ABD3Cu;
label_1abd3c:
    // 0x1abd3c: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_1abd40:
    if (ctx->pc == 0x1ABD40u) {
        ctx->pc = 0x1ABD44u;
        goto label_1abd44;
    }
    ctx->pc = 0x1ABD3Cu;
    {
        const bool branch_taken_0x1abd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abd3c) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABD44u;
label_1abd44:
    // 0x1abd44: 0x0  nop
    ctx->pc = 0x1abd44u;
    // NOP
label_1abd48:
    // 0x1abd48: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1abd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1abd4c:
    // 0x1abd4c: 0x14c0001a  bnez        $a2, . + 4 + (0x1A << 2)
label_1abd50:
    if (ctx->pc == 0x1ABD50u) {
        ctx->pc = 0x1ABD54u;
        goto label_1abd54;
    }
    ctx->pc = 0x1ABD4Cu;
    {
        const bool branch_taken_0x1abd4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abd4c) {
            ctx->pc = 0x1ABDB8u;
            goto label_1abdb8;
        }
    }
    ctx->pc = 0x1ABD54u;
label_1abd54:
    // 0x1abd54: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1abd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abd58:
    // 0x1abd58: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1abd5c:
    // 0x1abd5c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1abd5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1abd60:
    // 0x1abd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abd64:
    // 0x1abd64: 0x0  nop
    ctx->pc = 0x1abd64u;
    // NOP
label_1abd68:
    // 0x1abd68: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1abd68u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1abd6c:
    // 0x1abd6c: 0xc040d72  jal         func_1035C8
label_1abd70:
    if (ctx->pc == 0x1ABD70u) {
        ctx->pc = 0x1ABD70u;
            // 0x1abd70: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1ABD74u;
        goto label_1abd74;
    }
    ctx->pc = 0x1ABD6Cu;
    SET_GPR_U32(ctx, 31, 0x1ABD74u);
    ctx->pc = 0x1ABD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD6Cu;
            // 0x1abd70: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD74u; }
        if (ctx->pc != 0x1ABD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD74u; }
        if (ctx->pc != 0x1ABD74u) { return; }
    }
    ctx->pc = 0x1ABD74u;
label_1abd74:
    // 0x1abd74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1abd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1abd78:
    // 0x1abd78: 0xc040078  jal         func_1001E0
label_1abd7c:
    if (ctx->pc == 0x1ABD7Cu) {
        ctx->pc = 0x1ABD7Cu;
            // 0x1abd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD80u;
        goto label_1abd80;
    }
    ctx->pc = 0x1ABD78u;
    SET_GPR_U32(ctx, 31, 0x1ABD80u);
    ctx->pc = 0x1ABD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABD78u;
            // 0x1abd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD80u; }
        if (ctx->pc != 0x1ABD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABD80u; }
        if (ctx->pc != 0x1ABD80u) { return; }
    }
    ctx->pc = 0x1ABD80u;
label_1abd80:
    // 0x1abd80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1abd84:
    if (ctx->pc == 0x1ABD84u) {
        ctx->pc = 0x1ABD88u;
        goto label_1abd88;
    }
    ctx->pc = 0x1ABD80u;
    {
        const bool branch_taken_0x1abd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abd80) {
            ctx->pc = 0x1ABDA8u;
            goto label_1abda8;
        }
    }
    ctx->pc = 0x1ABD88u;
label_1abd88:
    // 0x1abd88: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1abd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1abd8c:
    // 0x1abd8c: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x1abd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
label_1abd90:
    // 0x1abd90: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1abd90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1abd94:
    // 0x1abd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abd98:
    // 0x1abd98: 0x0  nop
    ctx->pc = 0x1abd98u;
    // NOP
label_1abd9c:
    // 0x1abd9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1abd9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1abda0:
    // 0x1abda0: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1abda4:
    if (ctx->pc == 0x1ABDA4u) {
        ctx->pc = 0x1ABDA4u;
            // 0x1abda4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1ABDA8u;
        goto label_1abda8;
    }
    ctx->pc = 0x1ABDA0u;
    {
        const bool branch_taken_0x1abda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDA0u;
            // 0x1abda4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abda0) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABDA8u;
label_1abda8:
    // 0x1abda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abdac:
    // 0x1abdac: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1abdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1abdb0:
    // 0x1abdb0: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1abdb4:
    if (ctx->pc == 0x1ABDB4u) {
        ctx->pc = 0x1ABDB4u;
            // 0x1abdb4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1ABDB8u;
        goto label_1abdb8;
    }
    ctx->pc = 0x1ABDB0u;
    {
        const bool branch_taken_0x1abdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDB0u;
            // 0x1abdb4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abdb0) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABDB8u;
label_1abdb8:
    // 0x1abdb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abdbc:
    // 0x1abdbc: 0x14c20022  bne         $a2, $v0, . + 4 + (0x22 << 2)
label_1abdc0:
    if (ctx->pc == 0x1ABDC0u) {
        ctx->pc = 0x1ABDC4u;
        goto label_1abdc4;
    }
    ctx->pc = 0x1ABDBCu;
    {
        const bool branch_taken_0x1abdbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abdbc) {
            ctx->pc = 0x1ABE48u;
            goto label_1abe48;
        }
    }
    ctx->pc = 0x1ABDC4u;
label_1abdc4:
    // 0x1abdc4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1abdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abdc8:
    // 0x1abdc8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1abdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1abdcc:
    // 0x1abdcc: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1abdd0:
    if (ctx->pc == 0x1ABDD0u) {
        ctx->pc = 0x1ABDD4u;
        goto label_1abdd4;
    }
    ctx->pc = 0x1ABDCCu;
    {
        const bool branch_taken_0x1abdcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abdcc) {
            ctx->pc = 0x1ABE28u;
            goto label_1abe28;
        }
    }
    ctx->pc = 0x1ABDD4u;
label_1abdd4:
    // 0x1abdd4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abdd8:
    // 0x1abdd8: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1abddc:
    // 0x1abddc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abde0:
    // 0x1abde0: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x1abde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
label_1abde4:
    // 0x1abde4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1abde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1abde8:
    // 0x1abde8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1abde8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1abdec:
    // 0x1abdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1abdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1abdf0:
    // 0x1abdf0: 0x0  nop
    ctx->pc = 0x1abdf0u;
    // NOP
label_1abdf4:
    // 0x1abdf4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1abdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1abdf8:
    // 0x1abdf8: 0xc05d080  jal         func_174200
label_1abdfc:
    if (ctx->pc == 0x1ABDFCu) {
        ctx->pc = 0x1ABDFCu;
            // 0x1abdfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1ABE00u;
        goto label_1abe00;
    }
    ctx->pc = 0x1ABDF8u;
    SET_GPR_U32(ctx, 31, 0x1ABE00u);
    ctx->pc = 0x1ABDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABDF8u;
            // 0x1abdfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE00u; }
        if (ctx->pc != 0x1ABE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE00u; }
        if (ctx->pc != 0x1ABE00u) { return; }
    }
    ctx->pc = 0x1ABE00u;
label_1abe00:
    // 0x1abe00: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abe04:
    // 0x1abe04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abe08:
    // 0x1abe08: 0x2464ffe4  addiu       $a0, $v1, -0x1C
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
label_1abe0c:
    // 0x1abe0c: 0xc065234  jal         func_1948D0
label_1abe10:
    if (ctx->pc == 0x1ABE10u) {
        ctx->pc = 0x1ABE10u;
            // 0x1abe10: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1ABE14u;
        goto label_1abe14;
    }
    ctx->pc = 0x1ABE0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE14u);
    ctx->pc = 0x1ABE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE0Cu;
            // 0x1abe10: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1948D0u;
    if (runtime->hasFunction(0x1948D0u)) {
        auto targetFn = runtime->lookupFunction(0x1948D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE14u; }
        if (ctx->pc != 0x1ABE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nobiru_0x1948d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE14u; }
        if (ctx->pc != 0x1ABE14u) { return; }
    }
    ctx->pc = 0x1ABE14u;
label_1abe14:
    // 0x1abe14: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abe18:
    // 0x1abe18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abe1c:
    // 0x1abe1c: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x1abe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1abe20:
    // 0x1abe20: 0xc065234  jal         func_1948D0
label_1abe24:
    if (ctx->pc == 0x1ABE24u) {
        ctx->pc = 0x1ABE24u;
            // 0x1abe24: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1ABE28u;
        goto label_1abe28;
    }
    ctx->pc = 0x1ABE20u;
    SET_GPR_U32(ctx, 31, 0x1ABE28u);
    ctx->pc = 0x1ABE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE20u;
            // 0x1abe24: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1948D0u;
    if (runtime->hasFunction(0x1948D0u)) {
        auto targetFn = runtime->lookupFunction(0x1948D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE28u; }
        if (ctx->pc != 0x1ABE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nobiru_0x1948d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE28u; }
        if (ctx->pc != 0x1ABE28u) { return; }
    }
    ctx->pc = 0x1ABE28u;
label_1abe28:
    // 0x1abe28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1abe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abe2c:
    // 0x1abe2c: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x1abe2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_1abe30:
    // 0x1abe30: 0x142000a9  bnez        $at, . + 4 + (0xA9 << 2)
label_1abe34:
    if (ctx->pc == 0x1ABE34u) {
        ctx->pc = 0x1ABE34u;
            // 0x1abe34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1ABE38u;
        goto label_1abe38;
    }
    ctx->pc = 0x1ABE30u;
    {
        const bool branch_taken_0x1abe30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE30u;
            // 0x1abe34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe30) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABE38u;
label_1abe38:
    // 0x1abe38: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1abe38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1abe3c:
    // 0x1abe3c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_1abe40:
    if (ctx->pc == 0x1ABE40u) {
        ctx->pc = 0x1ABE40u;
            // 0x1abe40: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1ABE44u;
        goto label_1abe44;
    }
    ctx->pc = 0x1ABE3Cu;
    {
        const bool branch_taken_0x1abe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE3Cu;
            // 0x1abe40: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe3c) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABE44u;
label_1abe44:
    // 0x1abe44: 0x0  nop
    ctx->pc = 0x1abe44u;
    // NOP
label_1abe48:
    // 0x1abe48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1abe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1abe4c:
    // 0x1abe4c: 0x14c20056  bne         $a2, $v0, . + 4 + (0x56 << 2)
label_1abe50:
    if (ctx->pc == 0x1ABE50u) {
        ctx->pc = 0x1ABE54u;
        goto label_1abe54;
    }
    ctx->pc = 0x1ABE4Cu;
    {
        const bool branch_taken_0x1abe4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abe4c) {
            ctx->pc = 0x1ABFA8u;
            goto label_1abfa8;
        }
    }
    ctx->pc = 0x1ABE54u;
label_1abe54:
    // 0x1abe54: 0xc065d00  jal         func_197400
label_1abe58:
    if (ctx->pc == 0x1ABE58u) {
        ctx->pc = 0x1ABE5Cu;
        goto label_1abe5c;
    }
    ctx->pc = 0x1ABE54u;
    SET_GPR_U32(ctx, 31, 0x1ABE5Cu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE5Cu; }
        if (ctx->pc != 0x1ABE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE5Cu; }
        if (ctx->pc != 0x1ABE5Cu) { return; }
    }
    ctx->pc = 0x1ABE5Cu;
label_1abe5c:
    // 0x1abe5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1abe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1abe60:
    // 0x1abe60: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
label_1abe64:
    if (ctx->pc == 0x1ABE64u) {
        ctx->pc = 0x1ABE68u;
        goto label_1abe68;
    }
    ctx->pc = 0x1ABE60u;
    {
        const bool branch_taken_0x1abe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abe60) {
            ctx->pc = 0x1ABEC0u;
            goto label_1abec0;
        }
    }
    ctx->pc = 0x1ABE68u;
label_1abe68:
    // 0x1abe68: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1abe68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abe6c:
    // 0x1abe6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1abe70:
    // 0x1abe70: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1abe70u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1abe74:
    // 0x1abe74: 0x0  nop
    ctx->pc = 0x1abe74u;
    // NOP
label_1abe78:
    // 0x1abe78: 0x0  nop
    ctx->pc = 0x1abe78u;
    // NOP
label_1abe7c:
    // 0x1abe7c: 0x1010  mfhi        $v0
    ctx->pc = 0x1abe7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1abe80:
    // 0x1abe80: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_1abe84:
    if (ctx->pc == 0x1ABE84u) {
        ctx->pc = 0x1ABE88u;
        goto label_1abe88;
    }
    ctx->pc = 0x1ABE80u;
    {
        const bool branch_taken_0x1abe80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abe80) {
            ctx->pc = 0x1ABF88u;
            goto label_1abf88;
        }
    }
    ctx->pc = 0x1ABE88u;
label_1abe88:
    // 0x1abe88: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abe8c:
    // 0x1abe8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abe90:
    // 0x1abe90: 0x2464ffe4  addiu       $a0, $v1, -0x1C
    ctx->pc = 0x1abe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
label_1abe94:
    // 0x1abe94: 0xc06530c  jal         func_194C30
label_1abe98:
    if (ctx->pc == 0x1ABE98u) {
        ctx->pc = 0x1ABE98u;
            // 0x1abe98: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->pc = 0x1ABE9Cu;
        goto label_1abe9c;
    }
    ctx->pc = 0x1ABE94u;
    SET_GPR_U32(ctx, 31, 0x1ABE9Cu);
    ctx->pc = 0x1ABE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABE94u;
            // 0x1abe98: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE9Cu; }
        if (ctx->pc != 0x1ABE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABE9Cu; }
        if (ctx->pc != 0x1ABE9Cu) { return; }
    }
    ctx->pc = 0x1ABE9Cu;
label_1abe9c:
    // 0x1abe9c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abea0:
    // 0x1abea0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abea4:
    // 0x1abea4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1abea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abea8:
    // 0x1abea8: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x1abea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1abeac:
    // 0x1abeac: 0xc0652ec  jal         func_194BB0
label_1abeb0:
    if (ctx->pc == 0x1ABEB0u) {
        ctx->pc = 0x1ABEB0u;
            // 0x1abeb0: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->pc = 0x1ABEB4u;
        goto label_1abeb4;
    }
    ctx->pc = 0x1ABEACu;
    SET_GPR_U32(ctx, 31, 0x1ABEB4u);
    ctx->pc = 0x1ABEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABEACu;
            // 0x1abeb0: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEB4u; }
        if (ctx->pc != 0x1ABEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEB4u; }
        if (ctx->pc != 0x1ABEB4u) { return; }
    }
    ctx->pc = 0x1ABEB4u;
label_1abeb4:
    // 0x1abeb4: 0x10000034  b           . + 4 + (0x34 << 2)
label_1abeb8:
    if (ctx->pc == 0x1ABEB8u) {
        ctx->pc = 0x1ABEBCu;
        goto label_1abebc;
    }
    ctx->pc = 0x1ABEB4u;
    {
        const bool branch_taken_0x1abeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abeb4) {
            ctx->pc = 0x1ABF88u;
            goto label_1abf88;
        }
    }
    ctx->pc = 0x1ABEBCu;
label_1abebc:
    // 0x1abebc: 0x0  nop
    ctx->pc = 0x1abebcu;
    // NOP
label_1abec0:
    // 0x1abec0: 0xc065d00  jal         func_197400
label_1abec4:
    if (ctx->pc == 0x1ABEC4u) {
        ctx->pc = 0x1ABEC8u;
        goto label_1abec8;
    }
    ctx->pc = 0x1ABEC0u;
    SET_GPR_U32(ctx, 31, 0x1ABEC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEC8u; }
        if (ctx->pc != 0x1ABEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABEC8u; }
        if (ctx->pc != 0x1ABEC8u) { return; }
    }
    ctx->pc = 0x1ABEC8u;
label_1abec8:
    // 0x1abec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1abecc:
    // 0x1abecc: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_1abed0:
    if (ctx->pc == 0x1ABED0u) {
        ctx->pc = 0x1ABED4u;
        goto label_1abed4;
    }
    ctx->pc = 0x1ABECCu;
    {
        const bool branch_taken_0x1abecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abecc) {
            ctx->pc = 0x1ABF28u;
            goto label_1abf28;
        }
    }
    ctx->pc = 0x1ABED4u;
label_1abed4:
    // 0x1abed4: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1abed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abed8:
    // 0x1abed8: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_1abedc:
    if (ctx->pc == 0x1ABEDCu) {
        ctx->pc = 0x1ABEDCu;
            // 0x1abedc: 0x30c20007  andi        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)7u)));
        ctx->pc = 0x1ABEE0u;
        goto label_1abee0;
    }
    ctx->pc = 0x1ABED8u;
    {
        const bool branch_taken_0x1abed8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1ABEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABED8u;
            // 0x1abedc: 0x30c20007  andi        $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abed8) {
            ctx->pc = 0x1ABEECu;
            goto label_1abeec;
        }
    }
    ctx->pc = 0x1ABEE0u;
label_1abee0:
    // 0x1abee0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1abee4:
    if (ctx->pc == 0x1ABEE4u) {
        ctx->pc = 0x1ABEE8u;
        goto label_1abee8;
    }
    ctx->pc = 0x1ABEE0u;
    {
        const bool branch_taken_0x1abee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abee0) {
            ctx->pc = 0x1ABEECu;
            goto label_1abeec;
        }
    }
    ctx->pc = 0x1ABEE8u;
label_1abee8:
    // 0x1abee8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1abee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1abeec:
    // 0x1abeec: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_1abef0:
    if (ctx->pc == 0x1ABEF0u) {
        ctx->pc = 0x1ABEF4u;
        goto label_1abef4;
    }
    ctx->pc = 0x1ABEECu;
    {
        const bool branch_taken_0x1abeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abeec) {
            ctx->pc = 0x1ABF88u;
            goto label_1abf88;
        }
    }
    ctx->pc = 0x1ABEF4u;
label_1abef4:
    // 0x1abef4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abef8:
    // 0x1abef8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abefc:
    // 0x1abefc: 0x2464ffe4  addiu       $a0, $v1, -0x1C
    ctx->pc = 0x1abefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
label_1abf00:
    // 0x1abf00: 0xc06530c  jal         func_194C30
label_1abf04:
    if (ctx->pc == 0x1ABF04u) {
        ctx->pc = 0x1ABF04u;
            // 0x1abf04: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->pc = 0x1ABF08u;
        goto label_1abf08;
    }
    ctx->pc = 0x1ABF00u;
    SET_GPR_U32(ctx, 31, 0x1ABF08u);
    ctx->pc = 0x1ABF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF00u;
            // 0x1abf04: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF08u; }
        if (ctx->pc != 0x1ABF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF08u; }
        if (ctx->pc != 0x1ABF08u) { return; }
    }
    ctx->pc = 0x1ABF08u;
label_1abf08:
    // 0x1abf08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abf0c:
    // 0x1abf0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abf10:
    // 0x1abf10: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1abf10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abf14:
    // 0x1abf14: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x1abf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1abf18:
    // 0x1abf18: 0xc0652ec  jal         func_194BB0
label_1abf1c:
    if (ctx->pc == 0x1ABF1Cu) {
        ctx->pc = 0x1ABF1Cu;
            // 0x1abf1c: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->pc = 0x1ABF20u;
        goto label_1abf20;
    }
    ctx->pc = 0x1ABF18u;
    SET_GPR_U32(ctx, 31, 0x1ABF20u);
    ctx->pc = 0x1ABF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF18u;
            // 0x1abf1c: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF20u; }
        if (ctx->pc != 0x1ABF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF20u; }
        if (ctx->pc != 0x1ABF20u) { return; }
    }
    ctx->pc = 0x1ABF20u;
label_1abf20:
    // 0x1abf20: 0x10000019  b           . + 4 + (0x19 << 2)
label_1abf24:
    if (ctx->pc == 0x1ABF24u) {
        ctx->pc = 0x1ABF28u;
        goto label_1abf28;
    }
    ctx->pc = 0x1ABF20u;
    {
        const bool branch_taken_0x1abf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abf20) {
            ctx->pc = 0x1ABF88u;
            goto label_1abf88;
        }
    }
    ctx->pc = 0x1ABF28u;
label_1abf28:
    // 0x1abf28: 0xc065d00  jal         func_197400
label_1abf2c:
    if (ctx->pc == 0x1ABF2Cu) {
        ctx->pc = 0x1ABF30u;
        goto label_1abf30;
    }
    ctx->pc = 0x1ABF28u;
    SET_GPR_U32(ctx, 31, 0x1ABF30u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF30u; }
        if (ctx->pc != 0x1ABF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF30u; }
        if (ctx->pc != 0x1ABF30u) { return; }
    }
    ctx->pc = 0x1ABF30u;
label_1abf30:
    // 0x1abf30: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1abf34:
    if (ctx->pc == 0x1ABF34u) {
        ctx->pc = 0x1ABF38u;
        goto label_1abf38;
    }
    ctx->pc = 0x1ABF30u;
    {
        const bool branch_taken_0x1abf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abf30) {
            ctx->pc = 0x1ABF88u;
            goto label_1abf88;
        }
    }
    ctx->pc = 0x1ABF38u;
label_1abf38:
    // 0x1abf38: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abf3c:
    // 0x1abf3c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1abf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1abf40:
    // 0x1abf40: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1abf40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1abf44:
    // 0x1abf44: 0x0  nop
    ctx->pc = 0x1abf44u;
    // NOP
label_1abf48:
    // 0x1abf48: 0x0  nop
    ctx->pc = 0x1abf48u;
    // NOP
label_1abf4c:
    // 0x1abf4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1abf4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1abf50:
    // 0x1abf50: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1abf54:
    if (ctx->pc == 0x1ABF54u) {
        ctx->pc = 0x1ABF58u;
        goto label_1abf58;
    }
    ctx->pc = 0x1ABF50u;
    {
        const bool branch_taken_0x1abf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abf50) {
            ctx->pc = 0x1ABF88u;
            goto label_1abf88;
        }
    }
    ctx->pc = 0x1ABF58u;
label_1abf58:
    // 0x1abf58: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abf5c:
    // 0x1abf5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abf60:
    // 0x1abf60: 0x2464ffe4  addiu       $a0, $v1, -0x1C
    ctx->pc = 0x1abf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
label_1abf64:
    // 0x1abf64: 0xc06530c  jal         func_194C30
label_1abf68:
    if (ctx->pc == 0x1ABF68u) {
        ctx->pc = 0x1ABF68u;
            // 0x1abf68: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->pc = 0x1ABF6Cu;
        goto label_1abf6c;
    }
    ctx->pc = 0x1ABF64u;
    SET_GPR_U32(ctx, 31, 0x1ABF6Cu);
    ctx->pc = 0x1ABF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF64u;
            // 0x1abf68: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF6Cu; }
        if (ctx->pc != 0x1ABF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF6Cu; }
        if (ctx->pc != 0x1ABF6Cu) { return; }
    }
    ctx->pc = 0x1ABF6Cu;
label_1abf6c:
    // 0x1abf6c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abf70:
    // 0x1abf70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abf74:
    // 0x1abf74: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1abf74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abf78:
    // 0x1abf78: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_1abf7c:
    // 0x1abf7c: 0xc0652ec  jal         func_194BB0
label_1abf80:
    if (ctx->pc == 0x1ABF80u) {
        ctx->pc = 0x1ABF80u;
            // 0x1abf80: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->pc = 0x1ABF84u;
        goto label_1abf84;
    }
    ctx->pc = 0x1ABF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF84u);
    ctx->pc = 0x1ABF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF7Cu;
            // 0x1abf80: 0x2445ffdc  addiu       $a1, $v0, -0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF84u; }
        if (ctx->pc != 0x1ABF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABF84u; }
        if (ctx->pc != 0x1ABF84u) { return; }
    }
    ctx->pc = 0x1ABF84u;
label_1abf84:
    // 0x1abf84: 0x0  nop
    ctx->pc = 0x1abf84u;
    // NOP
label_1abf88:
    // 0x1abf88: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1abf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abf8c:
    // 0x1abf8c: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1abf8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1abf90:
    // 0x1abf90: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
label_1abf94:
    if (ctx->pc == 0x1ABF94u) {
        ctx->pc = 0x1ABF94u;
            // 0x1abf94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1ABF98u;
        goto label_1abf98;
    }
    ctx->pc = 0x1ABF90u;
    {
        const bool branch_taken_0x1abf90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF90u;
            // 0x1abf94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf90) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABF98u;
label_1abf98:
    // 0x1abf98: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1abf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1abf9c:
    // 0x1abf9c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1abfa0:
    if (ctx->pc == 0x1ABFA0u) {
        ctx->pc = 0x1ABFA0u;
            // 0x1abfa0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1ABFA4u;
        goto label_1abfa4;
    }
    ctx->pc = 0x1ABF9Cu;
    {
        const bool branch_taken_0x1abf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABF9Cu;
            // 0x1abfa0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf9c) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1ABFA4u;
label_1abfa4:
    // 0x1abfa4: 0x0  nop
    ctx->pc = 0x1abfa4u;
    // NOP
label_1abfa8:
    // 0x1abfa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1abfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1abfac:
    // 0x1abfac: 0x14c30018  bne         $a2, $v1, . + 4 + (0x18 << 2)
label_1abfb0:
    if (ctx->pc == 0x1ABFB0u) {
        ctx->pc = 0x1ABFB4u;
        goto label_1abfb4;
    }
    ctx->pc = 0x1ABFACu;
    {
        const bool branch_taken_0x1abfac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1abfac) {
            ctx->pc = 0x1AC010u;
            goto label_1ac010;
        }
    }
    ctx->pc = 0x1ABFB4u;
label_1abfb4:
    // 0x1abfb4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1abfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abfb8:
    // 0x1abfb8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1abfb8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1abfbc:
    // 0x1abfbc: 0x0  nop
    ctx->pc = 0x1abfbcu;
    // NOP
label_1abfc0:
    // 0x1abfc0: 0x0  nop
    ctx->pc = 0x1abfc0u;
    // NOP
label_1abfc4:
    // 0x1abfc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1abfc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1abfc8:
    // 0x1abfc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1abfcc:
    if (ctx->pc == 0x1ABFCCu) {
        ctx->pc = 0x1ABFD0u;
        goto label_1abfd0;
    }
    ctx->pc = 0x1ABFC8u;
    {
        const bool branch_taken_0x1abfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abfc8) {
            ctx->pc = 0x1ABFF8u;
            goto label_1abff8;
        }
    }
    ctx->pc = 0x1ABFD0u;
label_1abfd0:
    // 0x1abfd0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abfd4:
    // 0x1abfd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abfd8:
    // 0x1abfd8: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1abfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1abfdc:
    // 0x1abfdc: 0xc065590  jal         func_195640
label_1abfe0:
    if (ctx->pc == 0x1ABFE0u) {
        ctx->pc = 0x1ABFE0u;
            // 0x1abfe0: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->pc = 0x1ABFE4u;
        goto label_1abfe4;
    }
    ctx->pc = 0x1ABFDCu;
    SET_GPR_U32(ctx, 31, 0x1ABFE4u);
    ctx->pc = 0x1ABFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFDCu;
            // 0x1abfe0: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFE4u; }
        if (ctx->pc != 0x1ABFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFE4u; }
        if (ctx->pc != 0x1ABFE4u) { return; }
    }
    ctx->pc = 0x1ABFE4u;
label_1abfe4:
    // 0x1abfe4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1abfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1abfe8:
    // 0x1abfe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1abfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1abfec:
    // 0x1abfec: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1abfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1abff0:
    // 0x1abff0: 0xc065590  jal         func_195640
label_1abff4:
    if (ctx->pc == 0x1ABFF4u) {
        ctx->pc = 0x1ABFF4u;
            // 0x1abff4: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->pc = 0x1ABFF8u;
        goto label_1abff8;
    }
    ctx->pc = 0x1ABFF0u;
    SET_GPR_U32(ctx, 31, 0x1ABFF8u);
    ctx->pc = 0x1ABFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABFF0u;
            // 0x1abff4: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFF8u; }
        if (ctx->pc != 0x1ABFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABFF8u; }
        if (ctx->pc != 0x1ABFF8u) { return; }
    }
    ctx->pc = 0x1ABFF8u;
label_1abff8:
    // 0x1abff8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1abff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1abffc:
    // 0x1abffc: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1abffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1ac000:
    // 0x1ac000: 0x14200035  bnez        $at, . + 4 + (0x35 << 2)
label_1ac004:
    if (ctx->pc == 0x1AC004u) {
        ctx->pc = 0x1AC004u;
            // 0x1ac004: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1AC008u;
        goto label_1ac008;
    }
    ctx->pc = 0x1AC000u;
    {
        const bool branch_taken_0x1ac000 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC000u;
            // 0x1ac004: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac000) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1AC008u;
label_1ac008:
    // 0x1ac008: 0x10000033  b           . + 4 + (0x33 << 2)
label_1ac00c:
    if (ctx->pc == 0x1AC00Cu) {
        ctx->pc = 0x1AC00Cu;
            // 0x1ac00c: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1AC010u;
        goto label_1ac010;
    }
    ctx->pc = 0x1AC008u;
    {
        const bool branch_taken_0x1ac008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC008u;
            // 0x1ac00c: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac008) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1AC010u;
label_1ac010:
    // 0x1ac010: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ac010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ac014:
    // 0x1ac014: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1ac018:
    if (ctx->pc == 0x1AC018u) {
        ctx->pc = 0x1AC018u;
            // 0x1ac018: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1AC01Cu;
        goto label_1ac01c;
    }
    ctx->pc = 0x1AC014u;
    {
        const bool branch_taken_0x1ac014 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC014u;
            // 0x1ac018: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac014) {
            ctx->pc = 0x1AC028u;
            goto label_1ac028;
        }
    }
    ctx->pc = 0x1AC01Cu;
label_1ac01c:
    // 0x1ac01c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ac020:
    if (ctx->pc == 0x1AC020u) {
        ctx->pc = 0x1AC024u;
        goto label_1ac024;
    }
    ctx->pc = 0x1AC01Cu;
    {
        const bool branch_taken_0x1ac01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac01c) {
            ctx->pc = 0x1AC028u;
            goto label_1ac028;
        }
    }
    ctx->pc = 0x1AC024u;
label_1ac024:
    // 0x1ac024: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1ac024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1ac028:
    // 0x1ac028: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ac02c:
    if (ctx->pc == 0x1AC02Cu) {
        ctx->pc = 0x1AC030u;
        goto label_1ac030;
    }
    ctx->pc = 0x1AC028u;
    {
        const bool branch_taken_0x1ac028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac028) {
            ctx->pc = 0x1AC058u;
            goto label_1ac058;
        }
    }
    ctx->pc = 0x1AC030u;
label_1ac030:
    // 0x1ac030: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ac030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ac034:
    // 0x1ac034: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ac034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ac038:
    // 0x1ac038: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1ac038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1ac03c:
    // 0x1ac03c: 0xc0655a0  jal         func_195680
label_1ac040:
    if (ctx->pc == 0x1AC040u) {
        ctx->pc = 0x1AC040u;
            // 0x1ac040: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->pc = 0x1AC044u;
        goto label_1ac044;
    }
    ctx->pc = 0x1AC03Cu;
    SET_GPR_U32(ctx, 31, 0x1AC044u);
    ctx->pc = 0x1AC040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC03Cu;
            // 0x1ac040: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC044u; }
        if (ctx->pc != 0x1AC044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC044u; }
        if (ctx->pc != 0x1AC044u) { return; }
    }
    ctx->pc = 0x1AC044u;
label_1ac044:
    // 0x1ac044: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1ac044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ac048:
    // 0x1ac048: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ac048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ac04c:
    // 0x1ac04c: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1ac04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1ac050:
    // 0x1ac050: 0xc0655a0  jal         func_195680
label_1ac054:
    if (ctx->pc == 0x1AC054u) {
        ctx->pc = 0x1AC054u;
            // 0x1ac054: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->pc = 0x1AC058u;
        goto label_1ac058;
    }
    ctx->pc = 0x1AC050u;
    SET_GPR_U32(ctx, 31, 0x1AC058u);
    ctx->pc = 0x1AC054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC050u;
            // 0x1ac054: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC058u; }
        if (ctx->pc != 0x1AC058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC058u; }
        if (ctx->pc != 0x1AC058u) { return; }
    }
    ctx->pc = 0x1AC058u;
label_1ac058:
    // 0x1ac058: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ac058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1ac05c:
    // 0x1ac05c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1ac060:
    if (ctx->pc == 0x1AC060u) {
        ctx->pc = 0x1AC064u;
        goto label_1ac064;
    }
    ctx->pc = 0x1AC05Cu;
    {
        const bool branch_taken_0x1ac05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac05c) {
            ctx->pc = 0x1AC0A0u;
            goto label_1ac0a0;
        }
    }
    ctx->pc = 0x1AC064u;
label_1ac064:
    // 0x1ac064: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ac064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ac068:
    // 0x1ac068: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
label_1ac06c:
    // 0x1ac06c: 0x34439ba6  ori         $v1, $v0, 0x9BA6
    ctx->pc = 0x1ac06cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1ac070:
    // 0x1ac070: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ac070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac074:
    // 0x1ac074: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ac074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ac078:
    // 0x1ac078: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ac078u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ac07c:
    // 0x1ac07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac080:
    // 0x1ac080: 0x0  nop
    ctx->pc = 0x1ac080u;
    // NOP
label_1ac084:
    // 0x1ac084: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1ac084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ac088:
    // 0x1ac088: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ac088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ac08c:
    // 0x1ac08c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ac08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac090:
    // 0x1ac090: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ac094:
    // 0x1ac094: 0x10000010  b           . + 4 + (0x10 << 2)
label_1ac098:
    if (ctx->pc == 0x1AC098u) {
        ctx->pc = 0x1AC098u;
            // 0x1ac098: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AC09Cu;
        goto label_1ac09c;
    }
    ctx->pc = 0x1AC094u;
    {
        const bool branch_taken_0x1ac094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC094u;
            // 0x1ac098: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac094) {
            ctx->pc = 0x1AC0D8u;
            goto label_1ac0d8;
        }
    }
    ctx->pc = 0x1AC09Cu;
label_1ac09c:
    // 0x1ac09c: 0x0  nop
    ctx->pc = 0x1ac09cu;
    // NOP
label_1ac0a0:
    // 0x1ac0a0: 0x3c033bc4  lui         $v1, 0x3BC4
    ctx->pc = 0x1ac0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15300 << 16));
label_1ac0a4:
    // 0x1ac0a4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1ac0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ac0a8:
    // 0x1ac0a8: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x1ac0a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39846u)));
label_1ac0ac:
    // 0x1ac0ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ac0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac0b0:
    // 0x1ac0b0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1ac0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1ac0b4:
    // 0x1ac0b4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ac0b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1ac0b8:
    // 0x1ac0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac0bc:
    // 0x1ac0bc: 0x0  nop
    ctx->pc = 0x1ac0bcu;
    // NOP
label_1ac0c0:
    // 0x1ac0c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1ac0c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1ac0c4:
    // 0x1ac0c4: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1ac0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ac0c8:
    // 0x1ac0c8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1ac0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac0cc:
    // 0x1ac0cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ac0d0:
    // 0x1ac0d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ac0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1ac0d4:
    // 0x1ac0d4: 0x0  nop
    ctx->pc = 0x1ac0d4u;
    // NOP
label_1ac0d8:
    // 0x1ac0d8: 0xc04b788  jal         func_12DE20
label_1ac0dc:
    if (ctx->pc == 0x1AC0DCu) {
        ctx->pc = 0x1AC0DCu;
            // 0x1ac0dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC0E0u;
        goto label_1ac0e0;
    }
    ctx->pc = 0x1AC0D8u;
    SET_GPR_U32(ctx, 31, 0x1AC0E0u);
    ctx->pc = 0x1AC0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0D8u;
            // 0x1ac0dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0E0u; }
        if (ctx->pc != 0x1AC0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0E0u; }
        if (ctx->pc != 0x1AC0E0u) { return; }
    }
    ctx->pc = 0x1AC0E0u;
label_1ac0e0:
    // 0x1ac0e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ac0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac0e4:
    // 0x1ac0e4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1ac0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ac0e8:
    // 0x1ac0e8: 0xc04b7da  jal         func_12DF68
label_1ac0ec:
    if (ctx->pc == 0x1AC0ECu) {
        ctx->pc = 0x1AC0ECu;
            // 0x1ac0ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0F0u;
        goto label_1ac0f0;
    }
    ctx->pc = 0x1AC0E8u;
    SET_GPR_U32(ctx, 31, 0x1AC0F0u);
    ctx->pc = 0x1AC0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0E8u;
            // 0x1ac0ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0F0u; }
        if (ctx->pc != 0x1AC0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC0F0u; }
        if (ctx->pc != 0x1AC0F0u) { return; }
    }
    ctx->pc = 0x1AC0F0u;
label_1ac0f0:
    // 0x1ac0f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ac0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac0f4:
    // 0x1ac0f4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1ac0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ac0f8:
    // 0x1ac0f8: 0xc04b804  jal         func_12E010
label_1ac0fc:
    if (ctx->pc == 0x1AC0FCu) {
        ctx->pc = 0x1AC0FCu;
            // 0x1ac0fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC100u;
        goto label_1ac100;
    }
    ctx->pc = 0x1AC0F8u;
    SET_GPR_U32(ctx, 31, 0x1AC100u);
    ctx->pc = 0x1AC0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC0F8u;
            // 0x1ac0fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC100u; }
        if (ctx->pc != 0x1AC100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC100u; }
        if (ctx->pc != 0x1AC100u) { return; }
    }
    ctx->pc = 0x1AC100u;
label_1ac100:
    // 0x1ac100: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ac100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac104:
    // 0x1ac104: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1ac104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ac108:
    // 0x1ac108: 0xc04b7b0  jal         func_12DEC0
label_1ac10c:
    if (ctx->pc == 0x1AC10Cu) {
        ctx->pc = 0x1AC10Cu;
            // 0x1ac10c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC110u;
        goto label_1ac110;
    }
    ctx->pc = 0x1AC108u;
    SET_GPR_U32(ctx, 31, 0x1AC110u);
    ctx->pc = 0x1AC10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC108u;
            // 0x1ac10c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC110u; }
        if (ctx->pc != 0x1AC110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC110u; }
        if (ctx->pc != 0x1AC110u) { return; }
    }
    ctx->pc = 0x1AC110u;
label_1ac110:
    // 0x1ac110: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ac110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac114:
    // 0x1ac114: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ac114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac118:
    // 0x1ac118: 0xc04b75e  jal         func_12DD78
label_1ac11c:
    if (ctx->pc == 0x1AC11Cu) {
        ctx->pc = 0x1AC11Cu;
            // 0x1ac11c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1AC120u;
        goto label_1ac120;
    }
    ctx->pc = 0x1AC118u;
    SET_GPR_U32(ctx, 31, 0x1AC120u);
    ctx->pc = 0x1AC11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC118u;
            // 0x1ac11c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC120u; }
        if (ctx->pc != 0x1AC120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC120u; }
        if (ctx->pc != 0x1AC120u) { return; }
    }
    ctx->pc = 0x1AC120u;
label_1ac120:
    // 0x1ac120: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ac124:
    // 0x1ac124: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ac128:
    // 0x1ac128: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ac128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ac12c:
    // 0x1ac12c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1ac130:
    if (ctx->pc == 0x1AC130u) {
        ctx->pc = 0x1AC134u;
        goto label_1ac134;
    }
    ctx->pc = 0x1AC12Cu;
    {
        const bool branch_taken_0x1ac12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac12c) {
            ctx->pc = 0x1AC180u;
            goto label_1ac180;
        }
    }
    ctx->pc = 0x1AC134u;
label_1ac134:
    // 0x1ac134: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ac138:
    // 0x1ac138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ac13c:
    if (ctx->pc == 0x1AC13Cu) {
        ctx->pc = 0x1AC140u;
        goto label_1ac140;
    }
    ctx->pc = 0x1AC138u;
    {
        const bool branch_taken_0x1ac138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac138) {
            ctx->pc = 0x1AC150u;
            goto label_1ac150;
        }
    }
    ctx->pc = 0x1AC140u;
label_1ac140:
    // 0x1ac140: 0xc0604f0  jal         func_1813C0
label_1ac144:
    if (ctx->pc == 0x1AC144u) {
        ctx->pc = 0x1AC144u;
            // 0x1ac144: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC148u;
        goto label_1ac148;
    }
    ctx->pc = 0x1AC140u;
    SET_GPR_U32(ctx, 31, 0x1AC148u);
    ctx->pc = 0x1AC144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC140u;
            // 0x1ac144: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC148u; }
        if (ctx->pc != 0x1AC148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC148u; }
        if (ctx->pc != 0x1AC148u) { return; }
    }
    ctx->pc = 0x1AC148u;
label_1ac148:
    // 0x1ac148: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ac14c:
    if (ctx->pc == 0x1AC14Cu) {
        ctx->pc = 0x1AC150u;
        goto label_1ac150;
    }
    ctx->pc = 0x1AC148u;
    {
        const bool branch_taken_0x1ac148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac148) {
            ctx->pc = 0x1AC158u;
            goto label_1ac158;
        }
    }
    ctx->pc = 0x1AC150u;
label_1ac150:
    // 0x1ac150: 0xc0604dc  jal         func_181370
label_1ac154:
    if (ctx->pc == 0x1AC154u) {
        ctx->pc = 0x1AC154u;
            // 0x1ac154: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC158u;
        goto label_1ac158;
    }
    ctx->pc = 0x1AC150u;
    SET_GPR_U32(ctx, 31, 0x1AC158u);
    ctx->pc = 0x1AC154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC150u;
            // 0x1ac154: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC158u; }
        if (ctx->pc != 0x1AC158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC158u; }
        if (ctx->pc != 0x1AC158u) { return; }
    }
    ctx->pc = 0x1AC158u;
label_1ac158:
    // 0x1ac158: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ac15c:
    // 0x1ac15c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ac160:
    if (ctx->pc == 0x1AC160u) {
        ctx->pc = 0x1AC164u;
        goto label_1ac164;
    }
    ctx->pc = 0x1AC15Cu;
    {
        const bool branch_taken_0x1ac15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac15c) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1AC164u;
label_1ac164:
    // 0x1ac164: 0x10000022  b           . + 4 + (0x22 << 2)
label_1ac168:
    if (ctx->pc == 0x1AC168u) {
        ctx->pc = 0x1AC168u;
            // 0x1ac168: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1AC16Cu;
        goto label_1ac16c;
    }
    ctx->pc = 0x1AC164u;
    {
        const bool branch_taken_0x1ac164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC164u;
            // 0x1ac168: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac164) {
            ctx->pc = 0x1AC1F0u;
            goto label_1ac1f0;
        }
    }
    ctx->pc = 0x1AC16Cu;
label_1ac16c:
    // 0x1ac16c: 0x0  nop
    ctx->pc = 0x1ac16cu;
    // NOP
label_1ac170:
    // 0x1ac170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac174:
    // 0x1ac174: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ac178:
    if (ctx->pc == 0x1AC178u) {
        ctx->pc = 0x1AC178u;
            // 0x1ac178: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1AC17Cu;
        goto label_1ac17c;
    }
    ctx->pc = 0x1AC174u;
    {
        const bool branch_taken_0x1ac174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC174u;
            // 0x1ac178: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac174) {
            ctx->pc = 0x1AC1F0u;
            goto label_1ac1f0;
        }
    }
    ctx->pc = 0x1AC17Cu;
label_1ac17c:
    // 0x1ac17c: 0x0  nop
    ctx->pc = 0x1ac17cu;
    // NOP
label_1ac180:
    // 0x1ac180: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x1ac180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_1ac184:
    // 0x1ac184: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1ac188:
    if (ctx->pc == 0x1AC188u) {
        ctx->pc = 0x1AC18Cu;
        goto label_1ac18c;
    }
    ctx->pc = 0x1AC184u;
    {
        const bool branch_taken_0x1ac184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac184) {
            ctx->pc = 0x1AC1E0u;
            goto label_1ac1e0;
        }
    }
    ctx->pc = 0x1AC18Cu;
label_1ac18c:
    // 0x1ac18c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ac18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ac190:
    // 0x1ac190: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ac194:
    // 0x1ac194: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ac194u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ac198:
    // 0x1ac198: 0x0  nop
    ctx->pc = 0x1ac198u;
    // NOP
label_1ac19c:
    // 0x1ac19c: 0x0  nop
    ctx->pc = 0x1ac19cu;
    // NOP
label_1ac1a0:
    // 0x1ac1a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac1a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac1a4:
    // 0x1ac1a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1ac1a8:
    if (ctx->pc == 0x1AC1A8u) {
        ctx->pc = 0x1AC1ACu;
        goto label_1ac1ac;
    }
    ctx->pc = 0x1AC1A4u;
    {
        const bool branch_taken_0x1ac1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac1a4) {
            ctx->pc = 0x1AC1E0u;
            goto label_1ac1e0;
        }
    }
    ctx->pc = 0x1AC1ACu;
label_1ac1ac:
    // 0x1ac1ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1ac1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac1b0:
    // 0x1ac1b0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ac1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1ac1b4:
    // 0x1ac1b4: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1ac1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_1ac1b8:
    // 0x1ac1b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac1b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac1bc:
    // 0x1ac1bc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ac1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac1c0:
    // 0x1ac1c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ac1c4:
    // 0x1ac1c4: 0xc0536d8  jal         func_14DB60
label_1ac1c8:
    if (ctx->pc == 0x1AC1C8u) {
        ctx->pc = 0x1AC1C8u;
            // 0x1ac1c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AC1CCu;
        goto label_1ac1cc;
    }
    ctx->pc = 0x1AC1C4u;
    SET_GPR_U32(ctx, 31, 0x1AC1CCu);
    ctx->pc = 0x1AC1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1C4u;
            // 0x1ac1c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1CCu; }
        if (ctx->pc != 0x1AC1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1CCu; }
        if (ctx->pc != 0x1AC1CCu) { return; }
    }
    ctx->pc = 0x1AC1CCu;
label_1ac1cc:
    // 0x1ac1cc: 0xc060500  jal         func_181400
label_1ac1d0:
    if (ctx->pc == 0x1AC1D0u) {
        ctx->pc = 0x1AC1D0u;
            // 0x1ac1d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC1D4u;
        goto label_1ac1d4;
    }
    ctx->pc = 0x1AC1CCu;
    SET_GPR_U32(ctx, 31, 0x1AC1D4u);
    ctx->pc = 0x1AC1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1CCu;
            // 0x1ac1d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1D4u; }
        if (ctx->pc != 0x1AC1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1D4u; }
        if (ctx->pc != 0x1AC1D4u) { return; }
    }
    ctx->pc = 0x1AC1D4u;
label_1ac1d4:
    // 0x1ac1d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ac1d8:
    if (ctx->pc == 0x1AC1D8u) {
        ctx->pc = 0x1AC1DCu;
        goto label_1ac1dc;
    }
    ctx->pc = 0x1AC1D4u;
    {
        const bool branch_taken_0x1ac1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac1d4) {
            ctx->pc = 0x1AC1E8u;
            goto label_1ac1e8;
        }
    }
    ctx->pc = 0x1AC1DCu;
label_1ac1dc:
    // 0x1ac1dc: 0x0  nop
    ctx->pc = 0x1ac1dcu;
    // NOP
label_1ac1e0:
    // 0x1ac1e0: 0xc0604dc  jal         func_181370
label_1ac1e4:
    if (ctx->pc == 0x1AC1E4u) {
        ctx->pc = 0x1AC1E4u;
            // 0x1ac1e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC1E8u;
        goto label_1ac1e8;
    }
    ctx->pc = 0x1AC1E0u;
    SET_GPR_U32(ctx, 31, 0x1AC1E8u);
    ctx->pc = 0x1AC1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1E0u;
            // 0x1ac1e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1E8u; }
        if (ctx->pc != 0x1AC1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1E8u; }
        if (ctx->pc != 0x1AC1E8u) { return; }
    }
    ctx->pc = 0x1AC1E8u;
label_1ac1e8:
    // 0x1ac1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac1ec:
    // 0x1ac1ec: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1ac1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1ac1f0:
    // 0x1ac1f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ac1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ac1f4:
    // 0x1ac1f4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1ac1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_1ac1f8:
    // 0x1ac1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac1fc:
    // 0x1ac1fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ac1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1ac200:
    // 0x1ac200: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1ac200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ac204:
    // 0x1ac204: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1ac204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1ac208:
    // 0x1ac208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac20c:
    // 0x1ac20c: 0x0  nop
    ctx->pc = 0x1ac20cu;
    // NOP
label_1ac210:
    // 0x1ac210: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac214:
    // 0x1ac214: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1ac214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1ac218:
    // 0x1ac218: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ac218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ac21c:
    // 0x1ac21c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1ac21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1ac220:
    // 0x1ac220: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac224:
    // 0x1ac224: 0x0  nop
    ctx->pc = 0x1ac224u;
    // NOP
label_1ac228:
    // 0x1ac228: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac22c:
    // 0x1ac22c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1ac22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1ac230:
    // 0x1ac230: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1ac230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1ac234:
    // 0x1ac234: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1ac234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1ac238:
    // 0x1ac238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac23c:
    // 0x1ac23c: 0x0  nop
    ctx->pc = 0x1ac23cu;
    // NOP
label_1ac240:
    // 0x1ac240: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac244:
    // 0x1ac244: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1ac244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1ac248:
    // 0x1ac248: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ac248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ac24c:
    // 0x1ac24c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1ac24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1ac250:
    // 0x1ac250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac254:
    // 0x1ac254: 0x0  nop
    ctx->pc = 0x1ac254u;
    // NOP
label_1ac258:
    // 0x1ac258: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac25c:
    // 0x1ac25c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1ac25cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1ac260:
    // 0x1ac260: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ac264:
    // 0x1ac264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ac268:
    // 0x1ac268: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ac268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ac26c:
    // 0x1ac26c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ac26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ac270:
    // 0x1ac270: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ac270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac274:
    // 0x1ac274: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ac274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ac278:
    // 0x1ac278: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ac27c:
    if (ctx->pc == 0x1AC27Cu) {
        ctx->pc = 0x1AC280u;
        goto label_1ac280;
    }
    ctx->pc = 0x1AC278u;
    {
        const bool branch_taken_0x1ac278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac278) {
            ctx->pc = 0x1AC298u;
            goto label_1ac298;
        }
    }
    ctx->pc = 0x1AC280u;
label_1ac280:
    // 0x1ac280: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ac280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ac284:
    // 0x1ac284: 0x40f809  jalr        $v0
label_1ac288:
    if (ctx->pc == 0x1AC288u) {
        ctx->pc = 0x1AC288u;
            // 0x1ac288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC28Cu;
        goto label_1ac28c;
    }
    ctx->pc = 0x1AC284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC28Cu);
        ctx->pc = 0x1AC288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC284u;
            // 0x1ac288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAB4u: goto label_1abab4;
            case 0x1ABAB8u: goto label_1abab8;
            case 0x1ABABCu: goto label_1ababc;
            case 0x1ABAC0u: goto label_1abac0;
            case 0x1ABAC4u: goto label_1abac4;
            case 0x1ABAC8u: goto label_1abac8;
            case 0x1ABACCu: goto label_1abacc;
            case 0x1ABAD0u: goto label_1abad0;
            case 0x1ABAD4u: goto label_1abad4;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            case 0x1ABAE0u: goto label_1abae0;
            case 0x1ABAE4u: goto label_1abae4;
            case 0x1ABAE8u: goto label_1abae8;
            case 0x1ABAECu: goto label_1abaec;
            case 0x1ABAF0u: goto label_1abaf0;
            case 0x1ABAF4u: goto label_1abaf4;
            case 0x1ABAF8u: goto label_1abaf8;
            case 0x1ABAFCu: goto label_1abafc;
            case 0x1ABB00u: goto label_1abb00;
            case 0x1ABB04u: goto label_1abb04;
            case 0x1ABB08u: goto label_1abb08;
            case 0x1ABB0Cu: goto label_1abb0c;
            case 0x1ABB10u: goto label_1abb10;
            case 0x1ABB14u: goto label_1abb14;
            case 0x1ABB18u: goto label_1abb18;
            case 0x1ABB1Cu: goto label_1abb1c;
            case 0x1ABB20u: goto label_1abb20;
            case 0x1ABB24u: goto label_1abb24;
            case 0x1ABB28u: goto label_1abb28;
            case 0x1ABB2Cu: goto label_1abb2c;
            case 0x1ABB30u: goto label_1abb30;
            case 0x1ABB34u: goto label_1abb34;
            case 0x1ABB38u: goto label_1abb38;
            case 0x1ABB3Cu: goto label_1abb3c;
            case 0x1ABB40u: goto label_1abb40;
            case 0x1ABB44u: goto label_1abb44;
            case 0x1ABB48u: goto label_1abb48;
            case 0x1ABB4Cu: goto label_1abb4c;
            case 0x1ABB50u: goto label_1abb50;
            case 0x1ABB54u: goto label_1abb54;
            case 0x1ABB58u: goto label_1abb58;
            case 0x1ABB5Cu: goto label_1abb5c;
            case 0x1ABB60u: goto label_1abb60;
            case 0x1ABB64u: goto label_1abb64;
            case 0x1ABB68u: goto label_1abb68;
            case 0x1ABB6Cu: goto label_1abb6c;
            case 0x1ABB70u: goto label_1abb70;
            case 0x1ABB74u: goto label_1abb74;
            case 0x1ABB78u: goto label_1abb78;
            case 0x1ABB7Cu: goto label_1abb7c;
            case 0x1ABB80u: goto label_1abb80;
            case 0x1ABB84u: goto label_1abb84;
            case 0x1ABB88u: goto label_1abb88;
            case 0x1ABB8Cu: goto label_1abb8c;
            case 0x1ABB90u: goto label_1abb90;
            case 0x1ABB94u: goto label_1abb94;
            case 0x1ABB98u: goto label_1abb98;
            case 0x1ABB9Cu: goto label_1abb9c;
            case 0x1ABBA0u: goto label_1abba0;
            case 0x1ABBA4u: goto label_1abba4;
            case 0x1ABBA8u: goto label_1abba8;
            case 0x1ABBACu: goto label_1abbac;
            case 0x1ABBB0u: goto label_1abbb0;
            case 0x1ABBB4u: goto label_1abbb4;
            case 0x1ABBB8u: goto label_1abbb8;
            case 0x1ABBBCu: goto label_1abbbc;
            case 0x1ABBC0u: goto label_1abbc0;
            case 0x1ABBC4u: goto label_1abbc4;
            case 0x1ABBC8u: goto label_1abbc8;
            case 0x1ABBCCu: goto label_1abbcc;
            case 0x1ABBD0u: goto label_1abbd0;
            case 0x1ABBD4u: goto label_1abbd4;
            case 0x1ABBD8u: goto label_1abbd8;
            case 0x1ABBDCu: goto label_1abbdc;
            case 0x1ABBE0u: goto label_1abbe0;
            case 0x1ABBE4u: goto label_1abbe4;
            case 0x1ABBE8u: goto label_1abbe8;
            case 0x1ABBECu: goto label_1abbec;
            case 0x1ABBF0u: goto label_1abbf0;
            case 0x1ABBF4u: goto label_1abbf4;
            case 0x1ABBF8u: goto label_1abbf8;
            case 0x1ABBFCu: goto label_1abbfc;
            case 0x1ABC00u: goto label_1abc00;
            case 0x1ABC04u: goto label_1abc04;
            case 0x1ABC08u: goto label_1abc08;
            case 0x1ABC0Cu: goto label_1abc0c;
            case 0x1ABC10u: goto label_1abc10;
            case 0x1ABC14u: goto label_1abc14;
            case 0x1ABC18u: goto label_1abc18;
            case 0x1ABC1Cu: goto label_1abc1c;
            case 0x1ABC20u: goto label_1abc20;
            case 0x1ABC24u: goto label_1abc24;
            case 0x1ABC28u: goto label_1abc28;
            case 0x1ABC2Cu: goto label_1abc2c;
            case 0x1ABC30u: goto label_1abc30;
            case 0x1ABC34u: goto label_1abc34;
            case 0x1ABC38u: goto label_1abc38;
            case 0x1ABC3Cu: goto label_1abc3c;
            case 0x1ABC40u: goto label_1abc40;
            case 0x1ABC44u: goto label_1abc44;
            case 0x1ABC48u: goto label_1abc48;
            case 0x1ABC4Cu: goto label_1abc4c;
            case 0x1ABC50u: goto label_1abc50;
            case 0x1ABC54u: goto label_1abc54;
            case 0x1ABC58u: goto label_1abc58;
            case 0x1ABC5Cu: goto label_1abc5c;
            case 0x1ABC60u: goto label_1abc60;
            case 0x1ABC64u: goto label_1abc64;
            case 0x1ABC68u: goto label_1abc68;
            case 0x1ABC6Cu: goto label_1abc6c;
            case 0x1ABC70u: goto label_1abc70;
            case 0x1ABC74u: goto label_1abc74;
            case 0x1ABC78u: goto label_1abc78;
            case 0x1ABC7Cu: goto label_1abc7c;
            case 0x1ABC80u: goto label_1abc80;
            case 0x1ABC84u: goto label_1abc84;
            case 0x1ABC88u: goto label_1abc88;
            case 0x1ABC8Cu: goto label_1abc8c;
            case 0x1ABC90u: goto label_1abc90;
            case 0x1ABC94u: goto label_1abc94;
            case 0x1ABC98u: goto label_1abc98;
            case 0x1ABC9Cu: goto label_1abc9c;
            case 0x1ABCA0u: goto label_1abca0;
            case 0x1ABCA4u: goto label_1abca4;
            case 0x1ABCA8u: goto label_1abca8;
            case 0x1ABCACu: goto label_1abcac;
            case 0x1ABCB0u: goto label_1abcb0;
            case 0x1ABCB4u: goto label_1abcb4;
            case 0x1ABCB8u: goto label_1abcb8;
            case 0x1ABCBCu: goto label_1abcbc;
            case 0x1ABCC0u: goto label_1abcc0;
            case 0x1ABCC4u: goto label_1abcc4;
            case 0x1ABCC8u: goto label_1abcc8;
            case 0x1ABCCCu: goto label_1abccc;
            case 0x1ABCD0u: goto label_1abcd0;
            case 0x1ABCD4u: goto label_1abcd4;
            case 0x1ABCD8u: goto label_1abcd8;
            case 0x1ABCDCu: goto label_1abcdc;
            case 0x1ABCE0u: goto label_1abce0;
            case 0x1ABCE4u: goto label_1abce4;
            case 0x1ABCE8u: goto label_1abce8;
            case 0x1ABCECu: goto label_1abcec;
            case 0x1ABCF0u: goto label_1abcf0;
            case 0x1ABCF4u: goto label_1abcf4;
            case 0x1ABCF8u: goto label_1abcf8;
            case 0x1ABCFCu: goto label_1abcfc;
            case 0x1ABD00u: goto label_1abd00;
            case 0x1ABD04u: goto label_1abd04;
            case 0x1ABD08u: goto label_1abd08;
            case 0x1ABD0Cu: goto label_1abd0c;
            case 0x1ABD10u: goto label_1abd10;
            case 0x1ABD14u: goto label_1abd14;
            case 0x1ABD18u: goto label_1abd18;
            case 0x1ABD1Cu: goto label_1abd1c;
            case 0x1ABD20u: goto label_1abd20;
            case 0x1ABD24u: goto label_1abd24;
            case 0x1ABD28u: goto label_1abd28;
            case 0x1ABD2Cu: goto label_1abd2c;
            case 0x1ABD30u: goto label_1abd30;
            case 0x1ABD34u: goto label_1abd34;
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD3Cu: goto label_1abd3c;
            case 0x1ABD40u: goto label_1abd40;
            case 0x1ABD44u: goto label_1abd44;
            case 0x1ABD48u: goto label_1abd48;
            case 0x1ABD4Cu: goto label_1abd4c;
            case 0x1ABD50u: goto label_1abd50;
            case 0x1ABD54u: goto label_1abd54;
            case 0x1ABD58u: goto label_1abd58;
            case 0x1ABD5Cu: goto label_1abd5c;
            case 0x1ABD60u: goto label_1abd60;
            case 0x1ABD64u: goto label_1abd64;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABD6Cu: goto label_1abd6c;
            case 0x1ABD70u: goto label_1abd70;
            case 0x1ABD74u: goto label_1abd74;
            case 0x1ABD78u: goto label_1abd78;
            case 0x1ABD7Cu: goto label_1abd7c;
            case 0x1ABD80u: goto label_1abd80;
            case 0x1ABD84u: goto label_1abd84;
            case 0x1ABD88u: goto label_1abd88;
            case 0x1ABD8Cu: goto label_1abd8c;
            case 0x1ABD90u: goto label_1abd90;
            case 0x1ABD94u: goto label_1abd94;
            case 0x1ABD98u: goto label_1abd98;
            case 0x1ABD9Cu: goto label_1abd9c;
            case 0x1ABDA0u: goto label_1abda0;
            case 0x1ABDA4u: goto label_1abda4;
            case 0x1ABDA8u: goto label_1abda8;
            case 0x1ABDACu: goto label_1abdac;
            case 0x1ABDB0u: goto label_1abdb0;
            case 0x1ABDB4u: goto label_1abdb4;
            case 0x1ABDB8u: goto label_1abdb8;
            case 0x1ABDBCu: goto label_1abdbc;
            case 0x1ABDC0u: goto label_1abdc0;
            case 0x1ABDC4u: goto label_1abdc4;
            case 0x1ABDC8u: goto label_1abdc8;
            case 0x1ABDCCu: goto label_1abdcc;
            case 0x1ABDD0u: goto label_1abdd0;
            case 0x1ABDD4u: goto label_1abdd4;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABDDCu: goto label_1abddc;
            case 0x1ABDE0u: goto label_1abde0;
            case 0x1ABDE4u: goto label_1abde4;
            case 0x1ABDE8u: goto label_1abde8;
            case 0x1ABDECu: goto label_1abdec;
            case 0x1ABDF0u: goto label_1abdf0;
            case 0x1ABDF4u: goto label_1abdf4;
            case 0x1ABDF8u: goto label_1abdf8;
            case 0x1ABDFCu: goto label_1abdfc;
            case 0x1ABE00u: goto label_1abe00;
            case 0x1ABE04u: goto label_1abe04;
            case 0x1ABE08u: goto label_1abe08;
            case 0x1ABE0Cu: goto label_1abe0c;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE14u: goto label_1abe14;
            case 0x1ABE18u: goto label_1abe18;
            case 0x1ABE1Cu: goto label_1abe1c;
            case 0x1ABE20u: goto label_1abe20;
            case 0x1ABE24u: goto label_1abe24;
            case 0x1ABE28u: goto label_1abe28;
            case 0x1ABE2Cu: goto label_1abe2c;
            case 0x1ABE30u: goto label_1abe30;
            case 0x1ABE34u: goto label_1abe34;
            case 0x1ABE38u: goto label_1abe38;
            case 0x1ABE3Cu: goto label_1abe3c;
            case 0x1ABE40u: goto label_1abe40;
            case 0x1ABE44u: goto label_1abe44;
            case 0x1ABE48u: goto label_1abe48;
            case 0x1ABE4Cu: goto label_1abe4c;
            case 0x1ABE50u: goto label_1abe50;
            case 0x1ABE54u: goto label_1abe54;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE5Cu: goto label_1abe5c;
            case 0x1ABE60u: goto label_1abe60;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABE6Cu: goto label_1abe6c;
            case 0x1ABE70u: goto label_1abe70;
            case 0x1ABE74u: goto label_1abe74;
            case 0x1ABE78u: goto label_1abe78;
            case 0x1ABE7Cu: goto label_1abe7c;
            case 0x1ABE80u: goto label_1abe80;
            case 0x1ABE84u: goto label_1abe84;
            case 0x1ABE88u: goto label_1abe88;
            case 0x1ABE8Cu: goto label_1abe8c;
            case 0x1ABE90u: goto label_1abe90;
            case 0x1ABE94u: goto label_1abe94;
            case 0x1ABE98u: goto label_1abe98;
            case 0x1ABE9Cu: goto label_1abe9c;
            case 0x1ABEA0u: goto label_1abea0;
            case 0x1ABEA4u: goto label_1abea4;
            case 0x1ABEA8u: goto label_1abea8;
            case 0x1ABEACu: goto label_1abeac;
            case 0x1ABEB0u: goto label_1abeb0;
            case 0x1ABEB4u: goto label_1abeb4;
            case 0x1ABEB8u: goto label_1abeb8;
            case 0x1ABEBCu: goto label_1abebc;
            case 0x1ABEC0u: goto label_1abec0;
            case 0x1ABEC4u: goto label_1abec4;
            case 0x1ABEC8u: goto label_1abec8;
            case 0x1ABECCu: goto label_1abecc;
            case 0x1ABED0u: goto label_1abed0;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABED8u: goto label_1abed8;
            case 0x1ABEDCu: goto label_1abedc;
            case 0x1ABEE0u: goto label_1abee0;
            case 0x1ABEE4u: goto label_1abee4;
            case 0x1ABEE8u: goto label_1abee8;
            case 0x1ABEECu: goto label_1abeec;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF4u: goto label_1abef4;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABEFCu: goto label_1abefc;
            case 0x1ABF00u: goto label_1abf00;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF08u: goto label_1abf08;
            case 0x1ABF0Cu: goto label_1abf0c;
            case 0x1ABF10u: goto label_1abf10;
            case 0x1ABF14u: goto label_1abf14;
            case 0x1ABF18u: goto label_1abf18;
            case 0x1ABF1Cu: goto label_1abf1c;
            case 0x1ABF20u: goto label_1abf20;
            case 0x1ABF24u: goto label_1abf24;
            case 0x1ABF28u: goto label_1abf28;
            case 0x1ABF2Cu: goto label_1abf2c;
            case 0x1ABF30u: goto label_1abf30;
            case 0x1ABF34u: goto label_1abf34;
            case 0x1ABF38u: goto label_1abf38;
            case 0x1ABF3Cu: goto label_1abf3c;
            case 0x1ABF40u: goto label_1abf40;
            case 0x1ABF44u: goto label_1abf44;
            case 0x1ABF48u: goto label_1abf48;
            case 0x1ABF4Cu: goto label_1abf4c;
            case 0x1ABF50u: goto label_1abf50;
            case 0x1ABF54u: goto label_1abf54;
            case 0x1ABF58u: goto label_1abf58;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABF60u: goto label_1abf60;
            case 0x1ABF64u: goto label_1abf64;
            case 0x1ABF68u: goto label_1abf68;
            case 0x1ABF6Cu: goto label_1abf6c;
            case 0x1ABF70u: goto label_1abf70;
            case 0x1ABF74u: goto label_1abf74;
            case 0x1ABF78u: goto label_1abf78;
            case 0x1ABF7Cu: goto label_1abf7c;
            case 0x1ABF80u: goto label_1abf80;
            case 0x1ABF84u: goto label_1abf84;
            case 0x1ABF88u: goto label_1abf88;
            case 0x1ABF8Cu: goto label_1abf8c;
            case 0x1ABF90u: goto label_1abf90;
            case 0x1ABF94u: goto label_1abf94;
            case 0x1ABF98u: goto label_1abf98;
            case 0x1ABF9Cu: goto label_1abf9c;
            case 0x1ABFA0u: goto label_1abfa0;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFA8u: goto label_1abfa8;
            case 0x1ABFACu: goto label_1abfac;
            case 0x1ABFB0u: goto label_1abfb0;
            case 0x1ABFB4u: goto label_1abfb4;
            case 0x1ABFB8u: goto label_1abfb8;
            case 0x1ABFBCu: goto label_1abfbc;
            case 0x1ABFC0u: goto label_1abfc0;
            case 0x1ABFC4u: goto label_1abfc4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFCCu: goto label_1abfcc;
            case 0x1ABFD0u: goto label_1abfd0;
            case 0x1ABFD4u: goto label_1abfd4;
            case 0x1ABFD8u: goto label_1abfd8;
            case 0x1ABFDCu: goto label_1abfdc;
            case 0x1ABFE0u: goto label_1abfe0;
            case 0x1ABFE4u: goto label_1abfe4;
            case 0x1ABFE8u: goto label_1abfe8;
            case 0x1ABFECu: goto label_1abfec;
            case 0x1ABFF0u: goto label_1abff0;
            case 0x1ABFF4u: goto label_1abff4;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1ABFFCu: goto label_1abffc;
            case 0x1AC000u: goto label_1ac000;
            case 0x1AC004u: goto label_1ac004;
            case 0x1AC008u: goto label_1ac008;
            case 0x1AC00Cu: goto label_1ac00c;
            case 0x1AC010u: goto label_1ac010;
            case 0x1AC014u: goto label_1ac014;
            case 0x1AC018u: goto label_1ac018;
            case 0x1AC01Cu: goto label_1ac01c;
            case 0x1AC020u: goto label_1ac020;
            case 0x1AC024u: goto label_1ac024;
            case 0x1AC028u: goto label_1ac028;
            case 0x1AC02Cu: goto label_1ac02c;
            case 0x1AC030u: goto label_1ac030;
            case 0x1AC034u: goto label_1ac034;
            case 0x1AC038u: goto label_1ac038;
            case 0x1AC03Cu: goto label_1ac03c;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC044u: goto label_1ac044;
            case 0x1AC048u: goto label_1ac048;
            case 0x1AC04Cu: goto label_1ac04c;
            case 0x1AC050u: goto label_1ac050;
            case 0x1AC054u: goto label_1ac054;
            case 0x1AC058u: goto label_1ac058;
            case 0x1AC05Cu: goto label_1ac05c;
            case 0x1AC060u: goto label_1ac060;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC068u: goto label_1ac068;
            case 0x1AC06Cu: goto label_1ac06c;
            case 0x1AC070u: goto label_1ac070;
            case 0x1AC074u: goto label_1ac074;
            case 0x1AC078u: goto label_1ac078;
            case 0x1AC07Cu: goto label_1ac07c;
            case 0x1AC080u: goto label_1ac080;
            case 0x1AC084u: goto label_1ac084;
            case 0x1AC088u: goto label_1ac088;
            case 0x1AC08Cu: goto label_1ac08c;
            case 0x1AC090u: goto label_1ac090;
            case 0x1AC094u: goto label_1ac094;
            case 0x1AC098u: goto label_1ac098;
            case 0x1AC09Cu: goto label_1ac09c;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A4u: goto label_1ac0a4;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0ACu: goto label_1ac0ac;
            case 0x1AC0B0u: goto label_1ac0b0;
            case 0x1AC0B4u: goto label_1ac0b4;
            case 0x1AC0B8u: goto label_1ac0b8;
            case 0x1AC0BCu: goto label_1ac0bc;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0C4u: goto label_1ac0c4;
            case 0x1AC0C8u: goto label_1ac0c8;
            case 0x1AC0CCu: goto label_1ac0cc;
            case 0x1AC0D0u: goto label_1ac0d0;
            case 0x1AC0D4u: goto label_1ac0d4;
            case 0x1AC0D8u: goto label_1ac0d8;
            case 0x1AC0DCu: goto label_1ac0dc;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC0E8u: goto label_1ac0e8;
            case 0x1AC0ECu: goto label_1ac0ec;
            case 0x1AC0F0u: goto label_1ac0f0;
            case 0x1AC0F4u: goto label_1ac0f4;
            case 0x1AC0F8u: goto label_1ac0f8;
            case 0x1AC0FCu: goto label_1ac0fc;
            case 0x1AC100u: goto label_1ac100;
            case 0x1AC104u: goto label_1ac104;
            case 0x1AC108u: goto label_1ac108;
            case 0x1AC10Cu: goto label_1ac10c;
            case 0x1AC110u: goto label_1ac110;
            case 0x1AC114u: goto label_1ac114;
            case 0x1AC118u: goto label_1ac118;
            case 0x1AC11Cu: goto label_1ac11c;
            case 0x1AC120u: goto label_1ac120;
            case 0x1AC124u: goto label_1ac124;
            case 0x1AC128u: goto label_1ac128;
            case 0x1AC12Cu: goto label_1ac12c;
            case 0x1AC130u: goto label_1ac130;
            case 0x1AC134u: goto label_1ac134;
            case 0x1AC138u: goto label_1ac138;
            case 0x1AC13Cu: goto label_1ac13c;
            case 0x1AC140u: goto label_1ac140;
            case 0x1AC144u: goto label_1ac144;
            case 0x1AC148u: goto label_1ac148;
            case 0x1AC14Cu: goto label_1ac14c;
            case 0x1AC150u: goto label_1ac150;
            case 0x1AC154u: goto label_1ac154;
            case 0x1AC158u: goto label_1ac158;
            case 0x1AC15Cu: goto label_1ac15c;
            case 0x1AC160u: goto label_1ac160;
            case 0x1AC164u: goto label_1ac164;
            case 0x1AC168u: goto label_1ac168;
            case 0x1AC16Cu: goto label_1ac16c;
            case 0x1AC170u: goto label_1ac170;
            case 0x1AC174u: goto label_1ac174;
            case 0x1AC178u: goto label_1ac178;
            case 0x1AC17Cu: goto label_1ac17c;
            case 0x1AC180u: goto label_1ac180;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC188u: goto label_1ac188;
            case 0x1AC18Cu: goto label_1ac18c;
            case 0x1AC190u: goto label_1ac190;
            case 0x1AC194u: goto label_1ac194;
            case 0x1AC198u: goto label_1ac198;
            case 0x1AC19Cu: goto label_1ac19c;
            case 0x1AC1A0u: goto label_1ac1a0;
            case 0x1AC1A4u: goto label_1ac1a4;
            case 0x1AC1A8u: goto label_1ac1a8;
            case 0x1AC1ACu: goto label_1ac1ac;
            case 0x1AC1B0u: goto label_1ac1b0;
            case 0x1AC1B4u: goto label_1ac1b4;
            case 0x1AC1B8u: goto label_1ac1b8;
            case 0x1AC1BCu: goto label_1ac1bc;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1C4u: goto label_1ac1c4;
            case 0x1AC1C8u: goto label_1ac1c8;
            case 0x1AC1CCu: goto label_1ac1cc;
            case 0x1AC1D0u: goto label_1ac1d0;
            case 0x1AC1D4u: goto label_1ac1d4;
            case 0x1AC1D8u: goto label_1ac1d8;
            case 0x1AC1DCu: goto label_1ac1dc;
            case 0x1AC1E0u: goto label_1ac1e0;
            case 0x1AC1E4u: goto label_1ac1e4;
            case 0x1AC1E8u: goto label_1ac1e8;
            case 0x1AC1ECu: goto label_1ac1ec;
            case 0x1AC1F0u: goto label_1ac1f0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC1F8u: goto label_1ac1f8;
            case 0x1AC1FCu: goto label_1ac1fc;
            case 0x1AC200u: goto label_1ac200;
            case 0x1AC204u: goto label_1ac204;
            case 0x1AC208u: goto label_1ac208;
            case 0x1AC20Cu: goto label_1ac20c;
            case 0x1AC210u: goto label_1ac210;
            case 0x1AC214u: goto label_1ac214;
            case 0x1AC218u: goto label_1ac218;
            case 0x1AC21Cu: goto label_1ac21c;
            case 0x1AC220u: goto label_1ac220;
            case 0x1AC224u: goto label_1ac224;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC22Cu: goto label_1ac22c;
            case 0x1AC230u: goto label_1ac230;
            case 0x1AC234u: goto label_1ac234;
            case 0x1AC238u: goto label_1ac238;
            case 0x1AC23Cu: goto label_1ac23c;
            case 0x1AC240u: goto label_1ac240;
            case 0x1AC244u: goto label_1ac244;
            case 0x1AC248u: goto label_1ac248;
            case 0x1AC24Cu: goto label_1ac24c;
            case 0x1AC250u: goto label_1ac250;
            case 0x1AC254u: goto label_1ac254;
            case 0x1AC258u: goto label_1ac258;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC260u: goto label_1ac260;
            case 0x1AC264u: goto label_1ac264;
            case 0x1AC268u: goto label_1ac268;
            case 0x1AC26Cu: goto label_1ac26c;
            case 0x1AC270u: goto label_1ac270;
            case 0x1AC274u: goto label_1ac274;
            case 0x1AC278u: goto label_1ac278;
            case 0x1AC27Cu: goto label_1ac27c;
            case 0x1AC280u: goto label_1ac280;
            case 0x1AC284u: goto label_1ac284;
            case 0x1AC288u: goto label_1ac288;
            case 0x1AC28Cu: goto label_1ac28c;
            case 0x1AC290u: goto label_1ac290;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC298u: goto label_1ac298;
            case 0x1AC29Cu: goto label_1ac29c;
            case 0x1AC2A0u: goto label_1ac2a0;
            case 0x1AC2A4u: goto label_1ac2a4;
            case 0x1AC2A8u: goto label_1ac2a8;
            case 0x1AC2ACu: goto label_1ac2ac;
            case 0x1AC2B0u: goto label_1ac2b0;
            case 0x1AC2B4u: goto label_1ac2b4;
            case 0x1AC2B8u: goto label_1ac2b8;
            case 0x1AC2BCu: goto label_1ac2bc;
            case 0x1AC2C0u: goto label_1ac2c0;
            case 0x1AC2C4u: goto label_1ac2c4;
            case 0x1AC2C8u: goto label_1ac2c8;
            case 0x1AC2CCu: goto label_1ac2cc;
            case 0x1AC2D0u: goto label_1ac2d0;
            case 0x1AC2D4u: goto label_1ac2d4;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC2DCu: goto label_1ac2dc;
            case 0x1AC2E0u: goto label_1ac2e0;
            case 0x1AC2E4u: goto label_1ac2e4;
            case 0x1AC2E8u: goto label_1ac2e8;
            case 0x1AC2ECu: goto label_1ac2ec;
            case 0x1AC2F0u: goto label_1ac2f0;
            case 0x1AC2F4u: goto label_1ac2f4;
            case 0x1AC2F8u: goto label_1ac2f8;
            case 0x1AC2FCu: goto label_1ac2fc;
            case 0x1AC300u: goto label_1ac300;
            case 0x1AC304u: goto label_1ac304;
            case 0x1AC308u: goto label_1ac308;
            case 0x1AC30Cu: goto label_1ac30c;
            case 0x1AC310u: goto label_1ac310;
            case 0x1AC314u: goto label_1ac314;
            case 0x1AC318u: goto label_1ac318;
            case 0x1AC31Cu: goto label_1ac31c;
            case 0x1AC320u: goto label_1ac320;
            case 0x1AC324u: goto label_1ac324;
            case 0x1AC328u: goto label_1ac328;
            case 0x1AC32Cu: goto label_1ac32c;
            case 0x1AC330u: goto label_1ac330;
            case 0x1AC334u: goto label_1ac334;
            case 0x1AC338u: goto label_1ac338;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC340u: goto label_1ac340;
            case 0x1AC344u: goto label_1ac344;
            case 0x1AC348u: goto label_1ac348;
            case 0x1AC34Cu: goto label_1ac34c;
            case 0x1AC350u: goto label_1ac350;
            case 0x1AC354u: goto label_1ac354;
            case 0x1AC358u: goto label_1ac358;
            case 0x1AC35Cu: goto label_1ac35c;
            case 0x1AC360u: goto label_1ac360;
            case 0x1AC364u: goto label_1ac364;
            case 0x1AC368u: goto label_1ac368;
            case 0x1AC36Cu: goto label_1ac36c;
            case 0x1AC370u: goto label_1ac370;
            case 0x1AC374u: goto label_1ac374;
            case 0x1AC378u: goto label_1ac378;
            case 0x1AC37Cu: goto label_1ac37c;
            case 0x1AC380u: goto label_1ac380;
            case 0x1AC384u: goto label_1ac384;
            case 0x1AC388u: goto label_1ac388;
            case 0x1AC38Cu: goto label_1ac38c;
            case 0x1AC390u: goto label_1ac390;
            case 0x1AC394u: goto label_1ac394;
            case 0x1AC398u: goto label_1ac398;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3A0u: goto label_1ac3a0;
            case 0x1AC3A4u: goto label_1ac3a4;
            case 0x1AC3A8u: goto label_1ac3a8;
            case 0x1AC3ACu: goto label_1ac3ac;
            case 0x1AC3B0u: goto label_1ac3b0;
            case 0x1AC3B4u: goto label_1ac3b4;
            case 0x1AC3B8u: goto label_1ac3b8;
            case 0x1AC3BCu: goto label_1ac3bc;
            case 0x1AC3C0u: goto label_1ac3c0;
            case 0x1AC3C4u: goto label_1ac3c4;
            case 0x1AC3C8u: goto label_1ac3c8;
            case 0x1AC3CCu: goto label_1ac3cc;
            case 0x1AC3D0u: goto label_1ac3d0;
            case 0x1AC3D4u: goto label_1ac3d4;
            case 0x1AC3D8u: goto label_1ac3d8;
            case 0x1AC3DCu: goto label_1ac3dc;
            case 0x1AC3E0u: goto label_1ac3e0;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC3E8u: goto label_1ac3e8;
            case 0x1AC3ECu: goto label_1ac3ec;
            case 0x1AC3F0u: goto label_1ac3f0;
            case 0x1AC3F4u: goto label_1ac3f4;
            case 0x1AC3F8u: goto label_1ac3f8;
            case 0x1AC3FCu: goto label_1ac3fc;
            case 0x1AC400u: goto label_1ac400;
            case 0x1AC404u: goto label_1ac404;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC40Cu: goto label_1ac40c;
            case 0x1AC410u: goto label_1ac410;
            case 0x1AC414u: goto label_1ac414;
            case 0x1AC418u: goto label_1ac418;
            case 0x1AC41Cu: goto label_1ac41c;
            case 0x1AC420u: goto label_1ac420;
            case 0x1AC424u: goto label_1ac424;
            case 0x1AC428u: goto label_1ac428;
            case 0x1AC42Cu: goto label_1ac42c;
            case 0x1AC430u: goto label_1ac430;
            case 0x1AC434u: goto label_1ac434;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC43Cu: goto label_1ac43c;
            case 0x1AC440u: goto label_1ac440;
            case 0x1AC444u: goto label_1ac444;
            case 0x1AC448u: goto label_1ac448;
            case 0x1AC44Cu: goto label_1ac44c;
            case 0x1AC450u: goto label_1ac450;
            case 0x1AC454u: goto label_1ac454;
            case 0x1AC458u: goto label_1ac458;
            case 0x1AC45Cu: goto label_1ac45c;
            case 0x1AC460u: goto label_1ac460;
            case 0x1AC464u: goto label_1ac464;
            case 0x1AC468u: goto label_1ac468;
            case 0x1AC46Cu: goto label_1ac46c;
            case 0x1AC470u: goto label_1ac470;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC478u: goto label_1ac478;
            case 0x1AC47Cu: goto label_1ac47c;
            case 0x1AC480u: goto label_1ac480;
            case 0x1AC484u: goto label_1ac484;
            case 0x1AC488u: goto label_1ac488;
            case 0x1AC48Cu: goto label_1ac48c;
            case 0x1AC490u: goto label_1ac490;
            case 0x1AC494u: goto label_1ac494;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC49Cu: goto label_1ac49c;
            case 0x1AC4A0u: goto label_1ac4a0;
            case 0x1AC4A4u: goto label_1ac4a4;
            case 0x1AC4A8u: goto label_1ac4a8;
            case 0x1AC4ACu: goto label_1ac4ac;
            case 0x1AC4B0u: goto label_1ac4b0;
            case 0x1AC4B4u: goto label_1ac4b4;
            case 0x1AC4B8u: goto label_1ac4b8;
            case 0x1AC4BCu: goto label_1ac4bc;
            case 0x1AC4C0u: goto label_1ac4c0;
            case 0x1AC4C4u: goto label_1ac4c4;
            case 0x1AC4C8u: goto label_1ac4c8;
            case 0x1AC4CCu: goto label_1ac4cc;
            case 0x1AC4D0u: goto label_1ac4d0;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC4D8u: goto label_1ac4d8;
            case 0x1AC4DCu: goto label_1ac4dc;
            case 0x1AC4E0u: goto label_1ac4e0;
            case 0x1AC4E4u: goto label_1ac4e4;
            case 0x1AC4E8u: goto label_1ac4e8;
            case 0x1AC4ECu: goto label_1ac4ec;
            case 0x1AC4F0u: goto label_1ac4f0;
            case 0x1AC4F4u: goto label_1ac4f4;
            case 0x1AC4F8u: goto label_1ac4f8;
            case 0x1AC4FCu: goto label_1ac4fc;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC504u: goto label_1ac504;
            case 0x1AC508u: goto label_1ac508;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC510u: goto label_1ac510;
            case 0x1AC514u: goto label_1ac514;
            case 0x1AC518u: goto label_1ac518;
            case 0x1AC51Cu: goto label_1ac51c;
            case 0x1AC520u: goto label_1ac520;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC528u: goto label_1ac528;
            case 0x1AC52Cu: goto label_1ac52c;
            case 0x1AC530u: goto label_1ac530;
            case 0x1AC534u: goto label_1ac534;
            case 0x1AC538u: goto label_1ac538;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC544u: goto label_1ac544;
            case 0x1AC548u: goto label_1ac548;
            case 0x1AC54Cu: goto label_1ac54c;
            case 0x1AC550u: goto label_1ac550;
            case 0x1AC554u: goto label_1ac554;
            case 0x1AC558u: goto label_1ac558;
            case 0x1AC55Cu: goto label_1ac55c;
            case 0x1AC560u: goto label_1ac560;
            case 0x1AC564u: goto label_1ac564;
            case 0x1AC568u: goto label_1ac568;
            case 0x1AC56Cu: goto label_1ac56c;
            case 0x1AC570u: goto label_1ac570;
            case 0x1AC574u: goto label_1ac574;
            case 0x1AC578u: goto label_1ac578;
            case 0x1AC57Cu: goto label_1ac57c;
            case 0x1AC580u: goto label_1ac580;
            case 0x1AC584u: goto label_1ac584;
            case 0x1AC588u: goto label_1ac588;
            case 0x1AC58Cu: goto label_1ac58c;
            case 0x1AC590u: goto label_1ac590;
            case 0x1AC594u: goto label_1ac594;
            case 0x1AC598u: goto label_1ac598;
            case 0x1AC59Cu: goto label_1ac59c;
            case 0x1AC5A0u: goto label_1ac5a0;
            case 0x1AC5A4u: goto label_1ac5a4;
            case 0x1AC5A8u: goto label_1ac5a8;
            case 0x1AC5ACu: goto label_1ac5ac;
            case 0x1AC5B0u: goto label_1ac5b0;
            case 0x1AC5B4u: goto label_1ac5b4;
            case 0x1AC5B8u: goto label_1ac5b8;
            case 0x1AC5BCu: goto label_1ac5bc;
            case 0x1AC5C0u: goto label_1ac5c0;
            case 0x1AC5C4u: goto label_1ac5c4;
            case 0x1AC5C8u: goto label_1ac5c8;
            case 0x1AC5CCu: goto label_1ac5cc;
            case 0x1AC5D0u: goto label_1ac5d0;
            case 0x1AC5D4u: goto label_1ac5d4;
            case 0x1AC5D8u: goto label_1ac5d8;
            case 0x1AC5DCu: goto label_1ac5dc;
            case 0x1AC5E0u: goto label_1ac5e0;
            case 0x1AC5E4u: goto label_1ac5e4;
            case 0x1AC5E8u: goto label_1ac5e8;
            case 0x1AC5ECu: goto label_1ac5ec;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC5F4u: goto label_1ac5f4;
            case 0x1AC5F8u: goto label_1ac5f8;
            case 0x1AC5FCu: goto label_1ac5fc;
            case 0x1AC600u: goto label_1ac600;
            case 0x1AC604u: goto label_1ac604;
            case 0x1AC608u: goto label_1ac608;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC610u: goto label_1ac610;
            case 0x1AC614u: goto label_1ac614;
            case 0x1AC618u: goto label_1ac618;
            case 0x1AC61Cu: goto label_1ac61c;
            case 0x1AC620u: goto label_1ac620;
            case 0x1AC624u: goto label_1ac624;
            case 0x1AC628u: goto label_1ac628;
            case 0x1AC62Cu: goto label_1ac62c;
            case 0x1AC630u: goto label_1ac630;
            case 0x1AC634u: goto label_1ac634;
            case 0x1AC638u: goto label_1ac638;
            case 0x1AC63Cu: goto label_1ac63c;
            case 0x1AC640u: goto label_1ac640;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC648u: goto label_1ac648;
            case 0x1AC64Cu: goto label_1ac64c;
            case 0x1AC650u: goto label_1ac650;
            case 0x1AC654u: goto label_1ac654;
            case 0x1AC658u: goto label_1ac658;
            case 0x1AC65Cu: goto label_1ac65c;
            case 0x1AC660u: goto label_1ac660;
            case 0x1AC664u: goto label_1ac664;
            case 0x1AC668u: goto label_1ac668;
            case 0x1AC66Cu: goto label_1ac66c;
            case 0x1AC670u: goto label_1ac670;
            case 0x1AC674u: goto label_1ac674;
            case 0x1AC678u: goto label_1ac678;
            case 0x1AC67Cu: goto label_1ac67c;
            case 0x1AC680u: goto label_1ac680;
            case 0x1AC684u: goto label_1ac684;
            case 0x1AC688u: goto label_1ac688;
            case 0x1AC68Cu: goto label_1ac68c;
            case 0x1AC690u: goto label_1ac690;
            case 0x1AC694u: goto label_1ac694;
            case 0x1AC698u: goto label_1ac698;
            case 0x1AC69Cu: goto label_1ac69c;
            case 0x1AC6A0u: goto label_1ac6a0;
            case 0x1AC6A4u: goto label_1ac6a4;
            case 0x1AC6A8u: goto label_1ac6a8;
            case 0x1AC6ACu: goto label_1ac6ac;
            case 0x1AC6B0u: goto label_1ac6b0;
            case 0x1AC6B4u: goto label_1ac6b4;
            case 0x1AC6B8u: goto label_1ac6b8;
            case 0x1AC6BCu: goto label_1ac6bc;
            case 0x1AC6C0u: goto label_1ac6c0;
            case 0x1AC6C4u: goto label_1ac6c4;
            case 0x1AC6C8u: goto label_1ac6c8;
            case 0x1AC6CCu: goto label_1ac6cc;
            case 0x1AC6D0u: goto label_1ac6d0;
            case 0x1AC6D4u: goto label_1ac6d4;
            case 0x1AC6D8u: goto label_1ac6d8;
            case 0x1AC6DCu: goto label_1ac6dc;
            case 0x1AC6E0u: goto label_1ac6e0;
            case 0x1AC6E4u: goto label_1ac6e4;
            case 0x1AC6E8u: goto label_1ac6e8;
            case 0x1AC6ECu: goto label_1ac6ec;
            case 0x1AC6F0u: goto label_1ac6f0;
            case 0x1AC6F4u: goto label_1ac6f4;
            case 0x1AC6F8u: goto label_1ac6f8;
            case 0x1AC6FCu: goto label_1ac6fc;
            case 0x1AC700u: goto label_1ac700;
            case 0x1AC704u: goto label_1ac704;
            case 0x1AC708u: goto label_1ac708;
            case 0x1AC70Cu: goto label_1ac70c;
            case 0x1AC710u: goto label_1ac710;
            case 0x1AC714u: goto label_1ac714;
            case 0x1AC718u: goto label_1ac718;
            case 0x1AC71Cu: goto label_1ac71c;
            case 0x1AC720u: goto label_1ac720;
            case 0x1AC724u: goto label_1ac724;
            case 0x1AC728u: goto label_1ac728;
            case 0x1AC72Cu: goto label_1ac72c;
            case 0x1AC730u: goto label_1ac730;
            case 0x1AC734u: goto label_1ac734;
            case 0x1AC738u: goto label_1ac738;
            case 0x1AC73Cu: goto label_1ac73c;
            case 0x1AC740u: goto label_1ac740;
            case 0x1AC744u: goto label_1ac744;
            case 0x1AC748u: goto label_1ac748;
            case 0x1AC74Cu: goto label_1ac74c;
            case 0x1AC750u: goto label_1ac750;
            case 0x1AC754u: goto label_1ac754;
            case 0x1AC758u: goto label_1ac758;
            case 0x1AC75Cu: goto label_1ac75c;
            case 0x1AC760u: goto label_1ac760;
            case 0x1AC764u: goto label_1ac764;
            case 0x1AC768u: goto label_1ac768;
            case 0x1AC76Cu: goto label_1ac76c;
            case 0x1AC770u: goto label_1ac770;
            case 0x1AC774u: goto label_1ac774;
            case 0x1AC778u: goto label_1ac778;
            case 0x1AC77Cu: goto label_1ac77c;
            case 0x1AC780u: goto label_1ac780;
            case 0x1AC784u: goto label_1ac784;
            case 0x1AC788u: goto label_1ac788;
            case 0x1AC78Cu: goto label_1ac78c;
            case 0x1AC790u: goto label_1ac790;
            case 0x1AC794u: goto label_1ac794;
            case 0x1AC798u: goto label_1ac798;
            case 0x1AC79Cu: goto label_1ac79c;
            case 0x1AC7A0u: goto label_1ac7a0;
            case 0x1AC7A4u: goto label_1ac7a4;
            case 0x1AC7A8u: goto label_1ac7a8;
            case 0x1AC7ACu: goto label_1ac7ac;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC7B4u: goto label_1ac7b4;
            case 0x1AC7B8u: goto label_1ac7b8;
            case 0x1AC7BCu: goto label_1ac7bc;
            case 0x1AC7C0u: goto label_1ac7c0;
            case 0x1AC7C4u: goto label_1ac7c4;
            case 0x1AC7C8u: goto label_1ac7c8;
            case 0x1AC7CCu: goto label_1ac7cc;
            case 0x1AC7D0u: goto label_1ac7d0;
            case 0x1AC7D4u: goto label_1ac7d4;
            case 0x1AC7D8u: goto label_1ac7d8;
            case 0x1AC7DCu: goto label_1ac7dc;
            case 0x1AC7E0u: goto label_1ac7e0;
            case 0x1AC7E4u: goto label_1ac7e4;
            case 0x1AC7E8u: goto label_1ac7e8;
            case 0x1AC7ECu: goto label_1ac7ec;
            case 0x1AC7F0u: goto label_1ac7f0;
            case 0x1AC7F4u: goto label_1ac7f4;
            case 0x1AC7F8u: goto label_1ac7f8;
            case 0x1AC7FCu: goto label_1ac7fc;
            case 0x1AC800u: goto label_1ac800;
            case 0x1AC804u: goto label_1ac804;
            case 0x1AC808u: goto label_1ac808;
            case 0x1AC80Cu: goto label_1ac80c;
            case 0x1AC810u: goto label_1ac810;
            case 0x1AC814u: goto label_1ac814;
            case 0x1AC818u: goto label_1ac818;
            case 0x1AC81Cu: goto label_1ac81c;
            case 0x1AC820u: goto label_1ac820;
            case 0x1AC824u: goto label_1ac824;
            case 0x1AC828u: goto label_1ac828;
            case 0x1AC82Cu: goto label_1ac82c;
            case 0x1AC830u: goto label_1ac830;
            case 0x1AC834u: goto label_1ac834;
            case 0x1AC838u: goto label_1ac838;
            case 0x1AC83Cu: goto label_1ac83c;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC844u: goto label_1ac844;
            case 0x1AC848u: goto label_1ac848;
            case 0x1AC84Cu: goto label_1ac84c;
            case 0x1AC850u: goto label_1ac850;
            case 0x1AC854u: goto label_1ac854;
            case 0x1AC858u: goto label_1ac858;
            case 0x1AC85Cu: goto label_1ac85c;
            case 0x1AC860u: goto label_1ac860;
            case 0x1AC864u: goto label_1ac864;
            case 0x1AC868u: goto label_1ac868;
            case 0x1AC86Cu: goto label_1ac86c;
            case 0x1AC870u: goto label_1ac870;
            case 0x1AC874u: goto label_1ac874;
            case 0x1AC878u: goto label_1ac878;
            case 0x1AC87Cu: goto label_1ac87c;
            case 0x1AC880u: goto label_1ac880;
            case 0x1AC884u: goto label_1ac884;
            case 0x1AC888u: goto label_1ac888;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC890u: goto label_1ac890;
            case 0x1AC894u: goto label_1ac894;
            case 0x1AC898u: goto label_1ac898;
            case 0x1AC89Cu: goto label_1ac89c;
            case 0x1AC8A0u: goto label_1ac8a0;
            case 0x1AC8A4u: goto label_1ac8a4;
            case 0x1AC8A8u: goto label_1ac8a8;
            case 0x1AC8ACu: goto label_1ac8ac;
            case 0x1AC8B0u: goto label_1ac8b0;
            case 0x1AC8B4u: goto label_1ac8b4;
            case 0x1AC8B8u: goto label_1ac8b8;
            case 0x1AC8BCu: goto label_1ac8bc;
            case 0x1AC8C0u: goto label_1ac8c0;
            case 0x1AC8C4u: goto label_1ac8c4;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8CCu: goto label_1ac8cc;
            case 0x1AC8D0u: goto label_1ac8d0;
            case 0x1AC8D4u: goto label_1ac8d4;
            case 0x1AC8D8u: goto label_1ac8d8;
            case 0x1AC8DCu: goto label_1ac8dc;
            case 0x1AC8E0u: goto label_1ac8e0;
            case 0x1AC8E4u: goto label_1ac8e4;
            case 0x1AC8E8u: goto label_1ac8e8;
            case 0x1AC8ECu: goto label_1ac8ec;
            case 0x1AC8F0u: goto label_1ac8f0;
            case 0x1AC8F4u: goto label_1ac8f4;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC8FCu: goto label_1ac8fc;
            case 0x1AC900u: goto label_1ac900;
            case 0x1AC904u: goto label_1ac904;
            case 0x1AC908u: goto label_1ac908;
            case 0x1AC90Cu: goto label_1ac90c;
            case 0x1AC910u: goto label_1ac910;
            case 0x1AC914u: goto label_1ac914;
            case 0x1AC918u: goto label_1ac918;
            case 0x1AC91Cu: goto label_1ac91c;
            case 0x1AC920u: goto label_1ac920;
            case 0x1AC924u: goto label_1ac924;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC92Cu: goto label_1ac92c;
            case 0x1AC930u: goto label_1ac930;
            case 0x1AC934u: goto label_1ac934;
            case 0x1AC938u: goto label_1ac938;
            case 0x1AC93Cu: goto label_1ac93c;
            case 0x1AC940u: goto label_1ac940;
            case 0x1AC944u: goto label_1ac944;
            case 0x1AC948u: goto label_1ac948;
            case 0x1AC94Cu: goto label_1ac94c;
            case 0x1AC950u: goto label_1ac950;
            case 0x1AC954u: goto label_1ac954;
            case 0x1AC958u: goto label_1ac958;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC960u: goto label_1ac960;
            case 0x1AC964u: goto label_1ac964;
            case 0x1AC968u: goto label_1ac968;
            case 0x1AC96Cu: goto label_1ac96c;
            case 0x1AC970u: goto label_1ac970;
            case 0x1AC974u: goto label_1ac974;
            case 0x1AC978u: goto label_1ac978;
            case 0x1AC97Cu: goto label_1ac97c;
            case 0x1AC980u: goto label_1ac980;
            case 0x1AC984u: goto label_1ac984;
            case 0x1AC988u: goto label_1ac988;
            case 0x1AC98Cu: goto label_1ac98c;
            case 0x1AC990u: goto label_1ac990;
            case 0x1AC994u: goto label_1ac994;
            case 0x1AC998u: goto label_1ac998;
            case 0x1AC99Cu: goto label_1ac99c;
            case 0x1AC9A0u: goto label_1ac9a0;
            case 0x1AC9A4u: goto label_1ac9a4;
            case 0x1AC9A8u: goto label_1ac9a8;
            case 0x1AC9ACu: goto label_1ac9ac;
            case 0x1AC9B0u: goto label_1ac9b0;
            case 0x1AC9B4u: goto label_1ac9b4;
            case 0x1AC9B8u: goto label_1ac9b8;
            case 0x1AC9BCu: goto label_1ac9bc;
            case 0x1AC9C0u: goto label_1ac9c0;
            case 0x1AC9C4u: goto label_1ac9c4;
            case 0x1AC9C8u: goto label_1ac9c8;
            case 0x1AC9CCu: goto label_1ac9cc;
            case 0x1AC9D0u: goto label_1ac9d0;
            case 0x1AC9D4u: goto label_1ac9d4;
            case 0x1AC9D8u: goto label_1ac9d8;
            case 0x1AC9DCu: goto label_1ac9dc;
            case 0x1AC9E0u: goto label_1ac9e0;
            case 0x1AC9E4u: goto label_1ac9e4;
            case 0x1AC9E8u: goto label_1ac9e8;
            case 0x1AC9ECu: goto label_1ac9ec;
            case 0x1AC9F0u: goto label_1ac9f0;
            case 0x1AC9F4u: goto label_1ac9f4;
            case 0x1AC9F8u: goto label_1ac9f8;
            case 0x1AC9FCu: goto label_1ac9fc;
            case 0x1ACA00u: goto label_1aca00;
            case 0x1ACA04u: goto label_1aca04;
            case 0x1ACA08u: goto label_1aca08;
            case 0x1ACA0Cu: goto label_1aca0c;
            case 0x1ACA10u: goto label_1aca10;
            case 0x1ACA14u: goto label_1aca14;
            case 0x1ACA18u: goto label_1aca18;
            case 0x1ACA1Cu: goto label_1aca1c;
            case 0x1ACA20u: goto label_1aca20;
            case 0x1ACA24u: goto label_1aca24;
            case 0x1ACA28u: goto label_1aca28;
            case 0x1ACA2Cu: goto label_1aca2c;
            case 0x1ACA30u: goto label_1aca30;
            case 0x1ACA34u: goto label_1aca34;
            case 0x1ACA38u: goto label_1aca38;
            case 0x1ACA3Cu: goto label_1aca3c;
            case 0x1ACA40u: goto label_1aca40;
            case 0x1ACA44u: goto label_1aca44;
            case 0x1ACA48u: goto label_1aca48;
            case 0x1ACA4Cu: goto label_1aca4c;
            case 0x1ACA50u: goto label_1aca50;
            case 0x1ACA54u: goto label_1aca54;
            case 0x1ACA58u: goto label_1aca58;
            case 0x1ACA5Cu: goto label_1aca5c;
            case 0x1ACA60u: goto label_1aca60;
            case 0x1ACA64u: goto label_1aca64;
            case 0x1ACA68u: goto label_1aca68;
            case 0x1ACA6Cu: goto label_1aca6c;
            case 0x1ACA70u: goto label_1aca70;
            case 0x1ACA74u: goto label_1aca74;
            case 0x1ACA78u: goto label_1aca78;
            case 0x1ACA7Cu: goto label_1aca7c;
            case 0x1ACA80u: goto label_1aca80;
            case 0x1ACA84u: goto label_1aca84;
            case 0x1ACA88u: goto label_1aca88;
            case 0x1ACA8Cu: goto label_1aca8c;
            case 0x1ACA90u: goto label_1aca90;
            case 0x1ACA94u: goto label_1aca94;
            case 0x1ACA98u: goto label_1aca98;
            case 0x1ACA9Cu: goto label_1aca9c;
            case 0x1ACAA0u: goto label_1acaa0;
            case 0x1ACAA4u: goto label_1acaa4;
            case 0x1ACAA8u: goto label_1acaa8;
            case 0x1ACAACu: goto label_1acaac;
            case 0x1ACAB0u: goto label_1acab0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AC28Cu; }
            if (ctx->pc != 0x1AC28Cu) { return; }
        }
    }
    ctx->pc = 0x1AC28Cu;
label_1ac28c:
    // 0x1ac28c: 0x10000204  b           . + 4 + (0x204 << 2)
label_1ac290:
    if (ctx->pc == 0x1AC290u) {
        ctx->pc = 0x1AC294u;
        goto label_1ac294;
    }
    ctx->pc = 0x1AC28Cu;
    {
        const bool branch_taken_0x1ac28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac28c) {
            ctx->pc = 0x1ACAA0u;
            goto label_1acaa0;
        }
    }
    ctx->pc = 0x1AC294u;
label_1ac294:
    // 0x1ac294: 0x0  nop
    ctx->pc = 0x1ac294u;
    // NOP
label_1ac298:
    // 0x1ac298: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ac298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ac29c:
    // 0x1ac29c: 0x1c4001f8  bgtz        $v0, . + 4 + (0x1F8 << 2)
label_1ac2a0:
    if (ctx->pc == 0x1AC2A0u) {
        ctx->pc = 0x1AC2A4u;
        goto label_1ac2a4;
    }
    ctx->pc = 0x1AC29Cu;
    {
        const bool branch_taken_0x1ac29c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ac29c) {
            ctx->pc = 0x1ACA80u;
            goto label_1aca80;
        }
    }
    ctx->pc = 0x1AC2A4u;
label_1ac2a4:
    // 0x1ac2a4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1ac2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1ac2a8:
    // 0x1ac2a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ac2ac:
    // 0x1ac2ac: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1ac2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1ac2b0:
    // 0x1ac2b0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1ac2b4:
    // 0x1ac2b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ac2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ac2b8:
    // 0x1ac2b8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1ac2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1ac2bc:
    // 0x1ac2bc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1ac2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1ac2c0:
    // 0x1ac2c0: 0xc0604b0  jal         func_1812C0
label_1ac2c4:
    if (ctx->pc == 0x1AC2C4u) {
        ctx->pc = 0x1AC2C4u;
            // 0x1ac2c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AC2C8u;
        goto label_1ac2c8;
    }
    ctx->pc = 0x1AC2C0u;
    SET_GPR_U32(ctx, 31, 0x1AC2C8u);
    ctx->pc = 0x1AC2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2C0u;
            // 0x1ac2c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2C8u; }
        if (ctx->pc != 0x1AC2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2C8u; }
        if (ctx->pc != 0x1AC2C8u) { return; }
    }
    ctx->pc = 0x1AC2C8u;
label_1ac2c8:
    // 0x1ac2c8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ac2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac2cc:
    // 0x1ac2cc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1ac2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1ac2d0:
    // 0x1ac2d0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1ac2d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1ac2d4:
    // 0x1ac2d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ac2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac2d8:
    // 0x1ac2d8: 0x0  nop
    ctx->pc = 0x1ac2d8u;
    // NOP
label_1ac2dc:
    // 0x1ac2dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ac2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ac2e0:
    // 0x1ac2e0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1ac2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1ac2e4:
    // 0x1ac2e4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1ac2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac2e8:
    // 0x1ac2e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ac2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ac2ec:
    // 0x1ac2ec: 0xc050ba4  jal         func_142E90
label_1ac2f0:
    if (ctx->pc == 0x1AC2F0u) {
        ctx->pc = 0x1AC2F0u;
            // 0x1ac2f0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AC2F4u;
        goto label_1ac2f4;
    }
    ctx->pc = 0x1AC2ECu;
    SET_GPR_U32(ctx, 31, 0x1AC2F4u);
    ctx->pc = 0x1AC2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2ECu;
            // 0x1ac2f0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2F4u; }
        if (ctx->pc != 0x1AC2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2F4u; }
        if (ctx->pc != 0x1AC2F4u) { return; }
    }
    ctx->pc = 0x1AC2F4u;
label_1ac2f4:
    // 0x1ac2f4: 0xc040d72  jal         func_1035C8
label_1ac2f8:
    if (ctx->pc == 0x1AC2F8u) {
        ctx->pc = 0x1AC2F8u;
            // 0x1ac2f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1AC2FCu;
        goto label_1ac2fc;
    }
    ctx->pc = 0x1AC2F4u;
    SET_GPR_U32(ctx, 31, 0x1AC2FCu);
    ctx->pc = 0x1AC2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2F4u;
            // 0x1ac2f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2FCu; }
        if (ctx->pc != 0x1AC2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2FCu; }
        if (ctx->pc != 0x1AC2FCu) { return; }
    }
    ctx->pc = 0x1AC2FCu;
label_1ac2fc:
    // 0x1ac2fc: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1ac2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1ac300:
    // 0x1ac300: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1ac300u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1ac304:
    // 0x1ac304: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1ac304u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1ac308:
    // 0x1ac308: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1ac30c:
    // 0x1ac30c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ac310:
    // 0x1ac310: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1ac310u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1ac314:
    // 0x1ac314: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1ac314u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1ac318:
    // 0x1ac318: 0xc040880  jal         func_102200
label_1ac31c:
    if (ctx->pc == 0x1AC31Cu) {
        ctx->pc = 0x1AC31Cu;
            // 0x1ac31c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC320u;
        goto label_1ac320;
    }
    ctx->pc = 0x1AC318u;
    SET_GPR_U32(ctx, 31, 0x1AC320u);
    ctx->pc = 0x1AC31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC318u;
            // 0x1ac31c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC320u; }
        if (ctx->pc != 0x1AC320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC320u; }
        if (ctx->pc != 0x1AC320u) { return; }
    }
    ctx->pc = 0x1AC320u;
label_1ac320:
    // 0x1ac320: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1ac320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1ac324:
    // 0x1ac324: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1ac324u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1ac328:
    // 0x1ac328: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1ac328u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1ac32c:
    // 0x1ac32c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1ac330:
    // 0x1ac330: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ac334:
    // 0x1ac334: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1ac334u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1ac338:
    // 0x1ac338: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1ac338u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1ac33c:
    // 0x1ac33c: 0xc040866  jal         func_102198
label_1ac340:
    if (ctx->pc == 0x1AC340u) {
        ctx->pc = 0x1AC340u;
            // 0x1ac340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC344u;
        goto label_1ac344;
    }
    ctx->pc = 0x1AC33Cu;
    SET_GPR_U32(ctx, 31, 0x1AC344u);
    ctx->pc = 0x1AC340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC33Cu;
            // 0x1ac340: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC344u; }
        if (ctx->pc != 0x1AC344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC344u; }
        if (ctx->pc != 0x1AC344u) { return; }
    }
    ctx->pc = 0x1AC344u;
label_1ac344:
    // 0x1ac344: 0xc040a74  jal         func_1029D0
label_1ac348:
    if (ctx->pc == 0x1AC348u) {
        ctx->pc = 0x1AC348u;
            // 0x1ac348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC34Cu;
        goto label_1ac34c;
    }
    ctx->pc = 0x1AC344u;
    SET_GPR_U32(ctx, 31, 0x1AC34Cu);
    ctx->pc = 0x1AC348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC344u;
            // 0x1ac348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC34Cu; }
        if (ctx->pc != 0x1AC34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC34Cu; }
        if (ctx->pc != 0x1AC34Cu) { return; }
    }
    ctx->pc = 0x1AC34Cu;
label_1ac34c:
    // 0x1ac34c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1ac34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac350:
    // 0x1ac350: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ac354:
    // 0x1ac354: 0xc050ba4  jal         func_142E90
label_1ac358:
    if (ctx->pc == 0x1AC358u) {
        ctx->pc = 0x1AC358u;
            // 0x1ac358: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1AC35Cu;
        goto label_1ac35c;
    }
    ctx->pc = 0x1AC354u;
    SET_GPR_U32(ctx, 31, 0x1AC35Cu);
    ctx->pc = 0x1AC358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC354u;
            // 0x1ac358: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC35Cu; }
        if (ctx->pc != 0x1AC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC35Cu; }
        if (ctx->pc != 0x1AC35Cu) { return; }
    }
    ctx->pc = 0x1AC35Cu;
label_1ac35c:
    // 0x1ac35c: 0xc040d72  jal         func_1035C8
label_1ac360:
    if (ctx->pc == 0x1AC360u) {
        ctx->pc = 0x1AC360u;
            // 0x1ac360: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1AC364u;
        goto label_1ac364;
    }
    ctx->pc = 0x1AC35Cu;
    SET_GPR_U32(ctx, 31, 0x1AC364u);
    ctx->pc = 0x1AC360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC35Cu;
            // 0x1ac360: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC364u; }
        if (ctx->pc != 0x1AC364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC364u; }
        if (ctx->pc != 0x1AC364u) { return; }
    }
    ctx->pc = 0x1AC364u;
label_1ac364:
    // 0x1ac364: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1ac364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1ac368:
    // 0x1ac368: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1ac368u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1ac36c:
    // 0x1ac36c: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1ac36cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1ac370:
    // 0x1ac370: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1ac374:
    // 0x1ac374: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ac378:
    // 0x1ac378: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1ac378u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1ac37c:
    // 0x1ac37c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1ac37cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1ac380:
    // 0x1ac380: 0xc040880  jal         func_102200
label_1ac384:
    if (ctx->pc == 0x1AC384u) {
        ctx->pc = 0x1AC384u;
            // 0x1ac384: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC388u;
        goto label_1ac388;
    }
    ctx->pc = 0x1AC380u;
    SET_GPR_U32(ctx, 31, 0x1AC388u);
    ctx->pc = 0x1AC384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC380u;
            // 0x1ac384: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC388u; }
        if (ctx->pc != 0x1AC388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC388u; }
        if (ctx->pc != 0x1AC388u) { return; }
    }
    ctx->pc = 0x1AC388u;
label_1ac388:
    // 0x1ac388: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1ac388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1ac38c:
    // 0x1ac38c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1ac38cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1ac390:
    // 0x1ac390: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1ac390u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1ac394:
    // 0x1ac394: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ac394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1ac398:
    // 0x1ac398: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ac398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1ac39c:
    // 0x1ac39c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1ac39cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1ac3a0:
    // 0x1ac3a0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1ac3a0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1ac3a4:
    // 0x1ac3a4: 0xc040866  jal         func_102198
label_1ac3a8:
    if (ctx->pc == 0x1AC3A8u) {
        ctx->pc = 0x1AC3A8u;
            // 0x1ac3a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3ACu;
        goto label_1ac3ac;
    }
    ctx->pc = 0x1AC3A4u;
    SET_GPR_U32(ctx, 31, 0x1AC3ACu);
    ctx->pc = 0x1AC3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3A4u;
            // 0x1ac3a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3ACu; }
        if (ctx->pc != 0x1AC3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3ACu; }
        if (ctx->pc != 0x1AC3ACu) { return; }
    }
    ctx->pc = 0x1AC3ACu;
label_1ac3ac:
    // 0x1ac3ac: 0xc040a74  jal         func_1029D0
label_1ac3b0:
    if (ctx->pc == 0x1AC3B0u) {
        ctx->pc = 0x1AC3B0u;
            // 0x1ac3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3B4u;
        goto label_1ac3b4;
    }
    ctx->pc = 0x1AC3ACu;
    SET_GPR_U32(ctx, 31, 0x1AC3B4u);
    ctx->pc = 0x1AC3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3ACu;
            // 0x1ac3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3B4u; }
        if (ctx->pc != 0x1AC3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3B4u; }
        if (ctx->pc != 0x1AC3B4u) { return; }
    }
    ctx->pc = 0x1AC3B4u;
label_1ac3b4:
    // 0x1ac3b4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1ac3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac3b8:
    // 0x1ac3b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ac3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ac3bc:
    // 0x1ac3bc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1ac3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1ac3c0:
    // 0x1ac3c0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1ac3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1ac3c4:
    // 0x1ac3c4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1ac3c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
label_1ac3c8:
    // 0x1ac3c8: 0x142001b5  bnez        $at, . + 4 + (0x1B5 << 2)
label_1ac3cc:
    if (ctx->pc == 0x1AC3CCu) {
        ctx->pc = 0x1AC3D0u;
        goto label_1ac3d0;
    }
    ctx->pc = 0x1AC3C8u;
    {
        const bool branch_taken_0x1ac3c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3c8) {
            ctx->pc = 0x1ACAA0u;
            goto label_1acaa0;
        }
    }
    ctx->pc = 0x1AC3D0u;
label_1ac3d0:
    // 0x1ac3d0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ac3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac3d4:
    // 0x1ac3d4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1ac3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1ac3d8:
    // 0x1ac3d8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ac3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac3dc:
    // 0x1ac3dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ac3dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ac3e0:
    // 0x1ac3e0: 0xc05d080  jal         func_174200
label_1ac3e4:
    if (ctx->pc == 0x1AC3E4u) {
        ctx->pc = 0x1AC3E4u;
            // 0x1ac3e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AC3E8u;
        goto label_1ac3e8;
    }
    ctx->pc = 0x1AC3E0u;
    SET_GPR_U32(ctx, 31, 0x1AC3E8u);
    ctx->pc = 0x1AC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3E0u;
            // 0x1ac3e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3E8u; }
        if (ctx->pc != 0x1AC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC3E8u; }
        if (ctx->pc != 0x1AC3E8u) { return; }
    }
    ctx->pc = 0x1AC3E8u;
label_1ac3e8:
    // 0x1ac3e8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ac3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac3ec:
    // 0x1ac3ec: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1ac3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1ac3f0:
    // 0x1ac3f0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ac3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac3f4:
    // 0x1ac3f4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ac3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ac3f8:
    // 0x1ac3f8: 0xc05d080  jal         func_174200
label_1ac3fc:
    if (ctx->pc == 0x1AC3FCu) {
        ctx->pc = 0x1AC3FCu;
            // 0x1ac3fc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AC400u;
        goto label_1ac400;
    }
    ctx->pc = 0x1AC3F8u;
    SET_GPR_U32(ctx, 31, 0x1AC400u);
    ctx->pc = 0x1AC3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3F8u;
            // 0x1ac3fc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC400u; }
        if (ctx->pc != 0x1AC400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC400u; }
        if (ctx->pc != 0x1AC400u) { return; }
    }
    ctx->pc = 0x1AC400u;
label_1ac400:
    // 0x1ac400: 0xc050bb4  jal         func_142ED0
label_1ac404:
    if (ctx->pc == 0x1AC404u) {
        ctx->pc = 0x1AC408u;
        goto label_1ac408;
    }
    ctx->pc = 0x1AC400u;
    SET_GPR_U32(ctx, 31, 0x1AC408u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC408u; }
        if (ctx->pc != 0x1AC408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC408u; }
        if (ctx->pc != 0x1AC408u) { return; }
    }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac408u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ac40c:
    // 0x1ac40c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac410:
    if (ctx->pc == 0x1AC410u) {
        ctx->pc = 0x1AC414u;
        goto label_1ac414;
    }
    ctx->pc = 0x1AC40Cu;
    {
        const bool branch_taken_0x1ac40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac40c) {
            ctx->pc = 0x1AC430u;
            goto label_1ac430;
        }
    }
    ctx->pc = 0x1AC414u;
label_1ac414:
    // 0x1ac414: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ac414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac418:
    // 0x1ac418: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ac418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ac41c:
    // 0x1ac41c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ac41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac420:
    // 0x1ac420: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ac420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ac424:
    // 0x1ac424: 0xc05d080  jal         func_174200
label_1ac428:
    if (ctx->pc == 0x1AC428u) {
        ctx->pc = 0x1AC428u;
            // 0x1ac428: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AC42Cu;
        goto label_1ac42c;
    }
    ctx->pc = 0x1AC424u;
    SET_GPR_U32(ctx, 31, 0x1AC42Cu);
    ctx->pc = 0x1AC428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC424u;
            // 0x1ac428: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC42Cu; }
        if (ctx->pc != 0x1AC42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC42Cu; }
        if (ctx->pc != 0x1AC42Cu) { return; }
    }
    ctx->pc = 0x1AC42Cu;
label_1ac42c:
    // 0x1ac42c: 0x0  nop
    ctx->pc = 0x1ac42cu;
    // NOP
label_1ac430:
    // 0x1ac430: 0xc050bb4  jal         func_142ED0
label_1ac434:
    if (ctx->pc == 0x1AC434u) {
        ctx->pc = 0x1AC438u;
        goto label_1ac438;
    }
    ctx->pc = 0x1AC430u;
    SET_GPR_U32(ctx, 31, 0x1AC438u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC438u; }
        if (ctx->pc != 0x1AC438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC438u; }
        if (ctx->pc != 0x1AC438u) { return; }
    }
    ctx->pc = 0x1AC438u;
label_1ac438:
    // 0x1ac438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac438u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ac43c:
    // 0x1ac43c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac440:
    if (ctx->pc == 0x1AC440u) {
        ctx->pc = 0x1AC444u;
        goto label_1ac444;
    }
    ctx->pc = 0x1AC43Cu;
    {
        const bool branch_taken_0x1ac43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac43c) {
            ctx->pc = 0x1AC460u;
            goto label_1ac460;
        }
    }
    ctx->pc = 0x1AC444u;
label_1ac444:
    // 0x1ac444: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ac444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac448:
    // 0x1ac448: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac44c:
    // 0x1ac44c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ac44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac450:
    // 0x1ac450: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ac450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ac454:
    // 0x1ac454: 0xc05d080  jal         func_174200
label_1ac458:
    if (ctx->pc == 0x1AC458u) {
        ctx->pc = 0x1AC458u;
            // 0x1ac458: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AC45Cu;
        goto label_1ac45c;
    }
    ctx->pc = 0x1AC454u;
    SET_GPR_U32(ctx, 31, 0x1AC45Cu);
    ctx->pc = 0x1AC458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC454u;
            // 0x1ac458: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC45Cu; }
        if (ctx->pc != 0x1AC45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC45Cu; }
        if (ctx->pc != 0x1AC45Cu) { return; }
    }
    ctx->pc = 0x1AC45Cu;
label_1ac45c:
    // 0x1ac45c: 0x0  nop
    ctx->pc = 0x1ac45cu;
    // NOP
label_1ac460:
    // 0x1ac460: 0xc050bb4  jal         func_142ED0
label_1ac464:
    if (ctx->pc == 0x1AC464u) {
        ctx->pc = 0x1AC468u;
        goto label_1ac468;
    }
    ctx->pc = 0x1AC460u;
    SET_GPR_U32(ctx, 31, 0x1AC468u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC468u; }
        if (ctx->pc != 0x1AC468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC468u; }
        if (ctx->pc != 0x1AC468u) { return; }
    }
    ctx->pc = 0x1AC468u;
label_1ac468:
    // 0x1ac468: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac468u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1ac46c:
    // 0x1ac46c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac470:
    if (ctx->pc == 0x1AC470u) {
        ctx->pc = 0x1AC474u;
        goto label_1ac474;
    }
    ctx->pc = 0x1AC46Cu;
    {
        const bool branch_taken_0x1ac46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac46c) {
            ctx->pc = 0x1AC490u;
            goto label_1ac490;
        }
    }
    ctx->pc = 0x1AC474u;
label_1ac474:
    // 0x1ac474: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ac474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac478:
    // 0x1ac478: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1ac478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ac47c:
    // 0x1ac47c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ac47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac480:
    // 0x1ac480: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ac480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ac484:
    // 0x1ac484: 0xc05d080  jal         func_174200
label_1ac488:
    if (ctx->pc == 0x1AC488u) {
        ctx->pc = 0x1AC488u;
            // 0x1ac488: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AC48Cu;
        goto label_1ac48c;
    }
    ctx->pc = 0x1AC484u;
    SET_GPR_U32(ctx, 31, 0x1AC48Cu);
    ctx->pc = 0x1AC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC484u;
            // 0x1ac488: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC48Cu; }
        if (ctx->pc != 0x1AC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC48Cu; }
        if (ctx->pc != 0x1AC48Cu) { return; }
    }
    ctx->pc = 0x1AC48Cu;
label_1ac48c:
    // 0x1ac48c: 0x0  nop
    ctx->pc = 0x1ac48cu;
    // NOP
label_1ac490:
    // 0x1ac490: 0xc050bb4  jal         func_142ED0
label_1ac494:
    if (ctx->pc == 0x1AC494u) {
        ctx->pc = 0x1AC498u;
        goto label_1ac498;
    }
    ctx->pc = 0x1AC490u;
    SET_GPR_U32(ctx, 31, 0x1AC498u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC498u; }
        if (ctx->pc != 0x1AC498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC498u; }
        if (ctx->pc != 0x1AC498u) { return; }
    }
    ctx->pc = 0x1AC498u;
label_1ac498:
    // 0x1ac498: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac49c:
    // 0x1ac49c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac4a0:
    // 0x1ac4a0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac4a0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac4a4:
    // 0x1ac4a4: 0x0  nop
    ctx->pc = 0x1ac4a4u;
    // NOP
label_1ac4a8:
    // 0x1ac4a8: 0x0  nop
    ctx->pc = 0x1ac4a8u;
    // NOP
label_1ac4ac:
    // 0x1ac4ac: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac4acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac4b0:
    // 0x1ac4b0: 0xc050bb4  jal         func_142ED0
label_1ac4b4:
    if (ctx->pc == 0x1AC4B4u) {
        ctx->pc = 0x1AC4B4u;
            // 0x1ac4b4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC4B8u;
        goto label_1ac4b8;
    }
    ctx->pc = 0x1AC4B0u;
    SET_GPR_U32(ctx, 31, 0x1AC4B8u);
    ctx->pc = 0x1AC4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4B0u;
            // 0x1ac4b4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4B8u; }
        if (ctx->pc != 0x1AC4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4B8u; }
        if (ctx->pc != 0x1AC4B8u) { return; }
    }
    ctx->pc = 0x1AC4B8u;
label_1ac4b8:
    // 0x1ac4b8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac4bc:
    // 0x1ac4bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac4c0:
    // 0x1ac4c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac4c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac4c4:
    // 0x1ac4c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac4c8:
    // 0x1ac4c8: 0x0  nop
    ctx->pc = 0x1ac4c8u;
    // NOP
label_1ac4cc:
    // 0x1ac4cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac4ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac4d0:
    // 0x1ac4d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ac4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac4d4:
    // 0x1ac4d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ac4d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ac4d8:
    // 0x1ac4d8: 0xc053740  jal         func_14DD00
label_1ac4dc:
    if (ctx->pc == 0x1AC4DCu) {
        ctx->pc = 0x1AC4DCu;
            // 0x1ac4dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AC4E0u;
        goto label_1ac4e0;
    }
    ctx->pc = 0x1AC4D8u;
    SET_GPR_U32(ctx, 31, 0x1AC4E0u);
    ctx->pc = 0x1AC4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC4D8u;
            // 0x1ac4dc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4E0u; }
        if (ctx->pc != 0x1AC4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4E0u; }
        if (ctx->pc != 0x1AC4E0u) { return; }
    }
    ctx->pc = 0x1AC4E0u;
label_1ac4e0:
    // 0x1ac4e0: 0xc050bb4  jal         func_142ED0
label_1ac4e4:
    if (ctx->pc == 0x1AC4E4u) {
        ctx->pc = 0x1AC4E8u;
        goto label_1ac4e8;
    }
    ctx->pc = 0x1AC4E0u;
    SET_GPR_U32(ctx, 31, 0x1AC4E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4E8u; }
        if (ctx->pc != 0x1AC4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC4E8u; }
        if (ctx->pc != 0x1AC4E8u) { return; }
    }
    ctx->pc = 0x1AC4E8u;
label_1ac4e8:
    // 0x1ac4e8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac4ec:
    // 0x1ac4ec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac4f0:
    // 0x1ac4f0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac4f0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac4f4:
    // 0x1ac4f4: 0x0  nop
    ctx->pc = 0x1ac4f4u;
    // NOP
label_1ac4f8:
    // 0x1ac4f8: 0x0  nop
    ctx->pc = 0x1ac4f8u;
    // NOP
label_1ac4fc:
    // 0x1ac4fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac4fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac500:
    // 0x1ac500: 0xc050bb4  jal         func_142ED0
label_1ac504:
    if (ctx->pc == 0x1AC504u) {
        ctx->pc = 0x1AC504u;
            // 0x1ac504: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC508u;
        goto label_1ac508;
    }
    ctx->pc = 0x1AC500u;
    SET_GPR_U32(ctx, 31, 0x1AC508u);
    ctx->pc = 0x1AC504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC500u;
            // 0x1ac504: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC508u; }
        if (ctx->pc != 0x1AC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC508u; }
        if (ctx->pc != 0x1AC508u) { return; }
    }
    ctx->pc = 0x1AC508u;
label_1ac508:
    // 0x1ac508: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac50c:
    // 0x1ac50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac510:
    // 0x1ac510: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac510u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac514:
    // 0x1ac514: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ac514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac518:
    // 0x1ac518: 0x0  nop
    ctx->pc = 0x1ac518u;
    // NOP
label_1ac51c:
    // 0x1ac51c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac51cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac520:
    // 0x1ac520: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ac520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac524:
    // 0x1ac524: 0x1810  mfhi        $v1
    ctx->pc = 0x1ac524u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ac528:
    // 0x1ac528: 0xc053740  jal         func_14DD00
label_1ac52c:
    if (ctx->pc == 0x1AC52Cu) {
        ctx->pc = 0x1AC52Cu;
            // 0x1ac52c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AC530u;
        goto label_1ac530;
    }
    ctx->pc = 0x1AC528u;
    SET_GPR_U32(ctx, 31, 0x1AC530u);
    ctx->pc = 0x1AC52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC528u;
            // 0x1ac52c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC530u; }
        if (ctx->pc != 0x1AC530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC530u; }
        if (ctx->pc != 0x1AC530u) { return; }
    }
    ctx->pc = 0x1AC530u;
label_1ac530:
    // 0x1ac530: 0xc050bb4  jal         func_142ED0
label_1ac534:
    if (ctx->pc == 0x1AC534u) {
        ctx->pc = 0x1AC538u;
        goto label_1ac538;
    }
    ctx->pc = 0x1AC530u;
    SET_GPR_U32(ctx, 31, 0x1AC538u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC538u; }
        if (ctx->pc != 0x1AC538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC538u; }
        if (ctx->pc != 0x1AC538u) { return; }
    }
    ctx->pc = 0x1AC538u;
label_1ac538:
    // 0x1ac538: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac53c:
    // 0x1ac53c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac540:
    // 0x1ac540: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac540u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac544:
    // 0x1ac544: 0x0  nop
    ctx->pc = 0x1ac544u;
    // NOP
label_1ac548:
    // 0x1ac548: 0x0  nop
    ctx->pc = 0x1ac548u;
    // NOP
label_1ac54c:
    // 0x1ac54c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac54cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac550:
    // 0x1ac550: 0xc050bb4  jal         func_142ED0
label_1ac554:
    if (ctx->pc == 0x1AC554u) {
        ctx->pc = 0x1AC554u;
            // 0x1ac554: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC558u;
        goto label_1ac558;
    }
    ctx->pc = 0x1AC550u;
    SET_GPR_U32(ctx, 31, 0x1AC558u);
    ctx->pc = 0x1AC554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC550u;
            // 0x1ac554: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC558u; }
        if (ctx->pc != 0x1AC558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC558u; }
        if (ctx->pc != 0x1AC558u) { return; }
    }
    ctx->pc = 0x1AC558u;
label_1ac558:
    // 0x1ac558: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac55c:
    // 0x1ac55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac560:
    // 0x1ac560: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac560u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac564:
    // 0x1ac564: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ac564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ac568:
    // 0x1ac568: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac56c:
    // 0x1ac56c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac570:
    // 0x1ac570: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac570u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac574:
    // 0x1ac574: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac574u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac578:
    // 0x1ac578: 0xc053740  jal         func_14DD00
label_1ac57c:
    if (ctx->pc == 0x1AC57Cu) {
        ctx->pc = 0x1AC57Cu;
            // 0x1ac57c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC580u;
        goto label_1ac580;
    }
    ctx->pc = 0x1AC578u;
    SET_GPR_U32(ctx, 31, 0x1AC580u);
    ctx->pc = 0x1AC57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC578u;
            // 0x1ac57c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC580u; }
        if (ctx->pc != 0x1AC580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC580u; }
        if (ctx->pc != 0x1AC580u) { return; }
    }
    ctx->pc = 0x1AC580u;
label_1ac580:
    // 0x1ac580: 0xc050bb4  jal         func_142ED0
label_1ac584:
    if (ctx->pc == 0x1AC584u) {
        ctx->pc = 0x1AC588u;
        goto label_1ac588;
    }
    ctx->pc = 0x1AC580u;
    SET_GPR_U32(ctx, 31, 0x1AC588u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC588u; }
        if (ctx->pc != 0x1AC588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC588u; }
        if (ctx->pc != 0x1AC588u) { return; }
    }
    ctx->pc = 0x1AC588u;
label_1ac588:
    // 0x1ac588: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac58c:
    // 0x1ac58c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac590:
    // 0x1ac590: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac590u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac594:
    // 0x1ac594: 0x0  nop
    ctx->pc = 0x1ac594u;
    // NOP
label_1ac598:
    // 0x1ac598: 0x0  nop
    ctx->pc = 0x1ac598u;
    // NOP
label_1ac59c:
    // 0x1ac59c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac59cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac5a0:
    // 0x1ac5a0: 0xc050bb4  jal         func_142ED0
label_1ac5a4:
    if (ctx->pc == 0x1AC5A4u) {
        ctx->pc = 0x1AC5A4u;
            // 0x1ac5a4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC5A8u;
        goto label_1ac5a8;
    }
    ctx->pc = 0x1AC5A0u;
    SET_GPR_U32(ctx, 31, 0x1AC5A8u);
    ctx->pc = 0x1AC5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5A0u;
            // 0x1ac5a4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5A8u; }
        if (ctx->pc != 0x1AC5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5A8u; }
        if (ctx->pc != 0x1AC5A8u) { return; }
    }
    ctx->pc = 0x1AC5A8u;
label_1ac5a8:
    // 0x1ac5a8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac5ac:
    // 0x1ac5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac5b0:
    // 0x1ac5b0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac5b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac5b4:
    // 0x1ac5b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ac5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ac5b8:
    // 0x1ac5b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac5bc:
    // 0x1ac5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac5c0:
    // 0x1ac5c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac5c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac5c4:
    // 0x1ac5c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac5c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac5c8:
    // 0x1ac5c8: 0xc053740  jal         func_14DD00
label_1ac5cc:
    if (ctx->pc == 0x1AC5CCu) {
        ctx->pc = 0x1AC5CCu;
            // 0x1ac5cc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC5D0u;
        goto label_1ac5d0;
    }
    ctx->pc = 0x1AC5C8u;
    SET_GPR_U32(ctx, 31, 0x1AC5D0u);
    ctx->pc = 0x1AC5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5C8u;
            // 0x1ac5cc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5D0u; }
        if (ctx->pc != 0x1AC5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5D0u; }
        if (ctx->pc != 0x1AC5D0u) { return; }
    }
    ctx->pc = 0x1AC5D0u;
label_1ac5d0:
    // 0x1ac5d0: 0xc050bb4  jal         func_142ED0
label_1ac5d4:
    if (ctx->pc == 0x1AC5D4u) {
        ctx->pc = 0x1AC5D8u;
        goto label_1ac5d8;
    }
    ctx->pc = 0x1AC5D0u;
    SET_GPR_U32(ctx, 31, 0x1AC5D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5D8u; }
        if (ctx->pc != 0x1AC5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5D8u; }
        if (ctx->pc != 0x1AC5D8u) { return; }
    }
    ctx->pc = 0x1AC5D8u;
label_1ac5d8:
    // 0x1ac5d8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac5dc:
    // 0x1ac5dc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac5e0:
    // 0x1ac5e0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac5e0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac5e4:
    // 0x1ac5e4: 0x0  nop
    ctx->pc = 0x1ac5e4u;
    // NOP
label_1ac5e8:
    // 0x1ac5e8: 0x0  nop
    ctx->pc = 0x1ac5e8u;
    // NOP
label_1ac5ec:
    // 0x1ac5ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac5ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac5f0:
    // 0x1ac5f0: 0xc050bb4  jal         func_142ED0
label_1ac5f4:
    if (ctx->pc == 0x1AC5F4u) {
        ctx->pc = 0x1AC5F4u;
            // 0x1ac5f4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC5F8u;
        goto label_1ac5f8;
    }
    ctx->pc = 0x1AC5F0u;
    SET_GPR_U32(ctx, 31, 0x1AC5F8u);
    ctx->pc = 0x1AC5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC5F0u;
            // 0x1ac5f4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5F8u; }
        if (ctx->pc != 0x1AC5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC5F8u; }
        if (ctx->pc != 0x1AC5F8u) { return; }
    }
    ctx->pc = 0x1AC5F8u;
label_1ac5f8:
    // 0x1ac5f8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac5fc:
    // 0x1ac5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac600:
    // 0x1ac600: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac600u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac604:
    // 0x1ac604: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ac604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ac608:
    // 0x1ac608: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac60c:
    // 0x1ac60c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac610:
    // 0x1ac610: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac610u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac614:
    // 0x1ac614: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac614u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac618:
    // 0x1ac618: 0xc053740  jal         func_14DD00
label_1ac61c:
    if (ctx->pc == 0x1AC61Cu) {
        ctx->pc = 0x1AC61Cu;
            // 0x1ac61c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC620u;
        goto label_1ac620;
    }
    ctx->pc = 0x1AC618u;
    SET_GPR_U32(ctx, 31, 0x1AC620u);
    ctx->pc = 0x1AC61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC618u;
            // 0x1ac61c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC620u; }
        if (ctx->pc != 0x1AC620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC620u; }
        if (ctx->pc != 0x1AC620u) { return; }
    }
    ctx->pc = 0x1AC620u;
label_1ac620:
    // 0x1ac620: 0xc050bb4  jal         func_142ED0
label_1ac624:
    if (ctx->pc == 0x1AC624u) {
        ctx->pc = 0x1AC628u;
        goto label_1ac628;
    }
    ctx->pc = 0x1AC620u;
    SET_GPR_U32(ctx, 31, 0x1AC628u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC628u; }
        if (ctx->pc != 0x1AC628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC628u; }
        if (ctx->pc != 0x1AC628u) { return; }
    }
    ctx->pc = 0x1AC628u;
label_1ac628:
    // 0x1ac628: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac62c:
    // 0x1ac62c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac630:
    // 0x1ac630: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac630u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac634:
    // 0x1ac634: 0x0  nop
    ctx->pc = 0x1ac634u;
    // NOP
label_1ac638:
    // 0x1ac638: 0x0  nop
    ctx->pc = 0x1ac638u;
    // NOP
label_1ac63c:
    // 0x1ac63c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac63cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac640:
    // 0x1ac640: 0xc050bb4  jal         func_142ED0
label_1ac644:
    if (ctx->pc == 0x1AC644u) {
        ctx->pc = 0x1AC644u;
            // 0x1ac644: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC648u;
        goto label_1ac648;
    }
    ctx->pc = 0x1AC640u;
    SET_GPR_U32(ctx, 31, 0x1AC648u);
    ctx->pc = 0x1AC644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC640u;
            // 0x1ac644: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC648u; }
        if (ctx->pc != 0x1AC648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC648u; }
        if (ctx->pc != 0x1AC648u) { return; }
    }
    ctx->pc = 0x1AC648u;
label_1ac648:
    // 0x1ac648: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac64c:
    // 0x1ac64c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ac64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac650:
    // 0x1ac650: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac650u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac654:
    // 0x1ac654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac658:
    // 0x1ac658: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1ac658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1ac65c:
    // 0x1ac65c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ac65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1ac660:
    // 0x1ac660: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ac664:
    // 0x1ac664: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ac664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac668:
    // 0x1ac668: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac668u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac66c:
    // 0x1ac66c: 0xc053740  jal         func_14DD00
label_1ac670:
    if (ctx->pc == 0x1AC670u) {
        ctx->pc = 0x1AC670u;
            // 0x1ac670: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC674u;
        goto label_1ac674;
    }
    ctx->pc = 0x1AC66Cu;
    SET_GPR_U32(ctx, 31, 0x1AC674u);
    ctx->pc = 0x1AC670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC66Cu;
            // 0x1ac670: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC674u; }
        if (ctx->pc != 0x1AC674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC674u; }
        if (ctx->pc != 0x1AC674u) { return; }
    }
    ctx->pc = 0x1AC674u;
label_1ac674:
    // 0x1ac674: 0xc050bb4  jal         func_142ED0
label_1ac678:
    if (ctx->pc == 0x1AC678u) {
        ctx->pc = 0x1AC67Cu;
        goto label_1ac67c;
    }
    ctx->pc = 0x1AC674u;
    SET_GPR_U32(ctx, 31, 0x1AC67Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC67Cu; }
        if (ctx->pc != 0x1AC67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC67Cu; }
        if (ctx->pc != 0x1AC67Cu) { return; }
    }
    ctx->pc = 0x1AC67Cu;
label_1ac67c:
    // 0x1ac67c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac680:
    // 0x1ac680: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac684:
    // 0x1ac684: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac684u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac688:
    // 0x1ac688: 0x0  nop
    ctx->pc = 0x1ac688u;
    // NOP
label_1ac68c:
    // 0x1ac68c: 0x0  nop
    ctx->pc = 0x1ac68cu;
    // NOP
label_1ac690:
    // 0x1ac690: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac690u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac694:
    // 0x1ac694: 0xc050bb4  jal         func_142ED0
label_1ac698:
    if (ctx->pc == 0x1AC698u) {
        ctx->pc = 0x1AC698u;
            // 0x1ac698: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC69Cu;
        goto label_1ac69c;
    }
    ctx->pc = 0x1AC694u;
    SET_GPR_U32(ctx, 31, 0x1AC69Cu);
    ctx->pc = 0x1AC698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC694u;
            // 0x1ac698: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC69Cu; }
        if (ctx->pc != 0x1AC69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC69Cu; }
        if (ctx->pc != 0x1AC69Cu) { return; }
    }
    ctx->pc = 0x1AC69Cu;
label_1ac69c:
    // 0x1ac69c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac6a0:
    // 0x1ac6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6a4:
    // 0x1ac6a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac6a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac6a8:
    // 0x1ac6a8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1ac6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1ac6ac:
    // 0x1ac6ac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac6b0:
    // 0x1ac6b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac6b4:
    // 0x1ac6b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac6b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac6b8:
    // 0x1ac6b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac6b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac6bc:
    // 0x1ac6bc: 0xc053740  jal         func_14DD00
label_1ac6c0:
    if (ctx->pc == 0x1AC6C0u) {
        ctx->pc = 0x1AC6C0u;
            // 0x1ac6c0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC6C4u;
        goto label_1ac6c4;
    }
    ctx->pc = 0x1AC6BCu;
    SET_GPR_U32(ctx, 31, 0x1AC6C4u);
    ctx->pc = 0x1AC6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6BCu;
            // 0x1ac6c0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6C4u; }
        if (ctx->pc != 0x1AC6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6C4u; }
        if (ctx->pc != 0x1AC6C4u) { return; }
    }
    ctx->pc = 0x1AC6C4u;
label_1ac6c4:
    // 0x1ac6c4: 0xc050bb4  jal         func_142ED0
label_1ac6c8:
    if (ctx->pc == 0x1AC6C8u) {
        ctx->pc = 0x1AC6CCu;
        goto label_1ac6cc;
    }
    ctx->pc = 0x1AC6C4u;
    SET_GPR_U32(ctx, 31, 0x1AC6CCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6CCu; }
        if (ctx->pc != 0x1AC6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6CCu; }
        if (ctx->pc != 0x1AC6CCu) { return; }
    }
    ctx->pc = 0x1AC6CCu;
label_1ac6cc:
    // 0x1ac6cc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac6d0:
    // 0x1ac6d0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac6d4:
    // 0x1ac6d4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac6d4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac6d8:
    // 0x1ac6d8: 0x0  nop
    ctx->pc = 0x1ac6d8u;
    // NOP
label_1ac6dc:
    // 0x1ac6dc: 0x0  nop
    ctx->pc = 0x1ac6dcu;
    // NOP
label_1ac6e0:
    // 0x1ac6e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac6e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac6e4:
    // 0x1ac6e4: 0xc050bb4  jal         func_142ED0
label_1ac6e8:
    if (ctx->pc == 0x1AC6E8u) {
        ctx->pc = 0x1AC6E8u;
            // 0x1ac6e8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC6ECu;
        goto label_1ac6ec;
    }
    ctx->pc = 0x1AC6E4u;
    SET_GPR_U32(ctx, 31, 0x1AC6ECu);
    ctx->pc = 0x1AC6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC6E4u;
            // 0x1ac6e8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6ECu; }
        if (ctx->pc != 0x1AC6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC6ECu; }
        if (ctx->pc != 0x1AC6ECu) { return; }
    }
    ctx->pc = 0x1AC6ECu;
label_1ac6ec:
    // 0x1ac6ec: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac6f0:
    // 0x1ac6f0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ac6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac6f4:
    // 0x1ac6f4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac6f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac6f8:
    // 0x1ac6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6fc:
    // 0x1ac6fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ac6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ac700:
    // 0x1ac700: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_1ac704:
    // 0x1ac704: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ac708:
    // 0x1ac708: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ac708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac70c:
    // 0x1ac70c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac70cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac710:
    // 0x1ac710: 0xc053740  jal         func_14DD00
label_1ac714:
    if (ctx->pc == 0x1AC714u) {
        ctx->pc = 0x1AC714u;
            // 0x1ac714: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC718u;
        goto label_1ac718;
    }
    ctx->pc = 0x1AC710u;
    SET_GPR_U32(ctx, 31, 0x1AC718u);
    ctx->pc = 0x1AC714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC710u;
            // 0x1ac714: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC718u; }
        if (ctx->pc != 0x1AC718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC718u; }
        if (ctx->pc != 0x1AC718u) { return; }
    }
    ctx->pc = 0x1AC718u;
label_1ac718:
    // 0x1ac718: 0xc050bb4  jal         func_142ED0
label_1ac71c:
    if (ctx->pc == 0x1AC71Cu) {
        ctx->pc = 0x1AC720u;
        goto label_1ac720;
    }
    ctx->pc = 0x1AC718u;
    SET_GPR_U32(ctx, 31, 0x1AC720u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC720u; }
        if (ctx->pc != 0x1AC720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC720u; }
        if (ctx->pc != 0x1AC720u) { return; }
    }
    ctx->pc = 0x1AC720u;
label_1ac720:
    // 0x1ac720: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac724:
    // 0x1ac724: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac728:
    // 0x1ac728: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac728u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac72c:
    // 0x1ac72c: 0x0  nop
    ctx->pc = 0x1ac72cu;
    // NOP
label_1ac730:
    // 0x1ac730: 0x0  nop
    ctx->pc = 0x1ac730u;
    // NOP
label_1ac734:
    // 0x1ac734: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac734u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac738:
    // 0x1ac738: 0xc050bb4  jal         func_142ED0
label_1ac73c:
    if (ctx->pc == 0x1AC73Cu) {
        ctx->pc = 0x1AC73Cu;
            // 0x1ac73c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC740u;
        goto label_1ac740;
    }
    ctx->pc = 0x1AC738u;
    SET_GPR_U32(ctx, 31, 0x1AC740u);
    ctx->pc = 0x1AC73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC738u;
            // 0x1ac73c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC740u; }
        if (ctx->pc != 0x1AC740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC740u; }
        if (ctx->pc != 0x1AC740u) { return; }
    }
    ctx->pc = 0x1AC740u;
label_1ac740:
    // 0x1ac740: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac744:
    // 0x1ac744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac748:
    // 0x1ac748: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac748u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac74c:
    // 0x1ac74c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1ac74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1ac750:
    // 0x1ac750: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac754:
    // 0x1ac754: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac758:
    // 0x1ac758: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac758u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac75c:
    // 0x1ac75c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac75cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac760:
    // 0x1ac760: 0xc053740  jal         func_14DD00
label_1ac764:
    if (ctx->pc == 0x1AC764u) {
        ctx->pc = 0x1AC764u;
            // 0x1ac764: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC768u;
        goto label_1ac768;
    }
    ctx->pc = 0x1AC760u;
    SET_GPR_U32(ctx, 31, 0x1AC768u);
    ctx->pc = 0x1AC764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC760u;
            // 0x1ac764: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC768u; }
        if (ctx->pc != 0x1AC768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC768u; }
        if (ctx->pc != 0x1AC768u) { return; }
    }
    ctx->pc = 0x1AC768u;
label_1ac768:
    // 0x1ac768: 0xc050bb4  jal         func_142ED0
label_1ac76c:
    if (ctx->pc == 0x1AC76Cu) {
        ctx->pc = 0x1AC770u;
        goto label_1ac770;
    }
    ctx->pc = 0x1AC768u;
    SET_GPR_U32(ctx, 31, 0x1AC770u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC770u; }
        if (ctx->pc != 0x1AC770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC770u; }
        if (ctx->pc != 0x1AC770u) { return; }
    }
    ctx->pc = 0x1AC770u;
label_1ac770:
    // 0x1ac770: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac774:
    // 0x1ac774: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac778:
    // 0x1ac778: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac778u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac77c:
    // 0x1ac77c: 0x0  nop
    ctx->pc = 0x1ac77cu;
    // NOP
label_1ac780:
    // 0x1ac780: 0x0  nop
    ctx->pc = 0x1ac780u;
    // NOP
label_1ac784:
    // 0x1ac784: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac784u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac788:
    // 0x1ac788: 0xc050bb4  jal         func_142ED0
label_1ac78c:
    if (ctx->pc == 0x1AC78Cu) {
        ctx->pc = 0x1AC78Cu;
            // 0x1ac78c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC790u;
        goto label_1ac790;
    }
    ctx->pc = 0x1AC788u;
    SET_GPR_U32(ctx, 31, 0x1AC790u);
    ctx->pc = 0x1AC78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC788u;
            // 0x1ac78c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC790u; }
        if (ctx->pc != 0x1AC790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC790u; }
        if (ctx->pc != 0x1AC790u) { return; }
    }
    ctx->pc = 0x1AC790u;
label_1ac790:
    // 0x1ac790: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac794:
    // 0x1ac794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac798:
    // 0x1ac798: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac798u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac79c:
    // 0x1ac79c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1ac79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1ac7a0:
    // 0x1ac7a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac7a4:
    // 0x1ac7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac7a8:
    // 0x1ac7a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac7a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac7ac:
    // 0x1ac7ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac7acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac7b0:
    // 0x1ac7b0: 0xc053740  jal         func_14DD00
label_1ac7b4:
    if (ctx->pc == 0x1AC7B4u) {
        ctx->pc = 0x1AC7B4u;
            // 0x1ac7b4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC7B8u;
        goto label_1ac7b8;
    }
    ctx->pc = 0x1AC7B0u;
    SET_GPR_U32(ctx, 31, 0x1AC7B8u);
    ctx->pc = 0x1AC7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7B0u;
            // 0x1ac7b4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7B8u; }
        if (ctx->pc != 0x1AC7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7B8u; }
        if (ctx->pc != 0x1AC7B8u) { return; }
    }
    ctx->pc = 0x1AC7B8u;
label_1ac7b8:
    // 0x1ac7b8: 0xc050bb4  jal         func_142ED0
label_1ac7bc:
    if (ctx->pc == 0x1AC7BCu) {
        ctx->pc = 0x1AC7C0u;
        goto label_1ac7c0;
    }
    ctx->pc = 0x1AC7B8u;
    SET_GPR_U32(ctx, 31, 0x1AC7C0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7C0u; }
        if (ctx->pc != 0x1AC7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7C0u; }
        if (ctx->pc != 0x1AC7C0u) { return; }
    }
    ctx->pc = 0x1AC7C0u;
label_1ac7c0:
    // 0x1ac7c0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac7c4:
    // 0x1ac7c4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac7c8:
    // 0x1ac7c8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac7c8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac7cc:
    // 0x1ac7cc: 0x0  nop
    ctx->pc = 0x1ac7ccu;
    // NOP
label_1ac7d0:
    // 0x1ac7d0: 0x0  nop
    ctx->pc = 0x1ac7d0u;
    // NOP
label_1ac7d4:
    // 0x1ac7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac7d8:
    // 0x1ac7d8: 0xc050bb4  jal         func_142ED0
label_1ac7dc:
    if (ctx->pc == 0x1AC7DCu) {
        ctx->pc = 0x1AC7DCu;
            // 0x1ac7dc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC7E0u;
        goto label_1ac7e0;
    }
    ctx->pc = 0x1AC7D8u;
    SET_GPR_U32(ctx, 31, 0x1AC7E0u);
    ctx->pc = 0x1AC7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC7D8u;
            // 0x1ac7dc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7E0u; }
        if (ctx->pc != 0x1AC7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC7E0u; }
        if (ctx->pc != 0x1AC7E0u) { return; }
    }
    ctx->pc = 0x1AC7E0u;
label_1ac7e0:
    // 0x1ac7e0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac7e4:
    // 0x1ac7e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac7e8:
    // 0x1ac7e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac7e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac7ec:
    // 0x1ac7ec: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ac7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1ac7f0:
    // 0x1ac7f0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac7f4:
    // 0x1ac7f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac7f8:
    // 0x1ac7f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac7f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac7fc:
    // 0x1ac7fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac7fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac800:
    // 0x1ac800: 0xc053740  jal         func_14DD00
label_1ac804:
    if (ctx->pc == 0x1AC804u) {
        ctx->pc = 0x1AC804u;
            // 0x1ac804: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC808u;
        goto label_1ac808;
    }
    ctx->pc = 0x1AC800u;
    SET_GPR_U32(ctx, 31, 0x1AC808u);
    ctx->pc = 0x1AC804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC800u;
            // 0x1ac804: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC808u; }
        if (ctx->pc != 0x1AC808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC808u; }
        if (ctx->pc != 0x1AC808u) { return; }
    }
    ctx->pc = 0x1AC808u;
label_1ac808:
    // 0x1ac808: 0xc050bb4  jal         func_142ED0
label_1ac80c:
    if (ctx->pc == 0x1AC80Cu) {
        ctx->pc = 0x1AC810u;
        goto label_1ac810;
    }
    ctx->pc = 0x1AC808u;
    SET_GPR_U32(ctx, 31, 0x1AC810u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC810u; }
        if (ctx->pc != 0x1AC810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC810u; }
        if (ctx->pc != 0x1AC810u) { return; }
    }
    ctx->pc = 0x1AC810u;
label_1ac810:
    // 0x1ac810: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac814:
    // 0x1ac814: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac818:
    // 0x1ac818: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac818u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac81c:
    // 0x1ac81c: 0x0  nop
    ctx->pc = 0x1ac81cu;
    // NOP
label_1ac820:
    // 0x1ac820: 0x0  nop
    ctx->pc = 0x1ac820u;
    // NOP
label_1ac824:
    // 0x1ac824: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac824u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac828:
    // 0x1ac828: 0xc050bb4  jal         func_142ED0
label_1ac82c:
    if (ctx->pc == 0x1AC82Cu) {
        ctx->pc = 0x1AC82Cu;
            // 0x1ac82c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC830u;
        goto label_1ac830;
    }
    ctx->pc = 0x1AC828u;
    SET_GPR_U32(ctx, 31, 0x1AC830u);
    ctx->pc = 0x1AC82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC828u;
            // 0x1ac82c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC830u; }
        if (ctx->pc != 0x1AC830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC830u; }
        if (ctx->pc != 0x1AC830u) { return; }
    }
    ctx->pc = 0x1AC830u;
label_1ac830:
    // 0x1ac830: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac834:
    // 0x1ac834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac838:
    // 0x1ac838: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac838u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac83c:
    // 0x1ac83c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ac83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1ac840:
    // 0x1ac840: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac844:
    // 0x1ac844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac848:
    // 0x1ac848: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac848u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac84c:
    // 0x1ac84c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac84cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac850:
    // 0x1ac850: 0xc053740  jal         func_14DD00
label_1ac854:
    if (ctx->pc == 0x1AC854u) {
        ctx->pc = 0x1AC854u;
            // 0x1ac854: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC858u;
        goto label_1ac858;
    }
    ctx->pc = 0x1AC850u;
    SET_GPR_U32(ctx, 31, 0x1AC858u);
    ctx->pc = 0x1AC854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC850u;
            // 0x1ac854: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC858u; }
        if (ctx->pc != 0x1AC858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC858u; }
        if (ctx->pc != 0x1AC858u) { return; }
    }
    ctx->pc = 0x1AC858u;
label_1ac858:
    // 0x1ac858: 0xc050bb4  jal         func_142ED0
label_1ac85c:
    if (ctx->pc == 0x1AC85Cu) {
        ctx->pc = 0x1AC860u;
        goto label_1ac860;
    }
    ctx->pc = 0x1AC858u;
    SET_GPR_U32(ctx, 31, 0x1AC860u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC860u; }
        if (ctx->pc != 0x1AC860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC860u; }
        if (ctx->pc != 0x1AC860u) { return; }
    }
    ctx->pc = 0x1AC860u;
label_1ac860:
    // 0x1ac860: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac864:
    // 0x1ac864: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac868:
    // 0x1ac868: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac868u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac86c:
    // 0x1ac86c: 0x0  nop
    ctx->pc = 0x1ac86cu;
    // NOP
label_1ac870:
    // 0x1ac870: 0x0  nop
    ctx->pc = 0x1ac870u;
    // NOP
label_1ac874:
    // 0x1ac874: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac874u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac878:
    // 0x1ac878: 0xc050bb4  jal         func_142ED0
label_1ac87c:
    if (ctx->pc == 0x1AC87Cu) {
        ctx->pc = 0x1AC87Cu;
            // 0x1ac87c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC880u;
        goto label_1ac880;
    }
    ctx->pc = 0x1AC878u;
    SET_GPR_U32(ctx, 31, 0x1AC880u);
    ctx->pc = 0x1AC87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC878u;
            // 0x1ac87c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC880u; }
        if (ctx->pc != 0x1AC880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC880u; }
        if (ctx->pc != 0x1AC880u) { return; }
    }
    ctx->pc = 0x1AC880u;
label_1ac880:
    // 0x1ac880: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac884:
    // 0x1ac884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac888:
    // 0x1ac888: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac888u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac88c:
    // 0x1ac88c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ac88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1ac890:
    // 0x1ac890: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac894:
    // 0x1ac894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac898:
    // 0x1ac898: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac898u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac89c:
    // 0x1ac89c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac89cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac8a0:
    // 0x1ac8a0: 0xc053740  jal         func_14DD00
label_1ac8a4:
    if (ctx->pc == 0x1AC8A4u) {
        ctx->pc = 0x1AC8A4u;
            // 0x1ac8a4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC8A8u;
        goto label_1ac8a8;
    }
    ctx->pc = 0x1AC8A0u;
    SET_GPR_U32(ctx, 31, 0x1AC8A8u);
    ctx->pc = 0x1AC8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8A0u;
            // 0x1ac8a4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8A8u; }
        if (ctx->pc != 0x1AC8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8A8u; }
        if (ctx->pc != 0x1AC8A8u) { return; }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0xc050bb4  jal         func_142ED0
label_1ac8ac:
    if (ctx->pc == 0x1AC8ACu) {
        ctx->pc = 0x1AC8B0u;
        goto label_1ac8b0;
    }
    ctx->pc = 0x1AC8A8u;
    SET_GPR_U32(ctx, 31, 0x1AC8B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8B0u; }
        if (ctx->pc != 0x1AC8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8B0u; }
        if (ctx->pc != 0x1AC8B0u) { return; }
    }
    ctx->pc = 0x1AC8B0u;
label_1ac8b0:
    // 0x1ac8b0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac8b4:
    // 0x1ac8b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac8b8:
    // 0x1ac8b8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac8b8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac8bc:
    // 0x1ac8bc: 0x0  nop
    ctx->pc = 0x1ac8bcu;
    // NOP
label_1ac8c0:
    // 0x1ac8c0: 0x0  nop
    ctx->pc = 0x1ac8c0u;
    // NOP
label_1ac8c4:
    // 0x1ac8c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac8c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac8c8:
    // 0x1ac8c8: 0xc050bb4  jal         func_142ED0
label_1ac8cc:
    if (ctx->pc == 0x1AC8CCu) {
        ctx->pc = 0x1AC8CCu;
            // 0x1ac8cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC8D0u;
        goto label_1ac8d0;
    }
    ctx->pc = 0x1AC8C8u;
    SET_GPR_U32(ctx, 31, 0x1AC8D0u);
    ctx->pc = 0x1AC8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8C8u;
            // 0x1ac8cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8D0u; }
        if (ctx->pc != 0x1AC8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8D0u; }
        if (ctx->pc != 0x1AC8D0u) { return; }
    }
    ctx->pc = 0x1AC8D0u;
label_1ac8d0:
    // 0x1ac8d0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac8d4:
    // 0x1ac8d4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ac8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac8d8:
    // 0x1ac8d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac8d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac8dc:
    // 0x1ac8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8e0:
    // 0x1ac8e0: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1ac8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1ac8e4:
    // 0x1ac8e4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1ac8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1ac8e8:
    // 0x1ac8e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ac8ec:
    // 0x1ac8ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ac8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac8f0:
    // 0x1ac8f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac8f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac8f4:
    // 0x1ac8f4: 0xc053740  jal         func_14DD00
label_1ac8f8:
    if (ctx->pc == 0x1AC8F8u) {
        ctx->pc = 0x1AC8F8u;
            // 0x1ac8f8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC8FCu;
        goto label_1ac8fc;
    }
    ctx->pc = 0x1AC8F4u;
    SET_GPR_U32(ctx, 31, 0x1AC8FCu);
    ctx->pc = 0x1AC8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC8F4u;
            // 0x1ac8f8: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8FCu; }
        if (ctx->pc != 0x1AC8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC8FCu; }
        if (ctx->pc != 0x1AC8FCu) { return; }
    }
    ctx->pc = 0x1AC8FCu;
label_1ac8fc:
    // 0x1ac8fc: 0xc050bb4  jal         func_142ED0
label_1ac900:
    if (ctx->pc == 0x1AC900u) {
        ctx->pc = 0x1AC904u;
        goto label_1ac904;
    }
    ctx->pc = 0x1AC8FCu;
    SET_GPR_U32(ctx, 31, 0x1AC904u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC904u; }
        if (ctx->pc != 0x1AC904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC904u; }
        if (ctx->pc != 0x1AC904u) { return; }
    }
    ctx->pc = 0x1AC904u;
label_1ac904:
    // 0x1ac904: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac908:
    // 0x1ac908: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac90c:
    // 0x1ac90c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac90cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac910:
    // 0x1ac910: 0x0  nop
    ctx->pc = 0x1ac910u;
    // NOP
label_1ac914:
    // 0x1ac914: 0x0  nop
    ctx->pc = 0x1ac914u;
    // NOP
label_1ac918:
    // 0x1ac918: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac918u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac91c:
    // 0x1ac91c: 0xc050bb4  jal         func_142ED0
label_1ac920:
    if (ctx->pc == 0x1AC920u) {
        ctx->pc = 0x1AC920u;
            // 0x1ac920: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC924u;
        goto label_1ac924;
    }
    ctx->pc = 0x1AC91Cu;
    SET_GPR_U32(ctx, 31, 0x1AC924u);
    ctx->pc = 0x1AC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC91Cu;
            // 0x1ac920: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC924u; }
        if (ctx->pc != 0x1AC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC924u; }
        if (ctx->pc != 0x1AC924u) { return; }
    }
    ctx->pc = 0x1AC924u;
label_1ac924:
    // 0x1ac924: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac928:
    // 0x1ac928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac92c:
    // 0x1ac92c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac92cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac930:
    // 0x1ac930: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1ac930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1ac934:
    // 0x1ac934: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac938:
    // 0x1ac938: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac93c:
    // 0x1ac93c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac93cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac940:
    // 0x1ac940: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac940u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac944:
    // 0x1ac944: 0xc053740  jal         func_14DD00
label_1ac948:
    if (ctx->pc == 0x1AC948u) {
        ctx->pc = 0x1AC948u;
            // 0x1ac948: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC94Cu;
        goto label_1ac94c;
    }
    ctx->pc = 0x1AC944u;
    SET_GPR_U32(ctx, 31, 0x1AC94Cu);
    ctx->pc = 0x1AC948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC944u;
            // 0x1ac948: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC94Cu; }
        if (ctx->pc != 0x1AC94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC94Cu; }
        if (ctx->pc != 0x1AC94Cu) { return; }
    }
    ctx->pc = 0x1AC94Cu;
label_1ac94c:
    // 0x1ac94c: 0xc050bb4  jal         func_142ED0
label_1ac950:
    if (ctx->pc == 0x1AC950u) {
        ctx->pc = 0x1AC954u;
        goto label_1ac954;
    }
    ctx->pc = 0x1AC94Cu;
    SET_GPR_U32(ctx, 31, 0x1AC954u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC954u; }
        if (ctx->pc != 0x1AC954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC954u; }
        if (ctx->pc != 0x1AC954u) { return; }
    }
    ctx->pc = 0x1AC954u;
label_1ac954:
    // 0x1ac954: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac958:
    // 0x1ac958: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac95c:
    // 0x1ac95c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac95cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac960:
    // 0x1ac960: 0x0  nop
    ctx->pc = 0x1ac960u;
    // NOP
label_1ac964:
    // 0x1ac964: 0x0  nop
    ctx->pc = 0x1ac964u;
    // NOP
label_1ac968:
    // 0x1ac968: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac96c:
    // 0x1ac96c: 0xc050bb4  jal         func_142ED0
label_1ac970:
    if (ctx->pc == 0x1AC970u) {
        ctx->pc = 0x1AC970u;
            // 0x1ac970: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC974u;
        goto label_1ac974;
    }
    ctx->pc = 0x1AC96Cu;
    SET_GPR_U32(ctx, 31, 0x1AC974u);
    ctx->pc = 0x1AC970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC96Cu;
            // 0x1ac970: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC974u; }
        if (ctx->pc != 0x1AC974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC974u; }
        if (ctx->pc != 0x1AC974u) { return; }
    }
    ctx->pc = 0x1AC974u;
label_1ac974:
    // 0x1ac974: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac978:
    // 0x1ac978: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac97c:
    // 0x1ac97c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac97cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac980:
    // 0x1ac980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac984:
    // 0x1ac984: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1ac988:
    // 0x1ac988: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x1ac988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_1ac98c:
    // 0x1ac98c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ac98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ac990:
    // 0x1ac990: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ac990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac994:
    // 0x1ac994: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac994u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac998:
    // 0x1ac998: 0xc053740  jal         func_14DD00
label_1ac99c:
    if (ctx->pc == 0x1AC99Cu) {
        ctx->pc = 0x1AC99Cu;
            // 0x1ac99c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC9A0u;
        goto label_1ac9a0;
    }
    ctx->pc = 0x1AC998u;
    SET_GPR_U32(ctx, 31, 0x1AC9A0u);
    ctx->pc = 0x1AC99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC998u;
            // 0x1ac99c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A0u; }
        if (ctx->pc != 0x1AC9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A0u; }
        if (ctx->pc != 0x1AC9A0u) { return; }
    }
    ctx->pc = 0x1AC9A0u;
label_1ac9a0:
    // 0x1ac9a0: 0xc050bb4  jal         func_142ED0
label_1ac9a4:
    if (ctx->pc == 0x1AC9A4u) {
        ctx->pc = 0x1AC9A8u;
        goto label_1ac9a8;
    }
    ctx->pc = 0x1AC9A0u;
    SET_GPR_U32(ctx, 31, 0x1AC9A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A8u; }
        if (ctx->pc != 0x1AC9A8u) { return; }
    }
    ctx->pc = 0x1AC9A8u;
label_1ac9a8:
    // 0x1ac9a8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac9ac:
    // 0x1ac9ac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1ac9b0:
    // 0x1ac9b0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ac9b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac9b4:
    // 0x1ac9b4: 0x0  nop
    ctx->pc = 0x1ac9b4u;
    // NOP
label_1ac9b8:
    // 0x1ac9b8: 0x0  nop
    ctx->pc = 0x1ac9b8u;
    // NOP
label_1ac9bc:
    // 0x1ac9bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac9bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac9c0:
    // 0x1ac9c0: 0xc050bb4  jal         func_142ED0
label_1ac9c4:
    if (ctx->pc == 0x1AC9C4u) {
        ctx->pc = 0x1AC9C4u;
            // 0x1ac9c4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC9C8u;
        goto label_1ac9c8;
    }
    ctx->pc = 0x1AC9C0u;
    SET_GPR_U32(ctx, 31, 0x1AC9C8u);
    ctx->pc = 0x1AC9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9C0u;
            // 0x1ac9c4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9C8u; }
        if (ctx->pc != 0x1AC9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9C8u; }
        if (ctx->pc != 0x1AC9C8u) { return; }
    }
    ctx->pc = 0x1AC9C8u;
label_1ac9c8:
    // 0x1ac9c8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1ac9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1ac9cc:
    // 0x1ac9cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ac9d0:
    // 0x1ac9d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ac9d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1ac9d4:
    // 0x1ac9d4: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1ac9d8:
    // 0x1ac9d8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ac9dc:
    // 0x1ac9dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ac9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ac9e0:
    // 0x1ac9e0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ac9e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ac9e4:
    // 0x1ac9e4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ac9e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ac9e8:
    // 0x1ac9e8: 0xc053740  jal         func_14DD00
label_1ac9ec:
    if (ctx->pc == 0x1AC9ECu) {
        ctx->pc = 0x1AC9ECu;
            // 0x1ac9ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1AC9F0u;
        goto label_1ac9f0;
    }
    ctx->pc = 0x1AC9E8u;
    SET_GPR_U32(ctx, 31, 0x1AC9F0u);
    ctx->pc = 0x1AC9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC9E8u;
            // 0x1ac9ec: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9F0u; }
        if (ctx->pc != 0x1AC9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9F0u; }
        if (ctx->pc != 0x1AC9F0u) { return; }
    }
    ctx->pc = 0x1AC9F0u;
label_1ac9f0:
    // 0x1ac9f0: 0xc050bb4  jal         func_142ED0
label_1ac9f4:
    if (ctx->pc == 0x1AC9F4u) {
        ctx->pc = 0x1AC9F8u;
        goto label_1ac9f8;
    }
    ctx->pc = 0x1AC9F0u;
    SET_GPR_U32(ctx, 31, 0x1AC9F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9F8u; }
        if (ctx->pc != 0x1AC9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9F8u; }
        if (ctx->pc != 0x1AC9F8u) { return; }
    }
    ctx->pc = 0x1AC9F8u;
label_1ac9f8:
    // 0x1ac9f8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1ac9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ac9fc:
    // 0x1ac9fc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1ac9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aca00:
    // 0x1aca00: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1aca00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1aca04:
    // 0x1aca04: 0x0  nop
    ctx->pc = 0x1aca04u;
    // NOP
label_1aca08:
    // 0x1aca08: 0x0  nop
    ctx->pc = 0x1aca08u;
    // NOP
label_1aca0c:
    // 0x1aca0c: 0x1010  mfhi        $v0
    ctx->pc = 0x1aca0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1aca10:
    // 0x1aca10: 0xc050bb4  jal         func_142ED0
label_1aca14:
    if (ctx->pc == 0x1ACA14u) {
        ctx->pc = 0x1ACA14u;
            // 0x1aca14: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1ACA18u;
        goto label_1aca18;
    }
    ctx->pc = 0x1ACA10u;
    SET_GPR_U32(ctx, 31, 0x1ACA18u);
    ctx->pc = 0x1ACA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA10u;
            // 0x1aca14: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA18u; }
        if (ctx->pc != 0x1ACA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA18u; }
        if (ctx->pc != 0x1ACA18u) { return; }
    }
    ctx->pc = 0x1ACA18u;
label_1aca18:
    // 0x1aca18: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1aca18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1aca1c:
    // 0x1aca1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aca20:
    // 0x1aca20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1aca20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1aca24:
    // 0x1aca24: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1aca24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1aca28:
    // 0x1aca28: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1aca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aca2c:
    // 0x1aca2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aca2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aca30:
    // 0x1aca30: 0x1010  mfhi        $v0
    ctx->pc = 0x1aca30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1aca34:
    // 0x1aca34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aca34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aca38:
    // 0x1aca38: 0xc053740  jal         func_14DD00
label_1aca3c:
    if (ctx->pc == 0x1ACA3Cu) {
        ctx->pc = 0x1ACA3Cu;
            // 0x1aca3c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1ACA40u;
        goto label_1aca40;
    }
    ctx->pc = 0x1ACA38u;
    SET_GPR_U32(ctx, 31, 0x1ACA40u);
    ctx->pc = 0x1ACA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA38u;
            // 0x1aca3c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA40u; }
        if (ctx->pc != 0x1ACA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA40u; }
        if (ctx->pc != 0x1ACA40u) { return; }
    }
    ctx->pc = 0x1ACA40u;
label_1aca40:
    // 0x1aca40: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1aca40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aca44:
    // 0x1aca44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aca48:
    // 0x1aca48: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1aca48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aca4c:
    // 0x1aca4c: 0xc07b0ac  jal         func_1EC2B0
label_1aca50:
    if (ctx->pc == 0x1ACA50u) {
        ctx->pc = 0x1ACA50u;
            // 0x1aca50: 0x2446ffec  addiu       $a2, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1ACA54u;
        goto label_1aca54;
    }
    ctx->pc = 0x1ACA4Cu;
    SET_GPR_U32(ctx, 31, 0x1ACA54u);
    ctx->pc = 0x1ACA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA4Cu;
            // 0x1aca50: 0x2446ffec  addiu       $a2, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA54u; }
        if (ctx->pc != 0x1ACA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA54u; }
        if (ctx->pc != 0x1ACA54u) { return; }
    }
    ctx->pc = 0x1ACA54u;
label_1aca54:
    // 0x1aca54: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1aca54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aca58:
    // 0x1aca58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1aca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aca5c:
    // 0x1aca5c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1aca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aca60:
    // 0x1aca60: 0xc07b0ac  jal         func_1EC2B0
label_1aca64:
    if (ctx->pc == 0x1ACA64u) {
        ctx->pc = 0x1ACA64u;
            // 0x1aca64: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x1ACA68u;
        goto label_1aca68;
    }
    ctx->pc = 0x1ACA60u;
    SET_GPR_U32(ctx, 31, 0x1ACA68u);
    ctx->pc = 0x1ACA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA60u;
            // 0x1aca64: 0x24460014  addiu       $a2, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA68u; }
        if (ctx->pc != 0x1ACA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA68u; }
        if (ctx->pc != 0x1ACA68u) { return; }
    }
    ctx->pc = 0x1ACA68u;
label_1aca68:
    // 0x1aca68: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1aca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1aca6c:
    // 0x1aca6c: 0x40f809  jalr        $v0
label_1aca70:
    if (ctx->pc == 0x1ACA70u) {
        ctx->pc = 0x1ACA70u;
            // 0x1aca70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA74u;
        goto label_1aca74;
    }
    ctx->pc = 0x1ACA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACA74u);
        ctx->pc = 0x1ACA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA6Cu;
            // 0x1aca70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAB4u: goto label_1abab4;
            case 0x1ABAB8u: goto label_1abab8;
            case 0x1ABABCu: goto label_1ababc;
            case 0x1ABAC0u: goto label_1abac0;
            case 0x1ABAC4u: goto label_1abac4;
            case 0x1ABAC8u: goto label_1abac8;
            case 0x1ABACCu: goto label_1abacc;
            case 0x1ABAD0u: goto label_1abad0;
            case 0x1ABAD4u: goto label_1abad4;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            case 0x1ABAE0u: goto label_1abae0;
            case 0x1ABAE4u: goto label_1abae4;
            case 0x1ABAE8u: goto label_1abae8;
            case 0x1ABAECu: goto label_1abaec;
            case 0x1ABAF0u: goto label_1abaf0;
            case 0x1ABAF4u: goto label_1abaf4;
            case 0x1ABAF8u: goto label_1abaf8;
            case 0x1ABAFCu: goto label_1abafc;
            case 0x1ABB00u: goto label_1abb00;
            case 0x1ABB04u: goto label_1abb04;
            case 0x1ABB08u: goto label_1abb08;
            case 0x1ABB0Cu: goto label_1abb0c;
            case 0x1ABB10u: goto label_1abb10;
            case 0x1ABB14u: goto label_1abb14;
            case 0x1ABB18u: goto label_1abb18;
            case 0x1ABB1Cu: goto label_1abb1c;
            case 0x1ABB20u: goto label_1abb20;
            case 0x1ABB24u: goto label_1abb24;
            case 0x1ABB28u: goto label_1abb28;
            case 0x1ABB2Cu: goto label_1abb2c;
            case 0x1ABB30u: goto label_1abb30;
            case 0x1ABB34u: goto label_1abb34;
            case 0x1ABB38u: goto label_1abb38;
            case 0x1ABB3Cu: goto label_1abb3c;
            case 0x1ABB40u: goto label_1abb40;
            case 0x1ABB44u: goto label_1abb44;
            case 0x1ABB48u: goto label_1abb48;
            case 0x1ABB4Cu: goto label_1abb4c;
            case 0x1ABB50u: goto label_1abb50;
            case 0x1ABB54u: goto label_1abb54;
            case 0x1ABB58u: goto label_1abb58;
            case 0x1ABB5Cu: goto label_1abb5c;
            case 0x1ABB60u: goto label_1abb60;
            case 0x1ABB64u: goto label_1abb64;
            case 0x1ABB68u: goto label_1abb68;
            case 0x1ABB6Cu: goto label_1abb6c;
            case 0x1ABB70u: goto label_1abb70;
            case 0x1ABB74u: goto label_1abb74;
            case 0x1ABB78u: goto label_1abb78;
            case 0x1ABB7Cu: goto label_1abb7c;
            case 0x1ABB80u: goto label_1abb80;
            case 0x1ABB84u: goto label_1abb84;
            case 0x1ABB88u: goto label_1abb88;
            case 0x1ABB8Cu: goto label_1abb8c;
            case 0x1ABB90u: goto label_1abb90;
            case 0x1ABB94u: goto label_1abb94;
            case 0x1ABB98u: goto label_1abb98;
            case 0x1ABB9Cu: goto label_1abb9c;
            case 0x1ABBA0u: goto label_1abba0;
            case 0x1ABBA4u: goto label_1abba4;
            case 0x1ABBA8u: goto label_1abba8;
            case 0x1ABBACu: goto label_1abbac;
            case 0x1ABBB0u: goto label_1abbb0;
            case 0x1ABBB4u: goto label_1abbb4;
            case 0x1ABBB8u: goto label_1abbb8;
            case 0x1ABBBCu: goto label_1abbbc;
            case 0x1ABBC0u: goto label_1abbc0;
            case 0x1ABBC4u: goto label_1abbc4;
            case 0x1ABBC8u: goto label_1abbc8;
            case 0x1ABBCCu: goto label_1abbcc;
            case 0x1ABBD0u: goto label_1abbd0;
            case 0x1ABBD4u: goto label_1abbd4;
            case 0x1ABBD8u: goto label_1abbd8;
            case 0x1ABBDCu: goto label_1abbdc;
            case 0x1ABBE0u: goto label_1abbe0;
            case 0x1ABBE4u: goto label_1abbe4;
            case 0x1ABBE8u: goto label_1abbe8;
            case 0x1ABBECu: goto label_1abbec;
            case 0x1ABBF0u: goto label_1abbf0;
            case 0x1ABBF4u: goto label_1abbf4;
            case 0x1ABBF8u: goto label_1abbf8;
            case 0x1ABBFCu: goto label_1abbfc;
            case 0x1ABC00u: goto label_1abc00;
            case 0x1ABC04u: goto label_1abc04;
            case 0x1ABC08u: goto label_1abc08;
            case 0x1ABC0Cu: goto label_1abc0c;
            case 0x1ABC10u: goto label_1abc10;
            case 0x1ABC14u: goto label_1abc14;
            case 0x1ABC18u: goto label_1abc18;
            case 0x1ABC1Cu: goto label_1abc1c;
            case 0x1ABC20u: goto label_1abc20;
            case 0x1ABC24u: goto label_1abc24;
            case 0x1ABC28u: goto label_1abc28;
            case 0x1ABC2Cu: goto label_1abc2c;
            case 0x1ABC30u: goto label_1abc30;
            case 0x1ABC34u: goto label_1abc34;
            case 0x1ABC38u: goto label_1abc38;
            case 0x1ABC3Cu: goto label_1abc3c;
            case 0x1ABC40u: goto label_1abc40;
            case 0x1ABC44u: goto label_1abc44;
            case 0x1ABC48u: goto label_1abc48;
            case 0x1ABC4Cu: goto label_1abc4c;
            case 0x1ABC50u: goto label_1abc50;
            case 0x1ABC54u: goto label_1abc54;
            case 0x1ABC58u: goto label_1abc58;
            case 0x1ABC5Cu: goto label_1abc5c;
            case 0x1ABC60u: goto label_1abc60;
            case 0x1ABC64u: goto label_1abc64;
            case 0x1ABC68u: goto label_1abc68;
            case 0x1ABC6Cu: goto label_1abc6c;
            case 0x1ABC70u: goto label_1abc70;
            case 0x1ABC74u: goto label_1abc74;
            case 0x1ABC78u: goto label_1abc78;
            case 0x1ABC7Cu: goto label_1abc7c;
            case 0x1ABC80u: goto label_1abc80;
            case 0x1ABC84u: goto label_1abc84;
            case 0x1ABC88u: goto label_1abc88;
            case 0x1ABC8Cu: goto label_1abc8c;
            case 0x1ABC90u: goto label_1abc90;
            case 0x1ABC94u: goto label_1abc94;
            case 0x1ABC98u: goto label_1abc98;
            case 0x1ABC9Cu: goto label_1abc9c;
            case 0x1ABCA0u: goto label_1abca0;
            case 0x1ABCA4u: goto label_1abca4;
            case 0x1ABCA8u: goto label_1abca8;
            case 0x1ABCACu: goto label_1abcac;
            case 0x1ABCB0u: goto label_1abcb0;
            case 0x1ABCB4u: goto label_1abcb4;
            case 0x1ABCB8u: goto label_1abcb8;
            case 0x1ABCBCu: goto label_1abcbc;
            case 0x1ABCC0u: goto label_1abcc0;
            case 0x1ABCC4u: goto label_1abcc4;
            case 0x1ABCC8u: goto label_1abcc8;
            case 0x1ABCCCu: goto label_1abccc;
            case 0x1ABCD0u: goto label_1abcd0;
            case 0x1ABCD4u: goto label_1abcd4;
            case 0x1ABCD8u: goto label_1abcd8;
            case 0x1ABCDCu: goto label_1abcdc;
            case 0x1ABCE0u: goto label_1abce0;
            case 0x1ABCE4u: goto label_1abce4;
            case 0x1ABCE8u: goto label_1abce8;
            case 0x1ABCECu: goto label_1abcec;
            case 0x1ABCF0u: goto label_1abcf0;
            case 0x1ABCF4u: goto label_1abcf4;
            case 0x1ABCF8u: goto label_1abcf8;
            case 0x1ABCFCu: goto label_1abcfc;
            case 0x1ABD00u: goto label_1abd00;
            case 0x1ABD04u: goto label_1abd04;
            case 0x1ABD08u: goto label_1abd08;
            case 0x1ABD0Cu: goto label_1abd0c;
            case 0x1ABD10u: goto label_1abd10;
            case 0x1ABD14u: goto label_1abd14;
            case 0x1ABD18u: goto label_1abd18;
            case 0x1ABD1Cu: goto label_1abd1c;
            case 0x1ABD20u: goto label_1abd20;
            case 0x1ABD24u: goto label_1abd24;
            case 0x1ABD28u: goto label_1abd28;
            case 0x1ABD2Cu: goto label_1abd2c;
            case 0x1ABD30u: goto label_1abd30;
            case 0x1ABD34u: goto label_1abd34;
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD3Cu: goto label_1abd3c;
            case 0x1ABD40u: goto label_1abd40;
            case 0x1ABD44u: goto label_1abd44;
            case 0x1ABD48u: goto label_1abd48;
            case 0x1ABD4Cu: goto label_1abd4c;
            case 0x1ABD50u: goto label_1abd50;
            case 0x1ABD54u: goto label_1abd54;
            case 0x1ABD58u: goto label_1abd58;
            case 0x1ABD5Cu: goto label_1abd5c;
            case 0x1ABD60u: goto label_1abd60;
            case 0x1ABD64u: goto label_1abd64;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABD6Cu: goto label_1abd6c;
            case 0x1ABD70u: goto label_1abd70;
            case 0x1ABD74u: goto label_1abd74;
            case 0x1ABD78u: goto label_1abd78;
            case 0x1ABD7Cu: goto label_1abd7c;
            case 0x1ABD80u: goto label_1abd80;
            case 0x1ABD84u: goto label_1abd84;
            case 0x1ABD88u: goto label_1abd88;
            case 0x1ABD8Cu: goto label_1abd8c;
            case 0x1ABD90u: goto label_1abd90;
            case 0x1ABD94u: goto label_1abd94;
            case 0x1ABD98u: goto label_1abd98;
            case 0x1ABD9Cu: goto label_1abd9c;
            case 0x1ABDA0u: goto label_1abda0;
            case 0x1ABDA4u: goto label_1abda4;
            case 0x1ABDA8u: goto label_1abda8;
            case 0x1ABDACu: goto label_1abdac;
            case 0x1ABDB0u: goto label_1abdb0;
            case 0x1ABDB4u: goto label_1abdb4;
            case 0x1ABDB8u: goto label_1abdb8;
            case 0x1ABDBCu: goto label_1abdbc;
            case 0x1ABDC0u: goto label_1abdc0;
            case 0x1ABDC4u: goto label_1abdc4;
            case 0x1ABDC8u: goto label_1abdc8;
            case 0x1ABDCCu: goto label_1abdcc;
            case 0x1ABDD0u: goto label_1abdd0;
            case 0x1ABDD4u: goto label_1abdd4;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABDDCu: goto label_1abddc;
            case 0x1ABDE0u: goto label_1abde0;
            case 0x1ABDE4u: goto label_1abde4;
            case 0x1ABDE8u: goto label_1abde8;
            case 0x1ABDECu: goto label_1abdec;
            case 0x1ABDF0u: goto label_1abdf0;
            case 0x1ABDF4u: goto label_1abdf4;
            case 0x1ABDF8u: goto label_1abdf8;
            case 0x1ABDFCu: goto label_1abdfc;
            case 0x1ABE00u: goto label_1abe00;
            case 0x1ABE04u: goto label_1abe04;
            case 0x1ABE08u: goto label_1abe08;
            case 0x1ABE0Cu: goto label_1abe0c;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE14u: goto label_1abe14;
            case 0x1ABE18u: goto label_1abe18;
            case 0x1ABE1Cu: goto label_1abe1c;
            case 0x1ABE20u: goto label_1abe20;
            case 0x1ABE24u: goto label_1abe24;
            case 0x1ABE28u: goto label_1abe28;
            case 0x1ABE2Cu: goto label_1abe2c;
            case 0x1ABE30u: goto label_1abe30;
            case 0x1ABE34u: goto label_1abe34;
            case 0x1ABE38u: goto label_1abe38;
            case 0x1ABE3Cu: goto label_1abe3c;
            case 0x1ABE40u: goto label_1abe40;
            case 0x1ABE44u: goto label_1abe44;
            case 0x1ABE48u: goto label_1abe48;
            case 0x1ABE4Cu: goto label_1abe4c;
            case 0x1ABE50u: goto label_1abe50;
            case 0x1ABE54u: goto label_1abe54;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE5Cu: goto label_1abe5c;
            case 0x1ABE60u: goto label_1abe60;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABE6Cu: goto label_1abe6c;
            case 0x1ABE70u: goto label_1abe70;
            case 0x1ABE74u: goto label_1abe74;
            case 0x1ABE78u: goto label_1abe78;
            case 0x1ABE7Cu: goto label_1abe7c;
            case 0x1ABE80u: goto label_1abe80;
            case 0x1ABE84u: goto label_1abe84;
            case 0x1ABE88u: goto label_1abe88;
            case 0x1ABE8Cu: goto label_1abe8c;
            case 0x1ABE90u: goto label_1abe90;
            case 0x1ABE94u: goto label_1abe94;
            case 0x1ABE98u: goto label_1abe98;
            case 0x1ABE9Cu: goto label_1abe9c;
            case 0x1ABEA0u: goto label_1abea0;
            case 0x1ABEA4u: goto label_1abea4;
            case 0x1ABEA8u: goto label_1abea8;
            case 0x1ABEACu: goto label_1abeac;
            case 0x1ABEB0u: goto label_1abeb0;
            case 0x1ABEB4u: goto label_1abeb4;
            case 0x1ABEB8u: goto label_1abeb8;
            case 0x1ABEBCu: goto label_1abebc;
            case 0x1ABEC0u: goto label_1abec0;
            case 0x1ABEC4u: goto label_1abec4;
            case 0x1ABEC8u: goto label_1abec8;
            case 0x1ABECCu: goto label_1abecc;
            case 0x1ABED0u: goto label_1abed0;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABED8u: goto label_1abed8;
            case 0x1ABEDCu: goto label_1abedc;
            case 0x1ABEE0u: goto label_1abee0;
            case 0x1ABEE4u: goto label_1abee4;
            case 0x1ABEE8u: goto label_1abee8;
            case 0x1ABEECu: goto label_1abeec;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF4u: goto label_1abef4;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABEFCu: goto label_1abefc;
            case 0x1ABF00u: goto label_1abf00;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF08u: goto label_1abf08;
            case 0x1ABF0Cu: goto label_1abf0c;
            case 0x1ABF10u: goto label_1abf10;
            case 0x1ABF14u: goto label_1abf14;
            case 0x1ABF18u: goto label_1abf18;
            case 0x1ABF1Cu: goto label_1abf1c;
            case 0x1ABF20u: goto label_1abf20;
            case 0x1ABF24u: goto label_1abf24;
            case 0x1ABF28u: goto label_1abf28;
            case 0x1ABF2Cu: goto label_1abf2c;
            case 0x1ABF30u: goto label_1abf30;
            case 0x1ABF34u: goto label_1abf34;
            case 0x1ABF38u: goto label_1abf38;
            case 0x1ABF3Cu: goto label_1abf3c;
            case 0x1ABF40u: goto label_1abf40;
            case 0x1ABF44u: goto label_1abf44;
            case 0x1ABF48u: goto label_1abf48;
            case 0x1ABF4Cu: goto label_1abf4c;
            case 0x1ABF50u: goto label_1abf50;
            case 0x1ABF54u: goto label_1abf54;
            case 0x1ABF58u: goto label_1abf58;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABF60u: goto label_1abf60;
            case 0x1ABF64u: goto label_1abf64;
            case 0x1ABF68u: goto label_1abf68;
            case 0x1ABF6Cu: goto label_1abf6c;
            case 0x1ABF70u: goto label_1abf70;
            case 0x1ABF74u: goto label_1abf74;
            case 0x1ABF78u: goto label_1abf78;
            case 0x1ABF7Cu: goto label_1abf7c;
            case 0x1ABF80u: goto label_1abf80;
            case 0x1ABF84u: goto label_1abf84;
            case 0x1ABF88u: goto label_1abf88;
            case 0x1ABF8Cu: goto label_1abf8c;
            case 0x1ABF90u: goto label_1abf90;
            case 0x1ABF94u: goto label_1abf94;
            case 0x1ABF98u: goto label_1abf98;
            case 0x1ABF9Cu: goto label_1abf9c;
            case 0x1ABFA0u: goto label_1abfa0;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFA8u: goto label_1abfa8;
            case 0x1ABFACu: goto label_1abfac;
            case 0x1ABFB0u: goto label_1abfb0;
            case 0x1ABFB4u: goto label_1abfb4;
            case 0x1ABFB8u: goto label_1abfb8;
            case 0x1ABFBCu: goto label_1abfbc;
            case 0x1ABFC0u: goto label_1abfc0;
            case 0x1ABFC4u: goto label_1abfc4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFCCu: goto label_1abfcc;
            case 0x1ABFD0u: goto label_1abfd0;
            case 0x1ABFD4u: goto label_1abfd4;
            case 0x1ABFD8u: goto label_1abfd8;
            case 0x1ABFDCu: goto label_1abfdc;
            case 0x1ABFE0u: goto label_1abfe0;
            case 0x1ABFE4u: goto label_1abfe4;
            case 0x1ABFE8u: goto label_1abfe8;
            case 0x1ABFECu: goto label_1abfec;
            case 0x1ABFF0u: goto label_1abff0;
            case 0x1ABFF4u: goto label_1abff4;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1ABFFCu: goto label_1abffc;
            case 0x1AC000u: goto label_1ac000;
            case 0x1AC004u: goto label_1ac004;
            case 0x1AC008u: goto label_1ac008;
            case 0x1AC00Cu: goto label_1ac00c;
            case 0x1AC010u: goto label_1ac010;
            case 0x1AC014u: goto label_1ac014;
            case 0x1AC018u: goto label_1ac018;
            case 0x1AC01Cu: goto label_1ac01c;
            case 0x1AC020u: goto label_1ac020;
            case 0x1AC024u: goto label_1ac024;
            case 0x1AC028u: goto label_1ac028;
            case 0x1AC02Cu: goto label_1ac02c;
            case 0x1AC030u: goto label_1ac030;
            case 0x1AC034u: goto label_1ac034;
            case 0x1AC038u: goto label_1ac038;
            case 0x1AC03Cu: goto label_1ac03c;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC044u: goto label_1ac044;
            case 0x1AC048u: goto label_1ac048;
            case 0x1AC04Cu: goto label_1ac04c;
            case 0x1AC050u: goto label_1ac050;
            case 0x1AC054u: goto label_1ac054;
            case 0x1AC058u: goto label_1ac058;
            case 0x1AC05Cu: goto label_1ac05c;
            case 0x1AC060u: goto label_1ac060;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC068u: goto label_1ac068;
            case 0x1AC06Cu: goto label_1ac06c;
            case 0x1AC070u: goto label_1ac070;
            case 0x1AC074u: goto label_1ac074;
            case 0x1AC078u: goto label_1ac078;
            case 0x1AC07Cu: goto label_1ac07c;
            case 0x1AC080u: goto label_1ac080;
            case 0x1AC084u: goto label_1ac084;
            case 0x1AC088u: goto label_1ac088;
            case 0x1AC08Cu: goto label_1ac08c;
            case 0x1AC090u: goto label_1ac090;
            case 0x1AC094u: goto label_1ac094;
            case 0x1AC098u: goto label_1ac098;
            case 0x1AC09Cu: goto label_1ac09c;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A4u: goto label_1ac0a4;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0ACu: goto label_1ac0ac;
            case 0x1AC0B0u: goto label_1ac0b0;
            case 0x1AC0B4u: goto label_1ac0b4;
            case 0x1AC0B8u: goto label_1ac0b8;
            case 0x1AC0BCu: goto label_1ac0bc;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0C4u: goto label_1ac0c4;
            case 0x1AC0C8u: goto label_1ac0c8;
            case 0x1AC0CCu: goto label_1ac0cc;
            case 0x1AC0D0u: goto label_1ac0d0;
            case 0x1AC0D4u: goto label_1ac0d4;
            case 0x1AC0D8u: goto label_1ac0d8;
            case 0x1AC0DCu: goto label_1ac0dc;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC0E8u: goto label_1ac0e8;
            case 0x1AC0ECu: goto label_1ac0ec;
            case 0x1AC0F0u: goto label_1ac0f0;
            case 0x1AC0F4u: goto label_1ac0f4;
            case 0x1AC0F8u: goto label_1ac0f8;
            case 0x1AC0FCu: goto label_1ac0fc;
            case 0x1AC100u: goto label_1ac100;
            case 0x1AC104u: goto label_1ac104;
            case 0x1AC108u: goto label_1ac108;
            case 0x1AC10Cu: goto label_1ac10c;
            case 0x1AC110u: goto label_1ac110;
            case 0x1AC114u: goto label_1ac114;
            case 0x1AC118u: goto label_1ac118;
            case 0x1AC11Cu: goto label_1ac11c;
            case 0x1AC120u: goto label_1ac120;
            case 0x1AC124u: goto label_1ac124;
            case 0x1AC128u: goto label_1ac128;
            case 0x1AC12Cu: goto label_1ac12c;
            case 0x1AC130u: goto label_1ac130;
            case 0x1AC134u: goto label_1ac134;
            case 0x1AC138u: goto label_1ac138;
            case 0x1AC13Cu: goto label_1ac13c;
            case 0x1AC140u: goto label_1ac140;
            case 0x1AC144u: goto label_1ac144;
            case 0x1AC148u: goto label_1ac148;
            case 0x1AC14Cu: goto label_1ac14c;
            case 0x1AC150u: goto label_1ac150;
            case 0x1AC154u: goto label_1ac154;
            case 0x1AC158u: goto label_1ac158;
            case 0x1AC15Cu: goto label_1ac15c;
            case 0x1AC160u: goto label_1ac160;
            case 0x1AC164u: goto label_1ac164;
            case 0x1AC168u: goto label_1ac168;
            case 0x1AC16Cu: goto label_1ac16c;
            case 0x1AC170u: goto label_1ac170;
            case 0x1AC174u: goto label_1ac174;
            case 0x1AC178u: goto label_1ac178;
            case 0x1AC17Cu: goto label_1ac17c;
            case 0x1AC180u: goto label_1ac180;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC188u: goto label_1ac188;
            case 0x1AC18Cu: goto label_1ac18c;
            case 0x1AC190u: goto label_1ac190;
            case 0x1AC194u: goto label_1ac194;
            case 0x1AC198u: goto label_1ac198;
            case 0x1AC19Cu: goto label_1ac19c;
            case 0x1AC1A0u: goto label_1ac1a0;
            case 0x1AC1A4u: goto label_1ac1a4;
            case 0x1AC1A8u: goto label_1ac1a8;
            case 0x1AC1ACu: goto label_1ac1ac;
            case 0x1AC1B0u: goto label_1ac1b0;
            case 0x1AC1B4u: goto label_1ac1b4;
            case 0x1AC1B8u: goto label_1ac1b8;
            case 0x1AC1BCu: goto label_1ac1bc;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1C4u: goto label_1ac1c4;
            case 0x1AC1C8u: goto label_1ac1c8;
            case 0x1AC1CCu: goto label_1ac1cc;
            case 0x1AC1D0u: goto label_1ac1d0;
            case 0x1AC1D4u: goto label_1ac1d4;
            case 0x1AC1D8u: goto label_1ac1d8;
            case 0x1AC1DCu: goto label_1ac1dc;
            case 0x1AC1E0u: goto label_1ac1e0;
            case 0x1AC1E4u: goto label_1ac1e4;
            case 0x1AC1E8u: goto label_1ac1e8;
            case 0x1AC1ECu: goto label_1ac1ec;
            case 0x1AC1F0u: goto label_1ac1f0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC1F8u: goto label_1ac1f8;
            case 0x1AC1FCu: goto label_1ac1fc;
            case 0x1AC200u: goto label_1ac200;
            case 0x1AC204u: goto label_1ac204;
            case 0x1AC208u: goto label_1ac208;
            case 0x1AC20Cu: goto label_1ac20c;
            case 0x1AC210u: goto label_1ac210;
            case 0x1AC214u: goto label_1ac214;
            case 0x1AC218u: goto label_1ac218;
            case 0x1AC21Cu: goto label_1ac21c;
            case 0x1AC220u: goto label_1ac220;
            case 0x1AC224u: goto label_1ac224;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC22Cu: goto label_1ac22c;
            case 0x1AC230u: goto label_1ac230;
            case 0x1AC234u: goto label_1ac234;
            case 0x1AC238u: goto label_1ac238;
            case 0x1AC23Cu: goto label_1ac23c;
            case 0x1AC240u: goto label_1ac240;
            case 0x1AC244u: goto label_1ac244;
            case 0x1AC248u: goto label_1ac248;
            case 0x1AC24Cu: goto label_1ac24c;
            case 0x1AC250u: goto label_1ac250;
            case 0x1AC254u: goto label_1ac254;
            case 0x1AC258u: goto label_1ac258;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC260u: goto label_1ac260;
            case 0x1AC264u: goto label_1ac264;
            case 0x1AC268u: goto label_1ac268;
            case 0x1AC26Cu: goto label_1ac26c;
            case 0x1AC270u: goto label_1ac270;
            case 0x1AC274u: goto label_1ac274;
            case 0x1AC278u: goto label_1ac278;
            case 0x1AC27Cu: goto label_1ac27c;
            case 0x1AC280u: goto label_1ac280;
            case 0x1AC284u: goto label_1ac284;
            case 0x1AC288u: goto label_1ac288;
            case 0x1AC28Cu: goto label_1ac28c;
            case 0x1AC290u: goto label_1ac290;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC298u: goto label_1ac298;
            case 0x1AC29Cu: goto label_1ac29c;
            case 0x1AC2A0u: goto label_1ac2a0;
            case 0x1AC2A4u: goto label_1ac2a4;
            case 0x1AC2A8u: goto label_1ac2a8;
            case 0x1AC2ACu: goto label_1ac2ac;
            case 0x1AC2B0u: goto label_1ac2b0;
            case 0x1AC2B4u: goto label_1ac2b4;
            case 0x1AC2B8u: goto label_1ac2b8;
            case 0x1AC2BCu: goto label_1ac2bc;
            case 0x1AC2C0u: goto label_1ac2c0;
            case 0x1AC2C4u: goto label_1ac2c4;
            case 0x1AC2C8u: goto label_1ac2c8;
            case 0x1AC2CCu: goto label_1ac2cc;
            case 0x1AC2D0u: goto label_1ac2d0;
            case 0x1AC2D4u: goto label_1ac2d4;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC2DCu: goto label_1ac2dc;
            case 0x1AC2E0u: goto label_1ac2e0;
            case 0x1AC2E4u: goto label_1ac2e4;
            case 0x1AC2E8u: goto label_1ac2e8;
            case 0x1AC2ECu: goto label_1ac2ec;
            case 0x1AC2F0u: goto label_1ac2f0;
            case 0x1AC2F4u: goto label_1ac2f4;
            case 0x1AC2F8u: goto label_1ac2f8;
            case 0x1AC2FCu: goto label_1ac2fc;
            case 0x1AC300u: goto label_1ac300;
            case 0x1AC304u: goto label_1ac304;
            case 0x1AC308u: goto label_1ac308;
            case 0x1AC30Cu: goto label_1ac30c;
            case 0x1AC310u: goto label_1ac310;
            case 0x1AC314u: goto label_1ac314;
            case 0x1AC318u: goto label_1ac318;
            case 0x1AC31Cu: goto label_1ac31c;
            case 0x1AC320u: goto label_1ac320;
            case 0x1AC324u: goto label_1ac324;
            case 0x1AC328u: goto label_1ac328;
            case 0x1AC32Cu: goto label_1ac32c;
            case 0x1AC330u: goto label_1ac330;
            case 0x1AC334u: goto label_1ac334;
            case 0x1AC338u: goto label_1ac338;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC340u: goto label_1ac340;
            case 0x1AC344u: goto label_1ac344;
            case 0x1AC348u: goto label_1ac348;
            case 0x1AC34Cu: goto label_1ac34c;
            case 0x1AC350u: goto label_1ac350;
            case 0x1AC354u: goto label_1ac354;
            case 0x1AC358u: goto label_1ac358;
            case 0x1AC35Cu: goto label_1ac35c;
            case 0x1AC360u: goto label_1ac360;
            case 0x1AC364u: goto label_1ac364;
            case 0x1AC368u: goto label_1ac368;
            case 0x1AC36Cu: goto label_1ac36c;
            case 0x1AC370u: goto label_1ac370;
            case 0x1AC374u: goto label_1ac374;
            case 0x1AC378u: goto label_1ac378;
            case 0x1AC37Cu: goto label_1ac37c;
            case 0x1AC380u: goto label_1ac380;
            case 0x1AC384u: goto label_1ac384;
            case 0x1AC388u: goto label_1ac388;
            case 0x1AC38Cu: goto label_1ac38c;
            case 0x1AC390u: goto label_1ac390;
            case 0x1AC394u: goto label_1ac394;
            case 0x1AC398u: goto label_1ac398;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3A0u: goto label_1ac3a0;
            case 0x1AC3A4u: goto label_1ac3a4;
            case 0x1AC3A8u: goto label_1ac3a8;
            case 0x1AC3ACu: goto label_1ac3ac;
            case 0x1AC3B0u: goto label_1ac3b0;
            case 0x1AC3B4u: goto label_1ac3b4;
            case 0x1AC3B8u: goto label_1ac3b8;
            case 0x1AC3BCu: goto label_1ac3bc;
            case 0x1AC3C0u: goto label_1ac3c0;
            case 0x1AC3C4u: goto label_1ac3c4;
            case 0x1AC3C8u: goto label_1ac3c8;
            case 0x1AC3CCu: goto label_1ac3cc;
            case 0x1AC3D0u: goto label_1ac3d0;
            case 0x1AC3D4u: goto label_1ac3d4;
            case 0x1AC3D8u: goto label_1ac3d8;
            case 0x1AC3DCu: goto label_1ac3dc;
            case 0x1AC3E0u: goto label_1ac3e0;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC3E8u: goto label_1ac3e8;
            case 0x1AC3ECu: goto label_1ac3ec;
            case 0x1AC3F0u: goto label_1ac3f0;
            case 0x1AC3F4u: goto label_1ac3f4;
            case 0x1AC3F8u: goto label_1ac3f8;
            case 0x1AC3FCu: goto label_1ac3fc;
            case 0x1AC400u: goto label_1ac400;
            case 0x1AC404u: goto label_1ac404;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC40Cu: goto label_1ac40c;
            case 0x1AC410u: goto label_1ac410;
            case 0x1AC414u: goto label_1ac414;
            case 0x1AC418u: goto label_1ac418;
            case 0x1AC41Cu: goto label_1ac41c;
            case 0x1AC420u: goto label_1ac420;
            case 0x1AC424u: goto label_1ac424;
            case 0x1AC428u: goto label_1ac428;
            case 0x1AC42Cu: goto label_1ac42c;
            case 0x1AC430u: goto label_1ac430;
            case 0x1AC434u: goto label_1ac434;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC43Cu: goto label_1ac43c;
            case 0x1AC440u: goto label_1ac440;
            case 0x1AC444u: goto label_1ac444;
            case 0x1AC448u: goto label_1ac448;
            case 0x1AC44Cu: goto label_1ac44c;
            case 0x1AC450u: goto label_1ac450;
            case 0x1AC454u: goto label_1ac454;
            case 0x1AC458u: goto label_1ac458;
            case 0x1AC45Cu: goto label_1ac45c;
            case 0x1AC460u: goto label_1ac460;
            case 0x1AC464u: goto label_1ac464;
            case 0x1AC468u: goto label_1ac468;
            case 0x1AC46Cu: goto label_1ac46c;
            case 0x1AC470u: goto label_1ac470;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC478u: goto label_1ac478;
            case 0x1AC47Cu: goto label_1ac47c;
            case 0x1AC480u: goto label_1ac480;
            case 0x1AC484u: goto label_1ac484;
            case 0x1AC488u: goto label_1ac488;
            case 0x1AC48Cu: goto label_1ac48c;
            case 0x1AC490u: goto label_1ac490;
            case 0x1AC494u: goto label_1ac494;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC49Cu: goto label_1ac49c;
            case 0x1AC4A0u: goto label_1ac4a0;
            case 0x1AC4A4u: goto label_1ac4a4;
            case 0x1AC4A8u: goto label_1ac4a8;
            case 0x1AC4ACu: goto label_1ac4ac;
            case 0x1AC4B0u: goto label_1ac4b0;
            case 0x1AC4B4u: goto label_1ac4b4;
            case 0x1AC4B8u: goto label_1ac4b8;
            case 0x1AC4BCu: goto label_1ac4bc;
            case 0x1AC4C0u: goto label_1ac4c0;
            case 0x1AC4C4u: goto label_1ac4c4;
            case 0x1AC4C8u: goto label_1ac4c8;
            case 0x1AC4CCu: goto label_1ac4cc;
            case 0x1AC4D0u: goto label_1ac4d0;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC4D8u: goto label_1ac4d8;
            case 0x1AC4DCu: goto label_1ac4dc;
            case 0x1AC4E0u: goto label_1ac4e0;
            case 0x1AC4E4u: goto label_1ac4e4;
            case 0x1AC4E8u: goto label_1ac4e8;
            case 0x1AC4ECu: goto label_1ac4ec;
            case 0x1AC4F0u: goto label_1ac4f0;
            case 0x1AC4F4u: goto label_1ac4f4;
            case 0x1AC4F8u: goto label_1ac4f8;
            case 0x1AC4FCu: goto label_1ac4fc;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC504u: goto label_1ac504;
            case 0x1AC508u: goto label_1ac508;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC510u: goto label_1ac510;
            case 0x1AC514u: goto label_1ac514;
            case 0x1AC518u: goto label_1ac518;
            case 0x1AC51Cu: goto label_1ac51c;
            case 0x1AC520u: goto label_1ac520;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC528u: goto label_1ac528;
            case 0x1AC52Cu: goto label_1ac52c;
            case 0x1AC530u: goto label_1ac530;
            case 0x1AC534u: goto label_1ac534;
            case 0x1AC538u: goto label_1ac538;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC544u: goto label_1ac544;
            case 0x1AC548u: goto label_1ac548;
            case 0x1AC54Cu: goto label_1ac54c;
            case 0x1AC550u: goto label_1ac550;
            case 0x1AC554u: goto label_1ac554;
            case 0x1AC558u: goto label_1ac558;
            case 0x1AC55Cu: goto label_1ac55c;
            case 0x1AC560u: goto label_1ac560;
            case 0x1AC564u: goto label_1ac564;
            case 0x1AC568u: goto label_1ac568;
            case 0x1AC56Cu: goto label_1ac56c;
            case 0x1AC570u: goto label_1ac570;
            case 0x1AC574u: goto label_1ac574;
            case 0x1AC578u: goto label_1ac578;
            case 0x1AC57Cu: goto label_1ac57c;
            case 0x1AC580u: goto label_1ac580;
            case 0x1AC584u: goto label_1ac584;
            case 0x1AC588u: goto label_1ac588;
            case 0x1AC58Cu: goto label_1ac58c;
            case 0x1AC590u: goto label_1ac590;
            case 0x1AC594u: goto label_1ac594;
            case 0x1AC598u: goto label_1ac598;
            case 0x1AC59Cu: goto label_1ac59c;
            case 0x1AC5A0u: goto label_1ac5a0;
            case 0x1AC5A4u: goto label_1ac5a4;
            case 0x1AC5A8u: goto label_1ac5a8;
            case 0x1AC5ACu: goto label_1ac5ac;
            case 0x1AC5B0u: goto label_1ac5b0;
            case 0x1AC5B4u: goto label_1ac5b4;
            case 0x1AC5B8u: goto label_1ac5b8;
            case 0x1AC5BCu: goto label_1ac5bc;
            case 0x1AC5C0u: goto label_1ac5c0;
            case 0x1AC5C4u: goto label_1ac5c4;
            case 0x1AC5C8u: goto label_1ac5c8;
            case 0x1AC5CCu: goto label_1ac5cc;
            case 0x1AC5D0u: goto label_1ac5d0;
            case 0x1AC5D4u: goto label_1ac5d4;
            case 0x1AC5D8u: goto label_1ac5d8;
            case 0x1AC5DCu: goto label_1ac5dc;
            case 0x1AC5E0u: goto label_1ac5e0;
            case 0x1AC5E4u: goto label_1ac5e4;
            case 0x1AC5E8u: goto label_1ac5e8;
            case 0x1AC5ECu: goto label_1ac5ec;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC5F4u: goto label_1ac5f4;
            case 0x1AC5F8u: goto label_1ac5f8;
            case 0x1AC5FCu: goto label_1ac5fc;
            case 0x1AC600u: goto label_1ac600;
            case 0x1AC604u: goto label_1ac604;
            case 0x1AC608u: goto label_1ac608;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC610u: goto label_1ac610;
            case 0x1AC614u: goto label_1ac614;
            case 0x1AC618u: goto label_1ac618;
            case 0x1AC61Cu: goto label_1ac61c;
            case 0x1AC620u: goto label_1ac620;
            case 0x1AC624u: goto label_1ac624;
            case 0x1AC628u: goto label_1ac628;
            case 0x1AC62Cu: goto label_1ac62c;
            case 0x1AC630u: goto label_1ac630;
            case 0x1AC634u: goto label_1ac634;
            case 0x1AC638u: goto label_1ac638;
            case 0x1AC63Cu: goto label_1ac63c;
            case 0x1AC640u: goto label_1ac640;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC648u: goto label_1ac648;
            case 0x1AC64Cu: goto label_1ac64c;
            case 0x1AC650u: goto label_1ac650;
            case 0x1AC654u: goto label_1ac654;
            case 0x1AC658u: goto label_1ac658;
            case 0x1AC65Cu: goto label_1ac65c;
            case 0x1AC660u: goto label_1ac660;
            case 0x1AC664u: goto label_1ac664;
            case 0x1AC668u: goto label_1ac668;
            case 0x1AC66Cu: goto label_1ac66c;
            case 0x1AC670u: goto label_1ac670;
            case 0x1AC674u: goto label_1ac674;
            case 0x1AC678u: goto label_1ac678;
            case 0x1AC67Cu: goto label_1ac67c;
            case 0x1AC680u: goto label_1ac680;
            case 0x1AC684u: goto label_1ac684;
            case 0x1AC688u: goto label_1ac688;
            case 0x1AC68Cu: goto label_1ac68c;
            case 0x1AC690u: goto label_1ac690;
            case 0x1AC694u: goto label_1ac694;
            case 0x1AC698u: goto label_1ac698;
            case 0x1AC69Cu: goto label_1ac69c;
            case 0x1AC6A0u: goto label_1ac6a0;
            case 0x1AC6A4u: goto label_1ac6a4;
            case 0x1AC6A8u: goto label_1ac6a8;
            case 0x1AC6ACu: goto label_1ac6ac;
            case 0x1AC6B0u: goto label_1ac6b0;
            case 0x1AC6B4u: goto label_1ac6b4;
            case 0x1AC6B8u: goto label_1ac6b8;
            case 0x1AC6BCu: goto label_1ac6bc;
            case 0x1AC6C0u: goto label_1ac6c0;
            case 0x1AC6C4u: goto label_1ac6c4;
            case 0x1AC6C8u: goto label_1ac6c8;
            case 0x1AC6CCu: goto label_1ac6cc;
            case 0x1AC6D0u: goto label_1ac6d0;
            case 0x1AC6D4u: goto label_1ac6d4;
            case 0x1AC6D8u: goto label_1ac6d8;
            case 0x1AC6DCu: goto label_1ac6dc;
            case 0x1AC6E0u: goto label_1ac6e0;
            case 0x1AC6E4u: goto label_1ac6e4;
            case 0x1AC6E8u: goto label_1ac6e8;
            case 0x1AC6ECu: goto label_1ac6ec;
            case 0x1AC6F0u: goto label_1ac6f0;
            case 0x1AC6F4u: goto label_1ac6f4;
            case 0x1AC6F8u: goto label_1ac6f8;
            case 0x1AC6FCu: goto label_1ac6fc;
            case 0x1AC700u: goto label_1ac700;
            case 0x1AC704u: goto label_1ac704;
            case 0x1AC708u: goto label_1ac708;
            case 0x1AC70Cu: goto label_1ac70c;
            case 0x1AC710u: goto label_1ac710;
            case 0x1AC714u: goto label_1ac714;
            case 0x1AC718u: goto label_1ac718;
            case 0x1AC71Cu: goto label_1ac71c;
            case 0x1AC720u: goto label_1ac720;
            case 0x1AC724u: goto label_1ac724;
            case 0x1AC728u: goto label_1ac728;
            case 0x1AC72Cu: goto label_1ac72c;
            case 0x1AC730u: goto label_1ac730;
            case 0x1AC734u: goto label_1ac734;
            case 0x1AC738u: goto label_1ac738;
            case 0x1AC73Cu: goto label_1ac73c;
            case 0x1AC740u: goto label_1ac740;
            case 0x1AC744u: goto label_1ac744;
            case 0x1AC748u: goto label_1ac748;
            case 0x1AC74Cu: goto label_1ac74c;
            case 0x1AC750u: goto label_1ac750;
            case 0x1AC754u: goto label_1ac754;
            case 0x1AC758u: goto label_1ac758;
            case 0x1AC75Cu: goto label_1ac75c;
            case 0x1AC760u: goto label_1ac760;
            case 0x1AC764u: goto label_1ac764;
            case 0x1AC768u: goto label_1ac768;
            case 0x1AC76Cu: goto label_1ac76c;
            case 0x1AC770u: goto label_1ac770;
            case 0x1AC774u: goto label_1ac774;
            case 0x1AC778u: goto label_1ac778;
            case 0x1AC77Cu: goto label_1ac77c;
            case 0x1AC780u: goto label_1ac780;
            case 0x1AC784u: goto label_1ac784;
            case 0x1AC788u: goto label_1ac788;
            case 0x1AC78Cu: goto label_1ac78c;
            case 0x1AC790u: goto label_1ac790;
            case 0x1AC794u: goto label_1ac794;
            case 0x1AC798u: goto label_1ac798;
            case 0x1AC79Cu: goto label_1ac79c;
            case 0x1AC7A0u: goto label_1ac7a0;
            case 0x1AC7A4u: goto label_1ac7a4;
            case 0x1AC7A8u: goto label_1ac7a8;
            case 0x1AC7ACu: goto label_1ac7ac;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC7B4u: goto label_1ac7b4;
            case 0x1AC7B8u: goto label_1ac7b8;
            case 0x1AC7BCu: goto label_1ac7bc;
            case 0x1AC7C0u: goto label_1ac7c0;
            case 0x1AC7C4u: goto label_1ac7c4;
            case 0x1AC7C8u: goto label_1ac7c8;
            case 0x1AC7CCu: goto label_1ac7cc;
            case 0x1AC7D0u: goto label_1ac7d0;
            case 0x1AC7D4u: goto label_1ac7d4;
            case 0x1AC7D8u: goto label_1ac7d8;
            case 0x1AC7DCu: goto label_1ac7dc;
            case 0x1AC7E0u: goto label_1ac7e0;
            case 0x1AC7E4u: goto label_1ac7e4;
            case 0x1AC7E8u: goto label_1ac7e8;
            case 0x1AC7ECu: goto label_1ac7ec;
            case 0x1AC7F0u: goto label_1ac7f0;
            case 0x1AC7F4u: goto label_1ac7f4;
            case 0x1AC7F8u: goto label_1ac7f8;
            case 0x1AC7FCu: goto label_1ac7fc;
            case 0x1AC800u: goto label_1ac800;
            case 0x1AC804u: goto label_1ac804;
            case 0x1AC808u: goto label_1ac808;
            case 0x1AC80Cu: goto label_1ac80c;
            case 0x1AC810u: goto label_1ac810;
            case 0x1AC814u: goto label_1ac814;
            case 0x1AC818u: goto label_1ac818;
            case 0x1AC81Cu: goto label_1ac81c;
            case 0x1AC820u: goto label_1ac820;
            case 0x1AC824u: goto label_1ac824;
            case 0x1AC828u: goto label_1ac828;
            case 0x1AC82Cu: goto label_1ac82c;
            case 0x1AC830u: goto label_1ac830;
            case 0x1AC834u: goto label_1ac834;
            case 0x1AC838u: goto label_1ac838;
            case 0x1AC83Cu: goto label_1ac83c;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC844u: goto label_1ac844;
            case 0x1AC848u: goto label_1ac848;
            case 0x1AC84Cu: goto label_1ac84c;
            case 0x1AC850u: goto label_1ac850;
            case 0x1AC854u: goto label_1ac854;
            case 0x1AC858u: goto label_1ac858;
            case 0x1AC85Cu: goto label_1ac85c;
            case 0x1AC860u: goto label_1ac860;
            case 0x1AC864u: goto label_1ac864;
            case 0x1AC868u: goto label_1ac868;
            case 0x1AC86Cu: goto label_1ac86c;
            case 0x1AC870u: goto label_1ac870;
            case 0x1AC874u: goto label_1ac874;
            case 0x1AC878u: goto label_1ac878;
            case 0x1AC87Cu: goto label_1ac87c;
            case 0x1AC880u: goto label_1ac880;
            case 0x1AC884u: goto label_1ac884;
            case 0x1AC888u: goto label_1ac888;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC890u: goto label_1ac890;
            case 0x1AC894u: goto label_1ac894;
            case 0x1AC898u: goto label_1ac898;
            case 0x1AC89Cu: goto label_1ac89c;
            case 0x1AC8A0u: goto label_1ac8a0;
            case 0x1AC8A4u: goto label_1ac8a4;
            case 0x1AC8A8u: goto label_1ac8a8;
            case 0x1AC8ACu: goto label_1ac8ac;
            case 0x1AC8B0u: goto label_1ac8b0;
            case 0x1AC8B4u: goto label_1ac8b4;
            case 0x1AC8B8u: goto label_1ac8b8;
            case 0x1AC8BCu: goto label_1ac8bc;
            case 0x1AC8C0u: goto label_1ac8c0;
            case 0x1AC8C4u: goto label_1ac8c4;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8CCu: goto label_1ac8cc;
            case 0x1AC8D0u: goto label_1ac8d0;
            case 0x1AC8D4u: goto label_1ac8d4;
            case 0x1AC8D8u: goto label_1ac8d8;
            case 0x1AC8DCu: goto label_1ac8dc;
            case 0x1AC8E0u: goto label_1ac8e0;
            case 0x1AC8E4u: goto label_1ac8e4;
            case 0x1AC8E8u: goto label_1ac8e8;
            case 0x1AC8ECu: goto label_1ac8ec;
            case 0x1AC8F0u: goto label_1ac8f0;
            case 0x1AC8F4u: goto label_1ac8f4;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC8FCu: goto label_1ac8fc;
            case 0x1AC900u: goto label_1ac900;
            case 0x1AC904u: goto label_1ac904;
            case 0x1AC908u: goto label_1ac908;
            case 0x1AC90Cu: goto label_1ac90c;
            case 0x1AC910u: goto label_1ac910;
            case 0x1AC914u: goto label_1ac914;
            case 0x1AC918u: goto label_1ac918;
            case 0x1AC91Cu: goto label_1ac91c;
            case 0x1AC920u: goto label_1ac920;
            case 0x1AC924u: goto label_1ac924;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC92Cu: goto label_1ac92c;
            case 0x1AC930u: goto label_1ac930;
            case 0x1AC934u: goto label_1ac934;
            case 0x1AC938u: goto label_1ac938;
            case 0x1AC93Cu: goto label_1ac93c;
            case 0x1AC940u: goto label_1ac940;
            case 0x1AC944u: goto label_1ac944;
            case 0x1AC948u: goto label_1ac948;
            case 0x1AC94Cu: goto label_1ac94c;
            case 0x1AC950u: goto label_1ac950;
            case 0x1AC954u: goto label_1ac954;
            case 0x1AC958u: goto label_1ac958;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC960u: goto label_1ac960;
            case 0x1AC964u: goto label_1ac964;
            case 0x1AC968u: goto label_1ac968;
            case 0x1AC96Cu: goto label_1ac96c;
            case 0x1AC970u: goto label_1ac970;
            case 0x1AC974u: goto label_1ac974;
            case 0x1AC978u: goto label_1ac978;
            case 0x1AC97Cu: goto label_1ac97c;
            case 0x1AC980u: goto label_1ac980;
            case 0x1AC984u: goto label_1ac984;
            case 0x1AC988u: goto label_1ac988;
            case 0x1AC98Cu: goto label_1ac98c;
            case 0x1AC990u: goto label_1ac990;
            case 0x1AC994u: goto label_1ac994;
            case 0x1AC998u: goto label_1ac998;
            case 0x1AC99Cu: goto label_1ac99c;
            case 0x1AC9A0u: goto label_1ac9a0;
            case 0x1AC9A4u: goto label_1ac9a4;
            case 0x1AC9A8u: goto label_1ac9a8;
            case 0x1AC9ACu: goto label_1ac9ac;
            case 0x1AC9B0u: goto label_1ac9b0;
            case 0x1AC9B4u: goto label_1ac9b4;
            case 0x1AC9B8u: goto label_1ac9b8;
            case 0x1AC9BCu: goto label_1ac9bc;
            case 0x1AC9C0u: goto label_1ac9c0;
            case 0x1AC9C4u: goto label_1ac9c4;
            case 0x1AC9C8u: goto label_1ac9c8;
            case 0x1AC9CCu: goto label_1ac9cc;
            case 0x1AC9D0u: goto label_1ac9d0;
            case 0x1AC9D4u: goto label_1ac9d4;
            case 0x1AC9D8u: goto label_1ac9d8;
            case 0x1AC9DCu: goto label_1ac9dc;
            case 0x1AC9E0u: goto label_1ac9e0;
            case 0x1AC9E4u: goto label_1ac9e4;
            case 0x1AC9E8u: goto label_1ac9e8;
            case 0x1AC9ECu: goto label_1ac9ec;
            case 0x1AC9F0u: goto label_1ac9f0;
            case 0x1AC9F4u: goto label_1ac9f4;
            case 0x1AC9F8u: goto label_1ac9f8;
            case 0x1AC9FCu: goto label_1ac9fc;
            case 0x1ACA00u: goto label_1aca00;
            case 0x1ACA04u: goto label_1aca04;
            case 0x1ACA08u: goto label_1aca08;
            case 0x1ACA0Cu: goto label_1aca0c;
            case 0x1ACA10u: goto label_1aca10;
            case 0x1ACA14u: goto label_1aca14;
            case 0x1ACA18u: goto label_1aca18;
            case 0x1ACA1Cu: goto label_1aca1c;
            case 0x1ACA20u: goto label_1aca20;
            case 0x1ACA24u: goto label_1aca24;
            case 0x1ACA28u: goto label_1aca28;
            case 0x1ACA2Cu: goto label_1aca2c;
            case 0x1ACA30u: goto label_1aca30;
            case 0x1ACA34u: goto label_1aca34;
            case 0x1ACA38u: goto label_1aca38;
            case 0x1ACA3Cu: goto label_1aca3c;
            case 0x1ACA40u: goto label_1aca40;
            case 0x1ACA44u: goto label_1aca44;
            case 0x1ACA48u: goto label_1aca48;
            case 0x1ACA4Cu: goto label_1aca4c;
            case 0x1ACA50u: goto label_1aca50;
            case 0x1ACA54u: goto label_1aca54;
            case 0x1ACA58u: goto label_1aca58;
            case 0x1ACA5Cu: goto label_1aca5c;
            case 0x1ACA60u: goto label_1aca60;
            case 0x1ACA64u: goto label_1aca64;
            case 0x1ACA68u: goto label_1aca68;
            case 0x1ACA6Cu: goto label_1aca6c;
            case 0x1ACA70u: goto label_1aca70;
            case 0x1ACA74u: goto label_1aca74;
            case 0x1ACA78u: goto label_1aca78;
            case 0x1ACA7Cu: goto label_1aca7c;
            case 0x1ACA80u: goto label_1aca80;
            case 0x1ACA84u: goto label_1aca84;
            case 0x1ACA88u: goto label_1aca88;
            case 0x1ACA8Cu: goto label_1aca8c;
            case 0x1ACA90u: goto label_1aca90;
            case 0x1ACA94u: goto label_1aca94;
            case 0x1ACA98u: goto label_1aca98;
            case 0x1ACA9Cu: goto label_1aca9c;
            case 0x1ACAA0u: goto label_1acaa0;
            case 0x1ACAA4u: goto label_1acaa4;
            case 0x1ACAA8u: goto label_1acaa8;
            case 0x1ACAACu: goto label_1acaac;
            case 0x1ACAB0u: goto label_1acab0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA74u; }
            if (ctx->pc != 0x1ACA74u) { return; }
        }
    }
    ctx->pc = 0x1ACA74u;
label_1aca74:
    // 0x1aca74: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aca78:
    if (ctx->pc == 0x1ACA78u) {
        ctx->pc = 0x1ACA7Cu;
        goto label_1aca7c;
    }
    ctx->pc = 0x1ACA74u;
    {
        const bool branch_taken_0x1aca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca74) {
            ctx->pc = 0x1ACAA0u;
            goto label_1acaa0;
        }
    }
    ctx->pc = 0x1ACA7Cu;
label_1aca7c:
    // 0x1aca7c: 0x0  nop
    ctx->pc = 0x1aca7cu;
    // NOP
label_1aca80:
    // 0x1aca80: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1aca80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1aca84:
    // 0x1aca84: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1aca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aca88:
    // 0x1aca88: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1aca88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1aca8c:
    // 0x1aca8c: 0x24c6b7c0  addiu       $a2, $a2, -0x4840
    ctx->pc = 0x1aca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948800));
label_1aca90:
    // 0x1aca90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aca90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aca94:
    // 0x1aca94: 0xc053ca4  jal         func_14F290
label_1aca98:
    if (ctx->pc == 0x1ACA98u) {
        ctx->pc = 0x1ACA98u;
            // 0x1aca98: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA9Cu;
        goto label_1aca9c;
    }
    ctx->pc = 0x1ACA94u;
    SET_GPR_U32(ctx, 31, 0x1ACA9Cu);
    ctx->pc = 0x1ACA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACA94u;
            // 0x1aca98: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA9Cu; }
        if (ctx->pc != 0x1ACA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACA9Cu; }
        if (ctx->pc != 0x1ACA9Cu) { return; }
    }
    ctx->pc = 0x1ACA9Cu;
label_1aca9c:
    // 0x1aca9c: 0x0  nop
    ctx->pc = 0x1aca9cu;
    // NOP
label_1acaa0:
    // 0x1acaa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1acaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acaa4:
    // 0x1acaa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1acaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1acaa8:
    // 0x1acaa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1acaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1acaac:
    // 0x1acaac: 0x3e00008  jr          $ra
label_1acab0:
    if (ctx->pc == 0x1ACAB0u) {
        ctx->pc = 0x1ACAB0u;
            // 0x1acab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1ACAB4u;
        goto label_fallthrough_0x1acaac;
    }
    ctx->pc = 0x1ACAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACAACu;
            // 0x1acab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABAB0u: goto label_1abab0;
            case 0x1ABAB4u: goto label_1abab4;
            case 0x1ABAB8u: goto label_1abab8;
            case 0x1ABABCu: goto label_1ababc;
            case 0x1ABAC0u: goto label_1abac0;
            case 0x1ABAC4u: goto label_1abac4;
            case 0x1ABAC8u: goto label_1abac8;
            case 0x1ABACCu: goto label_1abacc;
            case 0x1ABAD0u: goto label_1abad0;
            case 0x1ABAD4u: goto label_1abad4;
            case 0x1ABAD8u: goto label_1abad8;
            case 0x1ABADCu: goto label_1abadc;
            case 0x1ABAE0u: goto label_1abae0;
            case 0x1ABAE4u: goto label_1abae4;
            case 0x1ABAE8u: goto label_1abae8;
            case 0x1ABAECu: goto label_1abaec;
            case 0x1ABAF0u: goto label_1abaf0;
            case 0x1ABAF4u: goto label_1abaf4;
            case 0x1ABAF8u: goto label_1abaf8;
            case 0x1ABAFCu: goto label_1abafc;
            case 0x1ABB00u: goto label_1abb00;
            case 0x1ABB04u: goto label_1abb04;
            case 0x1ABB08u: goto label_1abb08;
            case 0x1ABB0Cu: goto label_1abb0c;
            case 0x1ABB10u: goto label_1abb10;
            case 0x1ABB14u: goto label_1abb14;
            case 0x1ABB18u: goto label_1abb18;
            case 0x1ABB1Cu: goto label_1abb1c;
            case 0x1ABB20u: goto label_1abb20;
            case 0x1ABB24u: goto label_1abb24;
            case 0x1ABB28u: goto label_1abb28;
            case 0x1ABB2Cu: goto label_1abb2c;
            case 0x1ABB30u: goto label_1abb30;
            case 0x1ABB34u: goto label_1abb34;
            case 0x1ABB38u: goto label_1abb38;
            case 0x1ABB3Cu: goto label_1abb3c;
            case 0x1ABB40u: goto label_1abb40;
            case 0x1ABB44u: goto label_1abb44;
            case 0x1ABB48u: goto label_1abb48;
            case 0x1ABB4Cu: goto label_1abb4c;
            case 0x1ABB50u: goto label_1abb50;
            case 0x1ABB54u: goto label_1abb54;
            case 0x1ABB58u: goto label_1abb58;
            case 0x1ABB5Cu: goto label_1abb5c;
            case 0x1ABB60u: goto label_1abb60;
            case 0x1ABB64u: goto label_1abb64;
            case 0x1ABB68u: goto label_1abb68;
            case 0x1ABB6Cu: goto label_1abb6c;
            case 0x1ABB70u: goto label_1abb70;
            case 0x1ABB74u: goto label_1abb74;
            case 0x1ABB78u: goto label_1abb78;
            case 0x1ABB7Cu: goto label_1abb7c;
            case 0x1ABB80u: goto label_1abb80;
            case 0x1ABB84u: goto label_1abb84;
            case 0x1ABB88u: goto label_1abb88;
            case 0x1ABB8Cu: goto label_1abb8c;
            case 0x1ABB90u: goto label_1abb90;
            case 0x1ABB94u: goto label_1abb94;
            case 0x1ABB98u: goto label_1abb98;
            case 0x1ABB9Cu: goto label_1abb9c;
            case 0x1ABBA0u: goto label_1abba0;
            case 0x1ABBA4u: goto label_1abba4;
            case 0x1ABBA8u: goto label_1abba8;
            case 0x1ABBACu: goto label_1abbac;
            case 0x1ABBB0u: goto label_1abbb0;
            case 0x1ABBB4u: goto label_1abbb4;
            case 0x1ABBB8u: goto label_1abbb8;
            case 0x1ABBBCu: goto label_1abbbc;
            case 0x1ABBC0u: goto label_1abbc0;
            case 0x1ABBC4u: goto label_1abbc4;
            case 0x1ABBC8u: goto label_1abbc8;
            case 0x1ABBCCu: goto label_1abbcc;
            case 0x1ABBD0u: goto label_1abbd0;
            case 0x1ABBD4u: goto label_1abbd4;
            case 0x1ABBD8u: goto label_1abbd8;
            case 0x1ABBDCu: goto label_1abbdc;
            case 0x1ABBE0u: goto label_1abbe0;
            case 0x1ABBE4u: goto label_1abbe4;
            case 0x1ABBE8u: goto label_1abbe8;
            case 0x1ABBECu: goto label_1abbec;
            case 0x1ABBF0u: goto label_1abbf0;
            case 0x1ABBF4u: goto label_1abbf4;
            case 0x1ABBF8u: goto label_1abbf8;
            case 0x1ABBFCu: goto label_1abbfc;
            case 0x1ABC00u: goto label_1abc00;
            case 0x1ABC04u: goto label_1abc04;
            case 0x1ABC08u: goto label_1abc08;
            case 0x1ABC0Cu: goto label_1abc0c;
            case 0x1ABC10u: goto label_1abc10;
            case 0x1ABC14u: goto label_1abc14;
            case 0x1ABC18u: goto label_1abc18;
            case 0x1ABC1Cu: goto label_1abc1c;
            case 0x1ABC20u: goto label_1abc20;
            case 0x1ABC24u: goto label_1abc24;
            case 0x1ABC28u: goto label_1abc28;
            case 0x1ABC2Cu: goto label_1abc2c;
            case 0x1ABC30u: goto label_1abc30;
            case 0x1ABC34u: goto label_1abc34;
            case 0x1ABC38u: goto label_1abc38;
            case 0x1ABC3Cu: goto label_1abc3c;
            case 0x1ABC40u: goto label_1abc40;
            case 0x1ABC44u: goto label_1abc44;
            case 0x1ABC48u: goto label_1abc48;
            case 0x1ABC4Cu: goto label_1abc4c;
            case 0x1ABC50u: goto label_1abc50;
            case 0x1ABC54u: goto label_1abc54;
            case 0x1ABC58u: goto label_1abc58;
            case 0x1ABC5Cu: goto label_1abc5c;
            case 0x1ABC60u: goto label_1abc60;
            case 0x1ABC64u: goto label_1abc64;
            case 0x1ABC68u: goto label_1abc68;
            case 0x1ABC6Cu: goto label_1abc6c;
            case 0x1ABC70u: goto label_1abc70;
            case 0x1ABC74u: goto label_1abc74;
            case 0x1ABC78u: goto label_1abc78;
            case 0x1ABC7Cu: goto label_1abc7c;
            case 0x1ABC80u: goto label_1abc80;
            case 0x1ABC84u: goto label_1abc84;
            case 0x1ABC88u: goto label_1abc88;
            case 0x1ABC8Cu: goto label_1abc8c;
            case 0x1ABC90u: goto label_1abc90;
            case 0x1ABC94u: goto label_1abc94;
            case 0x1ABC98u: goto label_1abc98;
            case 0x1ABC9Cu: goto label_1abc9c;
            case 0x1ABCA0u: goto label_1abca0;
            case 0x1ABCA4u: goto label_1abca4;
            case 0x1ABCA8u: goto label_1abca8;
            case 0x1ABCACu: goto label_1abcac;
            case 0x1ABCB0u: goto label_1abcb0;
            case 0x1ABCB4u: goto label_1abcb4;
            case 0x1ABCB8u: goto label_1abcb8;
            case 0x1ABCBCu: goto label_1abcbc;
            case 0x1ABCC0u: goto label_1abcc0;
            case 0x1ABCC4u: goto label_1abcc4;
            case 0x1ABCC8u: goto label_1abcc8;
            case 0x1ABCCCu: goto label_1abccc;
            case 0x1ABCD0u: goto label_1abcd0;
            case 0x1ABCD4u: goto label_1abcd4;
            case 0x1ABCD8u: goto label_1abcd8;
            case 0x1ABCDCu: goto label_1abcdc;
            case 0x1ABCE0u: goto label_1abce0;
            case 0x1ABCE4u: goto label_1abce4;
            case 0x1ABCE8u: goto label_1abce8;
            case 0x1ABCECu: goto label_1abcec;
            case 0x1ABCF0u: goto label_1abcf0;
            case 0x1ABCF4u: goto label_1abcf4;
            case 0x1ABCF8u: goto label_1abcf8;
            case 0x1ABCFCu: goto label_1abcfc;
            case 0x1ABD00u: goto label_1abd00;
            case 0x1ABD04u: goto label_1abd04;
            case 0x1ABD08u: goto label_1abd08;
            case 0x1ABD0Cu: goto label_1abd0c;
            case 0x1ABD10u: goto label_1abd10;
            case 0x1ABD14u: goto label_1abd14;
            case 0x1ABD18u: goto label_1abd18;
            case 0x1ABD1Cu: goto label_1abd1c;
            case 0x1ABD20u: goto label_1abd20;
            case 0x1ABD24u: goto label_1abd24;
            case 0x1ABD28u: goto label_1abd28;
            case 0x1ABD2Cu: goto label_1abd2c;
            case 0x1ABD30u: goto label_1abd30;
            case 0x1ABD34u: goto label_1abd34;
            case 0x1ABD38u: goto label_1abd38;
            case 0x1ABD3Cu: goto label_1abd3c;
            case 0x1ABD40u: goto label_1abd40;
            case 0x1ABD44u: goto label_1abd44;
            case 0x1ABD48u: goto label_1abd48;
            case 0x1ABD4Cu: goto label_1abd4c;
            case 0x1ABD50u: goto label_1abd50;
            case 0x1ABD54u: goto label_1abd54;
            case 0x1ABD58u: goto label_1abd58;
            case 0x1ABD5Cu: goto label_1abd5c;
            case 0x1ABD60u: goto label_1abd60;
            case 0x1ABD64u: goto label_1abd64;
            case 0x1ABD68u: goto label_1abd68;
            case 0x1ABD6Cu: goto label_1abd6c;
            case 0x1ABD70u: goto label_1abd70;
            case 0x1ABD74u: goto label_1abd74;
            case 0x1ABD78u: goto label_1abd78;
            case 0x1ABD7Cu: goto label_1abd7c;
            case 0x1ABD80u: goto label_1abd80;
            case 0x1ABD84u: goto label_1abd84;
            case 0x1ABD88u: goto label_1abd88;
            case 0x1ABD8Cu: goto label_1abd8c;
            case 0x1ABD90u: goto label_1abd90;
            case 0x1ABD94u: goto label_1abd94;
            case 0x1ABD98u: goto label_1abd98;
            case 0x1ABD9Cu: goto label_1abd9c;
            case 0x1ABDA0u: goto label_1abda0;
            case 0x1ABDA4u: goto label_1abda4;
            case 0x1ABDA8u: goto label_1abda8;
            case 0x1ABDACu: goto label_1abdac;
            case 0x1ABDB0u: goto label_1abdb0;
            case 0x1ABDB4u: goto label_1abdb4;
            case 0x1ABDB8u: goto label_1abdb8;
            case 0x1ABDBCu: goto label_1abdbc;
            case 0x1ABDC0u: goto label_1abdc0;
            case 0x1ABDC4u: goto label_1abdc4;
            case 0x1ABDC8u: goto label_1abdc8;
            case 0x1ABDCCu: goto label_1abdcc;
            case 0x1ABDD0u: goto label_1abdd0;
            case 0x1ABDD4u: goto label_1abdd4;
            case 0x1ABDD8u: goto label_1abdd8;
            case 0x1ABDDCu: goto label_1abddc;
            case 0x1ABDE0u: goto label_1abde0;
            case 0x1ABDE4u: goto label_1abde4;
            case 0x1ABDE8u: goto label_1abde8;
            case 0x1ABDECu: goto label_1abdec;
            case 0x1ABDF0u: goto label_1abdf0;
            case 0x1ABDF4u: goto label_1abdf4;
            case 0x1ABDF8u: goto label_1abdf8;
            case 0x1ABDFCu: goto label_1abdfc;
            case 0x1ABE00u: goto label_1abe00;
            case 0x1ABE04u: goto label_1abe04;
            case 0x1ABE08u: goto label_1abe08;
            case 0x1ABE0Cu: goto label_1abe0c;
            case 0x1ABE10u: goto label_1abe10;
            case 0x1ABE14u: goto label_1abe14;
            case 0x1ABE18u: goto label_1abe18;
            case 0x1ABE1Cu: goto label_1abe1c;
            case 0x1ABE20u: goto label_1abe20;
            case 0x1ABE24u: goto label_1abe24;
            case 0x1ABE28u: goto label_1abe28;
            case 0x1ABE2Cu: goto label_1abe2c;
            case 0x1ABE30u: goto label_1abe30;
            case 0x1ABE34u: goto label_1abe34;
            case 0x1ABE38u: goto label_1abe38;
            case 0x1ABE3Cu: goto label_1abe3c;
            case 0x1ABE40u: goto label_1abe40;
            case 0x1ABE44u: goto label_1abe44;
            case 0x1ABE48u: goto label_1abe48;
            case 0x1ABE4Cu: goto label_1abe4c;
            case 0x1ABE50u: goto label_1abe50;
            case 0x1ABE54u: goto label_1abe54;
            case 0x1ABE58u: goto label_1abe58;
            case 0x1ABE5Cu: goto label_1abe5c;
            case 0x1ABE60u: goto label_1abe60;
            case 0x1ABE64u: goto label_1abe64;
            case 0x1ABE68u: goto label_1abe68;
            case 0x1ABE6Cu: goto label_1abe6c;
            case 0x1ABE70u: goto label_1abe70;
            case 0x1ABE74u: goto label_1abe74;
            case 0x1ABE78u: goto label_1abe78;
            case 0x1ABE7Cu: goto label_1abe7c;
            case 0x1ABE80u: goto label_1abe80;
            case 0x1ABE84u: goto label_1abe84;
            case 0x1ABE88u: goto label_1abe88;
            case 0x1ABE8Cu: goto label_1abe8c;
            case 0x1ABE90u: goto label_1abe90;
            case 0x1ABE94u: goto label_1abe94;
            case 0x1ABE98u: goto label_1abe98;
            case 0x1ABE9Cu: goto label_1abe9c;
            case 0x1ABEA0u: goto label_1abea0;
            case 0x1ABEA4u: goto label_1abea4;
            case 0x1ABEA8u: goto label_1abea8;
            case 0x1ABEACu: goto label_1abeac;
            case 0x1ABEB0u: goto label_1abeb0;
            case 0x1ABEB4u: goto label_1abeb4;
            case 0x1ABEB8u: goto label_1abeb8;
            case 0x1ABEBCu: goto label_1abebc;
            case 0x1ABEC0u: goto label_1abec0;
            case 0x1ABEC4u: goto label_1abec4;
            case 0x1ABEC8u: goto label_1abec8;
            case 0x1ABECCu: goto label_1abecc;
            case 0x1ABED0u: goto label_1abed0;
            case 0x1ABED4u: goto label_1abed4;
            case 0x1ABED8u: goto label_1abed8;
            case 0x1ABEDCu: goto label_1abedc;
            case 0x1ABEE0u: goto label_1abee0;
            case 0x1ABEE4u: goto label_1abee4;
            case 0x1ABEE8u: goto label_1abee8;
            case 0x1ABEECu: goto label_1abeec;
            case 0x1ABEF0u: goto label_1abef0;
            case 0x1ABEF4u: goto label_1abef4;
            case 0x1ABEF8u: goto label_1abef8;
            case 0x1ABEFCu: goto label_1abefc;
            case 0x1ABF00u: goto label_1abf00;
            case 0x1ABF04u: goto label_1abf04;
            case 0x1ABF08u: goto label_1abf08;
            case 0x1ABF0Cu: goto label_1abf0c;
            case 0x1ABF10u: goto label_1abf10;
            case 0x1ABF14u: goto label_1abf14;
            case 0x1ABF18u: goto label_1abf18;
            case 0x1ABF1Cu: goto label_1abf1c;
            case 0x1ABF20u: goto label_1abf20;
            case 0x1ABF24u: goto label_1abf24;
            case 0x1ABF28u: goto label_1abf28;
            case 0x1ABF2Cu: goto label_1abf2c;
            case 0x1ABF30u: goto label_1abf30;
            case 0x1ABF34u: goto label_1abf34;
            case 0x1ABF38u: goto label_1abf38;
            case 0x1ABF3Cu: goto label_1abf3c;
            case 0x1ABF40u: goto label_1abf40;
            case 0x1ABF44u: goto label_1abf44;
            case 0x1ABF48u: goto label_1abf48;
            case 0x1ABF4Cu: goto label_1abf4c;
            case 0x1ABF50u: goto label_1abf50;
            case 0x1ABF54u: goto label_1abf54;
            case 0x1ABF58u: goto label_1abf58;
            case 0x1ABF5Cu: goto label_1abf5c;
            case 0x1ABF60u: goto label_1abf60;
            case 0x1ABF64u: goto label_1abf64;
            case 0x1ABF68u: goto label_1abf68;
            case 0x1ABF6Cu: goto label_1abf6c;
            case 0x1ABF70u: goto label_1abf70;
            case 0x1ABF74u: goto label_1abf74;
            case 0x1ABF78u: goto label_1abf78;
            case 0x1ABF7Cu: goto label_1abf7c;
            case 0x1ABF80u: goto label_1abf80;
            case 0x1ABF84u: goto label_1abf84;
            case 0x1ABF88u: goto label_1abf88;
            case 0x1ABF8Cu: goto label_1abf8c;
            case 0x1ABF90u: goto label_1abf90;
            case 0x1ABF94u: goto label_1abf94;
            case 0x1ABF98u: goto label_1abf98;
            case 0x1ABF9Cu: goto label_1abf9c;
            case 0x1ABFA0u: goto label_1abfa0;
            case 0x1ABFA4u: goto label_1abfa4;
            case 0x1ABFA8u: goto label_1abfa8;
            case 0x1ABFACu: goto label_1abfac;
            case 0x1ABFB0u: goto label_1abfb0;
            case 0x1ABFB4u: goto label_1abfb4;
            case 0x1ABFB8u: goto label_1abfb8;
            case 0x1ABFBCu: goto label_1abfbc;
            case 0x1ABFC0u: goto label_1abfc0;
            case 0x1ABFC4u: goto label_1abfc4;
            case 0x1ABFC8u: goto label_1abfc8;
            case 0x1ABFCCu: goto label_1abfcc;
            case 0x1ABFD0u: goto label_1abfd0;
            case 0x1ABFD4u: goto label_1abfd4;
            case 0x1ABFD8u: goto label_1abfd8;
            case 0x1ABFDCu: goto label_1abfdc;
            case 0x1ABFE0u: goto label_1abfe0;
            case 0x1ABFE4u: goto label_1abfe4;
            case 0x1ABFE8u: goto label_1abfe8;
            case 0x1ABFECu: goto label_1abfec;
            case 0x1ABFF0u: goto label_1abff0;
            case 0x1ABFF4u: goto label_1abff4;
            case 0x1ABFF8u: goto label_1abff8;
            case 0x1ABFFCu: goto label_1abffc;
            case 0x1AC000u: goto label_1ac000;
            case 0x1AC004u: goto label_1ac004;
            case 0x1AC008u: goto label_1ac008;
            case 0x1AC00Cu: goto label_1ac00c;
            case 0x1AC010u: goto label_1ac010;
            case 0x1AC014u: goto label_1ac014;
            case 0x1AC018u: goto label_1ac018;
            case 0x1AC01Cu: goto label_1ac01c;
            case 0x1AC020u: goto label_1ac020;
            case 0x1AC024u: goto label_1ac024;
            case 0x1AC028u: goto label_1ac028;
            case 0x1AC02Cu: goto label_1ac02c;
            case 0x1AC030u: goto label_1ac030;
            case 0x1AC034u: goto label_1ac034;
            case 0x1AC038u: goto label_1ac038;
            case 0x1AC03Cu: goto label_1ac03c;
            case 0x1AC040u: goto label_1ac040;
            case 0x1AC044u: goto label_1ac044;
            case 0x1AC048u: goto label_1ac048;
            case 0x1AC04Cu: goto label_1ac04c;
            case 0x1AC050u: goto label_1ac050;
            case 0x1AC054u: goto label_1ac054;
            case 0x1AC058u: goto label_1ac058;
            case 0x1AC05Cu: goto label_1ac05c;
            case 0x1AC060u: goto label_1ac060;
            case 0x1AC064u: goto label_1ac064;
            case 0x1AC068u: goto label_1ac068;
            case 0x1AC06Cu: goto label_1ac06c;
            case 0x1AC070u: goto label_1ac070;
            case 0x1AC074u: goto label_1ac074;
            case 0x1AC078u: goto label_1ac078;
            case 0x1AC07Cu: goto label_1ac07c;
            case 0x1AC080u: goto label_1ac080;
            case 0x1AC084u: goto label_1ac084;
            case 0x1AC088u: goto label_1ac088;
            case 0x1AC08Cu: goto label_1ac08c;
            case 0x1AC090u: goto label_1ac090;
            case 0x1AC094u: goto label_1ac094;
            case 0x1AC098u: goto label_1ac098;
            case 0x1AC09Cu: goto label_1ac09c;
            case 0x1AC0A0u: goto label_1ac0a0;
            case 0x1AC0A4u: goto label_1ac0a4;
            case 0x1AC0A8u: goto label_1ac0a8;
            case 0x1AC0ACu: goto label_1ac0ac;
            case 0x1AC0B0u: goto label_1ac0b0;
            case 0x1AC0B4u: goto label_1ac0b4;
            case 0x1AC0B8u: goto label_1ac0b8;
            case 0x1AC0BCu: goto label_1ac0bc;
            case 0x1AC0C0u: goto label_1ac0c0;
            case 0x1AC0C4u: goto label_1ac0c4;
            case 0x1AC0C8u: goto label_1ac0c8;
            case 0x1AC0CCu: goto label_1ac0cc;
            case 0x1AC0D0u: goto label_1ac0d0;
            case 0x1AC0D4u: goto label_1ac0d4;
            case 0x1AC0D8u: goto label_1ac0d8;
            case 0x1AC0DCu: goto label_1ac0dc;
            case 0x1AC0E0u: goto label_1ac0e0;
            case 0x1AC0E4u: goto label_1ac0e4;
            case 0x1AC0E8u: goto label_1ac0e8;
            case 0x1AC0ECu: goto label_1ac0ec;
            case 0x1AC0F0u: goto label_1ac0f0;
            case 0x1AC0F4u: goto label_1ac0f4;
            case 0x1AC0F8u: goto label_1ac0f8;
            case 0x1AC0FCu: goto label_1ac0fc;
            case 0x1AC100u: goto label_1ac100;
            case 0x1AC104u: goto label_1ac104;
            case 0x1AC108u: goto label_1ac108;
            case 0x1AC10Cu: goto label_1ac10c;
            case 0x1AC110u: goto label_1ac110;
            case 0x1AC114u: goto label_1ac114;
            case 0x1AC118u: goto label_1ac118;
            case 0x1AC11Cu: goto label_1ac11c;
            case 0x1AC120u: goto label_1ac120;
            case 0x1AC124u: goto label_1ac124;
            case 0x1AC128u: goto label_1ac128;
            case 0x1AC12Cu: goto label_1ac12c;
            case 0x1AC130u: goto label_1ac130;
            case 0x1AC134u: goto label_1ac134;
            case 0x1AC138u: goto label_1ac138;
            case 0x1AC13Cu: goto label_1ac13c;
            case 0x1AC140u: goto label_1ac140;
            case 0x1AC144u: goto label_1ac144;
            case 0x1AC148u: goto label_1ac148;
            case 0x1AC14Cu: goto label_1ac14c;
            case 0x1AC150u: goto label_1ac150;
            case 0x1AC154u: goto label_1ac154;
            case 0x1AC158u: goto label_1ac158;
            case 0x1AC15Cu: goto label_1ac15c;
            case 0x1AC160u: goto label_1ac160;
            case 0x1AC164u: goto label_1ac164;
            case 0x1AC168u: goto label_1ac168;
            case 0x1AC16Cu: goto label_1ac16c;
            case 0x1AC170u: goto label_1ac170;
            case 0x1AC174u: goto label_1ac174;
            case 0x1AC178u: goto label_1ac178;
            case 0x1AC17Cu: goto label_1ac17c;
            case 0x1AC180u: goto label_1ac180;
            case 0x1AC184u: goto label_1ac184;
            case 0x1AC188u: goto label_1ac188;
            case 0x1AC18Cu: goto label_1ac18c;
            case 0x1AC190u: goto label_1ac190;
            case 0x1AC194u: goto label_1ac194;
            case 0x1AC198u: goto label_1ac198;
            case 0x1AC19Cu: goto label_1ac19c;
            case 0x1AC1A0u: goto label_1ac1a0;
            case 0x1AC1A4u: goto label_1ac1a4;
            case 0x1AC1A8u: goto label_1ac1a8;
            case 0x1AC1ACu: goto label_1ac1ac;
            case 0x1AC1B0u: goto label_1ac1b0;
            case 0x1AC1B4u: goto label_1ac1b4;
            case 0x1AC1B8u: goto label_1ac1b8;
            case 0x1AC1BCu: goto label_1ac1bc;
            case 0x1AC1C0u: goto label_1ac1c0;
            case 0x1AC1C4u: goto label_1ac1c4;
            case 0x1AC1C8u: goto label_1ac1c8;
            case 0x1AC1CCu: goto label_1ac1cc;
            case 0x1AC1D0u: goto label_1ac1d0;
            case 0x1AC1D4u: goto label_1ac1d4;
            case 0x1AC1D8u: goto label_1ac1d8;
            case 0x1AC1DCu: goto label_1ac1dc;
            case 0x1AC1E0u: goto label_1ac1e0;
            case 0x1AC1E4u: goto label_1ac1e4;
            case 0x1AC1E8u: goto label_1ac1e8;
            case 0x1AC1ECu: goto label_1ac1ec;
            case 0x1AC1F0u: goto label_1ac1f0;
            case 0x1AC1F4u: goto label_1ac1f4;
            case 0x1AC1F8u: goto label_1ac1f8;
            case 0x1AC1FCu: goto label_1ac1fc;
            case 0x1AC200u: goto label_1ac200;
            case 0x1AC204u: goto label_1ac204;
            case 0x1AC208u: goto label_1ac208;
            case 0x1AC20Cu: goto label_1ac20c;
            case 0x1AC210u: goto label_1ac210;
            case 0x1AC214u: goto label_1ac214;
            case 0x1AC218u: goto label_1ac218;
            case 0x1AC21Cu: goto label_1ac21c;
            case 0x1AC220u: goto label_1ac220;
            case 0x1AC224u: goto label_1ac224;
            case 0x1AC228u: goto label_1ac228;
            case 0x1AC22Cu: goto label_1ac22c;
            case 0x1AC230u: goto label_1ac230;
            case 0x1AC234u: goto label_1ac234;
            case 0x1AC238u: goto label_1ac238;
            case 0x1AC23Cu: goto label_1ac23c;
            case 0x1AC240u: goto label_1ac240;
            case 0x1AC244u: goto label_1ac244;
            case 0x1AC248u: goto label_1ac248;
            case 0x1AC24Cu: goto label_1ac24c;
            case 0x1AC250u: goto label_1ac250;
            case 0x1AC254u: goto label_1ac254;
            case 0x1AC258u: goto label_1ac258;
            case 0x1AC25Cu: goto label_1ac25c;
            case 0x1AC260u: goto label_1ac260;
            case 0x1AC264u: goto label_1ac264;
            case 0x1AC268u: goto label_1ac268;
            case 0x1AC26Cu: goto label_1ac26c;
            case 0x1AC270u: goto label_1ac270;
            case 0x1AC274u: goto label_1ac274;
            case 0x1AC278u: goto label_1ac278;
            case 0x1AC27Cu: goto label_1ac27c;
            case 0x1AC280u: goto label_1ac280;
            case 0x1AC284u: goto label_1ac284;
            case 0x1AC288u: goto label_1ac288;
            case 0x1AC28Cu: goto label_1ac28c;
            case 0x1AC290u: goto label_1ac290;
            case 0x1AC294u: goto label_1ac294;
            case 0x1AC298u: goto label_1ac298;
            case 0x1AC29Cu: goto label_1ac29c;
            case 0x1AC2A0u: goto label_1ac2a0;
            case 0x1AC2A4u: goto label_1ac2a4;
            case 0x1AC2A8u: goto label_1ac2a8;
            case 0x1AC2ACu: goto label_1ac2ac;
            case 0x1AC2B0u: goto label_1ac2b0;
            case 0x1AC2B4u: goto label_1ac2b4;
            case 0x1AC2B8u: goto label_1ac2b8;
            case 0x1AC2BCu: goto label_1ac2bc;
            case 0x1AC2C0u: goto label_1ac2c0;
            case 0x1AC2C4u: goto label_1ac2c4;
            case 0x1AC2C8u: goto label_1ac2c8;
            case 0x1AC2CCu: goto label_1ac2cc;
            case 0x1AC2D0u: goto label_1ac2d0;
            case 0x1AC2D4u: goto label_1ac2d4;
            case 0x1AC2D8u: goto label_1ac2d8;
            case 0x1AC2DCu: goto label_1ac2dc;
            case 0x1AC2E0u: goto label_1ac2e0;
            case 0x1AC2E4u: goto label_1ac2e4;
            case 0x1AC2E8u: goto label_1ac2e8;
            case 0x1AC2ECu: goto label_1ac2ec;
            case 0x1AC2F0u: goto label_1ac2f0;
            case 0x1AC2F4u: goto label_1ac2f4;
            case 0x1AC2F8u: goto label_1ac2f8;
            case 0x1AC2FCu: goto label_1ac2fc;
            case 0x1AC300u: goto label_1ac300;
            case 0x1AC304u: goto label_1ac304;
            case 0x1AC308u: goto label_1ac308;
            case 0x1AC30Cu: goto label_1ac30c;
            case 0x1AC310u: goto label_1ac310;
            case 0x1AC314u: goto label_1ac314;
            case 0x1AC318u: goto label_1ac318;
            case 0x1AC31Cu: goto label_1ac31c;
            case 0x1AC320u: goto label_1ac320;
            case 0x1AC324u: goto label_1ac324;
            case 0x1AC328u: goto label_1ac328;
            case 0x1AC32Cu: goto label_1ac32c;
            case 0x1AC330u: goto label_1ac330;
            case 0x1AC334u: goto label_1ac334;
            case 0x1AC338u: goto label_1ac338;
            case 0x1AC33Cu: goto label_1ac33c;
            case 0x1AC340u: goto label_1ac340;
            case 0x1AC344u: goto label_1ac344;
            case 0x1AC348u: goto label_1ac348;
            case 0x1AC34Cu: goto label_1ac34c;
            case 0x1AC350u: goto label_1ac350;
            case 0x1AC354u: goto label_1ac354;
            case 0x1AC358u: goto label_1ac358;
            case 0x1AC35Cu: goto label_1ac35c;
            case 0x1AC360u: goto label_1ac360;
            case 0x1AC364u: goto label_1ac364;
            case 0x1AC368u: goto label_1ac368;
            case 0x1AC36Cu: goto label_1ac36c;
            case 0x1AC370u: goto label_1ac370;
            case 0x1AC374u: goto label_1ac374;
            case 0x1AC378u: goto label_1ac378;
            case 0x1AC37Cu: goto label_1ac37c;
            case 0x1AC380u: goto label_1ac380;
            case 0x1AC384u: goto label_1ac384;
            case 0x1AC388u: goto label_1ac388;
            case 0x1AC38Cu: goto label_1ac38c;
            case 0x1AC390u: goto label_1ac390;
            case 0x1AC394u: goto label_1ac394;
            case 0x1AC398u: goto label_1ac398;
            case 0x1AC39Cu: goto label_1ac39c;
            case 0x1AC3A0u: goto label_1ac3a0;
            case 0x1AC3A4u: goto label_1ac3a4;
            case 0x1AC3A8u: goto label_1ac3a8;
            case 0x1AC3ACu: goto label_1ac3ac;
            case 0x1AC3B0u: goto label_1ac3b0;
            case 0x1AC3B4u: goto label_1ac3b4;
            case 0x1AC3B8u: goto label_1ac3b8;
            case 0x1AC3BCu: goto label_1ac3bc;
            case 0x1AC3C0u: goto label_1ac3c0;
            case 0x1AC3C4u: goto label_1ac3c4;
            case 0x1AC3C8u: goto label_1ac3c8;
            case 0x1AC3CCu: goto label_1ac3cc;
            case 0x1AC3D0u: goto label_1ac3d0;
            case 0x1AC3D4u: goto label_1ac3d4;
            case 0x1AC3D8u: goto label_1ac3d8;
            case 0x1AC3DCu: goto label_1ac3dc;
            case 0x1AC3E0u: goto label_1ac3e0;
            case 0x1AC3E4u: goto label_1ac3e4;
            case 0x1AC3E8u: goto label_1ac3e8;
            case 0x1AC3ECu: goto label_1ac3ec;
            case 0x1AC3F0u: goto label_1ac3f0;
            case 0x1AC3F4u: goto label_1ac3f4;
            case 0x1AC3F8u: goto label_1ac3f8;
            case 0x1AC3FCu: goto label_1ac3fc;
            case 0x1AC400u: goto label_1ac400;
            case 0x1AC404u: goto label_1ac404;
            case 0x1AC408u: goto label_1ac408;
            case 0x1AC40Cu: goto label_1ac40c;
            case 0x1AC410u: goto label_1ac410;
            case 0x1AC414u: goto label_1ac414;
            case 0x1AC418u: goto label_1ac418;
            case 0x1AC41Cu: goto label_1ac41c;
            case 0x1AC420u: goto label_1ac420;
            case 0x1AC424u: goto label_1ac424;
            case 0x1AC428u: goto label_1ac428;
            case 0x1AC42Cu: goto label_1ac42c;
            case 0x1AC430u: goto label_1ac430;
            case 0x1AC434u: goto label_1ac434;
            case 0x1AC438u: goto label_1ac438;
            case 0x1AC43Cu: goto label_1ac43c;
            case 0x1AC440u: goto label_1ac440;
            case 0x1AC444u: goto label_1ac444;
            case 0x1AC448u: goto label_1ac448;
            case 0x1AC44Cu: goto label_1ac44c;
            case 0x1AC450u: goto label_1ac450;
            case 0x1AC454u: goto label_1ac454;
            case 0x1AC458u: goto label_1ac458;
            case 0x1AC45Cu: goto label_1ac45c;
            case 0x1AC460u: goto label_1ac460;
            case 0x1AC464u: goto label_1ac464;
            case 0x1AC468u: goto label_1ac468;
            case 0x1AC46Cu: goto label_1ac46c;
            case 0x1AC470u: goto label_1ac470;
            case 0x1AC474u: goto label_1ac474;
            case 0x1AC478u: goto label_1ac478;
            case 0x1AC47Cu: goto label_1ac47c;
            case 0x1AC480u: goto label_1ac480;
            case 0x1AC484u: goto label_1ac484;
            case 0x1AC488u: goto label_1ac488;
            case 0x1AC48Cu: goto label_1ac48c;
            case 0x1AC490u: goto label_1ac490;
            case 0x1AC494u: goto label_1ac494;
            case 0x1AC498u: goto label_1ac498;
            case 0x1AC49Cu: goto label_1ac49c;
            case 0x1AC4A0u: goto label_1ac4a0;
            case 0x1AC4A4u: goto label_1ac4a4;
            case 0x1AC4A8u: goto label_1ac4a8;
            case 0x1AC4ACu: goto label_1ac4ac;
            case 0x1AC4B0u: goto label_1ac4b0;
            case 0x1AC4B4u: goto label_1ac4b4;
            case 0x1AC4B8u: goto label_1ac4b8;
            case 0x1AC4BCu: goto label_1ac4bc;
            case 0x1AC4C0u: goto label_1ac4c0;
            case 0x1AC4C4u: goto label_1ac4c4;
            case 0x1AC4C8u: goto label_1ac4c8;
            case 0x1AC4CCu: goto label_1ac4cc;
            case 0x1AC4D0u: goto label_1ac4d0;
            case 0x1AC4D4u: goto label_1ac4d4;
            case 0x1AC4D8u: goto label_1ac4d8;
            case 0x1AC4DCu: goto label_1ac4dc;
            case 0x1AC4E0u: goto label_1ac4e0;
            case 0x1AC4E4u: goto label_1ac4e4;
            case 0x1AC4E8u: goto label_1ac4e8;
            case 0x1AC4ECu: goto label_1ac4ec;
            case 0x1AC4F0u: goto label_1ac4f0;
            case 0x1AC4F4u: goto label_1ac4f4;
            case 0x1AC4F8u: goto label_1ac4f8;
            case 0x1AC4FCu: goto label_1ac4fc;
            case 0x1AC500u: goto label_1ac500;
            case 0x1AC504u: goto label_1ac504;
            case 0x1AC508u: goto label_1ac508;
            case 0x1AC50Cu: goto label_1ac50c;
            case 0x1AC510u: goto label_1ac510;
            case 0x1AC514u: goto label_1ac514;
            case 0x1AC518u: goto label_1ac518;
            case 0x1AC51Cu: goto label_1ac51c;
            case 0x1AC520u: goto label_1ac520;
            case 0x1AC524u: goto label_1ac524;
            case 0x1AC528u: goto label_1ac528;
            case 0x1AC52Cu: goto label_1ac52c;
            case 0x1AC530u: goto label_1ac530;
            case 0x1AC534u: goto label_1ac534;
            case 0x1AC538u: goto label_1ac538;
            case 0x1AC53Cu: goto label_1ac53c;
            case 0x1AC540u: goto label_1ac540;
            case 0x1AC544u: goto label_1ac544;
            case 0x1AC548u: goto label_1ac548;
            case 0x1AC54Cu: goto label_1ac54c;
            case 0x1AC550u: goto label_1ac550;
            case 0x1AC554u: goto label_1ac554;
            case 0x1AC558u: goto label_1ac558;
            case 0x1AC55Cu: goto label_1ac55c;
            case 0x1AC560u: goto label_1ac560;
            case 0x1AC564u: goto label_1ac564;
            case 0x1AC568u: goto label_1ac568;
            case 0x1AC56Cu: goto label_1ac56c;
            case 0x1AC570u: goto label_1ac570;
            case 0x1AC574u: goto label_1ac574;
            case 0x1AC578u: goto label_1ac578;
            case 0x1AC57Cu: goto label_1ac57c;
            case 0x1AC580u: goto label_1ac580;
            case 0x1AC584u: goto label_1ac584;
            case 0x1AC588u: goto label_1ac588;
            case 0x1AC58Cu: goto label_1ac58c;
            case 0x1AC590u: goto label_1ac590;
            case 0x1AC594u: goto label_1ac594;
            case 0x1AC598u: goto label_1ac598;
            case 0x1AC59Cu: goto label_1ac59c;
            case 0x1AC5A0u: goto label_1ac5a0;
            case 0x1AC5A4u: goto label_1ac5a4;
            case 0x1AC5A8u: goto label_1ac5a8;
            case 0x1AC5ACu: goto label_1ac5ac;
            case 0x1AC5B0u: goto label_1ac5b0;
            case 0x1AC5B4u: goto label_1ac5b4;
            case 0x1AC5B8u: goto label_1ac5b8;
            case 0x1AC5BCu: goto label_1ac5bc;
            case 0x1AC5C0u: goto label_1ac5c0;
            case 0x1AC5C4u: goto label_1ac5c4;
            case 0x1AC5C8u: goto label_1ac5c8;
            case 0x1AC5CCu: goto label_1ac5cc;
            case 0x1AC5D0u: goto label_1ac5d0;
            case 0x1AC5D4u: goto label_1ac5d4;
            case 0x1AC5D8u: goto label_1ac5d8;
            case 0x1AC5DCu: goto label_1ac5dc;
            case 0x1AC5E0u: goto label_1ac5e0;
            case 0x1AC5E4u: goto label_1ac5e4;
            case 0x1AC5E8u: goto label_1ac5e8;
            case 0x1AC5ECu: goto label_1ac5ec;
            case 0x1AC5F0u: goto label_1ac5f0;
            case 0x1AC5F4u: goto label_1ac5f4;
            case 0x1AC5F8u: goto label_1ac5f8;
            case 0x1AC5FCu: goto label_1ac5fc;
            case 0x1AC600u: goto label_1ac600;
            case 0x1AC604u: goto label_1ac604;
            case 0x1AC608u: goto label_1ac608;
            case 0x1AC60Cu: goto label_1ac60c;
            case 0x1AC610u: goto label_1ac610;
            case 0x1AC614u: goto label_1ac614;
            case 0x1AC618u: goto label_1ac618;
            case 0x1AC61Cu: goto label_1ac61c;
            case 0x1AC620u: goto label_1ac620;
            case 0x1AC624u: goto label_1ac624;
            case 0x1AC628u: goto label_1ac628;
            case 0x1AC62Cu: goto label_1ac62c;
            case 0x1AC630u: goto label_1ac630;
            case 0x1AC634u: goto label_1ac634;
            case 0x1AC638u: goto label_1ac638;
            case 0x1AC63Cu: goto label_1ac63c;
            case 0x1AC640u: goto label_1ac640;
            case 0x1AC644u: goto label_1ac644;
            case 0x1AC648u: goto label_1ac648;
            case 0x1AC64Cu: goto label_1ac64c;
            case 0x1AC650u: goto label_1ac650;
            case 0x1AC654u: goto label_1ac654;
            case 0x1AC658u: goto label_1ac658;
            case 0x1AC65Cu: goto label_1ac65c;
            case 0x1AC660u: goto label_1ac660;
            case 0x1AC664u: goto label_1ac664;
            case 0x1AC668u: goto label_1ac668;
            case 0x1AC66Cu: goto label_1ac66c;
            case 0x1AC670u: goto label_1ac670;
            case 0x1AC674u: goto label_1ac674;
            case 0x1AC678u: goto label_1ac678;
            case 0x1AC67Cu: goto label_1ac67c;
            case 0x1AC680u: goto label_1ac680;
            case 0x1AC684u: goto label_1ac684;
            case 0x1AC688u: goto label_1ac688;
            case 0x1AC68Cu: goto label_1ac68c;
            case 0x1AC690u: goto label_1ac690;
            case 0x1AC694u: goto label_1ac694;
            case 0x1AC698u: goto label_1ac698;
            case 0x1AC69Cu: goto label_1ac69c;
            case 0x1AC6A0u: goto label_1ac6a0;
            case 0x1AC6A4u: goto label_1ac6a4;
            case 0x1AC6A8u: goto label_1ac6a8;
            case 0x1AC6ACu: goto label_1ac6ac;
            case 0x1AC6B0u: goto label_1ac6b0;
            case 0x1AC6B4u: goto label_1ac6b4;
            case 0x1AC6B8u: goto label_1ac6b8;
            case 0x1AC6BCu: goto label_1ac6bc;
            case 0x1AC6C0u: goto label_1ac6c0;
            case 0x1AC6C4u: goto label_1ac6c4;
            case 0x1AC6C8u: goto label_1ac6c8;
            case 0x1AC6CCu: goto label_1ac6cc;
            case 0x1AC6D0u: goto label_1ac6d0;
            case 0x1AC6D4u: goto label_1ac6d4;
            case 0x1AC6D8u: goto label_1ac6d8;
            case 0x1AC6DCu: goto label_1ac6dc;
            case 0x1AC6E0u: goto label_1ac6e0;
            case 0x1AC6E4u: goto label_1ac6e4;
            case 0x1AC6E8u: goto label_1ac6e8;
            case 0x1AC6ECu: goto label_1ac6ec;
            case 0x1AC6F0u: goto label_1ac6f0;
            case 0x1AC6F4u: goto label_1ac6f4;
            case 0x1AC6F8u: goto label_1ac6f8;
            case 0x1AC6FCu: goto label_1ac6fc;
            case 0x1AC700u: goto label_1ac700;
            case 0x1AC704u: goto label_1ac704;
            case 0x1AC708u: goto label_1ac708;
            case 0x1AC70Cu: goto label_1ac70c;
            case 0x1AC710u: goto label_1ac710;
            case 0x1AC714u: goto label_1ac714;
            case 0x1AC718u: goto label_1ac718;
            case 0x1AC71Cu: goto label_1ac71c;
            case 0x1AC720u: goto label_1ac720;
            case 0x1AC724u: goto label_1ac724;
            case 0x1AC728u: goto label_1ac728;
            case 0x1AC72Cu: goto label_1ac72c;
            case 0x1AC730u: goto label_1ac730;
            case 0x1AC734u: goto label_1ac734;
            case 0x1AC738u: goto label_1ac738;
            case 0x1AC73Cu: goto label_1ac73c;
            case 0x1AC740u: goto label_1ac740;
            case 0x1AC744u: goto label_1ac744;
            case 0x1AC748u: goto label_1ac748;
            case 0x1AC74Cu: goto label_1ac74c;
            case 0x1AC750u: goto label_1ac750;
            case 0x1AC754u: goto label_1ac754;
            case 0x1AC758u: goto label_1ac758;
            case 0x1AC75Cu: goto label_1ac75c;
            case 0x1AC760u: goto label_1ac760;
            case 0x1AC764u: goto label_1ac764;
            case 0x1AC768u: goto label_1ac768;
            case 0x1AC76Cu: goto label_1ac76c;
            case 0x1AC770u: goto label_1ac770;
            case 0x1AC774u: goto label_1ac774;
            case 0x1AC778u: goto label_1ac778;
            case 0x1AC77Cu: goto label_1ac77c;
            case 0x1AC780u: goto label_1ac780;
            case 0x1AC784u: goto label_1ac784;
            case 0x1AC788u: goto label_1ac788;
            case 0x1AC78Cu: goto label_1ac78c;
            case 0x1AC790u: goto label_1ac790;
            case 0x1AC794u: goto label_1ac794;
            case 0x1AC798u: goto label_1ac798;
            case 0x1AC79Cu: goto label_1ac79c;
            case 0x1AC7A0u: goto label_1ac7a0;
            case 0x1AC7A4u: goto label_1ac7a4;
            case 0x1AC7A8u: goto label_1ac7a8;
            case 0x1AC7ACu: goto label_1ac7ac;
            case 0x1AC7B0u: goto label_1ac7b0;
            case 0x1AC7B4u: goto label_1ac7b4;
            case 0x1AC7B8u: goto label_1ac7b8;
            case 0x1AC7BCu: goto label_1ac7bc;
            case 0x1AC7C0u: goto label_1ac7c0;
            case 0x1AC7C4u: goto label_1ac7c4;
            case 0x1AC7C8u: goto label_1ac7c8;
            case 0x1AC7CCu: goto label_1ac7cc;
            case 0x1AC7D0u: goto label_1ac7d0;
            case 0x1AC7D4u: goto label_1ac7d4;
            case 0x1AC7D8u: goto label_1ac7d8;
            case 0x1AC7DCu: goto label_1ac7dc;
            case 0x1AC7E0u: goto label_1ac7e0;
            case 0x1AC7E4u: goto label_1ac7e4;
            case 0x1AC7E8u: goto label_1ac7e8;
            case 0x1AC7ECu: goto label_1ac7ec;
            case 0x1AC7F0u: goto label_1ac7f0;
            case 0x1AC7F4u: goto label_1ac7f4;
            case 0x1AC7F8u: goto label_1ac7f8;
            case 0x1AC7FCu: goto label_1ac7fc;
            case 0x1AC800u: goto label_1ac800;
            case 0x1AC804u: goto label_1ac804;
            case 0x1AC808u: goto label_1ac808;
            case 0x1AC80Cu: goto label_1ac80c;
            case 0x1AC810u: goto label_1ac810;
            case 0x1AC814u: goto label_1ac814;
            case 0x1AC818u: goto label_1ac818;
            case 0x1AC81Cu: goto label_1ac81c;
            case 0x1AC820u: goto label_1ac820;
            case 0x1AC824u: goto label_1ac824;
            case 0x1AC828u: goto label_1ac828;
            case 0x1AC82Cu: goto label_1ac82c;
            case 0x1AC830u: goto label_1ac830;
            case 0x1AC834u: goto label_1ac834;
            case 0x1AC838u: goto label_1ac838;
            case 0x1AC83Cu: goto label_1ac83c;
            case 0x1AC840u: goto label_1ac840;
            case 0x1AC844u: goto label_1ac844;
            case 0x1AC848u: goto label_1ac848;
            case 0x1AC84Cu: goto label_1ac84c;
            case 0x1AC850u: goto label_1ac850;
            case 0x1AC854u: goto label_1ac854;
            case 0x1AC858u: goto label_1ac858;
            case 0x1AC85Cu: goto label_1ac85c;
            case 0x1AC860u: goto label_1ac860;
            case 0x1AC864u: goto label_1ac864;
            case 0x1AC868u: goto label_1ac868;
            case 0x1AC86Cu: goto label_1ac86c;
            case 0x1AC870u: goto label_1ac870;
            case 0x1AC874u: goto label_1ac874;
            case 0x1AC878u: goto label_1ac878;
            case 0x1AC87Cu: goto label_1ac87c;
            case 0x1AC880u: goto label_1ac880;
            case 0x1AC884u: goto label_1ac884;
            case 0x1AC888u: goto label_1ac888;
            case 0x1AC88Cu: goto label_1ac88c;
            case 0x1AC890u: goto label_1ac890;
            case 0x1AC894u: goto label_1ac894;
            case 0x1AC898u: goto label_1ac898;
            case 0x1AC89Cu: goto label_1ac89c;
            case 0x1AC8A0u: goto label_1ac8a0;
            case 0x1AC8A4u: goto label_1ac8a4;
            case 0x1AC8A8u: goto label_1ac8a8;
            case 0x1AC8ACu: goto label_1ac8ac;
            case 0x1AC8B0u: goto label_1ac8b0;
            case 0x1AC8B4u: goto label_1ac8b4;
            case 0x1AC8B8u: goto label_1ac8b8;
            case 0x1AC8BCu: goto label_1ac8bc;
            case 0x1AC8C0u: goto label_1ac8c0;
            case 0x1AC8C4u: goto label_1ac8c4;
            case 0x1AC8C8u: goto label_1ac8c8;
            case 0x1AC8CCu: goto label_1ac8cc;
            case 0x1AC8D0u: goto label_1ac8d0;
            case 0x1AC8D4u: goto label_1ac8d4;
            case 0x1AC8D8u: goto label_1ac8d8;
            case 0x1AC8DCu: goto label_1ac8dc;
            case 0x1AC8E0u: goto label_1ac8e0;
            case 0x1AC8E4u: goto label_1ac8e4;
            case 0x1AC8E8u: goto label_1ac8e8;
            case 0x1AC8ECu: goto label_1ac8ec;
            case 0x1AC8F0u: goto label_1ac8f0;
            case 0x1AC8F4u: goto label_1ac8f4;
            case 0x1AC8F8u: goto label_1ac8f8;
            case 0x1AC8FCu: goto label_1ac8fc;
            case 0x1AC900u: goto label_1ac900;
            case 0x1AC904u: goto label_1ac904;
            case 0x1AC908u: goto label_1ac908;
            case 0x1AC90Cu: goto label_1ac90c;
            case 0x1AC910u: goto label_1ac910;
            case 0x1AC914u: goto label_1ac914;
            case 0x1AC918u: goto label_1ac918;
            case 0x1AC91Cu: goto label_1ac91c;
            case 0x1AC920u: goto label_1ac920;
            case 0x1AC924u: goto label_1ac924;
            case 0x1AC928u: goto label_1ac928;
            case 0x1AC92Cu: goto label_1ac92c;
            case 0x1AC930u: goto label_1ac930;
            case 0x1AC934u: goto label_1ac934;
            case 0x1AC938u: goto label_1ac938;
            case 0x1AC93Cu: goto label_1ac93c;
            case 0x1AC940u: goto label_1ac940;
            case 0x1AC944u: goto label_1ac944;
            case 0x1AC948u: goto label_1ac948;
            case 0x1AC94Cu: goto label_1ac94c;
            case 0x1AC950u: goto label_1ac950;
            case 0x1AC954u: goto label_1ac954;
            case 0x1AC958u: goto label_1ac958;
            case 0x1AC95Cu: goto label_1ac95c;
            case 0x1AC960u: goto label_1ac960;
            case 0x1AC964u: goto label_1ac964;
            case 0x1AC968u: goto label_1ac968;
            case 0x1AC96Cu: goto label_1ac96c;
            case 0x1AC970u: goto label_1ac970;
            case 0x1AC974u: goto label_1ac974;
            case 0x1AC978u: goto label_1ac978;
            case 0x1AC97Cu: goto label_1ac97c;
            case 0x1AC980u: goto label_1ac980;
            case 0x1AC984u: goto label_1ac984;
            case 0x1AC988u: goto label_1ac988;
            case 0x1AC98Cu: goto label_1ac98c;
            case 0x1AC990u: goto label_1ac990;
            case 0x1AC994u: goto label_1ac994;
            case 0x1AC998u: goto label_1ac998;
            case 0x1AC99Cu: goto label_1ac99c;
            case 0x1AC9A0u: goto label_1ac9a0;
            case 0x1AC9A4u: goto label_1ac9a4;
            case 0x1AC9A8u: goto label_1ac9a8;
            case 0x1AC9ACu: goto label_1ac9ac;
            case 0x1AC9B0u: goto label_1ac9b0;
            case 0x1AC9B4u: goto label_1ac9b4;
            case 0x1AC9B8u: goto label_1ac9b8;
            case 0x1AC9BCu: goto label_1ac9bc;
            case 0x1AC9C0u: goto label_1ac9c0;
            case 0x1AC9C4u: goto label_1ac9c4;
            case 0x1AC9C8u: goto label_1ac9c8;
            case 0x1AC9CCu: goto label_1ac9cc;
            case 0x1AC9D0u: goto label_1ac9d0;
            case 0x1AC9D4u: goto label_1ac9d4;
            case 0x1AC9D8u: goto label_1ac9d8;
            case 0x1AC9DCu: goto label_1ac9dc;
            case 0x1AC9E0u: goto label_1ac9e0;
            case 0x1AC9E4u: goto label_1ac9e4;
            case 0x1AC9E8u: goto label_1ac9e8;
            case 0x1AC9ECu: goto label_1ac9ec;
            case 0x1AC9F0u: goto label_1ac9f0;
            case 0x1AC9F4u: goto label_1ac9f4;
            case 0x1AC9F8u: goto label_1ac9f8;
            case 0x1AC9FCu: goto label_1ac9fc;
            case 0x1ACA00u: goto label_1aca00;
            case 0x1ACA04u: goto label_1aca04;
            case 0x1ACA08u: goto label_1aca08;
            case 0x1ACA0Cu: goto label_1aca0c;
            case 0x1ACA10u: goto label_1aca10;
            case 0x1ACA14u: goto label_1aca14;
            case 0x1ACA18u: goto label_1aca18;
            case 0x1ACA1Cu: goto label_1aca1c;
            case 0x1ACA20u: goto label_1aca20;
            case 0x1ACA24u: goto label_1aca24;
            case 0x1ACA28u: goto label_1aca28;
            case 0x1ACA2Cu: goto label_1aca2c;
            case 0x1ACA30u: goto label_1aca30;
            case 0x1ACA34u: goto label_1aca34;
            case 0x1ACA38u: goto label_1aca38;
            case 0x1ACA3Cu: goto label_1aca3c;
            case 0x1ACA40u: goto label_1aca40;
            case 0x1ACA44u: goto label_1aca44;
            case 0x1ACA48u: goto label_1aca48;
            case 0x1ACA4Cu: goto label_1aca4c;
            case 0x1ACA50u: goto label_1aca50;
            case 0x1ACA54u: goto label_1aca54;
            case 0x1ACA58u: goto label_1aca58;
            case 0x1ACA5Cu: goto label_1aca5c;
            case 0x1ACA60u: goto label_1aca60;
            case 0x1ACA64u: goto label_1aca64;
            case 0x1ACA68u: goto label_1aca68;
            case 0x1ACA6Cu: goto label_1aca6c;
            case 0x1ACA70u: goto label_1aca70;
            case 0x1ACA74u: goto label_1aca74;
            case 0x1ACA78u: goto label_1aca78;
            case 0x1ACA7Cu: goto label_1aca7c;
            case 0x1ACA80u: goto label_1aca80;
            case 0x1ACA84u: goto label_1aca84;
            case 0x1ACA88u: goto label_1aca88;
            case 0x1ACA8Cu: goto label_1aca8c;
            case 0x1ACA90u: goto label_1aca90;
            case 0x1ACA94u: goto label_1aca94;
            case 0x1ACA98u: goto label_1aca98;
            case 0x1ACA9Cu: goto label_1aca9c;
            case 0x1ACAA0u: goto label_1acaa0;
            case 0x1ACAA4u: goto label_1acaa4;
            case 0x1ACAA8u: goto label_1acaa8;
            case 0x1ACAACu: goto label_1acaac;
            case 0x1ACAB0u: goto label_1acab0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1acaac:
    ctx->pc = 0x1ACAB4u;
}
