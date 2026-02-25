#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc00
// Address: 0x148070 - 0x148278
void MapMoveingFunc00_0x148070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc00_0x148070");
#endif

    ctx->pc = 0x148070u;

    // 0x148070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14807c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x148080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148084: 0xc059f74  jal         func_167DD0
    ctx->pc = 0x148084u;
    SET_GPR_U32(ctx, 31, 0x14808Cu);
    ctx->pc = 0x148088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148084u;
            // 0x148088: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DD0u;
    if (runtime->hasFunction(0x167DD0u)) {
        auto targetFn = runtime->lookupFunction(0x167DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14808Cu; }
        if (ctx->pc != 0x14808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getCameraRot_0x167dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14808Cu; }
        if (ctx->pc != 0x14808Cu) { return; }
    }
    ctx->pc = 0x14808Cu;
    // 0x14808c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148090: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x148090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x148094: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x148094u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x148098: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x148098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x14809c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14809cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1480a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1480a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1480a4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1480a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1480a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1480ac: 0xc4830124  lwc1        $f3, 0x124($a0)
    ctx->pc = 0x1480acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1480b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1480b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1480b4: 0x0  nop
    ctx->pc = 0x1480b4u;
    // NOP
    // 0x1480b8: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1480b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1480bc: 0xe4810124  swc1        $f1, 0x124($a0)
    ctx->pc = 0x1480bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1480c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1480c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1480c4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1480c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480c8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1480c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1480cc: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1480ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1480d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1480d4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1480d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1480d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1480dc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1480dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1480e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1480e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1480e4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1480e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1480e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1480ec: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1480ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1480f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1480f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1480f4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1480f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1480f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1480f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1480fc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1480FCu;
    {
        const bool branch_taken_0x1480fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1480FCu;
            // 0x148100: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480fc) {
            ctx->pc = 0x148120u;
            goto label_148120;
        }
    }
    ctx->pc = 0x148104u;
    // 0x148104: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x148108: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148108u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x14810c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14810cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148110: 0x0  nop
    ctx->pc = 0x148110u;
    // NOP
    // 0x148114: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x148114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x148118: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x148118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x14811c: 0x0  nop
    ctx->pc = 0x14811cu;
    // NOP
label_148120:
    // 0x148120: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x148120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148124: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x148124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x148128: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148128u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x14812c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14812cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148130: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x148130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148134: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148138: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x148138u;
    {
        const bool branch_taken_0x148138 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148138u;
            // 0x14813c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148138) {
            ctx->pc = 0x148158u;
            goto label_148158;
        }
    }
    ctx->pc = 0x148140u;
    // 0x148140: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x148144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148144u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x148148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14814c: 0x0  nop
    ctx->pc = 0x14814cu;
    // NOP
    // 0x148150: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x148150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x148154: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x148154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_148158:
    // 0x148158: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14815c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x148160: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148160u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x148164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148168: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x148168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14816c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14816cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148170: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x148170u;
    {
        const bool branch_taken_0x148170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x148174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148170u;
            // 0x148174: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148170) {
            ctx->pc = 0x148190u;
            goto label_148190;
        }
    }
    ctx->pc = 0x148178u;
    // 0x148178: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14817c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14817cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x148180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148184: 0x0  nop
    ctx->pc = 0x148184u;
    // NOP
    // 0x148188: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x148188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14818c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14818cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_148190:
    // 0x148190: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148194: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x148198: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x148198u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x14819c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14819cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1481a0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1481a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1481a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1481a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1481a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1481A8u;
    {
        const bool branch_taken_0x1481a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1481ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1481A8u;
            // 0x1481ac: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1481a8) {
            ctx->pc = 0x1481C8u;
            goto label_1481c8;
        }
    }
    ctx->pc = 0x1481B0u;
    // 0x1481b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1481b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1481b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1481b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1481b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1481bc: 0x0  nop
    ctx->pc = 0x1481bcu;
    // NOP
    // 0x1481c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1481c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1481c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1481c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1481c8:
    // 0x1481c8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1481cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1481d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1481d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1481d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1481d8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1481d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1481dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1481dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1481e0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1481E0u;
    {
        const bool branch_taken_0x1481e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1481e0) {
            ctx->pc = 0x148238u;
            goto label_148238;
        }
    }
    ctx->pc = 0x1481E8u;
    // 0x1481e8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1481e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1481ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1481ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1481f0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1481f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1481f4: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1481f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1481f8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1481f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1481fc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1481FCu;
    {
        const bool branch_taken_0x1481fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1481fc) {
            ctx->pc = 0x148208u;
            goto label_148208;
        }
    }
    ctx->pc = 0x148204u;
    // 0x148204: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x148204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_148208:
    // 0x148208: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x148208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x14820c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x14820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x148210: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x148210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x148214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x148218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14821c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14821Cu;
    SET_GPR_U32(ctx, 31, 0x148224u);
    ctx->pc = 0x148220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14821Cu;
            // 0x148220: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148224u; }
        if (ctx->pc != 0x148224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148224u; }
        if (ctx->pc != 0x148224u) { return; }
    }
    ctx->pc = 0x148224u;
    // 0x148224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148228: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14822c: 0xc05c024  jal         func_170090
    ctx->pc = 0x14822Cu;
    SET_GPR_U32(ctx, 31, 0x148234u);
    ctx->pc = 0x148230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14822Cu;
            // 0x148230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170090u;
    if (runtime->hasFunction(0x170090u)) {
        auto targetFn = runtime->lookupFunction(0x170090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148234u; }
        if (ctx->pc != 0x148234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setClutInfo_0x170090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148234u; }
        if (ctx->pc != 0x148234u) { return; }
    }
    ctx->pc = 0x148234u;
    // 0x148234: 0x0  nop
    ctx->pc = 0x148234u;
    // NOP
label_148238:
    // 0x148238: 0xc07893c  jal         func_1E24F0
    ctx->pc = 0x148238u;
    SET_GPR_U32(ctx, 31, 0x148240u);
    ctx->pc = 0x14823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148238u;
            // 0x14823c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E24F0u;
    if (runtime->hasFunction(0x1E24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148240u; }
        if (ctx->pc != 0x148240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapLightColorControl_0x1e24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148240u; }
        if (ctx->pc != 0x148240u) { return; }
    }
    ctx->pc = 0x148240u;
    // 0x148240: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148244: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x148248: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x148248u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x14824c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14824cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148250: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x148250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x148254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148258: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x148258u;
    {
        const bool branch_taken_0x148258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148258u;
            // 0x14825c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148258) {
            ctx->pc = 0x148268u;
            goto label_148268;
        }
    }
    ctx->pc = 0x148260u;
    // 0x148260: 0xc053348  jal         func_14CD20
    ctx->pc = 0x148260u;
    SET_GPR_U32(ctx, 31, 0x148268u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148268u; }
        if (ctx->pc != 0x148268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148268u; }
        if (ctx->pc != 0x148268u) { return; }
    }
    ctx->pc = 0x148268u;
label_148268:
    // 0x148268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14826c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14826cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148270: 0x3e00008  jr          $ra
    ctx->pc = 0x148270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148270u;
            // 0x148274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148120u: goto label_148120;
            case 0x148158u: goto label_148158;
            case 0x148190u: goto label_148190;
            case 0x1481C8u: goto label_1481c8;
            case 0x148208u: goto label_148208;
            case 0x148238u: goto label_148238;
            case 0x148268u: goto label_148268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148278u;
}
