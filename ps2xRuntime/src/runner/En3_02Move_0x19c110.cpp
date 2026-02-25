#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_02Move
// Address: 0x19c110 - 0x19c79c
void En3_02Move_0x19c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_02Move_0x19c110");
#endif

    ctx->pc = 0x19c110u;

label_19c110:
    // 0x19c110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19c114:
    // 0x19c114: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19c114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19c118:
    // 0x19c118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19c11c:
    // 0x19c11c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c11cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c120:
    // 0x19c120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19c124:
    // 0x19c124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c128:
    // 0x19c128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19c12c:
    // 0x19c12c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c130:
    // 0x19c130: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x19c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19c134:
    // 0x19c134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c138:
    // 0x19c138: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x19c138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c13c:
    // 0x19c13c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19c13cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19c140:
    // 0x19c140: 0xe4610114  swc1        $f1, 0x114($v1)
    ctx->pc = 0x19c140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
label_19c144:
    // 0x19c144: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c148:
    // 0x19c148: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x19c148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19c14c:
    // 0x19c14c: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x19c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c150:
    // 0x19c150: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19c150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19c154:
    // 0x19c154: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x19c154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_19c158:
    // 0x19c158: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c15c:
    // 0x19c15c: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x19c15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19c160:
    // 0x19c160: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19c160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c164:
    // 0x19c164: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19c164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19c168:
    // 0x19c168: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x19c168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_19c16c:
    // 0x19c16c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19c170:
    // 0x19c170: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c174:
    // 0x19c174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c178:
    // 0x19c178: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19c17c:
    if (ctx->pc == 0x19C17Cu) {
        ctx->pc = 0x19C17Cu;
            // 0x19c17c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x19C180u;
        goto label_19c180;
    }
    ctx->pc = 0x19C178u;
    {
        const bool branch_taken_0x19c178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C178u;
            // 0x19c17c: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c178) {
            ctx->pc = 0x19C198u;
            goto label_19c198;
        }
    }
    ctx->pc = 0x19C180u;
label_19c180:
    // 0x19c180: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19c184:
    // 0x19c184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c184u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c188:
    // 0x19c188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c18c:
    // 0x19c18c: 0x0  nop
    ctx->pc = 0x19c18cu;
    // NOP
label_19c190:
    // 0x19c190: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c194:
    // 0x19c194: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19c194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19c198:
    // 0x19c198: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c19c:
    // 0x19c19c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19c1a0:
    // 0x19c1a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c1a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c1a4:
    // 0x19c1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c1a8:
    // 0x19c1a8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x19c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c1ac:
    // 0x19c1ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c1acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c1b0:
    // 0x19c1b0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19c1b4:
    if (ctx->pc == 0x19C1B4u) {
        ctx->pc = 0x19C1B4u;
            // 0x19c1b4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x19C1B8u;
        goto label_19c1b8;
    }
    ctx->pc = 0x19C1B0u;
    {
        const bool branch_taken_0x19c1b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1B0u;
            // 0x19c1b4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1b0) {
            ctx->pc = 0x19C1D0u;
            goto label_19c1d0;
        }
    }
    ctx->pc = 0x19C1B8u;
label_19c1b8:
    // 0x19c1b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19c1bc:
    // 0x19c1bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c1bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c1c0:
    // 0x19c1c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c1c4:
    // 0x19c1c4: 0x0  nop
    ctx->pc = 0x19c1c4u;
    // NOP
label_19c1c8:
    // 0x19c1c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19c1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19c1cc:
    // 0x19c1cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c1d0:
    // 0x19c1d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c1d4:
    // 0x19c1d4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19c1d8:
    // 0x19c1d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c1d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c1dc:
    // 0x19c1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c1e0:
    // 0x19c1e0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19c1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c1e4:
    // 0x19c1e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c1e8:
    // 0x19c1e8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19c1ec:
    if (ctx->pc == 0x19C1ECu) {
        ctx->pc = 0x19C1ECu;
            // 0x19c1ec: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19C1F0u;
        goto label_19c1f0;
    }
    ctx->pc = 0x19C1E8u;
    {
        const bool branch_taken_0x19c1e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1E8u;
            // 0x19c1ec: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c1e8) {
            ctx->pc = 0x19C208u;
            goto label_19c208;
        }
    }
    ctx->pc = 0x19C1F0u;
label_19c1f0:
    // 0x19c1f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19c1f4:
    // 0x19c1f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c1f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c1f8:
    // 0x19c1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c1fc:
    // 0x19c1fc: 0x0  nop
    ctx->pc = 0x19c1fcu;
    // NOP
label_19c200:
    // 0x19c200: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c204:
    // 0x19c204: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c208:
    // 0x19c208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19c208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c20c:
    // 0x19c20c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19c210:
    // 0x19c210: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c210u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c214:
    // 0x19c214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c218:
    // 0x19c218: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19c218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c21c:
    // 0x19c21c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c21cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c220:
    // 0x19c220: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19c224:
    if (ctx->pc == 0x19C224u) {
        ctx->pc = 0x19C224u;
            // 0x19c224: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19C228u;
        goto label_19c228;
    }
    ctx->pc = 0x19C220u;
    {
        const bool branch_taken_0x19c220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C220u;
            // 0x19c224: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c220) {
            ctx->pc = 0x19C240u;
            goto label_19c240;
        }
    }
    ctx->pc = 0x19C228u;
label_19c228:
    // 0x19c228: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19c22c:
    // 0x19c22c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c22cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c230:
    // 0x19c230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c234:
    // 0x19c234: 0x0  nop
    ctx->pc = 0x19c234u;
    // NOP
label_19c238:
    // 0x19c238: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19c238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19c23c:
    // 0x19c23c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c240:
    // 0x19c240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c244:
    // 0x19c244: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19c244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19c248:
    // 0x19c248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c248u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c24c:
    // 0x19c24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c250:
    // 0x19c250: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x19c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c254:
    // 0x19c254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c258:
    // 0x19c258: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19c25c:
    if (ctx->pc == 0x19C25Cu) {
        ctx->pc = 0x19C25Cu;
            // 0x19c25c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x19C260u;
        goto label_19c260;
    }
    ctx->pc = 0x19C258u;
    {
        const bool branch_taken_0x19c258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C258u;
            // 0x19c25c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c258) {
            ctx->pc = 0x19C278u;
            goto label_19c278;
        }
    }
    ctx->pc = 0x19C260u;
label_19c260:
    // 0x19c260: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19c260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19c264:
    // 0x19c264: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c264u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c268:
    // 0x19c268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c26c:
    // 0x19c26c: 0x0  nop
    ctx->pc = 0x19c26cu;
    // NOP
label_19c270:
    // 0x19c270: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c274:
    // 0x19c274: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c278:
    // 0x19c278: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c27c:
    // 0x19c27c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19c280:
    // 0x19c280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c280u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c284:
    // 0x19c284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c288:
    // 0x19c288: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x19c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c28c:
    // 0x19c28c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c290:
    // 0x19c290: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19c294:
    if (ctx->pc == 0x19C294u) {
        ctx->pc = 0x19C294u;
            // 0x19c294: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x19C298u;
        goto label_19c298;
    }
    ctx->pc = 0x19C290u;
    {
        const bool branch_taken_0x19c290 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C290u;
            // 0x19c294: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c290) {
            ctx->pc = 0x19C2B0u;
            goto label_19c2b0;
        }
    }
    ctx->pc = 0x19C298u;
label_19c298:
    // 0x19c298: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19c29c:
    // 0x19c29c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19c29cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19c2a0:
    // 0x19c2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c2a4:
    // 0x19c2a4: 0x0  nop
    ctx->pc = 0x19c2a4u;
    // NOP
label_19c2a8:
    // 0x19c2a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19c2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19c2ac:
    // 0x19c2ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19c2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19c2b0:
    // 0x19c2b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c2b4:
    // 0x19c2b4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x19c2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_19c2b8:
    // 0x19c2b8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x19c2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c2bc:
    // 0x19c2bc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19c2c0:
    // 0x19c2c0: 0xc0671e8  jal         func_19C7A0
label_19c2c4:
    if (ctx->pc == 0x19C2C4u) {
        ctx->pc = 0x19C2C4u;
            // 0x19c2c4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x19C2C8u;
        goto label_19c2c8;
    }
    ctx->pc = 0x19C2C0u;
    SET_GPR_U32(ctx, 31, 0x19C2C8u);
    ctx->pc = 0x19C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2C0u;
            // 0x19c2c4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (runtime->hasFunction(0x19C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x19C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2C8u; }
        if (ctx->pc != 0x19C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x19c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2C8u; }
        if (ctx->pc != 0x19C2C8u) { return; }
    }
    ctx->pc = 0x19C2C8u;
label_19c2c8:
    // 0x19c2c8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_19c2cc:
    // 0x19c2cc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x19c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_19c2d0:
    // 0x19c2d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c2d4:
    // 0x19c2d4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x19c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_19c2d8:
    // 0x19c2d8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19c2dc:
    // 0x19c2dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19c2e0:
    if (ctx->pc == 0x19C2E0u) {
        ctx->pc = 0x19C2E4u;
        goto label_19c2e4;
    }
    ctx->pc = 0x19C2DCu;
    {
        const bool branch_taken_0x19c2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2dc) {
            ctx->pc = 0x19C2F0u;
            goto label_19c2f0;
        }
    }
    ctx->pc = 0x19C2E4u;
label_19c2e4:
    // 0x19c2e4: 0x10000066  b           . + 4 + (0x66 << 2)
label_19c2e8:
    if (ctx->pc == 0x19C2E8u) {
        ctx->pc = 0x19C2ECu;
        goto label_19c2ec;
    }
    ctx->pc = 0x19C2E4u;
    {
        const bool branch_taken_0x19c2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c2e4) {
            ctx->pc = 0x19C480u;
            goto label_19c480;
        }
    }
    ctx->pc = 0x19C2ECu;
label_19c2ec:
    // 0x19c2ec: 0x0  nop
    ctx->pc = 0x19c2ecu;
    // NOP
label_19c2f0:
    // 0x19c2f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_19c2f4:
    // 0x19c2f4: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x19c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_19c2f8:
    // 0x19c2f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_19c2fc:
    // 0x19c2fc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x19c2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19c300:
    // 0x19c300: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19c304:
    // 0x19c304: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_19c308:
    // 0x19c308: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x19c308u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19c30c:
    // 0x19c30c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x19c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_19c310:
    // 0x19c310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c314:
    // 0x19c314: 0x0  nop
    ctx->pc = 0x19c314u;
    // NOP
label_19c318:
    // 0x19c318: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19c31c:
    // 0x19c31c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x19c31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19c320:
    // 0x19c320: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x19c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19c324:
    // 0x19c324: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19c328:
    // 0x19c328: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19c328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_19c32c:
    // 0x19c32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c330:
    // 0x19c330: 0x0  nop
    ctx->pc = 0x19c330u;
    // NOP
label_19c334:
    // 0x19c334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19c334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19c338:
    // 0x19c338: 0xc04b6ee  jal         func_12DBB8
label_19c33c:
    if (ctx->pc == 0x19C33Cu) {
        ctx->pc = 0x19C33Cu;
            // 0x19c33c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x19C340u;
        goto label_19c340;
    }
    ctx->pc = 0x19C338u;
    SET_GPR_U32(ctx, 31, 0x19C340u);
    ctx->pc = 0x19C33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C338u;
            // 0x19c33c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C340u; }
        if (ctx->pc != 0x19C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C340u; }
        if (ctx->pc != 0x19C340u) { return; }
    }
    ctx->pc = 0x19C340u;
label_19c340:
    // 0x19c340: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c344:
    // 0x19c344: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19c344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c348:
    // 0x19c348: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19c348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c34c:
    // 0x19c34c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c34cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19c350:
    // 0x19c350: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c350u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c354:
    // 0x19c354: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19c358:
    if (ctx->pc == 0x19C358u) {
        ctx->pc = 0x19C358u;
            // 0x19c358: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x19C35Cu;
        goto label_19c35c;
    }
    ctx->pc = 0x19C354u;
    {
        const bool branch_taken_0x19c354 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C354u;
            // 0x19c358: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c354) {
            ctx->pc = 0x19C368u;
            goto label_19c368;
        }
    }
    ctx->pc = 0x19C35Cu;
label_19c35c:
    // 0x19c35c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19c35cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19c360:
    // 0x19c360: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x19c360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_19c364:
    // 0x19c364: 0x0  nop
    ctx->pc = 0x19c364u;
    // NOP
label_19c368:
    // 0x19c368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c36c:
    // 0x19c36c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x19c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c370:
    // 0x19c370: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19c370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c374:
    // 0x19c374: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c374u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_19c378:
    // 0x19c378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c37c:
    // 0x19c37c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_19c380:
    if (ctx->pc == 0x19C380u) {
        ctx->pc = 0x19C380u;
            // 0x19c380: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x19C384u;
        goto label_19c384;
    }
    ctx->pc = 0x19C37Cu;
    {
        const bool branch_taken_0x19c37c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C37Cu;
            // 0x19c380: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c37c) {
            ctx->pc = 0x19C390u;
            goto label_19c390;
        }
    }
    ctx->pc = 0x19C384u;
label_19c384:
    // 0x19c384: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19c384u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19c388:
    // 0x19c388: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x19c388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_19c38c:
    // 0x19c38c: 0x0  nop
    ctx->pc = 0x19c38cu;
    // NOP
label_19c390:
    // 0x19c390: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_19c394:
    // 0x19c394: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x19c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c398:
    // 0x19c398: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x19c398u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_19c39c:
    // 0x19c39c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_19c3a0:
    // 0x19c3a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19c3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19c3a4:
    // 0x19c3a4: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x19c3a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_19c3a8:
    // 0x19c3a8: 0xc040d72  jal         func_1035C8
label_19c3ac:
    if (ctx->pc == 0x19C3ACu) {
        ctx->pc = 0x19C3ACu;
            // 0x19c3ac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x19C3B0u;
        goto label_19c3b0;
    }
    ctx->pc = 0x19C3A8u;
    SET_GPR_U32(ctx, 31, 0x19C3B0u);
    ctx->pc = 0x19C3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3A8u;
            // 0x19c3ac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3B0u; }
        if (ctx->pc != 0x19C3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3B0u; }
        if (ctx->pc != 0x19C3B0u) { return; }
    }
    ctx->pc = 0x19C3B0u;
label_19c3b0:
    // 0x19c3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c3b4:
    // 0x19c3b4: 0xc040880  jal         func_102200
label_19c3b8:
    if (ctx->pc == 0x19C3B8u) {
        ctx->pc = 0x19C3B8u;
            // 0x19c3b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C3BCu;
        goto label_19c3bc;
    }
    ctx->pc = 0x19C3B4u;
    SET_GPR_U32(ctx, 31, 0x19C3BCu);
    ctx->pc = 0x19C3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3B4u;
            // 0x19c3b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3BCu; }
        if (ctx->pc != 0x19C3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3BCu; }
        if (ctx->pc != 0x19C3BCu) { return; }
    }
    ctx->pc = 0x19C3BCu;
label_19c3bc:
    // 0x19c3bc: 0xc040a74  jal         func_1029D0
label_19c3c0:
    if (ctx->pc == 0x19C3C0u) {
        ctx->pc = 0x19C3C0u;
            // 0x19c3c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C3C4u;
        goto label_19c3c4;
    }
    ctx->pc = 0x19C3BCu;
    SET_GPR_U32(ctx, 31, 0x19C3C4u);
    ctx->pc = 0x19C3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3BCu;
            // 0x19c3c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3C4u; }
        if (ctx->pc != 0x19C3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C3C4u; }
        if (ctx->pc != 0x19C3C4u) { return; }
    }
    ctx->pc = 0x19C3C4u;
label_19c3c4:
    // 0x19c3c4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x19c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19c3c8:
    // 0x19c3c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19c3c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c3cc:
    // 0x19c3cc: 0x0  nop
    ctx->pc = 0x19c3ccu;
    // NOP
label_19c3d0:
    // 0x19c3d0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x19c3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_19c3d4:
    // 0x19c3d4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19c3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19c3d8:
    // 0x19c3d8: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x19c3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c3dc:
    // 0x19c3dc: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x19c3dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c3e0:
    // 0x19c3e0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_19c3e4:
    if (ctx->pc == 0x19C3E4u) {
        ctx->pc = 0x19C3E4u;
            // 0x19c3e4: 0x3c033f74  lui         $v1, 0x3F74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16244 << 16));
        ctx->pc = 0x19C3E8u;
        goto label_19c3e8;
    }
    ctx->pc = 0x19C3E0u;
    {
        const bool branch_taken_0x19c3e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3E0u;
            // 0x19c3e4: 0x3c033f74  lui         $v1, 0x3F74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16244 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c3e0) {
            ctx->pc = 0x19C420u;
            goto label_19c420;
        }
    }
    ctx->pc = 0x19C3E8u;
label_19c3e8:
    // 0x19c3e8: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x19c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_19c3ec:
    // 0x19c3ec: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x19c3ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_19c3f0:
    // 0x19c3f0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x19c3f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_19c3f4:
    // 0x19c3f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19c3f8:
    // 0x19c3f8: 0xc040d72  jal         func_1035C8
label_19c3fc:
    if (ctx->pc == 0x19C3FCu) {
        ctx->pc = 0x19C3FCu;
            // 0x19c3fc: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x19C400u;
        goto label_19c400;
    }
    ctx->pc = 0x19C3F8u;
    SET_GPR_U32(ctx, 31, 0x19C400u);
    ctx->pc = 0x19C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3F8u;
            // 0x19c3fc: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C400u; }
        if (ctx->pc != 0x19C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C400u; }
        if (ctx->pc != 0x19C400u) { return; }
    }
    ctx->pc = 0x19C400u;
label_19c400:
    // 0x19c400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c404:
    // 0x19c404: 0xc040880  jal         func_102200
label_19c408:
    if (ctx->pc == 0x19C408u) {
        ctx->pc = 0x19C408u;
            // 0x19c408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C40Cu;
        goto label_19c40c;
    }
    ctx->pc = 0x19C404u;
    SET_GPR_U32(ctx, 31, 0x19C40Cu);
    ctx->pc = 0x19C408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C404u;
            // 0x19c408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C40Cu; }
        if (ctx->pc != 0x19C40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C40Cu; }
        if (ctx->pc != 0x19C40Cu) { return; }
    }
    ctx->pc = 0x19C40Cu;
label_19c40c:
    // 0x19c40c: 0xc040a74  jal         func_1029D0
label_19c410:
    if (ctx->pc == 0x19C410u) {
        ctx->pc = 0x19C410u;
            // 0x19c410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C414u;
        goto label_19c414;
    }
    ctx->pc = 0x19C40Cu;
    SET_GPR_U32(ctx, 31, 0x19C414u);
    ctx->pc = 0x19C410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C40Cu;
            // 0x19c410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C414u; }
        if (ctx->pc != 0x19C414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C414u; }
        if (ctx->pc != 0x19C414u) { return; }
    }
    ctx->pc = 0x19C414u;
label_19c414:
    // 0x19c414: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c418:
    // 0x19c418: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19c418u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19c41c:
    // 0x19c41c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19c420:
    // 0x19c420: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c424:
    // 0x19c424: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x19c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c428:
    // 0x19c428: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x19c428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c42c:
    // 0x19c42c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19c42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19c430:
    // 0x19c430: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19c430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_19c434:
    // 0x19c434: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c438:
    // 0x19c438: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c43c:
    // 0x19c43c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c440:
    // 0x19c440: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19c440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19c444:
    // 0x19c444: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19c444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19c448:
    // 0x19c448: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19c44c:
    // 0x19c44c: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x19c44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
label_19c450:
    // 0x19c450: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_19c454:
    if (ctx->pc == 0x19C454u) {
        ctx->pc = 0x19C454u;
            // 0x19c454: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x19C458u;
        goto label_19c458;
    }
    ctx->pc = 0x19C450u;
    {
        const bool branch_taken_0x19c450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C450u;
            // 0x19c454: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c450) {
            ctx->pc = 0x19C480u;
            goto label_19c480;
        }
    }
    ctx->pc = 0x19C458u;
label_19c458:
    // 0x19c458: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_19c45c:
    if (ctx->pc == 0x19C45Cu) {
        ctx->pc = 0x19C460u;
        goto label_19c460;
    }
    ctx->pc = 0x19C458u;
    {
        const bool branch_taken_0x19c458 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19c458) {
            ctx->pc = 0x19C46Cu;
            goto label_19c46c;
        }
    }
    ctx->pc = 0x19C460u;
label_19c460:
    // 0x19c460: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19c464:
    if (ctx->pc == 0x19C464u) {
        ctx->pc = 0x19C468u;
        goto label_19c468;
    }
    ctx->pc = 0x19C460u;
    {
        const bool branch_taken_0x19c460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c460) {
            ctx->pc = 0x19C46Cu;
            goto label_19c46c;
        }
    }
    ctx->pc = 0x19C468u;
label_19c468:
    // 0x19c468: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19c468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_19c46c:
    // 0x19c46c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19c470:
    if (ctx->pc == 0x19C470u) {
        ctx->pc = 0x19C474u;
        goto label_19c474;
    }
    ctx->pc = 0x19C46Cu;
    {
        const bool branch_taken_0x19c46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c46c) {
            ctx->pc = 0x19C480u;
            goto label_19c480;
        }
    }
    ctx->pc = 0x19C474u;
label_19c474:
    // 0x19c474: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c478:
    // 0x19c478: 0xc0655a0  jal         func_195680
label_19c47c:
    if (ctx->pc == 0x19C47Cu) {
        ctx->pc = 0x19C47Cu;
            // 0x19c47c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x19C480u;
        goto label_19c480;
    }
    ctx->pc = 0x19C478u;
    SET_GPR_U32(ctx, 31, 0x19C480u);
    ctx->pc = 0x19C47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C478u;
            // 0x19c47c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C480u; }
        if (ctx->pc != 0x19C480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C480u; }
        if (ctx->pc != 0x19C480u) { return; }
    }
    ctx->pc = 0x19C480u;
label_19c480:
    // 0x19c480: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19c484:
    // 0x19c484: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x19c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_19c488:
    // 0x19c488: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_19c48c:
    if (ctx->pc == 0x19C48Cu) {
        ctx->pc = 0x19C48Cu;
            // 0x19c48c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x19C490u;
        goto label_19c490;
    }
    ctx->pc = 0x19C488u;
    {
        const bool branch_taken_0x19c488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C488u;
            // 0x19c48c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c488) {
            ctx->pc = 0x19C500u;
            goto label_19c500;
        }
    }
    ctx->pc = 0x19C490u;
label_19c490:
    // 0x19c490: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_19c494:
    if (ctx->pc == 0x19C494u) {
        ctx->pc = 0x19C498u;
        goto label_19c498;
    }
    ctx->pc = 0x19C490u;
    {
        const bool branch_taken_0x19c490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c490) {
            ctx->pc = 0x19C4D8u;
            goto label_19c4d8;
        }
    }
    ctx->pc = 0x19C498u;
label_19c498:
    // 0x19c498: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x19c498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19c49c:
    // 0x19c49c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19c4a0:
    if (ctx->pc == 0x19C4A0u) {
        ctx->pc = 0x19C4A4u;
        goto label_19c4a4;
    }
    ctx->pc = 0x19C49Cu;
    {
        const bool branch_taken_0x19c49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c49c) {
            ctx->pc = 0x19C4B0u;
            goto label_19c4b0;
        }
    }
    ctx->pc = 0x19C4A4u;
label_19c4a4:
    // 0x19c4a4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19c4a8:
    if (ctx->pc == 0x19C4A8u) {
        ctx->pc = 0x19C4ACu;
        goto label_19c4ac;
    }
    ctx->pc = 0x19C4A4u;
    {
        const bool branch_taken_0x19c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4a4) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C4ACu;
label_19c4ac:
    // 0x19c4ac: 0x0  nop
    ctx->pc = 0x19c4acu;
    // NOP
label_19c4b0:
    // 0x19c4b0: 0xc065d00  jal         func_197400
label_19c4b4:
    if (ctx->pc == 0x19C4B4u) {
        ctx->pc = 0x19C4B8u;
        goto label_19c4b8;
    }
    ctx->pc = 0x19C4B0u;
    SET_GPR_U32(ctx, 31, 0x19C4B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4B8u; }
        if (ctx->pc != 0x19C4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4B8u; }
        if (ctx->pc != 0x19C4B8u) { return; }
    }
    ctx->pc = 0x19C4B8u;
label_19c4b8:
    // 0x19c4b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c4bc:
    // 0x19c4bc: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_19c4c0:
    if (ctx->pc == 0x19C4C0u) {
        ctx->pc = 0x19C4C4u;
        goto label_19c4c4;
    }
    ctx->pc = 0x19C4BCu;
    {
        const bool branch_taken_0x19c4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c4bc) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C4C4u;
label_19c4c4:
    // 0x19c4c4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x19c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c4c8:
    // 0x19c4c8: 0xc06560c  jal         func_195830
label_19c4cc:
    if (ctx->pc == 0x19C4CCu) {
        ctx->pc = 0x19C4CCu;
            // 0x19c4cc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x19C4D0u;
        goto label_19c4d0;
    }
    ctx->pc = 0x19C4C8u;
    SET_GPR_U32(ctx, 31, 0x19C4D0u);
    ctx->pc = 0x19C4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4C8u;
            // 0x19c4cc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4D0u; }
        if (ctx->pc != 0x19C4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4D0u; }
        if (ctx->pc != 0x19C4D0u) { return; }
    }
    ctx->pc = 0x19C4D0u;
label_19c4d0:
    // 0x19c4d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_19c4d4:
    if (ctx->pc == 0x19C4D4u) {
        ctx->pc = 0x19C4D8u;
        goto label_19c4d8;
    }
    ctx->pc = 0x19C4D0u;
    {
        const bool branch_taken_0x19c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4d0) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C4D8u;
label_19c4d8:
    // 0x19c4d8: 0xc065d00  jal         func_197400
label_19c4dc:
    if (ctx->pc == 0x19C4DCu) {
        ctx->pc = 0x19C4E0u;
        goto label_19c4e0;
    }
    ctx->pc = 0x19C4D8u;
    SET_GPR_U32(ctx, 31, 0x19C4E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4E0u; }
        if (ctx->pc != 0x19C4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4E0u; }
        if (ctx->pc != 0x19C4E0u) { return; }
    }
    ctx->pc = 0x19C4E0u;
label_19c4e0:
    // 0x19c4e0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_19c4e4:
    if (ctx->pc == 0x19C4E4u) {
        ctx->pc = 0x19C4E8u;
        goto label_19c4e8;
    }
    ctx->pc = 0x19C4E0u;
    {
        const bool branch_taken_0x19c4e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19c4e0) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C4E8u;
label_19c4e8:
    // 0x19c4e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x19c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c4ec:
    // 0x19c4ec: 0xc06560c  jal         func_195830
label_19c4f0:
    if (ctx->pc == 0x19C4F0u) {
        ctx->pc = 0x19C4F0u;
            // 0x19c4f0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x19C4F4u;
        goto label_19c4f4;
    }
    ctx->pc = 0x19C4ECu;
    SET_GPR_U32(ctx, 31, 0x19C4F4u);
    ctx->pc = 0x19C4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4ECu;
            // 0x19c4f0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4F4u; }
        if (ctx->pc != 0x19C4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C4F4u; }
        if (ctx->pc != 0x19C4F4u) { return; }
    }
    ctx->pc = 0x19C4F4u;
label_19c4f4:
    // 0x19c4f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_19c4f8:
    if (ctx->pc == 0x19C4F8u) {
        ctx->pc = 0x19C4FCu;
        goto label_19c4fc;
    }
    ctx->pc = 0x19C4F4u;
    {
        const bool branch_taken_0x19c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4f4) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C4FCu;
label_19c4fc:
    // 0x19c4fc: 0x0  nop
    ctx->pc = 0x19c4fcu;
    // NOP
label_19c500:
    // 0x19c500: 0xc065d00  jal         func_197400
label_19c504:
    if (ctx->pc == 0x19C504u) {
        ctx->pc = 0x19C508u;
        goto label_19c508;
    }
    ctx->pc = 0x19C500u;
    SET_GPR_U32(ctx, 31, 0x19C508u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C508u; }
        if (ctx->pc != 0x19C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C508u; }
        if (ctx->pc != 0x19C508u) { return; }
    }
    ctx->pc = 0x19C508u;
label_19c508:
    // 0x19c508: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19c508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19c50c:
    // 0x19c50c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_19c510:
    if (ctx->pc == 0x19C510u) {
        ctx->pc = 0x19C514u;
        goto label_19c514;
    }
    ctx->pc = 0x19C50Cu;
    {
        const bool branch_taken_0x19c50c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c50c) {
            ctx->pc = 0x19C520u;
            goto label_19c520;
        }
    }
    ctx->pc = 0x19C514u;
label_19c514:
    // 0x19c514: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x19c514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c518:
    // 0x19c518: 0xc06560c  jal         func_195830
label_19c51c:
    if (ctx->pc == 0x19C51Cu) {
        ctx->pc = 0x19C51Cu;
            // 0x19c51c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x19C520u;
        goto label_19c520;
    }
    ctx->pc = 0x19C518u;
    SET_GPR_U32(ctx, 31, 0x19C520u);
    ctx->pc = 0x19C51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C518u;
            // 0x19c51c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C520u; }
        if (ctx->pc != 0x19C520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C520u; }
        if (ctx->pc != 0x19C520u) { return; }
    }
    ctx->pc = 0x19C520u;
label_19c520:
    // 0x19c520: 0xc04b788  jal         func_12DE20
label_19c524:
    if (ctx->pc == 0x19C524u) {
        ctx->pc = 0x19C524u;
            // 0x19c524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19C528u;
        goto label_19c528;
    }
    ctx->pc = 0x19C520u;
    SET_GPR_U32(ctx, 31, 0x19C528u);
    ctx->pc = 0x19C524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C520u;
            // 0x19c524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C528u; }
        if (ctx->pc != 0x19C528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C528u; }
        if (ctx->pc != 0x19C528u) { return; }
    }
    ctx->pc = 0x19C528u;
label_19c528:
    // 0x19c528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c52c:
    // 0x19c52c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x19c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c530:
    // 0x19c530: 0xc04b7da  jal         func_12DF68
label_19c534:
    if (ctx->pc == 0x19C534u) {
        ctx->pc = 0x19C534u;
            // 0x19c534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C538u;
        goto label_19c538;
    }
    ctx->pc = 0x19C530u;
    SET_GPR_U32(ctx, 31, 0x19C538u);
    ctx->pc = 0x19C534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C530u;
            // 0x19c534: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C538u; }
        if (ctx->pc != 0x19C538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C538u; }
        if (ctx->pc != 0x19C538u) { return; }
    }
    ctx->pc = 0x19C538u;
label_19c538:
    // 0x19c538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c53c:
    // 0x19c53c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x19c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c540:
    // 0x19c540: 0xc04b804  jal         func_12E010
label_19c544:
    if (ctx->pc == 0x19C544u) {
        ctx->pc = 0x19C544u;
            // 0x19c544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C548u;
        goto label_19c548;
    }
    ctx->pc = 0x19C540u;
    SET_GPR_U32(ctx, 31, 0x19C548u);
    ctx->pc = 0x19C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C540u;
            // 0x19c544: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C548u; }
        if (ctx->pc != 0x19C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C548u; }
        if (ctx->pc != 0x19C548u) { return; }
    }
    ctx->pc = 0x19C548u;
label_19c548:
    // 0x19c548: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c54c:
    // 0x19c54c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x19c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19c550:
    // 0x19c550: 0xc04b7b0  jal         func_12DEC0
label_19c554:
    if (ctx->pc == 0x19C554u) {
        ctx->pc = 0x19C554u;
            // 0x19c554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C558u;
        goto label_19c558;
    }
    ctx->pc = 0x19C550u;
    SET_GPR_U32(ctx, 31, 0x19C558u);
    ctx->pc = 0x19C554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C550u;
            // 0x19c554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C558u; }
        if (ctx->pc != 0x19C558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C558u; }
        if (ctx->pc != 0x19C558u) { return; }
    }
    ctx->pc = 0x19C558u;
label_19c558:
    // 0x19c558: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c55c:
    // 0x19c55c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19c55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c560:
    // 0x19c560: 0xc04b75e  jal         func_12DD78
label_19c564:
    if (ctx->pc == 0x19C564u) {
        ctx->pc = 0x19C564u;
            // 0x19c564: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x19C568u;
        goto label_19c568;
    }
    ctx->pc = 0x19C560u;
    SET_GPR_U32(ctx, 31, 0x19C568u);
    ctx->pc = 0x19C564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C560u;
            // 0x19c564: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C568u; }
        if (ctx->pc != 0x19C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C568u; }
        if (ctx->pc != 0x19C568u) { return; }
    }
    ctx->pc = 0x19C568u;
label_19c568:
    // 0x19c568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19c56c:
    // 0x19c56c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19c570:
    // 0x19c570: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19c570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19c574:
    // 0x19c574: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_19c578:
    if (ctx->pc == 0x19C578u) {
        ctx->pc = 0x19C57Cu;
        goto label_19c57c;
    }
    ctx->pc = 0x19C574u;
    {
        const bool branch_taken_0x19c574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c574) {
            ctx->pc = 0x19C5C8u;
            goto label_19c5c8;
        }
    }
    ctx->pc = 0x19C57Cu;
label_19c57c:
    // 0x19c57c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x19c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19c580:
    // 0x19c580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19c584:
    if (ctx->pc == 0x19C584u) {
        ctx->pc = 0x19C588u;
        goto label_19c588;
    }
    ctx->pc = 0x19C580u;
    {
        const bool branch_taken_0x19c580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c580) {
            ctx->pc = 0x19C598u;
            goto label_19c598;
        }
    }
    ctx->pc = 0x19C588u;
label_19c588:
    // 0x19c588: 0xc0604f0  jal         func_1813C0
label_19c58c:
    if (ctx->pc == 0x19C58Cu) {
        ctx->pc = 0x19C58Cu;
            // 0x19c58c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19C590u;
        goto label_19c590;
    }
    ctx->pc = 0x19C588u;
    SET_GPR_U32(ctx, 31, 0x19C590u);
    ctx->pc = 0x19C58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C588u;
            // 0x19c58c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C590u; }
        if (ctx->pc != 0x19C590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C590u; }
        if (ctx->pc != 0x19C590u) { return; }
    }
    ctx->pc = 0x19C590u;
label_19c590:
    // 0x19c590: 0x10000003  b           . + 4 + (0x3 << 2)
label_19c594:
    if (ctx->pc == 0x19C594u) {
        ctx->pc = 0x19C598u;
        goto label_19c598;
    }
    ctx->pc = 0x19C590u;
    {
        const bool branch_taken_0x19c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c590) {
            ctx->pc = 0x19C5A0u;
            goto label_19c5a0;
        }
    }
    ctx->pc = 0x19C598u;
label_19c598:
    // 0x19c598: 0xc0604dc  jal         func_181370
label_19c59c:
    if (ctx->pc == 0x19C59Cu) {
        ctx->pc = 0x19C59Cu;
            // 0x19c59c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19C5A0u;
        goto label_19c5a0;
    }
    ctx->pc = 0x19C598u;
    SET_GPR_U32(ctx, 31, 0x19C5A0u);
    ctx->pc = 0x19C59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C598u;
            // 0x19c59c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5A0u; }
        if (ctx->pc != 0x19C5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5A0u; }
        if (ctx->pc != 0x19C5A0u) { return; }
    }
    ctx->pc = 0x19C5A0u;
label_19c5a0:
    // 0x19c5a0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x19c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19c5a4:
    // 0x19c5a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19c5a8:
    if (ctx->pc == 0x19C5A8u) {
        ctx->pc = 0x19C5ACu;
        goto label_19c5ac;
    }
    ctx->pc = 0x19C5A4u;
    {
        const bool branch_taken_0x19c5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5a4) {
            ctx->pc = 0x19C5B8u;
            goto label_19c5b8;
        }
    }
    ctx->pc = 0x19C5ACu;
label_19c5ac:
    // 0x19c5ac: 0x1000000a  b           . + 4 + (0xA << 2)
label_19c5b0:
    if (ctx->pc == 0x19C5B0u) {
        ctx->pc = 0x19C5B0u;
            // 0x19c5b0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x19C5B4u;
        goto label_19c5b4;
    }
    ctx->pc = 0x19C5ACu;
    {
        const bool branch_taken_0x19c5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5ACu;
            // 0x19c5b0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5ac) {
            ctx->pc = 0x19C5D8u;
            goto label_19c5d8;
        }
    }
    ctx->pc = 0x19C5B4u;
label_19c5b4:
    // 0x19c5b4: 0x0  nop
    ctx->pc = 0x19c5b4u;
    // NOP
label_19c5b8:
    // 0x19c5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c5bc:
    // 0x19c5bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_19c5c0:
    if (ctx->pc == 0x19C5C0u) {
        ctx->pc = 0x19C5C0u;
            // 0x19c5c0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x19C5C4u;
        goto label_19c5c4;
    }
    ctx->pc = 0x19C5BCu;
    {
        const bool branch_taken_0x19c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5BCu;
            // 0x19c5c0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5bc) {
            ctx->pc = 0x19C5D8u;
            goto label_19c5d8;
        }
    }
    ctx->pc = 0x19C5C4u;
label_19c5c4:
    // 0x19c5c4: 0x0  nop
    ctx->pc = 0x19c5c4u;
    // NOP
label_19c5c8:
    // 0x19c5c8: 0xc0604dc  jal         func_181370
label_19c5cc:
    if (ctx->pc == 0x19C5CCu) {
        ctx->pc = 0x19C5CCu;
            // 0x19c5cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19C5D0u;
        goto label_19c5d0;
    }
    ctx->pc = 0x19C5C8u;
    SET_GPR_U32(ctx, 31, 0x19C5D0u);
    ctx->pc = 0x19C5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5C8u;
            // 0x19c5cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5D0u; }
        if (ctx->pc != 0x19C5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5D0u; }
        if (ctx->pc != 0x19C5D0u) { return; }
    }
    ctx->pc = 0x19C5D0u;
label_19c5d0:
    // 0x19c5d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c5d4:
    // 0x19c5d4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x19c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_19c5d8:
    // 0x19c5d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19c5dc:
    // 0x19c5dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_19c5e0:
    // 0x19c5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c5e4:
    // 0x19c5e4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19c5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_19c5e8:
    // 0x19c5e8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x19c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_19c5ec:
    // 0x19c5ec: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x19c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_19c5f0:
    // 0x19c5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c5f4:
    // 0x19c5f4: 0x0  nop
    ctx->pc = 0x19c5f4u;
    // NOP
label_19c5f8:
    // 0x19c5f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c5f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19c5fc:
    // 0x19c5fc: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19c5fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19c600:
    // 0x19c600: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c604:
    // 0x19c604: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_19c608:
    // 0x19c608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c60c:
    // 0x19c60c: 0x0  nop
    ctx->pc = 0x19c60cu;
    // NOP
label_19c610:
    // 0x19c610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19c614:
    // 0x19c614: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x19c614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19c618:
    // 0x19c618: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x19c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_19c61c:
    // 0x19c61c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19c620:
    // 0x19c620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c624:
    // 0x19c624: 0x0  nop
    ctx->pc = 0x19c624u;
    // NOP
label_19c628:
    // 0x19c628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19c62c:
    // 0x19c62c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x19c62cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_19c630:
    // 0x19c630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x19c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_19c634:
    // 0x19c634: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19c638:
    // 0x19c638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c63c:
    // 0x19c63c: 0x0  nop
    ctx->pc = 0x19c63cu;
    // NOP
label_19c640:
    // 0x19c640: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19c644:
    // 0x19c644: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x19c644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_19c648:
    // 0x19c648: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19c64c:
    // 0x19c64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c650:
    // 0x19c650: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x19c650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_19c654:
    // 0x19c654: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c658:
    // 0x19c658: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c65c:
    // 0x19c65c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c660:
    // 0x19c660: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19c664:
    if (ctx->pc == 0x19C664u) {
        ctx->pc = 0x19C664u;
            // 0x19c664: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x19C668u;
        goto label_19c668;
    }
    ctx->pc = 0x19C660u;
    {
        const bool branch_taken_0x19c660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C660u;
            // 0x19c664: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c660) {
            ctx->pc = 0x19C680u;
            goto label_19c680;
        }
    }
    ctx->pc = 0x19C668u;
label_19c668:
    // 0x19c668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c66c:
    // 0x19c66c: 0x0  nop
    ctx->pc = 0x19c66cu;
    // NOP
label_19c670:
    // 0x19c670: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19c670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c674:
    // 0x19c674: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_19c678:
    if (ctx->pc == 0x19C678u) {
        ctx->pc = 0x19C67Cu;
        goto label_19c67c;
    }
    ctx->pc = 0x19C674u;
    {
        const bool branch_taken_0x19c674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c674) {
            ctx->pc = 0x19C698u;
            goto label_19c698;
        }
    }
    ctx->pc = 0x19C67Cu;
label_19c67c:
    // 0x19c67c: 0x0  nop
    ctx->pc = 0x19c67cu;
    // NOP
label_19c680:
    // 0x19c680: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19c684:
    // 0x19c684: 0x40f809  jalr        $v0
label_19c688:
    if (ctx->pc == 0x19C688u) {
        ctx->pc = 0x19C688u;
            // 0x19c688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C68Cu;
        goto label_19c68c;
    }
    ctx->pc = 0x19C684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C68Cu);
        ctx->pc = 0x19C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C684u;
            // 0x19c688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C110u: goto label_19c110;
            case 0x19C114u: goto label_19c114;
            case 0x19C118u: goto label_19c118;
            case 0x19C11Cu: goto label_19c11c;
            case 0x19C120u: goto label_19c120;
            case 0x19C124u: goto label_19c124;
            case 0x19C128u: goto label_19c128;
            case 0x19C12Cu: goto label_19c12c;
            case 0x19C130u: goto label_19c130;
            case 0x19C134u: goto label_19c134;
            case 0x19C138u: goto label_19c138;
            case 0x19C13Cu: goto label_19c13c;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C148u: goto label_19c148;
            case 0x19C14Cu: goto label_19c14c;
            case 0x19C150u: goto label_19c150;
            case 0x19C154u: goto label_19c154;
            case 0x19C158u: goto label_19c158;
            case 0x19C15Cu: goto label_19c15c;
            case 0x19C160u: goto label_19c160;
            case 0x19C164u: goto label_19c164;
            case 0x19C168u: goto label_19c168;
            case 0x19C16Cu: goto label_19c16c;
            case 0x19C170u: goto label_19c170;
            case 0x19C174u: goto label_19c174;
            case 0x19C178u: goto label_19c178;
            case 0x19C17Cu: goto label_19c17c;
            case 0x19C180u: goto label_19c180;
            case 0x19C184u: goto label_19c184;
            case 0x19C188u: goto label_19c188;
            case 0x19C18Cu: goto label_19c18c;
            case 0x19C190u: goto label_19c190;
            case 0x19C194u: goto label_19c194;
            case 0x19C198u: goto label_19c198;
            case 0x19C19Cu: goto label_19c19c;
            case 0x19C1A0u: goto label_19c1a0;
            case 0x19C1A4u: goto label_19c1a4;
            case 0x19C1A8u: goto label_19c1a8;
            case 0x19C1ACu: goto label_19c1ac;
            case 0x19C1B0u: goto label_19c1b0;
            case 0x19C1B4u: goto label_19c1b4;
            case 0x19C1B8u: goto label_19c1b8;
            case 0x19C1BCu: goto label_19c1bc;
            case 0x19C1C0u: goto label_19c1c0;
            case 0x19C1C4u: goto label_19c1c4;
            case 0x19C1C8u: goto label_19c1c8;
            case 0x19C1CCu: goto label_19c1cc;
            case 0x19C1D0u: goto label_19c1d0;
            case 0x19C1D4u: goto label_19c1d4;
            case 0x19C1D8u: goto label_19c1d8;
            case 0x19C1DCu: goto label_19c1dc;
            case 0x19C1E0u: goto label_19c1e0;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C1E8u: goto label_19c1e8;
            case 0x19C1ECu: goto label_19c1ec;
            case 0x19C1F0u: goto label_19c1f0;
            case 0x19C1F4u: goto label_19c1f4;
            case 0x19C1F8u: goto label_19c1f8;
            case 0x19C1FCu: goto label_19c1fc;
            case 0x19C200u: goto label_19c200;
            case 0x19C204u: goto label_19c204;
            case 0x19C208u: goto label_19c208;
            case 0x19C20Cu: goto label_19c20c;
            case 0x19C210u: goto label_19c210;
            case 0x19C214u: goto label_19c214;
            case 0x19C218u: goto label_19c218;
            case 0x19C21Cu: goto label_19c21c;
            case 0x19C220u: goto label_19c220;
            case 0x19C224u: goto label_19c224;
            case 0x19C228u: goto label_19c228;
            case 0x19C22Cu: goto label_19c22c;
            case 0x19C230u: goto label_19c230;
            case 0x19C234u: goto label_19c234;
            case 0x19C238u: goto label_19c238;
            case 0x19C23Cu: goto label_19c23c;
            case 0x19C240u: goto label_19c240;
            case 0x19C244u: goto label_19c244;
            case 0x19C248u: goto label_19c248;
            case 0x19C24Cu: goto label_19c24c;
            case 0x19C250u: goto label_19c250;
            case 0x19C254u: goto label_19c254;
            case 0x19C258u: goto label_19c258;
            case 0x19C25Cu: goto label_19c25c;
            case 0x19C260u: goto label_19c260;
            case 0x19C264u: goto label_19c264;
            case 0x19C268u: goto label_19c268;
            case 0x19C26Cu: goto label_19c26c;
            case 0x19C270u: goto label_19c270;
            case 0x19C274u: goto label_19c274;
            case 0x19C278u: goto label_19c278;
            case 0x19C27Cu: goto label_19c27c;
            case 0x19C280u: goto label_19c280;
            case 0x19C284u: goto label_19c284;
            case 0x19C288u: goto label_19c288;
            case 0x19C28Cu: goto label_19c28c;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C298u: goto label_19c298;
            case 0x19C29Cu: goto label_19c29c;
            case 0x19C2A0u: goto label_19c2a0;
            case 0x19C2A4u: goto label_19c2a4;
            case 0x19C2A8u: goto label_19c2a8;
            case 0x19C2ACu: goto label_19c2ac;
            case 0x19C2B0u: goto label_19c2b0;
            case 0x19C2B4u: goto label_19c2b4;
            case 0x19C2B8u: goto label_19c2b8;
            case 0x19C2BCu: goto label_19c2bc;
            case 0x19C2C0u: goto label_19c2c0;
            case 0x19C2C4u: goto label_19c2c4;
            case 0x19C2C8u: goto label_19c2c8;
            case 0x19C2CCu: goto label_19c2cc;
            case 0x19C2D0u: goto label_19c2d0;
            case 0x19C2D4u: goto label_19c2d4;
            case 0x19C2D8u: goto label_19c2d8;
            case 0x19C2DCu: goto label_19c2dc;
            case 0x19C2E0u: goto label_19c2e0;
            case 0x19C2E4u: goto label_19c2e4;
            case 0x19C2E8u: goto label_19c2e8;
            case 0x19C2ECu: goto label_19c2ec;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C2F4u: goto label_19c2f4;
            case 0x19C2F8u: goto label_19c2f8;
            case 0x19C2FCu: goto label_19c2fc;
            case 0x19C300u: goto label_19c300;
            case 0x19C304u: goto label_19c304;
            case 0x19C308u: goto label_19c308;
            case 0x19C30Cu: goto label_19c30c;
            case 0x19C310u: goto label_19c310;
            case 0x19C314u: goto label_19c314;
            case 0x19C318u: goto label_19c318;
            case 0x19C31Cu: goto label_19c31c;
            case 0x19C320u: goto label_19c320;
            case 0x19C324u: goto label_19c324;
            case 0x19C328u: goto label_19c328;
            case 0x19C32Cu: goto label_19c32c;
            case 0x19C330u: goto label_19c330;
            case 0x19C334u: goto label_19c334;
            case 0x19C338u: goto label_19c338;
            case 0x19C33Cu: goto label_19c33c;
            case 0x19C340u: goto label_19c340;
            case 0x19C344u: goto label_19c344;
            case 0x19C348u: goto label_19c348;
            case 0x19C34Cu: goto label_19c34c;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C358u: goto label_19c358;
            case 0x19C35Cu: goto label_19c35c;
            case 0x19C360u: goto label_19c360;
            case 0x19C364u: goto label_19c364;
            case 0x19C368u: goto label_19c368;
            case 0x19C36Cu: goto label_19c36c;
            case 0x19C370u: goto label_19c370;
            case 0x19C374u: goto label_19c374;
            case 0x19C378u: goto label_19c378;
            case 0x19C37Cu: goto label_19c37c;
            case 0x19C380u: goto label_19c380;
            case 0x19C384u: goto label_19c384;
            case 0x19C388u: goto label_19c388;
            case 0x19C38Cu: goto label_19c38c;
            case 0x19C390u: goto label_19c390;
            case 0x19C394u: goto label_19c394;
            case 0x19C398u: goto label_19c398;
            case 0x19C39Cu: goto label_19c39c;
            case 0x19C3A0u: goto label_19c3a0;
            case 0x19C3A4u: goto label_19c3a4;
            case 0x19C3A8u: goto label_19c3a8;
            case 0x19C3ACu: goto label_19c3ac;
            case 0x19C3B0u: goto label_19c3b0;
            case 0x19C3B4u: goto label_19c3b4;
            case 0x19C3B8u: goto label_19c3b8;
            case 0x19C3BCu: goto label_19c3bc;
            case 0x19C3C0u: goto label_19c3c0;
            case 0x19C3C4u: goto label_19c3c4;
            case 0x19C3C8u: goto label_19c3c8;
            case 0x19C3CCu: goto label_19c3cc;
            case 0x19C3D0u: goto label_19c3d0;
            case 0x19C3D4u: goto label_19c3d4;
            case 0x19C3D8u: goto label_19c3d8;
            case 0x19C3DCu: goto label_19c3dc;
            case 0x19C3E0u: goto label_19c3e0;
            case 0x19C3E4u: goto label_19c3e4;
            case 0x19C3E8u: goto label_19c3e8;
            case 0x19C3ECu: goto label_19c3ec;
            case 0x19C3F0u: goto label_19c3f0;
            case 0x19C3F4u: goto label_19c3f4;
            case 0x19C3F8u: goto label_19c3f8;
            case 0x19C3FCu: goto label_19c3fc;
            case 0x19C400u: goto label_19c400;
            case 0x19C404u: goto label_19c404;
            case 0x19C408u: goto label_19c408;
            case 0x19C40Cu: goto label_19c40c;
            case 0x19C410u: goto label_19c410;
            case 0x19C414u: goto label_19c414;
            case 0x19C418u: goto label_19c418;
            case 0x19C41Cu: goto label_19c41c;
            case 0x19C420u: goto label_19c420;
            case 0x19C424u: goto label_19c424;
            case 0x19C428u: goto label_19c428;
            case 0x19C42Cu: goto label_19c42c;
            case 0x19C430u: goto label_19c430;
            case 0x19C434u: goto label_19c434;
            case 0x19C438u: goto label_19c438;
            case 0x19C43Cu: goto label_19c43c;
            case 0x19C440u: goto label_19c440;
            case 0x19C444u: goto label_19c444;
            case 0x19C448u: goto label_19c448;
            case 0x19C44Cu: goto label_19c44c;
            case 0x19C450u: goto label_19c450;
            case 0x19C454u: goto label_19c454;
            case 0x19C458u: goto label_19c458;
            case 0x19C45Cu: goto label_19c45c;
            case 0x19C460u: goto label_19c460;
            case 0x19C464u: goto label_19c464;
            case 0x19C468u: goto label_19c468;
            case 0x19C46Cu: goto label_19c46c;
            case 0x19C470u: goto label_19c470;
            case 0x19C474u: goto label_19c474;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C480u: goto label_19c480;
            case 0x19C484u: goto label_19c484;
            case 0x19C488u: goto label_19c488;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C490u: goto label_19c490;
            case 0x19C494u: goto label_19c494;
            case 0x19C498u: goto label_19c498;
            case 0x19C49Cu: goto label_19c49c;
            case 0x19C4A0u: goto label_19c4a0;
            case 0x19C4A4u: goto label_19c4a4;
            case 0x19C4A8u: goto label_19c4a8;
            case 0x19C4ACu: goto label_19c4ac;
            case 0x19C4B0u: goto label_19c4b0;
            case 0x19C4B4u: goto label_19c4b4;
            case 0x19C4B8u: goto label_19c4b8;
            case 0x19C4BCu: goto label_19c4bc;
            case 0x19C4C0u: goto label_19c4c0;
            case 0x19C4C4u: goto label_19c4c4;
            case 0x19C4C8u: goto label_19c4c8;
            case 0x19C4CCu: goto label_19c4cc;
            case 0x19C4D0u: goto label_19c4d0;
            case 0x19C4D4u: goto label_19c4d4;
            case 0x19C4D8u: goto label_19c4d8;
            case 0x19C4DCu: goto label_19c4dc;
            case 0x19C4E0u: goto label_19c4e0;
            case 0x19C4E4u: goto label_19c4e4;
            case 0x19C4E8u: goto label_19c4e8;
            case 0x19C4ECu: goto label_19c4ec;
            case 0x19C4F0u: goto label_19c4f0;
            case 0x19C4F4u: goto label_19c4f4;
            case 0x19C4F8u: goto label_19c4f8;
            case 0x19C4FCu: goto label_19c4fc;
            case 0x19C500u: goto label_19c500;
            case 0x19C504u: goto label_19c504;
            case 0x19C508u: goto label_19c508;
            case 0x19C50Cu: goto label_19c50c;
            case 0x19C510u: goto label_19c510;
            case 0x19C514u: goto label_19c514;
            case 0x19C518u: goto label_19c518;
            case 0x19C51Cu: goto label_19c51c;
            case 0x19C520u: goto label_19c520;
            case 0x19C524u: goto label_19c524;
            case 0x19C528u: goto label_19c528;
            case 0x19C52Cu: goto label_19c52c;
            case 0x19C530u: goto label_19c530;
            case 0x19C534u: goto label_19c534;
            case 0x19C538u: goto label_19c538;
            case 0x19C53Cu: goto label_19c53c;
            case 0x19C540u: goto label_19c540;
            case 0x19C544u: goto label_19c544;
            case 0x19C548u: goto label_19c548;
            case 0x19C54Cu: goto label_19c54c;
            case 0x19C550u: goto label_19c550;
            case 0x19C554u: goto label_19c554;
            case 0x19C558u: goto label_19c558;
            case 0x19C55Cu: goto label_19c55c;
            case 0x19C560u: goto label_19c560;
            case 0x19C564u: goto label_19c564;
            case 0x19C568u: goto label_19c568;
            case 0x19C56Cu: goto label_19c56c;
            case 0x19C570u: goto label_19c570;
            case 0x19C574u: goto label_19c574;
            case 0x19C578u: goto label_19c578;
            case 0x19C57Cu: goto label_19c57c;
            case 0x19C580u: goto label_19c580;
            case 0x19C584u: goto label_19c584;
            case 0x19C588u: goto label_19c588;
            case 0x19C58Cu: goto label_19c58c;
            case 0x19C590u: goto label_19c590;
            case 0x19C594u: goto label_19c594;
            case 0x19C598u: goto label_19c598;
            case 0x19C59Cu: goto label_19c59c;
            case 0x19C5A0u: goto label_19c5a0;
            case 0x19C5A4u: goto label_19c5a4;
            case 0x19C5A8u: goto label_19c5a8;
            case 0x19C5ACu: goto label_19c5ac;
            case 0x19C5B0u: goto label_19c5b0;
            case 0x19C5B4u: goto label_19c5b4;
            case 0x19C5B8u: goto label_19c5b8;
            case 0x19C5BCu: goto label_19c5bc;
            case 0x19C5C0u: goto label_19c5c0;
            case 0x19C5C4u: goto label_19c5c4;
            case 0x19C5C8u: goto label_19c5c8;
            case 0x19C5CCu: goto label_19c5cc;
            case 0x19C5D0u: goto label_19c5d0;
            case 0x19C5D4u: goto label_19c5d4;
            case 0x19C5D8u: goto label_19c5d8;
            case 0x19C5DCu: goto label_19c5dc;
            case 0x19C5E0u: goto label_19c5e0;
            case 0x19C5E4u: goto label_19c5e4;
            case 0x19C5E8u: goto label_19c5e8;
            case 0x19C5ECu: goto label_19c5ec;
            case 0x19C5F0u: goto label_19c5f0;
            case 0x19C5F4u: goto label_19c5f4;
            case 0x19C5F8u: goto label_19c5f8;
            case 0x19C5FCu: goto label_19c5fc;
            case 0x19C600u: goto label_19c600;
            case 0x19C604u: goto label_19c604;
            case 0x19C608u: goto label_19c608;
            case 0x19C60Cu: goto label_19c60c;
            case 0x19C610u: goto label_19c610;
            case 0x19C614u: goto label_19c614;
            case 0x19C618u: goto label_19c618;
            case 0x19C61Cu: goto label_19c61c;
            case 0x19C620u: goto label_19c620;
            case 0x19C624u: goto label_19c624;
            case 0x19C628u: goto label_19c628;
            case 0x19C62Cu: goto label_19c62c;
            case 0x19C630u: goto label_19c630;
            case 0x19C634u: goto label_19c634;
            case 0x19C638u: goto label_19c638;
            case 0x19C63Cu: goto label_19c63c;
            case 0x19C640u: goto label_19c640;
            case 0x19C644u: goto label_19c644;
            case 0x19C648u: goto label_19c648;
            case 0x19C64Cu: goto label_19c64c;
            case 0x19C650u: goto label_19c650;
            case 0x19C654u: goto label_19c654;
            case 0x19C658u: goto label_19c658;
            case 0x19C65Cu: goto label_19c65c;
            case 0x19C660u: goto label_19c660;
            case 0x19C664u: goto label_19c664;
            case 0x19C668u: goto label_19c668;
            case 0x19C66Cu: goto label_19c66c;
            case 0x19C670u: goto label_19c670;
            case 0x19C674u: goto label_19c674;
            case 0x19C678u: goto label_19c678;
            case 0x19C67Cu: goto label_19c67c;
            case 0x19C680u: goto label_19c680;
            case 0x19C684u: goto label_19c684;
            case 0x19C688u: goto label_19c688;
            case 0x19C68Cu: goto label_19c68c;
            case 0x19C690u: goto label_19c690;
            case 0x19C694u: goto label_19c694;
            case 0x19C698u: goto label_19c698;
            case 0x19C69Cu: goto label_19c69c;
            case 0x19C6A0u: goto label_19c6a0;
            case 0x19C6A4u: goto label_19c6a4;
            case 0x19C6A8u: goto label_19c6a8;
            case 0x19C6ACu: goto label_19c6ac;
            case 0x19C6B0u: goto label_19c6b0;
            case 0x19C6B4u: goto label_19c6b4;
            case 0x19C6B8u: goto label_19c6b8;
            case 0x19C6BCu: goto label_19c6bc;
            case 0x19C6C0u: goto label_19c6c0;
            case 0x19C6C4u: goto label_19c6c4;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C6CCu: goto label_19c6cc;
            case 0x19C6D0u: goto label_19c6d0;
            case 0x19C6D4u: goto label_19c6d4;
            case 0x19C6D8u: goto label_19c6d8;
            case 0x19C6DCu: goto label_19c6dc;
            case 0x19C6E0u: goto label_19c6e0;
            case 0x19C6E4u: goto label_19c6e4;
            case 0x19C6E8u: goto label_19c6e8;
            case 0x19C6ECu: goto label_19c6ec;
            case 0x19C6F0u: goto label_19c6f0;
            case 0x19C6F4u: goto label_19c6f4;
            case 0x19C6F8u: goto label_19c6f8;
            case 0x19C6FCu: goto label_19c6fc;
            case 0x19C700u: goto label_19c700;
            case 0x19C704u: goto label_19c704;
            case 0x19C708u: goto label_19c708;
            case 0x19C70Cu: goto label_19c70c;
            case 0x19C710u: goto label_19c710;
            case 0x19C714u: goto label_19c714;
            case 0x19C718u: goto label_19c718;
            case 0x19C71Cu: goto label_19c71c;
            case 0x19C720u: goto label_19c720;
            case 0x19C724u: goto label_19c724;
            case 0x19C728u: goto label_19c728;
            case 0x19C72Cu: goto label_19c72c;
            case 0x19C730u: goto label_19c730;
            case 0x19C734u: goto label_19c734;
            case 0x19C738u: goto label_19c738;
            case 0x19C73Cu: goto label_19c73c;
            case 0x19C740u: goto label_19c740;
            case 0x19C744u: goto label_19c744;
            case 0x19C748u: goto label_19c748;
            case 0x19C74Cu: goto label_19c74c;
            case 0x19C750u: goto label_19c750;
            case 0x19C754u: goto label_19c754;
            case 0x19C758u: goto label_19c758;
            case 0x19C75Cu: goto label_19c75c;
            case 0x19C760u: goto label_19c760;
            case 0x19C764u: goto label_19c764;
            case 0x19C768u: goto label_19c768;
            case 0x19C76Cu: goto label_19c76c;
            case 0x19C770u: goto label_19c770;
            case 0x19C774u: goto label_19c774;
            case 0x19C778u: goto label_19c778;
            case 0x19C77Cu: goto label_19c77c;
            case 0x19C780u: goto label_19c780;
            case 0x19C784u: goto label_19c784;
            case 0x19C788u: goto label_19c788;
            case 0x19C78Cu: goto label_19c78c;
            case 0x19C790u: goto label_19c790;
            case 0x19C794u: goto label_19c794;
            case 0x19C798u: goto label_19c798;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C68Cu; }
            if (ctx->pc != 0x19C68Cu) { return; }
        }
    }
    ctx->pc = 0x19C68Cu;
label_19c68c:
    // 0x19c68c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_19c690:
    if (ctx->pc == 0x19C690u) {
        ctx->pc = 0x19C694u;
        goto label_19c694;
    }
    ctx->pc = 0x19C68Cu;
    {
        const bool branch_taken_0x19c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c68c) {
            ctx->pc = 0x19C788u;
            goto label_19c788;
        }
    }
    ctx->pc = 0x19C694u;
label_19c694:
    // 0x19c694: 0x0  nop
    ctx->pc = 0x19c694u;
    // NOP
label_19c698:
    // 0x19c698: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19c69c:
    // 0x19c69c: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_19c6a0:
    if (ctx->pc == 0x19C6A0u) {
        ctx->pc = 0x19C6A4u;
        goto label_19c6a4;
    }
    ctx->pc = 0x19C69Cu;
    {
        const bool branch_taken_0x19c69c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19c69c) {
            ctx->pc = 0x19C768u;
            goto label_19c768;
        }
    }
    ctx->pc = 0x19C6A4u;
label_19c6a4:
    // 0x19c6a4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19c6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c6a8:
    // 0x19c6a8: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_19c6ac:
    // 0x19c6ac: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19c6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c6b0:
    // 0x19c6b0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19c6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19c6b4:
    // 0x19c6b4: 0xc05d080  jal         func_174200
label_19c6b8:
    if (ctx->pc == 0x19C6B8u) {
        ctx->pc = 0x19C6B8u;
            // 0x19c6b8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19C6BCu;
        goto label_19c6bc;
    }
    ctx->pc = 0x19C6B4u;
    SET_GPR_U32(ctx, 31, 0x19C6BCu);
    ctx->pc = 0x19C6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6B4u;
            // 0x19c6b8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6BCu; }
        if (ctx->pc != 0x19C6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6BCu; }
        if (ctx->pc != 0x19C6BCu) { return; }
    }
    ctx->pc = 0x19C6BCu;
label_19c6bc:
    // 0x19c6bc: 0xc050bb4  jal         func_142ED0
label_19c6c0:
    if (ctx->pc == 0x19C6C0u) {
        ctx->pc = 0x19C6C4u;
        goto label_19c6c4;
    }
    ctx->pc = 0x19C6BCu;
    SET_GPR_U32(ctx, 31, 0x19C6C4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6C4u; }
        if (ctx->pc != 0x19C6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6C4u; }
        if (ctx->pc != 0x19C6C4u) { return; }
    }
    ctx->pc = 0x19C6C4u;
label_19c6c4:
    // 0x19c6c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c6c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19c6c8:
    // 0x19c6c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19c6cc:
    if (ctx->pc == 0x19C6CCu) {
        ctx->pc = 0x19C6D0u;
        goto label_19c6d0;
    }
    ctx->pc = 0x19C6C8u;
    {
        const bool branch_taken_0x19c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c6c8) {
            ctx->pc = 0x19C6E8u;
            goto label_19c6e8;
        }
    }
    ctx->pc = 0x19C6D0u;
label_19c6d0:
    // 0x19c6d0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19c6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c6d4:
    // 0x19c6d4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x19c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_19c6d8:
    // 0x19c6d8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c6dc:
    // 0x19c6dc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19c6dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19c6e0:
    // 0x19c6e0: 0xc05d080  jal         func_174200
label_19c6e4:
    if (ctx->pc == 0x19C6E4u) {
        ctx->pc = 0x19C6E4u;
            // 0x19c6e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19C6E8u;
        goto label_19c6e8;
    }
    ctx->pc = 0x19C6E0u;
    SET_GPR_U32(ctx, 31, 0x19C6E8u);
    ctx->pc = 0x19C6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6E0u;
            // 0x19c6e4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6E8u; }
        if (ctx->pc != 0x19C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6E8u; }
        if (ctx->pc != 0x19C6E8u) { return; }
    }
    ctx->pc = 0x19C6E8u;
label_19c6e8:
    // 0x19c6e8: 0xc050bb4  jal         func_142ED0
label_19c6ec:
    if (ctx->pc == 0x19C6ECu) {
        ctx->pc = 0x19C6F0u;
        goto label_19c6f0;
    }
    ctx->pc = 0x19C6E8u;
    SET_GPR_U32(ctx, 31, 0x19C6F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6F0u; }
        if (ctx->pc != 0x19C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6F0u; }
        if (ctx->pc != 0x19C6F0u) { return; }
    }
    ctx->pc = 0x19C6F0u;
label_19c6f0:
    // 0x19c6f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c6f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19c6f4:
    // 0x19c6f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19c6f8:
    if (ctx->pc == 0x19C6F8u) {
        ctx->pc = 0x19C6FCu;
        goto label_19c6fc;
    }
    ctx->pc = 0x19C6F4u;
    {
        const bool branch_taken_0x19c6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c6f4) {
            ctx->pc = 0x19C718u;
            goto label_19c718;
        }
    }
    ctx->pc = 0x19C6FCu;
label_19c6fc:
    // 0x19c6fc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19c6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c700:
    // 0x19c700: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x19c700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_19c704:
    // 0x19c704: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19c704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c708:
    // 0x19c708: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19c708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19c70c:
    // 0x19c70c: 0xc05d080  jal         func_174200
label_19c710:
    if (ctx->pc == 0x19C710u) {
        ctx->pc = 0x19C710u;
            // 0x19c710: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19C714u;
        goto label_19c714;
    }
    ctx->pc = 0x19C70Cu;
    SET_GPR_U32(ctx, 31, 0x19C714u);
    ctx->pc = 0x19C710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C70Cu;
            // 0x19c710: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C714u; }
        if (ctx->pc != 0x19C714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C714u; }
        if (ctx->pc != 0x19C714u) { return; }
    }
    ctx->pc = 0x19C714u;
label_19c714:
    // 0x19c714: 0x0  nop
    ctx->pc = 0x19c714u;
    // NOP
label_19c718:
    // 0x19c718: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_19c71c:
    // 0x19c71c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x19c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19c720:
    // 0x19c720: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19c720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19c724:
    // 0x19c724: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c728:
    // 0x19c728: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19c728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19c72c:
    // 0x19c72c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19c72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19c730:
    // 0x19c730: 0x0  nop
    ctx->pc = 0x19c730u;
    // NOP
label_19c734:
    // 0x19c734: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x19c734u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_19c738:
    // 0x19c738: 0xc053740  jal         func_14DD00
label_19c73c:
    if (ctx->pc == 0x19C73Cu) {
        ctx->pc = 0x19C73Cu;
            // 0x19c73c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x19C740u;
        goto label_19c740;
    }
    ctx->pc = 0x19C738u;
    SET_GPR_U32(ctx, 31, 0x19C740u);
    ctx->pc = 0x19C73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C738u;
            // 0x19c73c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C740u; }
        if (ctx->pc != 0x19C740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C740u; }
        if (ctx->pc != 0x19C740u) { return; }
    }
    ctx->pc = 0x19C740u;
label_19c740:
    // 0x19c740: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x19c740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19c744:
    // 0x19c744: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x19c744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19c748:
    // 0x19c748: 0xc07b0fc  jal         func_1EC3F0
label_19c74c:
    if (ctx->pc == 0x19C74Cu) {
        ctx->pc = 0x19C74Cu;
            // 0x19c74c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x19C750u;
        goto label_19c750;
    }
    ctx->pc = 0x19C748u;
    SET_GPR_U32(ctx, 31, 0x19C750u);
    ctx->pc = 0x19C74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C748u;
            // 0x19c74c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C750u; }
        if (ctx->pc != 0x19C750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C750u; }
        if (ctx->pc != 0x19C750u) { return; }
    }
    ctx->pc = 0x19C750u;
label_19c750:
    // 0x19c750: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19c754:
    // 0x19c754: 0x40f809  jalr        $v0
label_19c758:
    if (ctx->pc == 0x19C758u) {
        ctx->pc = 0x19C758u;
            // 0x19c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C75Cu;
        goto label_19c75c;
    }
    ctx->pc = 0x19C754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C75Cu);
        ctx->pc = 0x19C758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C754u;
            // 0x19c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C110u: goto label_19c110;
            case 0x19C114u: goto label_19c114;
            case 0x19C118u: goto label_19c118;
            case 0x19C11Cu: goto label_19c11c;
            case 0x19C120u: goto label_19c120;
            case 0x19C124u: goto label_19c124;
            case 0x19C128u: goto label_19c128;
            case 0x19C12Cu: goto label_19c12c;
            case 0x19C130u: goto label_19c130;
            case 0x19C134u: goto label_19c134;
            case 0x19C138u: goto label_19c138;
            case 0x19C13Cu: goto label_19c13c;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C148u: goto label_19c148;
            case 0x19C14Cu: goto label_19c14c;
            case 0x19C150u: goto label_19c150;
            case 0x19C154u: goto label_19c154;
            case 0x19C158u: goto label_19c158;
            case 0x19C15Cu: goto label_19c15c;
            case 0x19C160u: goto label_19c160;
            case 0x19C164u: goto label_19c164;
            case 0x19C168u: goto label_19c168;
            case 0x19C16Cu: goto label_19c16c;
            case 0x19C170u: goto label_19c170;
            case 0x19C174u: goto label_19c174;
            case 0x19C178u: goto label_19c178;
            case 0x19C17Cu: goto label_19c17c;
            case 0x19C180u: goto label_19c180;
            case 0x19C184u: goto label_19c184;
            case 0x19C188u: goto label_19c188;
            case 0x19C18Cu: goto label_19c18c;
            case 0x19C190u: goto label_19c190;
            case 0x19C194u: goto label_19c194;
            case 0x19C198u: goto label_19c198;
            case 0x19C19Cu: goto label_19c19c;
            case 0x19C1A0u: goto label_19c1a0;
            case 0x19C1A4u: goto label_19c1a4;
            case 0x19C1A8u: goto label_19c1a8;
            case 0x19C1ACu: goto label_19c1ac;
            case 0x19C1B0u: goto label_19c1b0;
            case 0x19C1B4u: goto label_19c1b4;
            case 0x19C1B8u: goto label_19c1b8;
            case 0x19C1BCu: goto label_19c1bc;
            case 0x19C1C0u: goto label_19c1c0;
            case 0x19C1C4u: goto label_19c1c4;
            case 0x19C1C8u: goto label_19c1c8;
            case 0x19C1CCu: goto label_19c1cc;
            case 0x19C1D0u: goto label_19c1d0;
            case 0x19C1D4u: goto label_19c1d4;
            case 0x19C1D8u: goto label_19c1d8;
            case 0x19C1DCu: goto label_19c1dc;
            case 0x19C1E0u: goto label_19c1e0;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C1E8u: goto label_19c1e8;
            case 0x19C1ECu: goto label_19c1ec;
            case 0x19C1F0u: goto label_19c1f0;
            case 0x19C1F4u: goto label_19c1f4;
            case 0x19C1F8u: goto label_19c1f8;
            case 0x19C1FCu: goto label_19c1fc;
            case 0x19C200u: goto label_19c200;
            case 0x19C204u: goto label_19c204;
            case 0x19C208u: goto label_19c208;
            case 0x19C20Cu: goto label_19c20c;
            case 0x19C210u: goto label_19c210;
            case 0x19C214u: goto label_19c214;
            case 0x19C218u: goto label_19c218;
            case 0x19C21Cu: goto label_19c21c;
            case 0x19C220u: goto label_19c220;
            case 0x19C224u: goto label_19c224;
            case 0x19C228u: goto label_19c228;
            case 0x19C22Cu: goto label_19c22c;
            case 0x19C230u: goto label_19c230;
            case 0x19C234u: goto label_19c234;
            case 0x19C238u: goto label_19c238;
            case 0x19C23Cu: goto label_19c23c;
            case 0x19C240u: goto label_19c240;
            case 0x19C244u: goto label_19c244;
            case 0x19C248u: goto label_19c248;
            case 0x19C24Cu: goto label_19c24c;
            case 0x19C250u: goto label_19c250;
            case 0x19C254u: goto label_19c254;
            case 0x19C258u: goto label_19c258;
            case 0x19C25Cu: goto label_19c25c;
            case 0x19C260u: goto label_19c260;
            case 0x19C264u: goto label_19c264;
            case 0x19C268u: goto label_19c268;
            case 0x19C26Cu: goto label_19c26c;
            case 0x19C270u: goto label_19c270;
            case 0x19C274u: goto label_19c274;
            case 0x19C278u: goto label_19c278;
            case 0x19C27Cu: goto label_19c27c;
            case 0x19C280u: goto label_19c280;
            case 0x19C284u: goto label_19c284;
            case 0x19C288u: goto label_19c288;
            case 0x19C28Cu: goto label_19c28c;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C298u: goto label_19c298;
            case 0x19C29Cu: goto label_19c29c;
            case 0x19C2A0u: goto label_19c2a0;
            case 0x19C2A4u: goto label_19c2a4;
            case 0x19C2A8u: goto label_19c2a8;
            case 0x19C2ACu: goto label_19c2ac;
            case 0x19C2B0u: goto label_19c2b0;
            case 0x19C2B4u: goto label_19c2b4;
            case 0x19C2B8u: goto label_19c2b8;
            case 0x19C2BCu: goto label_19c2bc;
            case 0x19C2C0u: goto label_19c2c0;
            case 0x19C2C4u: goto label_19c2c4;
            case 0x19C2C8u: goto label_19c2c8;
            case 0x19C2CCu: goto label_19c2cc;
            case 0x19C2D0u: goto label_19c2d0;
            case 0x19C2D4u: goto label_19c2d4;
            case 0x19C2D8u: goto label_19c2d8;
            case 0x19C2DCu: goto label_19c2dc;
            case 0x19C2E0u: goto label_19c2e0;
            case 0x19C2E4u: goto label_19c2e4;
            case 0x19C2E8u: goto label_19c2e8;
            case 0x19C2ECu: goto label_19c2ec;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C2F4u: goto label_19c2f4;
            case 0x19C2F8u: goto label_19c2f8;
            case 0x19C2FCu: goto label_19c2fc;
            case 0x19C300u: goto label_19c300;
            case 0x19C304u: goto label_19c304;
            case 0x19C308u: goto label_19c308;
            case 0x19C30Cu: goto label_19c30c;
            case 0x19C310u: goto label_19c310;
            case 0x19C314u: goto label_19c314;
            case 0x19C318u: goto label_19c318;
            case 0x19C31Cu: goto label_19c31c;
            case 0x19C320u: goto label_19c320;
            case 0x19C324u: goto label_19c324;
            case 0x19C328u: goto label_19c328;
            case 0x19C32Cu: goto label_19c32c;
            case 0x19C330u: goto label_19c330;
            case 0x19C334u: goto label_19c334;
            case 0x19C338u: goto label_19c338;
            case 0x19C33Cu: goto label_19c33c;
            case 0x19C340u: goto label_19c340;
            case 0x19C344u: goto label_19c344;
            case 0x19C348u: goto label_19c348;
            case 0x19C34Cu: goto label_19c34c;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C358u: goto label_19c358;
            case 0x19C35Cu: goto label_19c35c;
            case 0x19C360u: goto label_19c360;
            case 0x19C364u: goto label_19c364;
            case 0x19C368u: goto label_19c368;
            case 0x19C36Cu: goto label_19c36c;
            case 0x19C370u: goto label_19c370;
            case 0x19C374u: goto label_19c374;
            case 0x19C378u: goto label_19c378;
            case 0x19C37Cu: goto label_19c37c;
            case 0x19C380u: goto label_19c380;
            case 0x19C384u: goto label_19c384;
            case 0x19C388u: goto label_19c388;
            case 0x19C38Cu: goto label_19c38c;
            case 0x19C390u: goto label_19c390;
            case 0x19C394u: goto label_19c394;
            case 0x19C398u: goto label_19c398;
            case 0x19C39Cu: goto label_19c39c;
            case 0x19C3A0u: goto label_19c3a0;
            case 0x19C3A4u: goto label_19c3a4;
            case 0x19C3A8u: goto label_19c3a8;
            case 0x19C3ACu: goto label_19c3ac;
            case 0x19C3B0u: goto label_19c3b0;
            case 0x19C3B4u: goto label_19c3b4;
            case 0x19C3B8u: goto label_19c3b8;
            case 0x19C3BCu: goto label_19c3bc;
            case 0x19C3C0u: goto label_19c3c0;
            case 0x19C3C4u: goto label_19c3c4;
            case 0x19C3C8u: goto label_19c3c8;
            case 0x19C3CCu: goto label_19c3cc;
            case 0x19C3D0u: goto label_19c3d0;
            case 0x19C3D4u: goto label_19c3d4;
            case 0x19C3D8u: goto label_19c3d8;
            case 0x19C3DCu: goto label_19c3dc;
            case 0x19C3E0u: goto label_19c3e0;
            case 0x19C3E4u: goto label_19c3e4;
            case 0x19C3E8u: goto label_19c3e8;
            case 0x19C3ECu: goto label_19c3ec;
            case 0x19C3F0u: goto label_19c3f0;
            case 0x19C3F4u: goto label_19c3f4;
            case 0x19C3F8u: goto label_19c3f8;
            case 0x19C3FCu: goto label_19c3fc;
            case 0x19C400u: goto label_19c400;
            case 0x19C404u: goto label_19c404;
            case 0x19C408u: goto label_19c408;
            case 0x19C40Cu: goto label_19c40c;
            case 0x19C410u: goto label_19c410;
            case 0x19C414u: goto label_19c414;
            case 0x19C418u: goto label_19c418;
            case 0x19C41Cu: goto label_19c41c;
            case 0x19C420u: goto label_19c420;
            case 0x19C424u: goto label_19c424;
            case 0x19C428u: goto label_19c428;
            case 0x19C42Cu: goto label_19c42c;
            case 0x19C430u: goto label_19c430;
            case 0x19C434u: goto label_19c434;
            case 0x19C438u: goto label_19c438;
            case 0x19C43Cu: goto label_19c43c;
            case 0x19C440u: goto label_19c440;
            case 0x19C444u: goto label_19c444;
            case 0x19C448u: goto label_19c448;
            case 0x19C44Cu: goto label_19c44c;
            case 0x19C450u: goto label_19c450;
            case 0x19C454u: goto label_19c454;
            case 0x19C458u: goto label_19c458;
            case 0x19C45Cu: goto label_19c45c;
            case 0x19C460u: goto label_19c460;
            case 0x19C464u: goto label_19c464;
            case 0x19C468u: goto label_19c468;
            case 0x19C46Cu: goto label_19c46c;
            case 0x19C470u: goto label_19c470;
            case 0x19C474u: goto label_19c474;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C480u: goto label_19c480;
            case 0x19C484u: goto label_19c484;
            case 0x19C488u: goto label_19c488;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C490u: goto label_19c490;
            case 0x19C494u: goto label_19c494;
            case 0x19C498u: goto label_19c498;
            case 0x19C49Cu: goto label_19c49c;
            case 0x19C4A0u: goto label_19c4a0;
            case 0x19C4A4u: goto label_19c4a4;
            case 0x19C4A8u: goto label_19c4a8;
            case 0x19C4ACu: goto label_19c4ac;
            case 0x19C4B0u: goto label_19c4b0;
            case 0x19C4B4u: goto label_19c4b4;
            case 0x19C4B8u: goto label_19c4b8;
            case 0x19C4BCu: goto label_19c4bc;
            case 0x19C4C0u: goto label_19c4c0;
            case 0x19C4C4u: goto label_19c4c4;
            case 0x19C4C8u: goto label_19c4c8;
            case 0x19C4CCu: goto label_19c4cc;
            case 0x19C4D0u: goto label_19c4d0;
            case 0x19C4D4u: goto label_19c4d4;
            case 0x19C4D8u: goto label_19c4d8;
            case 0x19C4DCu: goto label_19c4dc;
            case 0x19C4E0u: goto label_19c4e0;
            case 0x19C4E4u: goto label_19c4e4;
            case 0x19C4E8u: goto label_19c4e8;
            case 0x19C4ECu: goto label_19c4ec;
            case 0x19C4F0u: goto label_19c4f0;
            case 0x19C4F4u: goto label_19c4f4;
            case 0x19C4F8u: goto label_19c4f8;
            case 0x19C4FCu: goto label_19c4fc;
            case 0x19C500u: goto label_19c500;
            case 0x19C504u: goto label_19c504;
            case 0x19C508u: goto label_19c508;
            case 0x19C50Cu: goto label_19c50c;
            case 0x19C510u: goto label_19c510;
            case 0x19C514u: goto label_19c514;
            case 0x19C518u: goto label_19c518;
            case 0x19C51Cu: goto label_19c51c;
            case 0x19C520u: goto label_19c520;
            case 0x19C524u: goto label_19c524;
            case 0x19C528u: goto label_19c528;
            case 0x19C52Cu: goto label_19c52c;
            case 0x19C530u: goto label_19c530;
            case 0x19C534u: goto label_19c534;
            case 0x19C538u: goto label_19c538;
            case 0x19C53Cu: goto label_19c53c;
            case 0x19C540u: goto label_19c540;
            case 0x19C544u: goto label_19c544;
            case 0x19C548u: goto label_19c548;
            case 0x19C54Cu: goto label_19c54c;
            case 0x19C550u: goto label_19c550;
            case 0x19C554u: goto label_19c554;
            case 0x19C558u: goto label_19c558;
            case 0x19C55Cu: goto label_19c55c;
            case 0x19C560u: goto label_19c560;
            case 0x19C564u: goto label_19c564;
            case 0x19C568u: goto label_19c568;
            case 0x19C56Cu: goto label_19c56c;
            case 0x19C570u: goto label_19c570;
            case 0x19C574u: goto label_19c574;
            case 0x19C578u: goto label_19c578;
            case 0x19C57Cu: goto label_19c57c;
            case 0x19C580u: goto label_19c580;
            case 0x19C584u: goto label_19c584;
            case 0x19C588u: goto label_19c588;
            case 0x19C58Cu: goto label_19c58c;
            case 0x19C590u: goto label_19c590;
            case 0x19C594u: goto label_19c594;
            case 0x19C598u: goto label_19c598;
            case 0x19C59Cu: goto label_19c59c;
            case 0x19C5A0u: goto label_19c5a0;
            case 0x19C5A4u: goto label_19c5a4;
            case 0x19C5A8u: goto label_19c5a8;
            case 0x19C5ACu: goto label_19c5ac;
            case 0x19C5B0u: goto label_19c5b0;
            case 0x19C5B4u: goto label_19c5b4;
            case 0x19C5B8u: goto label_19c5b8;
            case 0x19C5BCu: goto label_19c5bc;
            case 0x19C5C0u: goto label_19c5c0;
            case 0x19C5C4u: goto label_19c5c4;
            case 0x19C5C8u: goto label_19c5c8;
            case 0x19C5CCu: goto label_19c5cc;
            case 0x19C5D0u: goto label_19c5d0;
            case 0x19C5D4u: goto label_19c5d4;
            case 0x19C5D8u: goto label_19c5d8;
            case 0x19C5DCu: goto label_19c5dc;
            case 0x19C5E0u: goto label_19c5e0;
            case 0x19C5E4u: goto label_19c5e4;
            case 0x19C5E8u: goto label_19c5e8;
            case 0x19C5ECu: goto label_19c5ec;
            case 0x19C5F0u: goto label_19c5f0;
            case 0x19C5F4u: goto label_19c5f4;
            case 0x19C5F8u: goto label_19c5f8;
            case 0x19C5FCu: goto label_19c5fc;
            case 0x19C600u: goto label_19c600;
            case 0x19C604u: goto label_19c604;
            case 0x19C608u: goto label_19c608;
            case 0x19C60Cu: goto label_19c60c;
            case 0x19C610u: goto label_19c610;
            case 0x19C614u: goto label_19c614;
            case 0x19C618u: goto label_19c618;
            case 0x19C61Cu: goto label_19c61c;
            case 0x19C620u: goto label_19c620;
            case 0x19C624u: goto label_19c624;
            case 0x19C628u: goto label_19c628;
            case 0x19C62Cu: goto label_19c62c;
            case 0x19C630u: goto label_19c630;
            case 0x19C634u: goto label_19c634;
            case 0x19C638u: goto label_19c638;
            case 0x19C63Cu: goto label_19c63c;
            case 0x19C640u: goto label_19c640;
            case 0x19C644u: goto label_19c644;
            case 0x19C648u: goto label_19c648;
            case 0x19C64Cu: goto label_19c64c;
            case 0x19C650u: goto label_19c650;
            case 0x19C654u: goto label_19c654;
            case 0x19C658u: goto label_19c658;
            case 0x19C65Cu: goto label_19c65c;
            case 0x19C660u: goto label_19c660;
            case 0x19C664u: goto label_19c664;
            case 0x19C668u: goto label_19c668;
            case 0x19C66Cu: goto label_19c66c;
            case 0x19C670u: goto label_19c670;
            case 0x19C674u: goto label_19c674;
            case 0x19C678u: goto label_19c678;
            case 0x19C67Cu: goto label_19c67c;
            case 0x19C680u: goto label_19c680;
            case 0x19C684u: goto label_19c684;
            case 0x19C688u: goto label_19c688;
            case 0x19C68Cu: goto label_19c68c;
            case 0x19C690u: goto label_19c690;
            case 0x19C694u: goto label_19c694;
            case 0x19C698u: goto label_19c698;
            case 0x19C69Cu: goto label_19c69c;
            case 0x19C6A0u: goto label_19c6a0;
            case 0x19C6A4u: goto label_19c6a4;
            case 0x19C6A8u: goto label_19c6a8;
            case 0x19C6ACu: goto label_19c6ac;
            case 0x19C6B0u: goto label_19c6b0;
            case 0x19C6B4u: goto label_19c6b4;
            case 0x19C6B8u: goto label_19c6b8;
            case 0x19C6BCu: goto label_19c6bc;
            case 0x19C6C0u: goto label_19c6c0;
            case 0x19C6C4u: goto label_19c6c4;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C6CCu: goto label_19c6cc;
            case 0x19C6D0u: goto label_19c6d0;
            case 0x19C6D4u: goto label_19c6d4;
            case 0x19C6D8u: goto label_19c6d8;
            case 0x19C6DCu: goto label_19c6dc;
            case 0x19C6E0u: goto label_19c6e0;
            case 0x19C6E4u: goto label_19c6e4;
            case 0x19C6E8u: goto label_19c6e8;
            case 0x19C6ECu: goto label_19c6ec;
            case 0x19C6F0u: goto label_19c6f0;
            case 0x19C6F4u: goto label_19c6f4;
            case 0x19C6F8u: goto label_19c6f8;
            case 0x19C6FCu: goto label_19c6fc;
            case 0x19C700u: goto label_19c700;
            case 0x19C704u: goto label_19c704;
            case 0x19C708u: goto label_19c708;
            case 0x19C70Cu: goto label_19c70c;
            case 0x19C710u: goto label_19c710;
            case 0x19C714u: goto label_19c714;
            case 0x19C718u: goto label_19c718;
            case 0x19C71Cu: goto label_19c71c;
            case 0x19C720u: goto label_19c720;
            case 0x19C724u: goto label_19c724;
            case 0x19C728u: goto label_19c728;
            case 0x19C72Cu: goto label_19c72c;
            case 0x19C730u: goto label_19c730;
            case 0x19C734u: goto label_19c734;
            case 0x19C738u: goto label_19c738;
            case 0x19C73Cu: goto label_19c73c;
            case 0x19C740u: goto label_19c740;
            case 0x19C744u: goto label_19c744;
            case 0x19C748u: goto label_19c748;
            case 0x19C74Cu: goto label_19c74c;
            case 0x19C750u: goto label_19c750;
            case 0x19C754u: goto label_19c754;
            case 0x19C758u: goto label_19c758;
            case 0x19C75Cu: goto label_19c75c;
            case 0x19C760u: goto label_19c760;
            case 0x19C764u: goto label_19c764;
            case 0x19C768u: goto label_19c768;
            case 0x19C76Cu: goto label_19c76c;
            case 0x19C770u: goto label_19c770;
            case 0x19C774u: goto label_19c774;
            case 0x19C778u: goto label_19c778;
            case 0x19C77Cu: goto label_19c77c;
            case 0x19C780u: goto label_19c780;
            case 0x19C784u: goto label_19c784;
            case 0x19C788u: goto label_19c788;
            case 0x19C78Cu: goto label_19c78c;
            case 0x19C790u: goto label_19c790;
            case 0x19C794u: goto label_19c794;
            case 0x19C798u: goto label_19c798;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C75Cu; }
            if (ctx->pc != 0x19C75Cu) { return; }
        }
    }
    ctx->pc = 0x19C75Cu;
label_19c75c:
    // 0x19c75c: 0x1000000a  b           . + 4 + (0xA << 2)
label_19c760:
    if (ctx->pc == 0x19C760u) {
        ctx->pc = 0x19C764u;
        goto label_19c764;
    }
    ctx->pc = 0x19C75Cu;
    {
        const bool branch_taken_0x19c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c75c) {
            ctx->pc = 0x19C788u;
            goto label_19c788;
        }
    }
    ctx->pc = 0x19C764u;
label_19c764:
    // 0x19c764: 0x0  nop
    ctx->pc = 0x19c764u;
    // NOP
label_19c768:
    // 0x19c768: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19c768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_19c76c:
    // 0x19c76c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19c770:
    // 0x19c770: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x19c770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_19c774:
    // 0x19c774: 0x24c6bed0  addiu       $a2, $a2, -0x4130
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950608));
label_19c778:
    // 0x19c778: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19c778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c77c:
    // 0x19c77c: 0xc053ca4  jal         func_14F290
label_19c780:
    if (ctx->pc == 0x19C780u) {
        ctx->pc = 0x19C780u;
            // 0x19c780: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19C784u;
        goto label_19c784;
    }
    ctx->pc = 0x19C77Cu;
    SET_GPR_U32(ctx, 31, 0x19C784u);
    ctx->pc = 0x19C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C77Cu;
            // 0x19c780: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C784u; }
        if (ctx->pc != 0x19C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C784u; }
        if (ctx->pc != 0x19C784u) { return; }
    }
    ctx->pc = 0x19C784u;
label_19c784:
    // 0x19c784: 0x0  nop
    ctx->pc = 0x19c784u;
    // NOP
label_19c788:
    // 0x19c788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c78c:
    // 0x19c78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c790:
    // 0x19c790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19c794:
    // 0x19c794: 0x3e00008  jr          $ra
label_19c798:
    if (ctx->pc == 0x19C798u) {
        ctx->pc = 0x19C798u;
            // 0x19c798: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x19C79Cu;
        goto label_fallthrough_0x19c794;
    }
    ctx->pc = 0x19C794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C794u;
            // 0x19c798: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C110u: goto label_19c110;
            case 0x19C114u: goto label_19c114;
            case 0x19C118u: goto label_19c118;
            case 0x19C11Cu: goto label_19c11c;
            case 0x19C120u: goto label_19c120;
            case 0x19C124u: goto label_19c124;
            case 0x19C128u: goto label_19c128;
            case 0x19C12Cu: goto label_19c12c;
            case 0x19C130u: goto label_19c130;
            case 0x19C134u: goto label_19c134;
            case 0x19C138u: goto label_19c138;
            case 0x19C13Cu: goto label_19c13c;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C148u: goto label_19c148;
            case 0x19C14Cu: goto label_19c14c;
            case 0x19C150u: goto label_19c150;
            case 0x19C154u: goto label_19c154;
            case 0x19C158u: goto label_19c158;
            case 0x19C15Cu: goto label_19c15c;
            case 0x19C160u: goto label_19c160;
            case 0x19C164u: goto label_19c164;
            case 0x19C168u: goto label_19c168;
            case 0x19C16Cu: goto label_19c16c;
            case 0x19C170u: goto label_19c170;
            case 0x19C174u: goto label_19c174;
            case 0x19C178u: goto label_19c178;
            case 0x19C17Cu: goto label_19c17c;
            case 0x19C180u: goto label_19c180;
            case 0x19C184u: goto label_19c184;
            case 0x19C188u: goto label_19c188;
            case 0x19C18Cu: goto label_19c18c;
            case 0x19C190u: goto label_19c190;
            case 0x19C194u: goto label_19c194;
            case 0x19C198u: goto label_19c198;
            case 0x19C19Cu: goto label_19c19c;
            case 0x19C1A0u: goto label_19c1a0;
            case 0x19C1A4u: goto label_19c1a4;
            case 0x19C1A8u: goto label_19c1a8;
            case 0x19C1ACu: goto label_19c1ac;
            case 0x19C1B0u: goto label_19c1b0;
            case 0x19C1B4u: goto label_19c1b4;
            case 0x19C1B8u: goto label_19c1b8;
            case 0x19C1BCu: goto label_19c1bc;
            case 0x19C1C0u: goto label_19c1c0;
            case 0x19C1C4u: goto label_19c1c4;
            case 0x19C1C8u: goto label_19c1c8;
            case 0x19C1CCu: goto label_19c1cc;
            case 0x19C1D0u: goto label_19c1d0;
            case 0x19C1D4u: goto label_19c1d4;
            case 0x19C1D8u: goto label_19c1d8;
            case 0x19C1DCu: goto label_19c1dc;
            case 0x19C1E0u: goto label_19c1e0;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C1E8u: goto label_19c1e8;
            case 0x19C1ECu: goto label_19c1ec;
            case 0x19C1F0u: goto label_19c1f0;
            case 0x19C1F4u: goto label_19c1f4;
            case 0x19C1F8u: goto label_19c1f8;
            case 0x19C1FCu: goto label_19c1fc;
            case 0x19C200u: goto label_19c200;
            case 0x19C204u: goto label_19c204;
            case 0x19C208u: goto label_19c208;
            case 0x19C20Cu: goto label_19c20c;
            case 0x19C210u: goto label_19c210;
            case 0x19C214u: goto label_19c214;
            case 0x19C218u: goto label_19c218;
            case 0x19C21Cu: goto label_19c21c;
            case 0x19C220u: goto label_19c220;
            case 0x19C224u: goto label_19c224;
            case 0x19C228u: goto label_19c228;
            case 0x19C22Cu: goto label_19c22c;
            case 0x19C230u: goto label_19c230;
            case 0x19C234u: goto label_19c234;
            case 0x19C238u: goto label_19c238;
            case 0x19C23Cu: goto label_19c23c;
            case 0x19C240u: goto label_19c240;
            case 0x19C244u: goto label_19c244;
            case 0x19C248u: goto label_19c248;
            case 0x19C24Cu: goto label_19c24c;
            case 0x19C250u: goto label_19c250;
            case 0x19C254u: goto label_19c254;
            case 0x19C258u: goto label_19c258;
            case 0x19C25Cu: goto label_19c25c;
            case 0x19C260u: goto label_19c260;
            case 0x19C264u: goto label_19c264;
            case 0x19C268u: goto label_19c268;
            case 0x19C26Cu: goto label_19c26c;
            case 0x19C270u: goto label_19c270;
            case 0x19C274u: goto label_19c274;
            case 0x19C278u: goto label_19c278;
            case 0x19C27Cu: goto label_19c27c;
            case 0x19C280u: goto label_19c280;
            case 0x19C284u: goto label_19c284;
            case 0x19C288u: goto label_19c288;
            case 0x19C28Cu: goto label_19c28c;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C298u: goto label_19c298;
            case 0x19C29Cu: goto label_19c29c;
            case 0x19C2A0u: goto label_19c2a0;
            case 0x19C2A4u: goto label_19c2a4;
            case 0x19C2A8u: goto label_19c2a8;
            case 0x19C2ACu: goto label_19c2ac;
            case 0x19C2B0u: goto label_19c2b0;
            case 0x19C2B4u: goto label_19c2b4;
            case 0x19C2B8u: goto label_19c2b8;
            case 0x19C2BCu: goto label_19c2bc;
            case 0x19C2C0u: goto label_19c2c0;
            case 0x19C2C4u: goto label_19c2c4;
            case 0x19C2C8u: goto label_19c2c8;
            case 0x19C2CCu: goto label_19c2cc;
            case 0x19C2D0u: goto label_19c2d0;
            case 0x19C2D4u: goto label_19c2d4;
            case 0x19C2D8u: goto label_19c2d8;
            case 0x19C2DCu: goto label_19c2dc;
            case 0x19C2E0u: goto label_19c2e0;
            case 0x19C2E4u: goto label_19c2e4;
            case 0x19C2E8u: goto label_19c2e8;
            case 0x19C2ECu: goto label_19c2ec;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C2F4u: goto label_19c2f4;
            case 0x19C2F8u: goto label_19c2f8;
            case 0x19C2FCu: goto label_19c2fc;
            case 0x19C300u: goto label_19c300;
            case 0x19C304u: goto label_19c304;
            case 0x19C308u: goto label_19c308;
            case 0x19C30Cu: goto label_19c30c;
            case 0x19C310u: goto label_19c310;
            case 0x19C314u: goto label_19c314;
            case 0x19C318u: goto label_19c318;
            case 0x19C31Cu: goto label_19c31c;
            case 0x19C320u: goto label_19c320;
            case 0x19C324u: goto label_19c324;
            case 0x19C328u: goto label_19c328;
            case 0x19C32Cu: goto label_19c32c;
            case 0x19C330u: goto label_19c330;
            case 0x19C334u: goto label_19c334;
            case 0x19C338u: goto label_19c338;
            case 0x19C33Cu: goto label_19c33c;
            case 0x19C340u: goto label_19c340;
            case 0x19C344u: goto label_19c344;
            case 0x19C348u: goto label_19c348;
            case 0x19C34Cu: goto label_19c34c;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C358u: goto label_19c358;
            case 0x19C35Cu: goto label_19c35c;
            case 0x19C360u: goto label_19c360;
            case 0x19C364u: goto label_19c364;
            case 0x19C368u: goto label_19c368;
            case 0x19C36Cu: goto label_19c36c;
            case 0x19C370u: goto label_19c370;
            case 0x19C374u: goto label_19c374;
            case 0x19C378u: goto label_19c378;
            case 0x19C37Cu: goto label_19c37c;
            case 0x19C380u: goto label_19c380;
            case 0x19C384u: goto label_19c384;
            case 0x19C388u: goto label_19c388;
            case 0x19C38Cu: goto label_19c38c;
            case 0x19C390u: goto label_19c390;
            case 0x19C394u: goto label_19c394;
            case 0x19C398u: goto label_19c398;
            case 0x19C39Cu: goto label_19c39c;
            case 0x19C3A0u: goto label_19c3a0;
            case 0x19C3A4u: goto label_19c3a4;
            case 0x19C3A8u: goto label_19c3a8;
            case 0x19C3ACu: goto label_19c3ac;
            case 0x19C3B0u: goto label_19c3b0;
            case 0x19C3B4u: goto label_19c3b4;
            case 0x19C3B8u: goto label_19c3b8;
            case 0x19C3BCu: goto label_19c3bc;
            case 0x19C3C0u: goto label_19c3c0;
            case 0x19C3C4u: goto label_19c3c4;
            case 0x19C3C8u: goto label_19c3c8;
            case 0x19C3CCu: goto label_19c3cc;
            case 0x19C3D0u: goto label_19c3d0;
            case 0x19C3D4u: goto label_19c3d4;
            case 0x19C3D8u: goto label_19c3d8;
            case 0x19C3DCu: goto label_19c3dc;
            case 0x19C3E0u: goto label_19c3e0;
            case 0x19C3E4u: goto label_19c3e4;
            case 0x19C3E8u: goto label_19c3e8;
            case 0x19C3ECu: goto label_19c3ec;
            case 0x19C3F0u: goto label_19c3f0;
            case 0x19C3F4u: goto label_19c3f4;
            case 0x19C3F8u: goto label_19c3f8;
            case 0x19C3FCu: goto label_19c3fc;
            case 0x19C400u: goto label_19c400;
            case 0x19C404u: goto label_19c404;
            case 0x19C408u: goto label_19c408;
            case 0x19C40Cu: goto label_19c40c;
            case 0x19C410u: goto label_19c410;
            case 0x19C414u: goto label_19c414;
            case 0x19C418u: goto label_19c418;
            case 0x19C41Cu: goto label_19c41c;
            case 0x19C420u: goto label_19c420;
            case 0x19C424u: goto label_19c424;
            case 0x19C428u: goto label_19c428;
            case 0x19C42Cu: goto label_19c42c;
            case 0x19C430u: goto label_19c430;
            case 0x19C434u: goto label_19c434;
            case 0x19C438u: goto label_19c438;
            case 0x19C43Cu: goto label_19c43c;
            case 0x19C440u: goto label_19c440;
            case 0x19C444u: goto label_19c444;
            case 0x19C448u: goto label_19c448;
            case 0x19C44Cu: goto label_19c44c;
            case 0x19C450u: goto label_19c450;
            case 0x19C454u: goto label_19c454;
            case 0x19C458u: goto label_19c458;
            case 0x19C45Cu: goto label_19c45c;
            case 0x19C460u: goto label_19c460;
            case 0x19C464u: goto label_19c464;
            case 0x19C468u: goto label_19c468;
            case 0x19C46Cu: goto label_19c46c;
            case 0x19C470u: goto label_19c470;
            case 0x19C474u: goto label_19c474;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C480u: goto label_19c480;
            case 0x19C484u: goto label_19c484;
            case 0x19C488u: goto label_19c488;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C490u: goto label_19c490;
            case 0x19C494u: goto label_19c494;
            case 0x19C498u: goto label_19c498;
            case 0x19C49Cu: goto label_19c49c;
            case 0x19C4A0u: goto label_19c4a0;
            case 0x19C4A4u: goto label_19c4a4;
            case 0x19C4A8u: goto label_19c4a8;
            case 0x19C4ACu: goto label_19c4ac;
            case 0x19C4B0u: goto label_19c4b0;
            case 0x19C4B4u: goto label_19c4b4;
            case 0x19C4B8u: goto label_19c4b8;
            case 0x19C4BCu: goto label_19c4bc;
            case 0x19C4C0u: goto label_19c4c0;
            case 0x19C4C4u: goto label_19c4c4;
            case 0x19C4C8u: goto label_19c4c8;
            case 0x19C4CCu: goto label_19c4cc;
            case 0x19C4D0u: goto label_19c4d0;
            case 0x19C4D4u: goto label_19c4d4;
            case 0x19C4D8u: goto label_19c4d8;
            case 0x19C4DCu: goto label_19c4dc;
            case 0x19C4E0u: goto label_19c4e0;
            case 0x19C4E4u: goto label_19c4e4;
            case 0x19C4E8u: goto label_19c4e8;
            case 0x19C4ECu: goto label_19c4ec;
            case 0x19C4F0u: goto label_19c4f0;
            case 0x19C4F4u: goto label_19c4f4;
            case 0x19C4F8u: goto label_19c4f8;
            case 0x19C4FCu: goto label_19c4fc;
            case 0x19C500u: goto label_19c500;
            case 0x19C504u: goto label_19c504;
            case 0x19C508u: goto label_19c508;
            case 0x19C50Cu: goto label_19c50c;
            case 0x19C510u: goto label_19c510;
            case 0x19C514u: goto label_19c514;
            case 0x19C518u: goto label_19c518;
            case 0x19C51Cu: goto label_19c51c;
            case 0x19C520u: goto label_19c520;
            case 0x19C524u: goto label_19c524;
            case 0x19C528u: goto label_19c528;
            case 0x19C52Cu: goto label_19c52c;
            case 0x19C530u: goto label_19c530;
            case 0x19C534u: goto label_19c534;
            case 0x19C538u: goto label_19c538;
            case 0x19C53Cu: goto label_19c53c;
            case 0x19C540u: goto label_19c540;
            case 0x19C544u: goto label_19c544;
            case 0x19C548u: goto label_19c548;
            case 0x19C54Cu: goto label_19c54c;
            case 0x19C550u: goto label_19c550;
            case 0x19C554u: goto label_19c554;
            case 0x19C558u: goto label_19c558;
            case 0x19C55Cu: goto label_19c55c;
            case 0x19C560u: goto label_19c560;
            case 0x19C564u: goto label_19c564;
            case 0x19C568u: goto label_19c568;
            case 0x19C56Cu: goto label_19c56c;
            case 0x19C570u: goto label_19c570;
            case 0x19C574u: goto label_19c574;
            case 0x19C578u: goto label_19c578;
            case 0x19C57Cu: goto label_19c57c;
            case 0x19C580u: goto label_19c580;
            case 0x19C584u: goto label_19c584;
            case 0x19C588u: goto label_19c588;
            case 0x19C58Cu: goto label_19c58c;
            case 0x19C590u: goto label_19c590;
            case 0x19C594u: goto label_19c594;
            case 0x19C598u: goto label_19c598;
            case 0x19C59Cu: goto label_19c59c;
            case 0x19C5A0u: goto label_19c5a0;
            case 0x19C5A4u: goto label_19c5a4;
            case 0x19C5A8u: goto label_19c5a8;
            case 0x19C5ACu: goto label_19c5ac;
            case 0x19C5B0u: goto label_19c5b0;
            case 0x19C5B4u: goto label_19c5b4;
            case 0x19C5B8u: goto label_19c5b8;
            case 0x19C5BCu: goto label_19c5bc;
            case 0x19C5C0u: goto label_19c5c0;
            case 0x19C5C4u: goto label_19c5c4;
            case 0x19C5C8u: goto label_19c5c8;
            case 0x19C5CCu: goto label_19c5cc;
            case 0x19C5D0u: goto label_19c5d0;
            case 0x19C5D4u: goto label_19c5d4;
            case 0x19C5D8u: goto label_19c5d8;
            case 0x19C5DCu: goto label_19c5dc;
            case 0x19C5E0u: goto label_19c5e0;
            case 0x19C5E4u: goto label_19c5e4;
            case 0x19C5E8u: goto label_19c5e8;
            case 0x19C5ECu: goto label_19c5ec;
            case 0x19C5F0u: goto label_19c5f0;
            case 0x19C5F4u: goto label_19c5f4;
            case 0x19C5F8u: goto label_19c5f8;
            case 0x19C5FCu: goto label_19c5fc;
            case 0x19C600u: goto label_19c600;
            case 0x19C604u: goto label_19c604;
            case 0x19C608u: goto label_19c608;
            case 0x19C60Cu: goto label_19c60c;
            case 0x19C610u: goto label_19c610;
            case 0x19C614u: goto label_19c614;
            case 0x19C618u: goto label_19c618;
            case 0x19C61Cu: goto label_19c61c;
            case 0x19C620u: goto label_19c620;
            case 0x19C624u: goto label_19c624;
            case 0x19C628u: goto label_19c628;
            case 0x19C62Cu: goto label_19c62c;
            case 0x19C630u: goto label_19c630;
            case 0x19C634u: goto label_19c634;
            case 0x19C638u: goto label_19c638;
            case 0x19C63Cu: goto label_19c63c;
            case 0x19C640u: goto label_19c640;
            case 0x19C644u: goto label_19c644;
            case 0x19C648u: goto label_19c648;
            case 0x19C64Cu: goto label_19c64c;
            case 0x19C650u: goto label_19c650;
            case 0x19C654u: goto label_19c654;
            case 0x19C658u: goto label_19c658;
            case 0x19C65Cu: goto label_19c65c;
            case 0x19C660u: goto label_19c660;
            case 0x19C664u: goto label_19c664;
            case 0x19C668u: goto label_19c668;
            case 0x19C66Cu: goto label_19c66c;
            case 0x19C670u: goto label_19c670;
            case 0x19C674u: goto label_19c674;
            case 0x19C678u: goto label_19c678;
            case 0x19C67Cu: goto label_19c67c;
            case 0x19C680u: goto label_19c680;
            case 0x19C684u: goto label_19c684;
            case 0x19C688u: goto label_19c688;
            case 0x19C68Cu: goto label_19c68c;
            case 0x19C690u: goto label_19c690;
            case 0x19C694u: goto label_19c694;
            case 0x19C698u: goto label_19c698;
            case 0x19C69Cu: goto label_19c69c;
            case 0x19C6A0u: goto label_19c6a0;
            case 0x19C6A4u: goto label_19c6a4;
            case 0x19C6A8u: goto label_19c6a8;
            case 0x19C6ACu: goto label_19c6ac;
            case 0x19C6B0u: goto label_19c6b0;
            case 0x19C6B4u: goto label_19c6b4;
            case 0x19C6B8u: goto label_19c6b8;
            case 0x19C6BCu: goto label_19c6bc;
            case 0x19C6C0u: goto label_19c6c0;
            case 0x19C6C4u: goto label_19c6c4;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C6CCu: goto label_19c6cc;
            case 0x19C6D0u: goto label_19c6d0;
            case 0x19C6D4u: goto label_19c6d4;
            case 0x19C6D8u: goto label_19c6d8;
            case 0x19C6DCu: goto label_19c6dc;
            case 0x19C6E0u: goto label_19c6e0;
            case 0x19C6E4u: goto label_19c6e4;
            case 0x19C6E8u: goto label_19c6e8;
            case 0x19C6ECu: goto label_19c6ec;
            case 0x19C6F0u: goto label_19c6f0;
            case 0x19C6F4u: goto label_19c6f4;
            case 0x19C6F8u: goto label_19c6f8;
            case 0x19C6FCu: goto label_19c6fc;
            case 0x19C700u: goto label_19c700;
            case 0x19C704u: goto label_19c704;
            case 0x19C708u: goto label_19c708;
            case 0x19C70Cu: goto label_19c70c;
            case 0x19C710u: goto label_19c710;
            case 0x19C714u: goto label_19c714;
            case 0x19C718u: goto label_19c718;
            case 0x19C71Cu: goto label_19c71c;
            case 0x19C720u: goto label_19c720;
            case 0x19C724u: goto label_19c724;
            case 0x19C728u: goto label_19c728;
            case 0x19C72Cu: goto label_19c72c;
            case 0x19C730u: goto label_19c730;
            case 0x19C734u: goto label_19c734;
            case 0x19C738u: goto label_19c738;
            case 0x19C73Cu: goto label_19c73c;
            case 0x19C740u: goto label_19c740;
            case 0x19C744u: goto label_19c744;
            case 0x19C748u: goto label_19c748;
            case 0x19C74Cu: goto label_19c74c;
            case 0x19C750u: goto label_19c750;
            case 0x19C754u: goto label_19c754;
            case 0x19C758u: goto label_19c758;
            case 0x19C75Cu: goto label_19c75c;
            case 0x19C760u: goto label_19c760;
            case 0x19C764u: goto label_19c764;
            case 0x19C768u: goto label_19c768;
            case 0x19C76Cu: goto label_19c76c;
            case 0x19C770u: goto label_19c770;
            case 0x19C774u: goto label_19c774;
            case 0x19C778u: goto label_19c778;
            case 0x19C77Cu: goto label_19c77c;
            case 0x19C780u: goto label_19c780;
            case 0x19C784u: goto label_19c784;
            case 0x19C788u: goto label_19c788;
            case 0x19C78Cu: goto label_19c78c;
            case 0x19C790u: goto label_19c790;
            case 0x19C794u: goto label_19c794;
            case 0x19C798u: goto label_19c798;
            default: break;
        }
        return;
    }
label_fallthrough_0x19c794:
    ctx->pc = 0x19C79Cu;
}
