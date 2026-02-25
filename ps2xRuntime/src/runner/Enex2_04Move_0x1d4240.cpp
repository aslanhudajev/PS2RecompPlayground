#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex2_04Move
// Address: 0x1d4240 - 0x1d56c4
void Enex2_04Move_0x1d4240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex2_04Move_0x1d4240");
#endif

    ctx->pc = 0x1d4240u;

label_1d4240:
    // 0x1d4240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d4240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d4244:
    // 0x1d4244: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d4244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d4248:
    // 0x1d4248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d424c:
    // 0x1d424c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d424cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d4250:
    // 0x1d4250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d4254:
    // 0x1d4254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4258:
    // 0x1d4258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d425c:
    // 0x1d425c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4260:
    // 0x1d4260: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1d4260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d4264:
    // 0x1d4264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4268:
    // 0x1d4268: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1d4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d426c:
    // 0x1d426c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d426cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d4270:
    // 0x1d4270: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1d4270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1d4274:
    // 0x1d4274: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4278:
    // 0x1d4278: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1d4278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d427c:
    // 0x1d427c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d427cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4280:
    // 0x1d4280: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d4280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d4284:
    // 0x1d4284: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1d4284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1d4288:
    // 0x1d4288: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d428c:
    // 0x1d428c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1d428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d4290:
    // 0x1d4290: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4294:
    // 0x1d4294: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d4294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d4298:
    // 0x1d4298: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1d4298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1d429c:
    // 0x1d429c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d42a0:
    // 0x1d42a0: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1d42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d42a4:
    // 0x1d42a4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1d42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d42a8:
    // 0x1d42a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d42a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d42ac:
    // 0x1d42ac: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1d42acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d42b0:
    // 0x1d42b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d42b4:
    // 0x1d42b4: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1d42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d42b8:
    // 0x1d42b8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d42b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d42bc:
    // 0x1d42bc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d42bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d42c0:
    // 0x1d42c0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1d42c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1d42c4:
    // 0x1d42c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d42c8:
    // 0x1d42c8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d42c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d42cc:
    // 0x1d42cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d42ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d42d0:
    // 0x1d42d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d42d4:
    if (ctx->pc == 0x1D42D4u) {
        ctx->pc = 0x1D42D4u;
            // 0x1d42d4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1D42D8u;
        goto label_1d42d8;
    }
    ctx->pc = 0x1D42D0u;
    {
        const bool branch_taken_0x1d42d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D42D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D42D0u;
            // 0x1d42d4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d0) {
            ctx->pc = 0x1D42F0u;
            goto label_1d42f0;
        }
    }
    ctx->pc = 0x1D42D8u;
label_1d42d8:
    // 0x1d42d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d42dc:
    // 0x1d42dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d42dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d42e0:
    // 0x1d42e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d42e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d42e4:
    // 0x1d42e4: 0x0  nop
    ctx->pc = 0x1d42e4u;
    // NOP
label_1d42e8:
    // 0x1d42e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d42e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d42ec:
    // 0x1d42ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d42ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1d42f0:
    // 0x1d42f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d42f4:
    // 0x1d42f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d42f8:
    // 0x1d42f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d42f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d42fc:
    // 0x1d42fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d42fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4300:
    // 0x1d4300: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1d4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4304:
    // 0x1d4304: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4304u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4308:
    // 0x1d4308: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d430c:
    if (ctx->pc == 0x1D430Cu) {
        ctx->pc = 0x1D430Cu;
            // 0x1d430c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1D4310u;
        goto label_1d4310;
    }
    ctx->pc = 0x1D4308u;
    {
        const bool branch_taken_0x1d4308 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4308u;
            // 0x1d430c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4308) {
            ctx->pc = 0x1D4328u;
            goto label_1d4328;
        }
    }
    ctx->pc = 0x1D4310u;
label_1d4310:
    // 0x1d4310: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d4310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d4314:
    // 0x1d4314: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d4314u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d4318:
    // 0x1d4318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d431c:
    // 0x1d431c: 0x0  nop
    ctx->pc = 0x1d431cu;
    // NOP
label_1d4320:
    // 0x1d4320: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4324:
    // 0x1d4324: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d4328:
    // 0x1d4328: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d4328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d432c:
    // 0x1d432c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d432cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d4330:
    // 0x1d4330: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d4330u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d4334:
    // 0x1d4334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4338:
    // 0x1d4338: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d433c:
    // 0x1d433c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d433cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4340:
    // 0x1d4340: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d4344:
    if (ctx->pc == 0x1D4344u) {
        ctx->pc = 0x1D4344u;
            // 0x1d4344: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1D4348u;
        goto label_1d4348;
    }
    ctx->pc = 0x1D4340u;
    {
        const bool branch_taken_0x1d4340 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4340u;
            // 0x1d4344: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4340) {
            ctx->pc = 0x1D4360u;
            goto label_1d4360;
        }
    }
    ctx->pc = 0x1D4348u;
label_1d4348:
    // 0x1d4348: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d434c:
    // 0x1d434c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d434cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d4350:
    // 0x1d4350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4354:
    // 0x1d4354: 0x0  nop
    ctx->pc = 0x1d4354u;
    // NOP
label_1d4358:
    // 0x1d4358: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d435c:
    // 0x1d435c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d435cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d4360:
    // 0x1d4360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d4360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4364:
    // 0x1d4364: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d4368:
    // 0x1d4368: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d4368u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d436c:
    // 0x1d436c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d436cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4370:
    // 0x1d4370: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d4370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4374:
    // 0x1d4374: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4378:
    // 0x1d4378: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d437c:
    if (ctx->pc == 0x1D437Cu) {
        ctx->pc = 0x1D437Cu;
            // 0x1d437c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1D4380u;
        goto label_1d4380;
    }
    ctx->pc = 0x1D4378u;
    {
        const bool branch_taken_0x1d4378 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4378u;
            // 0x1d437c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4378) {
            ctx->pc = 0x1D4398u;
            goto label_1d4398;
        }
    }
    ctx->pc = 0x1D4380u;
label_1d4380:
    // 0x1d4380: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d4380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d4384:
    // 0x1d4384: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d4384u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d4388:
    // 0x1d4388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d438c:
    // 0x1d438c: 0x0  nop
    ctx->pc = 0x1d438cu;
    // NOP
label_1d4390:
    // 0x1d4390: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4394:
    // 0x1d4394: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d4398:
    // 0x1d4398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d439c:
    // 0x1d439c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d439cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1d43a0:
    // 0x1d43a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d43a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d43a4:
    // 0x1d43a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d43a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d43a8:
    // 0x1d43a8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1d43a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d43ac:
    // 0x1d43ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d43acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d43b0:
    // 0x1d43b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d43b4:
    if (ctx->pc == 0x1D43B4u) {
        ctx->pc = 0x1D43B4u;
            // 0x1d43b4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1D43B8u;
        goto label_1d43b8;
    }
    ctx->pc = 0x1D43B0u;
    {
        const bool branch_taken_0x1d43b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D43B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43B0u;
            // 0x1d43b4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43b0) {
            ctx->pc = 0x1D43D0u;
            goto label_1d43d0;
        }
    }
    ctx->pc = 0x1D43B8u;
label_1d43b8:
    // 0x1d43b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d43bc:
    // 0x1d43bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d43bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d43c0:
    // 0x1d43c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d43c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d43c4:
    // 0x1d43c4: 0x0  nop
    ctx->pc = 0x1d43c4u;
    // NOP
label_1d43c8:
    // 0x1d43c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d43c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d43cc:
    // 0x1d43cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d43ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d43d0:
    // 0x1d43d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d43d4:
    // 0x1d43d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1d43d8:
    // 0x1d43d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d43d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d43dc:
    // 0x1d43dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d43dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d43e0:
    // 0x1d43e0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1d43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d43e4:
    // 0x1d43e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d43e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d43e8:
    // 0x1d43e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d43ec:
    if (ctx->pc == 0x1D43ECu) {
        ctx->pc = 0x1D43ECu;
            // 0x1d43ec: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1D43F0u;
        goto label_1d43f0;
    }
    ctx->pc = 0x1D43E8u;
    {
        const bool branch_taken_0x1d43e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D43E8u;
            // 0x1d43ec: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43e8) {
            ctx->pc = 0x1D4408u;
            goto label_1d4408;
        }
    }
    ctx->pc = 0x1D43F0u;
label_1d43f0:
    // 0x1d43f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1d43f4:
    // 0x1d43f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d43f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1d43f8:
    // 0x1d43f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d43f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d43fc:
    // 0x1d43fc: 0x0  nop
    ctx->pc = 0x1d43fcu;
    // NOP
label_1d4400:
    // 0x1d4400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4404:
    // 0x1d4404: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d4408:
    // 0x1d4408: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d440c:
    // 0x1d440c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1d440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1d4410:
    // 0x1d4410: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d4414:
    // 0x1d4414: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d4414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d4418:
    // 0x1d4418: 0xc0755b4  jal         func_1D56D0
label_1d441c:
    if (ctx->pc == 0x1D441Cu) {
        ctx->pc = 0x1D441Cu;
            // 0x1d441c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1D4420u;
        goto label_1d4420;
    }
    ctx->pc = 0x1D4418u;
    SET_GPR_U32(ctx, 31, 0x1D4420u);
    ctx->pc = 0x1D441Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4418u;
            // 0x1d441c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D56D0u;
    if (runtime->hasFunction(0x1D56D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D56D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4420u; }
        if (ctx->pc != 0x1D4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1d56d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4420u; }
        if (ctx->pc != 0x1D4420u) { return; }
    }
    ctx->pc = 0x1D4420u;
label_1d4420:
    // 0x1d4420: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d4420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d4424:
    // 0x1d4424: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d4424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1d4428:
    // 0x1d4428: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d4428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d442c:
    // 0x1d442c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d442cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1d4430:
    // 0x1d4430: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1d4430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d4434:
    // 0x1d4434: 0x2cc1000e  sltiu       $at, $a2, 0xE
    ctx->pc = 0x1d4434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1d4438:
    // 0x1d4438: 0x102003fb  beqz        $at, . + 4 + (0x3FB << 2)
label_1d443c:
    if (ctx->pc == 0x1D443Cu) {
        ctx->pc = 0x1D443Cu;
            // 0x1d443c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1D4440u;
        goto label_1d4440;
    }
    ctx->pc = 0x1D4438u;
    {
        const bool branch_taken_0x1d4438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4438u;
            // 0x1d443c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4438) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4440u;
label_1d4440:
    // 0x1d4440: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1d4440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1d4444:
    // 0x1d4444: 0x24632d10  addiu       $v1, $v1, 0x2D10
    ctx->pc = 0x1d4444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11536));
label_1d4448:
    // 0x1d4448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d444c:
    // 0x1d444c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4450:
    // 0x1d4450: 0x400008  jr          $v0
label_1d4454:
    if (ctx->pc == 0x1D4454u) {
        ctx->pc = 0x1D4458u;
        goto label_1d4458;
    }
    ctx->pc = 0x1D4450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4458u: goto label_1d4458;
            case 0x1D4568u: goto label_1d4568;
            case 0x1D48F8u: goto label_1d48f8;
            case 0x1D4D40u: goto label_1d4d40;
            case 0x1D4E78u: goto label_1d4e78;
            case 0x1D4F98u: goto label_1d4f98;
            case 0x1D5310u: goto label_1d5310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4458u;
label_1d4458:
    // 0x1d4458: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_1d445c:
    if (ctx->pc == 0x1D445Cu) {
        ctx->pc = 0x1D4460u;
        goto label_1d4460;
    }
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D4480u;
            goto label_1d4480;
        }
    }
    ctx->pc = 0x1D4460u;
label_1d4460:
    // 0x1d4460: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4464:
    // 0x1d4464: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d4464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d4468:
    // 0x1d4468: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4468u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d446c:
    // 0x1d446c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d446cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4470:
    // 0x1d4470: 0x0  nop
    ctx->pc = 0x1d4470u;
    // NOP
label_1d4474:
    // 0x1d4474: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4478:
    // 0x1d4478: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d447c:
    if (ctx->pc == 0x1D447Cu) {
        ctx->pc = 0x1D447Cu;
            // 0x1d447c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x1D4480u;
        goto label_1d4480;
    }
    ctx->pc = 0x1D4478u;
    {
        const bool branch_taken_0x1d4478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4478u;
            // 0x1d447c: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4478) {
            ctx->pc = 0x1D44A0u;
            goto label_1d44a0;
        }
    }
    ctx->pc = 0x1D4480u;
label_1d4480:
    // 0x1d4480: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d4484:
    // 0x1d4484: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4488:
    // 0x1d4488: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4488u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d448c:
    // 0x1d448c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d448cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4490:
    // 0x1d4490: 0x0  nop
    ctx->pc = 0x1d4490u;
    // NOP
label_1d4494:
    // 0x1d4494: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4498:
    // 0x1d4498: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d4498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d449c:
    // 0x1d449c: 0x0  nop
    ctx->pc = 0x1d449cu;
    // NOP
label_1d44a0:
    // 0x1d44a0: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x1d44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
label_1d44a4:
    // 0x1d44a4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d44a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d44a8:
    // 0x1d44a8: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x1d44a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
label_1d44ac:
    // 0x1d44ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d44acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d44b0:
    // 0x1d44b0: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1d44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1d44b4:
    // 0x1d44b4: 0x344347ae  ori         $v1, $v0, 0x47AE
    ctx->pc = 0x1d44b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1d44b8:
    // 0x1d44b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d44b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d44bc:
    // 0x1d44bc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1d44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d44c0:
    // 0x1d44c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d44c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d44c4:
    // 0x1d44c4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d44c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d44c8:
    // 0x1d44c8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d44cc:
    // 0x1d44cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d44ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d44d0:
    // 0x1d44d0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d44d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d44d4:
    // 0x1d44d4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d44d8:
    // 0x1d44d8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1d44dc:
    if (ctx->pc == 0x1D44DCu) {
        ctx->pc = 0x1D44DCu;
            // 0x1d44dc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1D44E0u;
        goto label_1d44e0;
    }
    ctx->pc = 0x1D44D8u;
    {
        const bool branch_taken_0x1d44d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D44DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D44D8u;
            // 0x1d44dc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44d8) {
            ctx->pc = 0x1D4540u;
            goto label_1d4540;
        }
    }
    ctx->pc = 0x1D44E0u;
label_1d44e0:
    // 0x1d44e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1d44e4:
    if (ctx->pc == 0x1D44E4u) {
        ctx->pc = 0x1D44E8u;
        goto label_1d44e8;
    }
    ctx->pc = 0x1D44E0u;
    {
        const bool branch_taken_0x1d44e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d44e0) {
            ctx->pc = 0x1D4518u;
            goto label_1d4518;
        }
    }
    ctx->pc = 0x1D44E8u;
label_1d44e8:
    // 0x1d44e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d44ec:
    // 0x1d44ec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1d44f0:
    if (ctx->pc == 0x1D44F0u) {
        ctx->pc = 0x1D44F4u;
        goto label_1d44f4;
    }
    ctx->pc = 0x1D44ECu;
    {
        const bool branch_taken_0x1d44ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d44ec) {
            ctx->pc = 0x1D4500u;
            goto label_1d4500;
        }
    }
    ctx->pc = 0x1D44F4u;
label_1d44f4:
    // 0x1d44f4: 0x100003cc  b           . + 4 + (0x3CC << 2)
label_1d44f8:
    if (ctx->pc == 0x1D44F8u) {
        ctx->pc = 0x1D44FCu;
        goto label_1d44fc;
    }
    ctx->pc = 0x1D44F4u;
    {
        const bool branch_taken_0x1d44f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44f4) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D44FCu;
label_1d44fc:
    // 0x1d44fc: 0x0  nop
    ctx->pc = 0x1d44fcu;
    // NOP
label_1d4500:
    // 0x1d4500: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4504:
    // 0x1d4504: 0xc06560c  jal         func_195830
label_1d4508:
    if (ctx->pc == 0x1D4508u) {
        ctx->pc = 0x1D4508u;
            // 0x1d4508: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D450Cu;
        goto label_1d450c;
    }
    ctx->pc = 0x1D4504u;
    SET_GPR_U32(ctx, 31, 0x1D450Cu);
    ctx->pc = 0x1D4508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4504u;
            // 0x1d4508: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D450Cu; }
        if (ctx->pc != 0x1D450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D450Cu; }
        if (ctx->pc != 0x1D450Cu) { return; }
    }
    ctx->pc = 0x1D450Cu;
label_1d450c:
    // 0x1d450c: 0x100003c6  b           . + 4 + (0x3C6 << 2)
label_1d4510:
    if (ctx->pc == 0x1D4510u) {
        ctx->pc = 0x1D4514u;
        goto label_1d4514;
    }
    ctx->pc = 0x1D450Cu;
    {
        const bool branch_taken_0x1d450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d450c) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4514u;
label_1d4514:
    // 0x1d4514: 0x0  nop
    ctx->pc = 0x1d4514u;
    // NOP
label_1d4518:
    // 0x1d4518: 0xc065d00  jal         func_197400
label_1d451c:
    if (ctx->pc == 0x1D451Cu) {
        ctx->pc = 0x1D4520u;
        goto label_1d4520;
    }
    ctx->pc = 0x1D4518u;
    SET_GPR_U32(ctx, 31, 0x1D4520u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4520u; }
        if (ctx->pc != 0x1D4520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4520u; }
        if (ctx->pc != 0x1D4520u) { return; }
    }
    ctx->pc = 0x1D4520u;
label_1d4520:
    // 0x1d4520: 0x184003c1  blez        $v0, . + 4 + (0x3C1 << 2)
label_1d4524:
    if (ctx->pc == 0x1D4524u) {
        ctx->pc = 0x1D4528u;
        goto label_1d4528;
    }
    ctx->pc = 0x1D4520u;
    {
        const bool branch_taken_0x1d4520 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4520) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4528u;
label_1d4528:
    // 0x1d4528: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d452c:
    // 0x1d452c: 0xc06560c  jal         func_195830
label_1d4530:
    if (ctx->pc == 0x1D4530u) {
        ctx->pc = 0x1D4530u;
            // 0x1d4530: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4534u;
        goto label_1d4534;
    }
    ctx->pc = 0x1D452Cu;
    SET_GPR_U32(ctx, 31, 0x1D4534u);
    ctx->pc = 0x1D4530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D452Cu;
            // 0x1d4530: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4534u; }
        if (ctx->pc != 0x1D4534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4534u; }
        if (ctx->pc != 0x1D4534u) { return; }
    }
    ctx->pc = 0x1D4534u;
label_1d4534:
    // 0x1d4534: 0x100003bc  b           . + 4 + (0x3BC << 2)
label_1d4538:
    if (ctx->pc == 0x1D4538u) {
        ctx->pc = 0x1D453Cu;
        goto label_1d453c;
    }
    ctx->pc = 0x1D4534u;
    {
        const bool branch_taken_0x1d4534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4534) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D453Cu;
label_1d453c:
    // 0x1d453c: 0x0  nop
    ctx->pc = 0x1d453cu;
    // NOP
label_1d4540:
    // 0x1d4540: 0xc065d00  jal         func_197400
label_1d4544:
    if (ctx->pc == 0x1D4544u) {
        ctx->pc = 0x1D4548u;
        goto label_1d4548;
    }
    ctx->pc = 0x1D4540u;
    SET_GPR_U32(ctx, 31, 0x1D4548u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4548u; }
        if (ctx->pc != 0x1D4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4548u; }
        if (ctx->pc != 0x1D4548u) { return; }
    }
    ctx->pc = 0x1D4548u;
label_1d4548:
    // 0x1d4548: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1d4548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d454c:
    // 0x1d454c: 0x142003b6  bnez        $at, . + 4 + (0x3B6 << 2)
label_1d4550:
    if (ctx->pc == 0x1D4550u) {
        ctx->pc = 0x1D4554u;
        goto label_1d4554;
    }
    ctx->pc = 0x1D454Cu;
    {
        const bool branch_taken_0x1d454c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d454c) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4554u;
label_1d4554:
    // 0x1d4554: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4558:
    // 0x1d4558: 0xc06560c  jal         func_195830
label_1d455c:
    if (ctx->pc == 0x1D455Cu) {
        ctx->pc = 0x1D455Cu;
            // 0x1d455c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4560u;
        goto label_1d4560;
    }
    ctx->pc = 0x1D4558u;
    SET_GPR_U32(ctx, 31, 0x1D4560u);
    ctx->pc = 0x1D455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4558u;
            // 0x1d455c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4560u; }
        if (ctx->pc != 0x1D4560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4560u; }
        if (ctx->pc != 0x1D4560u) { return; }
    }
    ctx->pc = 0x1D4560u;
label_1d4560:
    // 0x1d4560: 0x100003b1  b           . + 4 + (0x3B1 << 2)
label_1d4564:
    if (ctx->pc == 0x1D4564u) {
        ctx->pc = 0x1D4568u;
        goto label_1d4568;
    }
    ctx->pc = 0x1D4560u;
    {
        const bool branch_taken_0x1d4560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4560) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4568u;
label_1d4568:
    // 0x1d4568: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d4568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d456c:
    // 0x1d456c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d4570:
    // 0x1d4570: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d4574:
    // 0x1d4574: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d4574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d4578:
    // 0x1d4578: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d457c:
    // 0x1d457c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d457cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d4580:
    // 0x1d4580: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d4580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d4584:
    // 0x1d4584: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d4588:
    // 0x1d4588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d458c:
    // 0x1d458c: 0x0  nop
    ctx->pc = 0x1d458cu;
    // NOP
label_1d4590:
    // 0x1d4590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d4594:
    // 0x1d4594: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d4594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d4598:
    // 0x1d4598: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d4598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d459c:
    // 0x1d459c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d459cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d45a0:
    // 0x1d45a0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d45a4:
    // 0x1d45a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d45a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d45a8:
    // 0x1d45a8: 0x0  nop
    ctx->pc = 0x1d45a8u;
    // NOP
label_1d45ac:
    // 0x1d45ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d45acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d45b0:
    // 0x1d45b0: 0xc04b6ee  jal         func_12DBB8
label_1d45b4:
    if (ctx->pc == 0x1D45B4u) {
        ctx->pc = 0x1D45B4u;
            // 0x1d45b4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D45B8u;
        goto label_1d45b8;
    }
    ctx->pc = 0x1D45B0u;
    SET_GPR_U32(ctx, 31, 0x1D45B8u);
    ctx->pc = 0x1D45B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45B0u;
            // 0x1d45b4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45B8u; }
        if (ctx->pc != 0x1D45B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D45B8u; }
        if (ctx->pc != 0x1D45B8u) { return; }
    }
    ctx->pc = 0x1D45B8u;
label_1d45b8:
    // 0x1d45b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d45bc:
    // 0x1d45bc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d45bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d45c0:
    // 0x1d45c0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d45c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d45c4:
    // 0x1d45c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d45c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d45c8:
    // 0x1d45c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d45c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d45cc:
    // 0x1d45cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1d45d0:
    if (ctx->pc == 0x1D45D0u) {
        ctx->pc = 0x1D45D0u;
            // 0x1d45d0: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1D45D4u;
        goto label_1d45d4;
    }
    ctx->pc = 0x1D45CCu;
    {
        const bool branch_taken_0x1d45cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D45D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45CCu;
            // 0x1d45d0: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45cc) {
            ctx->pc = 0x1D45E0u;
            goto label_1d45e0;
        }
    }
    ctx->pc = 0x1D45D4u;
label_1d45d4:
    // 0x1d45d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d45d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d45d8:
    // 0x1d45d8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d45d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d45dc:
    // 0x1d45dc: 0x0  nop
    ctx->pc = 0x1d45dcu;
    // NOP
label_1d45e0:
    // 0x1d45e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d45e4:
    // 0x1d45e4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d45e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d45e8:
    // 0x1d45e8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d45ec:
    // 0x1d45ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d45ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d45f0:
    // 0x1d45f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d45f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d45f4:
    // 0x1d45f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d45f8:
    if (ctx->pc == 0x1D45F8u) {
        ctx->pc = 0x1D45F8u;
            // 0x1d45f8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1D45FCu;
        goto label_1d45fc;
    }
    ctx->pc = 0x1D45F4u;
    {
        const bool branch_taken_0x1d45f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D45F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D45F4u;
            // 0x1d45f8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45f4) {
            ctx->pc = 0x1D4608u;
            goto label_1d4608;
        }
    }
    ctx->pc = 0x1D45FCu;
label_1d45fc:
    // 0x1d45fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d45fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4600:
    // 0x1d4600: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d4600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d4604:
    // 0x1d4604: 0x0  nop
    ctx->pc = 0x1d4604u;
    // NOP
label_1d4608:
    // 0x1d4608: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d460c:
    // 0x1d460c: 0x14c0003a  bnez        $a2, . + 4 + (0x3A << 2)
label_1d4610:
    if (ctx->pc == 0x1D4610u) {
        ctx->pc = 0x1D4614u;
        goto label_1d4614;
    }
    ctx->pc = 0x1D460Cu;
    {
        const bool branch_taken_0x1d460c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d460c) {
            ctx->pc = 0x1D46F8u;
            goto label_1d46f8;
        }
    }
    ctx->pc = 0x1D4614u;
label_1d4614:
    // 0x1d4614: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d4614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4618:
    // 0x1d4618: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1d4618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1d461c:
    // 0x1d461c: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1d461cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1d4620:
    // 0x1d4620: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d4620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d4624:
    // 0x1d4624: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1d4628:
    // 0x1d4628: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1d4628u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1d462c:
    // 0x1d462c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4630:
    // 0x1d4630: 0x0  nop
    ctx->pc = 0x1d4630u;
    // NOP
label_1d4634:
    // 0x1d4634: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d4634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d4638:
    // 0x1d4638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d463c:
    // 0x1d463c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d463cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d4640:
    // 0x1d4640: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d4640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4644:
    // 0x1d4644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d4644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d4648:
    // 0x1d4648: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d4648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d464c:
    // 0x1d464c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4650:
    // 0x1d4650: 0xc4600110  lwc1        $f0, 0x110($v1)
    ctx->pc = 0x1d4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4654:
    // 0x1d4654: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d4654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1d4658:
    // 0x1d4658: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x1d4658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_1d465c:
    // 0x1d465c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d4660:
    // 0x1d4660: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1d4664:
    if (ctx->pc == 0x1D4664u) {
        ctx->pc = 0x1D4668u;
        goto label_1d4668;
    }
    ctx->pc = 0x1D4660u;
    {
        const bool branch_taken_0x1d4660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4660) {
            ctx->pc = 0x1D46B0u;
            goto label_1d46b0;
        }
    }
    ctx->pc = 0x1D4668u;
label_1d4668:
    // 0x1d4668: 0xc040d72  jal         func_1035C8
label_1d466c:
    if (ctx->pc == 0x1D466Cu) {
        ctx->pc = 0x1D466Cu;
            // 0x1d466c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D4670u;
        goto label_1d4670;
    }
    ctx->pc = 0x1D4668u;
    SET_GPR_U32(ctx, 31, 0x1D4670u);
    ctx->pc = 0x1D466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4668u;
            // 0x1d466c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4670u; }
        if (ctx->pc != 0x1D4670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4670u; }
        if (ctx->pc != 0x1D4670u) { return; }
    }
    ctx->pc = 0x1D4670u;
label_1d4670:
    // 0x1d4670: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
label_1d4674:
    // 0x1d4674: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1d4674u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1d4678:
    // 0x1d4678: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1d4678u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1d467c:
    // 0x1d467c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d4680:
    // 0x1d4680: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d4680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d4684:
    // 0x1d4684: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1d4684u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1d4688:
    // 0x1d4688: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1d4688u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d468c:
    // 0x1d468c: 0xc040098  jal         func_100260
label_1d4690:
    if (ctx->pc == 0x1D4690u) {
        ctx->pc = 0x1D4690u;
            // 0x1d4690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4694u;
        goto label_1d4694;
    }
    ctx->pc = 0x1D468Cu;
    SET_GPR_U32(ctx, 31, 0x1D4694u);
    ctx->pc = 0x1D4690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D468Cu;
            // 0x1d4690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4694u; }
        if (ctx->pc != 0x1D4694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4694u; }
        if (ctx->pc != 0x1D4694u) { return; }
    }
    ctx->pc = 0x1D4694u;
label_1d4694:
    // 0x1d4694: 0x10400364  beqz        $v0, . + 4 + (0x364 << 2)
label_1d4698:
    if (ctx->pc == 0x1D4698u) {
        ctx->pc = 0x1D469Cu;
        goto label_1d469c;
    }
    ctx->pc = 0x1D4694u;
    {
        const bool branch_taken_0x1d4694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4694) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D469Cu;
label_1d469c:
    // 0x1d469c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d46a0:
    // 0x1d46a0: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d46a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d46a4:
    // 0x1d46a4: 0x10000360  b           . + 4 + (0x360 << 2)
label_1d46a8:
    if (ctx->pc == 0x1D46A8u) {
        ctx->pc = 0x1D46A8u;
            // 0x1d46a8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D46ACu;
        goto label_1d46ac;
    }
    ctx->pc = 0x1D46A4u;
    {
        const bool branch_taken_0x1d46a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46A4u;
            // 0x1d46a8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a4) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D46ACu;
label_1d46ac:
    // 0x1d46ac: 0x0  nop
    ctx->pc = 0x1d46acu;
    // NOP
label_1d46b0:
    // 0x1d46b0: 0xc040d72  jal         func_1035C8
label_1d46b4:
    if (ctx->pc == 0x1D46B4u) {
        ctx->pc = 0x1D46B4u;
            // 0x1d46b4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D46B8u;
        goto label_1d46b8;
    }
    ctx->pc = 0x1D46B0u;
    SET_GPR_U32(ctx, 31, 0x1D46B8u);
    ctx->pc = 0x1D46B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46B0u;
            // 0x1d46b4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46B8u; }
        if (ctx->pc != 0x1D46B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46B8u; }
        if (ctx->pc != 0x1D46B8u) { return; }
    }
    ctx->pc = 0x1D46B8u;
label_1d46b8:
    // 0x1d46b8: 0x3c04bfb9  lui         $a0, 0xBFB9
    ctx->pc = 0x1d46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49081 << 16));
label_1d46bc:
    // 0x1d46bc: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1d46bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
label_1d46c0:
    // 0x1d46c0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1d46c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
label_1d46c4:
    // 0x1d46c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1d46c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1d46c8:
    // 0x1d46c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d46c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d46cc:
    // 0x1d46cc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1d46ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
label_1d46d0:
    // 0x1d46d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d46d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1d46d4:
    // 0x1d46d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d46d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d46d8:
    // 0x1d46d8: 0xc040084  jal         func_100210
label_1d46dc:
    if (ctx->pc == 0x1D46DCu) {
        ctx->pc = 0x1D46DCu;
            // 0x1d46dc: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D46E0u;
        goto label_1d46e0;
    }
    ctx->pc = 0x1D46D8u;
    SET_GPR_U32(ctx, 31, 0x1D46E0u);
    ctx->pc = 0x1D46DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46D8u;
            // 0x1d46dc: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46E0u; }
        if (ctx->pc != 0x1D46E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46E0u; }
        if (ctx->pc != 0x1D46E0u) { return; }
    }
    ctx->pc = 0x1D46E0u;
label_1d46e0:
    // 0x1d46e0: 0x10400351  beqz        $v0, . + 4 + (0x351 << 2)
label_1d46e4:
    if (ctx->pc == 0x1D46E4u) {
        ctx->pc = 0x1D46E8u;
        goto label_1d46e8;
    }
    ctx->pc = 0x1D46E0u;
    {
        const bool branch_taken_0x1d46e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d46e0) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D46E8u;
label_1d46e8:
    // 0x1d46e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d46ec:
    // 0x1d46ec: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d46f0:
    // 0x1d46f0: 0x1000034d  b           . + 4 + (0x34D << 2)
label_1d46f4:
    if (ctx->pc == 0x1D46F4u) {
        ctx->pc = 0x1D46F4u;
            // 0x1d46f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D46F8u;
        goto label_1d46f8;
    }
    ctx->pc = 0x1D46F0u;
    {
        const bool branch_taken_0x1d46f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46F0u;
            // 0x1d46f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46f0) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D46F8u;
label_1d46f8:
    // 0x1d46f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d46fc:
    // 0x1d46fc: 0x14c2005c  bne         $a2, $v0, . + 4 + (0x5C << 2)
label_1d4700:
    if (ctx->pc == 0x1D4700u) {
        ctx->pc = 0x1D4704u;
        goto label_1d4704;
    }
    ctx->pc = 0x1D46FCu;
    {
        const bool branch_taken_0x1d46fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d46fc) {
            ctx->pc = 0x1D4870u;
            goto label_1d4870;
        }
    }
    ctx->pc = 0x1D4704u;
label_1d4704:
    // 0x1d4704: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d4708:
    // 0x1d4708: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
label_1d470c:
    // 0x1d470c: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1d470cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d4710:
    // 0x1d4710: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1d4710u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1d4714:
    // 0x1d4714: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d4714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d4718:
    // 0x1d4718: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d4718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d471c:
    // 0x1d471c: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1d471cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1d4720:
    // 0x1d4720: 0xc040d72  jal         func_1035C8
label_1d4724:
    if (ctx->pc == 0x1D4724u) {
        ctx->pc = 0x1D4724u;
            // 0x1d4724: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D4728u;
        goto label_1d4728;
    }
    ctx->pc = 0x1D4720u;
    SET_GPR_U32(ctx, 31, 0x1D4728u);
    ctx->pc = 0x1D4724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4720u;
            // 0x1d4724: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4728u; }
        if (ctx->pc != 0x1D4728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4728u; }
        if (ctx->pc != 0x1D4728u) { return; }
    }
    ctx->pc = 0x1D4728u;
label_1d4728:
    // 0x1d4728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d472c:
    // 0x1d472c: 0xc040880  jal         func_102200
label_1d4730:
    if (ctx->pc == 0x1D4730u) {
        ctx->pc = 0x1D4730u;
            // 0x1d4730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4734u;
        goto label_1d4734;
    }
    ctx->pc = 0x1D472Cu;
    SET_GPR_U32(ctx, 31, 0x1D4734u);
    ctx->pc = 0x1D4730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D472Cu;
            // 0x1d4730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4734u; }
        if (ctx->pc != 0x1D4734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4734u; }
        if (ctx->pc != 0x1D4734u) { return; }
    }
    ctx->pc = 0x1D4734u;
label_1d4734:
    // 0x1d4734: 0xc040a74  jal         func_1029D0
label_1d4738:
    if (ctx->pc == 0x1D4738u) {
        ctx->pc = 0x1D4738u;
            // 0x1d4738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D473Cu;
        goto label_1d473c;
    }
    ctx->pc = 0x1D4734u;
    SET_GPR_U32(ctx, 31, 0x1D473Cu);
    ctx->pc = 0x1D4738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4734u;
            // 0x1d4738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D473Cu; }
        if (ctx->pc != 0x1D473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D473Cu; }
        if (ctx->pc != 0x1D473Cu) { return; }
    }
    ctx->pc = 0x1D473Cu;
label_1d473c:
    // 0x1d473c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d4740:
    // 0x1d4740: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4744:
    // 0x1d4744: 0x0  nop
    ctx->pc = 0x1d4744u;
    // NOP
label_1d4748:
    // 0x1d4748: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d4748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d474c:
    // 0x1d474c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d4750:
    // 0x1d4750: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d4750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d4754:
    // 0x1d4754: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d4754u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4758:
    // 0x1d4758: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1d475c:
    if (ctx->pc == 0x1D475Cu) {
        ctx->pc = 0x1D475Cu;
            // 0x1d475c: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->pc = 0x1D4760u;
        goto label_1d4760;
    }
    ctx->pc = 0x1D4758u;
    {
        const bool branch_taken_0x1d4758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4758u;
            // 0x1d475c: 0x3c033f50  lui         $v1, 0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16208 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4758) {
            ctx->pc = 0x1D47A0u;
            goto label_1d47a0;
        }
    }
    ctx->pc = 0x1D4760u;
label_1d4760:
    // 0x1d4760: 0x3402d2f1  ori         $v0, $zero, 0xD2F1
    ctx->pc = 0x1d4760u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1d4764:
    // 0x1d4764: 0x3463624d  ori         $v1, $v1, 0x624D
    ctx->pc = 0x1d4764u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)25165u)));
label_1d4768:
    // 0x1d4768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d4768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1d476c:
    // 0x1d476c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d4770:
    // 0x1d4770: 0x3442a9fc  ori         $v0, $v0, 0xA9FC
    ctx->pc = 0x1d4770u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)43516u)));
label_1d4774:
    // 0x1d4774: 0xc040d72  jal         func_1035C8
label_1d4778:
    if (ctx->pc == 0x1D4778u) {
        ctx->pc = 0x1D4778u;
            // 0x1d4778: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D477Cu;
        goto label_1d477c;
    }
    ctx->pc = 0x1D4774u;
    SET_GPR_U32(ctx, 31, 0x1D477Cu);
    ctx->pc = 0x1D4778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4774u;
            // 0x1d4778: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D477Cu; }
        if (ctx->pc != 0x1D477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D477Cu; }
        if (ctx->pc != 0x1D477Cu) { return; }
    }
    ctx->pc = 0x1D477Cu;
label_1d477c:
    // 0x1d477c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4780:
    // 0x1d4780: 0xc040880  jal         func_102200
label_1d4784:
    if (ctx->pc == 0x1D4784u) {
        ctx->pc = 0x1D4784u;
            // 0x1d4784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4788u;
        goto label_1d4788;
    }
    ctx->pc = 0x1D4780u;
    SET_GPR_U32(ctx, 31, 0x1D4788u);
    ctx->pc = 0x1D4784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4780u;
            // 0x1d4784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4788u; }
        if (ctx->pc != 0x1D4788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4788u; }
        if (ctx->pc != 0x1D4788u) { return; }
    }
    ctx->pc = 0x1D4788u;
label_1d4788:
    // 0x1d4788: 0xc040a74  jal         func_1029D0
label_1d478c:
    if (ctx->pc == 0x1D478Cu) {
        ctx->pc = 0x1D478Cu;
            // 0x1d478c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4790u;
        goto label_1d4790;
    }
    ctx->pc = 0x1D4788u;
    SET_GPR_U32(ctx, 31, 0x1D4790u);
    ctx->pc = 0x1D478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4788u;
            // 0x1d478c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4790u; }
        if (ctx->pc != 0x1D4790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4790u; }
        if (ctx->pc != 0x1D4790u) { return; }
    }
    ctx->pc = 0x1D4790u;
label_1d4790:
    // 0x1d4790: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4794:
    // 0x1d4794: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4798:
    // 0x1d4798: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d4798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d479c:
    // 0x1d479c: 0x0  nop
    ctx->pc = 0x1d479cu;
    // NOP
label_1d47a0:
    // 0x1d47a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d47a4:
    // 0x1d47a4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d47a8:
    // 0x1d47a8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1d47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d47ac:
    // 0x1d47ac: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1d47acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d47b0:
    // 0x1d47b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d47b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d47b4:
    // 0x1d47b4: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1d47b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1d47b8:
    // 0x1d47b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d47bc:
    // 0x1d47bc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d47bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d47c0:
    // 0x1d47c0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1d47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d47c4:
    // 0x1d47c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d47c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d47c8:
    // 0x1d47c8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1d47c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_1d47cc:
    // 0x1d47cc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d47d0:
    // 0x1d47d0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_1d47d4:
    if (ctx->pc == 0x1D47D4u) {
        ctx->pc = 0x1D47D4u;
            // 0x1d47d4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1D47D8u;
        goto label_1d47d8;
    }
    ctx->pc = 0x1D47D0u;
    {
        const bool branch_taken_0x1d47d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D47D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47D0u;
            // 0x1d47d4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d0) {
            ctx->pc = 0x1D4838u;
            goto label_1d4838;
        }
    }
    ctx->pc = 0x1D47D8u;
label_1d47d8:
    // 0x1d47d8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1d47dc:
    if (ctx->pc == 0x1D47DCu) {
        ctx->pc = 0x1D47E0u;
        goto label_1d47e0;
    }
    ctx->pc = 0x1D47D8u;
    {
        const bool branch_taken_0x1d47d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d47d8) {
            ctx->pc = 0x1D4810u;
            goto label_1d4810;
        }
    }
    ctx->pc = 0x1D47E0u;
label_1d47e0:
    // 0x1d47e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d47e4:
    // 0x1d47e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1d47e8:
    if (ctx->pc == 0x1D47E8u) {
        ctx->pc = 0x1D47ECu;
        goto label_1d47ec;
    }
    ctx->pc = 0x1D47E4u;
    {
        const bool branch_taken_0x1d47e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d47e4) {
            ctx->pc = 0x1D47F8u;
            goto label_1d47f8;
        }
    }
    ctx->pc = 0x1D47ECu;
label_1d47ec:
    // 0x1d47ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1d47f0:
    if (ctx->pc == 0x1D47F0u) {
        ctx->pc = 0x1D47F4u;
        goto label_1d47f4;
    }
    ctx->pc = 0x1D47ECu;
    {
        const bool branch_taken_0x1d47ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d47ec) {
            ctx->pc = 0x1D4858u;
            goto label_1d4858;
        }
    }
    ctx->pc = 0x1D47F4u;
label_1d47f4:
    // 0x1d47f4: 0x0  nop
    ctx->pc = 0x1d47f4u;
    // NOP
label_1d47f8:
    // 0x1d47f8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d47fc:
    // 0x1d47fc: 0xc06560c  jal         func_195830
label_1d4800:
    if (ctx->pc == 0x1D4800u) {
        ctx->pc = 0x1D4800u;
            // 0x1d4800: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4804u;
        goto label_1d4804;
    }
    ctx->pc = 0x1D47FCu;
    SET_GPR_U32(ctx, 31, 0x1D4804u);
    ctx->pc = 0x1D4800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D47FCu;
            // 0x1d4800: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4804u; }
        if (ctx->pc != 0x1D4804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4804u; }
        if (ctx->pc != 0x1D4804u) { return; }
    }
    ctx->pc = 0x1D4804u;
label_1d4804:
    // 0x1d4804: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d4808:
    if (ctx->pc == 0x1D4808u) {
        ctx->pc = 0x1D480Cu;
        goto label_1d480c;
    }
    ctx->pc = 0x1D4804u;
    {
        const bool branch_taken_0x1d4804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4804) {
            ctx->pc = 0x1D4858u;
            goto label_1d4858;
        }
    }
    ctx->pc = 0x1D480Cu;
label_1d480c:
    // 0x1d480c: 0x0  nop
    ctx->pc = 0x1d480cu;
    // NOP
label_1d4810:
    // 0x1d4810: 0xc065d00  jal         func_197400
label_1d4814:
    if (ctx->pc == 0x1D4814u) {
        ctx->pc = 0x1D4818u;
        goto label_1d4818;
    }
    ctx->pc = 0x1D4810u;
    SET_GPR_U32(ctx, 31, 0x1D4818u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4818u; }
        if (ctx->pc != 0x1D4818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4818u; }
        if (ctx->pc != 0x1D4818u) { return; }
    }
    ctx->pc = 0x1D4818u;
label_1d4818:
    // 0x1d4818: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1d481c:
    if (ctx->pc == 0x1D481Cu) {
        ctx->pc = 0x1D4820u;
        goto label_1d4820;
    }
    ctx->pc = 0x1D4818u;
    {
        const bool branch_taken_0x1d4818 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4818) {
            ctx->pc = 0x1D4858u;
            goto label_1d4858;
        }
    }
    ctx->pc = 0x1D4820u;
label_1d4820:
    // 0x1d4820: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4824:
    // 0x1d4824: 0xc06560c  jal         func_195830
label_1d4828:
    if (ctx->pc == 0x1D4828u) {
        ctx->pc = 0x1D4828u;
            // 0x1d4828: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D482Cu;
        goto label_1d482c;
    }
    ctx->pc = 0x1D4824u;
    SET_GPR_U32(ctx, 31, 0x1D482Cu);
    ctx->pc = 0x1D4828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4824u;
            // 0x1d4828: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D482Cu; }
        if (ctx->pc != 0x1D482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D482Cu; }
        if (ctx->pc != 0x1D482Cu) { return; }
    }
    ctx->pc = 0x1D482Cu;
label_1d482c:
    // 0x1d482c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d4830:
    if (ctx->pc == 0x1D4830u) {
        ctx->pc = 0x1D4834u;
        goto label_1d4834;
    }
    ctx->pc = 0x1D482Cu;
    {
        const bool branch_taken_0x1d482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d482c) {
            ctx->pc = 0x1D4858u;
            goto label_1d4858;
        }
    }
    ctx->pc = 0x1D4834u;
label_1d4834:
    // 0x1d4834: 0x0  nop
    ctx->pc = 0x1d4834u;
    // NOP
label_1d4838:
    // 0x1d4838: 0xc065d00  jal         func_197400
label_1d483c:
    if (ctx->pc == 0x1D483Cu) {
        ctx->pc = 0x1D4840u;
        goto label_1d4840;
    }
    ctx->pc = 0x1D4838u;
    SET_GPR_U32(ctx, 31, 0x1D4840u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4840u; }
        if (ctx->pc != 0x1D4840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4840u; }
        if (ctx->pc != 0x1D4840u) { return; }
    }
    ctx->pc = 0x1D4840u;
label_1d4840:
    // 0x1d4840: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1d4840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d4844:
    // 0x1d4844: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1d4848:
    if (ctx->pc == 0x1D4848u) {
        ctx->pc = 0x1D484Cu;
        goto label_1d484c;
    }
    ctx->pc = 0x1D4844u;
    {
        const bool branch_taken_0x1d4844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4844) {
            ctx->pc = 0x1D4858u;
            goto label_1d4858;
        }
    }
    ctx->pc = 0x1D484Cu;
label_1d484c:
    // 0x1d484c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4850:
    // 0x1d4850: 0xc06560c  jal         func_195830
label_1d4854:
    if (ctx->pc == 0x1D4854u) {
        ctx->pc = 0x1D4854u;
            // 0x1d4854: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4858u;
        goto label_1d4858;
    }
    ctx->pc = 0x1D4850u;
    SET_GPR_U32(ctx, 31, 0x1D4858u);
    ctx->pc = 0x1D4854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4850u;
            // 0x1d4854: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4858u; }
        if (ctx->pc != 0x1D4858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4858u; }
        if (ctx->pc != 0x1D4858u) { return; }
    }
    ctx->pc = 0x1D4858u;
label_1d4858:
    // 0x1d4858: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d485c:
    // 0x1d485c: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1d485cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
label_1d4860:
    // 0x1d4860: 0x142002f1  bnez        $at, . + 4 + (0x2F1 << 2)
label_1d4864:
    if (ctx->pc == 0x1D4864u) {
        ctx->pc = 0x1D4864u;
            // 0x1d4864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D4868u;
        goto label_1d4868;
    }
    ctx->pc = 0x1D4860u;
    {
        const bool branch_taken_0x1d4860 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4860u;
            // 0x1d4864: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4860) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4868u;
label_1d4868:
    // 0x1d4868: 0x100002ef  b           . + 4 + (0x2EF << 2)
label_1d486c:
    if (ctx->pc == 0x1D486Cu) {
        ctx->pc = 0x1D486Cu;
            // 0x1d486c: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1D4870u;
        goto label_1d4870;
    }
    ctx->pc = 0x1D4868u;
    {
        const bool branch_taken_0x1d4868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4868u;
            // 0x1d486c: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4868) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4870u;
label_1d4870:
    // 0x1d4870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4874:
    // 0x1d4874: 0x14c302ec  bne         $a2, $v1, . + 4 + (0x2EC << 2)
label_1d4878:
    if (ctx->pc == 0x1D4878u) {
        ctx->pc = 0x1D487Cu;
        goto label_1d487c;
    }
    ctx->pc = 0x1D4874u;
    {
        const bool branch_taken_0x1d4874 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4874) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D487Cu;
label_1d487c:
    // 0x1d487c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1d487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d4880:
    // 0x1d4880: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1d4884:
    if (ctx->pc == 0x1D4884u) {
        ctx->pc = 0x1D4888u;
        goto label_1d4888;
    }
    ctx->pc = 0x1D4880u;
    {
        const bool branch_taken_0x1d4880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4880) {
            ctx->pc = 0x1D48A8u;
            goto label_1d48a8;
        }
    }
    ctx->pc = 0x1D4888u;
label_1d4888:
    // 0x1d4888: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d488c:
    // 0x1d488c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d4890:
    // 0x1d4890: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4890u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4894:
    // 0x1d4894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4898:
    // 0x1d4898: 0x0  nop
    ctx->pc = 0x1d4898u;
    // NOP
label_1d489c:
    // 0x1d489c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d489cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d48a0:
    // 0x1d48a0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d48a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d48a4:
    // 0x1d48a4: 0x0  nop
    ctx->pc = 0x1d48a4u;
    // NOP
label_1d48a8:
    // 0x1d48a8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d48ac:
    // 0x1d48ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d48acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d48b0:
    // 0x1d48b0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1d48b4:
    if (ctx->pc == 0x1D48B4u) {
        ctx->pc = 0x1D48B8u;
        goto label_1d48b8;
    }
    ctx->pc = 0x1D48B0u;
    {
        const bool branch_taken_0x1d48b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d48b0) {
            ctx->pc = 0x1D48D8u;
            goto label_1d48d8;
        }
    }
    ctx->pc = 0x1D48B8u;
label_1d48b8:
    // 0x1d48b8: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d48b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d48bc:
    // 0x1d48bc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d48c0:
    // 0x1d48c0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d48c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d48c4:
    // 0x1d48c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d48c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d48c8:
    // 0x1d48c8: 0x0  nop
    ctx->pc = 0x1d48c8u;
    // NOP
label_1d48cc:
    // 0x1d48cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d48ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d48d0:
    // 0x1d48d0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d48d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d48d4:
    // 0x1d48d4: 0x0  nop
    ctx->pc = 0x1d48d4u;
    // NOP
label_1d48d8:
    // 0x1d48d8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d48dc:
    // 0x1d48dc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d48e0:
    // 0x1d48e0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d48e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d48e4:
    // 0x1d48e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d48e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d48e8:
    // 0x1d48e8: 0x0  nop
    ctx->pc = 0x1d48e8u;
    // NOP
label_1d48ec:
    // 0x1d48ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d48ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d48f0:
    // 0x1d48f0: 0x100002cd  b           . + 4 + (0x2CD << 2)
label_1d48f4:
    if (ctx->pc == 0x1D48F4u) {
        ctx->pc = 0x1D48F4u;
            // 0x1d48f4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D48F8u;
        goto label_1d48f8;
    }
    ctx->pc = 0x1D48F0u;
    {
        const bool branch_taken_0x1d48f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48F0u;
            // 0x1d48f4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48f0) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D48F8u;
label_1d48f8:
    // 0x1d48f8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1d48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d48fc:
    // 0x1d48fc: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
label_1d4900:
    if (ctx->pc == 0x1D4900u) {
        ctx->pc = 0x1D4904u;
        goto label_1d4904;
    }
    ctx->pc = 0x1D48FCu;
    {
        const bool branch_taken_0x1d48fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d48fc) {
            ctx->pc = 0x1D4A18u;
            goto label_1d4a18;
        }
    }
    ctx->pc = 0x1D4904u;
label_1d4904:
    // 0x1d4904: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4908:
    // 0x1d4908: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d490c:
    // 0x1d490c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d490cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4910:
    // 0x1d4910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4914:
    // 0x1d4914: 0x0  nop
    ctx->pc = 0x1d4914u;
    // NOP
label_1d4918:
    // 0x1d4918: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d491c:
    // 0x1d491c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d4920:
    // 0x1d4920: 0xc040d72  jal         func_1035C8
label_1d4924:
    if (ctx->pc == 0x1D4924u) {
        ctx->pc = 0x1D4924u;
            // 0x1d4924: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D4928u;
        goto label_1d4928;
    }
    ctx->pc = 0x1D4920u;
    SET_GPR_U32(ctx, 31, 0x1D4928u);
    ctx->pc = 0x1D4924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4920u;
            // 0x1d4924: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4928u; }
        if (ctx->pc != 0x1D4928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4928u; }
        if (ctx->pc != 0x1D4928u) { return; }
    }
    ctx->pc = 0x1D4928u;
label_1d4928:
    // 0x1d4928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d492c:
    // 0x1d492c: 0xc040078  jal         func_1001E0
label_1d4930:
    if (ctx->pc == 0x1D4930u) {
        ctx->pc = 0x1D4930u;
            // 0x1d4930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4934u;
        goto label_1d4934;
    }
    ctx->pc = 0x1D492Cu;
    SET_GPR_U32(ctx, 31, 0x1D4934u);
    ctx->pc = 0x1D4930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D492Cu;
            // 0x1d4930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4934u; }
        if (ctx->pc != 0x1D4934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4934u; }
        if (ctx->pc != 0x1D4934u) { return; }
    }
    ctx->pc = 0x1D4934u;
label_1d4934:
    // 0x1d4934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d4938:
    if (ctx->pc == 0x1D4938u) {
        ctx->pc = 0x1D493Cu;
        goto label_1d493c;
    }
    ctx->pc = 0x1D4934u;
    {
        const bool branch_taken_0x1d4934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4934) {
            ctx->pc = 0x1D4958u;
            goto label_1d4958;
        }
    }
    ctx->pc = 0x1D493Cu;
label_1d493c:
    // 0x1d493c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4940:
    // 0x1d4940: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1d4940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1d4944:
    // 0x1d4944: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4944u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4948:
    // 0x1d4948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d494c:
    // 0x1d494c: 0x0  nop
    ctx->pc = 0x1d494cu;
    // NOP
label_1d4950:
    // 0x1d4950: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4954:
    // 0x1d4954: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d4954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d4958:
    // 0x1d4958: 0xc040d72  jal         func_1035C8
label_1d495c:
    if (ctx->pc == 0x1D495Cu) {
        ctx->pc = 0x1D495Cu;
            // 0x1d495c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D4960u;
        goto label_1d4960;
    }
    ctx->pc = 0x1D4958u;
    SET_GPR_U32(ctx, 31, 0x1D4960u);
    ctx->pc = 0x1D495Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4958u;
            // 0x1d495c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4960u; }
        if (ctx->pc != 0x1D4960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4960u; }
        if (ctx->pc != 0x1D4960u) { return; }
    }
    ctx->pc = 0x1D4960u;
label_1d4960:
    // 0x1d4960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4964:
    // 0x1d4964: 0xc04008c  jal         func_100230
label_1d4968:
    if (ctx->pc == 0x1D4968u) {
        ctx->pc = 0x1D4968u;
            // 0x1d4968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D496Cu;
        goto label_1d496c;
    }
    ctx->pc = 0x1D4964u;
    SET_GPR_U32(ctx, 31, 0x1D496Cu);
    ctx->pc = 0x1D4968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4964u;
            // 0x1d4968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D496Cu; }
        if (ctx->pc != 0x1D496Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D496Cu; }
        if (ctx->pc != 0x1D496Cu) { return; }
    }
    ctx->pc = 0x1D496Cu;
label_1d496c:
    // 0x1d496c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d4970:
    if (ctx->pc == 0x1D4970u) {
        ctx->pc = 0x1D4974u;
        goto label_1d4974;
    }
    ctx->pc = 0x1D496Cu;
    {
        const bool branch_taken_0x1d496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d496c) {
            ctx->pc = 0x1D4990u;
            goto label_1d4990;
        }
    }
    ctx->pc = 0x1D4974u;
label_1d4974:
    // 0x1d4974: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4978:
    // 0x1d4978: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1d497c:
    // 0x1d497c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d497cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4980:
    // 0x1d4980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4984:
    // 0x1d4984: 0x0  nop
    ctx->pc = 0x1d4984u;
    // NOP
label_1d4988:
    // 0x1d4988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d498c:
    // 0x1d498c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d498cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d4990:
    // 0x1d4990: 0xc040d72  jal         func_1035C8
label_1d4994:
    if (ctx->pc == 0x1D4994u) {
        ctx->pc = 0x1D4994u;
            // 0x1d4994: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D4998u;
        goto label_1d4998;
    }
    ctx->pc = 0x1D4990u;
    SET_GPR_U32(ctx, 31, 0x1D4998u);
    ctx->pc = 0x1D4994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4990u;
            // 0x1d4994: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4998u; }
        if (ctx->pc != 0x1D4998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4998u; }
        if (ctx->pc != 0x1D4998u) { return; }
    }
    ctx->pc = 0x1D4998u;
label_1d4998:
    // 0x1d4998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d499c:
    // 0x1d499c: 0xc040078  jal         func_1001E0
label_1d49a0:
    if (ctx->pc == 0x1D49A0u) {
        ctx->pc = 0x1D49A0u;
            // 0x1d49a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D49A4u;
        goto label_1d49a4;
    }
    ctx->pc = 0x1D499Cu;
    SET_GPR_U32(ctx, 31, 0x1D49A4u);
    ctx->pc = 0x1D49A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D499Cu;
            // 0x1d49a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49A4u; }
        if (ctx->pc != 0x1D49A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49A4u; }
        if (ctx->pc != 0x1D49A4u) { return; }
    }
    ctx->pc = 0x1D49A4u;
label_1d49a4:
    // 0x1d49a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d49a8:
    if (ctx->pc == 0x1D49A8u) {
        ctx->pc = 0x1D49ACu;
        goto label_1d49ac;
    }
    ctx->pc = 0x1D49A4u;
    {
        const bool branch_taken_0x1d49a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d49a4) {
            ctx->pc = 0x1D49D0u;
            goto label_1d49d0;
        }
    }
    ctx->pc = 0x1D49ACu;
label_1d49ac:
    // 0x1d49ac: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d49acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d49b0:
    // 0x1d49b0: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1d49b4:
    // 0x1d49b4: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1d49b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1d49b8:
    // 0x1d49b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d49b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d49bc:
    // 0x1d49bc: 0x0  nop
    ctx->pc = 0x1d49bcu;
    // NOP
label_1d49c0:
    // 0x1d49c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d49c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d49c4:
    // 0x1d49c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d49c8:
    if (ctx->pc == 0x1D49C8u) {
        ctx->pc = 0x1D49C8u;
            // 0x1d49c8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D49CCu;
        goto label_1d49cc;
    }
    ctx->pc = 0x1D49C4u;
    {
        const bool branch_taken_0x1d49c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D49C4u;
            // 0x1d49c8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49c4) {
            ctx->pc = 0x1D49E0u;
            goto label_1d49e0;
        }
    }
    ctx->pc = 0x1D49CCu;
label_1d49cc:
    // 0x1d49cc: 0x0  nop
    ctx->pc = 0x1d49ccu;
    // NOP
label_1d49d0:
    // 0x1d49d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d49d4:
    // 0x1d49d4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d49d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d49d8:
    // 0x1d49d8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d49dc:
    // 0x1d49dc: 0x0  nop
    ctx->pc = 0x1d49dcu;
    // NOP
label_1d49e0:
    // 0x1d49e0: 0xc065d00  jal         func_197400
label_1d49e4:
    if (ctx->pc == 0x1D49E4u) {
        ctx->pc = 0x1D49E8u;
        goto label_1d49e8;
    }
    ctx->pc = 0x1D49E0u;
    SET_GPR_U32(ctx, 31, 0x1D49E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49E8u; }
        if (ctx->pc != 0x1D49E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49E8u; }
        if (ctx->pc != 0x1D49E8u) { return; }
    }
    ctx->pc = 0x1D49E8u;
label_1d49e8:
    // 0x1d49e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d49ec:
    // 0x1d49ec: 0x1443028e  bne         $v0, $v1, . + 4 + (0x28E << 2)
label_1d49f0:
    if (ctx->pc == 0x1D49F0u) {
        ctx->pc = 0x1D49F4u;
        goto label_1d49f4;
    }
    ctx->pc = 0x1D49ECu;
    {
        const bool branch_taken_0x1d49ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d49ec) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D49F4u;
label_1d49f4:
    // 0x1d49f4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d49f8:
    // 0x1d49f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d49fc:
    // 0x1d49fc: 0x1462028a  bne         $v1, $v0, . + 4 + (0x28A << 2)
label_1d4a00:
    if (ctx->pc == 0x1D4A00u) {
        ctx->pc = 0x1D4A04u;
        goto label_1d4a04;
    }
    ctx->pc = 0x1D49FCu;
    {
        const bool branch_taken_0x1d49fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d49fc) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4A04u;
label_1d4a04:
    // 0x1d4a04: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4a08:
    // 0x1d4a08: 0xc06560c  jal         func_195830
label_1d4a0c:
    if (ctx->pc == 0x1D4A0Cu) {
        ctx->pc = 0x1D4A0Cu;
            // 0x1d4a0c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4A10u;
        goto label_1d4a10;
    }
    ctx->pc = 0x1D4A08u;
    SET_GPR_U32(ctx, 31, 0x1D4A10u);
    ctx->pc = 0x1D4A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A08u;
            // 0x1d4a0c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A10u; }
        if (ctx->pc != 0x1D4A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A10u; }
        if (ctx->pc != 0x1D4A10u) { return; }
    }
    ctx->pc = 0x1D4A10u;
label_1d4a10:
    // 0x1d4a10: 0x10000285  b           . + 4 + (0x285 << 2)
label_1d4a14:
    if (ctx->pc == 0x1D4A14u) {
        ctx->pc = 0x1D4A18u;
        goto label_1d4a18;
    }
    ctx->pc = 0x1D4A10u;
    {
        const bool branch_taken_0x1d4a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a10) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4A18u;
label_1d4a18:
    // 0x1d4a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4a1c:
    // 0x1d4a1c: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
label_1d4a20:
    if (ctx->pc == 0x1D4A20u) {
        ctx->pc = 0x1D4A20u;
            // 0x1d4a20: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D4A24u;
        goto label_1d4a24;
    }
    ctx->pc = 0x1D4A1Cu;
    {
        const bool branch_taken_0x1d4a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A1Cu;
            // 0x1d4a20: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a1c) {
            ctx->pc = 0x1D4B70u;
            goto label_1d4b70;
        }
    }
    ctx->pc = 0x1D4A24u;
label_1d4a24:
    // 0x1d4a24: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d4a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d4a28:
    // 0x1d4a28: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d4a2c:
    // 0x1d4a2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d4a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d4a30:
    // 0x1d4a30: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d4a34:
    // 0x1d4a34: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d4a38:
    // 0x1d4a38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d4a3c:
    // 0x1d4a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4a40:
    // 0x1d4a40: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d4a44:
    // 0x1d4a44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d4a48:
    // 0x1d4a48: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d4a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d4a4c:
    // 0x1d4a4c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d4a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d4a50:
    // 0x1d4a50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d4a54:
    // 0x1d4a54: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d4a58:
    // 0x1d4a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4a5c:
    // 0x1d4a5c: 0x0  nop
    ctx->pc = 0x1d4a5cu;
    // NOP
label_1d4a60:
    // 0x1d4a60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d4a64:
    // 0x1d4a64: 0xc04b6ee  jal         func_12DBB8
label_1d4a68:
    if (ctx->pc == 0x1D4A68u) {
        ctx->pc = 0x1D4A68u;
            // 0x1d4a68: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D4A6Cu;
        goto label_1d4a6c;
    }
    ctx->pc = 0x1D4A64u;
    SET_GPR_U32(ctx, 31, 0x1D4A6Cu);
    ctx->pc = 0x1D4A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A64u;
            // 0x1d4a68: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A6Cu; }
        if (ctx->pc != 0x1D4A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4A6Cu; }
        if (ctx->pc != 0x1D4A6Cu) { return; }
    }
    ctx->pc = 0x1D4A6Cu;
label_1d4a6c:
    // 0x1d4a6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4a70:
    // 0x1d4a70: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d4a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4a74:
    // 0x1d4a74: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4a78:
    // 0x1d4a78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4a78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d4a7c:
    // 0x1d4a7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4a80:
    // 0x1d4a80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d4a84:
    if (ctx->pc == 0x1D4A84u) {
        ctx->pc = 0x1D4A84u;
            // 0x1d4a84: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1D4A88u;
        goto label_1d4a88;
    }
    ctx->pc = 0x1D4A80u;
    {
        const bool branch_taken_0x1d4a80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4A80u;
            // 0x1d4a84: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a80) {
            ctx->pc = 0x1D4A90u;
            goto label_1d4a90;
        }
    }
    ctx->pc = 0x1D4A88u;
label_1d4a88:
    // 0x1d4a88: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4a88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4a8c:
    // 0x1d4a8c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d4a90:
    // 0x1d4a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4a94:
    // 0x1d4a94: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4a98:
    // 0x1d4a98: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d4a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4a9c:
    // 0x1d4a9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4a9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d4aa0:
    // 0x1d4aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4aa4:
    // 0x1d4aa4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d4aa8:
    if (ctx->pc == 0x1D4AA8u) {
        ctx->pc = 0x1D4AA8u;
            // 0x1d4aa8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1D4AACu;
        goto label_1d4aac;
    }
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AA4u;
            // 0x1d4aa8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4AB8u;
            goto label_1d4ab8;
        }
    }
    ctx->pc = 0x1D4AACu;
label_1d4aac:
    // 0x1d4aac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4aacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4ab0:
    // 0x1d4ab0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d4ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d4ab4:
    // 0x1d4ab4: 0x0  nop
    ctx->pc = 0x1d4ab4u;
    // NOP
label_1d4ab8:
    // 0x1d4ab8: 0xc065d00  jal         func_197400
label_1d4abc:
    if (ctx->pc == 0x1D4ABCu) {
        ctx->pc = 0x1D4AC0u;
        goto label_1d4ac0;
    }
    ctx->pc = 0x1D4AB8u;
    SET_GPR_U32(ctx, 31, 0x1D4AC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AC0u; }
        if (ctx->pc != 0x1D4AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AC0u; }
        if (ctx->pc != 0x1D4AC0u) { return; }
    }
    ctx->pc = 0x1D4AC0u;
label_1d4ac0:
    // 0x1d4ac0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4ac4:
    // 0x1d4ac4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d4ac8:
    if (ctx->pc == 0x1D4AC8u) {
        ctx->pc = 0x1D4ACCu;
        goto label_1d4acc;
    }
    ctx->pc = 0x1D4AC4u;
    {
        const bool branch_taken_0x1d4ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4ac4) {
            ctx->pc = 0x1D4AE8u;
            goto label_1d4ae8;
        }
    }
    ctx->pc = 0x1D4ACCu;
label_1d4acc:
    // 0x1d4acc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4ad0:
    // 0x1d4ad0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d4ad4:
    // 0x1d4ad4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d4ad8:
    if (ctx->pc == 0x1D4AD8u) {
        ctx->pc = 0x1D4ADCu;
        goto label_1d4adc;
    }
    ctx->pc = 0x1D4AD4u;
    {
        const bool branch_taken_0x1d4ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4ad4) {
            ctx->pc = 0x1D4AE8u;
            goto label_1d4ae8;
        }
    }
    ctx->pc = 0x1D4ADCu;
label_1d4adc:
    // 0x1d4adc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4ae0:
    // 0x1d4ae0: 0xc06560c  jal         func_195830
label_1d4ae4:
    if (ctx->pc == 0x1D4AE4u) {
        ctx->pc = 0x1D4AE4u;
            // 0x1d4ae4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4AE8u;
        goto label_1d4ae8;
    }
    ctx->pc = 0x1D4AE0u;
    SET_GPR_U32(ctx, 31, 0x1D4AE8u);
    ctx->pc = 0x1D4AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4AE0u;
            // 0x1d4ae4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AE8u; }
        if (ctx->pc != 0x1D4AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4AE8u; }
        if (ctx->pc != 0x1D4AE8u) { return; }
    }
    ctx->pc = 0x1D4AE8u;
label_1d4ae8:
    // 0x1d4ae8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4aec:
    // 0x1d4aec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d4af0:
    // 0x1d4af0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1d4af4:
    if (ctx->pc == 0x1D4AF4u) {
        ctx->pc = 0x1D4AF8u;
        goto label_1d4af8;
    }
    ctx->pc = 0x1D4AF0u;
    {
        const bool branch_taken_0x1d4af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4af0) {
            ctx->pc = 0x1D4B20u;
            goto label_1d4b20;
        }
    }
    ctx->pc = 0x1D4AF8u;
label_1d4af8:
    // 0x1d4af8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1d4afc:
    // 0x1d4afc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4b00:
    // 0x1d4b00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d4b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d4b04:
    // 0x1d4b04: 0xc0655b0  jal         func_1956C0
label_1d4b08:
    if (ctx->pc == 0x1D4B08u) {
        ctx->pc = 0x1D4B08u;
            // 0x1d4b08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4B0Cu;
        goto label_1d4b0c;
    }
    ctx->pc = 0x1D4B04u;
    SET_GPR_U32(ctx, 31, 0x1D4B0Cu);
    ctx->pc = 0x1D4B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B04u;
            // 0x1d4b08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B0Cu; }
        if (ctx->pc != 0x1D4B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B0Cu; }
        if (ctx->pc != 0x1D4B0Cu) { return; }
    }
    ctx->pc = 0x1D4B0Cu;
label_1d4b0c:
    // 0x1d4b0c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_1d4b10:
    // 0x1d4b10: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4b14:
    // 0x1d4b14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d4b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d4b18:
    // 0x1d4b18: 0xc0655b0  jal         func_1956C0
label_1d4b1c:
    if (ctx->pc == 0x1D4B1Cu) {
        ctx->pc = 0x1D4B1Cu;
            // 0x1d4b1c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4B20u;
        goto label_1d4b20;
    }
    ctx->pc = 0x1D4B18u;
    SET_GPR_U32(ctx, 31, 0x1D4B20u);
    ctx->pc = 0x1D4B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B18u;
            // 0x1d4b1c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B20u; }
        if (ctx->pc != 0x1D4B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B20u; }
        if (ctx->pc != 0x1D4B20u) { return; }
    }
    ctx->pc = 0x1D4B20u;
label_1d4b20:
    // 0x1d4b20: 0xc065d00  jal         func_197400
label_1d4b24:
    if (ctx->pc == 0x1D4B24u) {
        ctx->pc = 0x1D4B28u;
        goto label_1d4b28;
    }
    ctx->pc = 0x1D4B20u;
    SET_GPR_U32(ctx, 31, 0x1D4B28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B28u; }
        if (ctx->pc != 0x1D4B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B28u; }
        if (ctx->pc != 0x1D4B28u) { return; }
    }
    ctx->pc = 0x1D4B28u;
label_1d4b28:
    // 0x1d4b28: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d4b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4b2c:
    // 0x1d4b2c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1d4b30:
    if (ctx->pc == 0x1D4B30u) {
        ctx->pc = 0x1D4B34u;
        goto label_1d4b34;
    }
    ctx->pc = 0x1D4B2Cu;
    {
        const bool branch_taken_0x1d4b2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b2c) {
            ctx->pc = 0x1D4B50u;
            goto label_1d4b50;
        }
    }
    ctx->pc = 0x1D4B34u;
label_1d4b34:
    // 0x1d4b34: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4b38:
    // 0x1d4b38: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d4b3c:
    // 0x1d4b3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d4b40:
    if (ctx->pc == 0x1D4B40u) {
        ctx->pc = 0x1D4B44u;
        goto label_1d4b44;
    }
    ctx->pc = 0x1D4B3Cu;
    {
        const bool branch_taken_0x1d4b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4b3c) {
            ctx->pc = 0x1D4B50u;
            goto label_1d4b50;
        }
    }
    ctx->pc = 0x1D4B44u;
label_1d4b44:
    // 0x1d4b44: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4b48:
    // 0x1d4b48: 0xc06560c  jal         func_195830
label_1d4b4c:
    if (ctx->pc == 0x1D4B4Cu) {
        ctx->pc = 0x1D4B4Cu;
            // 0x1d4b4c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4B50u;
        goto label_1d4b50;
    }
    ctx->pc = 0x1D4B48u;
    SET_GPR_U32(ctx, 31, 0x1D4B50u);
    ctx->pc = 0x1D4B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B48u;
            // 0x1d4b4c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B50u; }
        if (ctx->pc != 0x1D4B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4B50u; }
        if (ctx->pc != 0x1D4B50u) { return; }
    }
    ctx->pc = 0x1D4B50u;
label_1d4b50:
    // 0x1d4b50: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4b54:
    // 0x1d4b54: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1d4b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1d4b58:
    // 0x1d4b58: 0x14200233  bnez        $at, . + 4 + (0x233 << 2)
label_1d4b5c:
    if (ctx->pc == 0x1D4B5Cu) {
        ctx->pc = 0x1D4B5Cu;
            // 0x1d4b5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D4B60u;
        goto label_1d4b60;
    }
    ctx->pc = 0x1D4B58u;
    {
        const bool branch_taken_0x1d4b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B58u;
            // 0x1d4b5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b58) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4B60u;
label_1d4b60:
    // 0x1d4b60: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d4b64:
    // 0x1d4b64: 0x10000230  b           . + 4 + (0x230 << 2)
label_1d4b68:
    if (ctx->pc == 0x1D4B68u) {
        ctx->pc = 0x1D4B68u;
            // 0x1d4b68: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1D4B6Cu;
        goto label_1d4b6c;
    }
    ctx->pc = 0x1D4B64u;
    {
        const bool branch_taken_0x1d4b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B64u;
            // 0x1d4b68: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b64) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4B6Cu;
label_1d4b6c:
    // 0x1d4b6c: 0x0  nop
    ctx->pc = 0x1d4b6cu;
    // NOP
label_1d4b70:
    // 0x1d4b70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4b74:
    // 0x1d4b74: 0x1462022c  bne         $v1, $v0, . + 4 + (0x22C << 2)
label_1d4b78:
    if (ctx->pc == 0x1D4B78u) {
        ctx->pc = 0x1D4B78u;
            // 0x1d4b78: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D4B7Cu;
        goto label_1d4b7c;
    }
    ctx->pc = 0x1D4B74u;
    {
        const bool branch_taken_0x1d4b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D4B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4B74u;
            // 0x1d4b78: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b74) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4B7Cu;
label_1d4b7c:
    // 0x1d4b7c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d4b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d4b80:
    // 0x1d4b80: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d4b84:
    // 0x1d4b84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d4b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d4b88:
    // 0x1d4b88: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d4b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d4b8c:
    // 0x1d4b8c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d4b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d4b90:
    // 0x1d4b90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d4b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d4b94:
    // 0x1d4b94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4b98:
    // 0x1d4b98: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d4b9c:
    // 0x1d4b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d4ba0:
    // 0x1d4ba0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d4ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d4ba4:
    // 0x1d4ba4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d4ba8:
    // 0x1d4ba8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d4bac:
    // 0x1d4bac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d4bb0:
    // 0x1d4bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4bb4:
    // 0x1d4bb4: 0x0  nop
    ctx->pc = 0x1d4bb4u;
    // NOP
label_1d4bb8:
    // 0x1d4bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d4bbc:
    // 0x1d4bbc: 0xc04b6ee  jal         func_12DBB8
label_1d4bc0:
    if (ctx->pc == 0x1D4BC0u) {
        ctx->pc = 0x1D4BC0u;
            // 0x1d4bc0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D4BC4u;
        goto label_1d4bc4;
    }
    ctx->pc = 0x1D4BBCu;
    SET_GPR_U32(ctx, 31, 0x1D4BC4u);
    ctx->pc = 0x1D4BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BBCu;
            // 0x1d4bc0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4BC4u; }
        if (ctx->pc != 0x1D4BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4BC4u; }
        if (ctx->pc != 0x1D4BC4u) { return; }
    }
    ctx->pc = 0x1D4BC4u;
label_1d4bc4:
    // 0x1d4bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4bc8:
    // 0x1d4bc8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4bcc:
    // 0x1d4bcc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4bd0:
    // 0x1d4bd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4bd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d4bd4:
    // 0x1d4bd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4bd8:
    // 0x1d4bd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d4bdc:
    if (ctx->pc == 0x1D4BDCu) {
        ctx->pc = 0x1D4BDCu;
            // 0x1d4bdc: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1D4BE0u;
        goto label_1d4be0;
    }
    ctx->pc = 0x1D4BD8u;
    {
        const bool branch_taken_0x1d4bd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BD8u;
            // 0x1d4bdc: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bd8) {
            ctx->pc = 0x1D4BE8u;
            goto label_1d4be8;
        }
    }
    ctx->pc = 0x1D4BE0u;
label_1d4be0:
    // 0x1d4be0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4be0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4be4:
    // 0x1d4be4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d4be8:
    // 0x1d4be8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4bec:
    // 0x1d4bec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d4becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4bf0:
    // 0x1d4bf0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d4bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4bf4:
    // 0x1d4bf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d4bf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d4bf8:
    // 0x1d4bf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4bfc:
    // 0x1d4bfc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d4c00:
    if (ctx->pc == 0x1D4C00u) {
        ctx->pc = 0x1D4C00u;
            // 0x1d4c00: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1D4C04u;
        goto label_1d4c04;
    }
    ctx->pc = 0x1D4BFCu;
    {
        const bool branch_taken_0x1d4bfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4BFCu;
            // 0x1d4c00: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bfc) {
            ctx->pc = 0x1D4C10u;
            goto label_1d4c10;
        }
    }
    ctx->pc = 0x1D4C04u;
label_1d4c04:
    // 0x1d4c04: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4c04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4c08:
    // 0x1d4c08: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d4c0c:
    // 0x1d4c0c: 0x0  nop
    ctx->pc = 0x1d4c0cu;
    // NOP
label_1d4c10:
    // 0x1d4c10: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x1d4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_1d4c14:
    // 0x1d4c14: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1d4c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d4c18:
    // 0x1d4c18: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1d4c18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1d4c1c:
    // 0x1d4c1c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1d4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1d4c20:
    // 0x1d4c20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d4c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d4c24:
    // 0x1d4c24: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1d4c24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1d4c28:
    // 0x1d4c28: 0xc040d72  jal         func_1035C8
label_1d4c2c:
    if (ctx->pc == 0x1D4C2Cu) {
        ctx->pc = 0x1D4C2Cu;
            // 0x1d4c2c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D4C30u;
        goto label_1d4c30;
    }
    ctx->pc = 0x1D4C28u;
    SET_GPR_U32(ctx, 31, 0x1D4C30u);
    ctx->pc = 0x1D4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C28u;
            // 0x1d4c2c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C30u; }
        if (ctx->pc != 0x1D4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C30u; }
        if (ctx->pc != 0x1D4C30u) { return; }
    }
    ctx->pc = 0x1D4C30u;
label_1d4c30:
    // 0x1d4c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c34:
    // 0x1d4c34: 0xc040880  jal         func_102200
label_1d4c38:
    if (ctx->pc == 0x1D4C38u) {
        ctx->pc = 0x1D4C38u;
            // 0x1d4c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C3Cu;
        goto label_1d4c3c;
    }
    ctx->pc = 0x1D4C34u;
    SET_GPR_U32(ctx, 31, 0x1D4C3Cu);
    ctx->pc = 0x1D4C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C34u;
            // 0x1d4c38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C3Cu; }
        if (ctx->pc != 0x1D4C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C3Cu; }
        if (ctx->pc != 0x1D4C3Cu) { return; }
    }
    ctx->pc = 0x1D4C3Cu;
label_1d4c3c:
    // 0x1d4c3c: 0xc040a74  jal         func_1029D0
label_1d4c40:
    if (ctx->pc == 0x1D4C40u) {
        ctx->pc = 0x1D4C40u;
            // 0x1d4c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C44u;
        goto label_1d4c44;
    }
    ctx->pc = 0x1D4C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C44u);
    ctx->pc = 0x1D4C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C3Cu;
            // 0x1d4c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C44u; }
        if (ctx->pc != 0x1D4C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C44u; }
        if (ctx->pc != 0x1D4C44u) { return; }
    }
    ctx->pc = 0x1D4C44u;
label_1d4c44:
    // 0x1d4c44: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1d4c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d4c48:
    // 0x1d4c48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d4c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4c4c:
    // 0x1d4c4c: 0x0  nop
    ctx->pc = 0x1d4c4cu;
    // NOP
label_1d4c50:
    // 0x1d4c50: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d4c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d4c54:
    // 0x1d4c54: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d4c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d4c58:
    // 0x1d4c58: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1d4c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d4c5c:
    // 0x1d4c5c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1d4c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4c60:
    // 0x1d4c60: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1d4c64:
    if (ctx->pc == 0x1D4C64u) {
        ctx->pc = 0x1D4C64u;
            // 0x1d4c64: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->pc = 0x1D4C68u;
        goto label_1d4c68;
    }
    ctx->pc = 0x1D4C60u;
    {
        const bool branch_taken_0x1d4c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C60u;
            // 0x1d4c64: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c60) {
            ctx->pc = 0x1D4CA8u;
            goto label_1d4ca8;
        }
    }
    ctx->pc = 0x1D4C68u;
label_1d4c68:
    // 0x1d4c68: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1d4c6c:
    // 0x1d4c6c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x1d4c6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_1d4c70:
    // 0x1d4c70: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1d4c70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1d4c74:
    // 0x1d4c74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d4c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1d4c78:
    // 0x1d4c78: 0xc040d72  jal         func_1035C8
label_1d4c7c:
    if (ctx->pc == 0x1D4C7Cu) {
        ctx->pc = 0x1D4C7Cu;
            // 0x1d4c7c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1D4C80u;
        goto label_1d4c80;
    }
    ctx->pc = 0x1D4C78u;
    SET_GPR_U32(ctx, 31, 0x1D4C80u);
    ctx->pc = 0x1D4C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C78u;
            // 0x1d4c7c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C80u; }
        if (ctx->pc != 0x1D4C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C80u; }
        if (ctx->pc != 0x1D4C80u) { return; }
    }
    ctx->pc = 0x1D4C80u;
label_1d4c80:
    // 0x1d4c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c84:
    // 0x1d4c84: 0xc040880  jal         func_102200
label_1d4c88:
    if (ctx->pc == 0x1D4C88u) {
        ctx->pc = 0x1D4C88u;
            // 0x1d4c88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C8Cu;
        goto label_1d4c8c;
    }
    ctx->pc = 0x1D4C84u;
    SET_GPR_U32(ctx, 31, 0x1D4C8Cu);
    ctx->pc = 0x1D4C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C84u;
            // 0x1d4c88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C8Cu; }
        if (ctx->pc != 0x1D4C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C8Cu; }
        if (ctx->pc != 0x1D4C8Cu) { return; }
    }
    ctx->pc = 0x1D4C8Cu;
label_1d4c8c:
    // 0x1d4c8c: 0xc040a74  jal         func_1029D0
label_1d4c90:
    if (ctx->pc == 0x1D4C90u) {
        ctx->pc = 0x1D4C90u;
            // 0x1d4c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C94u;
        goto label_1d4c94;
    }
    ctx->pc = 0x1D4C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C94u);
    ctx->pc = 0x1D4C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C8Cu;
            // 0x1d4c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C94u; }
        if (ctx->pc != 0x1D4C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4C94u; }
        if (ctx->pc != 0x1D4C94u) { return; }
    }
    ctx->pc = 0x1D4C94u;
label_1d4c94:
    // 0x1d4c94: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4c98:
    // 0x1d4c98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4c9c:
    // 0x1d4c9c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d4ca0:
    if (ctx->pc == 0x1D4CA0u) {
        ctx->pc = 0x1D4CA0u;
            // 0x1d4ca0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D4CA4u;
        goto label_1d4ca4;
    }
    ctx->pc = 0x1D4C9Cu;
    {
        const bool branch_taken_0x1d4c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4C9Cu;
            // 0x1d4ca0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c9c) {
            ctx->pc = 0x1D4CE8u;
            goto label_1d4ce8;
        }
    }
    ctx->pc = 0x1D4CA4u;
label_1d4ca4:
    // 0x1d4ca4: 0x0  nop
    ctx->pc = 0x1d4ca4u;
    // NOP
label_1d4ca8:
    // 0x1d4ca8: 0xc040d72  jal         func_1035C8
label_1d4cac:
    if (ctx->pc == 0x1D4CACu) {
        ctx->pc = 0x1D4CACu;
            // 0x1d4cac: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x1D4CB0u;
        goto label_1d4cb0;
    }
    ctx->pc = 0x1D4CA8u;
    SET_GPR_U32(ctx, 31, 0x1D4CB0u);
    ctx->pc = 0x1D4CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CA8u;
            // 0x1d4cac: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CB0u; }
        if (ctx->pc != 0x1D4CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CB0u; }
        if (ctx->pc != 0x1D4CB0u) { return; }
    }
    ctx->pc = 0x1D4CB0u;
label_1d4cb0:
    // 0x1d4cb0: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1d4cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
label_1d4cb4:
    // 0x1d4cb4: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1d4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
label_1d4cb8:
    // 0x1d4cb8: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1d4cb8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
label_1d4cbc:
    // 0x1d4cbc: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1d4cbcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
label_1d4cc0:
    // 0x1d4cc0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d4cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d4cc4:
    // 0x1d4cc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4cc8:
    // 0x1d4cc8: 0xc040880  jal         func_102200
label_1d4ccc:
    if (ctx->pc == 0x1D4CCCu) {
        ctx->pc = 0x1D4CCCu;
            // 0x1d4ccc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->pc = 0x1D4CD0u;
        goto label_1d4cd0;
    }
    ctx->pc = 0x1D4CC8u;
    SET_GPR_U32(ctx, 31, 0x1D4CD0u);
    ctx->pc = 0x1D4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CC8u;
            // 0x1d4ccc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD0u; }
        if (ctx->pc != 0x1D4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD0u; }
        if (ctx->pc != 0x1D4CD0u) { return; }
    }
    ctx->pc = 0x1D4CD0u;
label_1d4cd0:
    // 0x1d4cd0: 0xc040a74  jal         func_1029D0
label_1d4cd4:
    if (ctx->pc == 0x1D4CD4u) {
        ctx->pc = 0x1D4CD4u;
            // 0x1d4cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CD8u;
        goto label_1d4cd8;
    }
    ctx->pc = 0x1D4CD0u;
    SET_GPR_U32(ctx, 31, 0x1D4CD8u);
    ctx->pc = 0x1D4CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4CD0u;
            // 0x1d4cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD8u; }
        if (ctx->pc != 0x1D4CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4CD8u; }
        if (ctx->pc != 0x1D4CD8u) { return; }
    }
    ctx->pc = 0x1D4CD8u;
label_1d4cd8:
    // 0x1d4cd8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4cdc:
    // 0x1d4cdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4ce0:
    // 0x1d4ce0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d4ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1d4ce4:
    // 0x1d4ce4: 0x0  nop
    ctx->pc = 0x1d4ce4u;
    // NOP
label_1d4ce8:
    // 0x1d4ce8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4cec:
    // 0x1d4cec: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4cf0:
    // 0x1d4cf0: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1d4cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4cf4:
    // 0x1d4cf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d4cf8:
    // 0x1d4cf8: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1d4cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1d4cfc:
    // 0x1d4cfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4d00:
    // 0x1d4d00: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4d04:
    // 0x1d4d04: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1d4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4d08:
    // 0x1d4d08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d4d0c:
    // 0x1d4d0c: 0xc065d00  jal         func_197400
label_1d4d10:
    if (ctx->pc == 0x1D4D10u) {
        ctx->pc = 0x1D4D10u;
            // 0x1d4d10: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->pc = 0x1D4D14u;
        goto label_1d4d14;
    }
    ctx->pc = 0x1D4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D14u);
    ctx->pc = 0x1D4D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D0Cu;
            // 0x1d4d10: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D14u; }
        if (ctx->pc != 0x1D4D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D14u; }
        if (ctx->pc != 0x1D4D14u) { return; }
    }
    ctx->pc = 0x1D4D14u;
label_1d4d14:
    // 0x1d4d14: 0x184001c4  blez        $v0, . + 4 + (0x1C4 << 2)
label_1d4d18:
    if (ctx->pc == 0x1D4D18u) {
        ctx->pc = 0x1D4D1Cu;
        goto label_1d4d1c;
    }
    ctx->pc = 0x1D4D14u;
    {
        const bool branch_taken_0x1d4d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4d14) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4D1Cu;
label_1d4d1c:
    // 0x1d4d1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4d20:
    // 0x1d4d20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d4d24:
    // 0x1d4d24: 0x146201c0  bne         $v1, $v0, . + 4 + (0x1C0 << 2)
label_1d4d28:
    if (ctx->pc == 0x1D4D28u) {
        ctx->pc = 0x1D4D2Cu;
        goto label_1d4d2c;
    }
    ctx->pc = 0x1D4D24u;
    {
        const bool branch_taken_0x1d4d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4d24) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4D2Cu;
label_1d4d2c:
    // 0x1d4d2c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4d30:
    // 0x1d4d30: 0xc06560c  jal         func_195830
label_1d4d34:
    if (ctx->pc == 0x1D4D34u) {
        ctx->pc = 0x1D4D34u;
            // 0x1d4d34: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4D38u;
        goto label_1d4d38;
    }
    ctx->pc = 0x1D4D30u;
    SET_GPR_U32(ctx, 31, 0x1D4D38u);
    ctx->pc = 0x1D4D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D30u;
            // 0x1d4d34: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D38u; }
        if (ctx->pc != 0x1D4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D38u; }
        if (ctx->pc != 0x1D4D38u) { return; }
    }
    ctx->pc = 0x1D4D38u;
label_1d4d38:
    // 0x1d4d38: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_1d4d3c:
    if (ctx->pc == 0x1D4D3Cu) {
        ctx->pc = 0x1D4D40u;
        goto label_1d4d40;
    }
    ctx->pc = 0x1D4D38u;
    {
        const bool branch_taken_0x1d4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d38) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4D40u;
label_1d4d40:
    // 0x1d4d40: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x1d4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_1d4d44:
    // 0x1d4d44: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4d48:
    // 0x1d4d48: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x1d4d48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)48759u)));
label_1d4d4c:
    // 0x1d4d4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d4d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d4d50:
    // 0x1d4d50: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1d4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_1d4d54:
    // 0x1d4d54: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4d54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4d58:
    // 0x1d4d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4d5c:
    // 0x1d4d5c: 0x0  nop
    ctx->pc = 0x1d4d5cu;
    // NOP
label_1d4d60:
    // 0x1d4d60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d4d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d4d64:
    // 0x1d4d64: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d4d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d4d68:
    // 0x1d4d68: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4d6c:
    // 0x1d4d6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d4d70:
    // 0x1d4d70: 0xc065d00  jal         func_197400
label_1d4d74:
    if (ctx->pc == 0x1D4D74u) {
        ctx->pc = 0x1D4D74u;
            // 0x1d4d74: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D4D78u;
        goto label_1d4d78;
    }
    ctx->pc = 0x1D4D70u;
    SET_GPR_U32(ctx, 31, 0x1D4D78u);
    ctx->pc = 0x1D4D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D70u;
            // 0x1d4d74: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D78u; }
        if (ctx->pc != 0x1D4D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4D78u; }
        if (ctx->pc != 0x1D4D78u) { return; }
    }
    ctx->pc = 0x1D4D78u;
label_1d4d78:
    // 0x1d4d78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4d7c:
    // 0x1d4d7c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d4d80:
    if (ctx->pc == 0x1D4D80u) {
        ctx->pc = 0x1D4D84u;
        goto label_1d4d84;
    }
    ctx->pc = 0x1D4D7Cu;
    {
        const bool branch_taken_0x1d4d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4d7c) {
            ctx->pc = 0x1D4DA0u;
            goto label_1d4da0;
        }
    }
    ctx->pc = 0x1D4D84u;
label_1d4d84:
    // 0x1d4d84: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4d88:
    // 0x1d4d88: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d4d8c:
    // 0x1d4d8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d4d90:
    if (ctx->pc == 0x1D4D90u) {
        ctx->pc = 0x1D4D94u;
        goto label_1d4d94;
    }
    ctx->pc = 0x1D4D8Cu;
    {
        const bool branch_taken_0x1d4d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4d8c) {
            ctx->pc = 0x1D4DA0u;
            goto label_1d4da0;
        }
    }
    ctx->pc = 0x1D4D94u;
label_1d4d94:
    // 0x1d4d94: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4d98:
    // 0x1d4d98: 0xc06560c  jal         func_195830
label_1d4d9c:
    if (ctx->pc == 0x1D4D9Cu) {
        ctx->pc = 0x1D4D9Cu;
            // 0x1d4d9c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4DA0u;
        goto label_1d4da0;
    }
    ctx->pc = 0x1D4D98u;
    SET_GPR_U32(ctx, 31, 0x1D4DA0u);
    ctx->pc = 0x1D4D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4D98u;
            // 0x1d4d9c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DA0u; }
        if (ctx->pc != 0x1D4DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DA0u; }
        if (ctx->pc != 0x1D4DA0u) { return; }
    }
    ctx->pc = 0x1D4DA0u;
label_1d4da0:
    // 0x1d4da0: 0xc065d00  jal         func_197400
label_1d4da4:
    if (ctx->pc == 0x1D4DA4u) {
        ctx->pc = 0x1D4DA8u;
        goto label_1d4da8;
    }
    ctx->pc = 0x1D4DA0u;
    SET_GPR_U32(ctx, 31, 0x1D4DA8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DA8u; }
        if (ctx->pc != 0x1D4DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DA8u; }
        if (ctx->pc != 0x1D4DA8u) { return; }
    }
    ctx->pc = 0x1D4DA8u;
label_1d4da8:
    // 0x1d4da8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1d4dac:
    if (ctx->pc == 0x1D4DACu) {
        ctx->pc = 0x1D4DB0u;
        goto label_1d4db0;
    }
    ctx->pc = 0x1D4DA8u;
    {
        const bool branch_taken_0x1d4da8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4da8) {
            ctx->pc = 0x1D4DD0u;
            goto label_1d4dd0;
        }
    }
    ctx->pc = 0x1D4DB0u;
label_1d4db0:
    // 0x1d4db0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4db4:
    // 0x1d4db4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1d4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1d4db8:
    // 0x1d4db8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d4dbc:
    if (ctx->pc == 0x1D4DBCu) {
        ctx->pc = 0x1D4DC0u;
        goto label_1d4dc0;
    }
    ctx->pc = 0x1D4DB8u;
    {
        const bool branch_taken_0x1d4db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4db8) {
            ctx->pc = 0x1D4DD0u;
            goto label_1d4dd0;
        }
    }
    ctx->pc = 0x1D4DC0u;
label_1d4dc0:
    // 0x1d4dc0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4dc4:
    // 0x1d4dc4: 0xc06560c  jal         func_195830
label_1d4dc8:
    if (ctx->pc == 0x1D4DC8u) {
        ctx->pc = 0x1D4DC8u;
            // 0x1d4dc8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4DCCu;
        goto label_1d4dcc;
    }
    ctx->pc = 0x1D4DC4u;
    SET_GPR_U32(ctx, 31, 0x1D4DCCu);
    ctx->pc = 0x1D4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DC4u;
            // 0x1d4dc8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DCCu; }
        if (ctx->pc != 0x1D4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DCCu; }
        if (ctx->pc != 0x1D4DCCu) { return; }
    }
    ctx->pc = 0x1D4DCCu;
label_1d4dcc:
    // 0x1d4dcc: 0x0  nop
    ctx->pc = 0x1d4dccu;
    // NOP
label_1d4dd0:
    // 0x1d4dd0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4dd4:
    // 0x1d4dd4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d4dd8:
    // 0x1d4dd8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d4ddc:
    if (ctx->pc == 0x1D4DDCu) {
        ctx->pc = 0x1D4DE0u;
        goto label_1d4de0;
    }
    ctx->pc = 0x1D4DD8u;
    {
        const bool branch_taken_0x1d4dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4dd8) {
            ctx->pc = 0x1D4DF0u;
            goto label_1d4df0;
        }
    }
    ctx->pc = 0x1D4DE0u;
label_1d4de0:
    // 0x1d4de0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4de4:
    // 0x1d4de4: 0xc06560c  jal         func_195830
label_1d4de8:
    if (ctx->pc == 0x1D4DE8u) {
        ctx->pc = 0x1D4DE8u;
            // 0x1d4de8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4DECu;
        goto label_1d4dec;
    }
    ctx->pc = 0x1D4DE4u;
    SET_GPR_U32(ctx, 31, 0x1D4DECu);
    ctx->pc = 0x1D4DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DE4u;
            // 0x1d4de8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DECu; }
        if (ctx->pc != 0x1D4DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DECu; }
        if (ctx->pc != 0x1D4DECu) { return; }
    }
    ctx->pc = 0x1D4DECu;
label_1d4dec:
    // 0x1d4dec: 0x0  nop
    ctx->pc = 0x1d4decu;
    // NOP
label_1d4df0:
    // 0x1d4df0: 0xc065d00  jal         func_197400
label_1d4df4:
    if (ctx->pc == 0x1D4DF4u) {
        ctx->pc = 0x1D4DF8u;
        goto label_1d4df8;
    }
    ctx->pc = 0x1D4DF0u;
    SET_GPR_U32(ctx, 31, 0x1D4DF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DF8u; }
        if (ctx->pc != 0x1D4DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DF8u; }
        if (ctx->pc != 0x1D4DF8u) { return; }
    }
    ctx->pc = 0x1D4DF8u;
label_1d4df8:
    // 0x1d4df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4dfc:
    // 0x1d4dfc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d4e00:
    if (ctx->pc == 0x1D4E00u) {
        ctx->pc = 0x1D4E04u;
        goto label_1d4e04;
    }
    ctx->pc = 0x1D4DFCu;
    {
        const bool branch_taken_0x1d4dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4dfc) {
            ctx->pc = 0x1D4E20u;
            goto label_1d4e20;
        }
    }
    ctx->pc = 0x1D4E04u;
label_1d4e04:
    // 0x1d4e04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4e08:
    // 0x1d4e08: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d4e0c:
    // 0x1d4e0c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d4e10:
    if (ctx->pc == 0x1D4E10u) {
        ctx->pc = 0x1D4E14u;
        goto label_1d4e14;
    }
    ctx->pc = 0x1D4E0Cu;
    {
        const bool branch_taken_0x1d4e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4e0c) {
            ctx->pc = 0x1D4E20u;
            goto label_1d4e20;
        }
    }
    ctx->pc = 0x1D4E14u;
label_1d4e14:
    // 0x1d4e14: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4e18:
    // 0x1d4e18: 0xc06560c  jal         func_195830
label_1d4e1c:
    if (ctx->pc == 0x1D4E1Cu) {
        ctx->pc = 0x1D4E1Cu;
            // 0x1d4e1c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4E20u;
        goto label_1d4e20;
    }
    ctx->pc = 0x1D4E18u;
    SET_GPR_U32(ctx, 31, 0x1D4E20u);
    ctx->pc = 0x1D4E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E18u;
            // 0x1d4e1c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E20u; }
        if (ctx->pc != 0x1D4E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E20u; }
        if (ctx->pc != 0x1D4E20u) { return; }
    }
    ctx->pc = 0x1D4E20u;
label_1d4e20:
    // 0x1d4e20: 0xc065d00  jal         func_197400
label_1d4e24:
    if (ctx->pc == 0x1D4E24u) {
        ctx->pc = 0x1D4E28u;
        goto label_1d4e28;
    }
    ctx->pc = 0x1D4E20u;
    SET_GPR_U32(ctx, 31, 0x1D4E28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E28u; }
        if (ctx->pc != 0x1D4E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E28u; }
        if (ctx->pc != 0x1D4E28u) { return; }
    }
    ctx->pc = 0x1D4E28u;
label_1d4e28:
    // 0x1d4e28: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1d4e2c:
    if (ctx->pc == 0x1D4E2Cu) {
        ctx->pc = 0x1D4E30u;
        goto label_1d4e30;
    }
    ctx->pc = 0x1D4E28u;
    {
        const bool branch_taken_0x1d4e28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4e28) {
            ctx->pc = 0x1D4E50u;
            goto label_1d4e50;
        }
    }
    ctx->pc = 0x1D4E30u;
label_1d4e30:
    // 0x1d4e30: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4e34:
    // 0x1d4e34: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1d4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1d4e38:
    // 0x1d4e38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d4e3c:
    if (ctx->pc == 0x1D4E3Cu) {
        ctx->pc = 0x1D4E40u;
        goto label_1d4e40;
    }
    ctx->pc = 0x1D4E38u;
    {
        const bool branch_taken_0x1d4e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4e38) {
            ctx->pc = 0x1D4E50u;
            goto label_1d4e50;
        }
    }
    ctx->pc = 0x1D4E40u;
label_1d4e40:
    // 0x1d4e40: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4e44:
    // 0x1d4e44: 0xc06560c  jal         func_195830
label_1d4e48:
    if (ctx->pc == 0x1D4E48u) {
        ctx->pc = 0x1D4E48u;
            // 0x1d4e48: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4E4Cu;
        goto label_1d4e4c;
    }
    ctx->pc = 0x1D4E44u;
    SET_GPR_U32(ctx, 31, 0x1D4E4Cu);
    ctx->pc = 0x1D4E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E44u;
            // 0x1d4e48: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E4Cu; }
        if (ctx->pc != 0x1D4E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E4Cu; }
        if (ctx->pc != 0x1D4E4Cu) { return; }
    }
    ctx->pc = 0x1D4E4Cu;
label_1d4e4c:
    // 0x1d4e4c: 0x0  nop
    ctx->pc = 0x1d4e4cu;
    // NOP
label_1d4e50:
    // 0x1d4e50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4e54:
    // 0x1d4e54: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d4e58:
    // 0x1d4e58: 0x14620173  bne         $v1, $v0, . + 4 + (0x173 << 2)
label_1d4e5c:
    if (ctx->pc == 0x1D4E5Cu) {
        ctx->pc = 0x1D4E60u;
        goto label_1d4e60;
    }
    ctx->pc = 0x1D4E58u;
    {
        const bool branch_taken_0x1d4e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4e58) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4E60u;
label_1d4e60:
    // 0x1d4e60: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4e64:
    // 0x1d4e64: 0xc06560c  jal         func_195830
label_1d4e68:
    if (ctx->pc == 0x1D4E68u) {
        ctx->pc = 0x1D4E68u;
            // 0x1d4e68: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4E6Cu;
        goto label_1d4e6c;
    }
    ctx->pc = 0x1D4E64u;
    SET_GPR_U32(ctx, 31, 0x1D4E6Cu);
    ctx->pc = 0x1D4E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E64u;
            // 0x1d4e68: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E6Cu; }
        if (ctx->pc != 0x1D4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E6Cu; }
        if (ctx->pc != 0x1D4E6Cu) { return; }
    }
    ctx->pc = 0x1D4E6Cu;
label_1d4e6c:
    // 0x1d4e6c: 0x1000016e  b           . + 4 + (0x16E << 2)
label_1d4e70:
    if (ctx->pc == 0x1D4E70u) {
        ctx->pc = 0x1D4E74u;
        goto label_1d4e74;
    }
    ctx->pc = 0x1D4E6Cu;
    {
        const bool branch_taken_0x1d4e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e6c) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4E74u;
label_1d4e74:
    // 0x1d4e74: 0x0  nop
    ctx->pc = 0x1d4e74u;
    // NOP
label_1d4e78:
    // 0x1d4e78: 0x3c023f85  lui         $v0, 0x3F85
    ctx->pc = 0x1d4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
label_1d4e7c:
    // 0x1d4e7c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1d4e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4e80:
    // 0x1d4e80: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1d4e80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
label_1d4e84:
    // 0x1d4e84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4e88:
    // 0x1d4e88: 0x0  nop
    ctx->pc = 0x1d4e88u;
    // NOP
label_1d4e8c:
    // 0x1d4e8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d4e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d4e90:
    // 0x1d4e90: 0xc065d00  jal         func_197400
label_1d4e94:
    if (ctx->pc == 0x1D4E94u) {
        ctx->pc = 0x1D4E94u;
            // 0x1d4e94: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->pc = 0x1D4E98u;
        goto label_1d4e98;
    }
    ctx->pc = 0x1D4E90u;
    SET_GPR_U32(ctx, 31, 0x1D4E98u);
    ctx->pc = 0x1D4E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4E90u;
            // 0x1d4e94: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E98u; }
        if (ctx->pc != 0x1D4E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4E98u; }
        if (ctx->pc != 0x1D4E98u) { return; }
    }
    ctx->pc = 0x1D4E98u;
label_1d4e98:
    // 0x1d4e98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4e9c:
    // 0x1d4e9c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d4ea0:
    if (ctx->pc == 0x1D4EA0u) {
        ctx->pc = 0x1D4EA4u;
        goto label_1d4ea4;
    }
    ctx->pc = 0x1D4E9Cu;
    {
        const bool branch_taken_0x1d4e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4e9c) {
            ctx->pc = 0x1D4EC0u;
            goto label_1d4ec0;
        }
    }
    ctx->pc = 0x1D4EA4u;
label_1d4ea4:
    // 0x1d4ea4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4ea8:
    // 0x1d4ea8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d4eac:
    // 0x1d4eac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d4eb0:
    if (ctx->pc == 0x1D4EB0u) {
        ctx->pc = 0x1D4EB4u;
        goto label_1d4eb4;
    }
    ctx->pc = 0x1D4EACu;
    {
        const bool branch_taken_0x1d4eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4eac) {
            ctx->pc = 0x1D4EC0u;
            goto label_1d4ec0;
        }
    }
    ctx->pc = 0x1D4EB4u;
label_1d4eb4:
    // 0x1d4eb4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4eb8:
    // 0x1d4eb8: 0xc06560c  jal         func_195830
label_1d4ebc:
    if (ctx->pc == 0x1D4EBCu) {
        ctx->pc = 0x1D4EBCu;
            // 0x1d4ebc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4EC0u;
        goto label_1d4ec0;
    }
    ctx->pc = 0x1D4EB8u;
    SET_GPR_U32(ctx, 31, 0x1D4EC0u);
    ctx->pc = 0x1D4EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EB8u;
            // 0x1d4ebc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EC0u; }
        if (ctx->pc != 0x1D4EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EC0u; }
        if (ctx->pc != 0x1D4EC0u) { return; }
    }
    ctx->pc = 0x1D4EC0u;
label_1d4ec0:
    // 0x1d4ec0: 0xc065d00  jal         func_197400
label_1d4ec4:
    if (ctx->pc == 0x1D4EC4u) {
        ctx->pc = 0x1D4EC8u;
        goto label_1d4ec8;
    }
    ctx->pc = 0x1D4EC0u;
    SET_GPR_U32(ctx, 31, 0x1D4EC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EC8u; }
        if (ctx->pc != 0x1D4EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EC8u; }
        if (ctx->pc != 0x1D4EC8u) { return; }
    }
    ctx->pc = 0x1D4EC8u;
label_1d4ec8:
    // 0x1d4ec8: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1d4ecc:
    if (ctx->pc == 0x1D4ECCu) {
        ctx->pc = 0x1D4ED0u;
        goto label_1d4ed0;
    }
    ctx->pc = 0x1D4EC8u;
    {
        const bool branch_taken_0x1d4ec8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4ec8) {
            ctx->pc = 0x1D4EF0u;
            goto label_1d4ef0;
        }
    }
    ctx->pc = 0x1D4ED0u;
label_1d4ed0:
    // 0x1d4ed0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4ed4:
    // 0x1d4ed4: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1d4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1d4ed8:
    // 0x1d4ed8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d4edc:
    if (ctx->pc == 0x1D4EDCu) {
        ctx->pc = 0x1D4EE0u;
        goto label_1d4ee0;
    }
    ctx->pc = 0x1D4ED8u;
    {
        const bool branch_taken_0x1d4ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4ed8) {
            ctx->pc = 0x1D4EF0u;
            goto label_1d4ef0;
        }
    }
    ctx->pc = 0x1D4EE0u;
label_1d4ee0:
    // 0x1d4ee0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4ee4:
    // 0x1d4ee4: 0xc06560c  jal         func_195830
label_1d4ee8:
    if (ctx->pc == 0x1D4EE8u) {
        ctx->pc = 0x1D4EE8u;
            // 0x1d4ee8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4EECu;
        goto label_1d4eec;
    }
    ctx->pc = 0x1D4EE4u;
    SET_GPR_U32(ctx, 31, 0x1D4EECu);
    ctx->pc = 0x1D4EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4EE4u;
            // 0x1d4ee8: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EECu; }
        if (ctx->pc != 0x1D4EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4EECu; }
        if (ctx->pc != 0x1D4EECu) { return; }
    }
    ctx->pc = 0x1D4EECu;
label_1d4eec:
    // 0x1d4eec: 0x0  nop
    ctx->pc = 0x1d4eecu;
    // NOP
label_1d4ef0:
    // 0x1d4ef0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4ef4:
    // 0x1d4ef4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d4ef8:
    // 0x1d4ef8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d4efc:
    if (ctx->pc == 0x1D4EFCu) {
        ctx->pc = 0x1D4F00u;
        goto label_1d4f00;
    }
    ctx->pc = 0x1D4EF8u;
    {
        const bool branch_taken_0x1d4ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4ef8) {
            ctx->pc = 0x1D4F10u;
            goto label_1d4f10;
        }
    }
    ctx->pc = 0x1D4F00u;
label_1d4f00:
    // 0x1d4f00: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4f04:
    // 0x1d4f04: 0xc06560c  jal         func_195830
label_1d4f08:
    if (ctx->pc == 0x1D4F08u) {
        ctx->pc = 0x1D4F08u;
            // 0x1d4f08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4F0Cu;
        goto label_1d4f0c;
    }
    ctx->pc = 0x1D4F04u;
    SET_GPR_U32(ctx, 31, 0x1D4F0Cu);
    ctx->pc = 0x1D4F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F04u;
            // 0x1d4f08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F0Cu; }
        if (ctx->pc != 0x1D4F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F0Cu; }
        if (ctx->pc != 0x1D4F0Cu) { return; }
    }
    ctx->pc = 0x1D4F0Cu;
label_1d4f0c:
    // 0x1d4f0c: 0x0  nop
    ctx->pc = 0x1d4f0cu;
    // NOP
label_1d4f10:
    // 0x1d4f10: 0xc065d00  jal         func_197400
label_1d4f14:
    if (ctx->pc == 0x1D4F14u) {
        ctx->pc = 0x1D4F18u;
        goto label_1d4f18;
    }
    ctx->pc = 0x1D4F10u;
    SET_GPR_U32(ctx, 31, 0x1D4F18u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F18u; }
        if (ctx->pc != 0x1D4F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F18u; }
        if (ctx->pc != 0x1D4F18u) { return; }
    }
    ctx->pc = 0x1D4F18u;
label_1d4f18:
    // 0x1d4f18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4f1c:
    // 0x1d4f1c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d4f20:
    if (ctx->pc == 0x1D4F20u) {
        ctx->pc = 0x1D4F24u;
        goto label_1d4f24;
    }
    ctx->pc = 0x1D4F1Cu;
    {
        const bool branch_taken_0x1d4f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4f1c) {
            ctx->pc = 0x1D4F40u;
            goto label_1d4f40;
        }
    }
    ctx->pc = 0x1D4F24u;
label_1d4f24:
    // 0x1d4f24: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4f28:
    // 0x1d4f28: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1d4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d4f2c:
    // 0x1d4f2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d4f30:
    if (ctx->pc == 0x1D4F30u) {
        ctx->pc = 0x1D4F34u;
        goto label_1d4f34;
    }
    ctx->pc = 0x1D4F2Cu;
    {
        const bool branch_taken_0x1d4f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4f2c) {
            ctx->pc = 0x1D4F40u;
            goto label_1d4f40;
        }
    }
    ctx->pc = 0x1D4F34u;
label_1d4f34:
    // 0x1d4f34: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4f38:
    // 0x1d4f38: 0xc06560c  jal         func_195830
label_1d4f3c:
    if (ctx->pc == 0x1D4F3Cu) {
        ctx->pc = 0x1D4F3Cu;
            // 0x1d4f3c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4F40u;
        goto label_1d4f40;
    }
    ctx->pc = 0x1D4F38u;
    SET_GPR_U32(ctx, 31, 0x1D4F40u);
    ctx->pc = 0x1D4F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F38u;
            // 0x1d4f3c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F40u; }
        if (ctx->pc != 0x1D4F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F40u; }
        if (ctx->pc != 0x1D4F40u) { return; }
    }
    ctx->pc = 0x1D4F40u;
label_1d4f40:
    // 0x1d4f40: 0xc065d00  jal         func_197400
label_1d4f44:
    if (ctx->pc == 0x1D4F44u) {
        ctx->pc = 0x1D4F48u;
        goto label_1d4f48;
    }
    ctx->pc = 0x1D4F40u;
    SET_GPR_U32(ctx, 31, 0x1D4F48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F48u; }
        if (ctx->pc != 0x1D4F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F48u; }
        if (ctx->pc != 0x1D4F48u) { return; }
    }
    ctx->pc = 0x1D4F48u;
label_1d4f48:
    // 0x1d4f48: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1d4f4c:
    if (ctx->pc == 0x1D4F4Cu) {
        ctx->pc = 0x1D4F50u;
        goto label_1d4f50;
    }
    ctx->pc = 0x1D4F48u;
    {
        const bool branch_taken_0x1d4f48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d4f48) {
            ctx->pc = 0x1D4F70u;
            goto label_1d4f70;
        }
    }
    ctx->pc = 0x1D4F50u;
label_1d4f50:
    // 0x1d4f50: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4f54:
    // 0x1d4f54: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1d4f58:
    // 0x1d4f58: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d4f5c:
    if (ctx->pc == 0x1D4F5Cu) {
        ctx->pc = 0x1D4F60u;
        goto label_1d4f60;
    }
    ctx->pc = 0x1D4F58u;
    {
        const bool branch_taken_0x1d4f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4f58) {
            ctx->pc = 0x1D4F70u;
            goto label_1d4f70;
        }
    }
    ctx->pc = 0x1D4F60u;
label_1d4f60:
    // 0x1d4f60: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4f64:
    // 0x1d4f64: 0xc06560c  jal         func_195830
label_1d4f68:
    if (ctx->pc == 0x1D4F68u) {
        ctx->pc = 0x1D4F68u;
            // 0x1d4f68: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4F6Cu;
        goto label_1d4f6c;
    }
    ctx->pc = 0x1D4F64u;
    SET_GPR_U32(ctx, 31, 0x1D4F6Cu);
    ctx->pc = 0x1D4F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F64u;
            // 0x1d4f68: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F6Cu; }
        if (ctx->pc != 0x1D4F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F6Cu; }
        if (ctx->pc != 0x1D4F6Cu) { return; }
    }
    ctx->pc = 0x1D4F6Cu;
label_1d4f6c:
    // 0x1d4f6c: 0x0  nop
    ctx->pc = 0x1d4f6cu;
    // NOP
label_1d4f70:
    // 0x1d4f70: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4f74:
    // 0x1d4f74: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d4f78:
    // 0x1d4f78: 0x1462012b  bne         $v1, $v0, . + 4 + (0x12B << 2)
label_1d4f7c:
    if (ctx->pc == 0x1D4F7Cu) {
        ctx->pc = 0x1D4F80u;
        goto label_1d4f80;
    }
    ctx->pc = 0x1D4F78u;
    {
        const bool branch_taken_0x1d4f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d4f78) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4F80u;
label_1d4f80:
    // 0x1d4f80: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d4f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d4f84:
    // 0x1d4f84: 0xc06560c  jal         func_195830
label_1d4f88:
    if (ctx->pc == 0x1D4F88u) {
        ctx->pc = 0x1D4F88u;
            // 0x1d4f88: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D4F8Cu;
        goto label_1d4f8c;
    }
    ctx->pc = 0x1D4F84u;
    SET_GPR_U32(ctx, 31, 0x1D4F8Cu);
    ctx->pc = 0x1D4F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4F84u;
            // 0x1d4f88: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F8Cu; }
        if (ctx->pc != 0x1D4F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4F8Cu; }
        if (ctx->pc != 0x1D4F8Cu) { return; }
    }
    ctx->pc = 0x1D4F8Cu;
label_1d4f8c:
    // 0x1d4f8c: 0x10000126  b           . + 4 + (0x126 << 2)
label_1d4f90:
    if (ctx->pc == 0x1D4F90u) {
        ctx->pc = 0x1D4F94u;
        goto label_1d4f94;
    }
    ctx->pc = 0x1D4F8Cu;
    {
        const bool branch_taken_0x1d4f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f8c) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D4F94u;
label_1d4f94:
    // 0x1d4f94: 0x0  nop
    ctx->pc = 0x1d4f94u;
    // NOP
label_1d4f98:
    // 0x1d4f98: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1d4f9c:
    // 0x1d4f9c: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1d4fa0:
    if (ctx->pc == 0x1D4FA0u) {
        ctx->pc = 0x1D4FA4u;
        goto label_1d4fa4;
    }
    ctx->pc = 0x1D4F9Cu;
    {
        const bool branch_taken_0x1d4f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f9c) {
            ctx->pc = 0x1D5040u;
            goto label_1d5040;
        }
    }
    ctx->pc = 0x1D4FA4u;
label_1d4fa4:
    // 0x1d4fa4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4fa8:
    // 0x1d4fa8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d4fac:
    // 0x1d4fac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d4facu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d4fb0:
    // 0x1d4fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4fb4:
    // 0x1d4fb4: 0x0  nop
    ctx->pc = 0x1d4fb4u;
    // NOP
label_1d4fb8:
    // 0x1d4fb8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1d4fb8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4fbc:
    // 0x1d4fbc: 0xc040d72  jal         func_1035C8
label_1d4fc0:
    if (ctx->pc == 0x1D4FC0u) {
        ctx->pc = 0x1D4FC0u;
            // 0x1d4fc0: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D4FC4u;
        goto label_1d4fc4;
    }
    ctx->pc = 0x1D4FBCu;
    SET_GPR_U32(ctx, 31, 0x1D4FC4u);
    ctx->pc = 0x1D4FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FBCu;
            // 0x1d4fc0: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FC4u; }
        if (ctx->pc != 0x1D4FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FC4u; }
        if (ctx->pc != 0x1D4FC4u) { return; }
    }
    ctx->pc = 0x1D4FC4u;
label_1d4fc4:
    // 0x1d4fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fc8:
    // 0x1d4fc8: 0xc040078  jal         func_1001E0
label_1d4fcc:
    if (ctx->pc == 0x1D4FCCu) {
        ctx->pc = 0x1D4FCCu;
            // 0x1d4fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FD0u;
        goto label_1d4fd0;
    }
    ctx->pc = 0x1D4FC8u;
    SET_GPR_U32(ctx, 31, 0x1D4FD0u);
    ctx->pc = 0x1D4FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FC8u;
            // 0x1d4fcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FD0u; }
        if (ctx->pc != 0x1D4FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FD0u; }
        if (ctx->pc != 0x1D4FD0u) { return; }
    }
    ctx->pc = 0x1D4FD0u;
label_1d4fd0:
    // 0x1d4fd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d4fd4:
    if (ctx->pc == 0x1D4FD4u) {
        ctx->pc = 0x1D4FD8u;
        goto label_1d4fd8;
    }
    ctx->pc = 0x1D4FD0u;
    {
        const bool branch_taken_0x1d4fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fd0) {
            ctx->pc = 0x1D4FF8u;
            goto label_1d4ff8;
        }
    }
    ctx->pc = 0x1D4FD8u;
label_1d4fd8:
    // 0x1d4fd8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4fdc:
    // 0x1d4fdc: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1d4fe0:
    // 0x1d4fe0: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1d4fe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1d4fe4:
    // 0x1d4fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4fe8:
    // 0x1d4fe8: 0x0  nop
    ctx->pc = 0x1d4fe8u;
    // NOP
label_1d4fec:
    // 0x1d4fec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d4fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d4ff0:
    // 0x1d4ff0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4ff4:
    if (ctx->pc == 0x1D4FF4u) {
        ctx->pc = 0x1D4FF4u;
            // 0x1d4ff4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D4FF8u;
        goto label_1d4ff8;
    }
    ctx->pc = 0x1D4FF0u;
    {
        const bool branch_taken_0x1d4ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FF0u;
            // 0x1d4ff4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff0) {
            ctx->pc = 0x1D5008u;
            goto label_1d5008;
        }
    }
    ctx->pc = 0x1D4FF8u;
label_1d4ff8:
    // 0x1d4ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4ffc:
    // 0x1d4ffc: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1d4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1d5000:
    // 0x1d5000: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d5004:
    // 0x1d5004: 0x0  nop
    ctx->pc = 0x1d5004u;
    // NOP
label_1d5008:
    // 0x1d5008: 0xc065d00  jal         func_197400
label_1d500c:
    if (ctx->pc == 0x1D500Cu) {
        ctx->pc = 0x1D5010u;
        goto label_1d5010;
    }
    ctx->pc = 0x1D5008u;
    SET_GPR_U32(ctx, 31, 0x1D5010u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5010u; }
        if (ctx->pc != 0x1D5010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5010u; }
        if (ctx->pc != 0x1D5010u) { return; }
    }
    ctx->pc = 0x1D5010u;
label_1d5010:
    // 0x1d5010: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5014:
    // 0x1d5014: 0x14430104  bne         $v0, $v1, . + 4 + (0x104 << 2)
label_1d5018:
    if (ctx->pc == 0x1D5018u) {
        ctx->pc = 0x1D501Cu;
        goto label_1d501c;
    }
    ctx->pc = 0x1D5014u;
    {
        const bool branch_taken_0x1d5014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5014) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D501Cu;
label_1d501c:
    // 0x1d501c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5020:
    // 0x1d5020: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d5024:
    // 0x1d5024: 0x14620100  bne         $v1, $v0, . + 4 + (0x100 << 2)
label_1d5028:
    if (ctx->pc == 0x1D5028u) {
        ctx->pc = 0x1D502Cu;
        goto label_1d502c;
    }
    ctx->pc = 0x1D5024u;
    {
        const bool branch_taken_0x1d5024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5024) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D502Cu;
label_1d502c:
    // 0x1d502c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d5030:
    // 0x1d5030: 0xc06560c  jal         func_195830
label_1d5034:
    if (ctx->pc == 0x1D5034u) {
        ctx->pc = 0x1D5034u;
            // 0x1d5034: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5038u;
        goto label_1d5038;
    }
    ctx->pc = 0x1D5030u;
    SET_GPR_U32(ctx, 31, 0x1D5038u);
    ctx->pc = 0x1D5034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5030u;
            // 0x1d5034: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5038u; }
        if (ctx->pc != 0x1D5038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5038u; }
        if (ctx->pc != 0x1D5038u) { return; }
    }
    ctx->pc = 0x1D5038u;
label_1d5038:
    // 0x1d5038: 0x100000fb  b           . + 4 + (0xFB << 2)
label_1d503c:
    if (ctx->pc == 0x1D503Cu) {
        ctx->pc = 0x1D5040u;
        goto label_1d5040;
    }
    ctx->pc = 0x1D5038u;
    {
        const bool branch_taken_0x1d5038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5038) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D5040u;
label_1d5040:
    // 0x1d5040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5044:
    // 0x1d5044: 0x14620074  bne         $v1, $v0, . + 4 + (0x74 << 2)
label_1d5048:
    if (ctx->pc == 0x1D5048u) {
        ctx->pc = 0x1D5048u;
            // 0x1d5048: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1D504Cu;
        goto label_1d504c;
    }
    ctx->pc = 0x1D5044u;
    {
        const bool branch_taken_0x1d5044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5044u;
            // 0x1d5048: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5044) {
            ctx->pc = 0x1D5218u;
            goto label_1d5218;
        }
    }
    ctx->pc = 0x1D504Cu;
label_1d504c:
    // 0x1d504c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1d504cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d5050:
    // 0x1d5050: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1d5050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1d5054:
    // 0x1d5054: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d5054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d5058:
    // 0x1d5058: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d505c:
    // 0x1d505c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d5060:
    // 0x1d5060: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1d5064:
    // 0x1d5064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5068:
    // 0x1d5068: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1d506c:
    // 0x1d506c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d506cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d5070:
    // 0x1d5070: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1d5070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d5074:
    // 0x1d5074: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5078:
    // 0x1d5078: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d5078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d507c:
    // 0x1d507c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1d507cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1d5080:
    // 0x1d5080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5084:
    // 0x1d5084: 0x0  nop
    ctx->pc = 0x1d5084u;
    // NOP
label_1d5088:
    // 0x1d5088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d508c:
    // 0x1d508c: 0xc04b6ee  jal         func_12DBB8
label_1d5090:
    if (ctx->pc == 0x1D5090u) {
        ctx->pc = 0x1D5090u;
            // 0x1d5090: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1D5094u;
        goto label_1d5094;
    }
    ctx->pc = 0x1D508Cu;
    SET_GPR_U32(ctx, 31, 0x1D5094u);
    ctx->pc = 0x1D5090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D508Cu;
            // 0x1d5090: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5094u; }
        if (ctx->pc != 0x1D5094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5094u; }
        if (ctx->pc != 0x1D5094u) { return; }
    }
    ctx->pc = 0x1D5094u;
label_1d5094:
    // 0x1d5094: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5098:
    // 0x1d5098: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d5098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d509c:
    // 0x1d509c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d50a0:
    // 0x1d50a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d50a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d50a4:
    // 0x1d50a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d50a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d50a8:
    // 0x1d50a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1d50ac:
    if (ctx->pc == 0x1D50ACu) {
        ctx->pc = 0x1D50ACu;
            // 0x1d50ac: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1D50B0u;
        goto label_1d50b0;
    }
    ctx->pc = 0x1D50A8u;
    {
        const bool branch_taken_0x1d50a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D50ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50A8u;
            // 0x1d50ac: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50a8) {
            ctx->pc = 0x1D50B8u;
            goto label_1d50b8;
        }
    }
    ctx->pc = 0x1D50B0u;
label_1d50b0:
    // 0x1d50b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d50b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d50b4:
    // 0x1d50b4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d50b8:
    // 0x1d50b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d50bc:
    // 0x1d50bc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1d50bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d50c0:
    // 0x1d50c0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1d50c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d50c4:
    // 0x1d50c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d50c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1d50c8:
    // 0x1d50c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d50c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d50cc:
    // 0x1d50cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1d50d0:
    if (ctx->pc == 0x1D50D0u) {
        ctx->pc = 0x1D50D0u;
            // 0x1d50d0: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1D50D4u;
        goto label_1d50d4;
    }
    ctx->pc = 0x1D50CCu;
    {
        const bool branch_taken_0x1d50cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D50D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50CCu;
            // 0x1d50d0: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50cc) {
            ctx->pc = 0x1D50E0u;
            goto label_1d50e0;
        }
    }
    ctx->pc = 0x1D50D4u;
label_1d50d4:
    // 0x1d50d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d50d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d50d8:
    // 0x1d50d8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1d50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1d50dc:
    // 0x1d50dc: 0x0  nop
    ctx->pc = 0x1d50dcu;
    // NOP
label_1d50e0:
    // 0x1d50e0: 0xc065d00  jal         func_197400
label_1d50e4:
    if (ctx->pc == 0x1D50E4u) {
        ctx->pc = 0x1D50E8u;
        goto label_1d50e8;
    }
    ctx->pc = 0x1D50E0u;
    SET_GPR_U32(ctx, 31, 0x1D50E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E8u; }
        if (ctx->pc != 0x1D50E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E8u; }
        if (ctx->pc != 0x1D50E8u) { return; }
    }
    ctx->pc = 0x1D50E8u;
label_1d50e8:
    // 0x1d50e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d50e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d50ec:
    // 0x1d50ec: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1d50f0:
    if (ctx->pc == 0x1D50F0u) {
        ctx->pc = 0x1D50F4u;
        goto label_1d50f4;
    }
    ctx->pc = 0x1D50ECu;
    {
        const bool branch_taken_0x1d50ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d50ec) {
            ctx->pc = 0x1D5118u;
            goto label_1d5118;
        }
    }
    ctx->pc = 0x1D50F4u;
label_1d50f4:
    // 0x1d50f4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d50f8:
    // 0x1d50f8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d50fc:
    // 0x1d50fc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1d5100:
    if (ctx->pc == 0x1D5100u) {
        ctx->pc = 0x1D5104u;
        goto label_1d5104;
    }
    ctx->pc = 0x1D50FCu;
    {
        const bool branch_taken_0x1d50fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d50fc) {
            ctx->pc = 0x1D5118u;
            goto label_1d5118;
        }
    }
    ctx->pc = 0x1D5104u;
label_1d5104:
    // 0x1d5104: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d5108:
    // 0x1d5108: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d510c:
    // 0x1d510c: 0xc0655b0  jal         func_1956C0
label_1d5110:
    if (ctx->pc == 0x1D5110u) {
        ctx->pc = 0x1D5110u;
            // 0x1d5110: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5114u;
        goto label_1d5114;
    }
    ctx->pc = 0x1D510Cu;
    SET_GPR_U32(ctx, 31, 0x1D5114u);
    ctx->pc = 0x1D5110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D510Cu;
            // 0x1d5110: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5114u; }
        if (ctx->pc != 0x1D5114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5114u; }
        if (ctx->pc != 0x1D5114u) { return; }
    }
    ctx->pc = 0x1D5114u;
label_1d5114:
    // 0x1d5114: 0x0  nop
    ctx->pc = 0x1d5114u;
    // NOP
label_1d5118:
    // 0x1d5118: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d511c:
    // 0x1d511c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d5120:
    // 0x1d5120: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5124:
    if (ctx->pc == 0x1D5124u) {
        ctx->pc = 0x1D5128u;
        goto label_1d5128;
    }
    ctx->pc = 0x1D5120u;
    {
        const bool branch_taken_0x1d5120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5120) {
            ctx->pc = 0x1D5138u;
            goto label_1d5138;
        }
    }
    ctx->pc = 0x1D5128u;
label_1d5128:
    // 0x1d5128: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d512c:
    // 0x1d512c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d512cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d5130:
    // 0x1d5130: 0xc0655b0  jal         func_1956C0
label_1d5134:
    if (ctx->pc == 0x1D5134u) {
        ctx->pc = 0x1D5134u;
            // 0x1d5134: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5138u;
        goto label_1d5138;
    }
    ctx->pc = 0x1D5130u;
    SET_GPR_U32(ctx, 31, 0x1D5138u);
    ctx->pc = 0x1D5134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5130u;
            // 0x1d5134: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5138u; }
        if (ctx->pc != 0x1D5138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5138u; }
        if (ctx->pc != 0x1D5138u) { return; }
    }
    ctx->pc = 0x1D5138u;
label_1d5138:
    // 0x1d5138: 0xc065d00  jal         func_197400
label_1d513c:
    if (ctx->pc == 0x1D513Cu) {
        ctx->pc = 0x1D5140u;
        goto label_1d5140;
    }
    ctx->pc = 0x1D5138u;
    SET_GPR_U32(ctx, 31, 0x1D5140u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5140u; }
        if (ctx->pc != 0x1D5140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5140u; }
        if (ctx->pc != 0x1D5140u) { return; }
    }
    ctx->pc = 0x1D5140u;
label_1d5140:
    // 0x1d5140: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d5140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d5144:
    // 0x1d5144: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1d5148:
    if (ctx->pc == 0x1D5148u) {
        ctx->pc = 0x1D514Cu;
        goto label_1d514c;
    }
    ctx->pc = 0x1D5144u;
    {
        const bool branch_taken_0x1d5144 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5144) {
            ctx->pc = 0x1D5170u;
            goto label_1d5170;
        }
    }
    ctx->pc = 0x1D514Cu;
label_1d514c:
    // 0x1d514c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5150:
    // 0x1d5150: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1d5150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d5154:
    // 0x1d5154: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1d5158:
    if (ctx->pc == 0x1D5158u) {
        ctx->pc = 0x1D515Cu;
        goto label_1d515c;
    }
    ctx->pc = 0x1D5154u;
    {
        const bool branch_taken_0x1d5154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5154) {
            ctx->pc = 0x1D5170u;
            goto label_1d5170;
        }
    }
    ctx->pc = 0x1D515Cu;
label_1d515c:
    // 0x1d515c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d515cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d5160:
    // 0x1d5160: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d5164:
    // 0x1d5164: 0xc0655b0  jal         func_1956C0
label_1d5168:
    if (ctx->pc == 0x1D5168u) {
        ctx->pc = 0x1D5168u;
            // 0x1d5168: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D516Cu;
        goto label_1d516c;
    }
    ctx->pc = 0x1D5164u;
    SET_GPR_U32(ctx, 31, 0x1D516Cu);
    ctx->pc = 0x1D5168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5164u;
            // 0x1d5168: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D516Cu; }
        if (ctx->pc != 0x1D516Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D516Cu; }
        if (ctx->pc != 0x1D516Cu) { return; }
    }
    ctx->pc = 0x1D516Cu;
label_1d516c:
    // 0x1d516c: 0x0  nop
    ctx->pc = 0x1d516cu;
    // NOP
label_1d5170:
    // 0x1d5170: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d5170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5174:
    // 0x1d5174: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1d5174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d5178:
    // 0x1d5178: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d517c:
    if (ctx->pc == 0x1D517Cu) {
        ctx->pc = 0x1D5180u;
        goto label_1d5180;
    }
    ctx->pc = 0x1D5178u;
    {
        const bool branch_taken_0x1d5178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5178) {
            ctx->pc = 0x1D5190u;
            goto label_1d5190;
        }
    }
    ctx->pc = 0x1D5180u;
label_1d5180:
    // 0x1d5180: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d5184:
    // 0x1d5184: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d5188:
    // 0x1d5188: 0xc0655b0  jal         func_1956C0
label_1d518c:
    if (ctx->pc == 0x1D518Cu) {
        ctx->pc = 0x1D518Cu;
            // 0x1d518c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5190u;
        goto label_1d5190;
    }
    ctx->pc = 0x1D5188u;
    SET_GPR_U32(ctx, 31, 0x1D5190u);
    ctx->pc = 0x1D518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5188u;
            // 0x1d518c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5190u; }
        if (ctx->pc != 0x1D5190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5190u; }
        if (ctx->pc != 0x1D5190u) { return; }
    }
    ctx->pc = 0x1D5190u;
label_1d5190:
    // 0x1d5190: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5194:
    // 0x1d5194: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x1d5194u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
label_1d5198:
    // 0x1d5198: 0x142000a3  bnez        $at, . + 4 + (0xA3 << 2)
label_1d519c:
    if (ctx->pc == 0x1D519Cu) {
        ctx->pc = 0x1D519Cu;
            // 0x1d519c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D51A0u;
        goto label_1d51a0;
    }
    ctx->pc = 0x1D5198u;
    {
        const bool branch_taken_0x1d5198 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5198u;
            // 0x1d519c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5198) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D51A0u;
label_1d51a0:
    // 0x1d51a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d51a4:
    // 0x1d51a4: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1d51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1d51a8:
    // 0x1d51a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d51a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d51ac:
    // 0x1d51ac: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1d51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1d51b0:
    // 0x1d51b0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1d51b4:
    if (ctx->pc == 0x1D51B4u) {
        ctx->pc = 0x1D51B8u;
        goto label_1d51b8;
    }
    ctx->pc = 0x1D51B0u;
    {
        const bool branch_taken_0x1d51b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d51b0) {
            ctx->pc = 0x1D51E8u;
            goto label_1d51e8;
        }
    }
    ctx->pc = 0x1D51B8u;
label_1d51b8:
    // 0x1d51b8: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x1d51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
label_1d51bc:
    // 0x1d51bc: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1d51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_1d51c0:
    // 0x1d51c0: 0x3464c28f  ori         $a0, $v1, 0xC28F
    ctx->pc = 0x1d51c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
label_1d51c4:
    // 0x1d51c4: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x1d51c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
label_1d51c8:
    // 0x1d51c8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d51c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d51cc:
    // 0x1d51cc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1d51d0:
    // 0x1d51d0: 0x3c02bc75  lui         $v0, 0xBC75
    ctx->pc = 0x1d51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48245 << 16));
label_1d51d4:
    // 0x1d51d4: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1d51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_1d51d8:
    // 0x1d51d8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d51d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d51dc:
    // 0x1d51dc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1d51e0:
    // 0x1d51e0: 0x10000091  b           . + 4 + (0x91 << 2)
label_1d51e4:
    if (ctx->pc == 0x1D51E4u) {
        ctx->pc = 0x1D51E4u;
            // 0x1d51e4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1D51E8u;
        goto label_1d51e8;
    }
    ctx->pc = 0x1D51E0u;
    {
        const bool branch_taken_0x1d51e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51E0u;
            // 0x1d51e4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51e0) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D51E8u;
label_1d51e8:
    // 0x1d51e8: 0x3c02bd75  lui         $v0, 0xBD75
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48501 << 16));
label_1d51ec:
    // 0x1d51ec: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1d51ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d51f0:
    // 0x1d51f0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1d51f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1d51f4:
    // 0x1d51f4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1d51f8:
    // 0x1d51f8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d51f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d51fc:
    // 0x1d51fc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1d51fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1d5200:
    // 0x1d5200: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1d5200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
label_1d5204:
    // 0x1d5204: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1d5204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_1d5208:
    // 0x1d5208: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1d5208u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1d520c:
    // 0x1d520c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1d520cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1d5210:
    // 0x1d5210: 0x10000085  b           . + 4 + (0x85 << 2)
label_1d5214:
    if (ctx->pc == 0x1D5214u) {
        ctx->pc = 0x1D5214u;
            // 0x1d5214: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1D5218u;
        goto label_1d5218;
    }
    ctx->pc = 0x1D5210u;
    {
        const bool branch_taken_0x1d5210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5210u;
            // 0x1d5214: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5210) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D5218u;
label_1d5218:
    // 0x1d5218: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d521c:
    // 0x1d521c: 0x14620082  bne         $v1, $v0, . + 4 + (0x82 << 2)
label_1d5220:
    if (ctx->pc == 0x1D5220u) {
        ctx->pc = 0x1D5224u;
        goto label_1d5224;
    }
    ctx->pc = 0x1D521Cu;
    {
        const bool branch_taken_0x1d521c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d521c) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D5224u;
label_1d5224:
    // 0x1d5224: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d5224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5228:
    // 0x1d5228: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
label_1d522c:
    // 0x1d522c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1d522cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d5230:
    // 0x1d5230: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d5230u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5234:
    // 0x1d5234: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1d5234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1d5238:
    // 0x1d5238: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d5238u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1d523c:
    // 0x1d523c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5240:
    // 0x1d5240: 0x0  nop
    ctx->pc = 0x1d5240u;
    // NOP
label_1d5244:
    // 0x1d5244: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d5244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d5248:
    // 0x1d5248: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d5248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1d524c:
    // 0x1d524c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1d524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5250:
    // 0x1d5250: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d5250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d5254:
    // 0x1d5254: 0xc065d00  jal         func_197400
label_1d5258:
    if (ctx->pc == 0x1D5258u) {
        ctx->pc = 0x1D5258u;
            // 0x1d5258: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D525Cu;
        goto label_1d525c;
    }
    ctx->pc = 0x1D5254u;
    SET_GPR_U32(ctx, 31, 0x1D525Cu);
    ctx->pc = 0x1D5258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5254u;
            // 0x1d5258: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D525Cu; }
        if (ctx->pc != 0x1D525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D525Cu; }
        if (ctx->pc != 0x1D525Cu) { return; }
    }
    ctx->pc = 0x1D525Cu;
label_1d525c:
    // 0x1d525c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5260:
    // 0x1d5260: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1d5264:
    if (ctx->pc == 0x1D5264u) {
        ctx->pc = 0x1D5268u;
        goto label_1d5268;
    }
    ctx->pc = 0x1D5260u;
    {
        const bool branch_taken_0x1d5260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5260) {
            ctx->pc = 0x1D5288u;
            goto label_1d5288;
        }
    }
    ctx->pc = 0x1D5268u;
label_1d5268:
    // 0x1d5268: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d526c:
    // 0x1d526c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d5270:
    // 0x1d5270: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5274:
    if (ctx->pc == 0x1D5274u) {
        ctx->pc = 0x1D5278u;
        goto label_1d5278;
    }
    ctx->pc = 0x1D5270u;
    {
        const bool branch_taken_0x1d5270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5270) {
            ctx->pc = 0x1D5288u;
            goto label_1d5288;
        }
    }
    ctx->pc = 0x1D5278u;
label_1d5278:
    // 0x1d5278: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d527c:
    // 0x1d527c: 0xc06560c  jal         func_195830
label_1d5280:
    if (ctx->pc == 0x1D5280u) {
        ctx->pc = 0x1D5280u;
            // 0x1d5280: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5284u;
        goto label_1d5284;
    }
    ctx->pc = 0x1D527Cu;
    SET_GPR_U32(ctx, 31, 0x1D5284u);
    ctx->pc = 0x1D5280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D527Cu;
            // 0x1d5280: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5284u; }
        if (ctx->pc != 0x1D5284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5284u; }
        if (ctx->pc != 0x1D5284u) { return; }
    }
    ctx->pc = 0x1D5284u;
label_1d5284:
    // 0x1d5284: 0x0  nop
    ctx->pc = 0x1d5284u;
    // NOP
label_1d5288:
    // 0x1d5288: 0xc065d00  jal         func_197400
label_1d528c:
    if (ctx->pc == 0x1D528Cu) {
        ctx->pc = 0x1D5290u;
        goto label_1d5290;
    }
    ctx->pc = 0x1D5288u;
    SET_GPR_U32(ctx, 31, 0x1D5290u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5290u; }
        if (ctx->pc != 0x1D5290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5290u; }
        if (ctx->pc != 0x1D5290u) { return; }
    }
    ctx->pc = 0x1D5290u;
label_1d5290:
    // 0x1d5290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5294:
    // 0x1d5294: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d5298:
    if (ctx->pc == 0x1D5298u) {
        ctx->pc = 0x1D529Cu;
        goto label_1d529c;
    }
    ctx->pc = 0x1D5294u;
    {
        const bool branch_taken_0x1d5294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5294) {
            ctx->pc = 0x1D52B8u;
            goto label_1d52b8;
        }
    }
    ctx->pc = 0x1D529Cu;
label_1d529c:
    // 0x1d529c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d529cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d52a0:
    // 0x1d52a0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d52a4:
    // 0x1d52a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d52a8:
    if (ctx->pc == 0x1D52A8u) {
        ctx->pc = 0x1D52ACu;
        goto label_1d52ac;
    }
    ctx->pc = 0x1D52A4u;
    {
        const bool branch_taken_0x1d52a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d52a4) {
            ctx->pc = 0x1D52B8u;
            goto label_1d52b8;
        }
    }
    ctx->pc = 0x1D52ACu;
label_1d52ac:
    // 0x1d52ac: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d52acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d52b0:
    // 0x1d52b0: 0xc06560c  jal         func_195830
label_1d52b4:
    if (ctx->pc == 0x1D52B4u) {
        ctx->pc = 0x1D52B4u;
            // 0x1d52b4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D52B8u;
        goto label_1d52b8;
    }
    ctx->pc = 0x1D52B0u;
    SET_GPR_U32(ctx, 31, 0x1D52B8u);
    ctx->pc = 0x1D52B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52B0u;
            // 0x1d52b4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52B8u; }
        if (ctx->pc != 0x1D52B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52B8u; }
        if (ctx->pc != 0x1D52B8u) { return; }
    }
    ctx->pc = 0x1D52B8u;
label_1d52b8:
    // 0x1d52b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d52bc:
    // 0x1d52bc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d52c0:
    // 0x1d52c0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d52c4:
    if (ctx->pc == 0x1D52C4u) {
        ctx->pc = 0x1D52C8u;
        goto label_1d52c8;
    }
    ctx->pc = 0x1D52C0u;
    {
        const bool branch_taken_0x1d52c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d52c0) {
            ctx->pc = 0x1D52D8u;
            goto label_1d52d8;
        }
    }
    ctx->pc = 0x1D52C8u;
label_1d52c8:
    // 0x1d52c8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d52c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d52cc:
    // 0x1d52cc: 0xc06560c  jal         func_195830
label_1d52d0:
    if (ctx->pc == 0x1D52D0u) {
        ctx->pc = 0x1D52D0u;
            // 0x1d52d0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D52D4u;
        goto label_1d52d4;
    }
    ctx->pc = 0x1D52CCu;
    SET_GPR_U32(ctx, 31, 0x1D52D4u);
    ctx->pc = 0x1D52D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52CCu;
            // 0x1d52d0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52D4u; }
        if (ctx->pc != 0x1D52D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52D4u; }
        if (ctx->pc != 0x1D52D4u) { return; }
    }
    ctx->pc = 0x1D52D4u;
label_1d52d4:
    // 0x1d52d4: 0x0  nop
    ctx->pc = 0x1d52d4u;
    // NOP
label_1d52d8:
    // 0x1d52d8: 0xc065d00  jal         func_197400
label_1d52dc:
    if (ctx->pc == 0x1D52DCu) {
        ctx->pc = 0x1D52E0u;
        goto label_1d52e0;
    }
    ctx->pc = 0x1D52D8u;
    SET_GPR_U32(ctx, 31, 0x1D52E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52E0u; }
        if (ctx->pc != 0x1D52E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52E0u; }
        if (ctx->pc != 0x1D52E0u) { return; }
    }
    ctx->pc = 0x1D52E0u;
label_1d52e0:
    // 0x1d52e0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d52e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d52e4:
    // 0x1d52e4: 0x14200050  bnez        $at, . + 4 + (0x50 << 2)
label_1d52e8:
    if (ctx->pc == 0x1D52E8u) {
        ctx->pc = 0x1D52ECu;
        goto label_1d52ec;
    }
    ctx->pc = 0x1D52E4u;
    {
        const bool branch_taken_0x1d52e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d52e4) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D52ECu;
label_1d52ec:
    // 0x1d52ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d52f0:
    // 0x1d52f0: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1d52f4:
    // 0x1d52f4: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_1d52f8:
    if (ctx->pc == 0x1D52F8u) {
        ctx->pc = 0x1D52FCu;
        goto label_1d52fc;
    }
    ctx->pc = 0x1D52F4u;
    {
        const bool branch_taken_0x1d52f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d52f4) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D52FCu;
label_1d52fc:
    // 0x1d52fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d52fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d5300:
    // 0x1d5300: 0xc06560c  jal         func_195830
label_1d5304:
    if (ctx->pc == 0x1D5304u) {
        ctx->pc = 0x1D5304u;
            // 0x1d5304: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5308u;
        goto label_1d5308;
    }
    ctx->pc = 0x1D5300u;
    SET_GPR_U32(ctx, 31, 0x1D5308u);
    ctx->pc = 0x1D5304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5300u;
            // 0x1d5304: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5308u; }
        if (ctx->pc != 0x1D5308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5308u; }
        if (ctx->pc != 0x1D5308u) { return; }
    }
    ctx->pc = 0x1D5308u;
label_1d5308:
    // 0x1d5308: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d530c:
    if (ctx->pc == 0x1D530Cu) {
        ctx->pc = 0x1D5310u;
        goto label_1d5310;
    }
    ctx->pc = 0x1D5308u;
    {
        const bool branch_taken_0x1d5308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5308) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D5310u;
label_1d5310:
    // 0x1d5310: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1d5310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1d5314:
    // 0x1d5314: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d5314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5318:
    // 0x1d5318: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1d5318u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1d531c:
    // 0x1d531c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d531cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5320:
    // 0x1d5320: 0x0  nop
    ctx->pc = 0x1d5320u;
    // NOP
label_1d5324:
    // 0x1d5324: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d5324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d5328:
    // 0x1d5328: 0xc065d00  jal         func_197400
label_1d532c:
    if (ctx->pc == 0x1D532Cu) {
        ctx->pc = 0x1D532Cu;
            // 0x1d532c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1D5330u;
        goto label_1d5330;
    }
    ctx->pc = 0x1D5328u;
    SET_GPR_U32(ctx, 31, 0x1D5330u);
    ctx->pc = 0x1D532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5328u;
            // 0x1d532c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5330u; }
        if (ctx->pc != 0x1D5330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5330u; }
        if (ctx->pc != 0x1D5330u) { return; }
    }
    ctx->pc = 0x1D5330u;
label_1d5330:
    // 0x1d5330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5334:
    // 0x1d5334: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d5338:
    if (ctx->pc == 0x1D5338u) {
        ctx->pc = 0x1D533Cu;
        goto label_1d533c;
    }
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D5358u;
            goto label_1d5358;
        }
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5340:
    // 0x1d5340: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d5340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1d5344:
    // 0x1d5344: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d5348:
    if (ctx->pc == 0x1D5348u) {
        ctx->pc = 0x1D534Cu;
        goto label_1d534c;
    }
    ctx->pc = 0x1D5344u;
    {
        const bool branch_taken_0x1d5344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5344) {
            ctx->pc = 0x1D5358u;
            goto label_1d5358;
        }
    }
    ctx->pc = 0x1D534Cu;
label_1d534c:
    // 0x1d534c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d534cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d5350:
    // 0x1d5350: 0xc06560c  jal         func_195830
label_1d5354:
    if (ctx->pc == 0x1D5354u) {
        ctx->pc = 0x1D5354u;
            // 0x1d5354: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5358u;
        goto label_1d5358;
    }
    ctx->pc = 0x1D5350u;
    SET_GPR_U32(ctx, 31, 0x1D5358u);
    ctx->pc = 0x1D5354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5350u;
            // 0x1d5354: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5358u; }
        if (ctx->pc != 0x1D5358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5358u; }
        if (ctx->pc != 0x1D5358u) { return; }
    }
    ctx->pc = 0x1D5358u;
label_1d5358:
    // 0x1d5358: 0xc065d00  jal         func_197400
label_1d535c:
    if (ctx->pc == 0x1D535Cu) {
        ctx->pc = 0x1D5360u;
        goto label_1d5360;
    }
    ctx->pc = 0x1D5358u;
    SET_GPR_U32(ctx, 31, 0x1D5360u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5360u; }
        if (ctx->pc != 0x1D5360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5360u; }
        if (ctx->pc != 0x1D5360u) { return; }
    }
    ctx->pc = 0x1D5360u;
label_1d5360:
    // 0x1d5360: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1d5364:
    if (ctx->pc == 0x1D5364u) {
        ctx->pc = 0x1D5368u;
        goto label_1d5368;
    }
    ctx->pc = 0x1D5360u;
    {
        const bool branch_taken_0x1d5360 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d5360) {
            ctx->pc = 0x1D5388u;
            goto label_1d5388;
        }
    }
    ctx->pc = 0x1D5368u;
label_1d5368:
    // 0x1d5368: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d5368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d536c:
    // 0x1d536c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1d5370:
    // 0x1d5370: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5374:
    if (ctx->pc == 0x1D5374u) {
        ctx->pc = 0x1D5378u;
        goto label_1d5378;
    }
    ctx->pc = 0x1D5370u;
    {
        const bool branch_taken_0x1d5370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5370) {
            ctx->pc = 0x1D5388u;
            goto label_1d5388;
        }
    }
    ctx->pc = 0x1D5378u;
label_1d5378:
    // 0x1d5378: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d537c:
    // 0x1d537c: 0xc06560c  jal         func_195830
label_1d5380:
    if (ctx->pc == 0x1D5380u) {
        ctx->pc = 0x1D5380u;
            // 0x1d5380: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5384u;
        goto label_1d5384;
    }
    ctx->pc = 0x1D537Cu;
    SET_GPR_U32(ctx, 31, 0x1D5384u);
    ctx->pc = 0x1D5380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D537Cu;
            // 0x1d5380: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5384u; }
        if (ctx->pc != 0x1D5384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5384u; }
        if (ctx->pc != 0x1D5384u) { return; }
    }
    ctx->pc = 0x1D5384u;
label_1d5384:
    // 0x1d5384: 0x0  nop
    ctx->pc = 0x1d5384u;
    // NOP
label_1d5388:
    // 0x1d5388: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d5388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d538c:
    // 0x1d538c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d5390:
    // 0x1d5390: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5394:
    if (ctx->pc == 0x1D5394u) {
        ctx->pc = 0x1D5398u;
        goto label_1d5398;
    }
    ctx->pc = 0x1D5390u;
    {
        const bool branch_taken_0x1d5390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5390) {
            ctx->pc = 0x1D53A8u;
            goto label_1d53a8;
        }
    }
    ctx->pc = 0x1D5398u;
label_1d5398:
    // 0x1d5398: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d539c:
    // 0x1d539c: 0xc06560c  jal         func_195830
label_1d53a0:
    if (ctx->pc == 0x1D53A0u) {
        ctx->pc = 0x1D53A0u;
            // 0x1d53a0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D53A4u;
        goto label_1d53a4;
    }
    ctx->pc = 0x1D539Cu;
    SET_GPR_U32(ctx, 31, 0x1D53A4u);
    ctx->pc = 0x1D53A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D539Cu;
            // 0x1d53a0: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53A4u; }
        if (ctx->pc != 0x1D53A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53A4u; }
        if (ctx->pc != 0x1D53A4u) { return; }
    }
    ctx->pc = 0x1D53A4u;
label_1d53a4:
    // 0x1d53a4: 0x0  nop
    ctx->pc = 0x1d53a4u;
    // NOP
label_1d53a8:
    // 0x1d53a8: 0xc065d00  jal         func_197400
label_1d53ac:
    if (ctx->pc == 0x1D53ACu) {
        ctx->pc = 0x1D53B0u;
        goto label_1d53b0;
    }
    ctx->pc = 0x1D53A8u;
    SET_GPR_U32(ctx, 31, 0x1D53B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B0u; }
        if (ctx->pc != 0x1D53B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53B0u; }
        if (ctx->pc != 0x1D53B0u) { return; }
    }
    ctx->pc = 0x1D53B0u;
label_1d53b0:
    // 0x1d53b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d53b4:
    // 0x1d53b4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1d53b8:
    if (ctx->pc == 0x1D53B8u) {
        ctx->pc = 0x1D53BCu;
        goto label_1d53bc;
    }
    ctx->pc = 0x1D53B4u;
    {
        const bool branch_taken_0x1d53b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d53b4) {
            ctx->pc = 0x1D53D8u;
            goto label_1d53d8;
        }
    }
    ctx->pc = 0x1D53BCu;
label_1d53bc:
    // 0x1d53bc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d53bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d53c0:
    // 0x1d53c0: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1d53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d53c4:
    // 0x1d53c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d53c8:
    if (ctx->pc == 0x1D53C8u) {
        ctx->pc = 0x1D53CCu;
        goto label_1d53cc;
    }
    ctx->pc = 0x1D53C4u;
    {
        const bool branch_taken_0x1d53c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d53c4) {
            ctx->pc = 0x1D53D8u;
            goto label_1d53d8;
        }
    }
    ctx->pc = 0x1D53CCu;
label_1d53cc:
    // 0x1d53cc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d53ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d53d0:
    // 0x1d53d0: 0xc06560c  jal         func_195830
label_1d53d4:
    if (ctx->pc == 0x1D53D4u) {
        ctx->pc = 0x1D53D4u;
            // 0x1d53d4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D53D8u;
        goto label_1d53d8;
    }
    ctx->pc = 0x1D53D0u;
    SET_GPR_U32(ctx, 31, 0x1D53D8u);
    ctx->pc = 0x1D53D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53D0u;
            // 0x1d53d4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53D8u; }
        if (ctx->pc != 0x1D53D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53D8u; }
        if (ctx->pc != 0x1D53D8u) { return; }
    }
    ctx->pc = 0x1D53D8u;
label_1d53d8:
    // 0x1d53d8: 0xc065d00  jal         func_197400
label_1d53dc:
    if (ctx->pc == 0x1D53DCu) {
        ctx->pc = 0x1D53E0u;
        goto label_1d53e0;
    }
    ctx->pc = 0x1D53D8u;
    SET_GPR_U32(ctx, 31, 0x1D53E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53E0u; }
        if (ctx->pc != 0x1D53E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D53E0u; }
        if (ctx->pc != 0x1D53E0u) { return; }
    }
    ctx->pc = 0x1D53E0u;
label_1d53e0:
    // 0x1d53e0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1d53e4:
    if (ctx->pc == 0x1D53E4u) {
        ctx->pc = 0x1D53E8u;
        goto label_1d53e8;
    }
    ctx->pc = 0x1D53E0u;
    {
        const bool branch_taken_0x1d53e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d53e0) {
            ctx->pc = 0x1D5408u;
            goto label_1d5408;
        }
    }
    ctx->pc = 0x1D53E8u;
label_1d53e8:
    // 0x1d53e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d53ec:
    // 0x1d53ec: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1d53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1d53f0:
    // 0x1d53f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d53f4:
    if (ctx->pc == 0x1D53F4u) {
        ctx->pc = 0x1D53F8u;
        goto label_1d53f8;
    }
    ctx->pc = 0x1D53F0u;
    {
        const bool branch_taken_0x1d53f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d53f0) {
            ctx->pc = 0x1D5408u;
            goto label_1d5408;
        }
    }
    ctx->pc = 0x1D53F8u;
label_1d53f8:
    // 0x1d53f8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d53fc:
    // 0x1d53fc: 0xc06560c  jal         func_195830
label_1d5400:
    if (ctx->pc == 0x1D5400u) {
        ctx->pc = 0x1D5400u;
            // 0x1d5400: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5404u;
        goto label_1d5404;
    }
    ctx->pc = 0x1D53FCu;
    SET_GPR_U32(ctx, 31, 0x1D5404u);
    ctx->pc = 0x1D5400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D53FCu;
            // 0x1d5400: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5404u; }
        if (ctx->pc != 0x1D5404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5404u; }
        if (ctx->pc != 0x1D5404u) { return; }
    }
    ctx->pc = 0x1D5404u;
label_1d5404:
    // 0x1d5404: 0x0  nop
    ctx->pc = 0x1d5404u;
    // NOP
label_1d5408:
    // 0x1d5408: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d540c:
    // 0x1d540c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1d540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d5410:
    // 0x1d5410: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5414:
    if (ctx->pc == 0x1D5414u) {
        ctx->pc = 0x1D5418u;
        goto label_1d5418;
    }
    ctx->pc = 0x1D5410u;
    {
        const bool branch_taken_0x1d5410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5410) {
            ctx->pc = 0x1D5428u;
            goto label_1d5428;
        }
    }
    ctx->pc = 0x1D5418u;
label_1d5418:
    // 0x1d5418: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1d5418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d541c:
    // 0x1d541c: 0xc06560c  jal         func_195830
label_1d5420:
    if (ctx->pc == 0x1D5420u) {
        ctx->pc = 0x1D5420u;
            // 0x1d5420: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1D5424u;
        goto label_1d5424;
    }
    ctx->pc = 0x1D541Cu;
    SET_GPR_U32(ctx, 31, 0x1D5424u);
    ctx->pc = 0x1D5420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D541Cu;
            // 0x1d5420: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5424u; }
        if (ctx->pc != 0x1D5424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5424u; }
        if (ctx->pc != 0x1D5424u) { return; }
    }
    ctx->pc = 0x1D5424u;
label_1d5424:
    // 0x1d5424: 0x0  nop
    ctx->pc = 0x1d5424u;
    // NOP
label_1d5428:
    // 0x1d5428: 0xc04b788  jal         func_12DE20
label_1d542c:
    if (ctx->pc == 0x1D542Cu) {
        ctx->pc = 0x1D542Cu;
            // 0x1d542c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D5430u;
        goto label_1d5430;
    }
    ctx->pc = 0x1D5428u;
    SET_GPR_U32(ctx, 31, 0x1D5430u);
    ctx->pc = 0x1D542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5428u;
            // 0x1d542c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5430u; }
        if (ctx->pc != 0x1D5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5430u; }
        if (ctx->pc != 0x1D5430u) { return; }
    }
    ctx->pc = 0x1D5430u;
label_1d5430:
    // 0x1d5430: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5434:
    // 0x1d5434: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1d5434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5438:
    // 0x1d5438: 0xc04b7da  jal         func_12DF68
label_1d543c:
    if (ctx->pc == 0x1D543Cu) {
        ctx->pc = 0x1D543Cu;
            // 0x1d543c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5440u;
        goto label_1d5440;
    }
    ctx->pc = 0x1D5438u;
    SET_GPR_U32(ctx, 31, 0x1D5440u);
    ctx->pc = 0x1D543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5438u;
            // 0x1d543c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5440u; }
        if (ctx->pc != 0x1D5440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5440u; }
        if (ctx->pc != 0x1D5440u) { return; }
    }
    ctx->pc = 0x1D5440u;
label_1d5440:
    // 0x1d5440: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5444:
    // 0x1d5444: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1d5444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5448:
    // 0x1d5448: 0xc04b804  jal         func_12E010
label_1d544c:
    if (ctx->pc == 0x1D544Cu) {
        ctx->pc = 0x1D544Cu;
            // 0x1d544c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5450u;
        goto label_1d5450;
    }
    ctx->pc = 0x1D5448u;
    SET_GPR_U32(ctx, 31, 0x1D5450u);
    ctx->pc = 0x1D544Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5448u;
            // 0x1d544c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5450u; }
        if (ctx->pc != 0x1D5450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5450u; }
        if (ctx->pc != 0x1D5450u) { return; }
    }
    ctx->pc = 0x1D5450u;
label_1d5450:
    // 0x1d5450: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5454:
    // 0x1d5454: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1d5454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d5458:
    // 0x1d5458: 0xc04b7b0  jal         func_12DEC0
label_1d545c:
    if (ctx->pc == 0x1D545Cu) {
        ctx->pc = 0x1D545Cu;
            // 0x1d545c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5460u;
        goto label_1d5460;
    }
    ctx->pc = 0x1D5458u;
    SET_GPR_U32(ctx, 31, 0x1D5460u);
    ctx->pc = 0x1D545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5458u;
            // 0x1d545c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5460u; }
        if (ctx->pc != 0x1D5460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5460u; }
        if (ctx->pc != 0x1D5460u) { return; }
    }
    ctx->pc = 0x1D5460u;
label_1d5460:
    // 0x1d5460: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5464:
    // 0x1d5464: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5468:
    // 0x1d5468: 0xc04b75e  jal         func_12DD78
label_1d546c:
    if (ctx->pc == 0x1D546Cu) {
        ctx->pc = 0x1D546Cu;
            // 0x1d546c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1D5470u;
        goto label_1d5470;
    }
    ctx->pc = 0x1D5468u;
    SET_GPR_U32(ctx, 31, 0x1D5470u);
    ctx->pc = 0x1D546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5468u;
            // 0x1d546c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5470u; }
        if (ctx->pc != 0x1D5470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5470u; }
        if (ctx->pc != 0x1D5470u) { return; }
    }
    ctx->pc = 0x1D5470u;
label_1d5470:
    // 0x1d5470: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d5470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5474:
    // 0x1d5474: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1d5474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d5478:
    // 0x1d5478: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1d5478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d547c:
    // 0x1d547c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1d5480:
    if (ctx->pc == 0x1D5480u) {
        ctx->pc = 0x1D5484u;
        goto label_1d5484;
    }
    ctx->pc = 0x1D547Cu;
    {
        const bool branch_taken_0x1d547c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d547c) {
            ctx->pc = 0x1D54D0u;
            goto label_1d54d0;
        }
    }
    ctx->pc = 0x1D5484u;
label_1d5484:
    // 0x1d5484: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d5488:
    // 0x1d5488: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d548c:
    if (ctx->pc == 0x1D548Cu) {
        ctx->pc = 0x1D5490u;
        goto label_1d5490;
    }
    ctx->pc = 0x1D5488u;
    {
        const bool branch_taken_0x1d5488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5488) {
            ctx->pc = 0x1D54A0u;
            goto label_1d54a0;
        }
    }
    ctx->pc = 0x1D5490u;
label_1d5490:
    // 0x1d5490: 0xc0604f0  jal         func_1813C0
label_1d5494:
    if (ctx->pc == 0x1D5494u) {
        ctx->pc = 0x1D5494u;
            // 0x1d5494: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D5498u;
        goto label_1d5498;
    }
    ctx->pc = 0x1D5490u;
    SET_GPR_U32(ctx, 31, 0x1D5498u);
    ctx->pc = 0x1D5494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5490u;
            // 0x1d5494: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5498u; }
        if (ctx->pc != 0x1D5498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5498u; }
        if (ctx->pc != 0x1D5498u) { return; }
    }
    ctx->pc = 0x1D5498u;
label_1d5498:
    // 0x1d5498: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d549c:
    if (ctx->pc == 0x1D549Cu) {
        ctx->pc = 0x1D54A0u;
        goto label_1d54a0;
    }
    ctx->pc = 0x1D5498u;
    {
        const bool branch_taken_0x1d5498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5498) {
            ctx->pc = 0x1D54A8u;
            goto label_1d54a8;
        }
    }
    ctx->pc = 0x1D54A0u;
label_1d54a0:
    // 0x1d54a0: 0xc0604dc  jal         func_181370
label_1d54a4:
    if (ctx->pc == 0x1D54A4u) {
        ctx->pc = 0x1D54A4u;
            // 0x1d54a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D54A8u;
        goto label_1d54a8;
    }
    ctx->pc = 0x1D54A0u;
    SET_GPR_U32(ctx, 31, 0x1D54A8u);
    ctx->pc = 0x1D54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54A0u;
            // 0x1d54a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54A8u; }
        if (ctx->pc != 0x1D54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54A8u; }
        if (ctx->pc != 0x1D54A8u) { return; }
    }
    ctx->pc = 0x1D54A8u;
label_1d54a8:
    // 0x1d54a8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1d54ac:
    // 0x1d54ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d54b0:
    if (ctx->pc == 0x1D54B0u) {
        ctx->pc = 0x1D54B4u;
        goto label_1d54b4;
    }
    ctx->pc = 0x1D54ACu;
    {
        const bool branch_taken_0x1d54ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d54ac) {
            ctx->pc = 0x1D54C0u;
            goto label_1d54c0;
        }
    }
    ctx->pc = 0x1D54B4u;
label_1d54b4:
    // 0x1d54b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d54b8:
    if (ctx->pc == 0x1D54B8u) {
        ctx->pc = 0x1D54B8u;
            // 0x1d54b8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1D54BCu;
        goto label_1d54bc;
    }
    ctx->pc = 0x1D54B4u;
    {
        const bool branch_taken_0x1d54b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54B4u;
            // 0x1d54b8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54b4) {
            ctx->pc = 0x1D54E0u;
            goto label_1d54e0;
        }
    }
    ctx->pc = 0x1D54BCu;
label_1d54bc:
    // 0x1d54bc: 0x0  nop
    ctx->pc = 0x1d54bcu;
    // NOP
label_1d54c0:
    // 0x1d54c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d54c4:
    // 0x1d54c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d54c8:
    if (ctx->pc == 0x1D54C8u) {
        ctx->pc = 0x1D54C8u;
            // 0x1d54c8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1D54CCu;
        goto label_1d54cc;
    }
    ctx->pc = 0x1D54C4u;
    {
        const bool branch_taken_0x1d54c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D54C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54C4u;
            // 0x1d54c8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d54c4) {
            ctx->pc = 0x1D54E0u;
            goto label_1d54e0;
        }
    }
    ctx->pc = 0x1D54CCu;
label_1d54cc:
    // 0x1d54cc: 0x0  nop
    ctx->pc = 0x1d54ccu;
    // NOP
label_1d54d0:
    // 0x1d54d0: 0xc0604dc  jal         func_181370
label_1d54d4:
    if (ctx->pc == 0x1D54D4u) {
        ctx->pc = 0x1D54D4u;
            // 0x1d54d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1D54D8u;
        goto label_1d54d8;
    }
    ctx->pc = 0x1D54D0u;
    SET_GPR_U32(ctx, 31, 0x1D54D8u);
    ctx->pc = 0x1D54D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D54D0u;
            // 0x1d54d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54D8u; }
        if (ctx->pc != 0x1D54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D54D8u; }
        if (ctx->pc != 0x1D54D8u) { return; }
    }
    ctx->pc = 0x1D54D8u;
label_1d54d8:
    // 0x1d54d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d54dc:
    // 0x1d54dc: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1d54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1d54e0:
    // 0x1d54e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d54e4:
    // 0x1d54e4: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1d54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_1d54e8:
    // 0x1d54e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d54e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d54ec:
    // 0x1d54ec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1d54f0:
    // 0x1d54f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d54f4:
    // 0x1d54f4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1d54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1d54f8:
    // 0x1d54f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d54f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d54fc:
    // 0x1d54fc: 0x0  nop
    ctx->pc = 0x1d54fcu;
    // NOP
label_1d5500:
    // 0x1d5500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d5504:
    // 0x1d5504: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1d5504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1d5508:
    // 0x1d5508: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d5508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d550c:
    // 0x1d550c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1d5510:
    // 0x1d5510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5514:
    // 0x1d5514: 0x0  nop
    ctx->pc = 0x1d5514u;
    // NOP
label_1d5518:
    // 0x1d5518: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d551c:
    // 0x1d551c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1d5520:
    // 0x1d5520: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1d5524:
    // 0x1d5524: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1d5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d5528:
    // 0x1d5528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d552c:
    // 0x1d552c: 0x0  nop
    ctx->pc = 0x1d552cu;
    // NOP
label_1d5530:
    // 0x1d5530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d5534:
    // 0x1d5534: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1d5534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1d5538:
    // 0x1d5538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1d553c:
    // 0x1d553c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1d553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d5540:
    // 0x1d5540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5544:
    // 0x1d5544: 0x0  nop
    ctx->pc = 0x1d5544u;
    // NOP
label_1d5548:
    // 0x1d5548: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d5548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d554c:
    // 0x1d554c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1d554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1d5550:
    // 0x1d5550: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5554:
    // 0x1d5554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d5558:
    // 0x1d5558: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d5558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1d555c:
    // 0x1d555c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5560:
    // 0x1d5560: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1d5560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5564:
    // 0x1d5564: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d5564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5568:
    // 0x1d5568: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1d556c:
    if (ctx->pc == 0x1D556Cu) {
        ctx->pc = 0x1D556Cu;
            // 0x1d556c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1D5570u;
        goto label_1d5570;
    }
    ctx->pc = 0x1D5568u;
    {
        const bool branch_taken_0x1d5568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5568u;
            // 0x1d556c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5568) {
            ctx->pc = 0x1D55A8u;
            goto label_1d55a8;
        }
    }
    ctx->pc = 0x1D5570u;
label_1d5570:
    // 0x1d5570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5574:
    // 0x1d5574: 0x0  nop
    ctx->pc = 0x1d5574u;
    // NOP
label_1d5578:
    // 0x1d5578: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d5578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d557c:
    // 0x1d557c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1d5580:
    if (ctx->pc == 0x1D5580u) {
        ctx->pc = 0x1D5584u;
        goto label_1d5584;
    }
    ctx->pc = 0x1D557Cu;
    {
        const bool branch_taken_0x1d557c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d557c) {
            ctx->pc = 0x1D55A8u;
            goto label_1d55a8;
        }
    }
    ctx->pc = 0x1D5584u;
label_1d5584:
    // 0x1d5584: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1d5584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5588:
    // 0x1d5588: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d5588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d558c:
    // 0x1d558c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1d5590:
    if (ctx->pc == 0x1D5590u) {
        ctx->pc = 0x1D5590u;
            // 0x1d5590: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->pc = 0x1D5594u;
        goto label_1d5594;
    }
    ctx->pc = 0x1D558Cu;
    {
        const bool branch_taken_0x1d558c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D558Cu;
            // 0x1d5590: 0x3c02c25c  lui         $v0, 0xC25C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49756 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d558c) {
            ctx->pc = 0x1D55A8u;
            goto label_1d55a8;
        }
    }
    ctx->pc = 0x1D5594u;
label_1d5594:
    // 0x1d5594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5598:
    // 0x1d5598: 0x0  nop
    ctx->pc = 0x1d5598u;
    // NOP
label_1d559c:
    // 0x1d559c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1d559cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d55a0:
    // 0x1d55a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1d55a4:
    if (ctx->pc == 0x1D55A4u) {
        ctx->pc = 0x1D55A8u;
        goto label_1d55a8;
    }
    ctx->pc = 0x1D55A0u;
    {
        const bool branch_taken_0x1d55a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d55a0) {
            ctx->pc = 0x1D55C0u;
            goto label_1d55c0;
        }
    }
    ctx->pc = 0x1D55A8u;
label_1d55a8:
    // 0x1d55a8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d55ac:
    // 0x1d55ac: 0x40f809  jalr        $v0
label_1d55b0:
    if (ctx->pc == 0x1D55B0u) {
        ctx->pc = 0x1D55B0u;
            // 0x1d55b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D55B4u;
        goto label_1d55b4;
    }
    ctx->pc = 0x1D55ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D55B4u);
        ctx->pc = 0x1D55B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55ACu;
            // 0x1d55b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4240u: goto label_1d4240;
            case 0x1D4244u: goto label_1d4244;
            case 0x1D4248u: goto label_1d4248;
            case 0x1D424Cu: goto label_1d424c;
            case 0x1D4250u: goto label_1d4250;
            case 0x1D4254u: goto label_1d4254;
            case 0x1D4258u: goto label_1d4258;
            case 0x1D425Cu: goto label_1d425c;
            case 0x1D4260u: goto label_1d4260;
            case 0x1D4264u: goto label_1d4264;
            case 0x1D4268u: goto label_1d4268;
            case 0x1D426Cu: goto label_1d426c;
            case 0x1D4270u: goto label_1d4270;
            case 0x1D4274u: goto label_1d4274;
            case 0x1D4278u: goto label_1d4278;
            case 0x1D427Cu: goto label_1d427c;
            case 0x1D4280u: goto label_1d4280;
            case 0x1D4284u: goto label_1d4284;
            case 0x1D4288u: goto label_1d4288;
            case 0x1D428Cu: goto label_1d428c;
            case 0x1D4290u: goto label_1d4290;
            case 0x1D4294u: goto label_1d4294;
            case 0x1D4298u: goto label_1d4298;
            case 0x1D429Cu: goto label_1d429c;
            case 0x1D42A0u: goto label_1d42a0;
            case 0x1D42A4u: goto label_1d42a4;
            case 0x1D42A8u: goto label_1d42a8;
            case 0x1D42ACu: goto label_1d42ac;
            case 0x1D42B0u: goto label_1d42b0;
            case 0x1D42B4u: goto label_1d42b4;
            case 0x1D42B8u: goto label_1d42b8;
            case 0x1D42BCu: goto label_1d42bc;
            case 0x1D42C0u: goto label_1d42c0;
            case 0x1D42C4u: goto label_1d42c4;
            case 0x1D42C8u: goto label_1d42c8;
            case 0x1D42CCu: goto label_1d42cc;
            case 0x1D42D0u: goto label_1d42d0;
            case 0x1D42D4u: goto label_1d42d4;
            case 0x1D42D8u: goto label_1d42d8;
            case 0x1D42DCu: goto label_1d42dc;
            case 0x1D42E0u: goto label_1d42e0;
            case 0x1D42E4u: goto label_1d42e4;
            case 0x1D42E8u: goto label_1d42e8;
            case 0x1D42ECu: goto label_1d42ec;
            case 0x1D42F0u: goto label_1d42f0;
            case 0x1D42F4u: goto label_1d42f4;
            case 0x1D42F8u: goto label_1d42f8;
            case 0x1D42FCu: goto label_1d42fc;
            case 0x1D4300u: goto label_1d4300;
            case 0x1D4304u: goto label_1d4304;
            case 0x1D4308u: goto label_1d4308;
            case 0x1D430Cu: goto label_1d430c;
            case 0x1D4310u: goto label_1d4310;
            case 0x1D4314u: goto label_1d4314;
            case 0x1D4318u: goto label_1d4318;
            case 0x1D431Cu: goto label_1d431c;
            case 0x1D4320u: goto label_1d4320;
            case 0x1D4324u: goto label_1d4324;
            case 0x1D4328u: goto label_1d4328;
            case 0x1D432Cu: goto label_1d432c;
            case 0x1D4330u: goto label_1d4330;
            case 0x1D4334u: goto label_1d4334;
            case 0x1D4338u: goto label_1d4338;
            case 0x1D433Cu: goto label_1d433c;
            case 0x1D4340u: goto label_1d4340;
            case 0x1D4344u: goto label_1d4344;
            case 0x1D4348u: goto label_1d4348;
            case 0x1D434Cu: goto label_1d434c;
            case 0x1D4350u: goto label_1d4350;
            case 0x1D4354u: goto label_1d4354;
            case 0x1D4358u: goto label_1d4358;
            case 0x1D435Cu: goto label_1d435c;
            case 0x1D4360u: goto label_1d4360;
            case 0x1D4364u: goto label_1d4364;
            case 0x1D4368u: goto label_1d4368;
            case 0x1D436Cu: goto label_1d436c;
            case 0x1D4370u: goto label_1d4370;
            case 0x1D4374u: goto label_1d4374;
            case 0x1D4378u: goto label_1d4378;
            case 0x1D437Cu: goto label_1d437c;
            case 0x1D4380u: goto label_1d4380;
            case 0x1D4384u: goto label_1d4384;
            case 0x1D4388u: goto label_1d4388;
            case 0x1D438Cu: goto label_1d438c;
            case 0x1D4390u: goto label_1d4390;
            case 0x1D4394u: goto label_1d4394;
            case 0x1D4398u: goto label_1d4398;
            case 0x1D439Cu: goto label_1d439c;
            case 0x1D43A0u: goto label_1d43a0;
            case 0x1D43A4u: goto label_1d43a4;
            case 0x1D43A8u: goto label_1d43a8;
            case 0x1D43ACu: goto label_1d43ac;
            case 0x1D43B0u: goto label_1d43b0;
            case 0x1D43B4u: goto label_1d43b4;
            case 0x1D43B8u: goto label_1d43b8;
            case 0x1D43BCu: goto label_1d43bc;
            case 0x1D43C0u: goto label_1d43c0;
            case 0x1D43C4u: goto label_1d43c4;
            case 0x1D43C8u: goto label_1d43c8;
            case 0x1D43CCu: goto label_1d43cc;
            case 0x1D43D0u: goto label_1d43d0;
            case 0x1D43D4u: goto label_1d43d4;
            case 0x1D43D8u: goto label_1d43d8;
            case 0x1D43DCu: goto label_1d43dc;
            case 0x1D43E0u: goto label_1d43e0;
            case 0x1D43E4u: goto label_1d43e4;
            case 0x1D43E8u: goto label_1d43e8;
            case 0x1D43ECu: goto label_1d43ec;
            case 0x1D43F0u: goto label_1d43f0;
            case 0x1D43F4u: goto label_1d43f4;
            case 0x1D43F8u: goto label_1d43f8;
            case 0x1D43FCu: goto label_1d43fc;
            case 0x1D4400u: goto label_1d4400;
            case 0x1D4404u: goto label_1d4404;
            case 0x1D4408u: goto label_1d4408;
            case 0x1D440Cu: goto label_1d440c;
            case 0x1D4410u: goto label_1d4410;
            case 0x1D4414u: goto label_1d4414;
            case 0x1D4418u: goto label_1d4418;
            case 0x1D441Cu: goto label_1d441c;
            case 0x1D4420u: goto label_1d4420;
            case 0x1D4424u: goto label_1d4424;
            case 0x1D4428u: goto label_1d4428;
            case 0x1D442Cu: goto label_1d442c;
            case 0x1D4430u: goto label_1d4430;
            case 0x1D4434u: goto label_1d4434;
            case 0x1D4438u: goto label_1d4438;
            case 0x1D443Cu: goto label_1d443c;
            case 0x1D4440u: goto label_1d4440;
            case 0x1D4444u: goto label_1d4444;
            case 0x1D4448u: goto label_1d4448;
            case 0x1D444Cu: goto label_1d444c;
            case 0x1D4450u: goto label_1d4450;
            case 0x1D4454u: goto label_1d4454;
            case 0x1D4458u: goto label_1d4458;
            case 0x1D445Cu: goto label_1d445c;
            case 0x1D4460u: goto label_1d4460;
            case 0x1D4464u: goto label_1d4464;
            case 0x1D4468u: goto label_1d4468;
            case 0x1D446Cu: goto label_1d446c;
            case 0x1D4470u: goto label_1d4470;
            case 0x1D4474u: goto label_1d4474;
            case 0x1D4478u: goto label_1d4478;
            case 0x1D447Cu: goto label_1d447c;
            case 0x1D4480u: goto label_1d4480;
            case 0x1D4484u: goto label_1d4484;
            case 0x1D4488u: goto label_1d4488;
            case 0x1D448Cu: goto label_1d448c;
            case 0x1D4490u: goto label_1d4490;
            case 0x1D4494u: goto label_1d4494;
            case 0x1D4498u: goto label_1d4498;
            case 0x1D449Cu: goto label_1d449c;
            case 0x1D44A0u: goto label_1d44a0;
            case 0x1D44A4u: goto label_1d44a4;
            case 0x1D44A8u: goto label_1d44a8;
            case 0x1D44ACu: goto label_1d44ac;
            case 0x1D44B0u: goto label_1d44b0;
            case 0x1D44B4u: goto label_1d44b4;
            case 0x1D44B8u: goto label_1d44b8;
            case 0x1D44BCu: goto label_1d44bc;
            case 0x1D44C0u: goto label_1d44c0;
            case 0x1D44C4u: goto label_1d44c4;
            case 0x1D44C8u: goto label_1d44c8;
            case 0x1D44CCu: goto label_1d44cc;
            case 0x1D44D0u: goto label_1d44d0;
            case 0x1D44D4u: goto label_1d44d4;
            case 0x1D44D8u: goto label_1d44d8;
            case 0x1D44DCu: goto label_1d44dc;
            case 0x1D44E0u: goto label_1d44e0;
            case 0x1D44E4u: goto label_1d44e4;
            case 0x1D44E8u: goto label_1d44e8;
            case 0x1D44ECu: goto label_1d44ec;
            case 0x1D44F0u: goto label_1d44f0;
            case 0x1D44F4u: goto label_1d44f4;
            case 0x1D44F8u: goto label_1d44f8;
            case 0x1D44FCu: goto label_1d44fc;
            case 0x1D4500u: goto label_1d4500;
            case 0x1D4504u: goto label_1d4504;
            case 0x1D4508u: goto label_1d4508;
            case 0x1D450Cu: goto label_1d450c;
            case 0x1D4510u: goto label_1d4510;
            case 0x1D4514u: goto label_1d4514;
            case 0x1D4518u: goto label_1d4518;
            case 0x1D451Cu: goto label_1d451c;
            case 0x1D4520u: goto label_1d4520;
            case 0x1D4524u: goto label_1d4524;
            case 0x1D4528u: goto label_1d4528;
            case 0x1D452Cu: goto label_1d452c;
            case 0x1D4530u: goto label_1d4530;
            case 0x1D4534u: goto label_1d4534;
            case 0x1D4538u: goto label_1d4538;
            case 0x1D453Cu: goto label_1d453c;
            case 0x1D4540u: goto label_1d4540;
            case 0x1D4544u: goto label_1d4544;
            case 0x1D4548u: goto label_1d4548;
            case 0x1D454Cu: goto label_1d454c;
            case 0x1D4550u: goto label_1d4550;
            case 0x1D4554u: goto label_1d4554;
            case 0x1D4558u: goto label_1d4558;
            case 0x1D455Cu: goto label_1d455c;
            case 0x1D4560u: goto label_1d4560;
            case 0x1D4564u: goto label_1d4564;
            case 0x1D4568u: goto label_1d4568;
            case 0x1D456Cu: goto label_1d456c;
            case 0x1D4570u: goto label_1d4570;
            case 0x1D4574u: goto label_1d4574;
            case 0x1D4578u: goto label_1d4578;
            case 0x1D457Cu: goto label_1d457c;
            case 0x1D4580u: goto label_1d4580;
            case 0x1D4584u: goto label_1d4584;
            case 0x1D4588u: goto label_1d4588;
            case 0x1D458Cu: goto label_1d458c;
            case 0x1D4590u: goto label_1d4590;
            case 0x1D4594u: goto label_1d4594;
            case 0x1D4598u: goto label_1d4598;
            case 0x1D459Cu: goto label_1d459c;
            case 0x1D45A0u: goto label_1d45a0;
            case 0x1D45A4u: goto label_1d45a4;
            case 0x1D45A8u: goto label_1d45a8;
            case 0x1D45ACu: goto label_1d45ac;
            case 0x1D45B0u: goto label_1d45b0;
            case 0x1D45B4u: goto label_1d45b4;
            case 0x1D45B8u: goto label_1d45b8;
            case 0x1D45BCu: goto label_1d45bc;
            case 0x1D45C0u: goto label_1d45c0;
            case 0x1D45C4u: goto label_1d45c4;
            case 0x1D45C8u: goto label_1d45c8;
            case 0x1D45CCu: goto label_1d45cc;
            case 0x1D45D0u: goto label_1d45d0;
            case 0x1D45D4u: goto label_1d45d4;
            case 0x1D45D8u: goto label_1d45d8;
            case 0x1D45DCu: goto label_1d45dc;
            case 0x1D45E0u: goto label_1d45e0;
            case 0x1D45E4u: goto label_1d45e4;
            case 0x1D45E8u: goto label_1d45e8;
            case 0x1D45ECu: goto label_1d45ec;
            case 0x1D45F0u: goto label_1d45f0;
            case 0x1D45F4u: goto label_1d45f4;
            case 0x1D45F8u: goto label_1d45f8;
            case 0x1D45FCu: goto label_1d45fc;
            case 0x1D4600u: goto label_1d4600;
            case 0x1D4604u: goto label_1d4604;
            case 0x1D4608u: goto label_1d4608;
            case 0x1D460Cu: goto label_1d460c;
            case 0x1D4610u: goto label_1d4610;
            case 0x1D4614u: goto label_1d4614;
            case 0x1D4618u: goto label_1d4618;
            case 0x1D461Cu: goto label_1d461c;
            case 0x1D4620u: goto label_1d4620;
            case 0x1D4624u: goto label_1d4624;
            case 0x1D4628u: goto label_1d4628;
            case 0x1D462Cu: goto label_1d462c;
            case 0x1D4630u: goto label_1d4630;
            case 0x1D4634u: goto label_1d4634;
            case 0x1D4638u: goto label_1d4638;
            case 0x1D463Cu: goto label_1d463c;
            case 0x1D4640u: goto label_1d4640;
            case 0x1D4644u: goto label_1d4644;
            case 0x1D4648u: goto label_1d4648;
            case 0x1D464Cu: goto label_1d464c;
            case 0x1D4650u: goto label_1d4650;
            case 0x1D4654u: goto label_1d4654;
            case 0x1D4658u: goto label_1d4658;
            case 0x1D465Cu: goto label_1d465c;
            case 0x1D4660u: goto label_1d4660;
            case 0x1D4664u: goto label_1d4664;
            case 0x1D4668u: goto label_1d4668;
            case 0x1D466Cu: goto label_1d466c;
            case 0x1D4670u: goto label_1d4670;
            case 0x1D4674u: goto label_1d4674;
            case 0x1D4678u: goto label_1d4678;
            case 0x1D467Cu: goto label_1d467c;
            case 0x1D4680u: goto label_1d4680;
            case 0x1D4684u: goto label_1d4684;
            case 0x1D4688u: goto label_1d4688;
            case 0x1D468Cu: goto label_1d468c;
            case 0x1D4690u: goto label_1d4690;
            case 0x1D4694u: goto label_1d4694;
            case 0x1D4698u: goto label_1d4698;
            case 0x1D469Cu: goto label_1d469c;
            case 0x1D46A0u: goto label_1d46a0;
            case 0x1D46A4u: goto label_1d46a4;
            case 0x1D46A8u: goto label_1d46a8;
            case 0x1D46ACu: goto label_1d46ac;
            case 0x1D46B0u: goto label_1d46b0;
            case 0x1D46B4u: goto label_1d46b4;
            case 0x1D46B8u: goto label_1d46b8;
            case 0x1D46BCu: goto label_1d46bc;
            case 0x1D46C0u: goto label_1d46c0;
            case 0x1D46C4u: goto label_1d46c4;
            case 0x1D46C8u: goto label_1d46c8;
            case 0x1D46CCu: goto label_1d46cc;
            case 0x1D46D0u: goto label_1d46d0;
            case 0x1D46D4u: goto label_1d46d4;
            case 0x1D46D8u: goto label_1d46d8;
            case 0x1D46DCu: goto label_1d46dc;
            case 0x1D46E0u: goto label_1d46e0;
            case 0x1D46E4u: goto label_1d46e4;
            case 0x1D46E8u: goto label_1d46e8;
            case 0x1D46ECu: goto label_1d46ec;
            case 0x1D46F0u: goto label_1d46f0;
            case 0x1D46F4u: goto label_1d46f4;
            case 0x1D46F8u: goto label_1d46f8;
            case 0x1D46FCu: goto label_1d46fc;
            case 0x1D4700u: goto label_1d4700;
            case 0x1D4704u: goto label_1d4704;
            case 0x1D4708u: goto label_1d4708;
            case 0x1D470Cu: goto label_1d470c;
            case 0x1D4710u: goto label_1d4710;
            case 0x1D4714u: goto label_1d4714;
            case 0x1D4718u: goto label_1d4718;
            case 0x1D471Cu: goto label_1d471c;
            case 0x1D4720u: goto label_1d4720;
            case 0x1D4724u: goto label_1d4724;
            case 0x1D4728u: goto label_1d4728;
            case 0x1D472Cu: goto label_1d472c;
            case 0x1D4730u: goto label_1d4730;
            case 0x1D4734u: goto label_1d4734;
            case 0x1D4738u: goto label_1d4738;
            case 0x1D473Cu: goto label_1d473c;
            case 0x1D4740u: goto label_1d4740;
            case 0x1D4744u: goto label_1d4744;
            case 0x1D4748u: goto label_1d4748;
            case 0x1D474Cu: goto label_1d474c;
            case 0x1D4750u: goto label_1d4750;
            case 0x1D4754u: goto label_1d4754;
            case 0x1D4758u: goto label_1d4758;
            case 0x1D475Cu: goto label_1d475c;
            case 0x1D4760u: goto label_1d4760;
            case 0x1D4764u: goto label_1d4764;
            case 0x1D4768u: goto label_1d4768;
            case 0x1D476Cu: goto label_1d476c;
            case 0x1D4770u: goto label_1d4770;
            case 0x1D4774u: goto label_1d4774;
            case 0x1D4778u: goto label_1d4778;
            case 0x1D477Cu: goto label_1d477c;
            case 0x1D4780u: goto label_1d4780;
            case 0x1D4784u: goto label_1d4784;
            case 0x1D4788u: goto label_1d4788;
            case 0x1D478Cu: goto label_1d478c;
            case 0x1D4790u: goto label_1d4790;
            case 0x1D4794u: goto label_1d4794;
            case 0x1D4798u: goto label_1d4798;
            case 0x1D479Cu: goto label_1d479c;
            case 0x1D47A0u: goto label_1d47a0;
            case 0x1D47A4u: goto label_1d47a4;
            case 0x1D47A8u: goto label_1d47a8;
            case 0x1D47ACu: goto label_1d47ac;
            case 0x1D47B0u: goto label_1d47b0;
            case 0x1D47B4u: goto label_1d47b4;
            case 0x1D47B8u: goto label_1d47b8;
            case 0x1D47BCu: goto label_1d47bc;
            case 0x1D47C0u: goto label_1d47c0;
            case 0x1D47C4u: goto label_1d47c4;
            case 0x1D47C8u: goto label_1d47c8;
            case 0x1D47CCu: goto label_1d47cc;
            case 0x1D47D0u: goto label_1d47d0;
            case 0x1D47D4u: goto label_1d47d4;
            case 0x1D47D8u: goto label_1d47d8;
            case 0x1D47DCu: goto label_1d47dc;
            case 0x1D47E0u: goto label_1d47e0;
            case 0x1D47E4u: goto label_1d47e4;
            case 0x1D47E8u: goto label_1d47e8;
            case 0x1D47ECu: goto label_1d47ec;
            case 0x1D47F0u: goto label_1d47f0;
            case 0x1D47F4u: goto label_1d47f4;
            case 0x1D47F8u: goto label_1d47f8;
            case 0x1D47FCu: goto label_1d47fc;
            case 0x1D4800u: goto label_1d4800;
            case 0x1D4804u: goto label_1d4804;
            case 0x1D4808u: goto label_1d4808;
            case 0x1D480Cu: goto label_1d480c;
            case 0x1D4810u: goto label_1d4810;
            case 0x1D4814u: goto label_1d4814;
            case 0x1D4818u: goto label_1d4818;
            case 0x1D481Cu: goto label_1d481c;
            case 0x1D4820u: goto label_1d4820;
            case 0x1D4824u: goto label_1d4824;
            case 0x1D4828u: goto label_1d4828;
            case 0x1D482Cu: goto label_1d482c;
            case 0x1D4830u: goto label_1d4830;
            case 0x1D4834u: goto label_1d4834;
            case 0x1D4838u: goto label_1d4838;
            case 0x1D483Cu: goto label_1d483c;
            case 0x1D4840u: goto label_1d4840;
            case 0x1D4844u: goto label_1d4844;
            case 0x1D4848u: goto label_1d4848;
            case 0x1D484Cu: goto label_1d484c;
            case 0x1D4850u: goto label_1d4850;
            case 0x1D4854u: goto label_1d4854;
            case 0x1D4858u: goto label_1d4858;
            case 0x1D485Cu: goto label_1d485c;
            case 0x1D4860u: goto label_1d4860;
            case 0x1D4864u: goto label_1d4864;
            case 0x1D4868u: goto label_1d4868;
            case 0x1D486Cu: goto label_1d486c;
            case 0x1D4870u: goto label_1d4870;
            case 0x1D4874u: goto label_1d4874;
            case 0x1D4878u: goto label_1d4878;
            case 0x1D487Cu: goto label_1d487c;
            case 0x1D4880u: goto label_1d4880;
            case 0x1D4884u: goto label_1d4884;
            case 0x1D4888u: goto label_1d4888;
            case 0x1D488Cu: goto label_1d488c;
            case 0x1D4890u: goto label_1d4890;
            case 0x1D4894u: goto label_1d4894;
            case 0x1D4898u: goto label_1d4898;
            case 0x1D489Cu: goto label_1d489c;
            case 0x1D48A0u: goto label_1d48a0;
            case 0x1D48A4u: goto label_1d48a4;
            case 0x1D48A8u: goto label_1d48a8;
            case 0x1D48ACu: goto label_1d48ac;
            case 0x1D48B0u: goto label_1d48b0;
            case 0x1D48B4u: goto label_1d48b4;
            case 0x1D48B8u: goto label_1d48b8;
            case 0x1D48BCu: goto label_1d48bc;
            case 0x1D48C0u: goto label_1d48c0;
            case 0x1D48C4u: goto label_1d48c4;
            case 0x1D48C8u: goto label_1d48c8;
            case 0x1D48CCu: goto label_1d48cc;
            case 0x1D48D0u: goto label_1d48d0;
            case 0x1D48D4u: goto label_1d48d4;
            case 0x1D48D8u: goto label_1d48d8;
            case 0x1D48DCu: goto label_1d48dc;
            case 0x1D48E0u: goto label_1d48e0;
            case 0x1D48E4u: goto label_1d48e4;
            case 0x1D48E8u: goto label_1d48e8;
            case 0x1D48ECu: goto label_1d48ec;
            case 0x1D48F0u: goto label_1d48f0;
            case 0x1D48F4u: goto label_1d48f4;
            case 0x1D48F8u: goto label_1d48f8;
            case 0x1D48FCu: goto label_1d48fc;
            case 0x1D4900u: goto label_1d4900;
            case 0x1D4904u: goto label_1d4904;
            case 0x1D4908u: goto label_1d4908;
            case 0x1D490Cu: goto label_1d490c;
            case 0x1D4910u: goto label_1d4910;
            case 0x1D4914u: goto label_1d4914;
            case 0x1D4918u: goto label_1d4918;
            case 0x1D491Cu: goto label_1d491c;
            case 0x1D4920u: goto label_1d4920;
            case 0x1D4924u: goto label_1d4924;
            case 0x1D4928u: goto label_1d4928;
            case 0x1D492Cu: goto label_1d492c;
            case 0x1D4930u: goto label_1d4930;
            case 0x1D4934u: goto label_1d4934;
            case 0x1D4938u: goto label_1d4938;
            case 0x1D493Cu: goto label_1d493c;
            case 0x1D4940u: goto label_1d4940;
            case 0x1D4944u: goto label_1d4944;
            case 0x1D4948u: goto label_1d4948;
            case 0x1D494Cu: goto label_1d494c;
            case 0x1D4950u: goto label_1d4950;
            case 0x1D4954u: goto label_1d4954;
            case 0x1D4958u: goto label_1d4958;
            case 0x1D495Cu: goto label_1d495c;
            case 0x1D4960u: goto label_1d4960;
            case 0x1D4964u: goto label_1d4964;
            case 0x1D4968u: goto label_1d4968;
            case 0x1D496Cu: goto label_1d496c;
            case 0x1D4970u: goto label_1d4970;
            case 0x1D4974u: goto label_1d4974;
            case 0x1D4978u: goto label_1d4978;
            case 0x1D497Cu: goto label_1d497c;
            case 0x1D4980u: goto label_1d4980;
            case 0x1D4984u: goto label_1d4984;
            case 0x1D4988u: goto label_1d4988;
            case 0x1D498Cu: goto label_1d498c;
            case 0x1D4990u: goto label_1d4990;
            case 0x1D4994u: goto label_1d4994;
            case 0x1D4998u: goto label_1d4998;
            case 0x1D499Cu: goto label_1d499c;
            case 0x1D49A0u: goto label_1d49a0;
            case 0x1D49A4u: goto label_1d49a4;
            case 0x1D49A8u: goto label_1d49a8;
            case 0x1D49ACu: goto label_1d49ac;
            case 0x1D49B0u: goto label_1d49b0;
            case 0x1D49B4u: goto label_1d49b4;
            case 0x1D49B8u: goto label_1d49b8;
            case 0x1D49BCu: goto label_1d49bc;
            case 0x1D49C0u: goto label_1d49c0;
            case 0x1D49C4u: goto label_1d49c4;
            case 0x1D49C8u: goto label_1d49c8;
            case 0x1D49CCu: goto label_1d49cc;
            case 0x1D49D0u: goto label_1d49d0;
            case 0x1D49D4u: goto label_1d49d4;
            case 0x1D49D8u: goto label_1d49d8;
            case 0x1D49DCu: goto label_1d49dc;
            case 0x1D49E0u: goto label_1d49e0;
            case 0x1D49E4u: goto label_1d49e4;
            case 0x1D49E8u: goto label_1d49e8;
            case 0x1D49ECu: goto label_1d49ec;
            case 0x1D49F0u: goto label_1d49f0;
            case 0x1D49F4u: goto label_1d49f4;
            case 0x1D49F8u: goto label_1d49f8;
            case 0x1D49FCu: goto label_1d49fc;
            case 0x1D4A00u: goto label_1d4a00;
            case 0x1D4A04u: goto label_1d4a04;
            case 0x1D4A08u: goto label_1d4a08;
            case 0x1D4A0Cu: goto label_1d4a0c;
            case 0x1D4A10u: goto label_1d4a10;
            case 0x1D4A14u: goto label_1d4a14;
            case 0x1D4A18u: goto label_1d4a18;
            case 0x1D4A1Cu: goto label_1d4a1c;
            case 0x1D4A20u: goto label_1d4a20;
            case 0x1D4A24u: goto label_1d4a24;
            case 0x1D4A28u: goto label_1d4a28;
            case 0x1D4A2Cu: goto label_1d4a2c;
            case 0x1D4A30u: goto label_1d4a30;
            case 0x1D4A34u: goto label_1d4a34;
            case 0x1D4A38u: goto label_1d4a38;
            case 0x1D4A3Cu: goto label_1d4a3c;
            case 0x1D4A40u: goto label_1d4a40;
            case 0x1D4A44u: goto label_1d4a44;
            case 0x1D4A48u: goto label_1d4a48;
            case 0x1D4A4Cu: goto label_1d4a4c;
            case 0x1D4A50u: goto label_1d4a50;
            case 0x1D4A54u: goto label_1d4a54;
            case 0x1D4A58u: goto label_1d4a58;
            case 0x1D4A5Cu: goto label_1d4a5c;
            case 0x1D4A60u: goto label_1d4a60;
            case 0x1D4A64u: goto label_1d4a64;
            case 0x1D4A68u: goto label_1d4a68;
            case 0x1D4A6Cu: goto label_1d4a6c;
            case 0x1D4A70u: goto label_1d4a70;
            case 0x1D4A74u: goto label_1d4a74;
            case 0x1D4A78u: goto label_1d4a78;
            case 0x1D4A7Cu: goto label_1d4a7c;
            case 0x1D4A80u: goto label_1d4a80;
            case 0x1D4A84u: goto label_1d4a84;
            case 0x1D4A88u: goto label_1d4a88;
            case 0x1D4A8Cu: goto label_1d4a8c;
            case 0x1D4A90u: goto label_1d4a90;
            case 0x1D4A94u: goto label_1d4a94;
            case 0x1D4A98u: goto label_1d4a98;
            case 0x1D4A9Cu: goto label_1d4a9c;
            case 0x1D4AA0u: goto label_1d4aa0;
            case 0x1D4AA4u: goto label_1d4aa4;
            case 0x1D4AA8u: goto label_1d4aa8;
            case 0x1D4AACu: goto label_1d4aac;
            case 0x1D4AB0u: goto label_1d4ab0;
            case 0x1D4AB4u: goto label_1d4ab4;
            case 0x1D4AB8u: goto label_1d4ab8;
            case 0x1D4ABCu: goto label_1d4abc;
            case 0x1D4AC0u: goto label_1d4ac0;
            case 0x1D4AC4u: goto label_1d4ac4;
            case 0x1D4AC8u: goto label_1d4ac8;
            case 0x1D4ACCu: goto label_1d4acc;
            case 0x1D4AD0u: goto label_1d4ad0;
            case 0x1D4AD4u: goto label_1d4ad4;
            case 0x1D4AD8u: goto label_1d4ad8;
            case 0x1D4ADCu: goto label_1d4adc;
            case 0x1D4AE0u: goto label_1d4ae0;
            case 0x1D4AE4u: goto label_1d4ae4;
            case 0x1D4AE8u: goto label_1d4ae8;
            case 0x1D4AECu: goto label_1d4aec;
            case 0x1D4AF0u: goto label_1d4af0;
            case 0x1D4AF4u: goto label_1d4af4;
            case 0x1D4AF8u: goto label_1d4af8;
            case 0x1D4AFCu: goto label_1d4afc;
            case 0x1D4B00u: goto label_1d4b00;
            case 0x1D4B04u: goto label_1d4b04;
            case 0x1D4B08u: goto label_1d4b08;
            case 0x1D4B0Cu: goto label_1d4b0c;
            case 0x1D4B10u: goto label_1d4b10;
            case 0x1D4B14u: goto label_1d4b14;
            case 0x1D4B18u: goto label_1d4b18;
            case 0x1D4B1Cu: goto label_1d4b1c;
            case 0x1D4B20u: goto label_1d4b20;
            case 0x1D4B24u: goto label_1d4b24;
            case 0x1D4B28u: goto label_1d4b28;
            case 0x1D4B2Cu: goto label_1d4b2c;
            case 0x1D4B30u: goto label_1d4b30;
            case 0x1D4B34u: goto label_1d4b34;
            case 0x1D4B38u: goto label_1d4b38;
            case 0x1D4B3Cu: goto label_1d4b3c;
            case 0x1D4B40u: goto label_1d4b40;
            case 0x1D4B44u: goto label_1d4b44;
            case 0x1D4B48u: goto label_1d4b48;
            case 0x1D4B4Cu: goto label_1d4b4c;
            case 0x1D4B50u: goto label_1d4b50;
            case 0x1D4B54u: goto label_1d4b54;
            case 0x1D4B58u: goto label_1d4b58;
            case 0x1D4B5Cu: goto label_1d4b5c;
            case 0x1D4B60u: goto label_1d4b60;
            case 0x1D4B64u: goto label_1d4b64;
            case 0x1D4B68u: goto label_1d4b68;
            case 0x1D4B6Cu: goto label_1d4b6c;
            case 0x1D4B70u: goto label_1d4b70;
            case 0x1D4B74u: goto label_1d4b74;
            case 0x1D4B78u: goto label_1d4b78;
            case 0x1D4B7Cu: goto label_1d4b7c;
            case 0x1D4B80u: goto label_1d4b80;
            case 0x1D4B84u: goto label_1d4b84;
            case 0x1D4B88u: goto label_1d4b88;
            case 0x1D4B8Cu: goto label_1d4b8c;
            case 0x1D4B90u: goto label_1d4b90;
            case 0x1D4B94u: goto label_1d4b94;
            case 0x1D4B98u: goto label_1d4b98;
            case 0x1D4B9Cu: goto label_1d4b9c;
            case 0x1D4BA0u: goto label_1d4ba0;
            case 0x1D4BA4u: goto label_1d4ba4;
            case 0x1D4BA8u: goto label_1d4ba8;
            case 0x1D4BACu: goto label_1d4bac;
            case 0x1D4BB0u: goto label_1d4bb0;
            case 0x1D4BB4u: goto label_1d4bb4;
            case 0x1D4BB8u: goto label_1d4bb8;
            case 0x1D4BBCu: goto label_1d4bbc;
            case 0x1D4BC0u: goto label_1d4bc0;
            case 0x1D4BC4u: goto label_1d4bc4;
            case 0x1D4BC8u: goto label_1d4bc8;
            case 0x1D4BCCu: goto label_1d4bcc;
            case 0x1D4BD0u: goto label_1d4bd0;
            case 0x1D4BD4u: goto label_1d4bd4;
            case 0x1D4BD8u: goto label_1d4bd8;
            case 0x1D4BDCu: goto label_1d4bdc;
            case 0x1D4BE0u: goto label_1d4be0;
            case 0x1D4BE4u: goto label_1d4be4;
            case 0x1D4BE8u: goto label_1d4be8;
            case 0x1D4BECu: goto label_1d4bec;
            case 0x1D4BF0u: goto label_1d4bf0;
            case 0x1D4BF4u: goto label_1d4bf4;
            case 0x1D4BF8u: goto label_1d4bf8;
            case 0x1D4BFCu: goto label_1d4bfc;
            case 0x1D4C00u: goto label_1d4c00;
            case 0x1D4C04u: goto label_1d4c04;
            case 0x1D4C08u: goto label_1d4c08;
            case 0x1D4C0Cu: goto label_1d4c0c;
            case 0x1D4C10u: goto label_1d4c10;
            case 0x1D4C14u: goto label_1d4c14;
            case 0x1D4C18u: goto label_1d4c18;
            case 0x1D4C1Cu: goto label_1d4c1c;
            case 0x1D4C20u: goto label_1d4c20;
            case 0x1D4C24u: goto label_1d4c24;
            case 0x1D4C28u: goto label_1d4c28;
            case 0x1D4C2Cu: goto label_1d4c2c;
            case 0x1D4C30u: goto label_1d4c30;
            case 0x1D4C34u: goto label_1d4c34;
            case 0x1D4C38u: goto label_1d4c38;
            case 0x1D4C3Cu: goto label_1d4c3c;
            case 0x1D4C40u: goto label_1d4c40;
            case 0x1D4C44u: goto label_1d4c44;
            case 0x1D4C48u: goto label_1d4c48;
            case 0x1D4C4Cu: goto label_1d4c4c;
            case 0x1D4C50u: goto label_1d4c50;
            case 0x1D4C54u: goto label_1d4c54;
            case 0x1D4C58u: goto label_1d4c58;
            case 0x1D4C5Cu: goto label_1d4c5c;
            case 0x1D4C60u: goto label_1d4c60;
            case 0x1D4C64u: goto label_1d4c64;
            case 0x1D4C68u: goto label_1d4c68;
            case 0x1D4C6Cu: goto label_1d4c6c;
            case 0x1D4C70u: goto label_1d4c70;
            case 0x1D4C74u: goto label_1d4c74;
            case 0x1D4C78u: goto label_1d4c78;
            case 0x1D4C7Cu: goto label_1d4c7c;
            case 0x1D4C80u: goto label_1d4c80;
            case 0x1D4C84u: goto label_1d4c84;
            case 0x1D4C88u: goto label_1d4c88;
            case 0x1D4C8Cu: goto label_1d4c8c;
            case 0x1D4C90u: goto label_1d4c90;
            case 0x1D4C94u: goto label_1d4c94;
            case 0x1D4C98u: goto label_1d4c98;
            case 0x1D4C9Cu: goto label_1d4c9c;
            case 0x1D4CA0u: goto label_1d4ca0;
            case 0x1D4CA4u: goto label_1d4ca4;
            case 0x1D4CA8u: goto label_1d4ca8;
            case 0x1D4CACu: goto label_1d4cac;
            case 0x1D4CB0u: goto label_1d4cb0;
            case 0x1D4CB4u: goto label_1d4cb4;
            case 0x1D4CB8u: goto label_1d4cb8;
            case 0x1D4CBCu: goto label_1d4cbc;
            case 0x1D4CC0u: goto label_1d4cc0;
            case 0x1D4CC4u: goto label_1d4cc4;
            case 0x1D4CC8u: goto label_1d4cc8;
            case 0x1D4CCCu: goto label_1d4ccc;
            case 0x1D4CD0u: goto label_1d4cd0;
            case 0x1D4CD4u: goto label_1d4cd4;
            case 0x1D4CD8u: goto label_1d4cd8;
            case 0x1D4CDCu: goto label_1d4cdc;
            case 0x1D4CE0u: goto label_1d4ce0;
            case 0x1D4CE4u: goto label_1d4ce4;
            case 0x1D4CE8u: goto label_1d4ce8;
            case 0x1D4CECu: goto label_1d4cec;
            case 0x1D4CF0u: goto label_1d4cf0;
            case 0x1D4CF4u: goto label_1d4cf4;
            case 0x1D4CF8u: goto label_1d4cf8;
            case 0x1D4CFCu: goto label_1d4cfc;
            case 0x1D4D00u: goto label_1d4d00;
            case 0x1D4D04u: goto label_1d4d04;
            case 0x1D4D08u: goto label_1d4d08;
            case 0x1D4D0Cu: goto label_1d4d0c;
            case 0x1D4D10u: goto label_1d4d10;
            case 0x1D4D14u: goto label_1d4d14;
            case 0x1D4D18u: goto label_1d4d18;
            case 0x1D4D1Cu: goto label_1d4d1c;
            case 0x1D4D20u: goto label_1d4d20;
            case 0x1D4D24u: goto label_1d4d24;
            case 0x1D4D28u: goto label_1d4d28;
            case 0x1D4D2Cu: goto label_1d4d2c;
            case 0x1D4D30u: goto label_1d4d30;
            case 0x1D4D34u: goto label_1d4d34;
            case 0x1D4D38u: goto label_1d4d38;
            case 0x1D4D3Cu: goto label_1d4d3c;
            case 0x1D4D40u: goto label_1d4d40;
            case 0x1D4D44u: goto label_1d4d44;
            case 0x1D4D48u: goto label_1d4d48;
            case 0x1D4D4Cu: goto label_1d4d4c;
            case 0x1D4D50u: goto label_1d4d50;
            case 0x1D4D54u: goto label_1d4d54;
            case 0x1D4D58u: goto label_1d4d58;
            case 0x1D4D5Cu: goto label_1d4d5c;
            case 0x1D4D60u: goto label_1d4d60;
            case 0x1D4D64u: goto label_1d4d64;
            case 0x1D4D68u: goto label_1d4d68;
            case 0x1D4D6Cu: goto label_1d4d6c;
            case 0x1D4D70u: goto label_1d4d70;
            case 0x1D4D74u: goto label_1d4d74;
            case 0x1D4D78u: goto label_1d4d78;
            case 0x1D4D7Cu: goto label_1d4d7c;
            case 0x1D4D80u: goto label_1d4d80;
            case 0x1D4D84u: goto label_1d4d84;
            case 0x1D4D88u: goto label_1d4d88;
            case 0x1D4D8Cu: goto label_1d4d8c;
            case 0x1D4D90u: goto label_1d4d90;
            case 0x1D4D94u: goto label_1d4d94;
            case 0x1D4D98u: goto label_1d4d98;
            case 0x1D4D9Cu: goto label_1d4d9c;
            case 0x1D4DA0u: goto label_1d4da0;
            case 0x1D4DA4u: goto label_1d4da4;
            case 0x1D4DA8u: goto label_1d4da8;
            case 0x1D4DACu: goto label_1d4dac;
            case 0x1D4DB0u: goto label_1d4db0;
            case 0x1D4DB4u: goto label_1d4db4;
            case 0x1D4DB8u: goto label_1d4db8;
            case 0x1D4DBCu: goto label_1d4dbc;
            case 0x1D4DC0u: goto label_1d4dc0;
            case 0x1D4DC4u: goto label_1d4dc4;
            case 0x1D4DC8u: goto label_1d4dc8;
            case 0x1D4DCCu: goto label_1d4dcc;
            case 0x1D4DD0u: goto label_1d4dd0;
            case 0x1D4DD4u: goto label_1d4dd4;
            case 0x1D4DD8u: goto label_1d4dd8;
            case 0x1D4DDCu: goto label_1d4ddc;
            case 0x1D4DE0u: goto label_1d4de0;
            case 0x1D4DE4u: goto label_1d4de4;
            case 0x1D4DE8u: goto label_1d4de8;
            case 0x1D4DECu: goto label_1d4dec;
            case 0x1D4DF0u: goto label_1d4df0;
            case 0x1D4DF4u: goto label_1d4df4;
            case 0x1D4DF8u: goto label_1d4df8;
            case 0x1D4DFCu: goto label_1d4dfc;
            case 0x1D4E00u: goto label_1d4e00;
            case 0x1D4E04u: goto label_1d4e04;
            case 0x1D4E08u: goto label_1d4e08;
            case 0x1D4E0Cu: goto label_1d4e0c;
            case 0x1D4E10u: goto label_1d4e10;
            case 0x1D4E14u: goto label_1d4e14;
            case 0x1D4E18u: goto label_1d4e18;
            case 0x1D4E1Cu: goto label_1d4e1c;
            case 0x1D4E20u: goto label_1d4e20;
            case 0x1D4E24u: goto label_1d4e24;
            case 0x1D4E28u: goto label_1d4e28;
            case 0x1D4E2Cu: goto label_1d4e2c;
            case 0x1D4E30u: goto label_1d4e30;
            case 0x1D4E34u: goto label_1d4e34;
            case 0x1D4E38u: goto label_1d4e38;
            case 0x1D4E3Cu: goto label_1d4e3c;
            case 0x1D4E40u: goto label_1d4e40;
            case 0x1D4E44u: goto label_1d4e44;
            case 0x1D4E48u: goto label_1d4e48;
            case 0x1D4E4Cu: goto label_1d4e4c;
            case 0x1D4E50u: goto label_1d4e50;
            case 0x1D4E54u: goto label_1d4e54;
            case 0x1D4E58u: goto label_1d4e58;
            case 0x1D4E5Cu: goto label_1d4e5c;
            case 0x1D4E60u: goto label_1d4e60;
            case 0x1D4E64u: goto label_1d4e64;
            case 0x1D4E68u: goto label_1d4e68;
            case 0x1D4E6Cu: goto label_1d4e6c;
            case 0x1D4E70u: goto label_1d4e70;
            case 0x1D4E74u: goto label_1d4e74;
            case 0x1D4E78u: goto label_1d4e78;
            case 0x1D4E7Cu: goto label_1d4e7c;
            case 0x1D4E80u: goto label_1d4e80;
            case 0x1D4E84u: goto label_1d4e84;
            case 0x1D4E88u: goto label_1d4e88;
            case 0x1D4E8Cu: goto label_1d4e8c;
            case 0x1D4E90u: goto label_1d4e90;
            case 0x1D4E94u: goto label_1d4e94;
            case 0x1D4E98u: goto label_1d4e98;
            case 0x1D4E9Cu: goto label_1d4e9c;
            case 0x1D4EA0u: goto label_1d4ea0;
            case 0x1D4EA4u: goto label_1d4ea4;
            case 0x1D4EA8u: goto label_1d4ea8;
            case 0x1D4EACu: goto label_1d4eac;
            case 0x1D4EB0u: goto label_1d4eb0;
            case 0x1D4EB4u: goto label_1d4eb4;
            case 0x1D4EB8u: goto label_1d4eb8;
            case 0x1D4EBCu: goto label_1d4ebc;
            case 0x1D4EC0u: goto label_1d4ec0;
            case 0x1D4EC4u: goto label_1d4ec4;
            case 0x1D4EC8u: goto label_1d4ec8;
            case 0x1D4ECCu: goto label_1d4ecc;
            case 0x1D4ED0u: goto label_1d4ed0;
            case 0x1D4ED4u: goto label_1d4ed4;
            case 0x1D4ED8u: goto label_1d4ed8;
            case 0x1D4EDCu: goto label_1d4edc;
            case 0x1D4EE0u: goto label_1d4ee0;
            case 0x1D4EE4u: goto label_1d4ee4;
            case 0x1D4EE8u: goto label_1d4ee8;
            case 0x1D4EECu: goto label_1d4eec;
            case 0x1D4EF0u: goto label_1d4ef0;
            case 0x1D4EF4u: goto label_1d4ef4;
            case 0x1D4EF8u: goto label_1d4ef8;
            case 0x1D4EFCu: goto label_1d4efc;
            case 0x1D4F00u: goto label_1d4f00;
            case 0x1D4F04u: goto label_1d4f04;
            case 0x1D4F08u: goto label_1d4f08;
            case 0x1D4F0Cu: goto label_1d4f0c;
            case 0x1D4F10u: goto label_1d4f10;
            case 0x1D4F14u: goto label_1d4f14;
            case 0x1D4F18u: goto label_1d4f18;
            case 0x1D4F1Cu: goto label_1d4f1c;
            case 0x1D4F20u: goto label_1d4f20;
            case 0x1D4F24u: goto label_1d4f24;
            case 0x1D4F28u: goto label_1d4f28;
            case 0x1D4F2Cu: goto label_1d4f2c;
            case 0x1D4F30u: goto label_1d4f30;
            case 0x1D4F34u: goto label_1d4f34;
            case 0x1D4F38u: goto label_1d4f38;
            case 0x1D4F3Cu: goto label_1d4f3c;
            case 0x1D4F40u: goto label_1d4f40;
            case 0x1D4F44u: goto label_1d4f44;
            case 0x1D4F48u: goto label_1d4f48;
            case 0x1D4F4Cu: goto label_1d4f4c;
            case 0x1D4F50u: goto label_1d4f50;
            case 0x1D4F54u: goto label_1d4f54;
            case 0x1D4F58u: goto label_1d4f58;
            case 0x1D4F5Cu: goto label_1d4f5c;
            case 0x1D4F60u: goto label_1d4f60;
            case 0x1D4F64u: goto label_1d4f64;
            case 0x1D4F68u: goto label_1d4f68;
            case 0x1D4F6Cu: goto label_1d4f6c;
            case 0x1D4F70u: goto label_1d4f70;
            case 0x1D4F74u: goto label_1d4f74;
            case 0x1D4F78u: goto label_1d4f78;
            case 0x1D4F7Cu: goto label_1d4f7c;
            case 0x1D4F80u: goto label_1d4f80;
            case 0x1D4F84u: goto label_1d4f84;
            case 0x1D4F88u: goto label_1d4f88;
            case 0x1D4F8Cu: goto label_1d4f8c;
            case 0x1D4F90u: goto label_1d4f90;
            case 0x1D4F94u: goto label_1d4f94;
            case 0x1D4F98u: goto label_1d4f98;
            case 0x1D4F9Cu: goto label_1d4f9c;
            case 0x1D4FA0u: goto label_1d4fa0;
            case 0x1D4FA4u: goto label_1d4fa4;
            case 0x1D4FA8u: goto label_1d4fa8;
            case 0x1D4FACu: goto label_1d4fac;
            case 0x1D4FB0u: goto label_1d4fb0;
            case 0x1D4FB4u: goto label_1d4fb4;
            case 0x1D4FB8u: goto label_1d4fb8;
            case 0x1D4FBCu: goto label_1d4fbc;
            case 0x1D4FC0u: goto label_1d4fc0;
            case 0x1D4FC4u: goto label_1d4fc4;
            case 0x1D4FC8u: goto label_1d4fc8;
            case 0x1D4FCCu: goto label_1d4fcc;
            case 0x1D4FD0u: goto label_1d4fd0;
            case 0x1D4FD4u: goto label_1d4fd4;
            case 0x1D4FD8u: goto label_1d4fd8;
            case 0x1D4FDCu: goto label_1d4fdc;
            case 0x1D4FE0u: goto label_1d4fe0;
            case 0x1D4FE4u: goto label_1d4fe4;
            case 0x1D4FE8u: goto label_1d4fe8;
            case 0x1D4FECu: goto label_1d4fec;
            case 0x1D4FF0u: goto label_1d4ff0;
            case 0x1D4FF4u: goto label_1d4ff4;
            case 0x1D4FF8u: goto label_1d4ff8;
            case 0x1D4FFCu: goto label_1d4ffc;
            case 0x1D5000u: goto label_1d5000;
            case 0x1D5004u: goto label_1d5004;
            case 0x1D5008u: goto label_1d5008;
            case 0x1D500Cu: goto label_1d500c;
            case 0x1D5010u: goto label_1d5010;
            case 0x1D5014u: goto label_1d5014;
            case 0x1D5018u: goto label_1d5018;
            case 0x1D501Cu: goto label_1d501c;
            case 0x1D5020u: goto label_1d5020;
            case 0x1D5024u: goto label_1d5024;
            case 0x1D5028u: goto label_1d5028;
            case 0x1D502Cu: goto label_1d502c;
            case 0x1D5030u: goto label_1d5030;
            case 0x1D5034u: goto label_1d5034;
            case 0x1D5038u: goto label_1d5038;
            case 0x1D503Cu: goto label_1d503c;
            case 0x1D5040u: goto label_1d5040;
            case 0x1D5044u: goto label_1d5044;
            case 0x1D5048u: goto label_1d5048;
            case 0x1D504Cu: goto label_1d504c;
            case 0x1D5050u: goto label_1d5050;
            case 0x1D5054u: goto label_1d5054;
            case 0x1D5058u: goto label_1d5058;
            case 0x1D505Cu: goto label_1d505c;
            case 0x1D5060u: goto label_1d5060;
            case 0x1D5064u: goto label_1d5064;
            case 0x1D5068u: goto label_1d5068;
            case 0x1D506Cu: goto label_1d506c;
            case 0x1D5070u: goto label_1d5070;
            case 0x1D5074u: goto label_1d5074;
            case 0x1D5078u: goto label_1d5078;
            case 0x1D507Cu: goto label_1d507c;
            case 0x1D5080u: goto label_1d5080;
            case 0x1D5084u: goto label_1d5084;
            case 0x1D5088u: goto label_1d5088;
            case 0x1D508Cu: goto label_1d508c;
            case 0x1D5090u: goto label_1d5090;
            case 0x1D5094u: goto label_1d5094;
            case 0x1D5098u: goto label_1d5098;
            case 0x1D509Cu: goto label_1d509c;
            case 0x1D50A0u: goto label_1d50a0;
            case 0x1D50A4u: goto label_1d50a4;
            case 0x1D50A8u: goto label_1d50a8;
            case 0x1D50ACu: goto label_1d50ac;
            case 0x1D50B0u: goto label_1d50b0;
            case 0x1D50B4u: goto label_1d50b4;
            case 0x1D50B8u: goto label_1d50b8;
            case 0x1D50BCu: goto label_1d50bc;
            case 0x1D50C0u: goto label_1d50c0;
            case 0x1D50C4u: goto label_1d50c4;
            case 0x1D50C8u: goto label_1d50c8;
            case 0x1D50CCu: goto label_1d50cc;
            case 0x1D50D0u: goto label_1d50d0;
            case 0x1D50D4u: goto label_1d50d4;
            case 0x1D50D8u: goto label_1d50d8;
            case 0x1D50DCu: goto label_1d50dc;
            case 0x1D50E0u: goto label_1d50e0;
            case 0x1D50E4u: goto label_1d50e4;
            case 0x1D50E8u: goto label_1d50e8;
            case 0x1D50ECu: goto label_1d50ec;
            case 0x1D50F0u: goto label_1d50f0;
            case 0x1D50F4u: goto label_1d50f4;
            case 0x1D50F8u: goto label_1d50f8;
            case 0x1D50FCu: goto label_1d50fc;
            case 0x1D5100u: goto label_1d5100;
            case 0x1D5104u: goto label_1d5104;
            case 0x1D5108u: goto label_1d5108;
            case 0x1D510Cu: goto label_1d510c;
            case 0x1D5110u: goto label_1d5110;
            case 0x1D5114u: goto label_1d5114;
            case 0x1D5118u: goto label_1d5118;
            case 0x1D511Cu: goto label_1d511c;
            case 0x1D5120u: goto label_1d5120;
            case 0x1D5124u: goto label_1d5124;
            case 0x1D5128u: goto label_1d5128;
            case 0x1D512Cu: goto label_1d512c;
            case 0x1D5130u: goto label_1d5130;
            case 0x1D5134u: goto label_1d5134;
            case 0x1D5138u: goto label_1d5138;
            case 0x1D513Cu: goto label_1d513c;
            case 0x1D5140u: goto label_1d5140;
            case 0x1D5144u: goto label_1d5144;
            case 0x1D5148u: goto label_1d5148;
            case 0x1D514Cu: goto label_1d514c;
            case 0x1D5150u: goto label_1d5150;
            case 0x1D5154u: goto label_1d5154;
            case 0x1D5158u: goto label_1d5158;
            case 0x1D515Cu: goto label_1d515c;
            case 0x1D5160u: goto label_1d5160;
            case 0x1D5164u: goto label_1d5164;
            case 0x1D5168u: goto label_1d5168;
            case 0x1D516Cu: goto label_1d516c;
            case 0x1D5170u: goto label_1d5170;
            case 0x1D5174u: goto label_1d5174;
            case 0x1D5178u: goto label_1d5178;
            case 0x1D517Cu: goto label_1d517c;
            case 0x1D5180u: goto label_1d5180;
            case 0x1D5184u: goto label_1d5184;
            case 0x1D5188u: goto label_1d5188;
            case 0x1D518Cu: goto label_1d518c;
            case 0x1D5190u: goto label_1d5190;
            case 0x1D5194u: goto label_1d5194;
            case 0x1D5198u: goto label_1d5198;
            case 0x1D519Cu: goto label_1d519c;
            case 0x1D51A0u: goto label_1d51a0;
            case 0x1D51A4u: goto label_1d51a4;
            case 0x1D51A8u: goto label_1d51a8;
            case 0x1D51ACu: goto label_1d51ac;
            case 0x1D51B0u: goto label_1d51b0;
            case 0x1D51B4u: goto label_1d51b4;
            case 0x1D51B8u: goto label_1d51b8;
            case 0x1D51BCu: goto label_1d51bc;
            case 0x1D51C0u: goto label_1d51c0;
            case 0x1D51C4u: goto label_1d51c4;
            case 0x1D51C8u: goto label_1d51c8;
            case 0x1D51CCu: goto label_1d51cc;
            case 0x1D51D0u: goto label_1d51d0;
            case 0x1D51D4u: goto label_1d51d4;
            case 0x1D51D8u: goto label_1d51d8;
            case 0x1D51DCu: goto label_1d51dc;
            case 0x1D51E0u: goto label_1d51e0;
            case 0x1D51E4u: goto label_1d51e4;
            case 0x1D51E8u: goto label_1d51e8;
            case 0x1D51ECu: goto label_1d51ec;
            case 0x1D51F0u: goto label_1d51f0;
            case 0x1D51F4u: goto label_1d51f4;
            case 0x1D51F8u: goto label_1d51f8;
            case 0x1D51FCu: goto label_1d51fc;
            case 0x1D5200u: goto label_1d5200;
            case 0x1D5204u: goto label_1d5204;
            case 0x1D5208u: goto label_1d5208;
            case 0x1D520Cu: goto label_1d520c;
            case 0x1D5210u: goto label_1d5210;
            case 0x1D5214u: goto label_1d5214;
            case 0x1D5218u: goto label_1d5218;
            case 0x1D521Cu: goto label_1d521c;
            case 0x1D5220u: goto label_1d5220;
            case 0x1D5224u: goto label_1d5224;
            case 0x1D5228u: goto label_1d5228;
            case 0x1D522Cu: goto label_1d522c;
            case 0x1D5230u: goto label_1d5230;
            case 0x1D5234u: goto label_1d5234;
            case 0x1D5238u: goto label_1d5238;
            case 0x1D523Cu: goto label_1d523c;
            case 0x1D5240u: goto label_1d5240;
            case 0x1D5244u: goto label_1d5244;
            case 0x1D5248u: goto label_1d5248;
            case 0x1D524Cu: goto label_1d524c;
            case 0x1D5250u: goto label_1d5250;
            case 0x1D5254u: goto label_1d5254;
            case 0x1D5258u: goto label_1d5258;
            case 0x1D525Cu: goto label_1d525c;
            case 0x1D5260u: goto label_1d5260;
            case 0x1D5264u: goto label_1d5264;
            case 0x1D5268u: goto label_1d5268;
            case 0x1D526Cu: goto label_1d526c;
            case 0x1D5270u: goto label_1d5270;
            case 0x1D5274u: goto label_1d5274;
            case 0x1D5278u: goto label_1d5278;
            case 0x1D527Cu: goto label_1d527c;
            case 0x1D5280u: goto label_1d5280;
            case 0x1D5284u: goto label_1d5284;
            case 0x1D5288u: goto label_1d5288;
            case 0x1D528Cu: goto label_1d528c;
            case 0x1D5290u: goto label_1d5290;
            case 0x1D5294u: goto label_1d5294;
            case 0x1D5298u: goto label_1d5298;
            case 0x1D529Cu: goto label_1d529c;
            case 0x1D52A0u: goto label_1d52a0;
            case 0x1D52A4u: goto label_1d52a4;
            case 0x1D52A8u: goto label_1d52a8;
            case 0x1D52ACu: goto label_1d52ac;
            case 0x1D52B0u: goto label_1d52b0;
            case 0x1D52B4u: goto label_1d52b4;
            case 0x1D52B8u: goto label_1d52b8;
            case 0x1D52BCu: goto label_1d52bc;
            case 0x1D52C0u: goto label_1d52c0;
            case 0x1D52C4u: goto label_1d52c4;
            case 0x1D52C8u: goto label_1d52c8;
            case 0x1D52CCu: goto label_1d52cc;
            case 0x1D52D0u: goto label_1d52d0;
            case 0x1D52D4u: goto label_1d52d4;
            case 0x1D52D8u: goto label_1d52d8;
            case 0x1D52DCu: goto label_1d52dc;
            case 0x1D52E0u: goto label_1d52e0;
            case 0x1D52E4u: goto label_1d52e4;
            case 0x1D52E8u: goto label_1d52e8;
            case 0x1D52ECu: goto label_1d52ec;
            case 0x1D52F0u: goto label_1d52f0;
            case 0x1D52F4u: goto label_1d52f4;
            case 0x1D52F8u: goto label_1d52f8;
            case 0x1D52FCu: goto label_1d52fc;
            case 0x1D5300u: goto label_1d5300;
            case 0x1D5304u: goto label_1d5304;
            case 0x1D5308u: goto label_1d5308;
            case 0x1D530Cu: goto label_1d530c;
            case 0x1D5310u: goto label_1d5310;
            case 0x1D5314u: goto label_1d5314;
            case 0x1D5318u: goto label_1d5318;
            case 0x1D531Cu: goto label_1d531c;
            case 0x1D5320u: goto label_1d5320;
            case 0x1D5324u: goto label_1d5324;
            case 0x1D5328u: goto label_1d5328;
            case 0x1D532Cu: goto label_1d532c;
            case 0x1D5330u: goto label_1d5330;
            case 0x1D5334u: goto label_1d5334;
            case 0x1D5338u: goto label_1d5338;
            case 0x1D533Cu: goto label_1d533c;
            case 0x1D5340u: goto label_1d5340;
            case 0x1D5344u: goto label_1d5344;
            case 0x1D5348u: goto label_1d5348;
            case 0x1D534Cu: goto label_1d534c;
            case 0x1D5350u: goto label_1d5350;
            case 0x1D5354u: goto label_1d5354;
            case 0x1D5358u: goto label_1d5358;
            case 0x1D535Cu: goto label_1d535c;
            case 0x1D5360u: goto label_1d5360;
            case 0x1D5364u: goto label_1d5364;
            case 0x1D5368u: goto label_1d5368;
            case 0x1D536Cu: goto label_1d536c;
            case 0x1D5370u: goto label_1d5370;
            case 0x1D5374u: goto label_1d5374;
            case 0x1D5378u: goto label_1d5378;
            case 0x1D537Cu: goto label_1d537c;
            case 0x1D5380u: goto label_1d5380;
            case 0x1D5384u: goto label_1d5384;
            case 0x1D5388u: goto label_1d5388;
            case 0x1D538Cu: goto label_1d538c;
            case 0x1D5390u: goto label_1d5390;
            case 0x1D5394u: goto label_1d5394;
            case 0x1D5398u: goto label_1d5398;
            case 0x1D539Cu: goto label_1d539c;
            case 0x1D53A0u: goto label_1d53a0;
            case 0x1D53A4u: goto label_1d53a4;
            case 0x1D53A8u: goto label_1d53a8;
            case 0x1D53ACu: goto label_1d53ac;
            case 0x1D53B0u: goto label_1d53b0;
            case 0x1D53B4u: goto label_1d53b4;
            case 0x1D53B8u: goto label_1d53b8;
            case 0x1D53BCu: goto label_1d53bc;
            case 0x1D53C0u: goto label_1d53c0;
            case 0x1D53C4u: goto label_1d53c4;
            case 0x1D53C8u: goto label_1d53c8;
            case 0x1D53CCu: goto label_1d53cc;
            case 0x1D53D0u: goto label_1d53d0;
            case 0x1D53D4u: goto label_1d53d4;
            case 0x1D53D8u: goto label_1d53d8;
            case 0x1D53DCu: goto label_1d53dc;
            case 0x1D53E0u: goto label_1d53e0;
            case 0x1D53E4u: goto label_1d53e4;
            case 0x1D53E8u: goto label_1d53e8;
            case 0x1D53ECu: goto label_1d53ec;
            case 0x1D53F0u: goto label_1d53f0;
            case 0x1D53F4u: goto label_1d53f4;
            case 0x1D53F8u: goto label_1d53f8;
            case 0x1D53FCu: goto label_1d53fc;
            case 0x1D5400u: goto label_1d5400;
            case 0x1D5404u: goto label_1d5404;
            case 0x1D5408u: goto label_1d5408;
            case 0x1D540Cu: goto label_1d540c;
            case 0x1D5410u: goto label_1d5410;
            case 0x1D5414u: goto label_1d5414;
            case 0x1D5418u: goto label_1d5418;
            case 0x1D541Cu: goto label_1d541c;
            case 0x1D5420u: goto label_1d5420;
            case 0x1D5424u: goto label_1d5424;
            case 0x1D5428u: goto label_1d5428;
            case 0x1D542Cu: goto label_1d542c;
            case 0x1D5430u: goto label_1d5430;
            case 0x1D5434u: goto label_1d5434;
            case 0x1D5438u: goto label_1d5438;
            case 0x1D543Cu: goto label_1d543c;
            case 0x1D5440u: goto label_1d5440;
            case 0x1D5444u: goto label_1d5444;
            case 0x1D5448u: goto label_1d5448;
            case 0x1D544Cu: goto label_1d544c;
            case 0x1D5450u: goto label_1d5450;
            case 0x1D5454u: goto label_1d5454;
            case 0x1D5458u: goto label_1d5458;
            case 0x1D545Cu: goto label_1d545c;
            case 0x1D5460u: goto label_1d5460;
            case 0x1D5464u: goto label_1d5464;
            case 0x1D5468u: goto label_1d5468;
            case 0x1D546Cu: goto label_1d546c;
            case 0x1D5470u: goto label_1d5470;
            case 0x1D5474u: goto label_1d5474;
            case 0x1D5478u: goto label_1d5478;
            case 0x1D547Cu: goto label_1d547c;
            case 0x1D5480u: goto label_1d5480;
            case 0x1D5484u: goto label_1d5484;
            case 0x1D5488u: goto label_1d5488;
            case 0x1D548Cu: goto label_1d548c;
            case 0x1D5490u: goto label_1d5490;
            case 0x1D5494u: goto label_1d5494;
            case 0x1D5498u: goto label_1d5498;
            case 0x1D549Cu: goto label_1d549c;
            case 0x1D54A0u: goto label_1d54a0;
            case 0x1D54A4u: goto label_1d54a4;
            case 0x1D54A8u: goto label_1d54a8;
            case 0x1D54ACu: goto label_1d54ac;
            case 0x1D54B0u: goto label_1d54b0;
            case 0x1D54B4u: goto label_1d54b4;
            case 0x1D54B8u: goto label_1d54b8;
            case 0x1D54BCu: goto label_1d54bc;
            case 0x1D54C0u: goto label_1d54c0;
            case 0x1D54C4u: goto label_1d54c4;
            case 0x1D54C8u: goto label_1d54c8;
            case 0x1D54CCu: goto label_1d54cc;
            case 0x1D54D0u: goto label_1d54d0;
            case 0x1D54D4u: goto label_1d54d4;
            case 0x1D54D8u: goto label_1d54d8;
            case 0x1D54DCu: goto label_1d54dc;
            case 0x1D54E0u: goto label_1d54e0;
            case 0x1D54E4u: goto label_1d54e4;
            case 0x1D54E8u: goto label_1d54e8;
            case 0x1D54ECu: goto label_1d54ec;
            case 0x1D54F0u: goto label_1d54f0;
            case 0x1D54F4u: goto label_1d54f4;
            case 0x1D54F8u: goto label_1d54f8;
            case 0x1D54FCu: goto label_1d54fc;
            case 0x1D5500u: goto label_1d5500;
            case 0x1D5504u: goto label_1d5504;
            case 0x1D5508u: goto label_1d5508;
            case 0x1D550Cu: goto label_1d550c;
            case 0x1D5510u: goto label_1d5510;
            case 0x1D5514u: goto label_1d5514;
            case 0x1D5518u: goto label_1d5518;
            case 0x1D551Cu: goto label_1d551c;
            case 0x1D5520u: goto label_1d5520;
            case 0x1D5524u: goto label_1d5524;
            case 0x1D5528u: goto label_1d5528;
            case 0x1D552Cu: goto label_1d552c;
            case 0x1D5530u: goto label_1d5530;
            case 0x1D5534u: goto label_1d5534;
            case 0x1D5538u: goto label_1d5538;
            case 0x1D553Cu: goto label_1d553c;
            case 0x1D5540u: goto label_1d5540;
            case 0x1D5544u: goto label_1d5544;
            case 0x1D5548u: goto label_1d5548;
            case 0x1D554Cu: goto label_1d554c;
            case 0x1D5550u: goto label_1d5550;
            case 0x1D5554u: goto label_1d5554;
            case 0x1D5558u: goto label_1d5558;
            case 0x1D555Cu: goto label_1d555c;
            case 0x1D5560u: goto label_1d5560;
            case 0x1D5564u: goto label_1d5564;
            case 0x1D5568u: goto label_1d5568;
            case 0x1D556Cu: goto label_1d556c;
            case 0x1D5570u: goto label_1d5570;
            case 0x1D5574u: goto label_1d5574;
            case 0x1D5578u: goto label_1d5578;
            case 0x1D557Cu: goto label_1d557c;
            case 0x1D5580u: goto label_1d5580;
            case 0x1D5584u: goto label_1d5584;
            case 0x1D5588u: goto label_1d5588;
            case 0x1D558Cu: goto label_1d558c;
            case 0x1D5590u: goto label_1d5590;
            case 0x1D5594u: goto label_1d5594;
            case 0x1D5598u: goto label_1d5598;
            case 0x1D559Cu: goto label_1d559c;
            case 0x1D55A0u: goto label_1d55a0;
            case 0x1D55A4u: goto label_1d55a4;
            case 0x1D55A8u: goto label_1d55a8;
            case 0x1D55ACu: goto label_1d55ac;
            case 0x1D55B0u: goto label_1d55b0;
            case 0x1D55B4u: goto label_1d55b4;
            case 0x1D55B8u: goto label_1d55b8;
            case 0x1D55BCu: goto label_1d55bc;
            case 0x1D55C0u: goto label_1d55c0;
            case 0x1D55C4u: goto label_1d55c4;
            case 0x1D55C8u: goto label_1d55c8;
            case 0x1D55CCu: goto label_1d55cc;
            case 0x1D55D0u: goto label_1d55d0;
            case 0x1D55D4u: goto label_1d55d4;
            case 0x1D55D8u: goto label_1d55d8;
            case 0x1D55DCu: goto label_1d55dc;
            case 0x1D55E0u: goto label_1d55e0;
            case 0x1D55E4u: goto label_1d55e4;
            case 0x1D55E8u: goto label_1d55e8;
            case 0x1D55ECu: goto label_1d55ec;
            case 0x1D55F0u: goto label_1d55f0;
            case 0x1D55F4u: goto label_1d55f4;
            case 0x1D55F8u: goto label_1d55f8;
            case 0x1D55FCu: goto label_1d55fc;
            case 0x1D5600u: goto label_1d5600;
            case 0x1D5604u: goto label_1d5604;
            case 0x1D5608u: goto label_1d5608;
            case 0x1D560Cu: goto label_1d560c;
            case 0x1D5610u: goto label_1d5610;
            case 0x1D5614u: goto label_1d5614;
            case 0x1D5618u: goto label_1d5618;
            case 0x1D561Cu: goto label_1d561c;
            case 0x1D5620u: goto label_1d5620;
            case 0x1D5624u: goto label_1d5624;
            case 0x1D5628u: goto label_1d5628;
            case 0x1D562Cu: goto label_1d562c;
            case 0x1D5630u: goto label_1d5630;
            case 0x1D5634u: goto label_1d5634;
            case 0x1D5638u: goto label_1d5638;
            case 0x1D563Cu: goto label_1d563c;
            case 0x1D5640u: goto label_1d5640;
            case 0x1D5644u: goto label_1d5644;
            case 0x1D5648u: goto label_1d5648;
            case 0x1D564Cu: goto label_1d564c;
            case 0x1D5650u: goto label_1d5650;
            case 0x1D5654u: goto label_1d5654;
            case 0x1D5658u: goto label_1d5658;
            case 0x1D565Cu: goto label_1d565c;
            case 0x1D5660u: goto label_1d5660;
            case 0x1D5664u: goto label_1d5664;
            case 0x1D5668u: goto label_1d5668;
            case 0x1D566Cu: goto label_1d566c;
            case 0x1D5670u: goto label_1d5670;
            case 0x1D5674u: goto label_1d5674;
            case 0x1D5678u: goto label_1d5678;
            case 0x1D567Cu: goto label_1d567c;
            case 0x1D5680u: goto label_1d5680;
            case 0x1D5684u: goto label_1d5684;
            case 0x1D5688u: goto label_1d5688;
            case 0x1D568Cu: goto label_1d568c;
            case 0x1D5690u: goto label_1d5690;
            case 0x1D5694u: goto label_1d5694;
            case 0x1D5698u: goto label_1d5698;
            case 0x1D569Cu: goto label_1d569c;
            case 0x1D56A0u: goto label_1d56a0;
            case 0x1D56A4u: goto label_1d56a4;
            case 0x1D56A8u: goto label_1d56a8;
            case 0x1D56ACu: goto label_1d56ac;
            case 0x1D56B0u: goto label_1d56b0;
            case 0x1D56B4u: goto label_1d56b4;
            case 0x1D56B8u: goto label_1d56b8;
            case 0x1D56BCu: goto label_1d56bc;
            case 0x1D56C0u: goto label_1d56c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D55B4u; }
            if (ctx->pc != 0x1D55B4u) { return; }
        }
    }
    ctx->pc = 0x1D55B4u;
label_1d55b4:
    // 0x1d55b4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1d55b8:
    if (ctx->pc == 0x1D55B8u) {
        ctx->pc = 0x1D55BCu;
        goto label_1d55bc;
    }
    ctx->pc = 0x1D55B4u;
    {
        const bool branch_taken_0x1d55b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55b4) {
            ctx->pc = 0x1D56B0u;
            goto label_1d56b0;
        }
    }
    ctx->pc = 0x1D55BCu;
label_1d55bc:
    // 0x1d55bc: 0x0  nop
    ctx->pc = 0x1d55bcu;
    // NOP
label_1d55c0:
    // 0x1d55c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d55c4:
    // 0x1d55c4: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1d55c8:
    if (ctx->pc == 0x1D55C8u) {
        ctx->pc = 0x1D55CCu;
        goto label_1d55cc;
    }
    ctx->pc = 0x1D55C4u;
    {
        const bool branch_taken_0x1d55c4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d55c4) {
            ctx->pc = 0x1D5690u;
            goto label_1d5690;
        }
    }
    ctx->pc = 0x1D55CCu;
label_1d55cc:
    // 0x1d55cc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d55ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d55d0:
    // 0x1d55d0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d55d4:
    // 0x1d55d4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d55d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d55d8:
    // 0x1d55d8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d55d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d55dc:
    // 0x1d55dc: 0xc05d080  jal         func_174200
label_1d55e0:
    if (ctx->pc == 0x1D55E0u) {
        ctx->pc = 0x1D55E0u;
            // 0x1d55e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D55E4u;
        goto label_1d55e4;
    }
    ctx->pc = 0x1D55DCu;
    SET_GPR_U32(ctx, 31, 0x1D55E4u);
    ctx->pc = 0x1D55E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55DCu;
            // 0x1d55e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55E4u; }
        if (ctx->pc != 0x1D55E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55E4u; }
        if (ctx->pc != 0x1D55E4u) { return; }
    }
    ctx->pc = 0x1D55E4u;
label_1d55e4:
    // 0x1d55e4: 0xc050bb4  jal         func_142ED0
label_1d55e8:
    if (ctx->pc == 0x1D55E8u) {
        ctx->pc = 0x1D55ECu;
        goto label_1d55ec;
    }
    ctx->pc = 0x1D55E4u;
    SET_GPR_U32(ctx, 31, 0x1D55ECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55ECu; }
        if (ctx->pc != 0x1D55ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D55ECu; }
        if (ctx->pc != 0x1D55ECu) { return; }
    }
    ctx->pc = 0x1D55ECu;
label_1d55ec:
    // 0x1d55ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d55ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d55f0:
    // 0x1d55f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d55f4:
    if (ctx->pc == 0x1D55F4u) {
        ctx->pc = 0x1D55F8u;
        goto label_1d55f8;
    }
    ctx->pc = 0x1D55F0u;
    {
        const bool branch_taken_0x1d55f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55f0) {
            ctx->pc = 0x1D5610u;
            goto label_1d5610;
        }
    }
    ctx->pc = 0x1D55F8u;
label_1d55f8:
    // 0x1d55f8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d55f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d55fc:
    // 0x1d55fc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1d5600:
    // 0x1d5600: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5604:
    // 0x1d5604: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d5604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d5608:
    // 0x1d5608: 0xc05d080  jal         func_174200
label_1d560c:
    if (ctx->pc == 0x1D560Cu) {
        ctx->pc = 0x1D560Cu;
            // 0x1d560c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D5610u;
        goto label_1d5610;
    }
    ctx->pc = 0x1D5608u;
    SET_GPR_U32(ctx, 31, 0x1D5610u);
    ctx->pc = 0x1D560Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5608u;
            // 0x1d560c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5610u; }
        if (ctx->pc != 0x1D5610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5610u; }
        if (ctx->pc != 0x1D5610u) { return; }
    }
    ctx->pc = 0x1D5610u;
label_1d5610:
    // 0x1d5610: 0xc050bb4  jal         func_142ED0
label_1d5614:
    if (ctx->pc == 0x1D5614u) {
        ctx->pc = 0x1D5618u;
        goto label_1d5618;
    }
    ctx->pc = 0x1D5610u;
    SET_GPR_U32(ctx, 31, 0x1D5618u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5618u; }
        if (ctx->pc != 0x1D5618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5618u; }
        if (ctx->pc != 0x1D5618u) { return; }
    }
    ctx->pc = 0x1D5618u;
label_1d5618:
    // 0x1d5618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d5618u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1d561c:
    // 0x1d561c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d5620:
    if (ctx->pc == 0x1D5620u) {
        ctx->pc = 0x1D5624u;
        goto label_1d5624;
    }
    ctx->pc = 0x1D561Cu;
    {
        const bool branch_taken_0x1d561c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d561c) {
            ctx->pc = 0x1D5640u;
            goto label_1d5640;
        }
    }
    ctx->pc = 0x1D5624u;
label_1d5624:
    // 0x1d5624: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d5624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5628:
    // 0x1d5628: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d562c:
    // 0x1d562c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5630:
    // 0x1d5630: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d5630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d5634:
    // 0x1d5634: 0xc05d080  jal         func_174200
label_1d5638:
    if (ctx->pc == 0x1D5638u) {
        ctx->pc = 0x1D5638u;
            // 0x1d5638: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D563Cu;
        goto label_1d563c;
    }
    ctx->pc = 0x1D5634u;
    SET_GPR_U32(ctx, 31, 0x1D563Cu);
    ctx->pc = 0x1D5638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5634u;
            // 0x1d5638: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D563Cu; }
        if (ctx->pc != 0x1D563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D563Cu; }
        if (ctx->pc != 0x1D563Cu) { return; }
    }
    ctx->pc = 0x1D563Cu;
label_1d563c:
    // 0x1d563c: 0x0  nop
    ctx->pc = 0x1d563cu;
    // NOP
label_1d5640:
    // 0x1d5640: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1d5644:
    // 0x1d5644: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1d5644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5648:
    // 0x1d5648: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1d5648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d564c:
    // 0x1d564c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1d564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5650:
    // 0x1d5650: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d5650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5654:
    // 0x1d5654: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d5654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5658:
    // 0x1d5658: 0x0  nop
    ctx->pc = 0x1d5658u;
    // NOP
label_1d565c:
    // 0x1d565c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1d565cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1d5660:
    // 0x1d5660: 0xc053740  jal         func_14DD00
label_1d5664:
    if (ctx->pc == 0x1D5664u) {
        ctx->pc = 0x1D5664u;
            // 0x1d5664: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1D5668u;
        goto label_1d5668;
    }
    ctx->pc = 0x1D5660u;
    SET_GPR_U32(ctx, 31, 0x1D5668u);
    ctx->pc = 0x1D5664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5660u;
            // 0x1d5664: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5668u; }
        if (ctx->pc != 0x1D5668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5668u; }
        if (ctx->pc != 0x1D5668u) { return; }
    }
    ctx->pc = 0x1D5668u;
label_1d5668:
    // 0x1d5668: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1d5668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1d566c:
    // 0x1d566c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5670:
    // 0x1d5670: 0xc07b0fc  jal         func_1EC3F0
label_1d5674:
    if (ctx->pc == 0x1D5674u) {
        ctx->pc = 0x1D5674u;
            // 0x1d5674: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D5678u;
        goto label_1d5678;
    }
    ctx->pc = 0x1D5670u;
    SET_GPR_U32(ctx, 31, 0x1D5678u);
    ctx->pc = 0x1D5674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5670u;
            // 0x1d5674: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5678u; }
        if (ctx->pc != 0x1D5678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5678u; }
        if (ctx->pc != 0x1D5678u) { return; }
    }
    ctx->pc = 0x1D5678u;
label_1d5678:
    // 0x1d5678: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1d5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1d567c:
    // 0x1d567c: 0x40f809  jalr        $v0
label_1d5680:
    if (ctx->pc == 0x1D5680u) {
        ctx->pc = 0x1D5680u;
            // 0x1d5680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5684u;
        goto label_1d5684;
    }
    ctx->pc = 0x1D567Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5684u);
        ctx->pc = 0x1D5680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D567Cu;
            // 0x1d5680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4240u: goto label_1d4240;
            case 0x1D4244u: goto label_1d4244;
            case 0x1D4248u: goto label_1d4248;
            case 0x1D424Cu: goto label_1d424c;
            case 0x1D4250u: goto label_1d4250;
            case 0x1D4254u: goto label_1d4254;
            case 0x1D4258u: goto label_1d4258;
            case 0x1D425Cu: goto label_1d425c;
            case 0x1D4260u: goto label_1d4260;
            case 0x1D4264u: goto label_1d4264;
            case 0x1D4268u: goto label_1d4268;
            case 0x1D426Cu: goto label_1d426c;
            case 0x1D4270u: goto label_1d4270;
            case 0x1D4274u: goto label_1d4274;
            case 0x1D4278u: goto label_1d4278;
            case 0x1D427Cu: goto label_1d427c;
            case 0x1D4280u: goto label_1d4280;
            case 0x1D4284u: goto label_1d4284;
            case 0x1D4288u: goto label_1d4288;
            case 0x1D428Cu: goto label_1d428c;
            case 0x1D4290u: goto label_1d4290;
            case 0x1D4294u: goto label_1d4294;
            case 0x1D4298u: goto label_1d4298;
            case 0x1D429Cu: goto label_1d429c;
            case 0x1D42A0u: goto label_1d42a0;
            case 0x1D42A4u: goto label_1d42a4;
            case 0x1D42A8u: goto label_1d42a8;
            case 0x1D42ACu: goto label_1d42ac;
            case 0x1D42B0u: goto label_1d42b0;
            case 0x1D42B4u: goto label_1d42b4;
            case 0x1D42B8u: goto label_1d42b8;
            case 0x1D42BCu: goto label_1d42bc;
            case 0x1D42C0u: goto label_1d42c0;
            case 0x1D42C4u: goto label_1d42c4;
            case 0x1D42C8u: goto label_1d42c8;
            case 0x1D42CCu: goto label_1d42cc;
            case 0x1D42D0u: goto label_1d42d0;
            case 0x1D42D4u: goto label_1d42d4;
            case 0x1D42D8u: goto label_1d42d8;
            case 0x1D42DCu: goto label_1d42dc;
            case 0x1D42E0u: goto label_1d42e0;
            case 0x1D42E4u: goto label_1d42e4;
            case 0x1D42E8u: goto label_1d42e8;
            case 0x1D42ECu: goto label_1d42ec;
            case 0x1D42F0u: goto label_1d42f0;
            case 0x1D42F4u: goto label_1d42f4;
            case 0x1D42F8u: goto label_1d42f8;
            case 0x1D42FCu: goto label_1d42fc;
            case 0x1D4300u: goto label_1d4300;
            case 0x1D4304u: goto label_1d4304;
            case 0x1D4308u: goto label_1d4308;
            case 0x1D430Cu: goto label_1d430c;
            case 0x1D4310u: goto label_1d4310;
            case 0x1D4314u: goto label_1d4314;
            case 0x1D4318u: goto label_1d4318;
            case 0x1D431Cu: goto label_1d431c;
            case 0x1D4320u: goto label_1d4320;
            case 0x1D4324u: goto label_1d4324;
            case 0x1D4328u: goto label_1d4328;
            case 0x1D432Cu: goto label_1d432c;
            case 0x1D4330u: goto label_1d4330;
            case 0x1D4334u: goto label_1d4334;
            case 0x1D4338u: goto label_1d4338;
            case 0x1D433Cu: goto label_1d433c;
            case 0x1D4340u: goto label_1d4340;
            case 0x1D4344u: goto label_1d4344;
            case 0x1D4348u: goto label_1d4348;
            case 0x1D434Cu: goto label_1d434c;
            case 0x1D4350u: goto label_1d4350;
            case 0x1D4354u: goto label_1d4354;
            case 0x1D4358u: goto label_1d4358;
            case 0x1D435Cu: goto label_1d435c;
            case 0x1D4360u: goto label_1d4360;
            case 0x1D4364u: goto label_1d4364;
            case 0x1D4368u: goto label_1d4368;
            case 0x1D436Cu: goto label_1d436c;
            case 0x1D4370u: goto label_1d4370;
            case 0x1D4374u: goto label_1d4374;
            case 0x1D4378u: goto label_1d4378;
            case 0x1D437Cu: goto label_1d437c;
            case 0x1D4380u: goto label_1d4380;
            case 0x1D4384u: goto label_1d4384;
            case 0x1D4388u: goto label_1d4388;
            case 0x1D438Cu: goto label_1d438c;
            case 0x1D4390u: goto label_1d4390;
            case 0x1D4394u: goto label_1d4394;
            case 0x1D4398u: goto label_1d4398;
            case 0x1D439Cu: goto label_1d439c;
            case 0x1D43A0u: goto label_1d43a0;
            case 0x1D43A4u: goto label_1d43a4;
            case 0x1D43A8u: goto label_1d43a8;
            case 0x1D43ACu: goto label_1d43ac;
            case 0x1D43B0u: goto label_1d43b0;
            case 0x1D43B4u: goto label_1d43b4;
            case 0x1D43B8u: goto label_1d43b8;
            case 0x1D43BCu: goto label_1d43bc;
            case 0x1D43C0u: goto label_1d43c0;
            case 0x1D43C4u: goto label_1d43c4;
            case 0x1D43C8u: goto label_1d43c8;
            case 0x1D43CCu: goto label_1d43cc;
            case 0x1D43D0u: goto label_1d43d0;
            case 0x1D43D4u: goto label_1d43d4;
            case 0x1D43D8u: goto label_1d43d8;
            case 0x1D43DCu: goto label_1d43dc;
            case 0x1D43E0u: goto label_1d43e0;
            case 0x1D43E4u: goto label_1d43e4;
            case 0x1D43E8u: goto label_1d43e8;
            case 0x1D43ECu: goto label_1d43ec;
            case 0x1D43F0u: goto label_1d43f0;
            case 0x1D43F4u: goto label_1d43f4;
            case 0x1D43F8u: goto label_1d43f8;
            case 0x1D43FCu: goto label_1d43fc;
            case 0x1D4400u: goto label_1d4400;
            case 0x1D4404u: goto label_1d4404;
            case 0x1D4408u: goto label_1d4408;
            case 0x1D440Cu: goto label_1d440c;
            case 0x1D4410u: goto label_1d4410;
            case 0x1D4414u: goto label_1d4414;
            case 0x1D4418u: goto label_1d4418;
            case 0x1D441Cu: goto label_1d441c;
            case 0x1D4420u: goto label_1d4420;
            case 0x1D4424u: goto label_1d4424;
            case 0x1D4428u: goto label_1d4428;
            case 0x1D442Cu: goto label_1d442c;
            case 0x1D4430u: goto label_1d4430;
            case 0x1D4434u: goto label_1d4434;
            case 0x1D4438u: goto label_1d4438;
            case 0x1D443Cu: goto label_1d443c;
            case 0x1D4440u: goto label_1d4440;
            case 0x1D4444u: goto label_1d4444;
            case 0x1D4448u: goto label_1d4448;
            case 0x1D444Cu: goto label_1d444c;
            case 0x1D4450u: goto label_1d4450;
            case 0x1D4454u: goto label_1d4454;
            case 0x1D4458u: goto label_1d4458;
            case 0x1D445Cu: goto label_1d445c;
            case 0x1D4460u: goto label_1d4460;
            case 0x1D4464u: goto label_1d4464;
            case 0x1D4468u: goto label_1d4468;
            case 0x1D446Cu: goto label_1d446c;
            case 0x1D4470u: goto label_1d4470;
            case 0x1D4474u: goto label_1d4474;
            case 0x1D4478u: goto label_1d4478;
            case 0x1D447Cu: goto label_1d447c;
            case 0x1D4480u: goto label_1d4480;
            case 0x1D4484u: goto label_1d4484;
            case 0x1D4488u: goto label_1d4488;
            case 0x1D448Cu: goto label_1d448c;
            case 0x1D4490u: goto label_1d4490;
            case 0x1D4494u: goto label_1d4494;
            case 0x1D4498u: goto label_1d4498;
            case 0x1D449Cu: goto label_1d449c;
            case 0x1D44A0u: goto label_1d44a0;
            case 0x1D44A4u: goto label_1d44a4;
            case 0x1D44A8u: goto label_1d44a8;
            case 0x1D44ACu: goto label_1d44ac;
            case 0x1D44B0u: goto label_1d44b0;
            case 0x1D44B4u: goto label_1d44b4;
            case 0x1D44B8u: goto label_1d44b8;
            case 0x1D44BCu: goto label_1d44bc;
            case 0x1D44C0u: goto label_1d44c0;
            case 0x1D44C4u: goto label_1d44c4;
            case 0x1D44C8u: goto label_1d44c8;
            case 0x1D44CCu: goto label_1d44cc;
            case 0x1D44D0u: goto label_1d44d0;
            case 0x1D44D4u: goto label_1d44d4;
            case 0x1D44D8u: goto label_1d44d8;
            case 0x1D44DCu: goto label_1d44dc;
            case 0x1D44E0u: goto label_1d44e0;
            case 0x1D44E4u: goto label_1d44e4;
            case 0x1D44E8u: goto label_1d44e8;
            case 0x1D44ECu: goto label_1d44ec;
            case 0x1D44F0u: goto label_1d44f0;
            case 0x1D44F4u: goto label_1d44f4;
            case 0x1D44F8u: goto label_1d44f8;
            case 0x1D44FCu: goto label_1d44fc;
            case 0x1D4500u: goto label_1d4500;
            case 0x1D4504u: goto label_1d4504;
            case 0x1D4508u: goto label_1d4508;
            case 0x1D450Cu: goto label_1d450c;
            case 0x1D4510u: goto label_1d4510;
            case 0x1D4514u: goto label_1d4514;
            case 0x1D4518u: goto label_1d4518;
            case 0x1D451Cu: goto label_1d451c;
            case 0x1D4520u: goto label_1d4520;
            case 0x1D4524u: goto label_1d4524;
            case 0x1D4528u: goto label_1d4528;
            case 0x1D452Cu: goto label_1d452c;
            case 0x1D4530u: goto label_1d4530;
            case 0x1D4534u: goto label_1d4534;
            case 0x1D4538u: goto label_1d4538;
            case 0x1D453Cu: goto label_1d453c;
            case 0x1D4540u: goto label_1d4540;
            case 0x1D4544u: goto label_1d4544;
            case 0x1D4548u: goto label_1d4548;
            case 0x1D454Cu: goto label_1d454c;
            case 0x1D4550u: goto label_1d4550;
            case 0x1D4554u: goto label_1d4554;
            case 0x1D4558u: goto label_1d4558;
            case 0x1D455Cu: goto label_1d455c;
            case 0x1D4560u: goto label_1d4560;
            case 0x1D4564u: goto label_1d4564;
            case 0x1D4568u: goto label_1d4568;
            case 0x1D456Cu: goto label_1d456c;
            case 0x1D4570u: goto label_1d4570;
            case 0x1D4574u: goto label_1d4574;
            case 0x1D4578u: goto label_1d4578;
            case 0x1D457Cu: goto label_1d457c;
            case 0x1D4580u: goto label_1d4580;
            case 0x1D4584u: goto label_1d4584;
            case 0x1D4588u: goto label_1d4588;
            case 0x1D458Cu: goto label_1d458c;
            case 0x1D4590u: goto label_1d4590;
            case 0x1D4594u: goto label_1d4594;
            case 0x1D4598u: goto label_1d4598;
            case 0x1D459Cu: goto label_1d459c;
            case 0x1D45A0u: goto label_1d45a0;
            case 0x1D45A4u: goto label_1d45a4;
            case 0x1D45A8u: goto label_1d45a8;
            case 0x1D45ACu: goto label_1d45ac;
            case 0x1D45B0u: goto label_1d45b0;
            case 0x1D45B4u: goto label_1d45b4;
            case 0x1D45B8u: goto label_1d45b8;
            case 0x1D45BCu: goto label_1d45bc;
            case 0x1D45C0u: goto label_1d45c0;
            case 0x1D45C4u: goto label_1d45c4;
            case 0x1D45C8u: goto label_1d45c8;
            case 0x1D45CCu: goto label_1d45cc;
            case 0x1D45D0u: goto label_1d45d0;
            case 0x1D45D4u: goto label_1d45d4;
            case 0x1D45D8u: goto label_1d45d8;
            case 0x1D45DCu: goto label_1d45dc;
            case 0x1D45E0u: goto label_1d45e0;
            case 0x1D45E4u: goto label_1d45e4;
            case 0x1D45E8u: goto label_1d45e8;
            case 0x1D45ECu: goto label_1d45ec;
            case 0x1D45F0u: goto label_1d45f0;
            case 0x1D45F4u: goto label_1d45f4;
            case 0x1D45F8u: goto label_1d45f8;
            case 0x1D45FCu: goto label_1d45fc;
            case 0x1D4600u: goto label_1d4600;
            case 0x1D4604u: goto label_1d4604;
            case 0x1D4608u: goto label_1d4608;
            case 0x1D460Cu: goto label_1d460c;
            case 0x1D4610u: goto label_1d4610;
            case 0x1D4614u: goto label_1d4614;
            case 0x1D4618u: goto label_1d4618;
            case 0x1D461Cu: goto label_1d461c;
            case 0x1D4620u: goto label_1d4620;
            case 0x1D4624u: goto label_1d4624;
            case 0x1D4628u: goto label_1d4628;
            case 0x1D462Cu: goto label_1d462c;
            case 0x1D4630u: goto label_1d4630;
            case 0x1D4634u: goto label_1d4634;
            case 0x1D4638u: goto label_1d4638;
            case 0x1D463Cu: goto label_1d463c;
            case 0x1D4640u: goto label_1d4640;
            case 0x1D4644u: goto label_1d4644;
            case 0x1D4648u: goto label_1d4648;
            case 0x1D464Cu: goto label_1d464c;
            case 0x1D4650u: goto label_1d4650;
            case 0x1D4654u: goto label_1d4654;
            case 0x1D4658u: goto label_1d4658;
            case 0x1D465Cu: goto label_1d465c;
            case 0x1D4660u: goto label_1d4660;
            case 0x1D4664u: goto label_1d4664;
            case 0x1D4668u: goto label_1d4668;
            case 0x1D466Cu: goto label_1d466c;
            case 0x1D4670u: goto label_1d4670;
            case 0x1D4674u: goto label_1d4674;
            case 0x1D4678u: goto label_1d4678;
            case 0x1D467Cu: goto label_1d467c;
            case 0x1D4680u: goto label_1d4680;
            case 0x1D4684u: goto label_1d4684;
            case 0x1D4688u: goto label_1d4688;
            case 0x1D468Cu: goto label_1d468c;
            case 0x1D4690u: goto label_1d4690;
            case 0x1D4694u: goto label_1d4694;
            case 0x1D4698u: goto label_1d4698;
            case 0x1D469Cu: goto label_1d469c;
            case 0x1D46A0u: goto label_1d46a0;
            case 0x1D46A4u: goto label_1d46a4;
            case 0x1D46A8u: goto label_1d46a8;
            case 0x1D46ACu: goto label_1d46ac;
            case 0x1D46B0u: goto label_1d46b0;
            case 0x1D46B4u: goto label_1d46b4;
            case 0x1D46B8u: goto label_1d46b8;
            case 0x1D46BCu: goto label_1d46bc;
            case 0x1D46C0u: goto label_1d46c0;
            case 0x1D46C4u: goto label_1d46c4;
            case 0x1D46C8u: goto label_1d46c8;
            case 0x1D46CCu: goto label_1d46cc;
            case 0x1D46D0u: goto label_1d46d0;
            case 0x1D46D4u: goto label_1d46d4;
            case 0x1D46D8u: goto label_1d46d8;
            case 0x1D46DCu: goto label_1d46dc;
            case 0x1D46E0u: goto label_1d46e0;
            case 0x1D46E4u: goto label_1d46e4;
            case 0x1D46E8u: goto label_1d46e8;
            case 0x1D46ECu: goto label_1d46ec;
            case 0x1D46F0u: goto label_1d46f0;
            case 0x1D46F4u: goto label_1d46f4;
            case 0x1D46F8u: goto label_1d46f8;
            case 0x1D46FCu: goto label_1d46fc;
            case 0x1D4700u: goto label_1d4700;
            case 0x1D4704u: goto label_1d4704;
            case 0x1D4708u: goto label_1d4708;
            case 0x1D470Cu: goto label_1d470c;
            case 0x1D4710u: goto label_1d4710;
            case 0x1D4714u: goto label_1d4714;
            case 0x1D4718u: goto label_1d4718;
            case 0x1D471Cu: goto label_1d471c;
            case 0x1D4720u: goto label_1d4720;
            case 0x1D4724u: goto label_1d4724;
            case 0x1D4728u: goto label_1d4728;
            case 0x1D472Cu: goto label_1d472c;
            case 0x1D4730u: goto label_1d4730;
            case 0x1D4734u: goto label_1d4734;
            case 0x1D4738u: goto label_1d4738;
            case 0x1D473Cu: goto label_1d473c;
            case 0x1D4740u: goto label_1d4740;
            case 0x1D4744u: goto label_1d4744;
            case 0x1D4748u: goto label_1d4748;
            case 0x1D474Cu: goto label_1d474c;
            case 0x1D4750u: goto label_1d4750;
            case 0x1D4754u: goto label_1d4754;
            case 0x1D4758u: goto label_1d4758;
            case 0x1D475Cu: goto label_1d475c;
            case 0x1D4760u: goto label_1d4760;
            case 0x1D4764u: goto label_1d4764;
            case 0x1D4768u: goto label_1d4768;
            case 0x1D476Cu: goto label_1d476c;
            case 0x1D4770u: goto label_1d4770;
            case 0x1D4774u: goto label_1d4774;
            case 0x1D4778u: goto label_1d4778;
            case 0x1D477Cu: goto label_1d477c;
            case 0x1D4780u: goto label_1d4780;
            case 0x1D4784u: goto label_1d4784;
            case 0x1D4788u: goto label_1d4788;
            case 0x1D478Cu: goto label_1d478c;
            case 0x1D4790u: goto label_1d4790;
            case 0x1D4794u: goto label_1d4794;
            case 0x1D4798u: goto label_1d4798;
            case 0x1D479Cu: goto label_1d479c;
            case 0x1D47A0u: goto label_1d47a0;
            case 0x1D47A4u: goto label_1d47a4;
            case 0x1D47A8u: goto label_1d47a8;
            case 0x1D47ACu: goto label_1d47ac;
            case 0x1D47B0u: goto label_1d47b0;
            case 0x1D47B4u: goto label_1d47b4;
            case 0x1D47B8u: goto label_1d47b8;
            case 0x1D47BCu: goto label_1d47bc;
            case 0x1D47C0u: goto label_1d47c0;
            case 0x1D47C4u: goto label_1d47c4;
            case 0x1D47C8u: goto label_1d47c8;
            case 0x1D47CCu: goto label_1d47cc;
            case 0x1D47D0u: goto label_1d47d0;
            case 0x1D47D4u: goto label_1d47d4;
            case 0x1D47D8u: goto label_1d47d8;
            case 0x1D47DCu: goto label_1d47dc;
            case 0x1D47E0u: goto label_1d47e0;
            case 0x1D47E4u: goto label_1d47e4;
            case 0x1D47E8u: goto label_1d47e8;
            case 0x1D47ECu: goto label_1d47ec;
            case 0x1D47F0u: goto label_1d47f0;
            case 0x1D47F4u: goto label_1d47f4;
            case 0x1D47F8u: goto label_1d47f8;
            case 0x1D47FCu: goto label_1d47fc;
            case 0x1D4800u: goto label_1d4800;
            case 0x1D4804u: goto label_1d4804;
            case 0x1D4808u: goto label_1d4808;
            case 0x1D480Cu: goto label_1d480c;
            case 0x1D4810u: goto label_1d4810;
            case 0x1D4814u: goto label_1d4814;
            case 0x1D4818u: goto label_1d4818;
            case 0x1D481Cu: goto label_1d481c;
            case 0x1D4820u: goto label_1d4820;
            case 0x1D4824u: goto label_1d4824;
            case 0x1D4828u: goto label_1d4828;
            case 0x1D482Cu: goto label_1d482c;
            case 0x1D4830u: goto label_1d4830;
            case 0x1D4834u: goto label_1d4834;
            case 0x1D4838u: goto label_1d4838;
            case 0x1D483Cu: goto label_1d483c;
            case 0x1D4840u: goto label_1d4840;
            case 0x1D4844u: goto label_1d4844;
            case 0x1D4848u: goto label_1d4848;
            case 0x1D484Cu: goto label_1d484c;
            case 0x1D4850u: goto label_1d4850;
            case 0x1D4854u: goto label_1d4854;
            case 0x1D4858u: goto label_1d4858;
            case 0x1D485Cu: goto label_1d485c;
            case 0x1D4860u: goto label_1d4860;
            case 0x1D4864u: goto label_1d4864;
            case 0x1D4868u: goto label_1d4868;
            case 0x1D486Cu: goto label_1d486c;
            case 0x1D4870u: goto label_1d4870;
            case 0x1D4874u: goto label_1d4874;
            case 0x1D4878u: goto label_1d4878;
            case 0x1D487Cu: goto label_1d487c;
            case 0x1D4880u: goto label_1d4880;
            case 0x1D4884u: goto label_1d4884;
            case 0x1D4888u: goto label_1d4888;
            case 0x1D488Cu: goto label_1d488c;
            case 0x1D4890u: goto label_1d4890;
            case 0x1D4894u: goto label_1d4894;
            case 0x1D4898u: goto label_1d4898;
            case 0x1D489Cu: goto label_1d489c;
            case 0x1D48A0u: goto label_1d48a0;
            case 0x1D48A4u: goto label_1d48a4;
            case 0x1D48A8u: goto label_1d48a8;
            case 0x1D48ACu: goto label_1d48ac;
            case 0x1D48B0u: goto label_1d48b0;
            case 0x1D48B4u: goto label_1d48b4;
            case 0x1D48B8u: goto label_1d48b8;
            case 0x1D48BCu: goto label_1d48bc;
            case 0x1D48C0u: goto label_1d48c0;
            case 0x1D48C4u: goto label_1d48c4;
            case 0x1D48C8u: goto label_1d48c8;
            case 0x1D48CCu: goto label_1d48cc;
            case 0x1D48D0u: goto label_1d48d0;
            case 0x1D48D4u: goto label_1d48d4;
            case 0x1D48D8u: goto label_1d48d8;
            case 0x1D48DCu: goto label_1d48dc;
            case 0x1D48E0u: goto label_1d48e0;
            case 0x1D48E4u: goto label_1d48e4;
            case 0x1D48E8u: goto label_1d48e8;
            case 0x1D48ECu: goto label_1d48ec;
            case 0x1D48F0u: goto label_1d48f0;
            case 0x1D48F4u: goto label_1d48f4;
            case 0x1D48F8u: goto label_1d48f8;
            case 0x1D48FCu: goto label_1d48fc;
            case 0x1D4900u: goto label_1d4900;
            case 0x1D4904u: goto label_1d4904;
            case 0x1D4908u: goto label_1d4908;
            case 0x1D490Cu: goto label_1d490c;
            case 0x1D4910u: goto label_1d4910;
            case 0x1D4914u: goto label_1d4914;
            case 0x1D4918u: goto label_1d4918;
            case 0x1D491Cu: goto label_1d491c;
            case 0x1D4920u: goto label_1d4920;
            case 0x1D4924u: goto label_1d4924;
            case 0x1D4928u: goto label_1d4928;
            case 0x1D492Cu: goto label_1d492c;
            case 0x1D4930u: goto label_1d4930;
            case 0x1D4934u: goto label_1d4934;
            case 0x1D4938u: goto label_1d4938;
            case 0x1D493Cu: goto label_1d493c;
            case 0x1D4940u: goto label_1d4940;
            case 0x1D4944u: goto label_1d4944;
            case 0x1D4948u: goto label_1d4948;
            case 0x1D494Cu: goto label_1d494c;
            case 0x1D4950u: goto label_1d4950;
            case 0x1D4954u: goto label_1d4954;
            case 0x1D4958u: goto label_1d4958;
            case 0x1D495Cu: goto label_1d495c;
            case 0x1D4960u: goto label_1d4960;
            case 0x1D4964u: goto label_1d4964;
            case 0x1D4968u: goto label_1d4968;
            case 0x1D496Cu: goto label_1d496c;
            case 0x1D4970u: goto label_1d4970;
            case 0x1D4974u: goto label_1d4974;
            case 0x1D4978u: goto label_1d4978;
            case 0x1D497Cu: goto label_1d497c;
            case 0x1D4980u: goto label_1d4980;
            case 0x1D4984u: goto label_1d4984;
            case 0x1D4988u: goto label_1d4988;
            case 0x1D498Cu: goto label_1d498c;
            case 0x1D4990u: goto label_1d4990;
            case 0x1D4994u: goto label_1d4994;
            case 0x1D4998u: goto label_1d4998;
            case 0x1D499Cu: goto label_1d499c;
            case 0x1D49A0u: goto label_1d49a0;
            case 0x1D49A4u: goto label_1d49a4;
            case 0x1D49A8u: goto label_1d49a8;
            case 0x1D49ACu: goto label_1d49ac;
            case 0x1D49B0u: goto label_1d49b0;
            case 0x1D49B4u: goto label_1d49b4;
            case 0x1D49B8u: goto label_1d49b8;
            case 0x1D49BCu: goto label_1d49bc;
            case 0x1D49C0u: goto label_1d49c0;
            case 0x1D49C4u: goto label_1d49c4;
            case 0x1D49C8u: goto label_1d49c8;
            case 0x1D49CCu: goto label_1d49cc;
            case 0x1D49D0u: goto label_1d49d0;
            case 0x1D49D4u: goto label_1d49d4;
            case 0x1D49D8u: goto label_1d49d8;
            case 0x1D49DCu: goto label_1d49dc;
            case 0x1D49E0u: goto label_1d49e0;
            case 0x1D49E4u: goto label_1d49e4;
            case 0x1D49E8u: goto label_1d49e8;
            case 0x1D49ECu: goto label_1d49ec;
            case 0x1D49F0u: goto label_1d49f0;
            case 0x1D49F4u: goto label_1d49f4;
            case 0x1D49F8u: goto label_1d49f8;
            case 0x1D49FCu: goto label_1d49fc;
            case 0x1D4A00u: goto label_1d4a00;
            case 0x1D4A04u: goto label_1d4a04;
            case 0x1D4A08u: goto label_1d4a08;
            case 0x1D4A0Cu: goto label_1d4a0c;
            case 0x1D4A10u: goto label_1d4a10;
            case 0x1D4A14u: goto label_1d4a14;
            case 0x1D4A18u: goto label_1d4a18;
            case 0x1D4A1Cu: goto label_1d4a1c;
            case 0x1D4A20u: goto label_1d4a20;
            case 0x1D4A24u: goto label_1d4a24;
            case 0x1D4A28u: goto label_1d4a28;
            case 0x1D4A2Cu: goto label_1d4a2c;
            case 0x1D4A30u: goto label_1d4a30;
            case 0x1D4A34u: goto label_1d4a34;
            case 0x1D4A38u: goto label_1d4a38;
            case 0x1D4A3Cu: goto label_1d4a3c;
            case 0x1D4A40u: goto label_1d4a40;
            case 0x1D4A44u: goto label_1d4a44;
            case 0x1D4A48u: goto label_1d4a48;
            case 0x1D4A4Cu: goto label_1d4a4c;
            case 0x1D4A50u: goto label_1d4a50;
            case 0x1D4A54u: goto label_1d4a54;
            case 0x1D4A58u: goto label_1d4a58;
            case 0x1D4A5Cu: goto label_1d4a5c;
            case 0x1D4A60u: goto label_1d4a60;
            case 0x1D4A64u: goto label_1d4a64;
            case 0x1D4A68u: goto label_1d4a68;
            case 0x1D4A6Cu: goto label_1d4a6c;
            case 0x1D4A70u: goto label_1d4a70;
            case 0x1D4A74u: goto label_1d4a74;
            case 0x1D4A78u: goto label_1d4a78;
            case 0x1D4A7Cu: goto label_1d4a7c;
            case 0x1D4A80u: goto label_1d4a80;
            case 0x1D4A84u: goto label_1d4a84;
            case 0x1D4A88u: goto label_1d4a88;
            case 0x1D4A8Cu: goto label_1d4a8c;
            case 0x1D4A90u: goto label_1d4a90;
            case 0x1D4A94u: goto label_1d4a94;
            case 0x1D4A98u: goto label_1d4a98;
            case 0x1D4A9Cu: goto label_1d4a9c;
            case 0x1D4AA0u: goto label_1d4aa0;
            case 0x1D4AA4u: goto label_1d4aa4;
            case 0x1D4AA8u: goto label_1d4aa8;
            case 0x1D4AACu: goto label_1d4aac;
            case 0x1D4AB0u: goto label_1d4ab0;
            case 0x1D4AB4u: goto label_1d4ab4;
            case 0x1D4AB8u: goto label_1d4ab8;
            case 0x1D4ABCu: goto label_1d4abc;
            case 0x1D4AC0u: goto label_1d4ac0;
            case 0x1D4AC4u: goto label_1d4ac4;
            case 0x1D4AC8u: goto label_1d4ac8;
            case 0x1D4ACCu: goto label_1d4acc;
            case 0x1D4AD0u: goto label_1d4ad0;
            case 0x1D4AD4u: goto label_1d4ad4;
            case 0x1D4AD8u: goto label_1d4ad8;
            case 0x1D4ADCu: goto label_1d4adc;
            case 0x1D4AE0u: goto label_1d4ae0;
            case 0x1D4AE4u: goto label_1d4ae4;
            case 0x1D4AE8u: goto label_1d4ae8;
            case 0x1D4AECu: goto label_1d4aec;
            case 0x1D4AF0u: goto label_1d4af0;
            case 0x1D4AF4u: goto label_1d4af4;
            case 0x1D4AF8u: goto label_1d4af8;
            case 0x1D4AFCu: goto label_1d4afc;
            case 0x1D4B00u: goto label_1d4b00;
            case 0x1D4B04u: goto label_1d4b04;
            case 0x1D4B08u: goto label_1d4b08;
            case 0x1D4B0Cu: goto label_1d4b0c;
            case 0x1D4B10u: goto label_1d4b10;
            case 0x1D4B14u: goto label_1d4b14;
            case 0x1D4B18u: goto label_1d4b18;
            case 0x1D4B1Cu: goto label_1d4b1c;
            case 0x1D4B20u: goto label_1d4b20;
            case 0x1D4B24u: goto label_1d4b24;
            case 0x1D4B28u: goto label_1d4b28;
            case 0x1D4B2Cu: goto label_1d4b2c;
            case 0x1D4B30u: goto label_1d4b30;
            case 0x1D4B34u: goto label_1d4b34;
            case 0x1D4B38u: goto label_1d4b38;
            case 0x1D4B3Cu: goto label_1d4b3c;
            case 0x1D4B40u: goto label_1d4b40;
            case 0x1D4B44u: goto label_1d4b44;
            case 0x1D4B48u: goto label_1d4b48;
            case 0x1D4B4Cu: goto label_1d4b4c;
            case 0x1D4B50u: goto label_1d4b50;
            case 0x1D4B54u: goto label_1d4b54;
            case 0x1D4B58u: goto label_1d4b58;
            case 0x1D4B5Cu: goto label_1d4b5c;
            case 0x1D4B60u: goto label_1d4b60;
            case 0x1D4B64u: goto label_1d4b64;
            case 0x1D4B68u: goto label_1d4b68;
            case 0x1D4B6Cu: goto label_1d4b6c;
            case 0x1D4B70u: goto label_1d4b70;
            case 0x1D4B74u: goto label_1d4b74;
            case 0x1D4B78u: goto label_1d4b78;
            case 0x1D4B7Cu: goto label_1d4b7c;
            case 0x1D4B80u: goto label_1d4b80;
            case 0x1D4B84u: goto label_1d4b84;
            case 0x1D4B88u: goto label_1d4b88;
            case 0x1D4B8Cu: goto label_1d4b8c;
            case 0x1D4B90u: goto label_1d4b90;
            case 0x1D4B94u: goto label_1d4b94;
            case 0x1D4B98u: goto label_1d4b98;
            case 0x1D4B9Cu: goto label_1d4b9c;
            case 0x1D4BA0u: goto label_1d4ba0;
            case 0x1D4BA4u: goto label_1d4ba4;
            case 0x1D4BA8u: goto label_1d4ba8;
            case 0x1D4BACu: goto label_1d4bac;
            case 0x1D4BB0u: goto label_1d4bb0;
            case 0x1D4BB4u: goto label_1d4bb4;
            case 0x1D4BB8u: goto label_1d4bb8;
            case 0x1D4BBCu: goto label_1d4bbc;
            case 0x1D4BC0u: goto label_1d4bc0;
            case 0x1D4BC4u: goto label_1d4bc4;
            case 0x1D4BC8u: goto label_1d4bc8;
            case 0x1D4BCCu: goto label_1d4bcc;
            case 0x1D4BD0u: goto label_1d4bd0;
            case 0x1D4BD4u: goto label_1d4bd4;
            case 0x1D4BD8u: goto label_1d4bd8;
            case 0x1D4BDCu: goto label_1d4bdc;
            case 0x1D4BE0u: goto label_1d4be0;
            case 0x1D4BE4u: goto label_1d4be4;
            case 0x1D4BE8u: goto label_1d4be8;
            case 0x1D4BECu: goto label_1d4bec;
            case 0x1D4BF0u: goto label_1d4bf0;
            case 0x1D4BF4u: goto label_1d4bf4;
            case 0x1D4BF8u: goto label_1d4bf8;
            case 0x1D4BFCu: goto label_1d4bfc;
            case 0x1D4C00u: goto label_1d4c00;
            case 0x1D4C04u: goto label_1d4c04;
            case 0x1D4C08u: goto label_1d4c08;
            case 0x1D4C0Cu: goto label_1d4c0c;
            case 0x1D4C10u: goto label_1d4c10;
            case 0x1D4C14u: goto label_1d4c14;
            case 0x1D4C18u: goto label_1d4c18;
            case 0x1D4C1Cu: goto label_1d4c1c;
            case 0x1D4C20u: goto label_1d4c20;
            case 0x1D4C24u: goto label_1d4c24;
            case 0x1D4C28u: goto label_1d4c28;
            case 0x1D4C2Cu: goto label_1d4c2c;
            case 0x1D4C30u: goto label_1d4c30;
            case 0x1D4C34u: goto label_1d4c34;
            case 0x1D4C38u: goto label_1d4c38;
            case 0x1D4C3Cu: goto label_1d4c3c;
            case 0x1D4C40u: goto label_1d4c40;
            case 0x1D4C44u: goto label_1d4c44;
            case 0x1D4C48u: goto label_1d4c48;
            case 0x1D4C4Cu: goto label_1d4c4c;
            case 0x1D4C50u: goto label_1d4c50;
            case 0x1D4C54u: goto label_1d4c54;
            case 0x1D4C58u: goto label_1d4c58;
            case 0x1D4C5Cu: goto label_1d4c5c;
            case 0x1D4C60u: goto label_1d4c60;
            case 0x1D4C64u: goto label_1d4c64;
            case 0x1D4C68u: goto label_1d4c68;
            case 0x1D4C6Cu: goto label_1d4c6c;
            case 0x1D4C70u: goto label_1d4c70;
            case 0x1D4C74u: goto label_1d4c74;
            case 0x1D4C78u: goto label_1d4c78;
            case 0x1D4C7Cu: goto label_1d4c7c;
            case 0x1D4C80u: goto label_1d4c80;
            case 0x1D4C84u: goto label_1d4c84;
            case 0x1D4C88u: goto label_1d4c88;
            case 0x1D4C8Cu: goto label_1d4c8c;
            case 0x1D4C90u: goto label_1d4c90;
            case 0x1D4C94u: goto label_1d4c94;
            case 0x1D4C98u: goto label_1d4c98;
            case 0x1D4C9Cu: goto label_1d4c9c;
            case 0x1D4CA0u: goto label_1d4ca0;
            case 0x1D4CA4u: goto label_1d4ca4;
            case 0x1D4CA8u: goto label_1d4ca8;
            case 0x1D4CACu: goto label_1d4cac;
            case 0x1D4CB0u: goto label_1d4cb0;
            case 0x1D4CB4u: goto label_1d4cb4;
            case 0x1D4CB8u: goto label_1d4cb8;
            case 0x1D4CBCu: goto label_1d4cbc;
            case 0x1D4CC0u: goto label_1d4cc0;
            case 0x1D4CC4u: goto label_1d4cc4;
            case 0x1D4CC8u: goto label_1d4cc8;
            case 0x1D4CCCu: goto label_1d4ccc;
            case 0x1D4CD0u: goto label_1d4cd0;
            case 0x1D4CD4u: goto label_1d4cd4;
            case 0x1D4CD8u: goto label_1d4cd8;
            case 0x1D4CDCu: goto label_1d4cdc;
            case 0x1D4CE0u: goto label_1d4ce0;
            case 0x1D4CE4u: goto label_1d4ce4;
            case 0x1D4CE8u: goto label_1d4ce8;
            case 0x1D4CECu: goto label_1d4cec;
            case 0x1D4CF0u: goto label_1d4cf0;
            case 0x1D4CF4u: goto label_1d4cf4;
            case 0x1D4CF8u: goto label_1d4cf8;
            case 0x1D4CFCu: goto label_1d4cfc;
            case 0x1D4D00u: goto label_1d4d00;
            case 0x1D4D04u: goto label_1d4d04;
            case 0x1D4D08u: goto label_1d4d08;
            case 0x1D4D0Cu: goto label_1d4d0c;
            case 0x1D4D10u: goto label_1d4d10;
            case 0x1D4D14u: goto label_1d4d14;
            case 0x1D4D18u: goto label_1d4d18;
            case 0x1D4D1Cu: goto label_1d4d1c;
            case 0x1D4D20u: goto label_1d4d20;
            case 0x1D4D24u: goto label_1d4d24;
            case 0x1D4D28u: goto label_1d4d28;
            case 0x1D4D2Cu: goto label_1d4d2c;
            case 0x1D4D30u: goto label_1d4d30;
            case 0x1D4D34u: goto label_1d4d34;
            case 0x1D4D38u: goto label_1d4d38;
            case 0x1D4D3Cu: goto label_1d4d3c;
            case 0x1D4D40u: goto label_1d4d40;
            case 0x1D4D44u: goto label_1d4d44;
            case 0x1D4D48u: goto label_1d4d48;
            case 0x1D4D4Cu: goto label_1d4d4c;
            case 0x1D4D50u: goto label_1d4d50;
            case 0x1D4D54u: goto label_1d4d54;
            case 0x1D4D58u: goto label_1d4d58;
            case 0x1D4D5Cu: goto label_1d4d5c;
            case 0x1D4D60u: goto label_1d4d60;
            case 0x1D4D64u: goto label_1d4d64;
            case 0x1D4D68u: goto label_1d4d68;
            case 0x1D4D6Cu: goto label_1d4d6c;
            case 0x1D4D70u: goto label_1d4d70;
            case 0x1D4D74u: goto label_1d4d74;
            case 0x1D4D78u: goto label_1d4d78;
            case 0x1D4D7Cu: goto label_1d4d7c;
            case 0x1D4D80u: goto label_1d4d80;
            case 0x1D4D84u: goto label_1d4d84;
            case 0x1D4D88u: goto label_1d4d88;
            case 0x1D4D8Cu: goto label_1d4d8c;
            case 0x1D4D90u: goto label_1d4d90;
            case 0x1D4D94u: goto label_1d4d94;
            case 0x1D4D98u: goto label_1d4d98;
            case 0x1D4D9Cu: goto label_1d4d9c;
            case 0x1D4DA0u: goto label_1d4da0;
            case 0x1D4DA4u: goto label_1d4da4;
            case 0x1D4DA8u: goto label_1d4da8;
            case 0x1D4DACu: goto label_1d4dac;
            case 0x1D4DB0u: goto label_1d4db0;
            case 0x1D4DB4u: goto label_1d4db4;
            case 0x1D4DB8u: goto label_1d4db8;
            case 0x1D4DBCu: goto label_1d4dbc;
            case 0x1D4DC0u: goto label_1d4dc0;
            case 0x1D4DC4u: goto label_1d4dc4;
            case 0x1D4DC8u: goto label_1d4dc8;
            case 0x1D4DCCu: goto label_1d4dcc;
            case 0x1D4DD0u: goto label_1d4dd0;
            case 0x1D4DD4u: goto label_1d4dd4;
            case 0x1D4DD8u: goto label_1d4dd8;
            case 0x1D4DDCu: goto label_1d4ddc;
            case 0x1D4DE0u: goto label_1d4de0;
            case 0x1D4DE4u: goto label_1d4de4;
            case 0x1D4DE8u: goto label_1d4de8;
            case 0x1D4DECu: goto label_1d4dec;
            case 0x1D4DF0u: goto label_1d4df0;
            case 0x1D4DF4u: goto label_1d4df4;
            case 0x1D4DF8u: goto label_1d4df8;
            case 0x1D4DFCu: goto label_1d4dfc;
            case 0x1D4E00u: goto label_1d4e00;
            case 0x1D4E04u: goto label_1d4e04;
            case 0x1D4E08u: goto label_1d4e08;
            case 0x1D4E0Cu: goto label_1d4e0c;
            case 0x1D4E10u: goto label_1d4e10;
            case 0x1D4E14u: goto label_1d4e14;
            case 0x1D4E18u: goto label_1d4e18;
            case 0x1D4E1Cu: goto label_1d4e1c;
            case 0x1D4E20u: goto label_1d4e20;
            case 0x1D4E24u: goto label_1d4e24;
            case 0x1D4E28u: goto label_1d4e28;
            case 0x1D4E2Cu: goto label_1d4e2c;
            case 0x1D4E30u: goto label_1d4e30;
            case 0x1D4E34u: goto label_1d4e34;
            case 0x1D4E38u: goto label_1d4e38;
            case 0x1D4E3Cu: goto label_1d4e3c;
            case 0x1D4E40u: goto label_1d4e40;
            case 0x1D4E44u: goto label_1d4e44;
            case 0x1D4E48u: goto label_1d4e48;
            case 0x1D4E4Cu: goto label_1d4e4c;
            case 0x1D4E50u: goto label_1d4e50;
            case 0x1D4E54u: goto label_1d4e54;
            case 0x1D4E58u: goto label_1d4e58;
            case 0x1D4E5Cu: goto label_1d4e5c;
            case 0x1D4E60u: goto label_1d4e60;
            case 0x1D4E64u: goto label_1d4e64;
            case 0x1D4E68u: goto label_1d4e68;
            case 0x1D4E6Cu: goto label_1d4e6c;
            case 0x1D4E70u: goto label_1d4e70;
            case 0x1D4E74u: goto label_1d4e74;
            case 0x1D4E78u: goto label_1d4e78;
            case 0x1D4E7Cu: goto label_1d4e7c;
            case 0x1D4E80u: goto label_1d4e80;
            case 0x1D4E84u: goto label_1d4e84;
            case 0x1D4E88u: goto label_1d4e88;
            case 0x1D4E8Cu: goto label_1d4e8c;
            case 0x1D4E90u: goto label_1d4e90;
            case 0x1D4E94u: goto label_1d4e94;
            case 0x1D4E98u: goto label_1d4e98;
            case 0x1D4E9Cu: goto label_1d4e9c;
            case 0x1D4EA0u: goto label_1d4ea0;
            case 0x1D4EA4u: goto label_1d4ea4;
            case 0x1D4EA8u: goto label_1d4ea8;
            case 0x1D4EACu: goto label_1d4eac;
            case 0x1D4EB0u: goto label_1d4eb0;
            case 0x1D4EB4u: goto label_1d4eb4;
            case 0x1D4EB8u: goto label_1d4eb8;
            case 0x1D4EBCu: goto label_1d4ebc;
            case 0x1D4EC0u: goto label_1d4ec0;
            case 0x1D4EC4u: goto label_1d4ec4;
            case 0x1D4EC8u: goto label_1d4ec8;
            case 0x1D4ECCu: goto label_1d4ecc;
            case 0x1D4ED0u: goto label_1d4ed0;
            case 0x1D4ED4u: goto label_1d4ed4;
            case 0x1D4ED8u: goto label_1d4ed8;
            case 0x1D4EDCu: goto label_1d4edc;
            case 0x1D4EE0u: goto label_1d4ee0;
            case 0x1D4EE4u: goto label_1d4ee4;
            case 0x1D4EE8u: goto label_1d4ee8;
            case 0x1D4EECu: goto label_1d4eec;
            case 0x1D4EF0u: goto label_1d4ef0;
            case 0x1D4EF4u: goto label_1d4ef4;
            case 0x1D4EF8u: goto label_1d4ef8;
            case 0x1D4EFCu: goto label_1d4efc;
            case 0x1D4F00u: goto label_1d4f00;
            case 0x1D4F04u: goto label_1d4f04;
            case 0x1D4F08u: goto label_1d4f08;
            case 0x1D4F0Cu: goto label_1d4f0c;
            case 0x1D4F10u: goto label_1d4f10;
            case 0x1D4F14u: goto label_1d4f14;
            case 0x1D4F18u: goto label_1d4f18;
            case 0x1D4F1Cu: goto label_1d4f1c;
            case 0x1D4F20u: goto label_1d4f20;
            case 0x1D4F24u: goto label_1d4f24;
            case 0x1D4F28u: goto label_1d4f28;
            case 0x1D4F2Cu: goto label_1d4f2c;
            case 0x1D4F30u: goto label_1d4f30;
            case 0x1D4F34u: goto label_1d4f34;
            case 0x1D4F38u: goto label_1d4f38;
            case 0x1D4F3Cu: goto label_1d4f3c;
            case 0x1D4F40u: goto label_1d4f40;
            case 0x1D4F44u: goto label_1d4f44;
            case 0x1D4F48u: goto label_1d4f48;
            case 0x1D4F4Cu: goto label_1d4f4c;
            case 0x1D4F50u: goto label_1d4f50;
            case 0x1D4F54u: goto label_1d4f54;
            case 0x1D4F58u: goto label_1d4f58;
            case 0x1D4F5Cu: goto label_1d4f5c;
            case 0x1D4F60u: goto label_1d4f60;
            case 0x1D4F64u: goto label_1d4f64;
            case 0x1D4F68u: goto label_1d4f68;
            case 0x1D4F6Cu: goto label_1d4f6c;
            case 0x1D4F70u: goto label_1d4f70;
            case 0x1D4F74u: goto label_1d4f74;
            case 0x1D4F78u: goto label_1d4f78;
            case 0x1D4F7Cu: goto label_1d4f7c;
            case 0x1D4F80u: goto label_1d4f80;
            case 0x1D4F84u: goto label_1d4f84;
            case 0x1D4F88u: goto label_1d4f88;
            case 0x1D4F8Cu: goto label_1d4f8c;
            case 0x1D4F90u: goto label_1d4f90;
            case 0x1D4F94u: goto label_1d4f94;
            case 0x1D4F98u: goto label_1d4f98;
            case 0x1D4F9Cu: goto label_1d4f9c;
            case 0x1D4FA0u: goto label_1d4fa0;
            case 0x1D4FA4u: goto label_1d4fa4;
            case 0x1D4FA8u: goto label_1d4fa8;
            case 0x1D4FACu: goto label_1d4fac;
            case 0x1D4FB0u: goto label_1d4fb0;
            case 0x1D4FB4u: goto label_1d4fb4;
            case 0x1D4FB8u: goto label_1d4fb8;
            case 0x1D4FBCu: goto label_1d4fbc;
            case 0x1D4FC0u: goto label_1d4fc0;
            case 0x1D4FC4u: goto label_1d4fc4;
            case 0x1D4FC8u: goto label_1d4fc8;
            case 0x1D4FCCu: goto label_1d4fcc;
            case 0x1D4FD0u: goto label_1d4fd0;
            case 0x1D4FD4u: goto label_1d4fd4;
            case 0x1D4FD8u: goto label_1d4fd8;
            case 0x1D4FDCu: goto label_1d4fdc;
            case 0x1D4FE0u: goto label_1d4fe0;
            case 0x1D4FE4u: goto label_1d4fe4;
            case 0x1D4FE8u: goto label_1d4fe8;
            case 0x1D4FECu: goto label_1d4fec;
            case 0x1D4FF0u: goto label_1d4ff0;
            case 0x1D4FF4u: goto label_1d4ff4;
            case 0x1D4FF8u: goto label_1d4ff8;
            case 0x1D4FFCu: goto label_1d4ffc;
            case 0x1D5000u: goto label_1d5000;
            case 0x1D5004u: goto label_1d5004;
            case 0x1D5008u: goto label_1d5008;
            case 0x1D500Cu: goto label_1d500c;
            case 0x1D5010u: goto label_1d5010;
            case 0x1D5014u: goto label_1d5014;
            case 0x1D5018u: goto label_1d5018;
            case 0x1D501Cu: goto label_1d501c;
            case 0x1D5020u: goto label_1d5020;
            case 0x1D5024u: goto label_1d5024;
            case 0x1D5028u: goto label_1d5028;
            case 0x1D502Cu: goto label_1d502c;
            case 0x1D5030u: goto label_1d5030;
            case 0x1D5034u: goto label_1d5034;
            case 0x1D5038u: goto label_1d5038;
            case 0x1D503Cu: goto label_1d503c;
            case 0x1D5040u: goto label_1d5040;
            case 0x1D5044u: goto label_1d5044;
            case 0x1D5048u: goto label_1d5048;
            case 0x1D504Cu: goto label_1d504c;
            case 0x1D5050u: goto label_1d5050;
            case 0x1D5054u: goto label_1d5054;
            case 0x1D5058u: goto label_1d5058;
            case 0x1D505Cu: goto label_1d505c;
            case 0x1D5060u: goto label_1d5060;
            case 0x1D5064u: goto label_1d5064;
            case 0x1D5068u: goto label_1d5068;
            case 0x1D506Cu: goto label_1d506c;
            case 0x1D5070u: goto label_1d5070;
            case 0x1D5074u: goto label_1d5074;
            case 0x1D5078u: goto label_1d5078;
            case 0x1D507Cu: goto label_1d507c;
            case 0x1D5080u: goto label_1d5080;
            case 0x1D5084u: goto label_1d5084;
            case 0x1D5088u: goto label_1d5088;
            case 0x1D508Cu: goto label_1d508c;
            case 0x1D5090u: goto label_1d5090;
            case 0x1D5094u: goto label_1d5094;
            case 0x1D5098u: goto label_1d5098;
            case 0x1D509Cu: goto label_1d509c;
            case 0x1D50A0u: goto label_1d50a0;
            case 0x1D50A4u: goto label_1d50a4;
            case 0x1D50A8u: goto label_1d50a8;
            case 0x1D50ACu: goto label_1d50ac;
            case 0x1D50B0u: goto label_1d50b0;
            case 0x1D50B4u: goto label_1d50b4;
            case 0x1D50B8u: goto label_1d50b8;
            case 0x1D50BCu: goto label_1d50bc;
            case 0x1D50C0u: goto label_1d50c0;
            case 0x1D50C4u: goto label_1d50c4;
            case 0x1D50C8u: goto label_1d50c8;
            case 0x1D50CCu: goto label_1d50cc;
            case 0x1D50D0u: goto label_1d50d0;
            case 0x1D50D4u: goto label_1d50d4;
            case 0x1D50D8u: goto label_1d50d8;
            case 0x1D50DCu: goto label_1d50dc;
            case 0x1D50E0u: goto label_1d50e0;
            case 0x1D50E4u: goto label_1d50e4;
            case 0x1D50E8u: goto label_1d50e8;
            case 0x1D50ECu: goto label_1d50ec;
            case 0x1D50F0u: goto label_1d50f0;
            case 0x1D50F4u: goto label_1d50f4;
            case 0x1D50F8u: goto label_1d50f8;
            case 0x1D50FCu: goto label_1d50fc;
            case 0x1D5100u: goto label_1d5100;
            case 0x1D5104u: goto label_1d5104;
            case 0x1D5108u: goto label_1d5108;
            case 0x1D510Cu: goto label_1d510c;
            case 0x1D5110u: goto label_1d5110;
            case 0x1D5114u: goto label_1d5114;
            case 0x1D5118u: goto label_1d5118;
            case 0x1D511Cu: goto label_1d511c;
            case 0x1D5120u: goto label_1d5120;
            case 0x1D5124u: goto label_1d5124;
            case 0x1D5128u: goto label_1d5128;
            case 0x1D512Cu: goto label_1d512c;
            case 0x1D5130u: goto label_1d5130;
            case 0x1D5134u: goto label_1d5134;
            case 0x1D5138u: goto label_1d5138;
            case 0x1D513Cu: goto label_1d513c;
            case 0x1D5140u: goto label_1d5140;
            case 0x1D5144u: goto label_1d5144;
            case 0x1D5148u: goto label_1d5148;
            case 0x1D514Cu: goto label_1d514c;
            case 0x1D5150u: goto label_1d5150;
            case 0x1D5154u: goto label_1d5154;
            case 0x1D5158u: goto label_1d5158;
            case 0x1D515Cu: goto label_1d515c;
            case 0x1D5160u: goto label_1d5160;
            case 0x1D5164u: goto label_1d5164;
            case 0x1D5168u: goto label_1d5168;
            case 0x1D516Cu: goto label_1d516c;
            case 0x1D5170u: goto label_1d5170;
            case 0x1D5174u: goto label_1d5174;
            case 0x1D5178u: goto label_1d5178;
            case 0x1D517Cu: goto label_1d517c;
            case 0x1D5180u: goto label_1d5180;
            case 0x1D5184u: goto label_1d5184;
            case 0x1D5188u: goto label_1d5188;
            case 0x1D518Cu: goto label_1d518c;
            case 0x1D5190u: goto label_1d5190;
            case 0x1D5194u: goto label_1d5194;
            case 0x1D5198u: goto label_1d5198;
            case 0x1D519Cu: goto label_1d519c;
            case 0x1D51A0u: goto label_1d51a0;
            case 0x1D51A4u: goto label_1d51a4;
            case 0x1D51A8u: goto label_1d51a8;
            case 0x1D51ACu: goto label_1d51ac;
            case 0x1D51B0u: goto label_1d51b0;
            case 0x1D51B4u: goto label_1d51b4;
            case 0x1D51B8u: goto label_1d51b8;
            case 0x1D51BCu: goto label_1d51bc;
            case 0x1D51C0u: goto label_1d51c0;
            case 0x1D51C4u: goto label_1d51c4;
            case 0x1D51C8u: goto label_1d51c8;
            case 0x1D51CCu: goto label_1d51cc;
            case 0x1D51D0u: goto label_1d51d0;
            case 0x1D51D4u: goto label_1d51d4;
            case 0x1D51D8u: goto label_1d51d8;
            case 0x1D51DCu: goto label_1d51dc;
            case 0x1D51E0u: goto label_1d51e0;
            case 0x1D51E4u: goto label_1d51e4;
            case 0x1D51E8u: goto label_1d51e8;
            case 0x1D51ECu: goto label_1d51ec;
            case 0x1D51F0u: goto label_1d51f0;
            case 0x1D51F4u: goto label_1d51f4;
            case 0x1D51F8u: goto label_1d51f8;
            case 0x1D51FCu: goto label_1d51fc;
            case 0x1D5200u: goto label_1d5200;
            case 0x1D5204u: goto label_1d5204;
            case 0x1D5208u: goto label_1d5208;
            case 0x1D520Cu: goto label_1d520c;
            case 0x1D5210u: goto label_1d5210;
            case 0x1D5214u: goto label_1d5214;
            case 0x1D5218u: goto label_1d5218;
            case 0x1D521Cu: goto label_1d521c;
            case 0x1D5220u: goto label_1d5220;
            case 0x1D5224u: goto label_1d5224;
            case 0x1D5228u: goto label_1d5228;
            case 0x1D522Cu: goto label_1d522c;
            case 0x1D5230u: goto label_1d5230;
            case 0x1D5234u: goto label_1d5234;
            case 0x1D5238u: goto label_1d5238;
            case 0x1D523Cu: goto label_1d523c;
            case 0x1D5240u: goto label_1d5240;
            case 0x1D5244u: goto label_1d5244;
            case 0x1D5248u: goto label_1d5248;
            case 0x1D524Cu: goto label_1d524c;
            case 0x1D5250u: goto label_1d5250;
            case 0x1D5254u: goto label_1d5254;
            case 0x1D5258u: goto label_1d5258;
            case 0x1D525Cu: goto label_1d525c;
            case 0x1D5260u: goto label_1d5260;
            case 0x1D5264u: goto label_1d5264;
            case 0x1D5268u: goto label_1d5268;
            case 0x1D526Cu: goto label_1d526c;
            case 0x1D5270u: goto label_1d5270;
            case 0x1D5274u: goto label_1d5274;
            case 0x1D5278u: goto label_1d5278;
            case 0x1D527Cu: goto label_1d527c;
            case 0x1D5280u: goto label_1d5280;
            case 0x1D5284u: goto label_1d5284;
            case 0x1D5288u: goto label_1d5288;
            case 0x1D528Cu: goto label_1d528c;
            case 0x1D5290u: goto label_1d5290;
            case 0x1D5294u: goto label_1d5294;
            case 0x1D5298u: goto label_1d5298;
            case 0x1D529Cu: goto label_1d529c;
            case 0x1D52A0u: goto label_1d52a0;
            case 0x1D52A4u: goto label_1d52a4;
            case 0x1D52A8u: goto label_1d52a8;
            case 0x1D52ACu: goto label_1d52ac;
            case 0x1D52B0u: goto label_1d52b0;
            case 0x1D52B4u: goto label_1d52b4;
            case 0x1D52B8u: goto label_1d52b8;
            case 0x1D52BCu: goto label_1d52bc;
            case 0x1D52C0u: goto label_1d52c0;
            case 0x1D52C4u: goto label_1d52c4;
            case 0x1D52C8u: goto label_1d52c8;
            case 0x1D52CCu: goto label_1d52cc;
            case 0x1D52D0u: goto label_1d52d0;
            case 0x1D52D4u: goto label_1d52d4;
            case 0x1D52D8u: goto label_1d52d8;
            case 0x1D52DCu: goto label_1d52dc;
            case 0x1D52E0u: goto label_1d52e0;
            case 0x1D52E4u: goto label_1d52e4;
            case 0x1D52E8u: goto label_1d52e8;
            case 0x1D52ECu: goto label_1d52ec;
            case 0x1D52F0u: goto label_1d52f0;
            case 0x1D52F4u: goto label_1d52f4;
            case 0x1D52F8u: goto label_1d52f8;
            case 0x1D52FCu: goto label_1d52fc;
            case 0x1D5300u: goto label_1d5300;
            case 0x1D5304u: goto label_1d5304;
            case 0x1D5308u: goto label_1d5308;
            case 0x1D530Cu: goto label_1d530c;
            case 0x1D5310u: goto label_1d5310;
            case 0x1D5314u: goto label_1d5314;
            case 0x1D5318u: goto label_1d5318;
            case 0x1D531Cu: goto label_1d531c;
            case 0x1D5320u: goto label_1d5320;
            case 0x1D5324u: goto label_1d5324;
            case 0x1D5328u: goto label_1d5328;
            case 0x1D532Cu: goto label_1d532c;
            case 0x1D5330u: goto label_1d5330;
            case 0x1D5334u: goto label_1d5334;
            case 0x1D5338u: goto label_1d5338;
            case 0x1D533Cu: goto label_1d533c;
            case 0x1D5340u: goto label_1d5340;
            case 0x1D5344u: goto label_1d5344;
            case 0x1D5348u: goto label_1d5348;
            case 0x1D534Cu: goto label_1d534c;
            case 0x1D5350u: goto label_1d5350;
            case 0x1D5354u: goto label_1d5354;
            case 0x1D5358u: goto label_1d5358;
            case 0x1D535Cu: goto label_1d535c;
            case 0x1D5360u: goto label_1d5360;
            case 0x1D5364u: goto label_1d5364;
            case 0x1D5368u: goto label_1d5368;
            case 0x1D536Cu: goto label_1d536c;
            case 0x1D5370u: goto label_1d5370;
            case 0x1D5374u: goto label_1d5374;
            case 0x1D5378u: goto label_1d5378;
            case 0x1D537Cu: goto label_1d537c;
            case 0x1D5380u: goto label_1d5380;
            case 0x1D5384u: goto label_1d5384;
            case 0x1D5388u: goto label_1d5388;
            case 0x1D538Cu: goto label_1d538c;
            case 0x1D5390u: goto label_1d5390;
            case 0x1D5394u: goto label_1d5394;
            case 0x1D5398u: goto label_1d5398;
            case 0x1D539Cu: goto label_1d539c;
            case 0x1D53A0u: goto label_1d53a0;
            case 0x1D53A4u: goto label_1d53a4;
            case 0x1D53A8u: goto label_1d53a8;
            case 0x1D53ACu: goto label_1d53ac;
            case 0x1D53B0u: goto label_1d53b0;
            case 0x1D53B4u: goto label_1d53b4;
            case 0x1D53B8u: goto label_1d53b8;
            case 0x1D53BCu: goto label_1d53bc;
            case 0x1D53C0u: goto label_1d53c0;
            case 0x1D53C4u: goto label_1d53c4;
            case 0x1D53C8u: goto label_1d53c8;
            case 0x1D53CCu: goto label_1d53cc;
            case 0x1D53D0u: goto label_1d53d0;
            case 0x1D53D4u: goto label_1d53d4;
            case 0x1D53D8u: goto label_1d53d8;
            case 0x1D53DCu: goto label_1d53dc;
            case 0x1D53E0u: goto label_1d53e0;
            case 0x1D53E4u: goto label_1d53e4;
            case 0x1D53E8u: goto label_1d53e8;
            case 0x1D53ECu: goto label_1d53ec;
            case 0x1D53F0u: goto label_1d53f0;
            case 0x1D53F4u: goto label_1d53f4;
            case 0x1D53F8u: goto label_1d53f8;
            case 0x1D53FCu: goto label_1d53fc;
            case 0x1D5400u: goto label_1d5400;
            case 0x1D5404u: goto label_1d5404;
            case 0x1D5408u: goto label_1d5408;
            case 0x1D540Cu: goto label_1d540c;
            case 0x1D5410u: goto label_1d5410;
            case 0x1D5414u: goto label_1d5414;
            case 0x1D5418u: goto label_1d5418;
            case 0x1D541Cu: goto label_1d541c;
            case 0x1D5420u: goto label_1d5420;
            case 0x1D5424u: goto label_1d5424;
            case 0x1D5428u: goto label_1d5428;
            case 0x1D542Cu: goto label_1d542c;
            case 0x1D5430u: goto label_1d5430;
            case 0x1D5434u: goto label_1d5434;
            case 0x1D5438u: goto label_1d5438;
            case 0x1D543Cu: goto label_1d543c;
            case 0x1D5440u: goto label_1d5440;
            case 0x1D5444u: goto label_1d5444;
            case 0x1D5448u: goto label_1d5448;
            case 0x1D544Cu: goto label_1d544c;
            case 0x1D5450u: goto label_1d5450;
            case 0x1D5454u: goto label_1d5454;
            case 0x1D5458u: goto label_1d5458;
            case 0x1D545Cu: goto label_1d545c;
            case 0x1D5460u: goto label_1d5460;
            case 0x1D5464u: goto label_1d5464;
            case 0x1D5468u: goto label_1d5468;
            case 0x1D546Cu: goto label_1d546c;
            case 0x1D5470u: goto label_1d5470;
            case 0x1D5474u: goto label_1d5474;
            case 0x1D5478u: goto label_1d5478;
            case 0x1D547Cu: goto label_1d547c;
            case 0x1D5480u: goto label_1d5480;
            case 0x1D5484u: goto label_1d5484;
            case 0x1D5488u: goto label_1d5488;
            case 0x1D548Cu: goto label_1d548c;
            case 0x1D5490u: goto label_1d5490;
            case 0x1D5494u: goto label_1d5494;
            case 0x1D5498u: goto label_1d5498;
            case 0x1D549Cu: goto label_1d549c;
            case 0x1D54A0u: goto label_1d54a0;
            case 0x1D54A4u: goto label_1d54a4;
            case 0x1D54A8u: goto label_1d54a8;
            case 0x1D54ACu: goto label_1d54ac;
            case 0x1D54B0u: goto label_1d54b0;
            case 0x1D54B4u: goto label_1d54b4;
            case 0x1D54B8u: goto label_1d54b8;
            case 0x1D54BCu: goto label_1d54bc;
            case 0x1D54C0u: goto label_1d54c0;
            case 0x1D54C4u: goto label_1d54c4;
            case 0x1D54C8u: goto label_1d54c8;
            case 0x1D54CCu: goto label_1d54cc;
            case 0x1D54D0u: goto label_1d54d0;
            case 0x1D54D4u: goto label_1d54d4;
            case 0x1D54D8u: goto label_1d54d8;
            case 0x1D54DCu: goto label_1d54dc;
            case 0x1D54E0u: goto label_1d54e0;
            case 0x1D54E4u: goto label_1d54e4;
            case 0x1D54E8u: goto label_1d54e8;
            case 0x1D54ECu: goto label_1d54ec;
            case 0x1D54F0u: goto label_1d54f0;
            case 0x1D54F4u: goto label_1d54f4;
            case 0x1D54F8u: goto label_1d54f8;
            case 0x1D54FCu: goto label_1d54fc;
            case 0x1D5500u: goto label_1d5500;
            case 0x1D5504u: goto label_1d5504;
            case 0x1D5508u: goto label_1d5508;
            case 0x1D550Cu: goto label_1d550c;
            case 0x1D5510u: goto label_1d5510;
            case 0x1D5514u: goto label_1d5514;
            case 0x1D5518u: goto label_1d5518;
            case 0x1D551Cu: goto label_1d551c;
            case 0x1D5520u: goto label_1d5520;
            case 0x1D5524u: goto label_1d5524;
            case 0x1D5528u: goto label_1d5528;
            case 0x1D552Cu: goto label_1d552c;
            case 0x1D5530u: goto label_1d5530;
            case 0x1D5534u: goto label_1d5534;
            case 0x1D5538u: goto label_1d5538;
            case 0x1D553Cu: goto label_1d553c;
            case 0x1D5540u: goto label_1d5540;
            case 0x1D5544u: goto label_1d5544;
            case 0x1D5548u: goto label_1d5548;
            case 0x1D554Cu: goto label_1d554c;
            case 0x1D5550u: goto label_1d5550;
            case 0x1D5554u: goto label_1d5554;
            case 0x1D5558u: goto label_1d5558;
            case 0x1D555Cu: goto label_1d555c;
            case 0x1D5560u: goto label_1d5560;
            case 0x1D5564u: goto label_1d5564;
            case 0x1D5568u: goto label_1d5568;
            case 0x1D556Cu: goto label_1d556c;
            case 0x1D5570u: goto label_1d5570;
            case 0x1D5574u: goto label_1d5574;
            case 0x1D5578u: goto label_1d5578;
            case 0x1D557Cu: goto label_1d557c;
            case 0x1D5580u: goto label_1d5580;
            case 0x1D5584u: goto label_1d5584;
            case 0x1D5588u: goto label_1d5588;
            case 0x1D558Cu: goto label_1d558c;
            case 0x1D5590u: goto label_1d5590;
            case 0x1D5594u: goto label_1d5594;
            case 0x1D5598u: goto label_1d5598;
            case 0x1D559Cu: goto label_1d559c;
            case 0x1D55A0u: goto label_1d55a0;
            case 0x1D55A4u: goto label_1d55a4;
            case 0x1D55A8u: goto label_1d55a8;
            case 0x1D55ACu: goto label_1d55ac;
            case 0x1D55B0u: goto label_1d55b0;
            case 0x1D55B4u: goto label_1d55b4;
            case 0x1D55B8u: goto label_1d55b8;
            case 0x1D55BCu: goto label_1d55bc;
            case 0x1D55C0u: goto label_1d55c0;
            case 0x1D55C4u: goto label_1d55c4;
            case 0x1D55C8u: goto label_1d55c8;
            case 0x1D55CCu: goto label_1d55cc;
            case 0x1D55D0u: goto label_1d55d0;
            case 0x1D55D4u: goto label_1d55d4;
            case 0x1D55D8u: goto label_1d55d8;
            case 0x1D55DCu: goto label_1d55dc;
            case 0x1D55E0u: goto label_1d55e0;
            case 0x1D55E4u: goto label_1d55e4;
            case 0x1D55E8u: goto label_1d55e8;
            case 0x1D55ECu: goto label_1d55ec;
            case 0x1D55F0u: goto label_1d55f0;
            case 0x1D55F4u: goto label_1d55f4;
            case 0x1D55F8u: goto label_1d55f8;
            case 0x1D55FCu: goto label_1d55fc;
            case 0x1D5600u: goto label_1d5600;
            case 0x1D5604u: goto label_1d5604;
            case 0x1D5608u: goto label_1d5608;
            case 0x1D560Cu: goto label_1d560c;
            case 0x1D5610u: goto label_1d5610;
            case 0x1D5614u: goto label_1d5614;
            case 0x1D5618u: goto label_1d5618;
            case 0x1D561Cu: goto label_1d561c;
            case 0x1D5620u: goto label_1d5620;
            case 0x1D5624u: goto label_1d5624;
            case 0x1D5628u: goto label_1d5628;
            case 0x1D562Cu: goto label_1d562c;
            case 0x1D5630u: goto label_1d5630;
            case 0x1D5634u: goto label_1d5634;
            case 0x1D5638u: goto label_1d5638;
            case 0x1D563Cu: goto label_1d563c;
            case 0x1D5640u: goto label_1d5640;
            case 0x1D5644u: goto label_1d5644;
            case 0x1D5648u: goto label_1d5648;
            case 0x1D564Cu: goto label_1d564c;
            case 0x1D5650u: goto label_1d5650;
            case 0x1D5654u: goto label_1d5654;
            case 0x1D5658u: goto label_1d5658;
            case 0x1D565Cu: goto label_1d565c;
            case 0x1D5660u: goto label_1d5660;
            case 0x1D5664u: goto label_1d5664;
            case 0x1D5668u: goto label_1d5668;
            case 0x1D566Cu: goto label_1d566c;
            case 0x1D5670u: goto label_1d5670;
            case 0x1D5674u: goto label_1d5674;
            case 0x1D5678u: goto label_1d5678;
            case 0x1D567Cu: goto label_1d567c;
            case 0x1D5680u: goto label_1d5680;
            case 0x1D5684u: goto label_1d5684;
            case 0x1D5688u: goto label_1d5688;
            case 0x1D568Cu: goto label_1d568c;
            case 0x1D5690u: goto label_1d5690;
            case 0x1D5694u: goto label_1d5694;
            case 0x1D5698u: goto label_1d5698;
            case 0x1D569Cu: goto label_1d569c;
            case 0x1D56A0u: goto label_1d56a0;
            case 0x1D56A4u: goto label_1d56a4;
            case 0x1D56A8u: goto label_1d56a8;
            case 0x1D56ACu: goto label_1d56ac;
            case 0x1D56B0u: goto label_1d56b0;
            case 0x1D56B4u: goto label_1d56b4;
            case 0x1D56B8u: goto label_1d56b8;
            case 0x1D56BCu: goto label_1d56bc;
            case 0x1D56C0u: goto label_1d56c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5684u; }
            if (ctx->pc != 0x1D5684u) { return; }
        }
    }
    ctx->pc = 0x1D5684u;
label_1d5684:
    // 0x1d5684: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d5688:
    if (ctx->pc == 0x1D5688u) {
        ctx->pc = 0x1D568Cu;
        goto label_1d568c;
    }
    ctx->pc = 0x1D5684u;
    {
        const bool branch_taken_0x1d5684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5684) {
            ctx->pc = 0x1D56B0u;
            goto label_1d56b0;
        }
    }
    ctx->pc = 0x1D568Cu;
label_1d568c:
    // 0x1d568c: 0x0  nop
    ctx->pc = 0x1d568cu;
    // NOP
label_1d5690:
    // 0x1d5690: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1d5694:
    // 0x1d5694: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d5694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5698:
    // 0x1d5698: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1d569c:
    // 0x1d569c: 0x24c64010  addiu       $a2, $a2, 0x4010
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16400));
label_1d56a0:
    // 0x1d56a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1d56a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d56a4:
    // 0x1d56a4: 0xc053ca4  jal         func_14F290
label_1d56a8:
    if (ctx->pc == 0x1D56A8u) {
        ctx->pc = 0x1D56A8u;
            // 0x1d56a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D56ACu;
        goto label_1d56ac;
    }
    ctx->pc = 0x1D56A4u;
    SET_GPR_U32(ctx, 31, 0x1D56ACu);
    ctx->pc = 0x1D56A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56A4u;
            // 0x1d56a8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56ACu; }
        if (ctx->pc != 0x1D56ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56ACu; }
        if (ctx->pc != 0x1D56ACu) { return; }
    }
    ctx->pc = 0x1D56ACu;
label_1d56ac:
    // 0x1d56ac: 0x0  nop
    ctx->pc = 0x1d56acu;
    // NOP
label_1d56b0:
    // 0x1d56b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d56b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d56b4:
    // 0x1d56b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d56b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d56b8:
    // 0x1d56b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d56b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d56bc:
    // 0x1d56bc: 0x3e00008  jr          $ra
label_1d56c0:
    if (ctx->pc == 0x1D56C0u) {
        ctx->pc = 0x1D56C0u;
            // 0x1d56c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D56C4u;
        goto label_fallthrough_0x1d56bc;
    }
    ctx->pc = 0x1D56BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D56C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56BCu;
            // 0x1d56c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4240u: goto label_1d4240;
            case 0x1D4244u: goto label_1d4244;
            case 0x1D4248u: goto label_1d4248;
            case 0x1D424Cu: goto label_1d424c;
            case 0x1D4250u: goto label_1d4250;
            case 0x1D4254u: goto label_1d4254;
            case 0x1D4258u: goto label_1d4258;
            case 0x1D425Cu: goto label_1d425c;
            case 0x1D4260u: goto label_1d4260;
            case 0x1D4264u: goto label_1d4264;
            case 0x1D4268u: goto label_1d4268;
            case 0x1D426Cu: goto label_1d426c;
            case 0x1D4270u: goto label_1d4270;
            case 0x1D4274u: goto label_1d4274;
            case 0x1D4278u: goto label_1d4278;
            case 0x1D427Cu: goto label_1d427c;
            case 0x1D4280u: goto label_1d4280;
            case 0x1D4284u: goto label_1d4284;
            case 0x1D4288u: goto label_1d4288;
            case 0x1D428Cu: goto label_1d428c;
            case 0x1D4290u: goto label_1d4290;
            case 0x1D4294u: goto label_1d4294;
            case 0x1D4298u: goto label_1d4298;
            case 0x1D429Cu: goto label_1d429c;
            case 0x1D42A0u: goto label_1d42a0;
            case 0x1D42A4u: goto label_1d42a4;
            case 0x1D42A8u: goto label_1d42a8;
            case 0x1D42ACu: goto label_1d42ac;
            case 0x1D42B0u: goto label_1d42b0;
            case 0x1D42B4u: goto label_1d42b4;
            case 0x1D42B8u: goto label_1d42b8;
            case 0x1D42BCu: goto label_1d42bc;
            case 0x1D42C0u: goto label_1d42c0;
            case 0x1D42C4u: goto label_1d42c4;
            case 0x1D42C8u: goto label_1d42c8;
            case 0x1D42CCu: goto label_1d42cc;
            case 0x1D42D0u: goto label_1d42d0;
            case 0x1D42D4u: goto label_1d42d4;
            case 0x1D42D8u: goto label_1d42d8;
            case 0x1D42DCu: goto label_1d42dc;
            case 0x1D42E0u: goto label_1d42e0;
            case 0x1D42E4u: goto label_1d42e4;
            case 0x1D42E8u: goto label_1d42e8;
            case 0x1D42ECu: goto label_1d42ec;
            case 0x1D42F0u: goto label_1d42f0;
            case 0x1D42F4u: goto label_1d42f4;
            case 0x1D42F8u: goto label_1d42f8;
            case 0x1D42FCu: goto label_1d42fc;
            case 0x1D4300u: goto label_1d4300;
            case 0x1D4304u: goto label_1d4304;
            case 0x1D4308u: goto label_1d4308;
            case 0x1D430Cu: goto label_1d430c;
            case 0x1D4310u: goto label_1d4310;
            case 0x1D4314u: goto label_1d4314;
            case 0x1D4318u: goto label_1d4318;
            case 0x1D431Cu: goto label_1d431c;
            case 0x1D4320u: goto label_1d4320;
            case 0x1D4324u: goto label_1d4324;
            case 0x1D4328u: goto label_1d4328;
            case 0x1D432Cu: goto label_1d432c;
            case 0x1D4330u: goto label_1d4330;
            case 0x1D4334u: goto label_1d4334;
            case 0x1D4338u: goto label_1d4338;
            case 0x1D433Cu: goto label_1d433c;
            case 0x1D4340u: goto label_1d4340;
            case 0x1D4344u: goto label_1d4344;
            case 0x1D4348u: goto label_1d4348;
            case 0x1D434Cu: goto label_1d434c;
            case 0x1D4350u: goto label_1d4350;
            case 0x1D4354u: goto label_1d4354;
            case 0x1D4358u: goto label_1d4358;
            case 0x1D435Cu: goto label_1d435c;
            case 0x1D4360u: goto label_1d4360;
            case 0x1D4364u: goto label_1d4364;
            case 0x1D4368u: goto label_1d4368;
            case 0x1D436Cu: goto label_1d436c;
            case 0x1D4370u: goto label_1d4370;
            case 0x1D4374u: goto label_1d4374;
            case 0x1D4378u: goto label_1d4378;
            case 0x1D437Cu: goto label_1d437c;
            case 0x1D4380u: goto label_1d4380;
            case 0x1D4384u: goto label_1d4384;
            case 0x1D4388u: goto label_1d4388;
            case 0x1D438Cu: goto label_1d438c;
            case 0x1D4390u: goto label_1d4390;
            case 0x1D4394u: goto label_1d4394;
            case 0x1D4398u: goto label_1d4398;
            case 0x1D439Cu: goto label_1d439c;
            case 0x1D43A0u: goto label_1d43a0;
            case 0x1D43A4u: goto label_1d43a4;
            case 0x1D43A8u: goto label_1d43a8;
            case 0x1D43ACu: goto label_1d43ac;
            case 0x1D43B0u: goto label_1d43b0;
            case 0x1D43B4u: goto label_1d43b4;
            case 0x1D43B8u: goto label_1d43b8;
            case 0x1D43BCu: goto label_1d43bc;
            case 0x1D43C0u: goto label_1d43c0;
            case 0x1D43C4u: goto label_1d43c4;
            case 0x1D43C8u: goto label_1d43c8;
            case 0x1D43CCu: goto label_1d43cc;
            case 0x1D43D0u: goto label_1d43d0;
            case 0x1D43D4u: goto label_1d43d4;
            case 0x1D43D8u: goto label_1d43d8;
            case 0x1D43DCu: goto label_1d43dc;
            case 0x1D43E0u: goto label_1d43e0;
            case 0x1D43E4u: goto label_1d43e4;
            case 0x1D43E8u: goto label_1d43e8;
            case 0x1D43ECu: goto label_1d43ec;
            case 0x1D43F0u: goto label_1d43f0;
            case 0x1D43F4u: goto label_1d43f4;
            case 0x1D43F8u: goto label_1d43f8;
            case 0x1D43FCu: goto label_1d43fc;
            case 0x1D4400u: goto label_1d4400;
            case 0x1D4404u: goto label_1d4404;
            case 0x1D4408u: goto label_1d4408;
            case 0x1D440Cu: goto label_1d440c;
            case 0x1D4410u: goto label_1d4410;
            case 0x1D4414u: goto label_1d4414;
            case 0x1D4418u: goto label_1d4418;
            case 0x1D441Cu: goto label_1d441c;
            case 0x1D4420u: goto label_1d4420;
            case 0x1D4424u: goto label_1d4424;
            case 0x1D4428u: goto label_1d4428;
            case 0x1D442Cu: goto label_1d442c;
            case 0x1D4430u: goto label_1d4430;
            case 0x1D4434u: goto label_1d4434;
            case 0x1D4438u: goto label_1d4438;
            case 0x1D443Cu: goto label_1d443c;
            case 0x1D4440u: goto label_1d4440;
            case 0x1D4444u: goto label_1d4444;
            case 0x1D4448u: goto label_1d4448;
            case 0x1D444Cu: goto label_1d444c;
            case 0x1D4450u: goto label_1d4450;
            case 0x1D4454u: goto label_1d4454;
            case 0x1D4458u: goto label_1d4458;
            case 0x1D445Cu: goto label_1d445c;
            case 0x1D4460u: goto label_1d4460;
            case 0x1D4464u: goto label_1d4464;
            case 0x1D4468u: goto label_1d4468;
            case 0x1D446Cu: goto label_1d446c;
            case 0x1D4470u: goto label_1d4470;
            case 0x1D4474u: goto label_1d4474;
            case 0x1D4478u: goto label_1d4478;
            case 0x1D447Cu: goto label_1d447c;
            case 0x1D4480u: goto label_1d4480;
            case 0x1D4484u: goto label_1d4484;
            case 0x1D4488u: goto label_1d4488;
            case 0x1D448Cu: goto label_1d448c;
            case 0x1D4490u: goto label_1d4490;
            case 0x1D4494u: goto label_1d4494;
            case 0x1D4498u: goto label_1d4498;
            case 0x1D449Cu: goto label_1d449c;
            case 0x1D44A0u: goto label_1d44a0;
            case 0x1D44A4u: goto label_1d44a4;
            case 0x1D44A8u: goto label_1d44a8;
            case 0x1D44ACu: goto label_1d44ac;
            case 0x1D44B0u: goto label_1d44b0;
            case 0x1D44B4u: goto label_1d44b4;
            case 0x1D44B8u: goto label_1d44b8;
            case 0x1D44BCu: goto label_1d44bc;
            case 0x1D44C0u: goto label_1d44c0;
            case 0x1D44C4u: goto label_1d44c4;
            case 0x1D44C8u: goto label_1d44c8;
            case 0x1D44CCu: goto label_1d44cc;
            case 0x1D44D0u: goto label_1d44d0;
            case 0x1D44D4u: goto label_1d44d4;
            case 0x1D44D8u: goto label_1d44d8;
            case 0x1D44DCu: goto label_1d44dc;
            case 0x1D44E0u: goto label_1d44e0;
            case 0x1D44E4u: goto label_1d44e4;
            case 0x1D44E8u: goto label_1d44e8;
            case 0x1D44ECu: goto label_1d44ec;
            case 0x1D44F0u: goto label_1d44f0;
            case 0x1D44F4u: goto label_1d44f4;
            case 0x1D44F8u: goto label_1d44f8;
            case 0x1D44FCu: goto label_1d44fc;
            case 0x1D4500u: goto label_1d4500;
            case 0x1D4504u: goto label_1d4504;
            case 0x1D4508u: goto label_1d4508;
            case 0x1D450Cu: goto label_1d450c;
            case 0x1D4510u: goto label_1d4510;
            case 0x1D4514u: goto label_1d4514;
            case 0x1D4518u: goto label_1d4518;
            case 0x1D451Cu: goto label_1d451c;
            case 0x1D4520u: goto label_1d4520;
            case 0x1D4524u: goto label_1d4524;
            case 0x1D4528u: goto label_1d4528;
            case 0x1D452Cu: goto label_1d452c;
            case 0x1D4530u: goto label_1d4530;
            case 0x1D4534u: goto label_1d4534;
            case 0x1D4538u: goto label_1d4538;
            case 0x1D453Cu: goto label_1d453c;
            case 0x1D4540u: goto label_1d4540;
            case 0x1D4544u: goto label_1d4544;
            case 0x1D4548u: goto label_1d4548;
            case 0x1D454Cu: goto label_1d454c;
            case 0x1D4550u: goto label_1d4550;
            case 0x1D4554u: goto label_1d4554;
            case 0x1D4558u: goto label_1d4558;
            case 0x1D455Cu: goto label_1d455c;
            case 0x1D4560u: goto label_1d4560;
            case 0x1D4564u: goto label_1d4564;
            case 0x1D4568u: goto label_1d4568;
            case 0x1D456Cu: goto label_1d456c;
            case 0x1D4570u: goto label_1d4570;
            case 0x1D4574u: goto label_1d4574;
            case 0x1D4578u: goto label_1d4578;
            case 0x1D457Cu: goto label_1d457c;
            case 0x1D4580u: goto label_1d4580;
            case 0x1D4584u: goto label_1d4584;
            case 0x1D4588u: goto label_1d4588;
            case 0x1D458Cu: goto label_1d458c;
            case 0x1D4590u: goto label_1d4590;
            case 0x1D4594u: goto label_1d4594;
            case 0x1D4598u: goto label_1d4598;
            case 0x1D459Cu: goto label_1d459c;
            case 0x1D45A0u: goto label_1d45a0;
            case 0x1D45A4u: goto label_1d45a4;
            case 0x1D45A8u: goto label_1d45a8;
            case 0x1D45ACu: goto label_1d45ac;
            case 0x1D45B0u: goto label_1d45b0;
            case 0x1D45B4u: goto label_1d45b4;
            case 0x1D45B8u: goto label_1d45b8;
            case 0x1D45BCu: goto label_1d45bc;
            case 0x1D45C0u: goto label_1d45c0;
            case 0x1D45C4u: goto label_1d45c4;
            case 0x1D45C8u: goto label_1d45c8;
            case 0x1D45CCu: goto label_1d45cc;
            case 0x1D45D0u: goto label_1d45d0;
            case 0x1D45D4u: goto label_1d45d4;
            case 0x1D45D8u: goto label_1d45d8;
            case 0x1D45DCu: goto label_1d45dc;
            case 0x1D45E0u: goto label_1d45e0;
            case 0x1D45E4u: goto label_1d45e4;
            case 0x1D45E8u: goto label_1d45e8;
            case 0x1D45ECu: goto label_1d45ec;
            case 0x1D45F0u: goto label_1d45f0;
            case 0x1D45F4u: goto label_1d45f4;
            case 0x1D45F8u: goto label_1d45f8;
            case 0x1D45FCu: goto label_1d45fc;
            case 0x1D4600u: goto label_1d4600;
            case 0x1D4604u: goto label_1d4604;
            case 0x1D4608u: goto label_1d4608;
            case 0x1D460Cu: goto label_1d460c;
            case 0x1D4610u: goto label_1d4610;
            case 0x1D4614u: goto label_1d4614;
            case 0x1D4618u: goto label_1d4618;
            case 0x1D461Cu: goto label_1d461c;
            case 0x1D4620u: goto label_1d4620;
            case 0x1D4624u: goto label_1d4624;
            case 0x1D4628u: goto label_1d4628;
            case 0x1D462Cu: goto label_1d462c;
            case 0x1D4630u: goto label_1d4630;
            case 0x1D4634u: goto label_1d4634;
            case 0x1D4638u: goto label_1d4638;
            case 0x1D463Cu: goto label_1d463c;
            case 0x1D4640u: goto label_1d4640;
            case 0x1D4644u: goto label_1d4644;
            case 0x1D4648u: goto label_1d4648;
            case 0x1D464Cu: goto label_1d464c;
            case 0x1D4650u: goto label_1d4650;
            case 0x1D4654u: goto label_1d4654;
            case 0x1D4658u: goto label_1d4658;
            case 0x1D465Cu: goto label_1d465c;
            case 0x1D4660u: goto label_1d4660;
            case 0x1D4664u: goto label_1d4664;
            case 0x1D4668u: goto label_1d4668;
            case 0x1D466Cu: goto label_1d466c;
            case 0x1D4670u: goto label_1d4670;
            case 0x1D4674u: goto label_1d4674;
            case 0x1D4678u: goto label_1d4678;
            case 0x1D467Cu: goto label_1d467c;
            case 0x1D4680u: goto label_1d4680;
            case 0x1D4684u: goto label_1d4684;
            case 0x1D4688u: goto label_1d4688;
            case 0x1D468Cu: goto label_1d468c;
            case 0x1D4690u: goto label_1d4690;
            case 0x1D4694u: goto label_1d4694;
            case 0x1D4698u: goto label_1d4698;
            case 0x1D469Cu: goto label_1d469c;
            case 0x1D46A0u: goto label_1d46a0;
            case 0x1D46A4u: goto label_1d46a4;
            case 0x1D46A8u: goto label_1d46a8;
            case 0x1D46ACu: goto label_1d46ac;
            case 0x1D46B0u: goto label_1d46b0;
            case 0x1D46B4u: goto label_1d46b4;
            case 0x1D46B8u: goto label_1d46b8;
            case 0x1D46BCu: goto label_1d46bc;
            case 0x1D46C0u: goto label_1d46c0;
            case 0x1D46C4u: goto label_1d46c4;
            case 0x1D46C8u: goto label_1d46c8;
            case 0x1D46CCu: goto label_1d46cc;
            case 0x1D46D0u: goto label_1d46d0;
            case 0x1D46D4u: goto label_1d46d4;
            case 0x1D46D8u: goto label_1d46d8;
            case 0x1D46DCu: goto label_1d46dc;
            case 0x1D46E0u: goto label_1d46e0;
            case 0x1D46E4u: goto label_1d46e4;
            case 0x1D46E8u: goto label_1d46e8;
            case 0x1D46ECu: goto label_1d46ec;
            case 0x1D46F0u: goto label_1d46f0;
            case 0x1D46F4u: goto label_1d46f4;
            case 0x1D46F8u: goto label_1d46f8;
            case 0x1D46FCu: goto label_1d46fc;
            case 0x1D4700u: goto label_1d4700;
            case 0x1D4704u: goto label_1d4704;
            case 0x1D4708u: goto label_1d4708;
            case 0x1D470Cu: goto label_1d470c;
            case 0x1D4710u: goto label_1d4710;
            case 0x1D4714u: goto label_1d4714;
            case 0x1D4718u: goto label_1d4718;
            case 0x1D471Cu: goto label_1d471c;
            case 0x1D4720u: goto label_1d4720;
            case 0x1D4724u: goto label_1d4724;
            case 0x1D4728u: goto label_1d4728;
            case 0x1D472Cu: goto label_1d472c;
            case 0x1D4730u: goto label_1d4730;
            case 0x1D4734u: goto label_1d4734;
            case 0x1D4738u: goto label_1d4738;
            case 0x1D473Cu: goto label_1d473c;
            case 0x1D4740u: goto label_1d4740;
            case 0x1D4744u: goto label_1d4744;
            case 0x1D4748u: goto label_1d4748;
            case 0x1D474Cu: goto label_1d474c;
            case 0x1D4750u: goto label_1d4750;
            case 0x1D4754u: goto label_1d4754;
            case 0x1D4758u: goto label_1d4758;
            case 0x1D475Cu: goto label_1d475c;
            case 0x1D4760u: goto label_1d4760;
            case 0x1D4764u: goto label_1d4764;
            case 0x1D4768u: goto label_1d4768;
            case 0x1D476Cu: goto label_1d476c;
            case 0x1D4770u: goto label_1d4770;
            case 0x1D4774u: goto label_1d4774;
            case 0x1D4778u: goto label_1d4778;
            case 0x1D477Cu: goto label_1d477c;
            case 0x1D4780u: goto label_1d4780;
            case 0x1D4784u: goto label_1d4784;
            case 0x1D4788u: goto label_1d4788;
            case 0x1D478Cu: goto label_1d478c;
            case 0x1D4790u: goto label_1d4790;
            case 0x1D4794u: goto label_1d4794;
            case 0x1D4798u: goto label_1d4798;
            case 0x1D479Cu: goto label_1d479c;
            case 0x1D47A0u: goto label_1d47a0;
            case 0x1D47A4u: goto label_1d47a4;
            case 0x1D47A8u: goto label_1d47a8;
            case 0x1D47ACu: goto label_1d47ac;
            case 0x1D47B0u: goto label_1d47b0;
            case 0x1D47B4u: goto label_1d47b4;
            case 0x1D47B8u: goto label_1d47b8;
            case 0x1D47BCu: goto label_1d47bc;
            case 0x1D47C0u: goto label_1d47c0;
            case 0x1D47C4u: goto label_1d47c4;
            case 0x1D47C8u: goto label_1d47c8;
            case 0x1D47CCu: goto label_1d47cc;
            case 0x1D47D0u: goto label_1d47d0;
            case 0x1D47D4u: goto label_1d47d4;
            case 0x1D47D8u: goto label_1d47d8;
            case 0x1D47DCu: goto label_1d47dc;
            case 0x1D47E0u: goto label_1d47e0;
            case 0x1D47E4u: goto label_1d47e4;
            case 0x1D47E8u: goto label_1d47e8;
            case 0x1D47ECu: goto label_1d47ec;
            case 0x1D47F0u: goto label_1d47f0;
            case 0x1D47F4u: goto label_1d47f4;
            case 0x1D47F8u: goto label_1d47f8;
            case 0x1D47FCu: goto label_1d47fc;
            case 0x1D4800u: goto label_1d4800;
            case 0x1D4804u: goto label_1d4804;
            case 0x1D4808u: goto label_1d4808;
            case 0x1D480Cu: goto label_1d480c;
            case 0x1D4810u: goto label_1d4810;
            case 0x1D4814u: goto label_1d4814;
            case 0x1D4818u: goto label_1d4818;
            case 0x1D481Cu: goto label_1d481c;
            case 0x1D4820u: goto label_1d4820;
            case 0x1D4824u: goto label_1d4824;
            case 0x1D4828u: goto label_1d4828;
            case 0x1D482Cu: goto label_1d482c;
            case 0x1D4830u: goto label_1d4830;
            case 0x1D4834u: goto label_1d4834;
            case 0x1D4838u: goto label_1d4838;
            case 0x1D483Cu: goto label_1d483c;
            case 0x1D4840u: goto label_1d4840;
            case 0x1D4844u: goto label_1d4844;
            case 0x1D4848u: goto label_1d4848;
            case 0x1D484Cu: goto label_1d484c;
            case 0x1D4850u: goto label_1d4850;
            case 0x1D4854u: goto label_1d4854;
            case 0x1D4858u: goto label_1d4858;
            case 0x1D485Cu: goto label_1d485c;
            case 0x1D4860u: goto label_1d4860;
            case 0x1D4864u: goto label_1d4864;
            case 0x1D4868u: goto label_1d4868;
            case 0x1D486Cu: goto label_1d486c;
            case 0x1D4870u: goto label_1d4870;
            case 0x1D4874u: goto label_1d4874;
            case 0x1D4878u: goto label_1d4878;
            case 0x1D487Cu: goto label_1d487c;
            case 0x1D4880u: goto label_1d4880;
            case 0x1D4884u: goto label_1d4884;
            case 0x1D4888u: goto label_1d4888;
            case 0x1D488Cu: goto label_1d488c;
            case 0x1D4890u: goto label_1d4890;
            case 0x1D4894u: goto label_1d4894;
            case 0x1D4898u: goto label_1d4898;
            case 0x1D489Cu: goto label_1d489c;
            case 0x1D48A0u: goto label_1d48a0;
            case 0x1D48A4u: goto label_1d48a4;
            case 0x1D48A8u: goto label_1d48a8;
            case 0x1D48ACu: goto label_1d48ac;
            case 0x1D48B0u: goto label_1d48b0;
            case 0x1D48B4u: goto label_1d48b4;
            case 0x1D48B8u: goto label_1d48b8;
            case 0x1D48BCu: goto label_1d48bc;
            case 0x1D48C0u: goto label_1d48c0;
            case 0x1D48C4u: goto label_1d48c4;
            case 0x1D48C8u: goto label_1d48c8;
            case 0x1D48CCu: goto label_1d48cc;
            case 0x1D48D0u: goto label_1d48d0;
            case 0x1D48D4u: goto label_1d48d4;
            case 0x1D48D8u: goto label_1d48d8;
            case 0x1D48DCu: goto label_1d48dc;
            case 0x1D48E0u: goto label_1d48e0;
            case 0x1D48E4u: goto label_1d48e4;
            case 0x1D48E8u: goto label_1d48e8;
            case 0x1D48ECu: goto label_1d48ec;
            case 0x1D48F0u: goto label_1d48f0;
            case 0x1D48F4u: goto label_1d48f4;
            case 0x1D48F8u: goto label_1d48f8;
            case 0x1D48FCu: goto label_1d48fc;
            case 0x1D4900u: goto label_1d4900;
            case 0x1D4904u: goto label_1d4904;
            case 0x1D4908u: goto label_1d4908;
            case 0x1D490Cu: goto label_1d490c;
            case 0x1D4910u: goto label_1d4910;
            case 0x1D4914u: goto label_1d4914;
            case 0x1D4918u: goto label_1d4918;
            case 0x1D491Cu: goto label_1d491c;
            case 0x1D4920u: goto label_1d4920;
            case 0x1D4924u: goto label_1d4924;
            case 0x1D4928u: goto label_1d4928;
            case 0x1D492Cu: goto label_1d492c;
            case 0x1D4930u: goto label_1d4930;
            case 0x1D4934u: goto label_1d4934;
            case 0x1D4938u: goto label_1d4938;
            case 0x1D493Cu: goto label_1d493c;
            case 0x1D4940u: goto label_1d4940;
            case 0x1D4944u: goto label_1d4944;
            case 0x1D4948u: goto label_1d4948;
            case 0x1D494Cu: goto label_1d494c;
            case 0x1D4950u: goto label_1d4950;
            case 0x1D4954u: goto label_1d4954;
            case 0x1D4958u: goto label_1d4958;
            case 0x1D495Cu: goto label_1d495c;
            case 0x1D4960u: goto label_1d4960;
            case 0x1D4964u: goto label_1d4964;
            case 0x1D4968u: goto label_1d4968;
            case 0x1D496Cu: goto label_1d496c;
            case 0x1D4970u: goto label_1d4970;
            case 0x1D4974u: goto label_1d4974;
            case 0x1D4978u: goto label_1d4978;
            case 0x1D497Cu: goto label_1d497c;
            case 0x1D4980u: goto label_1d4980;
            case 0x1D4984u: goto label_1d4984;
            case 0x1D4988u: goto label_1d4988;
            case 0x1D498Cu: goto label_1d498c;
            case 0x1D4990u: goto label_1d4990;
            case 0x1D4994u: goto label_1d4994;
            case 0x1D4998u: goto label_1d4998;
            case 0x1D499Cu: goto label_1d499c;
            case 0x1D49A0u: goto label_1d49a0;
            case 0x1D49A4u: goto label_1d49a4;
            case 0x1D49A8u: goto label_1d49a8;
            case 0x1D49ACu: goto label_1d49ac;
            case 0x1D49B0u: goto label_1d49b0;
            case 0x1D49B4u: goto label_1d49b4;
            case 0x1D49B8u: goto label_1d49b8;
            case 0x1D49BCu: goto label_1d49bc;
            case 0x1D49C0u: goto label_1d49c0;
            case 0x1D49C4u: goto label_1d49c4;
            case 0x1D49C8u: goto label_1d49c8;
            case 0x1D49CCu: goto label_1d49cc;
            case 0x1D49D0u: goto label_1d49d0;
            case 0x1D49D4u: goto label_1d49d4;
            case 0x1D49D8u: goto label_1d49d8;
            case 0x1D49DCu: goto label_1d49dc;
            case 0x1D49E0u: goto label_1d49e0;
            case 0x1D49E4u: goto label_1d49e4;
            case 0x1D49E8u: goto label_1d49e8;
            case 0x1D49ECu: goto label_1d49ec;
            case 0x1D49F0u: goto label_1d49f0;
            case 0x1D49F4u: goto label_1d49f4;
            case 0x1D49F8u: goto label_1d49f8;
            case 0x1D49FCu: goto label_1d49fc;
            case 0x1D4A00u: goto label_1d4a00;
            case 0x1D4A04u: goto label_1d4a04;
            case 0x1D4A08u: goto label_1d4a08;
            case 0x1D4A0Cu: goto label_1d4a0c;
            case 0x1D4A10u: goto label_1d4a10;
            case 0x1D4A14u: goto label_1d4a14;
            case 0x1D4A18u: goto label_1d4a18;
            case 0x1D4A1Cu: goto label_1d4a1c;
            case 0x1D4A20u: goto label_1d4a20;
            case 0x1D4A24u: goto label_1d4a24;
            case 0x1D4A28u: goto label_1d4a28;
            case 0x1D4A2Cu: goto label_1d4a2c;
            case 0x1D4A30u: goto label_1d4a30;
            case 0x1D4A34u: goto label_1d4a34;
            case 0x1D4A38u: goto label_1d4a38;
            case 0x1D4A3Cu: goto label_1d4a3c;
            case 0x1D4A40u: goto label_1d4a40;
            case 0x1D4A44u: goto label_1d4a44;
            case 0x1D4A48u: goto label_1d4a48;
            case 0x1D4A4Cu: goto label_1d4a4c;
            case 0x1D4A50u: goto label_1d4a50;
            case 0x1D4A54u: goto label_1d4a54;
            case 0x1D4A58u: goto label_1d4a58;
            case 0x1D4A5Cu: goto label_1d4a5c;
            case 0x1D4A60u: goto label_1d4a60;
            case 0x1D4A64u: goto label_1d4a64;
            case 0x1D4A68u: goto label_1d4a68;
            case 0x1D4A6Cu: goto label_1d4a6c;
            case 0x1D4A70u: goto label_1d4a70;
            case 0x1D4A74u: goto label_1d4a74;
            case 0x1D4A78u: goto label_1d4a78;
            case 0x1D4A7Cu: goto label_1d4a7c;
            case 0x1D4A80u: goto label_1d4a80;
            case 0x1D4A84u: goto label_1d4a84;
            case 0x1D4A88u: goto label_1d4a88;
            case 0x1D4A8Cu: goto label_1d4a8c;
            case 0x1D4A90u: goto label_1d4a90;
            case 0x1D4A94u: goto label_1d4a94;
            case 0x1D4A98u: goto label_1d4a98;
            case 0x1D4A9Cu: goto label_1d4a9c;
            case 0x1D4AA0u: goto label_1d4aa0;
            case 0x1D4AA4u: goto label_1d4aa4;
            case 0x1D4AA8u: goto label_1d4aa8;
            case 0x1D4AACu: goto label_1d4aac;
            case 0x1D4AB0u: goto label_1d4ab0;
            case 0x1D4AB4u: goto label_1d4ab4;
            case 0x1D4AB8u: goto label_1d4ab8;
            case 0x1D4ABCu: goto label_1d4abc;
            case 0x1D4AC0u: goto label_1d4ac0;
            case 0x1D4AC4u: goto label_1d4ac4;
            case 0x1D4AC8u: goto label_1d4ac8;
            case 0x1D4ACCu: goto label_1d4acc;
            case 0x1D4AD0u: goto label_1d4ad0;
            case 0x1D4AD4u: goto label_1d4ad4;
            case 0x1D4AD8u: goto label_1d4ad8;
            case 0x1D4ADCu: goto label_1d4adc;
            case 0x1D4AE0u: goto label_1d4ae0;
            case 0x1D4AE4u: goto label_1d4ae4;
            case 0x1D4AE8u: goto label_1d4ae8;
            case 0x1D4AECu: goto label_1d4aec;
            case 0x1D4AF0u: goto label_1d4af0;
            case 0x1D4AF4u: goto label_1d4af4;
            case 0x1D4AF8u: goto label_1d4af8;
            case 0x1D4AFCu: goto label_1d4afc;
            case 0x1D4B00u: goto label_1d4b00;
            case 0x1D4B04u: goto label_1d4b04;
            case 0x1D4B08u: goto label_1d4b08;
            case 0x1D4B0Cu: goto label_1d4b0c;
            case 0x1D4B10u: goto label_1d4b10;
            case 0x1D4B14u: goto label_1d4b14;
            case 0x1D4B18u: goto label_1d4b18;
            case 0x1D4B1Cu: goto label_1d4b1c;
            case 0x1D4B20u: goto label_1d4b20;
            case 0x1D4B24u: goto label_1d4b24;
            case 0x1D4B28u: goto label_1d4b28;
            case 0x1D4B2Cu: goto label_1d4b2c;
            case 0x1D4B30u: goto label_1d4b30;
            case 0x1D4B34u: goto label_1d4b34;
            case 0x1D4B38u: goto label_1d4b38;
            case 0x1D4B3Cu: goto label_1d4b3c;
            case 0x1D4B40u: goto label_1d4b40;
            case 0x1D4B44u: goto label_1d4b44;
            case 0x1D4B48u: goto label_1d4b48;
            case 0x1D4B4Cu: goto label_1d4b4c;
            case 0x1D4B50u: goto label_1d4b50;
            case 0x1D4B54u: goto label_1d4b54;
            case 0x1D4B58u: goto label_1d4b58;
            case 0x1D4B5Cu: goto label_1d4b5c;
            case 0x1D4B60u: goto label_1d4b60;
            case 0x1D4B64u: goto label_1d4b64;
            case 0x1D4B68u: goto label_1d4b68;
            case 0x1D4B6Cu: goto label_1d4b6c;
            case 0x1D4B70u: goto label_1d4b70;
            case 0x1D4B74u: goto label_1d4b74;
            case 0x1D4B78u: goto label_1d4b78;
            case 0x1D4B7Cu: goto label_1d4b7c;
            case 0x1D4B80u: goto label_1d4b80;
            case 0x1D4B84u: goto label_1d4b84;
            case 0x1D4B88u: goto label_1d4b88;
            case 0x1D4B8Cu: goto label_1d4b8c;
            case 0x1D4B90u: goto label_1d4b90;
            case 0x1D4B94u: goto label_1d4b94;
            case 0x1D4B98u: goto label_1d4b98;
            case 0x1D4B9Cu: goto label_1d4b9c;
            case 0x1D4BA0u: goto label_1d4ba0;
            case 0x1D4BA4u: goto label_1d4ba4;
            case 0x1D4BA8u: goto label_1d4ba8;
            case 0x1D4BACu: goto label_1d4bac;
            case 0x1D4BB0u: goto label_1d4bb0;
            case 0x1D4BB4u: goto label_1d4bb4;
            case 0x1D4BB8u: goto label_1d4bb8;
            case 0x1D4BBCu: goto label_1d4bbc;
            case 0x1D4BC0u: goto label_1d4bc0;
            case 0x1D4BC4u: goto label_1d4bc4;
            case 0x1D4BC8u: goto label_1d4bc8;
            case 0x1D4BCCu: goto label_1d4bcc;
            case 0x1D4BD0u: goto label_1d4bd0;
            case 0x1D4BD4u: goto label_1d4bd4;
            case 0x1D4BD8u: goto label_1d4bd8;
            case 0x1D4BDCu: goto label_1d4bdc;
            case 0x1D4BE0u: goto label_1d4be0;
            case 0x1D4BE4u: goto label_1d4be4;
            case 0x1D4BE8u: goto label_1d4be8;
            case 0x1D4BECu: goto label_1d4bec;
            case 0x1D4BF0u: goto label_1d4bf0;
            case 0x1D4BF4u: goto label_1d4bf4;
            case 0x1D4BF8u: goto label_1d4bf8;
            case 0x1D4BFCu: goto label_1d4bfc;
            case 0x1D4C00u: goto label_1d4c00;
            case 0x1D4C04u: goto label_1d4c04;
            case 0x1D4C08u: goto label_1d4c08;
            case 0x1D4C0Cu: goto label_1d4c0c;
            case 0x1D4C10u: goto label_1d4c10;
            case 0x1D4C14u: goto label_1d4c14;
            case 0x1D4C18u: goto label_1d4c18;
            case 0x1D4C1Cu: goto label_1d4c1c;
            case 0x1D4C20u: goto label_1d4c20;
            case 0x1D4C24u: goto label_1d4c24;
            case 0x1D4C28u: goto label_1d4c28;
            case 0x1D4C2Cu: goto label_1d4c2c;
            case 0x1D4C30u: goto label_1d4c30;
            case 0x1D4C34u: goto label_1d4c34;
            case 0x1D4C38u: goto label_1d4c38;
            case 0x1D4C3Cu: goto label_1d4c3c;
            case 0x1D4C40u: goto label_1d4c40;
            case 0x1D4C44u: goto label_1d4c44;
            case 0x1D4C48u: goto label_1d4c48;
            case 0x1D4C4Cu: goto label_1d4c4c;
            case 0x1D4C50u: goto label_1d4c50;
            case 0x1D4C54u: goto label_1d4c54;
            case 0x1D4C58u: goto label_1d4c58;
            case 0x1D4C5Cu: goto label_1d4c5c;
            case 0x1D4C60u: goto label_1d4c60;
            case 0x1D4C64u: goto label_1d4c64;
            case 0x1D4C68u: goto label_1d4c68;
            case 0x1D4C6Cu: goto label_1d4c6c;
            case 0x1D4C70u: goto label_1d4c70;
            case 0x1D4C74u: goto label_1d4c74;
            case 0x1D4C78u: goto label_1d4c78;
            case 0x1D4C7Cu: goto label_1d4c7c;
            case 0x1D4C80u: goto label_1d4c80;
            case 0x1D4C84u: goto label_1d4c84;
            case 0x1D4C88u: goto label_1d4c88;
            case 0x1D4C8Cu: goto label_1d4c8c;
            case 0x1D4C90u: goto label_1d4c90;
            case 0x1D4C94u: goto label_1d4c94;
            case 0x1D4C98u: goto label_1d4c98;
            case 0x1D4C9Cu: goto label_1d4c9c;
            case 0x1D4CA0u: goto label_1d4ca0;
            case 0x1D4CA4u: goto label_1d4ca4;
            case 0x1D4CA8u: goto label_1d4ca8;
            case 0x1D4CACu: goto label_1d4cac;
            case 0x1D4CB0u: goto label_1d4cb0;
            case 0x1D4CB4u: goto label_1d4cb4;
            case 0x1D4CB8u: goto label_1d4cb8;
            case 0x1D4CBCu: goto label_1d4cbc;
            case 0x1D4CC0u: goto label_1d4cc0;
            case 0x1D4CC4u: goto label_1d4cc4;
            case 0x1D4CC8u: goto label_1d4cc8;
            case 0x1D4CCCu: goto label_1d4ccc;
            case 0x1D4CD0u: goto label_1d4cd0;
            case 0x1D4CD4u: goto label_1d4cd4;
            case 0x1D4CD8u: goto label_1d4cd8;
            case 0x1D4CDCu: goto label_1d4cdc;
            case 0x1D4CE0u: goto label_1d4ce0;
            case 0x1D4CE4u: goto label_1d4ce4;
            case 0x1D4CE8u: goto label_1d4ce8;
            case 0x1D4CECu: goto label_1d4cec;
            case 0x1D4CF0u: goto label_1d4cf0;
            case 0x1D4CF4u: goto label_1d4cf4;
            case 0x1D4CF8u: goto label_1d4cf8;
            case 0x1D4CFCu: goto label_1d4cfc;
            case 0x1D4D00u: goto label_1d4d00;
            case 0x1D4D04u: goto label_1d4d04;
            case 0x1D4D08u: goto label_1d4d08;
            case 0x1D4D0Cu: goto label_1d4d0c;
            case 0x1D4D10u: goto label_1d4d10;
            case 0x1D4D14u: goto label_1d4d14;
            case 0x1D4D18u: goto label_1d4d18;
            case 0x1D4D1Cu: goto label_1d4d1c;
            case 0x1D4D20u: goto label_1d4d20;
            case 0x1D4D24u: goto label_1d4d24;
            case 0x1D4D28u: goto label_1d4d28;
            case 0x1D4D2Cu: goto label_1d4d2c;
            case 0x1D4D30u: goto label_1d4d30;
            case 0x1D4D34u: goto label_1d4d34;
            case 0x1D4D38u: goto label_1d4d38;
            case 0x1D4D3Cu: goto label_1d4d3c;
            case 0x1D4D40u: goto label_1d4d40;
            case 0x1D4D44u: goto label_1d4d44;
            case 0x1D4D48u: goto label_1d4d48;
            case 0x1D4D4Cu: goto label_1d4d4c;
            case 0x1D4D50u: goto label_1d4d50;
            case 0x1D4D54u: goto label_1d4d54;
            case 0x1D4D58u: goto label_1d4d58;
            case 0x1D4D5Cu: goto label_1d4d5c;
            case 0x1D4D60u: goto label_1d4d60;
            case 0x1D4D64u: goto label_1d4d64;
            case 0x1D4D68u: goto label_1d4d68;
            case 0x1D4D6Cu: goto label_1d4d6c;
            case 0x1D4D70u: goto label_1d4d70;
            case 0x1D4D74u: goto label_1d4d74;
            case 0x1D4D78u: goto label_1d4d78;
            case 0x1D4D7Cu: goto label_1d4d7c;
            case 0x1D4D80u: goto label_1d4d80;
            case 0x1D4D84u: goto label_1d4d84;
            case 0x1D4D88u: goto label_1d4d88;
            case 0x1D4D8Cu: goto label_1d4d8c;
            case 0x1D4D90u: goto label_1d4d90;
            case 0x1D4D94u: goto label_1d4d94;
            case 0x1D4D98u: goto label_1d4d98;
            case 0x1D4D9Cu: goto label_1d4d9c;
            case 0x1D4DA0u: goto label_1d4da0;
            case 0x1D4DA4u: goto label_1d4da4;
            case 0x1D4DA8u: goto label_1d4da8;
            case 0x1D4DACu: goto label_1d4dac;
            case 0x1D4DB0u: goto label_1d4db0;
            case 0x1D4DB4u: goto label_1d4db4;
            case 0x1D4DB8u: goto label_1d4db8;
            case 0x1D4DBCu: goto label_1d4dbc;
            case 0x1D4DC0u: goto label_1d4dc0;
            case 0x1D4DC4u: goto label_1d4dc4;
            case 0x1D4DC8u: goto label_1d4dc8;
            case 0x1D4DCCu: goto label_1d4dcc;
            case 0x1D4DD0u: goto label_1d4dd0;
            case 0x1D4DD4u: goto label_1d4dd4;
            case 0x1D4DD8u: goto label_1d4dd8;
            case 0x1D4DDCu: goto label_1d4ddc;
            case 0x1D4DE0u: goto label_1d4de0;
            case 0x1D4DE4u: goto label_1d4de4;
            case 0x1D4DE8u: goto label_1d4de8;
            case 0x1D4DECu: goto label_1d4dec;
            case 0x1D4DF0u: goto label_1d4df0;
            case 0x1D4DF4u: goto label_1d4df4;
            case 0x1D4DF8u: goto label_1d4df8;
            case 0x1D4DFCu: goto label_1d4dfc;
            case 0x1D4E00u: goto label_1d4e00;
            case 0x1D4E04u: goto label_1d4e04;
            case 0x1D4E08u: goto label_1d4e08;
            case 0x1D4E0Cu: goto label_1d4e0c;
            case 0x1D4E10u: goto label_1d4e10;
            case 0x1D4E14u: goto label_1d4e14;
            case 0x1D4E18u: goto label_1d4e18;
            case 0x1D4E1Cu: goto label_1d4e1c;
            case 0x1D4E20u: goto label_1d4e20;
            case 0x1D4E24u: goto label_1d4e24;
            case 0x1D4E28u: goto label_1d4e28;
            case 0x1D4E2Cu: goto label_1d4e2c;
            case 0x1D4E30u: goto label_1d4e30;
            case 0x1D4E34u: goto label_1d4e34;
            case 0x1D4E38u: goto label_1d4e38;
            case 0x1D4E3Cu: goto label_1d4e3c;
            case 0x1D4E40u: goto label_1d4e40;
            case 0x1D4E44u: goto label_1d4e44;
            case 0x1D4E48u: goto label_1d4e48;
            case 0x1D4E4Cu: goto label_1d4e4c;
            case 0x1D4E50u: goto label_1d4e50;
            case 0x1D4E54u: goto label_1d4e54;
            case 0x1D4E58u: goto label_1d4e58;
            case 0x1D4E5Cu: goto label_1d4e5c;
            case 0x1D4E60u: goto label_1d4e60;
            case 0x1D4E64u: goto label_1d4e64;
            case 0x1D4E68u: goto label_1d4e68;
            case 0x1D4E6Cu: goto label_1d4e6c;
            case 0x1D4E70u: goto label_1d4e70;
            case 0x1D4E74u: goto label_1d4e74;
            case 0x1D4E78u: goto label_1d4e78;
            case 0x1D4E7Cu: goto label_1d4e7c;
            case 0x1D4E80u: goto label_1d4e80;
            case 0x1D4E84u: goto label_1d4e84;
            case 0x1D4E88u: goto label_1d4e88;
            case 0x1D4E8Cu: goto label_1d4e8c;
            case 0x1D4E90u: goto label_1d4e90;
            case 0x1D4E94u: goto label_1d4e94;
            case 0x1D4E98u: goto label_1d4e98;
            case 0x1D4E9Cu: goto label_1d4e9c;
            case 0x1D4EA0u: goto label_1d4ea0;
            case 0x1D4EA4u: goto label_1d4ea4;
            case 0x1D4EA8u: goto label_1d4ea8;
            case 0x1D4EACu: goto label_1d4eac;
            case 0x1D4EB0u: goto label_1d4eb0;
            case 0x1D4EB4u: goto label_1d4eb4;
            case 0x1D4EB8u: goto label_1d4eb8;
            case 0x1D4EBCu: goto label_1d4ebc;
            case 0x1D4EC0u: goto label_1d4ec0;
            case 0x1D4EC4u: goto label_1d4ec4;
            case 0x1D4EC8u: goto label_1d4ec8;
            case 0x1D4ECCu: goto label_1d4ecc;
            case 0x1D4ED0u: goto label_1d4ed0;
            case 0x1D4ED4u: goto label_1d4ed4;
            case 0x1D4ED8u: goto label_1d4ed8;
            case 0x1D4EDCu: goto label_1d4edc;
            case 0x1D4EE0u: goto label_1d4ee0;
            case 0x1D4EE4u: goto label_1d4ee4;
            case 0x1D4EE8u: goto label_1d4ee8;
            case 0x1D4EECu: goto label_1d4eec;
            case 0x1D4EF0u: goto label_1d4ef0;
            case 0x1D4EF4u: goto label_1d4ef4;
            case 0x1D4EF8u: goto label_1d4ef8;
            case 0x1D4EFCu: goto label_1d4efc;
            case 0x1D4F00u: goto label_1d4f00;
            case 0x1D4F04u: goto label_1d4f04;
            case 0x1D4F08u: goto label_1d4f08;
            case 0x1D4F0Cu: goto label_1d4f0c;
            case 0x1D4F10u: goto label_1d4f10;
            case 0x1D4F14u: goto label_1d4f14;
            case 0x1D4F18u: goto label_1d4f18;
            case 0x1D4F1Cu: goto label_1d4f1c;
            case 0x1D4F20u: goto label_1d4f20;
            case 0x1D4F24u: goto label_1d4f24;
            case 0x1D4F28u: goto label_1d4f28;
            case 0x1D4F2Cu: goto label_1d4f2c;
            case 0x1D4F30u: goto label_1d4f30;
            case 0x1D4F34u: goto label_1d4f34;
            case 0x1D4F38u: goto label_1d4f38;
            case 0x1D4F3Cu: goto label_1d4f3c;
            case 0x1D4F40u: goto label_1d4f40;
            case 0x1D4F44u: goto label_1d4f44;
            case 0x1D4F48u: goto label_1d4f48;
            case 0x1D4F4Cu: goto label_1d4f4c;
            case 0x1D4F50u: goto label_1d4f50;
            case 0x1D4F54u: goto label_1d4f54;
            case 0x1D4F58u: goto label_1d4f58;
            case 0x1D4F5Cu: goto label_1d4f5c;
            case 0x1D4F60u: goto label_1d4f60;
            case 0x1D4F64u: goto label_1d4f64;
            case 0x1D4F68u: goto label_1d4f68;
            case 0x1D4F6Cu: goto label_1d4f6c;
            case 0x1D4F70u: goto label_1d4f70;
            case 0x1D4F74u: goto label_1d4f74;
            case 0x1D4F78u: goto label_1d4f78;
            case 0x1D4F7Cu: goto label_1d4f7c;
            case 0x1D4F80u: goto label_1d4f80;
            case 0x1D4F84u: goto label_1d4f84;
            case 0x1D4F88u: goto label_1d4f88;
            case 0x1D4F8Cu: goto label_1d4f8c;
            case 0x1D4F90u: goto label_1d4f90;
            case 0x1D4F94u: goto label_1d4f94;
            case 0x1D4F98u: goto label_1d4f98;
            case 0x1D4F9Cu: goto label_1d4f9c;
            case 0x1D4FA0u: goto label_1d4fa0;
            case 0x1D4FA4u: goto label_1d4fa4;
            case 0x1D4FA8u: goto label_1d4fa8;
            case 0x1D4FACu: goto label_1d4fac;
            case 0x1D4FB0u: goto label_1d4fb0;
            case 0x1D4FB4u: goto label_1d4fb4;
            case 0x1D4FB8u: goto label_1d4fb8;
            case 0x1D4FBCu: goto label_1d4fbc;
            case 0x1D4FC0u: goto label_1d4fc0;
            case 0x1D4FC4u: goto label_1d4fc4;
            case 0x1D4FC8u: goto label_1d4fc8;
            case 0x1D4FCCu: goto label_1d4fcc;
            case 0x1D4FD0u: goto label_1d4fd0;
            case 0x1D4FD4u: goto label_1d4fd4;
            case 0x1D4FD8u: goto label_1d4fd8;
            case 0x1D4FDCu: goto label_1d4fdc;
            case 0x1D4FE0u: goto label_1d4fe0;
            case 0x1D4FE4u: goto label_1d4fe4;
            case 0x1D4FE8u: goto label_1d4fe8;
            case 0x1D4FECu: goto label_1d4fec;
            case 0x1D4FF0u: goto label_1d4ff0;
            case 0x1D4FF4u: goto label_1d4ff4;
            case 0x1D4FF8u: goto label_1d4ff8;
            case 0x1D4FFCu: goto label_1d4ffc;
            case 0x1D5000u: goto label_1d5000;
            case 0x1D5004u: goto label_1d5004;
            case 0x1D5008u: goto label_1d5008;
            case 0x1D500Cu: goto label_1d500c;
            case 0x1D5010u: goto label_1d5010;
            case 0x1D5014u: goto label_1d5014;
            case 0x1D5018u: goto label_1d5018;
            case 0x1D501Cu: goto label_1d501c;
            case 0x1D5020u: goto label_1d5020;
            case 0x1D5024u: goto label_1d5024;
            case 0x1D5028u: goto label_1d5028;
            case 0x1D502Cu: goto label_1d502c;
            case 0x1D5030u: goto label_1d5030;
            case 0x1D5034u: goto label_1d5034;
            case 0x1D5038u: goto label_1d5038;
            case 0x1D503Cu: goto label_1d503c;
            case 0x1D5040u: goto label_1d5040;
            case 0x1D5044u: goto label_1d5044;
            case 0x1D5048u: goto label_1d5048;
            case 0x1D504Cu: goto label_1d504c;
            case 0x1D5050u: goto label_1d5050;
            case 0x1D5054u: goto label_1d5054;
            case 0x1D5058u: goto label_1d5058;
            case 0x1D505Cu: goto label_1d505c;
            case 0x1D5060u: goto label_1d5060;
            case 0x1D5064u: goto label_1d5064;
            case 0x1D5068u: goto label_1d5068;
            case 0x1D506Cu: goto label_1d506c;
            case 0x1D5070u: goto label_1d5070;
            case 0x1D5074u: goto label_1d5074;
            case 0x1D5078u: goto label_1d5078;
            case 0x1D507Cu: goto label_1d507c;
            case 0x1D5080u: goto label_1d5080;
            case 0x1D5084u: goto label_1d5084;
            case 0x1D5088u: goto label_1d5088;
            case 0x1D508Cu: goto label_1d508c;
            case 0x1D5090u: goto label_1d5090;
            case 0x1D5094u: goto label_1d5094;
            case 0x1D5098u: goto label_1d5098;
            case 0x1D509Cu: goto label_1d509c;
            case 0x1D50A0u: goto label_1d50a0;
            case 0x1D50A4u: goto label_1d50a4;
            case 0x1D50A8u: goto label_1d50a8;
            case 0x1D50ACu: goto label_1d50ac;
            case 0x1D50B0u: goto label_1d50b0;
            case 0x1D50B4u: goto label_1d50b4;
            case 0x1D50B8u: goto label_1d50b8;
            case 0x1D50BCu: goto label_1d50bc;
            case 0x1D50C0u: goto label_1d50c0;
            case 0x1D50C4u: goto label_1d50c4;
            case 0x1D50C8u: goto label_1d50c8;
            case 0x1D50CCu: goto label_1d50cc;
            case 0x1D50D0u: goto label_1d50d0;
            case 0x1D50D4u: goto label_1d50d4;
            case 0x1D50D8u: goto label_1d50d8;
            case 0x1D50DCu: goto label_1d50dc;
            case 0x1D50E0u: goto label_1d50e0;
            case 0x1D50E4u: goto label_1d50e4;
            case 0x1D50E8u: goto label_1d50e8;
            case 0x1D50ECu: goto label_1d50ec;
            case 0x1D50F0u: goto label_1d50f0;
            case 0x1D50F4u: goto label_1d50f4;
            case 0x1D50F8u: goto label_1d50f8;
            case 0x1D50FCu: goto label_1d50fc;
            case 0x1D5100u: goto label_1d5100;
            case 0x1D5104u: goto label_1d5104;
            case 0x1D5108u: goto label_1d5108;
            case 0x1D510Cu: goto label_1d510c;
            case 0x1D5110u: goto label_1d5110;
            case 0x1D5114u: goto label_1d5114;
            case 0x1D5118u: goto label_1d5118;
            case 0x1D511Cu: goto label_1d511c;
            case 0x1D5120u: goto label_1d5120;
            case 0x1D5124u: goto label_1d5124;
            case 0x1D5128u: goto label_1d5128;
            case 0x1D512Cu: goto label_1d512c;
            case 0x1D5130u: goto label_1d5130;
            case 0x1D5134u: goto label_1d5134;
            case 0x1D5138u: goto label_1d5138;
            case 0x1D513Cu: goto label_1d513c;
            case 0x1D5140u: goto label_1d5140;
            case 0x1D5144u: goto label_1d5144;
            case 0x1D5148u: goto label_1d5148;
            case 0x1D514Cu: goto label_1d514c;
            case 0x1D5150u: goto label_1d5150;
            case 0x1D5154u: goto label_1d5154;
            case 0x1D5158u: goto label_1d5158;
            case 0x1D515Cu: goto label_1d515c;
            case 0x1D5160u: goto label_1d5160;
            case 0x1D5164u: goto label_1d5164;
            case 0x1D5168u: goto label_1d5168;
            case 0x1D516Cu: goto label_1d516c;
            case 0x1D5170u: goto label_1d5170;
            case 0x1D5174u: goto label_1d5174;
            case 0x1D5178u: goto label_1d5178;
            case 0x1D517Cu: goto label_1d517c;
            case 0x1D5180u: goto label_1d5180;
            case 0x1D5184u: goto label_1d5184;
            case 0x1D5188u: goto label_1d5188;
            case 0x1D518Cu: goto label_1d518c;
            case 0x1D5190u: goto label_1d5190;
            case 0x1D5194u: goto label_1d5194;
            case 0x1D5198u: goto label_1d5198;
            case 0x1D519Cu: goto label_1d519c;
            case 0x1D51A0u: goto label_1d51a0;
            case 0x1D51A4u: goto label_1d51a4;
            case 0x1D51A8u: goto label_1d51a8;
            case 0x1D51ACu: goto label_1d51ac;
            case 0x1D51B0u: goto label_1d51b0;
            case 0x1D51B4u: goto label_1d51b4;
            case 0x1D51B8u: goto label_1d51b8;
            case 0x1D51BCu: goto label_1d51bc;
            case 0x1D51C0u: goto label_1d51c0;
            case 0x1D51C4u: goto label_1d51c4;
            case 0x1D51C8u: goto label_1d51c8;
            case 0x1D51CCu: goto label_1d51cc;
            case 0x1D51D0u: goto label_1d51d0;
            case 0x1D51D4u: goto label_1d51d4;
            case 0x1D51D8u: goto label_1d51d8;
            case 0x1D51DCu: goto label_1d51dc;
            case 0x1D51E0u: goto label_1d51e0;
            case 0x1D51E4u: goto label_1d51e4;
            case 0x1D51E8u: goto label_1d51e8;
            case 0x1D51ECu: goto label_1d51ec;
            case 0x1D51F0u: goto label_1d51f0;
            case 0x1D51F4u: goto label_1d51f4;
            case 0x1D51F8u: goto label_1d51f8;
            case 0x1D51FCu: goto label_1d51fc;
            case 0x1D5200u: goto label_1d5200;
            case 0x1D5204u: goto label_1d5204;
            case 0x1D5208u: goto label_1d5208;
            case 0x1D520Cu: goto label_1d520c;
            case 0x1D5210u: goto label_1d5210;
            case 0x1D5214u: goto label_1d5214;
            case 0x1D5218u: goto label_1d5218;
            case 0x1D521Cu: goto label_1d521c;
            case 0x1D5220u: goto label_1d5220;
            case 0x1D5224u: goto label_1d5224;
            case 0x1D5228u: goto label_1d5228;
            case 0x1D522Cu: goto label_1d522c;
            case 0x1D5230u: goto label_1d5230;
            case 0x1D5234u: goto label_1d5234;
            case 0x1D5238u: goto label_1d5238;
            case 0x1D523Cu: goto label_1d523c;
            case 0x1D5240u: goto label_1d5240;
            case 0x1D5244u: goto label_1d5244;
            case 0x1D5248u: goto label_1d5248;
            case 0x1D524Cu: goto label_1d524c;
            case 0x1D5250u: goto label_1d5250;
            case 0x1D5254u: goto label_1d5254;
            case 0x1D5258u: goto label_1d5258;
            case 0x1D525Cu: goto label_1d525c;
            case 0x1D5260u: goto label_1d5260;
            case 0x1D5264u: goto label_1d5264;
            case 0x1D5268u: goto label_1d5268;
            case 0x1D526Cu: goto label_1d526c;
            case 0x1D5270u: goto label_1d5270;
            case 0x1D5274u: goto label_1d5274;
            case 0x1D5278u: goto label_1d5278;
            case 0x1D527Cu: goto label_1d527c;
            case 0x1D5280u: goto label_1d5280;
            case 0x1D5284u: goto label_1d5284;
            case 0x1D5288u: goto label_1d5288;
            case 0x1D528Cu: goto label_1d528c;
            case 0x1D5290u: goto label_1d5290;
            case 0x1D5294u: goto label_1d5294;
            case 0x1D5298u: goto label_1d5298;
            case 0x1D529Cu: goto label_1d529c;
            case 0x1D52A0u: goto label_1d52a0;
            case 0x1D52A4u: goto label_1d52a4;
            case 0x1D52A8u: goto label_1d52a8;
            case 0x1D52ACu: goto label_1d52ac;
            case 0x1D52B0u: goto label_1d52b0;
            case 0x1D52B4u: goto label_1d52b4;
            case 0x1D52B8u: goto label_1d52b8;
            case 0x1D52BCu: goto label_1d52bc;
            case 0x1D52C0u: goto label_1d52c0;
            case 0x1D52C4u: goto label_1d52c4;
            case 0x1D52C8u: goto label_1d52c8;
            case 0x1D52CCu: goto label_1d52cc;
            case 0x1D52D0u: goto label_1d52d0;
            case 0x1D52D4u: goto label_1d52d4;
            case 0x1D52D8u: goto label_1d52d8;
            case 0x1D52DCu: goto label_1d52dc;
            case 0x1D52E0u: goto label_1d52e0;
            case 0x1D52E4u: goto label_1d52e4;
            case 0x1D52E8u: goto label_1d52e8;
            case 0x1D52ECu: goto label_1d52ec;
            case 0x1D52F0u: goto label_1d52f0;
            case 0x1D52F4u: goto label_1d52f4;
            case 0x1D52F8u: goto label_1d52f8;
            case 0x1D52FCu: goto label_1d52fc;
            case 0x1D5300u: goto label_1d5300;
            case 0x1D5304u: goto label_1d5304;
            case 0x1D5308u: goto label_1d5308;
            case 0x1D530Cu: goto label_1d530c;
            case 0x1D5310u: goto label_1d5310;
            case 0x1D5314u: goto label_1d5314;
            case 0x1D5318u: goto label_1d5318;
            case 0x1D531Cu: goto label_1d531c;
            case 0x1D5320u: goto label_1d5320;
            case 0x1D5324u: goto label_1d5324;
            case 0x1D5328u: goto label_1d5328;
            case 0x1D532Cu: goto label_1d532c;
            case 0x1D5330u: goto label_1d5330;
            case 0x1D5334u: goto label_1d5334;
            case 0x1D5338u: goto label_1d5338;
            case 0x1D533Cu: goto label_1d533c;
            case 0x1D5340u: goto label_1d5340;
            case 0x1D5344u: goto label_1d5344;
            case 0x1D5348u: goto label_1d5348;
            case 0x1D534Cu: goto label_1d534c;
            case 0x1D5350u: goto label_1d5350;
            case 0x1D5354u: goto label_1d5354;
            case 0x1D5358u: goto label_1d5358;
            case 0x1D535Cu: goto label_1d535c;
            case 0x1D5360u: goto label_1d5360;
            case 0x1D5364u: goto label_1d5364;
            case 0x1D5368u: goto label_1d5368;
            case 0x1D536Cu: goto label_1d536c;
            case 0x1D5370u: goto label_1d5370;
            case 0x1D5374u: goto label_1d5374;
            case 0x1D5378u: goto label_1d5378;
            case 0x1D537Cu: goto label_1d537c;
            case 0x1D5380u: goto label_1d5380;
            case 0x1D5384u: goto label_1d5384;
            case 0x1D5388u: goto label_1d5388;
            case 0x1D538Cu: goto label_1d538c;
            case 0x1D5390u: goto label_1d5390;
            case 0x1D5394u: goto label_1d5394;
            case 0x1D5398u: goto label_1d5398;
            case 0x1D539Cu: goto label_1d539c;
            case 0x1D53A0u: goto label_1d53a0;
            case 0x1D53A4u: goto label_1d53a4;
            case 0x1D53A8u: goto label_1d53a8;
            case 0x1D53ACu: goto label_1d53ac;
            case 0x1D53B0u: goto label_1d53b0;
            case 0x1D53B4u: goto label_1d53b4;
            case 0x1D53B8u: goto label_1d53b8;
            case 0x1D53BCu: goto label_1d53bc;
            case 0x1D53C0u: goto label_1d53c0;
            case 0x1D53C4u: goto label_1d53c4;
            case 0x1D53C8u: goto label_1d53c8;
            case 0x1D53CCu: goto label_1d53cc;
            case 0x1D53D0u: goto label_1d53d0;
            case 0x1D53D4u: goto label_1d53d4;
            case 0x1D53D8u: goto label_1d53d8;
            case 0x1D53DCu: goto label_1d53dc;
            case 0x1D53E0u: goto label_1d53e0;
            case 0x1D53E4u: goto label_1d53e4;
            case 0x1D53E8u: goto label_1d53e8;
            case 0x1D53ECu: goto label_1d53ec;
            case 0x1D53F0u: goto label_1d53f0;
            case 0x1D53F4u: goto label_1d53f4;
            case 0x1D53F8u: goto label_1d53f8;
            case 0x1D53FCu: goto label_1d53fc;
            case 0x1D5400u: goto label_1d5400;
            case 0x1D5404u: goto label_1d5404;
            case 0x1D5408u: goto label_1d5408;
            case 0x1D540Cu: goto label_1d540c;
            case 0x1D5410u: goto label_1d5410;
            case 0x1D5414u: goto label_1d5414;
            case 0x1D5418u: goto label_1d5418;
            case 0x1D541Cu: goto label_1d541c;
            case 0x1D5420u: goto label_1d5420;
            case 0x1D5424u: goto label_1d5424;
            case 0x1D5428u: goto label_1d5428;
            case 0x1D542Cu: goto label_1d542c;
            case 0x1D5430u: goto label_1d5430;
            case 0x1D5434u: goto label_1d5434;
            case 0x1D5438u: goto label_1d5438;
            case 0x1D543Cu: goto label_1d543c;
            case 0x1D5440u: goto label_1d5440;
            case 0x1D5444u: goto label_1d5444;
            case 0x1D5448u: goto label_1d5448;
            case 0x1D544Cu: goto label_1d544c;
            case 0x1D5450u: goto label_1d5450;
            case 0x1D5454u: goto label_1d5454;
            case 0x1D5458u: goto label_1d5458;
            case 0x1D545Cu: goto label_1d545c;
            case 0x1D5460u: goto label_1d5460;
            case 0x1D5464u: goto label_1d5464;
            case 0x1D5468u: goto label_1d5468;
            case 0x1D546Cu: goto label_1d546c;
            case 0x1D5470u: goto label_1d5470;
            case 0x1D5474u: goto label_1d5474;
            case 0x1D5478u: goto label_1d5478;
            case 0x1D547Cu: goto label_1d547c;
            case 0x1D5480u: goto label_1d5480;
            case 0x1D5484u: goto label_1d5484;
            case 0x1D5488u: goto label_1d5488;
            case 0x1D548Cu: goto label_1d548c;
            case 0x1D5490u: goto label_1d5490;
            case 0x1D5494u: goto label_1d5494;
            case 0x1D5498u: goto label_1d5498;
            case 0x1D549Cu: goto label_1d549c;
            case 0x1D54A0u: goto label_1d54a0;
            case 0x1D54A4u: goto label_1d54a4;
            case 0x1D54A8u: goto label_1d54a8;
            case 0x1D54ACu: goto label_1d54ac;
            case 0x1D54B0u: goto label_1d54b0;
            case 0x1D54B4u: goto label_1d54b4;
            case 0x1D54B8u: goto label_1d54b8;
            case 0x1D54BCu: goto label_1d54bc;
            case 0x1D54C0u: goto label_1d54c0;
            case 0x1D54C4u: goto label_1d54c4;
            case 0x1D54C8u: goto label_1d54c8;
            case 0x1D54CCu: goto label_1d54cc;
            case 0x1D54D0u: goto label_1d54d0;
            case 0x1D54D4u: goto label_1d54d4;
            case 0x1D54D8u: goto label_1d54d8;
            case 0x1D54DCu: goto label_1d54dc;
            case 0x1D54E0u: goto label_1d54e0;
            case 0x1D54E4u: goto label_1d54e4;
            case 0x1D54E8u: goto label_1d54e8;
            case 0x1D54ECu: goto label_1d54ec;
            case 0x1D54F0u: goto label_1d54f0;
            case 0x1D54F4u: goto label_1d54f4;
            case 0x1D54F8u: goto label_1d54f8;
            case 0x1D54FCu: goto label_1d54fc;
            case 0x1D5500u: goto label_1d5500;
            case 0x1D5504u: goto label_1d5504;
            case 0x1D5508u: goto label_1d5508;
            case 0x1D550Cu: goto label_1d550c;
            case 0x1D5510u: goto label_1d5510;
            case 0x1D5514u: goto label_1d5514;
            case 0x1D5518u: goto label_1d5518;
            case 0x1D551Cu: goto label_1d551c;
            case 0x1D5520u: goto label_1d5520;
            case 0x1D5524u: goto label_1d5524;
            case 0x1D5528u: goto label_1d5528;
            case 0x1D552Cu: goto label_1d552c;
            case 0x1D5530u: goto label_1d5530;
            case 0x1D5534u: goto label_1d5534;
            case 0x1D5538u: goto label_1d5538;
            case 0x1D553Cu: goto label_1d553c;
            case 0x1D5540u: goto label_1d5540;
            case 0x1D5544u: goto label_1d5544;
            case 0x1D5548u: goto label_1d5548;
            case 0x1D554Cu: goto label_1d554c;
            case 0x1D5550u: goto label_1d5550;
            case 0x1D5554u: goto label_1d5554;
            case 0x1D5558u: goto label_1d5558;
            case 0x1D555Cu: goto label_1d555c;
            case 0x1D5560u: goto label_1d5560;
            case 0x1D5564u: goto label_1d5564;
            case 0x1D5568u: goto label_1d5568;
            case 0x1D556Cu: goto label_1d556c;
            case 0x1D5570u: goto label_1d5570;
            case 0x1D5574u: goto label_1d5574;
            case 0x1D5578u: goto label_1d5578;
            case 0x1D557Cu: goto label_1d557c;
            case 0x1D5580u: goto label_1d5580;
            case 0x1D5584u: goto label_1d5584;
            case 0x1D5588u: goto label_1d5588;
            case 0x1D558Cu: goto label_1d558c;
            case 0x1D5590u: goto label_1d5590;
            case 0x1D5594u: goto label_1d5594;
            case 0x1D5598u: goto label_1d5598;
            case 0x1D559Cu: goto label_1d559c;
            case 0x1D55A0u: goto label_1d55a0;
            case 0x1D55A4u: goto label_1d55a4;
            case 0x1D55A8u: goto label_1d55a8;
            case 0x1D55ACu: goto label_1d55ac;
            case 0x1D55B0u: goto label_1d55b0;
            case 0x1D55B4u: goto label_1d55b4;
            case 0x1D55B8u: goto label_1d55b8;
            case 0x1D55BCu: goto label_1d55bc;
            case 0x1D55C0u: goto label_1d55c0;
            case 0x1D55C4u: goto label_1d55c4;
            case 0x1D55C8u: goto label_1d55c8;
            case 0x1D55CCu: goto label_1d55cc;
            case 0x1D55D0u: goto label_1d55d0;
            case 0x1D55D4u: goto label_1d55d4;
            case 0x1D55D8u: goto label_1d55d8;
            case 0x1D55DCu: goto label_1d55dc;
            case 0x1D55E0u: goto label_1d55e0;
            case 0x1D55E4u: goto label_1d55e4;
            case 0x1D55E8u: goto label_1d55e8;
            case 0x1D55ECu: goto label_1d55ec;
            case 0x1D55F0u: goto label_1d55f0;
            case 0x1D55F4u: goto label_1d55f4;
            case 0x1D55F8u: goto label_1d55f8;
            case 0x1D55FCu: goto label_1d55fc;
            case 0x1D5600u: goto label_1d5600;
            case 0x1D5604u: goto label_1d5604;
            case 0x1D5608u: goto label_1d5608;
            case 0x1D560Cu: goto label_1d560c;
            case 0x1D5610u: goto label_1d5610;
            case 0x1D5614u: goto label_1d5614;
            case 0x1D5618u: goto label_1d5618;
            case 0x1D561Cu: goto label_1d561c;
            case 0x1D5620u: goto label_1d5620;
            case 0x1D5624u: goto label_1d5624;
            case 0x1D5628u: goto label_1d5628;
            case 0x1D562Cu: goto label_1d562c;
            case 0x1D5630u: goto label_1d5630;
            case 0x1D5634u: goto label_1d5634;
            case 0x1D5638u: goto label_1d5638;
            case 0x1D563Cu: goto label_1d563c;
            case 0x1D5640u: goto label_1d5640;
            case 0x1D5644u: goto label_1d5644;
            case 0x1D5648u: goto label_1d5648;
            case 0x1D564Cu: goto label_1d564c;
            case 0x1D5650u: goto label_1d5650;
            case 0x1D5654u: goto label_1d5654;
            case 0x1D5658u: goto label_1d5658;
            case 0x1D565Cu: goto label_1d565c;
            case 0x1D5660u: goto label_1d5660;
            case 0x1D5664u: goto label_1d5664;
            case 0x1D5668u: goto label_1d5668;
            case 0x1D566Cu: goto label_1d566c;
            case 0x1D5670u: goto label_1d5670;
            case 0x1D5674u: goto label_1d5674;
            case 0x1D5678u: goto label_1d5678;
            case 0x1D567Cu: goto label_1d567c;
            case 0x1D5680u: goto label_1d5680;
            case 0x1D5684u: goto label_1d5684;
            case 0x1D5688u: goto label_1d5688;
            case 0x1D568Cu: goto label_1d568c;
            case 0x1D5690u: goto label_1d5690;
            case 0x1D5694u: goto label_1d5694;
            case 0x1D5698u: goto label_1d5698;
            case 0x1D569Cu: goto label_1d569c;
            case 0x1D56A0u: goto label_1d56a0;
            case 0x1D56A4u: goto label_1d56a4;
            case 0x1D56A8u: goto label_1d56a8;
            case 0x1D56ACu: goto label_1d56ac;
            case 0x1D56B0u: goto label_1d56b0;
            case 0x1D56B4u: goto label_1d56b4;
            case 0x1D56B8u: goto label_1d56b8;
            case 0x1D56BCu: goto label_1d56bc;
            case 0x1D56C0u: goto label_1d56c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d56bc:
    ctx->pc = 0x1D56C4u;
}
