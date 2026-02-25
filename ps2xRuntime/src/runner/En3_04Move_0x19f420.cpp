#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_04Move
// Address: 0x19f420 - 0x1a02f4
void En3_04Move_0x19f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_04Move_0x19f420");
#endif

    ctx->pc = 0x19f420u;

label_19f420:
    // 0x19f420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f424:
    // 0x19f424: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19f428:
    // 0x19f428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19f42c:
    // 0x19f42c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f42cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f430:
    // 0x19f430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19f434:
    // 0x19f434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f438:
    // 0x19f438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19f43c:
    // 0x19f43c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f440:
    // 0x19f440: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x19f440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f444:
    // 0x19f444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f448:
    // 0x19f448: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x19f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f44c:
    // 0x19f44c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19f44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19f450:
    // 0x19f450: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x19f450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_19f454:
    // 0x19f454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f458:
    // 0x19f458: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x19f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f45c:
    // 0x19f45c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f460:
    // 0x19f460: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19f460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19f464:
    // 0x19f464: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x19f464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19f468:
    // 0x19f468: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f46c:
    // 0x19f46c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x19f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f470:
    // 0x19f470: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19f470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f474:
    // 0x19f474: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19f474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19f478:
    // 0x19f478: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x19f478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_19f47c:
    // 0x19f47c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f480:
    // 0x19f480: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x19f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19f484:
    // 0x19f484: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x19f484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f488:
    // 0x19f488: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19f488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19f48c:
    // 0x19f48c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x19f48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_19f490:
    // 0x19f490: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19f494:
    // 0x19f494: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f498:
    // 0x19f498: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f49c:
    // 0x19f49c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_19f4a0:
    if (ctx->pc == 0x19F4A0u) {
        ctx->pc = 0x19F4A0u;
            // 0x19f4a0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x19F4A4u;
        goto label_19f4a4;
    }
    ctx->pc = 0x19F49Cu;
    {
        const bool branch_taken_0x19f49c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F49Cu;
            // 0x19f4a0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f49c) {
            ctx->pc = 0x19F4C0u;
            goto label_19f4c0;
        }
    }
    ctx->pc = 0x19F4A4u;
label_19f4a4:
    // 0x19f4a4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19f4a8:
    // 0x19f4a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f4a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f4ac:
    // 0x19f4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f4b0:
    // 0x19f4b0: 0x0  nop
    ctx->pc = 0x19f4b0u;
    // NOP
label_19f4b4:
    // 0x19f4b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19f4b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19f4b8:
    // 0x19f4b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19f4bc:
    // 0x19f4bc: 0x0  nop
    ctx->pc = 0x19f4bcu;
    // NOP
label_19f4c0:
    // 0x19f4c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f4c4:
    // 0x19f4c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19f4c8:
    // 0x19f4c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f4c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f4cc:
    // 0x19f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f4d0:
    // 0x19f4d0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x19f4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f4d4:
    // 0x19f4d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f4d8:
    // 0x19f4d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19f4dc:
    if (ctx->pc == 0x19F4DCu) {
        ctx->pc = 0x19F4DCu;
            // 0x19f4dc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x19F4E0u;
        goto label_19f4e0;
    }
    ctx->pc = 0x19F4D8u;
    {
        const bool branch_taken_0x19f4d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4D8u;
            // 0x19f4dc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d8) {
            ctx->pc = 0x19F4F8u;
            goto label_19f4f8;
        }
    }
    ctx->pc = 0x19F4E0u;
label_19f4e0:
    // 0x19f4e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19f4e4:
    // 0x19f4e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f4e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f4e8:
    // 0x19f4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f4ec:
    // 0x19f4ec: 0x0  nop
    ctx->pc = 0x19f4ecu;
    // NOP
label_19f4f0:
    // 0x19f4f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19f4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19f4f4:
    // 0x19f4f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19f4f8:
    // 0x19f4f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f4fc:
    // 0x19f4fc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19f500:
    // 0x19f500: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f500u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f504:
    // 0x19f504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f508:
    // 0x19f508: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19f508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f50c:
    // 0x19f50c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f510:
    // 0x19f510: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19f514:
    if (ctx->pc == 0x19F514u) {
        ctx->pc = 0x19F514u;
            // 0x19f514: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19F518u;
        goto label_19f518;
    }
    ctx->pc = 0x19F510u;
    {
        const bool branch_taken_0x19f510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F510u;
            // 0x19f514: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f510) {
            ctx->pc = 0x19F530u;
            goto label_19f530;
        }
    }
    ctx->pc = 0x19F518u;
label_19f518:
    // 0x19f518: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19f51c:
    // 0x19f51c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f51cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f520:
    // 0x19f520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f524:
    // 0x19f524: 0x0  nop
    ctx->pc = 0x19f524u;
    // NOP
label_19f528:
    // 0x19f528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19f528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19f52c:
    // 0x19f52c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19f52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19f530:
    // 0x19f530: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f534:
    // 0x19f534: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19f538:
    // 0x19f538: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f538u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f53c:
    // 0x19f53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f540:
    // 0x19f540: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f544:
    // 0x19f544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19f544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f548:
    // 0x19f548: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19f54c:
    if (ctx->pc == 0x19F54Cu) {
        ctx->pc = 0x19F54Cu;
            // 0x19f54c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19F550u;
        goto label_19f550;
    }
    ctx->pc = 0x19F548u;
    {
        const bool branch_taken_0x19f548 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F548u;
            // 0x19f54c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f548) {
            ctx->pc = 0x19F568u;
            goto label_19f568;
        }
    }
    ctx->pc = 0x19F550u;
label_19f550:
    // 0x19f550: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19f554:
    // 0x19f554: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19f554u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19f558:
    // 0x19f558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f55c:
    // 0x19f55c: 0x0  nop
    ctx->pc = 0x19f55cu;
    // NOP
label_19f560:
    // 0x19f560: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19f560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19f564:
    // 0x19f564: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19f568:
    // 0x19f568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f56c:
    // 0x19f56c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_19f570:
    // 0x19f570: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x19f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19f574:
    // 0x19f574: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19f578:
    // 0x19f578: 0xc0680c0  jal         func_1A0300
label_19f57c:
    if (ctx->pc == 0x19F57Cu) {
        ctx->pc = 0x19F57Cu;
            // 0x19f57c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x19F580u;
        goto label_19f580;
    }
    ctx->pc = 0x19F578u;
    SET_GPR_U32(ctx, 31, 0x19F580u);
    ctx->pc = 0x19F57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F578u;
            // 0x19f57c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0300u;
    if (runtime->hasFunction(0x1A0300u)) {
        auto targetFn = runtime->lookupFunction(0x1A0300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F580u; }
        if (ctx->pc != 0x19F580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1a0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F580u; }
        if (ctx->pc != 0x19F580u) { return; }
    }
    ctx->pc = 0x19F580u;
label_19f580:
    // 0x19f580: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f584:
    // 0x19f584: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x19f584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_19f588:
    // 0x19f588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f58c:
    // 0x19f58c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x19f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_19f590:
    // 0x19f590: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19f590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19f594:
    // 0x19f594: 0x18600190  blez        $v1, . + 4 + (0x190 << 2)
label_19f598:
    if (ctx->pc == 0x19F598u) {
        ctx->pc = 0x19F59Cu;
        goto label_19f59c;
    }
    ctx->pc = 0x19F594u;
    {
        const bool branch_taken_0x19f594 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19f594) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F59Cu;
label_19f59c:
    // 0x19f59c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19f5a0:
    // 0x19f5a0: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_19f5a4:
    if (ctx->pc == 0x19F5A4u) {
        ctx->pc = 0x19F5A8u;
        goto label_19f5a8;
    }
    ctx->pc = 0x19F5A0u;
    {
        const bool branch_taken_0x19f5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f5a0) {
            ctx->pc = 0x19F618u;
            goto label_19f618;
        }
    }
    ctx->pc = 0x19F5A8u;
label_19f5a8:
    // 0x19f5a8: 0xc050bb4  jal         func_142ED0
label_19f5ac:
    if (ctx->pc == 0x19F5ACu) {
        ctx->pc = 0x19F5B0u;
        goto label_19f5b0;
    }
    ctx->pc = 0x19F5A8u;
    SET_GPR_U32(ctx, 31, 0x19F5B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5B0u; }
        if (ctx->pc != 0x19F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5B0u; }
        if (ctx->pc != 0x19F5B0u) { return; }
    }
    ctx->pc = 0x19F5B0u;
label_19f5b0:
    // 0x19f5b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x19f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19f5b4:
    // 0x19f5b4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x19f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19f5b8:
    // 0x19f5b8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19f5b8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19f5bc:
    // 0x19f5bc: 0x0  nop
    ctx->pc = 0x19f5bcu;
    // NOP
label_19f5c0:
    // 0x19f5c0: 0x0  nop
    ctx->pc = 0x19f5c0u;
    // NOP
label_19f5c4:
    // 0x19f5c4: 0x1010  mfhi        $v0
    ctx->pc = 0x19f5c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19f5c8:
    // 0x19f5c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19f5cc:
    // 0x19f5cc: 0xc050bb4  jal         func_142ED0
label_19f5d0:
    if (ctx->pc == 0x19F5D0u) {
        ctx->pc = 0x19F5D0u;
            // 0x19f5d0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x19F5D4u;
        goto label_19f5d4;
    }
    ctx->pc = 0x19F5CCu;
    SET_GPR_U32(ctx, 31, 0x19F5D4u);
    ctx->pc = 0x19F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5CCu;
            // 0x19f5d0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5D4u; }
        if (ctx->pc != 0x19F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5D4u; }
        if (ctx->pc != 0x19F5D4u) { return; }
    }
    ctx->pc = 0x19F5D4u;
label_19f5d4:
    // 0x19f5d4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x19f5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19f5d8:
    // 0x19f5d8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x19f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19f5dc:
    // 0x19f5dc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19f5dcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19f5e0:
    // 0x19f5e0: 0x0  nop
    ctx->pc = 0x19f5e0u;
    // NOP
label_19f5e4:
    // 0x19f5e4: 0x0  nop
    ctx->pc = 0x19f5e4u;
    // NOP
label_19f5e8:
    // 0x19f5e8: 0x1010  mfhi        $v0
    ctx->pc = 0x19f5e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19f5ec:
    // 0x19f5ec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19f5f0:
    // 0x19f5f0: 0xc050bb4  jal         func_142ED0
label_19f5f4:
    if (ctx->pc == 0x19F5F4u) {
        ctx->pc = 0x19F5F4u;
            // 0x19f5f4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x19F5F8u;
        goto label_19f5f8;
    }
    ctx->pc = 0x19F5F0u;
    SET_GPR_U32(ctx, 31, 0x19F5F8u);
    ctx->pc = 0x19F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5F0u;
            // 0x19f5f4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5F8u; }
        if (ctx->pc != 0x19F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5F8u; }
        if (ctx->pc != 0x19F5F8u) { return; }
    }
    ctx->pc = 0x19F5F8u;
label_19f5f8:
    // 0x19f5f8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_19f5fc:
    // 0x19f5fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19f5fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19f600:
    // 0x19f600: 0x0  nop
    ctx->pc = 0x19f600u;
    // NOP
label_19f604:
    // 0x19f604: 0x0  nop
    ctx->pc = 0x19f604u;
    // NOP
label_19f608:
    // 0x19f608: 0x1010  mfhi        $v0
    ctx->pc = 0x19f608u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19f60c:
    // 0x19f60c: 0x10000172  b           . + 4 + (0x172 << 2)
label_19f610:
    if (ctx->pc == 0x19F610u) {
        ctx->pc = 0x19F610u;
            // 0x19f610: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x19F614u;
        goto label_19f614;
    }
    ctx->pc = 0x19F60Cu;
    {
        const bool branch_taken_0x19f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F60Cu;
            // 0x19f610: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f60c) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F614u;
label_19f614:
    // 0x19f614: 0x0  nop
    ctx->pc = 0x19f614u;
    // NOP
label_19f618:
    // 0x19f618: 0x2882000f  slti        $v0, $a0, 0xF
    ctx->pc = 0x19f618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
label_19f61c:
    // 0x19f61c: 0x1440016e  bnez        $v0, . + 4 + (0x16E << 2)
label_19f620:
    if (ctx->pc == 0x19F620u) {
        ctx->pc = 0x19F620u;
            // 0x19f620: 0x28810050  slti        $at, $a0, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x19F624u;
        goto label_19f624;
    }
    ctx->pc = 0x19F61Cu;
    {
        const bool branch_taken_0x19f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F61Cu;
            // 0x19f620: 0x28810050  slti        $at, $a0, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f61c) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F624u;
label_19f624:
    // 0x19f624: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
label_19f628:
    if (ctx->pc == 0x19F628u) {
        ctx->pc = 0x19F62Cu;
        goto label_19f62c;
    }
    ctx->pc = 0x19F624u;
    {
        const bool branch_taken_0x19f624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f624) {
            ctx->pc = 0x19F800u;
            goto label_19f800;
        }
    }
    ctx->pc = 0x19F62Cu;
label_19f62c:
    // 0x19f62c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19f630:
    // 0x19f630: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_19f634:
    // 0x19f634: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x19f634u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_19f638:
    // 0x19f638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19f638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f63c:
    // 0x19f63c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x19f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_19f640:
    // 0x19f640: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19f640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19f644:
    // 0x19f644: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19f648:
    // 0x19f648: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19f648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19f64c:
    // 0x19f64c: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
label_19f650:
    if (ctx->pc == 0x19F650u) {
        ctx->pc = 0x19F650u;
            // 0x19f650: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x19F654u;
        goto label_19f654;
    }
    ctx->pc = 0x19F64Cu;
    {
        const bool branch_taken_0x19f64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F64Cu;
            // 0x19f650: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f64c) {
            ctx->pc = 0x19F768u;
            goto label_19f768;
        }
    }
    ctx->pc = 0x19F654u;
label_19f654:
    // 0x19f654: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19f658:
    if (ctx->pc == 0x19F658u) {
        ctx->pc = 0x19F65Cu;
        goto label_19f65c;
    }
    ctx->pc = 0x19F654u;
    {
        const bool branch_taken_0x19f654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f654) {
            ctx->pc = 0x19F668u;
            goto label_19f668;
        }
    }
    ctx->pc = 0x19F65Cu;
label_19f65c:
    // 0x19f65c: 0x1000015e  b           . + 4 + (0x15E << 2)
label_19f660:
    if (ctx->pc == 0x19F660u) {
        ctx->pc = 0x19F664u;
        goto label_19f664;
    }
    ctx->pc = 0x19F65Cu;
    {
        const bool branch_taken_0x19f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f65c) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F664u;
label_19f664:
    // 0x19f664: 0x0  nop
    ctx->pc = 0x19f664u;
    // NOP
label_19f668:
    // 0x19f668: 0xc065d00  jal         func_197400
label_19f66c:
    if (ctx->pc == 0x19F66Cu) {
        ctx->pc = 0x19F670u;
        goto label_19f670;
    }
    ctx->pc = 0x19F668u;
    SET_GPR_U32(ctx, 31, 0x19F670u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F670u; }
        if (ctx->pc != 0x19F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F670u; }
        if (ctx->pc != 0x19F670u) { return; }
    }
    ctx->pc = 0x19F670u;
label_19f670:
    // 0x19f670: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19f670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19f674:
    // 0x19f674: 0x14200158  bnez        $at, . + 4 + (0x158 << 2)
label_19f678:
    if (ctx->pc == 0x19F678u) {
        ctx->pc = 0x19F67Cu;
        goto label_19f67c;
    }
    ctx->pc = 0x19F674u;
    {
        const bool branch_taken_0x19f674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f674) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F67Cu;
label_19f67c:
    // 0x19f67c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f680:
    // 0x19f680: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f684:
    // 0x19f684: 0xc0655a8  jal         func_1956A0
label_19f688:
    if (ctx->pc == 0x19F688u) {
        ctx->pc = 0x19F688u;
            // 0x19f688: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19F68Cu;
        goto label_19f68c;
    }
    ctx->pc = 0x19F684u;
    SET_GPR_U32(ctx, 31, 0x19F68Cu);
    ctx->pc = 0x19F688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F684u;
            // 0x19f688: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F68Cu; }
        if (ctx->pc != 0x19F68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F68Cu; }
        if (ctx->pc != 0x19F68Cu) { return; }
    }
    ctx->pc = 0x19F68Cu;
label_19f68c:
    // 0x19f68c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f690:
    // 0x19f690: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f694:
    // 0x19f694: 0xc0655a8  jal         func_1956A0
label_19f698:
    if (ctx->pc == 0x19F698u) {
        ctx->pc = 0x19F698u;
            // 0x19f698: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19F69Cu;
        goto label_19f69c;
    }
    ctx->pc = 0x19F694u;
    SET_GPR_U32(ctx, 31, 0x19F69Cu);
    ctx->pc = 0x19F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F694u;
            // 0x19f698: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F69Cu; }
        if (ctx->pc != 0x19F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F69Cu; }
        if (ctx->pc != 0x19F69Cu) { return; }
    }
    ctx->pc = 0x19F69Cu;
label_19f69c:
    // 0x19f69c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f6a0:
    // 0x19f6a0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19f6a4:
    // 0x19f6a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f6a8:
    // 0x19f6a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f6ac:
    // 0x19f6ac: 0xc0655b0  jal         func_1956C0
label_19f6b0:
    if (ctx->pc == 0x19F6B0u) {
        ctx->pc = 0x19F6B0u;
            // 0x19f6b0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F6B4u;
        goto label_19f6b4;
    }
    ctx->pc = 0x19F6ACu;
    SET_GPR_U32(ctx, 31, 0x19F6B4u);
    ctx->pc = 0x19F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6ACu;
            // 0x19f6b0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6B4u; }
        if (ctx->pc != 0x19F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6B4u; }
        if (ctx->pc != 0x19F6B4u) { return; }
    }
    ctx->pc = 0x19F6B4u;
label_19f6b4:
    // 0x19f6b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f6b8:
    // 0x19f6b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19f6bc:
    // 0x19f6bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f6c0:
    // 0x19f6c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f6c4:
    // 0x19f6c4: 0xc0655b0  jal         func_1956C0
label_19f6c8:
    if (ctx->pc == 0x19F6C8u) {
        ctx->pc = 0x19F6C8u;
            // 0x19f6c8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F6CCu;
        goto label_19f6cc;
    }
    ctx->pc = 0x19F6C4u;
    SET_GPR_U32(ctx, 31, 0x19F6CCu);
    ctx->pc = 0x19F6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6C4u;
            // 0x19f6c8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6CCu; }
        if (ctx->pc != 0x19F6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6CCu; }
        if (ctx->pc != 0x19F6CCu) { return; }
    }
    ctx->pc = 0x19F6CCu;
label_19f6cc:
    // 0x19f6cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f6d0:
    // 0x19f6d0: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x19f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_19f6d4:
    // 0x19f6d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f6d8:
    // 0x19f6d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f6dc:
    // 0x19f6dc: 0xc0655b0  jal         func_1956C0
label_19f6e0:
    if (ctx->pc == 0x19F6E0u) {
        ctx->pc = 0x19F6E0u;
            // 0x19f6e0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F6E4u;
        goto label_19f6e4;
    }
    ctx->pc = 0x19F6DCu;
    SET_GPR_U32(ctx, 31, 0x19F6E4u);
    ctx->pc = 0x19F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6DCu;
            // 0x19f6e0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6E4u; }
        if (ctx->pc != 0x19F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6E4u; }
        if (ctx->pc != 0x19F6E4u) { return; }
    }
    ctx->pc = 0x19F6E4u;
label_19f6e4:
    // 0x19f6e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f6e8:
    // 0x19f6e8: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x19f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_19f6ec:
    // 0x19f6ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f6f0:
    // 0x19f6f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f6f4:
    // 0x19f6f4: 0xc0655b0  jal         func_1956C0
label_19f6f8:
    if (ctx->pc == 0x19F6F8u) {
        ctx->pc = 0x19F6F8u;
            // 0x19f6f8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F6FCu;
        goto label_19f6fc;
    }
    ctx->pc = 0x19F6F4u;
    SET_GPR_U32(ctx, 31, 0x19F6FCu);
    ctx->pc = 0x19F6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6F4u;
            // 0x19f6f8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6FCu; }
        if (ctx->pc != 0x19F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6FCu; }
        if (ctx->pc != 0x19F6FCu) { return; }
    }
    ctx->pc = 0x19F6FCu;
label_19f6fc:
    // 0x19f6fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f700:
    // 0x19f700: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x19f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_19f704:
    // 0x19f704: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f708:
    // 0x19f708: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f70c:
    // 0x19f70c: 0xc0655b0  jal         func_1956C0
label_19f710:
    if (ctx->pc == 0x19F710u) {
        ctx->pc = 0x19F710u;
            // 0x19f710: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F714u;
        goto label_19f714;
    }
    ctx->pc = 0x19F70Cu;
    SET_GPR_U32(ctx, 31, 0x19F714u);
    ctx->pc = 0x19F710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F70Cu;
            // 0x19f710: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F714u; }
        if (ctx->pc != 0x19F714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F714u; }
        if (ctx->pc != 0x19F714u) { return; }
    }
    ctx->pc = 0x19F714u;
label_19f714:
    // 0x19f714: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f718:
    // 0x19f718: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x19f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_19f71c:
    // 0x19f71c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f720:
    // 0x19f720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f724:
    // 0x19f724: 0xc0655b0  jal         func_1956C0
label_19f728:
    if (ctx->pc == 0x19F728u) {
        ctx->pc = 0x19F728u;
            // 0x19f728: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F72Cu;
        goto label_19f72c;
    }
    ctx->pc = 0x19F724u;
    SET_GPR_U32(ctx, 31, 0x19F72Cu);
    ctx->pc = 0x19F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F724u;
            // 0x19f728: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F72Cu; }
        if (ctx->pc != 0x19F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F72Cu; }
        if (ctx->pc != 0x19F72Cu) { return; }
    }
    ctx->pc = 0x19F72Cu;
label_19f72c:
    // 0x19f72c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f730:
    // 0x19f730: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x19f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_19f734:
    // 0x19f734: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f738:
    // 0x19f738: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f73c:
    // 0x19f73c: 0xc0655b0  jal         func_1956C0
label_19f740:
    if (ctx->pc == 0x19F740u) {
        ctx->pc = 0x19F740u;
            // 0x19f740: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F744u;
        goto label_19f744;
    }
    ctx->pc = 0x19F73Cu;
    SET_GPR_U32(ctx, 31, 0x19F744u);
    ctx->pc = 0x19F740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F73Cu;
            // 0x19f740: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F744u; }
        if (ctx->pc != 0x19F744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F744u; }
        if (ctx->pc != 0x19F744u) { return; }
    }
    ctx->pc = 0x19F744u;
label_19f744:
    // 0x19f744: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f748:
    // 0x19f748: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x19f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_19f74c:
    // 0x19f74c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f750:
    // 0x19f750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f754:
    // 0x19f754: 0xc0655b0  jal         func_1956C0
label_19f758:
    if (ctx->pc == 0x19F758u) {
        ctx->pc = 0x19F758u;
            // 0x19f758: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F75Cu;
        goto label_19f75c;
    }
    ctx->pc = 0x19F754u;
    SET_GPR_U32(ctx, 31, 0x19F75Cu);
    ctx->pc = 0x19F758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F754u;
            // 0x19f758: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F75Cu; }
        if (ctx->pc != 0x19F75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F75Cu; }
        if (ctx->pc != 0x19F75Cu) { return; }
    }
    ctx->pc = 0x19F75Cu;
label_19f75c:
    // 0x19f75c: 0x1000011e  b           . + 4 + (0x11E << 2)
label_19f760:
    if (ctx->pc == 0x19F760u) {
        ctx->pc = 0x19F764u;
        goto label_19f764;
    }
    ctx->pc = 0x19F75Cu;
    {
        const bool branch_taken_0x19f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f75c) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F764u;
label_19f764:
    // 0x19f764: 0x0  nop
    ctx->pc = 0x19f764u;
    // NOP
label_19f768:
    // 0x19f768: 0xc065d00  jal         func_197400
label_19f76c:
    if (ctx->pc == 0x19F76Cu) {
        ctx->pc = 0x19F770u;
        goto label_19f770;
    }
    ctx->pc = 0x19F768u;
    SET_GPR_U32(ctx, 31, 0x19F770u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F770u; }
        if (ctx->pc != 0x19F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F770u; }
        if (ctx->pc != 0x19F770u) { return; }
    }
    ctx->pc = 0x19F770u;
label_19f770:
    // 0x19f770: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
label_19f774:
    if (ctx->pc == 0x19F774u) {
        ctx->pc = 0x19F778u;
        goto label_19f778;
    }
    ctx->pc = 0x19F770u;
    {
        const bool branch_taken_0x19f770 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19f770) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F778u;
label_19f778:
    // 0x19f778: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f77c:
    // 0x19f77c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f780:
    // 0x19f780: 0xc0655a8  jal         func_1956A0
label_19f784:
    if (ctx->pc == 0x19F784u) {
        ctx->pc = 0x19F784u;
            // 0x19f784: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19F788u;
        goto label_19f788;
    }
    ctx->pc = 0x19F780u;
    SET_GPR_U32(ctx, 31, 0x19F788u);
    ctx->pc = 0x19F784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F780u;
            // 0x19f784: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F788u; }
        if (ctx->pc != 0x19F788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F788u; }
        if (ctx->pc != 0x19F788u) { return; }
    }
    ctx->pc = 0x19F788u;
label_19f788:
    // 0x19f788: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f78c:
    // 0x19f78c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f790:
    // 0x19f790: 0xc0655a8  jal         func_1956A0
label_19f794:
    if (ctx->pc == 0x19F794u) {
        ctx->pc = 0x19F794u;
            // 0x19f794: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19F798u;
        goto label_19f798;
    }
    ctx->pc = 0x19F790u;
    SET_GPR_U32(ctx, 31, 0x19F798u);
    ctx->pc = 0x19F794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F790u;
            // 0x19f794: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F798u; }
        if (ctx->pc != 0x19F798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F798u; }
        if (ctx->pc != 0x19F798u) { return; }
    }
    ctx->pc = 0x19F798u;
label_19f798:
    // 0x19f798: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f79c:
    // 0x19f79c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x19f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_19f7a0:
    // 0x19f7a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f7a4:
    // 0x19f7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f7a8:
    // 0x19f7a8: 0xc0655b0  jal         func_1956C0
label_19f7ac:
    if (ctx->pc == 0x19F7ACu) {
        ctx->pc = 0x19F7ACu;
            // 0x19f7ac: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F7B0u;
        goto label_19f7b0;
    }
    ctx->pc = 0x19F7A8u;
    SET_GPR_U32(ctx, 31, 0x19F7B0u);
    ctx->pc = 0x19F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7A8u;
            // 0x19f7ac: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7B0u; }
        if (ctx->pc != 0x19F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7B0u; }
        if (ctx->pc != 0x19F7B0u) { return; }
    }
    ctx->pc = 0x19F7B0u;
label_19f7b0:
    // 0x19f7b0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f7b4:
    // 0x19f7b4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x19f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_19f7b8:
    // 0x19f7b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f7bc:
    // 0x19f7bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f7c0:
    // 0x19f7c0: 0xc0655b0  jal         func_1956C0
label_19f7c4:
    if (ctx->pc == 0x19F7C4u) {
        ctx->pc = 0x19F7C4u;
            // 0x19f7c4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F7C8u;
        goto label_19f7c8;
    }
    ctx->pc = 0x19F7C0u;
    SET_GPR_U32(ctx, 31, 0x19F7C8u);
    ctx->pc = 0x19F7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7C0u;
            // 0x19f7c4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7C8u; }
        if (ctx->pc != 0x19F7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7C8u; }
        if (ctx->pc != 0x19F7C8u) { return; }
    }
    ctx->pc = 0x19F7C8u;
label_19f7c8:
    // 0x19f7c8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f7cc:
    // 0x19f7cc: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x19f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_19f7d0:
    // 0x19f7d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f7d4:
    // 0x19f7d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f7d8:
    // 0x19f7d8: 0xc0655b0  jal         func_1956C0
label_19f7dc:
    if (ctx->pc == 0x19F7DCu) {
        ctx->pc = 0x19F7DCu;
            // 0x19f7dc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F7E0u;
        goto label_19f7e0;
    }
    ctx->pc = 0x19F7D8u;
    SET_GPR_U32(ctx, 31, 0x19F7E0u);
    ctx->pc = 0x19F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7D8u;
            // 0x19f7dc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E0u; }
        if (ctx->pc != 0x19F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E0u; }
        if (ctx->pc != 0x19F7E0u) { return; }
    }
    ctx->pc = 0x19F7E0u;
label_19f7e0:
    // 0x19f7e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f7e4:
    // 0x19f7e4: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x19f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_19f7e8:
    // 0x19f7e8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f7ec:
    // 0x19f7ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f7f0:
    // 0x19f7f0: 0xc0655b0  jal         func_1956C0
label_19f7f4:
    if (ctx->pc == 0x19F7F4u) {
        ctx->pc = 0x19F7F4u;
            // 0x19f7f4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F7F8u;
        goto label_19f7f8;
    }
    ctx->pc = 0x19F7F0u;
    SET_GPR_U32(ctx, 31, 0x19F7F8u);
    ctx->pc = 0x19F7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7F0u;
            // 0x19f7f4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7F8u; }
        if (ctx->pc != 0x19F7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7F8u; }
        if (ctx->pc != 0x19F7F8u) { return; }
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_19f7fc:
    if (ctx->pc == 0x19F7FCu) {
        ctx->pc = 0x19F800u;
        goto label_19f800;
    }
    ctx->pc = 0x19F7F8u;
    {
        const bool branch_taken_0x19f7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f7f8) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F800u;
label_19f800:
    // 0x19f800: 0x288100a0  slti        $at, $a0, 0xA0
    ctx->pc = 0x19f800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)160) ? 1 : 0);
label_19f804:
    // 0x19f804: 0x102000aa  beqz        $at, . + 4 + (0xAA << 2)
label_19f808:
    if (ctx->pc == 0x19F808u) {
        ctx->pc = 0x19F808u;
            // 0x19f808: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x19F80Cu;
        goto label_19f80c;
    }
    ctx->pc = 0x19F804u;
    {
        const bool branch_taken_0x19f804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F804u;
            // 0x19f808: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f804) {
            ctx->pc = 0x19FAB0u;
            goto label_19fab0;
        }
    }
    ctx->pc = 0x19F80Cu;
label_19f80c:
    // 0x19f80c: 0x10820068  beq         $a0, $v0, . + 4 + (0x68 << 2)
label_19f810:
    if (ctx->pc == 0x19F810u) {
        ctx->pc = 0x19F814u;
        goto label_19f814;
    }
    ctx->pc = 0x19F80Cu;
    {
        const bool branch_taken_0x19f80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f80c) {
            ctx->pc = 0x19F9B0u;
            goto label_19f9b0;
        }
    }
    ctx->pc = 0x19F814u;
label_19f814:
    // 0x19f814: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x19f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_19f818:
    // 0x19f818: 0x1082003f  beq         $a0, $v0, . + 4 + (0x3F << 2)
label_19f81c:
    if (ctx->pc == 0x19F81Cu) {
        ctx->pc = 0x19F81Cu;
            // 0x19f81c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x19F820u;
        goto label_19f820;
    }
    ctx->pc = 0x19F818u;
    {
        const bool branch_taken_0x19f818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F818u;
            // 0x19f81c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f818) {
            ctx->pc = 0x19F918u;
            goto label_19f918;
        }
    }
    ctx->pc = 0x19F820u;
label_19f820:
    // 0x19f820: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_19f824:
    if (ctx->pc == 0x19F824u) {
        ctx->pc = 0x19F828u;
        goto label_19f828;
    }
    ctx->pc = 0x19F820u;
    {
        const bool branch_taken_0x19f820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f820) {
            ctx->pc = 0x19F830u;
            goto label_19f830;
        }
    }
    ctx->pc = 0x19F828u;
label_19f828:
    // 0x19f828: 0x100000eb  b           . + 4 + (0xEB << 2)
label_19f82c:
    if (ctx->pc == 0x19F82Cu) {
        ctx->pc = 0x19F830u;
        goto label_19f830;
    }
    ctx->pc = 0x19F828u;
    {
        const bool branch_taken_0x19f828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f828) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F830u;
label_19f830:
    // 0x19f830: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f834:
    // 0x19f834: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f838:
    // 0x19f838: 0xc0655a8  jal         func_1956A0
label_19f83c:
    if (ctx->pc == 0x19F83Cu) {
        ctx->pc = 0x19F83Cu;
            // 0x19f83c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19F840u;
        goto label_19f840;
    }
    ctx->pc = 0x19F838u;
    SET_GPR_U32(ctx, 31, 0x19F840u);
    ctx->pc = 0x19F83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F838u;
            // 0x19f83c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F840u; }
        if (ctx->pc != 0x19F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F840u; }
        if (ctx->pc != 0x19F840u) { return; }
    }
    ctx->pc = 0x19F840u;
label_19f840:
    // 0x19f840: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f844:
    // 0x19f844: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f848:
    // 0x19f848: 0xc0655a8  jal         func_1956A0
label_19f84c:
    if (ctx->pc == 0x19F84Cu) {
        ctx->pc = 0x19F84Cu;
            // 0x19f84c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19F850u;
        goto label_19f850;
    }
    ctx->pc = 0x19F848u;
    SET_GPR_U32(ctx, 31, 0x19F850u);
    ctx->pc = 0x19F84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F848u;
            // 0x19f84c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F850u; }
        if (ctx->pc != 0x19F850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F850u; }
        if (ctx->pc != 0x19F850u) { return; }
    }
    ctx->pc = 0x19F850u;
label_19f850:
    // 0x19f850: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f854:
    // 0x19f854: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19f858:
    // 0x19f858: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f85c:
    // 0x19f85c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f860:
    // 0x19f860: 0xc0655b0  jal         func_1956C0
label_19f864:
    if (ctx->pc == 0x19F864u) {
        ctx->pc = 0x19F864u;
            // 0x19f864: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F868u;
        goto label_19f868;
    }
    ctx->pc = 0x19F860u;
    SET_GPR_U32(ctx, 31, 0x19F868u);
    ctx->pc = 0x19F864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F860u;
            // 0x19f864: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F868u; }
        if (ctx->pc != 0x19F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F868u; }
        if (ctx->pc != 0x19F868u) { return; }
    }
    ctx->pc = 0x19F868u;
label_19f868:
    // 0x19f868: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f86c:
    // 0x19f86c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x19f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_19f870:
    // 0x19f870: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f874:
    // 0x19f874: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f878:
    // 0x19f878: 0xc0655b0  jal         func_1956C0
label_19f87c:
    if (ctx->pc == 0x19F87Cu) {
        ctx->pc = 0x19F87Cu;
            // 0x19f87c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F880u;
        goto label_19f880;
    }
    ctx->pc = 0x19F878u;
    SET_GPR_U32(ctx, 31, 0x19F880u);
    ctx->pc = 0x19F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F878u;
            // 0x19f87c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F880u; }
        if (ctx->pc != 0x19F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F880u; }
        if (ctx->pc != 0x19F880u) { return; }
    }
    ctx->pc = 0x19F880u;
label_19f880:
    // 0x19f880: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f884:
    // 0x19f884: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x19f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_19f888:
    // 0x19f888: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f88c:
    // 0x19f88c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f890:
    // 0x19f890: 0xc0655b0  jal         func_1956C0
label_19f894:
    if (ctx->pc == 0x19F894u) {
        ctx->pc = 0x19F894u;
            // 0x19f894: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F898u;
        goto label_19f898;
    }
    ctx->pc = 0x19F890u;
    SET_GPR_U32(ctx, 31, 0x19F898u);
    ctx->pc = 0x19F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F890u;
            // 0x19f894: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F898u; }
        if (ctx->pc != 0x19F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F898u; }
        if (ctx->pc != 0x19F898u) { return; }
    }
    ctx->pc = 0x19F898u;
label_19f898:
    // 0x19f898: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f89c:
    // 0x19f89c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_19f8a0:
    // 0x19f8a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f8a4:
    // 0x19f8a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f8a8:
    // 0x19f8a8: 0xc0655b0  jal         func_1956C0
label_19f8ac:
    if (ctx->pc == 0x19F8ACu) {
        ctx->pc = 0x19F8ACu;
            // 0x19f8ac: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F8B0u;
        goto label_19f8b0;
    }
    ctx->pc = 0x19F8A8u;
    SET_GPR_U32(ctx, 31, 0x19F8B0u);
    ctx->pc = 0x19F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8A8u;
            // 0x19f8ac: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8B0u; }
        if (ctx->pc != 0x19F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8B0u; }
        if (ctx->pc != 0x19F8B0u) { return; }
    }
    ctx->pc = 0x19F8B0u;
label_19f8b0:
    // 0x19f8b0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f8b4:
    // 0x19f8b4: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_19f8b8:
    // 0x19f8b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f8bc:
    // 0x19f8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f8c0:
    // 0x19f8c0: 0xc0655b0  jal         func_1956C0
label_19f8c4:
    if (ctx->pc == 0x19F8C4u) {
        ctx->pc = 0x19F8C4u;
            // 0x19f8c4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F8C8u;
        goto label_19f8c8;
    }
    ctx->pc = 0x19F8C0u;
    SET_GPR_U32(ctx, 31, 0x19F8C8u);
    ctx->pc = 0x19F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8C0u;
            // 0x19f8c4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8C8u; }
        if (ctx->pc != 0x19F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8C8u; }
        if (ctx->pc != 0x19F8C8u) { return; }
    }
    ctx->pc = 0x19F8C8u;
label_19f8c8:
    // 0x19f8c8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f8cc:
    // 0x19f8cc: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x19f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_19f8d0:
    // 0x19f8d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f8d4:
    // 0x19f8d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f8d8:
    // 0x19f8d8: 0xc0655b0  jal         func_1956C0
label_19f8dc:
    if (ctx->pc == 0x19F8DCu) {
        ctx->pc = 0x19F8DCu;
            // 0x19f8dc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F8E0u;
        goto label_19f8e0;
    }
    ctx->pc = 0x19F8D8u;
    SET_GPR_U32(ctx, 31, 0x19F8E0u);
    ctx->pc = 0x19F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8D8u;
            // 0x19f8dc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8E0u; }
        if (ctx->pc != 0x19F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8E0u; }
        if (ctx->pc != 0x19F8E0u) { return; }
    }
    ctx->pc = 0x19F8E0u;
label_19f8e0:
    // 0x19f8e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f8e4:
    // 0x19f8e4: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x19f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_19f8e8:
    // 0x19f8e8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f8ec:
    // 0x19f8ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f8f0:
    // 0x19f8f0: 0xc0655b0  jal         func_1956C0
label_19f8f4:
    if (ctx->pc == 0x19F8F4u) {
        ctx->pc = 0x19F8F4u;
            // 0x19f8f4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F8F8u;
        goto label_19f8f8;
    }
    ctx->pc = 0x19F8F0u;
    SET_GPR_U32(ctx, 31, 0x19F8F8u);
    ctx->pc = 0x19F8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8F0u;
            // 0x19f8f4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8F8u; }
        if (ctx->pc != 0x19F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8F8u; }
        if (ctx->pc != 0x19F8F8u) { return; }
    }
    ctx->pc = 0x19F8F8u;
label_19f8f8:
    // 0x19f8f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f8fc:
    // 0x19f8fc: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x19f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_19f900:
    // 0x19f900: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f904:
    // 0x19f904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f908:
    // 0x19f908: 0xc0655b0  jal         func_1956C0
label_19f90c:
    if (ctx->pc == 0x19F90Cu) {
        ctx->pc = 0x19F90Cu;
            // 0x19f90c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F910u;
        goto label_19f910;
    }
    ctx->pc = 0x19F908u;
    SET_GPR_U32(ctx, 31, 0x19F910u);
    ctx->pc = 0x19F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F908u;
            // 0x19f90c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F910u; }
        if (ctx->pc != 0x19F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F910u; }
        if (ctx->pc != 0x19F910u) { return; }
    }
    ctx->pc = 0x19F910u;
label_19f910:
    // 0x19f910: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_19f914:
    if (ctx->pc == 0x19F914u) {
        ctx->pc = 0x19F918u;
        goto label_19f918;
    }
    ctx->pc = 0x19F910u;
    {
        const bool branch_taken_0x19f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f910) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F918u;
label_19f918:
    // 0x19f918: 0xc065d00  jal         func_197400
label_19f91c:
    if (ctx->pc == 0x19F91Cu) {
        ctx->pc = 0x19F920u;
        goto label_19f920;
    }
    ctx->pc = 0x19F918u;
    SET_GPR_U32(ctx, 31, 0x19F920u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F920u; }
        if (ctx->pc != 0x19F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F920u; }
        if (ctx->pc != 0x19F920u) { return; }
    }
    ctx->pc = 0x19F920u;
label_19f920:
    // 0x19f920: 0x184000ad  blez        $v0, . + 4 + (0xAD << 2)
label_19f924:
    if (ctx->pc == 0x19F924u) {
        ctx->pc = 0x19F928u;
        goto label_19f928;
    }
    ctx->pc = 0x19F920u;
    {
        const bool branch_taken_0x19f920 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19f920) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F928u;
label_19f928:
    // 0x19f928: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f92c:
    // 0x19f92c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f930:
    // 0x19f930: 0xc0655a8  jal         func_1956A0
label_19f934:
    if (ctx->pc == 0x19F934u) {
        ctx->pc = 0x19F934u;
            // 0x19f934: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19F938u;
        goto label_19f938;
    }
    ctx->pc = 0x19F930u;
    SET_GPR_U32(ctx, 31, 0x19F938u);
    ctx->pc = 0x19F934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F930u;
            // 0x19f934: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F938u; }
        if (ctx->pc != 0x19F938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F938u; }
        if (ctx->pc != 0x19F938u) { return; }
    }
    ctx->pc = 0x19F938u;
label_19f938:
    // 0x19f938: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f93c:
    // 0x19f93c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f940:
    // 0x19f940: 0xc0655a8  jal         func_1956A0
label_19f944:
    if (ctx->pc == 0x19F944u) {
        ctx->pc = 0x19F944u;
            // 0x19f944: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19F948u;
        goto label_19f948;
    }
    ctx->pc = 0x19F940u;
    SET_GPR_U32(ctx, 31, 0x19F948u);
    ctx->pc = 0x19F944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F940u;
            // 0x19f944: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F948u; }
        if (ctx->pc != 0x19F948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F948u; }
        if (ctx->pc != 0x19F948u) { return; }
    }
    ctx->pc = 0x19F948u;
label_19f948:
    // 0x19f948: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f94c:
    // 0x19f94c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x19f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_19f950:
    // 0x19f950: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f954:
    // 0x19f954: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f958:
    // 0x19f958: 0xc0655b0  jal         func_1956C0
label_19f95c:
    if (ctx->pc == 0x19F95Cu) {
        ctx->pc = 0x19F95Cu;
            // 0x19f95c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F960u;
        goto label_19f960;
    }
    ctx->pc = 0x19F958u;
    SET_GPR_U32(ctx, 31, 0x19F960u);
    ctx->pc = 0x19F95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F958u;
            // 0x19f95c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F960u; }
        if (ctx->pc != 0x19F960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F960u; }
        if (ctx->pc != 0x19F960u) { return; }
    }
    ctx->pc = 0x19F960u;
label_19f960:
    // 0x19f960: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f964:
    // 0x19f964: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x19f964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_19f968:
    // 0x19f968: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f96c:
    // 0x19f96c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f970:
    // 0x19f970: 0xc0655b0  jal         func_1956C0
label_19f974:
    if (ctx->pc == 0x19F974u) {
        ctx->pc = 0x19F974u;
            // 0x19f974: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F978u;
        goto label_19f978;
    }
    ctx->pc = 0x19F970u;
    SET_GPR_U32(ctx, 31, 0x19F978u);
    ctx->pc = 0x19F974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F970u;
            // 0x19f974: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F978u; }
        if (ctx->pc != 0x19F978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F978u; }
        if (ctx->pc != 0x19F978u) { return; }
    }
    ctx->pc = 0x19F978u;
label_19f978:
    // 0x19f978: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f97c:
    // 0x19f97c: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x19f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_19f980:
    // 0x19f980: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f984:
    // 0x19f984: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f988:
    // 0x19f988: 0xc0655b0  jal         func_1956C0
label_19f98c:
    if (ctx->pc == 0x19F98Cu) {
        ctx->pc = 0x19F98Cu;
            // 0x19f98c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F990u;
        goto label_19f990;
    }
    ctx->pc = 0x19F988u;
    SET_GPR_U32(ctx, 31, 0x19F990u);
    ctx->pc = 0x19F98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F988u;
            // 0x19f98c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F990u; }
        if (ctx->pc != 0x19F990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F990u; }
        if (ctx->pc != 0x19F990u) { return; }
    }
    ctx->pc = 0x19F990u;
label_19f990:
    // 0x19f990: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f994:
    // 0x19f994: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x19f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_19f998:
    // 0x19f998: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f99c:
    // 0x19f99c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f9a0:
    // 0x19f9a0: 0xc0655b0  jal         func_1956C0
label_19f9a4:
    if (ctx->pc == 0x19F9A4u) {
        ctx->pc = 0x19F9A4u;
            // 0x19f9a4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19F9A8u;
        goto label_19f9a8;
    }
    ctx->pc = 0x19F9A0u;
    SET_GPR_U32(ctx, 31, 0x19F9A8u);
    ctx->pc = 0x19F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9A0u;
            // 0x19f9a4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9A8u; }
        if (ctx->pc != 0x19F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9A8u; }
        if (ctx->pc != 0x19F9A8u) { return; }
    }
    ctx->pc = 0x19F9A8u;
label_19f9a8:
    // 0x19f9a8: 0x1000008b  b           . + 4 + (0x8B << 2)
label_19f9ac:
    if (ctx->pc == 0x19F9ACu) {
        ctx->pc = 0x19F9B0u;
        goto label_19f9b0;
    }
    ctx->pc = 0x19F9A8u;
    {
        const bool branch_taken_0x19f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9a8) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F9B0u;
label_19f9b0:
    // 0x19f9b0: 0xc065d00  jal         func_197400
label_19f9b4:
    if (ctx->pc == 0x19F9B4u) {
        ctx->pc = 0x19F9B8u;
        goto label_19f9b8;
    }
    ctx->pc = 0x19F9B0u;
    SET_GPR_U32(ctx, 31, 0x19F9B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9B8u; }
        if (ctx->pc != 0x19F9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9B8u; }
        if (ctx->pc != 0x19F9B8u) { return; }
    }
    ctx->pc = 0x19F9B8u;
label_19f9b8:
    // 0x19f9b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19f9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19f9bc:
    // 0x19f9bc: 0x14200086  bnez        $at, . + 4 + (0x86 << 2)
label_19f9c0:
    if (ctx->pc == 0x19F9C0u) {
        ctx->pc = 0x19F9C4u;
        goto label_19f9c4;
    }
    ctx->pc = 0x19F9BCu;
    {
        const bool branch_taken_0x19f9bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f9bc) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19F9C4u;
label_19f9c4:
    // 0x19f9c4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f9c8:
    // 0x19f9c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f9cc:
    // 0x19f9cc: 0xc0655a8  jal         func_1956A0
label_19f9d0:
    if (ctx->pc == 0x19F9D0u) {
        ctx->pc = 0x19F9D0u;
            // 0x19f9d0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x19F9D4u;
        goto label_19f9d4;
    }
    ctx->pc = 0x19F9CCu;
    SET_GPR_U32(ctx, 31, 0x19F9D4u);
    ctx->pc = 0x19F9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9CCu;
            // 0x19f9d0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9D4u; }
        if (ctx->pc != 0x19F9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9D4u; }
        if (ctx->pc != 0x19F9D4u) { return; }
    }
    ctx->pc = 0x19F9D4u;
label_19f9d4:
    // 0x19f9d4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f9d8:
    // 0x19f9d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f9dc:
    // 0x19f9dc: 0xc0655a8  jal         func_1956A0
label_19f9e0:
    if (ctx->pc == 0x19F9E0u) {
        ctx->pc = 0x19F9E0u;
            // 0x19f9e0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x19F9E4u;
        goto label_19f9e4;
    }
    ctx->pc = 0x19F9DCu;
    SET_GPR_U32(ctx, 31, 0x19F9E4u);
    ctx->pc = 0x19F9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9DCu;
            // 0x19f9e0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9E4u; }
        if (ctx->pc != 0x19F9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9E4u; }
        if (ctx->pc != 0x19F9E4u) { return; }
    }
    ctx->pc = 0x19F9E4u;
label_19f9e4:
    // 0x19f9e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19f9e8:
    // 0x19f9e8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_19f9ec:
    // 0x19f9ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19f9f0:
    // 0x19f9f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19f9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f9f4:
    // 0x19f9f4: 0xc0655b0  jal         func_1956C0
label_19f9f8:
    if (ctx->pc == 0x19F9F8u) {
        ctx->pc = 0x19F9F8u;
            // 0x19f9f8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19F9FCu;
        goto label_19f9fc;
    }
    ctx->pc = 0x19F9F4u;
    SET_GPR_U32(ctx, 31, 0x19F9FCu);
    ctx->pc = 0x19F9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9F4u;
            // 0x19f9f8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9FCu; }
        if (ctx->pc != 0x19F9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9FCu; }
        if (ctx->pc != 0x19F9FCu) { return; }
    }
    ctx->pc = 0x19F9FCu;
label_19f9fc:
    // 0x19f9fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa00:
    // 0x19fa00: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_19fa04:
    // 0x19fa04: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa08:
    // 0x19fa08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa0c:
    // 0x19fa0c: 0xc0655b0  jal         func_1956C0
label_19fa10:
    if (ctx->pc == 0x19FA10u) {
        ctx->pc = 0x19FA10u;
            // 0x19fa10: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19FA14u;
        goto label_19fa14;
    }
    ctx->pc = 0x19FA0Cu;
    SET_GPR_U32(ctx, 31, 0x19FA14u);
    ctx->pc = 0x19FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA0Cu;
            // 0x19fa10: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA14u; }
        if (ctx->pc != 0x19FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA14u; }
        if (ctx->pc != 0x19FA14u) { return; }
    }
    ctx->pc = 0x19FA14u;
label_19fa14:
    // 0x19fa14: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa18:
    // 0x19fa18: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_19fa1c:
    // 0x19fa1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa20:
    // 0x19fa20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa24:
    // 0x19fa24: 0xc0655b0  jal         func_1956C0
label_19fa28:
    if (ctx->pc == 0x19FA28u) {
        ctx->pc = 0x19FA28u;
            // 0x19fa28: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19FA2Cu;
        goto label_19fa2c;
    }
    ctx->pc = 0x19FA24u;
    SET_GPR_U32(ctx, 31, 0x19FA2Cu);
    ctx->pc = 0x19FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA24u;
            // 0x19fa28: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA2Cu; }
        if (ctx->pc != 0x19FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA2Cu; }
        if (ctx->pc != 0x19FA2Cu) { return; }
    }
    ctx->pc = 0x19FA2Cu;
label_19fa2c:
    // 0x19fa2c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa30:
    // 0x19fa30: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_19fa34:
    // 0x19fa34: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa38:
    // 0x19fa38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa3c:
    // 0x19fa3c: 0xc0655b0  jal         func_1956C0
label_19fa40:
    if (ctx->pc == 0x19FA40u) {
        ctx->pc = 0x19FA40u;
            // 0x19fa40: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19FA44u;
        goto label_19fa44;
    }
    ctx->pc = 0x19FA3Cu;
    SET_GPR_U32(ctx, 31, 0x19FA44u);
    ctx->pc = 0x19FA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA3Cu;
            // 0x19fa40: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA44u; }
        if (ctx->pc != 0x19FA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA44u; }
        if (ctx->pc != 0x19FA44u) { return; }
    }
    ctx->pc = 0x19FA44u;
label_19fa44:
    // 0x19fa44: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa48:
    // 0x19fa48: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x19fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_19fa4c:
    // 0x19fa4c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa50:
    // 0x19fa50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa54:
    // 0x19fa54: 0xc0655b0  jal         func_1956C0
label_19fa58:
    if (ctx->pc == 0x19FA58u) {
        ctx->pc = 0x19FA58u;
            // 0x19fa58: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19FA5Cu;
        goto label_19fa5c;
    }
    ctx->pc = 0x19FA54u;
    SET_GPR_U32(ctx, 31, 0x19FA5Cu);
    ctx->pc = 0x19FA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA54u;
            // 0x19fa58: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA5Cu; }
        if (ctx->pc != 0x19FA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA5Cu; }
        if (ctx->pc != 0x19FA5Cu) { return; }
    }
    ctx->pc = 0x19FA5Cu;
label_19fa5c:
    // 0x19fa5c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa60:
    // 0x19fa60: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_19fa64:
    // 0x19fa64: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa68:
    // 0x19fa68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa6c:
    // 0x19fa6c: 0xc0655b0  jal         func_1956C0
label_19fa70:
    if (ctx->pc == 0x19FA70u) {
        ctx->pc = 0x19FA70u;
            // 0x19fa70: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19FA74u;
        goto label_19fa74;
    }
    ctx->pc = 0x19FA6Cu;
    SET_GPR_U32(ctx, 31, 0x19FA74u);
    ctx->pc = 0x19FA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA6Cu;
            // 0x19fa70: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA74u; }
        if (ctx->pc != 0x19FA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA74u; }
        if (ctx->pc != 0x19FA74u) { return; }
    }
    ctx->pc = 0x19FA74u;
label_19fa74:
    // 0x19fa74: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa78:
    // 0x19fa78: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x19fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_19fa7c:
    // 0x19fa7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa80:
    // 0x19fa80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa84:
    // 0x19fa84: 0xc0655b0  jal         func_1956C0
label_19fa88:
    if (ctx->pc == 0x19FA88u) {
        ctx->pc = 0x19FA88u;
            // 0x19fa88: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x19FA8Cu;
        goto label_19fa8c;
    }
    ctx->pc = 0x19FA84u;
    SET_GPR_U32(ctx, 31, 0x19FA8Cu);
    ctx->pc = 0x19FA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA84u;
            // 0x19fa88: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA8Cu; }
        if (ctx->pc != 0x19FA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA8Cu; }
        if (ctx->pc != 0x19FA8Cu) { return; }
    }
    ctx->pc = 0x19FA8Cu;
label_19fa8c:
    // 0x19fa8c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fa90:
    // 0x19fa90: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x19fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_19fa94:
    // 0x19fa94: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fa98:
    // 0x19fa98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19fa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fa9c:
    // 0x19fa9c: 0xc0655b0  jal         func_1956C0
label_19faa0:
    if (ctx->pc == 0x19FAA0u) {
        ctx->pc = 0x19FAA0u;
            // 0x19faa0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x19FAA4u;
        goto label_19faa4;
    }
    ctx->pc = 0x19FA9Cu;
    SET_GPR_U32(ctx, 31, 0x19FAA4u);
    ctx->pc = 0x19FAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA9Cu;
            // 0x19faa0: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAA4u; }
        if (ctx->pc != 0x19FAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAA4u; }
        if (ctx->pc != 0x19FAA4u) { return; }
    }
    ctx->pc = 0x19FAA4u;
label_19faa4:
    // 0x19faa4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_19faa8:
    if (ctx->pc == 0x19FAA8u) {
        ctx->pc = 0x19FAACu;
        goto label_19faac;
    }
    ctx->pc = 0x19FAA4u;
    {
        const bool branch_taken_0x19faa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19faa4) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19FAACu;
label_19faac:
    // 0x19faac: 0x0  nop
    ctx->pc = 0x19faacu;
    // NOP
label_19fab0:
    // 0x19fab0: 0x288100a1  slti        $at, $a0, 0xA1
    ctx->pc = 0x19fab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)161) ? 1 : 0);
label_19fab4:
    // 0x19fab4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_19fab8:
    if (ctx->pc == 0x19FAB8u) {
        ctx->pc = 0x19FABCu;
        goto label_19fabc;
    }
    ctx->pc = 0x19FAB4u;
    {
        const bool branch_taken_0x19fab4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fab4) {
            ctx->pc = 0x19FAF0u;
            goto label_19faf0;
        }
    }
    ctx->pc = 0x19FABCu;
label_19fabc:
    // 0x19fabc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fac0:
    // 0x19fac0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fac4:
    // 0x19fac4: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x19fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_19fac8:
    // 0x19fac8: 0xc065590  jal         func_195640
label_19facc:
    if (ctx->pc == 0x19FACCu) {
        ctx->pc = 0x19FACCu;
            // 0x19facc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19FAD0u;
        goto label_19fad0;
    }
    ctx->pc = 0x19FAC8u;
    SET_GPR_U32(ctx, 31, 0x19FAD0u);
    ctx->pc = 0x19FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAC8u;
            // 0x19facc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD0u; }
        if (ctx->pc != 0x19FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD0u; }
        if (ctx->pc != 0x19FAD0u) { return; }
    }
    ctx->pc = 0x19FAD0u;
label_19fad0:
    // 0x19fad0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fad4:
    // 0x19fad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fad8:
    // 0x19fad8: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x19fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_19fadc:
    // 0x19fadc: 0xc065590  jal         func_195640
label_19fae0:
    if (ctx->pc == 0x19FAE0u) {
        ctx->pc = 0x19FAE0u;
            // 0x19fae0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19FAE4u;
        goto label_19fae4;
    }
    ctx->pc = 0x19FADCu;
    SET_GPR_U32(ctx, 31, 0x19FAE4u);
    ctx->pc = 0x19FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FADCu;
            // 0x19fae0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAE4u; }
        if (ctx->pc != 0x19FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAE4u; }
        if (ctx->pc != 0x19FAE4u) { return; }
    }
    ctx->pc = 0x19FAE4u;
label_19fae4:
    // 0x19fae4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_19fae8:
    if (ctx->pc == 0x19FAE8u) {
        ctx->pc = 0x19FAECu;
        goto label_19faec;
    }
    ctx->pc = 0x19FAE4u;
    {
        const bool branch_taken_0x19fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fae4) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19FAECu;
label_19faec:
    // 0x19faec: 0x0  nop
    ctx->pc = 0x19faecu;
    // NOP
label_19faf0:
    // 0x19faf0: 0x28810140  slti        $at, $a0, 0x140
    ctx->pc = 0x19faf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)320) ? 1 : 0);
label_19faf4:
    // 0x19faf4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_19faf8:
    if (ctx->pc == 0x19FAF8u) {
        ctx->pc = 0x19FAF8u;
            // 0x19faf8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x19FAFCu;
        goto label_19fafc;
    }
    ctx->pc = 0x19FAF4u;
    {
        const bool branch_taken_0x19faf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAF4u;
            // 0x19faf8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faf4) {
            ctx->pc = 0x19FB68u;
            goto label_19fb68;
        }
    }
    ctx->pc = 0x19FAFCu;
label_19fafc:
    // 0x19fafc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_19fb00:
    if (ctx->pc == 0x19FB00u) {
        ctx->pc = 0x19FB04u;
        goto label_19fb04;
    }
    ctx->pc = 0x19FAFCu;
    {
        const bool branch_taken_0x19fafc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19fafc) {
            ctx->pc = 0x19FB10u;
            goto label_19fb10;
        }
    }
    ctx->pc = 0x19FB04u;
label_19fb04:
    // 0x19fb04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19fb08:
    if (ctx->pc == 0x19FB08u) {
        ctx->pc = 0x19FB0Cu;
        goto label_19fb0c;
    }
    ctx->pc = 0x19FB04u;
    {
        const bool branch_taken_0x19fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb04) {
            ctx->pc = 0x19FB10u;
            goto label_19fb10;
        }
    }
    ctx->pc = 0x19FB0Cu;
label_19fb0c:
    // 0x19fb0c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_19fb10:
    // 0x19fb10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_19fb14:
    if (ctx->pc == 0x19FB14u) {
        ctx->pc = 0x19FB18u;
        goto label_19fb18;
    }
    ctx->pc = 0x19FB10u;
    {
        const bool branch_taken_0x19fb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb10) {
            ctx->pc = 0x19FB48u;
            goto label_19fb48;
        }
    }
    ctx->pc = 0x19FB18u;
label_19fb18:
    // 0x19fb18: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_19fb1c:
    if (ctx->pc == 0x19FB1Cu) {
        ctx->pc = 0x19FB20u;
        goto label_19fb20;
    }
    ctx->pc = 0x19FB18u;
    {
        const bool branch_taken_0x19fb18 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19fb18) {
            ctx->pc = 0x19FB48u;
            goto label_19fb48;
        }
    }
    ctx->pc = 0x19FB20u;
label_19fb20:
    // 0x19fb20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fb24:
    // 0x19fb24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fb28:
    // 0x19fb28: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_19fb2c:
    // 0x19fb2c: 0xc0655a0  jal         func_195680
label_19fb30:
    if (ctx->pc == 0x19FB30u) {
        ctx->pc = 0x19FB30u;
            // 0x19fb30: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19FB34u;
        goto label_19fb34;
    }
    ctx->pc = 0x19FB2Cu;
    SET_GPR_U32(ctx, 31, 0x19FB34u);
    ctx->pc = 0x19FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB2Cu;
            // 0x19fb30: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB34u; }
        if (ctx->pc != 0x19FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB34u; }
        if (ctx->pc != 0x19FB34u) { return; }
    }
    ctx->pc = 0x19FB34u;
label_19fb34:
    // 0x19fb34: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fb38:
    // 0x19fb38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fb3c:
    // 0x19fb3c: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_19fb40:
    // 0x19fb40: 0xc0655a0  jal         func_195680
label_19fb44:
    if (ctx->pc == 0x19FB44u) {
        ctx->pc = 0x19FB44u;
            // 0x19fb44: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19FB48u;
        goto label_19fb48;
    }
    ctx->pc = 0x19FB40u;
    SET_GPR_U32(ctx, 31, 0x19FB48u);
    ctx->pc = 0x19FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB40u;
            // 0x19fb44: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB48u; }
        if (ctx->pc != 0x19FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB48u; }
        if (ctx->pc != 0x19FB48u) { return; }
    }
    ctx->pc = 0x19FB48u;
label_19fb48:
    // 0x19fb48: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x19fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_19fb4c:
    // 0x19fb4c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fb50:
    // 0x19fb50: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x19fb50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_19fb54:
    // 0x19fb54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fb58:
    // 0x19fb58: 0x0  nop
    ctx->pc = 0x19fb58u;
    // NOP
label_19fb5c:
    // 0x19fb5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19fb5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19fb60:
    // 0x19fb60: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19fb64:
    if (ctx->pc == 0x19FB64u) {
        ctx->pc = 0x19FB64u;
            // 0x19fb64: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x19FB68u;
        goto label_19fb68;
    }
    ctx->pc = 0x19FB60u;
    {
        const bool branch_taken_0x19fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB60u;
            // 0x19fb64: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb60) {
            ctx->pc = 0x19FBD8u;
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19FB68u;
label_19fb68:
    // 0x19fb68: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_19fb6c:
    if (ctx->pc == 0x19FB6Cu) {
        ctx->pc = 0x19FB6Cu;
            // 0x19fb6c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x19FB70u;
        goto label_19fb70;
    }
    ctx->pc = 0x19FB68u;
    {
        const bool branch_taken_0x19fb68 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB68u;
            // 0x19fb6c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb68) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FB70u;
label_19fb70:
    // 0x19fb70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_19fb74:
    if (ctx->pc == 0x19FB74u) {
        ctx->pc = 0x19FB78u;
        goto label_19fb78;
    }
    ctx->pc = 0x19FB70u;
    {
        const bool branch_taken_0x19fb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb70) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FB78u;
label_19fb78:
    // 0x19fb78: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_19fb7c:
    // 0x19fb7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_19fb80:
    if (ctx->pc == 0x19FB80u) {
        ctx->pc = 0x19FB84u;
        goto label_19fb84;
    }
    ctx->pc = 0x19FB7Cu;
    {
        const bool branch_taken_0x19fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb7c) {
            ctx->pc = 0x19FBB8u;
            goto label_19fbb8;
        }
    }
    ctx->pc = 0x19FB84u;
label_19fb84:
    // 0x19fb84: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_19fb88:
    if (ctx->pc == 0x19FB88u) {
        ctx->pc = 0x19FB8Cu;
        goto label_19fb8c;
    }
    ctx->pc = 0x19FB84u;
    {
        const bool branch_taken_0x19fb84 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x19fb84) {
            ctx->pc = 0x19FBB8u;
            goto label_19fbb8;
        }
    }
    ctx->pc = 0x19FB8Cu;
label_19fb8c:
    // 0x19fb8c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fb90:
    // 0x19fb90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fb94:
    // 0x19fb94: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x19fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_19fb98:
    // 0x19fb98: 0xc0655a0  jal         func_195680
label_19fb9c:
    if (ctx->pc == 0x19FB9Cu) {
        ctx->pc = 0x19FB9Cu;
            // 0x19fb9c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19FBA0u;
        goto label_19fba0;
    }
    ctx->pc = 0x19FB98u;
    SET_GPR_U32(ctx, 31, 0x19FBA0u);
    ctx->pc = 0x19FB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB98u;
            // 0x19fb9c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBA0u; }
        if (ctx->pc != 0x19FBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBA0u; }
        if (ctx->pc != 0x19FBA0u) { return; }
    }
    ctx->pc = 0x19FBA0u;
label_19fba0:
    // 0x19fba0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x19fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fba4:
    // 0x19fba4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fba8:
    // 0x19fba8: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_19fbac:
    // 0x19fbac: 0xc0655a0  jal         func_195680
label_19fbb0:
    if (ctx->pc == 0x19FBB0u) {
        ctx->pc = 0x19FBB0u;
            // 0x19fbb0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x19FBB4u;
        goto label_19fbb4;
    }
    ctx->pc = 0x19FBACu;
    SET_GPR_U32(ctx, 31, 0x19FBB4u);
    ctx->pc = 0x19FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBACu;
            // 0x19fbb0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBB4u; }
        if (ctx->pc != 0x19FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBB4u; }
        if (ctx->pc != 0x19FBB4u) { return; }
    }
    ctx->pc = 0x19FBB4u;
label_19fbb4:
    // 0x19fbb4: 0x0  nop
    ctx->pc = 0x19fbb4u;
    // NOP
label_19fbb8:
    // 0x19fbb8: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_19fbbc:
    // 0x19fbbc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fbc0:
    // 0x19fbc0: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x19fbc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_19fbc4:
    // 0x19fbc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fbc8:
    // 0x19fbc8: 0x0  nop
    ctx->pc = 0x19fbc8u;
    // NOP
label_19fbcc:
    // 0x19fbcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19fbccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19fbd0:
    // 0x19fbd0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19fbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19fbd4:
    // 0x19fbd4: 0x0  nop
    ctx->pc = 0x19fbd4u;
    // NOP
label_19fbd8:
    // 0x19fbd8: 0xc04b788  jal         func_12DE20
label_19fbdc:
    if (ctx->pc == 0x19FBDCu) {
        ctx->pc = 0x19FBDCu;
            // 0x19fbdc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19FBE0u;
        goto label_19fbe0;
    }
    ctx->pc = 0x19FBD8u;
    SET_GPR_U32(ctx, 31, 0x19FBE0u);
    ctx->pc = 0x19FBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBD8u;
            // 0x19fbdc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBE0u; }
        if (ctx->pc != 0x19FBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBE0u; }
        if (ctx->pc != 0x19FBE0u) { return; }
    }
    ctx->pc = 0x19FBE0u;
label_19fbe0:
    // 0x19fbe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fbe4:
    // 0x19fbe4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x19fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19fbe8:
    // 0x19fbe8: 0xc04b7da  jal         func_12DF68
label_19fbec:
    if (ctx->pc == 0x19FBECu) {
        ctx->pc = 0x19FBECu;
            // 0x19fbec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FBF0u;
        goto label_19fbf0;
    }
    ctx->pc = 0x19FBE8u;
    SET_GPR_U32(ctx, 31, 0x19FBF0u);
    ctx->pc = 0x19FBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBE8u;
            // 0x19fbec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBF0u; }
        if (ctx->pc != 0x19FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBF0u; }
        if (ctx->pc != 0x19FBF0u) { return; }
    }
    ctx->pc = 0x19FBF0u;
label_19fbf0:
    // 0x19fbf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19fbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fbf4:
    // 0x19fbf4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x19fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19fbf8:
    // 0x19fbf8: 0xc04b804  jal         func_12E010
label_19fbfc:
    if (ctx->pc == 0x19FBFCu) {
        ctx->pc = 0x19FBFCu;
            // 0x19fbfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FC00u;
        goto label_19fc00;
    }
    ctx->pc = 0x19FBF8u;
    SET_GPR_U32(ctx, 31, 0x19FC00u);
    ctx->pc = 0x19FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBF8u;
            // 0x19fbfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC00u; }
        if (ctx->pc != 0x19FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC00u; }
        if (ctx->pc != 0x19FC00u) { return; }
    }
    ctx->pc = 0x19FC00u;
label_19fc00:
    // 0x19fc00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fc04:
    // 0x19fc04: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x19fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19fc08:
    // 0x19fc08: 0xc04b7b0  jal         func_12DEC0
label_19fc0c:
    if (ctx->pc == 0x19FC0Cu) {
        ctx->pc = 0x19FC0Cu;
            // 0x19fc0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FC10u;
        goto label_19fc10;
    }
    ctx->pc = 0x19FC08u;
    SET_GPR_U32(ctx, 31, 0x19FC10u);
    ctx->pc = 0x19FC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC08u;
            // 0x19fc0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC10u; }
        if (ctx->pc != 0x19FC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC10u; }
        if (ctx->pc != 0x19FC10u) { return; }
    }
    ctx->pc = 0x19FC10u;
label_19fc10:
    // 0x19fc10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fc14:
    // 0x19fc14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fc18:
    // 0x19fc18: 0xc04b75e  jal         func_12DD78
label_19fc1c:
    if (ctx->pc == 0x19FC1Cu) {
        ctx->pc = 0x19FC1Cu;
            // 0x19fc1c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x19FC20u;
        goto label_19fc20;
    }
    ctx->pc = 0x19FC18u;
    SET_GPR_U32(ctx, 31, 0x19FC20u);
    ctx->pc = 0x19FC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC18u;
            // 0x19fc1c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC20u; }
        if (ctx->pc != 0x19FC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC20u; }
        if (ctx->pc != 0x19FC20u) { return; }
    }
    ctx->pc = 0x19FC20u;
label_19fc20:
    // 0x19fc20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19fc24:
    // 0x19fc24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19fc28:
    // 0x19fc28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19fc28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19fc2c:
    // 0x19fc2c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_19fc30:
    if (ctx->pc == 0x19FC30u) {
        ctx->pc = 0x19FC34u;
        goto label_19fc34;
    }
    ctx->pc = 0x19FC2Cu;
    {
        const bool branch_taken_0x19fc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc2c) {
            ctx->pc = 0x19FC80u;
            goto label_19fc80;
        }
    }
    ctx->pc = 0x19FC34u;
label_19fc34:
    // 0x19fc34: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x19fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19fc38:
    // 0x19fc38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19fc3c:
    if (ctx->pc == 0x19FC3Cu) {
        ctx->pc = 0x19FC40u;
        goto label_19fc40;
    }
    ctx->pc = 0x19FC38u;
    {
        const bool branch_taken_0x19fc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc38) {
            ctx->pc = 0x19FC50u;
            goto label_19fc50;
        }
    }
    ctx->pc = 0x19FC40u;
label_19fc40:
    // 0x19fc40: 0xc0604f0  jal         func_1813C0
label_19fc44:
    if (ctx->pc == 0x19FC44u) {
        ctx->pc = 0x19FC44u;
            // 0x19fc44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19FC48u;
        goto label_19fc48;
    }
    ctx->pc = 0x19FC40u;
    SET_GPR_U32(ctx, 31, 0x19FC48u);
    ctx->pc = 0x19FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC40u;
            // 0x19fc44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC48u; }
        if (ctx->pc != 0x19FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC48u; }
        if (ctx->pc != 0x19FC48u) { return; }
    }
    ctx->pc = 0x19FC48u;
label_19fc48:
    // 0x19fc48: 0x10000003  b           . + 4 + (0x3 << 2)
label_19fc4c:
    if (ctx->pc == 0x19FC4Cu) {
        ctx->pc = 0x19FC50u;
        goto label_19fc50;
    }
    ctx->pc = 0x19FC48u;
    {
        const bool branch_taken_0x19fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc48) {
            ctx->pc = 0x19FC58u;
            goto label_19fc58;
        }
    }
    ctx->pc = 0x19FC50u;
label_19fc50:
    // 0x19fc50: 0xc0604dc  jal         func_181370
label_19fc54:
    if (ctx->pc == 0x19FC54u) {
        ctx->pc = 0x19FC54u;
            // 0x19fc54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19FC58u;
        goto label_19fc58;
    }
    ctx->pc = 0x19FC50u;
    SET_GPR_U32(ctx, 31, 0x19FC58u);
    ctx->pc = 0x19FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC50u;
            // 0x19fc54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC58u; }
        if (ctx->pc != 0x19FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC58u; }
        if (ctx->pc != 0x19FC58u) { return; }
    }
    ctx->pc = 0x19FC58u;
label_19fc58:
    // 0x19fc58: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x19fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_19fc5c:
    // 0x19fc5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19fc60:
    if (ctx->pc == 0x19FC60u) {
        ctx->pc = 0x19FC64u;
        goto label_19fc64;
    }
    ctx->pc = 0x19FC5Cu;
    {
        const bool branch_taken_0x19fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc5c) {
            ctx->pc = 0x19FC70u;
            goto label_19fc70;
        }
    }
    ctx->pc = 0x19FC64u;
label_19fc64:
    // 0x19fc64: 0x10000022  b           . + 4 + (0x22 << 2)
label_19fc68:
    if (ctx->pc == 0x19FC68u) {
        ctx->pc = 0x19FC68u;
            // 0x19fc68: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x19FC6Cu;
        goto label_19fc6c;
    }
    ctx->pc = 0x19FC64u;
    {
        const bool branch_taken_0x19fc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC64u;
            // 0x19fc68: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc64) {
            ctx->pc = 0x19FCF0u;
            goto label_19fcf0;
        }
    }
    ctx->pc = 0x19FC6Cu;
label_19fc6c:
    // 0x19fc6c: 0x0  nop
    ctx->pc = 0x19fc6cu;
    // NOP
label_19fc70:
    // 0x19fc70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fc74:
    // 0x19fc74: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19fc78:
    if (ctx->pc == 0x19FC78u) {
        ctx->pc = 0x19FC78u;
            // 0x19fc78: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x19FC7Cu;
        goto label_19fc7c;
    }
    ctx->pc = 0x19FC74u;
    {
        const bool branch_taken_0x19fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC74u;
            // 0x19fc78: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc74) {
            ctx->pc = 0x19FCF0u;
            goto label_19fcf0;
        }
    }
    ctx->pc = 0x19FC7Cu;
label_19fc7c:
    // 0x19fc7c: 0x0  nop
    ctx->pc = 0x19fc7cu;
    // NOP
label_19fc80:
    // 0x19fc80: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x19fc80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_19fc84:
    // 0x19fc84: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_19fc88:
    if (ctx->pc == 0x19FC88u) {
        ctx->pc = 0x19FC8Cu;
        goto label_19fc8c;
    }
    ctx->pc = 0x19FC84u;
    {
        const bool branch_taken_0x19fc84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fc84) {
            ctx->pc = 0x19FCE0u;
            goto label_19fce0;
        }
    }
    ctx->pc = 0x19FC8Cu;
label_19fc8c:
    // 0x19fc8c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19fc90:
    // 0x19fc90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_19fc94:
    // 0x19fc94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19fc94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19fc98:
    // 0x19fc98: 0x0  nop
    ctx->pc = 0x19fc98u;
    // NOP
label_19fc9c:
    // 0x19fc9c: 0x0  nop
    ctx->pc = 0x19fc9cu;
    // NOP
label_19fca0:
    // 0x19fca0: 0x1010  mfhi        $v0
    ctx->pc = 0x19fca0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19fca4:
    // 0x19fca4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_19fca8:
    if (ctx->pc == 0x19FCA8u) {
        ctx->pc = 0x19FCACu;
        goto label_19fcac;
    }
    ctx->pc = 0x19FCA4u;
    {
        const bool branch_taken_0x19fca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fca4) {
            ctx->pc = 0x19FCE0u;
            goto label_19fce0;
        }
    }
    ctx->pc = 0x19FCACu;
label_19fcac:
    // 0x19fcac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19fcb0:
    // 0x19fcb0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x19fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_19fcb4:
    // 0x19fcb4: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x19fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19fcb8:
    // 0x19fcb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19fcb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fcbc:
    // 0x19fcbc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19fcc0:
    // 0x19fcc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19fcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fcc4:
    // 0x19fcc4: 0xc0536d8  jal         func_14DB60
label_19fcc8:
    if (ctx->pc == 0x19FCC8u) {
        ctx->pc = 0x19FCC8u;
            // 0x19fcc8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x19FCCCu;
        goto label_19fccc;
    }
    ctx->pc = 0x19FCC4u;
    SET_GPR_U32(ctx, 31, 0x19FCCCu);
    ctx->pc = 0x19FCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCC4u;
            // 0x19fcc8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCCCu; }
        if (ctx->pc != 0x19FCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCCCu; }
        if (ctx->pc != 0x19FCCCu) { return; }
    }
    ctx->pc = 0x19FCCCu;
label_19fccc:
    // 0x19fccc: 0xc060500  jal         func_181400
label_19fcd0:
    if (ctx->pc == 0x19FCD0u) {
        ctx->pc = 0x19FCD0u;
            // 0x19fcd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19FCD4u;
        goto label_19fcd4;
    }
    ctx->pc = 0x19FCCCu;
    SET_GPR_U32(ctx, 31, 0x19FCD4u);
    ctx->pc = 0x19FCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCCCu;
            // 0x19fcd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCD4u; }
        if (ctx->pc != 0x19FCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCD4u; }
        if (ctx->pc != 0x19FCD4u) { return; }
    }
    ctx->pc = 0x19FCD4u;
label_19fcd4:
    // 0x19fcd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_19fcd8:
    if (ctx->pc == 0x19FCD8u) {
        ctx->pc = 0x19FCDCu;
        goto label_19fcdc;
    }
    ctx->pc = 0x19FCD4u;
    {
        const bool branch_taken_0x19fcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fcd4) {
            ctx->pc = 0x19FCE8u;
            goto label_19fce8;
        }
    }
    ctx->pc = 0x19FCDCu;
label_19fcdc:
    // 0x19fcdc: 0x0  nop
    ctx->pc = 0x19fcdcu;
    // NOP
label_19fce0:
    // 0x19fce0: 0xc0604dc  jal         func_181370
label_19fce4:
    if (ctx->pc == 0x19FCE4u) {
        ctx->pc = 0x19FCE4u;
            // 0x19fce4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19FCE8u;
        goto label_19fce8;
    }
    ctx->pc = 0x19FCE0u;
    SET_GPR_U32(ctx, 31, 0x19FCE8u);
    ctx->pc = 0x19FCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCE0u;
            // 0x19fce4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCE8u; }
        if (ctx->pc != 0x19FCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCE8u; }
        if (ctx->pc != 0x19FCE8u) { return; }
    }
    ctx->pc = 0x19FCE8u;
label_19fce8:
    // 0x19fce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fcec:
    // 0x19fcec: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x19fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_19fcf0:
    // 0x19fcf0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19fcf4:
    // 0x19fcf4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_19fcf8:
    // 0x19fcf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19fcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19fcfc:
    // 0x19fcfc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_19fd00:
    // 0x19fd00: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fd04:
    // 0x19fd04: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x19fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_19fd08:
    // 0x19fd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fd0c:
    // 0x19fd0c: 0x0  nop
    ctx->pc = 0x19fd0cu;
    // NOP
label_19fd10:
    // 0x19fd10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19fd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19fd14:
    // 0x19fd14: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19fd14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19fd18:
    // 0x19fd18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fd1c:
    // 0x19fd1c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x19fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_19fd20:
    // 0x19fd20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fd24:
    // 0x19fd24: 0x0  nop
    ctx->pc = 0x19fd24u;
    // NOP
label_19fd28:
    // 0x19fd28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19fd28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19fd2c:
    // 0x19fd2c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x19fd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19fd30:
    // 0x19fd30: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x19fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_19fd34:
    // 0x19fd34: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_19fd38:
    // 0x19fd38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fd3c:
    // 0x19fd3c: 0x0  nop
    ctx->pc = 0x19fd3cu;
    // NOP
label_19fd40:
    // 0x19fd40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19fd40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19fd44:
    // 0x19fd44: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x19fd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_19fd48:
    // 0x19fd48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_19fd4c:
    // 0x19fd4c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19fd50:
    // 0x19fd50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fd54:
    // 0x19fd54: 0x0  nop
    ctx->pc = 0x19fd54u;
    // NOP
label_19fd58:
    // 0x19fd58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19fd58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19fd5c:
    // 0x19fd5c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x19fd5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_19fd60:
    // 0x19fd60: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19fd64:
    // 0x19fd64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19fd68:
    // 0x19fd68: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x19fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_19fd6c:
    // 0x19fd6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fd70:
    // 0x19fd70: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fd74:
    // 0x19fd74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19fd74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19fd78:
    // 0x19fd78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19fd7c:
    if (ctx->pc == 0x19FD7Cu) {
        ctx->pc = 0x19FD80u;
        goto label_19fd80;
    }
    ctx->pc = 0x19FD78u;
    {
        const bool branch_taken_0x19fd78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19fd78) {
            ctx->pc = 0x19FD98u;
            goto label_19fd98;
        }
    }
    ctx->pc = 0x19FD80u;
label_19fd80:
    // 0x19fd80: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19fd84:
    // 0x19fd84: 0x40f809  jalr        $v0
label_19fd88:
    if (ctx->pc == 0x19FD88u) {
        ctx->pc = 0x19FD88u;
            // 0x19fd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FD8Cu;
        goto label_19fd8c;
    }
    ctx->pc = 0x19FD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FD8Cu);
        ctx->pc = 0x19FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD84u;
            // 0x19fd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F420u: goto label_19f420;
            case 0x19F424u: goto label_19f424;
            case 0x19F428u: goto label_19f428;
            case 0x19F42Cu: goto label_19f42c;
            case 0x19F430u: goto label_19f430;
            case 0x19F434u: goto label_19f434;
            case 0x19F438u: goto label_19f438;
            case 0x19F43Cu: goto label_19f43c;
            case 0x19F440u: goto label_19f440;
            case 0x19F444u: goto label_19f444;
            case 0x19F448u: goto label_19f448;
            case 0x19F44Cu: goto label_19f44c;
            case 0x19F450u: goto label_19f450;
            case 0x19F454u: goto label_19f454;
            case 0x19F458u: goto label_19f458;
            case 0x19F45Cu: goto label_19f45c;
            case 0x19F460u: goto label_19f460;
            case 0x19F464u: goto label_19f464;
            case 0x19F468u: goto label_19f468;
            case 0x19F46Cu: goto label_19f46c;
            case 0x19F470u: goto label_19f470;
            case 0x19F474u: goto label_19f474;
            case 0x19F478u: goto label_19f478;
            case 0x19F47Cu: goto label_19f47c;
            case 0x19F480u: goto label_19f480;
            case 0x19F484u: goto label_19f484;
            case 0x19F488u: goto label_19f488;
            case 0x19F48Cu: goto label_19f48c;
            case 0x19F490u: goto label_19f490;
            case 0x19F494u: goto label_19f494;
            case 0x19F498u: goto label_19f498;
            case 0x19F49Cu: goto label_19f49c;
            case 0x19F4A0u: goto label_19f4a0;
            case 0x19F4A4u: goto label_19f4a4;
            case 0x19F4A8u: goto label_19f4a8;
            case 0x19F4ACu: goto label_19f4ac;
            case 0x19F4B0u: goto label_19f4b0;
            case 0x19F4B4u: goto label_19f4b4;
            case 0x19F4B8u: goto label_19f4b8;
            case 0x19F4BCu: goto label_19f4bc;
            case 0x19F4C0u: goto label_19f4c0;
            case 0x19F4C4u: goto label_19f4c4;
            case 0x19F4C8u: goto label_19f4c8;
            case 0x19F4CCu: goto label_19f4cc;
            case 0x19F4D0u: goto label_19f4d0;
            case 0x19F4D4u: goto label_19f4d4;
            case 0x19F4D8u: goto label_19f4d8;
            case 0x19F4DCu: goto label_19f4dc;
            case 0x19F4E0u: goto label_19f4e0;
            case 0x19F4E4u: goto label_19f4e4;
            case 0x19F4E8u: goto label_19f4e8;
            case 0x19F4ECu: goto label_19f4ec;
            case 0x19F4F0u: goto label_19f4f0;
            case 0x19F4F4u: goto label_19f4f4;
            case 0x19F4F8u: goto label_19f4f8;
            case 0x19F4FCu: goto label_19f4fc;
            case 0x19F500u: goto label_19f500;
            case 0x19F504u: goto label_19f504;
            case 0x19F508u: goto label_19f508;
            case 0x19F50Cu: goto label_19f50c;
            case 0x19F510u: goto label_19f510;
            case 0x19F514u: goto label_19f514;
            case 0x19F518u: goto label_19f518;
            case 0x19F51Cu: goto label_19f51c;
            case 0x19F520u: goto label_19f520;
            case 0x19F524u: goto label_19f524;
            case 0x19F528u: goto label_19f528;
            case 0x19F52Cu: goto label_19f52c;
            case 0x19F530u: goto label_19f530;
            case 0x19F534u: goto label_19f534;
            case 0x19F538u: goto label_19f538;
            case 0x19F53Cu: goto label_19f53c;
            case 0x19F540u: goto label_19f540;
            case 0x19F544u: goto label_19f544;
            case 0x19F548u: goto label_19f548;
            case 0x19F54Cu: goto label_19f54c;
            case 0x19F550u: goto label_19f550;
            case 0x19F554u: goto label_19f554;
            case 0x19F558u: goto label_19f558;
            case 0x19F55Cu: goto label_19f55c;
            case 0x19F560u: goto label_19f560;
            case 0x19F564u: goto label_19f564;
            case 0x19F568u: goto label_19f568;
            case 0x19F56Cu: goto label_19f56c;
            case 0x19F570u: goto label_19f570;
            case 0x19F574u: goto label_19f574;
            case 0x19F578u: goto label_19f578;
            case 0x19F57Cu: goto label_19f57c;
            case 0x19F580u: goto label_19f580;
            case 0x19F584u: goto label_19f584;
            case 0x19F588u: goto label_19f588;
            case 0x19F58Cu: goto label_19f58c;
            case 0x19F590u: goto label_19f590;
            case 0x19F594u: goto label_19f594;
            case 0x19F598u: goto label_19f598;
            case 0x19F59Cu: goto label_19f59c;
            case 0x19F5A0u: goto label_19f5a0;
            case 0x19F5A4u: goto label_19f5a4;
            case 0x19F5A8u: goto label_19f5a8;
            case 0x19F5ACu: goto label_19f5ac;
            case 0x19F5B0u: goto label_19f5b0;
            case 0x19F5B4u: goto label_19f5b4;
            case 0x19F5B8u: goto label_19f5b8;
            case 0x19F5BCu: goto label_19f5bc;
            case 0x19F5C0u: goto label_19f5c0;
            case 0x19F5C4u: goto label_19f5c4;
            case 0x19F5C8u: goto label_19f5c8;
            case 0x19F5CCu: goto label_19f5cc;
            case 0x19F5D0u: goto label_19f5d0;
            case 0x19F5D4u: goto label_19f5d4;
            case 0x19F5D8u: goto label_19f5d8;
            case 0x19F5DCu: goto label_19f5dc;
            case 0x19F5E0u: goto label_19f5e0;
            case 0x19F5E4u: goto label_19f5e4;
            case 0x19F5E8u: goto label_19f5e8;
            case 0x19F5ECu: goto label_19f5ec;
            case 0x19F5F0u: goto label_19f5f0;
            case 0x19F5F4u: goto label_19f5f4;
            case 0x19F5F8u: goto label_19f5f8;
            case 0x19F5FCu: goto label_19f5fc;
            case 0x19F600u: goto label_19f600;
            case 0x19F604u: goto label_19f604;
            case 0x19F608u: goto label_19f608;
            case 0x19F60Cu: goto label_19f60c;
            case 0x19F610u: goto label_19f610;
            case 0x19F614u: goto label_19f614;
            case 0x19F618u: goto label_19f618;
            case 0x19F61Cu: goto label_19f61c;
            case 0x19F620u: goto label_19f620;
            case 0x19F624u: goto label_19f624;
            case 0x19F628u: goto label_19f628;
            case 0x19F62Cu: goto label_19f62c;
            case 0x19F630u: goto label_19f630;
            case 0x19F634u: goto label_19f634;
            case 0x19F638u: goto label_19f638;
            case 0x19F63Cu: goto label_19f63c;
            case 0x19F640u: goto label_19f640;
            case 0x19F644u: goto label_19f644;
            case 0x19F648u: goto label_19f648;
            case 0x19F64Cu: goto label_19f64c;
            case 0x19F650u: goto label_19f650;
            case 0x19F654u: goto label_19f654;
            case 0x19F658u: goto label_19f658;
            case 0x19F65Cu: goto label_19f65c;
            case 0x19F660u: goto label_19f660;
            case 0x19F664u: goto label_19f664;
            case 0x19F668u: goto label_19f668;
            case 0x19F66Cu: goto label_19f66c;
            case 0x19F670u: goto label_19f670;
            case 0x19F674u: goto label_19f674;
            case 0x19F678u: goto label_19f678;
            case 0x19F67Cu: goto label_19f67c;
            case 0x19F680u: goto label_19f680;
            case 0x19F684u: goto label_19f684;
            case 0x19F688u: goto label_19f688;
            case 0x19F68Cu: goto label_19f68c;
            case 0x19F690u: goto label_19f690;
            case 0x19F694u: goto label_19f694;
            case 0x19F698u: goto label_19f698;
            case 0x19F69Cu: goto label_19f69c;
            case 0x19F6A0u: goto label_19f6a0;
            case 0x19F6A4u: goto label_19f6a4;
            case 0x19F6A8u: goto label_19f6a8;
            case 0x19F6ACu: goto label_19f6ac;
            case 0x19F6B0u: goto label_19f6b0;
            case 0x19F6B4u: goto label_19f6b4;
            case 0x19F6B8u: goto label_19f6b8;
            case 0x19F6BCu: goto label_19f6bc;
            case 0x19F6C0u: goto label_19f6c0;
            case 0x19F6C4u: goto label_19f6c4;
            case 0x19F6C8u: goto label_19f6c8;
            case 0x19F6CCu: goto label_19f6cc;
            case 0x19F6D0u: goto label_19f6d0;
            case 0x19F6D4u: goto label_19f6d4;
            case 0x19F6D8u: goto label_19f6d8;
            case 0x19F6DCu: goto label_19f6dc;
            case 0x19F6E0u: goto label_19f6e0;
            case 0x19F6E4u: goto label_19f6e4;
            case 0x19F6E8u: goto label_19f6e8;
            case 0x19F6ECu: goto label_19f6ec;
            case 0x19F6F0u: goto label_19f6f0;
            case 0x19F6F4u: goto label_19f6f4;
            case 0x19F6F8u: goto label_19f6f8;
            case 0x19F6FCu: goto label_19f6fc;
            case 0x19F700u: goto label_19f700;
            case 0x19F704u: goto label_19f704;
            case 0x19F708u: goto label_19f708;
            case 0x19F70Cu: goto label_19f70c;
            case 0x19F710u: goto label_19f710;
            case 0x19F714u: goto label_19f714;
            case 0x19F718u: goto label_19f718;
            case 0x19F71Cu: goto label_19f71c;
            case 0x19F720u: goto label_19f720;
            case 0x19F724u: goto label_19f724;
            case 0x19F728u: goto label_19f728;
            case 0x19F72Cu: goto label_19f72c;
            case 0x19F730u: goto label_19f730;
            case 0x19F734u: goto label_19f734;
            case 0x19F738u: goto label_19f738;
            case 0x19F73Cu: goto label_19f73c;
            case 0x19F740u: goto label_19f740;
            case 0x19F744u: goto label_19f744;
            case 0x19F748u: goto label_19f748;
            case 0x19F74Cu: goto label_19f74c;
            case 0x19F750u: goto label_19f750;
            case 0x19F754u: goto label_19f754;
            case 0x19F758u: goto label_19f758;
            case 0x19F75Cu: goto label_19f75c;
            case 0x19F760u: goto label_19f760;
            case 0x19F764u: goto label_19f764;
            case 0x19F768u: goto label_19f768;
            case 0x19F76Cu: goto label_19f76c;
            case 0x19F770u: goto label_19f770;
            case 0x19F774u: goto label_19f774;
            case 0x19F778u: goto label_19f778;
            case 0x19F77Cu: goto label_19f77c;
            case 0x19F780u: goto label_19f780;
            case 0x19F784u: goto label_19f784;
            case 0x19F788u: goto label_19f788;
            case 0x19F78Cu: goto label_19f78c;
            case 0x19F790u: goto label_19f790;
            case 0x19F794u: goto label_19f794;
            case 0x19F798u: goto label_19f798;
            case 0x19F79Cu: goto label_19f79c;
            case 0x19F7A0u: goto label_19f7a0;
            case 0x19F7A4u: goto label_19f7a4;
            case 0x19F7A8u: goto label_19f7a8;
            case 0x19F7ACu: goto label_19f7ac;
            case 0x19F7B0u: goto label_19f7b0;
            case 0x19F7B4u: goto label_19f7b4;
            case 0x19F7B8u: goto label_19f7b8;
            case 0x19F7BCu: goto label_19f7bc;
            case 0x19F7C0u: goto label_19f7c0;
            case 0x19F7C4u: goto label_19f7c4;
            case 0x19F7C8u: goto label_19f7c8;
            case 0x19F7CCu: goto label_19f7cc;
            case 0x19F7D0u: goto label_19f7d0;
            case 0x19F7D4u: goto label_19f7d4;
            case 0x19F7D8u: goto label_19f7d8;
            case 0x19F7DCu: goto label_19f7dc;
            case 0x19F7E0u: goto label_19f7e0;
            case 0x19F7E4u: goto label_19f7e4;
            case 0x19F7E8u: goto label_19f7e8;
            case 0x19F7ECu: goto label_19f7ec;
            case 0x19F7F0u: goto label_19f7f0;
            case 0x19F7F4u: goto label_19f7f4;
            case 0x19F7F8u: goto label_19f7f8;
            case 0x19F7FCu: goto label_19f7fc;
            case 0x19F800u: goto label_19f800;
            case 0x19F804u: goto label_19f804;
            case 0x19F808u: goto label_19f808;
            case 0x19F80Cu: goto label_19f80c;
            case 0x19F810u: goto label_19f810;
            case 0x19F814u: goto label_19f814;
            case 0x19F818u: goto label_19f818;
            case 0x19F81Cu: goto label_19f81c;
            case 0x19F820u: goto label_19f820;
            case 0x19F824u: goto label_19f824;
            case 0x19F828u: goto label_19f828;
            case 0x19F82Cu: goto label_19f82c;
            case 0x19F830u: goto label_19f830;
            case 0x19F834u: goto label_19f834;
            case 0x19F838u: goto label_19f838;
            case 0x19F83Cu: goto label_19f83c;
            case 0x19F840u: goto label_19f840;
            case 0x19F844u: goto label_19f844;
            case 0x19F848u: goto label_19f848;
            case 0x19F84Cu: goto label_19f84c;
            case 0x19F850u: goto label_19f850;
            case 0x19F854u: goto label_19f854;
            case 0x19F858u: goto label_19f858;
            case 0x19F85Cu: goto label_19f85c;
            case 0x19F860u: goto label_19f860;
            case 0x19F864u: goto label_19f864;
            case 0x19F868u: goto label_19f868;
            case 0x19F86Cu: goto label_19f86c;
            case 0x19F870u: goto label_19f870;
            case 0x19F874u: goto label_19f874;
            case 0x19F878u: goto label_19f878;
            case 0x19F87Cu: goto label_19f87c;
            case 0x19F880u: goto label_19f880;
            case 0x19F884u: goto label_19f884;
            case 0x19F888u: goto label_19f888;
            case 0x19F88Cu: goto label_19f88c;
            case 0x19F890u: goto label_19f890;
            case 0x19F894u: goto label_19f894;
            case 0x19F898u: goto label_19f898;
            case 0x19F89Cu: goto label_19f89c;
            case 0x19F8A0u: goto label_19f8a0;
            case 0x19F8A4u: goto label_19f8a4;
            case 0x19F8A8u: goto label_19f8a8;
            case 0x19F8ACu: goto label_19f8ac;
            case 0x19F8B0u: goto label_19f8b0;
            case 0x19F8B4u: goto label_19f8b4;
            case 0x19F8B8u: goto label_19f8b8;
            case 0x19F8BCu: goto label_19f8bc;
            case 0x19F8C0u: goto label_19f8c0;
            case 0x19F8C4u: goto label_19f8c4;
            case 0x19F8C8u: goto label_19f8c8;
            case 0x19F8CCu: goto label_19f8cc;
            case 0x19F8D0u: goto label_19f8d0;
            case 0x19F8D4u: goto label_19f8d4;
            case 0x19F8D8u: goto label_19f8d8;
            case 0x19F8DCu: goto label_19f8dc;
            case 0x19F8E0u: goto label_19f8e0;
            case 0x19F8E4u: goto label_19f8e4;
            case 0x19F8E8u: goto label_19f8e8;
            case 0x19F8ECu: goto label_19f8ec;
            case 0x19F8F0u: goto label_19f8f0;
            case 0x19F8F4u: goto label_19f8f4;
            case 0x19F8F8u: goto label_19f8f8;
            case 0x19F8FCu: goto label_19f8fc;
            case 0x19F900u: goto label_19f900;
            case 0x19F904u: goto label_19f904;
            case 0x19F908u: goto label_19f908;
            case 0x19F90Cu: goto label_19f90c;
            case 0x19F910u: goto label_19f910;
            case 0x19F914u: goto label_19f914;
            case 0x19F918u: goto label_19f918;
            case 0x19F91Cu: goto label_19f91c;
            case 0x19F920u: goto label_19f920;
            case 0x19F924u: goto label_19f924;
            case 0x19F928u: goto label_19f928;
            case 0x19F92Cu: goto label_19f92c;
            case 0x19F930u: goto label_19f930;
            case 0x19F934u: goto label_19f934;
            case 0x19F938u: goto label_19f938;
            case 0x19F93Cu: goto label_19f93c;
            case 0x19F940u: goto label_19f940;
            case 0x19F944u: goto label_19f944;
            case 0x19F948u: goto label_19f948;
            case 0x19F94Cu: goto label_19f94c;
            case 0x19F950u: goto label_19f950;
            case 0x19F954u: goto label_19f954;
            case 0x19F958u: goto label_19f958;
            case 0x19F95Cu: goto label_19f95c;
            case 0x19F960u: goto label_19f960;
            case 0x19F964u: goto label_19f964;
            case 0x19F968u: goto label_19f968;
            case 0x19F96Cu: goto label_19f96c;
            case 0x19F970u: goto label_19f970;
            case 0x19F974u: goto label_19f974;
            case 0x19F978u: goto label_19f978;
            case 0x19F97Cu: goto label_19f97c;
            case 0x19F980u: goto label_19f980;
            case 0x19F984u: goto label_19f984;
            case 0x19F988u: goto label_19f988;
            case 0x19F98Cu: goto label_19f98c;
            case 0x19F990u: goto label_19f990;
            case 0x19F994u: goto label_19f994;
            case 0x19F998u: goto label_19f998;
            case 0x19F99Cu: goto label_19f99c;
            case 0x19F9A0u: goto label_19f9a0;
            case 0x19F9A4u: goto label_19f9a4;
            case 0x19F9A8u: goto label_19f9a8;
            case 0x19F9ACu: goto label_19f9ac;
            case 0x19F9B0u: goto label_19f9b0;
            case 0x19F9B4u: goto label_19f9b4;
            case 0x19F9B8u: goto label_19f9b8;
            case 0x19F9BCu: goto label_19f9bc;
            case 0x19F9C0u: goto label_19f9c0;
            case 0x19F9C4u: goto label_19f9c4;
            case 0x19F9C8u: goto label_19f9c8;
            case 0x19F9CCu: goto label_19f9cc;
            case 0x19F9D0u: goto label_19f9d0;
            case 0x19F9D4u: goto label_19f9d4;
            case 0x19F9D8u: goto label_19f9d8;
            case 0x19F9DCu: goto label_19f9dc;
            case 0x19F9E0u: goto label_19f9e0;
            case 0x19F9E4u: goto label_19f9e4;
            case 0x19F9E8u: goto label_19f9e8;
            case 0x19F9ECu: goto label_19f9ec;
            case 0x19F9F0u: goto label_19f9f0;
            case 0x19F9F4u: goto label_19f9f4;
            case 0x19F9F8u: goto label_19f9f8;
            case 0x19F9FCu: goto label_19f9fc;
            case 0x19FA00u: goto label_19fa00;
            case 0x19FA04u: goto label_19fa04;
            case 0x19FA08u: goto label_19fa08;
            case 0x19FA0Cu: goto label_19fa0c;
            case 0x19FA10u: goto label_19fa10;
            case 0x19FA14u: goto label_19fa14;
            case 0x19FA18u: goto label_19fa18;
            case 0x19FA1Cu: goto label_19fa1c;
            case 0x19FA20u: goto label_19fa20;
            case 0x19FA24u: goto label_19fa24;
            case 0x19FA28u: goto label_19fa28;
            case 0x19FA2Cu: goto label_19fa2c;
            case 0x19FA30u: goto label_19fa30;
            case 0x19FA34u: goto label_19fa34;
            case 0x19FA38u: goto label_19fa38;
            case 0x19FA3Cu: goto label_19fa3c;
            case 0x19FA40u: goto label_19fa40;
            case 0x19FA44u: goto label_19fa44;
            case 0x19FA48u: goto label_19fa48;
            case 0x19FA4Cu: goto label_19fa4c;
            case 0x19FA50u: goto label_19fa50;
            case 0x19FA54u: goto label_19fa54;
            case 0x19FA58u: goto label_19fa58;
            case 0x19FA5Cu: goto label_19fa5c;
            case 0x19FA60u: goto label_19fa60;
            case 0x19FA64u: goto label_19fa64;
            case 0x19FA68u: goto label_19fa68;
            case 0x19FA6Cu: goto label_19fa6c;
            case 0x19FA70u: goto label_19fa70;
            case 0x19FA74u: goto label_19fa74;
            case 0x19FA78u: goto label_19fa78;
            case 0x19FA7Cu: goto label_19fa7c;
            case 0x19FA80u: goto label_19fa80;
            case 0x19FA84u: goto label_19fa84;
            case 0x19FA88u: goto label_19fa88;
            case 0x19FA8Cu: goto label_19fa8c;
            case 0x19FA90u: goto label_19fa90;
            case 0x19FA94u: goto label_19fa94;
            case 0x19FA98u: goto label_19fa98;
            case 0x19FA9Cu: goto label_19fa9c;
            case 0x19FAA0u: goto label_19faa0;
            case 0x19FAA4u: goto label_19faa4;
            case 0x19FAA8u: goto label_19faa8;
            case 0x19FAACu: goto label_19faac;
            case 0x19FAB0u: goto label_19fab0;
            case 0x19FAB4u: goto label_19fab4;
            case 0x19FAB8u: goto label_19fab8;
            case 0x19FABCu: goto label_19fabc;
            case 0x19FAC0u: goto label_19fac0;
            case 0x19FAC4u: goto label_19fac4;
            case 0x19FAC8u: goto label_19fac8;
            case 0x19FACCu: goto label_19facc;
            case 0x19FAD0u: goto label_19fad0;
            case 0x19FAD4u: goto label_19fad4;
            case 0x19FAD8u: goto label_19fad8;
            case 0x19FADCu: goto label_19fadc;
            case 0x19FAE0u: goto label_19fae0;
            case 0x19FAE4u: goto label_19fae4;
            case 0x19FAE8u: goto label_19fae8;
            case 0x19FAECu: goto label_19faec;
            case 0x19FAF0u: goto label_19faf0;
            case 0x19FAF4u: goto label_19faf4;
            case 0x19FAF8u: goto label_19faf8;
            case 0x19FAFCu: goto label_19fafc;
            case 0x19FB00u: goto label_19fb00;
            case 0x19FB04u: goto label_19fb04;
            case 0x19FB08u: goto label_19fb08;
            case 0x19FB0Cu: goto label_19fb0c;
            case 0x19FB10u: goto label_19fb10;
            case 0x19FB14u: goto label_19fb14;
            case 0x19FB18u: goto label_19fb18;
            case 0x19FB1Cu: goto label_19fb1c;
            case 0x19FB20u: goto label_19fb20;
            case 0x19FB24u: goto label_19fb24;
            case 0x19FB28u: goto label_19fb28;
            case 0x19FB2Cu: goto label_19fb2c;
            case 0x19FB30u: goto label_19fb30;
            case 0x19FB34u: goto label_19fb34;
            case 0x19FB38u: goto label_19fb38;
            case 0x19FB3Cu: goto label_19fb3c;
            case 0x19FB40u: goto label_19fb40;
            case 0x19FB44u: goto label_19fb44;
            case 0x19FB48u: goto label_19fb48;
            case 0x19FB4Cu: goto label_19fb4c;
            case 0x19FB50u: goto label_19fb50;
            case 0x19FB54u: goto label_19fb54;
            case 0x19FB58u: goto label_19fb58;
            case 0x19FB5Cu: goto label_19fb5c;
            case 0x19FB60u: goto label_19fb60;
            case 0x19FB64u: goto label_19fb64;
            case 0x19FB68u: goto label_19fb68;
            case 0x19FB6Cu: goto label_19fb6c;
            case 0x19FB70u: goto label_19fb70;
            case 0x19FB74u: goto label_19fb74;
            case 0x19FB78u: goto label_19fb78;
            case 0x19FB7Cu: goto label_19fb7c;
            case 0x19FB80u: goto label_19fb80;
            case 0x19FB84u: goto label_19fb84;
            case 0x19FB88u: goto label_19fb88;
            case 0x19FB8Cu: goto label_19fb8c;
            case 0x19FB90u: goto label_19fb90;
            case 0x19FB94u: goto label_19fb94;
            case 0x19FB98u: goto label_19fb98;
            case 0x19FB9Cu: goto label_19fb9c;
            case 0x19FBA0u: goto label_19fba0;
            case 0x19FBA4u: goto label_19fba4;
            case 0x19FBA8u: goto label_19fba8;
            case 0x19FBACu: goto label_19fbac;
            case 0x19FBB0u: goto label_19fbb0;
            case 0x19FBB4u: goto label_19fbb4;
            case 0x19FBB8u: goto label_19fbb8;
            case 0x19FBBCu: goto label_19fbbc;
            case 0x19FBC0u: goto label_19fbc0;
            case 0x19FBC4u: goto label_19fbc4;
            case 0x19FBC8u: goto label_19fbc8;
            case 0x19FBCCu: goto label_19fbcc;
            case 0x19FBD0u: goto label_19fbd0;
            case 0x19FBD4u: goto label_19fbd4;
            case 0x19FBD8u: goto label_19fbd8;
            case 0x19FBDCu: goto label_19fbdc;
            case 0x19FBE0u: goto label_19fbe0;
            case 0x19FBE4u: goto label_19fbe4;
            case 0x19FBE8u: goto label_19fbe8;
            case 0x19FBECu: goto label_19fbec;
            case 0x19FBF0u: goto label_19fbf0;
            case 0x19FBF4u: goto label_19fbf4;
            case 0x19FBF8u: goto label_19fbf8;
            case 0x19FBFCu: goto label_19fbfc;
            case 0x19FC00u: goto label_19fc00;
            case 0x19FC04u: goto label_19fc04;
            case 0x19FC08u: goto label_19fc08;
            case 0x19FC0Cu: goto label_19fc0c;
            case 0x19FC10u: goto label_19fc10;
            case 0x19FC14u: goto label_19fc14;
            case 0x19FC18u: goto label_19fc18;
            case 0x19FC1Cu: goto label_19fc1c;
            case 0x19FC20u: goto label_19fc20;
            case 0x19FC24u: goto label_19fc24;
            case 0x19FC28u: goto label_19fc28;
            case 0x19FC2Cu: goto label_19fc2c;
            case 0x19FC30u: goto label_19fc30;
            case 0x19FC34u: goto label_19fc34;
            case 0x19FC38u: goto label_19fc38;
            case 0x19FC3Cu: goto label_19fc3c;
            case 0x19FC40u: goto label_19fc40;
            case 0x19FC44u: goto label_19fc44;
            case 0x19FC48u: goto label_19fc48;
            case 0x19FC4Cu: goto label_19fc4c;
            case 0x19FC50u: goto label_19fc50;
            case 0x19FC54u: goto label_19fc54;
            case 0x19FC58u: goto label_19fc58;
            case 0x19FC5Cu: goto label_19fc5c;
            case 0x19FC60u: goto label_19fc60;
            case 0x19FC64u: goto label_19fc64;
            case 0x19FC68u: goto label_19fc68;
            case 0x19FC6Cu: goto label_19fc6c;
            case 0x19FC70u: goto label_19fc70;
            case 0x19FC74u: goto label_19fc74;
            case 0x19FC78u: goto label_19fc78;
            case 0x19FC7Cu: goto label_19fc7c;
            case 0x19FC80u: goto label_19fc80;
            case 0x19FC84u: goto label_19fc84;
            case 0x19FC88u: goto label_19fc88;
            case 0x19FC8Cu: goto label_19fc8c;
            case 0x19FC90u: goto label_19fc90;
            case 0x19FC94u: goto label_19fc94;
            case 0x19FC98u: goto label_19fc98;
            case 0x19FC9Cu: goto label_19fc9c;
            case 0x19FCA0u: goto label_19fca0;
            case 0x19FCA4u: goto label_19fca4;
            case 0x19FCA8u: goto label_19fca8;
            case 0x19FCACu: goto label_19fcac;
            case 0x19FCB0u: goto label_19fcb0;
            case 0x19FCB4u: goto label_19fcb4;
            case 0x19FCB8u: goto label_19fcb8;
            case 0x19FCBCu: goto label_19fcbc;
            case 0x19FCC0u: goto label_19fcc0;
            case 0x19FCC4u: goto label_19fcc4;
            case 0x19FCC8u: goto label_19fcc8;
            case 0x19FCCCu: goto label_19fccc;
            case 0x19FCD0u: goto label_19fcd0;
            case 0x19FCD4u: goto label_19fcd4;
            case 0x19FCD8u: goto label_19fcd8;
            case 0x19FCDCu: goto label_19fcdc;
            case 0x19FCE0u: goto label_19fce0;
            case 0x19FCE4u: goto label_19fce4;
            case 0x19FCE8u: goto label_19fce8;
            case 0x19FCECu: goto label_19fcec;
            case 0x19FCF0u: goto label_19fcf0;
            case 0x19FCF4u: goto label_19fcf4;
            case 0x19FCF8u: goto label_19fcf8;
            case 0x19FCFCu: goto label_19fcfc;
            case 0x19FD00u: goto label_19fd00;
            case 0x19FD04u: goto label_19fd04;
            case 0x19FD08u: goto label_19fd08;
            case 0x19FD0Cu: goto label_19fd0c;
            case 0x19FD10u: goto label_19fd10;
            case 0x19FD14u: goto label_19fd14;
            case 0x19FD18u: goto label_19fd18;
            case 0x19FD1Cu: goto label_19fd1c;
            case 0x19FD20u: goto label_19fd20;
            case 0x19FD24u: goto label_19fd24;
            case 0x19FD28u: goto label_19fd28;
            case 0x19FD2Cu: goto label_19fd2c;
            case 0x19FD30u: goto label_19fd30;
            case 0x19FD34u: goto label_19fd34;
            case 0x19FD38u: goto label_19fd38;
            case 0x19FD3Cu: goto label_19fd3c;
            case 0x19FD40u: goto label_19fd40;
            case 0x19FD44u: goto label_19fd44;
            case 0x19FD48u: goto label_19fd48;
            case 0x19FD4Cu: goto label_19fd4c;
            case 0x19FD50u: goto label_19fd50;
            case 0x19FD54u: goto label_19fd54;
            case 0x19FD58u: goto label_19fd58;
            case 0x19FD5Cu: goto label_19fd5c;
            case 0x19FD60u: goto label_19fd60;
            case 0x19FD64u: goto label_19fd64;
            case 0x19FD68u: goto label_19fd68;
            case 0x19FD6Cu: goto label_19fd6c;
            case 0x19FD70u: goto label_19fd70;
            case 0x19FD74u: goto label_19fd74;
            case 0x19FD78u: goto label_19fd78;
            case 0x19FD7Cu: goto label_19fd7c;
            case 0x19FD80u: goto label_19fd80;
            case 0x19FD84u: goto label_19fd84;
            case 0x19FD88u: goto label_19fd88;
            case 0x19FD8Cu: goto label_19fd8c;
            case 0x19FD90u: goto label_19fd90;
            case 0x19FD94u: goto label_19fd94;
            case 0x19FD98u: goto label_19fd98;
            case 0x19FD9Cu: goto label_19fd9c;
            case 0x19FDA0u: goto label_19fda0;
            case 0x19FDA4u: goto label_19fda4;
            case 0x19FDA8u: goto label_19fda8;
            case 0x19FDACu: goto label_19fdac;
            case 0x19FDB0u: goto label_19fdb0;
            case 0x19FDB4u: goto label_19fdb4;
            case 0x19FDB8u: goto label_19fdb8;
            case 0x19FDBCu: goto label_19fdbc;
            case 0x19FDC0u: goto label_19fdc0;
            case 0x19FDC4u: goto label_19fdc4;
            case 0x19FDC8u: goto label_19fdc8;
            case 0x19FDCCu: goto label_19fdcc;
            case 0x19FDD0u: goto label_19fdd0;
            case 0x19FDD4u: goto label_19fdd4;
            case 0x19FDD8u: goto label_19fdd8;
            case 0x19FDDCu: goto label_19fddc;
            case 0x19FDE0u: goto label_19fde0;
            case 0x19FDE4u: goto label_19fde4;
            case 0x19FDE8u: goto label_19fde8;
            case 0x19FDECu: goto label_19fdec;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FDF4u: goto label_19fdf4;
            case 0x19FDF8u: goto label_19fdf8;
            case 0x19FDFCu: goto label_19fdfc;
            case 0x19FE00u: goto label_19fe00;
            case 0x19FE04u: goto label_19fe04;
            case 0x19FE08u: goto label_19fe08;
            case 0x19FE0Cu: goto label_19fe0c;
            case 0x19FE10u: goto label_19fe10;
            case 0x19FE14u: goto label_19fe14;
            case 0x19FE18u: goto label_19fe18;
            case 0x19FE1Cu: goto label_19fe1c;
            case 0x19FE20u: goto label_19fe20;
            case 0x19FE24u: goto label_19fe24;
            case 0x19FE28u: goto label_19fe28;
            case 0x19FE2Cu: goto label_19fe2c;
            case 0x19FE30u: goto label_19fe30;
            case 0x19FE34u: goto label_19fe34;
            case 0x19FE38u: goto label_19fe38;
            case 0x19FE3Cu: goto label_19fe3c;
            case 0x19FE40u: goto label_19fe40;
            case 0x19FE44u: goto label_19fe44;
            case 0x19FE48u: goto label_19fe48;
            case 0x19FE4Cu: goto label_19fe4c;
            case 0x19FE50u: goto label_19fe50;
            case 0x19FE54u: goto label_19fe54;
            case 0x19FE58u: goto label_19fe58;
            case 0x19FE5Cu: goto label_19fe5c;
            case 0x19FE60u: goto label_19fe60;
            case 0x19FE64u: goto label_19fe64;
            case 0x19FE68u: goto label_19fe68;
            case 0x19FE6Cu: goto label_19fe6c;
            case 0x19FE70u: goto label_19fe70;
            case 0x19FE74u: goto label_19fe74;
            case 0x19FE78u: goto label_19fe78;
            case 0x19FE7Cu: goto label_19fe7c;
            case 0x19FE80u: goto label_19fe80;
            case 0x19FE84u: goto label_19fe84;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FE90u: goto label_19fe90;
            case 0x19FE94u: goto label_19fe94;
            case 0x19FE98u: goto label_19fe98;
            case 0x19FE9Cu: goto label_19fe9c;
            case 0x19FEA0u: goto label_19fea0;
            case 0x19FEA4u: goto label_19fea4;
            case 0x19FEA8u: goto label_19fea8;
            case 0x19FEACu: goto label_19feac;
            case 0x19FEB0u: goto label_19feb0;
            case 0x19FEB4u: goto label_19feb4;
            case 0x19FEB8u: goto label_19feb8;
            case 0x19FEBCu: goto label_19febc;
            case 0x19FEC0u: goto label_19fec0;
            case 0x19FEC4u: goto label_19fec4;
            case 0x19FEC8u: goto label_19fec8;
            case 0x19FECCu: goto label_19fecc;
            case 0x19FED0u: goto label_19fed0;
            case 0x19FED4u: goto label_19fed4;
            case 0x19FED8u: goto label_19fed8;
            case 0x19FEDCu: goto label_19fedc;
            case 0x19FEE0u: goto label_19fee0;
            case 0x19FEE4u: goto label_19fee4;
            case 0x19FEE8u: goto label_19fee8;
            case 0x19FEECu: goto label_19feec;
            case 0x19FEF0u: goto label_19fef0;
            case 0x19FEF4u: goto label_19fef4;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FEFCu: goto label_19fefc;
            case 0x19FF00u: goto label_19ff00;
            case 0x19FF04u: goto label_19ff04;
            case 0x19FF08u: goto label_19ff08;
            case 0x19FF0Cu: goto label_19ff0c;
            case 0x19FF10u: goto label_19ff10;
            case 0x19FF14u: goto label_19ff14;
            case 0x19FF18u: goto label_19ff18;
            case 0x19FF1Cu: goto label_19ff1c;
            case 0x19FF20u: goto label_19ff20;
            case 0x19FF24u: goto label_19ff24;
            case 0x19FF28u: goto label_19ff28;
            case 0x19FF2Cu: goto label_19ff2c;
            case 0x19FF30u: goto label_19ff30;
            case 0x19FF34u: goto label_19ff34;
            case 0x19FF38u: goto label_19ff38;
            case 0x19FF3Cu: goto label_19ff3c;
            case 0x19FF40u: goto label_19ff40;
            case 0x19FF44u: goto label_19ff44;
            case 0x19FF48u: goto label_19ff48;
            case 0x19FF4Cu: goto label_19ff4c;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF54u: goto label_19ff54;
            case 0x19FF58u: goto label_19ff58;
            case 0x19FF5Cu: goto label_19ff5c;
            case 0x19FF60u: goto label_19ff60;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF68u: goto label_19ff68;
            case 0x19FF6Cu: goto label_19ff6c;
            case 0x19FF70u: goto label_19ff70;
            case 0x19FF74u: goto label_19ff74;
            case 0x19FF78u: goto label_19ff78;
            case 0x19FF7Cu: goto label_19ff7c;
            case 0x19FF80u: goto label_19ff80;
            case 0x19FF84u: goto label_19ff84;
            case 0x19FF88u: goto label_19ff88;
            case 0x19FF8Cu: goto label_19ff8c;
            case 0x19FF90u: goto label_19ff90;
            case 0x19FF94u: goto label_19ff94;
            case 0x19FF98u: goto label_19ff98;
            case 0x19FF9Cu: goto label_19ff9c;
            case 0x19FFA0u: goto label_19ffa0;
            case 0x19FFA4u: goto label_19ffa4;
            case 0x19FFA8u: goto label_19ffa8;
            case 0x19FFACu: goto label_19ffac;
            case 0x19FFB0u: goto label_19ffb0;
            case 0x19FFB4u: goto label_19ffb4;
            case 0x19FFB8u: goto label_19ffb8;
            case 0x19FFBCu: goto label_19ffbc;
            case 0x19FFC0u: goto label_19ffc0;
            case 0x19FFC4u: goto label_19ffc4;
            case 0x19FFC8u: goto label_19ffc8;
            case 0x19FFCCu: goto label_19ffcc;
            case 0x19FFD0u: goto label_19ffd0;
            case 0x19FFD4u: goto label_19ffd4;
            case 0x19FFD8u: goto label_19ffd8;
            case 0x19FFDCu: goto label_19ffdc;
            case 0x19FFE0u: goto label_19ffe0;
            case 0x19FFE4u: goto label_19ffe4;
            case 0x19FFE8u: goto label_19ffe8;
            case 0x19FFECu: goto label_19ffec;
            case 0x19FFF0u: goto label_19fff0;
            case 0x19FFF4u: goto label_19fff4;
            case 0x19FFF8u: goto label_19fff8;
            case 0x19FFFCu: goto label_19fffc;
            case 0x1A0000u: goto label_1a0000;
            case 0x1A0004u: goto label_1a0004;
            case 0x1A0008u: goto label_1a0008;
            case 0x1A000Cu: goto label_1a000c;
            case 0x1A0010u: goto label_1a0010;
            case 0x1A0014u: goto label_1a0014;
            case 0x1A0018u: goto label_1a0018;
            case 0x1A001Cu: goto label_1a001c;
            case 0x1A0020u: goto label_1a0020;
            case 0x1A0024u: goto label_1a0024;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A002Cu: goto label_1a002c;
            case 0x1A0030u: goto label_1a0030;
            case 0x1A0034u: goto label_1a0034;
            case 0x1A0038u: goto label_1a0038;
            case 0x1A003Cu: goto label_1a003c;
            case 0x1A0040u: goto label_1a0040;
            case 0x1A0044u: goto label_1a0044;
            case 0x1A0048u: goto label_1a0048;
            case 0x1A004Cu: goto label_1a004c;
            case 0x1A0050u: goto label_1a0050;
            case 0x1A0054u: goto label_1a0054;
            case 0x1A0058u: goto label_1a0058;
            case 0x1A005Cu: goto label_1a005c;
            case 0x1A0060u: goto label_1a0060;
            case 0x1A0064u: goto label_1a0064;
            case 0x1A0068u: goto label_1a0068;
            case 0x1A006Cu: goto label_1a006c;
            case 0x1A0070u: goto label_1a0070;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0078u: goto label_1a0078;
            case 0x1A007Cu: goto label_1a007c;
            case 0x1A0080u: goto label_1a0080;
            case 0x1A0084u: goto label_1a0084;
            case 0x1A0088u: goto label_1a0088;
            case 0x1A008Cu: goto label_1a008c;
            case 0x1A0090u: goto label_1a0090;
            case 0x1A0094u: goto label_1a0094;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A009Cu: goto label_1a009c;
            case 0x1A00A0u: goto label_1a00a0;
            case 0x1A00A4u: goto label_1a00a4;
            case 0x1A00A8u: goto label_1a00a8;
            case 0x1A00ACu: goto label_1a00ac;
            case 0x1A00B0u: goto label_1a00b0;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A00B8u: goto label_1a00b8;
            case 0x1A00BCu: goto label_1a00bc;
            case 0x1A00C0u: goto label_1a00c0;
            case 0x1A00C4u: goto label_1a00c4;
            case 0x1A00C8u: goto label_1a00c8;
            case 0x1A00CCu: goto label_1a00cc;
            case 0x1A00D0u: goto label_1a00d0;
            case 0x1A00D4u: goto label_1a00d4;
            case 0x1A00D8u: goto label_1a00d8;
            case 0x1A00DCu: goto label_1a00dc;
            case 0x1A00E0u: goto label_1a00e0;
            case 0x1A00E4u: goto label_1a00e4;
            case 0x1A00E8u: goto label_1a00e8;
            case 0x1A00ECu: goto label_1a00ec;
            case 0x1A00F0u: goto label_1a00f0;
            case 0x1A00F4u: goto label_1a00f4;
            case 0x1A00F8u: goto label_1a00f8;
            case 0x1A00FCu: goto label_1a00fc;
            case 0x1A0100u: goto label_1a0100;
            case 0x1A0104u: goto label_1a0104;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A010Cu: goto label_1a010c;
            case 0x1A0110u: goto label_1a0110;
            case 0x1A0114u: goto label_1a0114;
            case 0x1A0118u: goto label_1a0118;
            case 0x1A011Cu: goto label_1a011c;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0124u: goto label_1a0124;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0130u: goto label_1a0130;
            case 0x1A0134u: goto label_1a0134;
            case 0x1A0138u: goto label_1a0138;
            case 0x1A013Cu: goto label_1a013c;
            case 0x1A0140u: goto label_1a0140;
            case 0x1A0144u: goto label_1a0144;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A014Cu: goto label_1a014c;
            case 0x1A0150u: goto label_1a0150;
            case 0x1A0154u: goto label_1a0154;
            case 0x1A0158u: goto label_1a0158;
            case 0x1A015Cu: goto label_1a015c;
            case 0x1A0160u: goto label_1a0160;
            case 0x1A0164u: goto label_1a0164;
            case 0x1A0168u: goto label_1a0168;
            case 0x1A016Cu: goto label_1a016c;
            case 0x1A0170u: goto label_1a0170;
            case 0x1A0174u: goto label_1a0174;
            case 0x1A0178u: goto label_1a0178;
            case 0x1A017Cu: goto label_1a017c;
            case 0x1A0180u: goto label_1a0180;
            case 0x1A0184u: goto label_1a0184;
            case 0x1A0188u: goto label_1a0188;
            case 0x1A018Cu: goto label_1a018c;
            case 0x1A0190u: goto label_1a0190;
            case 0x1A0194u: goto label_1a0194;
            case 0x1A0198u: goto label_1a0198;
            case 0x1A019Cu: goto label_1a019c;
            case 0x1A01A0u: goto label_1a01a0;
            case 0x1A01A4u: goto label_1a01a4;
            case 0x1A01A8u: goto label_1a01a8;
            case 0x1A01ACu: goto label_1a01ac;
            case 0x1A01B0u: goto label_1a01b0;
            case 0x1A01B4u: goto label_1a01b4;
            case 0x1A01B8u: goto label_1a01b8;
            case 0x1A01BCu: goto label_1a01bc;
            case 0x1A01C0u: goto label_1a01c0;
            case 0x1A01C4u: goto label_1a01c4;
            case 0x1A01C8u: goto label_1a01c8;
            case 0x1A01CCu: goto label_1a01cc;
            case 0x1A01D0u: goto label_1a01d0;
            case 0x1A01D4u: goto label_1a01d4;
            case 0x1A01D8u: goto label_1a01d8;
            case 0x1A01DCu: goto label_1a01dc;
            case 0x1A01E0u: goto label_1a01e0;
            case 0x1A01E4u: goto label_1a01e4;
            case 0x1A01E8u: goto label_1a01e8;
            case 0x1A01ECu: goto label_1a01ec;
            case 0x1A01F0u: goto label_1a01f0;
            case 0x1A01F4u: goto label_1a01f4;
            case 0x1A01F8u: goto label_1a01f8;
            case 0x1A01FCu: goto label_1a01fc;
            case 0x1A0200u: goto label_1a0200;
            case 0x1A0204u: goto label_1a0204;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A020Cu: goto label_1a020c;
            case 0x1A0210u: goto label_1a0210;
            case 0x1A0214u: goto label_1a0214;
            case 0x1A0218u: goto label_1a0218;
            case 0x1A021Cu: goto label_1a021c;
            case 0x1A0220u: goto label_1a0220;
            case 0x1A0224u: goto label_1a0224;
            case 0x1A0228u: goto label_1a0228;
            case 0x1A022Cu: goto label_1a022c;
            case 0x1A0230u: goto label_1a0230;
            case 0x1A0234u: goto label_1a0234;
            case 0x1A0238u: goto label_1a0238;
            case 0x1A023Cu: goto label_1a023c;
            case 0x1A0240u: goto label_1a0240;
            case 0x1A0244u: goto label_1a0244;
            case 0x1A0248u: goto label_1a0248;
            case 0x1A024Cu: goto label_1a024c;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A0254u: goto label_1a0254;
            case 0x1A0258u: goto label_1a0258;
            case 0x1A025Cu: goto label_1a025c;
            case 0x1A0260u: goto label_1a0260;
            case 0x1A0264u: goto label_1a0264;
            case 0x1A0268u: goto label_1a0268;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A0270u: goto label_1a0270;
            case 0x1A0274u: goto label_1a0274;
            case 0x1A0278u: goto label_1a0278;
            case 0x1A027Cu: goto label_1a027c;
            case 0x1A0280u: goto label_1a0280;
            case 0x1A0284u: goto label_1a0284;
            case 0x1A0288u: goto label_1a0288;
            case 0x1A028Cu: goto label_1a028c;
            case 0x1A0290u: goto label_1a0290;
            case 0x1A0294u: goto label_1a0294;
            case 0x1A0298u: goto label_1a0298;
            case 0x1A029Cu: goto label_1a029c;
            case 0x1A02A0u: goto label_1a02a0;
            case 0x1A02A4u: goto label_1a02a4;
            case 0x1A02A8u: goto label_1a02a8;
            case 0x1A02ACu: goto label_1a02ac;
            case 0x1A02B0u: goto label_1a02b0;
            case 0x1A02B4u: goto label_1a02b4;
            case 0x1A02B8u: goto label_1a02b8;
            case 0x1A02BCu: goto label_1a02bc;
            case 0x1A02C0u: goto label_1a02c0;
            case 0x1A02C4u: goto label_1a02c4;
            case 0x1A02C8u: goto label_1a02c8;
            case 0x1A02CCu: goto label_1a02cc;
            case 0x1A02D0u: goto label_1a02d0;
            case 0x1A02D4u: goto label_1a02d4;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A02DCu: goto label_1a02dc;
            case 0x1A02E0u: goto label_1a02e0;
            case 0x1A02E4u: goto label_1a02e4;
            case 0x1A02E8u: goto label_1a02e8;
            case 0x1A02ECu: goto label_1a02ec;
            case 0x1A02F0u: goto label_1a02f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19FD8Cu; }
            if (ctx->pc != 0x19FD8Cu) { return; }
        }
    }
    ctx->pc = 0x19FD8Cu;
label_19fd8c:
    // 0x19fd8c: 0x10000154  b           . + 4 + (0x154 << 2)
label_19fd90:
    if (ctx->pc == 0x19FD90u) {
        ctx->pc = 0x19FD94u;
        goto label_19fd94;
    }
    ctx->pc = 0x19FD8Cu;
    {
        const bool branch_taken_0x19fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd8c) {
            ctx->pc = 0x1A02E0u;
            goto label_1a02e0;
        }
    }
    ctx->pc = 0x19FD94u;
label_19fd94:
    // 0x19fd94: 0x0  nop
    ctx->pc = 0x19fd94u;
    // NOP
label_19fd98:
    // 0x19fd98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19fd9c:
    // 0x19fd9c: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_19fda0:
    if (ctx->pc == 0x19FDA0u) {
        ctx->pc = 0x19FDA4u;
        goto label_19fda4;
    }
    ctx->pc = 0x19FD9Cu;
    {
        const bool branch_taken_0x19fd9c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19fd9c) {
            ctx->pc = 0x1A02C0u;
            goto label_1a02c0;
        }
    }
    ctx->pc = 0x19FDA4u;
label_19fda4:
    // 0x19fda4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x19fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19fda8:
    // 0x19fda8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19fdac:
    // 0x19fdac: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x19fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_19fdb0:
    // 0x19fdb0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x19fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_19fdb4:
    // 0x19fdb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19fdb8:
    // 0x19fdb8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x19fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_19fdbc:
    // 0x19fdbc: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x19fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_19fdc0:
    // 0x19fdc0: 0xc0604b0  jal         func_1812C0
label_19fdc4:
    if (ctx->pc == 0x19FDC4u) {
        ctx->pc = 0x19FDC4u;
            // 0x19fdc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19FDC8u;
        goto label_19fdc8;
    }
    ctx->pc = 0x19FDC0u;
    SET_GPR_U32(ctx, 31, 0x19FDC8u);
    ctx->pc = 0x19FDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDC0u;
            // 0x19fdc4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDC8u; }
        if (ctx->pc != 0x19FDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDC8u; }
        if (ctx->pc != 0x19FDC8u) { return; }
    }
    ctx->pc = 0x19FDC8u;
label_19fdc8:
    // 0x19fdc8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x19fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fdcc:
    // 0x19fdcc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x19fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_19fdd0:
    // 0x19fdd0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x19fdd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_19fdd4:
    // 0x19fdd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19fdd8:
    // 0x19fdd8: 0x0  nop
    ctx->pc = 0x19fdd8u;
    // NOP
label_19fddc:
    // 0x19fddc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19fddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19fde0:
    // 0x19fde0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x19fde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19fde4:
    // 0x19fde4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fde8:
    // 0x19fde8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19fde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_19fdec:
    // 0x19fdec: 0xc050ba4  jal         func_142E90
label_19fdf0:
    if (ctx->pc == 0x19FDF0u) {
        ctx->pc = 0x19FDF0u;
            // 0x19fdf0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x19FDF4u;
        goto label_19fdf4;
    }
    ctx->pc = 0x19FDECu;
    SET_GPR_U32(ctx, 31, 0x19FDF4u);
    ctx->pc = 0x19FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDECu;
            // 0x19fdf0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDF4u; }
        if (ctx->pc != 0x19FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDF4u; }
        if (ctx->pc != 0x19FDF4u) { return; }
    }
    ctx->pc = 0x19FDF4u;
label_19fdf4:
    // 0x19fdf4: 0xc040d72  jal         func_1035C8
label_19fdf8:
    if (ctx->pc == 0x19FDF8u) {
        ctx->pc = 0x19FDF8u;
            // 0x19fdf8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x19FDFCu;
        goto label_19fdfc;
    }
    ctx->pc = 0x19FDF4u;
    SET_GPR_U32(ctx, 31, 0x19FDFCu);
    ctx->pc = 0x19FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FDF4u;
            // 0x19fdf8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDFCu; }
        if (ctx->pc != 0x19FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FDFCu; }
        if (ctx->pc != 0x19FDFCu) { return; }
    }
    ctx->pc = 0x19FDFCu;
label_19fdfc:
    // 0x19fdfc: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x19fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_19fe00:
    // 0x19fe00: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19fe00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19fe04:
    // 0x19fe04: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19fe04u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19fe08:
    // 0x19fe08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19fe08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19fe0c:
    // 0x19fe0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19fe0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19fe10:
    // 0x19fe10: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19fe10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19fe14:
    // 0x19fe14: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19fe14u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19fe18:
    // 0x19fe18: 0xc040880  jal         func_102200
label_19fe1c:
    if (ctx->pc == 0x19FE1Cu) {
        ctx->pc = 0x19FE1Cu;
            // 0x19fe1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FE20u;
        goto label_19fe20;
    }
    ctx->pc = 0x19FE18u;
    SET_GPR_U32(ctx, 31, 0x19FE20u);
    ctx->pc = 0x19FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE18u;
            // 0x19fe1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE20u; }
        if (ctx->pc != 0x19FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE20u; }
        if (ctx->pc != 0x19FE20u) { return; }
    }
    ctx->pc = 0x19FE20u;
label_19fe20:
    // 0x19fe20: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x19fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_19fe24:
    // 0x19fe24: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19fe24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19fe28:
    // 0x19fe28: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19fe28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19fe2c:
    // 0x19fe2c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19fe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19fe30:
    // 0x19fe30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19fe30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19fe34:
    // 0x19fe34: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19fe34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19fe38:
    // 0x19fe38: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19fe38u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19fe3c:
    // 0x19fe3c: 0xc040866  jal         func_102198
label_19fe40:
    if (ctx->pc == 0x19FE40u) {
        ctx->pc = 0x19FE40u;
            // 0x19fe40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FE44u;
        goto label_19fe44;
    }
    ctx->pc = 0x19FE3Cu;
    SET_GPR_U32(ctx, 31, 0x19FE44u);
    ctx->pc = 0x19FE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE3Cu;
            // 0x19fe40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE44u; }
        if (ctx->pc != 0x19FE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE44u; }
        if (ctx->pc != 0x19FE44u) { return; }
    }
    ctx->pc = 0x19FE44u;
label_19fe44:
    // 0x19fe44: 0xc040a74  jal         func_1029D0
label_19fe48:
    if (ctx->pc == 0x19FE48u) {
        ctx->pc = 0x19FE48u;
            // 0x19fe48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FE4Cu;
        goto label_19fe4c;
    }
    ctx->pc = 0x19FE44u;
    SET_GPR_U32(ctx, 31, 0x19FE4Cu);
    ctx->pc = 0x19FE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE44u;
            // 0x19fe48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE4Cu; }
        if (ctx->pc != 0x19FE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE4Cu; }
        if (ctx->pc != 0x19FE4Cu) { return; }
    }
    ctx->pc = 0x19FE4Cu;
label_19fe4c:
    // 0x19fe4c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x19fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fe50:
    // 0x19fe50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19fe50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19fe54:
    // 0x19fe54: 0xc050ba4  jal         func_142E90
label_19fe58:
    if (ctx->pc == 0x19FE58u) {
        ctx->pc = 0x19FE58u;
            // 0x19fe58: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x19FE5Cu;
        goto label_19fe5c;
    }
    ctx->pc = 0x19FE54u;
    SET_GPR_U32(ctx, 31, 0x19FE5Cu);
    ctx->pc = 0x19FE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE54u;
            // 0x19fe58: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE5Cu; }
        if (ctx->pc != 0x19FE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE5Cu; }
        if (ctx->pc != 0x19FE5Cu) { return; }
    }
    ctx->pc = 0x19FE5Cu;
label_19fe5c:
    // 0x19fe5c: 0xc040d72  jal         func_1035C8
label_19fe60:
    if (ctx->pc == 0x19FE60u) {
        ctx->pc = 0x19FE60u;
            // 0x19fe60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x19FE64u;
        goto label_19fe64;
    }
    ctx->pc = 0x19FE5Cu;
    SET_GPR_U32(ctx, 31, 0x19FE64u);
    ctx->pc = 0x19FE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE5Cu;
            // 0x19fe60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE64u; }
        if (ctx->pc != 0x19FE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE64u; }
        if (ctx->pc != 0x19FE64u) { return; }
    }
    ctx->pc = 0x19FE64u;
label_19fe64:
    // 0x19fe64: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_19fe68:
    // 0x19fe68: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19fe68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19fe6c:
    // 0x19fe6c: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19fe6cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19fe70:
    // 0x19fe70: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19fe74:
    // 0x19fe74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19fe74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19fe78:
    // 0x19fe78: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19fe78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19fe7c:
    // 0x19fe7c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19fe7cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19fe80:
    // 0x19fe80: 0xc040880  jal         func_102200
label_19fe84:
    if (ctx->pc == 0x19FE84u) {
        ctx->pc = 0x19FE84u;
            // 0x19fe84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FE88u;
        goto label_19fe88;
    }
    ctx->pc = 0x19FE80u;
    SET_GPR_U32(ctx, 31, 0x19FE88u);
    ctx->pc = 0x19FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FE80u;
            // 0x19fe84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE88u; }
        if (ctx->pc != 0x19FE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FE88u; }
        if (ctx->pc != 0x19FE88u) { return; }
    }
    ctx->pc = 0x19FE88u;
label_19fe88:
    // 0x19fe88: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x19fe88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_19fe8c:
    // 0x19fe8c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x19fe8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_19fe90:
    // 0x19fe90: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x19fe90u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_19fe94:
    // 0x19fe94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19fe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_19fe98:
    // 0x19fe98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19fe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19fe9c:
    // 0x19fe9c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x19fe9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_19fea0:
    // 0x19fea0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19fea0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_19fea4:
    // 0x19fea4: 0xc040866  jal         func_102198
label_19fea8:
    if (ctx->pc == 0x19FEA8u) {
        ctx->pc = 0x19FEA8u;
            // 0x19fea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FEACu;
        goto label_19feac;
    }
    ctx->pc = 0x19FEA4u;
    SET_GPR_U32(ctx, 31, 0x19FEACu);
    ctx->pc = 0x19FEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEA4u;
            // 0x19fea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEACu; }
        if (ctx->pc != 0x19FEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEACu; }
        if (ctx->pc != 0x19FEACu) { return; }
    }
    ctx->pc = 0x19FEACu;
label_19feac:
    // 0x19feac: 0xc040a74  jal         func_1029D0
label_19feb0:
    if (ctx->pc == 0x19FEB0u) {
        ctx->pc = 0x19FEB0u;
            // 0x19feb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19FEB4u;
        goto label_19feb4;
    }
    ctx->pc = 0x19FEACu;
    SET_GPR_U32(ctx, 31, 0x19FEB4u);
    ctx->pc = 0x19FEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEACu;
            // 0x19feb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEB4u; }
        if (ctx->pc != 0x19FEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEB4u; }
        if (ctx->pc != 0x19FEB4u) { return; }
    }
    ctx->pc = 0x19FEB4u;
label_19feb4:
    // 0x19feb4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x19feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19feb8:
    // 0x19feb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19feb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19febc:
    // 0x19febc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x19febcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_19fec0:
    // 0x19fec0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_19fec4:
    // 0x19fec4: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x19fec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
label_19fec8:
    // 0x19fec8: 0x14200105  bnez        $at, . + 4 + (0x105 << 2)
label_19fecc:
    if (ctx->pc == 0x19FECCu) {
        ctx->pc = 0x19FED0u;
        goto label_19fed0;
    }
    ctx->pc = 0x19FEC8u;
    {
        const bool branch_taken_0x19fec8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fec8) {
            ctx->pc = 0x1A02E0u;
            goto label_1a02e0;
        }
    }
    ctx->pc = 0x19FED0u;
label_19fed0:
    // 0x19fed0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19fed4:
    // 0x19fed4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x19fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19fed8:
    // 0x19fed8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19fedc:
    // 0x19fedc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19fedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19fee0:
    // 0x19fee0: 0xc05d080  jal         func_174200
label_19fee4:
    if (ctx->pc == 0x19FEE4u) {
        ctx->pc = 0x19FEE4u;
            // 0x19fee4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19FEE8u;
        goto label_19fee8;
    }
    ctx->pc = 0x19FEE0u;
    SET_GPR_U32(ctx, 31, 0x19FEE8u);
    ctx->pc = 0x19FEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FEE0u;
            // 0x19fee4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEE8u; }
        if (ctx->pc != 0x19FEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEE8u; }
        if (ctx->pc != 0x19FEE8u) { return; }
    }
    ctx->pc = 0x19FEE8u;
label_19fee8:
    // 0x19fee8: 0xc050bb4  jal         func_142ED0
label_19feec:
    if (ctx->pc == 0x19FEECu) {
        ctx->pc = 0x19FEF0u;
        goto label_19fef0;
    }
    ctx->pc = 0x19FEE8u;
    SET_GPR_U32(ctx, 31, 0x19FEF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEF0u; }
        if (ctx->pc != 0x19FEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FEF0u; }
        if (ctx->pc != 0x19FEF0u) { return; }
    }
    ctx->pc = 0x19FEF0u;
label_19fef0:
    // 0x19fef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fef0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19fef4:
    // 0x19fef4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19fef8:
    if (ctx->pc == 0x19FEF8u) {
        ctx->pc = 0x19FEFCu;
        goto label_19fefc;
    }
    ctx->pc = 0x19FEF4u;
    {
        const bool branch_taken_0x19fef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fef4) {
            ctx->pc = 0x19FF18u;
            goto label_19ff18;
        }
    }
    ctx->pc = 0x19FEFCu;
label_19fefc:
    // 0x19fefc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ff00:
    // 0x19ff00: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_19ff04:
    // 0x19ff04: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ff08:
    // 0x19ff08: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19ff08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19ff0c:
    // 0x19ff0c: 0xc05d080  jal         func_174200
label_19ff10:
    if (ctx->pc == 0x19FF10u) {
        ctx->pc = 0x19FF10u;
            // 0x19ff10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19FF14u;
        goto label_19ff14;
    }
    ctx->pc = 0x19FF0Cu;
    SET_GPR_U32(ctx, 31, 0x19FF14u);
    ctx->pc = 0x19FF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF0Cu;
            // 0x19ff10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF14u; }
        if (ctx->pc != 0x19FF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF14u; }
        if (ctx->pc != 0x19FF14u) { return; }
    }
    ctx->pc = 0x19FF14u;
label_19ff14:
    // 0x19ff14: 0x0  nop
    ctx->pc = 0x19ff14u;
    // NOP
label_19ff18:
    // 0x19ff18: 0xc050bb4  jal         func_142ED0
label_19ff1c:
    if (ctx->pc == 0x19FF1Cu) {
        ctx->pc = 0x19FF20u;
        goto label_19ff20;
    }
    ctx->pc = 0x19FF18u;
    SET_GPR_U32(ctx, 31, 0x19FF20u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF20u; }
        if (ctx->pc != 0x19FF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF20u; }
        if (ctx->pc != 0x19FF20u) { return; }
    }
    ctx->pc = 0x19FF20u;
label_19ff20:
    // 0x19ff20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ff20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19ff24:
    // 0x19ff24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19ff28:
    if (ctx->pc == 0x19FF28u) {
        ctx->pc = 0x19FF2Cu;
        goto label_19ff2c;
    }
    ctx->pc = 0x19FF24u;
    {
        const bool branch_taken_0x19ff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ff24) {
            ctx->pc = 0x19FF48u;
            goto label_19ff48;
        }
    }
    ctx->pc = 0x19FF2Cu;
label_19ff2c:
    // 0x19ff2c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19ff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ff30:
    // 0x19ff30: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x19ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19ff34:
    // 0x19ff34: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19ff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19ff38:
    // 0x19ff38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19ff38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19ff3c:
    // 0x19ff3c: 0xc05d080  jal         func_174200
label_19ff40:
    if (ctx->pc == 0x19FF40u) {
        ctx->pc = 0x19FF40u;
            // 0x19ff40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19FF44u;
        goto label_19ff44;
    }
    ctx->pc = 0x19FF3Cu;
    SET_GPR_U32(ctx, 31, 0x19FF44u);
    ctx->pc = 0x19FF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF3Cu;
            // 0x19ff40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF44u; }
        if (ctx->pc != 0x19FF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF44u; }
        if (ctx->pc != 0x19FF44u) { return; }
    }
    ctx->pc = 0x19FF44u;
label_19ff44:
    // 0x19ff44: 0x0  nop
    ctx->pc = 0x19ff44u;
    // NOP
label_19ff48:
    // 0x19ff48: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19ff4c:
    // 0x19ff4c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19ff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19ff50:
    // 0x19ff50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ff50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ff54:
    // 0x19ff54: 0xc053740  jal         func_14DD00
label_19ff58:
    if (ctx->pc == 0x19FF58u) {
        ctx->pc = 0x19FF58u;
            // 0x19ff58: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x19FF5Cu;
        goto label_19ff5c;
    }
    ctx->pc = 0x19FF54u;
    SET_GPR_U32(ctx, 31, 0x19FF5Cu);
    ctx->pc = 0x19FF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF54u;
            // 0x19ff58: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF5Cu; }
        if (ctx->pc != 0x19FF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF5Cu; }
        if (ctx->pc != 0x19FF5Cu) { return; }
    }
    ctx->pc = 0x19FF5Cu;
label_19ff5c:
    // 0x19ff5c: 0xc050bb4  jal         func_142ED0
label_19ff60:
    if (ctx->pc == 0x19FF60u) {
        ctx->pc = 0x19FF64u;
        goto label_19ff64;
    }
    ctx->pc = 0x19FF5Cu;
    SET_GPR_U32(ctx, 31, 0x19FF64u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF64u; }
        if (ctx->pc != 0x19FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF64u; }
        if (ctx->pc != 0x19FF64u) { return; }
    }
    ctx->pc = 0x19FF64u;
label_19ff64:
    // 0x19ff64: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ff68:
    // 0x19ff68: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19ff6c:
    // 0x19ff6c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19ff6cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ff70:
    // 0x19ff70: 0x0  nop
    ctx->pc = 0x19ff70u;
    // NOP
label_19ff74:
    // 0x19ff74: 0x0  nop
    ctx->pc = 0x19ff74u;
    // NOP
label_19ff78:
    // 0x19ff78: 0x1010  mfhi        $v0
    ctx->pc = 0x19ff78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ff7c:
    // 0x19ff7c: 0xc050bb4  jal         func_142ED0
label_19ff80:
    if (ctx->pc == 0x19FF80u) {
        ctx->pc = 0x19FF80u;
            // 0x19ff80: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19FF84u;
        goto label_19ff84;
    }
    ctx->pc = 0x19FF7Cu;
    SET_GPR_U32(ctx, 31, 0x19FF84u);
    ctx->pc = 0x19FF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FF7Cu;
            // 0x19ff80: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF84u; }
        if (ctx->pc != 0x19FF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF84u; }
        if (ctx->pc != 0x19FF84u) { return; }
    }
    ctx->pc = 0x19FF84u;
label_19ff84:
    // 0x19ff84: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ff88:
    // 0x19ff88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ff8c:
    // 0x19ff8c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19ff8cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ff90:
    // 0x19ff90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ff90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ff94:
    // 0x19ff94: 0x0  nop
    ctx->pc = 0x19ff94u;
    // NOP
label_19ff98:
    // 0x19ff98: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19ff98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19ff9c:
    // 0x19ff9c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19ffa0:
    // 0x19ffa0: 0x1810  mfhi        $v1
    ctx->pc = 0x19ffa0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19ffa4:
    // 0x19ffa4: 0xc053740  jal         func_14DD00
label_19ffa8:
    if (ctx->pc == 0x19FFA8u) {
        ctx->pc = 0x19FFA8u;
            // 0x19ffa8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x19FFACu;
        goto label_19ffac;
    }
    ctx->pc = 0x19FFA4u;
    SET_GPR_U32(ctx, 31, 0x19FFACu);
    ctx->pc = 0x19FFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFA4u;
            // 0x19ffa8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFACu; }
        if (ctx->pc != 0x19FFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFACu; }
        if (ctx->pc != 0x19FFACu) { return; }
    }
    ctx->pc = 0x19FFACu;
label_19ffac:
    // 0x19ffac: 0xc050bb4  jal         func_142ED0
label_19ffb0:
    if (ctx->pc == 0x19FFB0u) {
        ctx->pc = 0x19FFB4u;
        goto label_19ffb4;
    }
    ctx->pc = 0x19FFACu;
    SET_GPR_U32(ctx, 31, 0x19FFB4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFB4u; }
        if (ctx->pc != 0x19FFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFB4u; }
        if (ctx->pc != 0x19FFB4u) { return; }
    }
    ctx->pc = 0x19FFB4u;
label_19ffb4:
    // 0x19ffb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x19ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ffb8:
    // 0x19ffb8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19ffbc:
    // 0x19ffbc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x19ffbcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ffc0:
    // 0x19ffc0: 0x0  nop
    ctx->pc = 0x19ffc0u;
    // NOP
label_19ffc4:
    // 0x19ffc4: 0x0  nop
    ctx->pc = 0x19ffc4u;
    // NOP
label_19ffc8:
    // 0x19ffc8: 0x1010  mfhi        $v0
    ctx->pc = 0x19ffc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_19ffcc:
    // 0x19ffcc: 0xc050bb4  jal         func_142ED0
label_19ffd0:
    if (ctx->pc == 0x19FFD0u) {
        ctx->pc = 0x19FFD0u;
            // 0x19ffd0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x19FFD4u;
        goto label_19ffd4;
    }
    ctx->pc = 0x19FFCCu;
    SET_GPR_U32(ctx, 31, 0x19FFD4u);
    ctx->pc = 0x19FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFCCu;
            // 0x19ffd0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFD4u; }
        if (ctx->pc != 0x19FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFD4u; }
        if (ctx->pc != 0x19FFD4u) { return; }
    }
    ctx->pc = 0x19FFD4u;
label_19ffd4:
    // 0x19ffd4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19ffd8:
    // 0x19ffd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ffdc:
    // 0x19ffdc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x19ffdcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_19ffe0:
    // 0x19ffe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ffe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ffe4:
    // 0x19ffe4: 0x0  nop
    ctx->pc = 0x19ffe4u;
    // NOP
label_19ffe8:
    // 0x19ffe8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x19ffe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_19ffec:
    // 0x19ffec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x19ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19fff0:
    // 0x19fff0: 0x1810  mfhi        $v1
    ctx->pc = 0x19fff0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_19fff4:
    // 0x19fff4: 0xc053740  jal         func_14DD00
label_19fff8:
    if (ctx->pc == 0x19FFF8u) {
        ctx->pc = 0x19FFF8u;
            // 0x19fff8: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x19FFFCu;
        goto label_19fffc;
    }
    ctx->pc = 0x19FFF4u;
    SET_GPR_U32(ctx, 31, 0x19FFFCu);
    ctx->pc = 0x19FFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFF4u;
            // 0x19fff8: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFFCu; }
        if (ctx->pc != 0x19FFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFFCu; }
        if (ctx->pc != 0x19FFFCu) { return; }
    }
    ctx->pc = 0x19FFFCu;
label_19fffc:
    // 0x19fffc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0000:
    // 0x1a0000: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a0000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0004:
    // 0x1a0004: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a0004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a0008:
    // 0x1a0008: 0xc053740  jal         func_14DD00
label_1a000c:
    if (ctx->pc == 0x1A000Cu) {
        ctx->pc = 0x1A000Cu;
            // 0x1a000c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A0010u;
        goto label_1a0010;
    }
    ctx->pc = 0x1A0008u;
    SET_GPR_U32(ctx, 31, 0x1A0010u);
    ctx->pc = 0x1A000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0008u;
            // 0x1a000c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0010u; }
        if (ctx->pc != 0x1A0010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0010u; }
        if (ctx->pc != 0x1A0010u) { return; }
    }
    ctx->pc = 0x1A0010u;
label_1a0010:
    // 0x1a0010: 0xc050bb4  jal         func_142ED0
label_1a0014:
    if (ctx->pc == 0x1A0014u) {
        ctx->pc = 0x1A0018u;
        goto label_1a0018;
    }
    ctx->pc = 0x1A0010u;
    SET_GPR_U32(ctx, 31, 0x1A0018u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0018u; }
        if (ctx->pc != 0x1A0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0018u; }
        if (ctx->pc != 0x1A0018u) { return; }
    }
    ctx->pc = 0x1A0018u;
label_1a0018:
    // 0x1a0018: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a0018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a001c:
    // 0x1a001c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0020:
    // 0x1a0020: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0020u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0024:
    // 0x1a0024: 0x0  nop
    ctx->pc = 0x1a0024u;
    // NOP
label_1a0028:
    // 0x1a0028: 0x0  nop
    ctx->pc = 0x1a0028u;
    // NOP
label_1a002c:
    // 0x1a002c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a002cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0030:
    // 0x1a0030: 0xc050bb4  jal         func_142ED0
label_1a0034:
    if (ctx->pc == 0x1A0034u) {
        ctx->pc = 0x1A0034u;
            // 0x1a0034: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0038u;
        goto label_1a0038;
    }
    ctx->pc = 0x1A0030u;
    SET_GPR_U32(ctx, 31, 0x1A0038u);
    ctx->pc = 0x1A0034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0030u;
            // 0x1a0034: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0038u; }
        if (ctx->pc != 0x1A0038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0038u; }
        if (ctx->pc != 0x1A0038u) { return; }
    }
    ctx->pc = 0x1A0038u;
label_1a0038:
    // 0x1a0038: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a0038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a003c:
    // 0x1a003c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0040:
    // 0x1a0040: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a0040u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0044:
    // 0x1a0044: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a0048:
    // 0x1a0048: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a004c:
    // 0x1a004c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a004cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0050:
    // 0x1a0050: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0050u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0054:
    // 0x1a0054: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a0054u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a0058:
    // 0x1a0058: 0xc053740  jal         func_14DD00
label_1a005c:
    if (ctx->pc == 0x1A005Cu) {
        ctx->pc = 0x1A005Cu;
            // 0x1a005c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0060u;
        goto label_1a0060;
    }
    ctx->pc = 0x1A0058u;
    SET_GPR_U32(ctx, 31, 0x1A0060u);
    ctx->pc = 0x1A005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0058u;
            // 0x1a005c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0060u; }
        if (ctx->pc != 0x1A0060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0060u; }
        if (ctx->pc != 0x1A0060u) { return; }
    }
    ctx->pc = 0x1A0060u;
label_1a0060:
    // 0x1a0060: 0xc050bb4  jal         func_142ED0
label_1a0064:
    if (ctx->pc == 0x1A0064u) {
        ctx->pc = 0x1A0068u;
        goto label_1a0068;
    }
    ctx->pc = 0x1A0060u;
    SET_GPR_U32(ctx, 31, 0x1A0068u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0068u; }
        if (ctx->pc != 0x1A0068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0068u; }
        if (ctx->pc != 0x1A0068u) { return; }
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a006c:
    // 0x1a006c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0070:
    // 0x1a0070: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0070u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0074:
    // 0x1a0074: 0x0  nop
    ctx->pc = 0x1a0074u;
    // NOP
label_1a0078:
    // 0x1a0078: 0x0  nop
    ctx->pc = 0x1a0078u;
    // NOP
label_1a007c:
    // 0x1a007c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a007cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0080:
    // 0x1a0080: 0xc050bb4  jal         func_142ED0
label_1a0084:
    if (ctx->pc == 0x1A0084u) {
        ctx->pc = 0x1A0084u;
            // 0x1a0084: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0088u;
        goto label_1a0088;
    }
    ctx->pc = 0x1A0080u;
    SET_GPR_U32(ctx, 31, 0x1A0088u);
    ctx->pc = 0x1A0084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0080u;
            // 0x1a0084: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0088u; }
        if (ctx->pc != 0x1A0088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0088u; }
        if (ctx->pc != 0x1A0088u) { return; }
    }
    ctx->pc = 0x1A0088u;
label_1a0088:
    // 0x1a0088: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a0088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a008c:
    // 0x1a008c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0090:
    // 0x1a0090: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a0090u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0094:
    // 0x1a0094: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a0094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a0098:
    // 0x1a0098: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a0098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a009c:
    // 0x1a009c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a009cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a00a0:
    // 0x1a00a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a00a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a00a4:
    // 0x1a00a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a00a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a00a8:
    // 0x1a00a8: 0xc053740  jal         func_14DD00
label_1a00ac:
    if (ctx->pc == 0x1A00ACu) {
        ctx->pc = 0x1A00ACu;
            // 0x1a00ac: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A00B0u;
        goto label_1a00b0;
    }
    ctx->pc = 0x1A00A8u;
    SET_GPR_U32(ctx, 31, 0x1A00B0u);
    ctx->pc = 0x1A00ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00A8u;
            // 0x1a00ac: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00B0u; }
        if (ctx->pc != 0x1A00B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00B0u; }
        if (ctx->pc != 0x1A00B0u) { return; }
    }
    ctx->pc = 0x1A00B0u;
label_1a00b0:
    // 0x1a00b0: 0xc050bb4  jal         func_142ED0
label_1a00b4:
    if (ctx->pc == 0x1A00B4u) {
        ctx->pc = 0x1A00B8u;
        goto label_1a00b8;
    }
    ctx->pc = 0x1A00B0u;
    SET_GPR_U32(ctx, 31, 0x1A00B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00B8u; }
        if (ctx->pc != 0x1A00B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00B8u; }
        if (ctx->pc != 0x1A00B8u) { return; }
    }
    ctx->pc = 0x1A00B8u;
label_1a00b8:
    // 0x1a00b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a00b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a00bc:
    // 0x1a00bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a00c0:
    // 0x1a00c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a00c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a00c4:
    // 0x1a00c4: 0x0  nop
    ctx->pc = 0x1a00c4u;
    // NOP
label_1a00c8:
    // 0x1a00c8: 0x0  nop
    ctx->pc = 0x1a00c8u;
    // NOP
label_1a00cc:
    // 0x1a00cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a00ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a00d0:
    // 0x1a00d0: 0xc050bb4  jal         func_142ED0
label_1a00d4:
    if (ctx->pc == 0x1A00D4u) {
        ctx->pc = 0x1A00D4u;
            // 0x1a00d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A00D8u;
        goto label_1a00d8;
    }
    ctx->pc = 0x1A00D0u;
    SET_GPR_U32(ctx, 31, 0x1A00D8u);
    ctx->pc = 0x1A00D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00D0u;
            // 0x1a00d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00D8u; }
        if (ctx->pc != 0x1A00D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A00D8u; }
        if (ctx->pc != 0x1A00D8u) { return; }
    }
    ctx->pc = 0x1A00D8u;
label_1a00d8:
    // 0x1a00d8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a00d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a00dc:
    // 0x1a00dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a00dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a00e0:
    // 0x1a00e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a00e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a00e4:
    // 0x1a00e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a00e8:
    // 0x1a00e8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a00ec:
    // 0x1a00ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a00ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a00f0:
    // 0x1a00f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a00f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a00f4:
    // 0x1a00f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a00f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a00f8:
    // 0x1a00f8: 0xc053740  jal         func_14DD00
label_1a00fc:
    if (ctx->pc == 0x1A00FCu) {
        ctx->pc = 0x1A00FCu;
            // 0x1a00fc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0100u;
        goto label_1a0100;
    }
    ctx->pc = 0x1A00F8u;
    SET_GPR_U32(ctx, 31, 0x1A0100u);
    ctx->pc = 0x1A00FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A00F8u;
            // 0x1a00fc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0100u; }
        if (ctx->pc != 0x1A0100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0100u; }
        if (ctx->pc != 0x1A0100u) { return; }
    }
    ctx->pc = 0x1A0100u;
label_1a0100:
    // 0x1a0100: 0xc050bb4  jal         func_142ED0
label_1a0104:
    if (ctx->pc == 0x1A0104u) {
        ctx->pc = 0x1A0108u;
        goto label_1a0108;
    }
    ctx->pc = 0x1A0100u;
    SET_GPR_U32(ctx, 31, 0x1A0108u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0108u; }
        if (ctx->pc != 0x1A0108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0108u; }
        if (ctx->pc != 0x1A0108u) { return; }
    }
    ctx->pc = 0x1A0108u;
label_1a0108:
    // 0x1a0108: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a0108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a010c:
    // 0x1a010c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0110:
    // 0x1a0110: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0110u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0114:
    // 0x1a0114: 0x0  nop
    ctx->pc = 0x1a0114u;
    // NOP
label_1a0118:
    // 0x1a0118: 0x0  nop
    ctx->pc = 0x1a0118u;
    // NOP
label_1a011c:
    // 0x1a011c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a011cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0120:
    // 0x1a0120: 0xc050bb4  jal         func_142ED0
label_1a0124:
    if (ctx->pc == 0x1A0124u) {
        ctx->pc = 0x1A0124u;
            // 0x1a0124: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0128u;
        goto label_1a0128;
    }
    ctx->pc = 0x1A0120u;
    SET_GPR_U32(ctx, 31, 0x1A0128u);
    ctx->pc = 0x1A0124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0120u;
            // 0x1a0124: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0128u; }
        if (ctx->pc != 0x1A0128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0128u; }
        if (ctx->pc != 0x1A0128u) { return; }
    }
    ctx->pc = 0x1A0128u;
label_1a0128:
    // 0x1a0128: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a0128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a012c:
    // 0x1a012c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a012cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a0130:
    // 0x1a0130: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a0130u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0134:
    // 0x1a0134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0138:
    // 0x1a0138: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a0138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a013c:
    // 0x1a013c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a013cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1a0140:
    // 0x1a0140: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a0140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a0144:
    // 0x1a0144: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a0144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0148:
    // 0x1a0148: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0148u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a014c:
    // 0x1a014c: 0xc053740  jal         func_14DD00
label_1a0150:
    if (ctx->pc == 0x1A0150u) {
        ctx->pc = 0x1A0150u;
            // 0x1a0150: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0154u;
        goto label_1a0154;
    }
    ctx->pc = 0x1A014Cu;
    SET_GPR_U32(ctx, 31, 0x1A0154u);
    ctx->pc = 0x1A0150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A014Cu;
            // 0x1a0150: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0154u; }
        if (ctx->pc != 0x1A0154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0154u; }
        if (ctx->pc != 0x1A0154u) { return; }
    }
    ctx->pc = 0x1A0154u;
label_1a0154:
    // 0x1a0154: 0xc050bb4  jal         func_142ED0
label_1a0158:
    if (ctx->pc == 0x1A0158u) {
        ctx->pc = 0x1A015Cu;
        goto label_1a015c;
    }
    ctx->pc = 0x1A0154u;
    SET_GPR_U32(ctx, 31, 0x1A015Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A015Cu; }
        if (ctx->pc != 0x1A015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A015Cu; }
        if (ctx->pc != 0x1A015Cu) { return; }
    }
    ctx->pc = 0x1A015Cu;
label_1a015c:
    // 0x1a015c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a0160:
    // 0x1a0160: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0164:
    // 0x1a0164: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0164u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0168:
    // 0x1a0168: 0x0  nop
    ctx->pc = 0x1a0168u;
    // NOP
label_1a016c:
    // 0x1a016c: 0x0  nop
    ctx->pc = 0x1a016cu;
    // NOP
label_1a0170:
    // 0x1a0170: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0170u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0174:
    // 0x1a0174: 0xc050bb4  jal         func_142ED0
label_1a0178:
    if (ctx->pc == 0x1A0178u) {
        ctx->pc = 0x1A0178u;
            // 0x1a0178: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A017Cu;
        goto label_1a017c;
    }
    ctx->pc = 0x1A0174u;
    SET_GPR_U32(ctx, 31, 0x1A017Cu);
    ctx->pc = 0x1A0178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0174u;
            // 0x1a0178: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A017Cu; }
        if (ctx->pc != 0x1A017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A017Cu; }
        if (ctx->pc != 0x1A017Cu) { return; }
    }
    ctx->pc = 0x1A017Cu;
label_1a017c:
    // 0x1a017c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a0180:
    // 0x1a0180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0184:
    // 0x1a0184: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a0184u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a0188:
    // 0x1a0188: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a0188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a018c:
    // 0x1a018c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a0190:
    // 0x1a0190: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0194:
    // 0x1a0194: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0194u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0198:
    // 0x1a0198: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a0198u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a019c:
    // 0x1a019c: 0xc053740  jal         func_14DD00
label_1a01a0:
    if (ctx->pc == 0x1A01A0u) {
        ctx->pc = 0x1A01A0u;
            // 0x1a01a0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A01A4u;
        goto label_1a01a4;
    }
    ctx->pc = 0x1A019Cu;
    SET_GPR_U32(ctx, 31, 0x1A01A4u);
    ctx->pc = 0x1A01A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A019Cu;
            // 0x1a01a0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01A4u; }
        if (ctx->pc != 0x1A01A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01A4u; }
        if (ctx->pc != 0x1A01A4u) { return; }
    }
    ctx->pc = 0x1A01A4u;
label_1a01a4:
    // 0x1a01a4: 0xc050bb4  jal         func_142ED0
label_1a01a8:
    if (ctx->pc == 0x1A01A8u) {
        ctx->pc = 0x1A01ACu;
        goto label_1a01ac;
    }
    ctx->pc = 0x1A01A4u;
    SET_GPR_U32(ctx, 31, 0x1A01ACu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01ACu; }
        if (ctx->pc != 0x1A01ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01ACu; }
        if (ctx->pc != 0x1A01ACu) { return; }
    }
    ctx->pc = 0x1A01ACu;
label_1a01ac:
    // 0x1a01ac: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a01acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a01b0:
    // 0x1a01b0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a01b4:
    // 0x1a01b4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a01b4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a01b8:
    // 0x1a01b8: 0x0  nop
    ctx->pc = 0x1a01b8u;
    // NOP
label_1a01bc:
    // 0x1a01bc: 0x0  nop
    ctx->pc = 0x1a01bcu;
    // NOP
label_1a01c0:
    // 0x1a01c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a01c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a01c4:
    // 0x1a01c4: 0xc050bb4  jal         func_142ED0
label_1a01c8:
    if (ctx->pc == 0x1A01C8u) {
        ctx->pc = 0x1A01C8u;
            // 0x1a01c8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A01CCu;
        goto label_1a01cc;
    }
    ctx->pc = 0x1A01C4u;
    SET_GPR_U32(ctx, 31, 0x1A01CCu);
    ctx->pc = 0x1A01C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01C4u;
            // 0x1a01c8: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01CCu; }
        if (ctx->pc != 0x1A01CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01CCu; }
        if (ctx->pc != 0x1A01CCu) { return; }
    }
    ctx->pc = 0x1A01CCu;
label_1a01cc:
    // 0x1a01cc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a01d0:
    // 0x1a01d0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a01d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a01d4:
    // 0x1a01d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a01d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a01d8:
    // 0x1a01d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a01d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a01dc:
    // 0x1a01dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1a01e0:
    // 0x1a01e0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1a01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1a01e4:
    // 0x1a01e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a01e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a01e8:
    // 0x1a01e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a01e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a01ec:
    // 0x1a01ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1a01ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a01f0:
    // 0x1a01f0: 0xc053740  jal         func_14DD00
label_1a01f4:
    if (ctx->pc == 0x1A01F4u) {
        ctx->pc = 0x1A01F4u;
            // 0x1a01f4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A01F8u;
        goto label_1a01f8;
    }
    ctx->pc = 0x1A01F0u;
    SET_GPR_U32(ctx, 31, 0x1A01F8u);
    ctx->pc = 0x1A01F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A01F0u;
            // 0x1a01f4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01F8u; }
        if (ctx->pc != 0x1A01F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A01F8u; }
        if (ctx->pc != 0x1A01F8u) { return; }
    }
    ctx->pc = 0x1A01F8u;
label_1a01f8:
    // 0x1a01f8: 0xc050bb4  jal         func_142ED0
label_1a01fc:
    if (ctx->pc == 0x1A01FCu) {
        ctx->pc = 0x1A0200u;
        goto label_1a0200;
    }
    ctx->pc = 0x1A01F8u;
    SET_GPR_U32(ctx, 31, 0x1A0200u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0200u; }
        if (ctx->pc != 0x1A0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0200u; }
        if (ctx->pc != 0x1A0200u) { return; }
    }
    ctx->pc = 0x1A0200u;
label_1a0200:
    // 0x1a0200: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a0200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a0204:
    // 0x1a0204: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a0204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0208:
    // 0x1a0208: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0208u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a020c:
    // 0x1a020c: 0x0  nop
    ctx->pc = 0x1a020cu;
    // NOP
label_1a0210:
    // 0x1a0210: 0x0  nop
    ctx->pc = 0x1a0210u;
    // NOP
label_1a0214:
    // 0x1a0214: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0214u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0218:
    // 0x1a0218: 0xc050bb4  jal         func_142ED0
label_1a021c:
    if (ctx->pc == 0x1A021Cu) {
        ctx->pc = 0x1A021Cu;
            // 0x1a021c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0220u;
        goto label_1a0220;
    }
    ctx->pc = 0x1A0218u;
    SET_GPR_U32(ctx, 31, 0x1A0220u);
    ctx->pc = 0x1A021Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0218u;
            // 0x1a021c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0220u; }
        if (ctx->pc != 0x1A0220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0220u; }
        if (ctx->pc != 0x1A0220u) { return; }
    }
    ctx->pc = 0x1A0220u;
label_1a0220:
    // 0x1a0220: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a0224:
    // 0x1a0224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0228:
    // 0x1a0228: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a0228u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a022c:
    // 0x1a022c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a0230:
    // 0x1a0230: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a0230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a0234:
    // 0x1a0234: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0238:
    // 0x1a0238: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0238u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a023c:
    // 0x1a023c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a023cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a0240:
    // 0x1a0240: 0xc053740  jal         func_14DD00
label_1a0244:
    if (ctx->pc == 0x1A0244u) {
        ctx->pc = 0x1A0244u;
            // 0x1a0244: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0248u;
        goto label_1a0248;
    }
    ctx->pc = 0x1A0240u;
    SET_GPR_U32(ctx, 31, 0x1A0248u);
    ctx->pc = 0x1A0244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0240u;
            // 0x1a0244: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0248u; }
        if (ctx->pc != 0x1A0248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0248u; }
        if (ctx->pc != 0x1A0248u) { return; }
    }
    ctx->pc = 0x1A0248u;
label_1a0248:
    // 0x1a0248: 0xc050bb4  jal         func_142ED0
label_1a024c:
    if (ctx->pc == 0x1A024Cu) {
        ctx->pc = 0x1A0250u;
        goto label_1a0250;
    }
    ctx->pc = 0x1A0248u;
    SET_GPR_U32(ctx, 31, 0x1A0250u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0250u; }
        if (ctx->pc != 0x1A0250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0250u; }
        if (ctx->pc != 0x1A0250u) { return; }
    }
    ctx->pc = 0x1A0250u;
label_1a0250:
    // 0x1a0250: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a0254:
    // 0x1a0254: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a0254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a0258:
    // 0x1a0258: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a0258u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a025c:
    // 0x1a025c: 0x0  nop
    ctx->pc = 0x1a025cu;
    // NOP
label_1a0260:
    // 0x1a0260: 0x0  nop
    ctx->pc = 0x1a0260u;
    // NOP
label_1a0264:
    // 0x1a0264: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0264u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a0268:
    // 0x1a0268: 0xc050bb4  jal         func_142ED0
label_1a026c:
    if (ctx->pc == 0x1A026Cu) {
        ctx->pc = 0x1A026Cu;
            // 0x1a026c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0270u;
        goto label_1a0270;
    }
    ctx->pc = 0x1A0268u;
    SET_GPR_U32(ctx, 31, 0x1A0270u);
    ctx->pc = 0x1A026Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0268u;
            // 0x1a026c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0270u; }
        if (ctx->pc != 0x1A0270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0270u; }
        if (ctx->pc != 0x1A0270u) { return; }
    }
    ctx->pc = 0x1A0270u;
label_1a0270:
    // 0x1a0270: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a0270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a0274:
    // 0x1a0274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0278:
    // 0x1a0278: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a0278u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a027c:
    // 0x1a027c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a0280:
    // 0x1a0280: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a0280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a0284:
    // 0x1a0284: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a0288:
    // 0x1a0288: 0x1010  mfhi        $v0
    ctx->pc = 0x1a0288u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a028c:
    // 0x1a028c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a028cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a0290:
    // 0x1a0290: 0xc053740  jal         func_14DD00
label_1a0294:
    if (ctx->pc == 0x1A0294u) {
        ctx->pc = 0x1A0294u;
            // 0x1a0294: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A0298u;
        goto label_1a0298;
    }
    ctx->pc = 0x1A0290u;
    SET_GPR_U32(ctx, 31, 0x1A0298u);
    ctx->pc = 0x1A0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0290u;
            // 0x1a0294: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0298u; }
        if (ctx->pc != 0x1A0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0298u; }
        if (ctx->pc != 0x1A0298u) { return; }
    }
    ctx->pc = 0x1A0298u;
label_1a0298:
    // 0x1a0298: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a0298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a029c:
    // 0x1a029c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1a029cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a02a0:
    // 0x1a02a0: 0xc07b0ac  jal         func_1EC2B0
label_1a02a4:
    if (ctx->pc == 0x1A02A4u) {
        ctx->pc = 0x1A02A4u;
            // 0x1a02a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1A02A8u;
        goto label_1a02a8;
    }
    ctx->pc = 0x1A02A0u;
    SET_GPR_U32(ctx, 31, 0x1A02A8u);
    ctx->pc = 0x1A02A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02A0u;
            // 0x1a02a4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02A8u; }
        if (ctx->pc != 0x1A02A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02A8u; }
        if (ctx->pc != 0x1A02A8u) { return; }
    }
    ctx->pc = 0x1A02A8u;
label_1a02a8:
    // 0x1a02a8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a02ac:
    // 0x1a02ac: 0x40f809  jalr        $v0
label_1a02b0:
    if (ctx->pc == 0x1A02B0u) {
        ctx->pc = 0x1A02B0u;
            // 0x1a02b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A02B4u;
        goto label_1a02b4;
    }
    ctx->pc = 0x1A02ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A02B4u);
        ctx->pc = 0x1A02B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02ACu;
            // 0x1a02b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F420u: goto label_19f420;
            case 0x19F424u: goto label_19f424;
            case 0x19F428u: goto label_19f428;
            case 0x19F42Cu: goto label_19f42c;
            case 0x19F430u: goto label_19f430;
            case 0x19F434u: goto label_19f434;
            case 0x19F438u: goto label_19f438;
            case 0x19F43Cu: goto label_19f43c;
            case 0x19F440u: goto label_19f440;
            case 0x19F444u: goto label_19f444;
            case 0x19F448u: goto label_19f448;
            case 0x19F44Cu: goto label_19f44c;
            case 0x19F450u: goto label_19f450;
            case 0x19F454u: goto label_19f454;
            case 0x19F458u: goto label_19f458;
            case 0x19F45Cu: goto label_19f45c;
            case 0x19F460u: goto label_19f460;
            case 0x19F464u: goto label_19f464;
            case 0x19F468u: goto label_19f468;
            case 0x19F46Cu: goto label_19f46c;
            case 0x19F470u: goto label_19f470;
            case 0x19F474u: goto label_19f474;
            case 0x19F478u: goto label_19f478;
            case 0x19F47Cu: goto label_19f47c;
            case 0x19F480u: goto label_19f480;
            case 0x19F484u: goto label_19f484;
            case 0x19F488u: goto label_19f488;
            case 0x19F48Cu: goto label_19f48c;
            case 0x19F490u: goto label_19f490;
            case 0x19F494u: goto label_19f494;
            case 0x19F498u: goto label_19f498;
            case 0x19F49Cu: goto label_19f49c;
            case 0x19F4A0u: goto label_19f4a0;
            case 0x19F4A4u: goto label_19f4a4;
            case 0x19F4A8u: goto label_19f4a8;
            case 0x19F4ACu: goto label_19f4ac;
            case 0x19F4B0u: goto label_19f4b0;
            case 0x19F4B4u: goto label_19f4b4;
            case 0x19F4B8u: goto label_19f4b8;
            case 0x19F4BCu: goto label_19f4bc;
            case 0x19F4C0u: goto label_19f4c0;
            case 0x19F4C4u: goto label_19f4c4;
            case 0x19F4C8u: goto label_19f4c8;
            case 0x19F4CCu: goto label_19f4cc;
            case 0x19F4D0u: goto label_19f4d0;
            case 0x19F4D4u: goto label_19f4d4;
            case 0x19F4D8u: goto label_19f4d8;
            case 0x19F4DCu: goto label_19f4dc;
            case 0x19F4E0u: goto label_19f4e0;
            case 0x19F4E4u: goto label_19f4e4;
            case 0x19F4E8u: goto label_19f4e8;
            case 0x19F4ECu: goto label_19f4ec;
            case 0x19F4F0u: goto label_19f4f0;
            case 0x19F4F4u: goto label_19f4f4;
            case 0x19F4F8u: goto label_19f4f8;
            case 0x19F4FCu: goto label_19f4fc;
            case 0x19F500u: goto label_19f500;
            case 0x19F504u: goto label_19f504;
            case 0x19F508u: goto label_19f508;
            case 0x19F50Cu: goto label_19f50c;
            case 0x19F510u: goto label_19f510;
            case 0x19F514u: goto label_19f514;
            case 0x19F518u: goto label_19f518;
            case 0x19F51Cu: goto label_19f51c;
            case 0x19F520u: goto label_19f520;
            case 0x19F524u: goto label_19f524;
            case 0x19F528u: goto label_19f528;
            case 0x19F52Cu: goto label_19f52c;
            case 0x19F530u: goto label_19f530;
            case 0x19F534u: goto label_19f534;
            case 0x19F538u: goto label_19f538;
            case 0x19F53Cu: goto label_19f53c;
            case 0x19F540u: goto label_19f540;
            case 0x19F544u: goto label_19f544;
            case 0x19F548u: goto label_19f548;
            case 0x19F54Cu: goto label_19f54c;
            case 0x19F550u: goto label_19f550;
            case 0x19F554u: goto label_19f554;
            case 0x19F558u: goto label_19f558;
            case 0x19F55Cu: goto label_19f55c;
            case 0x19F560u: goto label_19f560;
            case 0x19F564u: goto label_19f564;
            case 0x19F568u: goto label_19f568;
            case 0x19F56Cu: goto label_19f56c;
            case 0x19F570u: goto label_19f570;
            case 0x19F574u: goto label_19f574;
            case 0x19F578u: goto label_19f578;
            case 0x19F57Cu: goto label_19f57c;
            case 0x19F580u: goto label_19f580;
            case 0x19F584u: goto label_19f584;
            case 0x19F588u: goto label_19f588;
            case 0x19F58Cu: goto label_19f58c;
            case 0x19F590u: goto label_19f590;
            case 0x19F594u: goto label_19f594;
            case 0x19F598u: goto label_19f598;
            case 0x19F59Cu: goto label_19f59c;
            case 0x19F5A0u: goto label_19f5a0;
            case 0x19F5A4u: goto label_19f5a4;
            case 0x19F5A8u: goto label_19f5a8;
            case 0x19F5ACu: goto label_19f5ac;
            case 0x19F5B0u: goto label_19f5b0;
            case 0x19F5B4u: goto label_19f5b4;
            case 0x19F5B8u: goto label_19f5b8;
            case 0x19F5BCu: goto label_19f5bc;
            case 0x19F5C0u: goto label_19f5c0;
            case 0x19F5C4u: goto label_19f5c4;
            case 0x19F5C8u: goto label_19f5c8;
            case 0x19F5CCu: goto label_19f5cc;
            case 0x19F5D0u: goto label_19f5d0;
            case 0x19F5D4u: goto label_19f5d4;
            case 0x19F5D8u: goto label_19f5d8;
            case 0x19F5DCu: goto label_19f5dc;
            case 0x19F5E0u: goto label_19f5e0;
            case 0x19F5E4u: goto label_19f5e4;
            case 0x19F5E8u: goto label_19f5e8;
            case 0x19F5ECu: goto label_19f5ec;
            case 0x19F5F0u: goto label_19f5f0;
            case 0x19F5F4u: goto label_19f5f4;
            case 0x19F5F8u: goto label_19f5f8;
            case 0x19F5FCu: goto label_19f5fc;
            case 0x19F600u: goto label_19f600;
            case 0x19F604u: goto label_19f604;
            case 0x19F608u: goto label_19f608;
            case 0x19F60Cu: goto label_19f60c;
            case 0x19F610u: goto label_19f610;
            case 0x19F614u: goto label_19f614;
            case 0x19F618u: goto label_19f618;
            case 0x19F61Cu: goto label_19f61c;
            case 0x19F620u: goto label_19f620;
            case 0x19F624u: goto label_19f624;
            case 0x19F628u: goto label_19f628;
            case 0x19F62Cu: goto label_19f62c;
            case 0x19F630u: goto label_19f630;
            case 0x19F634u: goto label_19f634;
            case 0x19F638u: goto label_19f638;
            case 0x19F63Cu: goto label_19f63c;
            case 0x19F640u: goto label_19f640;
            case 0x19F644u: goto label_19f644;
            case 0x19F648u: goto label_19f648;
            case 0x19F64Cu: goto label_19f64c;
            case 0x19F650u: goto label_19f650;
            case 0x19F654u: goto label_19f654;
            case 0x19F658u: goto label_19f658;
            case 0x19F65Cu: goto label_19f65c;
            case 0x19F660u: goto label_19f660;
            case 0x19F664u: goto label_19f664;
            case 0x19F668u: goto label_19f668;
            case 0x19F66Cu: goto label_19f66c;
            case 0x19F670u: goto label_19f670;
            case 0x19F674u: goto label_19f674;
            case 0x19F678u: goto label_19f678;
            case 0x19F67Cu: goto label_19f67c;
            case 0x19F680u: goto label_19f680;
            case 0x19F684u: goto label_19f684;
            case 0x19F688u: goto label_19f688;
            case 0x19F68Cu: goto label_19f68c;
            case 0x19F690u: goto label_19f690;
            case 0x19F694u: goto label_19f694;
            case 0x19F698u: goto label_19f698;
            case 0x19F69Cu: goto label_19f69c;
            case 0x19F6A0u: goto label_19f6a0;
            case 0x19F6A4u: goto label_19f6a4;
            case 0x19F6A8u: goto label_19f6a8;
            case 0x19F6ACu: goto label_19f6ac;
            case 0x19F6B0u: goto label_19f6b0;
            case 0x19F6B4u: goto label_19f6b4;
            case 0x19F6B8u: goto label_19f6b8;
            case 0x19F6BCu: goto label_19f6bc;
            case 0x19F6C0u: goto label_19f6c0;
            case 0x19F6C4u: goto label_19f6c4;
            case 0x19F6C8u: goto label_19f6c8;
            case 0x19F6CCu: goto label_19f6cc;
            case 0x19F6D0u: goto label_19f6d0;
            case 0x19F6D4u: goto label_19f6d4;
            case 0x19F6D8u: goto label_19f6d8;
            case 0x19F6DCu: goto label_19f6dc;
            case 0x19F6E0u: goto label_19f6e0;
            case 0x19F6E4u: goto label_19f6e4;
            case 0x19F6E8u: goto label_19f6e8;
            case 0x19F6ECu: goto label_19f6ec;
            case 0x19F6F0u: goto label_19f6f0;
            case 0x19F6F4u: goto label_19f6f4;
            case 0x19F6F8u: goto label_19f6f8;
            case 0x19F6FCu: goto label_19f6fc;
            case 0x19F700u: goto label_19f700;
            case 0x19F704u: goto label_19f704;
            case 0x19F708u: goto label_19f708;
            case 0x19F70Cu: goto label_19f70c;
            case 0x19F710u: goto label_19f710;
            case 0x19F714u: goto label_19f714;
            case 0x19F718u: goto label_19f718;
            case 0x19F71Cu: goto label_19f71c;
            case 0x19F720u: goto label_19f720;
            case 0x19F724u: goto label_19f724;
            case 0x19F728u: goto label_19f728;
            case 0x19F72Cu: goto label_19f72c;
            case 0x19F730u: goto label_19f730;
            case 0x19F734u: goto label_19f734;
            case 0x19F738u: goto label_19f738;
            case 0x19F73Cu: goto label_19f73c;
            case 0x19F740u: goto label_19f740;
            case 0x19F744u: goto label_19f744;
            case 0x19F748u: goto label_19f748;
            case 0x19F74Cu: goto label_19f74c;
            case 0x19F750u: goto label_19f750;
            case 0x19F754u: goto label_19f754;
            case 0x19F758u: goto label_19f758;
            case 0x19F75Cu: goto label_19f75c;
            case 0x19F760u: goto label_19f760;
            case 0x19F764u: goto label_19f764;
            case 0x19F768u: goto label_19f768;
            case 0x19F76Cu: goto label_19f76c;
            case 0x19F770u: goto label_19f770;
            case 0x19F774u: goto label_19f774;
            case 0x19F778u: goto label_19f778;
            case 0x19F77Cu: goto label_19f77c;
            case 0x19F780u: goto label_19f780;
            case 0x19F784u: goto label_19f784;
            case 0x19F788u: goto label_19f788;
            case 0x19F78Cu: goto label_19f78c;
            case 0x19F790u: goto label_19f790;
            case 0x19F794u: goto label_19f794;
            case 0x19F798u: goto label_19f798;
            case 0x19F79Cu: goto label_19f79c;
            case 0x19F7A0u: goto label_19f7a0;
            case 0x19F7A4u: goto label_19f7a4;
            case 0x19F7A8u: goto label_19f7a8;
            case 0x19F7ACu: goto label_19f7ac;
            case 0x19F7B0u: goto label_19f7b0;
            case 0x19F7B4u: goto label_19f7b4;
            case 0x19F7B8u: goto label_19f7b8;
            case 0x19F7BCu: goto label_19f7bc;
            case 0x19F7C0u: goto label_19f7c0;
            case 0x19F7C4u: goto label_19f7c4;
            case 0x19F7C8u: goto label_19f7c8;
            case 0x19F7CCu: goto label_19f7cc;
            case 0x19F7D0u: goto label_19f7d0;
            case 0x19F7D4u: goto label_19f7d4;
            case 0x19F7D8u: goto label_19f7d8;
            case 0x19F7DCu: goto label_19f7dc;
            case 0x19F7E0u: goto label_19f7e0;
            case 0x19F7E4u: goto label_19f7e4;
            case 0x19F7E8u: goto label_19f7e8;
            case 0x19F7ECu: goto label_19f7ec;
            case 0x19F7F0u: goto label_19f7f0;
            case 0x19F7F4u: goto label_19f7f4;
            case 0x19F7F8u: goto label_19f7f8;
            case 0x19F7FCu: goto label_19f7fc;
            case 0x19F800u: goto label_19f800;
            case 0x19F804u: goto label_19f804;
            case 0x19F808u: goto label_19f808;
            case 0x19F80Cu: goto label_19f80c;
            case 0x19F810u: goto label_19f810;
            case 0x19F814u: goto label_19f814;
            case 0x19F818u: goto label_19f818;
            case 0x19F81Cu: goto label_19f81c;
            case 0x19F820u: goto label_19f820;
            case 0x19F824u: goto label_19f824;
            case 0x19F828u: goto label_19f828;
            case 0x19F82Cu: goto label_19f82c;
            case 0x19F830u: goto label_19f830;
            case 0x19F834u: goto label_19f834;
            case 0x19F838u: goto label_19f838;
            case 0x19F83Cu: goto label_19f83c;
            case 0x19F840u: goto label_19f840;
            case 0x19F844u: goto label_19f844;
            case 0x19F848u: goto label_19f848;
            case 0x19F84Cu: goto label_19f84c;
            case 0x19F850u: goto label_19f850;
            case 0x19F854u: goto label_19f854;
            case 0x19F858u: goto label_19f858;
            case 0x19F85Cu: goto label_19f85c;
            case 0x19F860u: goto label_19f860;
            case 0x19F864u: goto label_19f864;
            case 0x19F868u: goto label_19f868;
            case 0x19F86Cu: goto label_19f86c;
            case 0x19F870u: goto label_19f870;
            case 0x19F874u: goto label_19f874;
            case 0x19F878u: goto label_19f878;
            case 0x19F87Cu: goto label_19f87c;
            case 0x19F880u: goto label_19f880;
            case 0x19F884u: goto label_19f884;
            case 0x19F888u: goto label_19f888;
            case 0x19F88Cu: goto label_19f88c;
            case 0x19F890u: goto label_19f890;
            case 0x19F894u: goto label_19f894;
            case 0x19F898u: goto label_19f898;
            case 0x19F89Cu: goto label_19f89c;
            case 0x19F8A0u: goto label_19f8a0;
            case 0x19F8A4u: goto label_19f8a4;
            case 0x19F8A8u: goto label_19f8a8;
            case 0x19F8ACu: goto label_19f8ac;
            case 0x19F8B0u: goto label_19f8b0;
            case 0x19F8B4u: goto label_19f8b4;
            case 0x19F8B8u: goto label_19f8b8;
            case 0x19F8BCu: goto label_19f8bc;
            case 0x19F8C0u: goto label_19f8c0;
            case 0x19F8C4u: goto label_19f8c4;
            case 0x19F8C8u: goto label_19f8c8;
            case 0x19F8CCu: goto label_19f8cc;
            case 0x19F8D0u: goto label_19f8d0;
            case 0x19F8D4u: goto label_19f8d4;
            case 0x19F8D8u: goto label_19f8d8;
            case 0x19F8DCu: goto label_19f8dc;
            case 0x19F8E0u: goto label_19f8e0;
            case 0x19F8E4u: goto label_19f8e4;
            case 0x19F8E8u: goto label_19f8e8;
            case 0x19F8ECu: goto label_19f8ec;
            case 0x19F8F0u: goto label_19f8f0;
            case 0x19F8F4u: goto label_19f8f4;
            case 0x19F8F8u: goto label_19f8f8;
            case 0x19F8FCu: goto label_19f8fc;
            case 0x19F900u: goto label_19f900;
            case 0x19F904u: goto label_19f904;
            case 0x19F908u: goto label_19f908;
            case 0x19F90Cu: goto label_19f90c;
            case 0x19F910u: goto label_19f910;
            case 0x19F914u: goto label_19f914;
            case 0x19F918u: goto label_19f918;
            case 0x19F91Cu: goto label_19f91c;
            case 0x19F920u: goto label_19f920;
            case 0x19F924u: goto label_19f924;
            case 0x19F928u: goto label_19f928;
            case 0x19F92Cu: goto label_19f92c;
            case 0x19F930u: goto label_19f930;
            case 0x19F934u: goto label_19f934;
            case 0x19F938u: goto label_19f938;
            case 0x19F93Cu: goto label_19f93c;
            case 0x19F940u: goto label_19f940;
            case 0x19F944u: goto label_19f944;
            case 0x19F948u: goto label_19f948;
            case 0x19F94Cu: goto label_19f94c;
            case 0x19F950u: goto label_19f950;
            case 0x19F954u: goto label_19f954;
            case 0x19F958u: goto label_19f958;
            case 0x19F95Cu: goto label_19f95c;
            case 0x19F960u: goto label_19f960;
            case 0x19F964u: goto label_19f964;
            case 0x19F968u: goto label_19f968;
            case 0x19F96Cu: goto label_19f96c;
            case 0x19F970u: goto label_19f970;
            case 0x19F974u: goto label_19f974;
            case 0x19F978u: goto label_19f978;
            case 0x19F97Cu: goto label_19f97c;
            case 0x19F980u: goto label_19f980;
            case 0x19F984u: goto label_19f984;
            case 0x19F988u: goto label_19f988;
            case 0x19F98Cu: goto label_19f98c;
            case 0x19F990u: goto label_19f990;
            case 0x19F994u: goto label_19f994;
            case 0x19F998u: goto label_19f998;
            case 0x19F99Cu: goto label_19f99c;
            case 0x19F9A0u: goto label_19f9a0;
            case 0x19F9A4u: goto label_19f9a4;
            case 0x19F9A8u: goto label_19f9a8;
            case 0x19F9ACu: goto label_19f9ac;
            case 0x19F9B0u: goto label_19f9b0;
            case 0x19F9B4u: goto label_19f9b4;
            case 0x19F9B8u: goto label_19f9b8;
            case 0x19F9BCu: goto label_19f9bc;
            case 0x19F9C0u: goto label_19f9c0;
            case 0x19F9C4u: goto label_19f9c4;
            case 0x19F9C8u: goto label_19f9c8;
            case 0x19F9CCu: goto label_19f9cc;
            case 0x19F9D0u: goto label_19f9d0;
            case 0x19F9D4u: goto label_19f9d4;
            case 0x19F9D8u: goto label_19f9d8;
            case 0x19F9DCu: goto label_19f9dc;
            case 0x19F9E0u: goto label_19f9e0;
            case 0x19F9E4u: goto label_19f9e4;
            case 0x19F9E8u: goto label_19f9e8;
            case 0x19F9ECu: goto label_19f9ec;
            case 0x19F9F0u: goto label_19f9f0;
            case 0x19F9F4u: goto label_19f9f4;
            case 0x19F9F8u: goto label_19f9f8;
            case 0x19F9FCu: goto label_19f9fc;
            case 0x19FA00u: goto label_19fa00;
            case 0x19FA04u: goto label_19fa04;
            case 0x19FA08u: goto label_19fa08;
            case 0x19FA0Cu: goto label_19fa0c;
            case 0x19FA10u: goto label_19fa10;
            case 0x19FA14u: goto label_19fa14;
            case 0x19FA18u: goto label_19fa18;
            case 0x19FA1Cu: goto label_19fa1c;
            case 0x19FA20u: goto label_19fa20;
            case 0x19FA24u: goto label_19fa24;
            case 0x19FA28u: goto label_19fa28;
            case 0x19FA2Cu: goto label_19fa2c;
            case 0x19FA30u: goto label_19fa30;
            case 0x19FA34u: goto label_19fa34;
            case 0x19FA38u: goto label_19fa38;
            case 0x19FA3Cu: goto label_19fa3c;
            case 0x19FA40u: goto label_19fa40;
            case 0x19FA44u: goto label_19fa44;
            case 0x19FA48u: goto label_19fa48;
            case 0x19FA4Cu: goto label_19fa4c;
            case 0x19FA50u: goto label_19fa50;
            case 0x19FA54u: goto label_19fa54;
            case 0x19FA58u: goto label_19fa58;
            case 0x19FA5Cu: goto label_19fa5c;
            case 0x19FA60u: goto label_19fa60;
            case 0x19FA64u: goto label_19fa64;
            case 0x19FA68u: goto label_19fa68;
            case 0x19FA6Cu: goto label_19fa6c;
            case 0x19FA70u: goto label_19fa70;
            case 0x19FA74u: goto label_19fa74;
            case 0x19FA78u: goto label_19fa78;
            case 0x19FA7Cu: goto label_19fa7c;
            case 0x19FA80u: goto label_19fa80;
            case 0x19FA84u: goto label_19fa84;
            case 0x19FA88u: goto label_19fa88;
            case 0x19FA8Cu: goto label_19fa8c;
            case 0x19FA90u: goto label_19fa90;
            case 0x19FA94u: goto label_19fa94;
            case 0x19FA98u: goto label_19fa98;
            case 0x19FA9Cu: goto label_19fa9c;
            case 0x19FAA0u: goto label_19faa0;
            case 0x19FAA4u: goto label_19faa4;
            case 0x19FAA8u: goto label_19faa8;
            case 0x19FAACu: goto label_19faac;
            case 0x19FAB0u: goto label_19fab0;
            case 0x19FAB4u: goto label_19fab4;
            case 0x19FAB8u: goto label_19fab8;
            case 0x19FABCu: goto label_19fabc;
            case 0x19FAC0u: goto label_19fac0;
            case 0x19FAC4u: goto label_19fac4;
            case 0x19FAC8u: goto label_19fac8;
            case 0x19FACCu: goto label_19facc;
            case 0x19FAD0u: goto label_19fad0;
            case 0x19FAD4u: goto label_19fad4;
            case 0x19FAD8u: goto label_19fad8;
            case 0x19FADCu: goto label_19fadc;
            case 0x19FAE0u: goto label_19fae0;
            case 0x19FAE4u: goto label_19fae4;
            case 0x19FAE8u: goto label_19fae8;
            case 0x19FAECu: goto label_19faec;
            case 0x19FAF0u: goto label_19faf0;
            case 0x19FAF4u: goto label_19faf4;
            case 0x19FAF8u: goto label_19faf8;
            case 0x19FAFCu: goto label_19fafc;
            case 0x19FB00u: goto label_19fb00;
            case 0x19FB04u: goto label_19fb04;
            case 0x19FB08u: goto label_19fb08;
            case 0x19FB0Cu: goto label_19fb0c;
            case 0x19FB10u: goto label_19fb10;
            case 0x19FB14u: goto label_19fb14;
            case 0x19FB18u: goto label_19fb18;
            case 0x19FB1Cu: goto label_19fb1c;
            case 0x19FB20u: goto label_19fb20;
            case 0x19FB24u: goto label_19fb24;
            case 0x19FB28u: goto label_19fb28;
            case 0x19FB2Cu: goto label_19fb2c;
            case 0x19FB30u: goto label_19fb30;
            case 0x19FB34u: goto label_19fb34;
            case 0x19FB38u: goto label_19fb38;
            case 0x19FB3Cu: goto label_19fb3c;
            case 0x19FB40u: goto label_19fb40;
            case 0x19FB44u: goto label_19fb44;
            case 0x19FB48u: goto label_19fb48;
            case 0x19FB4Cu: goto label_19fb4c;
            case 0x19FB50u: goto label_19fb50;
            case 0x19FB54u: goto label_19fb54;
            case 0x19FB58u: goto label_19fb58;
            case 0x19FB5Cu: goto label_19fb5c;
            case 0x19FB60u: goto label_19fb60;
            case 0x19FB64u: goto label_19fb64;
            case 0x19FB68u: goto label_19fb68;
            case 0x19FB6Cu: goto label_19fb6c;
            case 0x19FB70u: goto label_19fb70;
            case 0x19FB74u: goto label_19fb74;
            case 0x19FB78u: goto label_19fb78;
            case 0x19FB7Cu: goto label_19fb7c;
            case 0x19FB80u: goto label_19fb80;
            case 0x19FB84u: goto label_19fb84;
            case 0x19FB88u: goto label_19fb88;
            case 0x19FB8Cu: goto label_19fb8c;
            case 0x19FB90u: goto label_19fb90;
            case 0x19FB94u: goto label_19fb94;
            case 0x19FB98u: goto label_19fb98;
            case 0x19FB9Cu: goto label_19fb9c;
            case 0x19FBA0u: goto label_19fba0;
            case 0x19FBA4u: goto label_19fba4;
            case 0x19FBA8u: goto label_19fba8;
            case 0x19FBACu: goto label_19fbac;
            case 0x19FBB0u: goto label_19fbb0;
            case 0x19FBB4u: goto label_19fbb4;
            case 0x19FBB8u: goto label_19fbb8;
            case 0x19FBBCu: goto label_19fbbc;
            case 0x19FBC0u: goto label_19fbc0;
            case 0x19FBC4u: goto label_19fbc4;
            case 0x19FBC8u: goto label_19fbc8;
            case 0x19FBCCu: goto label_19fbcc;
            case 0x19FBD0u: goto label_19fbd0;
            case 0x19FBD4u: goto label_19fbd4;
            case 0x19FBD8u: goto label_19fbd8;
            case 0x19FBDCu: goto label_19fbdc;
            case 0x19FBE0u: goto label_19fbe0;
            case 0x19FBE4u: goto label_19fbe4;
            case 0x19FBE8u: goto label_19fbe8;
            case 0x19FBECu: goto label_19fbec;
            case 0x19FBF0u: goto label_19fbf0;
            case 0x19FBF4u: goto label_19fbf4;
            case 0x19FBF8u: goto label_19fbf8;
            case 0x19FBFCu: goto label_19fbfc;
            case 0x19FC00u: goto label_19fc00;
            case 0x19FC04u: goto label_19fc04;
            case 0x19FC08u: goto label_19fc08;
            case 0x19FC0Cu: goto label_19fc0c;
            case 0x19FC10u: goto label_19fc10;
            case 0x19FC14u: goto label_19fc14;
            case 0x19FC18u: goto label_19fc18;
            case 0x19FC1Cu: goto label_19fc1c;
            case 0x19FC20u: goto label_19fc20;
            case 0x19FC24u: goto label_19fc24;
            case 0x19FC28u: goto label_19fc28;
            case 0x19FC2Cu: goto label_19fc2c;
            case 0x19FC30u: goto label_19fc30;
            case 0x19FC34u: goto label_19fc34;
            case 0x19FC38u: goto label_19fc38;
            case 0x19FC3Cu: goto label_19fc3c;
            case 0x19FC40u: goto label_19fc40;
            case 0x19FC44u: goto label_19fc44;
            case 0x19FC48u: goto label_19fc48;
            case 0x19FC4Cu: goto label_19fc4c;
            case 0x19FC50u: goto label_19fc50;
            case 0x19FC54u: goto label_19fc54;
            case 0x19FC58u: goto label_19fc58;
            case 0x19FC5Cu: goto label_19fc5c;
            case 0x19FC60u: goto label_19fc60;
            case 0x19FC64u: goto label_19fc64;
            case 0x19FC68u: goto label_19fc68;
            case 0x19FC6Cu: goto label_19fc6c;
            case 0x19FC70u: goto label_19fc70;
            case 0x19FC74u: goto label_19fc74;
            case 0x19FC78u: goto label_19fc78;
            case 0x19FC7Cu: goto label_19fc7c;
            case 0x19FC80u: goto label_19fc80;
            case 0x19FC84u: goto label_19fc84;
            case 0x19FC88u: goto label_19fc88;
            case 0x19FC8Cu: goto label_19fc8c;
            case 0x19FC90u: goto label_19fc90;
            case 0x19FC94u: goto label_19fc94;
            case 0x19FC98u: goto label_19fc98;
            case 0x19FC9Cu: goto label_19fc9c;
            case 0x19FCA0u: goto label_19fca0;
            case 0x19FCA4u: goto label_19fca4;
            case 0x19FCA8u: goto label_19fca8;
            case 0x19FCACu: goto label_19fcac;
            case 0x19FCB0u: goto label_19fcb0;
            case 0x19FCB4u: goto label_19fcb4;
            case 0x19FCB8u: goto label_19fcb8;
            case 0x19FCBCu: goto label_19fcbc;
            case 0x19FCC0u: goto label_19fcc0;
            case 0x19FCC4u: goto label_19fcc4;
            case 0x19FCC8u: goto label_19fcc8;
            case 0x19FCCCu: goto label_19fccc;
            case 0x19FCD0u: goto label_19fcd0;
            case 0x19FCD4u: goto label_19fcd4;
            case 0x19FCD8u: goto label_19fcd8;
            case 0x19FCDCu: goto label_19fcdc;
            case 0x19FCE0u: goto label_19fce0;
            case 0x19FCE4u: goto label_19fce4;
            case 0x19FCE8u: goto label_19fce8;
            case 0x19FCECu: goto label_19fcec;
            case 0x19FCF0u: goto label_19fcf0;
            case 0x19FCF4u: goto label_19fcf4;
            case 0x19FCF8u: goto label_19fcf8;
            case 0x19FCFCu: goto label_19fcfc;
            case 0x19FD00u: goto label_19fd00;
            case 0x19FD04u: goto label_19fd04;
            case 0x19FD08u: goto label_19fd08;
            case 0x19FD0Cu: goto label_19fd0c;
            case 0x19FD10u: goto label_19fd10;
            case 0x19FD14u: goto label_19fd14;
            case 0x19FD18u: goto label_19fd18;
            case 0x19FD1Cu: goto label_19fd1c;
            case 0x19FD20u: goto label_19fd20;
            case 0x19FD24u: goto label_19fd24;
            case 0x19FD28u: goto label_19fd28;
            case 0x19FD2Cu: goto label_19fd2c;
            case 0x19FD30u: goto label_19fd30;
            case 0x19FD34u: goto label_19fd34;
            case 0x19FD38u: goto label_19fd38;
            case 0x19FD3Cu: goto label_19fd3c;
            case 0x19FD40u: goto label_19fd40;
            case 0x19FD44u: goto label_19fd44;
            case 0x19FD48u: goto label_19fd48;
            case 0x19FD4Cu: goto label_19fd4c;
            case 0x19FD50u: goto label_19fd50;
            case 0x19FD54u: goto label_19fd54;
            case 0x19FD58u: goto label_19fd58;
            case 0x19FD5Cu: goto label_19fd5c;
            case 0x19FD60u: goto label_19fd60;
            case 0x19FD64u: goto label_19fd64;
            case 0x19FD68u: goto label_19fd68;
            case 0x19FD6Cu: goto label_19fd6c;
            case 0x19FD70u: goto label_19fd70;
            case 0x19FD74u: goto label_19fd74;
            case 0x19FD78u: goto label_19fd78;
            case 0x19FD7Cu: goto label_19fd7c;
            case 0x19FD80u: goto label_19fd80;
            case 0x19FD84u: goto label_19fd84;
            case 0x19FD88u: goto label_19fd88;
            case 0x19FD8Cu: goto label_19fd8c;
            case 0x19FD90u: goto label_19fd90;
            case 0x19FD94u: goto label_19fd94;
            case 0x19FD98u: goto label_19fd98;
            case 0x19FD9Cu: goto label_19fd9c;
            case 0x19FDA0u: goto label_19fda0;
            case 0x19FDA4u: goto label_19fda4;
            case 0x19FDA8u: goto label_19fda8;
            case 0x19FDACu: goto label_19fdac;
            case 0x19FDB0u: goto label_19fdb0;
            case 0x19FDB4u: goto label_19fdb4;
            case 0x19FDB8u: goto label_19fdb8;
            case 0x19FDBCu: goto label_19fdbc;
            case 0x19FDC0u: goto label_19fdc0;
            case 0x19FDC4u: goto label_19fdc4;
            case 0x19FDC8u: goto label_19fdc8;
            case 0x19FDCCu: goto label_19fdcc;
            case 0x19FDD0u: goto label_19fdd0;
            case 0x19FDD4u: goto label_19fdd4;
            case 0x19FDD8u: goto label_19fdd8;
            case 0x19FDDCu: goto label_19fddc;
            case 0x19FDE0u: goto label_19fde0;
            case 0x19FDE4u: goto label_19fde4;
            case 0x19FDE8u: goto label_19fde8;
            case 0x19FDECu: goto label_19fdec;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FDF4u: goto label_19fdf4;
            case 0x19FDF8u: goto label_19fdf8;
            case 0x19FDFCu: goto label_19fdfc;
            case 0x19FE00u: goto label_19fe00;
            case 0x19FE04u: goto label_19fe04;
            case 0x19FE08u: goto label_19fe08;
            case 0x19FE0Cu: goto label_19fe0c;
            case 0x19FE10u: goto label_19fe10;
            case 0x19FE14u: goto label_19fe14;
            case 0x19FE18u: goto label_19fe18;
            case 0x19FE1Cu: goto label_19fe1c;
            case 0x19FE20u: goto label_19fe20;
            case 0x19FE24u: goto label_19fe24;
            case 0x19FE28u: goto label_19fe28;
            case 0x19FE2Cu: goto label_19fe2c;
            case 0x19FE30u: goto label_19fe30;
            case 0x19FE34u: goto label_19fe34;
            case 0x19FE38u: goto label_19fe38;
            case 0x19FE3Cu: goto label_19fe3c;
            case 0x19FE40u: goto label_19fe40;
            case 0x19FE44u: goto label_19fe44;
            case 0x19FE48u: goto label_19fe48;
            case 0x19FE4Cu: goto label_19fe4c;
            case 0x19FE50u: goto label_19fe50;
            case 0x19FE54u: goto label_19fe54;
            case 0x19FE58u: goto label_19fe58;
            case 0x19FE5Cu: goto label_19fe5c;
            case 0x19FE60u: goto label_19fe60;
            case 0x19FE64u: goto label_19fe64;
            case 0x19FE68u: goto label_19fe68;
            case 0x19FE6Cu: goto label_19fe6c;
            case 0x19FE70u: goto label_19fe70;
            case 0x19FE74u: goto label_19fe74;
            case 0x19FE78u: goto label_19fe78;
            case 0x19FE7Cu: goto label_19fe7c;
            case 0x19FE80u: goto label_19fe80;
            case 0x19FE84u: goto label_19fe84;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FE90u: goto label_19fe90;
            case 0x19FE94u: goto label_19fe94;
            case 0x19FE98u: goto label_19fe98;
            case 0x19FE9Cu: goto label_19fe9c;
            case 0x19FEA0u: goto label_19fea0;
            case 0x19FEA4u: goto label_19fea4;
            case 0x19FEA8u: goto label_19fea8;
            case 0x19FEACu: goto label_19feac;
            case 0x19FEB0u: goto label_19feb0;
            case 0x19FEB4u: goto label_19feb4;
            case 0x19FEB8u: goto label_19feb8;
            case 0x19FEBCu: goto label_19febc;
            case 0x19FEC0u: goto label_19fec0;
            case 0x19FEC4u: goto label_19fec4;
            case 0x19FEC8u: goto label_19fec8;
            case 0x19FECCu: goto label_19fecc;
            case 0x19FED0u: goto label_19fed0;
            case 0x19FED4u: goto label_19fed4;
            case 0x19FED8u: goto label_19fed8;
            case 0x19FEDCu: goto label_19fedc;
            case 0x19FEE0u: goto label_19fee0;
            case 0x19FEE4u: goto label_19fee4;
            case 0x19FEE8u: goto label_19fee8;
            case 0x19FEECu: goto label_19feec;
            case 0x19FEF0u: goto label_19fef0;
            case 0x19FEF4u: goto label_19fef4;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FEFCu: goto label_19fefc;
            case 0x19FF00u: goto label_19ff00;
            case 0x19FF04u: goto label_19ff04;
            case 0x19FF08u: goto label_19ff08;
            case 0x19FF0Cu: goto label_19ff0c;
            case 0x19FF10u: goto label_19ff10;
            case 0x19FF14u: goto label_19ff14;
            case 0x19FF18u: goto label_19ff18;
            case 0x19FF1Cu: goto label_19ff1c;
            case 0x19FF20u: goto label_19ff20;
            case 0x19FF24u: goto label_19ff24;
            case 0x19FF28u: goto label_19ff28;
            case 0x19FF2Cu: goto label_19ff2c;
            case 0x19FF30u: goto label_19ff30;
            case 0x19FF34u: goto label_19ff34;
            case 0x19FF38u: goto label_19ff38;
            case 0x19FF3Cu: goto label_19ff3c;
            case 0x19FF40u: goto label_19ff40;
            case 0x19FF44u: goto label_19ff44;
            case 0x19FF48u: goto label_19ff48;
            case 0x19FF4Cu: goto label_19ff4c;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF54u: goto label_19ff54;
            case 0x19FF58u: goto label_19ff58;
            case 0x19FF5Cu: goto label_19ff5c;
            case 0x19FF60u: goto label_19ff60;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF68u: goto label_19ff68;
            case 0x19FF6Cu: goto label_19ff6c;
            case 0x19FF70u: goto label_19ff70;
            case 0x19FF74u: goto label_19ff74;
            case 0x19FF78u: goto label_19ff78;
            case 0x19FF7Cu: goto label_19ff7c;
            case 0x19FF80u: goto label_19ff80;
            case 0x19FF84u: goto label_19ff84;
            case 0x19FF88u: goto label_19ff88;
            case 0x19FF8Cu: goto label_19ff8c;
            case 0x19FF90u: goto label_19ff90;
            case 0x19FF94u: goto label_19ff94;
            case 0x19FF98u: goto label_19ff98;
            case 0x19FF9Cu: goto label_19ff9c;
            case 0x19FFA0u: goto label_19ffa0;
            case 0x19FFA4u: goto label_19ffa4;
            case 0x19FFA8u: goto label_19ffa8;
            case 0x19FFACu: goto label_19ffac;
            case 0x19FFB0u: goto label_19ffb0;
            case 0x19FFB4u: goto label_19ffb4;
            case 0x19FFB8u: goto label_19ffb8;
            case 0x19FFBCu: goto label_19ffbc;
            case 0x19FFC0u: goto label_19ffc0;
            case 0x19FFC4u: goto label_19ffc4;
            case 0x19FFC8u: goto label_19ffc8;
            case 0x19FFCCu: goto label_19ffcc;
            case 0x19FFD0u: goto label_19ffd0;
            case 0x19FFD4u: goto label_19ffd4;
            case 0x19FFD8u: goto label_19ffd8;
            case 0x19FFDCu: goto label_19ffdc;
            case 0x19FFE0u: goto label_19ffe0;
            case 0x19FFE4u: goto label_19ffe4;
            case 0x19FFE8u: goto label_19ffe8;
            case 0x19FFECu: goto label_19ffec;
            case 0x19FFF0u: goto label_19fff0;
            case 0x19FFF4u: goto label_19fff4;
            case 0x19FFF8u: goto label_19fff8;
            case 0x19FFFCu: goto label_19fffc;
            case 0x1A0000u: goto label_1a0000;
            case 0x1A0004u: goto label_1a0004;
            case 0x1A0008u: goto label_1a0008;
            case 0x1A000Cu: goto label_1a000c;
            case 0x1A0010u: goto label_1a0010;
            case 0x1A0014u: goto label_1a0014;
            case 0x1A0018u: goto label_1a0018;
            case 0x1A001Cu: goto label_1a001c;
            case 0x1A0020u: goto label_1a0020;
            case 0x1A0024u: goto label_1a0024;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A002Cu: goto label_1a002c;
            case 0x1A0030u: goto label_1a0030;
            case 0x1A0034u: goto label_1a0034;
            case 0x1A0038u: goto label_1a0038;
            case 0x1A003Cu: goto label_1a003c;
            case 0x1A0040u: goto label_1a0040;
            case 0x1A0044u: goto label_1a0044;
            case 0x1A0048u: goto label_1a0048;
            case 0x1A004Cu: goto label_1a004c;
            case 0x1A0050u: goto label_1a0050;
            case 0x1A0054u: goto label_1a0054;
            case 0x1A0058u: goto label_1a0058;
            case 0x1A005Cu: goto label_1a005c;
            case 0x1A0060u: goto label_1a0060;
            case 0x1A0064u: goto label_1a0064;
            case 0x1A0068u: goto label_1a0068;
            case 0x1A006Cu: goto label_1a006c;
            case 0x1A0070u: goto label_1a0070;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0078u: goto label_1a0078;
            case 0x1A007Cu: goto label_1a007c;
            case 0x1A0080u: goto label_1a0080;
            case 0x1A0084u: goto label_1a0084;
            case 0x1A0088u: goto label_1a0088;
            case 0x1A008Cu: goto label_1a008c;
            case 0x1A0090u: goto label_1a0090;
            case 0x1A0094u: goto label_1a0094;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A009Cu: goto label_1a009c;
            case 0x1A00A0u: goto label_1a00a0;
            case 0x1A00A4u: goto label_1a00a4;
            case 0x1A00A8u: goto label_1a00a8;
            case 0x1A00ACu: goto label_1a00ac;
            case 0x1A00B0u: goto label_1a00b0;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A00B8u: goto label_1a00b8;
            case 0x1A00BCu: goto label_1a00bc;
            case 0x1A00C0u: goto label_1a00c0;
            case 0x1A00C4u: goto label_1a00c4;
            case 0x1A00C8u: goto label_1a00c8;
            case 0x1A00CCu: goto label_1a00cc;
            case 0x1A00D0u: goto label_1a00d0;
            case 0x1A00D4u: goto label_1a00d4;
            case 0x1A00D8u: goto label_1a00d8;
            case 0x1A00DCu: goto label_1a00dc;
            case 0x1A00E0u: goto label_1a00e0;
            case 0x1A00E4u: goto label_1a00e4;
            case 0x1A00E8u: goto label_1a00e8;
            case 0x1A00ECu: goto label_1a00ec;
            case 0x1A00F0u: goto label_1a00f0;
            case 0x1A00F4u: goto label_1a00f4;
            case 0x1A00F8u: goto label_1a00f8;
            case 0x1A00FCu: goto label_1a00fc;
            case 0x1A0100u: goto label_1a0100;
            case 0x1A0104u: goto label_1a0104;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A010Cu: goto label_1a010c;
            case 0x1A0110u: goto label_1a0110;
            case 0x1A0114u: goto label_1a0114;
            case 0x1A0118u: goto label_1a0118;
            case 0x1A011Cu: goto label_1a011c;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0124u: goto label_1a0124;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0130u: goto label_1a0130;
            case 0x1A0134u: goto label_1a0134;
            case 0x1A0138u: goto label_1a0138;
            case 0x1A013Cu: goto label_1a013c;
            case 0x1A0140u: goto label_1a0140;
            case 0x1A0144u: goto label_1a0144;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A014Cu: goto label_1a014c;
            case 0x1A0150u: goto label_1a0150;
            case 0x1A0154u: goto label_1a0154;
            case 0x1A0158u: goto label_1a0158;
            case 0x1A015Cu: goto label_1a015c;
            case 0x1A0160u: goto label_1a0160;
            case 0x1A0164u: goto label_1a0164;
            case 0x1A0168u: goto label_1a0168;
            case 0x1A016Cu: goto label_1a016c;
            case 0x1A0170u: goto label_1a0170;
            case 0x1A0174u: goto label_1a0174;
            case 0x1A0178u: goto label_1a0178;
            case 0x1A017Cu: goto label_1a017c;
            case 0x1A0180u: goto label_1a0180;
            case 0x1A0184u: goto label_1a0184;
            case 0x1A0188u: goto label_1a0188;
            case 0x1A018Cu: goto label_1a018c;
            case 0x1A0190u: goto label_1a0190;
            case 0x1A0194u: goto label_1a0194;
            case 0x1A0198u: goto label_1a0198;
            case 0x1A019Cu: goto label_1a019c;
            case 0x1A01A0u: goto label_1a01a0;
            case 0x1A01A4u: goto label_1a01a4;
            case 0x1A01A8u: goto label_1a01a8;
            case 0x1A01ACu: goto label_1a01ac;
            case 0x1A01B0u: goto label_1a01b0;
            case 0x1A01B4u: goto label_1a01b4;
            case 0x1A01B8u: goto label_1a01b8;
            case 0x1A01BCu: goto label_1a01bc;
            case 0x1A01C0u: goto label_1a01c0;
            case 0x1A01C4u: goto label_1a01c4;
            case 0x1A01C8u: goto label_1a01c8;
            case 0x1A01CCu: goto label_1a01cc;
            case 0x1A01D0u: goto label_1a01d0;
            case 0x1A01D4u: goto label_1a01d4;
            case 0x1A01D8u: goto label_1a01d8;
            case 0x1A01DCu: goto label_1a01dc;
            case 0x1A01E0u: goto label_1a01e0;
            case 0x1A01E4u: goto label_1a01e4;
            case 0x1A01E8u: goto label_1a01e8;
            case 0x1A01ECu: goto label_1a01ec;
            case 0x1A01F0u: goto label_1a01f0;
            case 0x1A01F4u: goto label_1a01f4;
            case 0x1A01F8u: goto label_1a01f8;
            case 0x1A01FCu: goto label_1a01fc;
            case 0x1A0200u: goto label_1a0200;
            case 0x1A0204u: goto label_1a0204;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A020Cu: goto label_1a020c;
            case 0x1A0210u: goto label_1a0210;
            case 0x1A0214u: goto label_1a0214;
            case 0x1A0218u: goto label_1a0218;
            case 0x1A021Cu: goto label_1a021c;
            case 0x1A0220u: goto label_1a0220;
            case 0x1A0224u: goto label_1a0224;
            case 0x1A0228u: goto label_1a0228;
            case 0x1A022Cu: goto label_1a022c;
            case 0x1A0230u: goto label_1a0230;
            case 0x1A0234u: goto label_1a0234;
            case 0x1A0238u: goto label_1a0238;
            case 0x1A023Cu: goto label_1a023c;
            case 0x1A0240u: goto label_1a0240;
            case 0x1A0244u: goto label_1a0244;
            case 0x1A0248u: goto label_1a0248;
            case 0x1A024Cu: goto label_1a024c;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A0254u: goto label_1a0254;
            case 0x1A0258u: goto label_1a0258;
            case 0x1A025Cu: goto label_1a025c;
            case 0x1A0260u: goto label_1a0260;
            case 0x1A0264u: goto label_1a0264;
            case 0x1A0268u: goto label_1a0268;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A0270u: goto label_1a0270;
            case 0x1A0274u: goto label_1a0274;
            case 0x1A0278u: goto label_1a0278;
            case 0x1A027Cu: goto label_1a027c;
            case 0x1A0280u: goto label_1a0280;
            case 0x1A0284u: goto label_1a0284;
            case 0x1A0288u: goto label_1a0288;
            case 0x1A028Cu: goto label_1a028c;
            case 0x1A0290u: goto label_1a0290;
            case 0x1A0294u: goto label_1a0294;
            case 0x1A0298u: goto label_1a0298;
            case 0x1A029Cu: goto label_1a029c;
            case 0x1A02A0u: goto label_1a02a0;
            case 0x1A02A4u: goto label_1a02a4;
            case 0x1A02A8u: goto label_1a02a8;
            case 0x1A02ACu: goto label_1a02ac;
            case 0x1A02B0u: goto label_1a02b0;
            case 0x1A02B4u: goto label_1a02b4;
            case 0x1A02B8u: goto label_1a02b8;
            case 0x1A02BCu: goto label_1a02bc;
            case 0x1A02C0u: goto label_1a02c0;
            case 0x1A02C4u: goto label_1a02c4;
            case 0x1A02C8u: goto label_1a02c8;
            case 0x1A02CCu: goto label_1a02cc;
            case 0x1A02D0u: goto label_1a02d0;
            case 0x1A02D4u: goto label_1a02d4;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A02DCu: goto label_1a02dc;
            case 0x1A02E0u: goto label_1a02e0;
            case 0x1A02E4u: goto label_1a02e4;
            case 0x1A02E8u: goto label_1a02e8;
            case 0x1A02ECu: goto label_1a02ec;
            case 0x1A02F0u: goto label_1a02f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A02B4u; }
            if (ctx->pc != 0x1A02B4u) { return; }
        }
    }
    ctx->pc = 0x1A02B4u;
label_1a02b4:
    // 0x1a02b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a02b8:
    if (ctx->pc == 0x1A02B8u) {
        ctx->pc = 0x1A02BCu;
        goto label_1a02bc;
    }
    ctx->pc = 0x1A02B4u;
    {
        const bool branch_taken_0x1a02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a02b4) {
            ctx->pc = 0x1A02E0u;
            goto label_1a02e0;
        }
    }
    ctx->pc = 0x1A02BCu;
label_1a02bc:
    // 0x1a02bc: 0x0  nop
    ctx->pc = 0x1a02bcu;
    // NOP
label_1a02c0:
    // 0x1a02c0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a02c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a02c4:
    // 0x1a02c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a02c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a02c8:
    // 0x1a02c8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a02c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a02cc:
    // 0x1a02cc: 0x24c6f140  addiu       $a2, $a2, -0xEC0
    ctx->pc = 0x1a02ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963520));
label_1a02d0:
    // 0x1a02d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a02d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a02d4:
    // 0x1a02d4: 0xc053ca4  jal         func_14F290
label_1a02d8:
    if (ctx->pc == 0x1A02D8u) {
        ctx->pc = 0x1A02D8u;
            // 0x1a02d8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A02DCu;
        goto label_1a02dc;
    }
    ctx->pc = 0x1A02D4u;
    SET_GPR_U32(ctx, 31, 0x1A02DCu);
    ctx->pc = 0x1A02D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02D4u;
            // 0x1a02d8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02DCu; }
        if (ctx->pc != 0x1A02DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A02DCu; }
        if (ctx->pc != 0x1A02DCu) { return; }
    }
    ctx->pc = 0x1A02DCu;
label_1a02dc:
    // 0x1a02dc: 0x0  nop
    ctx->pc = 0x1a02dcu;
    // NOP
label_1a02e0:
    // 0x1a02e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a02e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a02e4:
    // 0x1a02e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a02e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a02e8:
    // 0x1a02e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a02e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a02ec:
    // 0x1a02ec: 0x3e00008  jr          $ra
label_1a02f0:
    if (ctx->pc == 0x1A02F0u) {
        ctx->pc = 0x1A02F0u;
            // 0x1a02f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1A02F4u;
        goto label_fallthrough_0x1a02ec;
    }
    ctx->pc = 0x1A02ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A02F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A02ECu;
            // 0x1a02f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F420u: goto label_19f420;
            case 0x19F424u: goto label_19f424;
            case 0x19F428u: goto label_19f428;
            case 0x19F42Cu: goto label_19f42c;
            case 0x19F430u: goto label_19f430;
            case 0x19F434u: goto label_19f434;
            case 0x19F438u: goto label_19f438;
            case 0x19F43Cu: goto label_19f43c;
            case 0x19F440u: goto label_19f440;
            case 0x19F444u: goto label_19f444;
            case 0x19F448u: goto label_19f448;
            case 0x19F44Cu: goto label_19f44c;
            case 0x19F450u: goto label_19f450;
            case 0x19F454u: goto label_19f454;
            case 0x19F458u: goto label_19f458;
            case 0x19F45Cu: goto label_19f45c;
            case 0x19F460u: goto label_19f460;
            case 0x19F464u: goto label_19f464;
            case 0x19F468u: goto label_19f468;
            case 0x19F46Cu: goto label_19f46c;
            case 0x19F470u: goto label_19f470;
            case 0x19F474u: goto label_19f474;
            case 0x19F478u: goto label_19f478;
            case 0x19F47Cu: goto label_19f47c;
            case 0x19F480u: goto label_19f480;
            case 0x19F484u: goto label_19f484;
            case 0x19F488u: goto label_19f488;
            case 0x19F48Cu: goto label_19f48c;
            case 0x19F490u: goto label_19f490;
            case 0x19F494u: goto label_19f494;
            case 0x19F498u: goto label_19f498;
            case 0x19F49Cu: goto label_19f49c;
            case 0x19F4A0u: goto label_19f4a0;
            case 0x19F4A4u: goto label_19f4a4;
            case 0x19F4A8u: goto label_19f4a8;
            case 0x19F4ACu: goto label_19f4ac;
            case 0x19F4B0u: goto label_19f4b0;
            case 0x19F4B4u: goto label_19f4b4;
            case 0x19F4B8u: goto label_19f4b8;
            case 0x19F4BCu: goto label_19f4bc;
            case 0x19F4C0u: goto label_19f4c0;
            case 0x19F4C4u: goto label_19f4c4;
            case 0x19F4C8u: goto label_19f4c8;
            case 0x19F4CCu: goto label_19f4cc;
            case 0x19F4D0u: goto label_19f4d0;
            case 0x19F4D4u: goto label_19f4d4;
            case 0x19F4D8u: goto label_19f4d8;
            case 0x19F4DCu: goto label_19f4dc;
            case 0x19F4E0u: goto label_19f4e0;
            case 0x19F4E4u: goto label_19f4e4;
            case 0x19F4E8u: goto label_19f4e8;
            case 0x19F4ECu: goto label_19f4ec;
            case 0x19F4F0u: goto label_19f4f0;
            case 0x19F4F4u: goto label_19f4f4;
            case 0x19F4F8u: goto label_19f4f8;
            case 0x19F4FCu: goto label_19f4fc;
            case 0x19F500u: goto label_19f500;
            case 0x19F504u: goto label_19f504;
            case 0x19F508u: goto label_19f508;
            case 0x19F50Cu: goto label_19f50c;
            case 0x19F510u: goto label_19f510;
            case 0x19F514u: goto label_19f514;
            case 0x19F518u: goto label_19f518;
            case 0x19F51Cu: goto label_19f51c;
            case 0x19F520u: goto label_19f520;
            case 0x19F524u: goto label_19f524;
            case 0x19F528u: goto label_19f528;
            case 0x19F52Cu: goto label_19f52c;
            case 0x19F530u: goto label_19f530;
            case 0x19F534u: goto label_19f534;
            case 0x19F538u: goto label_19f538;
            case 0x19F53Cu: goto label_19f53c;
            case 0x19F540u: goto label_19f540;
            case 0x19F544u: goto label_19f544;
            case 0x19F548u: goto label_19f548;
            case 0x19F54Cu: goto label_19f54c;
            case 0x19F550u: goto label_19f550;
            case 0x19F554u: goto label_19f554;
            case 0x19F558u: goto label_19f558;
            case 0x19F55Cu: goto label_19f55c;
            case 0x19F560u: goto label_19f560;
            case 0x19F564u: goto label_19f564;
            case 0x19F568u: goto label_19f568;
            case 0x19F56Cu: goto label_19f56c;
            case 0x19F570u: goto label_19f570;
            case 0x19F574u: goto label_19f574;
            case 0x19F578u: goto label_19f578;
            case 0x19F57Cu: goto label_19f57c;
            case 0x19F580u: goto label_19f580;
            case 0x19F584u: goto label_19f584;
            case 0x19F588u: goto label_19f588;
            case 0x19F58Cu: goto label_19f58c;
            case 0x19F590u: goto label_19f590;
            case 0x19F594u: goto label_19f594;
            case 0x19F598u: goto label_19f598;
            case 0x19F59Cu: goto label_19f59c;
            case 0x19F5A0u: goto label_19f5a0;
            case 0x19F5A4u: goto label_19f5a4;
            case 0x19F5A8u: goto label_19f5a8;
            case 0x19F5ACu: goto label_19f5ac;
            case 0x19F5B0u: goto label_19f5b0;
            case 0x19F5B4u: goto label_19f5b4;
            case 0x19F5B8u: goto label_19f5b8;
            case 0x19F5BCu: goto label_19f5bc;
            case 0x19F5C0u: goto label_19f5c0;
            case 0x19F5C4u: goto label_19f5c4;
            case 0x19F5C8u: goto label_19f5c8;
            case 0x19F5CCu: goto label_19f5cc;
            case 0x19F5D0u: goto label_19f5d0;
            case 0x19F5D4u: goto label_19f5d4;
            case 0x19F5D8u: goto label_19f5d8;
            case 0x19F5DCu: goto label_19f5dc;
            case 0x19F5E0u: goto label_19f5e0;
            case 0x19F5E4u: goto label_19f5e4;
            case 0x19F5E8u: goto label_19f5e8;
            case 0x19F5ECu: goto label_19f5ec;
            case 0x19F5F0u: goto label_19f5f0;
            case 0x19F5F4u: goto label_19f5f4;
            case 0x19F5F8u: goto label_19f5f8;
            case 0x19F5FCu: goto label_19f5fc;
            case 0x19F600u: goto label_19f600;
            case 0x19F604u: goto label_19f604;
            case 0x19F608u: goto label_19f608;
            case 0x19F60Cu: goto label_19f60c;
            case 0x19F610u: goto label_19f610;
            case 0x19F614u: goto label_19f614;
            case 0x19F618u: goto label_19f618;
            case 0x19F61Cu: goto label_19f61c;
            case 0x19F620u: goto label_19f620;
            case 0x19F624u: goto label_19f624;
            case 0x19F628u: goto label_19f628;
            case 0x19F62Cu: goto label_19f62c;
            case 0x19F630u: goto label_19f630;
            case 0x19F634u: goto label_19f634;
            case 0x19F638u: goto label_19f638;
            case 0x19F63Cu: goto label_19f63c;
            case 0x19F640u: goto label_19f640;
            case 0x19F644u: goto label_19f644;
            case 0x19F648u: goto label_19f648;
            case 0x19F64Cu: goto label_19f64c;
            case 0x19F650u: goto label_19f650;
            case 0x19F654u: goto label_19f654;
            case 0x19F658u: goto label_19f658;
            case 0x19F65Cu: goto label_19f65c;
            case 0x19F660u: goto label_19f660;
            case 0x19F664u: goto label_19f664;
            case 0x19F668u: goto label_19f668;
            case 0x19F66Cu: goto label_19f66c;
            case 0x19F670u: goto label_19f670;
            case 0x19F674u: goto label_19f674;
            case 0x19F678u: goto label_19f678;
            case 0x19F67Cu: goto label_19f67c;
            case 0x19F680u: goto label_19f680;
            case 0x19F684u: goto label_19f684;
            case 0x19F688u: goto label_19f688;
            case 0x19F68Cu: goto label_19f68c;
            case 0x19F690u: goto label_19f690;
            case 0x19F694u: goto label_19f694;
            case 0x19F698u: goto label_19f698;
            case 0x19F69Cu: goto label_19f69c;
            case 0x19F6A0u: goto label_19f6a0;
            case 0x19F6A4u: goto label_19f6a4;
            case 0x19F6A8u: goto label_19f6a8;
            case 0x19F6ACu: goto label_19f6ac;
            case 0x19F6B0u: goto label_19f6b0;
            case 0x19F6B4u: goto label_19f6b4;
            case 0x19F6B8u: goto label_19f6b8;
            case 0x19F6BCu: goto label_19f6bc;
            case 0x19F6C0u: goto label_19f6c0;
            case 0x19F6C4u: goto label_19f6c4;
            case 0x19F6C8u: goto label_19f6c8;
            case 0x19F6CCu: goto label_19f6cc;
            case 0x19F6D0u: goto label_19f6d0;
            case 0x19F6D4u: goto label_19f6d4;
            case 0x19F6D8u: goto label_19f6d8;
            case 0x19F6DCu: goto label_19f6dc;
            case 0x19F6E0u: goto label_19f6e0;
            case 0x19F6E4u: goto label_19f6e4;
            case 0x19F6E8u: goto label_19f6e8;
            case 0x19F6ECu: goto label_19f6ec;
            case 0x19F6F0u: goto label_19f6f0;
            case 0x19F6F4u: goto label_19f6f4;
            case 0x19F6F8u: goto label_19f6f8;
            case 0x19F6FCu: goto label_19f6fc;
            case 0x19F700u: goto label_19f700;
            case 0x19F704u: goto label_19f704;
            case 0x19F708u: goto label_19f708;
            case 0x19F70Cu: goto label_19f70c;
            case 0x19F710u: goto label_19f710;
            case 0x19F714u: goto label_19f714;
            case 0x19F718u: goto label_19f718;
            case 0x19F71Cu: goto label_19f71c;
            case 0x19F720u: goto label_19f720;
            case 0x19F724u: goto label_19f724;
            case 0x19F728u: goto label_19f728;
            case 0x19F72Cu: goto label_19f72c;
            case 0x19F730u: goto label_19f730;
            case 0x19F734u: goto label_19f734;
            case 0x19F738u: goto label_19f738;
            case 0x19F73Cu: goto label_19f73c;
            case 0x19F740u: goto label_19f740;
            case 0x19F744u: goto label_19f744;
            case 0x19F748u: goto label_19f748;
            case 0x19F74Cu: goto label_19f74c;
            case 0x19F750u: goto label_19f750;
            case 0x19F754u: goto label_19f754;
            case 0x19F758u: goto label_19f758;
            case 0x19F75Cu: goto label_19f75c;
            case 0x19F760u: goto label_19f760;
            case 0x19F764u: goto label_19f764;
            case 0x19F768u: goto label_19f768;
            case 0x19F76Cu: goto label_19f76c;
            case 0x19F770u: goto label_19f770;
            case 0x19F774u: goto label_19f774;
            case 0x19F778u: goto label_19f778;
            case 0x19F77Cu: goto label_19f77c;
            case 0x19F780u: goto label_19f780;
            case 0x19F784u: goto label_19f784;
            case 0x19F788u: goto label_19f788;
            case 0x19F78Cu: goto label_19f78c;
            case 0x19F790u: goto label_19f790;
            case 0x19F794u: goto label_19f794;
            case 0x19F798u: goto label_19f798;
            case 0x19F79Cu: goto label_19f79c;
            case 0x19F7A0u: goto label_19f7a0;
            case 0x19F7A4u: goto label_19f7a4;
            case 0x19F7A8u: goto label_19f7a8;
            case 0x19F7ACu: goto label_19f7ac;
            case 0x19F7B0u: goto label_19f7b0;
            case 0x19F7B4u: goto label_19f7b4;
            case 0x19F7B8u: goto label_19f7b8;
            case 0x19F7BCu: goto label_19f7bc;
            case 0x19F7C0u: goto label_19f7c0;
            case 0x19F7C4u: goto label_19f7c4;
            case 0x19F7C8u: goto label_19f7c8;
            case 0x19F7CCu: goto label_19f7cc;
            case 0x19F7D0u: goto label_19f7d0;
            case 0x19F7D4u: goto label_19f7d4;
            case 0x19F7D8u: goto label_19f7d8;
            case 0x19F7DCu: goto label_19f7dc;
            case 0x19F7E0u: goto label_19f7e0;
            case 0x19F7E4u: goto label_19f7e4;
            case 0x19F7E8u: goto label_19f7e8;
            case 0x19F7ECu: goto label_19f7ec;
            case 0x19F7F0u: goto label_19f7f0;
            case 0x19F7F4u: goto label_19f7f4;
            case 0x19F7F8u: goto label_19f7f8;
            case 0x19F7FCu: goto label_19f7fc;
            case 0x19F800u: goto label_19f800;
            case 0x19F804u: goto label_19f804;
            case 0x19F808u: goto label_19f808;
            case 0x19F80Cu: goto label_19f80c;
            case 0x19F810u: goto label_19f810;
            case 0x19F814u: goto label_19f814;
            case 0x19F818u: goto label_19f818;
            case 0x19F81Cu: goto label_19f81c;
            case 0x19F820u: goto label_19f820;
            case 0x19F824u: goto label_19f824;
            case 0x19F828u: goto label_19f828;
            case 0x19F82Cu: goto label_19f82c;
            case 0x19F830u: goto label_19f830;
            case 0x19F834u: goto label_19f834;
            case 0x19F838u: goto label_19f838;
            case 0x19F83Cu: goto label_19f83c;
            case 0x19F840u: goto label_19f840;
            case 0x19F844u: goto label_19f844;
            case 0x19F848u: goto label_19f848;
            case 0x19F84Cu: goto label_19f84c;
            case 0x19F850u: goto label_19f850;
            case 0x19F854u: goto label_19f854;
            case 0x19F858u: goto label_19f858;
            case 0x19F85Cu: goto label_19f85c;
            case 0x19F860u: goto label_19f860;
            case 0x19F864u: goto label_19f864;
            case 0x19F868u: goto label_19f868;
            case 0x19F86Cu: goto label_19f86c;
            case 0x19F870u: goto label_19f870;
            case 0x19F874u: goto label_19f874;
            case 0x19F878u: goto label_19f878;
            case 0x19F87Cu: goto label_19f87c;
            case 0x19F880u: goto label_19f880;
            case 0x19F884u: goto label_19f884;
            case 0x19F888u: goto label_19f888;
            case 0x19F88Cu: goto label_19f88c;
            case 0x19F890u: goto label_19f890;
            case 0x19F894u: goto label_19f894;
            case 0x19F898u: goto label_19f898;
            case 0x19F89Cu: goto label_19f89c;
            case 0x19F8A0u: goto label_19f8a0;
            case 0x19F8A4u: goto label_19f8a4;
            case 0x19F8A8u: goto label_19f8a8;
            case 0x19F8ACu: goto label_19f8ac;
            case 0x19F8B0u: goto label_19f8b0;
            case 0x19F8B4u: goto label_19f8b4;
            case 0x19F8B8u: goto label_19f8b8;
            case 0x19F8BCu: goto label_19f8bc;
            case 0x19F8C0u: goto label_19f8c0;
            case 0x19F8C4u: goto label_19f8c4;
            case 0x19F8C8u: goto label_19f8c8;
            case 0x19F8CCu: goto label_19f8cc;
            case 0x19F8D0u: goto label_19f8d0;
            case 0x19F8D4u: goto label_19f8d4;
            case 0x19F8D8u: goto label_19f8d8;
            case 0x19F8DCu: goto label_19f8dc;
            case 0x19F8E0u: goto label_19f8e0;
            case 0x19F8E4u: goto label_19f8e4;
            case 0x19F8E8u: goto label_19f8e8;
            case 0x19F8ECu: goto label_19f8ec;
            case 0x19F8F0u: goto label_19f8f0;
            case 0x19F8F4u: goto label_19f8f4;
            case 0x19F8F8u: goto label_19f8f8;
            case 0x19F8FCu: goto label_19f8fc;
            case 0x19F900u: goto label_19f900;
            case 0x19F904u: goto label_19f904;
            case 0x19F908u: goto label_19f908;
            case 0x19F90Cu: goto label_19f90c;
            case 0x19F910u: goto label_19f910;
            case 0x19F914u: goto label_19f914;
            case 0x19F918u: goto label_19f918;
            case 0x19F91Cu: goto label_19f91c;
            case 0x19F920u: goto label_19f920;
            case 0x19F924u: goto label_19f924;
            case 0x19F928u: goto label_19f928;
            case 0x19F92Cu: goto label_19f92c;
            case 0x19F930u: goto label_19f930;
            case 0x19F934u: goto label_19f934;
            case 0x19F938u: goto label_19f938;
            case 0x19F93Cu: goto label_19f93c;
            case 0x19F940u: goto label_19f940;
            case 0x19F944u: goto label_19f944;
            case 0x19F948u: goto label_19f948;
            case 0x19F94Cu: goto label_19f94c;
            case 0x19F950u: goto label_19f950;
            case 0x19F954u: goto label_19f954;
            case 0x19F958u: goto label_19f958;
            case 0x19F95Cu: goto label_19f95c;
            case 0x19F960u: goto label_19f960;
            case 0x19F964u: goto label_19f964;
            case 0x19F968u: goto label_19f968;
            case 0x19F96Cu: goto label_19f96c;
            case 0x19F970u: goto label_19f970;
            case 0x19F974u: goto label_19f974;
            case 0x19F978u: goto label_19f978;
            case 0x19F97Cu: goto label_19f97c;
            case 0x19F980u: goto label_19f980;
            case 0x19F984u: goto label_19f984;
            case 0x19F988u: goto label_19f988;
            case 0x19F98Cu: goto label_19f98c;
            case 0x19F990u: goto label_19f990;
            case 0x19F994u: goto label_19f994;
            case 0x19F998u: goto label_19f998;
            case 0x19F99Cu: goto label_19f99c;
            case 0x19F9A0u: goto label_19f9a0;
            case 0x19F9A4u: goto label_19f9a4;
            case 0x19F9A8u: goto label_19f9a8;
            case 0x19F9ACu: goto label_19f9ac;
            case 0x19F9B0u: goto label_19f9b0;
            case 0x19F9B4u: goto label_19f9b4;
            case 0x19F9B8u: goto label_19f9b8;
            case 0x19F9BCu: goto label_19f9bc;
            case 0x19F9C0u: goto label_19f9c0;
            case 0x19F9C4u: goto label_19f9c4;
            case 0x19F9C8u: goto label_19f9c8;
            case 0x19F9CCu: goto label_19f9cc;
            case 0x19F9D0u: goto label_19f9d0;
            case 0x19F9D4u: goto label_19f9d4;
            case 0x19F9D8u: goto label_19f9d8;
            case 0x19F9DCu: goto label_19f9dc;
            case 0x19F9E0u: goto label_19f9e0;
            case 0x19F9E4u: goto label_19f9e4;
            case 0x19F9E8u: goto label_19f9e8;
            case 0x19F9ECu: goto label_19f9ec;
            case 0x19F9F0u: goto label_19f9f0;
            case 0x19F9F4u: goto label_19f9f4;
            case 0x19F9F8u: goto label_19f9f8;
            case 0x19F9FCu: goto label_19f9fc;
            case 0x19FA00u: goto label_19fa00;
            case 0x19FA04u: goto label_19fa04;
            case 0x19FA08u: goto label_19fa08;
            case 0x19FA0Cu: goto label_19fa0c;
            case 0x19FA10u: goto label_19fa10;
            case 0x19FA14u: goto label_19fa14;
            case 0x19FA18u: goto label_19fa18;
            case 0x19FA1Cu: goto label_19fa1c;
            case 0x19FA20u: goto label_19fa20;
            case 0x19FA24u: goto label_19fa24;
            case 0x19FA28u: goto label_19fa28;
            case 0x19FA2Cu: goto label_19fa2c;
            case 0x19FA30u: goto label_19fa30;
            case 0x19FA34u: goto label_19fa34;
            case 0x19FA38u: goto label_19fa38;
            case 0x19FA3Cu: goto label_19fa3c;
            case 0x19FA40u: goto label_19fa40;
            case 0x19FA44u: goto label_19fa44;
            case 0x19FA48u: goto label_19fa48;
            case 0x19FA4Cu: goto label_19fa4c;
            case 0x19FA50u: goto label_19fa50;
            case 0x19FA54u: goto label_19fa54;
            case 0x19FA58u: goto label_19fa58;
            case 0x19FA5Cu: goto label_19fa5c;
            case 0x19FA60u: goto label_19fa60;
            case 0x19FA64u: goto label_19fa64;
            case 0x19FA68u: goto label_19fa68;
            case 0x19FA6Cu: goto label_19fa6c;
            case 0x19FA70u: goto label_19fa70;
            case 0x19FA74u: goto label_19fa74;
            case 0x19FA78u: goto label_19fa78;
            case 0x19FA7Cu: goto label_19fa7c;
            case 0x19FA80u: goto label_19fa80;
            case 0x19FA84u: goto label_19fa84;
            case 0x19FA88u: goto label_19fa88;
            case 0x19FA8Cu: goto label_19fa8c;
            case 0x19FA90u: goto label_19fa90;
            case 0x19FA94u: goto label_19fa94;
            case 0x19FA98u: goto label_19fa98;
            case 0x19FA9Cu: goto label_19fa9c;
            case 0x19FAA0u: goto label_19faa0;
            case 0x19FAA4u: goto label_19faa4;
            case 0x19FAA8u: goto label_19faa8;
            case 0x19FAACu: goto label_19faac;
            case 0x19FAB0u: goto label_19fab0;
            case 0x19FAB4u: goto label_19fab4;
            case 0x19FAB8u: goto label_19fab8;
            case 0x19FABCu: goto label_19fabc;
            case 0x19FAC0u: goto label_19fac0;
            case 0x19FAC4u: goto label_19fac4;
            case 0x19FAC8u: goto label_19fac8;
            case 0x19FACCu: goto label_19facc;
            case 0x19FAD0u: goto label_19fad0;
            case 0x19FAD4u: goto label_19fad4;
            case 0x19FAD8u: goto label_19fad8;
            case 0x19FADCu: goto label_19fadc;
            case 0x19FAE0u: goto label_19fae0;
            case 0x19FAE4u: goto label_19fae4;
            case 0x19FAE8u: goto label_19fae8;
            case 0x19FAECu: goto label_19faec;
            case 0x19FAF0u: goto label_19faf0;
            case 0x19FAF4u: goto label_19faf4;
            case 0x19FAF8u: goto label_19faf8;
            case 0x19FAFCu: goto label_19fafc;
            case 0x19FB00u: goto label_19fb00;
            case 0x19FB04u: goto label_19fb04;
            case 0x19FB08u: goto label_19fb08;
            case 0x19FB0Cu: goto label_19fb0c;
            case 0x19FB10u: goto label_19fb10;
            case 0x19FB14u: goto label_19fb14;
            case 0x19FB18u: goto label_19fb18;
            case 0x19FB1Cu: goto label_19fb1c;
            case 0x19FB20u: goto label_19fb20;
            case 0x19FB24u: goto label_19fb24;
            case 0x19FB28u: goto label_19fb28;
            case 0x19FB2Cu: goto label_19fb2c;
            case 0x19FB30u: goto label_19fb30;
            case 0x19FB34u: goto label_19fb34;
            case 0x19FB38u: goto label_19fb38;
            case 0x19FB3Cu: goto label_19fb3c;
            case 0x19FB40u: goto label_19fb40;
            case 0x19FB44u: goto label_19fb44;
            case 0x19FB48u: goto label_19fb48;
            case 0x19FB4Cu: goto label_19fb4c;
            case 0x19FB50u: goto label_19fb50;
            case 0x19FB54u: goto label_19fb54;
            case 0x19FB58u: goto label_19fb58;
            case 0x19FB5Cu: goto label_19fb5c;
            case 0x19FB60u: goto label_19fb60;
            case 0x19FB64u: goto label_19fb64;
            case 0x19FB68u: goto label_19fb68;
            case 0x19FB6Cu: goto label_19fb6c;
            case 0x19FB70u: goto label_19fb70;
            case 0x19FB74u: goto label_19fb74;
            case 0x19FB78u: goto label_19fb78;
            case 0x19FB7Cu: goto label_19fb7c;
            case 0x19FB80u: goto label_19fb80;
            case 0x19FB84u: goto label_19fb84;
            case 0x19FB88u: goto label_19fb88;
            case 0x19FB8Cu: goto label_19fb8c;
            case 0x19FB90u: goto label_19fb90;
            case 0x19FB94u: goto label_19fb94;
            case 0x19FB98u: goto label_19fb98;
            case 0x19FB9Cu: goto label_19fb9c;
            case 0x19FBA0u: goto label_19fba0;
            case 0x19FBA4u: goto label_19fba4;
            case 0x19FBA8u: goto label_19fba8;
            case 0x19FBACu: goto label_19fbac;
            case 0x19FBB0u: goto label_19fbb0;
            case 0x19FBB4u: goto label_19fbb4;
            case 0x19FBB8u: goto label_19fbb8;
            case 0x19FBBCu: goto label_19fbbc;
            case 0x19FBC0u: goto label_19fbc0;
            case 0x19FBC4u: goto label_19fbc4;
            case 0x19FBC8u: goto label_19fbc8;
            case 0x19FBCCu: goto label_19fbcc;
            case 0x19FBD0u: goto label_19fbd0;
            case 0x19FBD4u: goto label_19fbd4;
            case 0x19FBD8u: goto label_19fbd8;
            case 0x19FBDCu: goto label_19fbdc;
            case 0x19FBE0u: goto label_19fbe0;
            case 0x19FBE4u: goto label_19fbe4;
            case 0x19FBE8u: goto label_19fbe8;
            case 0x19FBECu: goto label_19fbec;
            case 0x19FBF0u: goto label_19fbf0;
            case 0x19FBF4u: goto label_19fbf4;
            case 0x19FBF8u: goto label_19fbf8;
            case 0x19FBFCu: goto label_19fbfc;
            case 0x19FC00u: goto label_19fc00;
            case 0x19FC04u: goto label_19fc04;
            case 0x19FC08u: goto label_19fc08;
            case 0x19FC0Cu: goto label_19fc0c;
            case 0x19FC10u: goto label_19fc10;
            case 0x19FC14u: goto label_19fc14;
            case 0x19FC18u: goto label_19fc18;
            case 0x19FC1Cu: goto label_19fc1c;
            case 0x19FC20u: goto label_19fc20;
            case 0x19FC24u: goto label_19fc24;
            case 0x19FC28u: goto label_19fc28;
            case 0x19FC2Cu: goto label_19fc2c;
            case 0x19FC30u: goto label_19fc30;
            case 0x19FC34u: goto label_19fc34;
            case 0x19FC38u: goto label_19fc38;
            case 0x19FC3Cu: goto label_19fc3c;
            case 0x19FC40u: goto label_19fc40;
            case 0x19FC44u: goto label_19fc44;
            case 0x19FC48u: goto label_19fc48;
            case 0x19FC4Cu: goto label_19fc4c;
            case 0x19FC50u: goto label_19fc50;
            case 0x19FC54u: goto label_19fc54;
            case 0x19FC58u: goto label_19fc58;
            case 0x19FC5Cu: goto label_19fc5c;
            case 0x19FC60u: goto label_19fc60;
            case 0x19FC64u: goto label_19fc64;
            case 0x19FC68u: goto label_19fc68;
            case 0x19FC6Cu: goto label_19fc6c;
            case 0x19FC70u: goto label_19fc70;
            case 0x19FC74u: goto label_19fc74;
            case 0x19FC78u: goto label_19fc78;
            case 0x19FC7Cu: goto label_19fc7c;
            case 0x19FC80u: goto label_19fc80;
            case 0x19FC84u: goto label_19fc84;
            case 0x19FC88u: goto label_19fc88;
            case 0x19FC8Cu: goto label_19fc8c;
            case 0x19FC90u: goto label_19fc90;
            case 0x19FC94u: goto label_19fc94;
            case 0x19FC98u: goto label_19fc98;
            case 0x19FC9Cu: goto label_19fc9c;
            case 0x19FCA0u: goto label_19fca0;
            case 0x19FCA4u: goto label_19fca4;
            case 0x19FCA8u: goto label_19fca8;
            case 0x19FCACu: goto label_19fcac;
            case 0x19FCB0u: goto label_19fcb0;
            case 0x19FCB4u: goto label_19fcb4;
            case 0x19FCB8u: goto label_19fcb8;
            case 0x19FCBCu: goto label_19fcbc;
            case 0x19FCC0u: goto label_19fcc0;
            case 0x19FCC4u: goto label_19fcc4;
            case 0x19FCC8u: goto label_19fcc8;
            case 0x19FCCCu: goto label_19fccc;
            case 0x19FCD0u: goto label_19fcd0;
            case 0x19FCD4u: goto label_19fcd4;
            case 0x19FCD8u: goto label_19fcd8;
            case 0x19FCDCu: goto label_19fcdc;
            case 0x19FCE0u: goto label_19fce0;
            case 0x19FCE4u: goto label_19fce4;
            case 0x19FCE8u: goto label_19fce8;
            case 0x19FCECu: goto label_19fcec;
            case 0x19FCF0u: goto label_19fcf0;
            case 0x19FCF4u: goto label_19fcf4;
            case 0x19FCF8u: goto label_19fcf8;
            case 0x19FCFCu: goto label_19fcfc;
            case 0x19FD00u: goto label_19fd00;
            case 0x19FD04u: goto label_19fd04;
            case 0x19FD08u: goto label_19fd08;
            case 0x19FD0Cu: goto label_19fd0c;
            case 0x19FD10u: goto label_19fd10;
            case 0x19FD14u: goto label_19fd14;
            case 0x19FD18u: goto label_19fd18;
            case 0x19FD1Cu: goto label_19fd1c;
            case 0x19FD20u: goto label_19fd20;
            case 0x19FD24u: goto label_19fd24;
            case 0x19FD28u: goto label_19fd28;
            case 0x19FD2Cu: goto label_19fd2c;
            case 0x19FD30u: goto label_19fd30;
            case 0x19FD34u: goto label_19fd34;
            case 0x19FD38u: goto label_19fd38;
            case 0x19FD3Cu: goto label_19fd3c;
            case 0x19FD40u: goto label_19fd40;
            case 0x19FD44u: goto label_19fd44;
            case 0x19FD48u: goto label_19fd48;
            case 0x19FD4Cu: goto label_19fd4c;
            case 0x19FD50u: goto label_19fd50;
            case 0x19FD54u: goto label_19fd54;
            case 0x19FD58u: goto label_19fd58;
            case 0x19FD5Cu: goto label_19fd5c;
            case 0x19FD60u: goto label_19fd60;
            case 0x19FD64u: goto label_19fd64;
            case 0x19FD68u: goto label_19fd68;
            case 0x19FD6Cu: goto label_19fd6c;
            case 0x19FD70u: goto label_19fd70;
            case 0x19FD74u: goto label_19fd74;
            case 0x19FD78u: goto label_19fd78;
            case 0x19FD7Cu: goto label_19fd7c;
            case 0x19FD80u: goto label_19fd80;
            case 0x19FD84u: goto label_19fd84;
            case 0x19FD88u: goto label_19fd88;
            case 0x19FD8Cu: goto label_19fd8c;
            case 0x19FD90u: goto label_19fd90;
            case 0x19FD94u: goto label_19fd94;
            case 0x19FD98u: goto label_19fd98;
            case 0x19FD9Cu: goto label_19fd9c;
            case 0x19FDA0u: goto label_19fda0;
            case 0x19FDA4u: goto label_19fda4;
            case 0x19FDA8u: goto label_19fda8;
            case 0x19FDACu: goto label_19fdac;
            case 0x19FDB0u: goto label_19fdb0;
            case 0x19FDB4u: goto label_19fdb4;
            case 0x19FDB8u: goto label_19fdb8;
            case 0x19FDBCu: goto label_19fdbc;
            case 0x19FDC0u: goto label_19fdc0;
            case 0x19FDC4u: goto label_19fdc4;
            case 0x19FDC8u: goto label_19fdc8;
            case 0x19FDCCu: goto label_19fdcc;
            case 0x19FDD0u: goto label_19fdd0;
            case 0x19FDD4u: goto label_19fdd4;
            case 0x19FDD8u: goto label_19fdd8;
            case 0x19FDDCu: goto label_19fddc;
            case 0x19FDE0u: goto label_19fde0;
            case 0x19FDE4u: goto label_19fde4;
            case 0x19FDE8u: goto label_19fde8;
            case 0x19FDECu: goto label_19fdec;
            case 0x19FDF0u: goto label_19fdf0;
            case 0x19FDF4u: goto label_19fdf4;
            case 0x19FDF8u: goto label_19fdf8;
            case 0x19FDFCu: goto label_19fdfc;
            case 0x19FE00u: goto label_19fe00;
            case 0x19FE04u: goto label_19fe04;
            case 0x19FE08u: goto label_19fe08;
            case 0x19FE0Cu: goto label_19fe0c;
            case 0x19FE10u: goto label_19fe10;
            case 0x19FE14u: goto label_19fe14;
            case 0x19FE18u: goto label_19fe18;
            case 0x19FE1Cu: goto label_19fe1c;
            case 0x19FE20u: goto label_19fe20;
            case 0x19FE24u: goto label_19fe24;
            case 0x19FE28u: goto label_19fe28;
            case 0x19FE2Cu: goto label_19fe2c;
            case 0x19FE30u: goto label_19fe30;
            case 0x19FE34u: goto label_19fe34;
            case 0x19FE38u: goto label_19fe38;
            case 0x19FE3Cu: goto label_19fe3c;
            case 0x19FE40u: goto label_19fe40;
            case 0x19FE44u: goto label_19fe44;
            case 0x19FE48u: goto label_19fe48;
            case 0x19FE4Cu: goto label_19fe4c;
            case 0x19FE50u: goto label_19fe50;
            case 0x19FE54u: goto label_19fe54;
            case 0x19FE58u: goto label_19fe58;
            case 0x19FE5Cu: goto label_19fe5c;
            case 0x19FE60u: goto label_19fe60;
            case 0x19FE64u: goto label_19fe64;
            case 0x19FE68u: goto label_19fe68;
            case 0x19FE6Cu: goto label_19fe6c;
            case 0x19FE70u: goto label_19fe70;
            case 0x19FE74u: goto label_19fe74;
            case 0x19FE78u: goto label_19fe78;
            case 0x19FE7Cu: goto label_19fe7c;
            case 0x19FE80u: goto label_19fe80;
            case 0x19FE84u: goto label_19fe84;
            case 0x19FE88u: goto label_19fe88;
            case 0x19FE8Cu: goto label_19fe8c;
            case 0x19FE90u: goto label_19fe90;
            case 0x19FE94u: goto label_19fe94;
            case 0x19FE98u: goto label_19fe98;
            case 0x19FE9Cu: goto label_19fe9c;
            case 0x19FEA0u: goto label_19fea0;
            case 0x19FEA4u: goto label_19fea4;
            case 0x19FEA8u: goto label_19fea8;
            case 0x19FEACu: goto label_19feac;
            case 0x19FEB0u: goto label_19feb0;
            case 0x19FEB4u: goto label_19feb4;
            case 0x19FEB8u: goto label_19feb8;
            case 0x19FEBCu: goto label_19febc;
            case 0x19FEC0u: goto label_19fec0;
            case 0x19FEC4u: goto label_19fec4;
            case 0x19FEC8u: goto label_19fec8;
            case 0x19FECCu: goto label_19fecc;
            case 0x19FED0u: goto label_19fed0;
            case 0x19FED4u: goto label_19fed4;
            case 0x19FED8u: goto label_19fed8;
            case 0x19FEDCu: goto label_19fedc;
            case 0x19FEE0u: goto label_19fee0;
            case 0x19FEE4u: goto label_19fee4;
            case 0x19FEE8u: goto label_19fee8;
            case 0x19FEECu: goto label_19feec;
            case 0x19FEF0u: goto label_19fef0;
            case 0x19FEF4u: goto label_19fef4;
            case 0x19FEF8u: goto label_19fef8;
            case 0x19FEFCu: goto label_19fefc;
            case 0x19FF00u: goto label_19ff00;
            case 0x19FF04u: goto label_19ff04;
            case 0x19FF08u: goto label_19ff08;
            case 0x19FF0Cu: goto label_19ff0c;
            case 0x19FF10u: goto label_19ff10;
            case 0x19FF14u: goto label_19ff14;
            case 0x19FF18u: goto label_19ff18;
            case 0x19FF1Cu: goto label_19ff1c;
            case 0x19FF20u: goto label_19ff20;
            case 0x19FF24u: goto label_19ff24;
            case 0x19FF28u: goto label_19ff28;
            case 0x19FF2Cu: goto label_19ff2c;
            case 0x19FF30u: goto label_19ff30;
            case 0x19FF34u: goto label_19ff34;
            case 0x19FF38u: goto label_19ff38;
            case 0x19FF3Cu: goto label_19ff3c;
            case 0x19FF40u: goto label_19ff40;
            case 0x19FF44u: goto label_19ff44;
            case 0x19FF48u: goto label_19ff48;
            case 0x19FF4Cu: goto label_19ff4c;
            case 0x19FF50u: goto label_19ff50;
            case 0x19FF54u: goto label_19ff54;
            case 0x19FF58u: goto label_19ff58;
            case 0x19FF5Cu: goto label_19ff5c;
            case 0x19FF60u: goto label_19ff60;
            case 0x19FF64u: goto label_19ff64;
            case 0x19FF68u: goto label_19ff68;
            case 0x19FF6Cu: goto label_19ff6c;
            case 0x19FF70u: goto label_19ff70;
            case 0x19FF74u: goto label_19ff74;
            case 0x19FF78u: goto label_19ff78;
            case 0x19FF7Cu: goto label_19ff7c;
            case 0x19FF80u: goto label_19ff80;
            case 0x19FF84u: goto label_19ff84;
            case 0x19FF88u: goto label_19ff88;
            case 0x19FF8Cu: goto label_19ff8c;
            case 0x19FF90u: goto label_19ff90;
            case 0x19FF94u: goto label_19ff94;
            case 0x19FF98u: goto label_19ff98;
            case 0x19FF9Cu: goto label_19ff9c;
            case 0x19FFA0u: goto label_19ffa0;
            case 0x19FFA4u: goto label_19ffa4;
            case 0x19FFA8u: goto label_19ffa8;
            case 0x19FFACu: goto label_19ffac;
            case 0x19FFB0u: goto label_19ffb0;
            case 0x19FFB4u: goto label_19ffb4;
            case 0x19FFB8u: goto label_19ffb8;
            case 0x19FFBCu: goto label_19ffbc;
            case 0x19FFC0u: goto label_19ffc0;
            case 0x19FFC4u: goto label_19ffc4;
            case 0x19FFC8u: goto label_19ffc8;
            case 0x19FFCCu: goto label_19ffcc;
            case 0x19FFD0u: goto label_19ffd0;
            case 0x19FFD4u: goto label_19ffd4;
            case 0x19FFD8u: goto label_19ffd8;
            case 0x19FFDCu: goto label_19ffdc;
            case 0x19FFE0u: goto label_19ffe0;
            case 0x19FFE4u: goto label_19ffe4;
            case 0x19FFE8u: goto label_19ffe8;
            case 0x19FFECu: goto label_19ffec;
            case 0x19FFF0u: goto label_19fff0;
            case 0x19FFF4u: goto label_19fff4;
            case 0x19FFF8u: goto label_19fff8;
            case 0x19FFFCu: goto label_19fffc;
            case 0x1A0000u: goto label_1a0000;
            case 0x1A0004u: goto label_1a0004;
            case 0x1A0008u: goto label_1a0008;
            case 0x1A000Cu: goto label_1a000c;
            case 0x1A0010u: goto label_1a0010;
            case 0x1A0014u: goto label_1a0014;
            case 0x1A0018u: goto label_1a0018;
            case 0x1A001Cu: goto label_1a001c;
            case 0x1A0020u: goto label_1a0020;
            case 0x1A0024u: goto label_1a0024;
            case 0x1A0028u: goto label_1a0028;
            case 0x1A002Cu: goto label_1a002c;
            case 0x1A0030u: goto label_1a0030;
            case 0x1A0034u: goto label_1a0034;
            case 0x1A0038u: goto label_1a0038;
            case 0x1A003Cu: goto label_1a003c;
            case 0x1A0040u: goto label_1a0040;
            case 0x1A0044u: goto label_1a0044;
            case 0x1A0048u: goto label_1a0048;
            case 0x1A004Cu: goto label_1a004c;
            case 0x1A0050u: goto label_1a0050;
            case 0x1A0054u: goto label_1a0054;
            case 0x1A0058u: goto label_1a0058;
            case 0x1A005Cu: goto label_1a005c;
            case 0x1A0060u: goto label_1a0060;
            case 0x1A0064u: goto label_1a0064;
            case 0x1A0068u: goto label_1a0068;
            case 0x1A006Cu: goto label_1a006c;
            case 0x1A0070u: goto label_1a0070;
            case 0x1A0074u: goto label_1a0074;
            case 0x1A0078u: goto label_1a0078;
            case 0x1A007Cu: goto label_1a007c;
            case 0x1A0080u: goto label_1a0080;
            case 0x1A0084u: goto label_1a0084;
            case 0x1A0088u: goto label_1a0088;
            case 0x1A008Cu: goto label_1a008c;
            case 0x1A0090u: goto label_1a0090;
            case 0x1A0094u: goto label_1a0094;
            case 0x1A0098u: goto label_1a0098;
            case 0x1A009Cu: goto label_1a009c;
            case 0x1A00A0u: goto label_1a00a0;
            case 0x1A00A4u: goto label_1a00a4;
            case 0x1A00A8u: goto label_1a00a8;
            case 0x1A00ACu: goto label_1a00ac;
            case 0x1A00B0u: goto label_1a00b0;
            case 0x1A00B4u: goto label_1a00b4;
            case 0x1A00B8u: goto label_1a00b8;
            case 0x1A00BCu: goto label_1a00bc;
            case 0x1A00C0u: goto label_1a00c0;
            case 0x1A00C4u: goto label_1a00c4;
            case 0x1A00C8u: goto label_1a00c8;
            case 0x1A00CCu: goto label_1a00cc;
            case 0x1A00D0u: goto label_1a00d0;
            case 0x1A00D4u: goto label_1a00d4;
            case 0x1A00D8u: goto label_1a00d8;
            case 0x1A00DCu: goto label_1a00dc;
            case 0x1A00E0u: goto label_1a00e0;
            case 0x1A00E4u: goto label_1a00e4;
            case 0x1A00E8u: goto label_1a00e8;
            case 0x1A00ECu: goto label_1a00ec;
            case 0x1A00F0u: goto label_1a00f0;
            case 0x1A00F4u: goto label_1a00f4;
            case 0x1A00F8u: goto label_1a00f8;
            case 0x1A00FCu: goto label_1a00fc;
            case 0x1A0100u: goto label_1a0100;
            case 0x1A0104u: goto label_1a0104;
            case 0x1A0108u: goto label_1a0108;
            case 0x1A010Cu: goto label_1a010c;
            case 0x1A0110u: goto label_1a0110;
            case 0x1A0114u: goto label_1a0114;
            case 0x1A0118u: goto label_1a0118;
            case 0x1A011Cu: goto label_1a011c;
            case 0x1A0120u: goto label_1a0120;
            case 0x1A0124u: goto label_1a0124;
            case 0x1A0128u: goto label_1a0128;
            case 0x1A012Cu: goto label_1a012c;
            case 0x1A0130u: goto label_1a0130;
            case 0x1A0134u: goto label_1a0134;
            case 0x1A0138u: goto label_1a0138;
            case 0x1A013Cu: goto label_1a013c;
            case 0x1A0140u: goto label_1a0140;
            case 0x1A0144u: goto label_1a0144;
            case 0x1A0148u: goto label_1a0148;
            case 0x1A014Cu: goto label_1a014c;
            case 0x1A0150u: goto label_1a0150;
            case 0x1A0154u: goto label_1a0154;
            case 0x1A0158u: goto label_1a0158;
            case 0x1A015Cu: goto label_1a015c;
            case 0x1A0160u: goto label_1a0160;
            case 0x1A0164u: goto label_1a0164;
            case 0x1A0168u: goto label_1a0168;
            case 0x1A016Cu: goto label_1a016c;
            case 0x1A0170u: goto label_1a0170;
            case 0x1A0174u: goto label_1a0174;
            case 0x1A0178u: goto label_1a0178;
            case 0x1A017Cu: goto label_1a017c;
            case 0x1A0180u: goto label_1a0180;
            case 0x1A0184u: goto label_1a0184;
            case 0x1A0188u: goto label_1a0188;
            case 0x1A018Cu: goto label_1a018c;
            case 0x1A0190u: goto label_1a0190;
            case 0x1A0194u: goto label_1a0194;
            case 0x1A0198u: goto label_1a0198;
            case 0x1A019Cu: goto label_1a019c;
            case 0x1A01A0u: goto label_1a01a0;
            case 0x1A01A4u: goto label_1a01a4;
            case 0x1A01A8u: goto label_1a01a8;
            case 0x1A01ACu: goto label_1a01ac;
            case 0x1A01B0u: goto label_1a01b0;
            case 0x1A01B4u: goto label_1a01b4;
            case 0x1A01B8u: goto label_1a01b8;
            case 0x1A01BCu: goto label_1a01bc;
            case 0x1A01C0u: goto label_1a01c0;
            case 0x1A01C4u: goto label_1a01c4;
            case 0x1A01C8u: goto label_1a01c8;
            case 0x1A01CCu: goto label_1a01cc;
            case 0x1A01D0u: goto label_1a01d0;
            case 0x1A01D4u: goto label_1a01d4;
            case 0x1A01D8u: goto label_1a01d8;
            case 0x1A01DCu: goto label_1a01dc;
            case 0x1A01E0u: goto label_1a01e0;
            case 0x1A01E4u: goto label_1a01e4;
            case 0x1A01E8u: goto label_1a01e8;
            case 0x1A01ECu: goto label_1a01ec;
            case 0x1A01F0u: goto label_1a01f0;
            case 0x1A01F4u: goto label_1a01f4;
            case 0x1A01F8u: goto label_1a01f8;
            case 0x1A01FCu: goto label_1a01fc;
            case 0x1A0200u: goto label_1a0200;
            case 0x1A0204u: goto label_1a0204;
            case 0x1A0208u: goto label_1a0208;
            case 0x1A020Cu: goto label_1a020c;
            case 0x1A0210u: goto label_1a0210;
            case 0x1A0214u: goto label_1a0214;
            case 0x1A0218u: goto label_1a0218;
            case 0x1A021Cu: goto label_1a021c;
            case 0x1A0220u: goto label_1a0220;
            case 0x1A0224u: goto label_1a0224;
            case 0x1A0228u: goto label_1a0228;
            case 0x1A022Cu: goto label_1a022c;
            case 0x1A0230u: goto label_1a0230;
            case 0x1A0234u: goto label_1a0234;
            case 0x1A0238u: goto label_1a0238;
            case 0x1A023Cu: goto label_1a023c;
            case 0x1A0240u: goto label_1a0240;
            case 0x1A0244u: goto label_1a0244;
            case 0x1A0248u: goto label_1a0248;
            case 0x1A024Cu: goto label_1a024c;
            case 0x1A0250u: goto label_1a0250;
            case 0x1A0254u: goto label_1a0254;
            case 0x1A0258u: goto label_1a0258;
            case 0x1A025Cu: goto label_1a025c;
            case 0x1A0260u: goto label_1a0260;
            case 0x1A0264u: goto label_1a0264;
            case 0x1A0268u: goto label_1a0268;
            case 0x1A026Cu: goto label_1a026c;
            case 0x1A0270u: goto label_1a0270;
            case 0x1A0274u: goto label_1a0274;
            case 0x1A0278u: goto label_1a0278;
            case 0x1A027Cu: goto label_1a027c;
            case 0x1A0280u: goto label_1a0280;
            case 0x1A0284u: goto label_1a0284;
            case 0x1A0288u: goto label_1a0288;
            case 0x1A028Cu: goto label_1a028c;
            case 0x1A0290u: goto label_1a0290;
            case 0x1A0294u: goto label_1a0294;
            case 0x1A0298u: goto label_1a0298;
            case 0x1A029Cu: goto label_1a029c;
            case 0x1A02A0u: goto label_1a02a0;
            case 0x1A02A4u: goto label_1a02a4;
            case 0x1A02A8u: goto label_1a02a8;
            case 0x1A02ACu: goto label_1a02ac;
            case 0x1A02B0u: goto label_1a02b0;
            case 0x1A02B4u: goto label_1a02b4;
            case 0x1A02B8u: goto label_1a02b8;
            case 0x1A02BCu: goto label_1a02bc;
            case 0x1A02C0u: goto label_1a02c0;
            case 0x1A02C4u: goto label_1a02c4;
            case 0x1A02C8u: goto label_1a02c8;
            case 0x1A02CCu: goto label_1a02cc;
            case 0x1A02D0u: goto label_1a02d0;
            case 0x1A02D4u: goto label_1a02d4;
            case 0x1A02D8u: goto label_1a02d8;
            case 0x1A02DCu: goto label_1a02dc;
            case 0x1A02E0u: goto label_1a02e0;
            case 0x1A02E4u: goto label_1a02e4;
            case 0x1A02E8u: goto label_1a02e8;
            case 0x1A02ECu: goto label_1a02ec;
            case 0x1A02F0u: goto label_1a02f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a02ec:
    ctx->pc = 0x1A02F4u;
}
