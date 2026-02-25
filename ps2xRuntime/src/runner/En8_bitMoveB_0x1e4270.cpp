#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En8_bitMoveB
// Address: 0x1e4270 - 0x1e4f54
void En8_bitMoveB_0x1e4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En8_bitMoveB_0x1e4270");
#endif

    ctx->pc = 0x1e4270u;

label_1e4270:
    // 0x1e4270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e4270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e4274:
    // 0x1e4274: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e4274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e4278:
    // 0x1e4278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e427c:
    // 0x1e427c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e427cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4280:
    // 0x1e4280: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4284:
    // 0x1e4284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4288:
    // 0x1e4288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e428c:
    // 0x1e428c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e428cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4290:
    // 0x1e4290: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e4290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4294:
    // 0x1e4294: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e4298:
    // 0x1e4298: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e429c:
    // 0x1e429c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e429cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e42a0:
    // 0x1e42a0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e42a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e42a4:
    // 0x1e42a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e42a8:
    // 0x1e42a8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e42ac:
    // 0x1e42ac: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e42acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e42b0:
    // 0x1e42b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e42b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e42b4:
    // 0x1e42b4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e42b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e42b8:
    // 0x1e42b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e42bc:
    // 0x1e42bc: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x1e42bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e42c0:
    // 0x1e42c0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1e42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e42c4:
    // 0x1e42c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e42c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e42c8:
    // 0x1e42c8: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1e42c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1e42cc:
    // 0x1e42cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e42d0:
    // 0x1e42d0: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e42d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e42d4:
    // 0x1e42d4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e42d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e42d8:
    // 0x1e42d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e42d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e42dc:
    // 0x1e42dc: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e42dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e42e0:
    // 0x1e42e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e42e4:
    // 0x1e42e4: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e42e8:
    // 0x1e42e8: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e42ec:
    // 0x1e42ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e42ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e42f0:
    // 0x1e42f0: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e42f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e42f4:
    // 0x1e42f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e42f8:
    // 0x1e42f8: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1e42f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e42fc:
    // 0x1e42fc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4300:
    // 0x1e4300: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e4300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e4304:
    // 0x1e4304: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1e4304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1e4308:
    // 0x1e4308: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e430c:
    // 0x1e430c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4310:
    // 0x1e4310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4314:
    // 0x1e4314: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e4318:
    if (ctx->pc == 0x1E4318u) {
        ctx->pc = 0x1E4318u;
            // 0x1e4318: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E431Cu;
        goto label_1e431c;
    }
    ctx->pc = 0x1E4314u;
    {
        const bool branch_taken_0x1e4314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4314u;
            // 0x1e4318: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4314) {
            ctx->pc = 0x1E4338u;
            goto label_1e4338;
        }
    }
    ctx->pc = 0x1E431Cu;
label_1e431c:
    // 0x1e431c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e431cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e4320:
    // 0x1e4320: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4324:
    // 0x1e4324: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4328:
    // 0x1e4328: 0x0  nop
    ctx->pc = 0x1e4328u;
    // NOP
label_1e432c:
    // 0x1e432c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e432cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4330:
    // 0x1e4330: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e4330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e4334:
    // 0x1e4334: 0x0  nop
    ctx->pc = 0x1e4334u;
    // NOP
label_1e4338:
    // 0x1e4338: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e4338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e433c:
    // 0x1e433c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e433cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e4340:
    // 0x1e4340: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4340u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4344:
    // 0x1e4344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4348:
    // 0x1e4348: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e4348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e434c:
    // 0x1e434c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e434cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4350:
    // 0x1e4350: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e4354:
    if (ctx->pc == 0x1E4354u) {
        ctx->pc = 0x1E4354u;
            // 0x1e4354: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E4358u;
        goto label_1e4358;
    }
    ctx->pc = 0x1E4350u;
    {
        const bool branch_taken_0x1e4350 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4350u;
            // 0x1e4354: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4350) {
            ctx->pc = 0x1E4370u;
            goto label_1e4370;
        }
    }
    ctx->pc = 0x1E4358u;
label_1e4358:
    // 0x1e4358: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e435c:
    // 0x1e435c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e435cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4360:
    // 0x1e4360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4364:
    // 0x1e4364: 0x0  nop
    ctx->pc = 0x1e4364u;
    // NOP
label_1e4368:
    // 0x1e4368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e4368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e436c:
    // 0x1e436c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e436cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e4370:
    // 0x1e4370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4374:
    // 0x1e4374: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e4374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e4378:
    // 0x1e4378: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4378u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e437c:
    // 0x1e437c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e437cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4380:
    // 0x1e4380: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e4380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4384:
    // 0x1e4384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4388:
    // 0x1e4388: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e438c:
    if (ctx->pc == 0x1E438Cu) {
        ctx->pc = 0x1E438Cu;
            // 0x1e438c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E4390u;
        goto label_1e4390;
    }
    ctx->pc = 0x1E4388u;
    {
        const bool branch_taken_0x1e4388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4388u;
            // 0x1e438c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4388) {
            ctx->pc = 0x1E43A8u;
            goto label_1e43a8;
        }
    }
    ctx->pc = 0x1E4390u;
label_1e4390:
    // 0x1e4390: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e4390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e4394:
    // 0x1e4394: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4394u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4398:
    // 0x1e4398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e439c:
    // 0x1e439c: 0x0  nop
    ctx->pc = 0x1e439cu;
    // NOP
label_1e43a0:
    // 0x1e43a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e43a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e43a4:
    // 0x1e43a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e43a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e43a8:
    // 0x1e43a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e43ac:
    // 0x1e43ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e43acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e43b0:
    // 0x1e43b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e43b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e43b4:
    // 0x1e43b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e43b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e43b8:
    // 0x1e43b8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e43b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e43bc:
    // 0x1e43bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e43bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e43c0:
    // 0x1e43c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e43c4:
    if (ctx->pc == 0x1E43C4u) {
        ctx->pc = 0x1E43C4u;
            // 0x1e43c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E43C8u;
        goto label_1e43c8;
    }
    ctx->pc = 0x1E43C0u;
    {
        const bool branch_taken_0x1e43c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E43C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43C0u;
            // 0x1e43c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43c0) {
            ctx->pc = 0x1E43E0u;
            goto label_1e43e0;
        }
    }
    ctx->pc = 0x1E43C8u;
label_1e43c8:
    // 0x1e43c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e43cc:
    // 0x1e43cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e43ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e43d0:
    // 0x1e43d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e43d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e43d4:
    // 0x1e43d4: 0x0  nop
    ctx->pc = 0x1e43d4u;
    // NOP
label_1e43d8:
    // 0x1e43d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e43d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e43dc:
    // 0x1e43dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e43dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e43e0:
    // 0x1e43e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e43e4:
    // 0x1e43e4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e43e8:
    // 0x1e43e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e43e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e43ec:
    // 0x1e43ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e43ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e43f0:
    // 0x1e43f0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e43f4:
    // 0x1e43f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e43f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e43f8:
    // 0x1e43f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e43fc:
    if (ctx->pc == 0x1E43FCu) {
        ctx->pc = 0x1E43FCu;
            // 0x1e43fc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E4400u;
        goto label_1e4400;
    }
    ctx->pc = 0x1E43F8u;
    {
        const bool branch_taken_0x1e43f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E43FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43F8u;
            // 0x1e43fc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43f8) {
            ctx->pc = 0x1E4418u;
            goto label_1e4418;
        }
    }
    ctx->pc = 0x1E4400u;
label_1e4400:
    // 0x1e4400: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e4404:
    // 0x1e4404: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4404u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4408:
    // 0x1e4408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e440c:
    // 0x1e440c: 0x0  nop
    ctx->pc = 0x1e440cu;
    // NOP
label_1e4410:
    // 0x1e4410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4414:
    // 0x1e4414: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e4414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e4418:
    // 0x1e4418: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e441c:
    // 0x1e441c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e441cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e4420:
    // 0x1e4420: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4420u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4424:
    // 0x1e4424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4428:
    // 0x1e4428: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e4428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e442c:
    // 0x1e442c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e442cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4430:
    // 0x1e4430: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e4434:
    if (ctx->pc == 0x1E4434u) {
        ctx->pc = 0x1E4434u;
            // 0x1e4434: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E4438u;
        goto label_1e4438;
    }
    ctx->pc = 0x1E4430u;
    {
        const bool branch_taken_0x1e4430 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4430u;
            // 0x1e4434: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4430) {
            ctx->pc = 0x1E4450u;
            goto label_1e4450;
        }
    }
    ctx->pc = 0x1E4438u;
label_1e4438:
    // 0x1e4438: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e4438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e443c:
    // 0x1e443c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e443cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e4440:
    // 0x1e4440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4444:
    // 0x1e4444: 0x0  nop
    ctx->pc = 0x1e4444u;
    // NOP
label_1e4448:
    // 0x1e4448: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e4448u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e444c:
    // 0x1e444c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e4450:
    // 0x1e4450: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4454:
    // 0x1e4454: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1e4454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1e4458:
    // 0x1e4458: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e445c:
    // 0x1e445c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4460:
    // 0x1e4460: 0xc0793d8  jal         func_1E4F60
label_1e4464:
    if (ctx->pc == 0x1E4464u) {
        ctx->pc = 0x1E4464u;
            // 0x1e4464: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1E4468u;
        goto label_1e4468;
    }
    ctx->pc = 0x1E4460u;
    SET_GPR_U32(ctx, 31, 0x1E4468u);
    ctx->pc = 0x1E4464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4460u;
            // 0x1e4464: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4F60u;
    if (runtime->hasFunction(0x1E4F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E4F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4468u; }
        if (ctx->pc != 0x1E4468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e4f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4468u; }
        if (ctx->pc != 0x1E4468u) { return; }
    }
    ctx->pc = 0x1E4468u;
label_1e4468:
    // 0x1e4468: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e446c:
    // 0x1e446c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e446cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4470:
    // 0x1e4470: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1e4470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_1e4474:
    // 0x1e4474: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1e4474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4478:
    // 0x1e4478: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x1e4478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_1e447c:
    // 0x1e447c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1e4480:
    // 0x1e4480: 0x10620211  beq         $v1, $v0, . + 4 + (0x211 << 2)
label_1e4484:
    if (ctx->pc == 0x1E4484u) {
        ctx->pc = 0x1E4484u;
            // 0x1e4484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E4488u;
        goto label_1e4488;
    }
    ctx->pc = 0x1E4480u;
    {
        const bool branch_taken_0x1e4480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4480u;
            // 0x1e4484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4480) {
            ctx->pc = 0x1E4CC8u;
            goto label_1e4cc8;
        }
    }
    ctx->pc = 0x1E4488u;
label_1e4488:
    // 0x1e4488: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1e448c:
    if (ctx->pc == 0x1E448Cu) {
        ctx->pc = 0x1E4490u;
        goto label_1e4490;
    }
    ctx->pc = 0x1E4488u;
    {
        const bool branch_taken_0x1e4488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4488) {
            ctx->pc = 0x1E4598u;
            goto label_1e4598;
        }
    }
    ctx->pc = 0x1E4490u;
label_1e4490:
    // 0x1e4490: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e4494:
    if (ctx->pc == 0x1E4494u) {
        ctx->pc = 0x1E4498u;
        goto label_1e4498;
    }
    ctx->pc = 0x1E4490u;
    {
        const bool branch_taken_0x1e4490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4490) {
            ctx->pc = 0x1E44A0u;
            goto label_1e44a0;
        }
    }
    ctx->pc = 0x1E4498u;
label_1e4498:
    // 0x1e4498: 0x10000213  b           . + 4 + (0x213 << 2)
label_1e449c:
    if (ctx->pc == 0x1E449Cu) {
        ctx->pc = 0x1E44A0u;
        goto label_1e44a0;
    }
    ctx->pc = 0x1E4498u;
    {
        const bool branch_taken_0x1e4498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4498) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E44A0u;
label_1e44a0:
    // 0x1e44a0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1e44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1e44a4:
    // 0x1e44a4: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x1e44a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e44a8:
    // 0x1e44a8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1e44a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1e44ac:
    // 0x1e44ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e44acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e44b0:
    // 0x1e44b0: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x1e44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
label_1e44b4:
    // 0x1e44b4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1e44b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1e44b8:
    // 0x1e44b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e44b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e44bc:
    // 0x1e44bc: 0x0  nop
    ctx->pc = 0x1e44bcu;
    // NOP
label_1e44c0:
    // 0x1e44c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e44c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1e44c4:
    // 0x1e44c4: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1e44c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1e44c8:
    // 0x1e44c8: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1e44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e44cc:
    // 0x1e44cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e44ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e44d0:
    // 0x1e44d0: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1e44d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_1e44d4:
    // 0x1e44d4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e44d8:
    // 0x1e44d8: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1e44d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1e44dc:
    // 0x1e44dc: 0x10200202  beqz        $at, . + 4 + (0x202 << 2)
label_1e44e0:
    if (ctx->pc == 0x1E44E0u) {
        ctx->pc = 0x1E44E0u;
            // 0x1e44e0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1E44E4u;
        goto label_1e44e4;
    }
    ctx->pc = 0x1E44DCu;
    {
        const bool branch_taken_0x1e44dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E44DCu;
            // 0x1e44e0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44dc) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E44E4u;
label_1e44e4:
    // 0x1e44e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e44e8:
    // 0x1e44e8: 0x24632ee0  addiu       $v1, $v1, 0x2EE0
    ctx->pc = 0x1e44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
label_1e44ec:
    // 0x1e44ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e44f0:
    // 0x1e44f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e44f4:
    // 0x1e44f4: 0x400008  jr          $v0
label_1e44f8:
    if (ctx->pc == 0x1E44F8u) {
        ctx->pc = 0x1E44FCu;
        goto label_1e44fc;
    }
    ctx->pc = 0x1E44F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4500u: goto label_1e4500;
            case 0x1E4548u: goto label_1e4548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E44FCu;
label_1e44fc:
    // 0x1e44fc: 0x0  nop
    ctx->pc = 0x1e44fcu;
    // NOP
label_1e4500:
    // 0x1e4500: 0xc040d72  jal         func_1035C8
label_1e4504:
    if (ctx->pc == 0x1E4504u) {
        ctx->pc = 0x1E4504u;
            // 0x1e4504: 0xc62c00d0  lwc1        $f12, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E4508u;
        goto label_1e4508;
    }
    ctx->pc = 0x1E4500u;
    SET_GPR_U32(ctx, 31, 0x1E4508u);
    ctx->pc = 0x1E4504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4500u;
            // 0x1e4504: 0xc62c00d0  lwc1        $f12, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4508u; }
        if (ctx->pc != 0x1E4508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4508u; }
        if (ctx->pc != 0x1E4508u) { return; }
    }
    ctx->pc = 0x1E4508u;
label_1e4508:
    // 0x1e4508: 0x3c043f50  lui         $a0, 0x3F50
    ctx->pc = 0x1e4508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16208 << 16));
label_1e450c:
    // 0x1e450c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e450cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1e4510:
    // 0x1e4510: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e4510u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1e4514:
    // 0x1e4514: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e4514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e4518:
    // 0x1e4518: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e4518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e451c:
    // 0x1e451c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e451cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1e4520:
    // 0x1e4520: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1e4520u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e4524:
    // 0x1e4524: 0xc040098  jal         func_100260
label_1e4528:
    if (ctx->pc == 0x1E4528u) {
        ctx->pc = 0x1E4528u;
            // 0x1e4528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E452Cu;
        goto label_1e452c;
    }
    ctx->pc = 0x1E4524u;
    SET_GPR_U32(ctx, 31, 0x1E452Cu);
    ctx->pc = 0x1E4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4524u;
            // 0x1e4528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E452Cu; }
        if (ctx->pc != 0x1E452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E452Cu; }
        if (ctx->pc != 0x1E452Cu) { return; }
    }
    ctx->pc = 0x1E452Cu;
label_1e452c:
    // 0x1e452c: 0x104001ee  beqz        $v0, . + 4 + (0x1EE << 2)
label_1e4530:
    if (ctx->pc == 0x1E4530u) {
        ctx->pc = 0x1E4534u;
        goto label_1e4534;
    }
    ctx->pc = 0x1E452Cu;
    {
        const bool branch_taken_0x1e452c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e452c) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4534u;
label_1e4534:
    // 0x1e4534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4538:
    // 0x1e4538: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e4538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1e453c:
    // 0x1e453c: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1e453cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_1e4540:
    // 0x1e4540: 0x100001e9  b           . + 4 + (0x1E9 << 2)
label_1e4544:
    if (ctx->pc == 0x1E4544u) {
        ctx->pc = 0x1E4544u;
            // 0x1e4544: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x1E4548u;
        goto label_1e4548;
    }
    ctx->pc = 0x1E4540u;
    {
        const bool branch_taken_0x1e4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4540u;
            // 0x1e4544: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4540) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4548u;
label_1e4548:
    // 0x1e4548: 0xc040d72  jal         func_1035C8
label_1e454c:
    if (ctx->pc == 0x1E454Cu) {
        ctx->pc = 0x1E454Cu;
            // 0x1e454c: 0xc62c00d0  lwc1        $f12, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E4550u;
        goto label_1e4550;
    }
    ctx->pc = 0x1E4548u;
    SET_GPR_U32(ctx, 31, 0x1E4550u);
    ctx->pc = 0x1E454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4548u;
            // 0x1e454c: 0xc62c00d0  lwc1        $f12, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4550u; }
        if (ctx->pc != 0x1E4550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4550u; }
        if (ctx->pc != 0x1E4550u) { return; }
    }
    ctx->pc = 0x1E4550u;
label_1e4550:
    // 0x1e4550: 0x3c04bf50  lui         $a0, 0xBF50
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48976 << 16));
label_1e4554:
    // 0x1e4554: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e4554u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1e4558:
    // 0x1e4558: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e4558u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1e455c:
    // 0x1e455c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e4560:
    // 0x1e4560: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e4560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e4564:
    // 0x1e4564: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e4564u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1e4568:
    // 0x1e4568: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e4568u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e456c:
    // 0x1e456c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4570:
    // 0x1e4570: 0xc040084  jal         func_100210
label_1e4574:
    if (ctx->pc == 0x1E4574u) {
        ctx->pc = 0x1E4574u;
            // 0x1e4574: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1E4578u;
        goto label_1e4578;
    }
    ctx->pc = 0x1E4570u;
    SET_GPR_U32(ctx, 31, 0x1E4578u);
    ctx->pc = 0x1E4574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4570u;
            // 0x1e4574: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4578u; }
        if (ctx->pc != 0x1E4578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4578u; }
        if (ctx->pc != 0x1E4578u) { return; }
    }
    ctx->pc = 0x1E4578u;
label_1e4578:
    // 0x1e4578: 0x104001db  beqz        $v0, . + 4 + (0x1DB << 2)
label_1e457c:
    if (ctx->pc == 0x1E457Cu) {
        ctx->pc = 0x1E4580u;
        goto label_1e4580;
    }
    ctx->pc = 0x1E4578u;
    {
        const bool branch_taken_0x1e4578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4578) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4580u;
label_1e4580:
    // 0x1e4580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4584:
    // 0x1e4584: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e4584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1e4588:
    // 0x1e4588: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1e4588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_1e458c:
    // 0x1e458c: 0x100001d6  b           . + 4 + (0x1D6 << 2)
label_1e4590:
    if (ctx->pc == 0x1E4590u) {
        ctx->pc = 0x1E4590u;
            // 0x1e4590: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x1E4594u;
        goto label_1e4594;
    }
    ctx->pc = 0x1E458Cu;
    {
        const bool branch_taken_0x1e458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E458Cu;
            // 0x1e4590: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e458c) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4594u;
label_1e4594:
    // 0x1e4594: 0x0  nop
    ctx->pc = 0x1e4594u;
    // NOP
label_1e4598:
    // 0x1e4598: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e459c:
    // 0x1e459c: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1e459cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1e45a0:
    // 0x1e45a0: 0x102001c3  beqz        $at, . + 4 + (0x1C3 << 2)
label_1e45a4:
    if (ctx->pc == 0x1E45A4u) {
        ctx->pc = 0x1E45A4u;
            // 0x1e45a4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1E45A8u;
        goto label_1e45a8;
    }
    ctx->pc = 0x1E45A0u;
    {
        const bool branch_taken_0x1e45a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45A0u;
            // 0x1e45a4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45a0) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E45A8u;
label_1e45a8:
    // 0x1e45a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e45ac:
    // 0x1e45ac: 0x24632ec0  addiu       $v1, $v1, 0x2EC0
    ctx->pc = 0x1e45acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11968));
label_1e45b0:
    // 0x1e45b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e45b4:
    // 0x1e45b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e45b8:
    // 0x1e45b8: 0x400008  jr          $v0
label_1e45bc:
    if (ctx->pc == 0x1E45BCu) {
        ctx->pc = 0x1E45C0u;
        goto label_1e45c0;
    }
    ctx->pc = 0x1E45B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E45C0u: goto label_1e45c0;
            case 0x1E46D0u: goto label_1e46d0;
            case 0x1E47E8u: goto label_1e47e8;
            case 0x1E48B8u: goto label_1e48b8;
            case 0x1E4988u: goto label_1e4988;
            case 0x1E4B20u: goto label_1e4b20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E45C0u;
label_1e45c0:
    // 0x1e45c0: 0xc065d00  jal         func_197400
label_1e45c4:
    if (ctx->pc == 0x1E45C4u) {
        ctx->pc = 0x1E45C8u;
        goto label_1e45c8;
    }
    ctx->pc = 0x1E45C0u;
    SET_GPR_U32(ctx, 31, 0x1E45C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45C8u; }
        if (ctx->pc != 0x1E45C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45C8u; }
        if (ctx->pc != 0x1E45C8u) { return; }
    }
    ctx->pc = 0x1E45C8u;
label_1e45c8:
    // 0x1e45c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e45cc:
    // 0x1e45cc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e45d0:
    if (ctx->pc == 0x1E45D0u) {
        ctx->pc = 0x1E45D4u;
        goto label_1e45d4;
    }
    ctx->pc = 0x1E45CCu;
    {
        const bool branch_taken_0x1e45cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e45cc) {
            ctx->pc = 0x1E45D8u;
            goto label_1e45d8;
        }
    }
    ctx->pc = 0x1E45D4u;
label_1e45d4:
    // 0x1e45d4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x1e45d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e45d8:
    // 0x1e45d8: 0xc065d00  jal         func_197400
label_1e45dc:
    if (ctx->pc == 0x1E45DCu) {
        ctx->pc = 0x1E45E0u;
        goto label_1e45e0;
    }
    ctx->pc = 0x1E45D8u;
    SET_GPR_U32(ctx, 31, 0x1E45E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45E0u; }
        if (ctx->pc != 0x1E45E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45E0u; }
        if (ctx->pc != 0x1E45E0u) { return; }
    }
    ctx->pc = 0x1E45E0u;
label_1e45e0:
    // 0x1e45e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e45e4:
    // 0x1e45e4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e45e8:
    if (ctx->pc == 0x1E45E8u) {
        ctx->pc = 0x1E45ECu;
        goto label_1e45ec;
    }
    ctx->pc = 0x1E45E4u;
    {
        const bool branch_taken_0x1e45e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e45e4) {
            ctx->pc = 0x1E45F0u;
            goto label_1e45f0;
        }
    }
    ctx->pc = 0x1E45ECu;
label_1e45ec:
    // 0x1e45ec: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e45ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e45f0:
    // 0x1e45f0: 0xc065d00  jal         func_197400
label_1e45f4:
    if (ctx->pc == 0x1E45F4u) {
        ctx->pc = 0x1E45F8u;
        goto label_1e45f8;
    }
    ctx->pc = 0x1E45F0u;
    SET_GPR_U32(ctx, 31, 0x1E45F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45F8u; }
        if (ctx->pc != 0x1E45F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E45F8u; }
        if (ctx->pc != 0x1E45F8u) { return; }
    }
    ctx->pc = 0x1E45F8u;
label_1e45f8:
    // 0x1e45f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e45fc:
    if (ctx->pc == 0x1E45FCu) {
        ctx->pc = 0x1E4600u;
        goto label_1e4600;
    }
    ctx->pc = 0x1E45F8u;
    {
        const bool branch_taken_0x1e45f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45f8) {
            ctx->pc = 0x1E4608u;
            goto label_1e4608;
        }
    }
    ctx->pc = 0x1E4600u;
label_1e4600:
    // 0x1e4600: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1e4600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4604:
    // 0x1e4604: 0x0  nop
    ctx->pc = 0x1e4604u;
    // NOP
label_1e4608:
    // 0x1e4608: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1e4608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e460c:
    // 0x1e460c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1e460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e4610:
    // 0x1e4610: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1e4610u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4614:
    // 0x1e4614: 0x0  nop
    ctx->pc = 0x1e4614u;
    // NOP
label_1e4618:
    // 0x1e4618: 0x0  nop
    ctx->pc = 0x1e4618u;
    // NOP
label_1e461c:
    // 0x1e461c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4620:
    // 0x1e4620: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1e4620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e4624:
    // 0x1e4624: 0x102001a2  beqz        $at, . + 4 + (0x1A2 << 2)
label_1e4628:
    if (ctx->pc == 0x1E4628u) {
        ctx->pc = 0x1E462Cu;
        goto label_1e462c;
    }
    ctx->pc = 0x1E4624u;
    {
        const bool branch_taken_0x1e4624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4624) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E462Cu;
label_1e462c:
    // 0x1e462c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e462cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4630:
    // 0x1e4630: 0xc06532c  jal         func_194CB0
label_1e4634:
    if (ctx->pc == 0x1E4634u) {
        ctx->pc = 0x1E4634u;
            // 0x1e4634: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E4638u;
        goto label_1e4638;
    }
    ctx->pc = 0x1E4630u;
    SET_GPR_U32(ctx, 31, 0x1E4638u);
    ctx->pc = 0x1E4634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4630u;
            // 0x1e4634: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4638u; }
        if (ctx->pc != 0x1E4638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4638u; }
        if (ctx->pc != 0x1E4638u) { return; }
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e463c:
    // 0x1e463c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4640:
    // 0x1e4640: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4644:
    // 0x1e4644: 0xc06532c  jal         func_194CB0
label_1e4648:
    if (ctx->pc == 0x1E4648u) {
        ctx->pc = 0x1E4648u;
            // 0x1e4648: 0x2446000f  addiu       $a2, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x1E464Cu;
        goto label_1e464c;
    }
    ctx->pc = 0x1E4644u;
    SET_GPR_U32(ctx, 31, 0x1E464Cu);
    ctx->pc = 0x1E4648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4644u;
            // 0x1e4648: 0x2446000f  addiu       $a2, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E464Cu; }
        if (ctx->pc != 0x1E464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E464Cu; }
        if (ctx->pc != 0x1E464Cu) { return; }
    }
    ctx->pc = 0x1E464Cu;
label_1e464c:
    // 0x1e464c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4650:
    // 0x1e4650: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4654:
    // 0x1e4654: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4658:
    // 0x1e4658: 0xc06532c  jal         func_194CB0
label_1e465c:
    if (ctx->pc == 0x1E465Cu) {
        ctx->pc = 0x1E465Cu;
            // 0x1e465c: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->pc = 0x1E4660u;
        goto label_1e4660;
    }
    ctx->pc = 0x1E4658u;
    SET_GPR_U32(ctx, 31, 0x1E4660u);
    ctx->pc = 0x1E465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4658u;
            // 0x1e465c: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4660u; }
        if (ctx->pc != 0x1E4660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4660u; }
        if (ctx->pc != 0x1E4660u) { return; }
    }
    ctx->pc = 0x1E4660u;
label_1e4660:
    // 0x1e4660: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4664:
    // 0x1e4664: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4668:
    // 0x1e4668: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e466c:
    // 0x1e466c: 0xc06532c  jal         func_194CB0
label_1e4670:
    if (ctx->pc == 0x1E4670u) {
        ctx->pc = 0x1E4670u;
            // 0x1e4670: 0x2446002d  addiu       $a2, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->pc = 0x1E4674u;
        goto label_1e4674;
    }
    ctx->pc = 0x1E466Cu;
    SET_GPR_U32(ctx, 31, 0x1E4674u);
    ctx->pc = 0x1E4670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E466Cu;
            // 0x1e4670: 0x2446002d  addiu       $a2, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4674u; }
        if (ctx->pc != 0x1E4674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4674u; }
        if (ctx->pc != 0x1E4674u) { return; }
    }
    ctx->pc = 0x1E4674u;
label_1e4674:
    // 0x1e4674: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4678:
    // 0x1e4678: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e467c:
    // 0x1e467c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e467cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4680:
    // 0x1e4680: 0xc06532c  jal         func_194CB0
label_1e4684:
    if (ctx->pc == 0x1E4684u) {
        ctx->pc = 0x1E4684u;
            // 0x1e4684: 0x2446003c  addiu       $a2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->pc = 0x1E4688u;
        goto label_1e4688;
    }
    ctx->pc = 0x1E4680u;
    SET_GPR_U32(ctx, 31, 0x1E4688u);
    ctx->pc = 0x1E4684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4680u;
            // 0x1e4684: 0x2446003c  addiu       $a2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4688u; }
        if (ctx->pc != 0x1E4688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4688u; }
        if (ctx->pc != 0x1E4688u) { return; }
    }
    ctx->pc = 0x1E4688u;
label_1e4688:
    // 0x1e4688: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e468c:
    // 0x1e468c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4690:
    // 0x1e4690: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4694:
    // 0x1e4694: 0xc06532c  jal         func_194CB0
label_1e4698:
    if (ctx->pc == 0x1E4698u) {
        ctx->pc = 0x1E4698u;
            // 0x1e4698: 0x2446004b  addiu       $a2, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->pc = 0x1E469Cu;
        goto label_1e469c;
    }
    ctx->pc = 0x1E4694u;
    SET_GPR_U32(ctx, 31, 0x1E469Cu);
    ctx->pc = 0x1E4698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4694u;
            // 0x1e4698: 0x2446004b  addiu       $a2, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E469Cu; }
        if (ctx->pc != 0x1E469Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E469Cu; }
        if (ctx->pc != 0x1E469Cu) { return; }
    }
    ctx->pc = 0x1E469Cu;
label_1e469c:
    // 0x1e469c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e46a0:
    // 0x1e46a0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e46a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e46a4:
    // 0x1e46a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e46a8:
    // 0x1e46a8: 0xc06532c  jal         func_194CB0
label_1e46ac:
    if (ctx->pc == 0x1E46ACu) {
        ctx->pc = 0x1E46ACu;
            // 0x1e46ac: 0x2446005a  addiu       $a2, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->pc = 0x1E46B0u;
        goto label_1e46b0;
    }
    ctx->pc = 0x1E46A8u;
    SET_GPR_U32(ctx, 31, 0x1E46B0u);
    ctx->pc = 0x1E46ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46A8u;
            // 0x1e46ac: 0x2446005a  addiu       $a2, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46B0u; }
        if (ctx->pc != 0x1E46B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46B0u; }
        if (ctx->pc != 0x1E46B0u) { return; }
    }
    ctx->pc = 0x1E46B0u;
label_1e46b0:
    // 0x1e46b0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e46b4:
    // 0x1e46b4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e46b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e46b8:
    // 0x1e46b8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e46bc:
    // 0x1e46bc: 0xc06532c  jal         func_194CB0
label_1e46c0:
    if (ctx->pc == 0x1E46C0u) {
        ctx->pc = 0x1E46C0u;
            // 0x1e46c0: 0x24460069  addiu       $a2, $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 105));
        ctx->pc = 0x1E46C4u;
        goto label_1e46c4;
    }
    ctx->pc = 0x1E46BCu;
    SET_GPR_U32(ctx, 31, 0x1E46C4u);
    ctx->pc = 0x1E46C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46BCu;
            // 0x1e46c0: 0x24460069  addiu       $a2, $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46C4u; }
        if (ctx->pc != 0x1E46C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46C4u; }
        if (ctx->pc != 0x1E46C4u) { return; }
    }
    ctx->pc = 0x1E46C4u;
label_1e46c4:
    // 0x1e46c4: 0x1000017a  b           . + 4 + (0x17A << 2)
label_1e46c8:
    if (ctx->pc == 0x1E46C8u) {
        ctx->pc = 0x1E46CCu;
        goto label_1e46cc;
    }
    ctx->pc = 0x1E46C4u;
    {
        const bool branch_taken_0x1e46c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e46c4) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E46CCu;
label_1e46cc:
    // 0x1e46cc: 0x0  nop
    ctx->pc = 0x1e46ccu;
    // NOP
label_1e46d0:
    // 0x1e46d0: 0xc065d00  jal         func_197400
label_1e46d4:
    if (ctx->pc == 0x1E46D4u) {
        ctx->pc = 0x1E46D8u;
        goto label_1e46d8;
    }
    ctx->pc = 0x1E46D0u;
    SET_GPR_U32(ctx, 31, 0x1E46D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46D8u; }
        if (ctx->pc != 0x1E46D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46D8u; }
        if (ctx->pc != 0x1E46D8u) { return; }
    }
    ctx->pc = 0x1E46D8u;
label_1e46d8:
    // 0x1e46d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e46dc:
    // 0x1e46dc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e46e0:
    if (ctx->pc == 0x1E46E0u) {
        ctx->pc = 0x1E46E4u;
        goto label_1e46e4;
    }
    ctx->pc = 0x1E46DCu;
    {
        const bool branch_taken_0x1e46dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e46dc) {
            ctx->pc = 0x1E46E8u;
            goto label_1e46e8;
        }
    }
    ctx->pc = 0x1E46E4u;
label_1e46e4:
    // 0x1e46e4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x1e46e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e46e8:
    // 0x1e46e8: 0xc065d00  jal         func_197400
label_1e46ec:
    if (ctx->pc == 0x1E46ECu) {
        ctx->pc = 0x1E46F0u;
        goto label_1e46f0;
    }
    ctx->pc = 0x1E46E8u;
    SET_GPR_U32(ctx, 31, 0x1E46F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46F0u; }
        if (ctx->pc != 0x1E46F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46F0u; }
        if (ctx->pc != 0x1E46F0u) { return; }
    }
    ctx->pc = 0x1E46F0u;
label_1e46f0:
    // 0x1e46f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e46f4:
    // 0x1e46f4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e46f8:
    if (ctx->pc == 0x1E46F8u) {
        ctx->pc = 0x1E46FCu;
        goto label_1e46fc;
    }
    ctx->pc = 0x1E46F4u;
    {
        const bool branch_taken_0x1e46f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e46f4) {
            ctx->pc = 0x1E4700u;
            goto label_1e4700;
        }
    }
    ctx->pc = 0x1E46FCu;
label_1e46fc:
    // 0x1e46fc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e46fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4700:
    // 0x1e4700: 0xc065d00  jal         func_197400
label_1e4704:
    if (ctx->pc == 0x1E4704u) {
        ctx->pc = 0x1E4708u;
        goto label_1e4708;
    }
    ctx->pc = 0x1E4700u;
    SET_GPR_U32(ctx, 31, 0x1E4708u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4708u; }
        if (ctx->pc != 0x1E4708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4708u; }
        if (ctx->pc != 0x1E4708u) { return; }
    }
    ctx->pc = 0x1E4708u;
label_1e4708:
    // 0x1e4708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e470c:
    if (ctx->pc == 0x1E470Cu) {
        ctx->pc = 0x1E4710u;
        goto label_1e4710;
    }
    ctx->pc = 0x1E4708u;
    {
        const bool branch_taken_0x1e4708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4708) {
            ctx->pc = 0x1E4718u;
            goto label_1e4718;
        }
    }
    ctx->pc = 0x1E4710u;
label_1e4710:
    // 0x1e4710: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4714:
    // 0x1e4714: 0x0  nop
    ctx->pc = 0x1e4714u;
    // NOP
label_1e4718:
    // 0x1e4718: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1e4718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e471c:
    // 0x1e471c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e4720:
    // 0x1e4720: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1e4720u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4724:
    // 0x1e4724: 0x0  nop
    ctx->pc = 0x1e4724u;
    // NOP
label_1e4728:
    // 0x1e4728: 0x0  nop
    ctx->pc = 0x1e4728u;
    // NOP
label_1e472c:
    // 0x1e472c: 0x1810  mfhi        $v1
    ctx->pc = 0x1e472cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e4730:
    // 0x1e4730: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1e4730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
label_1e4734:
    // 0x1e4734: 0x1420015e  bnez        $at, . + 4 + (0x15E << 2)
label_1e4738:
    if (ctx->pc == 0x1E4738u) {
        ctx->pc = 0x1E4738u;
            // 0x1e4738: 0x2602000a  addiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->pc = 0x1E473Cu;
        goto label_1e473c;
    }
    ctx->pc = 0x1E4734u;
    {
        const bool branch_taken_0x1e4734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4734u;
            // 0x1e4738: 0x2602000a  addiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4734) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E473Cu;
label_1e473c:
    // 0x1e473c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1e473cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e4740:
    // 0x1e4740: 0x1420015b  bnez        $at, . + 4 + (0x15B << 2)
label_1e4744:
    if (ctx->pc == 0x1E4744u) {
        ctx->pc = 0x1E4748u;
        goto label_1e4748;
    }
    ctx->pc = 0x1E4740u;
    {
        const bool branch_taken_0x1e4740 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4740) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4748u;
label_1e4748:
    // 0x1e4748: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e474c:
    // 0x1e474c: 0xc06534c  jal         func_194D30
label_1e4750:
    if (ctx->pc == 0x1E4750u) {
        ctx->pc = 0x1E4750u;
            // 0x1e4750: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E4754u;
        goto label_1e4754;
    }
    ctx->pc = 0x1E474Cu;
    SET_GPR_U32(ctx, 31, 0x1E4754u);
    ctx->pc = 0x1E4750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E474Cu;
            // 0x1e4750: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4754u; }
        if (ctx->pc != 0x1E4754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4754u; }
        if (ctx->pc != 0x1E4754u) { return; }
    }
    ctx->pc = 0x1E4754u;
label_1e4754:
    // 0x1e4754: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4758:
    // 0x1e4758: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e475c:
    // 0x1e475c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e475cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4760:
    // 0x1e4760: 0xc06534c  jal         func_194D30
label_1e4764:
    if (ctx->pc == 0x1E4764u) {
        ctx->pc = 0x1E4764u;
            // 0x1e4764: 0x2446000f  addiu       $a2, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x1E4768u;
        goto label_1e4768;
    }
    ctx->pc = 0x1E4760u;
    SET_GPR_U32(ctx, 31, 0x1E4768u);
    ctx->pc = 0x1E4764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4760u;
            // 0x1e4764: 0x2446000f  addiu       $a2, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4768u; }
        if (ctx->pc != 0x1E4768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4768u; }
        if (ctx->pc != 0x1E4768u) { return; }
    }
    ctx->pc = 0x1E4768u;
label_1e4768:
    // 0x1e4768: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e476c:
    // 0x1e476c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4770:
    // 0x1e4770: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4774:
    // 0x1e4774: 0xc06534c  jal         func_194D30
label_1e4778:
    if (ctx->pc == 0x1E4778u) {
        ctx->pc = 0x1E4778u;
            // 0x1e4778: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->pc = 0x1E477Cu;
        goto label_1e477c;
    }
    ctx->pc = 0x1E4774u;
    SET_GPR_U32(ctx, 31, 0x1E477Cu);
    ctx->pc = 0x1E4778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4774u;
            // 0x1e4778: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E477Cu; }
        if (ctx->pc != 0x1E477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E477Cu; }
        if (ctx->pc != 0x1E477Cu) { return; }
    }
    ctx->pc = 0x1E477Cu;
label_1e477c:
    // 0x1e477c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4780:
    // 0x1e4780: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4784:
    // 0x1e4784: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4788:
    // 0x1e4788: 0xc06534c  jal         func_194D30
label_1e478c:
    if (ctx->pc == 0x1E478Cu) {
        ctx->pc = 0x1E478Cu;
            // 0x1e478c: 0x2446002d  addiu       $a2, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->pc = 0x1E4790u;
        goto label_1e4790;
    }
    ctx->pc = 0x1E4788u;
    SET_GPR_U32(ctx, 31, 0x1E4790u);
    ctx->pc = 0x1E478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4788u;
            // 0x1e478c: 0x2446002d  addiu       $a2, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4790u; }
        if (ctx->pc != 0x1E4790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4790u; }
        if (ctx->pc != 0x1E4790u) { return; }
    }
    ctx->pc = 0x1E4790u;
label_1e4790:
    // 0x1e4790: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4794:
    // 0x1e4794: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4798:
    // 0x1e4798: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e479c:
    // 0x1e479c: 0xc06534c  jal         func_194D30
label_1e47a0:
    if (ctx->pc == 0x1E47A0u) {
        ctx->pc = 0x1E47A0u;
            // 0x1e47a0: 0x2446003c  addiu       $a2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->pc = 0x1E47A4u;
        goto label_1e47a4;
    }
    ctx->pc = 0x1E479Cu;
    SET_GPR_U32(ctx, 31, 0x1E47A4u);
    ctx->pc = 0x1E47A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E479Cu;
            // 0x1e47a0: 0x2446003c  addiu       $a2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47A4u; }
        if (ctx->pc != 0x1E47A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47A4u; }
        if (ctx->pc != 0x1E47A4u) { return; }
    }
    ctx->pc = 0x1E47A4u;
label_1e47a4:
    // 0x1e47a4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e47a8:
    // 0x1e47a8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e47ac:
    // 0x1e47ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e47b0:
    // 0x1e47b0: 0xc06534c  jal         func_194D30
label_1e47b4:
    if (ctx->pc == 0x1E47B4u) {
        ctx->pc = 0x1E47B4u;
            // 0x1e47b4: 0x2446004b  addiu       $a2, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->pc = 0x1E47B8u;
        goto label_1e47b8;
    }
    ctx->pc = 0x1E47B0u;
    SET_GPR_U32(ctx, 31, 0x1E47B8u);
    ctx->pc = 0x1E47B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47B0u;
            // 0x1e47b4: 0x2446004b  addiu       $a2, $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47B8u; }
        if (ctx->pc != 0x1E47B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47B8u; }
        if (ctx->pc != 0x1E47B8u) { return; }
    }
    ctx->pc = 0x1E47B8u;
label_1e47b8:
    // 0x1e47b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e47bc:
    // 0x1e47bc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e47c0:
    // 0x1e47c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e47c4:
    // 0x1e47c4: 0xc06534c  jal         func_194D30
label_1e47c8:
    if (ctx->pc == 0x1E47C8u) {
        ctx->pc = 0x1E47C8u;
            // 0x1e47c8: 0x2446005a  addiu       $a2, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->pc = 0x1E47CCu;
        goto label_1e47cc;
    }
    ctx->pc = 0x1E47C4u;
    SET_GPR_U32(ctx, 31, 0x1E47CCu);
    ctx->pc = 0x1E47C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47C4u;
            // 0x1e47c8: 0x2446005a  addiu       $a2, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47CCu; }
        if (ctx->pc != 0x1E47CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47CCu; }
        if (ctx->pc != 0x1E47CCu) { return; }
    }
    ctx->pc = 0x1E47CCu;
label_1e47cc:
    // 0x1e47cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e47d0:
    // 0x1e47d0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e47d4:
    // 0x1e47d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e47d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e47d8:
    // 0x1e47d8: 0xc06534c  jal         func_194D30
label_1e47dc:
    if (ctx->pc == 0x1E47DCu) {
        ctx->pc = 0x1E47DCu;
            // 0x1e47dc: 0x24460069  addiu       $a2, $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 105));
        ctx->pc = 0x1E47E0u;
        goto label_1e47e0;
    }
    ctx->pc = 0x1E47D8u;
    SET_GPR_U32(ctx, 31, 0x1E47E0u);
    ctx->pc = 0x1E47DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47D8u;
            // 0x1e47dc: 0x24460069  addiu       $a2, $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47E0u; }
        if (ctx->pc != 0x1E47E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47E0u; }
        if (ctx->pc != 0x1E47E0u) { return; }
    }
    ctx->pc = 0x1E47E0u;
label_1e47e0:
    // 0x1e47e0: 0x10000133  b           . + 4 + (0x133 << 2)
label_1e47e4:
    if (ctx->pc == 0x1E47E4u) {
        ctx->pc = 0x1E47E8u;
        goto label_1e47e8;
    }
    ctx->pc = 0x1E47E0u;
    {
        const bool branch_taken_0x1e47e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e47e0) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E47E8u;
label_1e47e8:
    // 0x1e47e8: 0xc065d00  jal         func_197400
label_1e47ec:
    if (ctx->pc == 0x1E47ECu) {
        ctx->pc = 0x1E47F0u;
        goto label_1e47f0;
    }
    ctx->pc = 0x1E47E8u;
    SET_GPR_U32(ctx, 31, 0x1E47F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47F0u; }
        if (ctx->pc != 0x1E47F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E47F0u; }
        if (ctx->pc != 0x1E47F0u) { return; }
    }
    ctx->pc = 0x1E47F0u;
label_1e47f0:
    // 0x1e47f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e47f4:
    // 0x1e47f4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e47f8:
    if (ctx->pc == 0x1E47F8u) {
        ctx->pc = 0x1E47FCu;
        goto label_1e47fc;
    }
    ctx->pc = 0x1E47F4u;
    {
        const bool branch_taken_0x1e47f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e47f4) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E47FCu;
label_1e47fc:
    // 0x1e47fc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e47fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4800:
    // 0x1e4800: 0xc065d00  jal         func_197400
label_1e4804:
    if (ctx->pc == 0x1E4804u) {
        ctx->pc = 0x1E4808u;
        goto label_1e4808;
    }
    ctx->pc = 0x1E4800u;
    SET_GPR_U32(ctx, 31, 0x1E4808u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4808u; }
        if (ctx->pc != 0x1E4808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4808u; }
        if (ctx->pc != 0x1E4808u) { return; }
    }
    ctx->pc = 0x1E4808u;
label_1e4808:
    // 0x1e4808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e480c:
    // 0x1e480c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4810:
    if (ctx->pc == 0x1E4810u) {
        ctx->pc = 0x1E4814u;
        goto label_1e4814;
    }
    ctx->pc = 0x1E480Cu;
    {
        const bool branch_taken_0x1e480c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e480c) {
            ctx->pc = 0x1E4818u;
            goto label_1e4818;
        }
    }
    ctx->pc = 0x1E4814u;
label_1e4814:
    // 0x1e4814: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1e4814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4818:
    // 0x1e4818: 0xc065d00  jal         func_197400
label_1e481c:
    if (ctx->pc == 0x1E481Cu) {
        ctx->pc = 0x1E4820u;
        goto label_1e4820;
    }
    ctx->pc = 0x1E4818u;
    SET_GPR_U32(ctx, 31, 0x1E4820u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4820u; }
        if (ctx->pc != 0x1E4820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4820u; }
        if (ctx->pc != 0x1E4820u) { return; }
    }
    ctx->pc = 0x1E4820u;
label_1e4820:
    // 0x1e4820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4824:
    if (ctx->pc == 0x1E4824u) {
        ctx->pc = 0x1E4828u;
        goto label_1e4828;
    }
    ctx->pc = 0x1E4820u;
    {
        const bool branch_taken_0x1e4820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4820) {
            ctx->pc = 0x1E4830u;
            goto label_1e4830;
        }
    }
    ctx->pc = 0x1E4828u;
label_1e4828:
    // 0x1e4828: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e4828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e482c:
    // 0x1e482c: 0x0  nop
    ctx->pc = 0x1e482cu;
    // NOP
label_1e4830:
    // 0x1e4830: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4834:
    // 0x1e4834: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4838:
    // 0x1e4838: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1e4838u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e483c:
    // 0x1e483c: 0x0  nop
    ctx->pc = 0x1e483cu;
    // NOP
label_1e4840:
    // 0x1e4840: 0x0  nop
    ctx->pc = 0x1e4840u;
    // NOP
label_1e4844:
    // 0x1e4844: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4844u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4848:
    // 0x1e4848: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e484c:
    // 0x1e484c: 0x10200118  beqz        $at, . + 4 + (0x118 << 2)
label_1e4850:
    if (ctx->pc == 0x1E4850u) {
        ctx->pc = 0x1E4854u;
        goto label_1e4854;
    }
    ctx->pc = 0x1E484Cu;
    {
        const bool branch_taken_0x1e484c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e484c) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4854u;
label_1e4854:
    // 0x1e4854: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4858:
    // 0x1e4858: 0xc06532c  jal         func_194CB0
label_1e485c:
    if (ctx->pc == 0x1E485Cu) {
        ctx->pc = 0x1E485Cu;
            // 0x1e485c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E4860u;
        goto label_1e4860;
    }
    ctx->pc = 0x1E4858u;
    SET_GPR_U32(ctx, 31, 0x1E4860u);
    ctx->pc = 0x1E485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4858u;
            // 0x1e485c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4860u; }
        if (ctx->pc != 0x1E4860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4860u; }
        if (ctx->pc != 0x1E4860u) { return; }
    }
    ctx->pc = 0x1E4860u;
label_1e4860:
    // 0x1e4860: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4864:
    // 0x1e4864: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4868:
    // 0x1e4868: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e486c:
    // 0x1e486c: 0xc06532c  jal         func_194CB0
label_1e4870:
    if (ctx->pc == 0x1E4870u) {
        ctx->pc = 0x1E4870u;
            // 0x1e4870: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x1E4874u;
        goto label_1e4874;
    }
    ctx->pc = 0x1E486Cu;
    SET_GPR_U32(ctx, 31, 0x1E4874u);
    ctx->pc = 0x1E4870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E486Cu;
            // 0x1e4870: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4874u; }
        if (ctx->pc != 0x1E4874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4874u; }
        if (ctx->pc != 0x1E4874u) { return; }
    }
    ctx->pc = 0x1E4874u;
label_1e4874:
    // 0x1e4874: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4878:
    // 0x1e4878: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e487c:
    // 0x1e487c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e487cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4880:
    // 0x1e4880: 0xc06532c  jal         func_194CB0
label_1e4884:
    if (ctx->pc == 0x1E4884u) {
        ctx->pc = 0x1E4884u;
            // 0x1e4884: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x1E4888u;
        goto label_1e4888;
    }
    ctx->pc = 0x1E4880u;
    SET_GPR_U32(ctx, 31, 0x1E4888u);
    ctx->pc = 0x1E4884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4880u;
            // 0x1e4884: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4888u; }
        if (ctx->pc != 0x1E4888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4888u; }
        if (ctx->pc != 0x1E4888u) { return; }
    }
    ctx->pc = 0x1E4888u;
label_1e4888:
    // 0x1e4888: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e488c:
    // 0x1e488c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4890:
    // 0x1e4890: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4894:
    // 0x1e4894: 0xc06532c  jal         func_194CB0
label_1e4898:
    if (ctx->pc == 0x1E4898u) {
        ctx->pc = 0x1E4898u;
            // 0x1e4898: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->pc = 0x1E489Cu;
        goto label_1e489c;
    }
    ctx->pc = 0x1E4894u;
    SET_GPR_U32(ctx, 31, 0x1E489Cu);
    ctx->pc = 0x1E4898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4894u;
            // 0x1e4898: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E489Cu; }
        if (ctx->pc != 0x1E489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E489Cu; }
        if (ctx->pc != 0x1E489Cu) { return; }
    }
    ctx->pc = 0x1E489Cu;
label_1e489c:
    // 0x1e489c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e48a0:
    // 0x1e48a0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e48a4:
    // 0x1e48a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e48a8:
    // 0x1e48a8: 0xc06532c  jal         func_194CB0
label_1e48ac:
    if (ctx->pc == 0x1E48ACu) {
        ctx->pc = 0x1E48ACu;
            // 0x1e48ac: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x1E48B0u;
        goto label_1e48b0;
    }
    ctx->pc = 0x1E48A8u;
    SET_GPR_U32(ctx, 31, 0x1E48B0u);
    ctx->pc = 0x1E48ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E48A8u;
            // 0x1e48ac: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48B0u; }
        if (ctx->pc != 0x1E48B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48B0u; }
        if (ctx->pc != 0x1E48B0u) { return; }
    }
    ctx->pc = 0x1E48B0u;
label_1e48b0:
    // 0x1e48b0: 0x100000ff  b           . + 4 + (0xFF << 2)
label_1e48b4:
    if (ctx->pc == 0x1E48B4u) {
        ctx->pc = 0x1E48B8u;
        goto label_1e48b8;
    }
    ctx->pc = 0x1E48B0u;
    {
        const bool branch_taken_0x1e48b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e48b0) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E48B8u;
label_1e48b8:
    // 0x1e48b8: 0xc065d00  jal         func_197400
label_1e48bc:
    if (ctx->pc == 0x1E48BCu) {
        ctx->pc = 0x1E48C0u;
        goto label_1e48c0;
    }
    ctx->pc = 0x1E48B8u;
    SET_GPR_U32(ctx, 31, 0x1E48C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48C0u; }
        if (ctx->pc != 0x1E48C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48C0u; }
        if (ctx->pc != 0x1E48C0u) { return; }
    }
    ctx->pc = 0x1E48C0u;
label_1e48c0:
    // 0x1e48c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e48c4:
    // 0x1e48c4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e48c8:
    if (ctx->pc == 0x1E48C8u) {
        ctx->pc = 0x1E48CCu;
        goto label_1e48cc;
    }
    ctx->pc = 0x1E48C4u;
    {
        const bool branch_taken_0x1e48c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e48c4) {
            ctx->pc = 0x1E48D0u;
            goto label_1e48d0;
        }
    }
    ctx->pc = 0x1E48CCu;
label_1e48cc:
    // 0x1e48cc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e48ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e48d0:
    // 0x1e48d0: 0xc065d00  jal         func_197400
label_1e48d4:
    if (ctx->pc == 0x1E48D4u) {
        ctx->pc = 0x1E48D8u;
        goto label_1e48d8;
    }
    ctx->pc = 0x1E48D0u;
    SET_GPR_U32(ctx, 31, 0x1E48D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48D8u; }
        if (ctx->pc != 0x1E48D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48D8u; }
        if (ctx->pc != 0x1E48D8u) { return; }
    }
    ctx->pc = 0x1E48D8u;
label_1e48d8:
    // 0x1e48d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e48dc:
    // 0x1e48dc: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e48e0:
    if (ctx->pc == 0x1E48E0u) {
        ctx->pc = 0x1E48E4u;
        goto label_1e48e4;
    }
    ctx->pc = 0x1E48DCu;
    {
        const bool branch_taken_0x1e48dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e48dc) {
            ctx->pc = 0x1E48E8u;
            goto label_1e48e8;
        }
    }
    ctx->pc = 0x1E48E4u;
label_1e48e4:
    // 0x1e48e4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1e48e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e48e8:
    // 0x1e48e8: 0xc065d00  jal         func_197400
label_1e48ec:
    if (ctx->pc == 0x1E48ECu) {
        ctx->pc = 0x1E48F0u;
        goto label_1e48f0;
    }
    ctx->pc = 0x1E48E8u;
    SET_GPR_U32(ctx, 31, 0x1E48F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48F0u; }
        if (ctx->pc != 0x1E48F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E48F0u; }
        if (ctx->pc != 0x1E48F0u) { return; }
    }
    ctx->pc = 0x1E48F0u;
label_1e48f0:
    // 0x1e48f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e48f4:
    if (ctx->pc == 0x1E48F4u) {
        ctx->pc = 0x1E48F8u;
        goto label_1e48f8;
    }
    ctx->pc = 0x1E48F0u;
    {
        const bool branch_taken_0x1e48f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e48f0) {
            ctx->pc = 0x1E4900u;
            goto label_1e4900;
        }
    }
    ctx->pc = 0x1E48F8u;
label_1e48f8:
    // 0x1e48f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e48fc:
    // 0x1e48fc: 0x0  nop
    ctx->pc = 0x1e48fcu;
    // NOP
label_1e4900:
    // 0x1e4900: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1e4900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4904:
    // 0x1e4904: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4908:
    // 0x1e4908: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1e4908u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e490c:
    // 0x1e490c: 0x0  nop
    ctx->pc = 0x1e490cu;
    // NOP
label_1e4910:
    // 0x1e4910: 0x0  nop
    ctx->pc = 0x1e4910u;
    // NOP
label_1e4914:
    // 0x1e4914: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4914u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4918:
    // 0x1e4918: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1e4918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e491c:
    // 0x1e491c: 0x102000e4  beqz        $at, . + 4 + (0xE4 << 2)
label_1e4920:
    if (ctx->pc == 0x1E4920u) {
        ctx->pc = 0x1E4924u;
        goto label_1e4924;
    }
    ctx->pc = 0x1E491Cu;
    {
        const bool branch_taken_0x1e491c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e491c) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4924u;
label_1e4924:
    // 0x1e4924: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4928:
    // 0x1e4928: 0xc06534c  jal         func_194D30
label_1e492c:
    if (ctx->pc == 0x1E492Cu) {
        ctx->pc = 0x1E492Cu;
            // 0x1e492c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E4930u;
        goto label_1e4930;
    }
    ctx->pc = 0x1E4928u;
    SET_GPR_U32(ctx, 31, 0x1E4930u);
    ctx->pc = 0x1E492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4928u;
            // 0x1e492c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4930u; }
        if (ctx->pc != 0x1E4930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4930u; }
        if (ctx->pc != 0x1E4930u) { return; }
    }
    ctx->pc = 0x1E4930u;
label_1e4930:
    // 0x1e4930: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4934:
    // 0x1e4934: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4938:
    // 0x1e4938: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e493c:
    // 0x1e493c: 0xc06534c  jal         func_194D30
label_1e4940:
    if (ctx->pc == 0x1E4940u) {
        ctx->pc = 0x1E4940u;
            // 0x1e4940: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x1E4944u;
        goto label_1e4944;
    }
    ctx->pc = 0x1E493Cu;
    SET_GPR_U32(ctx, 31, 0x1E4944u);
    ctx->pc = 0x1E4940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E493Cu;
            // 0x1e4940: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4944u; }
        if (ctx->pc != 0x1E4944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4944u; }
        if (ctx->pc != 0x1E4944u) { return; }
    }
    ctx->pc = 0x1E4944u;
label_1e4944:
    // 0x1e4944: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4948:
    // 0x1e4948: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e494c:
    // 0x1e494c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4950:
    // 0x1e4950: 0xc06534c  jal         func_194D30
label_1e4954:
    if (ctx->pc == 0x1E4954u) {
        ctx->pc = 0x1E4954u;
            // 0x1e4954: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x1E4958u;
        goto label_1e4958;
    }
    ctx->pc = 0x1E4950u;
    SET_GPR_U32(ctx, 31, 0x1E4958u);
    ctx->pc = 0x1E4954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4950u;
            // 0x1e4954: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4958u; }
        if (ctx->pc != 0x1E4958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4958u; }
        if (ctx->pc != 0x1E4958u) { return; }
    }
    ctx->pc = 0x1E4958u;
label_1e4958:
    // 0x1e4958: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e495c:
    // 0x1e495c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4960:
    // 0x1e4960: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4964:
    // 0x1e4964: 0xc06534c  jal         func_194D30
label_1e4968:
    if (ctx->pc == 0x1E4968u) {
        ctx->pc = 0x1E4968u;
            // 0x1e4968: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->pc = 0x1E496Cu;
        goto label_1e496c;
    }
    ctx->pc = 0x1E4964u;
    SET_GPR_U32(ctx, 31, 0x1E496Cu);
    ctx->pc = 0x1E4968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4964u;
            // 0x1e4968: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E496Cu; }
        if (ctx->pc != 0x1E496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E496Cu; }
        if (ctx->pc != 0x1E496Cu) { return; }
    }
    ctx->pc = 0x1E496Cu;
label_1e496c:
    // 0x1e496c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4970:
    // 0x1e4970: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4974:
    // 0x1e4974: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4978:
    // 0x1e4978: 0xc06534c  jal         func_194D30
label_1e497c:
    if (ctx->pc == 0x1E497Cu) {
        ctx->pc = 0x1E497Cu;
            // 0x1e497c: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x1E4980u;
        goto label_1e4980;
    }
    ctx->pc = 0x1E4978u;
    SET_GPR_U32(ctx, 31, 0x1E4980u);
    ctx->pc = 0x1E497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4978u;
            // 0x1e497c: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4980u; }
        if (ctx->pc != 0x1E4980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4980u; }
        if (ctx->pc != 0x1E4980u) { return; }
    }
    ctx->pc = 0x1E4980u;
label_1e4980:
    // 0x1e4980: 0x100000cb  b           . + 4 + (0xCB << 2)
label_1e4984:
    if (ctx->pc == 0x1E4984u) {
        ctx->pc = 0x1E4988u;
        goto label_1e4988;
    }
    ctx->pc = 0x1E4980u;
    {
        const bool branch_taken_0x1e4980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4980) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4988u;
label_1e4988:
    // 0x1e4988: 0xc065d00  jal         func_197400
label_1e498c:
    if (ctx->pc == 0x1E498Cu) {
        ctx->pc = 0x1E4990u;
        goto label_1e4990;
    }
    ctx->pc = 0x1E4988u;
    SET_GPR_U32(ctx, 31, 0x1E4990u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4990u; }
        if (ctx->pc != 0x1E4990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4990u; }
        if (ctx->pc != 0x1E4990u) { return; }
    }
    ctx->pc = 0x1E4990u;
label_1e4990:
    // 0x1e4990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e4990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4994:
    // 0x1e4994: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4998:
    if (ctx->pc == 0x1E4998u) {
        ctx->pc = 0x1E499Cu;
        goto label_1e499c;
    }
    ctx->pc = 0x1E4994u;
    {
        const bool branch_taken_0x1e4994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4994) {
            ctx->pc = 0x1E49A0u;
            goto label_1e49a0;
        }
    }
    ctx->pc = 0x1E499Cu;
label_1e499c:
    // 0x1e499c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e499cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e49a0:
    // 0x1e49a0: 0xc065d00  jal         func_197400
label_1e49a4:
    if (ctx->pc == 0x1E49A4u) {
        ctx->pc = 0x1E49A8u;
        goto label_1e49a8;
    }
    ctx->pc = 0x1E49A0u;
    SET_GPR_U32(ctx, 31, 0x1E49A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49A8u; }
        if (ctx->pc != 0x1E49A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49A8u; }
        if (ctx->pc != 0x1E49A8u) { return; }
    }
    ctx->pc = 0x1E49A8u;
label_1e49a8:
    // 0x1e49a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e49ac:
    // 0x1e49ac: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e49b0:
    if (ctx->pc == 0x1E49B0u) {
        ctx->pc = 0x1E49B4u;
        goto label_1e49b4;
    }
    ctx->pc = 0x1E49ACu;
    {
        const bool branch_taken_0x1e49ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e49ac) {
            ctx->pc = 0x1E49B8u;
            goto label_1e49b8;
        }
    }
    ctx->pc = 0x1E49B4u;
label_1e49b4:
    // 0x1e49b4: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1e49b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e49b8:
    // 0x1e49b8: 0xc065d00  jal         func_197400
label_1e49bc:
    if (ctx->pc == 0x1E49BCu) {
        ctx->pc = 0x1E49C0u;
        goto label_1e49c0;
    }
    ctx->pc = 0x1E49B8u;
    SET_GPR_U32(ctx, 31, 0x1E49C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49C0u; }
        if (ctx->pc != 0x1E49C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49C0u; }
        if (ctx->pc != 0x1E49C0u) { return; }
    }
    ctx->pc = 0x1E49C0u;
label_1e49c0:
    // 0x1e49c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e49c4:
    if (ctx->pc == 0x1E49C4u) {
        ctx->pc = 0x1E49C8u;
        goto label_1e49c8;
    }
    ctx->pc = 0x1E49C0u;
    {
        const bool branch_taken_0x1e49c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e49c0) {
            ctx->pc = 0x1E49D0u;
            goto label_1e49d0;
        }
    }
    ctx->pc = 0x1E49C8u;
label_1e49c8:
    // 0x1e49c8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1e49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e49cc:
    // 0x1e49cc: 0x0  nop
    ctx->pc = 0x1e49ccu;
    // NOP
label_1e49d0:
    // 0x1e49d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e49d4:
    // 0x1e49d4: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1e49d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
label_1e49d8:
    // 0x1e49d8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_1e49dc:
    if (ctx->pc == 0x1E49DCu) {
        ctx->pc = 0x1E49E0u;
        goto label_1e49e0;
    }
    ctx->pc = 0x1E49D8u;
    {
        const bool branch_taken_0x1e49d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e49d8) {
            ctx->pc = 0x1E4A80u;
            goto label_1e4a80;
        }
    }
    ctx->pc = 0x1E49E0u;
label_1e49e0:
    // 0x1e49e0: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1e49e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e49e4:
    // 0x1e49e4: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x1e49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
label_1e49e8:
    // 0x1e49e8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1e49e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1e49ec:
    // 0x1e49ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e49ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e49f0:
    // 0x1e49f0: 0x0  nop
    ctx->pc = 0x1e49f0u;
    // NOP
label_1e49f4:
    // 0x1e49f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e49f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e49f8:
    // 0x1e49f8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1e49f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1e49fc:
    // 0x1e49fc: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1e49fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a00:
    // 0x1e4a00: 0xd0001a  div         $zero, $a2, $s0
    ctx->pc = 0x1e4a00u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4a04:
    // 0x1e4a04: 0x0  nop
    ctx->pc = 0x1e4a04u;
    // NOP
label_1e4a08:
    // 0x1e4a08: 0x0  nop
    ctx->pc = 0x1e4a08u;
    // NOP
label_1e4a0c:
    // 0x1e4a0c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4a10:
    // 0x1e4a10: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_1e4a14:
    if (ctx->pc == 0x1E4A14u) {
        ctx->pc = 0x1E4A18u;
        goto label_1e4a18;
    }
    ctx->pc = 0x1E4A10u;
    {
        const bool branch_taken_0x1e4a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a10) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4A18u;
label_1e4a18:
    // 0x1e4a18: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4a1c:
    // 0x1e4a1c: 0xc06532c  jal         func_194CB0
label_1e4a20:
    if (ctx->pc == 0x1E4A20u) {
        ctx->pc = 0x1E4A20u;
            // 0x1e4a20: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E4A24u;
        goto label_1e4a24;
    }
    ctx->pc = 0x1E4A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A24u);
    ctx->pc = 0x1E4A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A1Cu;
            // 0x1e4a20: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A24u; }
        if (ctx->pc != 0x1E4A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A24u; }
        if (ctx->pc != 0x1E4A24u) { return; }
    }
    ctx->pc = 0x1E4A24u;
label_1e4a24:
    // 0x1e4a24: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a28:
    // 0x1e4a28: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4a2c:
    // 0x1e4a2c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4a30:
    // 0x1e4a30: 0xc06532c  jal         func_194CB0
label_1e4a34:
    if (ctx->pc == 0x1E4A34u) {
        ctx->pc = 0x1E4A34u;
            // 0x1e4a34: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x1E4A38u;
        goto label_1e4a38;
    }
    ctx->pc = 0x1E4A30u;
    SET_GPR_U32(ctx, 31, 0x1E4A38u);
    ctx->pc = 0x1E4A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A30u;
            // 0x1e4a34: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A38u; }
        if (ctx->pc != 0x1E4A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A38u; }
        if (ctx->pc != 0x1E4A38u) { return; }
    }
    ctx->pc = 0x1E4A38u;
label_1e4a38:
    // 0x1e4a38: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a3c:
    // 0x1e4a3c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4a40:
    // 0x1e4a40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4a44:
    // 0x1e4a44: 0xc06532c  jal         func_194CB0
label_1e4a48:
    if (ctx->pc == 0x1E4A48u) {
        ctx->pc = 0x1E4A48u;
            // 0x1e4a48: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x1E4A4Cu;
        goto label_1e4a4c;
    }
    ctx->pc = 0x1E4A44u;
    SET_GPR_U32(ctx, 31, 0x1E4A4Cu);
    ctx->pc = 0x1E4A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A44u;
            // 0x1e4a48: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A4Cu; }
        if (ctx->pc != 0x1E4A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A4Cu; }
        if (ctx->pc != 0x1E4A4Cu) { return; }
    }
    ctx->pc = 0x1E4A4Cu;
label_1e4a4c:
    // 0x1e4a4c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a50:
    // 0x1e4a50: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4a54:
    // 0x1e4a54: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4a58:
    // 0x1e4a58: 0xc06532c  jal         func_194CB0
label_1e4a5c:
    if (ctx->pc == 0x1E4A5Cu) {
        ctx->pc = 0x1E4A5Cu;
            // 0x1e4a5c: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->pc = 0x1E4A60u;
        goto label_1e4a60;
    }
    ctx->pc = 0x1E4A58u;
    SET_GPR_U32(ctx, 31, 0x1E4A60u);
    ctx->pc = 0x1E4A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A58u;
            // 0x1e4a5c: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A60u; }
        if (ctx->pc != 0x1E4A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A60u; }
        if (ctx->pc != 0x1E4A60u) { return; }
    }
    ctx->pc = 0x1E4A60u;
label_1e4a60:
    // 0x1e4a60: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4a64:
    // 0x1e4a64: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4a68:
    // 0x1e4a68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4a6c:
    // 0x1e4a6c: 0xc06532c  jal         func_194CB0
label_1e4a70:
    if (ctx->pc == 0x1E4A70u) {
        ctx->pc = 0x1E4A70u;
            // 0x1e4a70: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x1E4A74u;
        goto label_1e4a74;
    }
    ctx->pc = 0x1E4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A74u);
    ctx->pc = 0x1E4A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A6Cu;
            // 0x1e4a70: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A74u; }
        if (ctx->pc != 0x1E4A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A74u; }
        if (ctx->pc != 0x1E4A74u) { return; }
    }
    ctx->pc = 0x1E4A74u;
label_1e4a74:
    // 0x1e4a74: 0x1000008e  b           . + 4 + (0x8E << 2)
label_1e4a78:
    if (ctx->pc == 0x1E4A78u) {
        ctx->pc = 0x1E4A7Cu;
        goto label_1e4a7c;
    }
    ctx->pc = 0x1E4A74u;
    {
        const bool branch_taken_0x1e4a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a74) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4A7Cu;
label_1e4a7c:
    // 0x1e4a7c: 0x0  nop
    ctx->pc = 0x1e4a7cu;
    // NOP
label_1e4a80:
    // 0x1e4a80: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1e4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1e4a84:
    // 0x1e4a84: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1e4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4a88:
    // 0x1e4a88: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1e4a88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1e4a8c:
    // 0x1e4a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4a90:
    // 0x1e4a90: 0x0  nop
    ctx->pc = 0x1e4a90u;
    // NOP
label_1e4a94:
    // 0x1e4a94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e4a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e4a98:
    // 0x1e4a98: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1e4a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1e4a9c:
    // 0x1e4a9c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4aa0:
    // 0x1e4aa0: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x1e4aa0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4aa4:
    // 0x1e4aa4: 0x0  nop
    ctx->pc = 0x1e4aa4u;
    // NOP
label_1e4aa8:
    // 0x1e4aa8: 0x0  nop
    ctx->pc = 0x1e4aa8u;
    // NOP
label_1e4aac:
    // 0x1e4aac: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4aacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4ab0:
    // 0x1e4ab0: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
label_1e4ab4:
    if (ctx->pc == 0x1E4AB4u) {
        ctx->pc = 0x1E4AB8u;
        goto label_1e4ab8;
    }
    ctx->pc = 0x1E4AB0u;
    {
        const bool branch_taken_0x1e4ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ab0) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4AB8u;
label_1e4ab8:
    // 0x1e4ab8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4abc:
    // 0x1e4abc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4ac0:
    // 0x1e4ac0: 0xc06534c  jal         func_194D30
label_1e4ac4:
    if (ctx->pc == 0x1E4AC4u) {
        ctx->pc = 0x1E4AC4u;
            // 0x1e4ac4: 0x2466000f  addiu       $a2, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->pc = 0x1E4AC8u;
        goto label_1e4ac8;
    }
    ctx->pc = 0x1E4AC0u;
    SET_GPR_U32(ctx, 31, 0x1E4AC8u);
    ctx->pc = 0x1E4AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AC0u;
            // 0x1e4ac4: 0x2466000f  addiu       $a2, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AC8u; }
        if (ctx->pc != 0x1E4AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AC8u; }
        if (ctx->pc != 0x1E4AC8u) { return; }
    }
    ctx->pc = 0x1E4AC8u;
label_1e4ac8:
    // 0x1e4ac8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4acc:
    // 0x1e4acc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4ad0:
    // 0x1e4ad0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4ad4:
    // 0x1e4ad4: 0xc06534c  jal         func_194D30
label_1e4ad8:
    if (ctx->pc == 0x1E4AD8u) {
        ctx->pc = 0x1E4AD8u;
            // 0x1e4ad8: 0x24460027  addiu       $a2, $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
        ctx->pc = 0x1E4ADCu;
        goto label_1e4adc;
    }
    ctx->pc = 0x1E4AD4u;
    SET_GPR_U32(ctx, 31, 0x1E4ADCu);
    ctx->pc = 0x1E4AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AD4u;
            // 0x1e4ad8: 0x24460027  addiu       $a2, $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ADCu; }
        if (ctx->pc != 0x1E4ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4ADCu; }
        if (ctx->pc != 0x1E4ADCu) { return; }
    }
    ctx->pc = 0x1E4ADCu;
label_1e4adc:
    // 0x1e4adc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4ae0:
    // 0x1e4ae0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4ae4:
    // 0x1e4ae4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4ae8:
    // 0x1e4ae8: 0xc06534c  jal         func_194D30
label_1e4aec:
    if (ctx->pc == 0x1E4AECu) {
        ctx->pc = 0x1E4AECu;
            // 0x1e4aec: 0x2446003f  addiu       $a2, $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
        ctx->pc = 0x1E4AF0u;
        goto label_1e4af0;
    }
    ctx->pc = 0x1E4AE8u;
    SET_GPR_U32(ctx, 31, 0x1E4AF0u);
    ctx->pc = 0x1E4AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AE8u;
            // 0x1e4aec: 0x2446003f  addiu       $a2, $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AF0u; }
        if (ctx->pc != 0x1E4AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4AF0u; }
        if (ctx->pc != 0x1E4AF0u) { return; }
    }
    ctx->pc = 0x1E4AF0u;
label_1e4af0:
    // 0x1e4af0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4af4:
    // 0x1e4af4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4af8:
    // 0x1e4af8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4afc:
    // 0x1e4afc: 0xc06534c  jal         func_194D30
label_1e4b00:
    if (ctx->pc == 0x1E4B00u) {
        ctx->pc = 0x1E4B00u;
            // 0x1e4b00: 0x24460057  addiu       $a2, $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 87));
        ctx->pc = 0x1E4B04u;
        goto label_1e4b04;
    }
    ctx->pc = 0x1E4AFCu;
    SET_GPR_U32(ctx, 31, 0x1E4B04u);
    ctx->pc = 0x1E4B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4AFCu;
            // 0x1e4b00: 0x24460057  addiu       $a2, $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 87));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B04u; }
        if (ctx->pc != 0x1E4B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B04u; }
        if (ctx->pc != 0x1E4B04u) { return; }
    }
    ctx->pc = 0x1E4B04u;
label_1e4b04:
    // 0x1e4b04: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4b08:
    // 0x1e4b08: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4b0c:
    // 0x1e4b0c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4b10:
    // 0x1e4b10: 0xc06534c  jal         func_194D30
label_1e4b14:
    if (ctx->pc == 0x1E4B14u) {
        ctx->pc = 0x1E4B14u;
            // 0x1e4b14: 0x2446006f  addiu       $a2, $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 111));
        ctx->pc = 0x1E4B18u;
        goto label_1e4b18;
    }
    ctx->pc = 0x1E4B10u;
    SET_GPR_U32(ctx, 31, 0x1E4B18u);
    ctx->pc = 0x1E4B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B10u;
            // 0x1e4b14: 0x2446006f  addiu       $a2, $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B18u; }
        if (ctx->pc != 0x1E4B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B18u; }
        if (ctx->pc != 0x1E4B18u) { return; }
    }
    ctx->pc = 0x1E4B18u;
label_1e4b18:
    // 0x1e4b18: 0x10000065  b           . + 4 + (0x65 << 2)
label_1e4b1c:
    if (ctx->pc == 0x1E4B1Cu) {
        ctx->pc = 0x1E4B20u;
        goto label_1e4b20;
    }
    ctx->pc = 0x1E4B18u;
    {
        const bool branch_taken_0x1e4b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b18) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4B20u;
label_1e4b20:
    // 0x1e4b20: 0xc065d00  jal         func_197400
label_1e4b24:
    if (ctx->pc == 0x1E4B24u) {
        ctx->pc = 0x1E4B28u;
        goto label_1e4b28;
    }
    ctx->pc = 0x1E4B20u;
    SET_GPR_U32(ctx, 31, 0x1E4B28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B28u; }
        if (ctx->pc != 0x1E4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B28u; }
        if (ctx->pc != 0x1E4B28u) { return; }
    }
    ctx->pc = 0x1E4B28u;
label_1e4b28:
    // 0x1e4b28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4b2c:
    // 0x1e4b2c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4b30:
    if (ctx->pc == 0x1E4B30u) {
        ctx->pc = 0x1E4B34u;
        goto label_1e4b34;
    }
    ctx->pc = 0x1E4B2Cu;
    {
        const bool branch_taken_0x1e4b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4b2c) {
            ctx->pc = 0x1E4B38u;
            goto label_1e4b38;
        }
    }
    ctx->pc = 0x1E4B34u;
label_1e4b34:
    // 0x1e4b34: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1e4b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4b38:
    // 0x1e4b38: 0xc065d00  jal         func_197400
label_1e4b3c:
    if (ctx->pc == 0x1E4B3Cu) {
        ctx->pc = 0x1E4B40u;
        goto label_1e4b40;
    }
    ctx->pc = 0x1E4B38u;
    SET_GPR_U32(ctx, 31, 0x1E4B40u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B40u; }
        if (ctx->pc != 0x1E4B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B40u; }
        if (ctx->pc != 0x1E4B40u) { return; }
    }
    ctx->pc = 0x1E4B40u;
label_1e4b40:
    // 0x1e4b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4b44:
    // 0x1e4b44: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4b48:
    if (ctx->pc == 0x1E4B48u) {
        ctx->pc = 0x1E4B4Cu;
        goto label_1e4b4c;
    }
    ctx->pc = 0x1E4B44u;
    {
        const bool branch_taken_0x1e4b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4b44) {
            ctx->pc = 0x1E4B50u;
            goto label_1e4b50;
        }
    }
    ctx->pc = 0x1E4B4Cu;
label_1e4b4c:
    // 0x1e4b4c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x1e4b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e4b50:
    // 0x1e4b50: 0xc065d00  jal         func_197400
label_1e4b54:
    if (ctx->pc == 0x1E4B54u) {
        ctx->pc = 0x1E4B58u;
        goto label_1e4b58;
    }
    ctx->pc = 0x1E4B50u;
    SET_GPR_U32(ctx, 31, 0x1E4B58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B58u; }
        if (ctx->pc != 0x1E4B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B58u; }
        if (ctx->pc != 0x1E4B58u) { return; }
    }
    ctx->pc = 0x1E4B58u;
label_1e4b58:
    // 0x1e4b58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e4b5c:
    if (ctx->pc == 0x1E4B5Cu) {
        ctx->pc = 0x1E4B60u;
        goto label_1e4b60;
    }
    ctx->pc = 0x1E4B58u;
    {
        const bool branch_taken_0x1e4b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b58) {
            ctx->pc = 0x1E4B68u;
            goto label_1e4b68;
        }
    }
    ctx->pc = 0x1E4B60u;
label_1e4b60:
    // 0x1e4b60: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1e4b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e4b64:
    // 0x1e4b64: 0x0  nop
    ctx->pc = 0x1e4b64u;
    // NOP
label_1e4b68:
    // 0x1e4b68: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4b6c:
    // 0x1e4b6c: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1e4b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
label_1e4b70:
    // 0x1e4b70: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_1e4b74:
    if (ctx->pc == 0x1E4B74u) {
        ctx->pc = 0x1E4B78u;
        goto label_1e4b78;
    }
    ctx->pc = 0x1E4B70u;
    {
        const bool branch_taken_0x1e4b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b70) {
            ctx->pc = 0x1E4C18u;
            goto label_1e4c18;
        }
    }
    ctx->pc = 0x1E4B78u;
label_1e4b78:
    // 0x1e4b78: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1e4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4b7c:
    // 0x1e4b7c: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x1e4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
label_1e4b80:
    // 0x1e4b80: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1e4b80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1e4b84:
    // 0x1e4b84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4b88:
    // 0x1e4b88: 0x0  nop
    ctx->pc = 0x1e4b88u;
    // NOP
label_1e4b8c:
    // 0x1e4b8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e4b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e4b90:
    // 0x1e4b90: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1e4b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1e4b94:
    // 0x1e4b94: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1e4b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4b98:
    // 0x1e4b98: 0xd0001a  div         $zero, $a2, $s0
    ctx->pc = 0x1e4b98u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4b9c:
    // 0x1e4b9c: 0x0  nop
    ctx->pc = 0x1e4b9cu;
    // NOP
label_1e4ba0:
    // 0x1e4ba0: 0x0  nop
    ctx->pc = 0x1e4ba0u;
    // NOP
label_1e4ba4:
    // 0x1e4ba4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4ba4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4ba8:
    // 0x1e4ba8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_1e4bac:
    if (ctx->pc == 0x1E4BACu) {
        ctx->pc = 0x1E4BB0u;
        goto label_1e4bb0;
    }
    ctx->pc = 0x1E4BA8u;
    {
        const bool branch_taken_0x1e4ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ba8) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4BB0u;
label_1e4bb0:
    // 0x1e4bb0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4bb4:
    // 0x1e4bb4: 0xc06534c  jal         func_194D30
label_1e4bb8:
    if (ctx->pc == 0x1E4BB8u) {
        ctx->pc = 0x1E4BB8u;
            // 0x1e4bb8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1E4BBCu;
        goto label_1e4bbc;
    }
    ctx->pc = 0x1E4BB4u;
    SET_GPR_U32(ctx, 31, 0x1E4BBCu);
    ctx->pc = 0x1E4BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BB4u;
            // 0x1e4bb8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BBCu; }
        if (ctx->pc != 0x1E4BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BBCu; }
        if (ctx->pc != 0x1E4BBCu) { return; }
    }
    ctx->pc = 0x1E4BBCu;
label_1e4bbc:
    // 0x1e4bbc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4bc0:
    // 0x1e4bc0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4bc4:
    // 0x1e4bc4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4bc8:
    // 0x1e4bc8: 0xc06534c  jal         func_194D30
label_1e4bcc:
    if (ctx->pc == 0x1E4BCCu) {
        ctx->pc = 0x1E4BCCu;
            // 0x1e4bcc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x1E4BD0u;
        goto label_1e4bd0;
    }
    ctx->pc = 0x1E4BC8u;
    SET_GPR_U32(ctx, 31, 0x1E4BD0u);
    ctx->pc = 0x1E4BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BC8u;
            // 0x1e4bcc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BD0u; }
        if (ctx->pc != 0x1E4BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BD0u; }
        if (ctx->pc != 0x1E4BD0u) { return; }
    }
    ctx->pc = 0x1E4BD0u;
label_1e4bd0:
    // 0x1e4bd0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4bd4:
    // 0x1e4bd4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4bd8:
    // 0x1e4bd8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4bdc:
    // 0x1e4bdc: 0xc06534c  jal         func_194D30
label_1e4be0:
    if (ctx->pc == 0x1E4BE0u) {
        ctx->pc = 0x1E4BE0u;
            // 0x1e4be0: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x1E4BE4u;
        goto label_1e4be4;
    }
    ctx->pc = 0x1E4BDCu;
    SET_GPR_U32(ctx, 31, 0x1E4BE4u);
    ctx->pc = 0x1E4BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BDCu;
            // 0x1e4be0: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BE4u; }
        if (ctx->pc != 0x1E4BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BE4u; }
        if (ctx->pc != 0x1E4BE4u) { return; }
    }
    ctx->pc = 0x1E4BE4u;
label_1e4be4:
    // 0x1e4be4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4be8:
    // 0x1e4be8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4bec:
    // 0x1e4bec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4bf0:
    // 0x1e4bf0: 0xc06534c  jal         func_194D30
label_1e4bf4:
    if (ctx->pc == 0x1E4BF4u) {
        ctx->pc = 0x1E4BF4u;
            // 0x1e4bf4: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->pc = 0x1E4BF8u;
        goto label_1e4bf8;
    }
    ctx->pc = 0x1E4BF0u;
    SET_GPR_U32(ctx, 31, 0x1E4BF8u);
    ctx->pc = 0x1E4BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BF0u;
            // 0x1e4bf4: 0x24460048  addiu       $a2, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BF8u; }
        if (ctx->pc != 0x1E4BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BF8u; }
        if (ctx->pc != 0x1E4BF8u) { return; }
    }
    ctx->pc = 0x1E4BF8u;
label_1e4bf8:
    // 0x1e4bf8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4bfc:
    // 0x1e4bfc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4c00:
    // 0x1e4c00: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4c04:
    // 0x1e4c04: 0xc06534c  jal         func_194D30
label_1e4c08:
    if (ctx->pc == 0x1E4C08u) {
        ctx->pc = 0x1E4C08u;
            // 0x1e4c08: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x1E4C0Cu;
        goto label_1e4c0c;
    }
    ctx->pc = 0x1E4C04u;
    SET_GPR_U32(ctx, 31, 0x1E4C0Cu);
    ctx->pc = 0x1E4C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C04u;
            // 0x1e4c08: 0x24460060  addiu       $a2, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C0Cu; }
        if (ctx->pc != 0x1E4C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C0Cu; }
        if (ctx->pc != 0x1E4C0Cu) { return; }
    }
    ctx->pc = 0x1E4C0Cu;
label_1e4c0c:
    // 0x1e4c0c: 0x10000028  b           . + 4 + (0x28 << 2)
label_1e4c10:
    if (ctx->pc == 0x1E4C10u) {
        ctx->pc = 0x1E4C14u;
        goto label_1e4c14;
    }
    ctx->pc = 0x1E4C0Cu;
    {
        const bool branch_taken_0x1e4c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c0c) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4C14u;
label_1e4c14:
    // 0x1e4c14: 0x0  nop
    ctx->pc = 0x1e4c14u;
    // NOP
label_1e4c18:
    // 0x1e4c18: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1e4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
label_1e4c1c:
    // 0x1e4c1c: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1e4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4c20:
    // 0x1e4c20: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1e4c20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
label_1e4c24:
    // 0x1e4c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4c28:
    // 0x1e4c28: 0x0  nop
    ctx->pc = 0x1e4c28u;
    // NOP
label_1e4c2c:
    // 0x1e4c2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e4c30:
    // 0x1e4c30: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1e4c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_1e4c34:
    // 0x1e4c34: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1e4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c38:
    // 0x1e4c38: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x1e4c38u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e4c3c:
    // 0x1e4c3c: 0x0  nop
    ctx->pc = 0x1e4c3cu;
    // NOP
label_1e4c40:
    // 0x1e4c40: 0x0  nop
    ctx->pc = 0x1e4c40u;
    // NOP
label_1e4c44:
    // 0x1e4c44: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4c44u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e4c48:
    // 0x1e4c48: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e4c4c:
    if (ctx->pc == 0x1E4C4Cu) {
        ctx->pc = 0x1E4C50u;
        goto label_1e4c50;
    }
    ctx->pc = 0x1E4C48u;
    {
        const bool branch_taken_0x1e4c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4c48) {
            ctx->pc = 0x1E4CB0u;
            goto label_1e4cb0;
        }
    }
    ctx->pc = 0x1E4C50u;
label_1e4c50:
    // 0x1e4c50: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4c54:
    // 0x1e4c54: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4c58:
    // 0x1e4c58: 0xc06532c  jal         func_194CB0
label_1e4c5c:
    if (ctx->pc == 0x1E4C5Cu) {
        ctx->pc = 0x1E4C5Cu;
            // 0x1e4c5c: 0x2466000f  addiu       $a2, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->pc = 0x1E4C60u;
        goto label_1e4c60;
    }
    ctx->pc = 0x1E4C58u;
    SET_GPR_U32(ctx, 31, 0x1E4C60u);
    ctx->pc = 0x1E4C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C58u;
            // 0x1e4c5c: 0x2466000f  addiu       $a2, $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C60u; }
        if (ctx->pc != 0x1E4C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C60u; }
        if (ctx->pc != 0x1E4C60u) { return; }
    }
    ctx->pc = 0x1E4C60u;
label_1e4c60:
    // 0x1e4c60: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c64:
    // 0x1e4c64: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4c68:
    // 0x1e4c68: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4c6c:
    // 0x1e4c6c: 0xc06532c  jal         func_194CB0
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
            // 0x1e4c70: 0x24460027  addiu       $a2, $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C74u);
    ctx->pc = 0x1E4C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C6Cu;
            // 0x1e4c70: 0x24460027  addiu       $a2, $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C74u; }
        if (ctx->pc != 0x1E4C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C74u; }
        if (ctx->pc != 0x1E4C74u) { return; }
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c78:
    // 0x1e4c78: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4c7c:
    // 0x1e4c7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4c80:
    // 0x1e4c80: 0xc06532c  jal         func_194CB0
label_1e4c84:
    if (ctx->pc == 0x1E4C84u) {
        ctx->pc = 0x1E4C84u;
            // 0x1e4c84: 0x2446003f  addiu       $a2, $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
        ctx->pc = 0x1E4C88u;
        goto label_1e4c88;
    }
    ctx->pc = 0x1E4C80u;
    SET_GPR_U32(ctx, 31, 0x1E4C88u);
    ctx->pc = 0x1E4C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C80u;
            // 0x1e4c84: 0x2446003f  addiu       $a2, $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C88u; }
        if (ctx->pc != 0x1E4C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C88u; }
        if (ctx->pc != 0x1E4C88u) { return; }
    }
    ctx->pc = 0x1E4C88u;
label_1e4c88:
    // 0x1e4c88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4c8c:
    // 0x1e4c8c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4c90:
    // 0x1e4c90: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4c94:
    // 0x1e4c94: 0xc06532c  jal         func_194CB0
label_1e4c98:
    if (ctx->pc == 0x1E4C98u) {
        ctx->pc = 0x1E4C98u;
            // 0x1e4c98: 0x24460057  addiu       $a2, $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 87));
        ctx->pc = 0x1E4C9Cu;
        goto label_1e4c9c;
    }
    ctx->pc = 0x1E4C94u;
    SET_GPR_U32(ctx, 31, 0x1E4C9Cu);
    ctx->pc = 0x1E4C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C94u;
            // 0x1e4c98: 0x24460057  addiu       $a2, $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 87));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C9Cu; }
        if (ctx->pc != 0x1E4C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C9Cu; }
        if (ctx->pc != 0x1E4C9Cu) { return; }
    }
    ctx->pc = 0x1E4C9Cu;
label_1e4c9c:
    // 0x1e4c9c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4ca0:
    // 0x1e4ca0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4ca4:
    // 0x1e4ca4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e4ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4ca8:
    // 0x1e4ca8: 0xc06532c  jal         func_194CB0
label_1e4cac:
    if (ctx->pc == 0x1E4CACu) {
        ctx->pc = 0x1E4CACu;
            // 0x1e4cac: 0x2446006f  addiu       $a2, $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 111));
        ctx->pc = 0x1E4CB0u;
        goto label_1e4cb0;
    }
    ctx->pc = 0x1E4CA8u;
    SET_GPR_U32(ctx, 31, 0x1E4CB0u);
    ctx->pc = 0x1E4CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CA8u;
            // 0x1e4cac: 0x2446006f  addiu       $a2, $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 111));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CB0u; }
        if (ctx->pc != 0x1E4CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CB0u; }
        if (ctx->pc != 0x1E4CB0u) { return; }
    }
    ctx->pc = 0x1E4CB0u;
label_1e4cb0:
    // 0x1e4cb0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4cb4:
    // 0x1e4cb4: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x1e4cb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
label_1e4cb8:
    // 0x1e4cb8: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1e4cbc:
    if (ctx->pc == 0x1E4CBCu) {
        ctx->pc = 0x1E4CBCu;
            // 0x1e4cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E4CC0u;
        goto label_1e4cc0;
    }
    ctx->pc = 0x1E4CB8u;
    {
        const bool branch_taken_0x1e4cb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CB8u;
            // 0x1e4cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cb8) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4CC0u;
label_1e4cc0:
    // 0x1e4cc0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e4cc4:
    if (ctx->pc == 0x1E4CC4u) {
        ctx->pc = 0x1E4CC4u;
            // 0x1e4cc4: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4CC8u;
        goto label_1e4cc8;
    }
    ctx->pc = 0x1E4CC0u;
    {
        const bool branch_taken_0x1e4cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CC0u;
            // 0x1e4cc4: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4cc0) {
            ctx->pc = 0x1E4CE8u;
            goto label_1e4ce8;
        }
    }
    ctx->pc = 0x1E4CC8u;
label_1e4cc8:
    // 0x1e4cc8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1e4ccc:
    // 0x1e4ccc: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1e4cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4cd0:
    // 0x1e4cd0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e4cd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1e4cd4:
    // 0x1e4cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4cd8:
    // 0x1e4cd8: 0x0  nop
    ctx->pc = 0x1e4cd8u;
    // NOP
label_1e4cdc:
    // 0x1e4cdc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e4cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e4ce0:
    // 0x1e4ce0: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1e4ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_1e4ce4:
    // 0x1e4ce4: 0x0  nop
    ctx->pc = 0x1e4ce4u;
    // NOP
label_1e4ce8:
    // 0x1e4ce8: 0xc04b788  jal         func_12DE20
label_1e4cec:
    if (ctx->pc == 0x1E4CECu) {
        ctx->pc = 0x1E4CECu;
            // 0x1e4cec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1E4CF0u;
        goto label_1e4cf0;
    }
    ctx->pc = 0x1E4CE8u;
    SET_GPR_U32(ctx, 31, 0x1E4CF0u);
    ctx->pc = 0x1E4CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CE8u;
            // 0x1e4cec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CF0u; }
        if (ctx->pc != 0x1E4CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CF0u; }
        if (ctx->pc != 0x1E4CF0u) { return; }
    }
    ctx->pc = 0x1E4CF0u;
label_1e4cf0:
    // 0x1e4cf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4cf4:
    // 0x1e4cf4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4cf8:
    // 0x1e4cf8: 0xc04b7da  jal         func_12DF68
label_1e4cfc:
    if (ctx->pc == 0x1E4CFCu) {
        ctx->pc = 0x1E4CFCu;
            // 0x1e4cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D00u;
        goto label_1e4d00;
    }
    ctx->pc = 0x1E4CF8u;
    SET_GPR_U32(ctx, 31, 0x1E4D00u);
    ctx->pc = 0x1E4CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CF8u;
            // 0x1e4cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D00u; }
        if (ctx->pc != 0x1E4D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D00u; }
        if (ctx->pc != 0x1E4D00u) { return; }
    }
    ctx->pc = 0x1E4D00u;
label_1e4d00:
    // 0x1e4d00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d04:
    // 0x1e4d04: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4d08:
    // 0x1e4d08: 0xc04b804  jal         func_12E010
label_1e4d0c:
    if (ctx->pc == 0x1E4D0Cu) {
        ctx->pc = 0x1E4D0Cu;
            // 0x1e4d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D10u;
        goto label_1e4d10;
    }
    ctx->pc = 0x1E4D08u;
    SET_GPR_U32(ctx, 31, 0x1E4D10u);
    ctx->pc = 0x1E4D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D08u;
            // 0x1e4d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D10u; }
        if (ctx->pc != 0x1E4D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D10u; }
        if (ctx->pc != 0x1E4D10u) { return; }
    }
    ctx->pc = 0x1E4D10u;
label_1e4d10:
    // 0x1e4d10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d14:
    // 0x1e4d14: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e4d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4d18:
    // 0x1e4d18: 0xc04b7b0  jal         func_12DEC0
label_1e4d1c:
    if (ctx->pc == 0x1E4D1Cu) {
        ctx->pc = 0x1E4D1Cu;
            // 0x1e4d1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D20u;
        goto label_1e4d20;
    }
    ctx->pc = 0x1E4D18u;
    SET_GPR_U32(ctx, 31, 0x1E4D20u);
    ctx->pc = 0x1E4D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D18u;
            // 0x1e4d1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D20u; }
        if (ctx->pc != 0x1E4D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D20u; }
        if (ctx->pc != 0x1E4D20u) { return; }
    }
    ctx->pc = 0x1E4D20u;
label_1e4d20:
    // 0x1e4d20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d24:
    // 0x1e4d24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e4d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d28:
    // 0x1e4d28: 0xc04b75e  jal         func_12DD78
label_1e4d2c:
    if (ctx->pc == 0x1E4D2Cu) {
        ctx->pc = 0x1E4D2Cu;
            // 0x1e4d2c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E4D30u;
        goto label_1e4d30;
    }
    ctx->pc = 0x1E4D28u;
    SET_GPR_U32(ctx, 31, 0x1E4D30u);
    ctx->pc = 0x1E4D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D28u;
            // 0x1e4d2c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D30u; }
        if (ctx->pc != 0x1E4D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D30u; }
        if (ctx->pc != 0x1E4D30u) { return; }
    }
    ctx->pc = 0x1E4D30u;
label_1e4d30:
    // 0x1e4d30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e4d34:
    // 0x1e4d34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e4d38:
    // 0x1e4d38: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e4d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4d3c:
    // 0x1e4d3c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e4d40:
    if (ctx->pc == 0x1E4D40u) {
        ctx->pc = 0x1E4D44u;
        goto label_1e4d44;
    }
    ctx->pc = 0x1E4D3Cu;
    {
        const bool branch_taken_0x1e4d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d3c) {
            ctx->pc = 0x1E4D90u;
            goto label_1e4d90;
        }
    }
    ctx->pc = 0x1E4D44u;
label_1e4d44:
    // 0x1e4d44: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1e4d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_1e4d48:
    // 0x1e4d48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e4d4c:
    if (ctx->pc == 0x1E4D4Cu) {
        ctx->pc = 0x1E4D50u;
        goto label_1e4d50;
    }
    ctx->pc = 0x1E4D48u;
    {
        const bool branch_taken_0x1e4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d48) {
            ctx->pc = 0x1E4D60u;
            goto label_1e4d60;
        }
    }
    ctx->pc = 0x1E4D50u;
label_1e4d50:
    // 0x1e4d50: 0xc0604f0  jal         func_1813C0
label_1e4d54:
    if (ctx->pc == 0x1E4D54u) {
        ctx->pc = 0x1E4D54u;
            // 0x1e4d54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1E4D58u;
        goto label_1e4d58;
    }
    ctx->pc = 0x1E4D50u;
    SET_GPR_U32(ctx, 31, 0x1E4D58u);
    ctx->pc = 0x1E4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D50u;
            // 0x1e4d54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D58u; }
        if (ctx->pc != 0x1E4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D58u; }
        if (ctx->pc != 0x1E4D58u) { return; }
    }
    ctx->pc = 0x1E4D58u;
label_1e4d58:
    // 0x1e4d58: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e4d5c:
    if (ctx->pc == 0x1E4D5Cu) {
        ctx->pc = 0x1E4D60u;
        goto label_1e4d60;
    }
    ctx->pc = 0x1E4D58u;
    {
        const bool branch_taken_0x1e4d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d58) {
            ctx->pc = 0x1E4D68u;
            goto label_1e4d68;
        }
    }
    ctx->pc = 0x1E4D60u;
label_1e4d60:
    // 0x1e4d60: 0xc0604dc  jal         func_181370
label_1e4d64:
    if (ctx->pc == 0x1E4D64u) {
        ctx->pc = 0x1E4D64u;
            // 0x1e4d64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1E4D68u;
        goto label_1e4d68;
    }
    ctx->pc = 0x1E4D60u;
    SET_GPR_U32(ctx, 31, 0x1E4D68u);
    ctx->pc = 0x1E4D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D60u;
            // 0x1e4d64: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D68u; }
        if (ctx->pc != 0x1E4D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D68u; }
        if (ctx->pc != 0x1E4D68u) { return; }
    }
    ctx->pc = 0x1E4D68u;
label_1e4d68:
    // 0x1e4d68: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x1e4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_1e4d6c:
    // 0x1e4d6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e4d70:
    if (ctx->pc == 0x1E4D70u) {
        ctx->pc = 0x1E4D74u;
        goto label_1e4d74;
    }
    ctx->pc = 0x1E4D6Cu;
    {
        const bool branch_taken_0x1e4d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d6c) {
            ctx->pc = 0x1E4D80u;
            goto label_1e4d80;
        }
    }
    ctx->pc = 0x1E4D74u;
label_1e4d74:
    // 0x1e4d74: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e4d78:
    if (ctx->pc == 0x1E4D78u) {
        ctx->pc = 0x1E4D78u;
            // 0x1e4d78: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1E4D7Cu;
        goto label_1e4d7c;
    }
    ctx->pc = 0x1E4D74u;
    {
        const bool branch_taken_0x1e4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D74u;
            // 0x1e4d78: 0xae200110  sw          $zero, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d74) {
            ctx->pc = 0x1E4DA0u;
            goto label_1e4da0;
        }
    }
    ctx->pc = 0x1E4D7Cu;
label_1e4d7c:
    // 0x1e4d7c: 0x0  nop
    ctx->pc = 0x1e4d7cu;
    // NOP
label_1e4d80:
    // 0x1e4d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d84:
    // 0x1e4d84: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4d88:
    if (ctx->pc == 0x1E4D88u) {
        ctx->pc = 0x1E4D88u;
            // 0x1e4d88: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1E4D8Cu;
        goto label_1e4d8c;
    }
    ctx->pc = 0x1E4D84u;
    {
        const bool branch_taken_0x1e4d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D84u;
            // 0x1e4d88: 0xae220110  sw          $v0, 0x110($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4d84) {
            ctx->pc = 0x1E4DA0u;
            goto label_1e4da0;
        }
    }
    ctx->pc = 0x1E4D8Cu;
label_1e4d8c:
    // 0x1e4d8c: 0x0  nop
    ctx->pc = 0x1e4d8cu;
    // NOP
label_1e4d90:
    // 0x1e4d90: 0xc0604dc  jal         func_181370
label_1e4d94:
    if (ctx->pc == 0x1E4D94u) {
        ctx->pc = 0x1E4D94u;
            // 0x1e4d94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1E4D98u;
        goto label_1e4d98;
    }
    ctx->pc = 0x1E4D90u;
    SET_GPR_U32(ctx, 31, 0x1E4D98u);
    ctx->pc = 0x1E4D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4D90u;
            // 0x1e4d94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D98u; }
        if (ctx->pc != 0x1E4D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4D98u; }
        if (ctx->pc != 0x1E4D98u) { return; }
    }
    ctx->pc = 0x1E4D98u;
label_1e4d98:
    // 0x1e4d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4d9c:
    // 0x1e4d9c: 0xae220110  sw          $v0, 0x110($s1)
    ctx->pc = 0x1e4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 2));
label_1e4da0:
    // 0x1e4da0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e4da4:
    // 0x1e4da4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e4da8:
    // 0x1e4da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4dac:
    // 0x1e4dac: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1e4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1e4db0:
    // 0x1e4db0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4db4:
    // 0x1e4db4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e4db8:
    // 0x1e4db8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4dbc:
    // 0x1e4dbc: 0x0  nop
    ctx->pc = 0x1e4dbcu;
    // NOP
label_1e4dc0:
    // 0x1e4dc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e4dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e4dc4:
    // 0x1e4dc4: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x1e4dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_1e4dc8:
    // 0x1e4dc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4dcc:
    // 0x1e4dcc: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e4dd0:
    // 0x1e4dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4dd4:
    // 0x1e4dd4: 0x0  nop
    ctx->pc = 0x1e4dd4u;
    // NOP
label_1e4dd8:
    // 0x1e4dd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e4dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e4ddc:
    // 0x1e4ddc: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x1e4ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_1e4de0:
    // 0x1e4de0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1e4de4:
    // 0x1e4de4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e4de8:
    // 0x1e4de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4dec:
    // 0x1e4dec: 0x0  nop
    ctx->pc = 0x1e4decu;
    // NOP
label_1e4df0:
    // 0x1e4df0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e4df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e4df4:
    // 0x1e4df4: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x1e4df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1e4df8:
    // 0x1e4df8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1e4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1e4dfc:
    // 0x1e4dfc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e4e00:
    // 0x1e4e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4e04:
    // 0x1e4e04: 0x0  nop
    ctx->pc = 0x1e4e04u;
    // NOP
label_1e4e08:
    // 0x1e4e08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e4e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e4e0c:
    // 0x1e4e0c: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x1e4e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1e4e10:
    // 0x1e4e10: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1e4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1e4e14:
    // 0x1e4e14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e4e18:
    // 0x1e4e18: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1e4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1e4e1c:
    // 0x1e4e1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4e20:
    // 0x1e4e20: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e4e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e24:
    // 0x1e4e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4e28:
    // 0x1e4e28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e4e2c:
    if (ctx->pc == 0x1E4E2Cu) {
        ctx->pc = 0x1E4E2Cu;
            // 0x1e4e2c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1E4E30u;
        goto label_1e4e30;
    }
    ctx->pc = 0x1E4E28u;
    {
        const bool branch_taken_0x1e4e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E28u;
            // 0x1e4e2c: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e28) {
            ctx->pc = 0x1E4E48u;
            goto label_1e4e48;
        }
    }
    ctx->pc = 0x1E4E30u;
label_1e4e30:
    // 0x1e4e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4e34:
    // 0x1e4e34: 0x0  nop
    ctx->pc = 0x1e4e34u;
    // NOP
label_1e4e38:
    // 0x1e4e38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e4e38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4e3c:
    // 0x1e4e3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e4e40:
    if (ctx->pc == 0x1E4E40u) {
        ctx->pc = 0x1E4E44u;
        goto label_1e4e44;
    }
    ctx->pc = 0x1E4E3Cu;
    {
        const bool branch_taken_0x1e4e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4e3c) {
            ctx->pc = 0x1E4E60u;
            goto label_1e4e60;
        }
    }
    ctx->pc = 0x1E4E44u;
label_1e4e44:
    // 0x1e4e44: 0x0  nop
    ctx->pc = 0x1e4e44u;
    // NOP
label_1e4e48:
    // 0x1e4e48: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x1e4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1e4e4c:
    // 0x1e4e4c: 0x40f809  jalr        $v0
label_1e4e50:
    if (ctx->pc == 0x1E4E50u) {
        ctx->pc = 0x1E4E50u;
            // 0x1e4e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E54u;
        goto label_1e4e54;
    }
    ctx->pc = 0x1E4E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4E54u);
        ctx->pc = 0x1E4E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E4Cu;
            // 0x1e4e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4270u: goto label_1e4270;
            case 0x1E4274u: goto label_1e4274;
            case 0x1E4278u: goto label_1e4278;
            case 0x1E427Cu: goto label_1e427c;
            case 0x1E4280u: goto label_1e4280;
            case 0x1E4284u: goto label_1e4284;
            case 0x1E4288u: goto label_1e4288;
            case 0x1E428Cu: goto label_1e428c;
            case 0x1E4290u: goto label_1e4290;
            case 0x1E4294u: goto label_1e4294;
            case 0x1E4298u: goto label_1e4298;
            case 0x1E429Cu: goto label_1e429c;
            case 0x1E42A0u: goto label_1e42a0;
            case 0x1E42A4u: goto label_1e42a4;
            case 0x1E42A8u: goto label_1e42a8;
            case 0x1E42ACu: goto label_1e42ac;
            case 0x1E42B0u: goto label_1e42b0;
            case 0x1E42B4u: goto label_1e42b4;
            case 0x1E42B8u: goto label_1e42b8;
            case 0x1E42BCu: goto label_1e42bc;
            case 0x1E42C0u: goto label_1e42c0;
            case 0x1E42C4u: goto label_1e42c4;
            case 0x1E42C8u: goto label_1e42c8;
            case 0x1E42CCu: goto label_1e42cc;
            case 0x1E42D0u: goto label_1e42d0;
            case 0x1E42D4u: goto label_1e42d4;
            case 0x1E42D8u: goto label_1e42d8;
            case 0x1E42DCu: goto label_1e42dc;
            case 0x1E42E0u: goto label_1e42e0;
            case 0x1E42E4u: goto label_1e42e4;
            case 0x1E42E8u: goto label_1e42e8;
            case 0x1E42ECu: goto label_1e42ec;
            case 0x1E42F0u: goto label_1e42f0;
            case 0x1E42F4u: goto label_1e42f4;
            case 0x1E42F8u: goto label_1e42f8;
            case 0x1E42FCu: goto label_1e42fc;
            case 0x1E4300u: goto label_1e4300;
            case 0x1E4304u: goto label_1e4304;
            case 0x1E4308u: goto label_1e4308;
            case 0x1E430Cu: goto label_1e430c;
            case 0x1E4310u: goto label_1e4310;
            case 0x1E4314u: goto label_1e4314;
            case 0x1E4318u: goto label_1e4318;
            case 0x1E431Cu: goto label_1e431c;
            case 0x1E4320u: goto label_1e4320;
            case 0x1E4324u: goto label_1e4324;
            case 0x1E4328u: goto label_1e4328;
            case 0x1E432Cu: goto label_1e432c;
            case 0x1E4330u: goto label_1e4330;
            case 0x1E4334u: goto label_1e4334;
            case 0x1E4338u: goto label_1e4338;
            case 0x1E433Cu: goto label_1e433c;
            case 0x1E4340u: goto label_1e4340;
            case 0x1E4344u: goto label_1e4344;
            case 0x1E4348u: goto label_1e4348;
            case 0x1E434Cu: goto label_1e434c;
            case 0x1E4350u: goto label_1e4350;
            case 0x1E4354u: goto label_1e4354;
            case 0x1E4358u: goto label_1e4358;
            case 0x1E435Cu: goto label_1e435c;
            case 0x1E4360u: goto label_1e4360;
            case 0x1E4364u: goto label_1e4364;
            case 0x1E4368u: goto label_1e4368;
            case 0x1E436Cu: goto label_1e436c;
            case 0x1E4370u: goto label_1e4370;
            case 0x1E4374u: goto label_1e4374;
            case 0x1E4378u: goto label_1e4378;
            case 0x1E437Cu: goto label_1e437c;
            case 0x1E4380u: goto label_1e4380;
            case 0x1E4384u: goto label_1e4384;
            case 0x1E4388u: goto label_1e4388;
            case 0x1E438Cu: goto label_1e438c;
            case 0x1E4390u: goto label_1e4390;
            case 0x1E4394u: goto label_1e4394;
            case 0x1E4398u: goto label_1e4398;
            case 0x1E439Cu: goto label_1e439c;
            case 0x1E43A0u: goto label_1e43a0;
            case 0x1E43A4u: goto label_1e43a4;
            case 0x1E43A8u: goto label_1e43a8;
            case 0x1E43ACu: goto label_1e43ac;
            case 0x1E43B0u: goto label_1e43b0;
            case 0x1E43B4u: goto label_1e43b4;
            case 0x1E43B8u: goto label_1e43b8;
            case 0x1E43BCu: goto label_1e43bc;
            case 0x1E43C0u: goto label_1e43c0;
            case 0x1E43C4u: goto label_1e43c4;
            case 0x1E43C8u: goto label_1e43c8;
            case 0x1E43CCu: goto label_1e43cc;
            case 0x1E43D0u: goto label_1e43d0;
            case 0x1E43D4u: goto label_1e43d4;
            case 0x1E43D8u: goto label_1e43d8;
            case 0x1E43DCu: goto label_1e43dc;
            case 0x1E43E0u: goto label_1e43e0;
            case 0x1E43E4u: goto label_1e43e4;
            case 0x1E43E8u: goto label_1e43e8;
            case 0x1E43ECu: goto label_1e43ec;
            case 0x1E43F0u: goto label_1e43f0;
            case 0x1E43F4u: goto label_1e43f4;
            case 0x1E43F8u: goto label_1e43f8;
            case 0x1E43FCu: goto label_1e43fc;
            case 0x1E4400u: goto label_1e4400;
            case 0x1E4404u: goto label_1e4404;
            case 0x1E4408u: goto label_1e4408;
            case 0x1E440Cu: goto label_1e440c;
            case 0x1E4410u: goto label_1e4410;
            case 0x1E4414u: goto label_1e4414;
            case 0x1E4418u: goto label_1e4418;
            case 0x1E441Cu: goto label_1e441c;
            case 0x1E4420u: goto label_1e4420;
            case 0x1E4424u: goto label_1e4424;
            case 0x1E4428u: goto label_1e4428;
            case 0x1E442Cu: goto label_1e442c;
            case 0x1E4430u: goto label_1e4430;
            case 0x1E4434u: goto label_1e4434;
            case 0x1E4438u: goto label_1e4438;
            case 0x1E443Cu: goto label_1e443c;
            case 0x1E4440u: goto label_1e4440;
            case 0x1E4444u: goto label_1e4444;
            case 0x1E4448u: goto label_1e4448;
            case 0x1E444Cu: goto label_1e444c;
            case 0x1E4450u: goto label_1e4450;
            case 0x1E4454u: goto label_1e4454;
            case 0x1E4458u: goto label_1e4458;
            case 0x1E445Cu: goto label_1e445c;
            case 0x1E4460u: goto label_1e4460;
            case 0x1E4464u: goto label_1e4464;
            case 0x1E4468u: goto label_1e4468;
            case 0x1E446Cu: goto label_1e446c;
            case 0x1E4470u: goto label_1e4470;
            case 0x1E4474u: goto label_1e4474;
            case 0x1E4478u: goto label_1e4478;
            case 0x1E447Cu: goto label_1e447c;
            case 0x1E4480u: goto label_1e4480;
            case 0x1E4484u: goto label_1e4484;
            case 0x1E4488u: goto label_1e4488;
            case 0x1E448Cu: goto label_1e448c;
            case 0x1E4490u: goto label_1e4490;
            case 0x1E4494u: goto label_1e4494;
            case 0x1E4498u: goto label_1e4498;
            case 0x1E449Cu: goto label_1e449c;
            case 0x1E44A0u: goto label_1e44a0;
            case 0x1E44A4u: goto label_1e44a4;
            case 0x1E44A8u: goto label_1e44a8;
            case 0x1E44ACu: goto label_1e44ac;
            case 0x1E44B0u: goto label_1e44b0;
            case 0x1E44B4u: goto label_1e44b4;
            case 0x1E44B8u: goto label_1e44b8;
            case 0x1E44BCu: goto label_1e44bc;
            case 0x1E44C0u: goto label_1e44c0;
            case 0x1E44C4u: goto label_1e44c4;
            case 0x1E44C8u: goto label_1e44c8;
            case 0x1E44CCu: goto label_1e44cc;
            case 0x1E44D0u: goto label_1e44d0;
            case 0x1E44D4u: goto label_1e44d4;
            case 0x1E44D8u: goto label_1e44d8;
            case 0x1E44DCu: goto label_1e44dc;
            case 0x1E44E0u: goto label_1e44e0;
            case 0x1E44E4u: goto label_1e44e4;
            case 0x1E44E8u: goto label_1e44e8;
            case 0x1E44ECu: goto label_1e44ec;
            case 0x1E44F0u: goto label_1e44f0;
            case 0x1E44F4u: goto label_1e44f4;
            case 0x1E44F8u: goto label_1e44f8;
            case 0x1E44FCu: goto label_1e44fc;
            case 0x1E4500u: goto label_1e4500;
            case 0x1E4504u: goto label_1e4504;
            case 0x1E4508u: goto label_1e4508;
            case 0x1E450Cu: goto label_1e450c;
            case 0x1E4510u: goto label_1e4510;
            case 0x1E4514u: goto label_1e4514;
            case 0x1E4518u: goto label_1e4518;
            case 0x1E451Cu: goto label_1e451c;
            case 0x1E4520u: goto label_1e4520;
            case 0x1E4524u: goto label_1e4524;
            case 0x1E4528u: goto label_1e4528;
            case 0x1E452Cu: goto label_1e452c;
            case 0x1E4530u: goto label_1e4530;
            case 0x1E4534u: goto label_1e4534;
            case 0x1E4538u: goto label_1e4538;
            case 0x1E453Cu: goto label_1e453c;
            case 0x1E4540u: goto label_1e4540;
            case 0x1E4544u: goto label_1e4544;
            case 0x1E4548u: goto label_1e4548;
            case 0x1E454Cu: goto label_1e454c;
            case 0x1E4550u: goto label_1e4550;
            case 0x1E4554u: goto label_1e4554;
            case 0x1E4558u: goto label_1e4558;
            case 0x1E455Cu: goto label_1e455c;
            case 0x1E4560u: goto label_1e4560;
            case 0x1E4564u: goto label_1e4564;
            case 0x1E4568u: goto label_1e4568;
            case 0x1E456Cu: goto label_1e456c;
            case 0x1E4570u: goto label_1e4570;
            case 0x1E4574u: goto label_1e4574;
            case 0x1E4578u: goto label_1e4578;
            case 0x1E457Cu: goto label_1e457c;
            case 0x1E4580u: goto label_1e4580;
            case 0x1E4584u: goto label_1e4584;
            case 0x1E4588u: goto label_1e4588;
            case 0x1E458Cu: goto label_1e458c;
            case 0x1E4590u: goto label_1e4590;
            case 0x1E4594u: goto label_1e4594;
            case 0x1E4598u: goto label_1e4598;
            case 0x1E459Cu: goto label_1e459c;
            case 0x1E45A0u: goto label_1e45a0;
            case 0x1E45A4u: goto label_1e45a4;
            case 0x1E45A8u: goto label_1e45a8;
            case 0x1E45ACu: goto label_1e45ac;
            case 0x1E45B0u: goto label_1e45b0;
            case 0x1E45B4u: goto label_1e45b4;
            case 0x1E45B8u: goto label_1e45b8;
            case 0x1E45BCu: goto label_1e45bc;
            case 0x1E45C0u: goto label_1e45c0;
            case 0x1E45C4u: goto label_1e45c4;
            case 0x1E45C8u: goto label_1e45c8;
            case 0x1E45CCu: goto label_1e45cc;
            case 0x1E45D0u: goto label_1e45d0;
            case 0x1E45D4u: goto label_1e45d4;
            case 0x1E45D8u: goto label_1e45d8;
            case 0x1E45DCu: goto label_1e45dc;
            case 0x1E45E0u: goto label_1e45e0;
            case 0x1E45E4u: goto label_1e45e4;
            case 0x1E45E8u: goto label_1e45e8;
            case 0x1E45ECu: goto label_1e45ec;
            case 0x1E45F0u: goto label_1e45f0;
            case 0x1E45F4u: goto label_1e45f4;
            case 0x1E45F8u: goto label_1e45f8;
            case 0x1E45FCu: goto label_1e45fc;
            case 0x1E4600u: goto label_1e4600;
            case 0x1E4604u: goto label_1e4604;
            case 0x1E4608u: goto label_1e4608;
            case 0x1E460Cu: goto label_1e460c;
            case 0x1E4610u: goto label_1e4610;
            case 0x1E4614u: goto label_1e4614;
            case 0x1E4618u: goto label_1e4618;
            case 0x1E461Cu: goto label_1e461c;
            case 0x1E4620u: goto label_1e4620;
            case 0x1E4624u: goto label_1e4624;
            case 0x1E4628u: goto label_1e4628;
            case 0x1E462Cu: goto label_1e462c;
            case 0x1E4630u: goto label_1e4630;
            case 0x1E4634u: goto label_1e4634;
            case 0x1E4638u: goto label_1e4638;
            case 0x1E463Cu: goto label_1e463c;
            case 0x1E4640u: goto label_1e4640;
            case 0x1E4644u: goto label_1e4644;
            case 0x1E4648u: goto label_1e4648;
            case 0x1E464Cu: goto label_1e464c;
            case 0x1E4650u: goto label_1e4650;
            case 0x1E4654u: goto label_1e4654;
            case 0x1E4658u: goto label_1e4658;
            case 0x1E465Cu: goto label_1e465c;
            case 0x1E4660u: goto label_1e4660;
            case 0x1E4664u: goto label_1e4664;
            case 0x1E4668u: goto label_1e4668;
            case 0x1E466Cu: goto label_1e466c;
            case 0x1E4670u: goto label_1e4670;
            case 0x1E4674u: goto label_1e4674;
            case 0x1E4678u: goto label_1e4678;
            case 0x1E467Cu: goto label_1e467c;
            case 0x1E4680u: goto label_1e4680;
            case 0x1E4684u: goto label_1e4684;
            case 0x1E4688u: goto label_1e4688;
            case 0x1E468Cu: goto label_1e468c;
            case 0x1E4690u: goto label_1e4690;
            case 0x1E4694u: goto label_1e4694;
            case 0x1E4698u: goto label_1e4698;
            case 0x1E469Cu: goto label_1e469c;
            case 0x1E46A0u: goto label_1e46a0;
            case 0x1E46A4u: goto label_1e46a4;
            case 0x1E46A8u: goto label_1e46a8;
            case 0x1E46ACu: goto label_1e46ac;
            case 0x1E46B0u: goto label_1e46b0;
            case 0x1E46B4u: goto label_1e46b4;
            case 0x1E46B8u: goto label_1e46b8;
            case 0x1E46BCu: goto label_1e46bc;
            case 0x1E46C0u: goto label_1e46c0;
            case 0x1E46C4u: goto label_1e46c4;
            case 0x1E46C8u: goto label_1e46c8;
            case 0x1E46CCu: goto label_1e46cc;
            case 0x1E46D0u: goto label_1e46d0;
            case 0x1E46D4u: goto label_1e46d4;
            case 0x1E46D8u: goto label_1e46d8;
            case 0x1E46DCu: goto label_1e46dc;
            case 0x1E46E0u: goto label_1e46e0;
            case 0x1E46E4u: goto label_1e46e4;
            case 0x1E46E8u: goto label_1e46e8;
            case 0x1E46ECu: goto label_1e46ec;
            case 0x1E46F0u: goto label_1e46f0;
            case 0x1E46F4u: goto label_1e46f4;
            case 0x1E46F8u: goto label_1e46f8;
            case 0x1E46FCu: goto label_1e46fc;
            case 0x1E4700u: goto label_1e4700;
            case 0x1E4704u: goto label_1e4704;
            case 0x1E4708u: goto label_1e4708;
            case 0x1E470Cu: goto label_1e470c;
            case 0x1E4710u: goto label_1e4710;
            case 0x1E4714u: goto label_1e4714;
            case 0x1E4718u: goto label_1e4718;
            case 0x1E471Cu: goto label_1e471c;
            case 0x1E4720u: goto label_1e4720;
            case 0x1E4724u: goto label_1e4724;
            case 0x1E4728u: goto label_1e4728;
            case 0x1E472Cu: goto label_1e472c;
            case 0x1E4730u: goto label_1e4730;
            case 0x1E4734u: goto label_1e4734;
            case 0x1E4738u: goto label_1e4738;
            case 0x1E473Cu: goto label_1e473c;
            case 0x1E4740u: goto label_1e4740;
            case 0x1E4744u: goto label_1e4744;
            case 0x1E4748u: goto label_1e4748;
            case 0x1E474Cu: goto label_1e474c;
            case 0x1E4750u: goto label_1e4750;
            case 0x1E4754u: goto label_1e4754;
            case 0x1E4758u: goto label_1e4758;
            case 0x1E475Cu: goto label_1e475c;
            case 0x1E4760u: goto label_1e4760;
            case 0x1E4764u: goto label_1e4764;
            case 0x1E4768u: goto label_1e4768;
            case 0x1E476Cu: goto label_1e476c;
            case 0x1E4770u: goto label_1e4770;
            case 0x1E4774u: goto label_1e4774;
            case 0x1E4778u: goto label_1e4778;
            case 0x1E477Cu: goto label_1e477c;
            case 0x1E4780u: goto label_1e4780;
            case 0x1E4784u: goto label_1e4784;
            case 0x1E4788u: goto label_1e4788;
            case 0x1E478Cu: goto label_1e478c;
            case 0x1E4790u: goto label_1e4790;
            case 0x1E4794u: goto label_1e4794;
            case 0x1E4798u: goto label_1e4798;
            case 0x1E479Cu: goto label_1e479c;
            case 0x1E47A0u: goto label_1e47a0;
            case 0x1E47A4u: goto label_1e47a4;
            case 0x1E47A8u: goto label_1e47a8;
            case 0x1E47ACu: goto label_1e47ac;
            case 0x1E47B0u: goto label_1e47b0;
            case 0x1E47B4u: goto label_1e47b4;
            case 0x1E47B8u: goto label_1e47b8;
            case 0x1E47BCu: goto label_1e47bc;
            case 0x1E47C0u: goto label_1e47c0;
            case 0x1E47C4u: goto label_1e47c4;
            case 0x1E47C8u: goto label_1e47c8;
            case 0x1E47CCu: goto label_1e47cc;
            case 0x1E47D0u: goto label_1e47d0;
            case 0x1E47D4u: goto label_1e47d4;
            case 0x1E47D8u: goto label_1e47d8;
            case 0x1E47DCu: goto label_1e47dc;
            case 0x1E47E0u: goto label_1e47e0;
            case 0x1E47E4u: goto label_1e47e4;
            case 0x1E47E8u: goto label_1e47e8;
            case 0x1E47ECu: goto label_1e47ec;
            case 0x1E47F0u: goto label_1e47f0;
            case 0x1E47F4u: goto label_1e47f4;
            case 0x1E47F8u: goto label_1e47f8;
            case 0x1E47FCu: goto label_1e47fc;
            case 0x1E4800u: goto label_1e4800;
            case 0x1E4804u: goto label_1e4804;
            case 0x1E4808u: goto label_1e4808;
            case 0x1E480Cu: goto label_1e480c;
            case 0x1E4810u: goto label_1e4810;
            case 0x1E4814u: goto label_1e4814;
            case 0x1E4818u: goto label_1e4818;
            case 0x1E481Cu: goto label_1e481c;
            case 0x1E4820u: goto label_1e4820;
            case 0x1E4824u: goto label_1e4824;
            case 0x1E4828u: goto label_1e4828;
            case 0x1E482Cu: goto label_1e482c;
            case 0x1E4830u: goto label_1e4830;
            case 0x1E4834u: goto label_1e4834;
            case 0x1E4838u: goto label_1e4838;
            case 0x1E483Cu: goto label_1e483c;
            case 0x1E4840u: goto label_1e4840;
            case 0x1E4844u: goto label_1e4844;
            case 0x1E4848u: goto label_1e4848;
            case 0x1E484Cu: goto label_1e484c;
            case 0x1E4850u: goto label_1e4850;
            case 0x1E4854u: goto label_1e4854;
            case 0x1E4858u: goto label_1e4858;
            case 0x1E485Cu: goto label_1e485c;
            case 0x1E4860u: goto label_1e4860;
            case 0x1E4864u: goto label_1e4864;
            case 0x1E4868u: goto label_1e4868;
            case 0x1E486Cu: goto label_1e486c;
            case 0x1E4870u: goto label_1e4870;
            case 0x1E4874u: goto label_1e4874;
            case 0x1E4878u: goto label_1e4878;
            case 0x1E487Cu: goto label_1e487c;
            case 0x1E4880u: goto label_1e4880;
            case 0x1E4884u: goto label_1e4884;
            case 0x1E4888u: goto label_1e4888;
            case 0x1E488Cu: goto label_1e488c;
            case 0x1E4890u: goto label_1e4890;
            case 0x1E4894u: goto label_1e4894;
            case 0x1E4898u: goto label_1e4898;
            case 0x1E489Cu: goto label_1e489c;
            case 0x1E48A0u: goto label_1e48a0;
            case 0x1E48A4u: goto label_1e48a4;
            case 0x1E48A8u: goto label_1e48a8;
            case 0x1E48ACu: goto label_1e48ac;
            case 0x1E48B0u: goto label_1e48b0;
            case 0x1E48B4u: goto label_1e48b4;
            case 0x1E48B8u: goto label_1e48b8;
            case 0x1E48BCu: goto label_1e48bc;
            case 0x1E48C0u: goto label_1e48c0;
            case 0x1E48C4u: goto label_1e48c4;
            case 0x1E48C8u: goto label_1e48c8;
            case 0x1E48CCu: goto label_1e48cc;
            case 0x1E48D0u: goto label_1e48d0;
            case 0x1E48D4u: goto label_1e48d4;
            case 0x1E48D8u: goto label_1e48d8;
            case 0x1E48DCu: goto label_1e48dc;
            case 0x1E48E0u: goto label_1e48e0;
            case 0x1E48E4u: goto label_1e48e4;
            case 0x1E48E8u: goto label_1e48e8;
            case 0x1E48ECu: goto label_1e48ec;
            case 0x1E48F0u: goto label_1e48f0;
            case 0x1E48F4u: goto label_1e48f4;
            case 0x1E48F8u: goto label_1e48f8;
            case 0x1E48FCu: goto label_1e48fc;
            case 0x1E4900u: goto label_1e4900;
            case 0x1E4904u: goto label_1e4904;
            case 0x1E4908u: goto label_1e4908;
            case 0x1E490Cu: goto label_1e490c;
            case 0x1E4910u: goto label_1e4910;
            case 0x1E4914u: goto label_1e4914;
            case 0x1E4918u: goto label_1e4918;
            case 0x1E491Cu: goto label_1e491c;
            case 0x1E4920u: goto label_1e4920;
            case 0x1E4924u: goto label_1e4924;
            case 0x1E4928u: goto label_1e4928;
            case 0x1E492Cu: goto label_1e492c;
            case 0x1E4930u: goto label_1e4930;
            case 0x1E4934u: goto label_1e4934;
            case 0x1E4938u: goto label_1e4938;
            case 0x1E493Cu: goto label_1e493c;
            case 0x1E4940u: goto label_1e4940;
            case 0x1E4944u: goto label_1e4944;
            case 0x1E4948u: goto label_1e4948;
            case 0x1E494Cu: goto label_1e494c;
            case 0x1E4950u: goto label_1e4950;
            case 0x1E4954u: goto label_1e4954;
            case 0x1E4958u: goto label_1e4958;
            case 0x1E495Cu: goto label_1e495c;
            case 0x1E4960u: goto label_1e4960;
            case 0x1E4964u: goto label_1e4964;
            case 0x1E4968u: goto label_1e4968;
            case 0x1E496Cu: goto label_1e496c;
            case 0x1E4970u: goto label_1e4970;
            case 0x1E4974u: goto label_1e4974;
            case 0x1E4978u: goto label_1e4978;
            case 0x1E497Cu: goto label_1e497c;
            case 0x1E4980u: goto label_1e4980;
            case 0x1E4984u: goto label_1e4984;
            case 0x1E4988u: goto label_1e4988;
            case 0x1E498Cu: goto label_1e498c;
            case 0x1E4990u: goto label_1e4990;
            case 0x1E4994u: goto label_1e4994;
            case 0x1E4998u: goto label_1e4998;
            case 0x1E499Cu: goto label_1e499c;
            case 0x1E49A0u: goto label_1e49a0;
            case 0x1E49A4u: goto label_1e49a4;
            case 0x1E49A8u: goto label_1e49a8;
            case 0x1E49ACu: goto label_1e49ac;
            case 0x1E49B0u: goto label_1e49b0;
            case 0x1E49B4u: goto label_1e49b4;
            case 0x1E49B8u: goto label_1e49b8;
            case 0x1E49BCu: goto label_1e49bc;
            case 0x1E49C0u: goto label_1e49c0;
            case 0x1E49C4u: goto label_1e49c4;
            case 0x1E49C8u: goto label_1e49c8;
            case 0x1E49CCu: goto label_1e49cc;
            case 0x1E49D0u: goto label_1e49d0;
            case 0x1E49D4u: goto label_1e49d4;
            case 0x1E49D8u: goto label_1e49d8;
            case 0x1E49DCu: goto label_1e49dc;
            case 0x1E49E0u: goto label_1e49e0;
            case 0x1E49E4u: goto label_1e49e4;
            case 0x1E49E8u: goto label_1e49e8;
            case 0x1E49ECu: goto label_1e49ec;
            case 0x1E49F0u: goto label_1e49f0;
            case 0x1E49F4u: goto label_1e49f4;
            case 0x1E49F8u: goto label_1e49f8;
            case 0x1E49FCu: goto label_1e49fc;
            case 0x1E4A00u: goto label_1e4a00;
            case 0x1E4A04u: goto label_1e4a04;
            case 0x1E4A08u: goto label_1e4a08;
            case 0x1E4A0Cu: goto label_1e4a0c;
            case 0x1E4A10u: goto label_1e4a10;
            case 0x1E4A14u: goto label_1e4a14;
            case 0x1E4A18u: goto label_1e4a18;
            case 0x1E4A1Cu: goto label_1e4a1c;
            case 0x1E4A20u: goto label_1e4a20;
            case 0x1E4A24u: goto label_1e4a24;
            case 0x1E4A28u: goto label_1e4a28;
            case 0x1E4A2Cu: goto label_1e4a2c;
            case 0x1E4A30u: goto label_1e4a30;
            case 0x1E4A34u: goto label_1e4a34;
            case 0x1E4A38u: goto label_1e4a38;
            case 0x1E4A3Cu: goto label_1e4a3c;
            case 0x1E4A40u: goto label_1e4a40;
            case 0x1E4A44u: goto label_1e4a44;
            case 0x1E4A48u: goto label_1e4a48;
            case 0x1E4A4Cu: goto label_1e4a4c;
            case 0x1E4A50u: goto label_1e4a50;
            case 0x1E4A54u: goto label_1e4a54;
            case 0x1E4A58u: goto label_1e4a58;
            case 0x1E4A5Cu: goto label_1e4a5c;
            case 0x1E4A60u: goto label_1e4a60;
            case 0x1E4A64u: goto label_1e4a64;
            case 0x1E4A68u: goto label_1e4a68;
            case 0x1E4A6Cu: goto label_1e4a6c;
            case 0x1E4A70u: goto label_1e4a70;
            case 0x1E4A74u: goto label_1e4a74;
            case 0x1E4A78u: goto label_1e4a78;
            case 0x1E4A7Cu: goto label_1e4a7c;
            case 0x1E4A80u: goto label_1e4a80;
            case 0x1E4A84u: goto label_1e4a84;
            case 0x1E4A88u: goto label_1e4a88;
            case 0x1E4A8Cu: goto label_1e4a8c;
            case 0x1E4A90u: goto label_1e4a90;
            case 0x1E4A94u: goto label_1e4a94;
            case 0x1E4A98u: goto label_1e4a98;
            case 0x1E4A9Cu: goto label_1e4a9c;
            case 0x1E4AA0u: goto label_1e4aa0;
            case 0x1E4AA4u: goto label_1e4aa4;
            case 0x1E4AA8u: goto label_1e4aa8;
            case 0x1E4AACu: goto label_1e4aac;
            case 0x1E4AB0u: goto label_1e4ab0;
            case 0x1E4AB4u: goto label_1e4ab4;
            case 0x1E4AB8u: goto label_1e4ab8;
            case 0x1E4ABCu: goto label_1e4abc;
            case 0x1E4AC0u: goto label_1e4ac0;
            case 0x1E4AC4u: goto label_1e4ac4;
            case 0x1E4AC8u: goto label_1e4ac8;
            case 0x1E4ACCu: goto label_1e4acc;
            case 0x1E4AD0u: goto label_1e4ad0;
            case 0x1E4AD4u: goto label_1e4ad4;
            case 0x1E4AD8u: goto label_1e4ad8;
            case 0x1E4ADCu: goto label_1e4adc;
            case 0x1E4AE0u: goto label_1e4ae0;
            case 0x1E4AE4u: goto label_1e4ae4;
            case 0x1E4AE8u: goto label_1e4ae8;
            case 0x1E4AECu: goto label_1e4aec;
            case 0x1E4AF0u: goto label_1e4af0;
            case 0x1E4AF4u: goto label_1e4af4;
            case 0x1E4AF8u: goto label_1e4af8;
            case 0x1E4AFCu: goto label_1e4afc;
            case 0x1E4B00u: goto label_1e4b00;
            case 0x1E4B04u: goto label_1e4b04;
            case 0x1E4B08u: goto label_1e4b08;
            case 0x1E4B0Cu: goto label_1e4b0c;
            case 0x1E4B10u: goto label_1e4b10;
            case 0x1E4B14u: goto label_1e4b14;
            case 0x1E4B18u: goto label_1e4b18;
            case 0x1E4B1Cu: goto label_1e4b1c;
            case 0x1E4B20u: goto label_1e4b20;
            case 0x1E4B24u: goto label_1e4b24;
            case 0x1E4B28u: goto label_1e4b28;
            case 0x1E4B2Cu: goto label_1e4b2c;
            case 0x1E4B30u: goto label_1e4b30;
            case 0x1E4B34u: goto label_1e4b34;
            case 0x1E4B38u: goto label_1e4b38;
            case 0x1E4B3Cu: goto label_1e4b3c;
            case 0x1E4B40u: goto label_1e4b40;
            case 0x1E4B44u: goto label_1e4b44;
            case 0x1E4B48u: goto label_1e4b48;
            case 0x1E4B4Cu: goto label_1e4b4c;
            case 0x1E4B50u: goto label_1e4b50;
            case 0x1E4B54u: goto label_1e4b54;
            case 0x1E4B58u: goto label_1e4b58;
            case 0x1E4B5Cu: goto label_1e4b5c;
            case 0x1E4B60u: goto label_1e4b60;
            case 0x1E4B64u: goto label_1e4b64;
            case 0x1E4B68u: goto label_1e4b68;
            case 0x1E4B6Cu: goto label_1e4b6c;
            case 0x1E4B70u: goto label_1e4b70;
            case 0x1E4B74u: goto label_1e4b74;
            case 0x1E4B78u: goto label_1e4b78;
            case 0x1E4B7Cu: goto label_1e4b7c;
            case 0x1E4B80u: goto label_1e4b80;
            case 0x1E4B84u: goto label_1e4b84;
            case 0x1E4B88u: goto label_1e4b88;
            case 0x1E4B8Cu: goto label_1e4b8c;
            case 0x1E4B90u: goto label_1e4b90;
            case 0x1E4B94u: goto label_1e4b94;
            case 0x1E4B98u: goto label_1e4b98;
            case 0x1E4B9Cu: goto label_1e4b9c;
            case 0x1E4BA0u: goto label_1e4ba0;
            case 0x1E4BA4u: goto label_1e4ba4;
            case 0x1E4BA8u: goto label_1e4ba8;
            case 0x1E4BACu: goto label_1e4bac;
            case 0x1E4BB0u: goto label_1e4bb0;
            case 0x1E4BB4u: goto label_1e4bb4;
            case 0x1E4BB8u: goto label_1e4bb8;
            case 0x1E4BBCu: goto label_1e4bbc;
            case 0x1E4BC0u: goto label_1e4bc0;
            case 0x1E4BC4u: goto label_1e4bc4;
            case 0x1E4BC8u: goto label_1e4bc8;
            case 0x1E4BCCu: goto label_1e4bcc;
            case 0x1E4BD0u: goto label_1e4bd0;
            case 0x1E4BD4u: goto label_1e4bd4;
            case 0x1E4BD8u: goto label_1e4bd8;
            case 0x1E4BDCu: goto label_1e4bdc;
            case 0x1E4BE0u: goto label_1e4be0;
            case 0x1E4BE4u: goto label_1e4be4;
            case 0x1E4BE8u: goto label_1e4be8;
            case 0x1E4BECu: goto label_1e4bec;
            case 0x1E4BF0u: goto label_1e4bf0;
            case 0x1E4BF4u: goto label_1e4bf4;
            case 0x1E4BF8u: goto label_1e4bf8;
            case 0x1E4BFCu: goto label_1e4bfc;
            case 0x1E4C00u: goto label_1e4c00;
            case 0x1E4C04u: goto label_1e4c04;
            case 0x1E4C08u: goto label_1e4c08;
            case 0x1E4C0Cu: goto label_1e4c0c;
            case 0x1E4C10u: goto label_1e4c10;
            case 0x1E4C14u: goto label_1e4c14;
            case 0x1E4C18u: goto label_1e4c18;
            case 0x1E4C1Cu: goto label_1e4c1c;
            case 0x1E4C20u: goto label_1e4c20;
            case 0x1E4C24u: goto label_1e4c24;
            case 0x1E4C28u: goto label_1e4c28;
            case 0x1E4C2Cu: goto label_1e4c2c;
            case 0x1E4C30u: goto label_1e4c30;
            case 0x1E4C34u: goto label_1e4c34;
            case 0x1E4C38u: goto label_1e4c38;
            case 0x1E4C3Cu: goto label_1e4c3c;
            case 0x1E4C40u: goto label_1e4c40;
            case 0x1E4C44u: goto label_1e4c44;
            case 0x1E4C48u: goto label_1e4c48;
            case 0x1E4C4Cu: goto label_1e4c4c;
            case 0x1E4C50u: goto label_1e4c50;
            case 0x1E4C54u: goto label_1e4c54;
            case 0x1E4C58u: goto label_1e4c58;
            case 0x1E4C5Cu: goto label_1e4c5c;
            case 0x1E4C60u: goto label_1e4c60;
            case 0x1E4C64u: goto label_1e4c64;
            case 0x1E4C68u: goto label_1e4c68;
            case 0x1E4C6Cu: goto label_1e4c6c;
            case 0x1E4C70u: goto label_1e4c70;
            case 0x1E4C74u: goto label_1e4c74;
            case 0x1E4C78u: goto label_1e4c78;
            case 0x1E4C7Cu: goto label_1e4c7c;
            case 0x1E4C80u: goto label_1e4c80;
            case 0x1E4C84u: goto label_1e4c84;
            case 0x1E4C88u: goto label_1e4c88;
            case 0x1E4C8Cu: goto label_1e4c8c;
            case 0x1E4C90u: goto label_1e4c90;
            case 0x1E4C94u: goto label_1e4c94;
            case 0x1E4C98u: goto label_1e4c98;
            case 0x1E4C9Cu: goto label_1e4c9c;
            case 0x1E4CA0u: goto label_1e4ca0;
            case 0x1E4CA4u: goto label_1e4ca4;
            case 0x1E4CA8u: goto label_1e4ca8;
            case 0x1E4CACu: goto label_1e4cac;
            case 0x1E4CB0u: goto label_1e4cb0;
            case 0x1E4CB4u: goto label_1e4cb4;
            case 0x1E4CB8u: goto label_1e4cb8;
            case 0x1E4CBCu: goto label_1e4cbc;
            case 0x1E4CC0u: goto label_1e4cc0;
            case 0x1E4CC4u: goto label_1e4cc4;
            case 0x1E4CC8u: goto label_1e4cc8;
            case 0x1E4CCCu: goto label_1e4ccc;
            case 0x1E4CD0u: goto label_1e4cd0;
            case 0x1E4CD4u: goto label_1e4cd4;
            case 0x1E4CD8u: goto label_1e4cd8;
            case 0x1E4CDCu: goto label_1e4cdc;
            case 0x1E4CE0u: goto label_1e4ce0;
            case 0x1E4CE4u: goto label_1e4ce4;
            case 0x1E4CE8u: goto label_1e4ce8;
            case 0x1E4CECu: goto label_1e4cec;
            case 0x1E4CF0u: goto label_1e4cf0;
            case 0x1E4CF4u: goto label_1e4cf4;
            case 0x1E4CF8u: goto label_1e4cf8;
            case 0x1E4CFCu: goto label_1e4cfc;
            case 0x1E4D00u: goto label_1e4d00;
            case 0x1E4D04u: goto label_1e4d04;
            case 0x1E4D08u: goto label_1e4d08;
            case 0x1E4D0Cu: goto label_1e4d0c;
            case 0x1E4D10u: goto label_1e4d10;
            case 0x1E4D14u: goto label_1e4d14;
            case 0x1E4D18u: goto label_1e4d18;
            case 0x1E4D1Cu: goto label_1e4d1c;
            case 0x1E4D20u: goto label_1e4d20;
            case 0x1E4D24u: goto label_1e4d24;
            case 0x1E4D28u: goto label_1e4d28;
            case 0x1E4D2Cu: goto label_1e4d2c;
            case 0x1E4D30u: goto label_1e4d30;
            case 0x1E4D34u: goto label_1e4d34;
            case 0x1E4D38u: goto label_1e4d38;
            case 0x1E4D3Cu: goto label_1e4d3c;
            case 0x1E4D40u: goto label_1e4d40;
            case 0x1E4D44u: goto label_1e4d44;
            case 0x1E4D48u: goto label_1e4d48;
            case 0x1E4D4Cu: goto label_1e4d4c;
            case 0x1E4D50u: goto label_1e4d50;
            case 0x1E4D54u: goto label_1e4d54;
            case 0x1E4D58u: goto label_1e4d58;
            case 0x1E4D5Cu: goto label_1e4d5c;
            case 0x1E4D60u: goto label_1e4d60;
            case 0x1E4D64u: goto label_1e4d64;
            case 0x1E4D68u: goto label_1e4d68;
            case 0x1E4D6Cu: goto label_1e4d6c;
            case 0x1E4D70u: goto label_1e4d70;
            case 0x1E4D74u: goto label_1e4d74;
            case 0x1E4D78u: goto label_1e4d78;
            case 0x1E4D7Cu: goto label_1e4d7c;
            case 0x1E4D80u: goto label_1e4d80;
            case 0x1E4D84u: goto label_1e4d84;
            case 0x1E4D88u: goto label_1e4d88;
            case 0x1E4D8Cu: goto label_1e4d8c;
            case 0x1E4D90u: goto label_1e4d90;
            case 0x1E4D94u: goto label_1e4d94;
            case 0x1E4D98u: goto label_1e4d98;
            case 0x1E4D9Cu: goto label_1e4d9c;
            case 0x1E4DA0u: goto label_1e4da0;
            case 0x1E4DA4u: goto label_1e4da4;
            case 0x1E4DA8u: goto label_1e4da8;
            case 0x1E4DACu: goto label_1e4dac;
            case 0x1E4DB0u: goto label_1e4db0;
            case 0x1E4DB4u: goto label_1e4db4;
            case 0x1E4DB8u: goto label_1e4db8;
            case 0x1E4DBCu: goto label_1e4dbc;
            case 0x1E4DC0u: goto label_1e4dc0;
            case 0x1E4DC4u: goto label_1e4dc4;
            case 0x1E4DC8u: goto label_1e4dc8;
            case 0x1E4DCCu: goto label_1e4dcc;
            case 0x1E4DD0u: goto label_1e4dd0;
            case 0x1E4DD4u: goto label_1e4dd4;
            case 0x1E4DD8u: goto label_1e4dd8;
            case 0x1E4DDCu: goto label_1e4ddc;
            case 0x1E4DE0u: goto label_1e4de0;
            case 0x1E4DE4u: goto label_1e4de4;
            case 0x1E4DE8u: goto label_1e4de8;
            case 0x1E4DECu: goto label_1e4dec;
            case 0x1E4DF0u: goto label_1e4df0;
            case 0x1E4DF4u: goto label_1e4df4;
            case 0x1E4DF8u: goto label_1e4df8;
            case 0x1E4DFCu: goto label_1e4dfc;
            case 0x1E4E00u: goto label_1e4e00;
            case 0x1E4E04u: goto label_1e4e04;
            case 0x1E4E08u: goto label_1e4e08;
            case 0x1E4E0Cu: goto label_1e4e0c;
            case 0x1E4E10u: goto label_1e4e10;
            case 0x1E4E14u: goto label_1e4e14;
            case 0x1E4E18u: goto label_1e4e18;
            case 0x1E4E1Cu: goto label_1e4e1c;
            case 0x1E4E20u: goto label_1e4e20;
            case 0x1E4E24u: goto label_1e4e24;
            case 0x1E4E28u: goto label_1e4e28;
            case 0x1E4E2Cu: goto label_1e4e2c;
            case 0x1E4E30u: goto label_1e4e30;
            case 0x1E4E34u: goto label_1e4e34;
            case 0x1E4E38u: goto label_1e4e38;
            case 0x1E4E3Cu: goto label_1e4e3c;
            case 0x1E4E40u: goto label_1e4e40;
            case 0x1E4E44u: goto label_1e4e44;
            case 0x1E4E48u: goto label_1e4e48;
            case 0x1E4E4Cu: goto label_1e4e4c;
            case 0x1E4E50u: goto label_1e4e50;
            case 0x1E4E54u: goto label_1e4e54;
            case 0x1E4E58u: goto label_1e4e58;
            case 0x1E4E5Cu: goto label_1e4e5c;
            case 0x1E4E60u: goto label_1e4e60;
            case 0x1E4E64u: goto label_1e4e64;
            case 0x1E4E68u: goto label_1e4e68;
            case 0x1E4E6Cu: goto label_1e4e6c;
            case 0x1E4E70u: goto label_1e4e70;
            case 0x1E4E74u: goto label_1e4e74;
            case 0x1E4E78u: goto label_1e4e78;
            case 0x1E4E7Cu: goto label_1e4e7c;
            case 0x1E4E80u: goto label_1e4e80;
            case 0x1E4E84u: goto label_1e4e84;
            case 0x1E4E88u: goto label_1e4e88;
            case 0x1E4E8Cu: goto label_1e4e8c;
            case 0x1E4E90u: goto label_1e4e90;
            case 0x1E4E94u: goto label_1e4e94;
            case 0x1E4E98u: goto label_1e4e98;
            case 0x1E4E9Cu: goto label_1e4e9c;
            case 0x1E4EA0u: goto label_1e4ea0;
            case 0x1E4EA4u: goto label_1e4ea4;
            case 0x1E4EA8u: goto label_1e4ea8;
            case 0x1E4EACu: goto label_1e4eac;
            case 0x1E4EB0u: goto label_1e4eb0;
            case 0x1E4EB4u: goto label_1e4eb4;
            case 0x1E4EB8u: goto label_1e4eb8;
            case 0x1E4EBCu: goto label_1e4ebc;
            case 0x1E4EC0u: goto label_1e4ec0;
            case 0x1E4EC4u: goto label_1e4ec4;
            case 0x1E4EC8u: goto label_1e4ec8;
            case 0x1E4ECCu: goto label_1e4ecc;
            case 0x1E4ED0u: goto label_1e4ed0;
            case 0x1E4ED4u: goto label_1e4ed4;
            case 0x1E4ED8u: goto label_1e4ed8;
            case 0x1E4EDCu: goto label_1e4edc;
            case 0x1E4EE0u: goto label_1e4ee0;
            case 0x1E4EE4u: goto label_1e4ee4;
            case 0x1E4EE8u: goto label_1e4ee8;
            case 0x1E4EECu: goto label_1e4eec;
            case 0x1E4EF0u: goto label_1e4ef0;
            case 0x1E4EF4u: goto label_1e4ef4;
            case 0x1E4EF8u: goto label_1e4ef8;
            case 0x1E4EFCu: goto label_1e4efc;
            case 0x1E4F00u: goto label_1e4f00;
            case 0x1E4F04u: goto label_1e4f04;
            case 0x1E4F08u: goto label_1e4f08;
            case 0x1E4F0Cu: goto label_1e4f0c;
            case 0x1E4F10u: goto label_1e4f10;
            case 0x1E4F14u: goto label_1e4f14;
            case 0x1E4F18u: goto label_1e4f18;
            case 0x1E4F1Cu: goto label_1e4f1c;
            case 0x1E4F20u: goto label_1e4f20;
            case 0x1E4F24u: goto label_1e4f24;
            case 0x1E4F28u: goto label_1e4f28;
            case 0x1E4F2Cu: goto label_1e4f2c;
            case 0x1E4F30u: goto label_1e4f30;
            case 0x1E4F34u: goto label_1e4f34;
            case 0x1E4F38u: goto label_1e4f38;
            case 0x1E4F3Cu: goto label_1e4f3c;
            case 0x1E4F40u: goto label_1e4f40;
            case 0x1E4F44u: goto label_1e4f44;
            case 0x1E4F48u: goto label_1e4f48;
            case 0x1E4F4Cu: goto label_1e4f4c;
            case 0x1E4F50u: goto label_1e4f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E54u; }
            if (ctx->pc != 0x1E4E54u) { return; }
        }
    }
    ctx->pc = 0x1E4E54u;
label_1e4e54:
    // 0x1e4e54: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1e4e58:
    if (ctx->pc == 0x1E4E58u) {
        ctx->pc = 0x1E4E5Cu;
        goto label_1e4e5c;
    }
    ctx->pc = 0x1E4E54u;
    {
        const bool branch_taken_0x1e4e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e54) {
            ctx->pc = 0x1E4F40u;
            goto label_1e4f40;
        }
    }
    ctx->pc = 0x1E4E5Cu;
label_1e4e5c:
    // 0x1e4e5c: 0x0  nop
    ctx->pc = 0x1e4e5cu;
    // NOP
label_1e4e60:
    // 0x1e4e60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e4e64:
    // 0x1e4e64: 0x1c40002e  bgtz        $v0, . + 4 + (0x2E << 2)
label_1e4e68:
    if (ctx->pc == 0x1E4E68u) {
        ctx->pc = 0x1E4E6Cu;
        goto label_1e4e6c;
    }
    ctx->pc = 0x1E4E64u;
    {
        const bool branch_taken_0x1e4e64 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e4e64) {
            ctx->pc = 0x1E4F20u;
            goto label_1e4f20;
        }
    }
    ctx->pc = 0x1E4E6Cu;
label_1e4e6c:
    // 0x1e4e6c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1e4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e70:
    // 0x1e4e70: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1e4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1e4e74:
    // 0x1e4e74: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4e78:
    // 0x1e4e78: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e4e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e4e7c:
    // 0x1e4e7c: 0xc05d080  jal         func_174200
label_1e4e80:
    if (ctx->pc == 0x1E4E80u) {
        ctx->pc = 0x1E4E80u;
            // 0x1e4e80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E4E84u;
        goto label_1e4e84;
    }
    ctx->pc = 0x1E4E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E84u);
    ctx->pc = 0x1E4E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4E7Cu;
            // 0x1e4e80: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E84u; }
        if (ctx->pc != 0x1E4E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E84u; }
        if (ctx->pc != 0x1E4E84u) { return; }
    }
    ctx->pc = 0x1E4E84u;
label_1e4e84:
    // 0x1e4e84: 0xc050bb4  jal         func_142ED0
label_1e4e88:
    if (ctx->pc == 0x1E4E88u) {
        ctx->pc = 0x1E4E8Cu;
        goto label_1e4e8c;
    }
    ctx->pc = 0x1E4E84u;
    SET_GPR_U32(ctx, 31, 0x1E4E8Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E8Cu; }
        if (ctx->pc != 0x1E4E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E8Cu; }
        if (ctx->pc != 0x1E4E8Cu) { return; }
    }
    ctx->pc = 0x1E4E8Cu;
label_1e4e8c:
    // 0x1e4e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4e8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e4e90:
    // 0x1e4e90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e4e94:
    if (ctx->pc == 0x1E4E94u) {
        ctx->pc = 0x1E4E98u;
        goto label_1e4e98;
    }
    ctx->pc = 0x1E4E90u;
    {
        const bool branch_taken_0x1e4e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e90) {
            ctx->pc = 0x1E4EB0u;
            goto label_1e4eb0;
        }
    }
    ctx->pc = 0x1E4E98u;
label_1e4e98:
    // 0x1e4e98: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1e4e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4e9c:
    // 0x1e4e9c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1e4e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e4ea0:
    // 0x1e4ea0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e4ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4ea4:
    // 0x1e4ea4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e4ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e4ea8:
    // 0x1e4ea8: 0xc05d080  jal         func_174200
label_1e4eac:
    if (ctx->pc == 0x1E4EACu) {
        ctx->pc = 0x1E4EACu;
            // 0x1e4eac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E4EB0u;
        goto label_1e4eb0;
    }
    ctx->pc = 0x1E4EA8u;
    SET_GPR_U32(ctx, 31, 0x1E4EB0u);
    ctx->pc = 0x1E4EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4EA8u;
            // 0x1e4eac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EB0u; }
        if (ctx->pc != 0x1E4EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EB0u; }
        if (ctx->pc != 0x1E4EB0u) { return; }
    }
    ctx->pc = 0x1E4EB0u;
label_1e4eb0:
    // 0x1e4eb0: 0xc050bb4  jal         func_142ED0
label_1e4eb4:
    if (ctx->pc == 0x1E4EB4u) {
        ctx->pc = 0x1E4EB8u;
        goto label_1e4eb8;
    }
    ctx->pc = 0x1E4EB0u;
    SET_GPR_U32(ctx, 31, 0x1E4EB8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EB8u; }
        if (ctx->pc != 0x1E4EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EB8u; }
        if (ctx->pc != 0x1E4EB8u) { return; }
    }
    ctx->pc = 0x1E4EB8u;
label_1e4eb8:
    // 0x1e4eb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4eb8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e4ebc:
    // 0x1e4ebc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e4ec0:
    if (ctx->pc == 0x1E4EC0u) {
        ctx->pc = 0x1E4EC4u;
        goto label_1e4ec4;
    }
    ctx->pc = 0x1E4EBCu;
    {
        const bool branch_taken_0x1e4ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ebc) {
            ctx->pc = 0x1E4EE0u;
            goto label_1e4ee0;
        }
    }
    ctx->pc = 0x1E4EC4u;
label_1e4ec4:
    // 0x1e4ec4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1e4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4ec8:
    // 0x1e4ec8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1e4ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1e4ecc:
    // 0x1e4ecc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1e4eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4ed0:
    // 0x1e4ed0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e4ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e4ed4:
    // 0x1e4ed4: 0xc05d080  jal         func_174200
label_1e4ed8:
    if (ctx->pc == 0x1E4ED8u) {
        ctx->pc = 0x1E4ED8u;
            // 0x1e4ed8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E4EDCu;
        goto label_1e4edc;
    }
    ctx->pc = 0x1E4ED4u;
    SET_GPR_U32(ctx, 31, 0x1E4EDCu);
    ctx->pc = 0x1E4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4ED4u;
            // 0x1e4ed8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EDCu; }
        if (ctx->pc != 0x1E4EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4EDCu; }
        if (ctx->pc != 0x1E4EDCu) { return; }
    }
    ctx->pc = 0x1E4EDCu;
label_1e4edc:
    // 0x1e4edc: 0x0  nop
    ctx->pc = 0x1e4edcu;
    // NOP
label_1e4ee0:
    // 0x1e4ee0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e4ee4:
    // 0x1e4ee4: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1e4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4ee8:
    // 0x1e4ee8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1e4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1e4eec:
    // 0x1e4eec: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1e4eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4ef0:
    // 0x1e4ef0: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1e4ef4:
    // 0x1e4ef4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e4ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e4ef8:
    // 0x1e4ef8: 0x0  nop
    ctx->pc = 0x1e4ef8u;
    // NOP
label_1e4efc:
    // 0x1e4efc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e4efcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e4f00:
    // 0x1e4f00: 0xc053740  jal         func_14DD00
label_1e4f04:
    if (ctx->pc == 0x1E4F04u) {
        ctx->pc = 0x1E4F04u;
            // 0x1e4f04: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E4F08u;
        goto label_1e4f08;
    }
    ctx->pc = 0x1E4F00u;
    SET_GPR_U32(ctx, 31, 0x1E4F08u);
    ctx->pc = 0x1E4F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F00u;
            // 0x1e4f04: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F08u; }
        if (ctx->pc != 0x1E4F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F08u; }
        if (ctx->pc != 0x1E4F08u) { return; }
    }
    ctx->pc = 0x1E4F08u;
label_1e4f08:
    // 0x1e4f08: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x1e4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_1e4f0c:
    // 0x1e4f0c: 0x40f809  jalr        $v0
label_1e4f10:
    if (ctx->pc == 0x1E4F10u) {
        ctx->pc = 0x1E4F10u;
            // 0x1e4f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F14u;
        goto label_1e4f14;
    }
    ctx->pc = 0x1E4F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4F14u);
        ctx->pc = 0x1E4F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F0Cu;
            // 0x1e4f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4270u: goto label_1e4270;
            case 0x1E4274u: goto label_1e4274;
            case 0x1E4278u: goto label_1e4278;
            case 0x1E427Cu: goto label_1e427c;
            case 0x1E4280u: goto label_1e4280;
            case 0x1E4284u: goto label_1e4284;
            case 0x1E4288u: goto label_1e4288;
            case 0x1E428Cu: goto label_1e428c;
            case 0x1E4290u: goto label_1e4290;
            case 0x1E4294u: goto label_1e4294;
            case 0x1E4298u: goto label_1e4298;
            case 0x1E429Cu: goto label_1e429c;
            case 0x1E42A0u: goto label_1e42a0;
            case 0x1E42A4u: goto label_1e42a4;
            case 0x1E42A8u: goto label_1e42a8;
            case 0x1E42ACu: goto label_1e42ac;
            case 0x1E42B0u: goto label_1e42b0;
            case 0x1E42B4u: goto label_1e42b4;
            case 0x1E42B8u: goto label_1e42b8;
            case 0x1E42BCu: goto label_1e42bc;
            case 0x1E42C0u: goto label_1e42c0;
            case 0x1E42C4u: goto label_1e42c4;
            case 0x1E42C8u: goto label_1e42c8;
            case 0x1E42CCu: goto label_1e42cc;
            case 0x1E42D0u: goto label_1e42d0;
            case 0x1E42D4u: goto label_1e42d4;
            case 0x1E42D8u: goto label_1e42d8;
            case 0x1E42DCu: goto label_1e42dc;
            case 0x1E42E0u: goto label_1e42e0;
            case 0x1E42E4u: goto label_1e42e4;
            case 0x1E42E8u: goto label_1e42e8;
            case 0x1E42ECu: goto label_1e42ec;
            case 0x1E42F0u: goto label_1e42f0;
            case 0x1E42F4u: goto label_1e42f4;
            case 0x1E42F8u: goto label_1e42f8;
            case 0x1E42FCu: goto label_1e42fc;
            case 0x1E4300u: goto label_1e4300;
            case 0x1E4304u: goto label_1e4304;
            case 0x1E4308u: goto label_1e4308;
            case 0x1E430Cu: goto label_1e430c;
            case 0x1E4310u: goto label_1e4310;
            case 0x1E4314u: goto label_1e4314;
            case 0x1E4318u: goto label_1e4318;
            case 0x1E431Cu: goto label_1e431c;
            case 0x1E4320u: goto label_1e4320;
            case 0x1E4324u: goto label_1e4324;
            case 0x1E4328u: goto label_1e4328;
            case 0x1E432Cu: goto label_1e432c;
            case 0x1E4330u: goto label_1e4330;
            case 0x1E4334u: goto label_1e4334;
            case 0x1E4338u: goto label_1e4338;
            case 0x1E433Cu: goto label_1e433c;
            case 0x1E4340u: goto label_1e4340;
            case 0x1E4344u: goto label_1e4344;
            case 0x1E4348u: goto label_1e4348;
            case 0x1E434Cu: goto label_1e434c;
            case 0x1E4350u: goto label_1e4350;
            case 0x1E4354u: goto label_1e4354;
            case 0x1E4358u: goto label_1e4358;
            case 0x1E435Cu: goto label_1e435c;
            case 0x1E4360u: goto label_1e4360;
            case 0x1E4364u: goto label_1e4364;
            case 0x1E4368u: goto label_1e4368;
            case 0x1E436Cu: goto label_1e436c;
            case 0x1E4370u: goto label_1e4370;
            case 0x1E4374u: goto label_1e4374;
            case 0x1E4378u: goto label_1e4378;
            case 0x1E437Cu: goto label_1e437c;
            case 0x1E4380u: goto label_1e4380;
            case 0x1E4384u: goto label_1e4384;
            case 0x1E4388u: goto label_1e4388;
            case 0x1E438Cu: goto label_1e438c;
            case 0x1E4390u: goto label_1e4390;
            case 0x1E4394u: goto label_1e4394;
            case 0x1E4398u: goto label_1e4398;
            case 0x1E439Cu: goto label_1e439c;
            case 0x1E43A0u: goto label_1e43a0;
            case 0x1E43A4u: goto label_1e43a4;
            case 0x1E43A8u: goto label_1e43a8;
            case 0x1E43ACu: goto label_1e43ac;
            case 0x1E43B0u: goto label_1e43b0;
            case 0x1E43B4u: goto label_1e43b4;
            case 0x1E43B8u: goto label_1e43b8;
            case 0x1E43BCu: goto label_1e43bc;
            case 0x1E43C0u: goto label_1e43c0;
            case 0x1E43C4u: goto label_1e43c4;
            case 0x1E43C8u: goto label_1e43c8;
            case 0x1E43CCu: goto label_1e43cc;
            case 0x1E43D0u: goto label_1e43d0;
            case 0x1E43D4u: goto label_1e43d4;
            case 0x1E43D8u: goto label_1e43d8;
            case 0x1E43DCu: goto label_1e43dc;
            case 0x1E43E0u: goto label_1e43e0;
            case 0x1E43E4u: goto label_1e43e4;
            case 0x1E43E8u: goto label_1e43e8;
            case 0x1E43ECu: goto label_1e43ec;
            case 0x1E43F0u: goto label_1e43f0;
            case 0x1E43F4u: goto label_1e43f4;
            case 0x1E43F8u: goto label_1e43f8;
            case 0x1E43FCu: goto label_1e43fc;
            case 0x1E4400u: goto label_1e4400;
            case 0x1E4404u: goto label_1e4404;
            case 0x1E4408u: goto label_1e4408;
            case 0x1E440Cu: goto label_1e440c;
            case 0x1E4410u: goto label_1e4410;
            case 0x1E4414u: goto label_1e4414;
            case 0x1E4418u: goto label_1e4418;
            case 0x1E441Cu: goto label_1e441c;
            case 0x1E4420u: goto label_1e4420;
            case 0x1E4424u: goto label_1e4424;
            case 0x1E4428u: goto label_1e4428;
            case 0x1E442Cu: goto label_1e442c;
            case 0x1E4430u: goto label_1e4430;
            case 0x1E4434u: goto label_1e4434;
            case 0x1E4438u: goto label_1e4438;
            case 0x1E443Cu: goto label_1e443c;
            case 0x1E4440u: goto label_1e4440;
            case 0x1E4444u: goto label_1e4444;
            case 0x1E4448u: goto label_1e4448;
            case 0x1E444Cu: goto label_1e444c;
            case 0x1E4450u: goto label_1e4450;
            case 0x1E4454u: goto label_1e4454;
            case 0x1E4458u: goto label_1e4458;
            case 0x1E445Cu: goto label_1e445c;
            case 0x1E4460u: goto label_1e4460;
            case 0x1E4464u: goto label_1e4464;
            case 0x1E4468u: goto label_1e4468;
            case 0x1E446Cu: goto label_1e446c;
            case 0x1E4470u: goto label_1e4470;
            case 0x1E4474u: goto label_1e4474;
            case 0x1E4478u: goto label_1e4478;
            case 0x1E447Cu: goto label_1e447c;
            case 0x1E4480u: goto label_1e4480;
            case 0x1E4484u: goto label_1e4484;
            case 0x1E4488u: goto label_1e4488;
            case 0x1E448Cu: goto label_1e448c;
            case 0x1E4490u: goto label_1e4490;
            case 0x1E4494u: goto label_1e4494;
            case 0x1E4498u: goto label_1e4498;
            case 0x1E449Cu: goto label_1e449c;
            case 0x1E44A0u: goto label_1e44a0;
            case 0x1E44A4u: goto label_1e44a4;
            case 0x1E44A8u: goto label_1e44a8;
            case 0x1E44ACu: goto label_1e44ac;
            case 0x1E44B0u: goto label_1e44b0;
            case 0x1E44B4u: goto label_1e44b4;
            case 0x1E44B8u: goto label_1e44b8;
            case 0x1E44BCu: goto label_1e44bc;
            case 0x1E44C0u: goto label_1e44c0;
            case 0x1E44C4u: goto label_1e44c4;
            case 0x1E44C8u: goto label_1e44c8;
            case 0x1E44CCu: goto label_1e44cc;
            case 0x1E44D0u: goto label_1e44d0;
            case 0x1E44D4u: goto label_1e44d4;
            case 0x1E44D8u: goto label_1e44d8;
            case 0x1E44DCu: goto label_1e44dc;
            case 0x1E44E0u: goto label_1e44e0;
            case 0x1E44E4u: goto label_1e44e4;
            case 0x1E44E8u: goto label_1e44e8;
            case 0x1E44ECu: goto label_1e44ec;
            case 0x1E44F0u: goto label_1e44f0;
            case 0x1E44F4u: goto label_1e44f4;
            case 0x1E44F8u: goto label_1e44f8;
            case 0x1E44FCu: goto label_1e44fc;
            case 0x1E4500u: goto label_1e4500;
            case 0x1E4504u: goto label_1e4504;
            case 0x1E4508u: goto label_1e4508;
            case 0x1E450Cu: goto label_1e450c;
            case 0x1E4510u: goto label_1e4510;
            case 0x1E4514u: goto label_1e4514;
            case 0x1E4518u: goto label_1e4518;
            case 0x1E451Cu: goto label_1e451c;
            case 0x1E4520u: goto label_1e4520;
            case 0x1E4524u: goto label_1e4524;
            case 0x1E4528u: goto label_1e4528;
            case 0x1E452Cu: goto label_1e452c;
            case 0x1E4530u: goto label_1e4530;
            case 0x1E4534u: goto label_1e4534;
            case 0x1E4538u: goto label_1e4538;
            case 0x1E453Cu: goto label_1e453c;
            case 0x1E4540u: goto label_1e4540;
            case 0x1E4544u: goto label_1e4544;
            case 0x1E4548u: goto label_1e4548;
            case 0x1E454Cu: goto label_1e454c;
            case 0x1E4550u: goto label_1e4550;
            case 0x1E4554u: goto label_1e4554;
            case 0x1E4558u: goto label_1e4558;
            case 0x1E455Cu: goto label_1e455c;
            case 0x1E4560u: goto label_1e4560;
            case 0x1E4564u: goto label_1e4564;
            case 0x1E4568u: goto label_1e4568;
            case 0x1E456Cu: goto label_1e456c;
            case 0x1E4570u: goto label_1e4570;
            case 0x1E4574u: goto label_1e4574;
            case 0x1E4578u: goto label_1e4578;
            case 0x1E457Cu: goto label_1e457c;
            case 0x1E4580u: goto label_1e4580;
            case 0x1E4584u: goto label_1e4584;
            case 0x1E4588u: goto label_1e4588;
            case 0x1E458Cu: goto label_1e458c;
            case 0x1E4590u: goto label_1e4590;
            case 0x1E4594u: goto label_1e4594;
            case 0x1E4598u: goto label_1e4598;
            case 0x1E459Cu: goto label_1e459c;
            case 0x1E45A0u: goto label_1e45a0;
            case 0x1E45A4u: goto label_1e45a4;
            case 0x1E45A8u: goto label_1e45a8;
            case 0x1E45ACu: goto label_1e45ac;
            case 0x1E45B0u: goto label_1e45b0;
            case 0x1E45B4u: goto label_1e45b4;
            case 0x1E45B8u: goto label_1e45b8;
            case 0x1E45BCu: goto label_1e45bc;
            case 0x1E45C0u: goto label_1e45c0;
            case 0x1E45C4u: goto label_1e45c4;
            case 0x1E45C8u: goto label_1e45c8;
            case 0x1E45CCu: goto label_1e45cc;
            case 0x1E45D0u: goto label_1e45d0;
            case 0x1E45D4u: goto label_1e45d4;
            case 0x1E45D8u: goto label_1e45d8;
            case 0x1E45DCu: goto label_1e45dc;
            case 0x1E45E0u: goto label_1e45e0;
            case 0x1E45E4u: goto label_1e45e4;
            case 0x1E45E8u: goto label_1e45e8;
            case 0x1E45ECu: goto label_1e45ec;
            case 0x1E45F0u: goto label_1e45f0;
            case 0x1E45F4u: goto label_1e45f4;
            case 0x1E45F8u: goto label_1e45f8;
            case 0x1E45FCu: goto label_1e45fc;
            case 0x1E4600u: goto label_1e4600;
            case 0x1E4604u: goto label_1e4604;
            case 0x1E4608u: goto label_1e4608;
            case 0x1E460Cu: goto label_1e460c;
            case 0x1E4610u: goto label_1e4610;
            case 0x1E4614u: goto label_1e4614;
            case 0x1E4618u: goto label_1e4618;
            case 0x1E461Cu: goto label_1e461c;
            case 0x1E4620u: goto label_1e4620;
            case 0x1E4624u: goto label_1e4624;
            case 0x1E4628u: goto label_1e4628;
            case 0x1E462Cu: goto label_1e462c;
            case 0x1E4630u: goto label_1e4630;
            case 0x1E4634u: goto label_1e4634;
            case 0x1E4638u: goto label_1e4638;
            case 0x1E463Cu: goto label_1e463c;
            case 0x1E4640u: goto label_1e4640;
            case 0x1E4644u: goto label_1e4644;
            case 0x1E4648u: goto label_1e4648;
            case 0x1E464Cu: goto label_1e464c;
            case 0x1E4650u: goto label_1e4650;
            case 0x1E4654u: goto label_1e4654;
            case 0x1E4658u: goto label_1e4658;
            case 0x1E465Cu: goto label_1e465c;
            case 0x1E4660u: goto label_1e4660;
            case 0x1E4664u: goto label_1e4664;
            case 0x1E4668u: goto label_1e4668;
            case 0x1E466Cu: goto label_1e466c;
            case 0x1E4670u: goto label_1e4670;
            case 0x1E4674u: goto label_1e4674;
            case 0x1E4678u: goto label_1e4678;
            case 0x1E467Cu: goto label_1e467c;
            case 0x1E4680u: goto label_1e4680;
            case 0x1E4684u: goto label_1e4684;
            case 0x1E4688u: goto label_1e4688;
            case 0x1E468Cu: goto label_1e468c;
            case 0x1E4690u: goto label_1e4690;
            case 0x1E4694u: goto label_1e4694;
            case 0x1E4698u: goto label_1e4698;
            case 0x1E469Cu: goto label_1e469c;
            case 0x1E46A0u: goto label_1e46a0;
            case 0x1E46A4u: goto label_1e46a4;
            case 0x1E46A8u: goto label_1e46a8;
            case 0x1E46ACu: goto label_1e46ac;
            case 0x1E46B0u: goto label_1e46b0;
            case 0x1E46B4u: goto label_1e46b4;
            case 0x1E46B8u: goto label_1e46b8;
            case 0x1E46BCu: goto label_1e46bc;
            case 0x1E46C0u: goto label_1e46c0;
            case 0x1E46C4u: goto label_1e46c4;
            case 0x1E46C8u: goto label_1e46c8;
            case 0x1E46CCu: goto label_1e46cc;
            case 0x1E46D0u: goto label_1e46d0;
            case 0x1E46D4u: goto label_1e46d4;
            case 0x1E46D8u: goto label_1e46d8;
            case 0x1E46DCu: goto label_1e46dc;
            case 0x1E46E0u: goto label_1e46e0;
            case 0x1E46E4u: goto label_1e46e4;
            case 0x1E46E8u: goto label_1e46e8;
            case 0x1E46ECu: goto label_1e46ec;
            case 0x1E46F0u: goto label_1e46f0;
            case 0x1E46F4u: goto label_1e46f4;
            case 0x1E46F8u: goto label_1e46f8;
            case 0x1E46FCu: goto label_1e46fc;
            case 0x1E4700u: goto label_1e4700;
            case 0x1E4704u: goto label_1e4704;
            case 0x1E4708u: goto label_1e4708;
            case 0x1E470Cu: goto label_1e470c;
            case 0x1E4710u: goto label_1e4710;
            case 0x1E4714u: goto label_1e4714;
            case 0x1E4718u: goto label_1e4718;
            case 0x1E471Cu: goto label_1e471c;
            case 0x1E4720u: goto label_1e4720;
            case 0x1E4724u: goto label_1e4724;
            case 0x1E4728u: goto label_1e4728;
            case 0x1E472Cu: goto label_1e472c;
            case 0x1E4730u: goto label_1e4730;
            case 0x1E4734u: goto label_1e4734;
            case 0x1E4738u: goto label_1e4738;
            case 0x1E473Cu: goto label_1e473c;
            case 0x1E4740u: goto label_1e4740;
            case 0x1E4744u: goto label_1e4744;
            case 0x1E4748u: goto label_1e4748;
            case 0x1E474Cu: goto label_1e474c;
            case 0x1E4750u: goto label_1e4750;
            case 0x1E4754u: goto label_1e4754;
            case 0x1E4758u: goto label_1e4758;
            case 0x1E475Cu: goto label_1e475c;
            case 0x1E4760u: goto label_1e4760;
            case 0x1E4764u: goto label_1e4764;
            case 0x1E4768u: goto label_1e4768;
            case 0x1E476Cu: goto label_1e476c;
            case 0x1E4770u: goto label_1e4770;
            case 0x1E4774u: goto label_1e4774;
            case 0x1E4778u: goto label_1e4778;
            case 0x1E477Cu: goto label_1e477c;
            case 0x1E4780u: goto label_1e4780;
            case 0x1E4784u: goto label_1e4784;
            case 0x1E4788u: goto label_1e4788;
            case 0x1E478Cu: goto label_1e478c;
            case 0x1E4790u: goto label_1e4790;
            case 0x1E4794u: goto label_1e4794;
            case 0x1E4798u: goto label_1e4798;
            case 0x1E479Cu: goto label_1e479c;
            case 0x1E47A0u: goto label_1e47a0;
            case 0x1E47A4u: goto label_1e47a4;
            case 0x1E47A8u: goto label_1e47a8;
            case 0x1E47ACu: goto label_1e47ac;
            case 0x1E47B0u: goto label_1e47b0;
            case 0x1E47B4u: goto label_1e47b4;
            case 0x1E47B8u: goto label_1e47b8;
            case 0x1E47BCu: goto label_1e47bc;
            case 0x1E47C0u: goto label_1e47c0;
            case 0x1E47C4u: goto label_1e47c4;
            case 0x1E47C8u: goto label_1e47c8;
            case 0x1E47CCu: goto label_1e47cc;
            case 0x1E47D0u: goto label_1e47d0;
            case 0x1E47D4u: goto label_1e47d4;
            case 0x1E47D8u: goto label_1e47d8;
            case 0x1E47DCu: goto label_1e47dc;
            case 0x1E47E0u: goto label_1e47e0;
            case 0x1E47E4u: goto label_1e47e4;
            case 0x1E47E8u: goto label_1e47e8;
            case 0x1E47ECu: goto label_1e47ec;
            case 0x1E47F0u: goto label_1e47f0;
            case 0x1E47F4u: goto label_1e47f4;
            case 0x1E47F8u: goto label_1e47f8;
            case 0x1E47FCu: goto label_1e47fc;
            case 0x1E4800u: goto label_1e4800;
            case 0x1E4804u: goto label_1e4804;
            case 0x1E4808u: goto label_1e4808;
            case 0x1E480Cu: goto label_1e480c;
            case 0x1E4810u: goto label_1e4810;
            case 0x1E4814u: goto label_1e4814;
            case 0x1E4818u: goto label_1e4818;
            case 0x1E481Cu: goto label_1e481c;
            case 0x1E4820u: goto label_1e4820;
            case 0x1E4824u: goto label_1e4824;
            case 0x1E4828u: goto label_1e4828;
            case 0x1E482Cu: goto label_1e482c;
            case 0x1E4830u: goto label_1e4830;
            case 0x1E4834u: goto label_1e4834;
            case 0x1E4838u: goto label_1e4838;
            case 0x1E483Cu: goto label_1e483c;
            case 0x1E4840u: goto label_1e4840;
            case 0x1E4844u: goto label_1e4844;
            case 0x1E4848u: goto label_1e4848;
            case 0x1E484Cu: goto label_1e484c;
            case 0x1E4850u: goto label_1e4850;
            case 0x1E4854u: goto label_1e4854;
            case 0x1E4858u: goto label_1e4858;
            case 0x1E485Cu: goto label_1e485c;
            case 0x1E4860u: goto label_1e4860;
            case 0x1E4864u: goto label_1e4864;
            case 0x1E4868u: goto label_1e4868;
            case 0x1E486Cu: goto label_1e486c;
            case 0x1E4870u: goto label_1e4870;
            case 0x1E4874u: goto label_1e4874;
            case 0x1E4878u: goto label_1e4878;
            case 0x1E487Cu: goto label_1e487c;
            case 0x1E4880u: goto label_1e4880;
            case 0x1E4884u: goto label_1e4884;
            case 0x1E4888u: goto label_1e4888;
            case 0x1E488Cu: goto label_1e488c;
            case 0x1E4890u: goto label_1e4890;
            case 0x1E4894u: goto label_1e4894;
            case 0x1E4898u: goto label_1e4898;
            case 0x1E489Cu: goto label_1e489c;
            case 0x1E48A0u: goto label_1e48a0;
            case 0x1E48A4u: goto label_1e48a4;
            case 0x1E48A8u: goto label_1e48a8;
            case 0x1E48ACu: goto label_1e48ac;
            case 0x1E48B0u: goto label_1e48b0;
            case 0x1E48B4u: goto label_1e48b4;
            case 0x1E48B8u: goto label_1e48b8;
            case 0x1E48BCu: goto label_1e48bc;
            case 0x1E48C0u: goto label_1e48c0;
            case 0x1E48C4u: goto label_1e48c4;
            case 0x1E48C8u: goto label_1e48c8;
            case 0x1E48CCu: goto label_1e48cc;
            case 0x1E48D0u: goto label_1e48d0;
            case 0x1E48D4u: goto label_1e48d4;
            case 0x1E48D8u: goto label_1e48d8;
            case 0x1E48DCu: goto label_1e48dc;
            case 0x1E48E0u: goto label_1e48e0;
            case 0x1E48E4u: goto label_1e48e4;
            case 0x1E48E8u: goto label_1e48e8;
            case 0x1E48ECu: goto label_1e48ec;
            case 0x1E48F0u: goto label_1e48f0;
            case 0x1E48F4u: goto label_1e48f4;
            case 0x1E48F8u: goto label_1e48f8;
            case 0x1E48FCu: goto label_1e48fc;
            case 0x1E4900u: goto label_1e4900;
            case 0x1E4904u: goto label_1e4904;
            case 0x1E4908u: goto label_1e4908;
            case 0x1E490Cu: goto label_1e490c;
            case 0x1E4910u: goto label_1e4910;
            case 0x1E4914u: goto label_1e4914;
            case 0x1E4918u: goto label_1e4918;
            case 0x1E491Cu: goto label_1e491c;
            case 0x1E4920u: goto label_1e4920;
            case 0x1E4924u: goto label_1e4924;
            case 0x1E4928u: goto label_1e4928;
            case 0x1E492Cu: goto label_1e492c;
            case 0x1E4930u: goto label_1e4930;
            case 0x1E4934u: goto label_1e4934;
            case 0x1E4938u: goto label_1e4938;
            case 0x1E493Cu: goto label_1e493c;
            case 0x1E4940u: goto label_1e4940;
            case 0x1E4944u: goto label_1e4944;
            case 0x1E4948u: goto label_1e4948;
            case 0x1E494Cu: goto label_1e494c;
            case 0x1E4950u: goto label_1e4950;
            case 0x1E4954u: goto label_1e4954;
            case 0x1E4958u: goto label_1e4958;
            case 0x1E495Cu: goto label_1e495c;
            case 0x1E4960u: goto label_1e4960;
            case 0x1E4964u: goto label_1e4964;
            case 0x1E4968u: goto label_1e4968;
            case 0x1E496Cu: goto label_1e496c;
            case 0x1E4970u: goto label_1e4970;
            case 0x1E4974u: goto label_1e4974;
            case 0x1E4978u: goto label_1e4978;
            case 0x1E497Cu: goto label_1e497c;
            case 0x1E4980u: goto label_1e4980;
            case 0x1E4984u: goto label_1e4984;
            case 0x1E4988u: goto label_1e4988;
            case 0x1E498Cu: goto label_1e498c;
            case 0x1E4990u: goto label_1e4990;
            case 0x1E4994u: goto label_1e4994;
            case 0x1E4998u: goto label_1e4998;
            case 0x1E499Cu: goto label_1e499c;
            case 0x1E49A0u: goto label_1e49a0;
            case 0x1E49A4u: goto label_1e49a4;
            case 0x1E49A8u: goto label_1e49a8;
            case 0x1E49ACu: goto label_1e49ac;
            case 0x1E49B0u: goto label_1e49b0;
            case 0x1E49B4u: goto label_1e49b4;
            case 0x1E49B8u: goto label_1e49b8;
            case 0x1E49BCu: goto label_1e49bc;
            case 0x1E49C0u: goto label_1e49c0;
            case 0x1E49C4u: goto label_1e49c4;
            case 0x1E49C8u: goto label_1e49c8;
            case 0x1E49CCu: goto label_1e49cc;
            case 0x1E49D0u: goto label_1e49d0;
            case 0x1E49D4u: goto label_1e49d4;
            case 0x1E49D8u: goto label_1e49d8;
            case 0x1E49DCu: goto label_1e49dc;
            case 0x1E49E0u: goto label_1e49e0;
            case 0x1E49E4u: goto label_1e49e4;
            case 0x1E49E8u: goto label_1e49e8;
            case 0x1E49ECu: goto label_1e49ec;
            case 0x1E49F0u: goto label_1e49f0;
            case 0x1E49F4u: goto label_1e49f4;
            case 0x1E49F8u: goto label_1e49f8;
            case 0x1E49FCu: goto label_1e49fc;
            case 0x1E4A00u: goto label_1e4a00;
            case 0x1E4A04u: goto label_1e4a04;
            case 0x1E4A08u: goto label_1e4a08;
            case 0x1E4A0Cu: goto label_1e4a0c;
            case 0x1E4A10u: goto label_1e4a10;
            case 0x1E4A14u: goto label_1e4a14;
            case 0x1E4A18u: goto label_1e4a18;
            case 0x1E4A1Cu: goto label_1e4a1c;
            case 0x1E4A20u: goto label_1e4a20;
            case 0x1E4A24u: goto label_1e4a24;
            case 0x1E4A28u: goto label_1e4a28;
            case 0x1E4A2Cu: goto label_1e4a2c;
            case 0x1E4A30u: goto label_1e4a30;
            case 0x1E4A34u: goto label_1e4a34;
            case 0x1E4A38u: goto label_1e4a38;
            case 0x1E4A3Cu: goto label_1e4a3c;
            case 0x1E4A40u: goto label_1e4a40;
            case 0x1E4A44u: goto label_1e4a44;
            case 0x1E4A48u: goto label_1e4a48;
            case 0x1E4A4Cu: goto label_1e4a4c;
            case 0x1E4A50u: goto label_1e4a50;
            case 0x1E4A54u: goto label_1e4a54;
            case 0x1E4A58u: goto label_1e4a58;
            case 0x1E4A5Cu: goto label_1e4a5c;
            case 0x1E4A60u: goto label_1e4a60;
            case 0x1E4A64u: goto label_1e4a64;
            case 0x1E4A68u: goto label_1e4a68;
            case 0x1E4A6Cu: goto label_1e4a6c;
            case 0x1E4A70u: goto label_1e4a70;
            case 0x1E4A74u: goto label_1e4a74;
            case 0x1E4A78u: goto label_1e4a78;
            case 0x1E4A7Cu: goto label_1e4a7c;
            case 0x1E4A80u: goto label_1e4a80;
            case 0x1E4A84u: goto label_1e4a84;
            case 0x1E4A88u: goto label_1e4a88;
            case 0x1E4A8Cu: goto label_1e4a8c;
            case 0x1E4A90u: goto label_1e4a90;
            case 0x1E4A94u: goto label_1e4a94;
            case 0x1E4A98u: goto label_1e4a98;
            case 0x1E4A9Cu: goto label_1e4a9c;
            case 0x1E4AA0u: goto label_1e4aa0;
            case 0x1E4AA4u: goto label_1e4aa4;
            case 0x1E4AA8u: goto label_1e4aa8;
            case 0x1E4AACu: goto label_1e4aac;
            case 0x1E4AB0u: goto label_1e4ab0;
            case 0x1E4AB4u: goto label_1e4ab4;
            case 0x1E4AB8u: goto label_1e4ab8;
            case 0x1E4ABCu: goto label_1e4abc;
            case 0x1E4AC0u: goto label_1e4ac0;
            case 0x1E4AC4u: goto label_1e4ac4;
            case 0x1E4AC8u: goto label_1e4ac8;
            case 0x1E4ACCu: goto label_1e4acc;
            case 0x1E4AD0u: goto label_1e4ad0;
            case 0x1E4AD4u: goto label_1e4ad4;
            case 0x1E4AD8u: goto label_1e4ad8;
            case 0x1E4ADCu: goto label_1e4adc;
            case 0x1E4AE0u: goto label_1e4ae0;
            case 0x1E4AE4u: goto label_1e4ae4;
            case 0x1E4AE8u: goto label_1e4ae8;
            case 0x1E4AECu: goto label_1e4aec;
            case 0x1E4AF0u: goto label_1e4af0;
            case 0x1E4AF4u: goto label_1e4af4;
            case 0x1E4AF8u: goto label_1e4af8;
            case 0x1E4AFCu: goto label_1e4afc;
            case 0x1E4B00u: goto label_1e4b00;
            case 0x1E4B04u: goto label_1e4b04;
            case 0x1E4B08u: goto label_1e4b08;
            case 0x1E4B0Cu: goto label_1e4b0c;
            case 0x1E4B10u: goto label_1e4b10;
            case 0x1E4B14u: goto label_1e4b14;
            case 0x1E4B18u: goto label_1e4b18;
            case 0x1E4B1Cu: goto label_1e4b1c;
            case 0x1E4B20u: goto label_1e4b20;
            case 0x1E4B24u: goto label_1e4b24;
            case 0x1E4B28u: goto label_1e4b28;
            case 0x1E4B2Cu: goto label_1e4b2c;
            case 0x1E4B30u: goto label_1e4b30;
            case 0x1E4B34u: goto label_1e4b34;
            case 0x1E4B38u: goto label_1e4b38;
            case 0x1E4B3Cu: goto label_1e4b3c;
            case 0x1E4B40u: goto label_1e4b40;
            case 0x1E4B44u: goto label_1e4b44;
            case 0x1E4B48u: goto label_1e4b48;
            case 0x1E4B4Cu: goto label_1e4b4c;
            case 0x1E4B50u: goto label_1e4b50;
            case 0x1E4B54u: goto label_1e4b54;
            case 0x1E4B58u: goto label_1e4b58;
            case 0x1E4B5Cu: goto label_1e4b5c;
            case 0x1E4B60u: goto label_1e4b60;
            case 0x1E4B64u: goto label_1e4b64;
            case 0x1E4B68u: goto label_1e4b68;
            case 0x1E4B6Cu: goto label_1e4b6c;
            case 0x1E4B70u: goto label_1e4b70;
            case 0x1E4B74u: goto label_1e4b74;
            case 0x1E4B78u: goto label_1e4b78;
            case 0x1E4B7Cu: goto label_1e4b7c;
            case 0x1E4B80u: goto label_1e4b80;
            case 0x1E4B84u: goto label_1e4b84;
            case 0x1E4B88u: goto label_1e4b88;
            case 0x1E4B8Cu: goto label_1e4b8c;
            case 0x1E4B90u: goto label_1e4b90;
            case 0x1E4B94u: goto label_1e4b94;
            case 0x1E4B98u: goto label_1e4b98;
            case 0x1E4B9Cu: goto label_1e4b9c;
            case 0x1E4BA0u: goto label_1e4ba0;
            case 0x1E4BA4u: goto label_1e4ba4;
            case 0x1E4BA8u: goto label_1e4ba8;
            case 0x1E4BACu: goto label_1e4bac;
            case 0x1E4BB0u: goto label_1e4bb0;
            case 0x1E4BB4u: goto label_1e4bb4;
            case 0x1E4BB8u: goto label_1e4bb8;
            case 0x1E4BBCu: goto label_1e4bbc;
            case 0x1E4BC0u: goto label_1e4bc0;
            case 0x1E4BC4u: goto label_1e4bc4;
            case 0x1E4BC8u: goto label_1e4bc8;
            case 0x1E4BCCu: goto label_1e4bcc;
            case 0x1E4BD0u: goto label_1e4bd0;
            case 0x1E4BD4u: goto label_1e4bd4;
            case 0x1E4BD8u: goto label_1e4bd8;
            case 0x1E4BDCu: goto label_1e4bdc;
            case 0x1E4BE0u: goto label_1e4be0;
            case 0x1E4BE4u: goto label_1e4be4;
            case 0x1E4BE8u: goto label_1e4be8;
            case 0x1E4BECu: goto label_1e4bec;
            case 0x1E4BF0u: goto label_1e4bf0;
            case 0x1E4BF4u: goto label_1e4bf4;
            case 0x1E4BF8u: goto label_1e4bf8;
            case 0x1E4BFCu: goto label_1e4bfc;
            case 0x1E4C00u: goto label_1e4c00;
            case 0x1E4C04u: goto label_1e4c04;
            case 0x1E4C08u: goto label_1e4c08;
            case 0x1E4C0Cu: goto label_1e4c0c;
            case 0x1E4C10u: goto label_1e4c10;
            case 0x1E4C14u: goto label_1e4c14;
            case 0x1E4C18u: goto label_1e4c18;
            case 0x1E4C1Cu: goto label_1e4c1c;
            case 0x1E4C20u: goto label_1e4c20;
            case 0x1E4C24u: goto label_1e4c24;
            case 0x1E4C28u: goto label_1e4c28;
            case 0x1E4C2Cu: goto label_1e4c2c;
            case 0x1E4C30u: goto label_1e4c30;
            case 0x1E4C34u: goto label_1e4c34;
            case 0x1E4C38u: goto label_1e4c38;
            case 0x1E4C3Cu: goto label_1e4c3c;
            case 0x1E4C40u: goto label_1e4c40;
            case 0x1E4C44u: goto label_1e4c44;
            case 0x1E4C48u: goto label_1e4c48;
            case 0x1E4C4Cu: goto label_1e4c4c;
            case 0x1E4C50u: goto label_1e4c50;
            case 0x1E4C54u: goto label_1e4c54;
            case 0x1E4C58u: goto label_1e4c58;
            case 0x1E4C5Cu: goto label_1e4c5c;
            case 0x1E4C60u: goto label_1e4c60;
            case 0x1E4C64u: goto label_1e4c64;
            case 0x1E4C68u: goto label_1e4c68;
            case 0x1E4C6Cu: goto label_1e4c6c;
            case 0x1E4C70u: goto label_1e4c70;
            case 0x1E4C74u: goto label_1e4c74;
            case 0x1E4C78u: goto label_1e4c78;
            case 0x1E4C7Cu: goto label_1e4c7c;
            case 0x1E4C80u: goto label_1e4c80;
            case 0x1E4C84u: goto label_1e4c84;
            case 0x1E4C88u: goto label_1e4c88;
            case 0x1E4C8Cu: goto label_1e4c8c;
            case 0x1E4C90u: goto label_1e4c90;
            case 0x1E4C94u: goto label_1e4c94;
            case 0x1E4C98u: goto label_1e4c98;
            case 0x1E4C9Cu: goto label_1e4c9c;
            case 0x1E4CA0u: goto label_1e4ca0;
            case 0x1E4CA4u: goto label_1e4ca4;
            case 0x1E4CA8u: goto label_1e4ca8;
            case 0x1E4CACu: goto label_1e4cac;
            case 0x1E4CB0u: goto label_1e4cb0;
            case 0x1E4CB4u: goto label_1e4cb4;
            case 0x1E4CB8u: goto label_1e4cb8;
            case 0x1E4CBCu: goto label_1e4cbc;
            case 0x1E4CC0u: goto label_1e4cc0;
            case 0x1E4CC4u: goto label_1e4cc4;
            case 0x1E4CC8u: goto label_1e4cc8;
            case 0x1E4CCCu: goto label_1e4ccc;
            case 0x1E4CD0u: goto label_1e4cd0;
            case 0x1E4CD4u: goto label_1e4cd4;
            case 0x1E4CD8u: goto label_1e4cd8;
            case 0x1E4CDCu: goto label_1e4cdc;
            case 0x1E4CE0u: goto label_1e4ce0;
            case 0x1E4CE4u: goto label_1e4ce4;
            case 0x1E4CE8u: goto label_1e4ce8;
            case 0x1E4CECu: goto label_1e4cec;
            case 0x1E4CF0u: goto label_1e4cf0;
            case 0x1E4CF4u: goto label_1e4cf4;
            case 0x1E4CF8u: goto label_1e4cf8;
            case 0x1E4CFCu: goto label_1e4cfc;
            case 0x1E4D00u: goto label_1e4d00;
            case 0x1E4D04u: goto label_1e4d04;
            case 0x1E4D08u: goto label_1e4d08;
            case 0x1E4D0Cu: goto label_1e4d0c;
            case 0x1E4D10u: goto label_1e4d10;
            case 0x1E4D14u: goto label_1e4d14;
            case 0x1E4D18u: goto label_1e4d18;
            case 0x1E4D1Cu: goto label_1e4d1c;
            case 0x1E4D20u: goto label_1e4d20;
            case 0x1E4D24u: goto label_1e4d24;
            case 0x1E4D28u: goto label_1e4d28;
            case 0x1E4D2Cu: goto label_1e4d2c;
            case 0x1E4D30u: goto label_1e4d30;
            case 0x1E4D34u: goto label_1e4d34;
            case 0x1E4D38u: goto label_1e4d38;
            case 0x1E4D3Cu: goto label_1e4d3c;
            case 0x1E4D40u: goto label_1e4d40;
            case 0x1E4D44u: goto label_1e4d44;
            case 0x1E4D48u: goto label_1e4d48;
            case 0x1E4D4Cu: goto label_1e4d4c;
            case 0x1E4D50u: goto label_1e4d50;
            case 0x1E4D54u: goto label_1e4d54;
            case 0x1E4D58u: goto label_1e4d58;
            case 0x1E4D5Cu: goto label_1e4d5c;
            case 0x1E4D60u: goto label_1e4d60;
            case 0x1E4D64u: goto label_1e4d64;
            case 0x1E4D68u: goto label_1e4d68;
            case 0x1E4D6Cu: goto label_1e4d6c;
            case 0x1E4D70u: goto label_1e4d70;
            case 0x1E4D74u: goto label_1e4d74;
            case 0x1E4D78u: goto label_1e4d78;
            case 0x1E4D7Cu: goto label_1e4d7c;
            case 0x1E4D80u: goto label_1e4d80;
            case 0x1E4D84u: goto label_1e4d84;
            case 0x1E4D88u: goto label_1e4d88;
            case 0x1E4D8Cu: goto label_1e4d8c;
            case 0x1E4D90u: goto label_1e4d90;
            case 0x1E4D94u: goto label_1e4d94;
            case 0x1E4D98u: goto label_1e4d98;
            case 0x1E4D9Cu: goto label_1e4d9c;
            case 0x1E4DA0u: goto label_1e4da0;
            case 0x1E4DA4u: goto label_1e4da4;
            case 0x1E4DA8u: goto label_1e4da8;
            case 0x1E4DACu: goto label_1e4dac;
            case 0x1E4DB0u: goto label_1e4db0;
            case 0x1E4DB4u: goto label_1e4db4;
            case 0x1E4DB8u: goto label_1e4db8;
            case 0x1E4DBCu: goto label_1e4dbc;
            case 0x1E4DC0u: goto label_1e4dc0;
            case 0x1E4DC4u: goto label_1e4dc4;
            case 0x1E4DC8u: goto label_1e4dc8;
            case 0x1E4DCCu: goto label_1e4dcc;
            case 0x1E4DD0u: goto label_1e4dd0;
            case 0x1E4DD4u: goto label_1e4dd4;
            case 0x1E4DD8u: goto label_1e4dd8;
            case 0x1E4DDCu: goto label_1e4ddc;
            case 0x1E4DE0u: goto label_1e4de0;
            case 0x1E4DE4u: goto label_1e4de4;
            case 0x1E4DE8u: goto label_1e4de8;
            case 0x1E4DECu: goto label_1e4dec;
            case 0x1E4DF0u: goto label_1e4df0;
            case 0x1E4DF4u: goto label_1e4df4;
            case 0x1E4DF8u: goto label_1e4df8;
            case 0x1E4DFCu: goto label_1e4dfc;
            case 0x1E4E00u: goto label_1e4e00;
            case 0x1E4E04u: goto label_1e4e04;
            case 0x1E4E08u: goto label_1e4e08;
            case 0x1E4E0Cu: goto label_1e4e0c;
            case 0x1E4E10u: goto label_1e4e10;
            case 0x1E4E14u: goto label_1e4e14;
            case 0x1E4E18u: goto label_1e4e18;
            case 0x1E4E1Cu: goto label_1e4e1c;
            case 0x1E4E20u: goto label_1e4e20;
            case 0x1E4E24u: goto label_1e4e24;
            case 0x1E4E28u: goto label_1e4e28;
            case 0x1E4E2Cu: goto label_1e4e2c;
            case 0x1E4E30u: goto label_1e4e30;
            case 0x1E4E34u: goto label_1e4e34;
            case 0x1E4E38u: goto label_1e4e38;
            case 0x1E4E3Cu: goto label_1e4e3c;
            case 0x1E4E40u: goto label_1e4e40;
            case 0x1E4E44u: goto label_1e4e44;
            case 0x1E4E48u: goto label_1e4e48;
            case 0x1E4E4Cu: goto label_1e4e4c;
            case 0x1E4E50u: goto label_1e4e50;
            case 0x1E4E54u: goto label_1e4e54;
            case 0x1E4E58u: goto label_1e4e58;
            case 0x1E4E5Cu: goto label_1e4e5c;
            case 0x1E4E60u: goto label_1e4e60;
            case 0x1E4E64u: goto label_1e4e64;
            case 0x1E4E68u: goto label_1e4e68;
            case 0x1E4E6Cu: goto label_1e4e6c;
            case 0x1E4E70u: goto label_1e4e70;
            case 0x1E4E74u: goto label_1e4e74;
            case 0x1E4E78u: goto label_1e4e78;
            case 0x1E4E7Cu: goto label_1e4e7c;
            case 0x1E4E80u: goto label_1e4e80;
            case 0x1E4E84u: goto label_1e4e84;
            case 0x1E4E88u: goto label_1e4e88;
            case 0x1E4E8Cu: goto label_1e4e8c;
            case 0x1E4E90u: goto label_1e4e90;
            case 0x1E4E94u: goto label_1e4e94;
            case 0x1E4E98u: goto label_1e4e98;
            case 0x1E4E9Cu: goto label_1e4e9c;
            case 0x1E4EA0u: goto label_1e4ea0;
            case 0x1E4EA4u: goto label_1e4ea4;
            case 0x1E4EA8u: goto label_1e4ea8;
            case 0x1E4EACu: goto label_1e4eac;
            case 0x1E4EB0u: goto label_1e4eb0;
            case 0x1E4EB4u: goto label_1e4eb4;
            case 0x1E4EB8u: goto label_1e4eb8;
            case 0x1E4EBCu: goto label_1e4ebc;
            case 0x1E4EC0u: goto label_1e4ec0;
            case 0x1E4EC4u: goto label_1e4ec4;
            case 0x1E4EC8u: goto label_1e4ec8;
            case 0x1E4ECCu: goto label_1e4ecc;
            case 0x1E4ED0u: goto label_1e4ed0;
            case 0x1E4ED4u: goto label_1e4ed4;
            case 0x1E4ED8u: goto label_1e4ed8;
            case 0x1E4EDCu: goto label_1e4edc;
            case 0x1E4EE0u: goto label_1e4ee0;
            case 0x1E4EE4u: goto label_1e4ee4;
            case 0x1E4EE8u: goto label_1e4ee8;
            case 0x1E4EECu: goto label_1e4eec;
            case 0x1E4EF0u: goto label_1e4ef0;
            case 0x1E4EF4u: goto label_1e4ef4;
            case 0x1E4EF8u: goto label_1e4ef8;
            case 0x1E4EFCu: goto label_1e4efc;
            case 0x1E4F00u: goto label_1e4f00;
            case 0x1E4F04u: goto label_1e4f04;
            case 0x1E4F08u: goto label_1e4f08;
            case 0x1E4F0Cu: goto label_1e4f0c;
            case 0x1E4F10u: goto label_1e4f10;
            case 0x1E4F14u: goto label_1e4f14;
            case 0x1E4F18u: goto label_1e4f18;
            case 0x1E4F1Cu: goto label_1e4f1c;
            case 0x1E4F20u: goto label_1e4f20;
            case 0x1E4F24u: goto label_1e4f24;
            case 0x1E4F28u: goto label_1e4f28;
            case 0x1E4F2Cu: goto label_1e4f2c;
            case 0x1E4F30u: goto label_1e4f30;
            case 0x1E4F34u: goto label_1e4f34;
            case 0x1E4F38u: goto label_1e4f38;
            case 0x1E4F3Cu: goto label_1e4f3c;
            case 0x1E4F40u: goto label_1e4f40;
            case 0x1E4F44u: goto label_1e4f44;
            case 0x1E4F48u: goto label_1e4f48;
            case 0x1E4F4Cu: goto label_1e4f4c;
            case 0x1E4F50u: goto label_1e4f50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F14u; }
            if (ctx->pc != 0x1E4F14u) { return; }
        }
    }
    ctx->pc = 0x1E4F14u;
label_1e4f14:
    // 0x1e4f14: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e4f18:
    if (ctx->pc == 0x1E4F18u) {
        ctx->pc = 0x1E4F1Cu;
        goto label_1e4f1c;
    }
    ctx->pc = 0x1E4F14u;
    {
        const bool branch_taken_0x1e4f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f14) {
            ctx->pc = 0x1E4F40u;
            goto label_1e4f40;
        }
    }
    ctx->pc = 0x1E4F1Cu;
label_1e4f1c:
    // 0x1e4f1c: 0x0  nop
    ctx->pc = 0x1e4f1cu;
    // NOP
label_1e4f20:
    // 0x1e4f20: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e4f24:
    // 0x1e4f24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e4f28:
    // 0x1e4f28: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x1e4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_1e4f2c:
    // 0x1e4f2c: 0x24c63290  addiu       $a2, $a2, 0x3290
    ctx->pc = 0x1e4f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12944));
label_1e4f30:
    // 0x1e4f30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e4f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f34:
    // 0x1e4f34: 0xc053ca4  jal         func_14F290
label_1e4f38:
    if (ctx->pc == 0x1E4F38u) {
        ctx->pc = 0x1E4F38u;
            // 0x1e4f38: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F3Cu;
        goto label_1e4f3c;
    }
    ctx->pc = 0x1E4F34u;
    SET_GPR_U32(ctx, 31, 0x1E4F3Cu);
    ctx->pc = 0x1E4F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F34u;
            // 0x1e4f38: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F3Cu; }
        if (ctx->pc != 0x1E4F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4F3Cu; }
        if (ctx->pc != 0x1E4F3Cu) { return; }
    }
    ctx->pc = 0x1E4F3Cu;
label_1e4f3c:
    // 0x1e4f3c: 0x0  nop
    ctx->pc = 0x1e4f3cu;
    // NOP
label_1e4f40:
    // 0x1e4f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4f44:
    // 0x1e4f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4f48:
    // 0x1e4f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4f4c:
    // 0x1e4f4c: 0x3e00008  jr          $ra
label_1e4f50:
    if (ctx->pc == 0x1E4F50u) {
        ctx->pc = 0x1E4F50u;
            // 0x1e4f50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4F54u;
        goto label_fallthrough_0x1e4f4c;
    }
    ctx->pc = 0x1E4F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4F4Cu;
            // 0x1e4f50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4270u: goto label_1e4270;
            case 0x1E4274u: goto label_1e4274;
            case 0x1E4278u: goto label_1e4278;
            case 0x1E427Cu: goto label_1e427c;
            case 0x1E4280u: goto label_1e4280;
            case 0x1E4284u: goto label_1e4284;
            case 0x1E4288u: goto label_1e4288;
            case 0x1E428Cu: goto label_1e428c;
            case 0x1E4290u: goto label_1e4290;
            case 0x1E4294u: goto label_1e4294;
            case 0x1E4298u: goto label_1e4298;
            case 0x1E429Cu: goto label_1e429c;
            case 0x1E42A0u: goto label_1e42a0;
            case 0x1E42A4u: goto label_1e42a4;
            case 0x1E42A8u: goto label_1e42a8;
            case 0x1E42ACu: goto label_1e42ac;
            case 0x1E42B0u: goto label_1e42b0;
            case 0x1E42B4u: goto label_1e42b4;
            case 0x1E42B8u: goto label_1e42b8;
            case 0x1E42BCu: goto label_1e42bc;
            case 0x1E42C0u: goto label_1e42c0;
            case 0x1E42C4u: goto label_1e42c4;
            case 0x1E42C8u: goto label_1e42c8;
            case 0x1E42CCu: goto label_1e42cc;
            case 0x1E42D0u: goto label_1e42d0;
            case 0x1E42D4u: goto label_1e42d4;
            case 0x1E42D8u: goto label_1e42d8;
            case 0x1E42DCu: goto label_1e42dc;
            case 0x1E42E0u: goto label_1e42e0;
            case 0x1E42E4u: goto label_1e42e4;
            case 0x1E42E8u: goto label_1e42e8;
            case 0x1E42ECu: goto label_1e42ec;
            case 0x1E42F0u: goto label_1e42f0;
            case 0x1E42F4u: goto label_1e42f4;
            case 0x1E42F8u: goto label_1e42f8;
            case 0x1E42FCu: goto label_1e42fc;
            case 0x1E4300u: goto label_1e4300;
            case 0x1E4304u: goto label_1e4304;
            case 0x1E4308u: goto label_1e4308;
            case 0x1E430Cu: goto label_1e430c;
            case 0x1E4310u: goto label_1e4310;
            case 0x1E4314u: goto label_1e4314;
            case 0x1E4318u: goto label_1e4318;
            case 0x1E431Cu: goto label_1e431c;
            case 0x1E4320u: goto label_1e4320;
            case 0x1E4324u: goto label_1e4324;
            case 0x1E4328u: goto label_1e4328;
            case 0x1E432Cu: goto label_1e432c;
            case 0x1E4330u: goto label_1e4330;
            case 0x1E4334u: goto label_1e4334;
            case 0x1E4338u: goto label_1e4338;
            case 0x1E433Cu: goto label_1e433c;
            case 0x1E4340u: goto label_1e4340;
            case 0x1E4344u: goto label_1e4344;
            case 0x1E4348u: goto label_1e4348;
            case 0x1E434Cu: goto label_1e434c;
            case 0x1E4350u: goto label_1e4350;
            case 0x1E4354u: goto label_1e4354;
            case 0x1E4358u: goto label_1e4358;
            case 0x1E435Cu: goto label_1e435c;
            case 0x1E4360u: goto label_1e4360;
            case 0x1E4364u: goto label_1e4364;
            case 0x1E4368u: goto label_1e4368;
            case 0x1E436Cu: goto label_1e436c;
            case 0x1E4370u: goto label_1e4370;
            case 0x1E4374u: goto label_1e4374;
            case 0x1E4378u: goto label_1e4378;
            case 0x1E437Cu: goto label_1e437c;
            case 0x1E4380u: goto label_1e4380;
            case 0x1E4384u: goto label_1e4384;
            case 0x1E4388u: goto label_1e4388;
            case 0x1E438Cu: goto label_1e438c;
            case 0x1E4390u: goto label_1e4390;
            case 0x1E4394u: goto label_1e4394;
            case 0x1E4398u: goto label_1e4398;
            case 0x1E439Cu: goto label_1e439c;
            case 0x1E43A0u: goto label_1e43a0;
            case 0x1E43A4u: goto label_1e43a4;
            case 0x1E43A8u: goto label_1e43a8;
            case 0x1E43ACu: goto label_1e43ac;
            case 0x1E43B0u: goto label_1e43b0;
            case 0x1E43B4u: goto label_1e43b4;
            case 0x1E43B8u: goto label_1e43b8;
            case 0x1E43BCu: goto label_1e43bc;
            case 0x1E43C0u: goto label_1e43c0;
            case 0x1E43C4u: goto label_1e43c4;
            case 0x1E43C8u: goto label_1e43c8;
            case 0x1E43CCu: goto label_1e43cc;
            case 0x1E43D0u: goto label_1e43d0;
            case 0x1E43D4u: goto label_1e43d4;
            case 0x1E43D8u: goto label_1e43d8;
            case 0x1E43DCu: goto label_1e43dc;
            case 0x1E43E0u: goto label_1e43e0;
            case 0x1E43E4u: goto label_1e43e4;
            case 0x1E43E8u: goto label_1e43e8;
            case 0x1E43ECu: goto label_1e43ec;
            case 0x1E43F0u: goto label_1e43f0;
            case 0x1E43F4u: goto label_1e43f4;
            case 0x1E43F8u: goto label_1e43f8;
            case 0x1E43FCu: goto label_1e43fc;
            case 0x1E4400u: goto label_1e4400;
            case 0x1E4404u: goto label_1e4404;
            case 0x1E4408u: goto label_1e4408;
            case 0x1E440Cu: goto label_1e440c;
            case 0x1E4410u: goto label_1e4410;
            case 0x1E4414u: goto label_1e4414;
            case 0x1E4418u: goto label_1e4418;
            case 0x1E441Cu: goto label_1e441c;
            case 0x1E4420u: goto label_1e4420;
            case 0x1E4424u: goto label_1e4424;
            case 0x1E4428u: goto label_1e4428;
            case 0x1E442Cu: goto label_1e442c;
            case 0x1E4430u: goto label_1e4430;
            case 0x1E4434u: goto label_1e4434;
            case 0x1E4438u: goto label_1e4438;
            case 0x1E443Cu: goto label_1e443c;
            case 0x1E4440u: goto label_1e4440;
            case 0x1E4444u: goto label_1e4444;
            case 0x1E4448u: goto label_1e4448;
            case 0x1E444Cu: goto label_1e444c;
            case 0x1E4450u: goto label_1e4450;
            case 0x1E4454u: goto label_1e4454;
            case 0x1E4458u: goto label_1e4458;
            case 0x1E445Cu: goto label_1e445c;
            case 0x1E4460u: goto label_1e4460;
            case 0x1E4464u: goto label_1e4464;
            case 0x1E4468u: goto label_1e4468;
            case 0x1E446Cu: goto label_1e446c;
            case 0x1E4470u: goto label_1e4470;
            case 0x1E4474u: goto label_1e4474;
            case 0x1E4478u: goto label_1e4478;
            case 0x1E447Cu: goto label_1e447c;
            case 0x1E4480u: goto label_1e4480;
            case 0x1E4484u: goto label_1e4484;
            case 0x1E4488u: goto label_1e4488;
            case 0x1E448Cu: goto label_1e448c;
            case 0x1E4490u: goto label_1e4490;
            case 0x1E4494u: goto label_1e4494;
            case 0x1E4498u: goto label_1e4498;
            case 0x1E449Cu: goto label_1e449c;
            case 0x1E44A0u: goto label_1e44a0;
            case 0x1E44A4u: goto label_1e44a4;
            case 0x1E44A8u: goto label_1e44a8;
            case 0x1E44ACu: goto label_1e44ac;
            case 0x1E44B0u: goto label_1e44b0;
            case 0x1E44B4u: goto label_1e44b4;
            case 0x1E44B8u: goto label_1e44b8;
            case 0x1E44BCu: goto label_1e44bc;
            case 0x1E44C0u: goto label_1e44c0;
            case 0x1E44C4u: goto label_1e44c4;
            case 0x1E44C8u: goto label_1e44c8;
            case 0x1E44CCu: goto label_1e44cc;
            case 0x1E44D0u: goto label_1e44d0;
            case 0x1E44D4u: goto label_1e44d4;
            case 0x1E44D8u: goto label_1e44d8;
            case 0x1E44DCu: goto label_1e44dc;
            case 0x1E44E0u: goto label_1e44e0;
            case 0x1E44E4u: goto label_1e44e4;
            case 0x1E44E8u: goto label_1e44e8;
            case 0x1E44ECu: goto label_1e44ec;
            case 0x1E44F0u: goto label_1e44f0;
            case 0x1E44F4u: goto label_1e44f4;
            case 0x1E44F8u: goto label_1e44f8;
            case 0x1E44FCu: goto label_1e44fc;
            case 0x1E4500u: goto label_1e4500;
            case 0x1E4504u: goto label_1e4504;
            case 0x1E4508u: goto label_1e4508;
            case 0x1E450Cu: goto label_1e450c;
            case 0x1E4510u: goto label_1e4510;
            case 0x1E4514u: goto label_1e4514;
            case 0x1E4518u: goto label_1e4518;
            case 0x1E451Cu: goto label_1e451c;
            case 0x1E4520u: goto label_1e4520;
            case 0x1E4524u: goto label_1e4524;
            case 0x1E4528u: goto label_1e4528;
            case 0x1E452Cu: goto label_1e452c;
            case 0x1E4530u: goto label_1e4530;
            case 0x1E4534u: goto label_1e4534;
            case 0x1E4538u: goto label_1e4538;
            case 0x1E453Cu: goto label_1e453c;
            case 0x1E4540u: goto label_1e4540;
            case 0x1E4544u: goto label_1e4544;
            case 0x1E4548u: goto label_1e4548;
            case 0x1E454Cu: goto label_1e454c;
            case 0x1E4550u: goto label_1e4550;
            case 0x1E4554u: goto label_1e4554;
            case 0x1E4558u: goto label_1e4558;
            case 0x1E455Cu: goto label_1e455c;
            case 0x1E4560u: goto label_1e4560;
            case 0x1E4564u: goto label_1e4564;
            case 0x1E4568u: goto label_1e4568;
            case 0x1E456Cu: goto label_1e456c;
            case 0x1E4570u: goto label_1e4570;
            case 0x1E4574u: goto label_1e4574;
            case 0x1E4578u: goto label_1e4578;
            case 0x1E457Cu: goto label_1e457c;
            case 0x1E4580u: goto label_1e4580;
            case 0x1E4584u: goto label_1e4584;
            case 0x1E4588u: goto label_1e4588;
            case 0x1E458Cu: goto label_1e458c;
            case 0x1E4590u: goto label_1e4590;
            case 0x1E4594u: goto label_1e4594;
            case 0x1E4598u: goto label_1e4598;
            case 0x1E459Cu: goto label_1e459c;
            case 0x1E45A0u: goto label_1e45a0;
            case 0x1E45A4u: goto label_1e45a4;
            case 0x1E45A8u: goto label_1e45a8;
            case 0x1E45ACu: goto label_1e45ac;
            case 0x1E45B0u: goto label_1e45b0;
            case 0x1E45B4u: goto label_1e45b4;
            case 0x1E45B8u: goto label_1e45b8;
            case 0x1E45BCu: goto label_1e45bc;
            case 0x1E45C0u: goto label_1e45c0;
            case 0x1E45C4u: goto label_1e45c4;
            case 0x1E45C8u: goto label_1e45c8;
            case 0x1E45CCu: goto label_1e45cc;
            case 0x1E45D0u: goto label_1e45d0;
            case 0x1E45D4u: goto label_1e45d4;
            case 0x1E45D8u: goto label_1e45d8;
            case 0x1E45DCu: goto label_1e45dc;
            case 0x1E45E0u: goto label_1e45e0;
            case 0x1E45E4u: goto label_1e45e4;
            case 0x1E45E8u: goto label_1e45e8;
            case 0x1E45ECu: goto label_1e45ec;
            case 0x1E45F0u: goto label_1e45f0;
            case 0x1E45F4u: goto label_1e45f4;
            case 0x1E45F8u: goto label_1e45f8;
            case 0x1E45FCu: goto label_1e45fc;
            case 0x1E4600u: goto label_1e4600;
            case 0x1E4604u: goto label_1e4604;
            case 0x1E4608u: goto label_1e4608;
            case 0x1E460Cu: goto label_1e460c;
            case 0x1E4610u: goto label_1e4610;
            case 0x1E4614u: goto label_1e4614;
            case 0x1E4618u: goto label_1e4618;
            case 0x1E461Cu: goto label_1e461c;
            case 0x1E4620u: goto label_1e4620;
            case 0x1E4624u: goto label_1e4624;
            case 0x1E4628u: goto label_1e4628;
            case 0x1E462Cu: goto label_1e462c;
            case 0x1E4630u: goto label_1e4630;
            case 0x1E4634u: goto label_1e4634;
            case 0x1E4638u: goto label_1e4638;
            case 0x1E463Cu: goto label_1e463c;
            case 0x1E4640u: goto label_1e4640;
            case 0x1E4644u: goto label_1e4644;
            case 0x1E4648u: goto label_1e4648;
            case 0x1E464Cu: goto label_1e464c;
            case 0x1E4650u: goto label_1e4650;
            case 0x1E4654u: goto label_1e4654;
            case 0x1E4658u: goto label_1e4658;
            case 0x1E465Cu: goto label_1e465c;
            case 0x1E4660u: goto label_1e4660;
            case 0x1E4664u: goto label_1e4664;
            case 0x1E4668u: goto label_1e4668;
            case 0x1E466Cu: goto label_1e466c;
            case 0x1E4670u: goto label_1e4670;
            case 0x1E4674u: goto label_1e4674;
            case 0x1E4678u: goto label_1e4678;
            case 0x1E467Cu: goto label_1e467c;
            case 0x1E4680u: goto label_1e4680;
            case 0x1E4684u: goto label_1e4684;
            case 0x1E4688u: goto label_1e4688;
            case 0x1E468Cu: goto label_1e468c;
            case 0x1E4690u: goto label_1e4690;
            case 0x1E4694u: goto label_1e4694;
            case 0x1E4698u: goto label_1e4698;
            case 0x1E469Cu: goto label_1e469c;
            case 0x1E46A0u: goto label_1e46a0;
            case 0x1E46A4u: goto label_1e46a4;
            case 0x1E46A8u: goto label_1e46a8;
            case 0x1E46ACu: goto label_1e46ac;
            case 0x1E46B0u: goto label_1e46b0;
            case 0x1E46B4u: goto label_1e46b4;
            case 0x1E46B8u: goto label_1e46b8;
            case 0x1E46BCu: goto label_1e46bc;
            case 0x1E46C0u: goto label_1e46c0;
            case 0x1E46C4u: goto label_1e46c4;
            case 0x1E46C8u: goto label_1e46c8;
            case 0x1E46CCu: goto label_1e46cc;
            case 0x1E46D0u: goto label_1e46d0;
            case 0x1E46D4u: goto label_1e46d4;
            case 0x1E46D8u: goto label_1e46d8;
            case 0x1E46DCu: goto label_1e46dc;
            case 0x1E46E0u: goto label_1e46e0;
            case 0x1E46E4u: goto label_1e46e4;
            case 0x1E46E8u: goto label_1e46e8;
            case 0x1E46ECu: goto label_1e46ec;
            case 0x1E46F0u: goto label_1e46f0;
            case 0x1E46F4u: goto label_1e46f4;
            case 0x1E46F8u: goto label_1e46f8;
            case 0x1E46FCu: goto label_1e46fc;
            case 0x1E4700u: goto label_1e4700;
            case 0x1E4704u: goto label_1e4704;
            case 0x1E4708u: goto label_1e4708;
            case 0x1E470Cu: goto label_1e470c;
            case 0x1E4710u: goto label_1e4710;
            case 0x1E4714u: goto label_1e4714;
            case 0x1E4718u: goto label_1e4718;
            case 0x1E471Cu: goto label_1e471c;
            case 0x1E4720u: goto label_1e4720;
            case 0x1E4724u: goto label_1e4724;
            case 0x1E4728u: goto label_1e4728;
            case 0x1E472Cu: goto label_1e472c;
            case 0x1E4730u: goto label_1e4730;
            case 0x1E4734u: goto label_1e4734;
            case 0x1E4738u: goto label_1e4738;
            case 0x1E473Cu: goto label_1e473c;
            case 0x1E4740u: goto label_1e4740;
            case 0x1E4744u: goto label_1e4744;
            case 0x1E4748u: goto label_1e4748;
            case 0x1E474Cu: goto label_1e474c;
            case 0x1E4750u: goto label_1e4750;
            case 0x1E4754u: goto label_1e4754;
            case 0x1E4758u: goto label_1e4758;
            case 0x1E475Cu: goto label_1e475c;
            case 0x1E4760u: goto label_1e4760;
            case 0x1E4764u: goto label_1e4764;
            case 0x1E4768u: goto label_1e4768;
            case 0x1E476Cu: goto label_1e476c;
            case 0x1E4770u: goto label_1e4770;
            case 0x1E4774u: goto label_1e4774;
            case 0x1E4778u: goto label_1e4778;
            case 0x1E477Cu: goto label_1e477c;
            case 0x1E4780u: goto label_1e4780;
            case 0x1E4784u: goto label_1e4784;
            case 0x1E4788u: goto label_1e4788;
            case 0x1E478Cu: goto label_1e478c;
            case 0x1E4790u: goto label_1e4790;
            case 0x1E4794u: goto label_1e4794;
            case 0x1E4798u: goto label_1e4798;
            case 0x1E479Cu: goto label_1e479c;
            case 0x1E47A0u: goto label_1e47a0;
            case 0x1E47A4u: goto label_1e47a4;
            case 0x1E47A8u: goto label_1e47a8;
            case 0x1E47ACu: goto label_1e47ac;
            case 0x1E47B0u: goto label_1e47b0;
            case 0x1E47B4u: goto label_1e47b4;
            case 0x1E47B8u: goto label_1e47b8;
            case 0x1E47BCu: goto label_1e47bc;
            case 0x1E47C0u: goto label_1e47c0;
            case 0x1E47C4u: goto label_1e47c4;
            case 0x1E47C8u: goto label_1e47c8;
            case 0x1E47CCu: goto label_1e47cc;
            case 0x1E47D0u: goto label_1e47d0;
            case 0x1E47D4u: goto label_1e47d4;
            case 0x1E47D8u: goto label_1e47d8;
            case 0x1E47DCu: goto label_1e47dc;
            case 0x1E47E0u: goto label_1e47e0;
            case 0x1E47E4u: goto label_1e47e4;
            case 0x1E47E8u: goto label_1e47e8;
            case 0x1E47ECu: goto label_1e47ec;
            case 0x1E47F0u: goto label_1e47f0;
            case 0x1E47F4u: goto label_1e47f4;
            case 0x1E47F8u: goto label_1e47f8;
            case 0x1E47FCu: goto label_1e47fc;
            case 0x1E4800u: goto label_1e4800;
            case 0x1E4804u: goto label_1e4804;
            case 0x1E4808u: goto label_1e4808;
            case 0x1E480Cu: goto label_1e480c;
            case 0x1E4810u: goto label_1e4810;
            case 0x1E4814u: goto label_1e4814;
            case 0x1E4818u: goto label_1e4818;
            case 0x1E481Cu: goto label_1e481c;
            case 0x1E4820u: goto label_1e4820;
            case 0x1E4824u: goto label_1e4824;
            case 0x1E4828u: goto label_1e4828;
            case 0x1E482Cu: goto label_1e482c;
            case 0x1E4830u: goto label_1e4830;
            case 0x1E4834u: goto label_1e4834;
            case 0x1E4838u: goto label_1e4838;
            case 0x1E483Cu: goto label_1e483c;
            case 0x1E4840u: goto label_1e4840;
            case 0x1E4844u: goto label_1e4844;
            case 0x1E4848u: goto label_1e4848;
            case 0x1E484Cu: goto label_1e484c;
            case 0x1E4850u: goto label_1e4850;
            case 0x1E4854u: goto label_1e4854;
            case 0x1E4858u: goto label_1e4858;
            case 0x1E485Cu: goto label_1e485c;
            case 0x1E4860u: goto label_1e4860;
            case 0x1E4864u: goto label_1e4864;
            case 0x1E4868u: goto label_1e4868;
            case 0x1E486Cu: goto label_1e486c;
            case 0x1E4870u: goto label_1e4870;
            case 0x1E4874u: goto label_1e4874;
            case 0x1E4878u: goto label_1e4878;
            case 0x1E487Cu: goto label_1e487c;
            case 0x1E4880u: goto label_1e4880;
            case 0x1E4884u: goto label_1e4884;
            case 0x1E4888u: goto label_1e4888;
            case 0x1E488Cu: goto label_1e488c;
            case 0x1E4890u: goto label_1e4890;
            case 0x1E4894u: goto label_1e4894;
            case 0x1E4898u: goto label_1e4898;
            case 0x1E489Cu: goto label_1e489c;
            case 0x1E48A0u: goto label_1e48a0;
            case 0x1E48A4u: goto label_1e48a4;
            case 0x1E48A8u: goto label_1e48a8;
            case 0x1E48ACu: goto label_1e48ac;
            case 0x1E48B0u: goto label_1e48b0;
            case 0x1E48B4u: goto label_1e48b4;
            case 0x1E48B8u: goto label_1e48b8;
            case 0x1E48BCu: goto label_1e48bc;
            case 0x1E48C0u: goto label_1e48c0;
            case 0x1E48C4u: goto label_1e48c4;
            case 0x1E48C8u: goto label_1e48c8;
            case 0x1E48CCu: goto label_1e48cc;
            case 0x1E48D0u: goto label_1e48d0;
            case 0x1E48D4u: goto label_1e48d4;
            case 0x1E48D8u: goto label_1e48d8;
            case 0x1E48DCu: goto label_1e48dc;
            case 0x1E48E0u: goto label_1e48e0;
            case 0x1E48E4u: goto label_1e48e4;
            case 0x1E48E8u: goto label_1e48e8;
            case 0x1E48ECu: goto label_1e48ec;
            case 0x1E48F0u: goto label_1e48f0;
            case 0x1E48F4u: goto label_1e48f4;
            case 0x1E48F8u: goto label_1e48f8;
            case 0x1E48FCu: goto label_1e48fc;
            case 0x1E4900u: goto label_1e4900;
            case 0x1E4904u: goto label_1e4904;
            case 0x1E4908u: goto label_1e4908;
            case 0x1E490Cu: goto label_1e490c;
            case 0x1E4910u: goto label_1e4910;
            case 0x1E4914u: goto label_1e4914;
            case 0x1E4918u: goto label_1e4918;
            case 0x1E491Cu: goto label_1e491c;
            case 0x1E4920u: goto label_1e4920;
            case 0x1E4924u: goto label_1e4924;
            case 0x1E4928u: goto label_1e4928;
            case 0x1E492Cu: goto label_1e492c;
            case 0x1E4930u: goto label_1e4930;
            case 0x1E4934u: goto label_1e4934;
            case 0x1E4938u: goto label_1e4938;
            case 0x1E493Cu: goto label_1e493c;
            case 0x1E4940u: goto label_1e4940;
            case 0x1E4944u: goto label_1e4944;
            case 0x1E4948u: goto label_1e4948;
            case 0x1E494Cu: goto label_1e494c;
            case 0x1E4950u: goto label_1e4950;
            case 0x1E4954u: goto label_1e4954;
            case 0x1E4958u: goto label_1e4958;
            case 0x1E495Cu: goto label_1e495c;
            case 0x1E4960u: goto label_1e4960;
            case 0x1E4964u: goto label_1e4964;
            case 0x1E4968u: goto label_1e4968;
            case 0x1E496Cu: goto label_1e496c;
            case 0x1E4970u: goto label_1e4970;
            case 0x1E4974u: goto label_1e4974;
            case 0x1E4978u: goto label_1e4978;
            case 0x1E497Cu: goto label_1e497c;
            case 0x1E4980u: goto label_1e4980;
            case 0x1E4984u: goto label_1e4984;
            case 0x1E4988u: goto label_1e4988;
            case 0x1E498Cu: goto label_1e498c;
            case 0x1E4990u: goto label_1e4990;
            case 0x1E4994u: goto label_1e4994;
            case 0x1E4998u: goto label_1e4998;
            case 0x1E499Cu: goto label_1e499c;
            case 0x1E49A0u: goto label_1e49a0;
            case 0x1E49A4u: goto label_1e49a4;
            case 0x1E49A8u: goto label_1e49a8;
            case 0x1E49ACu: goto label_1e49ac;
            case 0x1E49B0u: goto label_1e49b0;
            case 0x1E49B4u: goto label_1e49b4;
            case 0x1E49B8u: goto label_1e49b8;
            case 0x1E49BCu: goto label_1e49bc;
            case 0x1E49C0u: goto label_1e49c0;
            case 0x1E49C4u: goto label_1e49c4;
            case 0x1E49C8u: goto label_1e49c8;
            case 0x1E49CCu: goto label_1e49cc;
            case 0x1E49D0u: goto label_1e49d0;
            case 0x1E49D4u: goto label_1e49d4;
            case 0x1E49D8u: goto label_1e49d8;
            case 0x1E49DCu: goto label_1e49dc;
            case 0x1E49E0u: goto label_1e49e0;
            case 0x1E49E4u: goto label_1e49e4;
            case 0x1E49E8u: goto label_1e49e8;
            case 0x1E49ECu: goto label_1e49ec;
            case 0x1E49F0u: goto label_1e49f0;
            case 0x1E49F4u: goto label_1e49f4;
            case 0x1E49F8u: goto label_1e49f8;
            case 0x1E49FCu: goto label_1e49fc;
            case 0x1E4A00u: goto label_1e4a00;
            case 0x1E4A04u: goto label_1e4a04;
            case 0x1E4A08u: goto label_1e4a08;
            case 0x1E4A0Cu: goto label_1e4a0c;
            case 0x1E4A10u: goto label_1e4a10;
            case 0x1E4A14u: goto label_1e4a14;
            case 0x1E4A18u: goto label_1e4a18;
            case 0x1E4A1Cu: goto label_1e4a1c;
            case 0x1E4A20u: goto label_1e4a20;
            case 0x1E4A24u: goto label_1e4a24;
            case 0x1E4A28u: goto label_1e4a28;
            case 0x1E4A2Cu: goto label_1e4a2c;
            case 0x1E4A30u: goto label_1e4a30;
            case 0x1E4A34u: goto label_1e4a34;
            case 0x1E4A38u: goto label_1e4a38;
            case 0x1E4A3Cu: goto label_1e4a3c;
            case 0x1E4A40u: goto label_1e4a40;
            case 0x1E4A44u: goto label_1e4a44;
            case 0x1E4A48u: goto label_1e4a48;
            case 0x1E4A4Cu: goto label_1e4a4c;
            case 0x1E4A50u: goto label_1e4a50;
            case 0x1E4A54u: goto label_1e4a54;
            case 0x1E4A58u: goto label_1e4a58;
            case 0x1E4A5Cu: goto label_1e4a5c;
            case 0x1E4A60u: goto label_1e4a60;
            case 0x1E4A64u: goto label_1e4a64;
            case 0x1E4A68u: goto label_1e4a68;
            case 0x1E4A6Cu: goto label_1e4a6c;
            case 0x1E4A70u: goto label_1e4a70;
            case 0x1E4A74u: goto label_1e4a74;
            case 0x1E4A78u: goto label_1e4a78;
            case 0x1E4A7Cu: goto label_1e4a7c;
            case 0x1E4A80u: goto label_1e4a80;
            case 0x1E4A84u: goto label_1e4a84;
            case 0x1E4A88u: goto label_1e4a88;
            case 0x1E4A8Cu: goto label_1e4a8c;
            case 0x1E4A90u: goto label_1e4a90;
            case 0x1E4A94u: goto label_1e4a94;
            case 0x1E4A98u: goto label_1e4a98;
            case 0x1E4A9Cu: goto label_1e4a9c;
            case 0x1E4AA0u: goto label_1e4aa0;
            case 0x1E4AA4u: goto label_1e4aa4;
            case 0x1E4AA8u: goto label_1e4aa8;
            case 0x1E4AACu: goto label_1e4aac;
            case 0x1E4AB0u: goto label_1e4ab0;
            case 0x1E4AB4u: goto label_1e4ab4;
            case 0x1E4AB8u: goto label_1e4ab8;
            case 0x1E4ABCu: goto label_1e4abc;
            case 0x1E4AC0u: goto label_1e4ac0;
            case 0x1E4AC4u: goto label_1e4ac4;
            case 0x1E4AC8u: goto label_1e4ac8;
            case 0x1E4ACCu: goto label_1e4acc;
            case 0x1E4AD0u: goto label_1e4ad0;
            case 0x1E4AD4u: goto label_1e4ad4;
            case 0x1E4AD8u: goto label_1e4ad8;
            case 0x1E4ADCu: goto label_1e4adc;
            case 0x1E4AE0u: goto label_1e4ae0;
            case 0x1E4AE4u: goto label_1e4ae4;
            case 0x1E4AE8u: goto label_1e4ae8;
            case 0x1E4AECu: goto label_1e4aec;
            case 0x1E4AF0u: goto label_1e4af0;
            case 0x1E4AF4u: goto label_1e4af4;
            case 0x1E4AF8u: goto label_1e4af8;
            case 0x1E4AFCu: goto label_1e4afc;
            case 0x1E4B00u: goto label_1e4b00;
            case 0x1E4B04u: goto label_1e4b04;
            case 0x1E4B08u: goto label_1e4b08;
            case 0x1E4B0Cu: goto label_1e4b0c;
            case 0x1E4B10u: goto label_1e4b10;
            case 0x1E4B14u: goto label_1e4b14;
            case 0x1E4B18u: goto label_1e4b18;
            case 0x1E4B1Cu: goto label_1e4b1c;
            case 0x1E4B20u: goto label_1e4b20;
            case 0x1E4B24u: goto label_1e4b24;
            case 0x1E4B28u: goto label_1e4b28;
            case 0x1E4B2Cu: goto label_1e4b2c;
            case 0x1E4B30u: goto label_1e4b30;
            case 0x1E4B34u: goto label_1e4b34;
            case 0x1E4B38u: goto label_1e4b38;
            case 0x1E4B3Cu: goto label_1e4b3c;
            case 0x1E4B40u: goto label_1e4b40;
            case 0x1E4B44u: goto label_1e4b44;
            case 0x1E4B48u: goto label_1e4b48;
            case 0x1E4B4Cu: goto label_1e4b4c;
            case 0x1E4B50u: goto label_1e4b50;
            case 0x1E4B54u: goto label_1e4b54;
            case 0x1E4B58u: goto label_1e4b58;
            case 0x1E4B5Cu: goto label_1e4b5c;
            case 0x1E4B60u: goto label_1e4b60;
            case 0x1E4B64u: goto label_1e4b64;
            case 0x1E4B68u: goto label_1e4b68;
            case 0x1E4B6Cu: goto label_1e4b6c;
            case 0x1E4B70u: goto label_1e4b70;
            case 0x1E4B74u: goto label_1e4b74;
            case 0x1E4B78u: goto label_1e4b78;
            case 0x1E4B7Cu: goto label_1e4b7c;
            case 0x1E4B80u: goto label_1e4b80;
            case 0x1E4B84u: goto label_1e4b84;
            case 0x1E4B88u: goto label_1e4b88;
            case 0x1E4B8Cu: goto label_1e4b8c;
            case 0x1E4B90u: goto label_1e4b90;
            case 0x1E4B94u: goto label_1e4b94;
            case 0x1E4B98u: goto label_1e4b98;
            case 0x1E4B9Cu: goto label_1e4b9c;
            case 0x1E4BA0u: goto label_1e4ba0;
            case 0x1E4BA4u: goto label_1e4ba4;
            case 0x1E4BA8u: goto label_1e4ba8;
            case 0x1E4BACu: goto label_1e4bac;
            case 0x1E4BB0u: goto label_1e4bb0;
            case 0x1E4BB4u: goto label_1e4bb4;
            case 0x1E4BB8u: goto label_1e4bb8;
            case 0x1E4BBCu: goto label_1e4bbc;
            case 0x1E4BC0u: goto label_1e4bc0;
            case 0x1E4BC4u: goto label_1e4bc4;
            case 0x1E4BC8u: goto label_1e4bc8;
            case 0x1E4BCCu: goto label_1e4bcc;
            case 0x1E4BD0u: goto label_1e4bd0;
            case 0x1E4BD4u: goto label_1e4bd4;
            case 0x1E4BD8u: goto label_1e4bd8;
            case 0x1E4BDCu: goto label_1e4bdc;
            case 0x1E4BE0u: goto label_1e4be0;
            case 0x1E4BE4u: goto label_1e4be4;
            case 0x1E4BE8u: goto label_1e4be8;
            case 0x1E4BECu: goto label_1e4bec;
            case 0x1E4BF0u: goto label_1e4bf0;
            case 0x1E4BF4u: goto label_1e4bf4;
            case 0x1E4BF8u: goto label_1e4bf8;
            case 0x1E4BFCu: goto label_1e4bfc;
            case 0x1E4C00u: goto label_1e4c00;
            case 0x1E4C04u: goto label_1e4c04;
            case 0x1E4C08u: goto label_1e4c08;
            case 0x1E4C0Cu: goto label_1e4c0c;
            case 0x1E4C10u: goto label_1e4c10;
            case 0x1E4C14u: goto label_1e4c14;
            case 0x1E4C18u: goto label_1e4c18;
            case 0x1E4C1Cu: goto label_1e4c1c;
            case 0x1E4C20u: goto label_1e4c20;
            case 0x1E4C24u: goto label_1e4c24;
            case 0x1E4C28u: goto label_1e4c28;
            case 0x1E4C2Cu: goto label_1e4c2c;
            case 0x1E4C30u: goto label_1e4c30;
            case 0x1E4C34u: goto label_1e4c34;
            case 0x1E4C38u: goto label_1e4c38;
            case 0x1E4C3Cu: goto label_1e4c3c;
            case 0x1E4C40u: goto label_1e4c40;
            case 0x1E4C44u: goto label_1e4c44;
            case 0x1E4C48u: goto label_1e4c48;
            case 0x1E4C4Cu: goto label_1e4c4c;
            case 0x1E4C50u: goto label_1e4c50;
            case 0x1E4C54u: goto label_1e4c54;
            case 0x1E4C58u: goto label_1e4c58;
            case 0x1E4C5Cu: goto label_1e4c5c;
            case 0x1E4C60u: goto label_1e4c60;
            case 0x1E4C64u: goto label_1e4c64;
            case 0x1E4C68u: goto label_1e4c68;
            case 0x1E4C6Cu: goto label_1e4c6c;
            case 0x1E4C70u: goto label_1e4c70;
            case 0x1E4C74u: goto label_1e4c74;
            case 0x1E4C78u: goto label_1e4c78;
            case 0x1E4C7Cu: goto label_1e4c7c;
            case 0x1E4C80u: goto label_1e4c80;
            case 0x1E4C84u: goto label_1e4c84;
            case 0x1E4C88u: goto label_1e4c88;
            case 0x1E4C8Cu: goto label_1e4c8c;
            case 0x1E4C90u: goto label_1e4c90;
            case 0x1E4C94u: goto label_1e4c94;
            case 0x1E4C98u: goto label_1e4c98;
            case 0x1E4C9Cu: goto label_1e4c9c;
            case 0x1E4CA0u: goto label_1e4ca0;
            case 0x1E4CA4u: goto label_1e4ca4;
            case 0x1E4CA8u: goto label_1e4ca8;
            case 0x1E4CACu: goto label_1e4cac;
            case 0x1E4CB0u: goto label_1e4cb0;
            case 0x1E4CB4u: goto label_1e4cb4;
            case 0x1E4CB8u: goto label_1e4cb8;
            case 0x1E4CBCu: goto label_1e4cbc;
            case 0x1E4CC0u: goto label_1e4cc0;
            case 0x1E4CC4u: goto label_1e4cc4;
            case 0x1E4CC8u: goto label_1e4cc8;
            case 0x1E4CCCu: goto label_1e4ccc;
            case 0x1E4CD0u: goto label_1e4cd0;
            case 0x1E4CD4u: goto label_1e4cd4;
            case 0x1E4CD8u: goto label_1e4cd8;
            case 0x1E4CDCu: goto label_1e4cdc;
            case 0x1E4CE0u: goto label_1e4ce0;
            case 0x1E4CE4u: goto label_1e4ce4;
            case 0x1E4CE8u: goto label_1e4ce8;
            case 0x1E4CECu: goto label_1e4cec;
            case 0x1E4CF0u: goto label_1e4cf0;
            case 0x1E4CF4u: goto label_1e4cf4;
            case 0x1E4CF8u: goto label_1e4cf8;
            case 0x1E4CFCu: goto label_1e4cfc;
            case 0x1E4D00u: goto label_1e4d00;
            case 0x1E4D04u: goto label_1e4d04;
            case 0x1E4D08u: goto label_1e4d08;
            case 0x1E4D0Cu: goto label_1e4d0c;
            case 0x1E4D10u: goto label_1e4d10;
            case 0x1E4D14u: goto label_1e4d14;
            case 0x1E4D18u: goto label_1e4d18;
            case 0x1E4D1Cu: goto label_1e4d1c;
            case 0x1E4D20u: goto label_1e4d20;
            case 0x1E4D24u: goto label_1e4d24;
            case 0x1E4D28u: goto label_1e4d28;
            case 0x1E4D2Cu: goto label_1e4d2c;
            case 0x1E4D30u: goto label_1e4d30;
            case 0x1E4D34u: goto label_1e4d34;
            case 0x1E4D38u: goto label_1e4d38;
            case 0x1E4D3Cu: goto label_1e4d3c;
            case 0x1E4D40u: goto label_1e4d40;
            case 0x1E4D44u: goto label_1e4d44;
            case 0x1E4D48u: goto label_1e4d48;
            case 0x1E4D4Cu: goto label_1e4d4c;
            case 0x1E4D50u: goto label_1e4d50;
            case 0x1E4D54u: goto label_1e4d54;
            case 0x1E4D58u: goto label_1e4d58;
            case 0x1E4D5Cu: goto label_1e4d5c;
            case 0x1E4D60u: goto label_1e4d60;
            case 0x1E4D64u: goto label_1e4d64;
            case 0x1E4D68u: goto label_1e4d68;
            case 0x1E4D6Cu: goto label_1e4d6c;
            case 0x1E4D70u: goto label_1e4d70;
            case 0x1E4D74u: goto label_1e4d74;
            case 0x1E4D78u: goto label_1e4d78;
            case 0x1E4D7Cu: goto label_1e4d7c;
            case 0x1E4D80u: goto label_1e4d80;
            case 0x1E4D84u: goto label_1e4d84;
            case 0x1E4D88u: goto label_1e4d88;
            case 0x1E4D8Cu: goto label_1e4d8c;
            case 0x1E4D90u: goto label_1e4d90;
            case 0x1E4D94u: goto label_1e4d94;
            case 0x1E4D98u: goto label_1e4d98;
            case 0x1E4D9Cu: goto label_1e4d9c;
            case 0x1E4DA0u: goto label_1e4da0;
            case 0x1E4DA4u: goto label_1e4da4;
            case 0x1E4DA8u: goto label_1e4da8;
            case 0x1E4DACu: goto label_1e4dac;
            case 0x1E4DB0u: goto label_1e4db0;
            case 0x1E4DB4u: goto label_1e4db4;
            case 0x1E4DB8u: goto label_1e4db8;
            case 0x1E4DBCu: goto label_1e4dbc;
            case 0x1E4DC0u: goto label_1e4dc0;
            case 0x1E4DC4u: goto label_1e4dc4;
            case 0x1E4DC8u: goto label_1e4dc8;
            case 0x1E4DCCu: goto label_1e4dcc;
            case 0x1E4DD0u: goto label_1e4dd0;
            case 0x1E4DD4u: goto label_1e4dd4;
            case 0x1E4DD8u: goto label_1e4dd8;
            case 0x1E4DDCu: goto label_1e4ddc;
            case 0x1E4DE0u: goto label_1e4de0;
            case 0x1E4DE4u: goto label_1e4de4;
            case 0x1E4DE8u: goto label_1e4de8;
            case 0x1E4DECu: goto label_1e4dec;
            case 0x1E4DF0u: goto label_1e4df0;
            case 0x1E4DF4u: goto label_1e4df4;
            case 0x1E4DF8u: goto label_1e4df8;
            case 0x1E4DFCu: goto label_1e4dfc;
            case 0x1E4E00u: goto label_1e4e00;
            case 0x1E4E04u: goto label_1e4e04;
            case 0x1E4E08u: goto label_1e4e08;
            case 0x1E4E0Cu: goto label_1e4e0c;
            case 0x1E4E10u: goto label_1e4e10;
            case 0x1E4E14u: goto label_1e4e14;
            case 0x1E4E18u: goto label_1e4e18;
            case 0x1E4E1Cu: goto label_1e4e1c;
            case 0x1E4E20u: goto label_1e4e20;
            case 0x1E4E24u: goto label_1e4e24;
            case 0x1E4E28u: goto label_1e4e28;
            case 0x1E4E2Cu: goto label_1e4e2c;
            case 0x1E4E30u: goto label_1e4e30;
            case 0x1E4E34u: goto label_1e4e34;
            case 0x1E4E38u: goto label_1e4e38;
            case 0x1E4E3Cu: goto label_1e4e3c;
            case 0x1E4E40u: goto label_1e4e40;
            case 0x1E4E44u: goto label_1e4e44;
            case 0x1E4E48u: goto label_1e4e48;
            case 0x1E4E4Cu: goto label_1e4e4c;
            case 0x1E4E50u: goto label_1e4e50;
            case 0x1E4E54u: goto label_1e4e54;
            case 0x1E4E58u: goto label_1e4e58;
            case 0x1E4E5Cu: goto label_1e4e5c;
            case 0x1E4E60u: goto label_1e4e60;
            case 0x1E4E64u: goto label_1e4e64;
            case 0x1E4E68u: goto label_1e4e68;
            case 0x1E4E6Cu: goto label_1e4e6c;
            case 0x1E4E70u: goto label_1e4e70;
            case 0x1E4E74u: goto label_1e4e74;
            case 0x1E4E78u: goto label_1e4e78;
            case 0x1E4E7Cu: goto label_1e4e7c;
            case 0x1E4E80u: goto label_1e4e80;
            case 0x1E4E84u: goto label_1e4e84;
            case 0x1E4E88u: goto label_1e4e88;
            case 0x1E4E8Cu: goto label_1e4e8c;
            case 0x1E4E90u: goto label_1e4e90;
            case 0x1E4E94u: goto label_1e4e94;
            case 0x1E4E98u: goto label_1e4e98;
            case 0x1E4E9Cu: goto label_1e4e9c;
            case 0x1E4EA0u: goto label_1e4ea0;
            case 0x1E4EA4u: goto label_1e4ea4;
            case 0x1E4EA8u: goto label_1e4ea8;
            case 0x1E4EACu: goto label_1e4eac;
            case 0x1E4EB0u: goto label_1e4eb0;
            case 0x1E4EB4u: goto label_1e4eb4;
            case 0x1E4EB8u: goto label_1e4eb8;
            case 0x1E4EBCu: goto label_1e4ebc;
            case 0x1E4EC0u: goto label_1e4ec0;
            case 0x1E4EC4u: goto label_1e4ec4;
            case 0x1E4EC8u: goto label_1e4ec8;
            case 0x1E4ECCu: goto label_1e4ecc;
            case 0x1E4ED0u: goto label_1e4ed0;
            case 0x1E4ED4u: goto label_1e4ed4;
            case 0x1E4ED8u: goto label_1e4ed8;
            case 0x1E4EDCu: goto label_1e4edc;
            case 0x1E4EE0u: goto label_1e4ee0;
            case 0x1E4EE4u: goto label_1e4ee4;
            case 0x1E4EE8u: goto label_1e4ee8;
            case 0x1E4EECu: goto label_1e4eec;
            case 0x1E4EF0u: goto label_1e4ef0;
            case 0x1E4EF4u: goto label_1e4ef4;
            case 0x1E4EF8u: goto label_1e4ef8;
            case 0x1E4EFCu: goto label_1e4efc;
            case 0x1E4F00u: goto label_1e4f00;
            case 0x1E4F04u: goto label_1e4f04;
            case 0x1E4F08u: goto label_1e4f08;
            case 0x1E4F0Cu: goto label_1e4f0c;
            case 0x1E4F10u: goto label_1e4f10;
            case 0x1E4F14u: goto label_1e4f14;
            case 0x1E4F18u: goto label_1e4f18;
            case 0x1E4F1Cu: goto label_1e4f1c;
            case 0x1E4F20u: goto label_1e4f20;
            case 0x1E4F24u: goto label_1e4f24;
            case 0x1E4F28u: goto label_1e4f28;
            case 0x1E4F2Cu: goto label_1e4f2c;
            case 0x1E4F30u: goto label_1e4f30;
            case 0x1E4F34u: goto label_1e4f34;
            case 0x1E4F38u: goto label_1e4f38;
            case 0x1E4F3Cu: goto label_1e4f3c;
            case 0x1E4F40u: goto label_1e4f40;
            case 0x1E4F44u: goto label_1e4f44;
            case 0x1E4F48u: goto label_1e4f48;
            case 0x1E4F4Cu: goto label_1e4f4c;
            case 0x1E4F50u: goto label_1e4f50;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e4f4c:
    ctx->pc = 0x1E4F54u;
}
